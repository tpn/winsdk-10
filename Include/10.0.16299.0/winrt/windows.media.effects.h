/* Header file automatically generated from windows.media.effects.idl */
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
#ifndef __windows2Emedia2Eeffects_h__
#define __windows2Emedia2Eeffects_h__
#ifndef __windows2Emedia2Eeffects_p_h__
#define __windows2Emedia2Eeffects_p_h__


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
#include "Windows.Media.h"
#include "Windows.Media.Capture.h"
#include "Windows.Media.Editing.h"
#include "Windows.Media.MediaProperties.h"
#include "Windows.Media.Render.h"
#include "Windows.Media.Transcoding.h"
#include "Windows.Storage.Streams.h"
#include "Windows.UI.h"
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CMedia_CEffects_CIAudioCaptureEffectsManager_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CEffects_CIAudioCaptureEffectsManager_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Effects {
                interface IAudioCaptureEffectsManager;
            } /* Windows */
        } /* Media */
    } /* Effects */} /* ABI */
#define __x_ABI_CWindows_CMedia_CEffects_CIAudioCaptureEffectsManager ABI::Windows::Media::Effects::IAudioCaptureEffectsManager

#endif // ____x_ABI_CWindows_CMedia_CEffects_CIAudioCaptureEffectsManager_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CEffects_CIAudioEffect_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CEffects_CIAudioEffect_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Effects {
                interface IAudioEffect;
            } /* Windows */
        } /* Media */
    } /* Effects */} /* ABI */
#define __x_ABI_CWindows_CMedia_CEffects_CIAudioEffect ABI::Windows::Media::Effects::IAudioEffect

#endif // ____x_ABI_CWindows_CMedia_CEffects_CIAudioEffect_FWD_DEFINED__

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

#ifndef ____x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinitionFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinitionFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Effects {
                interface IAudioEffectDefinitionFactory;
            } /* Windows */
        } /* Media */
    } /* Effects */} /* ABI */
#define __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinitionFactory ABI::Windows::Media::Effects::IAudioEffectDefinitionFactory

#endif // ____x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinitionFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CEffects_CIAudioEffectsManagerStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CEffects_CIAudioEffectsManagerStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Effects {
                interface IAudioEffectsManagerStatics;
            } /* Windows */
        } /* Media */
    } /* Effects */} /* ABI */
#define __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectsManagerStatics ABI::Windows::Media::Effects::IAudioEffectsManagerStatics

#endif // ____x_ABI_CWindows_CMedia_CEffects_CIAudioEffectsManagerStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CEffects_CIAudioRenderEffectsManager_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CEffects_CIAudioRenderEffectsManager_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Effects {
                interface IAudioRenderEffectsManager;
            } /* Windows */
        } /* Media */
    } /* Effects */} /* ABI */
#define __x_ABI_CWindows_CMedia_CEffects_CIAudioRenderEffectsManager ABI::Windows::Media::Effects::IAudioRenderEffectsManager

#endif // ____x_ABI_CWindows_CMedia_CEffects_CIAudioRenderEffectsManager_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CEffects_CIAudioRenderEffectsManager2_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CEffects_CIAudioRenderEffectsManager2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Effects {
                interface IAudioRenderEffectsManager2;
            } /* Windows */
        } /* Media */
    } /* Effects */} /* ABI */
#define __x_ABI_CWindows_CMedia_CEffects_CIAudioRenderEffectsManager2 ABI::Windows::Media::Effects::IAudioRenderEffectsManager2

#endif // ____x_ABI_CWindows_CMedia_CEffects_CIAudioRenderEffectsManager2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CEffects_CIBasicAudioEffect_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CEffects_CIBasicAudioEffect_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Effects {
                interface IBasicAudioEffect;
            } /* Windows */
        } /* Media */
    } /* Effects */} /* ABI */
#define __x_ABI_CWindows_CMedia_CEffects_CIBasicAudioEffect ABI::Windows::Media::Effects::IBasicAudioEffect

#endif // ____x_ABI_CWindows_CMedia_CEffects_CIBasicAudioEffect_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CEffects_CIBasicVideoEffect_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CEffects_CIBasicVideoEffect_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Effects {
                interface IBasicVideoEffect;
            } /* Windows */
        } /* Media */
    } /* Effects */} /* ABI */
#define __x_ABI_CWindows_CMedia_CEffects_CIBasicVideoEffect ABI::Windows::Media::Effects::IBasicVideoEffect

#endif // ____x_ABI_CWindows_CMedia_CEffects_CIBasicVideoEffect_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CEffects_CICompositeVideoFrameContext_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CEffects_CICompositeVideoFrameContext_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Effects {
                interface ICompositeVideoFrameContext;
            } /* Windows */
        } /* Media */
    } /* Effects */} /* ABI */
#define __x_ABI_CWindows_CMedia_CEffects_CICompositeVideoFrameContext ABI::Windows::Media::Effects::ICompositeVideoFrameContext

#endif // ____x_ABI_CWindows_CMedia_CEffects_CICompositeVideoFrameContext_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CEffects_CIProcessAudioFrameContext_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CEffects_CIProcessAudioFrameContext_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Effects {
                interface IProcessAudioFrameContext;
            } /* Windows */
        } /* Media */
    } /* Effects */} /* ABI */
#define __x_ABI_CWindows_CMedia_CEffects_CIProcessAudioFrameContext ABI::Windows::Media::Effects::IProcessAudioFrameContext

#endif // ____x_ABI_CWindows_CMedia_CEffects_CIProcessAudioFrameContext_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CEffects_CIProcessVideoFrameContext_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CEffects_CIProcessVideoFrameContext_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Effects {
                interface IProcessVideoFrameContext;
            } /* Windows */
        } /* Media */
    } /* Effects */} /* ABI */
#define __x_ABI_CWindows_CMedia_CEffects_CIProcessVideoFrameContext ABI::Windows::Media::Effects::IProcessVideoFrameContext

#endif // ____x_ABI_CWindows_CMedia_CEffects_CIProcessVideoFrameContext_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CEffects_CIVideoCompositor_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CEffects_CIVideoCompositor_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Effects {
                interface IVideoCompositor;
            } /* Windows */
        } /* Media */
    } /* Effects */} /* ABI */
#define __x_ABI_CWindows_CMedia_CEffects_CIVideoCompositor ABI::Windows::Media::Effects::IVideoCompositor

#endif // ____x_ABI_CWindows_CMedia_CEffects_CIVideoCompositor_FWD_DEFINED__

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

#ifndef ____x_ABI_CWindows_CMedia_CEffects_CIVideoCompositorDefinitionFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CEffects_CIVideoCompositorDefinitionFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Effects {
                interface IVideoCompositorDefinitionFactory;
            } /* Windows */
        } /* Media */
    } /* Effects */} /* ABI */
#define __x_ABI_CWindows_CMedia_CEffects_CIVideoCompositorDefinitionFactory ABI::Windows::Media::Effects::IVideoCompositorDefinitionFactory

#endif // ____x_ABI_CWindows_CMedia_CEffects_CIVideoCompositorDefinitionFactory_FWD_DEFINED__

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

#ifndef ____x_ABI_CWindows_CMedia_CEffects_CIVideoEffectDefinitionFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CEffects_CIVideoEffectDefinitionFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Effects {
                interface IVideoEffectDefinitionFactory;
            } /* Windows */
        } /* Media */
    } /* Effects */} /* ABI */
#define __x_ABI_CWindows_CMedia_CEffects_CIVideoEffectDefinitionFactory ABI::Windows::Media::Effects::IVideoEffectDefinitionFactory

#endif // ____x_ABI_CWindows_CMedia_CEffects_CIVideoEffectDefinitionFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CEffects_CIVideoTransformEffectDefinition_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CEffects_CIVideoTransformEffectDefinition_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Effects {
                interface IVideoTransformEffectDefinition;
            } /* Windows */
        } /* Media */
    } /* Effects */} /* ABI */
#define __x_ABI_CWindows_CMedia_CEffects_CIVideoTransformEffectDefinition ABI::Windows::Media::Effects::IVideoTransformEffectDefinition

#endif // ____x_ABI_CWindows_CMedia_CEffects_CIVideoTransformEffectDefinition_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Effects {
                class AudioEffect;
            } /* Windows */
        } /* Media */
    } /* Effects */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CMedia__CEffects__CAudioEffect_USE
#define DEF___FIIterator_1_Windows__CMedia__CEffects__CAudioEffect_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("673ce717-a3cf-5d68-a80b-5ed3e7b93fed"))
IIterator<ABI::Windows::Media::Effects::AudioEffect*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Effects::AudioEffect*, ABI::Windows::Media::Effects::IAudioEffect*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Media.Effects.AudioEffect>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Media::Effects::AudioEffect*> __FIIterator_1_Windows__CMedia__CEffects__CAudioEffect_t;
#define __FIIterator_1_Windows__CMedia__CEffects__CAudioEffect ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CMedia__CEffects__CAudioEffect_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CMedia__CEffects__CAudioEffect ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Media::Effects::IAudioEffect*>
//#define __FIIterator_1_Windows__CMedia__CEffects__CAudioEffect_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Media::Effects::IAudioEffect*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CMedia__CEffects__CAudioEffect_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CMedia__CEffects__CAudioEffect_USE
#define DEF___FIIterable_1_Windows__CMedia__CEffects__CAudioEffect_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("07af9afd-25b8-579d-be7e-8acc03418d0b"))
IIterable<ABI::Windows::Media::Effects::AudioEffect*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Effects::AudioEffect*, ABI::Windows::Media::Effects::IAudioEffect*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Media.Effects.AudioEffect>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Media::Effects::AudioEffect*> __FIIterable_1_Windows__CMedia__CEffects__CAudioEffect_t;
#define __FIIterable_1_Windows__CMedia__CEffects__CAudioEffect ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CMedia__CEffects__CAudioEffect_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CMedia__CEffects__CAudioEffect ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Media::Effects::IAudioEffect*>
//#define __FIIterable_1_Windows__CMedia__CEffects__CAudioEffect_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Media::Effects::IAudioEffect*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CMedia__CEffects__CAudioEffect_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


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

#ifndef DEF___FIVectorView_1_Windows__CMedia__CEffects__CAudioEffect_USE
#define DEF___FIVectorView_1_Windows__CMedia__CEffects__CAudioEffect_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("cdcbc9e7-53d8-5e66-9e45-31d5a23fd01d"))
IVectorView<ABI::Windows::Media::Effects::AudioEffect*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Effects::AudioEffect*, ABI::Windows::Media::Effects::IAudioEffect*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Media.Effects.AudioEffect>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Media::Effects::AudioEffect*> __FIVectorView_1_Windows__CMedia__CEffects__CAudioEffect_t;
#define __FIVectorView_1_Windows__CMedia__CEffects__CAudioEffect ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CMedia__CEffects__CAudioEffect_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CMedia__CEffects__CAudioEffect ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Media::Effects::IAudioEffect*>
//#define __FIVectorView_1_Windows__CMedia__CEffects__CAudioEffect_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Media::Effects::IAudioEffect*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CMedia__CEffects__CAudioEffect_USE */


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
        namespace Media {
            namespace Effects {
                class AudioCaptureEffectsManager;
            } /* Windows */
        } /* Media */
    } /* Effects */} /* ABI */



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CMedia__CEffects__CAudioCaptureEffectsManager_IInspectable_USE
#define DEF___FITypedEventHandler_2_Windows__CMedia__CEffects__CAudioCaptureEffectsManager_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("a1c5e803-a275-5bb1-9d44-2ac8ae9ffb89"))
ITypedEventHandler<ABI::Windows::Media::Effects::AudioCaptureEffectsManager*,IInspectable*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Effects::AudioCaptureEffectsManager*, ABI::Windows::Media::Effects::IAudioCaptureEffectsManager*>,IInspectable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.Media.Effects.AudioCaptureEffectsManager, Object>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::Media::Effects::AudioCaptureEffectsManager*,IInspectable*> __FITypedEventHandler_2_Windows__CMedia__CEffects__CAudioCaptureEffectsManager_IInspectable_t;
#define __FITypedEventHandler_2_Windows__CMedia__CEffects__CAudioCaptureEffectsManager_IInspectable ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CMedia__CEffects__CAudioCaptureEffectsManager_IInspectable_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CMedia__CEffects__CAudioCaptureEffectsManager_IInspectable ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Media::Effects::IAudioCaptureEffectsManager*,IInspectable*>
//#define __FITypedEventHandler_2_Windows__CMedia__CEffects__CAudioCaptureEffectsManager_IInspectable_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Media::Effects::IAudioCaptureEffectsManager*,IInspectable*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CMedia__CEffects__CAudioCaptureEffectsManager_IInspectable_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Effects {
                class AudioRenderEffectsManager;
            } /* Windows */
        } /* Media */
    } /* Effects */} /* ABI */



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CMedia__CEffects__CAudioRenderEffectsManager_IInspectable_USE
#define DEF___FITypedEventHandler_2_Windows__CMedia__CEffects__CAudioRenderEffectsManager_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("4be29c7e-449c-576e-a7b8-3a40f2f01dc8"))
ITypedEventHandler<ABI::Windows::Media::Effects::AudioRenderEffectsManager*,IInspectable*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Effects::AudioRenderEffectsManager*, ABI::Windows::Media::Effects::IAudioRenderEffectsManager*>,IInspectable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.Media.Effects.AudioRenderEffectsManager, Object>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::Media::Effects::AudioRenderEffectsManager*,IInspectable*> __FITypedEventHandler_2_Windows__CMedia__CEffects__CAudioRenderEffectsManager_IInspectable_t;
#define __FITypedEventHandler_2_Windows__CMedia__CEffects__CAudioRenderEffectsManager_IInspectable ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CMedia__CEffects__CAudioRenderEffectsManager_IInspectable_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CMedia__CEffects__CAudioRenderEffectsManager_IInspectable ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Media::Effects::IAudioRenderEffectsManager*,IInspectable*>
//#define __FITypedEventHandler_2_Windows__CMedia__CEffects__CAudioRenderEffectsManager_IInspectable_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Media::Effects::IAudioRenderEffectsManager*,IInspectable*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CMedia__CEffects__CAudioRenderEffectsManager_IInspectable_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

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


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties_USE
#define DEF___FIIterator_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("064b6aef-3bd0-5463-8450-72c6169af5d4"))
IIterator<ABI::Windows::Media::MediaProperties::AudioEncodingProperties*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::MediaProperties::AudioEncodingProperties*, ABI::Windows::Media::MediaProperties::IAudioEncodingProperties*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Media.MediaProperties.AudioEncodingProperties>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Media::MediaProperties::AudioEncodingProperties*> __FIIterator_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties_t;
#define __FIIterator_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Media::MediaProperties::IAudioEncodingProperties*>
//#define __FIIterator_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Media::MediaProperties::IAudioEncodingProperties*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties_USE
#define DEF___FIIterable_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("00939468-25d8-533f-854e-4f20f36c51dc"))
IIterable<ABI::Windows::Media::MediaProperties::AudioEncodingProperties*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::MediaProperties::AudioEncodingProperties*, ABI::Windows::Media::MediaProperties::IAudioEncodingProperties*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Media.MediaProperties.AudioEncodingProperties>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Media::MediaProperties::AudioEncodingProperties*> __FIIterable_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties_t;
#define __FIIterable_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Media::MediaProperties::IAudioEncodingProperties*>
//#define __FIIterable_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Media::MediaProperties::IAudioEncodingProperties*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties_USE
#define DEF___FIVectorView_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("64ac506c-ccd0-56cb-b088-b1a36e8755df"))
IVectorView<ABI::Windows::Media::MediaProperties::AudioEncodingProperties*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::MediaProperties::AudioEncodingProperties*, ABI::Windows::Media::MediaProperties::IAudioEncodingProperties*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Media.MediaProperties.AudioEncodingProperties>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Media::MediaProperties::AudioEncodingProperties*> __FIVectorView_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties_t;
#define __FIVectorView_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Media::MediaProperties::IAudioEncodingProperties*>
//#define __FIVectorView_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Media::MediaProperties::IAudioEncodingProperties*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

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


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_USE
#define DEF___FIIterator_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("094166ef-ae5f-5315-a3bf-fe54e8c35fcd"))
IIterator<ABI::Windows::Media::MediaProperties::VideoEncodingProperties*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::MediaProperties::VideoEncodingProperties*, ABI::Windows::Media::MediaProperties::IVideoEncodingProperties*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Media.MediaProperties.VideoEncodingProperties>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Media::MediaProperties::VideoEncodingProperties*> __FIIterator_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_t;
#define __FIIterator_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Media::MediaProperties::IVideoEncodingProperties*>
//#define __FIIterator_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Media::MediaProperties::IVideoEncodingProperties*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_USE
#define DEF___FIIterable_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("73c7317c-8682-5f81-84a2-30c425fa2d24"))
IIterable<ABI::Windows::Media::MediaProperties::VideoEncodingProperties*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::MediaProperties::VideoEncodingProperties*, ABI::Windows::Media::MediaProperties::IVideoEncodingProperties*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Media.MediaProperties.VideoEncodingProperties>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Media::MediaProperties::VideoEncodingProperties*> __FIIterable_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_t;
#define __FIIterable_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Media::MediaProperties::IVideoEncodingProperties*>
//#define __FIIterable_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Media::MediaProperties::IVideoEncodingProperties*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_USE
#define DEF___FIVectorView_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("04c7baba-04d7-51db-a4e3-5147963ec5ff"))
IVectorView<ABI::Windows::Media::MediaProperties::VideoEncodingProperties*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::MediaProperties::VideoEncodingProperties*, ABI::Windows::Media::MediaProperties::IVideoEncodingProperties*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Media.MediaProperties.VideoEncodingProperties>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Media::MediaProperties::VideoEncodingProperties*> __FIVectorView_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_t;
#define __FIVectorView_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Media::MediaProperties::IVideoEncodingProperties*>
//#define __FIVectorView_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Media::MediaProperties::IVideoEncodingProperties*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

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


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface_USE
#define DEF___FIIterator_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("bdfb6d0b-e785-5d5a-abd2-fe1b18c43257"))
IIterator<ABI::Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface*> : IIterator_impl<ABI::Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Graphics.DirectX.Direct3D11.IDirect3DSurface>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface*> __FIIterator_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface_t;
#define __FIIterator_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface*>
//#define __FIIterator_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface_USE
#define DEF___FIIterable_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("cc63bf9c-e16a-5a75-a5aa-2b53f975b0b0"))
IIterable<ABI::Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface*> : IIterable_impl<ABI::Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Graphics.DirectX.Direct3D11.IDirect3DSurface>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface*> __FIIterable_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface_t;
#define __FIIterable_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface*>
//#define __FIIterable_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface_USE
#define DEF___FIVectorView_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("1a81ec3e-5afb-5e10-92bb-c843fec70887"))
IVectorView<ABI::Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface*> : IVectorView_impl<ABI::Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Graphics.DirectX.Direct3D11.IDirect3DSurface>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface*> __FIVectorView_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface_t;
#define __FIVectorView_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface*>
//#define __FIVectorView_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#ifndef ____x_ABI_CWindows_CFoundation_CCollections_CIPropertySet_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CCollections_CIPropertySet_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Collections {
                interface IPropertySet;
            } /* Windows */
        } /* Foundation */
    } /* Collections */} /* ABI */
