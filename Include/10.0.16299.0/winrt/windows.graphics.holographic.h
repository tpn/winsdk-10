/* Header file automatically generated from windows.graphics.holographic.idl */
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
#ifndef __windows2Egraphics2Eholographic_h__
#define __windows2Egraphics2Eholographic_h__
#ifndef __windows2Egraphics2Eholographic_p_h__
#define __windows2Egraphics2Eholographic_p_h__


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
#include "Windows.Graphics.DirectX.h"
#include "Windows.Graphics.DirectX.Direct3D11.h"
#include "Windows.Perception.h"
#include "Windows.Perception.Spatial.h"
#include "Windows.UI.Core.h"
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Holographic {
                interface IHolographicCamera;
            } /* Windows */
        } /* Graphics */
    } /* Holographic */} /* ABI */
#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera ABI::Windows::Graphics::Holographic::IHolographicCamera

#endif // ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera2_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Holographic {
                interface IHolographicCamera2;
            } /* Windows */
        } /* Graphics */
    } /* Holographic */} /* ABI */
#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera2 ABI::Windows::Graphics::Holographic::IHolographicCamera2

#endif // ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera3_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera3_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Holographic {
                interface IHolographicCamera3;
            } /* Windows */
        } /* Graphics */
    } /* Holographic */} /* ABI */
#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera3 ABI::Windows::Graphics::Holographic::IHolographicCamera3

#endif // ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraPose_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraPose_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Holographic {
                interface IHolographicCameraPose;
            } /* Windows */
        } /* Graphics */
    } /* Holographic */} /* ABI */
#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraPose ABI::Windows::Graphics::Holographic::IHolographicCameraPose

#endif // ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraPose_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Holographic {
                interface IHolographicCameraRenderingParameters;
            } /* Windows */
        } /* Graphics */
    } /* Holographic */} /* ABI */
#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters ABI::Windows::Graphics::Holographic::IHolographicCameraRenderingParameters

#endif // ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters2_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Holographic {
                interface IHolographicCameraRenderingParameters2;
            } /* Windows */
        } /* Graphics */
    } /* Holographic */} /* ABI */
#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters2 ABI::Windows::Graphics::Holographic::IHolographicCameraRenderingParameters2

#endif // ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters3_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters3_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Holographic {
                interface IHolographicCameraRenderingParameters3;
            } /* Windows */
        } /* Graphics */
    } /* Holographic */} /* ABI */
#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters3 ABI::Windows::Graphics::Holographic::IHolographicCameraRenderingParameters3

#endif // ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraViewportParameters_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraViewportParameters_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Holographic {
                interface IHolographicCameraViewportParameters;
            } /* Windows */
        } /* Graphics */
    } /* Holographic */} /* ABI */
#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraViewportParameters ABI::Windows::Graphics::Holographic::IHolographicCameraViewportParameters

#endif // ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraViewportParameters_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplay_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplay_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Holographic {
                interface IHolographicDisplay;
            } /* Windows */
        } /* Graphics */
    } /* Holographic */} /* ABI */
#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplay ABI::Windows::Graphics::Holographic::IHolographicDisplay

#endif // ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplay_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplay2_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplay2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Holographic {
                interface IHolographicDisplay2;
            } /* Windows */
        } /* Graphics */
    } /* Holographic */} /* ABI */
#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplay2 ABI::Windows::Graphics::Holographic::IHolographicDisplay2

#endif // ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplay2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplayStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplayStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Holographic {
                interface IHolographicDisplayStatics;
            } /* Windows */
        } /* Graphics */
    } /* Holographic */} /* ABI */
#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplayStatics ABI::Windows::Graphics::Holographic::IHolographicDisplayStatics

#endif // ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplayStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFrame_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFrame_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Holographic {
                interface IHolographicFrame;
            } /* Windows */
        } /* Graphics */
    } /* Holographic */} /* ABI */
#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFrame ABI::Windows::Graphics::Holographic::IHolographicFrame

#endif // ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFrame_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFrame2_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFrame2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Holographic {
                interface IHolographicFrame2;
            } /* Windows */
        } /* Graphics */
    } /* Holographic */} /* ABI */
#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFrame2 ABI::Windows::Graphics::Holographic::IHolographicFrame2

#endif // ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFrame2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFramePrediction_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFramePrediction_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Holographic {
                interface IHolographicFramePrediction;
            } /* Windows */
        } /* Graphics */
    } /* Holographic */} /* ABI */
#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFramePrediction ABI::Windows::Graphics::Holographic::IHolographicFramePrediction

#endif // ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFramePrediction_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayer_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayer_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Holographic {
                interface IHolographicQuadLayer;
            } /* Windows */
        } /* Graphics */
    } /* Holographic */} /* ABI */
#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayer ABI::Windows::Graphics::Holographic::IHolographicQuadLayer

#endif // ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayer_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayerFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayerFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Holographic {
                interface IHolographicQuadLayerFactory;
            } /* Windows */
        } /* Graphics */
    } /* Holographic */} /* ABI */
#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayerFactory ABI::Windows::Graphics::Holographic::IHolographicQuadLayerFactory

#endif // ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayerFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayerUpdateParameters_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayerUpdateParameters_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Holographic {
                interface IHolographicQuadLayerUpdateParameters;
            } /* Windows */
        } /* Graphics */
    } /* Holographic */} /* ABI */
#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayerUpdateParameters ABI::Windows::Graphics::Holographic::IHolographicQuadLayerUpdateParameters

#endif // ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayerUpdateParameters_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpace_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpace_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Holographic {
                interface IHolographicSpace;
            } /* Windows */
        } /* Graphics */
    } /* Holographic */} /* ABI */
#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpace ABI::Windows::Graphics::Holographic::IHolographicSpace

#endif // ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpace_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceCameraAddedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceCameraAddedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Holographic {
                interface IHolographicSpaceCameraAddedEventArgs;
            } /* Windows */
        } /* Graphics */
    } /* Holographic */} /* ABI */
#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceCameraAddedEventArgs ABI::Windows::Graphics::Holographic::IHolographicSpaceCameraAddedEventArgs

#endif // ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceCameraAddedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceCameraRemovedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceCameraRemovedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Holographic {
                interface IHolographicSpaceCameraRemovedEventArgs;
            } /* Windows */
        } /* Graphics */
    } /* Holographic */} /* ABI */
#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceCameraRemovedEventArgs ABI::Windows::Graphics::Holographic::IHolographicSpaceCameraRemovedEventArgs

#endif // ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceCameraRemovedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Holographic {
                interface IHolographicSpaceStatics;
            } /* Windows */
        } /* Graphics */
    } /* Holographic */} /* ABI */
#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceStatics ABI::Windows::Graphics::Holographic::IHolographicSpaceStatics

#endif // ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceStatics2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Holographic {
                interface IHolographicSpaceStatics2;
            } /* Windows */
        } /* Graphics */
    } /* Holographic */} /* ABI */
#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceStatics2 ABI::Windows::Graphics::Holographic::IHolographicSpaceStatics2

#endif // ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceStatics2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceStatics3_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceStatics3_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Holographic {
                interface IHolographicSpaceStatics3;
            } /* Windows */
        } /* Graphics */
    } /* Holographic */} /* ABI */
#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceStatics3 ABI::Windows::Graphics::Holographic::IHolographicSpaceStatics3

#endif // ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceStatics3_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Holographic {
                class HolographicCamera;
            } /* Windows */
        } /* Graphics */
    } /* Holographic */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef DEF___FIIterator_1_Windows__CGraphics__CHolographic__CHolographicCamera_USE
#define DEF___FIIterator_1_Windows__CGraphics__CHolographic__CHolographicCamera_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("6acc8576-2fea-561d-84dd-4a1ab05fc7ed"))
IIterator<ABI::Windows::Graphics::Holographic::HolographicCamera*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Graphics::Holographic::HolographicCamera*, ABI::Windows::Graphics::Holographic::IHolographicCamera*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Graphics.Holographic.HolographicCamera>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Graphics::Holographic::HolographicCamera*> __FIIterator_1_Windows__CGraphics__CHolographic__CHolographicCamera_t;
#define __FIIterator_1_Windows__CGraphics__CHolographic__CHolographicCamera ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CGraphics__CHolographic__CHolographicCamera_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CGraphics__CHolographic__CHolographicCamera ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Graphics::Holographic::IHolographicCamera*>
//#define __FIIterator_1_Windows__CGraphics__CHolographic__CHolographicCamera_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Graphics::Holographic::IHolographicCamera*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CGraphics__CHolographic__CHolographicCamera_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef DEF___FIIterable_1_Windows__CGraphics__CHolographic__CHolographicCamera_USE
#define DEF___FIIterable_1_Windows__CGraphics__CHolographic__CHolographicCamera_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("b2afd154-8db0-5bb2-ad7a-684afd479264"))
IIterable<ABI::Windows::Graphics::Holographic::HolographicCamera*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Graphics::Holographic::HolographicCamera*, ABI::Windows::Graphics::Holographic::IHolographicCamera*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Graphics.Holographic.HolographicCamera>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Graphics::Holographic::HolographicCamera*> __FIIterable_1_Windows__CGraphics__CHolographic__CHolographicCamera_t;
#define __FIIterable_1_Windows__CGraphics__CHolographic__CHolographicCamera ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CGraphics__CHolographic__CHolographicCamera_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CGraphics__CHolographic__CHolographicCamera ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Graphics::Holographic::IHolographicCamera*>
//#define __FIIterable_1_Windows__CGraphics__CHolographic__CHolographicCamera_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Graphics::Holographic::IHolographicCamera*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CGraphics__CHolographic__CHolographicCamera_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Holographic {
                class HolographicCameraPose;
            } /* Windows */
        } /* Graphics */
    } /* Holographic */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef DEF___FIIterator_1_Windows__CGraphics__CHolographic__CHolographicCameraPose_USE
#define DEF___FIIterator_1_Windows__CGraphics__CHolographic__CHolographicCameraPose_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("93e27fb4-332b-591e-ae6b-6192fa0a1009"))
IIterator<ABI::Windows::Graphics::Holographic::HolographicCameraPose*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Graphics::Holographic::HolographicCameraPose*, ABI::Windows::Graphics::Holographic::IHolographicCameraPose*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Graphics.Holographic.HolographicCameraPose>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Graphics::Holographic::HolographicCameraPose*> __FIIterator_1_Windows__CGraphics__CHolographic__CHolographicCameraPose_t;
#define __FIIterator_1_Windows__CGraphics__CHolographic__CHolographicCameraPose ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CGraphics__CHolographic__CHolographicCameraPose_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CGraphics__CHolographic__CHolographicCameraPose ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Graphics::Holographic::IHolographicCameraPose*>
//#define __FIIterator_1_Windows__CGraphics__CHolographic__CHolographicCameraPose_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Graphics::Holographic::IHolographicCameraPose*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CGraphics__CHolographic__CHolographicCameraPose_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef DEF___FIIterable_1_Windows__CGraphics__CHolographic__CHolographicCameraPose_USE
#define DEF___FIIterable_1_Windows__CGraphics__CHolographic__CHolographicCameraPose_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("92111aff-8dcc-538e-ae3d-31fd252a0ad5"))
IIterable<ABI::Windows::Graphics::Holographic::HolographicCameraPose*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Graphics::Holographic::HolographicCameraPose*, ABI::Windows::Graphics::Holographic::IHolographicCameraPose*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Graphics.Holographic.HolographicCameraPose>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Graphics::Holographic::HolographicCameraPose*> __FIIterable_1_Windows__CGraphics__CHolographic__CHolographicCameraPose_t;
#define __FIIterable_1_Windows__CGraphics__CHolographic__CHolographicCameraPose ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CGraphics__CHolographic__CHolographicCameraPose_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CGraphics__CHolographic__CHolographicCameraPose ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Graphics::Holographic::IHolographicCameraPose*>
//#define __FIIterable_1_Windows__CGraphics__CHolographic__CHolographicCameraPose_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Graphics::Holographic::IHolographicCameraPose*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CGraphics__CHolographic__CHolographicCameraPose_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Holographic {
                class HolographicQuadLayer;
            } /* Windows */
        } /* Graphics */
    } /* Holographic */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

#ifndef DEF___FIIterator_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer_USE
#define DEF___FIIterator_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("85765170-495b-541c-aef0-7492856de3df"))
IIterator<ABI::Windows::Graphics::Holographic::HolographicQuadLayer*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Graphics::Holographic::HolographicQuadLayer*, ABI::Windows::Graphics::Holographic::IHolographicQuadLayer*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Graphics.Holographic.HolographicQuadLayer>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Graphics::Holographic::HolographicQuadLayer*> __FIIterator_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer_t;
#define __FIIterator_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Graphics::Holographic::IHolographicQuadLayer*>
//#define __FIIterator_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Graphics::Holographic::IHolographicQuadLayer*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

#ifndef DEF___FIIterable_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer_USE
#define DEF___FIIterable_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("84744661-94de-5866-a15d-9efb19a99a54"))
IIterable<ABI::Windows::Graphics::Holographic::HolographicQuadLayer*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Graphics::Holographic::HolographicQuadLayer*, ABI::Windows::Graphics::Holographic::IHolographicQuadLayer*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Graphics.Holographic.HolographicQuadLayer>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Graphics::Holographic::HolographicQuadLayer*> __FIIterable_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer_t;
#define __FIIterable_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Graphics::Holographic::IHolographicQuadLayer*>
//#define __FIIterable_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Graphics::Holographic::IHolographicQuadLayer*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef DEF___FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicCamera_USE
#define DEF___FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicCamera_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("01d6c0ae-ada5-50b0-8562-41fb1205bb4a"))
IVectorView<ABI::Windows::Graphics::Holographic::HolographicCamera*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Graphics::Holographic::HolographicCamera*, ABI::Windows::Graphics::Holographic::IHolographicCamera*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Graphics.Holographic.HolographicCamera>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Graphics::Holographic::HolographicCamera*> __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicCamera_t;
#define __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicCamera ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicCamera_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicCamera ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Graphics::Holographic::IHolographicCamera*>
//#define __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicCamera_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Graphics::Holographic::IHolographicCamera*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicCamera_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef DEF___FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicCameraPose_USE
#define DEF___FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicCameraPose_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("17c5dfb1-6e87-5a17-a791-ac07f8ee9292"))
IVectorView<ABI::Windows::Graphics::Holographic::HolographicCameraPose*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Graphics::Holographic::HolographicCameraPose*, ABI::Windows::Graphics::Holographic::IHolographicCameraPose*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Graphics.Holographic.HolographicCameraPose>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Graphics::Holographic::HolographicCameraPose*> __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicCameraPose_t;
#define __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicCameraPose ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicCameraPose_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicCameraPose ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Graphics::Holographic::IHolographicCameraPose*>
//#define __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicCameraPose_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Graphics::Holographic::IHolographicCameraPose*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicCameraPose_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

#ifndef DEF___FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer_USE
#define DEF___FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("1f51ecdf-cf2d-5b7e-aae9-d6628a518dbe"))
IVectorView<ABI::Windows::Graphics::Holographic::HolographicQuadLayer*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Graphics::Holographic::HolographicQuadLayer*, ABI::Windows::Graphics::Holographic::IHolographicQuadLayer*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Graphics.Holographic.HolographicQuadLayer>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Graphics::Holographic::HolographicQuadLayer*> __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer_t;
#define __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Graphics::Holographic::IHolographicQuadLayer*>
//#define __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Graphics::Holographic::IHolographicQuadLayer*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

