/* Header file automatically generated from windows.media.editing.idl */
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
#ifndef __windows2Emedia2Eediting_h__
#define __windows2Emedia2Eediting_h__
#ifndef __windows2Emedia2Eediting_p_h__
#define __windows2Emedia2Eediting_p_h__


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
#include "Windows.Graphics.Imaging.h"
#include "Windows.Media.Core.h"
#include "Windows.Media.Effects.h"
#include "Windows.Media.MediaProperties.h"
#include "Windows.Media.Transcoding.h"
#include "Windows.Storage.h"
#include "Windows.UI.h"
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrack_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrack_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Editing {
                interface IBackgroundAudioTrack;
            } /* Windows */
        } /* Media */
    } /* Editing */} /* ABI */
#define __x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrack ABI::Windows::Media::Editing::IBackgroundAudioTrack

#endif // ____x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrack_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrackStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrackStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Editing {
                interface IBackgroundAudioTrackStatics;
            } /* Windows */
        } /* Media */
    } /* Editing */} /* ABI */
#define __x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrackStatics ABI::Windows::Media::Editing::IBackgroundAudioTrackStatics

#endif // ____x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrackStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CEditing_CIEmbeddedAudioTrack_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CEditing_CIEmbeddedAudioTrack_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Editing {
                interface IEmbeddedAudioTrack;
            } /* Windows */
        } /* Media */
    } /* Editing */} /* ABI */
#define __x_ABI_CWindows_CMedia_CEditing_CIEmbeddedAudioTrack ABI::Windows::Media::Editing::IEmbeddedAudioTrack

#endif // ____x_ABI_CWindows_CMedia_CEditing_CIEmbeddedAudioTrack_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CEditing_CIMediaClip_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CEditing_CIMediaClip_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Editing {
                interface IMediaClip;
            } /* Windows */
        } /* Media */
    } /* Editing */} /* ABI */
#define __x_ABI_CWindows_CMedia_CEditing_CIMediaClip ABI::Windows::Media::Editing::IMediaClip

#endif // ____x_ABI_CWindows_CMedia_CEditing_CIMediaClip_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CEditing_CIMediaClipStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CEditing_CIMediaClipStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Editing {
                interface IMediaClipStatics;
            } /* Windows */
        } /* Media */
    } /* Editing */} /* ABI */
#define __x_ABI_CWindows_CMedia_CEditing_CIMediaClipStatics ABI::Windows::Media::Editing::IMediaClipStatics

#endif // ____x_ABI_CWindows_CMedia_CEditing_CIMediaClipStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CEditing_CIMediaClipStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CEditing_CIMediaClipStatics2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Editing {
                interface IMediaClipStatics2;
            } /* Windows */
        } /* Media */
    } /* Editing */} /* ABI */
#define __x_ABI_CWindows_CMedia_CEditing_CIMediaClipStatics2 ABI::Windows::Media::Editing::IMediaClipStatics2

#endif // ____x_ABI_CWindows_CMedia_CEditing_CIMediaClipStatics2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CEditing_CIMediaComposition_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CEditing_CIMediaComposition_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Editing {
                interface IMediaComposition;
            } /* Windows */
        } /* Media */
    } /* Editing */} /* ABI */
#define __x_ABI_CWindows_CMedia_CEditing_CIMediaComposition ABI::Windows::Media::Editing::IMediaComposition

#endif // ____x_ABI_CWindows_CMedia_CEditing_CIMediaComposition_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CEditing_CIMediaComposition2_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CEditing_CIMediaComposition2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Editing {
                interface IMediaComposition2;
            } /* Windows */
        } /* Media */
    } /* Editing */} /* ABI */
#define __x_ABI_CWindows_CMedia_CEditing_CIMediaComposition2 ABI::Windows::Media::Editing::IMediaComposition2

#endif // ____x_ABI_CWindows_CMedia_CEditing_CIMediaComposition2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CEditing_CIMediaCompositionStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CEditing_CIMediaCompositionStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Editing {
                interface IMediaCompositionStatics;
            } /* Windows */
        } /* Media */
    } /* Editing */} /* ABI */
#define __x_ABI_CWindows_CMedia_CEditing_CIMediaCompositionStatics ABI::Windows::Media::Editing::IMediaCompositionStatics

#endif // ____x_ABI_CWindows_CMedia_CEditing_CIMediaCompositionStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CEditing_CIMediaOverlay_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CEditing_CIMediaOverlay_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Editing {
                interface IMediaOverlay;
            } /* Windows */
        } /* Media */
    } /* Editing */} /* ABI */
#define __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlay ABI::Windows::Media::Editing::IMediaOverlay

#endif // ____x_ABI_CWindows_CMedia_CEditing_CIMediaOverlay_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Editing {
                interface IMediaOverlayFactory;
            } /* Windows */
        } /* Media */
    } /* Editing */} /* ABI */
#define __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayFactory ABI::Windows::Media::Editing::IMediaOverlayFactory

#endif // ____x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayLayer_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayLayer_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Editing {
                interface IMediaOverlayLayer;
            } /* Windows */
        } /* Media */
    } /* Editing */} /* ABI */
#define __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayLayer ABI::Windows::Media::Editing::IMediaOverlayLayer

#endif // ____x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayLayer_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayLayerFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayLayerFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Editing {
                interface IMediaOverlayLayerFactory;
            } /* Windows */
        } /* Media */
    } /* Editing */} /* ABI */
#define __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayLayerFactory ABI::Windows::Media::Editing::IMediaOverlayLayerFactory

#endif // ____x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayLayerFactory_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Editing {
                class BackgroundAudioTrack;
            } /* Windows */
        } /* Media */
    } /* Editing */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CMedia__CEditing__CBackgroundAudioTrack_USE
#define DEF___FIIterator_1_Windows__CMedia__CEditing__CBackgroundAudioTrack_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("18b0f692-8635-577a-9efa-cb904770d6e5"))
IIterator<ABI::Windows::Media::Editing::BackgroundAudioTrack*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Editing::BackgroundAudioTrack*, ABI::Windows::Media::Editing::IBackgroundAudioTrack*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Media.Editing.BackgroundAudioTrack>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Media::Editing::BackgroundAudioTrack*> __FIIterator_1_Windows__CMedia__CEditing__CBackgroundAudioTrack_t;
#define __FIIterator_1_Windows__CMedia__CEditing__CBackgroundAudioTrack ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CMedia__CEditing__CBackgroundAudioTrack_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CMedia__CEditing__CBackgroundAudioTrack ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Media::Editing::IBackgroundAudioTrack*>
//#define __FIIterator_1_Windows__CMedia__CEditing__CBackgroundAudioTrack_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Media::Editing::IBackgroundAudioTrack*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CMedia__CEditing__CBackgroundAudioTrack_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CMedia__CEditing__CBackgroundAudioTrack_USE
#define DEF___FIIterable_1_Windows__CMedia__CEditing__CBackgroundAudioTrack_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("3fc05ba2-30f6-5219-9047-1197ffae8dba"))
IIterable<ABI::Windows::Media::Editing::BackgroundAudioTrack*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Editing::BackgroundAudioTrack*, ABI::Windows::Media::Editing::IBackgroundAudioTrack*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Media.Editing.BackgroundAudioTrack>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Media::Editing::BackgroundAudioTrack*> __FIIterable_1_Windows__CMedia__CEditing__CBackgroundAudioTrack_t;
#define __FIIterable_1_Windows__CMedia__CEditing__CBackgroundAudioTrack ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CMedia__CEditing__CBackgroundAudioTrack_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CMedia__CEditing__CBackgroundAudioTrack ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Media::Editing::IBackgroundAudioTrack*>
//#define __FIIterable_1_Windows__CMedia__CEditing__CBackgroundAudioTrack_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Media::Editing::IBackgroundAudioTrack*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CMedia__CEditing__CBackgroundAudioTrack_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Editing {
                class EmbeddedAudioTrack;
            } /* Windows */
        } /* Media */
    } /* Editing */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CMedia__CEditing__CEmbeddedAudioTrack_USE
#define DEF___FIIterator_1_Windows__CMedia__CEditing__CEmbeddedAudioTrack_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("c9fa7f51-b52c-578e-99f9-012cd5641247"))
IIterator<ABI::Windows::Media::Editing::EmbeddedAudioTrack*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Editing::EmbeddedAudioTrack*, ABI::Windows::Media::Editing::IEmbeddedAudioTrack*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Media.Editing.EmbeddedAudioTrack>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Media::Editing::EmbeddedAudioTrack*> __FIIterator_1_Windows__CMedia__CEditing__CEmbeddedAudioTrack_t;
#define __FIIterator_1_Windows__CMedia__CEditing__CEmbeddedAudioTrack ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CMedia__CEditing__CEmbeddedAudioTrack_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CMedia__CEditing__CEmbeddedAudioTrack ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Media::Editing::IEmbeddedAudioTrack*>
//#define __FIIterator_1_Windows__CMedia__CEditing__CEmbeddedAudioTrack_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Media::Editing::IEmbeddedAudioTrack*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CMedia__CEditing__CEmbeddedAudioTrack_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CMedia__CEditing__CEmbeddedAudioTrack_USE
#define DEF___FIIterable_1_Windows__CMedia__CEditing__CEmbeddedAudioTrack_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("32fabed0-e1e6-578e-86e5-b4e6abeb22d6"))
IIterable<ABI::Windows::Media::Editing::EmbeddedAudioTrack*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Editing::EmbeddedAudioTrack*, ABI::Windows::Media::Editing::IEmbeddedAudioTrack*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Media.Editing.EmbeddedAudioTrack>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Media::Editing::EmbeddedAudioTrack*> __FIIterable_1_Windows__CMedia__CEditing__CEmbeddedAudioTrack_t;
#define __FIIterable_1_Windows__CMedia__CEditing__CEmbeddedAudioTrack ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CMedia__CEditing__CEmbeddedAudioTrack_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CMedia__CEditing__CEmbeddedAudioTrack ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Media::Editing::IEmbeddedAudioTrack*>
//#define __FIIterable_1_Windows__CMedia__CEditing__CEmbeddedAudioTrack_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Media::Editing::IEmbeddedAudioTrack*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CMedia__CEditing__CEmbeddedAudioTrack_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Editing {
                class MediaClip;
            } /* Windows */
        } /* Media */
    } /* Editing */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CMedia__CEditing__CMediaClip_USE
#define DEF___FIIterator_1_Windows__CMedia__CEditing__CMediaClip_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("2dfd20b2-06d8-577d-ab06-771e0414fc00"))
IIterator<ABI::Windows::Media::Editing::MediaClip*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Editing::MediaClip*, ABI::Windows::Media::Editing::IMediaClip*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Media.Editing.MediaClip>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Media::Editing::MediaClip*> __FIIterator_1_Windows__CMedia__CEditing__CMediaClip_t;
#define __FIIterator_1_Windows__CMedia__CEditing__CMediaClip ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CMedia__CEditing__CMediaClip_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CMedia__CEditing__CMediaClip ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Media::Editing::IMediaClip*>
//#define __FIIterator_1_Windows__CMedia__CEditing__CMediaClip_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Media::Editing::IMediaClip*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CMedia__CEditing__CMediaClip_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CMedia__CEditing__CMediaClip_USE
#define DEF___FIIterable_1_Windows__CMedia__CEditing__CMediaClip_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("ff2e9b5c-26d0-575d-a3eb-7d938bd16f17"))
IIterable<ABI::Windows::Media::Editing::MediaClip*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Editing::MediaClip*, ABI::Windows::Media::Editing::IMediaClip*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Media.Editing.MediaClip>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Media::Editing::MediaClip*> __FIIterable_1_Windows__CMedia__CEditing__CMediaClip_t;
#define __FIIterable_1_Windows__CMedia__CEditing__CMediaClip ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CMedia__CEditing__CMediaClip_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CMedia__CEditing__CMediaClip ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Media::Editing::IMediaClip*>
//#define __FIIterable_1_Windows__CMedia__CEditing__CMediaClip_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Media::Editing::IMediaClip*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CMedia__CEditing__CMediaClip_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Editing {
                class MediaOverlay;
            } /* Windows */
        } /* Media */
    } /* Editing */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CMedia__CEditing__CMediaOverlay_USE
#define DEF___FIIterator_1_Windows__CMedia__CEditing__CMediaOverlay_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("351f6f24-4a92-56d6-a187-faeae748e0c7"))
IIterator<ABI::Windows::Media::Editing::MediaOverlay*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Editing::MediaOverlay*, ABI::Windows::Media::Editing::IMediaOverlay*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Media.Editing.MediaOverlay>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Media::Editing::MediaOverlay*> __FIIterator_1_Windows__CMedia__CEditing__CMediaOverlay_t;
#define __FIIterator_1_Windows__CMedia__CEditing__CMediaOverlay ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CMedia__CEditing__CMediaOverlay_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CMedia__CEditing__CMediaOverlay ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Media::Editing::IMediaOverlay*>
//#define __FIIterator_1_Windows__CMedia__CEditing__CMediaOverlay_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Media::Editing::IMediaOverlay*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CMedia__CEditing__CMediaOverlay_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CMedia__CEditing__CMediaOverlay_USE
#define DEF___FIIterable_1_Windows__CMedia__CEditing__CMediaOverlay_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("efcda247-a1fb-51dc-a776-e3e06695fb36"))
IIterable<ABI::Windows::Media::Editing::MediaOverlay*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Editing::MediaOverlay*, ABI::Windows::Media::Editing::IMediaOverlay*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Media.Editing.MediaOverlay>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Media::Editing::MediaOverlay*> __FIIterable_1_Windows__CMedia__CEditing__CMediaOverlay_t;
#define __FIIterable_1_Windows__CMedia__CEditing__CMediaOverlay ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CMedia__CEditing__CMediaOverlay_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CMedia__CEditing__CMediaOverlay ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Media::Editing::IMediaOverlay*>
//#define __FIIterable_1_Windows__CMedia__CEditing__CMediaOverlay_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Media::Editing::IMediaOverlay*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CMedia__CEditing__CMediaOverlay_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Editing {
                class MediaOverlayLayer;
            } /* Windows */
        } /* Media */
    } /* Editing */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CMedia__CEditing__CMediaOverlayLayer_USE
#define DEF___FIIterator_1_Windows__CMedia__CEditing__CMediaOverlayLayer_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("ca401ed8-63d2-525a-80bb-e494900c4ce6"))
IIterator<ABI::Windows::Media::Editing::MediaOverlayLayer*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Editing::MediaOverlayLayer*, ABI::Windows::Media::Editing::IMediaOverlayLayer*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Media.Editing.MediaOverlayLayer>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Media::Editing::MediaOverlayLayer*> __FIIterator_1_Windows__CMedia__CEditing__CMediaOverlayLayer_t;
#define __FIIterator_1_Windows__CMedia__CEditing__CMediaOverlayLayer ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CMedia__CEditing__CMediaOverlayLayer_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CMedia__CEditing__CMediaOverlayLayer ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Media::Editing::IMediaOverlayLayer*>
//#define __FIIterator_1_Windows__CMedia__CEditing__CMediaOverlayLayer_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Media::Editing::IMediaOverlayLayer*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CMedia__CEditing__CMediaOverlayLayer_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CMedia__CEditing__CMediaOverlayLayer_USE
#define DEF___FIIterable_1_Windows__CMedia__CEditing__CMediaOverlayLayer_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("7d2312d0-f3a2-5091-8a5e-41832e632c08"))
IIterable<ABI::Windows::Media::Editing::MediaOverlayLayer*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Editing::MediaOverlayLayer*, ABI::Windows::Media::Editing::IMediaOverlayLayer*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Media.Editing.MediaOverlayLayer>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Media::Editing::MediaOverlayLayer*> __FIIterable_1_Windows__CMedia__CEditing__CMediaOverlayLayer_t;
#define __FIIterable_1_Windows__CMedia__CEditing__CMediaOverlayLayer ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CMedia__CEditing__CMediaOverlayLayer_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CMedia__CEditing__CMediaOverlayLayer ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Media::Editing::IMediaOverlayLayer*>
//#define __FIIterable_1_Windows__CMedia__CEditing__CMediaOverlayLayer_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Media::Editing::IMediaOverlayLayer*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CMedia__CEditing__CMediaOverlayLayer_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CMedia__CEditing__CBackgroundAudioTrack_USE
#define DEF___FIVectorView_1_Windows__CMedia__CEditing__CBackgroundAudioTrack_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("7fe52e32-867c-52a3-b3b7-d4dd4d573794"))
IVectorView<ABI::Windows::Media::Editing::BackgroundAudioTrack*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Editing::BackgroundAudioTrack*, ABI::Windows::Media::Editing::IBackgroundAudioTrack*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Media.Editing.BackgroundAudioTrack>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Media::Editing::BackgroundAudioTrack*> __FIVectorView_1_Windows__CMedia__CEditing__CBackgroundAudioTrack_t;
#define __FIVectorView_1_Windows__CMedia__CEditing__CBackgroundAudioTrack ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CMedia__CEditing__CBackgroundAudioTrack_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CMedia__CEditing__CBackgroundAudioTrack ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Media::Editing::IBackgroundAudioTrack*>
//#define __FIVectorView_1_Windows__CMedia__CEditing__CBackgroundAudioTrack_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Media::Editing::IBackgroundAudioTrack*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CMedia__CEditing__CBackgroundAudioTrack_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CMedia__CEditing__CEmbeddedAudioTrack_USE
#define DEF___FIVectorView_1_Windows__CMedia__CEditing__CEmbeddedAudioTrack_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("63d85bd5-4365-5e56-9e40-e7cd3051aebf"))
IVectorView<ABI::Windows::Media::Editing::EmbeddedAudioTrack*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Editing::EmbeddedAudioTrack*, ABI::Windows::Media::Editing::IEmbeddedAudioTrack*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Media.Editing.EmbeddedAudioTrack>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Media::Editing::EmbeddedAudioTrack*> __FIVectorView_1_Windows__CMedia__CEditing__CEmbeddedAudioTrack_t;
#define __FIVectorView_1_Windows__CMedia__CEditing__CEmbeddedAudioTrack ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CMedia__CEditing__CEmbeddedAudioTrack_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CMedia__CEditing__CEmbeddedAudioTrack ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Media::Editing::IEmbeddedAudioTrack*>
//#define __FIVectorView_1_Windows__CMedia__CEditing__CEmbeddedAudioTrack_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Media::Editing::IEmbeddedAudioTrack*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CMedia__CEditing__CEmbeddedAudioTrack_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CMedia__CEditing__CMediaClip_USE
#define DEF___FIVectorView_1_Windows__CMedia__CEditing__CMediaClip_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("eabf18a6-f438-53b0-be3c-af21e67bc8c7"))
IVectorView<ABI::Windows::Media::Editing::MediaClip*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Editing::MediaClip*, ABI::Windows::Media::Editing::IMediaClip*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Media.Editing.MediaClip>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Media::Editing::MediaClip*> __FIVectorView_1_Windows__CMedia__CEditing__CMediaClip_t;
#define __FIVectorView_1_Windows__CMedia__CEditing__CMediaClip ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CMedia__CEditing__CMediaClip_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CMedia__CEditing__CMediaClip ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Media::Editing::IMediaClip*>
//#define __FIVectorView_1_Windows__CMedia__CEditing__CMediaClip_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Media::Editing::IMediaClip*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CMedia__CEditing__CMediaClip_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CMedia__CEditing__CMediaOverlay_USE
#define DEF___FIVectorView_1_Windows__CMedia__CEditing__CMediaOverlay_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("6bba8a56-2f18-5a68-83cd-9aa9d7f8f757"))
IVectorView<ABI::Windows::Media::Editing::MediaOverlay*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Editing::MediaOverlay*, ABI::Windows::Media::Editing::IMediaOverlay*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Media.Editing.MediaOverlay>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Media::Editing::MediaOverlay*> __FIVectorView_1_Windows__CMedia__CEditing__CMediaOverlay_t;
#define __FIVectorView_1_Windows__CMedia__CEditing__CMediaOverlay ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CMedia__CEditing__CMediaOverlay_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CMedia__CEditing__CMediaOverlay ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Media::Editing::IMediaOverlay*>
//#define __FIVectorView_1_Windows__CMedia__CEditing__CMediaOverlay_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Media::Editing::IMediaOverlay*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CMedia__CEditing__CMediaOverlay_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CMedia__CEditing__CMediaOverlayLayer_USE
#define DEF___FIVectorView_1_Windows__CMedia__CEditing__CMediaOverlayLayer_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("8bcc3ff4-6139-52c1-9669-53da5033185e"))
IVectorView<ABI::Windows::Media::Editing::MediaOverlayLayer*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Editing::MediaOverlayLayer*, ABI::Windows::Media::Editing::IMediaOverlayLayer*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Media.Editing.MediaOverlayLayer>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Media::Editing::MediaOverlayLayer*> __FIVectorView_1_Windows__CMedia__CEditing__CMediaOverlayLayer_t;
#define __FIVectorView_1_Windows__CMedia__CEditing__CMediaOverlayLayer ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CMedia__CEditing__CMediaOverlayLayer_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CMedia__CEditing__CMediaOverlayLayer ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Media::Editing::IMediaOverlayLayer*>
//#define __FIVectorView_1_Windows__CMedia__CEditing__CMediaOverlayLayer_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Media::Editing::IMediaOverlayLayer*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CMedia__CEditing__CMediaOverlayLayer_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVector_1_Windows__CMedia__CEditing__CBackgroundAudioTrack_USE
#define DEF___FIVector_1_Windows__CMedia__CEditing__CBackgroundAudioTrack_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("56d62145-6978-5eba-83c9-fc4ad6d443bf"))
IVector<ABI::Windows::Media::Editing::BackgroundAudioTrack*> : IVector_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Editing::BackgroundAudioTrack*, ABI::Windows::Media::Editing::IBackgroundAudioTrack*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVector`1<Windows.Media.Editing.BackgroundAudioTrack>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVector<ABI::Windows::Media::Editing::BackgroundAudioTrack*> __FIVector_1_Windows__CMedia__CEditing__CBackgroundAudioTrack_t;
#define __FIVector_1_Windows__CMedia__CEditing__CBackgroundAudioTrack ABI::Windows::Foundation::Collections::__FIVector_1_Windows__CMedia__CEditing__CBackgroundAudioTrack_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVector_1_Windows__CMedia__CEditing__CBackgroundAudioTrack ABI::Windows::Foundation::Collections::IVector<ABI::Windows::Media::Editing::IBackgroundAudioTrack*>
//#define __FIVector_1_Windows__CMedia__CEditing__CBackgroundAudioTrack_t ABI::Windows::Foundation::Collections::IVector<ABI::Windows::Media::Editing::IBackgroundAudioTrack*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVector_1_Windows__CMedia__CEditing__CBackgroundAudioTrack_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVector_1_Windows__CMedia__CEditing__CMediaClip_USE
#define DEF___FIVector_1_Windows__CMedia__CEditing__CMediaClip_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("e805688e-3508-57f3-bf95-617f2d7a6f1a"))
IVector<ABI::Windows::Media::Editing::MediaClip*> : IVector_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Editing::MediaClip*, ABI::Windows::Media::Editing::IMediaClip*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVector`1<Windows.Media.Editing.MediaClip>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVector<ABI::Windows::Media::Editing::MediaClip*> __FIVector_1_Windows__CMedia__CEditing__CMediaClip_t;
#define __FIVector_1_Windows__CMedia__CEditing__CMediaClip ABI::Windows::Foundation::Collections::__FIVector_1_Windows__CMedia__CEditing__CMediaClip_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVector_1_Windows__CMedia__CEditing__CMediaClip ABI::Windows::Foundation::Collections::IVector<ABI::Windows::Media::Editing::IMediaClip*>
//#define __FIVector_1_Windows__CMedia__CEditing__CMediaClip_t ABI::Windows::Foundation::Collections::IVector<ABI::Windows::Media::Editing::IMediaClip*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVector_1_Windows__CMedia__CEditing__CMediaClip_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVector_1_Windows__CMedia__CEditing__CMediaOverlay_USE
#define DEF___FIVector_1_Windows__CMedia__CEditing__CMediaOverlay_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("5b913ec8-ed52-5b2c-a710-52c6e7ab3cb2"))
IVector<ABI::Windows::Media::Editing::MediaOverlay*> : IVector_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Editing::MediaOverlay*, ABI::Windows::Media::Editing::IMediaOverlay*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVector`1<Windows.Media.Editing.MediaOverlay>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVector<ABI::Windows::Media::Editing::MediaOverlay*> __FIVector_1_Windows__CMedia__CEditing__CMediaOverlay_t;
#define __FIVector_1_Windows__CMedia__CEditing__CMediaOverlay ABI::Windows::Foundation::Collections::__FIVector_1_Windows__CMedia__CEditing__CMediaOverlay_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVector_1_Windows__CMedia__CEditing__CMediaOverlay ABI::Windows::Foundation::Collections::IVector<ABI::Windows::Media::Editing::IMediaOverlay*>
//#define __FIVector_1_Windows__CMedia__CEditing__CMediaOverlay_t ABI::Windows::Foundation::Collections::IVector<ABI::Windows::Media::Editing::IMediaOverlay*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVector_1_Windows__CMedia__CEditing__CMediaOverlay_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVector_1_Windows__CMedia__CEditing__CMediaOverlayLayer_USE
#define DEF___FIVector_1_Windows__CMedia__CEditing__CMediaOverlayLayer_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("6564eb2c-2210-5dfc-a84c-266c4349c2c6"))
IVector<ABI::Windows::Media::Editing::MediaOverlayLayer*> : IVector_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Editing::MediaOverlayLayer*, ABI::Windows::Media::Editing::IMediaOverlayLayer*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVector`1<Windows.Media.Editing.MediaOverlayLayer>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVector<ABI::Windows::Media::Editing::MediaOverlayLayer*> __FIVector_1_Windows__CMedia__CEditing__CMediaOverlayLayer_t;
#define __FIVector_1_Windows__CMedia__CEditing__CMediaOverlayLayer ABI::Windows::Foundation::Collections::__FIVector_1_Windows__CMedia__CEditing__CMediaOverlayLayer_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVector_1_Windows__CMedia__CEditing__CMediaOverlayLayer ABI::Windows::Foundation::Collections::IVector<ABI::Windows::Media::Editing::IMediaOverlayLayer*>
//#define __FIVector_1_Windows__CMedia__CEditing__CMediaOverlayLayer_t ABI::Windows::Foundation::Collections::IVector<ABI::Windows::Media::Editing::IMediaOverlayLayer*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVector_1_Windows__CMedia__CEditing__CMediaOverlayLayer_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CEditing__CBackgroundAudioTrack_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CEditing__CBackgroundAudioTrack_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("b8830bc7-188b-5c25-a3bb-959052bcb740"))
IAsyncOperationCompletedHandler<ABI::Windows::Media::Editing::BackgroundAudioTrack*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Editing::BackgroundAudioTrack*, ABI::Windows::Media::Editing::IBackgroundAudioTrack*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Media.Editing.BackgroundAudioTrack>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::Media::Editing::BackgroundAudioTrack*> __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CEditing__CBackgroundAudioTrack_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CEditing__CBackgroundAudioTrack ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CMedia__CEditing__CBackgroundAudioTrack_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CEditing__CBackgroundAudioTrack ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Media::Editing::IBackgroundAudioTrack*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CEditing__CBackgroundAudioTrack_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Media::Editing::IBackgroundAudioTrack*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CEditing__CBackgroundAudioTrack_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1_Windows__CMedia__CEditing__CBackgroundAudioTrack_USE
#define DEF___FIAsyncOperation_1_Windows__CMedia__CEditing__CBackgroundAudioTrack_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("493dc898-6076-55f5-ab84-ccf973ac0397"))
IAsyncOperation<ABI::Windows::Media::Editing::BackgroundAudioTrack*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Editing::BackgroundAudioTrack*, ABI::Windows::Media::Editing::IBackgroundAudioTrack*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Media.Editing.BackgroundAudioTrack>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::Media::Editing::BackgroundAudioTrack*> __FIAsyncOperation_1_Windows__CMedia__CEditing__CBackgroundAudioTrack_t;
#define __FIAsyncOperation_1_Windows__CMedia__CEditing__CBackgroundAudioTrack ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CMedia__CEditing__CBackgroundAudioTrack_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CMedia__CEditing__CBackgroundAudioTrack ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Media::Editing::IBackgroundAudioTrack*>
//#define __FIAsyncOperation_1_Windows__CMedia__CEditing__CBackgroundAudioTrack_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Media::Editing::IBackgroundAudioTrack*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CMedia__CEditing__CBackgroundAudioTrack_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CEditing__CMediaClip_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CEditing__CMediaClip_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("60cde3bc-119f-50a8-9ccb-9ea57ea96bfd"))
IAsyncOperationCompletedHandler<ABI::Windows::Media::Editing::MediaClip*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Editing::MediaClip*, ABI::Windows::Media::Editing::IMediaClip*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Media.Editing.MediaClip>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::Media::Editing::MediaClip*> __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CEditing__CMediaClip_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CEditing__CMediaClip ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CMedia__CEditing__CMediaClip_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CEditing__CMediaClip ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Media::Editing::IMediaClip*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CEditing__CMediaClip_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Media::Editing::IMediaClip*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CEditing__CMediaClip_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1_Windows__CMedia__CEditing__CMediaClip_USE
#define DEF___FIAsyncOperation_1_Windows__CMedia__CEditing__CMediaClip_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("b5e699dd-b6f1-51c0-b752-e02fa0068d79"))
IAsyncOperation<ABI::Windows::Media::Editing::MediaClip*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Editing::MediaClip*, ABI::Windows::Media::Editing::IMediaClip*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Media.Editing.MediaClip>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::Media::Editing::MediaClip*> __FIAsyncOperation_1_Windows__CMedia__CEditing__CMediaClip_t;
#define __FIAsyncOperation_1_Windows__CMedia__CEditing__CMediaClip ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CMedia__CEditing__CMediaClip_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CMedia__CEditing__CMediaClip ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Media::Editing::IMediaClip*>
//#define __FIAsyncOperation_1_Windows__CMedia__CEditing__CMediaClip_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Media::Editing::IMediaClip*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CMedia__CEditing__CMediaClip_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Editing {
                class MediaComposition;
            } /* Windows */
        } /* Media */
    } /* Editing */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CEditing__CMediaComposition_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CEditing__CMediaComposition_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("edd253f8-4ebd-56e5-9592-3c09375ebdc4"))
