/* Header file automatically generated from windows.graphics.imaging.idl */
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
#ifndef __windows2Egraphics2Eimaging_h__
#define __windows2Egraphics2Eimaging_h__
#ifndef __windows2Egraphics2Eimaging_p_h__
#define __windows2Egraphics2Eimaging_p_h__


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
#include "Windows.Graphics.DirectX.Direct3D11.h"
#include "Windows.Storage.Streams.h"
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CGraphics_CImaging_CIBitmapBuffer_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CImaging_CIBitmapBuffer_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Imaging {
                interface IBitmapBuffer;
            } /* Windows */
        } /* Graphics */
    } /* Imaging */} /* ABI */
#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapBuffer ABI::Windows::Graphics::Imaging::IBitmapBuffer

#endif // ____x_ABI_CWindows_CGraphics_CImaging_CIBitmapBuffer_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CImaging_CIBitmapCodecInformation_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CImaging_CIBitmapCodecInformation_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Imaging {
                interface IBitmapCodecInformation;
            } /* Windows */
        } /* Graphics */
    } /* Imaging */} /* ABI */
#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapCodecInformation ABI::Windows::Graphics::Imaging::IBitmapCodecInformation

#endif // ____x_ABI_CWindows_CGraphics_CImaging_CIBitmapCodecInformation_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CImaging_CIBitmapDecoder_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CImaging_CIBitmapDecoder_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Imaging {
                interface IBitmapDecoder;
            } /* Windows */
        } /* Graphics */
    } /* Imaging */} /* ABI */
#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapDecoder ABI::Windows::Graphics::Imaging::IBitmapDecoder

#endif // ____x_ABI_CWindows_CGraphics_CImaging_CIBitmapDecoder_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CImaging_CIBitmapDecoderStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CImaging_CIBitmapDecoderStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Imaging {
                interface IBitmapDecoderStatics;
            } /* Windows */
        } /* Graphics */
    } /* Imaging */} /* ABI */
#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapDecoderStatics ABI::Windows::Graphics::Imaging::IBitmapDecoderStatics

#endif // ____x_ABI_CWindows_CGraphics_CImaging_CIBitmapDecoderStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoder_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoder_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Imaging {
                interface IBitmapEncoder;
            } /* Windows */
        } /* Graphics */
    } /* Imaging */} /* ABI */
#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoder ABI::Windows::Graphics::Imaging::IBitmapEncoder

#endif // ____x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoder_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoderStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoderStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Imaging {
                interface IBitmapEncoderStatics;
            } /* Windows */
        } /* Graphics */
    } /* Imaging */} /* ABI */
#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoderStatics ABI::Windows::Graphics::Imaging::IBitmapEncoderStatics

#endif // ____x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoderStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoderWithSoftwareBitmap_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoderWithSoftwareBitmap_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Imaging {
                interface IBitmapEncoderWithSoftwareBitmap;
            } /* Windows */
        } /* Graphics */
    } /* Imaging */} /* ABI */
#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoderWithSoftwareBitmap ABI::Windows::Graphics::Imaging::IBitmapEncoderWithSoftwareBitmap

#endif // ____x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoderWithSoftwareBitmap_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CImaging_CIBitmapFrame_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CImaging_CIBitmapFrame_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Imaging {
                interface IBitmapFrame;
            } /* Windows */
        } /* Graphics */
    } /* Imaging */} /* ABI */
#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapFrame ABI::Windows::Graphics::Imaging::IBitmapFrame

#endif // ____x_ABI_CWindows_CGraphics_CImaging_CIBitmapFrame_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CImaging_CIBitmapFrameWithSoftwareBitmap_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CImaging_CIBitmapFrameWithSoftwareBitmap_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Imaging {
                interface IBitmapFrameWithSoftwareBitmap;
            } /* Windows */
        } /* Graphics */
    } /* Imaging */} /* ABI */
#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapFrameWithSoftwareBitmap ABI::Windows::Graphics::Imaging::IBitmapFrameWithSoftwareBitmap

#endif // ____x_ABI_CWindows_CGraphics_CImaging_CIBitmapFrameWithSoftwareBitmap_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CImaging_CIBitmapProperties_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CImaging_CIBitmapProperties_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Imaging {
                interface IBitmapProperties;
            } /* Windows */
        } /* Graphics */
    } /* Imaging */} /* ABI */
#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapProperties ABI::Windows::Graphics::Imaging::IBitmapProperties

#endif // ____x_ABI_CWindows_CGraphics_CImaging_CIBitmapProperties_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CImaging_CIBitmapPropertiesView_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CImaging_CIBitmapPropertiesView_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Imaging {
                interface IBitmapPropertiesView;
            } /* Windows */
        } /* Graphics */
    } /* Imaging */} /* ABI */
#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapPropertiesView ABI::Windows::Graphics::Imaging::IBitmapPropertiesView

#endif // ____x_ABI_CWindows_CGraphics_CImaging_CIBitmapPropertiesView_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CImaging_CIBitmapTransform_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CImaging_CIBitmapTransform_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Imaging {
                interface IBitmapTransform;
            } /* Windows */
        } /* Graphics */
    } /* Imaging */} /* ABI */
#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapTransform ABI::Windows::Graphics::Imaging::IBitmapTransform

#endif // ____x_ABI_CWindows_CGraphics_CImaging_CIBitmapTransform_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CImaging_CIBitmapTypedValue_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CImaging_CIBitmapTypedValue_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Imaging {
                interface IBitmapTypedValue;
            } /* Windows */
        } /* Graphics */
    } /* Imaging */} /* ABI */
#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapTypedValue ABI::Windows::Graphics::Imaging::IBitmapTypedValue

#endif // ____x_ABI_CWindows_CGraphics_CImaging_CIBitmapTypedValue_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CImaging_CIBitmapTypedValueFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CImaging_CIBitmapTypedValueFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Imaging {
                interface IBitmapTypedValueFactory;
            } /* Windows */
        } /* Graphics */
    } /* Imaging */} /* ABI */
#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapTypedValueFactory ABI::Windows::Graphics::Imaging::IBitmapTypedValueFactory

#endif // ____x_ABI_CWindows_CGraphics_CImaging_CIBitmapTypedValueFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CImaging_CIPixelDataProvider_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CImaging_CIPixelDataProvider_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Imaging {
                interface IPixelDataProvider;
            } /* Windows */
        } /* Graphics */
    } /* Imaging */} /* ABI */
#define __x_ABI_CWindows_CGraphics_CImaging_CIPixelDataProvider ABI::Windows::Graphics::Imaging::IPixelDataProvider

#endif // ____x_ABI_CWindows_CGraphics_CImaging_CIPixelDataProvider_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Imaging {
                interface ISoftwareBitmap;
            } /* Windows */
        } /* Graphics */
    } /* Imaging */} /* ABI */
#define __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap ABI::Windows::Graphics::Imaging::ISoftwareBitmap

#endif // ____x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmapFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmapFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Imaging {
                interface ISoftwareBitmapFactory;
            } /* Windows */
        } /* Graphics */
    } /* Imaging */} /* ABI */
#define __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmapFactory ABI::Windows::Graphics::Imaging::ISoftwareBitmapFactory

#endif // ____x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmapFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmapStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmapStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Imaging {
                interface ISoftwareBitmapStatics;
            } /* Windows */
        } /* Graphics */
    } /* Imaging */} /* ABI */
#define __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmapStatics ABI::Windows::Graphics::Imaging::ISoftwareBitmapStatics

#endif // ____x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmapStatics_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Imaging {
                class BitmapTypedValue;
            } /* Windows */
        } /* Graphics */
    } /* Imaging */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue_USE