#ifndef DEF___FIVector_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer_USE
#define DEF___FIVector_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("da24dfcc-4c54-5193-921d-c685b57de559"))
IVector<ABI::Windows::Graphics::Holographic::HolographicQuadLayer*> : IVector_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Graphics::Holographic::HolographicQuadLayer*, ABI::Windows::Graphics::Holographic::IHolographicQuadLayer*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVector`1<Windows.Graphics.Holographic.HolographicQuadLayer>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVector<ABI::Windows::Graphics::Holographic::HolographicQuadLayer*> __FIVector_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer_t;
#define __FIVector_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer ABI::Windows::Foundation::Collections::__FIVector_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVector_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer ABI::Windows::Foundation::Collections::IVector<ABI::Windows::Graphics::Holographic::IHolographicQuadLayer*>
//#define __FIVector_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer_t ABI::Windows::Foundation::Collections::IVector<ABI::Windows::Graphics::Holographic::IHolographicQuadLayer*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVector_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Holographic {
                struct HolographicStereoTransform;
                
            } /* Windows */
        } /* Graphics */
    } /* Holographic */} /* ABI */


#ifndef DEF___FIReference_1_Windows__CGraphics__CHolographic__CHolographicStereoTransform_USE
#define DEF___FIReference_1_Windows__CGraphics__CHolographic__CHolographicStereoTransform_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("6e67ce78-cc67-52c0-b635-991db0bff5ca"))
IReference<struct ABI::Windows::Graphics::Holographic::HolographicStereoTransform> : IReference_impl<struct ABI::Windows::Graphics::Holographic::HolographicStereoTransform> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IReference`1<Windows.Graphics.Holographic.HolographicStereoTransform>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IReference<struct ABI::Windows::Graphics::Holographic::HolographicStereoTransform> __FIReference_1_Windows__CGraphics__CHolographic__CHolographicStereoTransform_t;
#define __FIReference_1_Windows__CGraphics__CHolographic__CHolographicStereoTransform ABI::Windows::Foundation::__FIReference_1_Windows__CGraphics__CHolographic__CHolographicStereoTransform_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIReference_1_Windows__CGraphics__CHolographic__CHolographicStereoTransform ABI::Windows::Foundation::IReference<ABI::Windows::Graphics::Holographic::HolographicStereoTransform>
//#define __FIReference_1_Windows__CGraphics__CHolographic__CHolographicStereoTransform_t ABI::Windows::Foundation::IReference<ABI::Windows::Graphics::Holographic::HolographicStereoTransform>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIReference_1_Windows__CGraphics__CHolographic__CHolographicStereoTransform_USE */



namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Holographic {
                class HolographicSpace;
            } /* Windows */
        } /* Graphics */
    } /* Holographic */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Holographic {
                class HolographicSpaceCameraAddedEventArgs;
            } /* Windows */
        } /* Graphics */
    } /* Holographic */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef DEF___FITypedEventHandler_2_Windows__CGraphics__CHolographic__CHolographicSpace_Windows__CGraphics__CHolographic__CHolographicSpaceCameraAddedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CGraphics__CHolographic__CHolographicSpace_Windows__CGraphics__CHolographic__CHolographicSpaceCameraAddedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("71d80b7c-1d27-5102-83d1-4f0efc7c9d6f"))
ITypedEventHandler<ABI::Windows::Graphics::Holographic::HolographicSpace*,ABI::Windows::Graphics::Holographic::HolographicSpaceCameraAddedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Graphics::Holographic::HolographicSpace*, ABI::Windows::Graphics::Holographic::IHolographicSpace*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Graphics::Holographic::HolographicSpaceCameraAddedEventArgs*, ABI::Windows::Graphics::Holographic::IHolographicSpaceCameraAddedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.Graphics.Holographic.HolographicSpace, Windows.Graphics.Holographic.HolographicSpaceCameraAddedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::Graphics::Holographic::HolographicSpace*,ABI::Windows::Graphics::Holographic::HolographicSpaceCameraAddedEventArgs*> __FITypedEventHandler_2_Windows__CGraphics__CHolographic__CHolographicSpace_Windows__CGraphics__CHolographic__CHolographicSpaceCameraAddedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CGraphics__CHolographic__CHolographicSpace_Windows__CGraphics__CHolographic__CHolographicSpaceCameraAddedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CGraphics__CHolographic__CHolographicSpace_Windows__CGraphics__CHolographic__CHolographicSpaceCameraAddedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CGraphics__CHolographic__CHolographicSpace_Windows__CGraphics__CHolographic__CHolographicSpaceCameraAddedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Graphics::Holographic::IHolographicSpace*,ABI::Windows::Graphics::Holographic::IHolographicSpaceCameraAddedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CGraphics__CHolographic__CHolographicSpace_Windows__CGraphics__CHolographic__CHolographicSpaceCameraAddedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Graphics::Holographic::IHolographicSpace*,ABI::Windows::Graphics::Holographic::IHolographicSpaceCameraAddedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CGraphics__CHolographic__CHolographicSpace_Windows__CGraphics__CHolographic__CHolographicSpaceCameraAddedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Holographic {
                class HolographicSpaceCameraRemovedEventArgs;
            } /* Windows */
        } /* Graphics */
    } /* Holographic */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef DEF___FITypedEventHandler_2_Windows__CGraphics__CHolographic__CHolographicSpace_Windows__CGraphics__CHolographic__CHolographicSpaceCameraRemovedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CGraphics__CHolographic__CHolographicSpace_Windows__CGraphics__CHolographic__CHolographicSpaceCameraRemovedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("db68cfc3-0874-502a-a3b9-2b1fe86c67be"))
ITypedEventHandler<ABI::Windows::Graphics::Holographic::HolographicSpace*,ABI::Windows::Graphics::Holographic::HolographicSpaceCameraRemovedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Graphics::Holographic::HolographicSpace*, ABI::Windows::Graphics::Holographic::IHolographicSpace*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Graphics::Holographic::HolographicSpaceCameraRemovedEventArgs*, ABI::Windows::Graphics::Holographic::IHolographicSpaceCameraRemovedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.Graphics.Holographic.HolographicSpace, Windows.Graphics.Holographic.HolographicSpaceCameraRemovedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::Graphics::Holographic::HolographicSpace*,ABI::Windows::Graphics::Holographic::HolographicSpaceCameraRemovedEventArgs*> __FITypedEventHandler_2_Windows__CGraphics__CHolographic__CHolographicSpace_Windows__CGraphics__CHolographic__CHolographicSpaceCameraRemovedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CGraphics__CHolographic__CHolographicSpace_Windows__CGraphics__CHolographic__CHolographicSpaceCameraRemovedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CGraphics__CHolographic__CHolographicSpace_Windows__CGraphics__CHolographic__CHolographicSpaceCameraRemovedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CGraphics__CHolographic__CHolographicSpace_Windows__CGraphics__CHolographic__CHolographicSpaceCameraRemovedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Graphics::Holographic::IHolographicSpace*,ABI::Windows::Graphics::Holographic::IHolographicSpaceCameraRemovedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CGraphics__CHolographic__CHolographicSpace_Windows__CGraphics__CHolographic__CHolographicSpaceCameraRemovedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Graphics::Holographic::IHolographicSpace*,ABI::Windows::Graphics::Holographic::IHolographicSpaceCameraRemovedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CGraphics__CHolographic__CHolographicSpace_Windows__CGraphics__CHolographic__CHolographicSpaceCameraRemovedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

namespace ABI {
    namespace Windows {
        namespace Perception {
            namespace Spatial {
                struct SpatialBoundingFrustum;
                
            } /* Windows */
        } /* Perception */
    } /* Spatial */} /* ABI */


#ifndef DEF___FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingFrustum_USE
#define DEF___FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingFrustum_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("f434face-0c36-5749-a8a0-0bb6ce78a614"))
IReference<struct ABI::Windows::Perception::Spatial::SpatialBoundingFrustum> : IReference_impl<struct ABI::Windows::Perception::Spatial::SpatialBoundingFrustum> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IReference`1<Windows.Perception.Spatial.SpatialBoundingFrustum>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IReference<struct ABI::Windows::Perception::Spatial::SpatialBoundingFrustum> __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingFrustum_t;
#define __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingFrustum ABI::Windows::Foundation::__FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingFrustum_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingFrustum ABI::Windows::Foundation::IReference<ABI::Windows::Perception::Spatial::SpatialBoundingFrustum>
//#define __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingFrustum_t ABI::Windows::Foundation::IReference<ABI::Windows::Perception::Spatial::SpatialBoundingFrustum>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingFrustum_USE */





#ifndef DEF___FIEventHandler_1_IInspectable_USE
#define DEF___FIEventHandler_1_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("c50898f6-c536-5f47-8583-8b2c2438a13b"))
IEventHandler<IInspectable*> : IEventHandler_impl<IInspectable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.EventHandler`1<Object>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IEventHandler<IInspectable*> __FIEventHandler_1_IInspectable_t;
#define __FIEventHandler_1_IInspectable ABI::Windows::Foundation::__FIEventHandler_1_IInspectable_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIEventHandler_1_IInspectable ABI::Windows::Foundation::IEventHandler<IInspectable*>
//#define __FIEventHandler_1_IInspectable_t ABI::Windows::Foundation::IEventHandler<IInspectable*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIEventHandler_1_IInspectable_USE */





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
            namespace Numerics {
                
                typedef struct Matrix4x4 Matrix4x4;
                
            } /* Windows */
        } /* Foundation */
    } /* Numerics */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Numerics {
                
                typedef struct Quaternion Quaternion;
                
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
        namespace Foundation {
            
            typedef struct TimeSpan TimeSpan;
            
        } /* Windows */
    } /* Foundation */} /* ABI */




#ifndef ____x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DDevice_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DDevice_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace DirectX {
                namespace Direct3D11 {
                    interface IDirect3DDevice;
                } /* Windows */
            } /* Graphics */
        } /* DirectX */
    } /* Direct3D11 */} /* ABI */
#define __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DDevice ABI::Windows::Graphics::DirectX::Direct3D11::IDirect3DDevice

#endif // ____x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DDevice_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace DirectX {
                namespace Direct3D11 {
                    interface IDirect3DSurface;
                } /* Windows */
            } /* Graphics */
        } /* DirectX */
    } /* Direct3D11 */} /* ABI */
#define __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface ABI::Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface

#endif // ____x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface_FWD_DEFINED__






namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace DirectX {
                
                typedef enum DirectXPixelFormat : int DirectXPixelFormat;
                
            } /* Windows */
        } /* Graphics */
    } /* DirectX */} /* ABI */




namespace ABI {
    namespace Windows {
        namespace Perception {
            class PerceptionTimestamp;
        } /* Windows */
    } /* Perception */} /* ABI */

#ifndef ____x_ABI_CWindows_CPerception_CIPerceptionTimestamp_FWD_DEFINED__
#define ____x_ABI_CWindows_CPerception_CIPerceptionTimestamp_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Perception {
            interface IPerceptionTimestamp;
        } /* Windows */
    } /* Perception */} /* ABI */
#define __x_ABI_CWindows_CPerception_CIPerceptionTimestamp ABI::Windows::Perception::IPerceptionTimestamp

#endif // ____x_ABI_CWindows_CPerception_CIPerceptionTimestamp_FWD_DEFINED__




namespace ABI {
    namespace Windows {
        namespace Perception {
            namespace Spatial {
                
                typedef struct SpatialBoundingFrustum SpatialBoundingFrustum;
                
            } /* Windows */
        } /* Perception */
    } /* Spatial */} /* ABI */

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
        namespace Perception {
            namespace Spatial {
                class SpatialLocator;
            } /* Windows */
        } /* Perception */
    } /* Spatial */} /* ABI */

#ifndef ____x_ABI_CWindows_CPerception_CSpatial_CISpatialLocator_FWD_DEFINED__
#define ____x_ABI_CWindows_CPerception_CSpatial_CISpatialLocator_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Perception {
            namespace Spatial {
                interface ISpatialLocator;
            } /* Windows */
        } /* Perception */
    } /* Spatial */} /* ABI */
#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocator ABI::Windows::Perception::Spatial::ISpatialLocator

#endif // ____x_ABI_CWindows_CPerception_CSpatial_CISpatialLocator_FWD_DEFINED__





namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                class CoreWindow;
            } /* Windows */
        } /* UI */
    } /* Core */} /* ABI */

#ifndef ____x_ABI_CWindows_CUI_CCore_CICoreWindow_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CCore_CICoreWindow_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                interface ICoreWindow;
            } /* Windows */
        } /* UI */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CUI_CCore_CICoreWindow ABI::Windows::UI::Core::ICoreWindow

#endif // ____x_ABI_CWindows_CUI_CCore_CICoreWindow_FWD_DEFINED__





namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Holographic {
                
                typedef enum HolographicFramePresentResult : int HolographicFramePresentResult;
                
            } /* Windows */
        } /* Graphics */
    } /* Holographic */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Holographic {
                
                typedef enum HolographicFramePresentWaitBehavior : int HolographicFramePresentWaitBehavior;
                
            } /* Windows */
        } /* Graphics */
    } /* Holographic */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Holographic {
                
                typedef enum HolographicReprojectionMode : int HolographicReprojectionMode;
                
            } /* Windows */
        } /* Graphics */
    } /* Holographic */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Holographic {
                
                typedef struct HolographicAdapterId HolographicAdapterId;
                
            } /* Windows */
        } /* Graphics */
    } /* Holographic */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Holographic {
                
                typedef struct HolographicStereoTransform HolographicStereoTransform;
                
            } /* Windows */
        } /* Graphics */
    } /* Holographic */} /* ABI */


























namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Holographic {
                class HolographicCameraRenderingParameters;
            } /* Windows */
        } /* Graphics */
    } /* Holographic */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Holographic {
                class HolographicCameraViewportParameters;
            } /* Windows */
        } /* Graphics */
    } /* Holographic */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Holographic {
                class HolographicDisplay;
            } /* Windows */
        } /* Graphics */
    } /* Holographic */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Holographic {
                class HolographicFrame;
            } /* Windows */
        } /* Graphics */
    } /* Holographic */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Holographic {
                class HolographicFramePrediction;
            } /* Windows */
        } /* Graphics */
    } /* Holographic */} /* ABI */



namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Holographic {
                class HolographicQuadLayerUpdateParameters;
            } /* Windows */
        } /* Graphics */
    } /* Holographic */} /* ABI */