IAsyncOperationCompletedHandler<ABI::Windows::Media::Editing::MediaComposition*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Editing::MediaComposition*, ABI::Windows::Media::Editing::IMediaComposition*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Media.Editing.MediaComposition>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::Media::Editing::MediaComposition*> __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CEditing__CMediaComposition_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CEditing__CMediaComposition ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CMedia__CEditing__CMediaComposition_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CEditing__CMediaComposition ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Media::Editing::IMediaComposition*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CEditing__CMediaComposition_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Media::Editing::IMediaComposition*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CEditing__CMediaComposition_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1_Windows__CMedia__CEditing__CMediaComposition_USE
#define DEF___FIAsyncOperation_1_Windows__CMedia__CEditing__CMediaComposition_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("e170e898-d11f-5054-ab13-1080a4807636"))
IAsyncOperation<ABI::Windows::Media::Editing::MediaComposition*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Editing::MediaComposition*, ABI::Windows::Media::Editing::IMediaComposition*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Media.Editing.MediaComposition>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::Media::Editing::MediaComposition*> __FIAsyncOperation_1_Windows__CMedia__CEditing__CMediaComposition_t;
#define __FIAsyncOperation_1_Windows__CMedia__CEditing__CMediaComposition ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CMedia__CEditing__CMediaComposition_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CMedia__CEditing__CMediaComposition ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Media::Editing::IMediaComposition*>
//#define __FIAsyncOperation_1_Windows__CMedia__CEditing__CMediaComposition_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Media::Editing::IMediaComposition*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CMedia__CEditing__CMediaComposition_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#ifndef DEF___FIKeyValuePair_2_HSTRING_HSTRING_USE
#define DEF___FIKeyValuePair_2_HSTRING_HSTRING_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("60310303-49c5-52e6-abc6-a9b36eccc716"))
IKeyValuePair<HSTRING,HSTRING> : IKeyValuePair_impl<HSTRING,HSTRING> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IKeyValuePair`2<String, String>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IKeyValuePair<HSTRING,HSTRING> __FIKeyValuePair_2_HSTRING_HSTRING_t;
#define __FIKeyValuePair_2_HSTRING_HSTRING ABI::Windows::Foundation::Collections::__FIKeyValuePair_2_HSTRING_HSTRING_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIKeyValuePair_2_HSTRING_HSTRING ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,HSTRING>
//#define __FIKeyValuePair_2_HSTRING_HSTRING_t ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,HSTRING>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIKeyValuePair_2_HSTRING_HSTRING_USE */





#ifndef DEF___FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_USE
#define DEF___FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("05eb86f1-7140-5517-b88d-cbaebe57e6b1"))
IIterator<__FIKeyValuePair_2_HSTRING_HSTRING*> : IIterator_impl<__FIKeyValuePair_2_HSTRING_HSTRING*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Foundation.Collections.IKeyValuePair`2<String, String>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<__FIKeyValuePair_2_HSTRING_HSTRING*> __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_t;
#define __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING ABI::Windows::Foundation::Collections::__FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,HSTRING>*>
//#define __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,HSTRING>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_USE */





#ifndef DEF___FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_USE
#define DEF___FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("e9bdaaf0-cbf6-5c72-be90-29cbf3a1319b"))
IIterable<__FIKeyValuePair_2_HSTRING_HSTRING*> : IIterable_impl<__FIKeyValuePair_2_HSTRING_HSTRING*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Foundation.Collections.IKeyValuePair`2<String, String>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<__FIKeyValuePair_2_HSTRING_HSTRING*> __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_t;
#define __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING ABI::Windows::Foundation::Collections::__FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,HSTRING>*>
//#define __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,HSTRING>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_USE */




#ifndef DEF___FIMapView_2_HSTRING_HSTRING_USE
#define DEF___FIMapView_2_HSTRING_HSTRING_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("ac7f26f2-feb7-5b2a-8ac4-345bc62caede"))
IMapView<HSTRING,HSTRING> : IMapView_impl<HSTRING,HSTRING> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IMapView`2<String, String>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IMapView<HSTRING,HSTRING> __FIMapView_2_HSTRING_HSTRING_t;
#define __FIMapView_2_HSTRING_HSTRING ABI::Windows::Foundation::Collections::__FIMapView_2_HSTRING_HSTRING_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIMapView_2_HSTRING_HSTRING ABI::Windows::Foundation::Collections::IMapView<HSTRING,HSTRING>
//#define __FIMapView_2_HSTRING_HSTRING_t ABI::Windows::Foundation::Collections::IMapView<HSTRING,HSTRING>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIMapView_2_HSTRING_HSTRING_USE */




#ifndef DEF___FIMap_2_HSTRING_HSTRING_USE
#define DEF___FIMap_2_HSTRING_HSTRING_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("f6d1f700-49c2-52ae-8154-826f9908773c"))
IMap<HSTRING,HSTRING> : IMap_impl<HSTRING,HSTRING> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IMap`2<String, String>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IMap<HSTRING,HSTRING> __FIMap_2_HSTRING_HSTRING_t;
#define __FIMap_2_HSTRING_HSTRING ABI::Windows::Foundation::Collections::__FIMap_2_HSTRING_HSTRING_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIMap_2_HSTRING_HSTRING ABI::Windows::Foundation::Collections::IMap<HSTRING,HSTRING>
//#define __FIMap_2_HSTRING_HSTRING_t ABI::Windows::Foundation::Collections::IMap<HSTRING,HSTRING>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIMap_2_HSTRING_HSTRING_USE */



#ifndef ____x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinition_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinition_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Effects {
                interface IAudioEffectDefinition;
            } /* Windows */
        } /* Media */
    } /* Effects */} /* ABI */
#define __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinition ABI::Windows::Media::Effects::IAudioEffectDefinition

#endif // ____x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinition_FWD_DEFINED__


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CMedia__CEffects__CIAudioEffectDefinition_USE
#define DEF___FIIterator_1_Windows__CMedia__CEffects__CIAudioEffectDefinition_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("ec0f39fc-6959-5423-9e1a-f7cb8e845ca1"))
IIterator<ABI::Windows::Media::Effects::IAudioEffectDefinition*> : IIterator_impl<ABI::Windows::Media::Effects::IAudioEffectDefinition*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Media.Effects.IAudioEffectDefinition>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Media::Effects::IAudioEffectDefinition*> __FIIterator_1_Windows__CMedia__CEffects__CIAudioEffectDefinition_t;
#define __FIIterator_1_Windows__CMedia__CEffects__CIAudioEffectDefinition ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CMedia__CEffects__CIAudioEffectDefinition_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CMedia__CEffects__CIAudioEffectDefinition ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Media::Effects::IAudioEffectDefinition*>
//#define __FIIterator_1_Windows__CMedia__CEffects__CIAudioEffectDefinition_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Media::Effects::IAudioEffectDefinition*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CMedia__CEffects__CIAudioEffectDefinition_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CMedia__CEffects__CIAudioEffectDefinition_USE
#define DEF___FIIterable_1_Windows__CMedia__CEffects__CIAudioEffectDefinition_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("607a20bf-32b4-5b8e-a793-3024f8d3582a"))
IIterable<ABI::Windows::Media::Effects::IAudioEffectDefinition*> : IIterable_impl<ABI::Windows::Media::Effects::IAudioEffectDefinition*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Media.Effects.IAudioEffectDefinition>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Media::Effects::IAudioEffectDefinition*> __FIIterable_1_Windows__CMedia__CEffects__CIAudioEffectDefinition_t;
#define __FIIterable_1_Windows__CMedia__CEffects__CIAudioEffectDefinition ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CMedia__CEffects__CIAudioEffectDefinition_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CMedia__CEffects__CIAudioEffectDefinition ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Media::Effects::IAudioEffectDefinition*>
//#define __FIIterable_1_Windows__CMedia__CEffects__CIAudioEffectDefinition_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Media::Effects::IAudioEffectDefinition*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CMedia__CEffects__CIAudioEffectDefinition_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CMedia__CEffects__CIAudioEffectDefinition_USE
#define DEF___FIVectorView_1_Windows__CMedia__CEffects__CIAudioEffectDefinition_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("de9e6a7f-d28e-5ef1-916a-efa880b489d1"))
IVectorView<ABI::Windows::Media::Effects::IAudioEffectDefinition*> : IVectorView_impl<ABI::Windows::Media::Effects::IAudioEffectDefinition*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Media.Effects.IAudioEffectDefinition>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Media::Effects::IAudioEffectDefinition*> __FIVectorView_1_Windows__CMedia__CEffects__CIAudioEffectDefinition_t;
#define __FIVectorView_1_Windows__CMedia__CEffects__CIAudioEffectDefinition ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CMedia__CEffects__CIAudioEffectDefinition_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CMedia__CEffects__CIAudioEffectDefinition ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Media::Effects::IAudioEffectDefinition*>
//#define __FIVectorView_1_Windows__CMedia__CEffects__CIAudioEffectDefinition_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Media::Effects::IAudioEffectDefinition*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CMedia__CEffects__CIAudioEffectDefinition_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinition_USE
#define DEF___FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinition_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("2828a982-d849-5fc9-84ce-f9a4b3b4d341"))
IVector<ABI::Windows::Media::Effects::IAudioEffectDefinition*> : IVector_impl<ABI::Windows::Media::Effects::IAudioEffectDefinition*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVector`1<Windows.Media.Effects.IAudioEffectDefinition>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVector<ABI::Windows::Media::Effects::IAudioEffectDefinition*> __FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinition_t;
#define __FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinition ABI::Windows::Foundation::Collections::__FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinition_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinition ABI::Windows::Foundation::Collections::IVector<ABI::Windows::Media::Effects::IAudioEffectDefinition*>
//#define __FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinition_t ABI::Windows::Foundation::Collections::IVector<ABI::Windows::Media::Effects::IAudioEffectDefinition*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinition_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef ____x_ABI_CWindows_CMedia_CEffects_CIVideoEffectDefinition_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CEffects_CIVideoEffectDefinition_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Effects {
                interface IVideoEffectDefinition;
            } /* Windows */
        } /* Media */
    } /* Effects */} /* ABI */
#define __x_ABI_CWindows_CMedia_CEffects_CIVideoEffectDefinition ABI::Windows::Media::Effects::IVideoEffectDefinition

#endif // ____x_ABI_CWindows_CMedia_CEffects_CIVideoEffectDefinition_FWD_DEFINED__


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CMedia__CEffects__CIVideoEffectDefinition_USE
#define DEF___FIIterator_1_Windows__CMedia__CEffects__CIVideoEffectDefinition_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("9d82379d-4958-558e-a155-3a809bb16c04"))
IIterator<ABI::Windows::Media::Effects::IVideoEffectDefinition*> : IIterator_impl<ABI::Windows::Media::Effects::IVideoEffectDefinition*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Media.Effects.IVideoEffectDefinition>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Media::Effects::IVideoEffectDefinition*> __FIIterator_1_Windows__CMedia__CEffects__CIVideoEffectDefinition_t;
#define __FIIterator_1_Windows__CMedia__CEffects__CIVideoEffectDefinition ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CMedia__CEffects__CIVideoEffectDefinition_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CMedia__CEffects__CIVideoEffectDefinition ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Media::Effects::IVideoEffectDefinition*>
//#define __FIIterator_1_Windows__CMedia__CEffects__CIVideoEffectDefinition_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Media::Effects::IVideoEffectDefinition*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CMedia__CEffects__CIVideoEffectDefinition_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CMedia__CEffects__CIVideoEffectDefinition_USE
#define DEF___FIIterable_1_Windows__CMedia__CEffects__CIVideoEffectDefinition_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("eb567f6f-b014-513d-99cd-f16c226c3c41"))
IIterable<ABI::Windows::Media::Effects::IVideoEffectDefinition*> : IIterable_impl<ABI::Windows::Media::Effects::IVideoEffectDefinition*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Media.Effects.IVideoEffectDefinition>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Media::Effects::IVideoEffectDefinition*> __FIIterable_1_Windows__CMedia__CEffects__CIVideoEffectDefinition_t;
#define __FIIterable_1_Windows__CMedia__CEffects__CIVideoEffectDefinition ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CMedia__CEffects__CIVideoEffectDefinition_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CMedia__CEffects__CIVideoEffectDefinition ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Media::Effects::IVideoEffectDefinition*>
//#define __FIIterable_1_Windows__CMedia__CEffects__CIVideoEffectDefinition_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Media::Effects::IVideoEffectDefinition*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CMedia__CEffects__CIVideoEffectDefinition_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CMedia__CEffects__CIVideoEffectDefinition_USE
#define DEF___FIVectorView_1_Windows__CMedia__CEffects__CIVideoEffectDefinition_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("a44b4f8e-7ca3-53b1-b68b-098baf45c73e"))
IVectorView<ABI::Windows::Media::Effects::IVideoEffectDefinition*> : IVectorView_impl<ABI::Windows::Media::Effects::IVideoEffectDefinition*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Media.Effects.IVideoEffectDefinition>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Media::Effects::IVideoEffectDefinition*> __FIVectorView_1_Windows__CMedia__CEffects__CIVideoEffectDefinition_t;
#define __FIVectorView_1_Windows__CMedia__CEffects__CIVideoEffectDefinition ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CMedia__CEffects__CIVideoEffectDefinition_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CMedia__CEffects__CIVideoEffectDefinition ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Media::Effects::IVideoEffectDefinition*>
//#define __FIVectorView_1_Windows__CMedia__CEffects__CIVideoEffectDefinition_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Media::Effects::IVideoEffectDefinition*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CMedia__CEffects__CIVideoEffectDefinition_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVector_1_Windows__CMedia__CEffects__CIVideoEffectDefinition_USE
#define DEF___FIVector_1_Windows__CMedia__CEffects__CIVideoEffectDefinition_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("7ca161ed-e201-5615-aacc-25348564f0b3"))
IVector<ABI::Windows::Media::Effects::IVideoEffectDefinition*> : IVector_impl<ABI::Windows::Media::Effects::IVideoEffectDefinition*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVector`1<Windows.Media.Effects.IVideoEffectDefinition>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVector<ABI::Windows::Media::Effects::IVideoEffectDefinition*> __FIVector_1_Windows__CMedia__CEffects__CIVideoEffectDefinition_t;
#define __FIVector_1_Windows__CMedia__CEffects__CIVideoEffectDefinition ABI::Windows::Foundation::Collections::__FIVector_1_Windows__CMedia__CEffects__CIVideoEffectDefinition_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVector_1_Windows__CMedia__CEffects__CIVideoEffectDefinition ABI::Windows::Foundation::Collections::IVector<ABI::Windows::Media::Effects::IVideoEffectDefinition*>
//#define __FIVector_1_Windows__CMedia__CEffects__CIVideoEffectDefinition_t ABI::Windows::Foundation::Collections::IVector<ABI::Windows::Media::Effects::IVideoEffectDefinition*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVector_1_Windows__CMedia__CEffects__CIVideoEffectDefinition_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

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
        namespace Foundation {
            struct TimeSpan;
            
        } /* Windows */
    } /* Foundation */} /* ABI */


#ifndef DEF___FIIterator_1_Windows__CFoundation__CTimeSpan_USE
#define DEF___FIIterator_1_Windows__CFoundation__CTimeSpan_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("67e9eadb-324b-5661-a405-ded8445b1eea"))
IIterator<struct ABI::Windows::Foundation::TimeSpan> : IIterator_impl<struct ABI::Windows::Foundation::TimeSpan> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Foundation.TimeSpan>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<struct ABI::Windows::Foundation::TimeSpan> __FIIterator_1_Windows__CFoundation__CTimeSpan_t;
#define __FIIterator_1_Windows__CFoundation__CTimeSpan ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CFoundation__CTimeSpan_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CFoundation__CTimeSpan ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Foundation::TimeSpan>
//#define __FIIterator_1_Windows__CFoundation__CTimeSpan_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Foundation::TimeSpan>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CFoundation__CTimeSpan_USE */





#ifndef DEF___FIIterable_1_Windows__CFoundation__CTimeSpan_USE
#define DEF___FIIterable_1_Windows__CFoundation__CTimeSpan_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("e9f78726-829a-5f67-8d19-95ef154b7742"))
IIterable<struct ABI::Windows::Foundation::TimeSpan> : IIterable_impl<struct ABI::Windows::Foundation::TimeSpan> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Foundation.TimeSpan>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<struct ABI::Windows::Foundation::TimeSpan> __FIIterable_1_Windows__CFoundation__CTimeSpan_t;
#define __FIIterable_1_Windows__CFoundation__CTimeSpan ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CFoundation__CTimeSpan_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CFoundation__CTimeSpan ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Foundation::TimeSpan>
//#define __FIIterable_1_Windows__CFoundation__CTimeSpan_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Foundation::TimeSpan>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CFoundation__CTimeSpan_USE */




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
        namespace Media {
            namespace Transcoding {
                enum TranscodeFailureReason : int;
            } /* Windows */
        } /* Media */
    } /* Transcoding */} /* ABI */


#ifndef DEF___FIAsyncOperationProgressHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double_USE
#define DEF___FIAsyncOperationProgressHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("009c6245-0e59-53b0-9fd2-d250e45a00a3"))
IAsyncOperationProgressHandler<enum ABI::Windows::Media::Transcoding::TranscodeFailureReason,double> : IAsyncOperationProgressHandler_impl<enum ABI::Windows::Media::Transcoding::TranscodeFailureReason,double> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationProgressHandler`2<Windows.Media.Transcoding.TranscodeFailureReason, Double>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationProgressHandler<enum ABI::Windows::Media::Transcoding::TranscodeFailureReason,double> __FIAsyncOperationProgressHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double_t;
#define __FIAsyncOperationProgressHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double ABI::Windows::Foundation::__FIAsyncOperationProgressHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationProgressHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double ABI::Windows::Foundation::IAsyncOperationProgressHandler<ABI::Windows::Media::Transcoding::TranscodeFailureReason,DOUBLE>
//#define __FIAsyncOperationProgressHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double_t ABI::Windows::Foundation::IAsyncOperationProgressHandler<ABI::Windows::Media::Transcoding::TranscodeFailureReason,DOUBLE>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationProgressHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double_USE */





#ifndef DEF___FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double_USE
#define DEF___FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("080f1890-4fca-5165-a989-4b07da8e0b53"))
IAsyncOperationWithProgressCompletedHandler<enum ABI::Windows::Media::Transcoding::TranscodeFailureReason,double> : IAsyncOperationWithProgressCompletedHandler_impl<enum ABI::Windows::Media::Transcoding::TranscodeFailureReason,double> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<Windows.Media.Transcoding.TranscodeFailureReason, Double>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationWithProgressCompletedHandler<enum ABI::Windows::Media::Transcoding::TranscodeFailureReason,double> __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double_t;
#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double ABI::Windows::Foundation::__FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double ABI::Windows::Foundation::IAsyncOperationWithProgressCompletedHandler<ABI::Windows::Media::Transcoding::TranscodeFailureReason,DOUBLE>
//#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double_t ABI::Windows::Foundation::IAsyncOperationWithProgressCompletedHandler<ABI::Windows::Media::Transcoding::TranscodeFailureReason,DOUBLE>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double_USE */