#define DEF___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("93621bf0-dae9-5f00-94ac-795aa943dca6"))
IKeyValuePair<HSTRING,ABI::Windows::Graphics::Imaging::BitmapTypedValue*> : IKeyValuePair_impl<HSTRING,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Graphics::Imaging::BitmapTypedValue*, ABI::Windows::Graphics::Imaging::IBitmapTypedValue*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IKeyValuePair`2<String, Windows.Graphics.Imaging.BitmapTypedValue>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IKeyValuePair<HSTRING,ABI::Windows::Graphics::Imaging::BitmapTypedValue*> __FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue_t;
#define __FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue ABI::Windows::Foundation::Collections::__FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,ABI::Windows::Graphics::Imaging::IBitmapTypedValue*>
//#define __FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue_t ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,ABI::Windows::Graphics::Imaging::IBitmapTypedValue*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue_USE
#define DEF___FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("2ad3fb0c-0656-5302-b504-3153be845161"))
IIterator<__FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue*> : IIterator_impl<__FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Foundation.Collections.IKeyValuePair`2<String, Windows.Graphics.Imaging.BitmapTypedValue>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<__FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue*> __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue_t;
#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue ABI::Windows::Foundation::Collections::__FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,ABI::Windows::Graphics::Imaging::IBitmapTypedValue*>*>
//#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,ABI::Windows::Graphics::Imaging::IBitmapTypedValue*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue_USE
#define DEF___FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("05f9430c-2f22-5638-aa89-8c9abcd54ff9"))
IIterable<__FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue*> : IIterable_impl<__FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Foundation.Collections.IKeyValuePair`2<String, Windows.Graphics.Imaging.BitmapTypedValue>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<__FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue*> __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue_t;
#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue ABI::Windows::Foundation::Collections::__FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,ABI::Windows::Graphics::Imaging::IBitmapTypedValue*>*>
//#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,ABI::Windows::Graphics::Imaging::IBitmapTypedValue*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Imaging {
                class BitmapCodecInformation;
            } /* Windows */
        } /* Graphics */
    } /* Imaging */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CGraphics__CImaging__CBitmapCodecInformation_USE
#define DEF___FIIterator_1_Windows__CGraphics__CImaging__CBitmapCodecInformation_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("4ff2b2db-9326-537f-b8dc-4c93d77fbb84"))
IIterator<ABI::Windows::Graphics::Imaging::BitmapCodecInformation*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Graphics::Imaging::BitmapCodecInformation*, ABI::Windows::Graphics::Imaging::IBitmapCodecInformation*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Graphics.Imaging.BitmapCodecInformation>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Graphics::Imaging::BitmapCodecInformation*> __FIIterator_1_Windows__CGraphics__CImaging__CBitmapCodecInformation_t;
#define __FIIterator_1_Windows__CGraphics__CImaging__CBitmapCodecInformation ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CGraphics__CImaging__CBitmapCodecInformation_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CGraphics__CImaging__CBitmapCodecInformation ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Graphics::Imaging::IBitmapCodecInformation*>
//#define __FIIterator_1_Windows__CGraphics__CImaging__CBitmapCodecInformation_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Graphics::Imaging::IBitmapCodecInformation*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CGraphics__CImaging__CBitmapCodecInformation_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CGraphics__CImaging__CBitmapCodecInformation_USE
#define DEF___FIIterable_1_Windows__CGraphics__CImaging__CBitmapCodecInformation_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("2b6bdb90-a4eb-5142-b582-3ccb1edc5789"))
IIterable<ABI::Windows::Graphics::Imaging::BitmapCodecInformation*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Graphics::Imaging::BitmapCodecInformation*, ABI::Windows::Graphics::Imaging::IBitmapCodecInformation*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Graphics.Imaging.BitmapCodecInformation>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Graphics::Imaging::BitmapCodecInformation*> __FIIterable_1_Windows__CGraphics__CImaging__CBitmapCodecInformation_t;
#define __FIIterable_1_Windows__CGraphics__CImaging__CBitmapCodecInformation ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CGraphics__CImaging__CBitmapCodecInformation_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CGraphics__CImaging__CBitmapCodecInformation ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Graphics::Imaging::IBitmapCodecInformation*>
//#define __FIIterable_1_Windows__CGraphics__CImaging__CBitmapCodecInformation_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Graphics::Imaging::IBitmapCodecInformation*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CGraphics__CImaging__CBitmapCodecInformation_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Imaging {
                enum BitmapPixelFormat : int;
            } /* Windows */
        } /* Graphics */
    } /* Imaging */} /* ABI */


#ifndef DEF___FIIterator_1_Windows__CGraphics__CImaging__CBitmapPixelFormat_USE
#define DEF___FIIterator_1_Windows__CGraphics__CImaging__CBitmapPixelFormat_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("7fc2e293-1084-5d45-b8b8-93e10692bcc8"))
IIterator<enum ABI::Windows::Graphics::Imaging::BitmapPixelFormat> : IIterator_impl<enum ABI::Windows::Graphics::Imaging::BitmapPixelFormat> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Graphics.Imaging.BitmapPixelFormat>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<enum ABI::Windows::Graphics::Imaging::BitmapPixelFormat> __FIIterator_1_Windows__CGraphics__CImaging__CBitmapPixelFormat_t;
#define __FIIterator_1_Windows__CGraphics__CImaging__CBitmapPixelFormat ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CGraphics__CImaging__CBitmapPixelFormat_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CGraphics__CImaging__CBitmapPixelFormat ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Graphics::Imaging::BitmapPixelFormat>
//#define __FIIterator_1_Windows__CGraphics__CImaging__CBitmapPixelFormat_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Graphics::Imaging::BitmapPixelFormat>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CGraphics__CImaging__CBitmapPixelFormat_USE */





#ifndef DEF___FIIterable_1_Windows__CGraphics__CImaging__CBitmapPixelFormat_USE
#define DEF___FIIterable_1_Windows__CGraphics__CImaging__CBitmapPixelFormat_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("e924d9ed-a13e-5bdb-9ed8-65a1474dc274"))
IIterable<enum ABI::Windows::Graphics::Imaging::BitmapPixelFormat> : IIterable_impl<enum ABI::Windows::Graphics::Imaging::BitmapPixelFormat> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Graphics.Imaging.BitmapPixelFormat>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<enum ABI::Windows::Graphics::Imaging::BitmapPixelFormat> __FIIterable_1_Windows__CGraphics__CImaging__CBitmapPixelFormat_t;
#define __FIIterable_1_Windows__CGraphics__CImaging__CBitmapPixelFormat ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CGraphics__CImaging__CBitmapPixelFormat_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CGraphics__CImaging__CBitmapPixelFormat ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Graphics::Imaging::BitmapPixelFormat>
//#define __FIIterable_1_Windows__CGraphics__CImaging__CBitmapPixelFormat_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Graphics::Imaging::BitmapPixelFormat>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CGraphics__CImaging__CBitmapPixelFormat_USE */



namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Imaging {
                class ImageStream;
            } /* Windows */
        } /* Graphics */
    } /* Imaging */} /* ABI */

#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamWithContentType_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamWithContentType_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Streams {
                interface IRandomAccessStreamWithContentType;
            } /* Windows */
        } /* Storage */
    } /* Streams */} /* ABI */
#define __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamWithContentType ABI::Windows::Storage::Streams::IRandomAccessStreamWithContentType

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamWithContentType_FWD_DEFINED__


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CGraphics__CImaging__CImageStream_USE
#define DEF___FIIterator_1_Windows__CGraphics__CImaging__CImageStream_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("4a10752d-6b1a-5fec-a59c-70389bf162a2"))
IIterator<ABI::Windows::Graphics::Imaging::ImageStream*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Graphics::Imaging::ImageStream*, ABI::Windows::Storage::Streams::IRandomAccessStreamWithContentType*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Graphics.Imaging.ImageStream>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Graphics::Imaging::ImageStream*> __FIIterator_1_Windows__CGraphics__CImaging__CImageStream_t;
#define __FIIterator_1_Windows__CGraphics__CImaging__CImageStream ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CGraphics__CImaging__CImageStream_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CGraphics__CImaging__CImageStream ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Storage::Streams::IRandomAccessStreamWithContentType*>
//#define __FIIterator_1_Windows__CGraphics__CImaging__CImageStream_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Storage::Streams::IRandomAccessStreamWithContentType*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CGraphics__CImaging__CImageStream_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CGraphics__CImaging__CImageStream_USE
#define DEF___FIIterable_1_Windows__CGraphics__CImaging__CImageStream_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("034ea0c4-c20e-5c0c-ba31-64212f28e650"))
IIterable<ABI::Windows::Graphics::Imaging::ImageStream*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Graphics::Imaging::ImageStream*, ABI::Windows::Storage::Streams::IRandomAccessStreamWithContentType*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Graphics.Imaging.ImageStream>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Graphics::Imaging::ImageStream*> __FIIterable_1_Windows__CGraphics__CImaging__CImageStream_t;
#define __FIIterable_1_Windows__CGraphics__CImaging__CImageStream ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CGraphics__CImaging__CImageStream_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CGraphics__CImaging__CImageStream ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Storage::Streams::IRandomAccessStreamWithContentType*>
//#define __FIIterable_1_Windows__CGraphics__CImaging__CImageStream_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Storage::Streams::IRandomAccessStreamWithContentType*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CGraphics__CImaging__CImageStream_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Imaging {
                class SoftwareBitmap;
            } /* Windows */
        } /* Graphics */
    } /* Imaging */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CGraphics__CImaging__CSoftwareBitmap_USE
#define DEF___FIIterator_1_Windows__CGraphics__CImaging__CSoftwareBitmap_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("cd12e4c3-8ca8-5be6-b64b-204a014fc620"))
IIterator<ABI::Windows::Graphics::Imaging::SoftwareBitmap*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Graphics::Imaging::SoftwareBitmap*, ABI::Windows::Graphics::Imaging::ISoftwareBitmap*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Graphics.Imaging.SoftwareBitmap>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Graphics::Imaging::SoftwareBitmap*> __FIIterator_1_Windows__CGraphics__CImaging__CSoftwareBitmap_t;
#define __FIIterator_1_Windows__CGraphics__CImaging__CSoftwareBitmap ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CGraphics__CImaging__CSoftwareBitmap_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CGraphics__CImaging__CSoftwareBitmap ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Graphics::Imaging::ISoftwareBitmap*>
//#define __FIIterator_1_Windows__CGraphics__CImaging__CSoftwareBitmap_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Graphics::Imaging::ISoftwareBitmap*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CGraphics__CImaging__CSoftwareBitmap_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CGraphics__CImaging__CSoftwareBitmap_USE
#define DEF___FIIterable_1_Windows__CGraphics__CImaging__CSoftwareBitmap_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("22d3a30f-0898-5e94-99a3-afa5951dfcd4"))
IIterable<ABI::Windows::Graphics::Imaging::SoftwareBitmap*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Graphics::Imaging::SoftwareBitmap*, ABI::Windows::Graphics::Imaging::ISoftwareBitmap*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Graphics.Imaging.SoftwareBitmap>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Graphics::Imaging::SoftwareBitmap*> __FIIterable_1_Windows__CGraphics__CImaging__CSoftwareBitmap_t;
#define __FIIterable_1_Windows__CGraphics__CImaging__CSoftwareBitmap ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CGraphics__CImaging__CSoftwareBitmap_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CGraphics__CImaging__CSoftwareBitmap ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Graphics::Imaging::ISoftwareBitmap*>
//#define __FIIterable_1_Windows__CGraphics__CImaging__CSoftwareBitmap_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Graphics::Imaging::ISoftwareBitmap*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CGraphics__CImaging__CSoftwareBitmap_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIMapView_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue_USE
#define DEF___FIMapView_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("9cda5a9a-8924-5b3b-8b19-894d8da99dde"))
IMapView<HSTRING,ABI::Windows::Graphics::Imaging::BitmapTypedValue*> : IMapView_impl<HSTRING,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Graphics::Imaging::BitmapTypedValue*, ABI::Windows::Graphics::Imaging::IBitmapTypedValue*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IMapView`2<String, Windows.Graphics.Imaging.BitmapTypedValue>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IMapView<HSTRING,ABI::Windows::Graphics::Imaging::BitmapTypedValue*> __FIMapView_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue_t;
#define __FIMapView_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue ABI::Windows::Foundation::Collections::__FIMapView_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIMapView_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue ABI::Windows::Foundation::Collections::IMapView<HSTRING,ABI::Windows::Graphics::Imaging::IBitmapTypedValue*>
//#define __FIMapView_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue_t ABI::Windows::Foundation::Collections::IMapView<HSTRING,ABI::Windows::Graphics::Imaging::IBitmapTypedValue*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIMapView_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIMap_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue_USE
#define DEF___FIMap_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("2c70ef8d-5d4c-5185-8db7-fed87728165d"))
IMap<HSTRING,ABI::Windows::Graphics::Imaging::BitmapTypedValue*> : IMap_impl<HSTRING,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Graphics::Imaging::BitmapTypedValue*, ABI::Windows::Graphics::Imaging::IBitmapTypedValue*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IMap`2<String, Windows.Graphics.Imaging.BitmapTypedValue>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IMap<HSTRING,ABI::Windows::Graphics::Imaging::BitmapTypedValue*> __FIMap_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue_t;
#define __FIMap_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue ABI::Windows::Foundation::Collections::__FIMap_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIMap_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue ABI::Windows::Foundation::Collections::IMap<HSTRING,ABI::Windows::Graphics::Imaging::IBitmapTypedValue*>
//#define __FIMap_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue_t ABI::Windows::Foundation::Collections::IMap<HSTRING,ABI::Windows::Graphics::Imaging::IBitmapTypedValue*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIMap_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CGraphics__CImaging__CBitmapCodecInformation_USE
#define DEF___FIVectorView_1_Windows__CGraphics__CImaging__CBitmapCodecInformation_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("97dfde96-ff1d-5aa1-863a-90116a31b86b"))
IVectorView<ABI::Windows::Graphics::Imaging::BitmapCodecInformation*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Graphics::Imaging::BitmapCodecInformation*, ABI::Windows::Graphics::Imaging::IBitmapCodecInformation*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Graphics.Imaging.BitmapCodecInformation>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Graphics::Imaging::BitmapCodecInformation*> __FIVectorView_1_Windows__CGraphics__CImaging__CBitmapCodecInformation_t;
#define __FIVectorView_1_Windows__CGraphics__CImaging__CBitmapCodecInformation ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CGraphics__CImaging__CBitmapCodecInformation_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CGraphics__CImaging__CBitmapCodecInformation ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Graphics::Imaging::IBitmapCodecInformation*>
//#define __FIVectorView_1_Windows__CGraphics__CImaging__CBitmapCodecInformation_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Graphics::Imaging::IBitmapCodecInformation*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CGraphics__CImaging__CBitmapCodecInformation_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#ifndef DEF___FIVectorView_1_Windows__CGraphics__CImaging__CBitmapPixelFormat_USE
#define DEF___FIVectorView_1_Windows__CGraphics__CImaging__CBitmapPixelFormat_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("76ac4bc2-c19c-559c-b287-1694c0dc3a0d"))
IVectorView<enum ABI::Windows::Graphics::Imaging::BitmapPixelFormat> : IVectorView_impl<enum ABI::Windows::Graphics::Imaging::BitmapPixelFormat> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Graphics.Imaging.BitmapPixelFormat>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<enum ABI::Windows::Graphics::Imaging::BitmapPixelFormat> __FIVectorView_1_Windows__CGraphics__CImaging__CBitmapPixelFormat_t;
#define __FIVectorView_1_Windows__CGraphics__CImaging__CBitmapPixelFormat ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CGraphics__CImaging__CBitmapPixelFormat_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CGraphics__CImaging__CBitmapPixelFormat ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Graphics::Imaging::BitmapPixelFormat>
//#define __FIVectorView_1_Windows__CGraphics__CImaging__CBitmapPixelFormat_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Graphics::Imaging::BitmapPixelFormat>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CGraphics__CImaging__CBitmapPixelFormat_USE */




#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CGraphics__CImaging__CImageStream_USE
#define DEF___FIVectorView_1_Windows__CGraphics__CImaging__CImageStream_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("ab10f3e5-2a3e-5f81-b5e8-8ddddc23cca2"))
IVectorView<ABI::Windows::Graphics::Imaging::ImageStream*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Graphics::Imaging::ImageStream*, ABI::Windows::Storage::Streams::IRandomAccessStreamWithContentType*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Graphics.Imaging.ImageStream>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Graphics::Imaging::ImageStream*> __FIVectorView_1_Windows__CGraphics__CImaging__CImageStream_t;
#define __FIVectorView_1_Windows__CGraphics__CImaging__CImageStream ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CGraphics__CImaging__CImageStream_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CGraphics__CImaging__CImageStream ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Storage::Streams::IRandomAccessStreamWithContentType*>
//#define __FIVectorView_1_Windows__CGraphics__CImaging__CImageStream_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Storage::Streams::IRandomAccessStreamWithContentType*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CGraphics__CImaging__CImageStream_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CGraphics__CImaging__CImageStream_USE
#define DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CGraphics__CImaging__CImageStream_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("6683d49c-9fd5-5b08-899f-e2d7dc5cf9c4"))
IAsyncOperationCompletedHandler<__FIVectorView_1_Windows__CGraphics__CImaging__CImageStream*> : IAsyncOperationCompletedHandler_impl<__FIVectorView_1_Windows__CGraphics__CImaging__CImageStream*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Foundation.Collections.IVectorView`1<Windows.Graphics.Imaging.ImageStream>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<__FIVectorView_1_Windows__CGraphics__CImaging__CImageStream*> __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CGraphics__CImaging__CImageStream_t;
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CGraphics__CImaging__CImageStream ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CGraphics__CImaging__CImageStream_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CGraphics__CImaging__CImageStream ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Storage::Streams::IRandomAccessStreamWithContentType*>*>
//#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CGraphics__CImaging__CImageStream_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Storage::Streams::IRandomAccessStreamWithContentType*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CGraphics__CImaging__CImageStream_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1___FIVectorView_1_Windows__CGraphics__CImaging__CImageStream_USE
#define DEF___FIAsyncOperation_1___FIVectorView_1_Windows__CGraphics__CImaging__CImageStream_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("a58d867e-beef-5f17-b7cf-e4c87be22ee4"))
IAsyncOperation<__FIVectorView_1_Windows__CGraphics__CImaging__CImageStream*> : IAsyncOperation_impl<__FIVectorView_1_Windows__CGraphics__CImaging__CImageStream*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Foundation.Collections.IVectorView`1<Windows.Graphics.Imaging.ImageStream>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<__FIVectorView_1_Windows__CGraphics__CImaging__CImageStream*> __FIAsyncOperation_1___FIVectorView_1_Windows__CGraphics__CImaging__CImageStream_t;
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CGraphics__CImaging__CImageStream ABI::Windows::Foundation::__FIAsyncOperation_1___FIVectorView_1_Windows__CGraphics__CImaging__CImageStream_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1___FIVectorView_1_Windows__CGraphics__CImaging__CImageStream ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Storage::Streams::IRandomAccessStreamWithContentType*>*>
//#define __FIAsyncOperation_1___FIVectorView_1_Windows__CGraphics__CImaging__CImageStream_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Storage::Streams::IRandomAccessStreamWithContentType*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1___FIVectorView_1_Windows__CGraphics__CImaging__CImageStream_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Imaging {
                class BitmapDecoder;
            } /* Windows */
        } /* Graphics */
    } /* Imaging */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapDecoder_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapDecoder_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("bb6514f2-3cfb-566f-82bc-60aabd302d53"))
IAsyncOperationCompletedHandler<ABI::Windows::Graphics::Imaging::BitmapDecoder*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Graphics::Imaging::BitmapDecoder*, ABI::Windows::Graphics::Imaging::IBitmapDecoder*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Graphics.Imaging.BitmapDecoder>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::Graphics::Imaging::BitmapDecoder*> __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapDecoder_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapDecoder ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapDecoder_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapDecoder ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Graphics::Imaging::IBitmapDecoder*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapDecoder_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Graphics::Imaging::IBitmapDecoder*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapDecoder_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapDecoder_USE
#define DEF___FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapDecoder_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("aa94d8e9-caef-53f6-823d-91b6e8340510"))
IAsyncOperation<ABI::Windows::Graphics::Imaging::BitmapDecoder*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Graphics::Imaging::BitmapDecoder*, ABI::Windows::Graphics::Imaging::IBitmapDecoder*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Graphics.Imaging.BitmapDecoder>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::Graphics::Imaging::BitmapDecoder*> __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapDecoder_t;
#define __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapDecoder ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapDecoder_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapDecoder ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Graphics::Imaging::IBitmapDecoder*>
//#define __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapDecoder_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Graphics::Imaging::IBitmapDecoder*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapDecoder_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Imaging {
                class BitmapEncoder;
            } /* Windows */
        } /* Graphics */
    } /* Imaging */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapEncoder_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapEncoder_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("5df1afc5-478d-55dd-b317-024274062a0d"))
IAsyncOperationCompletedHandler<ABI::Windows::Graphics::Imaging::BitmapEncoder*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Graphics::Imaging::BitmapEncoder*, ABI::Windows::Graphics::Imaging::IBitmapEncoder*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Graphics.Imaging.BitmapEncoder>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::Graphics::Imaging::BitmapEncoder*> __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapEncoder_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapEncoder ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapEncoder_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapEncoder ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Graphics::Imaging::IBitmapEncoder*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapEncoder_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Graphics::Imaging::IBitmapEncoder*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapEncoder_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapEncoder_USE
#define DEF___FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapEncoder_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("151bd1c5-4675-5af5-a289-001edc66b86a"))
IAsyncOperation<ABI::Windows::Graphics::Imaging::BitmapEncoder*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Graphics::Imaging::BitmapEncoder*, ABI::Windows::Graphics::Imaging::IBitmapEncoder*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Graphics.Imaging.BitmapEncoder>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::Graphics::Imaging::BitmapEncoder*> __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapEncoder_t;
#define __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapEncoder ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapEncoder_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapEncoder ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Graphics::Imaging::IBitmapEncoder*>
//#define __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapEncoder_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Graphics::Imaging::IBitmapEncoder*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapEncoder_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Imaging {
                class BitmapFrame;
            } /* Windows */
        } /* Graphics */
    } /* Imaging */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapFrame_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapFrame_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("2817455a-983f-5a06-9fe4-fb9637684320"))
IAsyncOperationCompletedHandler<ABI::Windows::Graphics::Imaging::BitmapFrame*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Graphics::Imaging::BitmapFrame*, ABI::Windows::Graphics::Imaging::IBitmapFrame*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Graphics.Imaging.BitmapFrame>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::Graphics::Imaging::BitmapFrame*> __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapFrame_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapFrame ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapFrame_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapFrame ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Graphics::Imaging::IBitmapFrame*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapFrame_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Graphics::Imaging::IBitmapFrame*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapFrame_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapFrame_USE
#define DEF___FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapFrame_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("cb1483d1-1464-5bf9-9346-d537735dfbd6"))
IAsyncOperation<ABI::Windows::Graphics::Imaging::BitmapFrame*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Graphics::Imaging::BitmapFrame*, ABI::Windows::Graphics::Imaging::IBitmapFrame*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Graphics.Imaging.BitmapFrame>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::Graphics::Imaging::BitmapFrame*> __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapFrame_t;
#define __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapFrame ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapFrame_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapFrame ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Graphics::Imaging::IBitmapFrame*>
//#define __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapFrame_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Graphics::Imaging::IBitmapFrame*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapFrame_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Imaging {
                class BitmapPropertySet;
            } /* Windows */
        } /* Graphics */
    } /* Imaging */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapPropertySet_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapPropertySet_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("a8325bd7-a3be-5881-9fa7-04ceefb9dc2f"))
IAsyncOperationCompletedHandler<ABI::Windows::Graphics::Imaging::BitmapPropertySet*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Graphics::Imaging::BitmapPropertySet*, __FIMap_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Graphics.Imaging.BitmapPropertySet>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::Graphics::Imaging::BitmapPropertySet*> __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapPropertySet_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapPropertySet ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapPropertySet_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapPropertySet ABI::Windows::Foundation::IAsyncOperationCompletedHandler<__FIMap_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapPropertySet_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<__FIMap_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapPropertySet_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapPropertySet_USE
#define DEF___FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapPropertySet_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("464ac000-b1f1-5246-8268-912a2593d889"))
IAsyncOperation<ABI::Windows::Graphics::Imaging::BitmapPropertySet*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Graphics::Imaging::BitmapPropertySet*, __FIMap_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Graphics.Imaging.BitmapPropertySet>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::Graphics::Imaging::BitmapPropertySet*> __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapPropertySet_t;
#define __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapPropertySet ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapPropertySet_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapPropertySet ABI::Windows::Foundation::IAsyncOperation<__FIMap_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue*>
//#define __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapPropertySet_t ABI::Windows::Foundation::IAsyncOperation<__FIMap_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapPropertySet_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CImageStream_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CImageStream_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("29bb8288-4462-516e-a675-8c9235c42994"))
IAsyncOperationCompletedHandler<ABI::Windows::Graphics::Imaging::ImageStream*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Graphics::Imaging::ImageStream*, ABI::Windows::Storage::Streams::IRandomAccessStreamWithContentType*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Graphics.Imaging.ImageStream>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::Graphics::Imaging::ImageStream*> __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CImageStream_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CImageStream ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CImageStream_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CImageStream ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Storage::Streams::IRandomAccessStreamWithContentType*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CImageStream_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Storage::Streams::IRandomAccessStreamWithContentType*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CImageStream_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1_Windows__CGraphics__CImaging__CImageStream_USE
#define DEF___FIAsyncOperation_1_Windows__CGraphics__CImaging__CImageStream_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("684165be-0011-56d6-bebf-430016d51b7a"))
IAsyncOperation<ABI::Windows::Graphics::Imaging::ImageStream*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Graphics::Imaging::ImageStream*, ABI::Windows::Storage::Streams::IRandomAccessStreamWithContentType*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Graphics.Imaging.ImageStream>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::Graphics::Imaging::ImageStream*> __FIAsyncOperation_1_Windows__CGraphics__CImaging__CImageStream_t;
#define __FIAsyncOperation_1_Windows__CGraphics__CImaging__CImageStream ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CGraphics__CImaging__CImageStream_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CGraphics__CImaging__CImageStream ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Storage::Streams::IRandomAccessStreamWithContentType*>
//#define __FIAsyncOperation_1_Windows__CGraphics__CImaging__CImageStream_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Storage::Streams::IRandomAccessStreamWithContentType*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CGraphics__CImaging__CImageStream_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Imaging {
                class PixelDataProvider;
            } /* Windows */
        } /* Graphics */
    } /* Imaging */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CPixelDataProvider_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CPixelDataProvider_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("37bdf4be-2f39-592c-a4f7-d16a09d2b2db"))
IAsyncOperationCompletedHandler<ABI::Windows::Graphics::Imaging::PixelDataProvider*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Graphics::Imaging::PixelDataProvider*, ABI::Windows::Graphics::Imaging::IPixelDataProvider*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Graphics.Imaging.PixelDataProvider>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::Graphics::Imaging::PixelDataProvider*> __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CPixelDataProvider_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CPixelDataProvider ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CPixelDataProvider_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CPixelDataProvider ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Graphics::Imaging::IPixelDataProvider*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CPixelDataProvider_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Graphics::Imaging::IPixelDataProvider*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CPixelDataProvider_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1_Windows__CGraphics__CImaging__CPixelDataProvider_USE
#define DEF___FIAsyncOperation_1_Windows__CGraphics__CImaging__CPixelDataProvider_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("8c2dfeb0-6c22-5863-88d8-85c1fbc75697"))
IAsyncOperation<ABI::Windows::Graphics::Imaging::PixelDataProvider*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Graphics::Imaging::PixelDataProvider*, ABI::Windows::Graphics::Imaging::IPixelDataProvider*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Graphics.Imaging.PixelDataProvider>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::Graphics::Imaging::PixelDataProvider*> __FIAsyncOperation_1_Windows__CGraphics__CImaging__CPixelDataProvider_t;
#define __FIAsyncOperation_1_Windows__CGraphics__CImaging__CPixelDataProvider ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CGraphics__CImaging__CPixelDataProvider_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CGraphics__CImaging__CPixelDataProvider ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Graphics::Imaging::IPixelDataProvider*>
//#define __FIAsyncOperation_1_Windows__CGraphics__CImaging__CPixelDataProvider_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Graphics::Imaging::IPixelDataProvider*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CGraphics__CImaging__CPixelDataProvider_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CSoftwareBitmap_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CSoftwareBitmap_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("b699b653-33ed-5e2d-a75f-02bf90e32619"))
IAsyncOperationCompletedHandler<ABI::Windows::Graphics::Imaging::SoftwareBitmap*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Graphics::Imaging::SoftwareBitmap*, ABI::Windows::Graphics::Imaging::ISoftwareBitmap*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Graphics.Imaging.SoftwareBitmap>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::Graphics::Imaging::SoftwareBitmap*> __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CSoftwareBitmap_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CSoftwareBitmap ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CSoftwareBitmap_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CSoftwareBitmap ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Graphics::Imaging::ISoftwareBitmap*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CSoftwareBitmap_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Graphics::Imaging::ISoftwareBitmap*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CSoftwareBitmap_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1_Windows__CGraphics__CImaging__CSoftwareBitmap_USE
#define DEF___FIAsyncOperation_1_Windows__CGraphics__CImaging__CSoftwareBitmap_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("c4a10980-714b-5501-8da2-dbdacce70f73"))
IAsyncOperation<ABI::Windows::Graphics::Imaging::SoftwareBitmap*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Graphics::Imaging::SoftwareBitmap*, ABI::Windows::Graphics::Imaging::ISoftwareBitmap*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Graphics.Imaging.SoftwareBitmap>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::Graphics::Imaging::SoftwareBitmap*> __FIAsyncOperation_1_Windows__CGraphics__CImaging__CSoftwareBitmap_t;
#define __FIAsyncOperation_1_Windows__CGraphics__CImaging__CSoftwareBitmap ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CGraphics__CImaging__CSoftwareBitmap_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CGraphics__CImaging__CSoftwareBitmap ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Graphics::Imaging::ISoftwareBitmap*>
//#define __FIAsyncOperation_1_Windows__CGraphics__CImaging__CSoftwareBitmap_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Graphics::Imaging::ISoftwareBitmap*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CGraphics__CImaging__CSoftwareBitmap_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#ifndef DEF___FIIterator_1_HSTRING_USE
#define DEF___FIIterator_1_HSTRING_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("8c304ebb-6615-50a4-8829-879ecd443236"))
IIterator<HSTRING> : IIterator_impl<HSTRING> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<String>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<HSTRING> __FIIterator_1_HSTRING_t;
#define __FIIterator_1_HSTRING ABI::Windows::Foundation::Collections::__FIIterator_1_HSTRING_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_HSTRING ABI::Windows::Foundation::Collections::IIterator<HSTRING>
//#define __FIIterator_1_HSTRING_t ABI::Windows::Foundation::Collections::IIterator<HSTRING>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_HSTRING_USE */




#ifndef DEF___FIIterable_1_HSTRING_USE
#define DEF___FIIterable_1_HSTRING_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("e2fcc7c1-3bfc-5a0b-b2b0-72e769d1cb7e"))
IIterable<HSTRING> : IIterable_impl<HSTRING> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<String>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<HSTRING> __FIIterable_1_HSTRING_t;
#define __FIIterable_1_HSTRING ABI::Windows::Foundation::Collections::__FIIterable_1_HSTRING_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_HSTRING ABI::Windows::Foundation::Collections::IIterable<HSTRING>
//#define __FIIterable_1_HSTRING_t ABI::Windows::Foundation::Collections::IIterable<HSTRING>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_HSTRING_USE */




#ifndef DEF___FIVectorView_1_HSTRING_USE
#define DEF___FIVectorView_1_HSTRING_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("2f13c006-a03a-5f69-b090-75a43e33423e"))
IVectorView<HSTRING> : IVectorView_impl<HSTRING> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<String>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<HSTRING> __FIVectorView_1_HSTRING_t;
#define __FIVectorView_1_HSTRING ABI::Windows::Foundation::Collections::__FIVectorView_1_HSTRING_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_HSTRING ABI::Windows::Foundation::Collections::IVectorView<HSTRING>
//#define __FIVectorView_1_HSTRING_t ABI::Windows::Foundation::Collections::IVectorView<HSTRING>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_HSTRING_USE */





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


#ifndef ____x_ABI_CWindows_CFoundation_CIMemoryBuffer_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIMemoryBuffer_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Foundation {
            interface IMemoryBuffer;
        } /* Windows */
    } /* Foundation */} /* ABI */
#define __x_ABI_CWindows_CFoundation_CIMemoryBuffer ABI::Windows::Foundation::IMemoryBuffer

#endif // ____x_ABI_CWindows_CFoundation_CIMemoryBuffer_FWD_DEFINED__


namespace ABI {
    namespace Windows {
        namespace Foundation {
            
            typedef enum PropertyType : int PropertyType;
            
        } /* Windows */
    } /* Foundation */} /* ABI */




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


#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIContentTypeProvider_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIContentTypeProvider_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Streams {
                interface IContentTypeProvider;
            } /* Windows */
        } /* Storage */
    } /* Streams */} /* ABI */
#define __x_ABI_CWindows_CStorage_CStreams_CIContentTypeProvider ABI::Windows::Storage::Streams::IContentTypeProvider

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIContentTypeProvider_FWD_DEFINED__


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
        namespace Graphics {
            namespace Imaging {
                
                typedef enum BitmapAlphaMode : int BitmapAlphaMode;
                
            } /* Windows */
        } /* Graphics */
    } /* Imaging */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Imaging {
                
                typedef enum BitmapBufferAccessMode : int BitmapBufferAccessMode;
                
            } /* Windows */
        } /* Graphics */
    } /* Imaging */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Imaging {
                
                typedef enum BitmapFlip : int BitmapFlip;
                
            } /* Windows */
        } /* Graphics */
    } /* Imaging */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Imaging {
                
                typedef enum BitmapInterpolationMode : int BitmapInterpolationMode;
                
            } /* Windows */
        } /* Graphics */
    } /* Imaging */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Imaging {
                
                typedef enum BitmapPixelFormat : int BitmapPixelFormat;
                
            } /* Windows */
        } /* Graphics */
    } /* Imaging */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Imaging {
                
                typedef enum BitmapRotation : int BitmapRotation;
                
            } /* Windows */
        } /* Graphics */
    } /* Imaging */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Imaging {
                
                typedef enum ColorManagementMode : int ColorManagementMode;
                
            } /* Windows */
        } /* Graphics */
    } /* Imaging */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Imaging {
                
                typedef enum ExifOrientationMode : int ExifOrientationMode;
                
            } /* Windows */
        } /* Graphics */
    } /* Imaging */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Imaging {
                
                typedef enum JpegSubsamplingMode : int JpegSubsamplingMode;
                
            } /* Windows */
        } /* Graphics */
    } /* Imaging */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Imaging {
                
                typedef enum PngFilterMode : int PngFilterMode;
                
            } /* Windows */
        } /* Graphics */
    } /* Imaging */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Imaging {
                
                typedef enum TiffCompressionMode : int TiffCompressionMode;
                
            } /* Windows */
        } /* Graphics */
    } /* Imaging */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Imaging {
                
                typedef struct BitmapBounds BitmapBounds;
                
            } /* Windows */
        } /* Graphics */
    } /* Imaging */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Imaging {
                
                typedef struct BitmapPlaneDescription BitmapPlaneDescription;
                
            } /* Windows */
        } /* Graphics */
    } /* Imaging */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Imaging {
                
                typedef struct BitmapSize BitmapSize;
                
            } /* Windows */
        } /* Graphics */
    } /* Imaging */} /* ABI */



















namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Imaging {
                class BitmapBuffer;
            } /* Windows */
        } /* Graphics */
    } /* Imaging */} /* ABI */






namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Imaging {
                class BitmapProperties;
            } /* Windows */
        } /* Graphics */
    } /* Imaging */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Imaging {
                class BitmapPropertiesView;
            } /* Windows */
        } /* Graphics */
    } /* Imaging */} /* ABI */



namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Imaging {
                class BitmapTransform;
            } /* Windows */
        } /* Graphics */
    } /* Imaging */} /* ABI */














/*
 *
 * Struct Windows.Graphics.Imaging.BitmapAlphaMode
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Imaging {
                /* [v1_enum, contract] */
                enum BitmapAlphaMode : int
                {
                    BitmapAlphaMode_Premultiplied = 0,
                    BitmapAlphaMode_Straight = 1,
                    BitmapAlphaMode_Ignore = 2,
                };
                
            } /* Windows */
        } /* Graphics */
    } /* Imaging */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Graphics.Imaging.BitmapBufferAccessMode
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Imaging {
                /* [v1_enum, contract] */
                enum BitmapBufferAccessMode : int
                {
                    BitmapBufferAccessMode_Read = 0,
                    BitmapBufferAccessMode_ReadWrite = 1,
                    BitmapBufferAccessMode_Write = 2,
                };
                
            } /* Windows */
        } /* Graphics */
    } /* Imaging */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Graphics.Imaging.BitmapFlip
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Imaging {
                /* [v1_enum, contract] */
                enum BitmapFlip : int
                {
                    BitmapFlip_None = 0,
                    BitmapFlip_Horizontal = 1,
                    BitmapFlip_Vertical = 2,
                };
                
            } /* Windows */
        } /* Graphics */
    } /* Imaging */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Graphics.Imaging.BitmapInterpolationMode
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Imaging {
                /* [v1_enum, contract] */
                enum BitmapInterpolationMode : int
                {
                    BitmapInterpolationMode_NearestNeighbor = 0,
                    BitmapInterpolationMode_Linear = 1,
                    BitmapInterpolationMode_Cubic = 2,
                    BitmapInterpolationMode_Fant = 3,
                };
                
            } /* Windows */
        } /* Graphics */
    } /* Imaging */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Graphics.Imaging.BitmapPixelFormat
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Imaging {
                /* [v1_enum, contract] */
                enum BitmapPixelFormat : int
                {
                    BitmapPixelFormat_Unknown = 0,
                    BitmapPixelFormat_Rgba16 = 12,
                    BitmapPixelFormat_Rgba8 = 30,
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    
                    BitmapPixelFormat_Gray16 = 57,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    
                    BitmapPixelFormat_Gray8 = 62,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    
                    BitmapPixelFormat_Bgra8 = 87,
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    
                    BitmapPixelFormat_Nv12 = 103,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    
                    BitmapPixelFormat_Yuy2 = 107,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    
                };
                
            } /* Windows */
        } /* Graphics */
    } /* Imaging */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Graphics.Imaging.BitmapRotation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Imaging {
                /* [v1_enum, contract] */
                enum BitmapRotation : int
                {
                    BitmapRotation_None = 0,
                    BitmapRotation_Clockwise90Degrees = 1,
                    BitmapRotation_Clockwise180Degrees = 2,
                    BitmapRotation_Clockwise270Degrees = 3,
                };
                
            } /* Windows */
        } /* Graphics */
    } /* Imaging */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Graphics.Imaging.ColorManagementMode
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Imaging {
                /* [v1_enum, contract] */
                enum ColorManagementMode : int
                {
                    ColorManagementMode_DoNotColorManage = 0,
                    ColorManagementMode_ColorManageToSRgb = 1,
                };
                
            } /* Windows */
        } /* Graphics */
    } /* Imaging */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Graphics.Imaging.ExifOrientationMode
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Imaging {
                /* [v1_enum, contract] */
                enum ExifOrientationMode : int
                {
                    ExifOrientationMode_IgnoreExifOrientation = 0,
                    ExifOrientationMode_RespectExifOrientation = 1,
                };
                
            } /* Windows */
        } /* Graphics */
    } /* Imaging */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Graphics.Imaging.JpegSubsamplingMode
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Imaging {
                /* [v1_enum, contract] */
                enum JpegSubsamplingMode : int
                {
                    JpegSubsamplingMode_Default = 0,
                    JpegSubsamplingMode_Y4Cb2Cr0 = 1,
                    JpegSubsamplingMode_Y4Cb2Cr2 = 2,
                    JpegSubsamplingMode_Y4Cb4Cr4 = 3,
                };
                
            } /* Windows */
        } /* Graphics */
    } /* Imaging */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Graphics.Imaging.PngFilterMode
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Imaging {
                /* [v1_enum, contract] */
                enum PngFilterMode : int
                {
                    PngFilterMode_Automatic = 0,
                    PngFilterMode_None = 1,
                    PngFilterMode_Sub = 2,
                    PngFilterMode_Up = 3,
                    PngFilterMode_Average = 4,
                    PngFilterMode_Paeth = 5,
                    PngFilterMode_Adaptive = 6,
                };
                
            } /* Windows */
        } /* Graphics */
    } /* Imaging */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Graphics.Imaging.TiffCompressionMode
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Imaging {
                /* [v1_enum, contract] */
                enum TiffCompressionMode : int
                {
                    TiffCompressionMode_Automatic = 0,
                    TiffCompressionMode_None = 1,
                    TiffCompressionMode_Ccitt3 = 2,
                    TiffCompressionMode_Ccitt4 = 3,
                    TiffCompressionMode_Lzw = 4,
                    TiffCompressionMode_Rle = 5,
                    TiffCompressionMode_Zip = 6,
                    TiffCompressionMode_LzwhDifferencing = 7,
                };
                
            } /* Windows */
        } /* Graphics */
    } /* Imaging */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Graphics.Imaging.BitmapBounds
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Imaging {
                /* [contract] */
                struct BitmapBounds
                {
                    UINT32 X;
                    UINT32 Y;
                    UINT32 Width;
                    UINT32 Height;
                };
                
            } /* Windows */
        } /* Graphics */
    } /* Imaging */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Graphics.Imaging.BitmapPlaneDescription
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Imaging {
                /* [contract] */
                struct BitmapPlaneDescription
                {
                    INT32 StartIndex;
                    INT32 Width;
                    INT32 Height;
                    INT32 Stride;
                };
                
            } /* Windows */
        } /* Graphics */
    } /* Imaging */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Graphics.Imaging.BitmapSize
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Imaging {
                /* [contract] */
                struct BitmapSize
                {
                    UINT32 Width;
                    UINT32 Height;
                };
                
            } /* Windows */
        } /* Graphics */
    } /* Imaging */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Graphics.Imaging.IBitmapBuffer
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Graphics.Imaging.BitmapBuffer
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IMemoryBuffer
 *     Windows.Foundation.IClosable
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGraphics_CImaging_CIBitmapBuffer_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CImaging_CIBitmapBuffer_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Imaging_IBitmapBuffer[] = L"Windows.Graphics.Imaging.IBitmapBuffer";
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Imaging {
                /* [object, uuid("A53E04C4-399C-438C-B28F-A63A6B83D1A1"), exclusiveto, contract] */
                MIDL_INTERFACE("A53E04C4-399C-438C-B28F-A63A6B83D1A1")
                IBitmapBuffer : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE GetPlaneCount(
                        /* [retval, out] */__RPC__out INT32 * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetPlaneDescription(
                        /* [in] */INT32 index,
                        /* [retval, out] */__RPC__out ABI::Windows::Graphics::Imaging::BitmapPlaneDescription * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IBitmapBuffer=_uuidof(IBitmapBuffer);
                
            } /* Windows */
        } /* Graphics */
    } /* Imaging */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CImaging_CIBitmapBuffer;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CImaging_CIBitmapBuffer_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Graphics.Imaging.IBitmapCodecInformation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Graphics.Imaging.BitmapCodecInformation
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGraphics_CImaging_CIBitmapCodecInformation_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CImaging_CIBitmapCodecInformation_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Imaging_IBitmapCodecInformation[] = L"Windows.Graphics.Imaging.IBitmapCodecInformation";
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Imaging {
                /* [object, uuid("400CAAF2-C4B0-4392-A3B0-6F6F9BA95CB4"), exclusiveto, contract] */
                MIDL_INTERFACE("400CAAF2-C4B0-4392-A3B0-6F6F9BA95CB4")
                IBitmapCodecInformation : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CodecId(
                        /* [retval, out] */__RPC__out GUID * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_FileExtensions(
                        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_HSTRING * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_FriendlyName(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MimeTypes(
                        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_HSTRING * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IBitmapCodecInformation=_uuidof(IBitmapCodecInformation);
                
            } /* Windows */
        } /* Graphics */
    } /* Imaging */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CImaging_CIBitmapCodecInformation;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CImaging_CIBitmapCodecInformation_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Graphics.Imaging.IBitmapDecoder
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Graphics.Imaging.BitmapDecoder
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGraphics_CImaging_CIBitmapDecoder_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CImaging_CIBitmapDecoder_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Imaging_IBitmapDecoder[] = L"Windows.Graphics.Imaging.IBitmapDecoder";
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Imaging {
                /* [object, uuid("ACEF22BA-1D74-4C91-9DFC-9620745233E6"), exclusiveto, contract] */
                MIDL_INTERFACE("ACEF22BA-1D74-4C91-9DFC-9620745233E6")
                IBitmapDecoder : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_BitmapContainerProperties(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Graphics::Imaging::IBitmapPropertiesView * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DecoderInformation(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Graphics::Imaging::IBitmapCodecInformation * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_FrameCount(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetPreviewAsync(
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CGraphics__CImaging__CImageStream * * asyncInfo
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetFrameAsync(
                        /* [in] */UINT32 frameIndex,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapFrame * * asyncInfo
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IBitmapDecoder=_uuidof(IBitmapDecoder);
                
            } /* Windows */
        } /* Graphics */
    } /* Imaging */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CImaging_CIBitmapDecoder;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CImaging_CIBitmapDecoder_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Graphics.Imaging.IBitmapDecoderStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Graphics.Imaging.BitmapDecoder
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGraphics_CImaging_CIBitmapDecoderStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CImaging_CIBitmapDecoderStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Imaging_IBitmapDecoderStatics[] = L"Windows.Graphics.Imaging.IBitmapDecoderStatics";
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Imaging {
                /* [object, uuid("438CCB26-BCEF-4E95-BAD6-23A822E58D01"), exclusiveto, contract] */
                MIDL_INTERFACE("438CCB26-BCEF-4E95-BAD6-23A822E58D01")
                IBitmapDecoderStatics : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_BmpDecoderId(
                        /* [retval, out] */__RPC__out GUID * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_JpegDecoderId(
                        /* [retval, out] */__RPC__out GUID * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PngDecoderId(
                        /* [retval, out] */__RPC__out GUID * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_TiffDecoderId(
                        /* [retval, out] */__RPC__out GUID * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_GifDecoderId(
                        /* [retval, out] */__RPC__out GUID * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_JpegXRDecoderId(
                        /* [retval, out] */__RPC__out GUID * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IcoDecoderId(
                        /* [retval, out] */__RPC__out GUID * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetDecoderInformationEnumerator(
                        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CGraphics__CImaging__CBitmapCodecInformation * * decoderInformationEnumerator
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE CreateAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IRandomAccessStream * stream,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapDecoder * * asyncInfo
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE CreateWithIdAsync(
                        /* [in] */GUID decoderId,
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IRandomAccessStream * stream,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapDecoder * * asyncInfo
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IBitmapDecoderStatics=_uuidof(IBitmapDecoderStatics);
                
            } /* Windows */
        } /* Graphics */
    } /* Imaging */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CImaging_CIBitmapDecoderStatics;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CImaging_CIBitmapDecoderStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Graphics.Imaging.IBitmapEncoder
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Graphics.Imaging.BitmapEncoder
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoder_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoder_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Imaging_IBitmapEncoder[] = L"Windows.Graphics.Imaging.IBitmapEncoder";
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Imaging {
                /* [object, uuid("2BC468E3-E1F8-4B54-95E8-32919551CE62"), exclusiveto, contract] */
                MIDL_INTERFACE("2BC468E3-E1F8-4B54-95E8-32919551CE62")
                IBitmapEncoder : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_EncoderInformation(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Graphics::Imaging::IBitmapCodecInformation * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_BitmapProperties(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Graphics::Imaging::IBitmapProperties * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_BitmapContainerProperties(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Graphics::Imaging::IBitmapProperties * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsThumbnailGenerated(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_IsThumbnailGenerated(
                        /* [in] */boolean value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_GeneratedThumbnailWidth(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_GeneratedThumbnailWidth(
                        /* [in] */UINT32 value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_GeneratedThumbnailHeight(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_GeneratedThumbnailHeight(
                        /* [in] */UINT32 value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_BitmapTransform(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Graphics::Imaging::IBitmapTransform * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE SetPixelData(
                        /* [in] */ABI::Windows::Graphics::Imaging::BitmapPixelFormat pixelFormat,
                        /* [in] */ABI::Windows::Graphics::Imaging::BitmapAlphaMode alphaMode,
                        /* [in] */UINT32 width,
                        /* [in] */UINT32 height,
                        /* [in] */DOUBLE dpiX,
                        /* [in] */DOUBLE dpiY,
                        /* [in, range(0, 2147483647)] */__RPC__in_range(0,0x7fffffff) UINT32 __pixelsSize,
                        /* [size_is(__pixelsSize), in] */__RPC__in_ecount_full(__pixelsSize) BYTE * pixels
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE GoToNextFrameAsync(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * asyncInfo
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE GoToNextFrameWithEncodingOptionsAsync(
                        /* [in] */__RPC__in_opt __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue * encodingOptions,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * asyncInfo
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE FlushAsync(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * asyncInfo
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IBitmapEncoder=_uuidof(IBitmapEncoder);
                
            } /* Windows */
        } /* Graphics */
    } /* Imaging */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoder;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoder_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Graphics.Imaging.IBitmapEncoderStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Graphics.Imaging.BitmapEncoder
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoderStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoderStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Imaging_IBitmapEncoderStatics[] = L"Windows.Graphics.Imaging.IBitmapEncoderStatics";
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Imaging {
                /* [object, uuid("A74356A7-A4E4-4EB9-8E40-564DE7E1CCB2"), exclusiveto, contract] */
                MIDL_INTERFACE("A74356A7-A4E4-4EB9-8E40-564DE7E1CCB2")
                IBitmapEncoderStatics : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_BmpEncoderId(
                        /* [retval, out] */__RPC__out GUID * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_JpegEncoderId(
                        /* [retval, out] */__RPC__out GUID * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PngEncoderId(
                        /* [retval, out] */__RPC__out GUID * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_TiffEncoderId(
                        /* [retval, out] */__RPC__out GUID * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_GifEncoderId(
                        /* [retval, out] */__RPC__out GUID * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_JpegXREncoderId(
                        /* [retval, out] */__RPC__out GUID * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetEncoderInformationEnumerator(
                        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CGraphics__CImaging__CBitmapCodecInformation * * encoderInformationEnumerator
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE CreateAsync(
                        /* [in] */GUID encoderId,
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IRandomAccessStream * stream,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapEncoder * * asyncInfo
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE CreateWithEncodingOptionsAsync(
                        /* [in] */GUID encoderId,
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IRandomAccessStream * stream,
                        /* [in] */__RPC__in_opt __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue * encodingOptions,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapEncoder * * asyncInfo
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateForTranscodingAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IRandomAccessStream * stream,
                        /* [in] */__RPC__in_opt ABI::Windows::Graphics::Imaging::IBitmapDecoder * bitmapDecoder,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapEncoder * * asyncInfo
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateForInPlacePropertyEncodingAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Graphics::Imaging::IBitmapDecoder * bitmapDecoder,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapEncoder * * asyncInfo
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IBitmapEncoderStatics=_uuidof(IBitmapEncoderStatics);
                
            } /* Windows */
        } /* Graphics */
    } /* Imaging */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoderStatics;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoderStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Graphics.Imaging.IBitmapEncoderWithSoftwareBitmap
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Graphics.Imaging.BitmapEncoder
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoderWithSoftwareBitmap_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoderWithSoftwareBitmap_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Imaging_IBitmapEncoderWithSoftwareBitmap[] = L"Windows.Graphics.Imaging.IBitmapEncoderWithSoftwareBitmap";
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Imaging {
                /* [object, uuid("686CD241-4330-4C77-ACE4-0334968B1768"), exclusiveto, contract] */
                MIDL_INTERFACE("686CD241-4330-4C77-ACE4-0334968B1768")
                IBitmapEncoderWithSoftwareBitmap : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE SetSoftwareBitmap(
                        /* [in] */__RPC__in_opt ABI::Windows::Graphics::Imaging::ISoftwareBitmap * bitmap
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IBitmapEncoderWithSoftwareBitmap=_uuidof(IBitmapEncoderWithSoftwareBitmap);
                
            } /* Windows */
        } /* Graphics */
    } /* Imaging */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoderWithSoftwareBitmap;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoderWithSoftwareBitmap_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Graphics.Imaging.IBitmapFrame
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGraphics_CImaging_CIBitmapFrame_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CImaging_CIBitmapFrame_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Imaging_IBitmapFrame[] = L"Windows.Graphics.Imaging.IBitmapFrame";
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Imaging {
                /* [object, uuid("72A49A1C-8081-438D-91BC-94ECFC8185C6"), contract] */
                MIDL_INTERFACE("72A49A1C-8081-438D-91BC-94ECFC8185C6")
                IBitmapFrame : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE GetThumbnailAsync(
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CGraphics__CImaging__CImageStream * * asyncInfo
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_BitmapProperties(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Graphics::Imaging::IBitmapPropertiesView * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_BitmapPixelFormat(
                        /* [retval, out] */__RPC__out ABI::Windows::Graphics::Imaging::BitmapPixelFormat * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_BitmapAlphaMode(
                        /* [retval, out] */__RPC__out ABI::Windows::Graphics::Imaging::BitmapAlphaMode * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DpiX(
                        /* [retval, out] */__RPC__out DOUBLE * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DpiY(
                        /* [retval, out] */__RPC__out DOUBLE * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PixelWidth(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PixelHeight(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_OrientedPixelWidth(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_OrientedPixelHeight(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE GetPixelDataAsync(
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CGraphics__CImaging__CPixelDataProvider * * asyncInfo
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE GetPixelDataTransformedAsync(
                        /* [in] */ABI::Windows::Graphics::Imaging::BitmapPixelFormat pixelFormat,
                        /* [in] */ABI::Windows::Graphics::Imaging::BitmapAlphaMode alphaMode,
                        /* [in] */__RPC__in_opt ABI::Windows::Graphics::Imaging::IBitmapTransform * transform,
                        /* [in] */ABI::Windows::Graphics::Imaging::ExifOrientationMode exifOrientationMode,
                        /* [in] */ABI::Windows::Graphics::Imaging::ColorManagementMode colorManagementMode,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CGraphics__CImaging__CPixelDataProvider * * asyncInfo
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IBitmapFrame=_uuidof(IBitmapFrame);
                
            } /* Windows */
        } /* Graphics */
    } /* Imaging */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CImaging_CIBitmapFrame;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CImaging_CIBitmapFrame_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Graphics.Imaging.IBitmapFrameWithSoftwareBitmap
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Graphics.Imaging.IBitmapFrame
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGraphics_CImaging_CIBitmapFrameWithSoftwareBitmap_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CImaging_CIBitmapFrameWithSoftwareBitmap_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Imaging_IBitmapFrameWithSoftwareBitmap[] = L"Windows.Graphics.Imaging.IBitmapFrameWithSoftwareBitmap";
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Imaging {
                /* [object, uuid("FE287C9A-420C-4963-87AD-691436E08383"), contract] */
                MIDL_INTERFACE("FE287C9A-420C-4963-87AD-691436E08383")
                IBitmapFrameWithSoftwareBitmap : IInspectable
                {
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE GetSoftwareBitmapAsync(
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CGraphics__CImaging__CSoftwareBitmap * * value
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE GetSoftwareBitmapConvertedAsync(
                        /* [in] */ABI::Windows::Graphics::Imaging::BitmapPixelFormat pixelFormat,
                        /* [in] */ABI::Windows::Graphics::Imaging::BitmapAlphaMode alphaMode,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CGraphics__CImaging__CSoftwareBitmap * * value
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE GetSoftwareBitmapTransformedAsync(
                        /* [in] */ABI::Windows::Graphics::Imaging::BitmapPixelFormat pixelFormat,
                        /* [in] */ABI::Windows::Graphics::Imaging::BitmapAlphaMode alphaMode,
                        /* [in] */__RPC__in_opt ABI::Windows::Graphics::Imaging::IBitmapTransform * transform,
                        /* [in] */ABI::Windows::Graphics::Imaging::ExifOrientationMode exifOrientationMode,
                        /* [in] */ABI::Windows::Graphics::Imaging::ColorManagementMode colorManagementMode,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CGraphics__CImaging__CSoftwareBitmap * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IBitmapFrameWithSoftwareBitmap=_uuidof(IBitmapFrameWithSoftwareBitmap);
                
            } /* Windows */
        } /* Graphics */
    } /* Imaging */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CImaging_CIBitmapFrameWithSoftwareBitmap;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CImaging_CIBitmapFrameWithSoftwareBitmap_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Graphics.Imaging.IBitmapProperties
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Graphics.Imaging.BitmapProperties
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Graphics.Imaging.IBitmapPropertiesView
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGraphics_CImaging_CIBitmapProperties_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CImaging_CIBitmapProperties_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Imaging_IBitmapProperties[] = L"Windows.Graphics.Imaging.IBitmapProperties";
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Imaging {
                /* [object, uuid("EA9F4F1B-B505-4450-A4D1-E8CA94529D8D"), exclusiveto, contract] */
                MIDL_INTERFACE("EA9F4F1B-B505-4450-A4D1-E8CA94529D8D")
                IBitmapProperties : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE SetPropertiesAsync(
                        /* [in] */__RPC__in_opt __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue * propertiesToSet,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * asyncInfo
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IBitmapProperties=_uuidof(IBitmapProperties);
                
            } /* Windows */
        } /* Graphics */
    } /* Imaging */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CImaging_CIBitmapProperties;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CImaging_CIBitmapProperties_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Graphics.Imaging.IBitmapPropertiesView
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGraphics_CImaging_CIBitmapPropertiesView_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CImaging_CIBitmapPropertiesView_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Imaging_IBitmapPropertiesView[] = L"Windows.Graphics.Imaging.IBitmapPropertiesView";
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Imaging {
                /* [object, uuid("7E0FE87A-3A70-48F8-9C55-196CF5A545F5"), contract] */
                MIDL_INTERFACE("7E0FE87A-3A70-48F8-9C55-196CF5A545F5")
                IBitmapPropertiesView : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE GetPropertiesAsync(
                        /* [in] */__RPC__in_opt __FIIterable_1_HSTRING * propertiesToRetrieve,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapPropertySet * * asyncInfo
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IBitmapPropertiesView=_uuidof(IBitmapPropertiesView);
                
            } /* Windows */
        } /* Graphics */
    } /* Imaging */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CImaging_CIBitmapPropertiesView;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CImaging_CIBitmapPropertiesView_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Graphics.Imaging.IBitmapTransform
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Graphics.Imaging.BitmapTransform
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGraphics_CImaging_CIBitmapTransform_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CImaging_CIBitmapTransform_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Imaging_IBitmapTransform[] = L"Windows.Graphics.Imaging.IBitmapTransform";
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Imaging {
                /* [object, uuid("AE755344-E268-4D35-ADCF-E995D31A8D34"), exclusiveto, contract] */
                MIDL_INTERFACE("AE755344-E268-4D35-ADCF-E995D31A8D34")
                IBitmapTransform : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ScaledWidth(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ScaledWidth(
                        /* [in] */UINT32 value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ScaledHeight(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ScaledHeight(
                        /* [in] */UINT32 value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_InterpolationMode(
                        /* [retval, out] */__RPC__out ABI::Windows::Graphics::Imaging::BitmapInterpolationMode * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_InterpolationMode(
                        /* [in] */ABI::Windows::Graphics::Imaging::BitmapInterpolationMode value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Flip(
                        /* [retval, out] */__RPC__out ABI::Windows::Graphics::Imaging::BitmapFlip * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Flip(
                        /* [in] */ABI::Windows::Graphics::Imaging::BitmapFlip value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Rotation(
                        /* [retval, out] */__RPC__out ABI::Windows::Graphics::Imaging::BitmapRotation * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Rotation(
                        /* [in] */ABI::Windows::Graphics::Imaging::BitmapRotation value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Bounds(
                        /* [retval, out] */__RPC__out ABI::Windows::Graphics::Imaging::BitmapBounds * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Bounds(
                        /* [in] */ABI::Windows::Graphics::Imaging::BitmapBounds value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IBitmapTransform=_uuidof(IBitmapTransform);
                
            } /* Windows */
        } /* Graphics */
    } /* Imaging */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CImaging_CIBitmapTransform;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CImaging_CIBitmapTransform_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Graphics.Imaging.IBitmapTypedValue
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Graphics.Imaging.BitmapTypedValue
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGraphics_CImaging_CIBitmapTypedValue_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CImaging_CIBitmapTypedValue_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Imaging_IBitmapTypedValue[] = L"Windows.Graphics.Imaging.IBitmapTypedValue";
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Imaging {
                /* [object, uuid("CD8044A9-2443-4000-B0CD-79316C56F589"), exclusiveto, contract] */
                MIDL_INTERFACE("CD8044A9-2443-4000-B0CD-79316C56F589")
                IBitmapTypedValue : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Value(
                        /* [retval, out] */__RPC__deref_out_opt IInspectable * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Type(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::PropertyType * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IBitmapTypedValue=_uuidof(IBitmapTypedValue);
                
            } /* Windows */
        } /* Graphics */
    } /* Imaging */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CImaging_CIBitmapTypedValue;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CImaging_CIBitmapTypedValue_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Graphics.Imaging.IBitmapTypedValueFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Graphics.Imaging.BitmapTypedValue
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGraphics_CImaging_CIBitmapTypedValueFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CImaging_CIBitmapTypedValueFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Imaging_IBitmapTypedValueFactory[] = L"Windows.Graphics.Imaging.IBitmapTypedValueFactory";
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Imaging {
                /* [object, uuid("92DBB599-CE13-46BB-9545-CB3A3F63EB8B"), exclusiveto, contract] */
                MIDL_INTERFACE("92DBB599-CE13-46BB-9545-CB3A3F63EB8B")
                IBitmapTypedValueFactory : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE Create(
                        /* [in] */__RPC__in_opt IInspectable * value,
                        /* [in] */ABI::Windows::Foundation::PropertyType type,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Graphics::Imaging::IBitmapTypedValue * * bitmapTypedValue
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IBitmapTypedValueFactory=_uuidof(IBitmapTypedValueFactory);
                
            } /* Windows */
        } /* Graphics */
    } /* Imaging */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CImaging_CIBitmapTypedValueFactory;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CImaging_CIBitmapTypedValueFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Graphics.Imaging.IPixelDataProvider
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Graphics.Imaging.PixelDataProvider
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGraphics_CImaging_CIPixelDataProvider_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CImaging_CIPixelDataProvider_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Imaging_IPixelDataProvider[] = L"Windows.Graphics.Imaging.IPixelDataProvider";
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Imaging {
                /* [object, uuid("DD831F25-185C-4595-9FB9-CCBE6EC18A6F"), exclusiveto, contract] */
                MIDL_INTERFACE("DD831F25-185C-4595-9FB9-CCBE6EC18A6F")
                IPixelDataProvider : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE DetachPixelData(
                        /* [out] */__RPC__out UINT32 * __pixelDataSize,
                        /* [size_is(, *(__pixelDataSize)), retval, out] */__RPC__deref_out_ecount_full_opt(*(__pixelDataSize)) BYTE * * pixelData
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IPixelDataProvider=_uuidof(IPixelDataProvider);
                
            } /* Windows */
        } /* Graphics */
    } /* Imaging */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CImaging_CIPixelDataProvider;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CImaging_CIPixelDataProvider_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Graphics.Imaging.ISoftwareBitmap
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Graphics.Imaging.SoftwareBitmap
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Imaging_ISoftwareBitmap[] = L"Windows.Graphics.Imaging.ISoftwareBitmap";
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Imaging {
                /* [object, uuid("689E0708-7EEF-483F-963F-DA938818E073"), exclusiveto, contract] */
                MIDL_INTERFACE("689E0708-7EEF-483F-963F-DA938818E073")
                ISoftwareBitmap : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_BitmapPixelFormat(
                        /* [retval, out] */__RPC__out ABI::Windows::Graphics::Imaging::BitmapPixelFormat * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_BitmapAlphaMode(
                        /* [retval, out] */__RPC__out ABI::Windows::Graphics::Imaging::BitmapAlphaMode * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PixelWidth(
                        /* [retval, out] */__RPC__out INT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PixelHeight(
                        /* [retval, out] */__RPC__out INT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsReadOnly(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_DpiX(
                        /* [in] */DOUBLE value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DpiX(
                        /* [retval, out] */__RPC__out DOUBLE * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_DpiY(
                        /* [in] */DOUBLE value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DpiY(
                        /* [retval, out] */__RPC__out DOUBLE * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE LockBuffer(
                        /* [in] */ABI::Windows::Graphics::Imaging::BitmapBufferAccessMode mode,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Graphics::Imaging::IBitmapBuffer * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CopyTo(
                        /* [in] */__RPC__in_opt ABI::Windows::Graphics::Imaging::ISoftwareBitmap * bitmap
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CopyFromBuffer(
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IBuffer * buffer
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CopyToBuffer(
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IBuffer * buffer
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetReadOnlyView(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Graphics::Imaging::ISoftwareBitmap * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ISoftwareBitmap=_uuidof(ISoftwareBitmap);
                
            } /* Windows */
        } /* Graphics */
    } /* Imaging */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Graphics.Imaging.ISoftwareBitmapFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Graphics.Imaging.SoftwareBitmap
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmapFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmapFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Imaging_ISoftwareBitmapFactory[] = L"Windows.Graphics.Imaging.ISoftwareBitmapFactory";
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Imaging {
                /* [object, uuid("C99FEB69-2D62-4D47-A6B3-4FDB6A07FDF8"), exclusiveto, contract] */
                MIDL_INTERFACE("C99FEB69-2D62-4D47-A6B3-4FDB6A07FDF8")
                ISoftwareBitmapFactory : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE Create(
                        /* [in] */ABI::Windows::Graphics::Imaging::BitmapPixelFormat format,
                        /* [in] */INT32 width,
                        /* [in] */INT32 height,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Graphics::Imaging::ISoftwareBitmap * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateWithAlpha(
                        /* [in] */ABI::Windows::Graphics::Imaging::BitmapPixelFormat format,
                        /* [in] */INT32 width,
                        /* [in] */INT32 height,
                        /* [in] */ABI::Windows::Graphics::Imaging::BitmapAlphaMode alpha,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Graphics::Imaging::ISoftwareBitmap * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ISoftwareBitmapFactory=_uuidof(ISoftwareBitmapFactory);
                
            } /* Windows */
        } /* Graphics */
    } /* Imaging */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmapFactory;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmapFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Graphics.Imaging.ISoftwareBitmapStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Graphics.Imaging.SoftwareBitmap
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmapStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmapStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Imaging_ISoftwareBitmapStatics[] = L"Windows.Graphics.Imaging.ISoftwareBitmapStatics";
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Imaging {
                /* [object, uuid("DF0385DB-672F-4A9D-806E-C2442F343E86"), exclusiveto, contract] */
                MIDL_INTERFACE("DF0385DB-672F-4A9D-806E-C2442F343E86")
                ISoftwareBitmapStatics : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE Copy(
                        /* [in] */__RPC__in_opt ABI::Windows::Graphics::Imaging::ISoftwareBitmap * source,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Graphics::Imaging::ISoftwareBitmap * * value
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE Convert(
                        /* [in] */__RPC__in_opt ABI::Windows::Graphics::Imaging::ISoftwareBitmap * source,
                        /* [in] */ABI::Windows::Graphics::Imaging::BitmapPixelFormat format,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Graphics::Imaging::ISoftwareBitmap * * value
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE ConvertWithAlpha(
                        /* [in] */__RPC__in_opt ABI::Windows::Graphics::Imaging::ISoftwareBitmap * source,
                        /* [in] */ABI::Windows::Graphics::Imaging::BitmapPixelFormat format,
                        /* [in] */ABI::Windows::Graphics::Imaging::BitmapAlphaMode alpha,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Graphics::Imaging::ISoftwareBitmap * * value
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE CreateCopyFromBuffer(
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IBuffer * source,
                        /* [in] */ABI::Windows::Graphics::Imaging::BitmapPixelFormat format,
                        /* [in] */INT32 width,
                        /* [in] */INT32 height,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Graphics::Imaging::ISoftwareBitmap * * value
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE CreateCopyWithAlphaFromBuffer(
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IBuffer * source,
                        /* [in] */ABI::Windows::Graphics::Imaging::BitmapPixelFormat format,
                        /* [in] */INT32 width,
                        /* [in] */INT32 height,
                        /* [in] */ABI::Windows::Graphics::Imaging::BitmapAlphaMode alpha,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Graphics::Imaging::ISoftwareBitmap * * value
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE CreateCopyFromSurfaceAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface * surface,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CGraphics__CImaging__CSoftwareBitmap * * value
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE CreateCopyWithAlphaFromSurfaceAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface * surface,
                        /* [in] */ABI::Windows::Graphics::Imaging::BitmapAlphaMode alpha,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CGraphics__CImaging__CSoftwareBitmap * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ISoftwareBitmapStatics=_uuidof(ISoftwareBitmapStatics);
                
            } /* Windows */
        } /* Graphics */
    } /* Imaging */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmapStatics;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmapStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Graphics.Imaging.BitmapBuffer
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Graphics.Imaging.IBitmapBuffer ** Default Interface **
 *    Windows.Foundation.IMemoryBuffer
 *    Windows.Foundation.IClosable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Graphics_Imaging_BitmapBuffer_DEFINED
#define RUNTIMECLASS_Windows_Graphics_Imaging_BitmapBuffer_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Imaging_BitmapBuffer[] = L"Windows.Graphics.Imaging.BitmapBuffer";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Graphics.Imaging.BitmapCodecInformation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Graphics.Imaging.IBitmapCodecInformation ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Graphics_Imaging_BitmapCodecInformation_DEFINED
#define RUNTIMECLASS_Windows_Graphics_Imaging_BitmapCodecInformation_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Imaging_BitmapCodecInformation[] = L"Windows.Graphics.Imaging.BitmapCodecInformation";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Graphics.Imaging.BitmapDecoder
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Graphics.Imaging.IBitmapDecoderStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Graphics.Imaging.IBitmapDecoder ** Default Interface **
 *    Windows.Graphics.Imaging.IBitmapFrame
 *    Windows.Graphics.Imaging.IBitmapFrameWithSoftwareBitmap
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Graphics_Imaging_BitmapDecoder_DEFINED
#define RUNTIMECLASS_Windows_Graphics_Imaging_BitmapDecoder_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Imaging_BitmapDecoder[] = L"Windows.Graphics.Imaging.BitmapDecoder";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Graphics.Imaging.BitmapEncoder
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Graphics.Imaging.IBitmapEncoderStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Graphics.Imaging.IBitmapEncoder ** Default Interface **
 *    Windows.Graphics.Imaging.IBitmapEncoderWithSoftwareBitmap
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Graphics_Imaging_BitmapEncoder_DEFINED
#define RUNTIMECLASS_Windows_Graphics_Imaging_BitmapEncoder_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Imaging_BitmapEncoder[] = L"Windows.Graphics.Imaging.BitmapEncoder";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Graphics.Imaging.BitmapFrame
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Graphics.Imaging.IBitmapFrame ** Default Interface **
 *    Windows.Graphics.Imaging.IBitmapFrameWithSoftwareBitmap
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Graphics_Imaging_BitmapFrame_DEFINED
#define RUNTIMECLASS_Windows_Graphics_Imaging_BitmapFrame_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Imaging_BitmapFrame[] = L"Windows.Graphics.Imaging.BitmapFrame";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Graphics.Imaging.BitmapProperties
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Graphics.Imaging.IBitmapProperties ** Default Interface **
 *    Windows.Graphics.Imaging.IBitmapPropertiesView
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Graphics_Imaging_BitmapProperties_DEFINED
#define RUNTIMECLASS_Windows_Graphics_Imaging_BitmapProperties_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Imaging_BitmapProperties[] = L"Windows.Graphics.Imaging.BitmapProperties";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Graphics.Imaging.BitmapPropertiesView
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Graphics.Imaging.IBitmapPropertiesView ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Graphics_Imaging_BitmapPropertiesView_DEFINED
#define RUNTIMECLASS_Windows_Graphics_Imaging_BitmapPropertiesView_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Imaging_BitmapPropertiesView[] = L"Windows.Graphics.Imaging.BitmapPropertiesView";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Graphics.Imaging.BitmapPropertySet
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Foundation.Collections.IMap_2_HSTRING,Windows.Graphics.Imaging.BitmapTypedValue ** Default Interface **
 *    Windows.Foundation.Collections.IIterable_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Graphics_Imaging_BitmapPropertySet_DEFINED
#define RUNTIMECLASS_Windows_Graphics_Imaging_BitmapPropertySet_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Imaging_BitmapPropertySet[] = L"Windows.Graphics.Imaging.BitmapPropertySet";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Graphics.Imaging.BitmapTransform
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Graphics.Imaging.IBitmapTransform ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Graphics_Imaging_BitmapTransform_DEFINED
#define RUNTIMECLASS_Windows_Graphics_Imaging_BitmapTransform_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Imaging_BitmapTransform[] = L"Windows.Graphics.Imaging.BitmapTransform";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Graphics.Imaging.BitmapTypedValue
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Graphics.Imaging.IBitmapTypedValueFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Graphics.Imaging.IBitmapTypedValue ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Graphics_Imaging_BitmapTypedValue_DEFINED
#define RUNTIMECLASS_Windows_Graphics_Imaging_BitmapTypedValue_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Imaging_BitmapTypedValue[] = L"Windows.Graphics.Imaging.BitmapTypedValue";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Graphics.Imaging.ImageStream
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Storage.Streams.IRandomAccessStreamWithContentType ** Default Interface **
 *    Windows.Storage.Streams.IContentTypeProvider
 *    Windows.Storage.Streams.IRandomAccessStream
 *    Windows.Storage.Streams.IOutputStream
 *    Windows.Foundation.IClosable
 *    Windows.Storage.Streams.IInputStream
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Graphics_Imaging_ImageStream_DEFINED
#define RUNTIMECLASS_Windows_Graphics_Imaging_ImageStream_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Imaging_ImageStream[] = L"Windows.Graphics.Imaging.ImageStream";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Graphics.Imaging.PixelDataProvider
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Graphics.Imaging.IPixelDataProvider ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Graphics_Imaging_PixelDataProvider_DEFINED
#define RUNTIMECLASS_Windows_Graphics_Imaging_PixelDataProvider_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Imaging_PixelDataProvider[] = L"Windows.Graphics.Imaging.PixelDataProvider";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Graphics.Imaging.SoftwareBitmap
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Graphics.Imaging.ISoftwareBitmapFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Graphics.Imaging.ISoftwareBitmapStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Graphics.Imaging.ISoftwareBitmap ** Default Interface **
 *    Windows.Foundation.IClosable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Graphics_Imaging_SoftwareBitmap_DEFINED
#define RUNTIMECLASS_Windows_Graphics_Imaging_SoftwareBitmap_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Imaging_SoftwareBitmap[] = L"Windows.Graphics.Imaging.SoftwareBitmap";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000




#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CGraphics_CImaging_CIBitmapBuffer_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CImaging_CIBitmapBuffer_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGraphics_CImaging_CIBitmapBuffer __x_ABI_CWindows_CGraphics_CImaging_CIBitmapBuffer;

#endif // ____x_ABI_CWindows_CGraphics_CImaging_CIBitmapBuffer_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CImaging_CIBitmapCodecInformation_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CImaging_CIBitmapCodecInformation_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGraphics_CImaging_CIBitmapCodecInformation __x_ABI_CWindows_CGraphics_CImaging_CIBitmapCodecInformation;

#endif // ____x_ABI_CWindows_CGraphics_CImaging_CIBitmapCodecInformation_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CImaging_CIBitmapDecoder_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CImaging_CIBitmapDecoder_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGraphics_CImaging_CIBitmapDecoder __x_ABI_CWindows_CGraphics_CImaging_CIBitmapDecoder;

#endif // ____x_ABI_CWindows_CGraphics_CImaging_CIBitmapDecoder_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CImaging_CIBitmapDecoderStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CImaging_CIBitmapDecoderStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGraphics_CImaging_CIBitmapDecoderStatics __x_ABI_CWindows_CGraphics_CImaging_CIBitmapDecoderStatics;

#endif // ____x_ABI_CWindows_CGraphics_CImaging_CIBitmapDecoderStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoder_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoder_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoder __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoder;

#endif // ____x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoder_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoderStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoderStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoderStatics __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoderStatics;

#endif // ____x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoderStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoderWithSoftwareBitmap_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoderWithSoftwareBitmap_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoderWithSoftwareBitmap __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoderWithSoftwareBitmap;

#endif // ____x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoderWithSoftwareBitmap_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CImaging_CIBitmapFrame_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CImaging_CIBitmapFrame_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGraphics_CImaging_CIBitmapFrame __x_ABI_CWindows_CGraphics_CImaging_CIBitmapFrame;

#endif // ____x_ABI_CWindows_CGraphics_CImaging_CIBitmapFrame_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CImaging_CIBitmapFrameWithSoftwareBitmap_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CImaging_CIBitmapFrameWithSoftwareBitmap_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGraphics_CImaging_CIBitmapFrameWithSoftwareBitmap __x_ABI_CWindows_CGraphics_CImaging_CIBitmapFrameWithSoftwareBitmap;

#endif // ____x_ABI_CWindows_CGraphics_CImaging_CIBitmapFrameWithSoftwareBitmap_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CImaging_CIBitmapProperties_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CImaging_CIBitmapProperties_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGraphics_CImaging_CIBitmapProperties __x_ABI_CWindows_CGraphics_CImaging_CIBitmapProperties;

#endif // ____x_ABI_CWindows_CGraphics_CImaging_CIBitmapProperties_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CImaging_CIBitmapPropertiesView_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CImaging_CIBitmapPropertiesView_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGraphics_CImaging_CIBitmapPropertiesView __x_ABI_CWindows_CGraphics_CImaging_CIBitmapPropertiesView;

#endif // ____x_ABI_CWindows_CGraphics_CImaging_CIBitmapPropertiesView_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CImaging_CIBitmapTransform_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CImaging_CIBitmapTransform_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGraphics_CImaging_CIBitmapTransform __x_ABI_CWindows_CGraphics_CImaging_CIBitmapTransform;

#endif // ____x_ABI_CWindows_CGraphics_CImaging_CIBitmapTransform_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CImaging_CIBitmapTypedValue_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CImaging_CIBitmapTypedValue_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGraphics_CImaging_CIBitmapTypedValue __x_ABI_CWindows_CGraphics_CImaging_CIBitmapTypedValue;

#endif // ____x_ABI_CWindows_CGraphics_CImaging_CIBitmapTypedValue_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CImaging_CIBitmapTypedValueFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CImaging_CIBitmapTypedValueFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGraphics_CImaging_CIBitmapTypedValueFactory __x_ABI_CWindows_CGraphics_CImaging_CIBitmapTypedValueFactory;

#endif // ____x_ABI_CWindows_CGraphics_CImaging_CIBitmapTypedValueFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CImaging_CIPixelDataProvider_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CImaging_CIPixelDataProvider_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGraphics_CImaging_CIPixelDataProvider __x_ABI_CWindows_CGraphics_CImaging_CIPixelDataProvider;

#endif // ____x_ABI_CWindows_CGraphics_CImaging_CIPixelDataProvider_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap;

#endif // ____x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmapFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmapFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmapFactory __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmapFactory;

#endif // ____x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmapFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmapStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmapStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmapStatics __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmapStatics;

#endif // ____x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmapStatics_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue_INTERFACE_DEFINED__)
#define ____FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue_INTERFACE_DEFINED__

typedef interface __FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue __FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue;

typedef struct __FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValueVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Key )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue * This, /* [retval][out] */ __RPC__out HSTRING *key);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue * This, /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CImaging_CIBitmapTypedValue * *value);
    END_INTERFACE
} __FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValueVtbl;

interface __FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue
{
    CONST_VTBL struct __FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValueVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue_get_Key(This,key)	\
    ( (This)->lpVtbl -> get_Key(This,key) ) 

#define __FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue_get_Value(This,value)	\
    ( (This)->lpVtbl -> get_Value(This,value) ) 
#endif /* COBJMACROS */


#endif // ____FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue_INTERFACE_DEFINED__)
#define ____FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue_INTERFACE_DEFINED__

typedef interface __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue;

typedef struct __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValueVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue * This, /* [retval][out] */ __RPC__out __FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValueVtbl;

interface __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue
{
    CONST_VTBL struct __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValueVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue_INTERFACE_DEFINED__)
#define ____FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue_INTERFACE_DEFINED__

typedef interface __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue;

typedef  struct __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValueVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue **first);

    END_INTERFACE
} __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValueVtbl;

interface __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue
{
    CONST_VTBL struct __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValueVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CGraphics__CImaging__CBitmapCodecInformation_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CGraphics__CImaging__CBitmapCodecInformation_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CGraphics__CImaging__CBitmapCodecInformation __FIIterator_1_Windows__CGraphics__CImaging__CBitmapCodecInformation;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CGraphics__CImaging__CBitmapCodecInformation;

typedef struct __FIIterator_1_Windows__CGraphics__CImaging__CBitmapCodecInformationVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CGraphics__CImaging__CBitmapCodecInformation * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CGraphics__CImaging__CBitmapCodecInformation * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CGraphics__CImaging__CBitmapCodecInformation * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CGraphics__CImaging__CBitmapCodecInformation * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CGraphics__CImaging__CBitmapCodecInformation * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CGraphics__CImaging__CBitmapCodecInformation * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CGraphics__CImaging__CBitmapCodecInformation * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CGraphics_CImaging_CIBitmapCodecInformation * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CGraphics__CImaging__CBitmapCodecInformation * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CGraphics__CImaging__CBitmapCodecInformation * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CGraphics__CImaging__CBitmapCodecInformation * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CGraphics_CImaging_CIBitmapCodecInformation * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CGraphics__CImaging__CBitmapCodecInformationVtbl;

interface __FIIterator_1_Windows__CGraphics__CImaging__CBitmapCodecInformation
{
    CONST_VTBL struct __FIIterator_1_Windows__CGraphics__CImaging__CBitmapCodecInformationVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CGraphics__CImaging__CBitmapCodecInformation_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CGraphics__CImaging__CBitmapCodecInformation_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CGraphics__CImaging__CBitmapCodecInformation_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CGraphics__CImaging__CBitmapCodecInformation_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CGraphics__CImaging__CBitmapCodecInformation_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CGraphics__CImaging__CBitmapCodecInformation_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CGraphics__CImaging__CBitmapCodecInformation_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CGraphics__CImaging__CBitmapCodecInformation_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CGraphics__CImaging__CBitmapCodecInformation_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CGraphics__CImaging__CBitmapCodecInformation_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CGraphics__CImaging__CBitmapCodecInformation_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CGraphics__CImaging__CBitmapCodecInformation_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CGraphics__CImaging__CBitmapCodecInformation_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CGraphics__CImaging__CBitmapCodecInformation __FIIterable_1_Windows__CGraphics__CImaging__CBitmapCodecInformation;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CGraphics__CImaging__CBitmapCodecInformation;

typedef  struct __FIIterable_1_Windows__CGraphics__CImaging__CBitmapCodecInformationVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CGraphics__CImaging__CBitmapCodecInformation * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CGraphics__CImaging__CBitmapCodecInformation * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CGraphics__CImaging__CBitmapCodecInformation * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CGraphics__CImaging__CBitmapCodecInformation * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CGraphics__CImaging__CBitmapCodecInformation * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CGraphics__CImaging__CBitmapCodecInformation * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CGraphics__CImaging__CBitmapCodecInformation * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CGraphics__CImaging__CBitmapCodecInformation **first);

    END_INTERFACE
} __FIIterable_1_Windows__CGraphics__CImaging__CBitmapCodecInformationVtbl;

interface __FIIterable_1_Windows__CGraphics__CImaging__CBitmapCodecInformation
{
    CONST_VTBL struct __FIIterable_1_Windows__CGraphics__CImaging__CBitmapCodecInformationVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CGraphics__CImaging__CBitmapCodecInformation_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CGraphics__CImaging__CBitmapCodecInformation_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CGraphics__CImaging__CBitmapCodecInformation_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CGraphics__CImaging__CBitmapCodecInformation_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CGraphics__CImaging__CBitmapCodecInformation_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CGraphics__CImaging__CBitmapCodecInformation_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CGraphics__CImaging__CBitmapCodecInformation_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CGraphics__CImaging__CBitmapCodecInformation_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

enum __x_ABI_CWindows_CGraphics_CImaging_CBitmapPixelFormat;
#if !defined(____FIIterator_1_Windows__CGraphics__CImaging__CBitmapPixelFormat_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CGraphics__CImaging__CBitmapPixelFormat_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CGraphics__CImaging__CBitmapPixelFormat __FIIterator_1_Windows__CGraphics__CImaging__CBitmapPixelFormat;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CGraphics__CImaging__CBitmapPixelFormat;

typedef struct __FIIterator_1_Windows__CGraphics__CImaging__CBitmapPixelFormatVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CGraphics__CImaging__CBitmapPixelFormat * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CGraphics__CImaging__CBitmapPixelFormat * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CGraphics__CImaging__CBitmapPixelFormat * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CGraphics__CImaging__CBitmapPixelFormat * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CGraphics__CImaging__CBitmapPixelFormat * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CGraphics__CImaging__CBitmapPixelFormat * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CGraphics__CImaging__CBitmapPixelFormat * This, /* [retval][out] */ __RPC__out enum __x_ABI_CWindows_CGraphics_CImaging_CBitmapPixelFormat *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CGraphics__CImaging__CBitmapPixelFormat * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CGraphics__CImaging__CBitmapPixelFormat * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CGraphics__CImaging__CBitmapPixelFormat * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) enum __x_ABI_CWindows_CGraphics_CImaging_CBitmapPixelFormat *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CGraphics__CImaging__CBitmapPixelFormatVtbl;

interface __FIIterator_1_Windows__CGraphics__CImaging__CBitmapPixelFormat
{
    CONST_VTBL struct __FIIterator_1_Windows__CGraphics__CImaging__CBitmapPixelFormatVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CGraphics__CImaging__CBitmapPixelFormat_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CGraphics__CImaging__CBitmapPixelFormat_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CGraphics__CImaging__CBitmapPixelFormat_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CGraphics__CImaging__CBitmapPixelFormat_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CGraphics__CImaging__CBitmapPixelFormat_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CGraphics__CImaging__CBitmapPixelFormat_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CGraphics__CImaging__CBitmapPixelFormat_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CGraphics__CImaging__CBitmapPixelFormat_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CGraphics__CImaging__CBitmapPixelFormat_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CGraphics__CImaging__CBitmapPixelFormat_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CGraphics__CImaging__CBitmapPixelFormat_INTERFACE_DEFINED__



#if !defined(____FIIterable_1_Windows__CGraphics__CImaging__CBitmapPixelFormat_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CGraphics__CImaging__CBitmapPixelFormat_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CGraphics__CImaging__CBitmapPixelFormat __FIIterable_1_Windows__CGraphics__CImaging__CBitmapPixelFormat;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CGraphics__CImaging__CBitmapPixelFormat;

typedef  struct __FIIterable_1_Windows__CGraphics__CImaging__CBitmapPixelFormatVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CGraphics__CImaging__CBitmapPixelFormat * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CGraphics__CImaging__CBitmapPixelFormat * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CGraphics__CImaging__CBitmapPixelFormat * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CGraphics__CImaging__CBitmapPixelFormat * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CGraphics__CImaging__CBitmapPixelFormat * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CGraphics__CImaging__CBitmapPixelFormat * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CGraphics__CImaging__CBitmapPixelFormat * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CGraphics__CImaging__CBitmapPixelFormat **first);

    END_INTERFACE
} __FIIterable_1_Windows__CGraphics__CImaging__CBitmapPixelFormatVtbl;

interface __FIIterable_1_Windows__CGraphics__CImaging__CBitmapPixelFormat
{
    CONST_VTBL struct __FIIterable_1_Windows__CGraphics__CImaging__CBitmapPixelFormatVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CGraphics__CImaging__CBitmapPixelFormat_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CGraphics__CImaging__CBitmapPixelFormat_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CGraphics__CImaging__CBitmapPixelFormat_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CGraphics__CImaging__CBitmapPixelFormat_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CGraphics__CImaging__CBitmapPixelFormat_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CGraphics__CImaging__CBitmapPixelFormat_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CGraphics__CImaging__CBitmapPixelFormat_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CGraphics__CImaging__CBitmapPixelFormat_INTERFACE_DEFINED__


#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamWithContentType_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamWithContentType_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamWithContentType __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamWithContentType;

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamWithContentType_FWD_DEFINED__


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CGraphics__CImaging__CImageStream_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CGraphics__CImaging__CImageStream_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CGraphics__CImaging__CImageStream __FIIterator_1_Windows__CGraphics__CImaging__CImageStream;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CGraphics__CImaging__CImageStream;

typedef struct __FIIterator_1_Windows__CGraphics__CImaging__CImageStreamVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CGraphics__CImaging__CImageStream * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CGraphics__CImaging__CImageStream * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CGraphics__CImaging__CImageStream * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CGraphics__CImaging__CImageStream * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CGraphics__CImaging__CImageStream * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CGraphics__CImaging__CImageStream * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CGraphics__CImaging__CImageStream * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamWithContentType * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CGraphics__CImaging__CImageStream * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CGraphics__CImaging__CImageStream * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CGraphics__CImaging__CImageStream * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamWithContentType * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CGraphics__CImaging__CImageStreamVtbl;

interface __FIIterator_1_Windows__CGraphics__CImaging__CImageStream
{
    CONST_VTBL struct __FIIterator_1_Windows__CGraphics__CImaging__CImageStreamVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CGraphics__CImaging__CImageStream_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CGraphics__CImaging__CImageStream_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CGraphics__CImaging__CImageStream_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CGraphics__CImaging__CImageStream_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CGraphics__CImaging__CImageStream_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CGraphics__CImaging__CImageStream_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CGraphics__CImaging__CImageStream_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CGraphics__CImaging__CImageStream_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CGraphics__CImaging__CImageStream_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CGraphics__CImaging__CImageStream_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CGraphics__CImaging__CImageStream_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CGraphics__CImaging__CImageStream_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CGraphics__CImaging__CImageStream_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CGraphics__CImaging__CImageStream __FIIterable_1_Windows__CGraphics__CImaging__CImageStream;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CGraphics__CImaging__CImageStream;

typedef  struct __FIIterable_1_Windows__CGraphics__CImaging__CImageStreamVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CGraphics__CImaging__CImageStream * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CGraphics__CImaging__CImageStream * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CGraphics__CImaging__CImageStream * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CGraphics__CImaging__CImageStream * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CGraphics__CImaging__CImageStream * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CGraphics__CImaging__CImageStream * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CGraphics__CImaging__CImageStream * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CGraphics__CImaging__CImageStream **first);

    END_INTERFACE
} __FIIterable_1_Windows__CGraphics__CImaging__CImageStreamVtbl;

interface __FIIterable_1_Windows__CGraphics__CImaging__CImageStream
{
    CONST_VTBL struct __FIIterable_1_Windows__CGraphics__CImaging__CImageStreamVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CGraphics__CImaging__CImageStream_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CGraphics__CImaging__CImageStream_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CGraphics__CImaging__CImageStream_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CGraphics__CImaging__CImageStream_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CGraphics__CImaging__CImageStream_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CGraphics__CImaging__CImageStream_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CGraphics__CImaging__CImageStream_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CGraphics__CImaging__CImageStream_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CGraphics__CImaging__CSoftwareBitmap_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CGraphics__CImaging__CSoftwareBitmap_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CGraphics__CImaging__CSoftwareBitmap __FIIterator_1_Windows__CGraphics__CImaging__CSoftwareBitmap;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CGraphics__CImaging__CSoftwareBitmap;

typedef struct __FIIterator_1_Windows__CGraphics__CImaging__CSoftwareBitmapVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CGraphics__CImaging__CSoftwareBitmap * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CGraphics__CImaging__CSoftwareBitmap * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CGraphics__CImaging__CSoftwareBitmap * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CGraphics__CImaging__CSoftwareBitmap * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CGraphics__CImaging__CSoftwareBitmap * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CGraphics__CImaging__CSoftwareBitmap * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CGraphics__CImaging__CSoftwareBitmap * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CGraphics__CImaging__CSoftwareBitmap * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CGraphics__CImaging__CSoftwareBitmap * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CGraphics__CImaging__CSoftwareBitmap * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CGraphics__CImaging__CSoftwareBitmapVtbl;

interface __FIIterator_1_Windows__CGraphics__CImaging__CSoftwareBitmap
{
    CONST_VTBL struct __FIIterator_1_Windows__CGraphics__CImaging__CSoftwareBitmapVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CGraphics__CImaging__CSoftwareBitmap_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CGraphics__CImaging__CSoftwareBitmap_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CGraphics__CImaging__CSoftwareBitmap_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CGraphics__CImaging__CSoftwareBitmap_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CGraphics__CImaging__CSoftwareBitmap_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CGraphics__CImaging__CSoftwareBitmap_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CGraphics__CImaging__CSoftwareBitmap_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CGraphics__CImaging__CSoftwareBitmap_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CGraphics__CImaging__CSoftwareBitmap_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CGraphics__CImaging__CSoftwareBitmap_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CGraphics__CImaging__CSoftwareBitmap_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CGraphics__CImaging__CSoftwareBitmap_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CGraphics__CImaging__CSoftwareBitmap_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CGraphics__CImaging__CSoftwareBitmap __FIIterable_1_Windows__CGraphics__CImaging__CSoftwareBitmap;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CGraphics__CImaging__CSoftwareBitmap;

typedef  struct __FIIterable_1_Windows__CGraphics__CImaging__CSoftwareBitmapVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CGraphics__CImaging__CSoftwareBitmap * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CGraphics__CImaging__CSoftwareBitmap * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CGraphics__CImaging__CSoftwareBitmap * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CGraphics__CImaging__CSoftwareBitmap * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CGraphics__CImaging__CSoftwareBitmap * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CGraphics__CImaging__CSoftwareBitmap * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CGraphics__CImaging__CSoftwareBitmap * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CGraphics__CImaging__CSoftwareBitmap **first);

    END_INTERFACE
} __FIIterable_1_Windows__CGraphics__CImaging__CSoftwareBitmapVtbl;

interface __FIIterable_1_Windows__CGraphics__CImaging__CSoftwareBitmap
{
    CONST_VTBL struct __FIIterable_1_Windows__CGraphics__CImaging__CSoftwareBitmapVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CGraphics__CImaging__CSoftwareBitmap_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CGraphics__CImaging__CSoftwareBitmap_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CGraphics__CImaging__CSoftwareBitmap_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CGraphics__CImaging__CSoftwareBitmap_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CGraphics__CImaging__CSoftwareBitmap_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CGraphics__CImaging__CSoftwareBitmap_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CGraphics__CImaging__CSoftwareBitmap_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CGraphics__CImaging__CSoftwareBitmap_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIMapView_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue_INTERFACE_DEFINED__)
#define ____FIMapView_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue_INTERFACE_DEFINED__

typedef interface __FIMapView_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue __FIMapView_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIMapView_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue;

typedef struct __FIMapView_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValueVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMapView_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMapView_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMapView_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMapView_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMapView_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMapView_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue * This,/* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *Lookup )(__RPC__in __FIMapView_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue * This,
        /* [in] */ __RPC__in HSTRING key,
        /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CImaging_CIBitmapTypedValue * *value);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )(__RPC__in __FIMapView_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue * This, /* [retval][out] */ __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *HasKey )(__RPC__in __FIMapView_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue * This, /* [in] */ __RPC__in HSTRING key, /* [retval][out] */ __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *Split )(__RPC__in __FIMapView_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue * This,/* [out] */ __RPC__deref_out_opt __FIMapView_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue **firstPartition,
        /* [out] */ __RPC__deref_out_opt __FIMapView_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue **secondPartition);
    END_INTERFACE
} __FIMapView_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValueVtbl;

interface __FIMapView_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue
{
    CONST_VTBL struct __FIMapView_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValueVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIMapView_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIMapView_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIMapView_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIMapView_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIMapView_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIMapView_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIMapView_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue_Lookup(This,key,value)	\
    ( (This)->lpVtbl -> Lookup(This,key,value) ) 
#define __FIMapView_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 
#define __FIMapView_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue_HasKey(This,key,found)	\
    ( (This)->lpVtbl -> HasKey(This,key,found) ) 
#define __FIMapView_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue_Split(This,firstPartition,secondPartition)	\
    ( (This)->lpVtbl -> Split(This,firstPartition,secondPartition) ) 
#endif /* COBJMACROS */


#endif // ____FIMapView_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIMap_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue_INTERFACE_DEFINED__)
#define ____FIMap_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue_INTERFACE_DEFINED__

typedef interface __FIMap_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue __FIMap_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIMap_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue;

typedef struct __FIMap_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValueVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMap_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMap_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMap_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMap_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMap_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMap_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *Lookup )(__RPC__in __FIMap_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue * This,
        /* [in] */ HSTRING key,
        /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CImaging_CIBitmapTypedValue * **value);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )(__RPC__in __FIMap_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue * This, /* [retval][out] */ __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *HasKey )(__RPC__in __FIMap_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue * This, /* [in] */ HSTRING key, /* [retval][out] */ __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIMap_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue * This, /* [retval][out] */ __RPC__deref_out_opt __FIMapView_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue **view);
    HRESULT ( STDMETHODCALLTYPE *Insert )(__RPC__in __FIMap_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue * This,
        /* [in] */ HSTRING key,
        /* [in] */ __RPC__in_opt __x_ABI_CWindows_CGraphics_CImaging_CIBitmapTypedValue * *value,
        /* [retval][out] */ __RPC__out boolean *replaced);
    HRESULT ( STDMETHODCALLTYPE *Remove )(__RPC__in __FIMap_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue * This,/* [in] */ HSTRING key);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIMap_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue * This);
    END_INTERFACE
} __FIMap_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValueVtbl;

interface __FIMap_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue
{
    CONST_VTBL struct __FIMap_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValueVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIMap_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIMap_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIMap_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIMap_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIMap_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIMap_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIMap_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue_Lookup(This,key,value)	\
    ( (This)->lpVtbl -> Lookup(This,key,value) ) 

#define __FIMap_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIMap_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue_HasKey(This,key,found)	\
    ( (This)->lpVtbl -> HasKey(This,key,found) ) 

#define __FIMap_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue_GetView(This,view)	\
    ( (This)->lpVtbl -> GetView(This,view) ) 

#define __FIMap_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue_Insert(This,key,value,replaced)	\
    ( (This)->lpVtbl -> Insert(This,key,value,replaced) ) 

#define __FIMap_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue_Remove(This,key)	\
    ( (This)->lpVtbl -> Remove(This,key) ) 

#define __FIMap_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 
#endif /* COBJMACROS */



#endif // ____FIMap_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CGraphics__CImaging__CBitmapCodecInformation_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CGraphics__CImaging__CBitmapCodecInformation_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CGraphics__CImaging__CBitmapCodecInformation __FIVectorView_1_Windows__CGraphics__CImaging__CBitmapCodecInformation;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CGraphics__CImaging__CBitmapCodecInformation;

typedef struct __FIVectorView_1_Windows__CGraphics__CImaging__CBitmapCodecInformationVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CGraphics__CImaging__CBitmapCodecInformation * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CGraphics__CImaging__CBitmapCodecInformation * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CGraphics__CImaging__CBitmapCodecInformation * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CGraphics__CImaging__CBitmapCodecInformation * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CGraphics__CImaging__CBitmapCodecInformation * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CGraphics__CImaging__CBitmapCodecInformation * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CGraphics__CImaging__CBitmapCodecInformation * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CGraphics_CImaging_CIBitmapCodecInformation * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CGraphics__CImaging__CBitmapCodecInformation * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CGraphics__CImaging__CBitmapCodecInformation * This,
            /* [in] */ __x_ABI_CWindows_CGraphics_CImaging_CIBitmapCodecInformation * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CGraphics__CImaging__CBitmapCodecInformation * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CGraphics_CImaging_CIBitmapCodecInformation * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CGraphics__CImaging__CBitmapCodecInformationVtbl;

interface __FIVectorView_1_Windows__CGraphics__CImaging__CBitmapCodecInformation
{
    CONST_VTBL struct __FIVectorView_1_Windows__CGraphics__CImaging__CBitmapCodecInformationVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CGraphics__CImaging__CBitmapCodecInformation_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CGraphics__CImaging__CBitmapCodecInformation_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CGraphics__CImaging__CBitmapCodecInformation_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CGraphics__CImaging__CBitmapCodecInformation_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CGraphics__CImaging__CBitmapCodecInformation_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CGraphics__CImaging__CBitmapCodecInformation_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CGraphics__CImaging__CBitmapCodecInformation_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CGraphics__CImaging__CBitmapCodecInformation_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CGraphics__CImaging__CBitmapCodecInformation_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CGraphics__CImaging__CBitmapCodecInformation_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CGraphics__CImaging__CBitmapCodecInformation_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if !defined(____FIVectorView_1_Windows__CGraphics__CImaging__CBitmapPixelFormat_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CGraphics__CImaging__CBitmapPixelFormat_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CGraphics__CImaging__CBitmapPixelFormat __FIVectorView_1_Windows__CGraphics__CImaging__CBitmapPixelFormat;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CGraphics__CImaging__CBitmapPixelFormat;

typedef struct __FIVectorView_1_Windows__CGraphics__CImaging__CBitmapPixelFormatVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CGraphics__CImaging__CBitmapPixelFormat * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CGraphics__CImaging__CBitmapPixelFormat * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CGraphics__CImaging__CBitmapPixelFormat * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CGraphics__CImaging__CBitmapPixelFormat * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CGraphics__CImaging__CBitmapPixelFormat * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CGraphics__CImaging__CBitmapPixelFormat * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CGraphics__CImaging__CBitmapPixelFormat * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out enum __x_ABI_CWindows_CGraphics_CImaging_CBitmapPixelFormat *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CGraphics__CImaging__CBitmapPixelFormat * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CGraphics__CImaging__CBitmapPixelFormat * This,
            /* [in] */ enum __x_ABI_CWindows_CGraphics_CImaging_CBitmapPixelFormat item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CGraphics__CImaging__CBitmapPixelFormat * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) enum __x_ABI_CWindows_CGraphics_CImaging_CBitmapPixelFormat *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CGraphics__CImaging__CBitmapPixelFormatVtbl;

interface __FIVectorView_1_Windows__CGraphics__CImaging__CBitmapPixelFormat
{
    CONST_VTBL struct __FIVectorView_1_Windows__CGraphics__CImaging__CBitmapPixelFormatVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CGraphics__CImaging__CBitmapPixelFormat_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CGraphics__CImaging__CBitmapPixelFormat_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CGraphics__CImaging__CBitmapPixelFormat_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CGraphics__CImaging__CBitmapPixelFormat_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CGraphics__CImaging__CBitmapPixelFormat_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CGraphics__CImaging__CBitmapPixelFormat_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CGraphics__CImaging__CBitmapPixelFormat_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CGraphics__CImaging__CBitmapPixelFormat_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CGraphics__CImaging__CBitmapPixelFormat_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CGraphics__CImaging__CBitmapPixelFormat_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CGraphics__CImaging__CBitmapPixelFormat_INTERFACE_DEFINED__



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CGraphics__CImaging__CImageStream_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CGraphics__CImaging__CImageStream_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CGraphics__CImaging__CImageStream __FIVectorView_1_Windows__CGraphics__CImaging__CImageStream;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CGraphics__CImaging__CImageStream;

typedef struct __FIVectorView_1_Windows__CGraphics__CImaging__CImageStreamVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CGraphics__CImaging__CImageStream * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CGraphics__CImaging__CImageStream * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CGraphics__CImaging__CImageStream * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CGraphics__CImaging__CImageStream * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CGraphics__CImaging__CImageStream * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CGraphics__CImaging__CImageStream * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CGraphics__CImaging__CImageStream * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamWithContentType * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CGraphics__CImaging__CImageStream * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CGraphics__CImaging__CImageStream * This,
            /* [in] */ __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamWithContentType * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CGraphics__CImaging__CImageStream * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamWithContentType * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CGraphics__CImaging__CImageStreamVtbl;

interface __FIVectorView_1_Windows__CGraphics__CImaging__CImageStream
{
    CONST_VTBL struct __FIVectorView_1_Windows__CGraphics__CImaging__CImageStreamVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CGraphics__CImaging__CImageStream_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CGraphics__CImaging__CImageStream_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CGraphics__CImaging__CImageStream_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CGraphics__CImaging__CImageStream_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CGraphics__CImaging__CImageStream_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CGraphics__CImaging__CImageStream_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CGraphics__CImaging__CImageStream_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CGraphics__CImaging__CImageStream_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CGraphics__CImaging__CImageStream_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CGraphics__CImaging__CImageStream_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CGraphics__CImaging__CImageStream_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CGraphics__CImaging__CImageStream_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CGraphics__CImaging__CImageStream_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CGraphics__CImaging__CImageStream __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CGraphics__CImaging__CImageStream;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CGraphics__CImaging__CImageStream;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CGraphics__CImaging__CImageStream __FIAsyncOperation_1___FIVectorView_1_Windows__CGraphics__CImaging__CImageStream;

typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CGraphics__CImaging__CImageStreamVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CGraphics__CImaging__CImageStream * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CGraphics__CImaging__CImageStream * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CGraphics__CImaging__CImageStream * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CGraphics__CImaging__CImageStream * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CGraphics__CImaging__CImageStream *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CGraphics__CImaging__CImageStreamVtbl;

interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CGraphics__CImaging__CImageStream
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CGraphics__CImaging__CImageStreamVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CGraphics__CImaging__CImageStream_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CGraphics__CImaging__CImageStream_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CGraphics__CImaging__CImageStream_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CGraphics__CImaging__CImageStream_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CGraphics__CImaging__CImageStream_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1___FIVectorView_1_Windows__CGraphics__CImaging__CImageStream_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1___FIVectorView_1_Windows__CGraphics__CImaging__CImageStream_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CGraphics__CImaging__CImageStream __FIAsyncOperation_1___FIVectorView_1_Windows__CGraphics__CImaging__CImageStream;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1_Windows__CGraphics__CImaging__CImageStream;

typedef struct __FIAsyncOperation_1___FIVectorView_1_Windows__CGraphics__CImaging__CImageStreamVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CGraphics__CImaging__CImageStream * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CGraphics__CImaging__CImageStream * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CGraphics__CImaging__CImageStream * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CGraphics__CImaging__CImageStream * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CGraphics__CImaging__CImageStream * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CGraphics__CImaging__CImageStream * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CGraphics__CImaging__CImageStream * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CGraphics__CImaging__CImageStream *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CGraphics__CImaging__CImageStream * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CGraphics__CImaging__CImageStream **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CGraphics__CImaging__CImageStream * This, /* [retval][out] */ __RPC__out __FIVectorView_1_Windows__CGraphics__CImaging__CImageStream * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1_Windows__CGraphics__CImaging__CImageStreamVtbl;

interface __FIAsyncOperation_1___FIVectorView_1_Windows__CGraphics__CImaging__CImageStream
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1_Windows__CGraphics__CImaging__CImageStreamVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CGraphics__CImaging__CImageStream_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CGraphics__CImaging__CImageStream_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CGraphics__CImaging__CImageStream_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1___FIVectorView_1_Windows__CGraphics__CImaging__CImageStream_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CGraphics__CImaging__CImageStream_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CGraphics__CImaging__CImageStream_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1___FIVectorView_1_Windows__CGraphics__CImaging__CImageStream_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CGraphics__CImaging__CImageStream_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CGraphics__CImaging__CImageStream_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1___FIVectorView_1_Windows__CGraphics__CImaging__CImageStream_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapDecoder_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapDecoder_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapDecoder __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapDecoder;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapDecoder;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapDecoder __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapDecoder;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapDecoderVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapDecoder * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapDecoder * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapDecoder * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapDecoder * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapDecoder *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapDecoderVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapDecoder
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapDecoderVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapDecoder_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapDecoder_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapDecoder_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapDecoder_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapDecoder_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapDecoder_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapDecoder_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapDecoder __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapDecoder;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapDecoder;

typedef struct __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapDecoderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapDecoder * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapDecoder * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapDecoder * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapDecoder * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapDecoder * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapDecoder * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapDecoder * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapDecoder *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapDecoder * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapDecoder **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapDecoder * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CGraphics_CImaging_CIBitmapDecoder * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapDecoderVtbl;

interface __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapDecoder
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapDecoderVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapDecoder_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapDecoder_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapDecoder_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapDecoder_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapDecoder_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapDecoder_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapDecoder_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapDecoder_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapDecoder_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapDecoder_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapEncoder_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapEncoder_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapEncoder __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapEncoder;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapEncoder;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapEncoder __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapEncoder;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapEncoderVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapEncoder * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapEncoder * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapEncoder * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapEncoder * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapEncoder *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapEncoderVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapEncoder
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapEncoderVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapEncoder_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapEncoder_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapEncoder_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapEncoder_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapEncoder_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapEncoder_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapEncoder_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapEncoder __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapEncoder;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapEncoder;

typedef struct __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapEncoderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapEncoder * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapEncoder * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapEncoder * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapEncoder * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapEncoder * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapEncoder * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapEncoder * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapEncoder *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapEncoder * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapEncoder **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapEncoder * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoder * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapEncoderVtbl;

interface __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapEncoder
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapEncoderVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapEncoder_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapEncoder_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapEncoder_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapEncoder_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapEncoder_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapEncoder_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapEncoder_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapEncoder_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapEncoder_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapEncoder_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapFrame_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapFrame_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapFrame __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapFrame;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapFrame;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapFrame __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapFrame;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapFrameVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapFrame * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapFrame * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapFrame * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapFrame * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapFrame *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapFrameVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapFrame
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapFrameVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapFrame_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapFrame_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapFrame_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapFrame_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapFrame_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapFrame_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapFrame_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapFrame __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapFrame;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapFrame;

typedef struct __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapFrameVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapFrame * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapFrame * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapFrame * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapFrame * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapFrame * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapFrame * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapFrame * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapFrame *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapFrame * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapFrame **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapFrame * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CGraphics_CImaging_CIBitmapFrame * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapFrameVtbl;

interface __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapFrame
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapFrameVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapFrame_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapFrame_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapFrame_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapFrame_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapFrame_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapFrame_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapFrame_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapFrame_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapFrame_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapFrame_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapPropertySet_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapPropertySet_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapPropertySet __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapPropertySet;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapPropertySet;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapPropertySet __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapPropertySet;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapPropertySetVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapPropertySet * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapPropertySet * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapPropertySet * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapPropertySet * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapPropertySet *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapPropertySetVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapPropertySet
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapPropertySetVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapPropertySet_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapPropertySet_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapPropertySet_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapPropertySet_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapPropertySet_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapPropertySet_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapPropertySet_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapPropertySet __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapPropertySet;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapPropertySet;

typedef struct __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapPropertySetVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapPropertySet * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapPropertySet * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapPropertySet * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapPropertySet * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapPropertySet * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapPropertySet * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapPropertySet * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapPropertySet *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapPropertySet * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapPropertySet **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapPropertySet * This, /* [retval][out] */ __RPC__out __FIMap_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapPropertySetVtbl;

interface __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapPropertySet
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapPropertySetVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapPropertySet_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapPropertySet_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapPropertySet_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapPropertySet_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapPropertySet_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapPropertySet_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapPropertySet_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapPropertySet_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapPropertySet_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapPropertySet_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CImageStream_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CImageStream_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CImageStream __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CImageStream;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CImageStream;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CGraphics__CImaging__CImageStream __FIAsyncOperation_1_Windows__CGraphics__CImaging__CImageStream;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CImageStreamVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CImageStream * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CImageStream * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CImageStream * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CImageStream * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CGraphics__CImaging__CImageStream *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CImageStreamVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CImageStream
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CImageStreamVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CImageStream_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CImageStream_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CImageStream_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CImageStream_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CImageStream_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1_Windows__CGraphics__CImaging__CImageStream_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CGraphics__CImaging__CImageStream_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CGraphics__CImaging__CImageStream __FIAsyncOperation_1_Windows__CGraphics__CImaging__CImageStream;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CGraphics__CImaging__CImageStream;

typedef struct __FIAsyncOperation_1_Windows__CGraphics__CImaging__CImageStreamVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CImaging__CImageStream * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CImaging__CImageStream * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CImaging__CImageStream * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CImaging__CImageStream * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CImaging__CImageStream * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CImaging__CImageStream * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CImaging__CImageStream * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CImageStream *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CImaging__CImageStream * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CImageStream **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CImaging__CImageStream * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamWithContentType * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CGraphics__CImaging__CImageStreamVtbl;

interface __FIAsyncOperation_1_Windows__CGraphics__CImaging__CImageStream
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CGraphics__CImaging__CImageStreamVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CGraphics__CImaging__CImageStream_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CGraphics__CImaging__CImageStream_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CGraphics__CImaging__CImageStream_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CGraphics__CImaging__CImageStream_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CGraphics__CImaging__CImageStream_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CGraphics__CImaging__CImageStream_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CGraphics__CImaging__CImageStream_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CGraphics__CImaging__CImageStream_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CGraphics__CImaging__CImageStream_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CGraphics__CImaging__CImageStream_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CPixelDataProvider_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CPixelDataProvider_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CPixelDataProvider __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CPixelDataProvider;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CPixelDataProvider;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CGraphics__CImaging__CPixelDataProvider __FIAsyncOperation_1_Windows__CGraphics__CImaging__CPixelDataProvider;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CPixelDataProviderVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CPixelDataProvider * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CPixelDataProvider * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CPixelDataProvider * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CPixelDataProvider * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CGraphics__CImaging__CPixelDataProvider *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CPixelDataProviderVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CPixelDataProvider
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CPixelDataProviderVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CPixelDataProvider_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CPixelDataProvider_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CPixelDataProvider_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CPixelDataProvider_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CPixelDataProvider_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1_Windows__CGraphics__CImaging__CPixelDataProvider_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CGraphics__CImaging__CPixelDataProvider_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CGraphics__CImaging__CPixelDataProvider __FIAsyncOperation_1_Windows__CGraphics__CImaging__CPixelDataProvider;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CGraphics__CImaging__CPixelDataProvider;

typedef struct __FIAsyncOperation_1_Windows__CGraphics__CImaging__CPixelDataProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CImaging__CPixelDataProvider * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CImaging__CPixelDataProvider * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CImaging__CPixelDataProvider * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CImaging__CPixelDataProvider * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CImaging__CPixelDataProvider * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CImaging__CPixelDataProvider * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CImaging__CPixelDataProvider * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CPixelDataProvider *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CImaging__CPixelDataProvider * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CPixelDataProvider **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CImaging__CPixelDataProvider * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CGraphics_CImaging_CIPixelDataProvider * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CGraphics__CImaging__CPixelDataProviderVtbl;

interface __FIAsyncOperation_1_Windows__CGraphics__CImaging__CPixelDataProvider
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CGraphics__CImaging__CPixelDataProviderVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CGraphics__CImaging__CPixelDataProvider_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CGraphics__CImaging__CPixelDataProvider_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CGraphics__CImaging__CPixelDataProvider_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CGraphics__CImaging__CPixelDataProvider_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CGraphics__CImaging__CPixelDataProvider_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CGraphics__CImaging__CPixelDataProvider_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CGraphics__CImaging__CPixelDataProvider_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CGraphics__CImaging__CPixelDataProvider_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CGraphics__CImaging__CPixelDataProvider_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CGraphics__CImaging__CPixelDataProvider_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CSoftwareBitmap_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CSoftwareBitmap_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CSoftwareBitmap __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CSoftwareBitmap;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CSoftwareBitmap;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CGraphics__CImaging__CSoftwareBitmap __FIAsyncOperation_1_Windows__CGraphics__CImaging__CSoftwareBitmap;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CSoftwareBitmapVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CSoftwareBitmap * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CSoftwareBitmap * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CSoftwareBitmap * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CSoftwareBitmap * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CGraphics__CImaging__CSoftwareBitmap *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CSoftwareBitmapVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CSoftwareBitmap
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CSoftwareBitmapVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CSoftwareBitmap_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CSoftwareBitmap_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CSoftwareBitmap_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CSoftwareBitmap_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CSoftwareBitmap_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1_Windows__CGraphics__CImaging__CSoftwareBitmap_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CGraphics__CImaging__CSoftwareBitmap_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CGraphics__CImaging__CSoftwareBitmap __FIAsyncOperation_1_Windows__CGraphics__CImaging__CSoftwareBitmap;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CGraphics__CImaging__CSoftwareBitmap;

typedef struct __FIAsyncOperation_1_Windows__CGraphics__CImaging__CSoftwareBitmapVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CImaging__CSoftwareBitmap * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CImaging__CSoftwareBitmap * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CImaging__CSoftwareBitmap * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CImaging__CSoftwareBitmap * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CImaging__CSoftwareBitmap * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CImaging__CSoftwareBitmap * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CImaging__CSoftwareBitmap * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CSoftwareBitmap *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CImaging__CSoftwareBitmap * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CSoftwareBitmap **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CImaging__CSoftwareBitmap * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CGraphics__CImaging__CSoftwareBitmapVtbl;

interface __FIAsyncOperation_1_Windows__CGraphics__CImaging__CSoftwareBitmap
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CGraphics__CImaging__CSoftwareBitmapVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CGraphics__CImaging__CSoftwareBitmap_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CGraphics__CImaging__CSoftwareBitmap_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CGraphics__CImaging__CSoftwareBitmap_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CGraphics__CImaging__CSoftwareBitmap_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CGraphics__CImaging__CSoftwareBitmap_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CGraphics__CImaging__CSoftwareBitmap_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CGraphics__CImaging__CSoftwareBitmap_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CGraphics__CImaging__CSoftwareBitmap_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CGraphics__CImaging__CSoftwareBitmap_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CGraphics__CImaging__CSoftwareBitmap_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#if !defined(____FIIterator_1_HSTRING_INTERFACE_DEFINED__)
#define ____FIIterator_1_HSTRING_INTERFACE_DEFINED__

typedef interface __FIIterator_1_HSTRING __FIIterator_1_HSTRING;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_HSTRING;

typedef struct __FIIterator_1_HSTRINGVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_HSTRING * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_HSTRING * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_HSTRING * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_HSTRING * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_HSTRING * This, /* [retval][out] */ __RPC__out HSTRING *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_HSTRING * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_HSTRING * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_HSTRING * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) HSTRING *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_HSTRINGVtbl;

interface __FIIterator_1_HSTRING
{
    CONST_VTBL struct __FIIterator_1_HSTRINGVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_HSTRING_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_HSTRING_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_HSTRING_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_HSTRING_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_HSTRING_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_HSTRING_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_HSTRING_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_HSTRING_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_HSTRING_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_HSTRING_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_HSTRING_INTERFACE_DEFINED__


#if !defined(____FIIterable_1_HSTRING_INTERFACE_DEFINED__)
#define ____FIIterable_1_HSTRING_INTERFACE_DEFINED__

typedef interface __FIIterable_1_HSTRING __FIIterable_1_HSTRING;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_HSTRING;

typedef  struct __FIIterable_1_HSTRINGVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_HSTRING * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_HSTRING * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_HSTRING * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_HSTRING * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_HSTRING * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_HSTRING * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_HSTRING * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_HSTRING **first);

    END_INTERFACE
} __FIIterable_1_HSTRINGVtbl;

interface __FIIterable_1_HSTRING
{
    CONST_VTBL struct __FIIterable_1_HSTRINGVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_HSTRING_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_HSTRING_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_HSTRING_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_HSTRING_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_HSTRING_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_HSTRING_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_HSTRING_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_HSTRING_INTERFACE_DEFINED__


#if !defined(____FIVectorView_1_HSTRING_INTERFACE_DEFINED__)
#define ____FIVectorView_1_HSTRING_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_HSTRING __FIVectorView_1_HSTRING;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_HSTRING;

typedef struct __FIVectorView_1_HSTRINGVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_HSTRING * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_HSTRING * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_HSTRING * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_HSTRING * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_HSTRING * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_HSTRING * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_HSTRING * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out HSTRING *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_HSTRING * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_HSTRING * This,
            /* [in] */ HSTRING item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_HSTRING * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) HSTRING *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_HSTRINGVtbl;

interface __FIVectorView_1_HSTRING
{
    CONST_VTBL struct __FIVectorView_1_HSTRINGVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_HSTRING_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_HSTRING_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_HSTRING_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_HSTRING_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_HSTRING_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_HSTRING_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_HSTRING_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_HSTRING_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_HSTRING_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_HSTRING_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_HSTRING_INTERFACE_DEFINED__



#ifndef ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIAsyncAction __x_ABI_CWindows_CFoundation_CIAsyncAction;

#endif // ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIClosable __x_ABI_CWindows_CFoundation_CIClosable;

#endif // ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CFoundation_CIMemoryBuffer_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIMemoryBuffer_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIMemoryBuffer __x_ABI_CWindows_CFoundation_CIMemoryBuffer;

#endif // ____x_ABI_CWindows_CFoundation_CIMemoryBuffer_FWD_DEFINED__



typedef enum __x_ABI_CWindows_CFoundation_CPropertyType __x_ABI_CWindows_CFoundation_CPropertyType;




#ifndef ____x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface;

#endif // ____x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface_FWD_DEFINED__






#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIBuffer_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIBuffer_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIBuffer __x_ABI_CWindows_CStorage_CStreams_CIBuffer;

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIBuffer_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIContentTypeProvider_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIContentTypeProvider_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIContentTypeProvider __x_ABI_CWindows_CStorage_CStreams_CIContentTypeProvider;

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIContentTypeProvider_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIInputStream_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIInputStream_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIInputStream __x_ABI_CWindows_CStorage_CStreams_CIInputStream;

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIInputStream_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIOutputStream_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIOutputStream_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIOutputStream __x_ABI_CWindows_CStorage_CStreams_CIOutputStream;

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIOutputStream_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream;

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream_FWD_DEFINED__







typedef enum __x_ABI_CWindows_CGraphics_CImaging_CBitmapAlphaMode __x_ABI_CWindows_CGraphics_CImaging_CBitmapAlphaMode;


typedef enum __x_ABI_CWindows_CGraphics_CImaging_CBitmapBufferAccessMode __x_ABI_CWindows_CGraphics_CImaging_CBitmapBufferAccessMode;


typedef enum __x_ABI_CWindows_CGraphics_CImaging_CBitmapFlip __x_ABI_CWindows_CGraphics_CImaging_CBitmapFlip;


typedef enum __x_ABI_CWindows_CGraphics_CImaging_CBitmapInterpolationMode __x_ABI_CWindows_CGraphics_CImaging_CBitmapInterpolationMode;


typedef enum __x_ABI_CWindows_CGraphics_CImaging_CBitmapPixelFormat __x_ABI_CWindows_CGraphics_CImaging_CBitmapPixelFormat;


typedef enum __x_ABI_CWindows_CGraphics_CImaging_CBitmapRotation __x_ABI_CWindows_CGraphics_CImaging_CBitmapRotation;


typedef enum __x_ABI_CWindows_CGraphics_CImaging_CColorManagementMode __x_ABI_CWindows_CGraphics_CImaging_CColorManagementMode;


typedef enum __x_ABI_CWindows_CGraphics_CImaging_CExifOrientationMode __x_ABI_CWindows_CGraphics_CImaging_CExifOrientationMode;


typedef enum __x_ABI_CWindows_CGraphics_CImaging_CJpegSubsamplingMode __x_ABI_CWindows_CGraphics_CImaging_CJpegSubsamplingMode;


typedef enum __x_ABI_CWindows_CGraphics_CImaging_CPngFilterMode __x_ABI_CWindows_CGraphics_CImaging_CPngFilterMode;


typedef enum __x_ABI_CWindows_CGraphics_CImaging_CTiffCompressionMode __x_ABI_CWindows_CGraphics_CImaging_CTiffCompressionMode;


typedef struct __x_ABI_CWindows_CGraphics_CImaging_CBitmapBounds __x_ABI_CWindows_CGraphics_CImaging_CBitmapBounds;


typedef struct __x_ABI_CWindows_CGraphics_CImaging_CBitmapPlaneDescription __x_ABI_CWindows_CGraphics_CImaging_CBitmapPlaneDescription;


typedef struct __x_ABI_CWindows_CGraphics_CImaging_CBitmapSize __x_ABI_CWindows_CGraphics_CImaging_CBitmapSize;








































/*
 *
 * Struct Windows.Graphics.Imaging.BitmapAlphaMode
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CGraphics_CImaging_CBitmapAlphaMode
{
    BitmapAlphaMode_Premultiplied = 0,
    BitmapAlphaMode_Straight = 1,
    BitmapAlphaMode_Ignore = 2,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Graphics.Imaging.BitmapBufferAccessMode
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CGraphics_CImaging_CBitmapBufferAccessMode
{
    BitmapBufferAccessMode_Read = 0,
    BitmapBufferAccessMode_ReadWrite = 1,
    BitmapBufferAccessMode_Write = 2,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Graphics.Imaging.BitmapFlip
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CGraphics_CImaging_CBitmapFlip
{
    BitmapFlip_None = 0,
    BitmapFlip_Horizontal = 1,
    BitmapFlip_Vertical = 2,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Graphics.Imaging.BitmapInterpolationMode
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CGraphics_CImaging_CBitmapInterpolationMode
{
    BitmapInterpolationMode_NearestNeighbor = 0,
    BitmapInterpolationMode_Linear = 1,
    BitmapInterpolationMode_Cubic = 2,
    BitmapInterpolationMode_Fant = 3,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Graphics.Imaging.BitmapPixelFormat
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CGraphics_CImaging_CBitmapPixelFormat
{
    BitmapPixelFormat_Unknown = 0,
    BitmapPixelFormat_Rgba16 = 12,
    BitmapPixelFormat_Rgba8 = 30,
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
    BitmapPixelFormat_Gray16 = 57,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
    BitmapPixelFormat_Gray8 = 62,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
    BitmapPixelFormat_Bgra8 = 87,
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
    BitmapPixelFormat_Nv12 = 103,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
    BitmapPixelFormat_Yuy2 = 107,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Graphics.Imaging.BitmapRotation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CGraphics_CImaging_CBitmapRotation
{
    BitmapRotation_None = 0,
    BitmapRotation_Clockwise90Degrees = 1,
    BitmapRotation_Clockwise180Degrees = 2,
    BitmapRotation_Clockwise270Degrees = 3,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Graphics.Imaging.ColorManagementMode
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CGraphics_CImaging_CColorManagementMode
{
    ColorManagementMode_DoNotColorManage = 0,
    ColorManagementMode_ColorManageToSRgb = 1,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Graphics.Imaging.ExifOrientationMode
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CGraphics_CImaging_CExifOrientationMode
{
    ExifOrientationMode_IgnoreExifOrientation = 0,
    ExifOrientationMode_RespectExifOrientation = 1,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Graphics.Imaging.JpegSubsamplingMode
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CGraphics_CImaging_CJpegSubsamplingMode
{
    JpegSubsamplingMode_Default = 0,
    JpegSubsamplingMode_Y4Cb2Cr0 = 1,
    JpegSubsamplingMode_Y4Cb2Cr2 = 2,
    JpegSubsamplingMode_Y4Cb4Cr4 = 3,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Graphics.Imaging.PngFilterMode
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CGraphics_CImaging_CPngFilterMode
{
    PngFilterMode_Automatic = 0,
    PngFilterMode_None = 1,
    PngFilterMode_Sub = 2,
    PngFilterMode_Up = 3,
    PngFilterMode_Average = 4,
    PngFilterMode_Paeth = 5,
    PngFilterMode_Adaptive = 6,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Graphics.Imaging.TiffCompressionMode
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CGraphics_CImaging_CTiffCompressionMode
{
    TiffCompressionMode_Automatic = 0,
    TiffCompressionMode_None = 1,
    TiffCompressionMode_Ccitt3 = 2,
    TiffCompressionMode_Ccitt4 = 3,
    TiffCompressionMode_Lzw = 4,
    TiffCompressionMode_Rle = 5,
    TiffCompressionMode_Zip = 6,
    TiffCompressionMode_LzwhDifferencing = 7,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Graphics.Imaging.BitmapBounds
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

/* [contract] */
struct __x_ABI_CWindows_CGraphics_CImaging_CBitmapBounds
{
    UINT32 X;
    UINT32 Y;
    UINT32 Width;
    UINT32 Height;
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Graphics.Imaging.BitmapPlaneDescription
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

/* [contract] */
struct __x_ABI_CWindows_CGraphics_CImaging_CBitmapPlaneDescription
{
    INT32 StartIndex;
    INT32 Width;
    INT32 Height;
    INT32 Stride;
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Graphics.Imaging.BitmapSize
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

/* [contract] */
struct __x_ABI_CWindows_CGraphics_CImaging_CBitmapSize
{
    UINT32 Width;
    UINT32 Height;
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Graphics.Imaging.IBitmapBuffer
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Graphics.Imaging.BitmapBuffer
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IMemoryBuffer
 *     Windows.Foundation.IClosable
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGraphics_CImaging_CIBitmapBuffer_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CImaging_CIBitmapBuffer_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Imaging_IBitmapBuffer[] = L"Windows.Graphics.Imaging.IBitmapBuffer";
/* [object, uuid("A53E04C4-399C-438C-B28F-A63A6B83D1A1"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CGraphics_CImaging_CIBitmapBufferVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapBuffer * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapBuffer * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapBuffer * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapBuffer * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapBuffer * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapBuffer * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetPlaneCount )(
        __x_ABI_CWindows_CGraphics_CImaging_CIBitmapBuffer * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetPlaneDescription )(
        __x_ABI_CWindows_CGraphics_CImaging_CIBitmapBuffer * This,
        /* [in] */INT32 index,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CGraphics_CImaging_CBitmapPlaneDescription * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGraphics_CImaging_CIBitmapBufferVtbl;

interface __x_ABI_CWindows_CGraphics_CImaging_CIBitmapBuffer
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CImaging_CIBitmapBufferVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapBuffer_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapBuffer_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapBuffer_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapBuffer_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapBuffer_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapBuffer_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapBuffer_GetPlaneCount(This,value) \
    ( (This)->lpVtbl->GetPlaneCount(This,value) )

#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapBuffer_GetPlaneDescription(This,index,value) \
    ( (This)->lpVtbl->GetPlaneDescription(This,index,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CImaging_CIBitmapBuffer;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CImaging_CIBitmapBuffer_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Graphics.Imaging.IBitmapCodecInformation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Graphics.Imaging.BitmapCodecInformation
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGraphics_CImaging_CIBitmapCodecInformation_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CImaging_CIBitmapCodecInformation_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Imaging_IBitmapCodecInformation[] = L"Windows.Graphics.Imaging.IBitmapCodecInformation";
/* [object, uuid("400CAAF2-C4B0-4392-A3B0-6F6F9BA95CB4"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CGraphics_CImaging_CIBitmapCodecInformationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapCodecInformation * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapCodecInformation * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapCodecInformation * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapCodecInformation * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapCodecInformation * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapCodecInformation * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CodecId )(
        __x_ABI_CWindows_CGraphics_CImaging_CIBitmapCodecInformation * This,
        /* [retval, out] */__RPC__out GUID * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_FileExtensions )(
        __x_ABI_CWindows_CGraphics_CImaging_CIBitmapCodecInformation * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_HSTRING * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_FriendlyName )(
        __x_ABI_CWindows_CGraphics_CImaging_CIBitmapCodecInformation * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MimeTypes )(
        __x_ABI_CWindows_CGraphics_CImaging_CIBitmapCodecInformation * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_HSTRING * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGraphics_CImaging_CIBitmapCodecInformationVtbl;

interface __x_ABI_CWindows_CGraphics_CImaging_CIBitmapCodecInformation
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CImaging_CIBitmapCodecInformationVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapCodecInformation_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapCodecInformation_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapCodecInformation_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapCodecInformation_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapCodecInformation_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapCodecInformation_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapCodecInformation_get_CodecId(This,value) \
    ( (This)->lpVtbl->get_CodecId(This,value) )

#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapCodecInformation_get_FileExtensions(This,value) \
    ( (This)->lpVtbl->get_FileExtensions(This,value) )

#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapCodecInformation_get_FriendlyName(This,value) \
    ( (This)->lpVtbl->get_FriendlyName(This,value) )

#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapCodecInformation_get_MimeTypes(This,value) \
    ( (This)->lpVtbl->get_MimeTypes(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CImaging_CIBitmapCodecInformation;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CImaging_CIBitmapCodecInformation_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Graphics.Imaging.IBitmapDecoder
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Graphics.Imaging.BitmapDecoder
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGraphics_CImaging_CIBitmapDecoder_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CImaging_CIBitmapDecoder_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Imaging_IBitmapDecoder[] = L"Windows.Graphics.Imaging.IBitmapDecoder";
/* [object, uuid("ACEF22BA-1D74-4C91-9DFC-9620745233E6"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CGraphics_CImaging_CIBitmapDecoderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapDecoder * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapDecoder * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapDecoder * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapDecoder * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapDecoder * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapDecoder * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_BitmapContainerProperties )(
        __x_ABI_CWindows_CGraphics_CImaging_CIBitmapDecoder * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CImaging_CIBitmapPropertiesView * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DecoderInformation )(
        __x_ABI_CWindows_CGraphics_CImaging_CIBitmapDecoder * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CImaging_CIBitmapCodecInformation * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_FrameCount )(
        __x_ABI_CWindows_CGraphics_CImaging_CIBitmapDecoder * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetPreviewAsync )(
        __x_ABI_CWindows_CGraphics_CImaging_CIBitmapDecoder * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CGraphics__CImaging__CImageStream * * asyncInfo
        );
    HRESULT ( STDMETHODCALLTYPE *GetFrameAsync )(
        __x_ABI_CWindows_CGraphics_CImaging_CIBitmapDecoder * This,
        /* [in] */UINT32 frameIndex,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapFrame * * asyncInfo
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGraphics_CImaging_CIBitmapDecoderVtbl;

interface __x_ABI_CWindows_CGraphics_CImaging_CIBitmapDecoder
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CImaging_CIBitmapDecoderVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapDecoder_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapDecoder_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapDecoder_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapDecoder_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapDecoder_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapDecoder_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapDecoder_get_BitmapContainerProperties(This,value) \
    ( (This)->lpVtbl->get_BitmapContainerProperties(This,value) )

#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapDecoder_get_DecoderInformation(This,value) \
    ( (This)->lpVtbl->get_DecoderInformation(This,value) )

#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapDecoder_get_FrameCount(This,value) \
    ( (This)->lpVtbl->get_FrameCount(This,value) )

#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapDecoder_GetPreviewAsync(This,asyncInfo) \
    ( (This)->lpVtbl->GetPreviewAsync(This,asyncInfo) )

#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapDecoder_GetFrameAsync(This,frameIndex,asyncInfo) \
    ( (This)->lpVtbl->GetFrameAsync(This,frameIndex,asyncInfo) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CImaging_CIBitmapDecoder;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CImaging_CIBitmapDecoder_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Graphics.Imaging.IBitmapDecoderStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Graphics.Imaging.BitmapDecoder
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGraphics_CImaging_CIBitmapDecoderStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CImaging_CIBitmapDecoderStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Imaging_IBitmapDecoderStatics[] = L"Windows.Graphics.Imaging.IBitmapDecoderStatics";
/* [object, uuid("438CCB26-BCEF-4E95-BAD6-23A822E58D01"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CGraphics_CImaging_CIBitmapDecoderStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapDecoderStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapDecoderStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapDecoderStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapDecoderStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapDecoderStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapDecoderStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_BmpDecoderId )(
        __x_ABI_CWindows_CGraphics_CImaging_CIBitmapDecoderStatics * This,
        /* [retval, out] */__RPC__out GUID * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_JpegDecoderId )(
        __x_ABI_CWindows_CGraphics_CImaging_CIBitmapDecoderStatics * This,
        /* [retval, out] */__RPC__out GUID * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PngDecoderId )(
        __x_ABI_CWindows_CGraphics_CImaging_CIBitmapDecoderStatics * This,
        /* [retval, out] */__RPC__out GUID * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_TiffDecoderId )(
        __x_ABI_CWindows_CGraphics_CImaging_CIBitmapDecoderStatics * This,
        /* [retval, out] */__RPC__out GUID * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_GifDecoderId )(
        __x_ABI_CWindows_CGraphics_CImaging_CIBitmapDecoderStatics * This,
        /* [retval, out] */__RPC__out GUID * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_JpegXRDecoderId )(
        __x_ABI_CWindows_CGraphics_CImaging_CIBitmapDecoderStatics * This,
        /* [retval, out] */__RPC__out GUID * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IcoDecoderId )(
        __x_ABI_CWindows_CGraphics_CImaging_CIBitmapDecoderStatics * This,
        /* [retval, out] */__RPC__out GUID * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDecoderInformationEnumerator )(
        __x_ABI_CWindows_CGraphics_CImaging_CIBitmapDecoderStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CGraphics__CImaging__CBitmapCodecInformation * * decoderInformationEnumerator
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *CreateAsync )(
        __x_ABI_CWindows_CGraphics_CImaging_CIBitmapDecoderStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * stream,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapDecoder * * asyncInfo
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *CreateWithIdAsync )(
        __x_ABI_CWindows_CGraphics_CImaging_CIBitmapDecoderStatics * This,
        /* [in] */GUID decoderId,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * stream,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapDecoder * * asyncInfo
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGraphics_CImaging_CIBitmapDecoderStaticsVtbl;

interface __x_ABI_CWindows_CGraphics_CImaging_CIBitmapDecoderStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CImaging_CIBitmapDecoderStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapDecoderStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapDecoderStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapDecoderStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapDecoderStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapDecoderStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapDecoderStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapDecoderStatics_get_BmpDecoderId(This,value) \
    ( (This)->lpVtbl->get_BmpDecoderId(This,value) )

#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapDecoderStatics_get_JpegDecoderId(This,value) \
    ( (This)->lpVtbl->get_JpegDecoderId(This,value) )

#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapDecoderStatics_get_PngDecoderId(This,value) \
    ( (This)->lpVtbl->get_PngDecoderId(This,value) )

#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapDecoderStatics_get_TiffDecoderId(This,value) \
    ( (This)->lpVtbl->get_TiffDecoderId(This,value) )

#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapDecoderStatics_get_GifDecoderId(This,value) \
    ( (This)->lpVtbl->get_GifDecoderId(This,value) )

#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapDecoderStatics_get_JpegXRDecoderId(This,value) \
    ( (This)->lpVtbl->get_JpegXRDecoderId(This,value) )

#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapDecoderStatics_get_IcoDecoderId(This,value) \
    ( (This)->lpVtbl->get_IcoDecoderId(This,value) )

#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapDecoderStatics_GetDecoderInformationEnumerator(This,decoderInformationEnumerator) \
    ( (This)->lpVtbl->GetDecoderInformationEnumerator(This,decoderInformationEnumerator) )

#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapDecoderStatics_CreateAsync(This,stream,asyncInfo) \
    ( (This)->lpVtbl->CreateAsync(This,stream,asyncInfo) )

#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapDecoderStatics_CreateWithIdAsync(This,decoderId,stream,asyncInfo) \
    ( (This)->lpVtbl->CreateWithIdAsync(This,decoderId,stream,asyncInfo) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CImaging_CIBitmapDecoderStatics;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CImaging_CIBitmapDecoderStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Graphics.Imaging.IBitmapEncoder
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Graphics.Imaging.BitmapEncoder
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoder_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoder_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Imaging_IBitmapEncoder[] = L"Windows.Graphics.Imaging.IBitmapEncoder";
/* [object, uuid("2BC468E3-E1F8-4B54-95E8-32919551CE62"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoder * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoder * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoder * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoder * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoder * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoder * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_EncoderInformation )(
        __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoder * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CImaging_CIBitmapCodecInformation * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_BitmapProperties )(
        __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoder * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CImaging_CIBitmapProperties * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_BitmapContainerProperties )(
        __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoder * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CImaging_CIBitmapProperties * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsThumbnailGenerated )(
        __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoder * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_IsThumbnailGenerated )(
        __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoder * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_GeneratedThumbnailWidth )(
        __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoder * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_GeneratedThumbnailWidth )(
        __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoder * This,
        /* [in] */UINT32 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_GeneratedThumbnailHeight )(
        __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoder * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_GeneratedThumbnailHeight )(
        __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoder * This,
        /* [in] */UINT32 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_BitmapTransform )(
        __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoder * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CImaging_CIBitmapTransform * * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetPixelData )(
        __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoder * This,
        /* [in] */__x_ABI_CWindows_CGraphics_CImaging_CBitmapPixelFormat pixelFormat,
        /* [in] */__x_ABI_CWindows_CGraphics_CImaging_CBitmapAlphaMode alphaMode,
        /* [in] */UINT32 width,
        /* [in] */UINT32 height,
        /* [in] */DOUBLE dpiX,
        /* [in] */DOUBLE dpiY,
        /* [in, range(0, 2147483647)] */__RPC__in_range(0,0x7fffffff) UINT32 __pixelsSize,
        /* [size_is(__pixelsSize), in] */__RPC__in_ecount_full(__pixelsSize) BYTE * pixels
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *GoToNextFrameAsync )(
        __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoder * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * asyncInfo
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *GoToNextFrameWithEncodingOptionsAsync )(
        __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoder * This,
        /* [in] */__RPC__in_opt __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue * encodingOptions,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * asyncInfo
        );
    HRESULT ( STDMETHODCALLTYPE *FlushAsync )(
        __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoder * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * asyncInfo
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoderVtbl;

interface __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoder
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoderVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoder_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoder_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoder_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoder_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoder_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoder_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoder_get_EncoderInformation(This,value) \
    ( (This)->lpVtbl->get_EncoderInformation(This,value) )

#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoder_get_BitmapProperties(This,value) \
    ( (This)->lpVtbl->get_BitmapProperties(This,value) )

#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoder_get_BitmapContainerProperties(This,value) \
    ( (This)->lpVtbl->get_BitmapContainerProperties(This,value) )

#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoder_get_IsThumbnailGenerated(This,value) \
    ( (This)->lpVtbl->get_IsThumbnailGenerated(This,value) )

#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoder_put_IsThumbnailGenerated(This,value) \
    ( (This)->lpVtbl->put_IsThumbnailGenerated(This,value) )

#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoder_get_GeneratedThumbnailWidth(This,value) \
    ( (This)->lpVtbl->get_GeneratedThumbnailWidth(This,value) )

#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoder_put_GeneratedThumbnailWidth(This,value) \
    ( (This)->lpVtbl->put_GeneratedThumbnailWidth(This,value) )

#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoder_get_GeneratedThumbnailHeight(This,value) \
    ( (This)->lpVtbl->get_GeneratedThumbnailHeight(This,value) )

#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoder_put_GeneratedThumbnailHeight(This,value) \
    ( (This)->lpVtbl->put_GeneratedThumbnailHeight(This,value) )

#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoder_get_BitmapTransform(This,value) \
    ( (This)->lpVtbl->get_BitmapTransform(This,value) )

#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoder_SetPixelData(This,pixelFormat,alphaMode,width,height,dpiX,dpiY,__pixelsSize,pixels) \
    ( (This)->lpVtbl->SetPixelData(This,pixelFormat,alphaMode,width,height,dpiX,dpiY,__pixelsSize,pixels) )

#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoder_GoToNextFrameAsync(This,asyncInfo) \
    ( (This)->lpVtbl->GoToNextFrameAsync(This,asyncInfo) )

#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoder_GoToNextFrameWithEncodingOptionsAsync(This,encodingOptions,asyncInfo) \
    ( (This)->lpVtbl->GoToNextFrameWithEncodingOptionsAsync(This,encodingOptions,asyncInfo) )

#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoder_FlushAsync(This,asyncInfo) \
    ( (This)->lpVtbl->FlushAsync(This,asyncInfo) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoder;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoder_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Graphics.Imaging.IBitmapEncoderStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Graphics.Imaging.BitmapEncoder
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoderStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoderStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Imaging_IBitmapEncoderStatics[] = L"Windows.Graphics.Imaging.IBitmapEncoderStatics";
/* [object, uuid("A74356A7-A4E4-4EB9-8E40-564DE7E1CCB2"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoderStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoderStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoderStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoderStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoderStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoderStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoderStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_BmpEncoderId )(
        __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoderStatics * This,
        /* [retval, out] */__RPC__out GUID * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_JpegEncoderId )(
        __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoderStatics * This,
        /* [retval, out] */__RPC__out GUID * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PngEncoderId )(
        __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoderStatics * This,
        /* [retval, out] */__RPC__out GUID * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_TiffEncoderId )(
        __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoderStatics * This,
        /* [retval, out] */__RPC__out GUID * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_GifEncoderId )(
        __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoderStatics * This,
        /* [retval, out] */__RPC__out GUID * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_JpegXREncoderId )(
        __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoderStatics * This,
        /* [retval, out] */__RPC__out GUID * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetEncoderInformationEnumerator )(
        __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoderStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CGraphics__CImaging__CBitmapCodecInformation * * encoderInformationEnumerator
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *CreateAsync )(
        __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoderStatics * This,
        /* [in] */GUID encoderId,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * stream,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapEncoder * * asyncInfo
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *CreateWithEncodingOptionsAsync )(
        __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoderStatics * This,
        /* [in] */GUID encoderId,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * stream,
        /* [in] */__RPC__in_opt __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue * encodingOptions,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapEncoder * * asyncInfo
        );
    HRESULT ( STDMETHODCALLTYPE *CreateForTranscodingAsync )(
        __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoderStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * stream,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CGraphics_CImaging_CIBitmapDecoder * bitmapDecoder,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapEncoder * * asyncInfo
        );
    HRESULT ( STDMETHODCALLTYPE *CreateForInPlacePropertyEncodingAsync )(
        __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoderStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CGraphics_CImaging_CIBitmapDecoder * bitmapDecoder,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapEncoder * * asyncInfo
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoderStaticsVtbl;

interface __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoderStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoderStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoderStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoderStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoderStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoderStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoderStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoderStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoderStatics_get_BmpEncoderId(This,value) \
    ( (This)->lpVtbl->get_BmpEncoderId(This,value) )

#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoderStatics_get_JpegEncoderId(This,value) \
    ( (This)->lpVtbl->get_JpegEncoderId(This,value) )

#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoderStatics_get_PngEncoderId(This,value) \
    ( (This)->lpVtbl->get_PngEncoderId(This,value) )

#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoderStatics_get_TiffEncoderId(This,value) \
    ( (This)->lpVtbl->get_TiffEncoderId(This,value) )

#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoderStatics_get_GifEncoderId(This,value) \
    ( (This)->lpVtbl->get_GifEncoderId(This,value) )

#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoderStatics_get_JpegXREncoderId(This,value) \
    ( (This)->lpVtbl->get_JpegXREncoderId(This,value) )

#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoderStatics_GetEncoderInformationEnumerator(This,encoderInformationEnumerator) \
    ( (This)->lpVtbl->GetEncoderInformationEnumerator(This,encoderInformationEnumerator) )

#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoderStatics_CreateAsync(This,encoderId,stream,asyncInfo) \
    ( (This)->lpVtbl->CreateAsync(This,encoderId,stream,asyncInfo) )

#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoderStatics_CreateWithEncodingOptionsAsync(This,encoderId,stream,encodingOptions,asyncInfo) \
    ( (This)->lpVtbl->CreateWithEncodingOptionsAsync(This,encoderId,stream,encodingOptions,asyncInfo) )

#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoderStatics_CreateForTranscodingAsync(This,stream,bitmapDecoder,asyncInfo) \
    ( (This)->lpVtbl->CreateForTranscodingAsync(This,stream,bitmapDecoder,asyncInfo) )

#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoderStatics_CreateForInPlacePropertyEncodingAsync(This,bitmapDecoder,asyncInfo) \
    ( (This)->lpVtbl->CreateForInPlacePropertyEncodingAsync(This,bitmapDecoder,asyncInfo) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoderStatics;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoderStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Graphics.Imaging.IBitmapEncoderWithSoftwareBitmap
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Graphics.Imaging.BitmapEncoder
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoderWithSoftwareBitmap_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoderWithSoftwareBitmap_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Imaging_IBitmapEncoderWithSoftwareBitmap[] = L"Windows.Graphics.Imaging.IBitmapEncoderWithSoftwareBitmap";
/* [object, uuid("686CD241-4330-4C77-ACE4-0334968B1768"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoderWithSoftwareBitmapVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoderWithSoftwareBitmap * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoderWithSoftwareBitmap * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoderWithSoftwareBitmap * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoderWithSoftwareBitmap * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoderWithSoftwareBitmap * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoderWithSoftwareBitmap * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *SetSoftwareBitmap )(
        __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoderWithSoftwareBitmap * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap * bitmap
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoderWithSoftwareBitmapVtbl;

interface __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoderWithSoftwareBitmap
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoderWithSoftwareBitmapVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoderWithSoftwareBitmap_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoderWithSoftwareBitmap_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoderWithSoftwareBitmap_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoderWithSoftwareBitmap_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoderWithSoftwareBitmap_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoderWithSoftwareBitmap_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoderWithSoftwareBitmap_SetSoftwareBitmap(This,bitmap) \
    ( (This)->lpVtbl->SetSoftwareBitmap(This,bitmap) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoderWithSoftwareBitmap;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoderWithSoftwareBitmap_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Graphics.Imaging.IBitmapFrame
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGraphics_CImaging_CIBitmapFrame_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CImaging_CIBitmapFrame_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Imaging_IBitmapFrame[] = L"Windows.Graphics.Imaging.IBitmapFrame";
/* [object, uuid("72A49A1C-8081-438D-91BC-94ECFC8185C6"), contract] */
typedef struct __x_ABI_CWindows_CGraphics_CImaging_CIBitmapFrameVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapFrame * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapFrame * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapFrame * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapFrame * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapFrame * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapFrame * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetThumbnailAsync )(
        __x_ABI_CWindows_CGraphics_CImaging_CIBitmapFrame * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CGraphics__CImaging__CImageStream * * asyncInfo
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_BitmapProperties )(
        __x_ABI_CWindows_CGraphics_CImaging_CIBitmapFrame * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CImaging_CIBitmapPropertiesView * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_BitmapPixelFormat )(
        __x_ABI_CWindows_CGraphics_CImaging_CIBitmapFrame * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CGraphics_CImaging_CBitmapPixelFormat * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_BitmapAlphaMode )(
        __x_ABI_CWindows_CGraphics_CImaging_CIBitmapFrame * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CGraphics_CImaging_CBitmapAlphaMode * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DpiX )(
        __x_ABI_CWindows_CGraphics_CImaging_CIBitmapFrame * This,
        /* [retval, out] */__RPC__out DOUBLE * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DpiY )(
        __x_ABI_CWindows_CGraphics_CImaging_CIBitmapFrame * This,
        /* [retval, out] */__RPC__out DOUBLE * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PixelWidth )(
        __x_ABI_CWindows_CGraphics_CImaging_CIBitmapFrame * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PixelHeight )(
        __x_ABI_CWindows_CGraphics_CImaging_CIBitmapFrame * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_OrientedPixelWidth )(
        __x_ABI_CWindows_CGraphics_CImaging_CIBitmapFrame * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_OrientedPixelHeight )(
        __x_ABI_CWindows_CGraphics_CImaging_CIBitmapFrame * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *GetPixelDataAsync )(
        __x_ABI_CWindows_CGraphics_CImaging_CIBitmapFrame * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CGraphics__CImaging__CPixelDataProvider * * asyncInfo
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *GetPixelDataTransformedAsync )(
        __x_ABI_CWindows_CGraphics_CImaging_CIBitmapFrame * This,
        /* [in] */__x_ABI_CWindows_CGraphics_CImaging_CBitmapPixelFormat pixelFormat,
        /* [in] */__x_ABI_CWindows_CGraphics_CImaging_CBitmapAlphaMode alphaMode,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CGraphics_CImaging_CIBitmapTransform * transform,
        /* [in] */__x_ABI_CWindows_CGraphics_CImaging_CExifOrientationMode exifOrientationMode,
        /* [in] */__x_ABI_CWindows_CGraphics_CImaging_CColorManagementMode colorManagementMode,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CGraphics__CImaging__CPixelDataProvider * * asyncInfo
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGraphics_CImaging_CIBitmapFrameVtbl;

interface __x_ABI_CWindows_CGraphics_CImaging_CIBitmapFrame
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CImaging_CIBitmapFrameVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapFrame_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapFrame_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapFrame_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapFrame_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapFrame_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapFrame_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapFrame_GetThumbnailAsync(This,asyncInfo) \
    ( (This)->lpVtbl->GetThumbnailAsync(This,asyncInfo) )

#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapFrame_get_BitmapProperties(This,value) \
    ( (This)->lpVtbl->get_BitmapProperties(This,value) )

#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapFrame_get_BitmapPixelFormat(This,value) \
    ( (This)->lpVtbl->get_BitmapPixelFormat(This,value) )

#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapFrame_get_BitmapAlphaMode(This,value) \
    ( (This)->lpVtbl->get_BitmapAlphaMode(This,value) )

#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapFrame_get_DpiX(This,value) \
    ( (This)->lpVtbl->get_DpiX(This,value) )

#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapFrame_get_DpiY(This,value) \
    ( (This)->lpVtbl->get_DpiY(This,value) )

#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapFrame_get_PixelWidth(This,value) \
    ( (This)->lpVtbl->get_PixelWidth(This,value) )

#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapFrame_get_PixelHeight(This,value) \
    ( (This)->lpVtbl->get_PixelHeight(This,value) )

#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapFrame_get_OrientedPixelWidth(This,value) \
    ( (This)->lpVtbl->get_OrientedPixelWidth(This,value) )

#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapFrame_get_OrientedPixelHeight(This,value) \
    ( (This)->lpVtbl->get_OrientedPixelHeight(This,value) )

#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapFrame_GetPixelDataAsync(This,asyncInfo) \
    ( (This)->lpVtbl->GetPixelDataAsync(This,asyncInfo) )

#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapFrame_GetPixelDataTransformedAsync(This,pixelFormat,alphaMode,transform,exifOrientationMode,colorManagementMode,asyncInfo) \
    ( (This)->lpVtbl->GetPixelDataTransformedAsync(This,pixelFormat,alphaMode,transform,exifOrientationMode,colorManagementMode,asyncInfo) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CImaging_CIBitmapFrame;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CImaging_CIBitmapFrame_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Graphics.Imaging.IBitmapFrameWithSoftwareBitmap
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Graphics.Imaging.IBitmapFrame
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGraphics_CImaging_CIBitmapFrameWithSoftwareBitmap_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CImaging_CIBitmapFrameWithSoftwareBitmap_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Imaging_IBitmapFrameWithSoftwareBitmap[] = L"Windows.Graphics.Imaging.IBitmapFrameWithSoftwareBitmap";
/* [object, uuid("FE287C9A-420C-4963-87AD-691436E08383"), contract] */
typedef struct __x_ABI_CWindows_CGraphics_CImaging_CIBitmapFrameWithSoftwareBitmapVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapFrameWithSoftwareBitmap * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapFrameWithSoftwareBitmap * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapFrameWithSoftwareBitmap * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapFrameWithSoftwareBitmap * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapFrameWithSoftwareBitmap * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapFrameWithSoftwareBitmap * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [overload] */HRESULT ( STDMETHODCALLTYPE *GetSoftwareBitmapAsync )(
        __x_ABI_CWindows_CGraphics_CImaging_CIBitmapFrameWithSoftwareBitmap * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CGraphics__CImaging__CSoftwareBitmap * * value
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *GetSoftwareBitmapConvertedAsync )(
        __x_ABI_CWindows_CGraphics_CImaging_CIBitmapFrameWithSoftwareBitmap * This,
        /* [in] */__x_ABI_CWindows_CGraphics_CImaging_CBitmapPixelFormat pixelFormat,
        /* [in] */__x_ABI_CWindows_CGraphics_CImaging_CBitmapAlphaMode alphaMode,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CGraphics__CImaging__CSoftwareBitmap * * value
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *GetSoftwareBitmapTransformedAsync )(
        __x_ABI_CWindows_CGraphics_CImaging_CIBitmapFrameWithSoftwareBitmap * This,
        /* [in] */__x_ABI_CWindows_CGraphics_CImaging_CBitmapPixelFormat pixelFormat,
        /* [in] */__x_ABI_CWindows_CGraphics_CImaging_CBitmapAlphaMode alphaMode,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CGraphics_CImaging_CIBitmapTransform * transform,
        /* [in] */__x_ABI_CWindows_CGraphics_CImaging_CExifOrientationMode exifOrientationMode,
        /* [in] */__x_ABI_CWindows_CGraphics_CImaging_CColorManagementMode colorManagementMode,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CGraphics__CImaging__CSoftwareBitmap * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGraphics_CImaging_CIBitmapFrameWithSoftwareBitmapVtbl;

interface __x_ABI_CWindows_CGraphics_CImaging_CIBitmapFrameWithSoftwareBitmap
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CImaging_CIBitmapFrameWithSoftwareBitmapVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapFrameWithSoftwareBitmap_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapFrameWithSoftwareBitmap_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapFrameWithSoftwareBitmap_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapFrameWithSoftwareBitmap_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapFrameWithSoftwareBitmap_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapFrameWithSoftwareBitmap_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapFrameWithSoftwareBitmap_GetSoftwareBitmapAsync(This,value) \
    ( (This)->lpVtbl->GetSoftwareBitmapAsync(This,value) )

#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapFrameWithSoftwareBitmap_GetSoftwareBitmapConvertedAsync(This,pixelFormat,alphaMode,value) \
    ( (This)->lpVtbl->GetSoftwareBitmapConvertedAsync(This,pixelFormat,alphaMode,value) )

#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapFrameWithSoftwareBitmap_GetSoftwareBitmapTransformedAsync(This,pixelFormat,alphaMode,transform,exifOrientationMode,colorManagementMode,value) \
    ( (This)->lpVtbl->GetSoftwareBitmapTransformedAsync(This,pixelFormat,alphaMode,transform,exifOrientationMode,colorManagementMode,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CImaging_CIBitmapFrameWithSoftwareBitmap;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CImaging_CIBitmapFrameWithSoftwareBitmap_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Graphics.Imaging.IBitmapProperties
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Graphics.Imaging.BitmapProperties
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Graphics.Imaging.IBitmapPropertiesView
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGraphics_CImaging_CIBitmapProperties_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CImaging_CIBitmapProperties_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Imaging_IBitmapProperties[] = L"Windows.Graphics.Imaging.IBitmapProperties";
/* [object, uuid("EA9F4F1B-B505-4450-A4D1-E8CA94529D8D"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CGraphics_CImaging_CIBitmapPropertiesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapProperties * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapProperties * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapProperties * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapProperties * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapProperties * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapProperties * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *SetPropertiesAsync )(
        __x_ABI_CWindows_CGraphics_CImaging_CIBitmapProperties * This,
        /* [in] */__RPC__in_opt __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue * propertiesToSet,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * asyncInfo
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGraphics_CImaging_CIBitmapPropertiesVtbl;

interface __x_ABI_CWindows_CGraphics_CImaging_CIBitmapProperties
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CImaging_CIBitmapPropertiesVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapProperties_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapProperties_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapProperties_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapProperties_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapProperties_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapProperties_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapProperties_SetPropertiesAsync(This,propertiesToSet,asyncInfo) \
    ( (This)->lpVtbl->SetPropertiesAsync(This,propertiesToSet,asyncInfo) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CImaging_CIBitmapProperties;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CImaging_CIBitmapProperties_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Graphics.Imaging.IBitmapPropertiesView
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGraphics_CImaging_CIBitmapPropertiesView_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CImaging_CIBitmapPropertiesView_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Imaging_IBitmapPropertiesView[] = L"Windows.Graphics.Imaging.IBitmapPropertiesView";
/* [object, uuid("7E0FE87A-3A70-48F8-9C55-196CF5A545F5"), contract] */
typedef struct __x_ABI_CWindows_CGraphics_CImaging_CIBitmapPropertiesViewVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapPropertiesView * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapPropertiesView * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapPropertiesView * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapPropertiesView * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapPropertiesView * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapPropertiesView * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetPropertiesAsync )(
        __x_ABI_CWindows_CGraphics_CImaging_CIBitmapPropertiesView * This,
        /* [in] */__RPC__in_opt __FIIterable_1_HSTRING * propertiesToRetrieve,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapPropertySet * * asyncInfo
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGraphics_CImaging_CIBitmapPropertiesViewVtbl;

interface __x_ABI_CWindows_CGraphics_CImaging_CIBitmapPropertiesView
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CImaging_CIBitmapPropertiesViewVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapPropertiesView_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapPropertiesView_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapPropertiesView_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapPropertiesView_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapPropertiesView_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapPropertiesView_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapPropertiesView_GetPropertiesAsync(This,propertiesToRetrieve,asyncInfo) \
    ( (This)->lpVtbl->GetPropertiesAsync(This,propertiesToRetrieve,asyncInfo) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CImaging_CIBitmapPropertiesView;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CImaging_CIBitmapPropertiesView_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Graphics.Imaging.IBitmapTransform
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Graphics.Imaging.BitmapTransform
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGraphics_CImaging_CIBitmapTransform_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CImaging_CIBitmapTransform_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Imaging_IBitmapTransform[] = L"Windows.Graphics.Imaging.IBitmapTransform";
/* [object, uuid("AE755344-E268-4D35-ADCF-E995D31A8D34"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CGraphics_CImaging_CIBitmapTransformVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapTransform * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapTransform * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapTransform * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapTransform * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapTransform * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapTransform * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ScaledWidth )(
        __x_ABI_CWindows_CGraphics_CImaging_CIBitmapTransform * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ScaledWidth )(
        __x_ABI_CWindows_CGraphics_CImaging_CIBitmapTransform * This,
        /* [in] */UINT32 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ScaledHeight )(
        __x_ABI_CWindows_CGraphics_CImaging_CIBitmapTransform * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ScaledHeight )(
        __x_ABI_CWindows_CGraphics_CImaging_CIBitmapTransform * This,
        /* [in] */UINT32 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_InterpolationMode )(
        __x_ABI_CWindows_CGraphics_CImaging_CIBitmapTransform * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CGraphics_CImaging_CBitmapInterpolationMode * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_InterpolationMode )(
        __x_ABI_CWindows_CGraphics_CImaging_CIBitmapTransform * This,
        /* [in] */__x_ABI_CWindows_CGraphics_CImaging_CBitmapInterpolationMode value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Flip )(
        __x_ABI_CWindows_CGraphics_CImaging_CIBitmapTransform * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CGraphics_CImaging_CBitmapFlip * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Flip )(
        __x_ABI_CWindows_CGraphics_CImaging_CIBitmapTransform * This,
        /* [in] */__x_ABI_CWindows_CGraphics_CImaging_CBitmapFlip value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Rotation )(
        __x_ABI_CWindows_CGraphics_CImaging_CIBitmapTransform * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CGraphics_CImaging_CBitmapRotation * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Rotation )(
        __x_ABI_CWindows_CGraphics_CImaging_CIBitmapTransform * This,
        /* [in] */__x_ABI_CWindows_CGraphics_CImaging_CBitmapRotation value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Bounds )(
        __x_ABI_CWindows_CGraphics_CImaging_CIBitmapTransform * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CGraphics_CImaging_CBitmapBounds * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Bounds )(
        __x_ABI_CWindows_CGraphics_CImaging_CIBitmapTransform * This,
        /* [in] */__x_ABI_CWindows_CGraphics_CImaging_CBitmapBounds value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGraphics_CImaging_CIBitmapTransformVtbl;

interface __x_ABI_CWindows_CGraphics_CImaging_CIBitmapTransform
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CImaging_CIBitmapTransformVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapTransform_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapTransform_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapTransform_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapTransform_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapTransform_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapTransform_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapTransform_get_ScaledWidth(This,value) \
    ( (This)->lpVtbl->get_ScaledWidth(This,value) )

#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapTransform_put_ScaledWidth(This,value) \
    ( (This)->lpVtbl->put_ScaledWidth(This,value) )

#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapTransform_get_ScaledHeight(This,value) \
    ( (This)->lpVtbl->get_ScaledHeight(This,value) )

#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapTransform_put_ScaledHeight(This,value) \
    ( (This)->lpVtbl->put_ScaledHeight(This,value) )

#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapTransform_get_InterpolationMode(This,value) \
    ( (This)->lpVtbl->get_InterpolationMode(This,value) )

#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapTransform_put_InterpolationMode(This,value) \
    ( (This)->lpVtbl->put_InterpolationMode(This,value) )

#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapTransform_get_Flip(This,value) \
    ( (This)->lpVtbl->get_Flip(This,value) )

#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapTransform_put_Flip(This,value) \
    ( (This)->lpVtbl->put_Flip(This,value) )

#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapTransform_get_Rotation(This,value) \
    ( (This)->lpVtbl->get_Rotation(This,value) )

#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapTransform_put_Rotation(This,value) \
    ( (This)->lpVtbl->put_Rotation(This,value) )

#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapTransform_get_Bounds(This,value) \
    ( (This)->lpVtbl->get_Bounds(This,value) )

#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapTransform_put_Bounds(This,value) \
    ( (This)->lpVtbl->put_Bounds(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CImaging_CIBitmapTransform;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CImaging_CIBitmapTransform_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Graphics.Imaging.IBitmapTypedValue
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Graphics.Imaging.BitmapTypedValue
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGraphics_CImaging_CIBitmapTypedValue_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CImaging_CIBitmapTypedValue_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Imaging_IBitmapTypedValue[] = L"Windows.Graphics.Imaging.IBitmapTypedValue";
/* [object, uuid("CD8044A9-2443-4000-B0CD-79316C56F589"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CGraphics_CImaging_CIBitmapTypedValueVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapTypedValue * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapTypedValue * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapTypedValue * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapTypedValue * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapTypedValue * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapTypedValue * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Value )(
        __x_ABI_CWindows_CGraphics_CImaging_CIBitmapTypedValue * This,
        /* [retval, out] */__RPC__deref_out_opt IInspectable * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Type )(
        __x_ABI_CWindows_CGraphics_CImaging_CIBitmapTypedValue * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CPropertyType * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGraphics_CImaging_CIBitmapTypedValueVtbl;

interface __x_ABI_CWindows_CGraphics_CImaging_CIBitmapTypedValue
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CImaging_CIBitmapTypedValueVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapTypedValue_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapTypedValue_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapTypedValue_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapTypedValue_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapTypedValue_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapTypedValue_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapTypedValue_get_Value(This,value) \
    ( (This)->lpVtbl->get_Value(This,value) )

#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapTypedValue_get_Type(This,value) \
    ( (This)->lpVtbl->get_Type(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CImaging_CIBitmapTypedValue;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CImaging_CIBitmapTypedValue_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Graphics.Imaging.IBitmapTypedValueFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Graphics.Imaging.BitmapTypedValue
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGraphics_CImaging_CIBitmapTypedValueFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CImaging_CIBitmapTypedValueFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Imaging_IBitmapTypedValueFactory[] = L"Windows.Graphics.Imaging.IBitmapTypedValueFactory";
/* [object, uuid("92DBB599-CE13-46BB-9545-CB3A3F63EB8B"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CGraphics_CImaging_CIBitmapTypedValueFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapTypedValueFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapTypedValueFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapTypedValueFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapTypedValueFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapTypedValueFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapTypedValueFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CGraphics_CImaging_CIBitmapTypedValueFactory * This,
        /* [in] */__RPC__in_opt IInspectable * value,
        /* [in] */__x_ABI_CWindows_CFoundation_CPropertyType type,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CImaging_CIBitmapTypedValue * * bitmapTypedValue
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGraphics_CImaging_CIBitmapTypedValueFactoryVtbl;

interface __x_ABI_CWindows_CGraphics_CImaging_CIBitmapTypedValueFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CImaging_CIBitmapTypedValueFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapTypedValueFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapTypedValueFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapTypedValueFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapTypedValueFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapTypedValueFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapTypedValueFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGraphics_CImaging_CIBitmapTypedValueFactory_Create(This,value,type,bitmapTypedValue) \
    ( (This)->lpVtbl->Create(This,value,type,bitmapTypedValue) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CImaging_CIBitmapTypedValueFactory;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CImaging_CIBitmapTypedValueFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Graphics.Imaging.IPixelDataProvider
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Graphics.Imaging.PixelDataProvider
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGraphics_CImaging_CIPixelDataProvider_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CImaging_CIPixelDataProvider_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Imaging_IPixelDataProvider[] = L"Windows.Graphics.Imaging.IPixelDataProvider";
/* [object, uuid("DD831F25-185C-4595-9FB9-CCBE6EC18A6F"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CGraphics_CImaging_CIPixelDataProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIPixelDataProvider * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIPixelDataProvider * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIPixelDataProvider * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIPixelDataProvider * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIPixelDataProvider * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIPixelDataProvider * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *DetachPixelData )(
        __x_ABI_CWindows_CGraphics_CImaging_CIPixelDataProvider * This,
        /* [out] */__RPC__out UINT32 * __pixelDataSize,
        /* [size_is(, *(__pixelDataSize)), retval, out] */__RPC__deref_out_ecount_full_opt(*(__pixelDataSize)) BYTE * * pixelData
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGraphics_CImaging_CIPixelDataProviderVtbl;

interface __x_ABI_CWindows_CGraphics_CImaging_CIPixelDataProvider
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CImaging_CIPixelDataProviderVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGraphics_CImaging_CIPixelDataProvider_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGraphics_CImaging_CIPixelDataProvider_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGraphics_CImaging_CIPixelDataProvider_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGraphics_CImaging_CIPixelDataProvider_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGraphics_CImaging_CIPixelDataProvider_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGraphics_CImaging_CIPixelDataProvider_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGraphics_CImaging_CIPixelDataProvider_DetachPixelData(This,__pixelDataSize,pixelData) \
    ( (This)->lpVtbl->DetachPixelData(This,__pixelDataSize,pixelData) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CImaging_CIPixelDataProvider;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CImaging_CIPixelDataProvider_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Graphics.Imaging.ISoftwareBitmap
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Graphics.Imaging.SoftwareBitmap
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Imaging_ISoftwareBitmap[] = L"Windows.Graphics.Imaging.ISoftwareBitmap";
/* [object, uuid("689E0708-7EEF-483F-963F-DA938818E073"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmapVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_BitmapPixelFormat )(
        __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CGraphics_CImaging_CBitmapPixelFormat * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_BitmapAlphaMode )(
        __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CGraphics_CImaging_CBitmapAlphaMode * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PixelWidth )(
        __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PixelHeight )(
        __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsReadOnly )(
        __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_DpiX )(
        __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap * This,
        /* [in] */DOUBLE value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DpiX )(
        __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap * This,
        /* [retval, out] */__RPC__out DOUBLE * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_DpiY )(
        __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap * This,
        /* [in] */DOUBLE value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DpiY )(
        __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap * This,
        /* [retval, out] */__RPC__out DOUBLE * value
        );
    HRESULT ( STDMETHODCALLTYPE *LockBuffer )(
        __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap * This,
        /* [in] */__x_ABI_CWindows_CGraphics_CImaging_CBitmapBufferAccessMode mode,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CImaging_CIBitmapBuffer * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CopyTo )(
        __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap * bitmap
        );
    HRESULT ( STDMETHODCALLTYPE *CopyFromBuffer )(
        __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * buffer
        );
    HRESULT ( STDMETHODCALLTYPE *CopyToBuffer )(
        __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * buffer
        );
    HRESULT ( STDMETHODCALLTYPE *GetReadOnlyView )(
        __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmapVtbl;

interface __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmapVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap_get_BitmapPixelFormat(This,value) \
    ( (This)->lpVtbl->get_BitmapPixelFormat(This,value) )

#define __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap_get_BitmapAlphaMode(This,value) \
    ( (This)->lpVtbl->get_BitmapAlphaMode(This,value) )

#define __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap_get_PixelWidth(This,value) \
    ( (This)->lpVtbl->get_PixelWidth(This,value) )

#define __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap_get_PixelHeight(This,value) \
    ( (This)->lpVtbl->get_PixelHeight(This,value) )

#define __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap_get_IsReadOnly(This,value) \
    ( (This)->lpVtbl->get_IsReadOnly(This,value) )

#define __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap_put_DpiX(This,value) \
    ( (This)->lpVtbl->put_DpiX(This,value) )

#define __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap_get_DpiX(This,value) \
    ( (This)->lpVtbl->get_DpiX(This,value) )

#define __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap_put_DpiY(This,value) \
    ( (This)->lpVtbl->put_DpiY(This,value) )

#define __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap_get_DpiY(This,value) \
    ( (This)->lpVtbl->get_DpiY(This,value) )

#define __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap_LockBuffer(This,mode,value) \
    ( (This)->lpVtbl->LockBuffer(This,mode,value) )

#define __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap_CopyTo(This,bitmap) \
    ( (This)->lpVtbl->CopyTo(This,bitmap) )

#define __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap_CopyFromBuffer(This,buffer) \
    ( (This)->lpVtbl->CopyFromBuffer(This,buffer) )

#define __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap_CopyToBuffer(This,buffer) \
    ( (This)->lpVtbl->CopyToBuffer(This,buffer) )

#define __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap_GetReadOnlyView(This,value) \
    ( (This)->lpVtbl->GetReadOnlyView(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Graphics.Imaging.ISoftwareBitmapFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Graphics.Imaging.SoftwareBitmap
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmapFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmapFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Imaging_ISoftwareBitmapFactory[] = L"Windows.Graphics.Imaging.ISoftwareBitmapFactory";
/* [object, uuid("C99FEB69-2D62-4D47-A6B3-4FDB6A07FDF8"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmapFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmapFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmapFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmapFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmapFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmapFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmapFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmapFactory * This,
        /* [in] */__x_ABI_CWindows_CGraphics_CImaging_CBitmapPixelFormat format,
        /* [in] */INT32 width,
        /* [in] */INT32 height,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateWithAlpha )(
        __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmapFactory * This,
        /* [in] */__x_ABI_CWindows_CGraphics_CImaging_CBitmapPixelFormat format,
        /* [in] */INT32 width,
        /* [in] */INT32 height,
        /* [in] */__x_ABI_CWindows_CGraphics_CImaging_CBitmapAlphaMode alpha,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmapFactoryVtbl;

interface __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmapFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmapFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmapFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmapFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmapFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmapFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmapFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmapFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmapFactory_Create(This,format,width,height,value) \
    ( (This)->lpVtbl->Create(This,format,width,height,value) )

#define __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmapFactory_CreateWithAlpha(This,format,width,height,alpha,value) \
    ( (This)->lpVtbl->CreateWithAlpha(This,format,width,height,alpha,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmapFactory;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmapFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Graphics.Imaging.ISoftwareBitmapStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Graphics.Imaging.SoftwareBitmap
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmapStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmapStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Imaging_ISoftwareBitmapStatics[] = L"Windows.Graphics.Imaging.ISoftwareBitmapStatics";
/* [object, uuid("DF0385DB-672F-4A9D-806E-C2442F343E86"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmapStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmapStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmapStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmapStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmapStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmapStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmapStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Copy )(
        __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmapStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap * source,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap * * value
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *Convert )(
        __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmapStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap * source,
        /* [in] */__x_ABI_CWindows_CGraphics_CImaging_CBitmapPixelFormat format,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap * * value
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *ConvertWithAlpha )(
        __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmapStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap * source,
        /* [in] */__x_ABI_CWindows_CGraphics_CImaging_CBitmapPixelFormat format,
        /* [in] */__x_ABI_CWindows_CGraphics_CImaging_CBitmapAlphaMode alpha,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap * * value
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *CreateCopyFromBuffer )(
        __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmapStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * source,
        /* [in] */__x_ABI_CWindows_CGraphics_CImaging_CBitmapPixelFormat format,
        /* [in] */INT32 width,
        /* [in] */INT32 height,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap * * value
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *CreateCopyWithAlphaFromBuffer )(
        __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmapStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * source,
        /* [in] */__x_ABI_CWindows_CGraphics_CImaging_CBitmapPixelFormat format,
        /* [in] */INT32 width,
        /* [in] */INT32 height,
        /* [in] */__x_ABI_CWindows_CGraphics_CImaging_CBitmapAlphaMode alpha,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap * * value
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *CreateCopyFromSurfaceAsync )(
        __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmapStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface * surface,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CGraphics__CImaging__CSoftwareBitmap * * value
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *CreateCopyWithAlphaFromSurfaceAsync )(
        __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmapStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface * surface,
        /* [in] */__x_ABI_CWindows_CGraphics_CImaging_CBitmapAlphaMode alpha,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CGraphics__CImaging__CSoftwareBitmap * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmapStaticsVtbl;

interface __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmapStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmapStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmapStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmapStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmapStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmapStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmapStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmapStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmapStatics_Copy(This,source,value) \
    ( (This)->lpVtbl->Copy(This,source,value) )

#define __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmapStatics_Convert(This,source,format,value) \
    ( (This)->lpVtbl->Convert(This,source,format,value) )

#define __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmapStatics_ConvertWithAlpha(This,source,format,alpha,value) \
    ( (This)->lpVtbl->ConvertWithAlpha(This,source,format,alpha,value) )

#define __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmapStatics_CreateCopyFromBuffer(This,source,format,width,height,value) \
    ( (This)->lpVtbl->CreateCopyFromBuffer(This,source,format,width,height,value) )

#define __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmapStatics_CreateCopyWithAlphaFromBuffer(This,source,format,width,height,alpha,value) \
    ( (This)->lpVtbl->CreateCopyWithAlphaFromBuffer(This,source,format,width,height,alpha,value) )

#define __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmapStatics_CreateCopyFromSurfaceAsync(This,surface,value) \
    ( (This)->lpVtbl->CreateCopyFromSurfaceAsync(This,surface,value) )

#define __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmapStatics_CreateCopyWithAlphaFromSurfaceAsync(This,surface,alpha,value) \
    ( (This)->lpVtbl->CreateCopyWithAlphaFromSurfaceAsync(This,surface,alpha,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmapStatics;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmapStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Graphics.Imaging.BitmapBuffer
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Graphics.Imaging.IBitmapBuffer ** Default Interface **
 *    Windows.Foundation.IMemoryBuffer
 *    Windows.Foundation.IClosable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Graphics_Imaging_BitmapBuffer_DEFINED
#define RUNTIMECLASS_Windows_Graphics_Imaging_BitmapBuffer_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Imaging_BitmapBuffer[] = L"Windows.Graphics.Imaging.BitmapBuffer";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Graphics.Imaging.BitmapCodecInformation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Graphics.Imaging.IBitmapCodecInformation ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Graphics_Imaging_BitmapCodecInformation_DEFINED
#define RUNTIMECLASS_Windows_Graphics_Imaging_BitmapCodecInformation_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Imaging_BitmapCodecInformation[] = L"Windows.Graphics.Imaging.BitmapCodecInformation";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Graphics.Imaging.BitmapDecoder
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Graphics.Imaging.IBitmapDecoderStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Graphics.Imaging.IBitmapDecoder ** Default Interface **
 *    Windows.Graphics.Imaging.IBitmapFrame
 *    Windows.Graphics.Imaging.IBitmapFrameWithSoftwareBitmap
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Graphics_Imaging_BitmapDecoder_DEFINED
#define RUNTIMECLASS_Windows_Graphics_Imaging_BitmapDecoder_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Imaging_BitmapDecoder[] = L"Windows.Graphics.Imaging.BitmapDecoder";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Graphics.Imaging.BitmapEncoder
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Graphics.Imaging.IBitmapEncoderStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Graphics.Imaging.IBitmapEncoder ** Default Interface **
 *    Windows.Graphics.Imaging.IBitmapEncoderWithSoftwareBitmap
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Graphics_Imaging_BitmapEncoder_DEFINED
#define RUNTIMECLASS_Windows_Graphics_Imaging_BitmapEncoder_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Imaging_BitmapEncoder[] = L"Windows.Graphics.Imaging.BitmapEncoder";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Graphics.Imaging.BitmapFrame
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Graphics.Imaging.IBitmapFrame ** Default Interface **
 *    Windows.Graphics.Imaging.IBitmapFrameWithSoftwareBitmap
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Graphics_Imaging_BitmapFrame_DEFINED
#define RUNTIMECLASS_Windows_Graphics_Imaging_BitmapFrame_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Imaging_BitmapFrame[] = L"Windows.Graphics.Imaging.BitmapFrame";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Graphics.Imaging.BitmapProperties
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Graphics.Imaging.IBitmapProperties ** Default Interface **
 *    Windows.Graphics.Imaging.IBitmapPropertiesView
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Graphics_Imaging_BitmapProperties_DEFINED
#define RUNTIMECLASS_Windows_Graphics_Imaging_BitmapProperties_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Imaging_BitmapProperties[] = L"Windows.Graphics.Imaging.BitmapProperties";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Graphics.Imaging.BitmapPropertiesView
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Graphics.Imaging.IBitmapPropertiesView ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Graphics_Imaging_BitmapPropertiesView_DEFINED
#define RUNTIMECLASS_Windows_Graphics_Imaging_BitmapPropertiesView_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Imaging_BitmapPropertiesView[] = L"Windows.Graphics.Imaging.BitmapPropertiesView";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Graphics.Imaging.BitmapPropertySet
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Foundation.Collections.IMap_2_HSTRING,Windows.Graphics.Imaging.BitmapTypedValue ** Default Interface **
 *    Windows.Foundation.Collections.IIterable_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Graphics_Imaging_BitmapPropertySet_DEFINED
#define RUNTIMECLASS_Windows_Graphics_Imaging_BitmapPropertySet_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Imaging_BitmapPropertySet[] = L"Windows.Graphics.Imaging.BitmapPropertySet";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Graphics.Imaging.BitmapTransform
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Graphics.Imaging.IBitmapTransform ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Graphics_Imaging_BitmapTransform_DEFINED
#define RUNTIMECLASS_Windows_Graphics_Imaging_BitmapTransform_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Imaging_BitmapTransform[] = L"Windows.Graphics.Imaging.BitmapTransform";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Graphics.Imaging.BitmapTypedValue
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Graphics.Imaging.IBitmapTypedValueFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Graphics.Imaging.IBitmapTypedValue ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Graphics_Imaging_BitmapTypedValue_DEFINED
#define RUNTIMECLASS_Windows_Graphics_Imaging_BitmapTypedValue_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Imaging_BitmapTypedValue[] = L"Windows.Graphics.Imaging.BitmapTypedValue";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Graphics.Imaging.ImageStream
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Storage.Streams.IRandomAccessStreamWithContentType ** Default Interface **
 *    Windows.Storage.Streams.IContentTypeProvider
 *    Windows.Storage.Streams.IRandomAccessStream
 *    Windows.Storage.Streams.IOutputStream
 *    Windows.Foundation.IClosable
 *    Windows.Storage.Streams.IInputStream
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Graphics_Imaging_ImageStream_DEFINED
#define RUNTIMECLASS_Windows_Graphics_Imaging_ImageStream_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Imaging_ImageStream[] = L"Windows.Graphics.Imaging.ImageStream";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Graphics.Imaging.PixelDataProvider
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Graphics.Imaging.IPixelDataProvider ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Graphics_Imaging_PixelDataProvider_DEFINED
#define RUNTIMECLASS_Windows_Graphics_Imaging_PixelDataProvider_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Imaging_PixelDataProvider[] = L"Windows.Graphics.Imaging.PixelDataProvider";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Graphics.Imaging.SoftwareBitmap
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Graphics.Imaging.ISoftwareBitmapFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Graphics.Imaging.ISoftwareBitmapStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Graphics.Imaging.ISoftwareBitmap ** Default Interface **
 *    Windows.Foundation.IClosable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Graphics_Imaging_SoftwareBitmap_DEFINED
#define RUNTIMECLASS_Windows_Graphics_Imaging_SoftwareBitmap_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Imaging_SoftwareBitmap[] = L"Windows.Graphics.Imaging.SoftwareBitmap";
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
#endif // __windows2Egraphics2Eimaging_p_h__

#endif // __windows2Egraphics2Eimaging_h__