#define __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet ABI::Windows::Foundation::Collections::IPropertySet

#endif // ____x_ABI_CWindows_CFoundation_CCollections_CIPropertySet_FWD_DEFINED__





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







namespace ABI {
    namespace Windows {
        namespace Media {
            class AudioFrame;
        } /* Windows */
    } /* Media */} /* ABI */

#ifndef ____x_ABI_CWindows_CMedia_CIAudioFrame_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CIAudioFrame_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            interface IAudioFrame;
        } /* Windows */
    } /* Media */} /* ABI */
#define __x_ABI_CWindows_CMedia_CIAudioFrame ABI::Windows::Media::IAudioFrame

#endif // ____x_ABI_CWindows_CMedia_CIAudioFrame_FWD_DEFINED__


namespace ABI {
    namespace Windows {
        namespace Media {
            
            typedef enum AudioProcessing : int AudioProcessing;
            
        } /* Windows */
    } /* Media */} /* ABI */



namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Capture {
                
                typedef enum MediaCategory : int MediaCategory;
                
            } /* Windows */
        } /* Media */
    } /* Capture */} /* ABI */




namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Editing {
                class MediaOverlay;
            } /* Windows */
        } /* Media */
    } /* Editing */} /* ABI */

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





#ifndef ____x_ABI_CWindows_CMedia_CIMediaExtension_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CIMediaExtension_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            interface IMediaExtension;
        } /* Windows */
    } /* Media */} /* ABI */
#define __x_ABI_CWindows_CMedia_CIMediaExtension ABI::Windows::Media::IMediaExtension

#endif // ____x_ABI_CWindows_CMedia_CIMediaExtension_FWD_DEFINED__





namespace ABI {
    namespace Windows {
        namespace Media {
            namespace MediaProperties {
                
                typedef enum MediaMirroringOptions : unsigned int MediaMirroringOptions;
                
            } /* Windows */
        } /* Media */
    } /* MediaProperties */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Media {
            namespace MediaProperties {
                
                typedef enum MediaRotation : int MediaRotation;
                
            } /* Windows */
        } /* Media */
    } /* MediaProperties */} /* ABI */





namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Render {
                
                typedef enum AudioRenderCategory : int AudioRenderCategory;
                
            } /* Windows */
        } /* Media */
    } /* Render */} /* ABI */




namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Transcoding {
                
                typedef enum MediaVideoProcessingAlgorithm : int MediaVideoProcessingAlgorithm;
                
            } /* Windows */
        } /* Media */
    } /* Transcoding */} /* ABI */




namespace ABI {
    namespace Windows {
        namespace Media {
            class VideoFrame;
        } /* Windows */
    } /* Media */} /* ABI */

#ifndef ____x_ABI_CWindows_CMedia_CIVideoFrame_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CIVideoFrame_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            interface IVideoFrame;
        } /* Windows */
    } /* Media */} /* ABI */
#define __x_ABI_CWindows_CMedia_CIVideoFrame ABI::Windows::Media::IVideoFrame

#endif // ____x_ABI_CWindows_CMedia_CIVideoFrame_FWD_DEFINED__




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





namespace ABI {
    namespace Windows {
        namespace UI {
            
            typedef struct Color Color;
            
        } /* Windows */
    } /* UI */} /* ABI */



namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Effects {
                
                typedef enum AudioEffectType : int AudioEffectType;
                
            } /* Windows */
        } /* Media */
    } /* Effects */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Effects {
                
                typedef enum MediaEffectClosedReason : int MediaEffectClosedReason;
                
            } /* Windows */
        } /* Media */
    } /* Effects */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Effects {
                
                typedef enum MediaMemoryTypes : int MediaMemoryTypes;
                
            } /* Windows */
        } /* Media */
    } /* Effects */} /* ABI */





















namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Effects {
                class AudioEffectDefinition;
            } /* Windows */
        } /* Media */
    } /* Effects */} /* ABI */




namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Effects {
                class CompositeVideoFrameContext;
            } /* Windows */
        } /* Media */
    } /* Effects */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Effects {
                class ProcessAudioFrameContext;
            } /* Windows */
        } /* Media */
    } /* Effects */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Effects {
                class ProcessVideoFrameContext;
            } /* Windows */
        } /* Media */
    } /* Effects */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Effects {
                class VideoCompositorDefinition;
            } /* Windows */
        } /* Media */
    } /* Effects */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Effects {
                class VideoEffectDefinition;
            } /* Windows */
        } /* Media */
    } /* Effects */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Effects {
                class VideoTransformEffectDefinition;
            } /* Windows */
        } /* Media */
    } /* Effects */} /* ABI */