#ifndef DEF___FIAsyncOperationWithProgress_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double_USE
#define DEF___FIAsyncOperationWithProgress_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("272eec20-4b64-5d53-a644-f9917b3d19d8"))
IAsyncOperationWithProgress<enum ABI::Windows::Media::Transcoding::TranscodeFailureReason,double> : IAsyncOperationWithProgress_impl<enum ABI::Windows::Media::Transcoding::TranscodeFailureReason,double> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperationWithProgress`2<Windows.Media.Transcoding.TranscodeFailureReason, Double>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationWithProgress<enum ABI::Windows::Media::Transcoding::TranscodeFailureReason,double> __FIAsyncOperationWithProgress_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double_t;
#define __FIAsyncOperationWithProgress_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double ABI::Windows::Foundation::__FIAsyncOperationWithProgress_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationWithProgress_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double ABI::Windows::Foundation::IAsyncOperationWithProgress<ABI::Windows::Media::Transcoding::TranscodeFailureReason,DOUBLE>
//#define __FIAsyncOperationWithProgress_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double_t ABI::Windows::Foundation::IAsyncOperationWithProgress<ABI::Windows::Media::Transcoding::TranscodeFailureReason,DOUBLE>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationWithProgress_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double_USE */





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
        namespace Media {
            namespace Core {
                class MediaStreamSource;
            } /* Windows */
        } /* Media */
    } /* Core */} /* ABI */

#ifndef ____x_ABI_CWindows_CMedia_CCore_CIMediaStreamSource_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CCore_CIMediaStreamSource_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Core {
                interface IMediaStreamSource;
            } /* Windows */
        } /* Media */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSource ABI::Windows::Media::Core::IMediaStreamSource

#endif // ____x_ABI_CWindows_CMedia_CCore_CIMediaStreamSource_FWD_DEFINED__






#ifndef ____x_ABI_CWindows_CMedia_CEffects_CIVideoCompositorDefinition_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CEffects_CIVideoCompositorDefinition_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Effects {
                interface IVideoCompositorDefinition;
            } /* Windows */
        } /* Media */
    } /* Effects */} /* ABI */
#define __x_ABI_CWindows_CMedia_CEffects_CIVideoCompositorDefinition ABI::Windows::Media::Effects::IVideoCompositorDefinition

#endif // ____x_ABI_CWindows_CMedia_CEffects_CIVideoCompositorDefinition_FWD_DEFINED__






namespace ABI {
    namespace Windows {
        namespace Media {
            namespace MediaProperties {
                class AudioEncodingProperties;
            } /* Windows */
        } /* Media */
    } /* MediaProperties */} /* ABI */

#ifndef ____x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace MediaProperties {
                interface IAudioEncodingProperties;
            } /* Windows */
        } /* Media */
    } /* MediaProperties */} /* ABI */
#define __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties ABI::Windows::Media::MediaProperties::IAudioEncodingProperties

#endif // ____x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties_FWD_DEFINED__


namespace ABI {
    namespace Windows {
        namespace Media {
            namespace MediaProperties {
                class MediaEncodingProfile;
            } /* Windows */
        } /* Media */
    } /* MediaProperties */} /* ABI */

#ifndef ____x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace MediaProperties {
                interface IMediaEncodingProfile;
            } /* Windows */
        } /* Media */
    } /* MediaProperties */} /* ABI */
#define __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile ABI::Windows::Media::MediaProperties::IMediaEncodingProfile

#endif // ____x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile_FWD_DEFINED__


namespace ABI {
    namespace Windows {
        namespace Media {
            namespace MediaProperties {
                class VideoEncodingProperties;
            } /* Windows */
        } /* Media */
    } /* MediaProperties */} /* ABI */

#ifndef ____x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace MediaProperties {
                interface IVideoEncodingProperties;
            } /* Windows */
        } /* Media */
    } /* MediaProperties */} /* ABI */
#define __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties ABI::Windows::Media::MediaProperties::IVideoEncodingProperties

#endif // ____x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties_FWD_DEFINED__





namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Transcoding {
                
                typedef enum TranscodeFailureReason : int TranscodeFailureReason;
                
            } /* Windows */
        } /* Media */
    } /* Transcoding */} /* ABI */




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


namespace ABI {
    namespace Windows {
        namespace Storage {
            class StorageFile;
        } /* Windows */
    } /* Storage */} /* ABI */




namespace ABI {
    namespace Windows {
        namespace UI {
            
            typedef struct Color Color;
            
        } /* Windows */
    } /* UI */} /* ABI */



namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Editing {
                
                typedef enum MediaTrimmingPreference : int MediaTrimmingPreference;
                
            } /* Windows */
        } /* Media */
    } /* Editing */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Editing {
                
                typedef enum VideoFramePrecision : int VideoFramePrecision;
                
            } /* Windows */
        } /* Media */
    } /* Editing */} /* ABI */




























/*
 *
 * Struct Windows.Media.Editing.MediaTrimmingPreference
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Editing {
                /* [v1_enum, contract] */
                enum MediaTrimmingPreference : int
                {
                    MediaTrimmingPreference_Fast = 0,
                    MediaTrimmingPreference_Precise = 1,
                };
                
            } /* Windows */
        } /* Media */
    } /* Editing */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Media.Editing.VideoFramePrecision
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Editing {
                /* [v1_enum, contract] */
                enum VideoFramePrecision : int
                {
                    VideoFramePrecision_NearestFrame = 0,
                    VideoFramePrecision_NearestKeyFrame = 1,
                };
                
            } /* Windows */
        } /* Media */
    } /* Editing */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Editing.IBackgroundAudioTrack
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Editing.BackgroundAudioTrack
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrack_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrack_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Editing_IBackgroundAudioTrack[] = L"Windows.Media.Editing.IBackgroundAudioTrack";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Editing {
                /* [object, uuid("4B91B3BD-9E21-4266-A9C2-67DD011A2357"), exclusiveto, contract] */
                MIDL_INTERFACE("4B91B3BD-9E21-4266-A9C2-67DD011A2357")
                IBackgroundAudioTrack : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_TrimTimeFromStart(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::TimeSpan * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_TrimTimeFromStart(
                        /* [in] */ABI::Windows::Foundation::TimeSpan value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_TrimTimeFromEnd(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::TimeSpan * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_TrimTimeFromEnd(
                        /* [in] */ABI::Windows::Foundation::TimeSpan value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_OriginalDuration(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::TimeSpan * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_TrimmedDuration(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::TimeSpan * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_UserData(
                        /* [retval, out] */__RPC__deref_out_opt __FIMap_2_HSTRING_HSTRING * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Delay(
                        /* [in] */ABI::Windows::Foundation::TimeSpan value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Delay(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::TimeSpan * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Volume(
                        /* [in] */DOUBLE value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Volume(
                        /* [retval, out] */__RPC__out DOUBLE * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE Clone(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Editing::IBackgroundAudioTrack * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetAudioEncodingProperties(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::MediaProperties::IAudioEncodingProperties * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AudioEffectDefinitions(
                        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IBackgroundAudioTrack=_uuidof(IBackgroundAudioTrack);
                
            } /* Windows */
        } /* Media */
    } /* Editing */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrack;
#endif /* !defined(____x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrack_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Editing.IBackgroundAudioTrackStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Editing.BackgroundAudioTrack
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrackStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrackStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Editing_IBackgroundAudioTrackStatics[] = L"Windows.Media.Editing.IBackgroundAudioTrackStatics";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Editing {
                /* [object, uuid("D9B1C0D7-D018-42A8-A559-CB4D9E97E664"), exclusiveto, contract] */
                MIDL_INTERFACE("D9B1C0D7-D018-42A8-A559-CB4D9E97E664")
                IBackgroundAudioTrackStatics : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE CreateFromEmbeddedAudioTrack(
                        /* [in] */__RPC__in_opt ABI::Windows::Media::Editing::IEmbeddedAudioTrack * embeddedAudioTrack,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Editing::IBackgroundAudioTrack * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateFromFileAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::IStorageFile * file,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CEditing__CBackgroundAudioTrack * * operation
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IBackgroundAudioTrackStatics=_uuidof(IBackgroundAudioTrackStatics);
                
            } /* Windows */
        } /* Media */
    } /* Editing */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrackStatics;
#endif /* !defined(____x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrackStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Editing.IEmbeddedAudioTrack
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Editing.EmbeddedAudioTrack
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CEditing_CIEmbeddedAudioTrack_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CEditing_CIEmbeddedAudioTrack_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Editing_IEmbeddedAudioTrack[] = L"Windows.Media.Editing.IEmbeddedAudioTrack";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Editing {
                /* [object, uuid("55EE5A7A-2D30-3FBA-A190-4F1A6454F88F"), exclusiveto, contract] */
                MIDL_INTERFACE("55EE5A7A-2D30-3FBA-A190-4F1A6454F88F")
                IEmbeddedAudioTrack : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE GetAudioEncodingProperties(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::MediaProperties::IAudioEncodingProperties * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IEmbeddedAudioTrack=_uuidof(IEmbeddedAudioTrack);
                
            } /* Windows */
        } /* Media */
    } /* Editing */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CEditing_CIEmbeddedAudioTrack;
#endif /* !defined(____x_ABI_CWindows_CMedia_CEditing_CIEmbeddedAudioTrack_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Editing.IMediaClip
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Editing.MediaClip
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CEditing_CIMediaClip_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CEditing_CIMediaClip_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Editing_IMediaClip[] = L"Windows.Media.Editing.IMediaClip";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Editing {
                /* [object, uuid("53F25366-5FBA-3EA4-8693-24761811140A"), exclusiveto, contract] */
                MIDL_INTERFACE("53F25366-5FBA-3EA4-8693-24761811140A")
                IMediaClip : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_TrimTimeFromStart(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::TimeSpan * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_TrimTimeFromStart(
                        /* [in] */ABI::Windows::Foundation::TimeSpan value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_TrimTimeFromEnd(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::TimeSpan * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_TrimTimeFromEnd(
                        /* [in] */ABI::Windows::Foundation::TimeSpan value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_OriginalDuration(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::TimeSpan * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_TrimmedDuration(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::TimeSpan * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_UserData(
                        /* [retval, out] */__RPC__deref_out_opt __FIMap_2_HSTRING_HSTRING * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE Clone(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Editing::IMediaClip * * result
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_StartTimeInComposition(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::TimeSpan * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_EndTimeInComposition(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::TimeSpan * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_EmbeddedAudioTracks(
                        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CEditing__CEmbeddedAudioTrack * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SelectedEmbeddedAudioTrackIndex(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_SelectedEmbeddedAudioTrackIndex(
                        /* [in] */UINT32 value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Volume(
                        /* [in] */DOUBLE value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Volume(
                        /* [retval, out] */__RPC__out DOUBLE * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetVideoEncodingProperties(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::MediaProperties::IVideoEncodingProperties * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AudioEffectDefinitions(
                        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_VideoEffectDefinitions(
                        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CMedia__CEffects__CIVideoEffectDefinition * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IMediaClip=_uuidof(IMediaClip);
                
            } /* Windows */
        } /* Media */
    } /* Editing */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CEditing_CIMediaClip;
#endif /* !defined(____x_ABI_CWindows_CMedia_CEditing_CIMediaClip_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Editing.IMediaClipStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Editing.MediaClip
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CEditing_CIMediaClipStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CEditing_CIMediaClipStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Editing_IMediaClipStatics[] = L"Windows.Media.Editing.IMediaClipStatics";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Editing {
                /* [object, uuid("FA402B68-928F-43C4-BC6E-783A1A359656"), exclusiveto, contract] */
                MIDL_INTERFACE("FA402B68-928F-43C4-BC6E-783A1A359656")
                IMediaClipStatics : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE CreateFromColor(
                        /* [in] */ABI::Windows::UI::Color color,
                        /* [in] */ABI::Windows::Foundation::TimeSpan originalDuration,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Editing::IMediaClip * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateFromFileAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::IStorageFile * file,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CEditing__CMediaClip * * operation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateFromImageFileAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::IStorageFile * file,
                        /* [in] */ABI::Windows::Foundation::TimeSpan originalDuration,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CEditing__CMediaClip * * operation
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IMediaClipStatics=_uuidof(IMediaClipStatics);
                
            } /* Windows */
        } /* Media */
    } /* Editing */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CEditing_CIMediaClipStatics;
#endif /* !defined(____x_ABI_CWindows_CMedia_CEditing_CIMediaClipStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Editing.IMediaClipStatics2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Editing.MediaClip
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CEditing_CIMediaClipStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CEditing_CIMediaClipStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Editing_IMediaClipStatics2[] = L"Windows.Media.Editing.IMediaClipStatics2";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Editing {
                /* [object, uuid("5B1DD7B3-854E-4D9B-877D-4774A556CD12"), exclusiveto, contract] */
                MIDL_INTERFACE("5B1DD7B3-854E-4D9B-877D-4774A556CD12")
                IMediaClipStatics2 : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE CreateFromSurface(
                        /* [in] */__RPC__in_opt ABI::Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface * surface,
                        /* [in] */ABI::Windows::Foundation::TimeSpan originalDuration,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Editing::IMediaClip * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IMediaClipStatics2=_uuidof(IMediaClipStatics2);
                
            } /* Windows */
        } /* Media */
    } /* Editing */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CEditing_CIMediaClipStatics2;
#endif /* !defined(____x_ABI_CWindows_CMedia_CEditing_CIMediaClipStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Editing.IMediaComposition
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Editing.MediaComposition
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CEditing_CIMediaComposition_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CEditing_CIMediaComposition_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Editing_IMediaComposition[] = L"Windows.Media.Editing.IMediaComposition";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Editing {
                /* [object, uuid("2E06E605-DC71-41D6-B837-2D2BC14A2947"), exclusiveto, contract] */
                MIDL_INTERFACE("2E06E605-DC71-41D6-B837-2D2BC14A2947")
                IMediaComposition : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Duration(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::TimeSpan * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Clips(
                        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CMedia__CEditing__CMediaClip * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_BackgroundAudioTracks(
                        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CMedia__CEditing__CBackgroundAudioTrack * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_UserData(
                        /* [retval, out] */__RPC__deref_out_opt __FIMap_2_HSTRING_HSTRING * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE Clone(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Editing::IMediaComposition * * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE SaveAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::IStorageFile * file,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * operation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetThumbnailAsync(
                        /* [in] */ABI::Windows::Foundation::TimeSpan timeFromStart,
                        /* [in] */INT32 scaledWidth,
                        /* [in] */INT32 scaledHeight,
                        /* [in] */ABI::Windows::Media::Editing::VideoFramePrecision framePrecision,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CGraphics__CImaging__CImageStream * * operation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetThumbnailsAsync(
                        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CFoundation__CTimeSpan * timesFromStart,
                        /* [in] */INT32 scaledWidth,
                        /* [in] */INT32 scaledHeight,
                        /* [in] */ABI::Windows::Media::Editing::VideoFramePrecision framePrecision,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CGraphics__CImaging__CImageStream * * operation
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE RenderToFileAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::IStorageFile * destination,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double * * operation
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE RenderToFileWithTrimmingPreferenceAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::IStorageFile * destination,
                        /* [in] */ABI::Windows::Media::Editing::MediaTrimmingPreference trimmingPreference,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double * * operation
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE RenderToFileWithProfileAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::IStorageFile * destination,
                        /* [in] */ABI::Windows::Media::Editing::MediaTrimmingPreference trimmingPreference,
                        /* [in] */__RPC__in_opt ABI::Windows::Media::MediaProperties::IMediaEncodingProfile * encodingProfile,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double * * operation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateDefaultEncodingProfile(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::MediaProperties::IMediaEncodingProfile * * value
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE GenerateMediaStreamSource(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Core::IMediaStreamSource * * value
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE GenerateMediaStreamSourceWithProfile(
                        /* [in] */__RPC__in_opt ABI::Windows::Media::MediaProperties::IMediaEncodingProfile * encodingProfile,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Core::IMediaStreamSource * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GeneratePreviewMediaStreamSource(
                        /* [in] */INT32 scaledWidth,
                        /* [in] */INT32 scaledHeight,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Core::IMediaStreamSource * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IMediaComposition=_uuidof(IMediaComposition);
                
            } /* Windows */
        } /* Media */
    } /* Editing */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CEditing_CIMediaComposition;
#endif /* !defined(____x_ABI_CWindows_CMedia_CEditing_CIMediaComposition_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Editing.IMediaComposition2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Editing.MediaComposition
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CEditing_CIMediaComposition2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CEditing_CIMediaComposition2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Editing_IMediaComposition2[] = L"Windows.Media.Editing.IMediaComposition2";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Editing {
                /* [object, uuid("A59E5372-2366-492C-BEC8-E6DFBA6D0281"), exclusiveto, contract] */
                MIDL_INTERFACE("A59E5372-2366-492C-BEC8-E6DFBA6D0281")
                IMediaComposition2 : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_OverlayLayers(
                        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CMedia__CEditing__CMediaOverlayLayer * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IMediaComposition2=_uuidof(IMediaComposition2);
                
            } /* Windows */
        } /* Media */
    } /* Editing */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CEditing_CIMediaComposition2;
#endif /* !defined(____x_ABI_CWindows_CMedia_CEditing_CIMediaComposition2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Editing.IMediaCompositionStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Editing.MediaComposition
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CEditing_CIMediaCompositionStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CEditing_CIMediaCompositionStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Editing_IMediaCompositionStatics[] = L"Windows.Media.Editing.IMediaCompositionStatics";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Editing {
                /* [object, uuid("87A08F04-E32A-45CE-8F66-A30DF0766224"), exclusiveto, contract] */
                MIDL_INTERFACE("87A08F04-E32A-45CE-8F66-A30DF0766224")
                IMediaCompositionStatics : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE LoadAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::IStorageFile * file,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CEditing__CMediaComposition * * operation
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IMediaCompositionStatics=_uuidof(IMediaCompositionStatics);
                
            } /* Windows */
        } /* Media */
    } /* Editing */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CEditing_CIMediaCompositionStatics;
#endif /* !defined(____x_ABI_CWindows_CMedia_CEditing_CIMediaCompositionStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Editing.IMediaOverlay
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Editing.MediaOverlay
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CEditing_CIMediaOverlay_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CEditing_CIMediaOverlay_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Editing_IMediaOverlay[] = L"Windows.Media.Editing.IMediaOverlay";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Editing {
                /* [object, uuid("A902AE5D-7869-4830-8AB1-94DC01C05FA4"), exclusiveto, contract] */
                MIDL_INTERFACE("A902AE5D-7869-4830-8AB1-94DC01C05FA4")
                IMediaOverlay : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Position(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::Rect * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Position(
                        /* [in] */ABI::Windows::Foundation::Rect value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Delay(
                        /* [in] */ABI::Windows::Foundation::TimeSpan value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Delay(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::TimeSpan * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Opacity(
                        /* [retval, out] */__RPC__out DOUBLE * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Opacity(
                        /* [in] */DOUBLE value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE Clone(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Editing::IMediaOverlay * * result
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Clip(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Editing::IMediaClip * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AudioEnabled(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_AudioEnabled(
                        /* [in] */boolean value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IMediaOverlay=_uuidof(IMediaOverlay);
                
            } /* Windows */
        } /* Media */
    } /* Editing */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CEditing_CIMediaOverlay;
#endif /* !defined(____x_ABI_CWindows_CMedia_CEditing_CIMediaOverlay_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Editing.IMediaOverlayFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Editing.MediaOverlay
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Editing_IMediaOverlayFactory[] = L"Windows.Media.Editing.IMediaOverlayFactory";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Editing {
                /* [object, uuid("B584828A-6188-4F8F-A2E0-AA552D598E18"), exclusiveto, contract] */
                MIDL_INTERFACE("B584828A-6188-4F8F-A2E0-AA552D598E18")
                IMediaOverlayFactory : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE Create(
                        /* [in] */__RPC__in_opt ABI::Windows::Media::Editing::IMediaClip * clip,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Editing::IMediaOverlay * * mediaOverlay
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateWithPositionAndOpacity(
                        /* [in] */__RPC__in_opt ABI::Windows::Media::Editing::IMediaClip * clip,
                        /* [in] */ABI::Windows::Foundation::Rect position,
                        /* [in] */DOUBLE opacity,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Editing::IMediaOverlay * * mediaOverlay
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IMediaOverlayFactory=_uuidof(IMediaOverlayFactory);
                
            } /* Windows */
        } /* Media */
    } /* Editing */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayFactory;
#endif /* !defined(____x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Editing.IMediaOverlayLayer
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Editing.MediaOverlayLayer
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayLayer_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayLayer_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Editing_IMediaOverlayLayer[] = L"Windows.Media.Editing.IMediaOverlayLayer";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Editing {
                /* [object, uuid("A6D9BA57-EEDA-46C6-BBE5-E398C84168AC"), exclusiveto, contract] */
                MIDL_INTERFACE("A6D9BA57-EEDA-46C6-BBE5-E398C84168AC")
                IMediaOverlayLayer : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE Clone(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Editing::IMediaOverlayLayer * * result
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Overlays(
                        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CMedia__CEditing__CMediaOverlay * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CustomCompositorDefinition(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Effects::IVideoCompositorDefinition * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IMediaOverlayLayer=_uuidof(IMediaOverlayLayer);
                
            } /* Windows */
        } /* Media */
    } /* Editing */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayLayer;
#endif /* !defined(____x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayLayer_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Editing.IMediaOverlayLayerFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Editing.MediaOverlayLayer
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayLayerFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayLayerFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Editing_IMediaOverlayLayerFactory[] = L"Windows.Media.Editing.IMediaOverlayLayerFactory";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Editing {
                /* [object, uuid("947CB473-A39E-4362-ABBF-9F8B5070A062"), exclusiveto, contract] */
                MIDL_INTERFACE("947CB473-A39E-4362-ABBF-9F8B5070A062")
                IMediaOverlayLayerFactory : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE CreateWithCompositorDefinition(
                        /* [in] */__RPC__in_opt ABI::Windows::Media::Effects::IVideoCompositorDefinition * compositorDefinition,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Editing::IMediaOverlayLayer * * mediaOverlayLayer
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IMediaOverlayLayerFactory=_uuidof(IMediaOverlayLayerFactory);
                
            } /* Windows */
        } /* Media */
    } /* Editing */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayLayerFactory;
#endif /* !defined(____x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayLayerFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Editing.BackgroundAudioTrack
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Media.Editing.IBackgroundAudioTrackStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Media.Editing.IBackgroundAudioTrack ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Editing_BackgroundAudioTrack_DEFINED
#define RUNTIMECLASS_Windows_Media_Editing_BackgroundAudioTrack_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Editing_BackgroundAudioTrack[] = L"Windows.Media.Editing.BackgroundAudioTrack";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Editing.EmbeddedAudioTrack
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Editing.IEmbeddedAudioTrack ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Editing_EmbeddedAudioTrack_DEFINED
#define RUNTIMECLASS_Windows_Media_Editing_EmbeddedAudioTrack_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Editing_EmbeddedAudioTrack[] = L"Windows.Media.Editing.EmbeddedAudioTrack";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Editing.MediaClip
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Media.Editing.IMediaClipStatics2 interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.Media.Editing.IMediaClipStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Media.Editing.IMediaClip ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Editing_MediaClip_DEFINED
#define RUNTIMECLASS_Windows_Media_Editing_MediaClip_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Editing_MediaClip[] = L"Windows.Media.Editing.MediaClip";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Editing.MediaComposition
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Media.Editing.IMediaCompositionStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Media.Editing.IMediaComposition ** Default Interface **
 *    Windows.Media.Editing.IMediaComposition2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Editing_MediaComposition_DEFINED
#define RUNTIMECLASS_Windows_Media_Editing_MediaComposition_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Editing_MediaComposition[] = L"Windows.Media.Editing.MediaComposition";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Editing.MediaOverlay
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Media.Editing.IMediaOverlayFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Media.Editing.IMediaOverlay ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Editing_MediaOverlay_DEFINED
#define RUNTIMECLASS_Windows_Media_Editing_MediaOverlay_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Editing_MediaOverlay[] = L"Windows.Media.Editing.MediaOverlay";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Editing.MediaOverlayLayer
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Media.Editing.IMediaOverlayLayerFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Media.Editing.IMediaOverlayLayer ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Editing_MediaOverlayLayer_DEFINED
#define RUNTIMECLASS_Windows_Media_Editing_MediaOverlayLayer_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Editing_MediaOverlayLayer[] = L"Windows.Media.Editing.MediaOverlayLayer";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000




#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrack_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrack_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrack __x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrack;

#endif // ____x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrack_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrackStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrackStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrackStatics __x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrackStatics;

#endif // ____x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrackStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CEditing_CIEmbeddedAudioTrack_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CEditing_CIEmbeddedAudioTrack_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CEditing_CIEmbeddedAudioTrack __x_ABI_CWindows_CMedia_CEditing_CIEmbeddedAudioTrack;

#endif // ____x_ABI_CWindows_CMedia_CEditing_CIEmbeddedAudioTrack_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CEditing_CIMediaClip_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CEditing_CIMediaClip_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CEditing_CIMediaClip __x_ABI_CWindows_CMedia_CEditing_CIMediaClip;

#endif // ____x_ABI_CWindows_CMedia_CEditing_CIMediaClip_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CEditing_CIMediaClipStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CEditing_CIMediaClipStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CEditing_CIMediaClipStatics __x_ABI_CWindows_CMedia_CEditing_CIMediaClipStatics;

#endif // ____x_ABI_CWindows_CMedia_CEditing_CIMediaClipStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CEditing_CIMediaClipStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CEditing_CIMediaClipStatics2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CEditing_CIMediaClipStatics2 __x_ABI_CWindows_CMedia_CEditing_CIMediaClipStatics2;

#endif // ____x_ABI_CWindows_CMedia_CEditing_CIMediaClipStatics2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CEditing_CIMediaComposition_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CEditing_CIMediaComposition_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CEditing_CIMediaComposition __x_ABI_CWindows_CMedia_CEditing_CIMediaComposition;

#endif // ____x_ABI_CWindows_CMedia_CEditing_CIMediaComposition_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CEditing_CIMediaComposition2_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CEditing_CIMediaComposition2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CEditing_CIMediaComposition2 __x_ABI_CWindows_CMedia_CEditing_CIMediaComposition2;

#endif // ____x_ABI_CWindows_CMedia_CEditing_CIMediaComposition2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CEditing_CIMediaCompositionStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CEditing_CIMediaCompositionStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CEditing_CIMediaCompositionStatics __x_ABI_CWindows_CMedia_CEditing_CIMediaCompositionStatics;

#endif // ____x_ABI_CWindows_CMedia_CEditing_CIMediaCompositionStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CEditing_CIMediaOverlay_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CEditing_CIMediaOverlay_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlay __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlay;

#endif // ____x_ABI_CWindows_CMedia_CEditing_CIMediaOverlay_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayFactory __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayFactory;

#endif // ____x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayLayer_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayLayer_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayLayer __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayLayer;

#endif // ____x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayLayer_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayLayerFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayLayerFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayLayerFactory __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayLayerFactory;

#endif // ____x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayLayerFactory_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CMedia__CEditing__CBackgroundAudioTrack_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CMedia__CEditing__CBackgroundAudioTrack_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CMedia__CEditing__CBackgroundAudioTrack __FIIterator_1_Windows__CMedia__CEditing__CBackgroundAudioTrack;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CMedia__CEditing__CBackgroundAudioTrack;

typedef struct __FIIterator_1_Windows__CMedia__CEditing__CBackgroundAudioTrackVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CMedia__CEditing__CBackgroundAudioTrack * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CMedia__CEditing__CBackgroundAudioTrack * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CMedia__CEditing__CBackgroundAudioTrack * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CMedia__CEditing__CBackgroundAudioTrack * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CMedia__CEditing__CBackgroundAudioTrack * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CMedia__CEditing__CBackgroundAudioTrack * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CMedia__CEditing__CBackgroundAudioTrack * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrack * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CMedia__CEditing__CBackgroundAudioTrack * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CMedia__CEditing__CBackgroundAudioTrack * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CMedia__CEditing__CBackgroundAudioTrack * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrack * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CMedia__CEditing__CBackgroundAudioTrackVtbl;

interface __FIIterator_1_Windows__CMedia__CEditing__CBackgroundAudioTrack
{
    CONST_VTBL struct __FIIterator_1_Windows__CMedia__CEditing__CBackgroundAudioTrackVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CMedia__CEditing__CBackgroundAudioTrack_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CMedia__CEditing__CBackgroundAudioTrack_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CMedia__CEditing__CBackgroundAudioTrack_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CMedia__CEditing__CBackgroundAudioTrack_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CMedia__CEditing__CBackgroundAudioTrack_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CMedia__CEditing__CBackgroundAudioTrack_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CMedia__CEditing__CBackgroundAudioTrack_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CMedia__CEditing__CBackgroundAudioTrack_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CMedia__CEditing__CBackgroundAudioTrack_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CMedia__CEditing__CBackgroundAudioTrack_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CMedia__CEditing__CBackgroundAudioTrack_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CMedia__CEditing__CBackgroundAudioTrack_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CMedia__CEditing__CBackgroundAudioTrack_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CMedia__CEditing__CBackgroundAudioTrack __FIIterable_1_Windows__CMedia__CEditing__CBackgroundAudioTrack;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CMedia__CEditing__CBackgroundAudioTrack;

typedef  struct __FIIterable_1_Windows__CMedia__CEditing__CBackgroundAudioTrackVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CMedia__CEditing__CBackgroundAudioTrack * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CMedia__CEditing__CBackgroundAudioTrack * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CMedia__CEditing__CBackgroundAudioTrack * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CMedia__CEditing__CBackgroundAudioTrack * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CMedia__CEditing__CBackgroundAudioTrack * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CMedia__CEditing__CBackgroundAudioTrack * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CMedia__CEditing__CBackgroundAudioTrack * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CMedia__CEditing__CBackgroundAudioTrack **first);

    END_INTERFACE
} __FIIterable_1_Windows__CMedia__CEditing__CBackgroundAudioTrackVtbl;

interface __FIIterable_1_Windows__CMedia__CEditing__CBackgroundAudioTrack
{
    CONST_VTBL struct __FIIterable_1_Windows__CMedia__CEditing__CBackgroundAudioTrackVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CMedia__CEditing__CBackgroundAudioTrack_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CMedia__CEditing__CBackgroundAudioTrack_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CMedia__CEditing__CBackgroundAudioTrack_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CMedia__CEditing__CBackgroundAudioTrack_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CMedia__CEditing__CBackgroundAudioTrack_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CMedia__CEditing__CBackgroundAudioTrack_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CMedia__CEditing__CBackgroundAudioTrack_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CMedia__CEditing__CBackgroundAudioTrack_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CMedia__CEditing__CEmbeddedAudioTrack_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CMedia__CEditing__CEmbeddedAudioTrack_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CMedia__CEditing__CEmbeddedAudioTrack __FIIterator_1_Windows__CMedia__CEditing__CEmbeddedAudioTrack;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CMedia__CEditing__CEmbeddedAudioTrack;

typedef struct __FIIterator_1_Windows__CMedia__CEditing__CEmbeddedAudioTrackVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CMedia__CEditing__CEmbeddedAudioTrack * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CMedia__CEditing__CEmbeddedAudioTrack * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CMedia__CEditing__CEmbeddedAudioTrack * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CMedia__CEditing__CEmbeddedAudioTrack * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CMedia__CEditing__CEmbeddedAudioTrack * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CMedia__CEditing__CEmbeddedAudioTrack * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CMedia__CEditing__CEmbeddedAudioTrack * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CMedia_CEditing_CIEmbeddedAudioTrack * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CMedia__CEditing__CEmbeddedAudioTrack * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CMedia__CEditing__CEmbeddedAudioTrack * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CMedia__CEditing__CEmbeddedAudioTrack * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CEditing_CIEmbeddedAudioTrack * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CMedia__CEditing__CEmbeddedAudioTrackVtbl;

interface __FIIterator_1_Windows__CMedia__CEditing__CEmbeddedAudioTrack
{
    CONST_VTBL struct __FIIterator_1_Windows__CMedia__CEditing__CEmbeddedAudioTrackVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CMedia__CEditing__CEmbeddedAudioTrack_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CMedia__CEditing__CEmbeddedAudioTrack_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CMedia__CEditing__CEmbeddedAudioTrack_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CMedia__CEditing__CEmbeddedAudioTrack_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CMedia__CEditing__CEmbeddedAudioTrack_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CMedia__CEditing__CEmbeddedAudioTrack_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CMedia__CEditing__CEmbeddedAudioTrack_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CMedia__CEditing__CEmbeddedAudioTrack_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CMedia__CEditing__CEmbeddedAudioTrack_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CMedia__CEditing__CEmbeddedAudioTrack_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CMedia__CEditing__CEmbeddedAudioTrack_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CMedia__CEditing__CEmbeddedAudioTrack_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CMedia__CEditing__CEmbeddedAudioTrack_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CMedia__CEditing__CEmbeddedAudioTrack __FIIterable_1_Windows__CMedia__CEditing__CEmbeddedAudioTrack;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CMedia__CEditing__CEmbeddedAudioTrack;

typedef  struct __FIIterable_1_Windows__CMedia__CEditing__CEmbeddedAudioTrackVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CMedia__CEditing__CEmbeddedAudioTrack * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CMedia__CEditing__CEmbeddedAudioTrack * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CMedia__CEditing__CEmbeddedAudioTrack * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CMedia__CEditing__CEmbeddedAudioTrack * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CMedia__CEditing__CEmbeddedAudioTrack * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CMedia__CEditing__CEmbeddedAudioTrack * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CMedia__CEditing__CEmbeddedAudioTrack * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CMedia__CEditing__CEmbeddedAudioTrack **first);

    END_INTERFACE
} __FIIterable_1_Windows__CMedia__CEditing__CEmbeddedAudioTrackVtbl;

interface __FIIterable_1_Windows__CMedia__CEditing__CEmbeddedAudioTrack
{
    CONST_VTBL struct __FIIterable_1_Windows__CMedia__CEditing__CEmbeddedAudioTrackVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CMedia__CEditing__CEmbeddedAudioTrack_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CMedia__CEditing__CEmbeddedAudioTrack_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CMedia__CEditing__CEmbeddedAudioTrack_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CMedia__CEditing__CEmbeddedAudioTrack_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CMedia__CEditing__CEmbeddedAudioTrack_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CMedia__CEditing__CEmbeddedAudioTrack_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CMedia__CEditing__CEmbeddedAudioTrack_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CMedia__CEditing__CEmbeddedAudioTrack_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CMedia__CEditing__CMediaClip_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CMedia__CEditing__CMediaClip_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CMedia__CEditing__CMediaClip __FIIterator_1_Windows__CMedia__CEditing__CMediaClip;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CMedia__CEditing__CMediaClip;

typedef struct __FIIterator_1_Windows__CMedia__CEditing__CMediaClipVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CMedia__CEditing__CMediaClip * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CMedia__CEditing__CMediaClip * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CMedia__CEditing__CMediaClip * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CMedia__CEditing__CMediaClip * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CMedia__CEditing__CMediaClip * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CMedia__CEditing__CMediaClip * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CMedia__CEditing__CMediaClip * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CMedia_CEditing_CIMediaClip * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CMedia__CEditing__CMediaClip * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CMedia__CEditing__CMediaClip * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CMedia__CEditing__CMediaClip * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CEditing_CIMediaClip * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CMedia__CEditing__CMediaClipVtbl;

interface __FIIterator_1_Windows__CMedia__CEditing__CMediaClip
{
    CONST_VTBL struct __FIIterator_1_Windows__CMedia__CEditing__CMediaClipVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CMedia__CEditing__CMediaClip_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CMedia__CEditing__CMediaClip_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CMedia__CEditing__CMediaClip_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CMedia__CEditing__CMediaClip_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CMedia__CEditing__CMediaClip_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CMedia__CEditing__CMediaClip_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CMedia__CEditing__CMediaClip_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CMedia__CEditing__CMediaClip_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CMedia__CEditing__CMediaClip_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CMedia__CEditing__CMediaClip_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CMedia__CEditing__CMediaClip_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CMedia__CEditing__CMediaClip_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CMedia__CEditing__CMediaClip_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CMedia__CEditing__CMediaClip __FIIterable_1_Windows__CMedia__CEditing__CMediaClip;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CMedia__CEditing__CMediaClip;

typedef  struct __FIIterable_1_Windows__CMedia__CEditing__CMediaClipVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CMedia__CEditing__CMediaClip * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CMedia__CEditing__CMediaClip * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CMedia__CEditing__CMediaClip * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CMedia__CEditing__CMediaClip * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CMedia__CEditing__CMediaClip * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CMedia__CEditing__CMediaClip * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CMedia__CEditing__CMediaClip * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CMedia__CEditing__CMediaClip **first);

    END_INTERFACE
} __FIIterable_1_Windows__CMedia__CEditing__CMediaClipVtbl;

interface __FIIterable_1_Windows__CMedia__CEditing__CMediaClip
{
    CONST_VTBL struct __FIIterable_1_Windows__CMedia__CEditing__CMediaClipVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CMedia__CEditing__CMediaClip_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CMedia__CEditing__CMediaClip_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CMedia__CEditing__CMediaClip_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CMedia__CEditing__CMediaClip_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CMedia__CEditing__CMediaClip_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CMedia__CEditing__CMediaClip_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CMedia__CEditing__CMediaClip_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CMedia__CEditing__CMediaClip_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CMedia__CEditing__CMediaOverlay_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CMedia__CEditing__CMediaOverlay_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CMedia__CEditing__CMediaOverlay __FIIterator_1_Windows__CMedia__CEditing__CMediaOverlay;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CMedia__CEditing__CMediaOverlay;

typedef struct __FIIterator_1_Windows__CMedia__CEditing__CMediaOverlayVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CMedia__CEditing__CMediaOverlay * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CMedia__CEditing__CMediaOverlay * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CMedia__CEditing__CMediaOverlay * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CMedia__CEditing__CMediaOverlay * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CMedia__CEditing__CMediaOverlay * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CMedia__CEditing__CMediaOverlay * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CMedia__CEditing__CMediaOverlay * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlay * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CMedia__CEditing__CMediaOverlay * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CMedia__CEditing__CMediaOverlay * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CMedia__CEditing__CMediaOverlay * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlay * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CMedia__CEditing__CMediaOverlayVtbl;

interface __FIIterator_1_Windows__CMedia__CEditing__CMediaOverlay
{
    CONST_VTBL struct __FIIterator_1_Windows__CMedia__CEditing__CMediaOverlayVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CMedia__CEditing__CMediaOverlay_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CMedia__CEditing__CMediaOverlay_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CMedia__CEditing__CMediaOverlay_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CMedia__CEditing__CMediaOverlay_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CMedia__CEditing__CMediaOverlay_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CMedia__CEditing__CMediaOverlay_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CMedia__CEditing__CMediaOverlay_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CMedia__CEditing__CMediaOverlay_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CMedia__CEditing__CMediaOverlay_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CMedia__CEditing__CMediaOverlay_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CMedia__CEditing__CMediaOverlay_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CMedia__CEditing__CMediaOverlay_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CMedia__CEditing__CMediaOverlay_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CMedia__CEditing__CMediaOverlay __FIIterable_1_Windows__CMedia__CEditing__CMediaOverlay;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CMedia__CEditing__CMediaOverlay;

typedef  struct __FIIterable_1_Windows__CMedia__CEditing__CMediaOverlayVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CMedia__CEditing__CMediaOverlay * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CMedia__CEditing__CMediaOverlay * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CMedia__CEditing__CMediaOverlay * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CMedia__CEditing__CMediaOverlay * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CMedia__CEditing__CMediaOverlay * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CMedia__CEditing__CMediaOverlay * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CMedia__CEditing__CMediaOverlay * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CMedia__CEditing__CMediaOverlay **first);

    END_INTERFACE
} __FIIterable_1_Windows__CMedia__CEditing__CMediaOverlayVtbl;

interface __FIIterable_1_Windows__CMedia__CEditing__CMediaOverlay
{
    CONST_VTBL struct __FIIterable_1_Windows__CMedia__CEditing__CMediaOverlayVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CMedia__CEditing__CMediaOverlay_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CMedia__CEditing__CMediaOverlay_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CMedia__CEditing__CMediaOverlay_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CMedia__CEditing__CMediaOverlay_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CMedia__CEditing__CMediaOverlay_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CMedia__CEditing__CMediaOverlay_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CMedia__CEditing__CMediaOverlay_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CMedia__CEditing__CMediaOverlay_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CMedia__CEditing__CMediaOverlayLayer_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CMedia__CEditing__CMediaOverlayLayer_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CMedia__CEditing__CMediaOverlayLayer __FIIterator_1_Windows__CMedia__CEditing__CMediaOverlayLayer;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CMedia__CEditing__CMediaOverlayLayer;

typedef struct __FIIterator_1_Windows__CMedia__CEditing__CMediaOverlayLayerVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CMedia__CEditing__CMediaOverlayLayer * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CMedia__CEditing__CMediaOverlayLayer * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CMedia__CEditing__CMediaOverlayLayer * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CMedia__CEditing__CMediaOverlayLayer * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CMedia__CEditing__CMediaOverlayLayer * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CMedia__CEditing__CMediaOverlayLayer * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CMedia__CEditing__CMediaOverlayLayer * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayLayer * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CMedia__CEditing__CMediaOverlayLayer * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CMedia__CEditing__CMediaOverlayLayer * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CMedia__CEditing__CMediaOverlayLayer * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayLayer * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CMedia__CEditing__CMediaOverlayLayerVtbl;

interface __FIIterator_1_Windows__CMedia__CEditing__CMediaOverlayLayer
{
    CONST_VTBL struct __FIIterator_1_Windows__CMedia__CEditing__CMediaOverlayLayerVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CMedia__CEditing__CMediaOverlayLayer_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CMedia__CEditing__CMediaOverlayLayer_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CMedia__CEditing__CMediaOverlayLayer_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CMedia__CEditing__CMediaOverlayLayer_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CMedia__CEditing__CMediaOverlayLayer_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CMedia__CEditing__CMediaOverlayLayer_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CMedia__CEditing__CMediaOverlayLayer_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CMedia__CEditing__CMediaOverlayLayer_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CMedia__CEditing__CMediaOverlayLayer_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CMedia__CEditing__CMediaOverlayLayer_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CMedia__CEditing__CMediaOverlayLayer_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CMedia__CEditing__CMediaOverlayLayer_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CMedia__CEditing__CMediaOverlayLayer_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CMedia__CEditing__CMediaOverlayLayer __FIIterable_1_Windows__CMedia__CEditing__CMediaOverlayLayer;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CMedia__CEditing__CMediaOverlayLayer;

typedef  struct __FIIterable_1_Windows__CMedia__CEditing__CMediaOverlayLayerVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CMedia__CEditing__CMediaOverlayLayer * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CMedia__CEditing__CMediaOverlayLayer * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CMedia__CEditing__CMediaOverlayLayer * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CMedia__CEditing__CMediaOverlayLayer * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CMedia__CEditing__CMediaOverlayLayer * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CMedia__CEditing__CMediaOverlayLayer * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CMedia__CEditing__CMediaOverlayLayer * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CMedia__CEditing__CMediaOverlayLayer **first);

    END_INTERFACE
} __FIIterable_1_Windows__CMedia__CEditing__CMediaOverlayLayerVtbl;

interface __FIIterable_1_Windows__CMedia__CEditing__CMediaOverlayLayer
{
    CONST_VTBL struct __FIIterable_1_Windows__CMedia__CEditing__CMediaOverlayLayerVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CMedia__CEditing__CMediaOverlayLayer_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CMedia__CEditing__CMediaOverlayLayer_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CMedia__CEditing__CMediaOverlayLayer_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CMedia__CEditing__CMediaOverlayLayer_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CMedia__CEditing__CMediaOverlayLayer_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CMedia__CEditing__CMediaOverlayLayer_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CMedia__CEditing__CMediaOverlayLayer_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CMedia__CEditing__CMediaOverlayLayer_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CMedia__CEditing__CBackgroundAudioTrack_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CMedia__CEditing__CBackgroundAudioTrack_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CMedia__CEditing__CBackgroundAudioTrack __FIVectorView_1_Windows__CMedia__CEditing__CBackgroundAudioTrack;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CMedia__CEditing__CBackgroundAudioTrack;

typedef struct __FIVectorView_1_Windows__CMedia__CEditing__CBackgroundAudioTrackVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CMedia__CEditing__CBackgroundAudioTrack * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CMedia__CEditing__CBackgroundAudioTrack * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CMedia__CEditing__CBackgroundAudioTrack * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CMedia__CEditing__CBackgroundAudioTrack * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CMedia__CEditing__CBackgroundAudioTrack * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CMedia__CEditing__CBackgroundAudioTrack * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CMedia__CEditing__CBackgroundAudioTrack * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrack * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CMedia__CEditing__CBackgroundAudioTrack * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CEditing__CBackgroundAudioTrack * This,
            /* [in] */ __x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrack * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CEditing__CBackgroundAudioTrack * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrack * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CMedia__CEditing__CBackgroundAudioTrackVtbl;

interface __FIVectorView_1_Windows__CMedia__CEditing__CBackgroundAudioTrack
{
    CONST_VTBL struct __FIVectorView_1_Windows__CMedia__CEditing__CBackgroundAudioTrackVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CMedia__CEditing__CBackgroundAudioTrack_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CMedia__CEditing__CBackgroundAudioTrack_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CMedia__CEditing__CBackgroundAudioTrack_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CMedia__CEditing__CBackgroundAudioTrack_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CMedia__CEditing__CBackgroundAudioTrack_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CMedia__CEditing__CBackgroundAudioTrack_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CMedia__CEditing__CBackgroundAudioTrack_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CMedia__CEditing__CBackgroundAudioTrack_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CMedia__CEditing__CBackgroundAudioTrack_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CMedia__CEditing__CBackgroundAudioTrack_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CMedia__CEditing__CBackgroundAudioTrack_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CMedia__CEditing__CEmbeddedAudioTrack_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CMedia__CEditing__CEmbeddedAudioTrack_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CMedia__CEditing__CEmbeddedAudioTrack __FIVectorView_1_Windows__CMedia__CEditing__CEmbeddedAudioTrack;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CMedia__CEditing__CEmbeddedAudioTrack;

typedef struct __FIVectorView_1_Windows__CMedia__CEditing__CEmbeddedAudioTrackVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CMedia__CEditing__CEmbeddedAudioTrack * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CMedia__CEditing__CEmbeddedAudioTrack * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CMedia__CEditing__CEmbeddedAudioTrack * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CMedia__CEditing__CEmbeddedAudioTrack * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CMedia__CEditing__CEmbeddedAudioTrack * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CMedia__CEditing__CEmbeddedAudioTrack * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CMedia__CEditing__CEmbeddedAudioTrack * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CMedia_CEditing_CIEmbeddedAudioTrack * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CMedia__CEditing__CEmbeddedAudioTrack * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CEditing__CEmbeddedAudioTrack * This,
            /* [in] */ __x_ABI_CWindows_CMedia_CEditing_CIEmbeddedAudioTrack * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CEditing__CEmbeddedAudioTrack * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CEditing_CIEmbeddedAudioTrack * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CMedia__CEditing__CEmbeddedAudioTrackVtbl;

interface __FIVectorView_1_Windows__CMedia__CEditing__CEmbeddedAudioTrack
{
    CONST_VTBL struct __FIVectorView_1_Windows__CMedia__CEditing__CEmbeddedAudioTrackVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CMedia__CEditing__CEmbeddedAudioTrack_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CMedia__CEditing__CEmbeddedAudioTrack_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CMedia__CEditing__CEmbeddedAudioTrack_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CMedia__CEditing__CEmbeddedAudioTrack_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CMedia__CEditing__CEmbeddedAudioTrack_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CMedia__CEditing__CEmbeddedAudioTrack_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CMedia__CEditing__CEmbeddedAudioTrack_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CMedia__CEditing__CEmbeddedAudioTrack_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CMedia__CEditing__CEmbeddedAudioTrack_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CMedia__CEditing__CEmbeddedAudioTrack_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CMedia__CEditing__CEmbeddedAudioTrack_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CMedia__CEditing__CMediaClip_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CMedia__CEditing__CMediaClip_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CMedia__CEditing__CMediaClip __FIVectorView_1_Windows__CMedia__CEditing__CMediaClip;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CMedia__CEditing__CMediaClip;

typedef struct __FIVectorView_1_Windows__CMedia__CEditing__CMediaClipVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CMedia__CEditing__CMediaClip * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CMedia__CEditing__CMediaClip * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CMedia__CEditing__CMediaClip * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CMedia__CEditing__CMediaClip * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CMedia__CEditing__CMediaClip * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CMedia__CEditing__CMediaClip * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CMedia__CEditing__CMediaClip * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CMedia_CEditing_CIMediaClip * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CMedia__CEditing__CMediaClip * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CEditing__CMediaClip * This,
            /* [in] */ __x_ABI_CWindows_CMedia_CEditing_CIMediaClip * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CEditing__CMediaClip * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CEditing_CIMediaClip * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CMedia__CEditing__CMediaClipVtbl;

interface __FIVectorView_1_Windows__CMedia__CEditing__CMediaClip
{
    CONST_VTBL struct __FIVectorView_1_Windows__CMedia__CEditing__CMediaClipVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CMedia__CEditing__CMediaClip_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CMedia__CEditing__CMediaClip_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CMedia__CEditing__CMediaClip_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CMedia__CEditing__CMediaClip_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CMedia__CEditing__CMediaClip_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CMedia__CEditing__CMediaClip_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CMedia__CEditing__CMediaClip_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CMedia__CEditing__CMediaClip_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CMedia__CEditing__CMediaClip_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CMedia__CEditing__CMediaClip_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CMedia__CEditing__CMediaClip_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CMedia__CEditing__CMediaOverlay_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CMedia__CEditing__CMediaOverlay_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CMedia__CEditing__CMediaOverlay __FIVectorView_1_Windows__CMedia__CEditing__CMediaOverlay;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CMedia__CEditing__CMediaOverlay;

typedef struct __FIVectorView_1_Windows__CMedia__CEditing__CMediaOverlayVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CMedia__CEditing__CMediaOverlay * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CMedia__CEditing__CMediaOverlay * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CMedia__CEditing__CMediaOverlay * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CMedia__CEditing__CMediaOverlay * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CMedia__CEditing__CMediaOverlay * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CMedia__CEditing__CMediaOverlay * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CMedia__CEditing__CMediaOverlay * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlay * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CMedia__CEditing__CMediaOverlay * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CEditing__CMediaOverlay * This,
            /* [in] */ __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlay * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CEditing__CMediaOverlay * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlay * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CMedia__CEditing__CMediaOverlayVtbl;

interface __FIVectorView_1_Windows__CMedia__CEditing__CMediaOverlay
{
    CONST_VTBL struct __FIVectorView_1_Windows__CMedia__CEditing__CMediaOverlayVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CMedia__CEditing__CMediaOverlay_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CMedia__CEditing__CMediaOverlay_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CMedia__CEditing__CMediaOverlay_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CMedia__CEditing__CMediaOverlay_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CMedia__CEditing__CMediaOverlay_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CMedia__CEditing__CMediaOverlay_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CMedia__CEditing__CMediaOverlay_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CMedia__CEditing__CMediaOverlay_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CMedia__CEditing__CMediaOverlay_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CMedia__CEditing__CMediaOverlay_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CMedia__CEditing__CMediaOverlay_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CMedia__CEditing__CMediaOverlayLayer_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CMedia__CEditing__CMediaOverlayLayer_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CMedia__CEditing__CMediaOverlayLayer __FIVectorView_1_Windows__CMedia__CEditing__CMediaOverlayLayer;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CMedia__CEditing__CMediaOverlayLayer;

typedef struct __FIVectorView_1_Windows__CMedia__CEditing__CMediaOverlayLayerVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CMedia__CEditing__CMediaOverlayLayer * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CMedia__CEditing__CMediaOverlayLayer * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CMedia__CEditing__CMediaOverlayLayer * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CMedia__CEditing__CMediaOverlayLayer * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CMedia__CEditing__CMediaOverlayLayer * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CMedia__CEditing__CMediaOverlayLayer * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CMedia__CEditing__CMediaOverlayLayer * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayLayer * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CMedia__CEditing__CMediaOverlayLayer * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CEditing__CMediaOverlayLayer * This,
            /* [in] */ __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayLayer * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CEditing__CMediaOverlayLayer * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayLayer * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CMedia__CEditing__CMediaOverlayLayerVtbl;

interface __FIVectorView_1_Windows__CMedia__CEditing__CMediaOverlayLayer
{
    CONST_VTBL struct __FIVectorView_1_Windows__CMedia__CEditing__CMediaOverlayLayerVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CMedia__CEditing__CMediaOverlayLayer_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CMedia__CEditing__CMediaOverlayLayer_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CMedia__CEditing__CMediaOverlayLayer_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CMedia__CEditing__CMediaOverlayLayer_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CMedia__CEditing__CMediaOverlayLayer_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CMedia__CEditing__CMediaOverlayLayer_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CMedia__CEditing__CMediaOverlayLayer_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CMedia__CEditing__CMediaOverlayLayer_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CMedia__CEditing__CMediaOverlayLayer_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CMedia__CEditing__CMediaOverlayLayer_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CMedia__CEditing__CMediaOverlayLayer_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVector_1_Windows__CMedia__CEditing__CBackgroundAudioTrack_INTERFACE_DEFINED__)
#define ____FIVector_1_Windows__CMedia__CEditing__CBackgroundAudioTrack_INTERFACE_DEFINED__

typedef interface __FIVector_1_Windows__CMedia__CEditing__CBackgroundAudioTrack __FIVector_1_Windows__CMedia__CEditing__CBackgroundAudioTrack;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVector_1_Windows__CMedia__CEditing__CBackgroundAudioTrack;

typedef struct __FIVector_1_Windows__CMedia__CEditing__CBackgroundAudioTrackVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVector_1_Windows__CMedia__CEditing__CBackgroundAudioTrack * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CMedia__CEditing__CBackgroundAudioTrack * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CMedia__CEditing__CBackgroundAudioTrack * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CMedia__CEditing__CBackgroundAudioTrack * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CMedia__CEditing__CBackgroundAudioTrack * This, /* [out] */ __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrack * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CMedia__CEditing__CBackgroundAudioTrack * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CMedia__CEditing__CBackgroundAudioTrack * This,
        /* [in] */ unsigned int index,
        /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrack * *item);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
        __RPC__in __FIVector_1_Windows__CMedia__CEditing__CBackgroundAudioTrack * This,
        /* [retval][out] */ __RPC__out unsigned int *size);

    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CMedia__CEditing__CBackgroundAudioTrack * This, /* [retval][out] */ __RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CEditing__CBackgroundAudioTrack **view);

    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CMedia__CEditing__CBackgroundAudioTrack * This,
        /* [in] */ __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrack * item,
        /* [out] */ __RPC__out unsigned int *index,
        /* [retval][out] */ __RPC__out boolean *found);

    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CMedia__CEditing__CBackgroundAudioTrack * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrack * item);

    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CMedia__CEditing__CBackgroundAudioTrack * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrack * item);

    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CMedia__CEditing__CBackgroundAudioTrack * This, /* [in] */ unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CMedia__CEditing__CBackgroundAudioTrack * This, /* [in] */ __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrack * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CMedia__CEditing__CBackgroundAudioTrack * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CMedia__CEditing__CBackgroundAudioTrack * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CMedia__CEditing__CBackgroundAudioTrack * This,
        /* [in] */ unsigned int startIndex,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrack * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CMedia__CEditing__CBackgroundAudioTrack * This,
        /* [in] */ unsigned int count,
        /* [size_is][in] */ __RPC__in_ecount_full(count) __x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrack * *value);

    END_INTERFACE
} __FIVector_1_Windows__CMedia__CEditing__CBackgroundAudioTrackVtbl;

interface __FIVector_1_Windows__CMedia__CEditing__CBackgroundAudioTrack
{
    CONST_VTBL struct __FIVector_1_Windows__CMedia__CEditing__CBackgroundAudioTrackVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVector_1_Windows__CMedia__CEditing__CBackgroundAudioTrack_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVector_1_Windows__CMedia__CEditing__CBackgroundAudioTrack_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVector_1_Windows__CMedia__CEditing__CBackgroundAudioTrack_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVector_1_Windows__CMedia__CEditing__CBackgroundAudioTrack_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVector_1_Windows__CMedia__CEditing__CBackgroundAudioTrack_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVector_1_Windows__CMedia__CEditing__CBackgroundAudioTrack_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVector_1_Windows__CMedia__CEditing__CBackgroundAudioTrack_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVector_1_Windows__CMedia__CEditing__CBackgroundAudioTrack_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVector_1_Windows__CMedia__CEditing__CBackgroundAudioTrack_GetView(This,view)	\
    ( (This)->lpVtbl -> GetView(This,view) ) 

#define __FIVector_1_Windows__CMedia__CEditing__CBackgroundAudioTrack_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVector_1_Windows__CMedia__CEditing__CBackgroundAudioTrack_SetAt(This,index,item)	\
    ( (This)->lpVtbl -> SetAt(This,index,item) ) 

#define __FIVector_1_Windows__CMedia__CEditing__CBackgroundAudioTrack_InsertAt(This,index,item)	\
    ( (This)->lpVtbl -> InsertAt(This,index,item) ) 

#define __FIVector_1_Windows__CMedia__CEditing__CBackgroundAudioTrack_RemoveAt(This,index)	\
    ( (This)->lpVtbl -> RemoveAt(This,index) ) 

#define __FIVector_1_Windows__CMedia__CEditing__CBackgroundAudioTrack_Append(This,item)	\
    ( (This)->lpVtbl -> Append(This,item) ) 

#define __FIVector_1_Windows__CMedia__CEditing__CBackgroundAudioTrack_RemoveAtEnd(This)	\
    ( (This)->lpVtbl -> RemoveAtEnd(This) ) 

#define __FIVector_1_Windows__CMedia__CEditing__CBackgroundAudioTrack_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define __FIVector_1_Windows__CMedia__CEditing__CBackgroundAudioTrack_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#define __FIVector_1_Windows__CMedia__CEditing__CBackgroundAudioTrack_ReplaceAll(This,count,value)	\
    ( (This)->lpVtbl -> ReplaceAll(This,count,value) ) 

#endif /* COBJMACROS */



#endif // ____FIVector_1_Windows__CMedia__CEditing__CBackgroundAudioTrack_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVector_1_Windows__CMedia__CEditing__CMediaClip_INTERFACE_DEFINED__)
#define ____FIVector_1_Windows__CMedia__CEditing__CMediaClip_INTERFACE_DEFINED__

typedef interface __FIVector_1_Windows__CMedia__CEditing__CMediaClip __FIVector_1_Windows__CMedia__CEditing__CMediaClip;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVector_1_Windows__CMedia__CEditing__CMediaClip;

typedef struct __FIVector_1_Windows__CMedia__CEditing__CMediaClipVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVector_1_Windows__CMedia__CEditing__CMediaClip * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CMedia__CEditing__CMediaClip * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CMedia__CEditing__CMediaClip * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CMedia__CEditing__CMediaClip * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CMedia__CEditing__CMediaClip * This, /* [out] */ __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CEditing_CIMediaClip * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CMedia__CEditing__CMediaClip * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CMedia__CEditing__CMediaClip * This,
        /* [in] */ unsigned int index,
        /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CEditing_CIMediaClip * *item);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
        __RPC__in __FIVector_1_Windows__CMedia__CEditing__CMediaClip * This,
        /* [retval][out] */ __RPC__out unsigned int *size);

    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CMedia__CEditing__CMediaClip * This, /* [retval][out] */ __RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CEditing__CMediaClip **view);

    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CMedia__CEditing__CMediaClip * This,
        /* [in] */ __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIMediaClip * item,
        /* [out] */ __RPC__out unsigned int *index,
        /* [retval][out] */ __RPC__out boolean *found);

    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CMedia__CEditing__CMediaClip * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIMediaClip * item);

    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CMedia__CEditing__CMediaClip * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIMediaClip * item);

    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CMedia__CEditing__CMediaClip * This, /* [in] */ unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CMedia__CEditing__CMediaClip * This, /* [in] */ __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIMediaClip * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CMedia__CEditing__CMediaClip * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CMedia__CEditing__CMediaClip * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CMedia__CEditing__CMediaClip * This,
        /* [in] */ unsigned int startIndex,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CEditing_CIMediaClip * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CMedia__CEditing__CMediaClip * This,
        /* [in] */ unsigned int count,
        /* [size_is][in] */ __RPC__in_ecount_full(count) __x_ABI_CWindows_CMedia_CEditing_CIMediaClip * *value);

    END_INTERFACE
} __FIVector_1_Windows__CMedia__CEditing__CMediaClipVtbl;

interface __FIVector_1_Windows__CMedia__CEditing__CMediaClip
{
    CONST_VTBL struct __FIVector_1_Windows__CMedia__CEditing__CMediaClipVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVector_1_Windows__CMedia__CEditing__CMediaClip_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVector_1_Windows__CMedia__CEditing__CMediaClip_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVector_1_Windows__CMedia__CEditing__CMediaClip_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVector_1_Windows__CMedia__CEditing__CMediaClip_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVector_1_Windows__CMedia__CEditing__CMediaClip_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVector_1_Windows__CMedia__CEditing__CMediaClip_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVector_1_Windows__CMedia__CEditing__CMediaClip_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVector_1_Windows__CMedia__CEditing__CMediaClip_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVector_1_Windows__CMedia__CEditing__CMediaClip_GetView(This,view)	\
    ( (This)->lpVtbl -> GetView(This,view) ) 

#define __FIVector_1_Windows__CMedia__CEditing__CMediaClip_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVector_1_Windows__CMedia__CEditing__CMediaClip_SetAt(This,index,item)	\
    ( (This)->lpVtbl -> SetAt(This,index,item) ) 

#define __FIVector_1_Windows__CMedia__CEditing__CMediaClip_InsertAt(This,index,item)	\
    ( (This)->lpVtbl -> InsertAt(This,index,item) ) 

#define __FIVector_1_Windows__CMedia__CEditing__CMediaClip_RemoveAt(This,index)	\
    ( (This)->lpVtbl -> RemoveAt(This,index) ) 

#define __FIVector_1_Windows__CMedia__CEditing__CMediaClip_Append(This,item)	\
    ( (This)->lpVtbl -> Append(This,item) ) 

#define __FIVector_1_Windows__CMedia__CEditing__CMediaClip_RemoveAtEnd(This)	\
    ( (This)->lpVtbl -> RemoveAtEnd(This) ) 

#define __FIVector_1_Windows__CMedia__CEditing__CMediaClip_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define __FIVector_1_Windows__CMedia__CEditing__CMediaClip_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#define __FIVector_1_Windows__CMedia__CEditing__CMediaClip_ReplaceAll(This,count,value)	\
    ( (This)->lpVtbl -> ReplaceAll(This,count,value) ) 

#endif /* COBJMACROS */



#endif // ____FIVector_1_Windows__CMedia__CEditing__CMediaClip_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVector_1_Windows__CMedia__CEditing__CMediaOverlay_INTERFACE_DEFINED__)
#define ____FIVector_1_Windows__CMedia__CEditing__CMediaOverlay_INTERFACE_DEFINED__

typedef interface __FIVector_1_Windows__CMedia__CEditing__CMediaOverlay __FIVector_1_Windows__CMedia__CEditing__CMediaOverlay;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVector_1_Windows__CMedia__CEditing__CMediaOverlay;

typedef struct __FIVector_1_Windows__CMedia__CEditing__CMediaOverlayVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVector_1_Windows__CMedia__CEditing__CMediaOverlay * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CMedia__CEditing__CMediaOverlay * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CMedia__CEditing__CMediaOverlay * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CMedia__CEditing__CMediaOverlay * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CMedia__CEditing__CMediaOverlay * This, /* [out] */ __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlay * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CMedia__CEditing__CMediaOverlay * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CMedia__CEditing__CMediaOverlay * This,
        /* [in] */ unsigned int index,
        /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlay * *item);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
        __RPC__in __FIVector_1_Windows__CMedia__CEditing__CMediaOverlay * This,
        /* [retval][out] */ __RPC__out unsigned int *size);

    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CMedia__CEditing__CMediaOverlay * This, /* [retval][out] */ __RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CEditing__CMediaOverlay **view);

    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CMedia__CEditing__CMediaOverlay * This,
        /* [in] */ __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlay * item,
        /* [out] */ __RPC__out unsigned int *index,
        /* [retval][out] */ __RPC__out boolean *found);

    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CMedia__CEditing__CMediaOverlay * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlay * item);

    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CMedia__CEditing__CMediaOverlay * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlay * item);

    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CMedia__CEditing__CMediaOverlay * This, /* [in] */ unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CMedia__CEditing__CMediaOverlay * This, /* [in] */ __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlay * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CMedia__CEditing__CMediaOverlay * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CMedia__CEditing__CMediaOverlay * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CMedia__CEditing__CMediaOverlay * This,
        /* [in] */ unsigned int startIndex,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlay * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CMedia__CEditing__CMediaOverlay * This,
        /* [in] */ unsigned int count,
        /* [size_is][in] */ __RPC__in_ecount_full(count) __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlay * *value);

    END_INTERFACE
} __FIVector_1_Windows__CMedia__CEditing__CMediaOverlayVtbl;

interface __FIVector_1_Windows__CMedia__CEditing__CMediaOverlay
{
    CONST_VTBL struct __FIVector_1_Windows__CMedia__CEditing__CMediaOverlayVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVector_1_Windows__CMedia__CEditing__CMediaOverlay_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVector_1_Windows__CMedia__CEditing__CMediaOverlay_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVector_1_Windows__CMedia__CEditing__CMediaOverlay_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVector_1_Windows__CMedia__CEditing__CMediaOverlay_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVector_1_Windows__CMedia__CEditing__CMediaOverlay_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVector_1_Windows__CMedia__CEditing__CMediaOverlay_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVector_1_Windows__CMedia__CEditing__CMediaOverlay_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVector_1_Windows__CMedia__CEditing__CMediaOverlay_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVector_1_Windows__CMedia__CEditing__CMediaOverlay_GetView(This,view)	\
    ( (This)->lpVtbl -> GetView(This,view) ) 

#define __FIVector_1_Windows__CMedia__CEditing__CMediaOverlay_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVector_1_Windows__CMedia__CEditing__CMediaOverlay_SetAt(This,index,item)	\
    ( (This)->lpVtbl -> SetAt(This,index,item) ) 

#define __FIVector_1_Windows__CMedia__CEditing__CMediaOverlay_InsertAt(This,index,item)	\
    ( (This)->lpVtbl -> InsertAt(This,index,item) ) 

#define __FIVector_1_Windows__CMedia__CEditing__CMediaOverlay_RemoveAt(This,index)	\
    ( (This)->lpVtbl -> RemoveAt(This,index) ) 

#define __FIVector_1_Windows__CMedia__CEditing__CMediaOverlay_Append(This,item)	\
    ( (This)->lpVtbl -> Append(This,item) ) 

#define __FIVector_1_Windows__CMedia__CEditing__CMediaOverlay_RemoveAtEnd(This)	\
    ( (This)->lpVtbl -> RemoveAtEnd(This) ) 

#define __FIVector_1_Windows__CMedia__CEditing__CMediaOverlay_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define __FIVector_1_Windows__CMedia__CEditing__CMediaOverlay_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#define __FIVector_1_Windows__CMedia__CEditing__CMediaOverlay_ReplaceAll(This,count,value)	\
    ( (This)->lpVtbl -> ReplaceAll(This,count,value) ) 

#endif /* COBJMACROS */



#endif // ____FIVector_1_Windows__CMedia__CEditing__CMediaOverlay_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVector_1_Windows__CMedia__CEditing__CMediaOverlayLayer_INTERFACE_DEFINED__)
#define ____FIVector_1_Windows__CMedia__CEditing__CMediaOverlayLayer_INTERFACE_DEFINED__

typedef interface __FIVector_1_Windows__CMedia__CEditing__CMediaOverlayLayer __FIVector_1_Windows__CMedia__CEditing__CMediaOverlayLayer;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVector_1_Windows__CMedia__CEditing__CMediaOverlayLayer;

typedef struct __FIVector_1_Windows__CMedia__CEditing__CMediaOverlayLayerVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVector_1_Windows__CMedia__CEditing__CMediaOverlayLayer * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CMedia__CEditing__CMediaOverlayLayer * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CMedia__CEditing__CMediaOverlayLayer * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CMedia__CEditing__CMediaOverlayLayer * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CMedia__CEditing__CMediaOverlayLayer * This, /* [out] */ __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayLayer * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CMedia__CEditing__CMediaOverlayLayer * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CMedia__CEditing__CMediaOverlayLayer * This,
        /* [in] */ unsigned int index,
        /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayLayer * *item);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
        __RPC__in __FIVector_1_Windows__CMedia__CEditing__CMediaOverlayLayer * This,
        /* [retval][out] */ __RPC__out unsigned int *size);

    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CMedia__CEditing__CMediaOverlayLayer * This, /* [retval][out] */ __RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CEditing__CMediaOverlayLayer **view);

    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CMedia__CEditing__CMediaOverlayLayer * This,
        /* [in] */ __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayLayer * item,
        /* [out] */ __RPC__out unsigned int *index,
        /* [retval][out] */ __RPC__out boolean *found);

    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CMedia__CEditing__CMediaOverlayLayer * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayLayer * item);

    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CMedia__CEditing__CMediaOverlayLayer * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayLayer * item);

    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CMedia__CEditing__CMediaOverlayLayer * This, /* [in] */ unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CMedia__CEditing__CMediaOverlayLayer * This, /* [in] */ __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayLayer * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CMedia__CEditing__CMediaOverlayLayer * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CMedia__CEditing__CMediaOverlayLayer * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CMedia__CEditing__CMediaOverlayLayer * This,
        /* [in] */ unsigned int startIndex,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayLayer * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CMedia__CEditing__CMediaOverlayLayer * This,
        /* [in] */ unsigned int count,
        /* [size_is][in] */ __RPC__in_ecount_full(count) __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayLayer * *value);

    END_INTERFACE
} __FIVector_1_Windows__CMedia__CEditing__CMediaOverlayLayerVtbl;

interface __FIVector_1_Windows__CMedia__CEditing__CMediaOverlayLayer
{
    CONST_VTBL struct __FIVector_1_Windows__CMedia__CEditing__CMediaOverlayLayerVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVector_1_Windows__CMedia__CEditing__CMediaOverlayLayer_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVector_1_Windows__CMedia__CEditing__CMediaOverlayLayer_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVector_1_Windows__CMedia__CEditing__CMediaOverlayLayer_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVector_1_Windows__CMedia__CEditing__CMediaOverlayLayer_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVector_1_Windows__CMedia__CEditing__CMediaOverlayLayer_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVector_1_Windows__CMedia__CEditing__CMediaOverlayLayer_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVector_1_Windows__CMedia__CEditing__CMediaOverlayLayer_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVector_1_Windows__CMedia__CEditing__CMediaOverlayLayer_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVector_1_Windows__CMedia__CEditing__CMediaOverlayLayer_GetView(This,view)	\
    ( (This)->lpVtbl -> GetView(This,view) ) 

#define __FIVector_1_Windows__CMedia__CEditing__CMediaOverlayLayer_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVector_1_Windows__CMedia__CEditing__CMediaOverlayLayer_SetAt(This,index,item)	\
    ( (This)->lpVtbl -> SetAt(This,index,item) ) 

#define __FIVector_1_Windows__CMedia__CEditing__CMediaOverlayLayer_InsertAt(This,index,item)	\
    ( (This)->lpVtbl -> InsertAt(This,index,item) ) 

#define __FIVector_1_Windows__CMedia__CEditing__CMediaOverlayLayer_RemoveAt(This,index)	\
    ( (This)->lpVtbl -> RemoveAt(This,index) ) 

#define __FIVector_1_Windows__CMedia__CEditing__CMediaOverlayLayer_Append(This,item)	\
    ( (This)->lpVtbl -> Append(This,item) ) 

#define __FIVector_1_Windows__CMedia__CEditing__CMediaOverlayLayer_RemoveAtEnd(This)	\
    ( (This)->lpVtbl -> RemoveAtEnd(This) ) 

#define __FIVector_1_Windows__CMedia__CEditing__CMediaOverlayLayer_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define __FIVector_1_Windows__CMedia__CEditing__CMediaOverlayLayer_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#define __FIVector_1_Windows__CMedia__CEditing__CMediaOverlayLayer_ReplaceAll(This,count,value)	\
    ( (This)->lpVtbl -> ReplaceAll(This,count,value) ) 

#endif /* COBJMACROS */



#endif // ____FIVector_1_Windows__CMedia__CEditing__CMediaOverlayLayer_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CMedia__CEditing__CBackgroundAudioTrack_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CMedia__CEditing__CBackgroundAudioTrack_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CEditing__CBackgroundAudioTrack __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CEditing__CBackgroundAudioTrack;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CEditing__CBackgroundAudioTrack;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CMedia__CEditing__CBackgroundAudioTrack __FIAsyncOperation_1_Windows__CMedia__CEditing__CBackgroundAudioTrack;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CEditing__CBackgroundAudioTrackVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CEditing__CBackgroundAudioTrack * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CEditing__CBackgroundAudioTrack * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CEditing__CBackgroundAudioTrack * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CEditing__CBackgroundAudioTrack * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CMedia__CEditing__CBackgroundAudioTrack *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CEditing__CBackgroundAudioTrackVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CEditing__CBackgroundAudioTrack
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CEditing__CBackgroundAudioTrackVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CEditing__CBackgroundAudioTrack_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CEditing__CBackgroundAudioTrack_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CEditing__CBackgroundAudioTrack_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CEditing__CBackgroundAudioTrack_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CMedia__CEditing__CBackgroundAudioTrack_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1_Windows__CMedia__CEditing__CBackgroundAudioTrack_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CMedia__CEditing__CBackgroundAudioTrack_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CMedia__CEditing__CBackgroundAudioTrack __FIAsyncOperation_1_Windows__CMedia__CEditing__CBackgroundAudioTrack;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CMedia__CEditing__CBackgroundAudioTrack;

typedef struct __FIAsyncOperation_1_Windows__CMedia__CEditing__CBackgroundAudioTrackVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CEditing__CBackgroundAudioTrack * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CEditing__CBackgroundAudioTrack * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CEditing__CBackgroundAudioTrack * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CEditing__CBackgroundAudioTrack * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CEditing__CBackgroundAudioTrack * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CEditing__CBackgroundAudioTrack * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CEditing__CBackgroundAudioTrack * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CEditing__CBackgroundAudioTrack *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CEditing__CBackgroundAudioTrack * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CEditing__CBackgroundAudioTrack **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CEditing__CBackgroundAudioTrack * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrack * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CMedia__CEditing__CBackgroundAudioTrackVtbl;

interface __FIAsyncOperation_1_Windows__CMedia__CEditing__CBackgroundAudioTrack
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CMedia__CEditing__CBackgroundAudioTrackVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CMedia__CEditing__CBackgroundAudioTrack_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CEditing__CBackgroundAudioTrack_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CEditing__CBackgroundAudioTrack_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CMedia__CEditing__CBackgroundAudioTrack_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CEditing__CBackgroundAudioTrack_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CEditing__CBackgroundAudioTrack_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CMedia__CEditing__CBackgroundAudioTrack_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CEditing__CBackgroundAudioTrack_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CEditing__CBackgroundAudioTrack_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CMedia__CEditing__CBackgroundAudioTrack_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CMedia__CEditing__CMediaClip_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CMedia__CEditing__CMediaClip_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CEditing__CMediaClip __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CEditing__CMediaClip;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CEditing__CMediaClip;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CMedia__CEditing__CMediaClip __FIAsyncOperation_1_Windows__CMedia__CEditing__CMediaClip;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CEditing__CMediaClipVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CEditing__CMediaClip * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CEditing__CMediaClip * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CEditing__CMediaClip * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CEditing__CMediaClip * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CMedia__CEditing__CMediaClip *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CEditing__CMediaClipVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CEditing__CMediaClip
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CEditing__CMediaClipVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CEditing__CMediaClip_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CEditing__CMediaClip_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CEditing__CMediaClip_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CEditing__CMediaClip_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CMedia__CEditing__CMediaClip_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1_Windows__CMedia__CEditing__CMediaClip_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CMedia__CEditing__CMediaClip_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CMedia__CEditing__CMediaClip __FIAsyncOperation_1_Windows__CMedia__CEditing__CMediaClip;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CMedia__CEditing__CMediaClip;

typedef struct __FIAsyncOperation_1_Windows__CMedia__CEditing__CMediaClipVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CEditing__CMediaClip * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CEditing__CMediaClip * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CEditing__CMediaClip * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CEditing__CMediaClip * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CEditing__CMediaClip * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CEditing__CMediaClip * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CEditing__CMediaClip * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CEditing__CMediaClip *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CEditing__CMediaClip * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CEditing__CMediaClip **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CEditing__CMediaClip * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CMedia_CEditing_CIMediaClip * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CMedia__CEditing__CMediaClipVtbl;

interface __FIAsyncOperation_1_Windows__CMedia__CEditing__CMediaClip
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CMedia__CEditing__CMediaClipVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CMedia__CEditing__CMediaClip_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CEditing__CMediaClip_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CEditing__CMediaClip_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CMedia__CEditing__CMediaClip_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CEditing__CMediaClip_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CEditing__CMediaClip_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CMedia__CEditing__CMediaClip_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CEditing__CMediaClip_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CEditing__CMediaClip_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CMedia__CEditing__CMediaClip_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CMedia__CEditing__CMediaComposition_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CMedia__CEditing__CMediaComposition_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CEditing__CMediaComposition __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CEditing__CMediaComposition;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CEditing__CMediaComposition;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CMedia__CEditing__CMediaComposition __FIAsyncOperation_1_Windows__CMedia__CEditing__CMediaComposition;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CEditing__CMediaCompositionVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CEditing__CMediaComposition * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CEditing__CMediaComposition * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CEditing__CMediaComposition * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CEditing__CMediaComposition * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CMedia__CEditing__CMediaComposition *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CEditing__CMediaCompositionVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CEditing__CMediaComposition
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CEditing__CMediaCompositionVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CEditing__CMediaComposition_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CEditing__CMediaComposition_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CEditing__CMediaComposition_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CEditing__CMediaComposition_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CMedia__CEditing__CMediaComposition_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1_Windows__CMedia__CEditing__CMediaComposition_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CMedia__CEditing__CMediaComposition_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CMedia__CEditing__CMediaComposition __FIAsyncOperation_1_Windows__CMedia__CEditing__CMediaComposition;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CMedia__CEditing__CMediaComposition;

typedef struct __FIAsyncOperation_1_Windows__CMedia__CEditing__CMediaCompositionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CEditing__CMediaComposition * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CEditing__CMediaComposition * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CEditing__CMediaComposition * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CEditing__CMediaComposition * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CEditing__CMediaComposition * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CEditing__CMediaComposition * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CEditing__CMediaComposition * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CEditing__CMediaComposition *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CEditing__CMediaComposition * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CEditing__CMediaComposition **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CEditing__CMediaComposition * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CMedia_CEditing_CIMediaComposition * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CMedia__CEditing__CMediaCompositionVtbl;

interface __FIAsyncOperation_1_Windows__CMedia__CEditing__CMediaComposition
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CMedia__CEditing__CMediaCompositionVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CMedia__CEditing__CMediaComposition_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CEditing__CMediaComposition_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CEditing__CMediaComposition_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CMedia__CEditing__CMediaComposition_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CEditing__CMediaComposition_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CEditing__CMediaComposition_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CMedia__CEditing__CMediaComposition_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CEditing__CMediaComposition_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CEditing__CMediaComposition_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CMedia__CEditing__CMediaComposition_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#if !defined(____FIKeyValuePair_2_HSTRING_HSTRING_INTERFACE_DEFINED__)
#define ____FIKeyValuePair_2_HSTRING_HSTRING_INTERFACE_DEFINED__

typedef interface __FIKeyValuePair_2_HSTRING_HSTRING __FIKeyValuePair_2_HSTRING_HSTRING;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIKeyValuePair_2_HSTRING_HSTRING;

typedef struct __FIKeyValuePair_2_HSTRING_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Key )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This, /* [retval][out] */ __RPC__out HSTRING *key);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This, /* [retval][out] */ __RPC__deref_out_opt HSTRING *value);
    END_INTERFACE
} __FIKeyValuePair_2_HSTRING_HSTRINGVtbl;

interface __FIKeyValuePair_2_HSTRING_HSTRING
{
    CONST_VTBL struct __FIKeyValuePair_2_HSTRING_HSTRINGVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIKeyValuePair_2_HSTRING_HSTRING_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIKeyValuePair_2_HSTRING_HSTRING_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIKeyValuePair_2_HSTRING_HSTRING_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIKeyValuePair_2_HSTRING_HSTRING_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIKeyValuePair_2_HSTRING_HSTRING_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIKeyValuePair_2_HSTRING_HSTRING_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIKeyValuePair_2_HSTRING_HSTRING_get_Key(This,key)	\
    ( (This)->lpVtbl -> get_Key(This,key) ) 

#define __FIKeyValuePair_2_HSTRING_HSTRING_get_Value(This,value)	\
    ( (This)->lpVtbl -> get_Value(This,value) ) 
#endif /* COBJMACROS */


#endif // ____FIKeyValuePair_2_HSTRING_HSTRING_INTERFACE_DEFINED__



#if !defined(____FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_INTERFACE_DEFINED__)
#define ____FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_INTERFACE_DEFINED__

typedef interface __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING;

typedef struct __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRINGVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This, /* [retval][out] */ __RPC__out __FIKeyValuePair_2_HSTRING_HSTRING * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __FIKeyValuePair_2_HSTRING_HSTRING * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRINGVtbl;

interface __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING
{
    CONST_VTBL struct __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRINGVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_INTERFACE_DEFINED__



#if !defined(____FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_INTERFACE_DEFINED__)
#define ____FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_INTERFACE_DEFINED__

typedef interface __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING;

typedef  struct __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRINGVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING **first);

    END_INTERFACE
} __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRINGVtbl;

interface __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING
{
    CONST_VTBL struct __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRINGVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_INTERFACE_DEFINED__


#if !defined(____FIMapView_2_HSTRING_HSTRING_INTERFACE_DEFINED__)
#define ____FIMapView_2_HSTRING_HSTRING_INTERFACE_DEFINED__

typedef interface __FIMapView_2_HSTRING_HSTRING __FIMapView_2_HSTRING_HSTRING;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIMapView_2_HSTRING_HSTRING;

typedef struct __FIMapView_2_HSTRING_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This,/* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *Lookup )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This,
        /* [in] */ __RPC__in HSTRING key,
        /* [retval][out] */ __RPC__deref_out_opt HSTRING *value);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This, /* [retval][out] */ __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *HasKey )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This, /* [in] */ __RPC__in HSTRING key, /* [retval][out] */ __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *Split )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This,/* [out] */ __RPC__deref_out_opt __FIMapView_2_HSTRING_HSTRING **firstPartition,
        /* [out] */ __RPC__deref_out_opt __FIMapView_2_HSTRING_HSTRING **secondPartition);
    END_INTERFACE
} __FIMapView_2_HSTRING_HSTRINGVtbl;

interface __FIMapView_2_HSTRING_HSTRING
{
    CONST_VTBL struct __FIMapView_2_HSTRING_HSTRINGVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIMapView_2_HSTRING_HSTRING_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIMapView_2_HSTRING_HSTRING_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIMapView_2_HSTRING_HSTRING_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIMapView_2_HSTRING_HSTRING_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIMapView_2_HSTRING_HSTRING_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIMapView_2_HSTRING_HSTRING_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIMapView_2_HSTRING_HSTRING_Lookup(This,key,value)	\
    ( (This)->lpVtbl -> Lookup(This,key,value) ) 
#define __FIMapView_2_HSTRING_HSTRING_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 
#define __FIMapView_2_HSTRING_HSTRING_HasKey(This,key,found)	\
    ( (This)->lpVtbl -> HasKey(This,key,found) ) 
#define __FIMapView_2_HSTRING_HSTRING_Split(This,firstPartition,secondPartition)	\
    ( (This)->lpVtbl -> Split(This,firstPartition,secondPartition) ) 
#endif /* COBJMACROS */


#endif // ____FIMapView_2_HSTRING_HSTRING_INTERFACE_DEFINED__


#if !defined(____FIMap_2_HSTRING_HSTRING_INTERFACE_DEFINED__)
#define ____FIMap_2_HSTRING_HSTRING_INTERFACE_DEFINED__

typedef interface __FIMap_2_HSTRING_HSTRING __FIMap_2_HSTRING_HSTRING;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIMap_2_HSTRING_HSTRING;

typedef struct __FIMap_2_HSTRING_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMap_2_HSTRING_HSTRING * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMap_2_HSTRING_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMap_2_HSTRING_HSTRING * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMap_2_HSTRING_HSTRING * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMap_2_HSTRING_HSTRING * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMap_2_HSTRING_HSTRING * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *Lookup )(__RPC__in __FIMap_2_HSTRING_HSTRING * This,
        /* [in] */ HSTRING key,
        /* [retval][out] */ __RPC__deref_out_opt HSTRING **value);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )(__RPC__in __FIMap_2_HSTRING_HSTRING * This, /* [retval][out] */ __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *HasKey )(__RPC__in __FIMap_2_HSTRING_HSTRING * This, /* [in] */ HSTRING key, /* [retval][out] */ __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIMap_2_HSTRING_HSTRING * This, /* [retval][out] */ __RPC__deref_out_opt __FIMapView_2_HSTRING_HSTRING **view);
    HRESULT ( STDMETHODCALLTYPE *Insert )(__RPC__in __FIMap_2_HSTRING_HSTRING * This,
        /* [in] */ HSTRING key,
        /* [in] */ __RPC__in_opt HSTRING *value,
        /* [retval][out] */ __RPC__out boolean *replaced);
    HRESULT ( STDMETHODCALLTYPE *Remove )(__RPC__in __FIMap_2_HSTRING_HSTRING * This,/* [in] */ HSTRING key);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIMap_2_HSTRING_HSTRING * This);
    END_INTERFACE
} __FIMap_2_HSTRING_HSTRINGVtbl;

interface __FIMap_2_HSTRING_HSTRING
{
    CONST_VTBL struct __FIMap_2_HSTRING_HSTRINGVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIMap_2_HSTRING_HSTRING_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIMap_2_HSTRING_HSTRING_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIMap_2_HSTRING_HSTRING_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIMap_2_HSTRING_HSTRING_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIMap_2_HSTRING_HSTRING_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIMap_2_HSTRING_HSTRING_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIMap_2_HSTRING_HSTRING_Lookup(This,key,value)	\
    ( (This)->lpVtbl -> Lookup(This,key,value) ) 

#define __FIMap_2_HSTRING_HSTRING_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIMap_2_HSTRING_HSTRING_HasKey(This,key,found)	\
    ( (This)->lpVtbl -> HasKey(This,key,found) ) 

#define __FIMap_2_HSTRING_HSTRING_GetView(This,view)	\
    ( (This)->lpVtbl -> GetView(This,view) ) 

#define __FIMap_2_HSTRING_HSTRING_Insert(This,key,value,replaced)	\
    ( (This)->lpVtbl -> Insert(This,key,value,replaced) ) 

#define __FIMap_2_HSTRING_HSTRING_Remove(This,key)	\
    ( (This)->lpVtbl -> Remove(This,key) ) 

#define __FIMap_2_HSTRING_HSTRING_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 
#endif /* COBJMACROS */



#endif // ____FIMap_2_HSTRING_HSTRING_INTERFACE_DEFINED__


#ifndef ____x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinition_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinition_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinition __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinition;

#endif // ____x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinition_FWD_DEFINED__


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CMedia__CEffects__CIAudioEffectDefinition_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CMedia__CEffects__CIAudioEffectDefinition_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CMedia__CEffects__CIAudioEffectDefinition __FIIterator_1_Windows__CMedia__CEffects__CIAudioEffectDefinition;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CMedia__CEffects__CIAudioEffectDefinition;

typedef struct __FIIterator_1_Windows__CMedia__CEffects__CIAudioEffectDefinitionVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinition * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinition * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CMedia__CEffects__CIAudioEffectDefinitionVtbl;

interface __FIIterator_1_Windows__CMedia__CEffects__CIAudioEffectDefinition
{
    CONST_VTBL struct __FIIterator_1_Windows__CMedia__CEffects__CIAudioEffectDefinitionVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CMedia__CEffects__CIAudioEffectDefinition_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CMedia__CEffects__CIAudioEffectDefinition_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CMedia__CEffects__CIAudioEffectDefinition_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CMedia__CEffects__CIAudioEffectDefinition_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CMedia__CEffects__CIAudioEffectDefinition_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CMedia__CEffects__CIAudioEffectDefinition_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CMedia__CEffects__CIAudioEffectDefinition_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CMedia__CEffects__CIAudioEffectDefinition_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CMedia__CEffects__CIAudioEffectDefinition_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CMedia__CEffects__CIAudioEffectDefinition_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CMedia__CEffects__CIAudioEffectDefinition_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CMedia__CEffects__CIAudioEffectDefinition_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CMedia__CEffects__CIAudioEffectDefinition_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CMedia__CEffects__CIAudioEffectDefinition __FIIterable_1_Windows__CMedia__CEffects__CIAudioEffectDefinition;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CMedia__CEffects__CIAudioEffectDefinition;

typedef  struct __FIIterable_1_Windows__CMedia__CEffects__CIAudioEffectDefinitionVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CMedia__CEffects__CIAudioEffectDefinition **first);

    END_INTERFACE
} __FIIterable_1_Windows__CMedia__CEffects__CIAudioEffectDefinitionVtbl;

interface __FIIterable_1_Windows__CMedia__CEffects__CIAudioEffectDefinition
{
    CONST_VTBL struct __FIIterable_1_Windows__CMedia__CEffects__CIAudioEffectDefinitionVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CMedia__CEffects__CIAudioEffectDefinition_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CMedia__CEffects__CIAudioEffectDefinition_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CMedia__CEffects__CIAudioEffectDefinition_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CMedia__CEffects__CIAudioEffectDefinition_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CMedia__CEffects__CIAudioEffectDefinition_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CMedia__CEffects__CIAudioEffectDefinition_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CMedia__CEffects__CIAudioEffectDefinition_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CMedia__CEffects__CIAudioEffectDefinition_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CMedia__CEffects__CIAudioEffectDefinition_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CMedia__CEffects__CIAudioEffectDefinition_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CMedia__CEffects__CIAudioEffectDefinition __FIVectorView_1_Windows__CMedia__CEffects__CIAudioEffectDefinition;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CMedia__CEffects__CIAudioEffectDefinition;

typedef struct __FIVectorView_1_Windows__CMedia__CEffects__CIAudioEffectDefinitionVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinition * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This,
            /* [in] */ __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinition * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinition * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CMedia__CEffects__CIAudioEffectDefinitionVtbl;

interface __FIVectorView_1_Windows__CMedia__CEffects__CIAudioEffectDefinition
{
    CONST_VTBL struct __FIVectorView_1_Windows__CMedia__CEffects__CIAudioEffectDefinitionVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CMedia__CEffects__CIAudioEffectDefinition_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CMedia__CEffects__CIAudioEffectDefinition_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CMedia__CEffects__CIAudioEffectDefinition_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CMedia__CEffects__CIAudioEffectDefinition_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CMedia__CEffects__CIAudioEffectDefinition_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CMedia__CEffects__CIAudioEffectDefinition_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CMedia__CEffects__CIAudioEffectDefinition_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CMedia__CEffects__CIAudioEffectDefinition_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CMedia__CEffects__CIAudioEffectDefinition_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CMedia__CEffects__CIAudioEffectDefinition_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CMedia__CEffects__CIAudioEffectDefinition_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinition_INTERFACE_DEFINED__)
#define ____FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinition_INTERFACE_DEFINED__

typedef interface __FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinition __FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinition;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinition;

typedef struct __FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinitionVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This, /* [out] */ __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinition * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This,
        /* [in] */ unsigned int index,
        /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinition * *item);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
        __RPC__in __FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This,
        /* [retval][out] */ __RPC__out unsigned int *size);

    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This, /* [retval][out] */ __RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CEffects__CIAudioEffectDefinition **view);

    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This,
        /* [in] */ __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinition * item,
        /* [out] */ __RPC__out unsigned int *index,
        /* [retval][out] */ __RPC__out boolean *found);

    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinition * item);

    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinition * item);

    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This, /* [in] */ unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This, /* [in] */ __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinition * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This,
        /* [in] */ unsigned int startIndex,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinition * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This,
        /* [in] */ unsigned int count,
        /* [size_is][in] */ __RPC__in_ecount_full(count) __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinition * *value);

    END_INTERFACE
} __FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinitionVtbl;

interface __FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinition
{
    CONST_VTBL struct __FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinitionVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinition_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinition_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinition_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinition_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinition_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinition_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinition_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinition_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinition_GetView(This,view)	\
    ( (This)->lpVtbl -> GetView(This,view) ) 

#define __FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinition_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinition_SetAt(This,index,item)	\
    ( (This)->lpVtbl -> SetAt(This,index,item) ) 

#define __FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinition_InsertAt(This,index,item)	\
    ( (This)->lpVtbl -> InsertAt(This,index,item) ) 

#define __FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinition_RemoveAt(This,index)	\
    ( (This)->lpVtbl -> RemoveAt(This,index) ) 

#define __FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinition_Append(This,item)	\
    ( (This)->lpVtbl -> Append(This,item) ) 

#define __FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinition_RemoveAtEnd(This)	\
    ( (This)->lpVtbl -> RemoveAtEnd(This) ) 

#define __FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinition_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define __FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinition_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#define __FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinition_ReplaceAll(This,count,value)	\
    ( (This)->lpVtbl -> ReplaceAll(This,count,value) ) 

#endif /* COBJMACROS */



#endif // ____FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinition_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef ____x_ABI_CWindows_CMedia_CEffects_CIVideoEffectDefinition_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CEffects_CIVideoEffectDefinition_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CEffects_CIVideoEffectDefinition __x_ABI_CWindows_CMedia_CEffects_CIVideoEffectDefinition;

#endif // ____x_ABI_CWindows_CMedia_CEffects_CIVideoEffectDefinition_FWD_DEFINED__


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CMedia__CEffects__CIVideoEffectDefinition_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CMedia__CEffects__CIVideoEffectDefinition_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CMedia__CEffects__CIVideoEffectDefinition __FIIterator_1_Windows__CMedia__CEffects__CIVideoEffectDefinition;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CMedia__CEffects__CIVideoEffectDefinition;

typedef struct __FIIterator_1_Windows__CMedia__CEffects__CIVideoEffectDefinitionVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CMedia__CEffects__CIVideoEffectDefinition * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CMedia__CEffects__CIVideoEffectDefinition * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CMedia__CEffects__CIVideoEffectDefinition * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CMedia__CEffects__CIVideoEffectDefinition * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CMedia__CEffects__CIVideoEffectDefinition * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CMedia__CEffects__CIVideoEffectDefinition * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CMedia__CEffects__CIVideoEffectDefinition * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CMedia_CEffects_CIVideoEffectDefinition * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CMedia__CEffects__CIVideoEffectDefinition * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CMedia__CEffects__CIVideoEffectDefinition * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CMedia__CEffects__CIVideoEffectDefinition * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CEffects_CIVideoEffectDefinition * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CMedia__CEffects__CIVideoEffectDefinitionVtbl;

interface __FIIterator_1_Windows__CMedia__CEffects__CIVideoEffectDefinition
{
    CONST_VTBL struct __FIIterator_1_Windows__CMedia__CEffects__CIVideoEffectDefinitionVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CMedia__CEffects__CIVideoEffectDefinition_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CMedia__CEffects__CIVideoEffectDefinition_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CMedia__CEffects__CIVideoEffectDefinition_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CMedia__CEffects__CIVideoEffectDefinition_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CMedia__CEffects__CIVideoEffectDefinition_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CMedia__CEffects__CIVideoEffectDefinition_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CMedia__CEffects__CIVideoEffectDefinition_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CMedia__CEffects__CIVideoEffectDefinition_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CMedia__CEffects__CIVideoEffectDefinition_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CMedia__CEffects__CIVideoEffectDefinition_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CMedia__CEffects__CIVideoEffectDefinition_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CMedia__CEffects__CIVideoEffectDefinition_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CMedia__CEffects__CIVideoEffectDefinition_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CMedia__CEffects__CIVideoEffectDefinition __FIIterable_1_Windows__CMedia__CEffects__CIVideoEffectDefinition;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CMedia__CEffects__CIVideoEffectDefinition;

typedef  struct __FIIterable_1_Windows__CMedia__CEffects__CIVideoEffectDefinitionVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CMedia__CEffects__CIVideoEffectDefinition * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CMedia__CEffects__CIVideoEffectDefinition * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CMedia__CEffects__CIVideoEffectDefinition * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CMedia__CEffects__CIVideoEffectDefinition * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CMedia__CEffects__CIVideoEffectDefinition * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CMedia__CEffects__CIVideoEffectDefinition * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CMedia__CEffects__CIVideoEffectDefinition * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CMedia__CEffects__CIVideoEffectDefinition **first);

    END_INTERFACE
} __FIIterable_1_Windows__CMedia__CEffects__CIVideoEffectDefinitionVtbl;

interface __FIIterable_1_Windows__CMedia__CEffects__CIVideoEffectDefinition
{
    CONST_VTBL struct __FIIterable_1_Windows__CMedia__CEffects__CIVideoEffectDefinitionVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CMedia__CEffects__CIVideoEffectDefinition_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CMedia__CEffects__CIVideoEffectDefinition_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CMedia__CEffects__CIVideoEffectDefinition_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CMedia__CEffects__CIVideoEffectDefinition_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CMedia__CEffects__CIVideoEffectDefinition_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CMedia__CEffects__CIVideoEffectDefinition_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CMedia__CEffects__CIVideoEffectDefinition_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CMedia__CEffects__CIVideoEffectDefinition_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CMedia__CEffects__CIVideoEffectDefinition_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CMedia__CEffects__CIVideoEffectDefinition_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CMedia__CEffects__CIVideoEffectDefinition __FIVectorView_1_Windows__CMedia__CEffects__CIVideoEffectDefinition;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CMedia__CEffects__CIVideoEffectDefinition;

typedef struct __FIVectorView_1_Windows__CMedia__CEffects__CIVideoEffectDefinitionVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CMedia__CEffects__CIVideoEffectDefinition * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CMedia__CEffects__CIVideoEffectDefinition * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CMedia__CEffects__CIVideoEffectDefinition * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CMedia__CEffects__CIVideoEffectDefinition * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CMedia__CEffects__CIVideoEffectDefinition * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CMedia__CEffects__CIVideoEffectDefinition * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CMedia__CEffects__CIVideoEffectDefinition * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CMedia_CEffects_CIVideoEffectDefinition * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CMedia__CEffects__CIVideoEffectDefinition * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CEffects__CIVideoEffectDefinition * This,
            /* [in] */ __x_ABI_CWindows_CMedia_CEffects_CIVideoEffectDefinition * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CEffects__CIVideoEffectDefinition * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CEffects_CIVideoEffectDefinition * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CMedia__CEffects__CIVideoEffectDefinitionVtbl;

interface __FIVectorView_1_Windows__CMedia__CEffects__CIVideoEffectDefinition
{
    CONST_VTBL struct __FIVectorView_1_Windows__CMedia__CEffects__CIVideoEffectDefinitionVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CMedia__CEffects__CIVideoEffectDefinition_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CMedia__CEffects__CIVideoEffectDefinition_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CMedia__CEffects__CIVideoEffectDefinition_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CMedia__CEffects__CIVideoEffectDefinition_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CMedia__CEffects__CIVideoEffectDefinition_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CMedia__CEffects__CIVideoEffectDefinition_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CMedia__CEffects__CIVideoEffectDefinition_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CMedia__CEffects__CIVideoEffectDefinition_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CMedia__CEffects__CIVideoEffectDefinition_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CMedia__CEffects__CIVideoEffectDefinition_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CMedia__CEffects__CIVideoEffectDefinition_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVector_1_Windows__CMedia__CEffects__CIVideoEffectDefinition_INTERFACE_DEFINED__)
#define ____FIVector_1_Windows__CMedia__CEffects__CIVideoEffectDefinition_INTERFACE_DEFINED__

typedef interface __FIVector_1_Windows__CMedia__CEffects__CIVideoEffectDefinition __FIVector_1_Windows__CMedia__CEffects__CIVideoEffectDefinition;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVector_1_Windows__CMedia__CEffects__CIVideoEffectDefinition;

typedef struct __FIVector_1_Windows__CMedia__CEffects__CIVideoEffectDefinitionVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVector_1_Windows__CMedia__CEffects__CIVideoEffectDefinition * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CMedia__CEffects__CIVideoEffectDefinition * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CMedia__CEffects__CIVideoEffectDefinition * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CMedia__CEffects__CIVideoEffectDefinition * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CMedia__CEffects__CIVideoEffectDefinition * This, /* [out] */ __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CEffects_CIVideoEffectDefinition * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CMedia__CEffects__CIVideoEffectDefinition * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CMedia__CEffects__CIVideoEffectDefinition * This,
        /* [in] */ unsigned int index,
        /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CEffects_CIVideoEffectDefinition * *item);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
        __RPC__in __FIVector_1_Windows__CMedia__CEffects__CIVideoEffectDefinition * This,
        /* [retval][out] */ __RPC__out unsigned int *size);

    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CMedia__CEffects__CIVideoEffectDefinition * This, /* [retval][out] */ __RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CEffects__CIVideoEffectDefinition **view);

    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CMedia__CEffects__CIVideoEffectDefinition * This,
        /* [in] */ __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIVideoEffectDefinition * item,
        /* [out] */ __RPC__out unsigned int *index,
        /* [retval][out] */ __RPC__out boolean *found);

    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CMedia__CEffects__CIVideoEffectDefinition * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIVideoEffectDefinition * item);

    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CMedia__CEffects__CIVideoEffectDefinition * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIVideoEffectDefinition * item);

    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CMedia__CEffects__CIVideoEffectDefinition * This, /* [in] */ unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CMedia__CEffects__CIVideoEffectDefinition * This, /* [in] */ __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIVideoEffectDefinition * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CMedia__CEffects__CIVideoEffectDefinition * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CMedia__CEffects__CIVideoEffectDefinition * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CMedia__CEffects__CIVideoEffectDefinition * This,
        /* [in] */ unsigned int startIndex,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CEffects_CIVideoEffectDefinition * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CMedia__CEffects__CIVideoEffectDefinition * This,
        /* [in] */ unsigned int count,
        /* [size_is][in] */ __RPC__in_ecount_full(count) __x_ABI_CWindows_CMedia_CEffects_CIVideoEffectDefinition * *value);

    END_INTERFACE
} __FIVector_1_Windows__CMedia__CEffects__CIVideoEffectDefinitionVtbl;

interface __FIVector_1_Windows__CMedia__CEffects__CIVideoEffectDefinition
{
    CONST_VTBL struct __FIVector_1_Windows__CMedia__CEffects__CIVideoEffectDefinitionVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVector_1_Windows__CMedia__CEffects__CIVideoEffectDefinition_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVector_1_Windows__CMedia__CEffects__CIVideoEffectDefinition_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVector_1_Windows__CMedia__CEffects__CIVideoEffectDefinition_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVector_1_Windows__CMedia__CEffects__CIVideoEffectDefinition_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVector_1_Windows__CMedia__CEffects__CIVideoEffectDefinition_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVector_1_Windows__CMedia__CEffects__CIVideoEffectDefinition_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVector_1_Windows__CMedia__CEffects__CIVideoEffectDefinition_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVector_1_Windows__CMedia__CEffects__CIVideoEffectDefinition_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVector_1_Windows__CMedia__CEffects__CIVideoEffectDefinition_GetView(This,view)	\
    ( (This)->lpVtbl -> GetView(This,view) ) 

#define __FIVector_1_Windows__CMedia__CEffects__CIVideoEffectDefinition_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVector_1_Windows__CMedia__CEffects__CIVideoEffectDefinition_SetAt(This,index,item)	\
    ( (This)->lpVtbl -> SetAt(This,index,item) ) 

#define __FIVector_1_Windows__CMedia__CEffects__CIVideoEffectDefinition_InsertAt(This,index,item)	\
    ( (This)->lpVtbl -> InsertAt(This,index,item) ) 

#define __FIVector_1_Windows__CMedia__CEffects__CIVideoEffectDefinition_RemoveAt(This,index)	\
    ( (This)->lpVtbl -> RemoveAt(This,index) ) 

#define __FIVector_1_Windows__CMedia__CEffects__CIVideoEffectDefinition_Append(This,item)	\
    ( (This)->lpVtbl -> Append(This,item) ) 

#define __FIVector_1_Windows__CMedia__CEffects__CIVideoEffectDefinition_RemoveAtEnd(This)	\
    ( (This)->lpVtbl -> RemoveAtEnd(This) ) 

#define __FIVector_1_Windows__CMedia__CEffects__CIVideoEffectDefinition_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define __FIVector_1_Windows__CMedia__CEffects__CIVideoEffectDefinition_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#define __FIVector_1_Windows__CMedia__CEffects__CIVideoEffectDefinition_ReplaceAll(This,count,value)	\
    ( (This)->lpVtbl -> ReplaceAll(This,count,value) ) 

#endif /* COBJMACROS */



#endif // ____FIVector_1_Windows__CMedia__CEffects__CIVideoEffectDefinition_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamWithContentType_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamWithContentType_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamWithContentType __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamWithContentType;

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamWithContentType_FWD_DEFINED__


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

struct __x_ABI_CWindows_CFoundation_CTimeSpan;

#if !defined(____FIIterator_1_Windows__CFoundation__CTimeSpan_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CFoundation__CTimeSpan_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CFoundation__CTimeSpan __FIIterator_1_Windows__CFoundation__CTimeSpan;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CFoundation__CTimeSpan;

typedef struct __FIIterator_1_Windows__CFoundation__CTimeSpanVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CFoundation__CTimeSpan * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CFoundation__CTimeSpan * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CFoundation__CTimeSpan * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CFoundation__CTimeSpan * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CFoundation__CTimeSpan * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CFoundation__CTimeSpan * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CFoundation__CTimeSpan * This, /* [retval][out] */ __RPC__out struct __x_ABI_CWindows_CFoundation_CTimeSpan *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CFoundation__CTimeSpan * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CFoundation__CTimeSpan * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CFoundation__CTimeSpan * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) struct __x_ABI_CWindows_CFoundation_CTimeSpan *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CFoundation__CTimeSpanVtbl;

interface __FIIterator_1_Windows__CFoundation__CTimeSpan
{
    CONST_VTBL struct __FIIterator_1_Windows__CFoundation__CTimeSpanVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CFoundation__CTimeSpan_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CFoundation__CTimeSpan_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CFoundation__CTimeSpan_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CFoundation__CTimeSpan_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CFoundation__CTimeSpan_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CFoundation__CTimeSpan_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CFoundation__CTimeSpan_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CFoundation__CTimeSpan_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CFoundation__CTimeSpan_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CFoundation__CTimeSpan_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CFoundation__CTimeSpan_INTERFACE_DEFINED__



#if !defined(____FIIterable_1_Windows__CFoundation__CTimeSpan_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CFoundation__CTimeSpan_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CFoundation__CTimeSpan __FIIterable_1_Windows__CFoundation__CTimeSpan;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CFoundation__CTimeSpan;

typedef  struct __FIIterable_1_Windows__CFoundation__CTimeSpanVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CFoundation__CTimeSpan * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CFoundation__CTimeSpan * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CFoundation__CTimeSpan * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CFoundation__CTimeSpan * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CFoundation__CTimeSpan * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CFoundation__CTimeSpan * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CFoundation__CTimeSpan * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CFoundation__CTimeSpan **first);

    END_INTERFACE
} __FIIterable_1_Windows__CFoundation__CTimeSpanVtbl;

interface __FIIterable_1_Windows__CFoundation__CTimeSpan
{
    CONST_VTBL struct __FIIterable_1_Windows__CFoundation__CTimeSpanVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CFoundation__CTimeSpan_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CFoundation__CTimeSpan_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CFoundation__CTimeSpan_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CFoundation__CTimeSpan_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CFoundation__CTimeSpan_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CFoundation__CTimeSpan_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CFoundation__CTimeSpan_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CFoundation__CTimeSpan_INTERFACE_DEFINED__



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

enum __x_ABI_CWindows_CMedia_CTranscoding_CTranscodeFailureReason;
#if !defined(____FIAsyncOperationProgressHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double_INTERFACE_DEFINED__)
#define ____FIAsyncOperationProgressHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationProgressHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double __FIAsyncOperationProgressHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationProgressHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double;

typedef interface __FIAsyncOperationWithProgress_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double __FIAsyncOperationWithProgress_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double;

typedef struct __FIAsyncOperationProgressHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_doubleVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double * This, /* [in] */ __RPC__in_opt __FIAsyncOperationWithProgress_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double *asyncInfo, /* [in] */ UINT64 progressInfo);
    END_INTERFACE
} __FIAsyncOperationProgressHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_doubleVtbl;

interface __FIAsyncOperationProgressHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double
{
    CONST_VTBL struct __FIAsyncOperationProgressHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_doubleVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationProgressHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationProgressHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationProgressHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationProgressHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double_Invoke(This,asyncInfo,progressInfo)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,progressInfo) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationProgressHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double_INTERFACE_DEFINED__



#if !defined(____FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double_INTERFACE_DEFINED__)
#define ____FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double;

//  Forward declare the async operation.
typedef interface __FIAsyncOperationWithProgress_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double __FIAsyncOperationWithProgress_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double;

typedef struct __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_doubleVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double * This, /* [in] */ __RPC__in_opt __FIAsyncOperationWithProgress_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_doubleVtbl;

interface __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double
{
    CONST_VTBL struct __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_doubleVtbl *lpVtbl;
};



#ifdef COBJMACROS
#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */



#endif // ____FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double_INTERFACE_DEFINED__



#if !defined(____FIAsyncOperationWithProgress_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double_INTERFACE_DEFINED__)
#define ____FIAsyncOperationWithProgress_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationWithProgress_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double __FIAsyncOperationWithProgress_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationWithProgress_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double;

typedef struct __FIAsyncOperationWithProgress_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_doubleVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Progress )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double * This, /* [in] */ __RPC__in_opt __FIAsyncOperationProgressHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Progress )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationProgressHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double **handler);
    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double * This, /* [in] */ __RPC__in_opt __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double * This, /* [retval][out] */ __RPC__deref_out_opt enum __x_ABI_CWindows_CMedia_CTranscoding_CTranscodeFailureReason *results);
    END_INTERFACE
} __FIAsyncOperationWithProgress_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_doubleVtbl;

interface __FIAsyncOperationWithProgress_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double
{
    CONST_VTBL struct __FIAsyncOperationWithProgress_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_doubleVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationWithProgress_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationWithProgress_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperationWithProgress_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double_put_Progress(This,handler)	\
    ( (This)->lpVtbl -> put_Progress(This,handler) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double_get_Progress(This,handler)	\
    ( (This)->lpVtbl -> get_Progress(This,handler) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */



#endif // ____FIAsyncOperationWithProgress_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double_INTERFACE_DEFINED__



#ifndef ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIAsyncAction __x_ABI_CWindows_CFoundation_CIAsyncAction;

#endif // ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__



typedef struct __x_ABI_CWindows_CFoundation_CRect __x_ABI_CWindows_CFoundation_CRect;


typedef struct __x_ABI_CWindows_CFoundation_CTimeSpan __x_ABI_CWindows_CFoundation_CTimeSpan;




#ifndef ____x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface;

#endif // ____x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface_FWD_DEFINED__










#ifndef ____x_ABI_CWindows_CMedia_CCore_CIMediaStreamSource_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CCore_CIMediaStreamSource_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSource __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSource;

#endif // ____x_ABI_CWindows_CMedia_CCore_CIMediaStreamSource_FWD_DEFINED__






#ifndef ____x_ABI_CWindows_CMedia_CEffects_CIVideoCompositorDefinition_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CEffects_CIVideoCompositorDefinition_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CEffects_CIVideoCompositorDefinition __x_ABI_CWindows_CMedia_CEffects_CIVideoCompositorDefinition;

#endif // ____x_ABI_CWindows_CMedia_CEffects_CIVideoCompositorDefinition_FWD_DEFINED__






#ifndef ____x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties;

#endif // ____x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile;

#endif // ____x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties;

#endif // ____x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties_FWD_DEFINED__






typedef enum __x_ABI_CWindows_CMedia_CTranscoding_CTranscodeFailureReason __x_ABI_CWindows_CMedia_CTranscoding_CTranscodeFailureReason;




#ifndef ____x_ABI_CWindows_CStorage_CIStorageFile_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CIStorageFile_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CIStorageFile __x_ABI_CWindows_CStorage_CIStorageFile;

#endif // ____x_ABI_CWindows_CStorage_CIStorageFile_FWD_DEFINED__






typedef struct __x_ABI_CWindows_CUI_CColor __x_ABI_CWindows_CUI_CColor;




typedef enum __x_ABI_CWindows_CMedia_CEditing_CMediaTrimmingPreference __x_ABI_CWindows_CMedia_CEditing_CMediaTrimmingPreference;


typedef enum __x_ABI_CWindows_CMedia_CEditing_CVideoFramePrecision __x_ABI_CWindows_CMedia_CEditing_CVideoFramePrecision;




























/*
 *
 * Struct Windows.Media.Editing.MediaTrimmingPreference
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CMedia_CEditing_CMediaTrimmingPreference
{
    MediaTrimmingPreference_Fast = 0,
    MediaTrimmingPreference_Precise = 1,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Media.Editing.VideoFramePrecision
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CMedia_CEditing_CVideoFramePrecision
{
    VideoFramePrecision_NearestFrame = 0,
    VideoFramePrecision_NearestKeyFrame = 1,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Editing.IBackgroundAudioTrack
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Editing.BackgroundAudioTrack
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrack_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrack_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Editing_IBackgroundAudioTrack[] = L"Windows.Media.Editing.IBackgroundAudioTrack";
/* [object, uuid("4B91B3BD-9E21-4266-A9C2-67DD011A2357"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrackVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrack * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrack * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrack * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrack * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrack * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrack * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_TrimTimeFromStart )(
        __x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrack * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_TrimTimeFromStart )(
        __x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrack * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CTimeSpan value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_TrimTimeFromEnd )(
        __x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrack * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_TrimTimeFromEnd )(
        __x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrack * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CTimeSpan value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_OriginalDuration )(
        __x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrack * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_TrimmedDuration )(
        __x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrack * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_UserData )(
        __x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrack * This,
        /* [retval, out] */__RPC__deref_out_opt __FIMap_2_HSTRING_HSTRING * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Delay )(
        __x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrack * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CTimeSpan value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Delay )(
        __x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrack * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Volume )(
        __x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrack * This,
        /* [in] */DOUBLE value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Volume )(
        __x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrack * This,
        /* [retval, out] */__RPC__out DOUBLE * value
        );
    HRESULT ( STDMETHODCALLTYPE *Clone )(
        __x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrack * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrack * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetAudioEncodingProperties )(
        __x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrack * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AudioEffectDefinitions )(
        __x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrack * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrackVtbl;

interface __x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrack
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrackVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrack_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrack_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrack_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrack_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrack_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrack_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrack_get_TrimTimeFromStart(This,value) \
    ( (This)->lpVtbl->get_TrimTimeFromStart(This,value) )

#define __x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrack_put_TrimTimeFromStart(This,value) \
    ( (This)->lpVtbl->put_TrimTimeFromStart(This,value) )

#define __x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrack_get_TrimTimeFromEnd(This,value) \
    ( (This)->lpVtbl->get_TrimTimeFromEnd(This,value) )

#define __x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrack_put_TrimTimeFromEnd(This,value) \
    ( (This)->lpVtbl->put_TrimTimeFromEnd(This,value) )

#define __x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrack_get_OriginalDuration(This,value) \
    ( (This)->lpVtbl->get_OriginalDuration(This,value) )

#define __x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrack_get_TrimmedDuration(This,value) \
    ( (This)->lpVtbl->get_TrimmedDuration(This,value) )

#define __x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrack_get_UserData(This,value) \
    ( (This)->lpVtbl->get_UserData(This,value) )

#define __x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrack_put_Delay(This,value) \
    ( (This)->lpVtbl->put_Delay(This,value) )

#define __x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrack_get_Delay(This,value) \
    ( (This)->lpVtbl->get_Delay(This,value) )

#define __x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrack_put_Volume(This,value) \
    ( (This)->lpVtbl->put_Volume(This,value) )

#define __x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrack_get_Volume(This,value) \
    ( (This)->lpVtbl->get_Volume(This,value) )

#define __x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrack_Clone(This,value) \
    ( (This)->lpVtbl->Clone(This,value) )

#define __x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrack_GetAudioEncodingProperties(This,value) \
    ( (This)->lpVtbl->GetAudioEncodingProperties(This,value) )

#define __x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrack_get_AudioEffectDefinitions(This,value) \
    ( (This)->lpVtbl->get_AudioEffectDefinitions(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrack;
#endif /* !defined(____x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrack_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Editing.IBackgroundAudioTrackStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Editing.BackgroundAudioTrack
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrackStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrackStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Editing_IBackgroundAudioTrackStatics[] = L"Windows.Media.Editing.IBackgroundAudioTrackStatics";
/* [object, uuid("D9B1C0D7-D018-42A8-A559-CB4D9E97E664"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrackStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrackStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrackStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrackStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrackStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrackStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrackStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateFromEmbeddedAudioTrack )(
        __x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrackStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CMedia_CEditing_CIEmbeddedAudioTrack * embeddedAudioTrack,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrack * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateFromFileAsync )(
        __x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrackStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile * file,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CEditing__CBackgroundAudioTrack * * operation
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrackStaticsVtbl;

interface __x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrackStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrackStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrackStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrackStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrackStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrackStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrackStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrackStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrackStatics_CreateFromEmbeddedAudioTrack(This,embeddedAudioTrack,value) \
    ( (This)->lpVtbl->CreateFromEmbeddedAudioTrack(This,embeddedAudioTrack,value) )

#define __x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrackStatics_CreateFromFileAsync(This,file,operation) \
    ( (This)->lpVtbl->CreateFromFileAsync(This,file,operation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrackStatics;
#endif /* !defined(____x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrackStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Editing.IEmbeddedAudioTrack
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Editing.EmbeddedAudioTrack
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CEditing_CIEmbeddedAudioTrack_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CEditing_CIEmbeddedAudioTrack_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Editing_IEmbeddedAudioTrack[] = L"Windows.Media.Editing.IEmbeddedAudioTrack";
/* [object, uuid("55EE5A7A-2D30-3FBA-A190-4F1A6454F88F"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CEditing_CIEmbeddedAudioTrackVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIEmbeddedAudioTrack * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIEmbeddedAudioTrack * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIEmbeddedAudioTrack * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIEmbeddedAudioTrack * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIEmbeddedAudioTrack * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIEmbeddedAudioTrack * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetAudioEncodingProperties )(
        __x_ABI_CWindows_CMedia_CEditing_CIEmbeddedAudioTrack * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CEditing_CIEmbeddedAudioTrackVtbl;

interface __x_ABI_CWindows_CMedia_CEditing_CIEmbeddedAudioTrack
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CEditing_CIEmbeddedAudioTrackVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CEditing_CIEmbeddedAudioTrack_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CEditing_CIEmbeddedAudioTrack_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CEditing_CIEmbeddedAudioTrack_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CEditing_CIEmbeddedAudioTrack_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CEditing_CIEmbeddedAudioTrack_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CEditing_CIEmbeddedAudioTrack_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CEditing_CIEmbeddedAudioTrack_GetAudioEncodingProperties(This,value) \
    ( (This)->lpVtbl->GetAudioEncodingProperties(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CEditing_CIEmbeddedAudioTrack;
#endif /* !defined(____x_ABI_CWindows_CMedia_CEditing_CIEmbeddedAudioTrack_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Editing.IMediaClip
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Editing.MediaClip
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CEditing_CIMediaClip_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CEditing_CIMediaClip_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Editing_IMediaClip[] = L"Windows.Media.Editing.IMediaClip";
/* [object, uuid("53F25366-5FBA-3EA4-8693-24761811140A"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CEditing_CIMediaClipVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIMediaClip * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIMediaClip * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIMediaClip * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIMediaClip * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIMediaClip * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIMediaClip * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_TrimTimeFromStart )(
        __x_ABI_CWindows_CMedia_CEditing_CIMediaClip * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_TrimTimeFromStart )(
        __x_ABI_CWindows_CMedia_CEditing_CIMediaClip * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CTimeSpan value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_TrimTimeFromEnd )(
        __x_ABI_CWindows_CMedia_CEditing_CIMediaClip * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_TrimTimeFromEnd )(
        __x_ABI_CWindows_CMedia_CEditing_CIMediaClip * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CTimeSpan value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_OriginalDuration )(
        __x_ABI_CWindows_CMedia_CEditing_CIMediaClip * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_TrimmedDuration )(
        __x_ABI_CWindows_CMedia_CEditing_CIMediaClip * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_UserData )(
        __x_ABI_CWindows_CMedia_CEditing_CIMediaClip * This,
        /* [retval, out] */__RPC__deref_out_opt __FIMap_2_HSTRING_HSTRING * * value
        );
    HRESULT ( STDMETHODCALLTYPE *Clone )(
        __x_ABI_CWindows_CMedia_CEditing_CIMediaClip * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CEditing_CIMediaClip * * result
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_StartTimeInComposition )(
        __x_ABI_CWindows_CMedia_CEditing_CIMediaClip * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_EndTimeInComposition )(
        __x_ABI_CWindows_CMedia_CEditing_CIMediaClip * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_EmbeddedAudioTracks )(
        __x_ABI_CWindows_CMedia_CEditing_CIMediaClip * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CEditing__CEmbeddedAudioTrack * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SelectedEmbeddedAudioTrackIndex )(
        __x_ABI_CWindows_CMedia_CEditing_CIMediaClip * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_SelectedEmbeddedAudioTrackIndex )(
        __x_ABI_CWindows_CMedia_CEditing_CIMediaClip * This,
        /* [in] */UINT32 value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Volume )(
        __x_ABI_CWindows_CMedia_CEditing_CIMediaClip * This,
        /* [in] */DOUBLE value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Volume )(
        __x_ABI_CWindows_CMedia_CEditing_CIMediaClip * This,
        /* [retval, out] */__RPC__out DOUBLE * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetVideoEncodingProperties )(
        __x_ABI_CWindows_CMedia_CEditing_CIMediaClip * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AudioEffectDefinitions )(
        __x_ABI_CWindows_CMedia_CEditing_CIMediaClip * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_VideoEffectDefinitions )(
        __x_ABI_CWindows_CMedia_CEditing_CIMediaClip * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CMedia__CEffects__CIVideoEffectDefinition * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CEditing_CIMediaClipVtbl;

interface __x_ABI_CWindows_CMedia_CEditing_CIMediaClip
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CEditing_CIMediaClipVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CEditing_CIMediaClip_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CEditing_CIMediaClip_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CEditing_CIMediaClip_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CEditing_CIMediaClip_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CEditing_CIMediaClip_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CEditing_CIMediaClip_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CEditing_CIMediaClip_get_TrimTimeFromStart(This,value) \
    ( (This)->lpVtbl->get_TrimTimeFromStart(This,value) )

#define __x_ABI_CWindows_CMedia_CEditing_CIMediaClip_put_TrimTimeFromStart(This,value) \
    ( (This)->lpVtbl->put_TrimTimeFromStart(This,value) )

#define __x_ABI_CWindows_CMedia_CEditing_CIMediaClip_get_TrimTimeFromEnd(This,value) \
    ( (This)->lpVtbl->get_TrimTimeFromEnd(This,value) )

#define __x_ABI_CWindows_CMedia_CEditing_CIMediaClip_put_TrimTimeFromEnd(This,value) \
    ( (This)->lpVtbl->put_TrimTimeFromEnd(This,value) )

#define __x_ABI_CWindows_CMedia_CEditing_CIMediaClip_get_OriginalDuration(This,value) \
    ( (This)->lpVtbl->get_OriginalDuration(This,value) )

#define __x_ABI_CWindows_CMedia_CEditing_CIMediaClip_get_TrimmedDuration(This,value) \
    ( (This)->lpVtbl->get_TrimmedDuration(This,value) )

#define __x_ABI_CWindows_CMedia_CEditing_CIMediaClip_get_UserData(This,value) \
    ( (This)->lpVtbl->get_UserData(This,value) )

#define __x_ABI_CWindows_CMedia_CEditing_CIMediaClip_Clone(This,result) \
    ( (This)->lpVtbl->Clone(This,result) )

#define __x_ABI_CWindows_CMedia_CEditing_CIMediaClip_get_StartTimeInComposition(This,value) \
    ( (This)->lpVtbl->get_StartTimeInComposition(This,value) )

#define __x_ABI_CWindows_CMedia_CEditing_CIMediaClip_get_EndTimeInComposition(This,value) \
    ( (This)->lpVtbl->get_EndTimeInComposition(This,value) )

#define __x_ABI_CWindows_CMedia_CEditing_CIMediaClip_get_EmbeddedAudioTracks(This,value) \
    ( (This)->lpVtbl->get_EmbeddedAudioTracks(This,value) )

#define __x_ABI_CWindows_CMedia_CEditing_CIMediaClip_get_SelectedEmbeddedAudioTrackIndex(This,value) \
    ( (This)->lpVtbl->get_SelectedEmbeddedAudioTrackIndex(This,value) )

#define __x_ABI_CWindows_CMedia_CEditing_CIMediaClip_put_SelectedEmbeddedAudioTrackIndex(This,value) \
    ( (This)->lpVtbl->put_SelectedEmbeddedAudioTrackIndex(This,value) )

#define __x_ABI_CWindows_CMedia_CEditing_CIMediaClip_put_Volume(This,value) \
    ( (This)->lpVtbl->put_Volume(This,value) )

#define __x_ABI_CWindows_CMedia_CEditing_CIMediaClip_get_Volume(This,value) \
    ( (This)->lpVtbl->get_Volume(This,value) )

#define __x_ABI_CWindows_CMedia_CEditing_CIMediaClip_GetVideoEncodingProperties(This,value) \
    ( (This)->lpVtbl->GetVideoEncodingProperties(This,value) )

#define __x_ABI_CWindows_CMedia_CEditing_CIMediaClip_get_AudioEffectDefinitions(This,value) \
    ( (This)->lpVtbl->get_AudioEffectDefinitions(This,value) )

#define __x_ABI_CWindows_CMedia_CEditing_CIMediaClip_get_VideoEffectDefinitions(This,value) \
    ( (This)->lpVtbl->get_VideoEffectDefinitions(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CEditing_CIMediaClip;
#endif /* !defined(____x_ABI_CWindows_CMedia_CEditing_CIMediaClip_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Editing.IMediaClipStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Editing.MediaClip
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CEditing_CIMediaClipStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CEditing_CIMediaClipStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Editing_IMediaClipStatics[] = L"Windows.Media.Editing.IMediaClipStatics";
/* [object, uuid("FA402B68-928F-43C4-BC6E-783A1A359656"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CEditing_CIMediaClipStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIMediaClipStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIMediaClipStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIMediaClipStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIMediaClipStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIMediaClipStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIMediaClipStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateFromColor )(
        __x_ABI_CWindows_CMedia_CEditing_CIMediaClipStatics * This,
        /* [in] */__x_ABI_CWindows_CUI_CColor color,
        /* [in] */__x_ABI_CWindows_CFoundation_CTimeSpan originalDuration,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CEditing_CIMediaClip * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateFromFileAsync )(
        __x_ABI_CWindows_CMedia_CEditing_CIMediaClipStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile * file,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CEditing__CMediaClip * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *CreateFromImageFileAsync )(
        __x_ABI_CWindows_CMedia_CEditing_CIMediaClipStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile * file,
        /* [in] */__x_ABI_CWindows_CFoundation_CTimeSpan originalDuration,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CEditing__CMediaClip * * operation
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CEditing_CIMediaClipStaticsVtbl;

interface __x_ABI_CWindows_CMedia_CEditing_CIMediaClipStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CEditing_CIMediaClipStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CEditing_CIMediaClipStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CEditing_CIMediaClipStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CEditing_CIMediaClipStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CEditing_CIMediaClipStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CEditing_CIMediaClipStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CEditing_CIMediaClipStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CEditing_CIMediaClipStatics_CreateFromColor(This,color,originalDuration,value) \
    ( (This)->lpVtbl->CreateFromColor(This,color,originalDuration,value) )

#define __x_ABI_CWindows_CMedia_CEditing_CIMediaClipStatics_CreateFromFileAsync(This,file,operation) \
    ( (This)->lpVtbl->CreateFromFileAsync(This,file,operation) )

#define __x_ABI_CWindows_CMedia_CEditing_CIMediaClipStatics_CreateFromImageFileAsync(This,file,originalDuration,operation) \
    ( (This)->lpVtbl->CreateFromImageFileAsync(This,file,originalDuration,operation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CEditing_CIMediaClipStatics;
#endif /* !defined(____x_ABI_CWindows_CMedia_CEditing_CIMediaClipStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Editing.IMediaClipStatics2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Editing.MediaClip
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CEditing_CIMediaClipStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CEditing_CIMediaClipStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Editing_IMediaClipStatics2[] = L"Windows.Media.Editing.IMediaClipStatics2";
/* [object, uuid("5B1DD7B3-854E-4D9B-877D-4774A556CD12"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CEditing_CIMediaClipStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIMediaClipStatics2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIMediaClipStatics2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIMediaClipStatics2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIMediaClipStatics2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIMediaClipStatics2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIMediaClipStatics2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateFromSurface )(
        __x_ABI_CWindows_CMedia_CEditing_CIMediaClipStatics2 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface * surface,
        /* [in] */__x_ABI_CWindows_CFoundation_CTimeSpan originalDuration,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CEditing_CIMediaClip * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CEditing_CIMediaClipStatics2Vtbl;

interface __x_ABI_CWindows_CMedia_CEditing_CIMediaClipStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CEditing_CIMediaClipStatics2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CEditing_CIMediaClipStatics2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CEditing_CIMediaClipStatics2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CEditing_CIMediaClipStatics2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CEditing_CIMediaClipStatics2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CEditing_CIMediaClipStatics2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CEditing_CIMediaClipStatics2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CEditing_CIMediaClipStatics2_CreateFromSurface(This,surface,originalDuration,value) \
    ( (This)->lpVtbl->CreateFromSurface(This,surface,originalDuration,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CEditing_CIMediaClipStatics2;
#endif /* !defined(____x_ABI_CWindows_CMedia_CEditing_CIMediaClipStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Editing.IMediaComposition
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Editing.MediaComposition
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CEditing_CIMediaComposition_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CEditing_CIMediaComposition_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Editing_IMediaComposition[] = L"Windows.Media.Editing.IMediaComposition";
/* [object, uuid("2E06E605-DC71-41D6-B837-2D2BC14A2947"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CEditing_CIMediaCompositionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIMediaComposition * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIMediaComposition * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIMediaComposition * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIMediaComposition * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIMediaComposition * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIMediaComposition * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Duration )(
        __x_ABI_CWindows_CMedia_CEditing_CIMediaComposition * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Clips )(
        __x_ABI_CWindows_CMedia_CEditing_CIMediaComposition * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CMedia__CEditing__CMediaClip * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_BackgroundAudioTracks )(
        __x_ABI_CWindows_CMedia_CEditing_CIMediaComposition * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CMedia__CEditing__CBackgroundAudioTrack * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_UserData )(
        __x_ABI_CWindows_CMedia_CEditing_CIMediaComposition * This,
        /* [retval, out] */__RPC__deref_out_opt __FIMap_2_HSTRING_HSTRING * * value
        );
    HRESULT ( STDMETHODCALLTYPE *Clone )(
        __x_ABI_CWindows_CMedia_CEditing_CIMediaComposition * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CEditing_CIMediaComposition * * result
        );
    HRESULT ( STDMETHODCALLTYPE *SaveAsync )(
        __x_ABI_CWindows_CMedia_CEditing_CIMediaComposition * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile * file,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *GetThumbnailAsync )(
        __x_ABI_CWindows_CMedia_CEditing_CIMediaComposition * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CTimeSpan timeFromStart,
        /* [in] */INT32 scaledWidth,
        /* [in] */INT32 scaledHeight,
        /* [in] */__x_ABI_CWindows_CMedia_CEditing_CVideoFramePrecision framePrecision,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CGraphics__CImaging__CImageStream * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *GetThumbnailsAsync )(
        __x_ABI_CWindows_CMedia_CEditing_CIMediaComposition * This,
        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CFoundation__CTimeSpan * timesFromStart,
        /* [in] */INT32 scaledWidth,
        /* [in] */INT32 scaledHeight,
        /* [in] */__x_ABI_CWindows_CMedia_CEditing_CVideoFramePrecision framePrecision,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CGraphics__CImaging__CImageStream * * operation
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *RenderToFileAsync )(
        __x_ABI_CWindows_CMedia_CEditing_CIMediaComposition * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile * destination,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double * * operation
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *RenderToFileWithTrimmingPreferenceAsync )(
        __x_ABI_CWindows_CMedia_CEditing_CIMediaComposition * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile * destination,
        /* [in] */__x_ABI_CWindows_CMedia_CEditing_CMediaTrimmingPreference trimmingPreference,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double * * operation
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *RenderToFileWithProfileAsync )(
        __x_ABI_CWindows_CMedia_CEditing_CIMediaComposition * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile * destination,
        /* [in] */__x_ABI_CWindows_CMedia_CEditing_CMediaTrimmingPreference trimmingPreference,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile * encodingProfile,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *CreateDefaultEncodingProfile )(
        __x_ABI_CWindows_CMedia_CEditing_CIMediaComposition * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile * * value
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *GenerateMediaStreamSource )(
        __x_ABI_CWindows_CMedia_CEditing_CIMediaComposition * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSource * * value
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *GenerateMediaStreamSourceWithProfile )(
        __x_ABI_CWindows_CMedia_CEditing_CIMediaComposition * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile * encodingProfile,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSource * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GeneratePreviewMediaStreamSource )(
        __x_ABI_CWindows_CMedia_CEditing_CIMediaComposition * This,
        /* [in] */INT32 scaledWidth,
        /* [in] */INT32 scaledHeight,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSource * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CEditing_CIMediaCompositionVtbl;

interface __x_ABI_CWindows_CMedia_CEditing_CIMediaComposition
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CEditing_CIMediaCompositionVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CEditing_CIMediaComposition_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CEditing_CIMediaComposition_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CEditing_CIMediaComposition_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CEditing_CIMediaComposition_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CEditing_CIMediaComposition_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CEditing_CIMediaComposition_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CEditing_CIMediaComposition_get_Duration(This,value) \
    ( (This)->lpVtbl->get_Duration(This,value) )

#define __x_ABI_CWindows_CMedia_CEditing_CIMediaComposition_get_Clips(This,value) \
    ( (This)->lpVtbl->get_Clips(This,value) )

#define __x_ABI_CWindows_CMedia_CEditing_CIMediaComposition_get_BackgroundAudioTracks(This,value) \
    ( (This)->lpVtbl->get_BackgroundAudioTracks(This,value) )

#define __x_ABI_CWindows_CMedia_CEditing_CIMediaComposition_get_UserData(This,value) \
    ( (This)->lpVtbl->get_UserData(This,value) )

#define __x_ABI_CWindows_CMedia_CEditing_CIMediaComposition_Clone(This,result) \
    ( (This)->lpVtbl->Clone(This,result) )

#define __x_ABI_CWindows_CMedia_CEditing_CIMediaComposition_SaveAsync(This,file,operation) \
    ( (This)->lpVtbl->SaveAsync(This,file,operation) )

#define __x_ABI_CWindows_CMedia_CEditing_CIMediaComposition_GetThumbnailAsync(This,timeFromStart,scaledWidth,scaledHeight,framePrecision,operation) \
    ( (This)->lpVtbl->GetThumbnailAsync(This,timeFromStart,scaledWidth,scaledHeight,framePrecision,operation) )

#define __x_ABI_CWindows_CMedia_CEditing_CIMediaComposition_GetThumbnailsAsync(This,timesFromStart,scaledWidth,scaledHeight,framePrecision,operation) \
    ( (This)->lpVtbl->GetThumbnailsAsync(This,timesFromStart,scaledWidth,scaledHeight,framePrecision,operation) )

#define __x_ABI_CWindows_CMedia_CEditing_CIMediaComposition_RenderToFileAsync(This,destination,operation) \
    ( (This)->lpVtbl->RenderToFileAsync(This,destination,operation) )

#define __x_ABI_CWindows_CMedia_CEditing_CIMediaComposition_RenderToFileWithTrimmingPreferenceAsync(This,destination,trimmingPreference,operation) \
    ( (This)->lpVtbl->RenderToFileWithTrimmingPreferenceAsync(This,destination,trimmingPreference,operation) )

#define __x_ABI_CWindows_CMedia_CEditing_CIMediaComposition_RenderToFileWithProfileAsync(This,destination,trimmingPreference,encodingProfile,operation) \
    ( (This)->lpVtbl->RenderToFileWithProfileAsync(This,destination,trimmingPreference,encodingProfile,operation) )

#define __x_ABI_CWindows_CMedia_CEditing_CIMediaComposition_CreateDefaultEncodingProfile(This,value) \
    ( (This)->lpVtbl->CreateDefaultEncodingProfile(This,value) )

#define __x_ABI_CWindows_CMedia_CEditing_CIMediaComposition_GenerateMediaStreamSource(This,value) \
    ( (This)->lpVtbl->GenerateMediaStreamSource(This,value) )

#define __x_ABI_CWindows_CMedia_CEditing_CIMediaComposition_GenerateMediaStreamSourceWithProfile(This,encodingProfile,value) \
    ( (This)->lpVtbl->GenerateMediaStreamSourceWithProfile(This,encodingProfile,value) )

#define __x_ABI_CWindows_CMedia_CEditing_CIMediaComposition_GeneratePreviewMediaStreamSource(This,scaledWidth,scaledHeight,value) \
    ( (This)->lpVtbl->GeneratePreviewMediaStreamSource(This,scaledWidth,scaledHeight,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CEditing_CIMediaComposition;
#endif /* !defined(____x_ABI_CWindows_CMedia_CEditing_CIMediaComposition_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Editing.IMediaComposition2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Editing.MediaComposition
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CEditing_CIMediaComposition2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CEditing_CIMediaComposition2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Editing_IMediaComposition2[] = L"Windows.Media.Editing.IMediaComposition2";
/* [object, uuid("A59E5372-2366-492C-BEC8-E6DFBA6D0281"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CEditing_CIMediaComposition2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIMediaComposition2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIMediaComposition2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIMediaComposition2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIMediaComposition2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIMediaComposition2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIMediaComposition2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_OverlayLayers )(
        __x_ABI_CWindows_CMedia_CEditing_CIMediaComposition2 * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CMedia__CEditing__CMediaOverlayLayer * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CEditing_CIMediaComposition2Vtbl;

interface __x_ABI_CWindows_CMedia_CEditing_CIMediaComposition2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CEditing_CIMediaComposition2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CEditing_CIMediaComposition2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CEditing_CIMediaComposition2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CEditing_CIMediaComposition2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CEditing_CIMediaComposition2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CEditing_CIMediaComposition2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CEditing_CIMediaComposition2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CEditing_CIMediaComposition2_get_OverlayLayers(This,value) \
    ( (This)->lpVtbl->get_OverlayLayers(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CEditing_CIMediaComposition2;
#endif /* !defined(____x_ABI_CWindows_CMedia_CEditing_CIMediaComposition2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Editing.IMediaCompositionStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Editing.MediaComposition
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CEditing_CIMediaCompositionStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CEditing_CIMediaCompositionStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Editing_IMediaCompositionStatics[] = L"Windows.Media.Editing.IMediaCompositionStatics";
/* [object, uuid("87A08F04-E32A-45CE-8F66-A30DF0766224"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CEditing_CIMediaCompositionStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIMediaCompositionStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIMediaCompositionStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIMediaCompositionStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIMediaCompositionStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIMediaCompositionStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIMediaCompositionStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *LoadAsync )(
        __x_ABI_CWindows_CMedia_CEditing_CIMediaCompositionStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile * file,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CEditing__CMediaComposition * * operation
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CEditing_CIMediaCompositionStaticsVtbl;

interface __x_ABI_CWindows_CMedia_CEditing_CIMediaCompositionStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CEditing_CIMediaCompositionStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CEditing_CIMediaCompositionStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CEditing_CIMediaCompositionStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CEditing_CIMediaCompositionStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CEditing_CIMediaCompositionStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CEditing_CIMediaCompositionStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CEditing_CIMediaCompositionStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CEditing_CIMediaCompositionStatics_LoadAsync(This,file,operation) \
    ( (This)->lpVtbl->LoadAsync(This,file,operation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CEditing_CIMediaCompositionStatics;
#endif /* !defined(____x_ABI_CWindows_CMedia_CEditing_CIMediaCompositionStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Editing.IMediaOverlay
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Editing.MediaOverlay
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CEditing_CIMediaOverlay_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CEditing_CIMediaOverlay_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Editing_IMediaOverlay[] = L"Windows.Media.Editing.IMediaOverlay";
/* [object, uuid("A902AE5D-7869-4830-8AB1-94DC01C05FA4"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlay * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlay * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlay * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlay * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlay * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlay * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Position )(
        __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlay * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CRect * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Position )(
        __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlay * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CRect value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Delay )(
        __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlay * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CTimeSpan value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Delay )(
        __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlay * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Opacity )(
        __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlay * This,
        /* [retval, out] */__RPC__out DOUBLE * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Opacity )(
        __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlay * This,
        /* [in] */DOUBLE value
        );
    HRESULT ( STDMETHODCALLTYPE *Clone )(
        __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlay * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlay * * result
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Clip )(
        __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlay * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CEditing_CIMediaClip * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AudioEnabled )(
        __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlay * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_AudioEnabled )(
        __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlay * This,
        /* [in] */boolean value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayVtbl;

interface __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlay
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlay_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlay_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlay_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlay_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlay_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlay_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlay_get_Position(This,value) \
    ( (This)->lpVtbl->get_Position(This,value) )

#define __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlay_put_Position(This,value) \
    ( (This)->lpVtbl->put_Position(This,value) )

#define __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlay_put_Delay(This,value) \
    ( (This)->lpVtbl->put_Delay(This,value) )

#define __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlay_get_Delay(This,value) \
    ( (This)->lpVtbl->get_Delay(This,value) )

#define __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlay_get_Opacity(This,value) \
    ( (This)->lpVtbl->get_Opacity(This,value) )

#define __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlay_put_Opacity(This,value) \
    ( (This)->lpVtbl->put_Opacity(This,value) )

#define __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlay_Clone(This,result) \
    ( (This)->lpVtbl->Clone(This,result) )

#define __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlay_get_Clip(This,value) \
    ( (This)->lpVtbl->get_Clip(This,value) )

#define __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlay_get_AudioEnabled(This,value) \
    ( (This)->lpVtbl->get_AudioEnabled(This,value) )

#define __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlay_put_AudioEnabled(This,value) \
    ( (This)->lpVtbl->put_AudioEnabled(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CEditing_CIMediaOverlay;
#endif /* !defined(____x_ABI_CWindows_CMedia_CEditing_CIMediaOverlay_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Editing.IMediaOverlayFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Editing.MediaOverlay
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Editing_IMediaOverlayFactory[] = L"Windows.Media.Editing.IMediaOverlayFactory";
/* [object, uuid("B584828A-6188-4F8F-A2E0-AA552D598E18"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayFactory * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CMedia_CEditing_CIMediaClip * clip,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlay * * mediaOverlay
        );
    HRESULT ( STDMETHODCALLTYPE *CreateWithPositionAndOpacity )(
        __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayFactory * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CMedia_CEditing_CIMediaClip * clip,
        /* [in] */__x_ABI_CWindows_CFoundation_CRect position,
        /* [in] */DOUBLE opacity,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlay * * mediaOverlay
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayFactoryVtbl;

interface __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayFactory_Create(This,clip,mediaOverlay) \
    ( (This)->lpVtbl->Create(This,clip,mediaOverlay) )

#define __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayFactory_CreateWithPositionAndOpacity(This,clip,position,opacity,mediaOverlay) \
    ( (This)->lpVtbl->CreateWithPositionAndOpacity(This,clip,position,opacity,mediaOverlay) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayFactory;
#endif /* !defined(____x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Editing.IMediaOverlayLayer
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Editing.MediaOverlayLayer
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayLayer_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayLayer_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Editing_IMediaOverlayLayer[] = L"Windows.Media.Editing.IMediaOverlayLayer";
/* [object, uuid("A6D9BA57-EEDA-46C6-BBE5-E398C84168AC"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayLayerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayLayer * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayLayer * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayLayer * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayLayer * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayLayer * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayLayer * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Clone )(
        __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayLayer * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayLayer * * result
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Overlays )(
        __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayLayer * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CMedia__CEditing__CMediaOverlay * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CustomCompositorDefinition )(
        __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayLayer * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CEffects_CIVideoCompositorDefinition * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayLayerVtbl;

interface __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayLayer
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayLayerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayLayer_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayLayer_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayLayer_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayLayer_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayLayer_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayLayer_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayLayer_Clone(This,result) \
    ( (This)->lpVtbl->Clone(This,result) )

#define __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayLayer_get_Overlays(This,value) \
    ( (This)->lpVtbl->get_Overlays(This,value) )

#define __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayLayer_get_CustomCompositorDefinition(This,value) \
    ( (This)->lpVtbl->get_CustomCompositorDefinition(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayLayer;
#endif /* !defined(____x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayLayer_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Editing.IMediaOverlayLayerFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Editing.MediaOverlayLayer
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayLayerFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayLayerFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Editing_IMediaOverlayLayerFactory[] = L"Windows.Media.Editing.IMediaOverlayLayerFactory";
/* [object, uuid("947CB473-A39E-4362-ABBF-9F8B5070A062"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayLayerFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayLayerFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayLayerFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayLayerFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayLayerFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayLayerFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayLayerFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateWithCompositorDefinition )(
        __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayLayerFactory * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CMedia_CEffects_CIVideoCompositorDefinition * compositorDefinition,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayLayer * * mediaOverlayLayer
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayLayerFactoryVtbl;

interface __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayLayerFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayLayerFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayLayerFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayLayerFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayLayerFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayLayerFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayLayerFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayLayerFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayLayerFactory_CreateWithCompositorDefinition(This,compositorDefinition,mediaOverlayLayer) \
    ( (This)->lpVtbl->CreateWithCompositorDefinition(This,compositorDefinition,mediaOverlayLayer) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayLayerFactory;
#endif /* !defined(____x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayLayerFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Editing.BackgroundAudioTrack
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Media.Editing.IBackgroundAudioTrackStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Media.Editing.IBackgroundAudioTrack ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Editing_BackgroundAudioTrack_DEFINED
#define RUNTIMECLASS_Windows_Media_Editing_BackgroundAudioTrack_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Editing_BackgroundAudioTrack[] = L"Windows.Media.Editing.BackgroundAudioTrack";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Editing.EmbeddedAudioTrack
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Editing.IEmbeddedAudioTrack ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Editing_EmbeddedAudioTrack_DEFINED
#define RUNTIMECLASS_Windows_Media_Editing_EmbeddedAudioTrack_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Editing_EmbeddedAudioTrack[] = L"Windows.Media.Editing.EmbeddedAudioTrack";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Editing.MediaClip
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Media.Editing.IMediaClipStatics2 interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.Media.Editing.IMediaClipStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Media.Editing.IMediaClip ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Editing_MediaClip_DEFINED
#define RUNTIMECLASS_Windows_Media_Editing_MediaClip_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Editing_MediaClip[] = L"Windows.Media.Editing.MediaClip";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Editing.MediaComposition
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Media.Editing.IMediaCompositionStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Media.Editing.IMediaComposition ** Default Interface **
 *    Windows.Media.Editing.IMediaComposition2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Editing_MediaComposition_DEFINED
#define RUNTIMECLASS_Windows_Media_Editing_MediaComposition_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Editing_MediaComposition[] = L"Windows.Media.Editing.MediaComposition";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Editing.MediaOverlay
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Media.Editing.IMediaOverlayFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Media.Editing.IMediaOverlay ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Editing_MediaOverlay_DEFINED
#define RUNTIMECLASS_Windows_Media_Editing_MediaOverlay_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Editing_MediaOverlay[] = L"Windows.Media.Editing.MediaOverlay";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Editing.MediaOverlayLayer
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Media.Editing.IMediaOverlayLayerFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Media.Editing.IMediaOverlayLayer ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Editing_MediaOverlayLayer_DEFINED
#define RUNTIMECLASS_Windows_Media_Editing_MediaOverlayLayer_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Editing_MediaOverlayLayer[] = L"Windows.Media.Editing.MediaOverlayLayer";
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
#endif // __windows2Emedia2Eediting_p_h__

#endif // __windows2Emedia2Eediting_h__