/*
 *
 * Struct Windows.Graphics.Holographic.HolographicFramePresentResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Holographic {
                /* [v1_enum, contract] */
                enum HolographicFramePresentResult : int
                {
                    HolographicFramePresentResult_Success = 0,
                    HolographicFramePresentResult_DeviceRemoved = 1,
                };
                
            } /* Windows */
        } /* Graphics */
    } /* Holographic */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Struct Windows.Graphics.Holographic.HolographicFramePresentWaitBehavior
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Holographic {
                /* [v1_enum, contract] */
                enum HolographicFramePresentWaitBehavior : int
                {
                    HolographicFramePresentWaitBehavior_WaitForFrameToFinish = 0,
                    HolographicFramePresentWaitBehavior_DoNotWaitForFrameToFinish = 1,
                };
                
            } /* Windows */
        } /* Graphics */
    } /* Holographic */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Struct Windows.Graphics.Holographic.HolographicReprojectionMode
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Holographic {
                /* [v1_enum, contract] */
                enum HolographicReprojectionMode : int
                {
                    HolographicReprojectionMode_PositionAndOrientation = 0,
                    HolographicReprojectionMode_OrientationOnly = 1,
                    HolographicReprojectionMode_Disabled = 2,
                };
                
            } /* Windows */
        } /* Graphics */
    } /* Holographic */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Struct Windows.Graphics.Holographic.HolographicAdapterId
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Holographic {
                /* [contract] */
                struct HolographicAdapterId
                {
                    UINT32 LowPart;
                    INT32 HighPart;
                };
                
            } /* Windows */
        } /* Graphics */
    } /* Holographic */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Struct Windows.Graphics.Holographic.HolographicStereoTransform
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Holographic {
                /* [contract] */
                struct HolographicStereoTransform
                {
                    ABI::Windows::Foundation::Numerics::Matrix4x4 Left;
                    ABI::Windows::Foundation::Numerics::Matrix4x4 Right;
                };
                
            } /* Windows */
        } /* Graphics */
    } /* Holographic */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Graphics.Holographic.IHolographicCamera
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.Graphics.Holographic.HolographicCamera
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Holographic_IHolographicCamera[] = L"Windows.Graphics.Holographic.IHolographicCamera";
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Holographic {
                /* [object, uuid("E4E98445-9BED-4980-9BA0-E87680D1CB74"), exclusiveto, contract] */
                MIDL_INTERFACE("E4E98445-9BED-4980-9BA0-E87680D1CB74")
                IHolographicCamera : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RenderTargetSize(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::Size * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ViewportScaleFactor(
                        /* [retval, out] */__RPC__out DOUBLE * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ViewportScaleFactor(
                        /* [in] */DOUBLE value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsStereo(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Id(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE SetNearPlaneDistance(
                        /* [in] */DOUBLE value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE SetFarPlaneDistance(
                        /* [in] */DOUBLE value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IHolographicCamera=_uuidof(IHolographicCamera);
                
            } /* Windows */
        } /* Graphics */
    } /* Holographic */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Graphics.Holographic.IHolographicCamera2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Graphics.Holographic.HolographicCamera
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Graphics.Holographic.IHolographicCamera
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Holographic_IHolographicCamera2[] = L"Windows.Graphics.Holographic.IHolographicCamera2";
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Holographic {
                /* [object, uuid("B55B9F1A-BA8C-4F84-AD79-2E7E1E2450F3"), exclusiveto, contract] */
                MIDL_INTERFACE("B55B9F1A-BA8C-4F84-AD79-2E7E1E2450F3")
                IHolographicCamera2 : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LeftViewportParameters(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Graphics::Holographic::IHolographicCameraViewportParameters * * result
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RightViewportParameters(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Graphics::Holographic::IHolographicCameraViewportParameters * * result
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Display(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Graphics::Holographic::IHolographicDisplay * * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IHolographicCamera2=_uuidof(IHolographicCamera2);
                
            } /* Windows */
        } /* Graphics */
    } /* Holographic */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera2;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Graphics.Holographic.IHolographicCamera3
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.Graphics.Holographic.HolographicCamera
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Graphics.Holographic.IHolographicCamera2
 *     Windows.Graphics.Holographic.IHolographicCamera
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Holographic_IHolographicCamera3[] = L"Windows.Graphics.Holographic.IHolographicCamera3";
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Holographic {
                /* [object, uuid("45AA4FB3-7B59-524E-4A3F-4A6AD6650477"), exclusiveto, contract] */
                MIDL_INTERFACE("45AA4FB3-7B59-524E-4A3F-4A6AD6650477")
                IHolographicCamera3 : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsPrimaryLayerEnabled(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_IsPrimaryLayerEnabled(
                        /* [in] */boolean value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MaxQuadLayerCount(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_QuadLayers(
                        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IHolographicCamera3=_uuidof(IHolographicCamera3);
                
            } /* Windows */
        } /* Graphics */
    } /* Holographic */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera3;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera3_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.Graphics.Holographic.IHolographicCameraPose
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.Graphics.Holographic.HolographicCameraPose
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraPose_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraPose_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Holographic_IHolographicCameraPose[] = L"Windows.Graphics.Holographic.IHolographicCameraPose";
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Holographic {
                /* [object, uuid("0D7D7E30-12DE-45BD-912B-C7F6561599D1"), exclusiveto, contract] */
                MIDL_INTERFACE("0D7D7E30-12DE-45BD-912B-C7F6561599D1")
                IHolographicCameraPose : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HolographicCamera(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Graphics::Holographic::IHolographicCamera * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Viewport(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::Rect * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE TryGetViewTransform(
                        /* [in] */__RPC__in_opt ABI::Windows::Perception::Spatial::ISpatialCoordinateSystem * coordinateSystem,
                        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CGraphics__CHolographic__CHolographicStereoTransform * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ProjectionTransform(
                        /* [retval, out] */__RPC__out ABI::Windows::Graphics::Holographic::HolographicStereoTransform * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE TryGetCullingFrustum(
                        /* [in] */__RPC__in_opt ABI::Windows::Perception::Spatial::ISpatialCoordinateSystem * coordinateSystem,
                        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingFrustum * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE TryGetVisibleFrustum(
                        /* [in] */__RPC__in_opt ABI::Windows::Perception::Spatial::ISpatialCoordinateSystem * coordinateSystem,
                        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingFrustum * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_NearPlaneDistance(
                        /* [retval, out] */__RPC__out DOUBLE * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_FarPlaneDistance(
                        /* [retval, out] */__RPC__out DOUBLE * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IHolographicCameraPose=_uuidof(IHolographicCameraPose);
                
            } /* Windows */
        } /* Graphics */
    } /* Holographic */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraPose;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraPose_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Graphics.Holographic.IHolographicCameraRenderingParameters
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.Graphics.Holographic.HolographicCameraRenderingParameters
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Holographic_IHolographicCameraRenderingParameters[] = L"Windows.Graphics.Holographic.IHolographicCameraRenderingParameters";
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Holographic {
                /* [object, uuid("8EAC2ED1-5BF4-4E16-8236-AE0800C11D0D"), exclusiveto, contract] */
                MIDL_INTERFACE("8EAC2ED1-5BF4-4E16-8236-AE0800C11D0D")
                IHolographicCameraRenderingParameters : IInspectable
                {
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE SetFocusPoint(
                        /* [in] */__RPC__in_opt ABI::Windows::Perception::Spatial::ISpatialCoordinateSystem * coordinateSystem,
                        /* [in] */ABI::Windows::Foundation::Numerics::Vector3 position
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE SetFocusPointWithNormal(
                        /* [in] */__RPC__in_opt ABI::Windows::Perception::Spatial::ISpatialCoordinateSystem * coordinateSystem,
                        /* [in] */ABI::Windows::Foundation::Numerics::Vector3 position,
                        /* [in] */ABI::Windows::Foundation::Numerics::Vector3 normal
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE SetFocusPointWithNormalLinearVelocity(
                        /* [in] */__RPC__in_opt ABI::Windows::Perception::Spatial::ISpatialCoordinateSystem * coordinateSystem,
                        /* [in] */ABI::Windows::Foundation::Numerics::Vector3 position,
                        /* [in] */ABI::Windows::Foundation::Numerics::Vector3 normal,
                        /* [in] */ABI::Windows::Foundation::Numerics::Vector3 linearVelocity
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Direct3D11Device(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Graphics::DirectX::Direct3D11::IDirect3DDevice * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Direct3D11BackBuffer(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IHolographicCameraRenderingParameters=_uuidof(IHolographicCameraRenderingParameters);
                
            } /* Windows */
        } /* Graphics */
    } /* Holographic */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Graphics.Holographic.IHolographicCameraRenderingParameters2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Graphics.Holographic.HolographicCameraRenderingParameters
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Graphics.Holographic.IHolographicCameraRenderingParameters
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Holographic_IHolographicCameraRenderingParameters2[] = L"Windows.Graphics.Holographic.IHolographicCameraRenderingParameters2";
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Holographic {
                /* [object, uuid("261270E3-B696-4634-94D6-BE0681643599"), exclusiveto, contract] */
                MIDL_INTERFACE("261270E3-B696-4634-94D6-BE0681643599")
                IHolographicCameraRenderingParameters2 : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ReprojectionMode(
                        /* [retval, out] */__RPC__out ABI::Windows::Graphics::Holographic::HolographicReprojectionMode * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ReprojectionMode(
                        /* [in] */ABI::Windows::Graphics::Holographic::HolographicReprojectionMode value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CommitDirect3D11DepthBuffer(
                        /* [in] */__RPC__in_opt ABI::Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IHolographicCameraRenderingParameters2=_uuidof(IHolographicCameraRenderingParameters2);
                
            } /* Windows */
        } /* Graphics */
    } /* Holographic */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters2;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Graphics.Holographic.IHolographicCameraRenderingParameters3
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.Graphics.Holographic.HolographicCameraRenderingParameters
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Graphics.Holographic.IHolographicCameraRenderingParameters2
 *     Windows.Graphics.Holographic.IHolographicCameraRenderingParameters
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Holographic_IHolographicCameraRenderingParameters3[] = L"Windows.Graphics.Holographic.IHolographicCameraRenderingParameters3";
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Holographic {
                /* [object, uuid("B1AA513F-136D-4B06-B9D4-E4B914CD0683"), exclusiveto, contract] */
                MIDL_INTERFACE("B1AA513F-136D-4B06-B9D4-E4B914CD0683")
                IHolographicCameraRenderingParameters3 : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsContentProtectionEnabled(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_IsContentProtectionEnabled(
                        /* [in] */boolean value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IHolographicCameraRenderingParameters3=_uuidof(IHolographicCameraRenderingParameters3);
                
            } /* Windows */
        } /* Graphics */
    } /* Holographic */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters3;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters3_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.Graphics.Holographic.IHolographicCameraViewportParameters
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Graphics.Holographic.HolographicCameraViewportParameters
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraViewportParameters_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraViewportParameters_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Holographic_IHolographicCameraViewportParameters[] = L"Windows.Graphics.Holographic.IHolographicCameraViewportParameters";
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Holographic {
                /* [object, uuid("80CDF3F7-842A-41E1-93ED-5692AB1FBB10"), exclusiveto, contract] */
                MIDL_INTERFACE("80CDF3F7-842A-41E1-93ED-5692AB1FBB10")
                IHolographicCameraViewportParameters : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HiddenAreaMesh(
                        /* [out] */__RPC__out UINT32 * __valueSize,
                        /* [size_is(, *(__valueSize)), retval, out] */__RPC__deref_out_ecount_full_opt(*(__valueSize)) ABI::Windows::Foundation::Numerics::Vector2 * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_VisibleAreaMesh(
                        /* [out] */__RPC__out UINT32 * __valueSize,
                        /* [size_is(, *(__valueSize)), retval, out] */__RPC__deref_out_ecount_full_opt(*(__valueSize)) ABI::Windows::Foundation::Numerics::Vector2 * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IHolographicCameraViewportParameters=_uuidof(IHolographicCameraViewportParameters);
                
            } /* Windows */
        } /* Graphics */
    } /* Holographic */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraViewportParameters;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraViewportParameters_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Graphics.Holographic.IHolographicDisplay
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Graphics.Holographic.HolographicDisplay
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplay_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplay_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Holographic_IHolographicDisplay[] = L"Windows.Graphics.Holographic.IHolographicDisplay";
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Holographic {
                /* [object, uuid("9ACEA414-1D9F-4090-A388-90C06F6EAE9C"), exclusiveto, contract] */
                MIDL_INTERFACE("9ACEA414-1D9F-4090-A388-90C06F6EAE9C")
                IHolographicDisplay : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DisplayName(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MaxViewportSize(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::Size * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsStereo(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsOpaque(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AdapterId(
                        /* [retval, out] */__RPC__out ABI::Windows::Graphics::Holographic::HolographicAdapterId * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SpatialLocator(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Perception::Spatial::ISpatialLocator * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IHolographicDisplay=_uuidof(IHolographicDisplay);
                
            } /* Windows */
        } /* Graphics */
    } /* Holographic */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplay;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplay_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Graphics.Holographic.IHolographicDisplay2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.Graphics.Holographic.HolographicDisplay
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplay2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplay2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Holographic_IHolographicDisplay2[] = L"Windows.Graphics.Holographic.IHolographicDisplay2";
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Holographic {
                /* [object, uuid("75AC3F82-E755-436C-8D96-4D32D131473E"), exclusiveto, contract] */
                MIDL_INTERFACE("75AC3F82-E755-436C-8D96-4D32D131473E")
                IHolographicDisplay2 : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RefreshRate(
                        /* [retval, out] */__RPC__out DOUBLE * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IHolographicDisplay2=_uuidof(IHolographicDisplay2);
                
            } /* Windows */
        } /* Graphics */
    } /* Holographic */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplay2;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplay2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.Graphics.Holographic.IHolographicDisplayStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Graphics.Holographic.HolographicDisplay
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplayStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplayStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Holographic_IHolographicDisplayStatics[] = L"Windows.Graphics.Holographic.IHolographicDisplayStatics";
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Holographic {
                /* [object, uuid("CB374983-E7B0-4841-8355-3AE5B536E9A4"), exclusiveto, contract] */
                MIDL_INTERFACE("CB374983-E7B0-4841-8355-3AE5B536E9A4")
                IHolographicDisplayStatics : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE GetDefault(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Graphics::Holographic::IHolographicDisplay * * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IHolographicDisplayStatics=_uuidof(IHolographicDisplayStatics);
                
            } /* Windows */
        } /* Graphics */
    } /* Holographic */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplayStatics;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplayStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Graphics.Holographic.IHolographicFrame
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.Graphics.Holographic.HolographicFrame
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFrame_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFrame_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Holographic_IHolographicFrame[] = L"Windows.Graphics.Holographic.IHolographicFrame";
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Holographic {
                /* [object, uuid("C6988EB6-A8B9-3054-A6EB-D624B6536375"), exclusiveto, contract] */
                MIDL_INTERFACE("C6988EB6-A8B9-3054-A6EB-D624B6536375")
                IHolographicFrame : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AddedCameras(
                        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicCamera * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RemovedCameras(
                        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicCamera * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetRenderingParameters(
                        /* [in] */__RPC__in_opt ABI::Windows::Graphics::Holographic::IHolographicCameraPose * cameraPose,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Graphics::Holographic::IHolographicCameraRenderingParameters * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Duration(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::TimeSpan * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CurrentPrediction(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Graphics::Holographic::IHolographicFramePrediction * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE UpdateCurrentPrediction(void) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE PresentUsingCurrentPrediction(
                        /* [retval, out] */__RPC__out ABI::Windows::Graphics::Holographic::HolographicFramePresentResult * result
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE PresentUsingCurrentPredictionWithBehavior(
                        /* [in] */ABI::Windows::Graphics::Holographic::HolographicFramePresentWaitBehavior waitBehavior,
                        /* [retval, out] */__RPC__out ABI::Windows::Graphics::Holographic::HolographicFramePresentResult * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE WaitForFrameToFinish(void) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IHolographicFrame=_uuidof(IHolographicFrame);
                
            } /* Windows */
        } /* Graphics */
    } /* Holographic */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFrame;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFrame_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Graphics.Holographic.IHolographicFrame2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.Graphics.Holographic.HolographicFrame
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Graphics.Holographic.IHolographicFrame
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFrame2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFrame2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Holographic_IHolographicFrame2[] = L"Windows.Graphics.Holographic.IHolographicFrame2";
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Holographic {
                /* [object, uuid("283F37BF-3BF2-5E91-6633-870574E6F217"), exclusiveto, contract] */
                MIDL_INTERFACE("283F37BF-3BF2-5E91-6633-870574E6F217")
                IHolographicFrame2 : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE GetQuadLayerUpdateParameters(
                        /* [in] */__RPC__in_opt ABI::Windows::Graphics::Holographic::IHolographicQuadLayer * layer,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Graphics::Holographic::IHolographicQuadLayerUpdateParameters * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IHolographicFrame2=_uuidof(IHolographicFrame2);
                
            } /* Windows */
        } /* Graphics */
    } /* Holographic */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFrame2;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFrame2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.Graphics.Holographic.IHolographicFramePrediction
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.Graphics.Holographic.HolographicFramePrediction
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFramePrediction_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFramePrediction_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Holographic_IHolographicFramePrediction[] = L"Windows.Graphics.Holographic.IHolographicFramePrediction";
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Holographic {
                /* [object, uuid("520F4DE1-5C0A-4E79-A81E-6ABE02BB2739"), exclusiveto, contract] */
                MIDL_INTERFACE("520F4DE1-5C0A-4E79-A81E-6ABE02BB2739")
                IHolographicFramePrediction : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CameraPoses(
                        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicCameraPose * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Timestamp(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Perception::IPerceptionTimestamp * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IHolographicFramePrediction=_uuidof(IHolographicFramePrediction);
                
            } /* Windows */
        } /* Graphics */
    } /* Holographic */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFramePrediction;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFramePrediction_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Graphics.Holographic.IHolographicQuadLayer
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.Graphics.Holographic.HolographicQuadLayer
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayer_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayer_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Holographic_IHolographicQuadLayer[] = L"Windows.Graphics.Holographic.IHolographicQuadLayer";
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Holographic {
                /* [object, uuid("903460C9-C9D9-5D5C-41AC-A2D5AB0FD331"), exclusiveto, contract] */
                MIDL_INTERFACE("903460C9-C9D9-5D5C-41AC-A2D5AB0FD331")
                IHolographicQuadLayer : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PixelFormat(
                        /* [retval, out] */__RPC__out ABI::Windows::Graphics::DirectX::DirectXPixelFormat * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Size(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::Size * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IHolographicQuadLayer=_uuidof(IHolographicQuadLayer);
                
            } /* Windows */
        } /* Graphics */
    } /* Holographic */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayer;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayer_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.Graphics.Holographic.IHolographicQuadLayerFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.Graphics.Holographic.HolographicQuadLayer
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayerFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayerFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Holographic_IHolographicQuadLayerFactory[] = L"Windows.Graphics.Holographic.IHolographicQuadLayerFactory";
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Holographic {
                /* [object, uuid("A67538F3-5A14-5A10-489A-455065B37B76"), exclusiveto, contract] */
                MIDL_INTERFACE("A67538F3-5A14-5A10-489A-455065B37B76")
                IHolographicQuadLayerFactory : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE Create(
                        /* [in] */ABI::Windows::Foundation::Size size,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Graphics::Holographic::IHolographicQuadLayer * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateWithPixelFormat(
                        /* [in] */ABI::Windows::Foundation::Size size,
                        /* [in] */ABI::Windows::Graphics::DirectX::DirectXPixelFormat pixelFormat,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Graphics::Holographic::IHolographicQuadLayer * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IHolographicQuadLayerFactory=_uuidof(IHolographicQuadLayerFactory);
                
            } /* Windows */
        } /* Graphics */
    } /* Holographic */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayerFactory;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayerFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.Graphics.Holographic.IHolographicQuadLayerUpdateParameters
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.Graphics.Holographic.HolographicQuadLayerUpdateParameters
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayerUpdateParameters_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayerUpdateParameters_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Holographic_IHolographicQuadLayerUpdateParameters[] = L"Windows.Graphics.Holographic.IHolographicQuadLayerUpdateParameters";
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Holographic {
                /* [object, uuid("2B0EA3B0-798D-5BCA-55C2-2C0C762EBB08"), exclusiveto, contract] */
                MIDL_INTERFACE("2B0EA3B0-798D-5BCA-55C2-2C0C762EBB08")
                IHolographicQuadLayerUpdateParameters : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE AcquireBufferToUpdateContent(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE UpdateViewport(
                        /* [in] */ABI::Windows::Foundation::Rect value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE UpdateContentProtectionEnabled(
                        /* [in] */boolean value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE UpdateExtents(
                        /* [in] */ABI::Windows::Foundation::Numerics::Vector2 value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE UpdateLocationWithStationaryMode(
                        /* [in] */__RPC__in_opt ABI::Windows::Perception::Spatial::ISpatialCoordinateSystem * coordinateSystem,
                        /* [in] */ABI::Windows::Foundation::Numerics::Vector3 position,
                        /* [in] */ABI::Windows::Foundation::Numerics::Quaternion orientation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE UpdateLocationWithDisplayRelativeMode(
                        /* [in] */ABI::Windows::Foundation::Numerics::Vector3 position,
                        /* [in] */ABI::Windows::Foundation::Numerics::Quaternion orientation
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IHolographicQuadLayerUpdateParameters=_uuidof(IHolographicQuadLayerUpdateParameters);
                
            } /* Windows */
        } /* Graphics */
    } /* Holographic */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayerUpdateParameters;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayerUpdateParameters_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.Graphics.Holographic.IHolographicSpace
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.Graphics.Holographic.HolographicSpace
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpace_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpace_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Holographic_IHolographicSpace[] = L"Windows.Graphics.Holographic.IHolographicSpace";
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Holographic {
                /* [object, uuid("4380DBA6-5E78-434F-807C-3433D1EFE8B7"), exclusiveto, contract] */
                MIDL_INTERFACE("4380DBA6-5E78-434F-807C-3433D1EFE8B7")
                IHolographicSpace : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PrimaryAdapterId(
                        /* [retval, out] */__RPC__out ABI::Windows::Graphics::Holographic::HolographicAdapterId * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE SetDirect3D11Device(
                        /* [in] */__RPC__in_opt ABI::Windows::Graphics::DirectX::Direct3D11::IDirect3DDevice * value
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_CameraAdded(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CGraphics__CHolographic__CHolographicSpace_Windows__CGraphics__CHolographic__CHolographicSpaceCameraAddedEventArgs * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * cookie
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_CameraAdded(
                        /* [in] */EventRegistrationToken cookie
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_CameraRemoved(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CGraphics__CHolographic__CHolographicSpace_Windows__CGraphics__CHolographic__CHolographicSpaceCameraRemovedEventArgs * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * cookie
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_CameraRemoved(
                        /* [in] */EventRegistrationToken cookie
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateNextFrame(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Graphics::Holographic::IHolographicFrame * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IHolographicSpace=_uuidof(IHolographicSpace);
                
            } /* Windows */
        } /* Graphics */
    } /* Holographic */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpace;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpace_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Graphics.Holographic.IHolographicSpaceCameraAddedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.Graphics.Holographic.HolographicSpaceCameraAddedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceCameraAddedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceCameraAddedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Holographic_IHolographicSpaceCameraAddedEventArgs[] = L"Windows.Graphics.Holographic.IHolographicSpaceCameraAddedEventArgs";
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Holographic {
                /* [object, uuid("58F1DA35-BBB3-3C8F-993D-6C80E7FEB99F"), exclusiveto, contract] */
                MIDL_INTERFACE("58F1DA35-BBB3-3C8F-993D-6C80E7FEB99F")
                IHolographicSpaceCameraAddedEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Camera(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Graphics::Holographic::IHolographicCamera * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetDeferral(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IDeferral * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IHolographicSpaceCameraAddedEventArgs=_uuidof(IHolographicSpaceCameraAddedEventArgs);
                
            } /* Windows */
        } /* Graphics */
    } /* Holographic */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceCameraAddedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceCameraAddedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Graphics.Holographic.IHolographicSpaceCameraRemovedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.Graphics.Holographic.HolographicSpaceCameraRemovedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceCameraRemovedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceCameraRemovedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Holographic_IHolographicSpaceCameraRemovedEventArgs[] = L"Windows.Graphics.Holographic.IHolographicSpaceCameraRemovedEventArgs";
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Holographic {
                /* [object, uuid("805444A8-F2AE-322E-8DA9-836A0A95A4C1"), exclusiveto, contract] */
                MIDL_INTERFACE("805444A8-F2AE-322E-8DA9-836A0A95A4C1")
                IHolographicSpaceCameraRemovedEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Camera(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Graphics::Holographic::IHolographicCamera * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IHolographicSpaceCameraRemovedEventArgs=_uuidof(IHolographicSpaceCameraRemovedEventArgs);
                
            } /* Windows */
        } /* Graphics */
    } /* Holographic */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceCameraRemovedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceCameraRemovedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Graphics.Holographic.IHolographicSpaceStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.Graphics.Holographic.HolographicSpace
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Holographic_IHolographicSpaceStatics[] = L"Windows.Graphics.Holographic.IHolographicSpaceStatics";
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Holographic {
                /* [object, uuid("364E6064-C8F2-3BA1-8391-66B8489E67FD"), exclusiveto, contract] */
                MIDL_INTERFACE("364E6064-C8F2-3BA1-8391-66B8489E67FD")
                IHolographicSpaceStatics : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE CreateForCoreWindow(
                        /* [in] */__RPC__in_opt ABI::Windows::UI::Core::ICoreWindow * window,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Graphics::Holographic::IHolographicSpace * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IHolographicSpaceStatics=_uuidof(IHolographicSpaceStatics);
                
            } /* Windows */
        } /* Graphics */
    } /* Holographic */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceStatics;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Graphics.Holographic.IHolographicSpaceStatics2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Graphics.Holographic.HolographicSpace
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Holographic_IHolographicSpaceStatics2[] = L"Windows.Graphics.Holographic.IHolographicSpaceStatics2";
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Holographic {
                /* [object, uuid("0E777088-75FC-48AF-8758-0652F6F07C59"), exclusiveto, contract] */
                MIDL_INTERFACE("0E777088-75FC-48AF-8758-0652F6F07C59")
                IHolographicSpaceStatics2 : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsSupported(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsAvailable(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_IsAvailableChanged(
                        /* [in] */__RPC__in_opt __FIEventHandler_1_IInspectable * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_IsAvailableChanged(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IHolographicSpaceStatics2=_uuidof(IHolographicSpaceStatics2);
                
            } /* Windows */
        } /* Graphics */
    } /* Holographic */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceStatics2;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Graphics.Holographic.IHolographicSpaceStatics3
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.Graphics.Holographic.HolographicSpace
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceStatics3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceStatics3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Holographic_IHolographicSpaceStatics3[] = L"Windows.Graphics.Holographic.IHolographicSpaceStatics3";
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Holographic {
                /* [object, uuid("3B00DE3D-B1A3-4DFE-8E79-FEC5909E6DF8"), exclusiveto, contract] */
                MIDL_INTERFACE("3B00DE3D-B1A3-4DFE-8E79-FEC5909E6DF8")
                IHolographicSpaceStatics3 : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsConfigured(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IHolographicSpaceStatics3=_uuidof(IHolographicSpaceStatics3);
                
            } /* Windows */
        } /* Graphics */
    } /* Holographic */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceStatics3;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceStatics3_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Class Windows.Graphics.Holographic.HolographicCamera
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Graphics.Holographic.IHolographicCamera ** Default Interface **
 *    Windows.Graphics.Holographic.IHolographicCamera2
 *    Windows.Graphics.Holographic.IHolographicCamera3
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef RUNTIMECLASS_Windows_Graphics_Holographic_HolographicCamera_DEFINED
#define RUNTIMECLASS_Windows_Graphics_Holographic_HolographicCamera_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Holographic_HolographicCamera[] = L"Windows.Graphics.Holographic.HolographicCamera";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Class Windows.Graphics.Holographic.HolographicCameraPose
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Graphics.Holographic.IHolographicCameraPose ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef RUNTIMECLASS_Windows_Graphics_Holographic_HolographicCameraPose_DEFINED
#define RUNTIMECLASS_Windows_Graphics_Holographic_HolographicCameraPose_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Holographic_HolographicCameraPose[] = L"Windows.Graphics.Holographic.HolographicCameraPose";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Class Windows.Graphics.Holographic.HolographicCameraRenderingParameters
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Graphics.Holographic.IHolographicCameraRenderingParameters ** Default Interface **
 *    Windows.Graphics.Holographic.IHolographicCameraRenderingParameters2
 *    Windows.Graphics.Holographic.IHolographicCameraRenderingParameters3
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef RUNTIMECLASS_Windows_Graphics_Holographic_HolographicCameraRenderingParameters_DEFINED
#define RUNTIMECLASS_Windows_Graphics_Holographic_HolographicCameraRenderingParameters_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Holographic_HolographicCameraRenderingParameters[] = L"Windows.Graphics.Holographic.HolographicCameraRenderingParameters";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Class Windows.Graphics.Holographic.HolographicCameraViewportParameters
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Graphics.Holographic.IHolographicCameraViewportParameters ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_Graphics_Holographic_HolographicCameraViewportParameters_DEFINED
#define RUNTIMECLASS_Windows_Graphics_Holographic_HolographicCameraViewportParameters_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Holographic_HolographicCameraViewportParameters[] = L"Windows.Graphics.Holographic.HolographicCameraViewportParameters";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.Graphics.Holographic.HolographicDisplay
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Graphics.Holographic.IHolographicDisplayStatics interface starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Graphics.Holographic.IHolographicDisplay ** Default Interface **
 *    Windows.Graphics.Holographic.IHolographicDisplay2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_Graphics_Holographic_HolographicDisplay_DEFINED
#define RUNTIMECLASS_Windows_Graphics_Holographic_HolographicDisplay_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Holographic_HolographicDisplay[] = L"Windows.Graphics.Holographic.HolographicDisplay";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.Graphics.Holographic.HolographicFrame
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Graphics.Holographic.IHolographicFrame ** Default Interface **
 *    Windows.Graphics.Holographic.IHolographicFrame2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef RUNTIMECLASS_Windows_Graphics_Holographic_HolographicFrame_DEFINED
#define RUNTIMECLASS_Windows_Graphics_Holographic_HolographicFrame_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Holographic_HolographicFrame[] = L"Windows.Graphics.Holographic.HolographicFrame";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Class Windows.Graphics.Holographic.HolographicFramePrediction
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Graphics.Holographic.IHolographicFramePrediction ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef RUNTIMECLASS_Windows_Graphics_Holographic_HolographicFramePrediction_DEFINED
#define RUNTIMECLASS_Windows_Graphics_Holographic_HolographicFramePrediction_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Holographic_HolographicFramePrediction[] = L"Windows.Graphics.Holographic.HolographicFramePrediction";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Class Windows.Graphics.Holographic.HolographicQuadLayer
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Graphics.Holographic.IHolographicQuadLayerFactory interface starting with version 5.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Foundation.IClosable
 *    Windows.Graphics.Holographic.IHolographicQuadLayer ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

#ifndef RUNTIMECLASS_Windows_Graphics_Holographic_HolographicQuadLayer_DEFINED
#define RUNTIMECLASS_Windows_Graphics_Holographic_HolographicQuadLayer_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Holographic_HolographicQuadLayer[] = L"Windows.Graphics.Holographic.HolographicQuadLayer";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Class Windows.Graphics.Holographic.HolographicQuadLayerUpdateParameters
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Graphics.Holographic.IHolographicQuadLayerUpdateParameters ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

#ifndef RUNTIMECLASS_Windows_Graphics_Holographic_HolographicQuadLayerUpdateParameters_DEFINED
#define RUNTIMECLASS_Windows_Graphics_Holographic_HolographicQuadLayerUpdateParameters_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Holographic_HolographicQuadLayerUpdateParameters[] = L"Windows.Graphics.Holographic.HolographicQuadLayerUpdateParameters";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Class Windows.Graphics.Holographic.HolographicSpace
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Graphics.Holographic.IHolographicSpaceStatics3 interface starting with version 5.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.Graphics.Holographic.IHolographicSpaceStatics2 interface starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.Graphics.Holographic.IHolographicSpaceStatics interface starting with version 2.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Graphics.Holographic.IHolographicSpace ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef RUNTIMECLASS_Windows_Graphics_Holographic_HolographicSpace_DEFINED
#define RUNTIMECLASS_Windows_Graphics_Holographic_HolographicSpace_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Holographic_HolographicSpace[] = L"Windows.Graphics.Holographic.HolographicSpace";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Class Windows.Graphics.Holographic.HolographicSpaceCameraAddedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Graphics.Holographic.IHolographicSpaceCameraAddedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef RUNTIMECLASS_Windows_Graphics_Holographic_HolographicSpaceCameraAddedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Graphics_Holographic_HolographicSpaceCameraAddedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Holographic_HolographicSpaceCameraAddedEventArgs[] = L"Windows.Graphics.Holographic.HolographicSpaceCameraAddedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Class Windows.Graphics.Holographic.HolographicSpaceCameraRemovedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Graphics.Holographic.IHolographicSpaceCameraRemovedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef RUNTIMECLASS_Windows_Graphics_Holographic_HolographicSpaceCameraRemovedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Graphics_Holographic_HolographicSpaceCameraRemovedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Holographic_HolographicSpaceCameraRemovedEventArgs[] = L"Windows.Graphics.Holographic.HolographicSpaceCameraRemovedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000




#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera;

#endif // ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera2_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera2 __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera2;

#endif // ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera3_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera3_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera3 __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera3;

#endif // ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraPose_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraPose_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraPose __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraPose;

#endif // ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraPose_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters;

#endif // ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters2_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters2 __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters2;

#endif // ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters3_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters3_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters3 __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters3;

#endif // ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraViewportParameters_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraViewportParameters_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraViewportParameters __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraViewportParameters;

#endif // ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraViewportParameters_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplay_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplay_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplay __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplay;

#endif // ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplay_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplay2_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplay2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplay2 __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplay2;

#endif // ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplay2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplayStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplayStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplayStatics __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplayStatics;

#endif // ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplayStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFrame_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFrame_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFrame __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFrame;

#endif // ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFrame_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFrame2_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFrame2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFrame2 __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFrame2;

#endif // ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFrame2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFramePrediction_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFramePrediction_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFramePrediction __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFramePrediction;

#endif // ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFramePrediction_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayer_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayer_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayer __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayer;

#endif // ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayer_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayerFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayerFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayerFactory __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayerFactory;

#endif // ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayerFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayerUpdateParameters_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayerUpdateParameters_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayerUpdateParameters __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayerUpdateParameters;

#endif // ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayerUpdateParameters_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpace_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpace_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpace __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpace;

#endif // ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpace_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceCameraAddedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceCameraAddedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceCameraAddedEventArgs __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceCameraAddedEventArgs;

#endif // ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceCameraAddedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceCameraRemovedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceCameraRemovedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceCameraRemovedEventArgs __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceCameraRemovedEventArgs;

#endif // ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceCameraRemovedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceStatics __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceStatics;

#endif // ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceStatics2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceStatics2 __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceStatics2;

#endif // ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceStatics2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceStatics3_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceStatics3_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceStatics3 __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceStatics3;

#endif // ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceStatics3_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____FIIterator_1_Windows__CGraphics__CHolographic__CHolographicCamera_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CGraphics__CHolographic__CHolographicCamera_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CGraphics__CHolographic__CHolographicCamera __FIIterator_1_Windows__CGraphics__CHolographic__CHolographicCamera;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CGraphics__CHolographic__CHolographicCamera;

typedef struct __FIIterator_1_Windows__CGraphics__CHolographic__CHolographicCameraVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CGraphics__CHolographic__CHolographicCamera * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CGraphics__CHolographic__CHolographicCamera * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CGraphics__CHolographic__CHolographicCamera * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CGraphics__CHolographic__CHolographicCamera * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CGraphics__CHolographic__CHolographicCamera * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CGraphics__CHolographic__CHolographicCamera * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CGraphics__CHolographic__CHolographicCamera * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CGraphics__CHolographic__CHolographicCamera * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CGraphics__CHolographic__CHolographicCamera * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CGraphics__CHolographic__CHolographicCamera * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CGraphics__CHolographic__CHolographicCameraVtbl;

interface __FIIterator_1_Windows__CGraphics__CHolographic__CHolographicCamera
{
    CONST_VTBL struct __FIIterator_1_Windows__CGraphics__CHolographic__CHolographicCameraVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CGraphics__CHolographic__CHolographicCamera_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CGraphics__CHolographic__CHolographicCamera_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CGraphics__CHolographic__CHolographicCamera_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CGraphics__CHolographic__CHolographicCamera_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CGraphics__CHolographic__CHolographicCamera_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CGraphics__CHolographic__CHolographicCamera_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CGraphics__CHolographic__CHolographicCamera_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CGraphics__CHolographic__CHolographicCamera_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CGraphics__CHolographic__CHolographicCamera_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CGraphics__CHolographic__CHolographicCamera_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CGraphics__CHolographic__CHolographicCamera_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____FIIterable_1_Windows__CGraphics__CHolographic__CHolographicCamera_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CGraphics__CHolographic__CHolographicCamera_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CGraphics__CHolographic__CHolographicCamera __FIIterable_1_Windows__CGraphics__CHolographic__CHolographicCamera;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CGraphics__CHolographic__CHolographicCamera;

typedef  struct __FIIterable_1_Windows__CGraphics__CHolographic__CHolographicCameraVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CGraphics__CHolographic__CHolographicCamera * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CGraphics__CHolographic__CHolographicCamera * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CGraphics__CHolographic__CHolographicCamera * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CGraphics__CHolographic__CHolographicCamera * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CGraphics__CHolographic__CHolographicCamera * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CGraphics__CHolographic__CHolographicCamera * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CGraphics__CHolographic__CHolographicCamera * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CGraphics__CHolographic__CHolographicCamera **first);

    END_INTERFACE
} __FIIterable_1_Windows__CGraphics__CHolographic__CHolographicCameraVtbl;

interface __FIIterable_1_Windows__CGraphics__CHolographic__CHolographicCamera
{
    CONST_VTBL struct __FIIterable_1_Windows__CGraphics__CHolographic__CHolographicCameraVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CGraphics__CHolographic__CHolographicCamera_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CGraphics__CHolographic__CHolographicCamera_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CGraphics__CHolographic__CHolographicCamera_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CGraphics__CHolographic__CHolographicCamera_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CGraphics__CHolographic__CHolographicCamera_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CGraphics__CHolographic__CHolographicCamera_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CGraphics__CHolographic__CHolographicCamera_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CGraphics__CHolographic__CHolographicCamera_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____FIIterator_1_Windows__CGraphics__CHolographic__CHolographicCameraPose_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CGraphics__CHolographic__CHolographicCameraPose_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CGraphics__CHolographic__CHolographicCameraPose __FIIterator_1_Windows__CGraphics__CHolographic__CHolographicCameraPose;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CGraphics__CHolographic__CHolographicCameraPose;

typedef struct __FIIterator_1_Windows__CGraphics__CHolographic__CHolographicCameraPoseVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CGraphics__CHolographic__CHolographicCameraPose * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CGraphics__CHolographic__CHolographicCameraPose * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CGraphics__CHolographic__CHolographicCameraPose * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CGraphics__CHolographic__CHolographicCameraPose * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CGraphics__CHolographic__CHolographicCameraPose * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CGraphics__CHolographic__CHolographicCameraPose * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CGraphics__CHolographic__CHolographicCameraPose * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraPose * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CGraphics__CHolographic__CHolographicCameraPose * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CGraphics__CHolographic__CHolographicCameraPose * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CGraphics__CHolographic__CHolographicCameraPose * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraPose * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CGraphics__CHolographic__CHolographicCameraPoseVtbl;

interface __FIIterator_1_Windows__CGraphics__CHolographic__CHolographicCameraPose
{
    CONST_VTBL struct __FIIterator_1_Windows__CGraphics__CHolographic__CHolographicCameraPoseVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CGraphics__CHolographic__CHolographicCameraPose_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CGraphics__CHolographic__CHolographicCameraPose_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CGraphics__CHolographic__CHolographicCameraPose_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CGraphics__CHolographic__CHolographicCameraPose_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CGraphics__CHolographic__CHolographicCameraPose_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CGraphics__CHolographic__CHolographicCameraPose_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CGraphics__CHolographic__CHolographicCameraPose_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CGraphics__CHolographic__CHolographicCameraPose_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CGraphics__CHolographic__CHolographicCameraPose_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CGraphics__CHolographic__CHolographicCameraPose_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CGraphics__CHolographic__CHolographicCameraPose_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____FIIterable_1_Windows__CGraphics__CHolographic__CHolographicCameraPose_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CGraphics__CHolographic__CHolographicCameraPose_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CGraphics__CHolographic__CHolographicCameraPose __FIIterable_1_Windows__CGraphics__CHolographic__CHolographicCameraPose;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CGraphics__CHolographic__CHolographicCameraPose;

typedef  struct __FIIterable_1_Windows__CGraphics__CHolographic__CHolographicCameraPoseVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CGraphics__CHolographic__CHolographicCameraPose * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CGraphics__CHolographic__CHolographicCameraPose * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CGraphics__CHolographic__CHolographicCameraPose * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CGraphics__CHolographic__CHolographicCameraPose * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CGraphics__CHolographic__CHolographicCameraPose * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CGraphics__CHolographic__CHolographicCameraPose * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CGraphics__CHolographic__CHolographicCameraPose * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CGraphics__CHolographic__CHolographicCameraPose **first);

    END_INTERFACE
} __FIIterable_1_Windows__CGraphics__CHolographic__CHolographicCameraPoseVtbl;

interface __FIIterable_1_Windows__CGraphics__CHolographic__CHolographicCameraPose
{
    CONST_VTBL struct __FIIterable_1_Windows__CGraphics__CHolographic__CHolographicCameraPoseVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CGraphics__CHolographic__CHolographicCameraPose_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CGraphics__CHolographic__CHolographicCameraPose_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CGraphics__CHolographic__CHolographicCameraPose_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CGraphics__CHolographic__CHolographicCameraPose_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CGraphics__CHolographic__CHolographicCameraPose_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CGraphics__CHolographic__CHolographicCameraPose_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CGraphics__CHolographic__CHolographicCameraPose_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CGraphics__CHolographic__CHolographicCameraPose_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____FIIterator_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer __FIIterator_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer;

typedef struct __FIIterator_1_Windows__CGraphics__CHolographic__CHolographicQuadLayerVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayer * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayer * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CGraphics__CHolographic__CHolographicQuadLayerVtbl;

interface __FIIterator_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer
{
    CONST_VTBL struct __FIIterator_1_Windows__CGraphics__CHolographic__CHolographicQuadLayerVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____FIIterable_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer __FIIterable_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer;

typedef  struct __FIIterable_1_Windows__CGraphics__CHolographic__CHolographicQuadLayerVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer **first);

    END_INTERFACE
} __FIIterable_1_Windows__CGraphics__CHolographic__CHolographicQuadLayerVtbl;

interface __FIIterable_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer
{
    CONST_VTBL struct __FIIterable_1_Windows__CGraphics__CHolographic__CHolographicQuadLayerVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicCamera_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicCamera_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicCamera __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicCamera;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicCamera;

typedef struct __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicCameraVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicCamera * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicCamera * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicCamera * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicCamera * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicCamera * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicCamera * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicCamera * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicCamera * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicCamera * This,
            /* [in] */ __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicCamera * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicCameraVtbl;

interface __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicCamera
{
    CONST_VTBL struct __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicCameraVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicCamera_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicCamera_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicCamera_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicCamera_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicCamera_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicCamera_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicCamera_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicCamera_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicCamera_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicCamera_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicCamera_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicCameraPose_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicCameraPose_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicCameraPose __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicCameraPose;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicCameraPose;

typedef struct __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicCameraPoseVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicCameraPose * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicCameraPose * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicCameraPose * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicCameraPose * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicCameraPose * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicCameraPose * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicCameraPose * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraPose * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicCameraPose * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicCameraPose * This,
            /* [in] */ __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraPose * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicCameraPose * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraPose * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicCameraPoseVtbl;

interface __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicCameraPose
{
    CONST_VTBL struct __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicCameraPoseVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicCameraPose_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicCameraPose_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicCameraPose_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicCameraPose_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicCameraPose_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicCameraPose_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicCameraPose_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicCameraPose_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicCameraPose_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicCameraPose_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicCameraPose_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer;

typedef struct __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicQuadLayerVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayer * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer * This,
            /* [in] */ __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayer * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayer * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicQuadLayerVtbl;

interface __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer
{
    CONST_VTBL struct __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicQuadLayerVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____FIVector_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer_INTERFACE_DEFINED__)
#define ____FIVector_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer_INTERFACE_DEFINED__

typedef interface __FIVector_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer __FIVector_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVector_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer;

typedef struct __FIVector_1_Windows__CGraphics__CHolographic__CHolographicQuadLayerVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVector_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer * This, /* [out] */ __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayer * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer * This,
        /* [in] */ unsigned int index,
        /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayer * *item);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
        __RPC__in __FIVector_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer * This,
        /* [retval][out] */ __RPC__out unsigned int *size);

    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer * This, /* [retval][out] */ __RPC__deref_out_opt __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer **view);

    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer * This,
        /* [in] */ __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayer * item,
        /* [out] */ __RPC__out unsigned int *index,
        /* [retval][out] */ __RPC__out boolean *found);

    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayer * item);

    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayer * item);

    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer * This, /* [in] */ unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer * This, /* [in] */ __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayer * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer * This,
        /* [in] */ unsigned int startIndex,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayer * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer * This,
        /* [in] */ unsigned int count,
        /* [size_is][in] */ __RPC__in_ecount_full(count) __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayer * *value);

    END_INTERFACE
} __FIVector_1_Windows__CGraphics__CHolographic__CHolographicQuadLayerVtbl;

interface __FIVector_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer
{
    CONST_VTBL struct __FIVector_1_Windows__CGraphics__CHolographic__CHolographicQuadLayerVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVector_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVector_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVector_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVector_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVector_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVector_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVector_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVector_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVector_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer_GetView(This,view)	\
    ( (This)->lpVtbl -> GetView(This,view) ) 

#define __FIVector_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVector_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer_SetAt(This,index,item)	\
    ( (This)->lpVtbl -> SetAt(This,index,item) ) 

#define __FIVector_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer_InsertAt(This,index,item)	\
    ( (This)->lpVtbl -> InsertAt(This,index,item) ) 

#define __FIVector_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer_RemoveAt(This,index)	\
    ( (This)->lpVtbl -> RemoveAt(This,index) ) 

#define __FIVector_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer_Append(This,item)	\
    ( (This)->lpVtbl -> Append(This,item) ) 

#define __FIVector_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer_RemoveAtEnd(This)	\
    ( (This)->lpVtbl -> RemoveAtEnd(This) ) 

#define __FIVector_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define __FIVector_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#define __FIVector_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer_ReplaceAll(This,count,value)	\
    ( (This)->lpVtbl -> ReplaceAll(This,count,value) ) 

#endif /* COBJMACROS */



#endif // ____FIVector_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

struct __x_ABI_CWindows_CGraphics_CHolographic_CHolographicStereoTransform;

#if !defined(____FIReference_1_Windows__CGraphics__CHolographic__CHolographicStereoTransform_INTERFACE_DEFINED__)
#define ____FIReference_1_Windows__CGraphics__CHolographic__CHolographicStereoTransform_INTERFACE_DEFINED__

typedef interface __FIReference_1_Windows__CGraphics__CHolographic__CHolographicStereoTransform __FIReference_1_Windows__CGraphics__CHolographic__CHolographicStereoTransform;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIReference_1_Windows__CGraphics__CHolographic__CHolographicStereoTransform;

typedef struct __FIReference_1_Windows__CGraphics__CHolographic__CHolographicStereoTransformVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_Windows__CGraphics__CHolographic__CHolographicStereoTransform * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_Windows__CGraphics__CHolographic__CHolographicStereoTransform * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_Windows__CGraphics__CHolographic__CHolographicStereoTransform * This );

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_Windows__CGraphics__CHolographic__CHolographicStereoTransform * This, 
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_Windows__CGraphics__CHolographic__CHolographicStereoTransform * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_Windows__CGraphics__CHolographic__CHolographicStereoTransform * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_Windows__CGraphics__CHolographic__CHolographicStereoTransform * This, /* [retval][out] */ __RPC__out struct __x_ABI_CWindows_CGraphics_CHolographic_CHolographicStereoTransform *value);
    END_INTERFACE
} __FIReference_1_Windows__CGraphics__CHolographic__CHolographicStereoTransformVtbl;

interface __FIReference_1_Windows__CGraphics__CHolographic__CHolographicStereoTransform
{
    CONST_VTBL struct __FIReference_1_Windows__CGraphics__CHolographic__CHolographicStereoTransformVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIReference_1_Windows__CGraphics__CHolographic__CHolographicStereoTransform_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIReference_1_Windows__CGraphics__CHolographic__CHolographicStereoTransform_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIReference_1_Windows__CGraphics__CHolographic__CHolographicStereoTransform_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIReference_1_Windows__CGraphics__CHolographic__CHolographicStereoTransform_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIReference_1_Windows__CGraphics__CHolographic__CHolographicStereoTransform_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIReference_1_Windows__CGraphics__CHolographic__CHolographicStereoTransform_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIReference_1_Windows__CGraphics__CHolographic__CHolographicStereoTransform_get_Value(This,value)	\
    ( (This)->lpVtbl -> get_Value(This,value) ) 
#endif /* COBJMACROS */


#endif // ____FIReference_1_Windows__CGraphics__CHolographic__CHolographicStereoTransform_INTERFACE_DEFINED__




#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____FITypedEventHandler_2_Windows__CGraphics__CHolographic__CHolographicSpace_Windows__CGraphics__CHolographic__CHolographicSpaceCameraAddedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CGraphics__CHolographic__CHolographicSpace_Windows__CGraphics__CHolographic__CHolographicSpaceCameraAddedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CGraphics__CHolographic__CHolographicSpace_Windows__CGraphics__CHolographic__CHolographicSpaceCameraAddedEventArgs __FITypedEventHandler_2_Windows__CGraphics__CHolographic__CHolographicSpace_Windows__CGraphics__CHolographic__CHolographicSpaceCameraAddedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CGraphics__CHolographic__CHolographicSpace_Windows__CGraphics__CHolographic__CHolographicSpaceCameraAddedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CGraphics__CHolographic__CHolographicSpace_Windows__CGraphics__CHolographic__CHolographicSpaceCameraAddedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CGraphics__CHolographic__CHolographicSpace_Windows__CGraphics__CHolographic__CHolographicSpaceCameraAddedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CGraphics__CHolographic__CHolographicSpace_Windows__CGraphics__CHolographic__CHolographicSpaceCameraAddedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CGraphics__CHolographic__CHolographicSpace_Windows__CGraphics__CHolographic__CHolographicSpaceCameraAddedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CGraphics__CHolographic__CHolographicSpace_Windows__CGraphics__CHolographic__CHolographicSpaceCameraAddedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpace * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceCameraAddedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CGraphics__CHolographic__CHolographicSpace_Windows__CGraphics__CHolographic__CHolographicSpaceCameraAddedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CGraphics__CHolographic__CHolographicSpace_Windows__CGraphics__CHolographic__CHolographicSpaceCameraAddedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CGraphics__CHolographic__CHolographicSpace_Windows__CGraphics__CHolographic__CHolographicSpaceCameraAddedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CGraphics__CHolographic__CHolographicSpace_Windows__CGraphics__CHolographic__CHolographicSpaceCameraAddedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CGraphics__CHolographic__CHolographicSpace_Windows__CGraphics__CHolographic__CHolographicSpaceCameraAddedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CGraphics__CHolographic__CHolographicSpace_Windows__CGraphics__CHolographic__CHolographicSpaceCameraAddedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CGraphics__CHolographic__CHolographicSpace_Windows__CGraphics__CHolographic__CHolographicSpaceCameraAddedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CGraphics__CHolographic__CHolographicSpace_Windows__CGraphics__CHolographic__CHolographicSpaceCameraAddedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____FITypedEventHandler_2_Windows__CGraphics__CHolographic__CHolographicSpace_Windows__CGraphics__CHolographic__CHolographicSpaceCameraRemovedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CGraphics__CHolographic__CHolographicSpace_Windows__CGraphics__CHolographic__CHolographicSpaceCameraRemovedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CGraphics__CHolographic__CHolographicSpace_Windows__CGraphics__CHolographic__CHolographicSpaceCameraRemovedEventArgs __FITypedEventHandler_2_Windows__CGraphics__CHolographic__CHolographicSpace_Windows__CGraphics__CHolographic__CHolographicSpaceCameraRemovedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CGraphics__CHolographic__CHolographicSpace_Windows__CGraphics__CHolographic__CHolographicSpaceCameraRemovedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CGraphics__CHolographic__CHolographicSpace_Windows__CGraphics__CHolographic__CHolographicSpaceCameraRemovedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CGraphics__CHolographic__CHolographicSpace_Windows__CGraphics__CHolographic__CHolographicSpaceCameraRemovedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CGraphics__CHolographic__CHolographicSpace_Windows__CGraphics__CHolographic__CHolographicSpaceCameraRemovedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CGraphics__CHolographic__CHolographicSpace_Windows__CGraphics__CHolographic__CHolographicSpaceCameraRemovedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CGraphics__CHolographic__CHolographicSpace_Windows__CGraphics__CHolographic__CHolographicSpaceCameraRemovedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpace * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceCameraRemovedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CGraphics__CHolographic__CHolographicSpace_Windows__CGraphics__CHolographic__CHolographicSpaceCameraRemovedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CGraphics__CHolographic__CHolographicSpace_Windows__CGraphics__CHolographic__CHolographicSpaceCameraRemovedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CGraphics__CHolographic__CHolographicSpace_Windows__CGraphics__CHolographic__CHolographicSpaceCameraRemovedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CGraphics__CHolographic__CHolographicSpace_Windows__CGraphics__CHolographic__CHolographicSpaceCameraRemovedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CGraphics__CHolographic__CHolographicSpace_Windows__CGraphics__CHolographic__CHolographicSpaceCameraRemovedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CGraphics__CHolographic__CHolographicSpace_Windows__CGraphics__CHolographic__CHolographicSpaceCameraRemovedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CGraphics__CHolographic__CHolographicSpace_Windows__CGraphics__CHolographic__CHolographicSpaceCameraRemovedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CGraphics__CHolographic__CHolographicSpace_Windows__CGraphics__CHolographic__CHolographicSpaceCameraRemovedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

struct __x_ABI_CWindows_CPerception_CSpatial_CSpatialBoundingFrustum;

#if !defined(____FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingFrustum_INTERFACE_DEFINED__)
#define ____FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingFrustum_INTERFACE_DEFINED__

typedef interface __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingFrustum __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingFrustum;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingFrustum;

typedef struct __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingFrustumVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingFrustum * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingFrustum * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingFrustum * This );

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingFrustum * This, 
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingFrustum * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingFrustum * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingFrustum * This, /* [retval][out] */ __RPC__out struct __x_ABI_CWindows_CPerception_CSpatial_CSpatialBoundingFrustum *value);
    END_INTERFACE
} __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingFrustumVtbl;

interface __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingFrustum
{
    CONST_VTBL struct __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingFrustumVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingFrustum_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingFrustum_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingFrustum_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingFrustum_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingFrustum_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingFrustum_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingFrustum_get_Value(This,value)	\
    ( (This)->lpVtbl -> get_Value(This,value) ) 
#endif /* COBJMACROS */


#endif // ____FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingFrustum_INTERFACE_DEFINED__



#if !defined(____FIEventHandler_1_IInspectable_INTERFACE_DEFINED__)
#define ____FIEventHandler_1_IInspectable_INTERFACE_DEFINED__

typedef interface __FIEventHandler_1_IInspectable __FIEventHandler_1_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIEventHandler_1_IInspectable;

typedef struct __FIEventHandler_1_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIEventHandler_1_IInspectable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIEventHandler_1_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIEventHandler_1_IInspectable * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIEventHandler_1_IInspectable * This,/* [in] */ __RPC__in_opt IInspectable *sender,/* [in] */ __RPC__in_opt IInspectable * *e);
    END_INTERFACE
} __FIEventHandler_1_IInspectableVtbl;

interface __FIEventHandler_1_IInspectable
{
    CONST_VTBL struct __FIEventHandler_1_IInspectableVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIEventHandler_1_IInspectable_QueryInterface(This,riid,ppvObject)	\
        ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIEventHandler_1_IInspectable_AddRef(This)	\
        ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIEventHandler_1_IInspectable_Release(This)	\
        ( (This)->lpVtbl -> Release(This) ) 

#define __FIEventHandler_1_IInspectable_Invoke(This,sender,e)	\
        ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */


#endif // ____FIEventHandler_1_IInspectable_INTERFACE_DEFINED__



#ifndef ____x_ABI_CWindows_CFoundation_CIDeferral_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIDeferral_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIDeferral __x_ABI_CWindows_CFoundation_CIDeferral;

#endif // ____x_ABI_CWindows_CFoundation_CIDeferral_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIClosable __x_ABI_CWindows_CFoundation_CIClosable;

#endif // ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__





typedef struct __x_ABI_CWindows_CFoundation_CNumerics_CMatrix4x4 __x_ABI_CWindows_CFoundation_CNumerics_CMatrix4x4;


typedef struct __x_ABI_CWindows_CFoundation_CNumerics_CQuaternion __x_ABI_CWindows_CFoundation_CNumerics_CQuaternion;


typedef struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2 __x_ABI_CWindows_CFoundation_CNumerics_CVector2;


typedef struct __x_ABI_CWindows_CFoundation_CNumerics_CVector3 __x_ABI_CWindows_CFoundation_CNumerics_CVector3;





typedef struct __x_ABI_CWindows_CFoundation_CRect __x_ABI_CWindows_CFoundation_CRect;


typedef struct __x_ABI_CWindows_CFoundation_CSize __x_ABI_CWindows_CFoundation_CSize;


typedef struct __x_ABI_CWindows_CFoundation_CTimeSpan __x_ABI_CWindows_CFoundation_CTimeSpan;




#ifndef ____x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DDevice_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DDevice_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DDevice __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DDevice;

#endif // ____x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DDevice_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface;

#endif // ____x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface_FWD_DEFINED__







typedef enum __x_ABI_CWindows_CGraphics_CDirectX_CDirectXPixelFormat __x_ABI_CWindows_CGraphics_CDirectX_CDirectXPixelFormat;




#ifndef ____x_ABI_CWindows_CPerception_CIPerceptionTimestamp_FWD_DEFINED__
#define ____x_ABI_CWindows_CPerception_CIPerceptionTimestamp_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CPerception_CIPerceptionTimestamp __x_ABI_CWindows_CPerception_CIPerceptionTimestamp;

#endif // ____x_ABI_CWindows_CPerception_CIPerceptionTimestamp_FWD_DEFINED__





typedef struct __x_ABI_CWindows_CPerception_CSpatial_CSpatialBoundingFrustum __x_ABI_CWindows_CPerception_CSpatial_CSpatialBoundingFrustum;

#ifndef ____x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem_FWD_DEFINED__
#define ____x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem;

#endif // ____x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CPerception_CSpatial_CISpatialLocator_FWD_DEFINED__
#define ____x_ABI_CWindows_CPerception_CSpatial_CISpatialLocator_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocator __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocator;

#endif // ____x_ABI_CWindows_CPerception_CSpatial_CISpatialLocator_FWD_DEFINED__





#ifndef ____x_ABI_CWindows_CUI_CCore_CICoreWindow_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CCore_CICoreWindow_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CCore_CICoreWindow __x_ABI_CWindows_CUI_CCore_CICoreWindow;

#endif // ____x_ABI_CWindows_CUI_CCore_CICoreWindow_FWD_DEFINED__






typedef enum __x_ABI_CWindows_CGraphics_CHolographic_CHolographicFramePresentResult __x_ABI_CWindows_CGraphics_CHolographic_CHolographicFramePresentResult;


typedef enum __x_ABI_CWindows_CGraphics_CHolographic_CHolographicFramePresentWaitBehavior __x_ABI_CWindows_CGraphics_CHolographic_CHolographicFramePresentWaitBehavior;


typedef enum __x_ABI_CWindows_CGraphics_CHolographic_CHolographicReprojectionMode __x_ABI_CWindows_CGraphics_CHolographic_CHolographicReprojectionMode;


typedef struct __x_ABI_CWindows_CGraphics_CHolographic_CHolographicAdapterId __x_ABI_CWindows_CGraphics_CHolographic_CHolographicAdapterId;


typedef struct __x_ABI_CWindows_CGraphics_CHolographic_CHolographicStereoTransform __x_ABI_CWindows_CGraphics_CHolographic_CHolographicStereoTransform;












































/*
 *
 * Struct Windows.Graphics.Holographic.HolographicFramePresentResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CGraphics_CHolographic_CHolographicFramePresentResult
{
    HolographicFramePresentResult_Success = 0,
    HolographicFramePresentResult_DeviceRemoved = 1,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Struct Windows.Graphics.Holographic.HolographicFramePresentWaitBehavior
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CGraphics_CHolographic_CHolographicFramePresentWaitBehavior
{
    HolographicFramePresentWaitBehavior_WaitForFrameToFinish = 0,
    HolographicFramePresentWaitBehavior_DoNotWaitForFrameToFinish = 1,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Struct Windows.Graphics.Holographic.HolographicReprojectionMode
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CGraphics_CHolographic_CHolographicReprojectionMode
{
    HolographicReprojectionMode_PositionAndOrientation = 0,
    HolographicReprojectionMode_OrientationOnly = 1,
    HolographicReprojectionMode_Disabled = 2,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Struct Windows.Graphics.Holographic.HolographicAdapterId
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

/* [contract] */
struct __x_ABI_CWindows_CGraphics_CHolographic_CHolographicAdapterId
{
    UINT32 LowPart;
    INT32 HighPart;
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Struct Windows.Graphics.Holographic.HolographicStereoTransform
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

/* [contract] */
struct __x_ABI_CWindows_CGraphics_CHolographic_CHolographicStereoTransform
{
    __x_ABI_CWindows_CFoundation_CNumerics_CMatrix4x4 Left;
    __x_ABI_CWindows_CFoundation_CNumerics_CMatrix4x4 Right;
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Graphics.Holographic.IHolographicCamera
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.Graphics.Holographic.HolographicCamera
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Holographic_IHolographicCamera[] = L"Windows.Graphics.Holographic.IHolographicCamera";
/* [object, uuid("E4E98445-9BED-4980-9BA0-E87680D1CB74"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RenderTargetSize )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CSize * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ViewportScaleFactor )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera * This,
        /* [retval, out] */__RPC__out DOUBLE * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ViewportScaleFactor )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera * This,
        /* [in] */DOUBLE value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsStereo )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetNearPlaneDistance )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera * This,
        /* [in] */DOUBLE value
        );
    HRESULT ( STDMETHODCALLTYPE *SetFarPlaneDistance )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera * This,
        /* [in] */DOUBLE value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraVtbl;

interface __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera_get_RenderTargetSize(This,value) \
    ( (This)->lpVtbl->get_RenderTargetSize(This,value) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera_get_ViewportScaleFactor(This,value) \
    ( (This)->lpVtbl->get_ViewportScaleFactor(This,value) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera_put_ViewportScaleFactor(This,value) \
    ( (This)->lpVtbl->put_ViewportScaleFactor(This,value) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera_get_IsStereo(This,value) \
    ( (This)->lpVtbl->get_IsStereo(This,value) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera_get_Id(This,value) \
    ( (This)->lpVtbl->get_Id(This,value) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera_SetNearPlaneDistance(This,value) \
    ( (This)->lpVtbl->SetNearPlaneDistance(This,value) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera_SetFarPlaneDistance(This,value) \
    ( (This)->lpVtbl->SetFarPlaneDistance(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Graphics.Holographic.IHolographicCamera2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Graphics.Holographic.HolographicCamera
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Graphics.Holographic.IHolographicCamera
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Holographic_IHolographicCamera2[] = L"Windows.Graphics.Holographic.IHolographicCamera2";
/* [object, uuid("B55B9F1A-BA8C-4F84-AD79-2E7E1E2450F3"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LeftViewportParameters )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera2 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraViewportParameters * * result
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RightViewportParameters )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera2 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraViewportParameters * * result
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Display )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera2 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplay * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera2Vtbl;

interface __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera2
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera2_get_LeftViewportParameters(This,result) \
    ( (This)->lpVtbl->get_LeftViewportParameters(This,result) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera2_get_RightViewportParameters(This,result) \
    ( (This)->lpVtbl->get_RightViewportParameters(This,result) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera2_get_Display(This,result) \
    ( (This)->lpVtbl->get_Display(This,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera2;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Graphics.Holographic.IHolographicCamera3
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.Graphics.Holographic.HolographicCamera
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Graphics.Holographic.IHolographicCamera2
 *     Windows.Graphics.Holographic.IHolographicCamera
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Holographic_IHolographicCamera3[] = L"Windows.Graphics.Holographic.IHolographicCamera3";
/* [object, uuid("45AA4FB3-7B59-524E-4A3F-4A6AD6650477"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera3 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera3 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera3 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera3 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera3 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera3 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsPrimaryLayerEnabled )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera3 * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_IsPrimaryLayerEnabled )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera3 * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MaxQuadLayerCount )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera3 * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_QuadLayers )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera3 * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera3Vtbl;

interface __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera3
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera3Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera3_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera3_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera3_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera3_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera3_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera3_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera3_get_IsPrimaryLayerEnabled(This,value) \
    ( (This)->lpVtbl->get_IsPrimaryLayerEnabled(This,value) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera3_put_IsPrimaryLayerEnabled(This,value) \
    ( (This)->lpVtbl->put_IsPrimaryLayerEnabled(This,value) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera3_get_MaxQuadLayerCount(This,value) \
    ( (This)->lpVtbl->get_MaxQuadLayerCount(This,value) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera3_get_QuadLayers(This,value) \
    ( (This)->lpVtbl->get_QuadLayers(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera3;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera3_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.Graphics.Holographic.IHolographicCameraPose
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.Graphics.Holographic.HolographicCameraPose
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraPose_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraPose_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Holographic_IHolographicCameraPose[] = L"Windows.Graphics.Holographic.IHolographicCameraPose";
/* [object, uuid("0D7D7E30-12DE-45BD-912B-C7F6561599D1"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraPoseVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraPose * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraPose * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraPose * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraPose * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraPose * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraPose * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_HolographicCamera )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraPose * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Viewport )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraPose * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CRect * value
        );
    HRESULT ( STDMETHODCALLTYPE *TryGetViewTransform )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraPose * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem * coordinateSystem,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CGraphics__CHolographic__CHolographicStereoTransform * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ProjectionTransform )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraPose * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CGraphics_CHolographic_CHolographicStereoTransform * value
        );
    HRESULT ( STDMETHODCALLTYPE *TryGetCullingFrustum )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraPose * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem * coordinateSystem,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingFrustum * * value
        );
    HRESULT ( STDMETHODCALLTYPE *TryGetVisibleFrustum )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraPose * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem * coordinateSystem,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingFrustum * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_NearPlaneDistance )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraPose * This,
        /* [retval, out] */__RPC__out DOUBLE * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_FarPlaneDistance )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraPose * This,
        /* [retval, out] */__RPC__out DOUBLE * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraPoseVtbl;

interface __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraPose
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraPoseVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraPose_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraPose_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraPose_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraPose_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraPose_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraPose_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraPose_get_HolographicCamera(This,value) \
    ( (This)->lpVtbl->get_HolographicCamera(This,value) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraPose_get_Viewport(This,value) \
    ( (This)->lpVtbl->get_Viewport(This,value) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraPose_TryGetViewTransform(This,coordinateSystem,value) \
    ( (This)->lpVtbl->TryGetViewTransform(This,coordinateSystem,value) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraPose_get_ProjectionTransform(This,value) \
    ( (This)->lpVtbl->get_ProjectionTransform(This,value) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraPose_TryGetCullingFrustum(This,coordinateSystem,value) \
    ( (This)->lpVtbl->TryGetCullingFrustum(This,coordinateSystem,value) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraPose_TryGetVisibleFrustum(This,coordinateSystem,value) \
    ( (This)->lpVtbl->TryGetVisibleFrustum(This,coordinateSystem,value) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraPose_get_NearPlaneDistance(This,value) \
    ( (This)->lpVtbl->get_NearPlaneDistance(This,value) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraPose_get_FarPlaneDistance(This,value) \
    ( (This)->lpVtbl->get_FarPlaneDistance(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraPose;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraPose_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Graphics.Holographic.IHolographicCameraRenderingParameters
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.Graphics.Holographic.HolographicCameraRenderingParameters
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Holographic_IHolographicCameraRenderingParameters[] = L"Windows.Graphics.Holographic.IHolographicCameraRenderingParameters";
/* [object, uuid("8EAC2ED1-5BF4-4E16-8236-AE0800C11D0D"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParametersVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [overload] */HRESULT ( STDMETHODCALLTYPE *SetFocusPoint )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem * coordinateSystem,
        /* [in] */__x_ABI_CWindows_CFoundation_CNumerics_CVector3 position
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *SetFocusPointWithNormal )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem * coordinateSystem,
        /* [in] */__x_ABI_CWindows_CFoundation_CNumerics_CVector3 position,
        /* [in] */__x_ABI_CWindows_CFoundation_CNumerics_CVector3 normal
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *SetFocusPointWithNormalLinearVelocity )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem * coordinateSystem,
        /* [in] */__x_ABI_CWindows_CFoundation_CNumerics_CVector3 position,
        /* [in] */__x_ABI_CWindows_CFoundation_CNumerics_CVector3 normal,
        /* [in] */__x_ABI_CWindows_CFoundation_CNumerics_CVector3 linearVelocity
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Direct3D11Device )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DDevice * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Direct3D11BackBuffer )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParametersVtbl;

interface __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParametersVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters_SetFocusPoint(This,coordinateSystem,position) \
    ( (This)->lpVtbl->SetFocusPoint(This,coordinateSystem,position) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters_SetFocusPointWithNormal(This,coordinateSystem,position,normal) \
    ( (This)->lpVtbl->SetFocusPointWithNormal(This,coordinateSystem,position,normal) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters_SetFocusPointWithNormalLinearVelocity(This,coordinateSystem,position,normal,linearVelocity) \
    ( (This)->lpVtbl->SetFocusPointWithNormalLinearVelocity(This,coordinateSystem,position,normal,linearVelocity) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters_get_Direct3D11Device(This,value) \
    ( (This)->lpVtbl->get_Direct3D11Device(This,value) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters_get_Direct3D11BackBuffer(This,value) \
    ( (This)->lpVtbl->get_Direct3D11BackBuffer(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Graphics.Holographic.IHolographicCameraRenderingParameters2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Graphics.Holographic.HolographicCameraRenderingParameters
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Graphics.Holographic.IHolographicCameraRenderingParameters
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Holographic_IHolographicCameraRenderingParameters2[] = L"Windows.Graphics.Holographic.IHolographicCameraRenderingParameters2";
/* [object, uuid("261270E3-B696-4634-94D6-BE0681643599"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ReprojectionMode )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters2 * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CGraphics_CHolographic_CHolographicReprojectionMode * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ReprojectionMode )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters2 * This,
        /* [in] */__x_ABI_CWindows_CGraphics_CHolographic_CHolographicReprojectionMode value
        );
    HRESULT ( STDMETHODCALLTYPE *CommitDirect3D11DepthBuffer )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters2 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters2Vtbl;

interface __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters2
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters2_get_ReprojectionMode(This,value) \
    ( (This)->lpVtbl->get_ReprojectionMode(This,value) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters2_put_ReprojectionMode(This,value) \
    ( (This)->lpVtbl->put_ReprojectionMode(This,value) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters2_CommitDirect3D11DepthBuffer(This,value) \
    ( (This)->lpVtbl->CommitDirect3D11DepthBuffer(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters2;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Graphics.Holographic.IHolographicCameraRenderingParameters3
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.Graphics.Holographic.HolographicCameraRenderingParameters
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Graphics.Holographic.IHolographicCameraRenderingParameters2
 *     Windows.Graphics.Holographic.IHolographicCameraRenderingParameters
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Holographic_IHolographicCameraRenderingParameters3[] = L"Windows.Graphics.Holographic.IHolographicCameraRenderingParameters3";
/* [object, uuid("B1AA513F-136D-4B06-B9D4-E4B914CD0683"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters3 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters3 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters3 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters3 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters3 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters3 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsContentProtectionEnabled )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters3 * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_IsContentProtectionEnabled )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters3 * This,
        /* [in] */boolean value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters3Vtbl;

interface __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters3
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters3Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters3_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters3_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters3_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters3_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters3_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters3_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters3_get_IsContentProtectionEnabled(This,value) \
    ( (This)->lpVtbl->get_IsContentProtectionEnabled(This,value) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters3_put_IsContentProtectionEnabled(This,value) \
    ( (This)->lpVtbl->put_IsContentProtectionEnabled(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters3;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters3_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.Graphics.Holographic.IHolographicCameraViewportParameters
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Graphics.Holographic.HolographicCameraViewportParameters
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraViewportParameters_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraViewportParameters_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Holographic_IHolographicCameraViewportParameters[] = L"Windows.Graphics.Holographic.IHolographicCameraViewportParameters";
/* [object, uuid("80CDF3F7-842A-41E1-93ED-5692AB1FBB10"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraViewportParametersVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraViewportParameters * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraViewportParameters * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraViewportParameters * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraViewportParameters * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraViewportParameters * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraViewportParameters * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_HiddenAreaMesh )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraViewportParameters * This,
        /* [out] */__RPC__out UINT32 * __valueSize,
        /* [size_is(, *(__valueSize)), retval, out] */__RPC__deref_out_ecount_full_opt(*(__valueSize)) __x_ABI_CWindows_CFoundation_CNumerics_CVector2 * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_VisibleAreaMesh )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraViewportParameters * This,
        /* [out] */__RPC__out UINT32 * __valueSize,
        /* [size_is(, *(__valueSize)), retval, out] */__RPC__deref_out_ecount_full_opt(*(__valueSize)) __x_ABI_CWindows_CFoundation_CNumerics_CVector2 * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraViewportParametersVtbl;

interface __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraViewportParameters
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraViewportParametersVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraViewportParameters_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraViewportParameters_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraViewportParameters_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraViewportParameters_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraViewportParameters_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraViewportParameters_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraViewportParameters_get_HiddenAreaMesh(This,__valueSize,value) \
    ( (This)->lpVtbl->get_HiddenAreaMesh(This,__valueSize,value) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraViewportParameters_get_VisibleAreaMesh(This,__valueSize,value) \
    ( (This)->lpVtbl->get_VisibleAreaMesh(This,__valueSize,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraViewportParameters;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraViewportParameters_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Graphics.Holographic.IHolographicDisplay
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Graphics.Holographic.HolographicDisplay
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplay_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplay_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Holographic_IHolographicDisplay[] = L"Windows.Graphics.Holographic.IHolographicDisplay";
/* [object, uuid("9ACEA414-1D9F-4090-A388-90C06F6EAE9C"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplayVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplay * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplay * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplay * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplay * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplay * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplay * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DisplayName )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplay * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MaxViewportSize )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplay * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CSize * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsStereo )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplay * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsOpaque )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplay * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AdapterId )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplay * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CGraphics_CHolographic_CHolographicAdapterId * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SpatialLocator )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplay * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocator * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplayVtbl;

interface __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplay
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplayVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplay_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplay_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplay_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplay_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplay_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplay_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplay_get_DisplayName(This,value) \
    ( (This)->lpVtbl->get_DisplayName(This,value) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplay_get_MaxViewportSize(This,value) \
    ( (This)->lpVtbl->get_MaxViewportSize(This,value) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplay_get_IsStereo(This,value) \
    ( (This)->lpVtbl->get_IsStereo(This,value) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplay_get_IsOpaque(This,value) \
    ( (This)->lpVtbl->get_IsOpaque(This,value) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplay_get_AdapterId(This,value) \
    ( (This)->lpVtbl->get_AdapterId(This,value) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplay_get_SpatialLocator(This,value) \
    ( (This)->lpVtbl->get_SpatialLocator(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplay;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplay_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Graphics.Holographic.IHolographicDisplay2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.Graphics.Holographic.HolographicDisplay
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplay2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplay2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Holographic_IHolographicDisplay2[] = L"Windows.Graphics.Holographic.IHolographicDisplay2";
/* [object, uuid("75AC3F82-E755-436C-8D96-4D32D131473E"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplay2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplay2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplay2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplay2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplay2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplay2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplay2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RefreshRate )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplay2 * This,
        /* [retval, out] */__RPC__out DOUBLE * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplay2Vtbl;

interface __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplay2
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplay2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplay2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplay2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplay2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplay2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplay2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplay2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplay2_get_RefreshRate(This,value) \
    ( (This)->lpVtbl->get_RefreshRate(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplay2;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplay2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.Graphics.Holographic.IHolographicDisplayStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Graphics.Holographic.HolographicDisplay
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplayStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplayStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Holographic_IHolographicDisplayStatics[] = L"Windows.Graphics.Holographic.IHolographicDisplayStatics";
/* [object, uuid("CB374983-E7B0-4841-8355-3AE5B536E9A4"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplayStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplayStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplayStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplayStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplayStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplayStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplayStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetDefault )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplayStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplay * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplayStaticsVtbl;

interface __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplayStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplayStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplayStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplayStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplayStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplayStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplayStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplayStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplayStatics_GetDefault(This,result) \
    ( (This)->lpVtbl->GetDefault(This,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplayStatics;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplayStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Graphics.Holographic.IHolographicFrame
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.Graphics.Holographic.HolographicFrame
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFrame_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFrame_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Holographic_IHolographicFrame[] = L"Windows.Graphics.Holographic.IHolographicFrame";
/* [object, uuid("C6988EB6-A8B9-3054-A6EB-D624B6536375"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFrameVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFrame * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFrame * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFrame * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFrame * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFrame * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFrame * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AddedCameras )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFrame * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicCamera * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RemovedCameras )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFrame * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicCamera * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetRenderingParameters )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFrame * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraPose * cameraPose,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Duration )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFrame * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CurrentPrediction )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFrame * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFramePrediction * * value
        );
    HRESULT ( STDMETHODCALLTYPE *UpdateCurrentPrediction )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFrame * This
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *PresentUsingCurrentPrediction )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFrame * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CGraphics_CHolographic_CHolographicFramePresentResult * result
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *PresentUsingCurrentPredictionWithBehavior )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFrame * This,
        /* [in] */__x_ABI_CWindows_CGraphics_CHolographic_CHolographicFramePresentWaitBehavior waitBehavior,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CGraphics_CHolographic_CHolographicFramePresentResult * result
        );
    HRESULT ( STDMETHODCALLTYPE *WaitForFrameToFinish )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFrame * This
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFrameVtbl;

interface __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFrame
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFrameVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFrame_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFrame_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFrame_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFrame_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFrame_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFrame_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFrame_get_AddedCameras(This,value) \
    ( (This)->lpVtbl->get_AddedCameras(This,value) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFrame_get_RemovedCameras(This,value) \
    ( (This)->lpVtbl->get_RemovedCameras(This,value) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFrame_GetRenderingParameters(This,cameraPose,value) \
    ( (This)->lpVtbl->GetRenderingParameters(This,cameraPose,value) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFrame_get_Duration(This,value) \
    ( (This)->lpVtbl->get_Duration(This,value) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFrame_get_CurrentPrediction(This,value) \
    ( (This)->lpVtbl->get_CurrentPrediction(This,value) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFrame_UpdateCurrentPrediction(This) \
    ( (This)->lpVtbl->UpdateCurrentPrediction(This) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFrame_PresentUsingCurrentPrediction(This,result) \
    ( (This)->lpVtbl->PresentUsingCurrentPrediction(This,result) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFrame_PresentUsingCurrentPredictionWithBehavior(This,waitBehavior,result) \
    ( (This)->lpVtbl->PresentUsingCurrentPredictionWithBehavior(This,waitBehavior,result) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFrame_WaitForFrameToFinish(This) \
    ( (This)->lpVtbl->WaitForFrameToFinish(This) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFrame;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFrame_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Graphics.Holographic.IHolographicFrame2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.Graphics.Holographic.HolographicFrame
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Graphics.Holographic.IHolographicFrame
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFrame2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFrame2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Holographic_IHolographicFrame2[] = L"Windows.Graphics.Holographic.IHolographicFrame2";
/* [object, uuid("283F37BF-3BF2-5E91-6633-870574E6F217"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFrame2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFrame2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFrame2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFrame2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFrame2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFrame2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFrame2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetQuadLayerUpdateParameters )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFrame2 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayer * layer,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayerUpdateParameters * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFrame2Vtbl;

interface __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFrame2
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFrame2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFrame2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFrame2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFrame2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFrame2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFrame2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFrame2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFrame2_GetQuadLayerUpdateParameters(This,layer,value) \
    ( (This)->lpVtbl->GetQuadLayerUpdateParameters(This,layer,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFrame2;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFrame2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.Graphics.Holographic.IHolographicFramePrediction
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.Graphics.Holographic.HolographicFramePrediction
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFramePrediction_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFramePrediction_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Holographic_IHolographicFramePrediction[] = L"Windows.Graphics.Holographic.IHolographicFramePrediction";
/* [object, uuid("520F4DE1-5C0A-4E79-A81E-6ABE02BB2739"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFramePredictionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFramePrediction * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFramePrediction * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFramePrediction * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFramePrediction * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFramePrediction * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFramePrediction * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CameraPoses )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFramePrediction * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicCameraPose * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Timestamp )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFramePrediction * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CPerception_CIPerceptionTimestamp * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFramePredictionVtbl;

interface __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFramePrediction
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFramePredictionVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFramePrediction_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFramePrediction_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFramePrediction_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFramePrediction_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFramePrediction_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFramePrediction_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFramePrediction_get_CameraPoses(This,value) \
    ( (This)->lpVtbl->get_CameraPoses(This,value) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFramePrediction_get_Timestamp(This,value) \
    ( (This)->lpVtbl->get_Timestamp(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFramePrediction;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFramePrediction_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Graphics.Holographic.IHolographicQuadLayer
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.Graphics.Holographic.HolographicQuadLayer
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayer_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayer_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Holographic_IHolographicQuadLayer[] = L"Windows.Graphics.Holographic.IHolographicQuadLayer";
/* [object, uuid("903460C9-C9D9-5D5C-41AC-A2D5AB0FD331"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayer * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayer * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayer * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayer * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayer * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayer * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PixelFormat )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayer * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CGraphics_CDirectX_CDirectXPixelFormat * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayer * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CSize * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayerVtbl;

interface __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayer
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayer_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayer_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayer_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayer_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayer_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayer_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayer_get_PixelFormat(This,value) \
    ( (This)->lpVtbl->get_PixelFormat(This,value) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayer_get_Size(This,value) \
    ( (This)->lpVtbl->get_Size(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayer;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayer_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.Graphics.Holographic.IHolographicQuadLayerFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.Graphics.Holographic.HolographicQuadLayer
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayerFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayerFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Holographic_IHolographicQuadLayerFactory[] = L"Windows.Graphics.Holographic.IHolographicQuadLayerFactory";
/* [object, uuid("A67538F3-5A14-5A10-489A-455065B37B76"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayerFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayerFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayerFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayerFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayerFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayerFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayerFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayerFactory * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CSize size,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayer * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateWithPixelFormat )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayerFactory * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CSize size,
        /* [in] */__x_ABI_CWindows_CGraphics_CDirectX_CDirectXPixelFormat pixelFormat,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayer * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayerFactoryVtbl;

interface __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayerFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayerFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayerFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayerFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayerFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayerFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayerFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayerFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayerFactory_Create(This,size,value) \
    ( (This)->lpVtbl->Create(This,size,value) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayerFactory_CreateWithPixelFormat(This,size,pixelFormat,value) \
    ( (This)->lpVtbl->CreateWithPixelFormat(This,size,pixelFormat,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayerFactory;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayerFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.Graphics.Holographic.IHolographicQuadLayerUpdateParameters
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.Graphics.Holographic.HolographicQuadLayerUpdateParameters
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayerUpdateParameters_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayerUpdateParameters_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Holographic_IHolographicQuadLayerUpdateParameters[] = L"Windows.Graphics.Holographic.IHolographicQuadLayerUpdateParameters";
/* [object, uuid("2B0EA3B0-798D-5BCA-55C2-2C0C762EBB08"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayerUpdateParametersVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayerUpdateParameters * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayerUpdateParameters * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayerUpdateParameters * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayerUpdateParameters * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayerUpdateParameters * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayerUpdateParameters * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *AcquireBufferToUpdateContent )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayerUpdateParameters * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface * * value
        );
    HRESULT ( STDMETHODCALLTYPE *UpdateViewport )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayerUpdateParameters * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CRect value
        );
    HRESULT ( STDMETHODCALLTYPE *UpdateContentProtectionEnabled )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayerUpdateParameters * This,
        /* [in] */boolean value
        );
    HRESULT ( STDMETHODCALLTYPE *UpdateExtents )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayerUpdateParameters * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CNumerics_CVector2 value
        );
    HRESULT ( STDMETHODCALLTYPE *UpdateLocationWithStationaryMode )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayerUpdateParameters * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem * coordinateSystem,
        /* [in] */__x_ABI_CWindows_CFoundation_CNumerics_CVector3 position,
        /* [in] */__x_ABI_CWindows_CFoundation_CNumerics_CQuaternion orientation
        );
    HRESULT ( STDMETHODCALLTYPE *UpdateLocationWithDisplayRelativeMode )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayerUpdateParameters * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CNumerics_CVector3 position,
        /* [in] */__x_ABI_CWindows_CFoundation_CNumerics_CQuaternion orientation
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayerUpdateParametersVtbl;

interface __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayerUpdateParameters
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayerUpdateParametersVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayerUpdateParameters_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayerUpdateParameters_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayerUpdateParameters_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayerUpdateParameters_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayerUpdateParameters_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayerUpdateParameters_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayerUpdateParameters_AcquireBufferToUpdateContent(This,value) \
    ( (This)->lpVtbl->AcquireBufferToUpdateContent(This,value) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayerUpdateParameters_UpdateViewport(This,value) \
    ( (This)->lpVtbl->UpdateViewport(This,value) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayerUpdateParameters_UpdateContentProtectionEnabled(This,value) \
    ( (This)->lpVtbl->UpdateContentProtectionEnabled(This,value) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayerUpdateParameters_UpdateExtents(This,value) \
    ( (This)->lpVtbl->UpdateExtents(This,value) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayerUpdateParameters_UpdateLocationWithStationaryMode(This,coordinateSystem,position,orientation) \
    ( (This)->lpVtbl->UpdateLocationWithStationaryMode(This,coordinateSystem,position,orientation) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayerUpdateParameters_UpdateLocationWithDisplayRelativeMode(This,position,orientation) \
    ( (This)->lpVtbl->UpdateLocationWithDisplayRelativeMode(This,position,orientation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayerUpdateParameters;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayerUpdateParameters_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.Graphics.Holographic.IHolographicSpace
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.Graphics.Holographic.HolographicSpace
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpace_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpace_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Holographic_IHolographicSpace[] = L"Windows.Graphics.Holographic.IHolographicSpace";
/* [object, uuid("4380DBA6-5E78-434F-807C-3433D1EFE8B7"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpace * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpace * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpace * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpace * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpace * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpace * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PrimaryAdapterId )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpace * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CGraphics_CHolographic_CHolographicAdapterId * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetDirect3D11Device )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpace * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DDevice * value
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_CameraAdded )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpace * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CGraphics__CHolographic__CHolographicSpace_Windows__CGraphics__CHolographic__CHolographicSpaceCameraAddedEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * cookie
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_CameraAdded )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpace * This,
        /* [in] */EventRegistrationToken cookie
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_CameraRemoved )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpace * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CGraphics__CHolographic__CHolographicSpace_Windows__CGraphics__CHolographic__CHolographicSpaceCameraRemovedEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * cookie
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_CameraRemoved )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpace * This,
        /* [in] */EventRegistrationToken cookie
        );
    HRESULT ( STDMETHODCALLTYPE *CreateNextFrame )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpace * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFrame * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceVtbl;

interface __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpace
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpace_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpace_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpace_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpace_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpace_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpace_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpace_get_PrimaryAdapterId(This,value) \
    ( (This)->lpVtbl->get_PrimaryAdapterId(This,value) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpace_SetDirect3D11Device(This,value) \
    ( (This)->lpVtbl->SetDirect3D11Device(This,value) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpace_add_CameraAdded(This,handler,cookie) \
    ( (This)->lpVtbl->add_CameraAdded(This,handler,cookie) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpace_remove_CameraAdded(This,cookie) \
    ( (This)->lpVtbl->remove_CameraAdded(This,cookie) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpace_add_CameraRemoved(This,handler,cookie) \
    ( (This)->lpVtbl->add_CameraRemoved(This,handler,cookie) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpace_remove_CameraRemoved(This,cookie) \
    ( (This)->lpVtbl->remove_CameraRemoved(This,cookie) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpace_CreateNextFrame(This,value) \
    ( (This)->lpVtbl->CreateNextFrame(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpace;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpace_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Graphics.Holographic.IHolographicSpaceCameraAddedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.Graphics.Holographic.HolographicSpaceCameraAddedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceCameraAddedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceCameraAddedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Holographic_IHolographicSpaceCameraAddedEventArgs[] = L"Windows.Graphics.Holographic.IHolographicSpaceCameraAddedEventArgs";
/* [object, uuid("58F1DA35-BBB3-3C8F-993D-6C80E7FEB99F"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceCameraAddedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceCameraAddedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceCameraAddedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceCameraAddedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceCameraAddedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceCameraAddedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceCameraAddedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Camera )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceCameraAddedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceCameraAddedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIDeferral * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceCameraAddedEventArgsVtbl;

interface __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceCameraAddedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceCameraAddedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceCameraAddedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceCameraAddedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceCameraAddedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceCameraAddedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceCameraAddedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceCameraAddedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceCameraAddedEventArgs_get_Camera(This,value) \
    ( (This)->lpVtbl->get_Camera(This,value) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceCameraAddedEventArgs_GetDeferral(This,value) \
    ( (This)->lpVtbl->GetDeferral(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceCameraAddedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceCameraAddedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Graphics.Holographic.IHolographicSpaceCameraRemovedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.Graphics.Holographic.HolographicSpaceCameraRemovedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceCameraRemovedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceCameraRemovedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Holographic_IHolographicSpaceCameraRemovedEventArgs[] = L"Windows.Graphics.Holographic.IHolographicSpaceCameraRemovedEventArgs";
/* [object, uuid("805444A8-F2AE-322E-8DA9-836A0A95A4C1"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceCameraRemovedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceCameraRemovedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceCameraRemovedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceCameraRemovedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceCameraRemovedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceCameraRemovedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceCameraRemovedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Camera )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceCameraRemovedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceCameraRemovedEventArgsVtbl;

interface __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceCameraRemovedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceCameraRemovedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceCameraRemovedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceCameraRemovedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceCameraRemovedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceCameraRemovedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceCameraRemovedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceCameraRemovedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceCameraRemovedEventArgs_get_Camera(This,value) \
    ( (This)->lpVtbl->get_Camera(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceCameraRemovedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceCameraRemovedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Graphics.Holographic.IHolographicSpaceStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.Graphics.Holographic.HolographicSpace
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Holographic_IHolographicSpaceStatics[] = L"Windows.Graphics.Holographic.IHolographicSpaceStatics";
/* [object, uuid("364E6064-C8F2-3BA1-8391-66B8489E67FD"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateForCoreWindow )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CCore_CICoreWindow * window,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpace * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceStaticsVtbl;

interface __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceStatics_CreateForCoreWindow(This,window,value) \
    ( (This)->lpVtbl->CreateForCoreWindow(This,window,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceStatics;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Graphics.Holographic.IHolographicSpaceStatics2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Graphics.Holographic.HolographicSpace
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Holographic_IHolographicSpaceStatics2[] = L"Windows.Graphics.Holographic.IHolographicSpaceStatics2";
/* [object, uuid("0E777088-75FC-48AF-8758-0652F6F07C59"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceStatics2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceStatics2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceStatics2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceStatics2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceStatics2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceStatics2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsSupported )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceStatics2 * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsAvailable )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceStatics2 * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_IsAvailableChanged )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceStatics2 * This,
        /* [in] */__RPC__in_opt __FIEventHandler_1_IInspectable * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_IsAvailableChanged )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceStatics2 * This,
        /* [in] */EventRegistrationToken token
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceStatics2Vtbl;

interface __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceStatics2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceStatics2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceStatics2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceStatics2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceStatics2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceStatics2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceStatics2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceStatics2_get_IsSupported(This,value) \
    ( (This)->lpVtbl->get_IsSupported(This,value) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceStatics2_get_IsAvailable(This,value) \
    ( (This)->lpVtbl->get_IsAvailable(This,value) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceStatics2_add_IsAvailableChanged(This,handler,token) \
    ( (This)->lpVtbl->add_IsAvailableChanged(This,handler,token) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceStatics2_remove_IsAvailableChanged(This,token) \
    ( (This)->lpVtbl->remove_IsAvailableChanged(This,token) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceStatics2;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Graphics.Holographic.IHolographicSpaceStatics3
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.Graphics.Holographic.HolographicSpace
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceStatics3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceStatics3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Holographic_IHolographicSpaceStatics3[] = L"Windows.Graphics.Holographic.IHolographicSpaceStatics3";
/* [object, uuid("3B00DE3D-B1A3-4DFE-8E79-FEC5909E6DF8"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceStatics3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceStatics3 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceStatics3 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceStatics3 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceStatics3 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceStatics3 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceStatics3 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsConfigured )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceStatics3 * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceStatics3Vtbl;

interface __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceStatics3
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceStatics3Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceStatics3_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceStatics3_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceStatics3_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceStatics3_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceStatics3_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceStatics3_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceStatics3_get_IsConfigured(This,value) \
    ( (This)->lpVtbl->get_IsConfigured(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceStatics3;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceStatics3_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Class Windows.Graphics.Holographic.HolographicCamera
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Graphics.Holographic.IHolographicCamera ** Default Interface **
 *    Windows.Graphics.Holographic.IHolographicCamera2
 *    Windows.Graphics.Holographic.IHolographicCamera3
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef RUNTIMECLASS_Windows_Graphics_Holographic_HolographicCamera_DEFINED
#define RUNTIMECLASS_Windows_Graphics_Holographic_HolographicCamera_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Holographic_HolographicCamera[] = L"Windows.Graphics.Holographic.HolographicCamera";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Class Windows.Graphics.Holographic.HolographicCameraPose
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Graphics.Holographic.IHolographicCameraPose ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef RUNTIMECLASS_Windows_Graphics_Holographic_HolographicCameraPose_DEFINED
#define RUNTIMECLASS_Windows_Graphics_Holographic_HolographicCameraPose_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Holographic_HolographicCameraPose[] = L"Windows.Graphics.Holographic.HolographicCameraPose";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Class Windows.Graphics.Holographic.HolographicCameraRenderingParameters
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Graphics.Holographic.IHolographicCameraRenderingParameters ** Default Interface **
 *    Windows.Graphics.Holographic.IHolographicCameraRenderingParameters2
 *    Windows.Graphics.Holographic.IHolographicCameraRenderingParameters3
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef RUNTIMECLASS_Windows_Graphics_Holographic_HolographicCameraRenderingParameters_DEFINED
#define RUNTIMECLASS_Windows_Graphics_Holographic_HolographicCameraRenderingParameters_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Holographic_HolographicCameraRenderingParameters[] = L"Windows.Graphics.Holographic.HolographicCameraRenderingParameters";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Class Windows.Graphics.Holographic.HolographicCameraViewportParameters
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Graphics.Holographic.IHolographicCameraViewportParameters ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_Graphics_Holographic_HolographicCameraViewportParameters_DEFINED
#define RUNTIMECLASS_Windows_Graphics_Holographic_HolographicCameraViewportParameters_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Holographic_HolographicCameraViewportParameters[] = L"Windows.Graphics.Holographic.HolographicCameraViewportParameters";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.Graphics.Holographic.HolographicDisplay
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Graphics.Holographic.IHolographicDisplayStatics interface starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Graphics.Holographic.IHolographicDisplay ** Default Interface **
 *    Windows.Graphics.Holographic.IHolographicDisplay2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_Graphics_Holographic_HolographicDisplay_DEFINED
#define RUNTIMECLASS_Windows_Graphics_Holographic_HolographicDisplay_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Holographic_HolographicDisplay[] = L"Windows.Graphics.Holographic.HolographicDisplay";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.Graphics.Holographic.HolographicFrame
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Graphics.Holographic.IHolographicFrame ** Default Interface **
 *    Windows.Graphics.Holographic.IHolographicFrame2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef RUNTIMECLASS_Windows_Graphics_Holographic_HolographicFrame_DEFINED
#define RUNTIMECLASS_Windows_Graphics_Holographic_HolographicFrame_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Holographic_HolographicFrame[] = L"Windows.Graphics.Holographic.HolographicFrame";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Class Windows.Graphics.Holographic.HolographicFramePrediction
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Graphics.Holographic.IHolographicFramePrediction ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef RUNTIMECLASS_Windows_Graphics_Holographic_HolographicFramePrediction_DEFINED
#define RUNTIMECLASS_Windows_Graphics_Holographic_HolographicFramePrediction_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Holographic_HolographicFramePrediction[] = L"Windows.Graphics.Holographic.HolographicFramePrediction";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Class Windows.Graphics.Holographic.HolographicQuadLayer
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Graphics.Holographic.IHolographicQuadLayerFactory interface starting with version 5.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Foundation.IClosable
 *    Windows.Graphics.Holographic.IHolographicQuadLayer ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

#ifndef RUNTIMECLASS_Windows_Graphics_Holographic_HolographicQuadLayer_DEFINED
#define RUNTIMECLASS_Windows_Graphics_Holographic_HolographicQuadLayer_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Holographic_HolographicQuadLayer[] = L"Windows.Graphics.Holographic.HolographicQuadLayer";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Class Windows.Graphics.Holographic.HolographicQuadLayerUpdateParameters
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Graphics.Holographic.IHolographicQuadLayerUpdateParameters ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

#ifndef RUNTIMECLASS_Windows_Graphics_Holographic_HolographicQuadLayerUpdateParameters_DEFINED
#define RUNTIMECLASS_Windows_Graphics_Holographic_HolographicQuadLayerUpdateParameters_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Holographic_HolographicQuadLayerUpdateParameters[] = L"Windows.Graphics.Holographic.HolographicQuadLayerUpdateParameters";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Class Windows.Graphics.Holographic.HolographicSpace
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Graphics.Holographic.IHolographicSpaceStatics3 interface starting with version 5.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.Graphics.Holographic.IHolographicSpaceStatics2 interface starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.Graphics.Holographic.IHolographicSpaceStatics interface starting with version 2.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Graphics.Holographic.IHolographicSpace ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef RUNTIMECLASS_Windows_Graphics_Holographic_HolographicSpace_DEFINED
#define RUNTIMECLASS_Windows_Graphics_Holographic_HolographicSpace_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Holographic_HolographicSpace[] = L"Windows.Graphics.Holographic.HolographicSpace";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Class Windows.Graphics.Holographic.HolographicSpaceCameraAddedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Graphics.Holographic.IHolographicSpaceCameraAddedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef RUNTIMECLASS_Windows_Graphics_Holographic_HolographicSpaceCameraAddedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Graphics_Holographic_HolographicSpaceCameraAddedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Holographic_HolographicSpaceCameraAddedEventArgs[] = L"Windows.Graphics.Holographic.HolographicSpaceCameraAddedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Class Windows.Graphics.Holographic.HolographicSpaceCameraRemovedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Graphics.Holographic.IHolographicSpaceCameraRemovedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef RUNTIMECLASS_Windows_Graphics_Holographic_HolographicSpaceCameraRemovedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Graphics_Holographic_HolographicSpaceCameraRemovedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Holographic_HolographicSpaceCameraRemovedEventArgs[] = L"Windows.Graphics.Holographic.HolographicSpaceCameraRemovedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000




#endif // defined(__cplusplus)
#pragma pop_macro("MIDL_CONST_ID")
// Restore the original value of the 'DEPRECATED' macro
#pragma pop_macro("DEPRECATED")

#ifdef __clang__
#pragma clang diagnostic pop // deprecated-declarations
#else
#pragma warning(pop)
#endif
#endif // __windows2Egraphics2Eholographic_p_h__

#endif // __windows2Egraphics2Eholographic_h__