/*
 *
 * Struct Windows.Media.Effects.AudioEffectType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Effects {
                /* [v1_enum, contract] */
                enum AudioEffectType : int
                {
                    AudioEffectType_Other = 0,
                    AudioEffectType_AcousticEchoCancellation = 1,
                    AudioEffectType_NoiseSuppression = 2,
                    AudioEffectType_AutomaticGainControl = 3,
                    AudioEffectType_BeamForming = 4,
                    AudioEffectType_ConstantToneRemoval = 5,
                    AudioEffectType_Equalizer = 6,
                    AudioEffectType_LoudnessEqualizer = 7,
                    AudioEffectType_BassBoost = 8,
                    AudioEffectType_VirtualSurround = 9,
                    AudioEffectType_VirtualHeadphones = 10,
                    AudioEffectType_SpeakerFill = 11,
                    AudioEffectType_RoomCorrection = 12,
                    AudioEffectType_BassManagement = 13,
                    AudioEffectType_EnvironmentalEffects = 14,
                    AudioEffectType_SpeakerProtection = 15,
                    AudioEffectType_SpeakerCompensation = 16,
                    AudioEffectType_DynamicRangeCompression = 17,
                };
                
            } /* Windows */
        } /* Media */
    } /* Effects */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Media.Effects.MediaEffectClosedReason
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Effects {
                /* [v1_enum, contract] */
                enum MediaEffectClosedReason : int
                {
                    MediaEffectClosedReason_Done = 0,
                    MediaEffectClosedReason_UnknownError = 1,
                    MediaEffectClosedReason_UnsupportedEncodingFormat = 2,
                    MediaEffectClosedReason_EffectCurrentlyUnloaded = 3,
                };
                
            } /* Windows */
        } /* Media */
    } /* Effects */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Media.Effects.MediaMemoryTypes
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Effects {
                /* [v1_enum, contract] */
                enum MediaMemoryTypes : int
                {
                    MediaMemoryTypes_Gpu = 0,
                    MediaMemoryTypes_Cpu = 1,
                    MediaMemoryTypes_GpuAndCpu = 2,
                };
                
            } /* Windows */
        } /* Media */
    } /* Effects */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Effects.IAudioCaptureEffectsManager
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Effects.AudioCaptureEffectsManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CEffects_CIAudioCaptureEffectsManager_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CEffects_CIAudioCaptureEffectsManager_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Effects_IAudioCaptureEffectsManager[] = L"Windows.Media.Effects.IAudioCaptureEffectsManager";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Effects {
                /* [object, uuid("8F85C271-038D-4393-8298-540110608EEF"), exclusiveto, contract] */
                MIDL_INTERFACE("8F85C271-038D-4393-8298-540110608EEF")
                IAudioCaptureEffectsManager : IInspectable
                {
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_AudioCaptureEffectsChanged(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CEffects__CAudioCaptureEffectsManager_IInspectable * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_AudioCaptureEffectsChanged(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetAudioCaptureEffects(
                        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CEffects__CAudioEffect * * effects
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAudioCaptureEffectsManager=_uuidof(IAudioCaptureEffectsManager);
                
            } /* Windows */
        } /* Media */
    } /* Effects */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CEffects_CIAudioCaptureEffectsManager;
#endif /* !defined(____x_ABI_CWindows_CMedia_CEffects_CIAudioCaptureEffectsManager_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Effects.IAudioEffect
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Effects.AudioEffect
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CEffects_CIAudioEffect_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CEffects_CIAudioEffect_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Effects_IAudioEffect[] = L"Windows.Media.Effects.IAudioEffect";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Effects {
                /* [object, uuid("34AAFA51-9207-4055-BE93-6E5734A86AE4"), exclusiveto, contract] */
                MIDL_INTERFACE("34AAFA51-9207-4055-BE93-6E5734A86AE4")
                IAudioEffect : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AudioEffectType(
                        /* [retval, out] */__RPC__out ABI::Windows::Media::Effects::AudioEffectType * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAudioEffect=_uuidof(IAudioEffect);
                
            } /* Windows */
        } /* Media */
    } /* Effects */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CEffects_CIAudioEffect;
#endif /* !defined(____x_ABI_CWindows_CMedia_CEffects_CIAudioEffect_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Effects.IAudioEffectDefinition
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinition_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinition_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Effects_IAudioEffectDefinition[] = L"Windows.Media.Effects.IAudioEffectDefinition";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Effects {
                /* [object, uuid("E4D7F974-7D80-4F73-9089-E31C9DB9C294"), contract] */
                MIDL_INTERFACE("E4D7F974-7D80-4F73-9089-E31C9DB9C294")
                IAudioEffectDefinition : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ActivatableClassId(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Properties(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::Collections::IPropertySet * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAudioEffectDefinition=_uuidof(IAudioEffectDefinition);
                
            } /* Windows */
        } /* Media */
    } /* Effects */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinition;
#endif /* !defined(____x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinition_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Effects.IAudioEffectDefinitionFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Effects.AudioEffectDefinition
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinitionFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinitionFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Effects_IAudioEffectDefinitionFactory[] = L"Windows.Media.Effects.IAudioEffectDefinitionFactory";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Effects {
                /* [object, uuid("8E1DA646-E705-45ED-8A2B-FC4E4F405A97"), exclusiveto, contract] */
                MIDL_INTERFACE("8E1DA646-E705-45ED-8A2B-FC4E4F405A97")
                IAudioEffectDefinitionFactory : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE Create(
                        /* [in] */__RPC__in HSTRING activatableClassId,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Effects::IAudioEffectDefinition * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateWithProperties(
                        /* [in] */__RPC__in HSTRING activatableClassId,
                        /* [in] */__RPC__in_opt ABI::Windows::Foundation::Collections::IPropertySet * props,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Effects::IAudioEffectDefinition * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAudioEffectDefinitionFactory=_uuidof(IAudioEffectDefinitionFactory);
                
            } /* Windows */
        } /* Media */
    } /* Effects */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinitionFactory;
#endif /* !defined(____x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinitionFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Effects.IAudioEffectsManagerStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Effects.AudioEffectsManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CEffects_CIAudioEffectsManagerStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CEffects_CIAudioEffectsManagerStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Effects_IAudioEffectsManagerStatics[] = L"Windows.Media.Effects.IAudioEffectsManagerStatics";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Effects {
                /* [object, uuid("66406C04-86FA-47CC-A315-F489D8C3FE10"), exclusiveto, contract] */
                MIDL_INTERFACE("66406C04-86FA-47CC-A315-F489D8C3FE10")
                IAudioEffectsManagerStatics : IInspectable
                {
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE CreateAudioRenderEffectsManager(
                        /* [in] */__RPC__in HSTRING deviceId,
                        /* [in] */ABI::Windows::Media::Render::AudioRenderCategory category,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Effects::IAudioRenderEffectsManager * * value
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE CreateAudioRenderEffectsManagerWithMode(
                        /* [in] */__RPC__in HSTRING deviceId,
                        /* [in] */ABI::Windows::Media::Render::AudioRenderCategory category,
                        /* [in] */ABI::Windows::Media::AudioProcessing mode,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Effects::IAudioRenderEffectsManager * * value
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE CreateAudioCaptureEffectsManager(
                        /* [in] */__RPC__in HSTRING deviceId,
                        /* [in] */ABI::Windows::Media::Capture::MediaCategory category,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Effects::IAudioCaptureEffectsManager * * value
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE CreateAudioCaptureEffectsManagerWithMode(
                        /* [in] */__RPC__in HSTRING deviceId,
                        /* [in] */ABI::Windows::Media::Capture::MediaCategory category,
                        /* [in] */ABI::Windows::Media::AudioProcessing mode,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Effects::IAudioCaptureEffectsManager * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAudioEffectsManagerStatics=_uuidof(IAudioEffectsManagerStatics);
                
            } /* Windows */
        } /* Media */
    } /* Effects */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CEffects_CIAudioEffectsManagerStatics;
#endif /* !defined(____x_ABI_CWindows_CMedia_CEffects_CIAudioEffectsManagerStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Effects.IAudioRenderEffectsManager
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Effects.AudioRenderEffectsManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CEffects_CIAudioRenderEffectsManager_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CEffects_CIAudioRenderEffectsManager_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Effects_IAudioRenderEffectsManager[] = L"Windows.Media.Effects.IAudioRenderEffectsManager";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Effects {
                /* [object, uuid("4DC98966-8751-42B2-BFCB-39CA7864BD47"), exclusiveto, contract] */
                MIDL_INTERFACE("4DC98966-8751-42B2-BFCB-39CA7864BD47")
                IAudioRenderEffectsManager : IInspectable
                {
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_AudioRenderEffectsChanged(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CEffects__CAudioRenderEffectsManager_IInspectable * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_AudioRenderEffectsChanged(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetAudioRenderEffects(
                        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CEffects__CAudioEffect * * effects
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAudioRenderEffectsManager=_uuidof(IAudioRenderEffectsManager);
                
            } /* Windows */
        } /* Media */
    } /* Effects */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CEffects_CIAudioRenderEffectsManager;
#endif /* !defined(____x_ABI_CWindows_CMedia_CEffects_CIAudioRenderEffectsManager_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Effects.IAudioRenderEffectsManager2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Effects.AudioRenderEffectsManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CEffects_CIAudioRenderEffectsManager2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CEffects_CIAudioRenderEffectsManager2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Effects_IAudioRenderEffectsManager2[] = L"Windows.Media.Effects.IAudioRenderEffectsManager2";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Effects {
                /* [object, uuid("A844CD09-5ECC-44B3-BB4E-1DB07287139C"), exclusiveto, deprecated, contract] */
                MIDL_INTERFACE("A844CD09-5ECC-44B3-BB4E-1DB07287139C")
                
                #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                DEPRECATED("Not supported starting in windows 10")
                #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                IAudioRenderEffectsManager2 : IInspectable
                {
                    
                    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    DEPRECATED("Not supported starting in windows 10")
                    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    /* [propget, deprecated] */virtual HRESULT STDMETHODCALLTYPE get_EffectsProviderThumbnail(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::Streams::IRandomAccessStreamWithContentType * * value
                        ) = 0;
                    
                    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    DEPRECATED("Not supported starting in windows 10")
                    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    /* [propget, deprecated] */virtual HRESULT STDMETHODCALLTYPE get_EffectsProviderSettingsLabel(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    
                    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    DEPRECATED("Not supported starting in windows 10")
                    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    /* [deprecated] */virtual HRESULT STDMETHODCALLTYPE ShowSettingsUI(void) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAudioRenderEffectsManager2=_uuidof(IAudioRenderEffectsManager2);
                
            } /* Windows */
        } /* Media */
    } /* Effects */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CEffects_CIAudioRenderEffectsManager2;
#endif /* !defined(____x_ABI_CWindows_CMedia_CEffects_CIAudioRenderEffectsManager2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Effects.IBasicAudioEffect
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Media.IMediaExtension
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CEffects_CIBasicAudioEffect_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CEffects_CIBasicAudioEffect_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Effects_IBasicAudioEffect[] = L"Windows.Media.Effects.IBasicAudioEffect";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Effects {
                /* [object, uuid("8C062C53-6BC0-48B8-A99A-4B41550F1359"), contract] */
                MIDL_INTERFACE("8C062C53-6BC0-48B8-A99A-4B41550F1359")
                IBasicAudioEffect : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_UseInputFrameForOutput(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SupportedEncodingProperties(
                        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE SetEncodingProperties(
                        /* [in] */__RPC__in_opt ABI::Windows::Media::MediaProperties::IAudioEncodingProperties * encodingProperties
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE ProcessFrame(
                        /* [in] */__RPC__in_opt ABI::Windows::Media::Effects::IProcessAudioFrameContext * context
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE Close(
                        /* [in] */ABI::Windows::Media::Effects::MediaEffectClosedReason reason
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DiscardQueuedFrames(void) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IBasicAudioEffect=_uuidof(IBasicAudioEffect);
                
            } /* Windows */
        } /* Media */
    } /* Effects */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CEffects_CIBasicAudioEffect;
#endif /* !defined(____x_ABI_CWindows_CMedia_CEffects_CIBasicAudioEffect_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Effects.IBasicVideoEffect
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Media.IMediaExtension
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CEffects_CIBasicVideoEffect_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CEffects_CIBasicVideoEffect_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Effects_IBasicVideoEffect[] = L"Windows.Media.Effects.IBasicVideoEffect";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Effects {
                /* [object, uuid("8262C7EF-B360-40BE-949B-2FF42FF35693"), contract] */
                MIDL_INTERFACE("8262C7EF-B360-40BE-949B-2FF42FF35693")
                IBasicVideoEffect : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsReadOnly(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SupportedMemoryTypes(
                        /* [retval, out] */__RPC__out ABI::Windows::Media::Effects::MediaMemoryTypes * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_TimeIndependent(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SupportedEncodingProperties(
                        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE SetEncodingProperties(
                        /* [in] */__RPC__in_opt ABI::Windows::Media::MediaProperties::IVideoEncodingProperties * encodingProperties,
                        /* [in] */__RPC__in_opt ABI::Windows::Graphics::DirectX::Direct3D11::IDirect3DDevice * device
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE ProcessFrame(
                        /* [in] */__RPC__in_opt ABI::Windows::Media::Effects::IProcessVideoFrameContext * context
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE Close(
                        /* [in] */ABI::Windows::Media::Effects::MediaEffectClosedReason reason
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DiscardQueuedFrames(void) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IBasicVideoEffect=_uuidof(IBasicVideoEffect);
                
            } /* Windows */
        } /* Media */
    } /* Effects */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CEffects_CIBasicVideoEffect;
#endif /* !defined(____x_ABI_CWindows_CMedia_CEffects_CIBasicVideoEffect_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Effects.ICompositeVideoFrameContext
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Effects.CompositeVideoFrameContext
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CEffects_CICompositeVideoFrameContext_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CEffects_CICompositeVideoFrameContext_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Effects_ICompositeVideoFrameContext[] = L"Windows.Media.Effects.ICompositeVideoFrameContext";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Effects {
                /* [object, uuid("6C30024B-F514-4278-A5F7-B9188049D110"), exclusiveto, contract] */
                MIDL_INTERFACE("6C30024B-F514-4278-A5F7-B9188049D110")
                ICompositeVideoFrameContext : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SurfacesToOverlay(
                        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_BackgroundFrame(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::IVideoFrame * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_OutputFrame(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::IVideoFrame * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetOverlayForSurface(
                        /* [in] */__RPC__in_opt ABI::Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface * surfaceToOverlay,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Editing::IMediaOverlay * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ICompositeVideoFrameContext=_uuidof(ICompositeVideoFrameContext);
                
            } /* Windows */
        } /* Media */
    } /* Effects */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CEffects_CICompositeVideoFrameContext;
#endif /* !defined(____x_ABI_CWindows_CMedia_CEffects_CICompositeVideoFrameContext_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Effects.IProcessAudioFrameContext
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Effects.ProcessAudioFrameContext
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CEffects_CIProcessAudioFrameContext_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CEffects_CIProcessAudioFrameContext_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Effects_IProcessAudioFrameContext[] = L"Windows.Media.Effects.IProcessAudioFrameContext";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Effects {
                /* [object, uuid("4CD92946-1222-4A27-A586-FB3E20273255"), exclusiveto, contract] */
                MIDL_INTERFACE("4CD92946-1222-4A27-A586-FB3E20273255")
                IProcessAudioFrameContext : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_InputFrame(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::IAudioFrame * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_OutputFrame(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::IAudioFrame * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IProcessAudioFrameContext=_uuidof(IProcessAudioFrameContext);
                
            } /* Windows */
        } /* Media */
    } /* Effects */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CEffects_CIProcessAudioFrameContext;
#endif /* !defined(____x_ABI_CWindows_CMedia_CEffects_CIProcessAudioFrameContext_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Effects.IProcessVideoFrameContext
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Effects.ProcessVideoFrameContext
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CEffects_CIProcessVideoFrameContext_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CEffects_CIProcessVideoFrameContext_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Effects_IProcessVideoFrameContext[] = L"Windows.Media.Effects.IProcessVideoFrameContext";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Effects {
                /* [object, uuid("276F0E2B-6461-401E-BA78-0FDAD6114EEC"), exclusiveto, contract] */
                MIDL_INTERFACE("276F0E2B-6461-401E-BA78-0FDAD6114EEC")
                IProcessVideoFrameContext : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_InputFrame(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::IVideoFrame * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_OutputFrame(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::IVideoFrame * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IProcessVideoFrameContext=_uuidof(IProcessVideoFrameContext);
                
            } /* Windows */
        } /* Media */
    } /* Effects */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CEffects_CIProcessVideoFrameContext;
#endif /* !defined(____x_ABI_CWindows_CMedia_CEffects_CIProcessVideoFrameContext_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Effects.IVideoCompositor
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Media.IMediaExtension
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CEffects_CIVideoCompositor_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CEffects_CIVideoCompositor_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Effects_IVideoCompositor[] = L"Windows.Media.Effects.IVideoCompositor";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Effects {
                /* [object, uuid("8510B43E-420C-420F-96C7-7C98BBA1FC55"), contract] */
                MIDL_INTERFACE("8510B43E-420C-420F-96C7-7C98BBA1FC55")
                IVideoCompositor : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_TimeIndependent(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE SetEncodingProperties(
                        /* [in] */__RPC__in_opt ABI::Windows::Media::MediaProperties::IVideoEncodingProperties * backgroundProperties,
                        /* [in] */__RPC__in_opt ABI::Windows::Graphics::DirectX::Direct3D11::IDirect3DDevice * device
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CompositeFrame(
                        /* [in] */__RPC__in_opt ABI::Windows::Media::Effects::ICompositeVideoFrameContext * context
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE Close(
                        /* [in] */ABI::Windows::Media::Effects::MediaEffectClosedReason reason
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DiscardQueuedFrames(void) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IVideoCompositor=_uuidof(IVideoCompositor);
                
            } /* Windows */
        } /* Media */
    } /* Effects */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CEffects_CIVideoCompositor;
#endif /* !defined(____x_ABI_CWindows_CMedia_CEffects_CIVideoCompositor_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Effects.IVideoCompositorDefinition
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CEffects_CIVideoCompositorDefinition_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CEffects_CIVideoCompositorDefinition_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Effects_IVideoCompositorDefinition[] = L"Windows.Media.Effects.IVideoCompositorDefinition";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Effects {
                /* [object, uuid("7946B8D0-2010-4AE3-9AB2-2CEF42EDD4D2"), contract] */
                MIDL_INTERFACE("7946B8D0-2010-4AE3-9AB2-2CEF42EDD4D2")
                IVideoCompositorDefinition : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ActivatableClassId(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Properties(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::Collections::IPropertySet * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IVideoCompositorDefinition=_uuidof(IVideoCompositorDefinition);
                
            } /* Windows */
        } /* Media */
    } /* Effects */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CEffects_CIVideoCompositorDefinition;
#endif /* !defined(____x_ABI_CWindows_CMedia_CEffects_CIVideoCompositorDefinition_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Effects.IVideoCompositorDefinitionFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Effects.VideoCompositorDefinition
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CEffects_CIVideoCompositorDefinitionFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CEffects_CIVideoCompositorDefinitionFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Effects_IVideoCompositorDefinitionFactory[] = L"Windows.Media.Effects.IVideoCompositorDefinitionFactory";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Effects {
                /* [object, uuid("4366FD10-68B8-4D52-89B6-02A968CCA899"), exclusiveto, contract] */
                MIDL_INTERFACE("4366FD10-68B8-4D52-89B6-02A968CCA899")
                IVideoCompositorDefinitionFactory : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE Create(
                        /* [in] */__RPC__in HSTRING activatableClassId,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Effects::IVideoCompositorDefinition * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateWithProperties(
                        /* [in] */__RPC__in HSTRING activatableClassId,
                        /* [in] */__RPC__in_opt ABI::Windows::Foundation::Collections::IPropertySet * props,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Effects::IVideoCompositorDefinition * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IVideoCompositorDefinitionFactory=_uuidof(IVideoCompositorDefinitionFactory);
                
            } /* Windows */
        } /* Media */
    } /* Effects */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CEffects_CIVideoCompositorDefinitionFactory;
#endif /* !defined(____x_ABI_CWindows_CMedia_CEffects_CIVideoCompositorDefinitionFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Effects.IVideoEffectDefinition
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CEffects_CIVideoEffectDefinition_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CEffects_CIVideoEffectDefinition_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Effects_IVideoEffectDefinition[] = L"Windows.Media.Effects.IVideoEffectDefinition";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Effects {
                /* [object, uuid("39F38CF0-8D0F-4F3E-84FC-2D46A5297943"), contract] */
                MIDL_INTERFACE("39F38CF0-8D0F-4F3E-84FC-2D46A5297943")
                IVideoEffectDefinition : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ActivatableClassId(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Properties(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::Collections::IPropertySet * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IVideoEffectDefinition=_uuidof(IVideoEffectDefinition);
                
            } /* Windows */
        } /* Media */
    } /* Effects */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CEffects_CIVideoEffectDefinition;
#endif /* !defined(____x_ABI_CWindows_CMedia_CEffects_CIVideoEffectDefinition_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Effects.IVideoEffectDefinitionFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Effects.VideoEffectDefinition
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CEffects_CIVideoEffectDefinitionFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CEffects_CIVideoEffectDefinitionFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Effects_IVideoEffectDefinitionFactory[] = L"Windows.Media.Effects.IVideoEffectDefinitionFactory";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Effects {
                /* [object, uuid("81439B4E-6E33-428F-9D21-B5AAFEF7617C"), exclusiveto, contract] */
                MIDL_INTERFACE("81439B4E-6E33-428F-9D21-B5AAFEF7617C")
                IVideoEffectDefinitionFactory : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE Create(
                        /* [in] */__RPC__in HSTRING activatableClassId,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Effects::IVideoEffectDefinition * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateWithProperties(
                        /* [in] */__RPC__in HSTRING activatableClassId,
                        /* [in] */__RPC__in_opt ABI::Windows::Foundation::Collections::IPropertySet * props,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Effects::IVideoEffectDefinition * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IVideoEffectDefinitionFactory=_uuidof(IVideoEffectDefinitionFactory);
                
            } /* Windows */
        } /* Media */
    } /* Effects */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CEffects_CIVideoEffectDefinitionFactory;
#endif /* !defined(____x_ABI_CWindows_CMedia_CEffects_CIVideoEffectDefinitionFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Effects.IVideoTransformEffectDefinition
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Effects.VideoTransformEffectDefinition
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Media.Effects.IVideoEffectDefinition
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CEffects_CIVideoTransformEffectDefinition_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CEffects_CIVideoTransformEffectDefinition_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Effects_IVideoTransformEffectDefinition[] = L"Windows.Media.Effects.IVideoTransformEffectDefinition";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Effects {
                /* [object, uuid("9664BB6A-1EA6-4AA6-8074-ABE8851ECAE2"), exclusiveto, contract] */
                MIDL_INTERFACE("9664BB6A-1EA6-4AA6-8074-ABE8851ECAE2")
                IVideoTransformEffectDefinition : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PaddingColor(
                        /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_PaddingColor(
                        /* [in] */ABI::Windows::UI::Color value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_OutputSize(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::Size * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_OutputSize(
                        /* [in] */ABI::Windows::Foundation::Size value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CropRectangle(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::Rect * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_CropRectangle(
                        /* [in] */ABI::Windows::Foundation::Rect value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Rotation(
                        /* [retval, out] */__RPC__out ABI::Windows::Media::MediaProperties::MediaRotation * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Rotation(
                        /* [in] */ABI::Windows::Media::MediaProperties::MediaRotation value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Mirror(
                        /* [retval, out] */__RPC__out ABI::Windows::Media::MediaProperties::MediaMirroringOptions * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Mirror(
                        /* [in] */ABI::Windows::Media::MediaProperties::MediaMirroringOptions value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ProcessingAlgorithm(
                        /* [in] */ABI::Windows::Media::Transcoding::MediaVideoProcessingAlgorithm value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ProcessingAlgorithm(
                        /* [retval, out] */__RPC__out ABI::Windows::Media::Transcoding::MediaVideoProcessingAlgorithm * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IVideoTransformEffectDefinition=_uuidof(IVideoTransformEffectDefinition);
                
            } /* Windows */
        } /* Media */
    } /* Effects */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CEffects_CIVideoTransformEffectDefinition;
#endif /* !defined(____x_ABI_CWindows_CMedia_CEffects_CIVideoTransformEffectDefinition_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Effects.AudioCaptureEffectsManager
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Effects.IAudioCaptureEffectsManager ** Default Interface **
 *
 * Class Threading Model:  Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Effects_AudioCaptureEffectsManager_DEFINED
#define RUNTIMECLASS_Windows_Media_Effects_AudioCaptureEffectsManager_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Effects_AudioCaptureEffectsManager[] = L"Windows.Media.Effects.AudioCaptureEffectsManager";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Effects.AudioEffect
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Effects.IAudioEffect ** Default Interface **
 *
 * Class Threading Model:  Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Effects_AudioEffect_DEFINED
#define RUNTIMECLASS_Windows_Media_Effects_AudioEffect_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Effects_AudioEffect[] = L"Windows.Media.Effects.AudioEffect";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Effects.AudioEffectDefinition
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Media.Effects.IAudioEffectDefinitionFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Media.Effects.IAudioEffectDefinition ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Effects_AudioEffectDefinition_DEFINED
#define RUNTIMECLASS_Windows_Media_Effects_AudioEffectDefinition_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Effects_AudioEffectDefinition[] = L"Windows.Media.Effects.AudioEffectDefinition";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Effects.AudioEffectsManager
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Media.Effects.IAudioEffectsManagerStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Threading Model:  Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_Media_Effects_AudioEffectsManager_DEFINED
#define RUNTIMECLASS_Windows_Media_Effects_AudioEffectsManager_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Effects_AudioEffectsManager[] = L"Windows.Media.Effects.AudioEffectsManager";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Effects.AudioRenderEffectsManager
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Effects.IAudioRenderEffectsManager ** Default Interface **
 *    Windows.Media.Effects.IAudioRenderEffectsManager2
 *
 * Class Threading Model:  Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Effects_AudioRenderEffectsManager_DEFINED
#define RUNTIMECLASS_Windows_Media_Effects_AudioRenderEffectsManager_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Effects_AudioRenderEffectsManager[] = L"Windows.Media.Effects.AudioRenderEffectsManager";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Effects.CompositeVideoFrameContext
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Effects.ICompositeVideoFrameContext ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Effects_CompositeVideoFrameContext_DEFINED
#define RUNTIMECLASS_Windows_Media_Effects_CompositeVideoFrameContext_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Effects_CompositeVideoFrameContext[] = L"Windows.Media.Effects.CompositeVideoFrameContext";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Effects.ProcessAudioFrameContext
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Effects.IProcessAudioFrameContext ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Effects_ProcessAudioFrameContext_DEFINED
#define RUNTIMECLASS_Windows_Media_Effects_ProcessAudioFrameContext_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Effects_ProcessAudioFrameContext[] = L"Windows.Media.Effects.ProcessAudioFrameContext";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Effects.ProcessVideoFrameContext
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Effects.IProcessVideoFrameContext ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Effects_ProcessVideoFrameContext_DEFINED
#define RUNTIMECLASS_Windows_Media_Effects_ProcessVideoFrameContext_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Effects_ProcessVideoFrameContext[] = L"Windows.Media.Effects.ProcessVideoFrameContext";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Effects.VideoCompositorDefinition
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Media.Effects.IVideoCompositorDefinitionFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Media.Effects.IVideoCompositorDefinition ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Effects_VideoCompositorDefinition_DEFINED
#define RUNTIMECLASS_Windows_Media_Effects_VideoCompositorDefinition_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Effects_VideoCompositorDefinition[] = L"Windows.Media.Effects.VideoCompositorDefinition";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Effects.VideoEffectDefinition
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Media.Effects.IVideoEffectDefinitionFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Media.Effects.IVideoEffectDefinition ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Effects_VideoEffectDefinition_DEFINED
#define RUNTIMECLASS_Windows_Media_Effects_VideoEffectDefinition_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Effects_VideoEffectDefinition[] = L"Windows.Media.Effects.VideoEffectDefinition";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Effects.VideoTransformEffectDefinition
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Media.Effects.IVideoEffectDefinition ** Default Interface **
 *    Windows.Media.Effects.IVideoTransformEffectDefinition
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Effects_VideoTransformEffectDefinition_DEFINED
#define RUNTIMECLASS_Windows_Media_Effects_VideoTransformEffectDefinition_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Effects_VideoTransformEffectDefinition[] = L"Windows.Media.Effects.VideoTransformEffectDefinition";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000




#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CMedia_CEffects_CIAudioCaptureEffectsManager_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CEffects_CIAudioCaptureEffectsManager_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CEffects_CIAudioCaptureEffectsManager __x_ABI_CWindows_CMedia_CEffects_CIAudioCaptureEffectsManager;

#endif // ____x_ABI_CWindows_CMedia_CEffects_CIAudioCaptureEffectsManager_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CEffects_CIAudioEffect_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CEffects_CIAudioEffect_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CEffects_CIAudioEffect __x_ABI_CWindows_CMedia_CEffects_CIAudioEffect;

#endif // ____x_ABI_CWindows_CMedia_CEffects_CIAudioEffect_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinition_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinition_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinition __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinition;

#endif // ____x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinition_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinitionFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinitionFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinitionFactory __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinitionFactory;

#endif // ____x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinitionFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CEffects_CIAudioEffectsManagerStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CEffects_CIAudioEffectsManagerStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectsManagerStatics __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectsManagerStatics;

#endif // ____x_ABI_CWindows_CMedia_CEffects_CIAudioEffectsManagerStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CEffects_CIAudioRenderEffectsManager_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CEffects_CIAudioRenderEffectsManager_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CEffects_CIAudioRenderEffectsManager __x_ABI_CWindows_CMedia_CEffects_CIAudioRenderEffectsManager;

#endif // ____x_ABI_CWindows_CMedia_CEffects_CIAudioRenderEffectsManager_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CEffects_CIAudioRenderEffectsManager2_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CEffects_CIAudioRenderEffectsManager2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CEffects_CIAudioRenderEffectsManager2 __x_ABI_CWindows_CMedia_CEffects_CIAudioRenderEffectsManager2;

#endif // ____x_ABI_CWindows_CMedia_CEffects_CIAudioRenderEffectsManager2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CEffects_CIBasicAudioEffect_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CEffects_CIBasicAudioEffect_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CEffects_CIBasicAudioEffect __x_ABI_CWindows_CMedia_CEffects_CIBasicAudioEffect;

#endif // ____x_ABI_CWindows_CMedia_CEffects_CIBasicAudioEffect_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CEffects_CIBasicVideoEffect_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CEffects_CIBasicVideoEffect_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CEffects_CIBasicVideoEffect __x_ABI_CWindows_CMedia_CEffects_CIBasicVideoEffect;

#endif // ____x_ABI_CWindows_CMedia_CEffects_CIBasicVideoEffect_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CEffects_CICompositeVideoFrameContext_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CEffects_CICompositeVideoFrameContext_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CEffects_CICompositeVideoFrameContext __x_ABI_CWindows_CMedia_CEffects_CICompositeVideoFrameContext;

#endif // ____x_ABI_CWindows_CMedia_CEffects_CICompositeVideoFrameContext_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CEffects_CIProcessAudioFrameContext_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CEffects_CIProcessAudioFrameContext_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CEffects_CIProcessAudioFrameContext __x_ABI_CWindows_CMedia_CEffects_CIProcessAudioFrameContext;

#endif // ____x_ABI_CWindows_CMedia_CEffects_CIProcessAudioFrameContext_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CEffects_CIProcessVideoFrameContext_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CEffects_CIProcessVideoFrameContext_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CEffects_CIProcessVideoFrameContext __x_ABI_CWindows_CMedia_CEffects_CIProcessVideoFrameContext;

#endif // ____x_ABI_CWindows_CMedia_CEffects_CIProcessVideoFrameContext_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CEffects_CIVideoCompositor_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CEffects_CIVideoCompositor_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CEffects_CIVideoCompositor __x_ABI_CWindows_CMedia_CEffects_CIVideoCompositor;

#endif // ____x_ABI_CWindows_CMedia_CEffects_CIVideoCompositor_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CEffects_CIVideoCompositorDefinition_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CEffects_CIVideoCompositorDefinition_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CEffects_CIVideoCompositorDefinition __x_ABI_CWindows_CMedia_CEffects_CIVideoCompositorDefinition;

#endif // ____x_ABI_CWindows_CMedia_CEffects_CIVideoCompositorDefinition_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CEffects_CIVideoCompositorDefinitionFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CEffects_CIVideoCompositorDefinitionFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CEffects_CIVideoCompositorDefinitionFactory __x_ABI_CWindows_CMedia_CEffects_CIVideoCompositorDefinitionFactory;

#endif // ____x_ABI_CWindows_CMedia_CEffects_CIVideoCompositorDefinitionFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CEffects_CIVideoEffectDefinition_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CEffects_CIVideoEffectDefinition_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CEffects_CIVideoEffectDefinition __x_ABI_CWindows_CMedia_CEffects_CIVideoEffectDefinition;

#endif // ____x_ABI_CWindows_CMedia_CEffects_CIVideoEffectDefinition_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CEffects_CIVideoEffectDefinitionFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CEffects_CIVideoEffectDefinitionFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CEffects_CIVideoEffectDefinitionFactory __x_ABI_CWindows_CMedia_CEffects_CIVideoEffectDefinitionFactory;

#endif // ____x_ABI_CWindows_CMedia_CEffects_CIVideoEffectDefinitionFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CEffects_CIVideoTransformEffectDefinition_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CEffects_CIVideoTransformEffectDefinition_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CEffects_CIVideoTransformEffectDefinition __x_ABI_CWindows_CMedia_CEffects_CIVideoTransformEffectDefinition;

#endif // ____x_ABI_CWindows_CMedia_CEffects_CIVideoTransformEffectDefinition_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CMedia__CEffects__CAudioEffect_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CMedia__CEffects__CAudioEffect_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CMedia__CEffects__CAudioEffect __FIIterator_1_Windows__CMedia__CEffects__CAudioEffect;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CMedia__CEffects__CAudioEffect;

typedef struct __FIIterator_1_Windows__CMedia__CEffects__CAudioEffectVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CMedia__CEffects__CAudioEffect * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CMedia__CEffects__CAudioEffect * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CMedia__CEffects__CAudioEffect * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CMedia__CEffects__CAudioEffect * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CMedia__CEffects__CAudioEffect * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CMedia__CEffects__CAudioEffect * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CMedia__CEffects__CAudioEffect * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CMedia_CEffects_CIAudioEffect * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CMedia__CEffects__CAudioEffect * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CMedia__CEffects__CAudioEffect * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CMedia__CEffects__CAudioEffect * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CEffects_CIAudioEffect * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CMedia__CEffects__CAudioEffectVtbl;

interface __FIIterator_1_Windows__CMedia__CEffects__CAudioEffect
{
    CONST_VTBL struct __FIIterator_1_Windows__CMedia__CEffects__CAudioEffectVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CMedia__CEffects__CAudioEffect_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CMedia__CEffects__CAudioEffect_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CMedia__CEffects__CAudioEffect_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CMedia__CEffects__CAudioEffect_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CMedia__CEffects__CAudioEffect_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CMedia__CEffects__CAudioEffect_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CMedia__CEffects__CAudioEffect_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CMedia__CEffects__CAudioEffect_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CMedia__CEffects__CAudioEffect_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CMedia__CEffects__CAudioEffect_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CMedia__CEffects__CAudioEffect_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CMedia__CEffects__CAudioEffect_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CMedia__CEffects__CAudioEffect_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CMedia__CEffects__CAudioEffect __FIIterable_1_Windows__CMedia__CEffects__CAudioEffect;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CMedia__CEffects__CAudioEffect;

typedef  struct __FIIterable_1_Windows__CMedia__CEffects__CAudioEffectVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CMedia__CEffects__CAudioEffect * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CMedia__CEffects__CAudioEffect * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CMedia__CEffects__CAudioEffect * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CMedia__CEffects__CAudioEffect * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CMedia__CEffects__CAudioEffect * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CMedia__CEffects__CAudioEffect * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CMedia__CEffects__CAudioEffect * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CMedia__CEffects__CAudioEffect **first);

    END_INTERFACE
} __FIIterable_1_Windows__CMedia__CEffects__CAudioEffectVtbl;

interface __FIIterable_1_Windows__CMedia__CEffects__CAudioEffect
{
    CONST_VTBL struct __FIIterable_1_Windows__CMedia__CEffects__CAudioEffectVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CMedia__CEffects__CAudioEffect_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CMedia__CEffects__CAudioEffect_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CMedia__CEffects__CAudioEffect_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CMedia__CEffects__CAudioEffect_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CMedia__CEffects__CAudioEffect_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CMedia__CEffects__CAudioEffect_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CMedia__CEffects__CAudioEffect_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CMedia__CEffects__CAudioEffect_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


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
#if !defined(____FIVectorView_1_Windows__CMedia__CEffects__CAudioEffect_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CMedia__CEffects__CAudioEffect_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CMedia__CEffects__CAudioEffect __FIVectorView_1_Windows__CMedia__CEffects__CAudioEffect;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CMedia__CEffects__CAudioEffect;

typedef struct __FIVectorView_1_Windows__CMedia__CEffects__CAudioEffectVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CMedia__CEffects__CAudioEffect * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CMedia__CEffects__CAudioEffect * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CMedia__CEffects__CAudioEffect * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CMedia__CEffects__CAudioEffect * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CMedia__CEffects__CAudioEffect * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CMedia__CEffects__CAudioEffect * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CMedia__CEffects__CAudioEffect * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CMedia_CEffects_CIAudioEffect * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CMedia__CEffects__CAudioEffect * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CEffects__CAudioEffect * This,
            /* [in] */ __x_ABI_CWindows_CMedia_CEffects_CIAudioEffect * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CEffects__CAudioEffect * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CEffects_CIAudioEffect * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CMedia__CEffects__CAudioEffectVtbl;

interface __FIVectorView_1_Windows__CMedia__CEffects__CAudioEffect
{
    CONST_VTBL struct __FIVectorView_1_Windows__CMedia__CEffects__CAudioEffectVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CMedia__CEffects__CAudioEffect_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CMedia__CEffects__CAudioEffect_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CMedia__CEffects__CAudioEffect_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CMedia__CEffects__CAudioEffect_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CMedia__CEffects__CAudioEffect_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CMedia__CEffects__CAudioEffect_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CMedia__CEffects__CAudioEffect_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CMedia__CEffects__CAudioEffect_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CMedia__CEffects__CAudioEffect_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CMedia__CEffects__CAudioEffect_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CMedia__CEffects__CAudioEffect_INTERFACE_DEFINED__

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



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CMedia__CEffects__CAudioCaptureEffectsManager_IInspectable_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CMedia__CEffects__CAudioCaptureEffectsManager_IInspectable_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CMedia__CEffects__CAudioCaptureEffectsManager_IInspectable __FITypedEventHandler_2_Windows__CMedia__CEffects__CAudioCaptureEffectsManager_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CEffects__CAudioCaptureEffectsManager_IInspectable;

typedef struct __FITypedEventHandler_2_Windows__CMedia__CEffects__CAudioCaptureEffectsManager_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CEffects__CAudioCaptureEffectsManager_IInspectable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CEffects__CAudioCaptureEffectsManager_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CEffects__CAudioCaptureEffectsManager_IInspectable * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CEffects__CAudioCaptureEffectsManager_IInspectable * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CMedia_CEffects_CIAudioCaptureEffectsManager * sender,/* [in] */ __RPC__in_opt IInspectable * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CEffects__CAudioCaptureEffectsManager_IInspectableVtbl;

interface __FITypedEventHandler_2_Windows__CMedia__CEffects__CAudioCaptureEffectsManager_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CEffects__CAudioCaptureEffectsManager_IInspectableVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CMedia__CEffects__CAudioCaptureEffectsManager_IInspectable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CMedia__CEffects__CAudioCaptureEffectsManager_IInspectable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CMedia__CEffects__CAudioCaptureEffectsManager_IInspectable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CMedia__CEffects__CAudioCaptureEffectsManager_IInspectable_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CMedia__CEffects__CAudioCaptureEffectsManager_IInspectable_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CMedia__CEffects__CAudioRenderEffectsManager_IInspectable_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CMedia__CEffects__CAudioRenderEffectsManager_IInspectable_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CMedia__CEffects__CAudioRenderEffectsManager_IInspectable __FITypedEventHandler_2_Windows__CMedia__CEffects__CAudioRenderEffectsManager_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CEffects__CAudioRenderEffectsManager_IInspectable;

typedef struct __FITypedEventHandler_2_Windows__CMedia__CEffects__CAudioRenderEffectsManager_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CEffects__CAudioRenderEffectsManager_IInspectable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CEffects__CAudioRenderEffectsManager_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CEffects__CAudioRenderEffectsManager_IInspectable * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CEffects__CAudioRenderEffectsManager_IInspectable * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CMedia_CEffects_CIAudioRenderEffectsManager * sender,/* [in] */ __RPC__in_opt IInspectable * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CEffects__CAudioRenderEffectsManager_IInspectableVtbl;

interface __FITypedEventHandler_2_Windows__CMedia__CEffects__CAudioRenderEffectsManager_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CEffects__CAudioRenderEffectsManager_IInspectableVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CMedia__CEffects__CAudioRenderEffectsManager_IInspectable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CMedia__CEffects__CAudioRenderEffectsManager_IInspectable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CMedia__CEffects__CAudioRenderEffectsManager_IInspectable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CMedia__CEffects__CAudioRenderEffectsManager_IInspectable_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CMedia__CEffects__CAudioRenderEffectsManager_IInspectable_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef ____x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties;

#endif // ____x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties_FWD_DEFINED__


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties __FIIterator_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties;

typedef struct __FIIterator_1_Windows__CMedia__CMediaProperties__CAudioEncodingPropertiesVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CMedia__CMediaProperties__CAudioEncodingPropertiesVtbl;

interface __FIIterator_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties
{
    CONST_VTBL struct __FIIterator_1_Windows__CMedia__CMediaProperties__CAudioEncodingPropertiesVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties __FIIterable_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties;

typedef  struct __FIIterable_1_Windows__CMedia__CMediaProperties__CAudioEncodingPropertiesVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties **first);

    END_INTERFACE
} __FIIterable_1_Windows__CMedia__CMediaProperties__CAudioEncodingPropertiesVtbl;

interface __FIIterable_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties
{
    CONST_VTBL struct __FIIterable_1_Windows__CMedia__CMediaProperties__CAudioEncodingPropertiesVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties __FIVectorView_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties;

typedef struct __FIVectorView_1_Windows__CMedia__CMediaProperties__CAudioEncodingPropertiesVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties * This,
            /* [in] */ __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CMedia__CMediaProperties__CAudioEncodingPropertiesVtbl;

interface __FIVectorView_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties
{
    CONST_VTBL struct __FIVectorView_1_Windows__CMedia__CMediaProperties__CAudioEncodingPropertiesVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef ____x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties;

#endif // ____x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties_FWD_DEFINED__


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties __FIIterator_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties;

typedef struct __FIIterator_1_Windows__CMedia__CMediaProperties__CVideoEncodingPropertiesVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CMedia__CMediaProperties__CVideoEncodingPropertiesVtbl;

interface __FIIterator_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties
{
    CONST_VTBL struct __FIIterator_1_Windows__CMedia__CMediaProperties__CVideoEncodingPropertiesVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties __FIIterable_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties;

typedef  struct __FIIterable_1_Windows__CMedia__CMediaProperties__CVideoEncodingPropertiesVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties **first);

    END_INTERFACE
} __FIIterable_1_Windows__CMedia__CMediaProperties__CVideoEncodingPropertiesVtbl;

interface __FIIterable_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties
{
    CONST_VTBL struct __FIIterable_1_Windows__CMedia__CMediaProperties__CVideoEncodingPropertiesVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties __FIVectorView_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties;

typedef struct __FIVectorView_1_Windows__CMedia__CMediaProperties__CVideoEncodingPropertiesVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties * This,
            /* [in] */ __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CMedia__CMediaProperties__CVideoEncodingPropertiesVtbl;

interface __FIVectorView_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties
{
    CONST_VTBL struct __FIVectorView_1_Windows__CMedia__CMediaProperties__CVideoEncodingPropertiesVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef ____x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface;

#endif // ____x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface_FWD_DEFINED__


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface __FIIterator_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface;

typedef struct __FIIterator_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurfaceVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurfaceVtbl;

interface __FIIterator_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface
{
    CONST_VTBL struct __FIIterator_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurfaceVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface __FIIterable_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface;

typedef  struct __FIIterable_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurfaceVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface **first);

    END_INTERFACE
} __FIIterable_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurfaceVtbl;

interface __FIIterable_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface
{
    CONST_VTBL struct __FIIterable_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurfaceVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface __FIVectorView_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface;

typedef struct __FIVectorView_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurfaceVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface * This,
            /* [in] */ __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurfaceVtbl;

interface __FIVectorView_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface
{
    CONST_VTBL struct __FIVectorView_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurfaceVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#ifndef ____x_ABI_CWindows_CFoundation_CCollections_CIPropertySet_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CCollections_CIPropertySet_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet;

#endif // ____x_ABI_CWindows_CFoundation_CCollections_CIPropertySet_FWD_DEFINED__






typedef struct __x_ABI_CWindows_CFoundation_CRect __x_ABI_CWindows_CFoundation_CRect;


typedef struct __x_ABI_CWindows_CFoundation_CSize __x_ABI_CWindows_CFoundation_CSize;




#ifndef ____x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DDevice_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DDevice_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DDevice __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DDevice;

#endif // ____x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DDevice_FWD_DEFINED__







#ifndef ____x_ABI_CWindows_CMedia_CIAudioFrame_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CIAudioFrame_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CIAudioFrame __x_ABI_CWindows_CMedia_CIAudioFrame;

#endif // ____x_ABI_CWindows_CMedia_CIAudioFrame_FWD_DEFINED__



typedef enum __x_ABI_CWindows_CMedia_CAudioProcessing __x_ABI_CWindows_CMedia_CAudioProcessing;




typedef enum __x_ABI_CWindows_CMedia_CCapture_CMediaCategory __x_ABI_CWindows_CMedia_CCapture_CMediaCategory;




#ifndef ____x_ABI_CWindows_CMedia_CEditing_CIMediaOverlay_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CEditing_CIMediaOverlay_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlay __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlay;

#endif // ____x_ABI_CWindows_CMedia_CEditing_CIMediaOverlay_FWD_DEFINED__





#ifndef ____x_ABI_CWindows_CMedia_CIMediaExtension_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CIMediaExtension_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CIMediaExtension __x_ABI_CWindows_CMedia_CIMediaExtension;

#endif // ____x_ABI_CWindows_CMedia_CIMediaExtension_FWD_DEFINED__






typedef enum __x_ABI_CWindows_CMedia_CMediaProperties_CMediaMirroringOptions __x_ABI_CWindows_CMedia_CMediaProperties_CMediaMirroringOptions;


typedef enum __x_ABI_CWindows_CMedia_CMediaProperties_CMediaRotation __x_ABI_CWindows_CMedia_CMediaProperties_CMediaRotation;






typedef enum __x_ABI_CWindows_CMedia_CRender_CAudioRenderCategory __x_ABI_CWindows_CMedia_CRender_CAudioRenderCategory;





typedef enum __x_ABI_CWindows_CMedia_CTranscoding_CMediaVideoProcessingAlgorithm __x_ABI_CWindows_CMedia_CTranscoding_CMediaVideoProcessingAlgorithm;




#ifndef ____x_ABI_CWindows_CMedia_CIVideoFrame_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CIVideoFrame_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CIVideoFrame __x_ABI_CWindows_CMedia_CIVideoFrame;

#endif // ____x_ABI_CWindows_CMedia_CIVideoFrame_FWD_DEFINED__




#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamWithContentType_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamWithContentType_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamWithContentType __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamWithContentType;

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamWithContentType_FWD_DEFINED__






typedef struct __x_ABI_CWindows_CUI_CColor __x_ABI_CWindows_CUI_CColor;




typedef enum __x_ABI_CWindows_CMedia_CEffects_CAudioEffectType __x_ABI_CWindows_CMedia_CEffects_CAudioEffectType;


typedef enum __x_ABI_CWindows_CMedia_CEffects_CMediaEffectClosedReason __x_ABI_CWindows_CMedia_CEffects_CMediaEffectClosedReason;


typedef enum __x_ABI_CWindows_CMedia_CEffects_CMediaMemoryTypes __x_ABI_CWindows_CMedia_CEffects_CMediaMemoryTypes;






































/*
 *
 * Struct Windows.Media.Effects.AudioEffectType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CMedia_CEffects_CAudioEffectType
{
    AudioEffectType_Other = 0,
    AudioEffectType_AcousticEchoCancellation = 1,
    AudioEffectType_NoiseSuppression = 2,
    AudioEffectType_AutomaticGainControl = 3,
    AudioEffectType_BeamForming = 4,
    AudioEffectType_ConstantToneRemoval = 5,
    AudioEffectType_Equalizer = 6,
    AudioEffectType_LoudnessEqualizer = 7,
    AudioEffectType_BassBoost = 8,
    AudioEffectType_VirtualSurround = 9,
    AudioEffectType_VirtualHeadphones = 10,
    AudioEffectType_SpeakerFill = 11,
    AudioEffectType_RoomCorrection = 12,
    AudioEffectType_BassManagement = 13,
    AudioEffectType_EnvironmentalEffects = 14,
    AudioEffectType_SpeakerProtection = 15,
    AudioEffectType_SpeakerCompensation = 16,
    AudioEffectType_DynamicRangeCompression = 17,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Media.Effects.MediaEffectClosedReason
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CMedia_CEffects_CMediaEffectClosedReason
{
    MediaEffectClosedReason_Done = 0,
    MediaEffectClosedReason_UnknownError = 1,
    MediaEffectClosedReason_UnsupportedEncodingFormat = 2,
    MediaEffectClosedReason_EffectCurrentlyUnloaded = 3,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Media.Effects.MediaMemoryTypes
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CMedia_CEffects_CMediaMemoryTypes
{
    MediaMemoryTypes_Gpu = 0,
    MediaMemoryTypes_Cpu = 1,
    MediaMemoryTypes_GpuAndCpu = 2,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Effects.IAudioCaptureEffectsManager
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Effects.AudioCaptureEffectsManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CEffects_CIAudioCaptureEffectsManager_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CEffects_CIAudioCaptureEffectsManager_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Effects_IAudioCaptureEffectsManager[] = L"Windows.Media.Effects.IAudioCaptureEffectsManager";
/* [object, uuid("8F85C271-038D-4393-8298-540110608EEF"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CEffects_CIAudioCaptureEffectsManagerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIAudioCaptureEffectsManager * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIAudioCaptureEffectsManager * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIAudioCaptureEffectsManager * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIAudioCaptureEffectsManager * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIAudioCaptureEffectsManager * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIAudioCaptureEffectsManager * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_AudioCaptureEffectsChanged )(
        __x_ABI_CWindows_CMedia_CEffects_CIAudioCaptureEffectsManager * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CEffects__CAudioCaptureEffectsManager_IInspectable * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_AudioCaptureEffectsChanged )(
        __x_ABI_CWindows_CMedia_CEffects_CIAudioCaptureEffectsManager * This,
        /* [in] */EventRegistrationToken token
        );
    HRESULT ( STDMETHODCALLTYPE *GetAudioCaptureEffects )(
        __x_ABI_CWindows_CMedia_CEffects_CIAudioCaptureEffectsManager * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CEffects__CAudioEffect * * effects
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CEffects_CIAudioCaptureEffectsManagerVtbl;

interface __x_ABI_CWindows_CMedia_CEffects_CIAudioCaptureEffectsManager
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CEffects_CIAudioCaptureEffectsManagerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CEffects_CIAudioCaptureEffectsManager_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CEffects_CIAudioCaptureEffectsManager_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CEffects_CIAudioCaptureEffectsManager_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CEffects_CIAudioCaptureEffectsManager_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CEffects_CIAudioCaptureEffectsManager_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CEffects_CIAudioCaptureEffectsManager_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CEffects_CIAudioCaptureEffectsManager_add_AudioCaptureEffectsChanged(This,handler,token) \
    ( (This)->lpVtbl->add_AudioCaptureEffectsChanged(This,handler,token) )

#define __x_ABI_CWindows_CMedia_CEffects_CIAudioCaptureEffectsManager_remove_AudioCaptureEffectsChanged(This,token) \
    ( (This)->lpVtbl->remove_AudioCaptureEffectsChanged(This,token) )

#define __x_ABI_CWindows_CMedia_CEffects_CIAudioCaptureEffectsManager_GetAudioCaptureEffects(This,effects) \
    ( (This)->lpVtbl->GetAudioCaptureEffects(This,effects) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CEffects_CIAudioCaptureEffectsManager;
#endif /* !defined(____x_ABI_CWindows_CMedia_CEffects_CIAudioCaptureEffectsManager_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Effects.IAudioEffect
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Effects.AudioEffect
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CEffects_CIAudioEffect_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CEffects_CIAudioEffect_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Effects_IAudioEffect[] = L"Windows.Media.Effects.IAudioEffect";
/* [object, uuid("34AAFA51-9207-4055-BE93-6E5734A86AE4"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIAudioEffect * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIAudioEffect * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIAudioEffect * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIAudioEffect * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIAudioEffect * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIAudioEffect * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AudioEffectType )(
        __x_ABI_CWindows_CMedia_CEffects_CIAudioEffect * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CMedia_CEffects_CAudioEffectType * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectVtbl;

interface __x_ABI_CWindows_CMedia_CEffects_CIAudioEffect
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CEffects_CIAudioEffect_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CEffects_CIAudioEffect_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CEffects_CIAudioEffect_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CEffects_CIAudioEffect_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CEffects_CIAudioEffect_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CEffects_CIAudioEffect_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CEffects_CIAudioEffect_get_AudioEffectType(This,value) \
    ( (This)->lpVtbl->get_AudioEffectType(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CEffects_CIAudioEffect;
#endif /* !defined(____x_ABI_CWindows_CMedia_CEffects_CIAudioEffect_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Effects.IAudioEffectDefinition
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinition_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinition_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Effects_IAudioEffectDefinition[] = L"Windows.Media.Effects.IAudioEffectDefinition";
/* [object, uuid("E4D7F974-7D80-4F73-9089-E31C9DB9C294"), contract] */
typedef struct __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinitionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinition * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinition * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinition * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinition * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinition * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinition * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ActivatableClassId )(
        __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinition * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Properties )(
        __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinition * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinitionVtbl;

interface __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinition
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinitionVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinition_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinition_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinition_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinition_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinition_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinition_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinition_get_ActivatableClassId(This,value) \
    ( (This)->lpVtbl->get_ActivatableClassId(This,value) )

#define __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinition_get_Properties(This,value) \
    ( (This)->lpVtbl->get_Properties(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinition;
#endif /* !defined(____x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinition_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Effects.IAudioEffectDefinitionFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Effects.AudioEffectDefinition
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinitionFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinitionFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Effects_IAudioEffectDefinitionFactory[] = L"Windows.Media.Effects.IAudioEffectDefinitionFactory";
/* [object, uuid("8E1DA646-E705-45ED-8A2B-FC4E4F405A97"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinitionFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinitionFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinitionFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinitionFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinitionFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinitionFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinitionFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinitionFactory * This,
        /* [in] */__RPC__in HSTRING activatableClassId,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinition * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateWithProperties )(
        __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinitionFactory * This,
        /* [in] */__RPC__in HSTRING activatableClassId,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet * props,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinition * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinitionFactoryVtbl;

interface __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinitionFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinitionFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinitionFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinitionFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinitionFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinitionFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinitionFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinitionFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinitionFactory_Create(This,activatableClassId,value) \
    ( (This)->lpVtbl->Create(This,activatableClassId,value) )

#define __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinitionFactory_CreateWithProperties(This,activatableClassId,props,value) \
    ( (This)->lpVtbl->CreateWithProperties(This,activatableClassId,props,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinitionFactory;
#endif /* !defined(____x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinitionFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Effects.IAudioEffectsManagerStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Effects.AudioEffectsManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CEffects_CIAudioEffectsManagerStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CEffects_CIAudioEffectsManagerStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Effects_IAudioEffectsManagerStatics[] = L"Windows.Media.Effects.IAudioEffectsManagerStatics";
/* [object, uuid("66406C04-86FA-47CC-A315-F489D8C3FE10"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectsManagerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectsManagerStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectsManagerStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectsManagerStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectsManagerStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectsManagerStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectsManagerStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [overload] */HRESULT ( STDMETHODCALLTYPE *CreateAudioRenderEffectsManager )(
        __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectsManagerStatics * This,
        /* [in] */__RPC__in HSTRING deviceId,
        /* [in] */__x_ABI_CWindows_CMedia_CRender_CAudioRenderCategory category,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CEffects_CIAudioRenderEffectsManager * * value
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *CreateAudioRenderEffectsManagerWithMode )(
        __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectsManagerStatics * This,
        /* [in] */__RPC__in HSTRING deviceId,
        /* [in] */__x_ABI_CWindows_CMedia_CRender_CAudioRenderCategory category,
        /* [in] */__x_ABI_CWindows_CMedia_CAudioProcessing mode,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CEffects_CIAudioRenderEffectsManager * * value
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *CreateAudioCaptureEffectsManager )(
        __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectsManagerStatics * This,
        /* [in] */__RPC__in HSTRING deviceId,
        /* [in] */__x_ABI_CWindows_CMedia_CCapture_CMediaCategory category,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CEffects_CIAudioCaptureEffectsManager * * value
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *CreateAudioCaptureEffectsManagerWithMode )(
        __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectsManagerStatics * This,
        /* [in] */__RPC__in HSTRING deviceId,
        /* [in] */__x_ABI_CWindows_CMedia_CCapture_CMediaCategory category,
        /* [in] */__x_ABI_CWindows_CMedia_CAudioProcessing mode,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CEffects_CIAudioCaptureEffectsManager * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectsManagerStaticsVtbl;

interface __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectsManagerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectsManagerStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectsManagerStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectsManagerStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectsManagerStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectsManagerStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectsManagerStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectsManagerStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectsManagerStatics_CreateAudioRenderEffectsManager(This,deviceId,category,value) \
    ( (This)->lpVtbl->CreateAudioRenderEffectsManager(This,deviceId,category,value) )

#define __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectsManagerStatics_CreateAudioRenderEffectsManagerWithMode(This,deviceId,category,mode,value) \
    ( (This)->lpVtbl->CreateAudioRenderEffectsManagerWithMode(This,deviceId,category,mode,value) )

#define __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectsManagerStatics_CreateAudioCaptureEffectsManager(This,deviceId,category,value) \
    ( (This)->lpVtbl->CreateAudioCaptureEffectsManager(This,deviceId,category,value) )

#define __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectsManagerStatics_CreateAudioCaptureEffectsManagerWithMode(This,deviceId,category,mode,value) \
    ( (This)->lpVtbl->CreateAudioCaptureEffectsManagerWithMode(This,deviceId,category,mode,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CEffects_CIAudioEffectsManagerStatics;
#endif /* !defined(____x_ABI_CWindows_CMedia_CEffects_CIAudioEffectsManagerStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Effects.IAudioRenderEffectsManager
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Effects.AudioRenderEffectsManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CEffects_CIAudioRenderEffectsManager_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CEffects_CIAudioRenderEffectsManager_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Effects_IAudioRenderEffectsManager[] = L"Windows.Media.Effects.IAudioRenderEffectsManager";
/* [object, uuid("4DC98966-8751-42B2-BFCB-39CA7864BD47"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CEffects_CIAudioRenderEffectsManagerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIAudioRenderEffectsManager * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIAudioRenderEffectsManager * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIAudioRenderEffectsManager * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIAudioRenderEffectsManager * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIAudioRenderEffectsManager * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIAudioRenderEffectsManager * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_AudioRenderEffectsChanged )(
        __x_ABI_CWindows_CMedia_CEffects_CIAudioRenderEffectsManager * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CEffects__CAudioRenderEffectsManager_IInspectable * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_AudioRenderEffectsChanged )(
        __x_ABI_CWindows_CMedia_CEffects_CIAudioRenderEffectsManager * This,
        /* [in] */EventRegistrationToken token
        );
    HRESULT ( STDMETHODCALLTYPE *GetAudioRenderEffects )(
        __x_ABI_CWindows_CMedia_CEffects_CIAudioRenderEffectsManager * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CEffects__CAudioEffect * * effects
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CEffects_CIAudioRenderEffectsManagerVtbl;

interface __x_ABI_CWindows_CMedia_CEffects_CIAudioRenderEffectsManager
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CEffects_CIAudioRenderEffectsManagerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CEffects_CIAudioRenderEffectsManager_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CEffects_CIAudioRenderEffectsManager_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CEffects_CIAudioRenderEffectsManager_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CEffects_CIAudioRenderEffectsManager_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CEffects_CIAudioRenderEffectsManager_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CEffects_CIAudioRenderEffectsManager_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CEffects_CIAudioRenderEffectsManager_add_AudioRenderEffectsChanged(This,handler,token) \
    ( (This)->lpVtbl->add_AudioRenderEffectsChanged(This,handler,token) )

#define __x_ABI_CWindows_CMedia_CEffects_CIAudioRenderEffectsManager_remove_AudioRenderEffectsChanged(This,token) \
    ( (This)->lpVtbl->remove_AudioRenderEffectsChanged(This,token) )

#define __x_ABI_CWindows_CMedia_CEffects_CIAudioRenderEffectsManager_GetAudioRenderEffects(This,effects) \
    ( (This)->lpVtbl->GetAudioRenderEffects(This,effects) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CEffects_CIAudioRenderEffectsManager;
#endif /* !defined(____x_ABI_CWindows_CMedia_CEffects_CIAudioRenderEffectsManager_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Effects.IAudioRenderEffectsManager2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Effects.AudioRenderEffectsManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CEffects_CIAudioRenderEffectsManager2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CEffects_CIAudioRenderEffectsManager2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Effects_IAudioRenderEffectsManager2[] = L"Windows.Media.Effects.IAudioRenderEffectsManager2";
/* [object, uuid("A844CD09-5ECC-44B3-BB4E-1DB07287139C"), exclusiveto, deprecated, contract] */
typedef struct 
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
DEPRECATED("Not supported starting in windows 10")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
__x_ABI_CWindows_CMedia_CEffects_CIAudioRenderEffectsManager2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIAudioRenderEffectsManager2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIAudioRenderEffectsManager2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIAudioRenderEffectsManager2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIAudioRenderEffectsManager2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIAudioRenderEffectsManager2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIAudioRenderEffectsManager2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );

    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    DEPRECATED("Not supported starting in windows 10")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    /* [propget, deprecated] */HRESULT ( STDMETHODCALLTYPE *get_EffectsProviderThumbnail )(
        __x_ABI_CWindows_CMedia_CEffects_CIAudioRenderEffectsManager2 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamWithContentType * * value
        );
    
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    DEPRECATED("Not supported starting in windows 10")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    /* [propget, deprecated] */HRESULT ( STDMETHODCALLTYPE *get_EffectsProviderSettingsLabel )(
        __x_ABI_CWindows_CMedia_CEffects_CIAudioRenderEffectsManager2 * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    DEPRECATED("Not supported starting in windows 10")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    /* [deprecated] */HRESULT ( STDMETHODCALLTYPE *ShowSettingsUI )(
        __x_ABI_CWindows_CMedia_CEffects_CIAudioRenderEffectsManager2 * This
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CEffects_CIAudioRenderEffectsManager2Vtbl;

interface __x_ABI_CWindows_CMedia_CEffects_CIAudioRenderEffectsManager2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CEffects_CIAudioRenderEffectsManager2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CEffects_CIAudioRenderEffectsManager2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CEffects_CIAudioRenderEffectsManager2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CEffects_CIAudioRenderEffectsManager2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CEffects_CIAudioRenderEffectsManager2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CEffects_CIAudioRenderEffectsManager2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CEffects_CIAudioRenderEffectsManager2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
DEPRECATED("Not supported starting in windows 10")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#define __x_ABI_CWindows_CMedia_CEffects_CIAudioRenderEffectsManager2_get_EffectsProviderThumbnail(This,value) \
    ( (This)->lpVtbl->get_EffectsProviderThumbnail(This,value) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
DEPRECATED("Not supported starting in windows 10")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#define __x_ABI_CWindows_CMedia_CEffects_CIAudioRenderEffectsManager2_get_EffectsProviderSettingsLabel(This,value) \
    ( (This)->lpVtbl->get_EffectsProviderSettingsLabel(This,value) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
DEPRECATED("Not supported starting in windows 10")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#define __x_ABI_CWindows_CMedia_CEffects_CIAudioRenderEffectsManager2_ShowSettingsUI(This) \
    ( (This)->lpVtbl->ShowSettingsUI(This) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CEffects_CIAudioRenderEffectsManager2;
#endif /* !defined(____x_ABI_CWindows_CMedia_CEffects_CIAudioRenderEffectsManager2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Effects.IBasicAudioEffect
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Media.IMediaExtension
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CEffects_CIBasicAudioEffect_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CEffects_CIBasicAudioEffect_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Effects_IBasicAudioEffect[] = L"Windows.Media.Effects.IBasicAudioEffect";
/* [object, uuid("8C062C53-6BC0-48B8-A99A-4B41550F1359"), contract] */
typedef struct __x_ABI_CWindows_CMedia_CEffects_CIBasicAudioEffectVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIBasicAudioEffect * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIBasicAudioEffect * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIBasicAudioEffect * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIBasicAudioEffect * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIBasicAudioEffect * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIBasicAudioEffect * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_UseInputFrameForOutput )(
        __x_ABI_CWindows_CMedia_CEffects_CIBasicAudioEffect * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SupportedEncodingProperties )(
        __x_ABI_CWindows_CMedia_CEffects_CIBasicAudioEffect * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties * * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetEncodingProperties )(
        __x_ABI_CWindows_CMedia_CEffects_CIBasicAudioEffect * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties * encodingProperties
        );
    HRESULT ( STDMETHODCALLTYPE *ProcessFrame )(
        __x_ABI_CWindows_CMedia_CEffects_CIBasicAudioEffect * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CMedia_CEffects_CIProcessAudioFrameContext * context
        );
    HRESULT ( STDMETHODCALLTYPE *Close )(
        __x_ABI_CWindows_CMedia_CEffects_CIBasicAudioEffect * This,
        /* [in] */__x_ABI_CWindows_CMedia_CEffects_CMediaEffectClosedReason reason
        );
    HRESULT ( STDMETHODCALLTYPE *DiscardQueuedFrames )(
        __x_ABI_CWindows_CMedia_CEffects_CIBasicAudioEffect * This
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CEffects_CIBasicAudioEffectVtbl;

interface __x_ABI_CWindows_CMedia_CEffects_CIBasicAudioEffect
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CEffects_CIBasicAudioEffectVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CEffects_CIBasicAudioEffect_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CEffects_CIBasicAudioEffect_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CEffects_CIBasicAudioEffect_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CEffects_CIBasicAudioEffect_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CEffects_CIBasicAudioEffect_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CEffects_CIBasicAudioEffect_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CEffects_CIBasicAudioEffect_get_UseInputFrameForOutput(This,value) \
    ( (This)->lpVtbl->get_UseInputFrameForOutput(This,value) )

#define __x_ABI_CWindows_CMedia_CEffects_CIBasicAudioEffect_get_SupportedEncodingProperties(This,value) \
    ( (This)->lpVtbl->get_SupportedEncodingProperties(This,value) )

#define __x_ABI_CWindows_CMedia_CEffects_CIBasicAudioEffect_SetEncodingProperties(This,encodingProperties) \
    ( (This)->lpVtbl->SetEncodingProperties(This,encodingProperties) )

#define __x_ABI_CWindows_CMedia_CEffects_CIBasicAudioEffect_ProcessFrame(This,context) \
    ( (This)->lpVtbl->ProcessFrame(This,context) )

#define __x_ABI_CWindows_CMedia_CEffects_CIBasicAudioEffect_Close(This,reason) \
    ( (This)->lpVtbl->Close(This,reason) )

#define __x_ABI_CWindows_CMedia_CEffects_CIBasicAudioEffect_DiscardQueuedFrames(This) \
    ( (This)->lpVtbl->DiscardQueuedFrames(This) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CEffects_CIBasicAudioEffect;
#endif /* !defined(____x_ABI_CWindows_CMedia_CEffects_CIBasicAudioEffect_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Effects.IBasicVideoEffect
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Media.IMediaExtension
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CEffects_CIBasicVideoEffect_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CEffects_CIBasicVideoEffect_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Effects_IBasicVideoEffect[] = L"Windows.Media.Effects.IBasicVideoEffect";
/* [object, uuid("8262C7EF-B360-40BE-949B-2FF42FF35693"), contract] */
typedef struct __x_ABI_CWindows_CMedia_CEffects_CIBasicVideoEffectVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIBasicVideoEffect * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIBasicVideoEffect * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIBasicVideoEffect * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIBasicVideoEffect * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIBasicVideoEffect * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIBasicVideoEffect * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsReadOnly )(
        __x_ABI_CWindows_CMedia_CEffects_CIBasicVideoEffect * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SupportedMemoryTypes )(
        __x_ABI_CWindows_CMedia_CEffects_CIBasicVideoEffect * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CMedia_CEffects_CMediaMemoryTypes * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_TimeIndependent )(
        __x_ABI_CWindows_CMedia_CEffects_CIBasicVideoEffect * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SupportedEncodingProperties )(
        __x_ABI_CWindows_CMedia_CEffects_CIBasicVideoEffect * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties * * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetEncodingProperties )(
        __x_ABI_CWindows_CMedia_CEffects_CIBasicVideoEffect * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties * encodingProperties,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DDevice * device
        );
    HRESULT ( STDMETHODCALLTYPE *ProcessFrame )(
        __x_ABI_CWindows_CMedia_CEffects_CIBasicVideoEffect * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CMedia_CEffects_CIProcessVideoFrameContext * context
        );
    HRESULT ( STDMETHODCALLTYPE *Close )(
        __x_ABI_CWindows_CMedia_CEffects_CIBasicVideoEffect * This,
        /* [in] */__x_ABI_CWindows_CMedia_CEffects_CMediaEffectClosedReason reason
        );
    HRESULT ( STDMETHODCALLTYPE *DiscardQueuedFrames )(
        __x_ABI_CWindows_CMedia_CEffects_CIBasicVideoEffect * This
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CEffects_CIBasicVideoEffectVtbl;

interface __x_ABI_CWindows_CMedia_CEffects_CIBasicVideoEffect
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CEffects_CIBasicVideoEffectVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CEffects_CIBasicVideoEffect_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CEffects_CIBasicVideoEffect_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CEffects_CIBasicVideoEffect_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CEffects_CIBasicVideoEffect_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CEffects_CIBasicVideoEffect_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CEffects_CIBasicVideoEffect_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CEffects_CIBasicVideoEffect_get_IsReadOnly(This,value) \
    ( (This)->lpVtbl->get_IsReadOnly(This,value) )

#define __x_ABI_CWindows_CMedia_CEffects_CIBasicVideoEffect_get_SupportedMemoryTypes(This,value) \
    ( (This)->lpVtbl->get_SupportedMemoryTypes(This,value) )

#define __x_ABI_CWindows_CMedia_CEffects_CIBasicVideoEffect_get_TimeIndependent(This,value) \
    ( (This)->lpVtbl->get_TimeIndependent(This,value) )

#define __x_ABI_CWindows_CMedia_CEffects_CIBasicVideoEffect_get_SupportedEncodingProperties(This,value) \
    ( (This)->lpVtbl->get_SupportedEncodingProperties(This,value) )

#define __x_ABI_CWindows_CMedia_CEffects_CIBasicVideoEffect_SetEncodingProperties(This,encodingProperties,device) \
    ( (This)->lpVtbl->SetEncodingProperties(This,encodingProperties,device) )

#define __x_ABI_CWindows_CMedia_CEffects_CIBasicVideoEffect_ProcessFrame(This,context) \
    ( (This)->lpVtbl->ProcessFrame(This,context) )

#define __x_ABI_CWindows_CMedia_CEffects_CIBasicVideoEffect_Close(This,reason) \
    ( (This)->lpVtbl->Close(This,reason) )

#define __x_ABI_CWindows_CMedia_CEffects_CIBasicVideoEffect_DiscardQueuedFrames(This) \
    ( (This)->lpVtbl->DiscardQueuedFrames(This) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CEffects_CIBasicVideoEffect;
#endif /* !defined(____x_ABI_CWindows_CMedia_CEffects_CIBasicVideoEffect_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Effects.ICompositeVideoFrameContext
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Effects.CompositeVideoFrameContext
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CEffects_CICompositeVideoFrameContext_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CEffects_CICompositeVideoFrameContext_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Effects_ICompositeVideoFrameContext[] = L"Windows.Media.Effects.ICompositeVideoFrameContext";
/* [object, uuid("6C30024B-F514-4278-A5F7-B9188049D110"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CEffects_CICompositeVideoFrameContextVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CICompositeVideoFrameContext * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CICompositeVideoFrameContext * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CICompositeVideoFrameContext * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CICompositeVideoFrameContext * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CICompositeVideoFrameContext * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CICompositeVideoFrameContext * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SurfacesToOverlay )(
        __x_ABI_CWindows_CMedia_CEffects_CICompositeVideoFrameContext * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_BackgroundFrame )(
        __x_ABI_CWindows_CMedia_CEffects_CICompositeVideoFrameContext * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CIVideoFrame * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_OutputFrame )(
        __x_ABI_CWindows_CMedia_CEffects_CICompositeVideoFrameContext * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CIVideoFrame * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetOverlayForSurface )(
        __x_ABI_CWindows_CMedia_CEffects_CICompositeVideoFrameContext * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface * surfaceToOverlay,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlay * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CEffects_CICompositeVideoFrameContextVtbl;

interface __x_ABI_CWindows_CMedia_CEffects_CICompositeVideoFrameContext
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CEffects_CICompositeVideoFrameContextVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CEffects_CICompositeVideoFrameContext_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CEffects_CICompositeVideoFrameContext_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CEffects_CICompositeVideoFrameContext_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CEffects_CICompositeVideoFrameContext_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CEffects_CICompositeVideoFrameContext_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CEffects_CICompositeVideoFrameContext_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CEffects_CICompositeVideoFrameContext_get_SurfacesToOverlay(This,value) \
    ( (This)->lpVtbl->get_SurfacesToOverlay(This,value) )

#define __x_ABI_CWindows_CMedia_CEffects_CICompositeVideoFrameContext_get_BackgroundFrame(This,value) \
    ( (This)->lpVtbl->get_BackgroundFrame(This,value) )

#define __x_ABI_CWindows_CMedia_CEffects_CICompositeVideoFrameContext_get_OutputFrame(This,value) \
    ( (This)->lpVtbl->get_OutputFrame(This,value) )

#define __x_ABI_CWindows_CMedia_CEffects_CICompositeVideoFrameContext_GetOverlayForSurface(This,surfaceToOverlay,value) \
    ( (This)->lpVtbl->GetOverlayForSurface(This,surfaceToOverlay,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CEffects_CICompositeVideoFrameContext;
#endif /* !defined(____x_ABI_CWindows_CMedia_CEffects_CICompositeVideoFrameContext_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Effects.IProcessAudioFrameContext
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Effects.ProcessAudioFrameContext
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CEffects_CIProcessAudioFrameContext_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CEffects_CIProcessAudioFrameContext_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Effects_IProcessAudioFrameContext[] = L"Windows.Media.Effects.IProcessAudioFrameContext";
/* [object, uuid("4CD92946-1222-4A27-A586-FB3E20273255"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CEffects_CIProcessAudioFrameContextVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIProcessAudioFrameContext * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIProcessAudioFrameContext * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIProcessAudioFrameContext * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIProcessAudioFrameContext * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIProcessAudioFrameContext * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIProcessAudioFrameContext * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_InputFrame )(
        __x_ABI_CWindows_CMedia_CEffects_CIProcessAudioFrameContext * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CIAudioFrame * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_OutputFrame )(
        __x_ABI_CWindows_CMedia_CEffects_CIProcessAudioFrameContext * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CIAudioFrame * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CEffects_CIProcessAudioFrameContextVtbl;

interface __x_ABI_CWindows_CMedia_CEffects_CIProcessAudioFrameContext
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CEffects_CIProcessAudioFrameContextVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CEffects_CIProcessAudioFrameContext_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CEffects_CIProcessAudioFrameContext_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CEffects_CIProcessAudioFrameContext_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CEffects_CIProcessAudioFrameContext_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CEffects_CIProcessAudioFrameContext_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CEffects_CIProcessAudioFrameContext_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CEffects_CIProcessAudioFrameContext_get_InputFrame(This,value) \
    ( (This)->lpVtbl->get_InputFrame(This,value) )

#define __x_ABI_CWindows_CMedia_CEffects_CIProcessAudioFrameContext_get_OutputFrame(This,value) \
    ( (This)->lpVtbl->get_OutputFrame(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CEffects_CIProcessAudioFrameContext;
#endif /* !defined(____x_ABI_CWindows_CMedia_CEffects_CIProcessAudioFrameContext_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Effects.IProcessVideoFrameContext
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Effects.ProcessVideoFrameContext
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CEffects_CIProcessVideoFrameContext_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CEffects_CIProcessVideoFrameContext_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Effects_IProcessVideoFrameContext[] = L"Windows.Media.Effects.IProcessVideoFrameContext";
/* [object, uuid("276F0E2B-6461-401E-BA78-0FDAD6114EEC"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CEffects_CIProcessVideoFrameContextVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIProcessVideoFrameContext * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIProcessVideoFrameContext * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIProcessVideoFrameContext * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIProcessVideoFrameContext * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIProcessVideoFrameContext * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIProcessVideoFrameContext * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_InputFrame )(
        __x_ABI_CWindows_CMedia_CEffects_CIProcessVideoFrameContext * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CIVideoFrame * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_OutputFrame )(
        __x_ABI_CWindows_CMedia_CEffects_CIProcessVideoFrameContext * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CIVideoFrame * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CEffects_CIProcessVideoFrameContextVtbl;

interface __x_ABI_CWindows_CMedia_CEffects_CIProcessVideoFrameContext
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CEffects_CIProcessVideoFrameContextVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CEffects_CIProcessVideoFrameContext_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CEffects_CIProcessVideoFrameContext_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CEffects_CIProcessVideoFrameContext_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CEffects_CIProcessVideoFrameContext_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CEffects_CIProcessVideoFrameContext_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CEffects_CIProcessVideoFrameContext_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CEffects_CIProcessVideoFrameContext_get_InputFrame(This,value) \
    ( (This)->lpVtbl->get_InputFrame(This,value) )

#define __x_ABI_CWindows_CMedia_CEffects_CIProcessVideoFrameContext_get_OutputFrame(This,value) \
    ( (This)->lpVtbl->get_OutputFrame(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CEffects_CIProcessVideoFrameContext;
#endif /* !defined(____x_ABI_CWindows_CMedia_CEffects_CIProcessVideoFrameContext_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Effects.IVideoCompositor
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Media.IMediaExtension
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CEffects_CIVideoCompositor_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CEffects_CIVideoCompositor_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Effects_IVideoCompositor[] = L"Windows.Media.Effects.IVideoCompositor";
/* [object, uuid("8510B43E-420C-420F-96C7-7C98BBA1FC55"), contract] */
typedef struct __x_ABI_CWindows_CMedia_CEffects_CIVideoCompositorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIVideoCompositor * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIVideoCompositor * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIVideoCompositor * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIVideoCompositor * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIVideoCompositor * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIVideoCompositor * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_TimeIndependent )(
        __x_ABI_CWindows_CMedia_CEffects_CIVideoCompositor * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetEncodingProperties )(
        __x_ABI_CWindows_CMedia_CEffects_CIVideoCompositor * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties * backgroundProperties,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DDevice * device
        );
    HRESULT ( STDMETHODCALLTYPE *CompositeFrame )(
        __x_ABI_CWindows_CMedia_CEffects_CIVideoCompositor * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CMedia_CEffects_CICompositeVideoFrameContext * context
        );
    HRESULT ( STDMETHODCALLTYPE *Close )(
        __x_ABI_CWindows_CMedia_CEffects_CIVideoCompositor * This,
        /* [in] */__x_ABI_CWindows_CMedia_CEffects_CMediaEffectClosedReason reason
        );
    HRESULT ( STDMETHODCALLTYPE *DiscardQueuedFrames )(
        __x_ABI_CWindows_CMedia_CEffects_CIVideoCompositor * This
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CEffects_CIVideoCompositorVtbl;

interface __x_ABI_CWindows_CMedia_CEffects_CIVideoCompositor
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CEffects_CIVideoCompositorVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CEffects_CIVideoCompositor_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CEffects_CIVideoCompositor_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CEffects_CIVideoCompositor_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CEffects_CIVideoCompositor_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CEffects_CIVideoCompositor_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CEffects_CIVideoCompositor_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CEffects_CIVideoCompositor_get_TimeIndependent(This,value) \
    ( (This)->lpVtbl->get_TimeIndependent(This,value) )

#define __x_ABI_CWindows_CMedia_CEffects_CIVideoCompositor_SetEncodingProperties(This,backgroundProperties,device) \
    ( (This)->lpVtbl->SetEncodingProperties(This,backgroundProperties,device) )

#define __x_ABI_CWindows_CMedia_CEffects_CIVideoCompositor_CompositeFrame(This,context) \
    ( (This)->lpVtbl->CompositeFrame(This,context) )

#define __x_ABI_CWindows_CMedia_CEffects_CIVideoCompositor_Close(This,reason) \
    ( (This)->lpVtbl->Close(This,reason) )

#define __x_ABI_CWindows_CMedia_CEffects_CIVideoCompositor_DiscardQueuedFrames(This) \
    ( (This)->lpVtbl->DiscardQueuedFrames(This) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CEffects_CIVideoCompositor;
#endif /* !defined(____x_ABI_CWindows_CMedia_CEffects_CIVideoCompositor_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Effects.IVideoCompositorDefinition
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CEffects_CIVideoCompositorDefinition_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CEffects_CIVideoCompositorDefinition_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Effects_IVideoCompositorDefinition[] = L"Windows.Media.Effects.IVideoCompositorDefinition";
/* [object, uuid("7946B8D0-2010-4AE3-9AB2-2CEF42EDD4D2"), contract] */
typedef struct __x_ABI_CWindows_CMedia_CEffects_CIVideoCompositorDefinitionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIVideoCompositorDefinition * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIVideoCompositorDefinition * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIVideoCompositorDefinition * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIVideoCompositorDefinition * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIVideoCompositorDefinition * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIVideoCompositorDefinition * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ActivatableClassId )(
        __x_ABI_CWindows_CMedia_CEffects_CIVideoCompositorDefinition * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Properties )(
        __x_ABI_CWindows_CMedia_CEffects_CIVideoCompositorDefinition * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CEffects_CIVideoCompositorDefinitionVtbl;

interface __x_ABI_CWindows_CMedia_CEffects_CIVideoCompositorDefinition
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CEffects_CIVideoCompositorDefinitionVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CEffects_CIVideoCompositorDefinition_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CEffects_CIVideoCompositorDefinition_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CEffects_CIVideoCompositorDefinition_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CEffects_CIVideoCompositorDefinition_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CEffects_CIVideoCompositorDefinition_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CEffects_CIVideoCompositorDefinition_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CEffects_CIVideoCompositorDefinition_get_ActivatableClassId(This,value) \
    ( (This)->lpVtbl->get_ActivatableClassId(This,value) )

#define __x_ABI_CWindows_CMedia_CEffects_CIVideoCompositorDefinition_get_Properties(This,value) \
    ( (This)->lpVtbl->get_Properties(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CEffects_CIVideoCompositorDefinition;
#endif /* !defined(____x_ABI_CWindows_CMedia_CEffects_CIVideoCompositorDefinition_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Effects.IVideoCompositorDefinitionFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Effects.VideoCompositorDefinition
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CEffects_CIVideoCompositorDefinitionFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CEffects_CIVideoCompositorDefinitionFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Effects_IVideoCompositorDefinitionFactory[] = L"Windows.Media.Effects.IVideoCompositorDefinitionFactory";
/* [object, uuid("4366FD10-68B8-4D52-89B6-02A968CCA899"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CEffects_CIVideoCompositorDefinitionFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIVideoCompositorDefinitionFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIVideoCompositorDefinitionFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIVideoCompositorDefinitionFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIVideoCompositorDefinitionFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIVideoCompositorDefinitionFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIVideoCompositorDefinitionFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CMedia_CEffects_CIVideoCompositorDefinitionFactory * This,
        /* [in] */__RPC__in HSTRING activatableClassId,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CEffects_CIVideoCompositorDefinition * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateWithProperties )(
        __x_ABI_CWindows_CMedia_CEffects_CIVideoCompositorDefinitionFactory * This,
        /* [in] */__RPC__in HSTRING activatableClassId,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet * props,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CEffects_CIVideoCompositorDefinition * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CEffects_CIVideoCompositorDefinitionFactoryVtbl;

interface __x_ABI_CWindows_CMedia_CEffects_CIVideoCompositorDefinitionFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CEffects_CIVideoCompositorDefinitionFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CEffects_CIVideoCompositorDefinitionFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CEffects_CIVideoCompositorDefinitionFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CEffects_CIVideoCompositorDefinitionFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CEffects_CIVideoCompositorDefinitionFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CEffects_CIVideoCompositorDefinitionFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CEffects_CIVideoCompositorDefinitionFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CEffects_CIVideoCompositorDefinitionFactory_Create(This,activatableClassId,value) \
    ( (This)->lpVtbl->Create(This,activatableClassId,value) )

#define __x_ABI_CWindows_CMedia_CEffects_CIVideoCompositorDefinitionFactory_CreateWithProperties(This,activatableClassId,props,value) \
    ( (This)->lpVtbl->CreateWithProperties(This,activatableClassId,props,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CEffects_CIVideoCompositorDefinitionFactory;
#endif /* !defined(____x_ABI_CWindows_CMedia_CEffects_CIVideoCompositorDefinitionFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Effects.IVideoEffectDefinition
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CEffects_CIVideoEffectDefinition_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CEffects_CIVideoEffectDefinition_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Effects_IVideoEffectDefinition[] = L"Windows.Media.Effects.IVideoEffectDefinition";
/* [object, uuid("39F38CF0-8D0F-4F3E-84FC-2D46A5297943"), contract] */
typedef struct __x_ABI_CWindows_CMedia_CEffects_CIVideoEffectDefinitionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIVideoEffectDefinition * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIVideoEffectDefinition * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIVideoEffectDefinition * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIVideoEffectDefinition * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIVideoEffectDefinition * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIVideoEffectDefinition * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ActivatableClassId )(
        __x_ABI_CWindows_CMedia_CEffects_CIVideoEffectDefinition * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Properties )(
        __x_ABI_CWindows_CMedia_CEffects_CIVideoEffectDefinition * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CEffects_CIVideoEffectDefinitionVtbl;

interface __x_ABI_CWindows_CMedia_CEffects_CIVideoEffectDefinition
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CEffects_CIVideoEffectDefinitionVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CEffects_CIVideoEffectDefinition_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CEffects_CIVideoEffectDefinition_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CEffects_CIVideoEffectDefinition_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CEffects_CIVideoEffectDefinition_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CEffects_CIVideoEffectDefinition_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CEffects_CIVideoEffectDefinition_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CEffects_CIVideoEffectDefinition_get_ActivatableClassId(This,value) \
    ( (This)->lpVtbl->get_ActivatableClassId(This,value) )

#define __x_ABI_CWindows_CMedia_CEffects_CIVideoEffectDefinition_get_Properties(This,value) \
    ( (This)->lpVtbl->get_Properties(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CEffects_CIVideoEffectDefinition;
#endif /* !defined(____x_ABI_CWindows_CMedia_CEffects_CIVideoEffectDefinition_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Effects.IVideoEffectDefinitionFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Effects.VideoEffectDefinition
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CEffects_CIVideoEffectDefinitionFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CEffects_CIVideoEffectDefinitionFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Effects_IVideoEffectDefinitionFactory[] = L"Windows.Media.Effects.IVideoEffectDefinitionFactory";
/* [object, uuid("81439B4E-6E33-428F-9D21-B5AAFEF7617C"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CEffects_CIVideoEffectDefinitionFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIVideoEffectDefinitionFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIVideoEffectDefinitionFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIVideoEffectDefinitionFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIVideoEffectDefinitionFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIVideoEffectDefinitionFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIVideoEffectDefinitionFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CMedia_CEffects_CIVideoEffectDefinitionFactory * This,
        /* [in] */__RPC__in HSTRING activatableClassId,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CEffects_CIVideoEffectDefinition * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateWithProperties )(
        __x_ABI_CWindows_CMedia_CEffects_CIVideoEffectDefinitionFactory * This,
        /* [in] */__RPC__in HSTRING activatableClassId,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet * props,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CEffects_CIVideoEffectDefinition * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CEffects_CIVideoEffectDefinitionFactoryVtbl;

interface __x_ABI_CWindows_CMedia_CEffects_CIVideoEffectDefinitionFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CEffects_CIVideoEffectDefinitionFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CEffects_CIVideoEffectDefinitionFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CEffects_CIVideoEffectDefinitionFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CEffects_CIVideoEffectDefinitionFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CEffects_CIVideoEffectDefinitionFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CEffects_CIVideoEffectDefinitionFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CEffects_CIVideoEffectDefinitionFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CEffects_CIVideoEffectDefinitionFactory_Create(This,activatableClassId,value) \
    ( (This)->lpVtbl->Create(This,activatableClassId,value) )

#define __x_ABI_CWindows_CMedia_CEffects_CIVideoEffectDefinitionFactory_CreateWithProperties(This,activatableClassId,props,value) \
    ( (This)->lpVtbl->CreateWithProperties(This,activatableClassId,props,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CEffects_CIVideoEffectDefinitionFactory;
#endif /* !defined(____x_ABI_CWindows_CMedia_CEffects_CIVideoEffectDefinitionFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Effects.IVideoTransformEffectDefinition
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Effects.VideoTransformEffectDefinition
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Media.Effects.IVideoEffectDefinition
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CEffects_CIVideoTransformEffectDefinition_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CEffects_CIVideoTransformEffectDefinition_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Effects_IVideoTransformEffectDefinition[] = L"Windows.Media.Effects.IVideoTransformEffectDefinition";
/* [object, uuid("9664BB6A-1EA6-4AA6-8074-ABE8851ECAE2"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CEffects_CIVideoTransformEffectDefinitionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIVideoTransformEffectDefinition * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIVideoTransformEffectDefinition * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIVideoTransformEffectDefinition * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIVideoTransformEffectDefinition * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIVideoTransformEffectDefinition * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIVideoTransformEffectDefinition * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PaddingColor )(
        __x_ABI_CWindows_CMedia_CEffects_CIVideoTransformEffectDefinition * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_PaddingColor )(
        __x_ABI_CWindows_CMedia_CEffects_CIVideoTransformEffectDefinition * This,
        /* [in] */__x_ABI_CWindows_CUI_CColor value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_OutputSize )(
        __x_ABI_CWindows_CMedia_CEffects_CIVideoTransformEffectDefinition * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CSize * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_OutputSize )(
        __x_ABI_CWindows_CMedia_CEffects_CIVideoTransformEffectDefinition * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CSize value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CropRectangle )(
        __x_ABI_CWindows_CMedia_CEffects_CIVideoTransformEffectDefinition * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CRect * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_CropRectangle )(
        __x_ABI_CWindows_CMedia_CEffects_CIVideoTransformEffectDefinition * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CRect value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Rotation )(
        __x_ABI_CWindows_CMedia_CEffects_CIVideoTransformEffectDefinition * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CMedia_CMediaProperties_CMediaRotation * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Rotation )(
        __x_ABI_CWindows_CMedia_CEffects_CIVideoTransformEffectDefinition * This,
        /* [in] */__x_ABI_CWindows_CMedia_CMediaProperties_CMediaRotation value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Mirror )(
        __x_ABI_CWindows_CMedia_CEffects_CIVideoTransformEffectDefinition * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CMedia_CMediaProperties_CMediaMirroringOptions * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Mirror )(
        __x_ABI_CWindows_CMedia_CEffects_CIVideoTransformEffectDefinition * This,
        /* [in] */__x_ABI_CWindows_CMedia_CMediaProperties_CMediaMirroringOptions value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ProcessingAlgorithm )(
        __x_ABI_CWindows_CMedia_CEffects_CIVideoTransformEffectDefinition * This,
        /* [in] */__x_ABI_CWindows_CMedia_CTranscoding_CMediaVideoProcessingAlgorithm value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ProcessingAlgorithm )(
        __x_ABI_CWindows_CMedia_CEffects_CIVideoTransformEffectDefinition * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CMedia_CTranscoding_CMediaVideoProcessingAlgorithm * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CEffects_CIVideoTransformEffectDefinitionVtbl;

interface __x_ABI_CWindows_CMedia_CEffects_CIVideoTransformEffectDefinition
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CEffects_CIVideoTransformEffectDefinitionVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CEffects_CIVideoTransformEffectDefinition_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CEffects_CIVideoTransformEffectDefinition_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CEffects_CIVideoTransformEffectDefinition_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CEffects_CIVideoTransformEffectDefinition_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CEffects_CIVideoTransformEffectDefinition_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CEffects_CIVideoTransformEffectDefinition_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CEffects_CIVideoTransformEffectDefinition_get_PaddingColor(This,value) \
    ( (This)->lpVtbl->get_PaddingColor(This,value) )

#define __x_ABI_CWindows_CMedia_CEffects_CIVideoTransformEffectDefinition_put_PaddingColor(This,value) \
    ( (This)->lpVtbl->put_PaddingColor(This,value) )

#define __x_ABI_CWindows_CMedia_CEffects_CIVideoTransformEffectDefinition_get_OutputSize(This,value) \
    ( (This)->lpVtbl->get_OutputSize(This,value) )

#define __x_ABI_CWindows_CMedia_CEffects_CIVideoTransformEffectDefinition_put_OutputSize(This,value) \
    ( (This)->lpVtbl->put_OutputSize(This,value) )

#define __x_ABI_CWindows_CMedia_CEffects_CIVideoTransformEffectDefinition_get_CropRectangle(This,value) \
    ( (This)->lpVtbl->get_CropRectangle(This,value) )

#define __x_ABI_CWindows_CMedia_CEffects_CIVideoTransformEffectDefinition_put_CropRectangle(This,value) \
    ( (This)->lpVtbl->put_CropRectangle(This,value) )

#define __x_ABI_CWindows_CMedia_CEffects_CIVideoTransformEffectDefinition_get_Rotation(This,value) \
    ( (This)->lpVtbl->get_Rotation(This,value) )

#define __x_ABI_CWindows_CMedia_CEffects_CIVideoTransformEffectDefinition_put_Rotation(This,value) \
    ( (This)->lpVtbl->put_Rotation(This,value) )

#define __x_ABI_CWindows_CMedia_CEffects_CIVideoTransformEffectDefinition_get_Mirror(This,value) \
    ( (This)->lpVtbl->get_Mirror(This,value) )

#define __x_ABI_CWindows_CMedia_CEffects_CIVideoTransformEffectDefinition_put_Mirror(This,value) \
    ( (This)->lpVtbl->put_Mirror(This,value) )

#define __x_ABI_CWindows_CMedia_CEffects_CIVideoTransformEffectDefinition_put_ProcessingAlgorithm(This,value) \
    ( (This)->lpVtbl->put_ProcessingAlgorithm(This,value) )

#define __x_ABI_CWindows_CMedia_CEffects_CIVideoTransformEffectDefinition_get_ProcessingAlgorithm(This,value) \
    ( (This)->lpVtbl->get_ProcessingAlgorithm(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CEffects_CIVideoTransformEffectDefinition;
#endif /* !defined(____x_ABI_CWindows_CMedia_CEffects_CIVideoTransformEffectDefinition_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Effects.AudioCaptureEffectsManager
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Effects.IAudioCaptureEffectsManager ** Default Interface **
 *
 * Class Threading Model:  Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Effects_AudioCaptureEffectsManager_DEFINED
#define RUNTIMECLASS_Windows_Media_Effects_AudioCaptureEffectsManager_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Effects_AudioCaptureEffectsManager[] = L"Windows.Media.Effects.AudioCaptureEffectsManager";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Effects.AudioEffect
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Effects.IAudioEffect ** Default Interface **
 *
 * Class Threading Model:  Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Effects_AudioEffect_DEFINED
#define RUNTIMECLASS_Windows_Media_Effects_AudioEffect_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Effects_AudioEffect[] = L"Windows.Media.Effects.AudioEffect";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Effects.AudioEffectDefinition
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Media.Effects.IAudioEffectDefinitionFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Media.Effects.IAudioEffectDefinition ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Effects_AudioEffectDefinition_DEFINED
#define RUNTIMECLASS_Windows_Media_Effects_AudioEffectDefinition_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Effects_AudioEffectDefinition[] = L"Windows.Media.Effects.AudioEffectDefinition";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Effects.AudioEffectsManager
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Media.Effects.IAudioEffectsManagerStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Threading Model:  Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_Media_Effects_AudioEffectsManager_DEFINED
#define RUNTIMECLASS_Windows_Media_Effects_AudioEffectsManager_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Effects_AudioEffectsManager[] = L"Windows.Media.Effects.AudioEffectsManager";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Effects.AudioRenderEffectsManager
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Effects.IAudioRenderEffectsManager ** Default Interface **
 *    Windows.Media.Effects.IAudioRenderEffectsManager2
 *
 * Class Threading Model:  Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Effects_AudioRenderEffectsManager_DEFINED
#define RUNTIMECLASS_Windows_Media_Effects_AudioRenderEffectsManager_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Effects_AudioRenderEffectsManager[] = L"Windows.Media.Effects.AudioRenderEffectsManager";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Effects.CompositeVideoFrameContext
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Effects.ICompositeVideoFrameContext ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Effects_CompositeVideoFrameContext_DEFINED
#define RUNTIMECLASS_Windows_Media_Effects_CompositeVideoFrameContext_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Effects_CompositeVideoFrameContext[] = L"Windows.Media.Effects.CompositeVideoFrameContext";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Effects.ProcessAudioFrameContext
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Effects.IProcessAudioFrameContext ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Effects_ProcessAudioFrameContext_DEFINED
#define RUNTIMECLASS_Windows_Media_Effects_ProcessAudioFrameContext_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Effects_ProcessAudioFrameContext[] = L"Windows.Media.Effects.ProcessAudioFrameContext";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Effects.ProcessVideoFrameContext
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Effects.IProcessVideoFrameContext ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Effects_ProcessVideoFrameContext_DEFINED
#define RUNTIMECLASS_Windows_Media_Effects_ProcessVideoFrameContext_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Effects_ProcessVideoFrameContext[] = L"Windows.Media.Effects.ProcessVideoFrameContext";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Effects.VideoCompositorDefinition
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Media.Effects.IVideoCompositorDefinitionFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Media.Effects.IVideoCompositorDefinition ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Effects_VideoCompositorDefinition_DEFINED
#define RUNTIMECLASS_Windows_Media_Effects_VideoCompositorDefinition_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Effects_VideoCompositorDefinition[] = L"Windows.Media.Effects.VideoCompositorDefinition";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Effects.VideoEffectDefinition
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Media.Effects.IVideoEffectDefinitionFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Media.Effects.IVideoEffectDefinition ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Effects_VideoEffectDefinition_DEFINED
#define RUNTIMECLASS_Windows_Media_Effects_VideoEffectDefinition_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Effects_VideoEffectDefinition[] = L"Windows.Media.Effects.VideoEffectDefinition";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Effects.VideoTransformEffectDefinition
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Media.Effects.IVideoEffectDefinition ** Default Interface **
 *    Windows.Media.Effects.IVideoTransformEffectDefinition
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Effects_VideoTransformEffectDefinition_DEFINED
#define RUNTIMECLASS_Windows_Media_Effects_VideoTransformEffectDefinition_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Effects_VideoTransformEffectDefinition[] = L"Windows.Media.Effects.VideoTransformEffectDefinition";
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
#endif // __windows2Emedia2Eeffects_p_h__

#endif // __windows2Emedia2Eeffects_h__
