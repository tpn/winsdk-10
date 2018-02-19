/* Header file automatically generated from windows.media.speechsynthesis.idl */
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
#ifndef __windows2Emedia2Espeechsynthesis_h__
#define __windows2Emedia2Espeechsynthesis_h__
#ifndef __windows2Emedia2Espeechsynthesis_p_h__
#define __windows2Emedia2Espeechsynthesis_p_h__


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
#include "Windows.Media.h"
#include "Windows.Media.Core.h"
#include "Windows.Storage.Streams.h"
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CMedia_CSpeechSynthesis_CIInstalledVoicesStatic_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CSpeechSynthesis_CIInstalledVoicesStatic_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace SpeechSynthesis {
                interface IInstalledVoicesStatic;
            } /* Windows */
        } /* Media */
    } /* SpeechSynthesis */} /* ABI */
#define __x_ABI_CWindows_CMedia_CSpeechSynthesis_CIInstalledVoicesStatic ABI::Windows::Media::SpeechSynthesis::IInstalledVoicesStatic

#endif // ____x_ABI_CWindows_CMedia_CSpeechSynthesis_CIInstalledVoicesStatic_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CSpeechSynthesis_CIInstalledVoicesStatic2_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CSpeechSynthesis_CIInstalledVoicesStatic2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace SpeechSynthesis {
                interface IInstalledVoicesStatic2;
            } /* Windows */
        } /* Media */
    } /* SpeechSynthesis */} /* ABI */
#define __x_ABI_CWindows_CMedia_CSpeechSynthesis_CIInstalledVoicesStatic2 ABI::Windows::Media::SpeechSynthesis::IInstalledVoicesStatic2

#endif // ____x_ABI_CWindows_CMedia_CSpeechSynthesis_CIInstalledVoicesStatic2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesisStream_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesisStream_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace SpeechSynthesis {
                interface ISpeechSynthesisStream;
            } /* Windows */
        } /* Media */
    } /* SpeechSynthesis */} /* ABI */
#define __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesisStream ABI::Windows::Media::SpeechSynthesis::ISpeechSynthesisStream

#endif // ____x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesisStream_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizer_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizer_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace SpeechSynthesis {
                interface ISpeechSynthesizer;
            } /* Windows */
        } /* Media */
    } /* SpeechSynthesis */} /* ABI */
#define __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizer ABI::Windows::Media::SpeechSynthesis::ISpeechSynthesizer

#endif // ____x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizer_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizer2_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizer2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace SpeechSynthesis {
                interface ISpeechSynthesizer2;
            } /* Windows */
        } /* Media */
    } /* SpeechSynthesis */} /* ABI */
#define __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizer2 ABI::Windows::Media::SpeechSynthesis::ISpeechSynthesizer2

#endif // ____x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizer2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizerOptions_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizerOptions_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace SpeechSynthesis {
                interface ISpeechSynthesizerOptions;
            } /* Windows */
        } /* Media */
    } /* SpeechSynthesis */} /* ABI */
#define __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizerOptions ABI::Windows::Media::SpeechSynthesis::ISpeechSynthesizerOptions

#endif // ____x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizerOptions_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizerOptions2_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizerOptions2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace SpeechSynthesis {
                interface ISpeechSynthesizerOptions2;
            } /* Windows */
        } /* Media */
    } /* SpeechSynthesis */} /* ABI */
#define __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizerOptions2 ABI::Windows::Media::SpeechSynthesis::ISpeechSynthesizerOptions2

#endif // ____x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizerOptions2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CSpeechSynthesis_CIVoiceInformation_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CSpeechSynthesis_CIVoiceInformation_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace SpeechSynthesis {
                interface IVoiceInformation;
            } /* Windows */
        } /* Media */
    } /* SpeechSynthesis */} /* ABI */
#define __x_ABI_CWindows_CMedia_CSpeechSynthesis_CIVoiceInformation ABI::Windows::Media::SpeechSynthesis::IVoiceInformation

#endif // ____x_ABI_CWindows_CMedia_CSpeechSynthesis_CIVoiceInformation_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace SpeechSynthesis {
                class VoiceInformation;
            } /* Windows */
        } /* Media */
    } /* SpeechSynthesis */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CMedia__CSpeechSynthesis__CVoiceInformation_USE
#define DEF___FIIterator_1_Windows__CMedia__CSpeechSynthesis__CVoiceInformation_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("12d40a27-ae8d-5fb0-8fed-00165d59c6ab"))
IIterator<ABI::Windows::Media::SpeechSynthesis::VoiceInformation*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::SpeechSynthesis::VoiceInformation*, ABI::Windows::Media::SpeechSynthesis::IVoiceInformation*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Media.SpeechSynthesis.VoiceInformation>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Media::SpeechSynthesis::VoiceInformation*> __FIIterator_1_Windows__CMedia__CSpeechSynthesis__CVoiceInformation_t;
#define __FIIterator_1_Windows__CMedia__CSpeechSynthesis__CVoiceInformation ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CMedia__CSpeechSynthesis__CVoiceInformation_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CMedia__CSpeechSynthesis__CVoiceInformation ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Media::SpeechSynthesis::IVoiceInformation*>
//#define __FIIterator_1_Windows__CMedia__CSpeechSynthesis__CVoiceInformation_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Media::SpeechSynthesis::IVoiceInformation*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CMedia__CSpeechSynthesis__CVoiceInformation_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CMedia__CSpeechSynthesis__CVoiceInformation_USE
#define DEF___FIIterable_1_Windows__CMedia__CSpeechSynthesis__CVoiceInformation_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("3c33bb52-bd98-5c8c-adee-ee8da0628efc"))
IIterable<ABI::Windows::Media::SpeechSynthesis::VoiceInformation*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::SpeechSynthesis::VoiceInformation*, ABI::Windows::Media::SpeechSynthesis::IVoiceInformation*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Media.SpeechSynthesis.VoiceInformation>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Media::SpeechSynthesis::VoiceInformation*> __FIIterable_1_Windows__CMedia__CSpeechSynthesis__CVoiceInformation_t;
#define __FIIterable_1_Windows__CMedia__CSpeechSynthesis__CVoiceInformation ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CMedia__CSpeechSynthesis__CVoiceInformation_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CMedia__CSpeechSynthesis__CVoiceInformation ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Media::SpeechSynthesis::IVoiceInformation*>
//#define __FIIterable_1_Windows__CMedia__CSpeechSynthesis__CVoiceInformation_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Media::SpeechSynthesis::IVoiceInformation*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CMedia__CSpeechSynthesis__CVoiceInformation_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CMedia__CSpeechSynthesis__CVoiceInformation_USE
#define DEF___FIVectorView_1_Windows__CMedia__CSpeechSynthesis__CVoiceInformation_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("ee8d63ce-51ac-5984-891b-d232fa7f6453"))
IVectorView<ABI::Windows::Media::SpeechSynthesis::VoiceInformation*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::SpeechSynthesis::VoiceInformation*, ABI::Windows::Media::SpeechSynthesis::IVoiceInformation*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Media.SpeechSynthesis.VoiceInformation>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Media::SpeechSynthesis::VoiceInformation*> __FIVectorView_1_Windows__CMedia__CSpeechSynthesis__CVoiceInformation_t;
#define __FIVectorView_1_Windows__CMedia__CSpeechSynthesis__CVoiceInformation ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CMedia__CSpeechSynthesis__CVoiceInformation_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CMedia__CSpeechSynthesis__CVoiceInformation ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Media::SpeechSynthesis::IVoiceInformation*>
//#define __FIVectorView_1_Windows__CMedia__CSpeechSynthesis__CVoiceInformation_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Media::SpeechSynthesis::IVoiceInformation*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CMedia__CSpeechSynthesis__CVoiceInformation_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Media {
            namespace SpeechSynthesis {
                class SpeechSynthesisStream;
            } /* Windows */
        } /* Media */
    } /* SpeechSynthesis */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CSpeechSynthesis__CSpeechSynthesisStream_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CSpeechSynthesis__CSpeechSynthesisStream_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("c972b996-6165-50d4-af60-a8c3df51d092"))
IAsyncOperationCompletedHandler<ABI::Windows::Media::SpeechSynthesis::SpeechSynthesisStream*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::SpeechSynthesis::SpeechSynthesisStream*, ABI::Windows::Media::SpeechSynthesis::ISpeechSynthesisStream*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Media.SpeechSynthesis.SpeechSynthesisStream>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::Media::SpeechSynthesis::SpeechSynthesisStream*> __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CSpeechSynthesis__CSpeechSynthesisStream_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CSpeechSynthesis__CSpeechSynthesisStream ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CMedia__CSpeechSynthesis__CSpeechSynthesisStream_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CSpeechSynthesis__CSpeechSynthesisStream ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Media::SpeechSynthesis::ISpeechSynthesisStream*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CSpeechSynthesis__CSpeechSynthesisStream_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Media::SpeechSynthesis::ISpeechSynthesisStream*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CSpeechSynthesis__CSpeechSynthesisStream_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1_Windows__CMedia__CSpeechSynthesis__CSpeechSynthesisStream_USE
#define DEF___FIAsyncOperation_1_Windows__CMedia__CSpeechSynthesis__CSpeechSynthesisStream_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("df9d48ad-9cea-560c-9edc-cb8852cb55e3"))
IAsyncOperation<ABI::Windows::Media::SpeechSynthesis::SpeechSynthesisStream*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::SpeechSynthesis::SpeechSynthesisStream*, ABI::Windows::Media::SpeechSynthesis::ISpeechSynthesisStream*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Media.SpeechSynthesis.SpeechSynthesisStream>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::Media::SpeechSynthesis::SpeechSynthesisStream*> __FIAsyncOperation_1_Windows__CMedia__CSpeechSynthesis__CSpeechSynthesisStream_t;
#define __FIAsyncOperation_1_Windows__CMedia__CSpeechSynthesis__CSpeechSynthesisStream ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CMedia__CSpeechSynthesis__CSpeechSynthesisStream_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CMedia__CSpeechSynthesis__CSpeechSynthesisStream ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Media::SpeechSynthesis::ISpeechSynthesisStream*>
//#define __FIAsyncOperation_1_Windows__CMedia__CSpeechSynthesis__CSpeechSynthesisStream_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Media::SpeechSynthesis::ISpeechSynthesisStream*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CMedia__CSpeechSynthesis__CSpeechSynthesisStream_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


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



#ifndef ____x_ABI_CWindows_CMedia_CIMediaMarker_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CIMediaMarker_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            interface IMediaMarker;
        } /* Windows */
    } /* Media */} /* ABI */
#define __x_ABI_CWindows_CMedia_CIMediaMarker ABI::Windows::Media::IMediaMarker

#endif // ____x_ABI_CWindows_CMedia_CIMediaMarker_FWD_DEFINED__


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CMedia__CIMediaMarker_USE
#define DEF___FIIterator_1_Windows__CMedia__CIMediaMarker_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("f464661e-88bc-5cea-93cd-0c123f17d258"))
IIterator<ABI::Windows::Media::IMediaMarker*> : IIterator_impl<ABI::Windows::Media::IMediaMarker*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Media.IMediaMarker>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Media::IMediaMarker*> __FIIterator_1_Windows__CMedia__CIMediaMarker_t;
#define __FIIterator_1_Windows__CMedia__CIMediaMarker ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CMedia__CIMediaMarker_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CMedia__CIMediaMarker ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Media::IMediaMarker*>
//#define __FIIterator_1_Windows__CMedia__CIMediaMarker_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Media::IMediaMarker*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CMedia__CIMediaMarker_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CMedia__CIMediaMarker_USE
#define DEF___FIIterable_1_Windows__CMedia__CIMediaMarker_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("a1c0a397-0364-5e4c-9dca-7cd7011bd114"))
IIterable<ABI::Windows::Media::IMediaMarker*> : IIterable_impl<ABI::Windows::Media::IMediaMarker*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Media.IMediaMarker>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Media::IMediaMarker*> __FIIterable_1_Windows__CMedia__CIMediaMarker_t;
#define __FIIterable_1_Windows__CMedia__CIMediaMarker ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CMedia__CIMediaMarker_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CMedia__CIMediaMarker ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Media::IMediaMarker*>
//#define __FIIterable_1_Windows__CMedia__CIMediaMarker_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Media::IMediaMarker*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CMedia__CIMediaMarker_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CMedia__CIMediaMarker_USE
#define DEF___FIVectorView_1_Windows__CMedia__CIMediaMarker_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("b543562c-02b1-5824-80a8-9854130cdadd"))
IVectorView<ABI::Windows::Media::IMediaMarker*> : IVectorView_impl<ABI::Windows::Media::IMediaMarker*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Media.IMediaMarker>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Media::IMediaMarker*> __FIVectorView_1_Windows__CMedia__CIMediaMarker_t;
#define __FIVectorView_1_Windows__CMedia__CIMediaMarker ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CMedia__CIMediaMarker_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CMedia__CIMediaMarker ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Media::IMediaMarker*>
//#define __FIVectorView_1_Windows__CMedia__CIMediaMarker_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Media::IMediaMarker*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CMedia__CIMediaMarker_USE */


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





#ifndef ____x_ABI_CWindows_CMedia_CCore_CITimedMetadataTrackProvider_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CCore_CITimedMetadataTrackProvider_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Core {
                interface ITimedMetadataTrackProvider;
            } /* Windows */
        } /* Media */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CMedia_CCore_CITimedMetadataTrackProvider ABI::Windows::Media::Core::ITimedMetadataTrackProvider

#endif // ____x_ABI_CWindows_CMedia_CCore_CITimedMetadataTrackProvider_FWD_DEFINED__








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
        namespace Media {
            namespace SpeechSynthesis {
                
                typedef enum VoiceGender : int VoiceGender;
                
            } /* Windows */
        } /* Media */
    } /* SpeechSynthesis */} /* ABI */










namespace ABI {
    namespace Windows {
        namespace Media {
            namespace SpeechSynthesis {
                class SpeechSynthesizer;
            } /* Windows */
        } /* Media */
    } /* SpeechSynthesis */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Media {
            namespace SpeechSynthesis {
                class SpeechSynthesizerOptions;
            } /* Windows */
        } /* Media */
    } /* SpeechSynthesis */} /* ABI */











/*
 *
 * Struct Windows.Media.SpeechSynthesis.VoiceGender
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace SpeechSynthesis {
                /* [v1_enum, contract] */
                enum VoiceGender : int
                {
                    VoiceGender_Male = 0,
                    VoiceGender_Female = 1,
                };
                
            } /* Windows */
        } /* Media */
    } /* SpeechSynthesis */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.SpeechSynthesis.IInstalledVoicesStatic
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.SpeechSynthesis.SpeechSynthesizer
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CSpeechSynthesis_CIInstalledVoicesStatic_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CSpeechSynthesis_CIInstalledVoicesStatic_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_SpeechSynthesis_IInstalledVoicesStatic[] = L"Windows.Media.SpeechSynthesis.IInstalledVoicesStatic";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace SpeechSynthesis {
                /* [object, uuid("7D526ECC-7533-4C3F-85BE-888C2BAEEBDC"), exclusiveto, contract] */
                MIDL_INTERFACE("7D526ECC-7533-4C3F-85BE-888C2BAEEBDC")
                IInstalledVoicesStatic : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AllVoices(
                        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CSpeechSynthesis__CVoiceInformation * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DefaultVoice(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::SpeechSynthesis::IVoiceInformation * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IInstalledVoicesStatic=_uuidof(IInstalledVoicesStatic);
                
            } /* Windows */
        } /* Media */
    } /* SpeechSynthesis */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CSpeechSynthesis_CIInstalledVoicesStatic;
#endif /* !defined(____x_ABI_CWindows_CMedia_CSpeechSynthesis_CIInstalledVoicesStatic_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.SpeechSynthesis.IInstalledVoicesStatic2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.SpeechSynthesis.SpeechSynthesizer
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CMedia_CSpeechSynthesis_CIInstalledVoicesStatic2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CSpeechSynthesis_CIInstalledVoicesStatic2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_SpeechSynthesis_IInstalledVoicesStatic2[] = L"Windows.Media.SpeechSynthesis.IInstalledVoicesStatic2";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace SpeechSynthesis {
                /* [object, uuid("64255F2E-358D-4058-BE9A-FD3FCB423530"), exclusiveto, contract] */
                MIDL_INTERFACE("64255F2E-358D-4058-BE9A-FD3FCB423530")
                IInstalledVoicesStatic2 : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE TrySetDefaultVoiceAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Media::SpeechSynthesis::IVoiceInformation * voice,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IInstalledVoicesStatic2=_uuidof(IInstalledVoicesStatic2);
                
            } /* Windows */
        } /* Media */
    } /* SpeechSynthesis */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CSpeechSynthesis_CIInstalledVoicesStatic2;
#endif /* !defined(____x_ABI_CWindows_CMedia_CSpeechSynthesis_CIInstalledVoicesStatic2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.Media.SpeechSynthesis.ISpeechSynthesisStream
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.SpeechSynthesis.SpeechSynthesisStream
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Storage.Streams.IRandomAccessStreamWithContentType
 *     Windows.Storage.Streams.IRandomAccessStream
 *     Windows.Foundation.IClosable
 *     Windows.Storage.Streams.IInputStream
 *     Windows.Storage.Streams.IOutputStream
 *     Windows.Storage.Streams.IContentTypeProvider
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesisStream_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesisStream_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_SpeechSynthesis_ISpeechSynthesisStream[] = L"Windows.Media.SpeechSynthesis.ISpeechSynthesisStream";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace SpeechSynthesis {
                /* [object, uuid("83E46E93-244C-4622-BA0B-6229C4D0D65D"), exclusiveto, contract] */
                MIDL_INTERFACE("83E46E93-244C-4622-BA0B-6229C4D0D65D")
                ISpeechSynthesisStream : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Markers(
                        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CIMediaMarker * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ISpeechSynthesisStream=_uuidof(ISpeechSynthesisStream);
                
            } /* Windows */
        } /* Media */
    } /* SpeechSynthesis */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesisStream;
#endif /* !defined(____x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesisStream_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.SpeechSynthesis.ISpeechSynthesizer
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.SpeechSynthesis.SpeechSynthesizer
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizer_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizer_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_SpeechSynthesis_ISpeechSynthesizer[] = L"Windows.Media.SpeechSynthesis.ISpeechSynthesizer";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace SpeechSynthesis {
                /* [object, uuid("CE9F7C76-97F4-4CED-AD68-D51C458E45C6"), exclusiveto, contract] */
                MIDL_INTERFACE("CE9F7C76-97F4-4CED-AD68-D51C458E45C6")
                ISpeechSynthesizer : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE SynthesizeTextToStreamAsync(
                        /* [in] */__RPC__in HSTRING text,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CSpeechSynthesis__CSpeechSynthesisStream * * operation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE SynthesizeSsmlToStreamAsync(
                        /* [in] */__RPC__in HSTRING Ssml,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CSpeechSynthesis__CSpeechSynthesisStream * * operation
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Voice(
                        /* [in] */__RPC__in_opt ABI::Windows::Media::SpeechSynthesis::IVoiceInformation * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Voice(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::SpeechSynthesis::IVoiceInformation * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ISpeechSynthesizer=_uuidof(ISpeechSynthesizer);
                
            } /* Windows */
        } /* Media */
    } /* SpeechSynthesis */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizer;
#endif /* !defined(____x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizer_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.SpeechSynthesis.ISpeechSynthesizer2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.SpeechSynthesis.SpeechSynthesizer
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizer2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizer2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_SpeechSynthesis_ISpeechSynthesizer2[] = L"Windows.Media.SpeechSynthesis.ISpeechSynthesizer2";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace SpeechSynthesis {
                /* [object, uuid("A7C5ECB2-4339-4D6A-BBF8-C7A4F1544C2E"), exclusiveto, contract] */
                MIDL_INTERFACE("A7C5ECB2-4339-4D6A-BBF8-C7A4F1544C2E")
                ISpeechSynthesizer2 : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Options(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::SpeechSynthesis::ISpeechSynthesizerOptions * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ISpeechSynthesizer2=_uuidof(ISpeechSynthesizer2);
                
            } /* Windows */
        } /* Media */
    } /* SpeechSynthesis */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizer2;
#endif /* !defined(____x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizer2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Media.SpeechSynthesis.ISpeechSynthesizerOptions
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.SpeechSynthesis.SpeechSynthesizerOptions
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizerOptions_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizerOptions_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_SpeechSynthesis_ISpeechSynthesizerOptions[] = L"Windows.Media.SpeechSynthesis.ISpeechSynthesizerOptions";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace SpeechSynthesis {
                /* [object, uuid("A0E23871-CC3D-43C9-91B1-EE185324D83D"), exclusiveto, contract] */
                MIDL_INTERFACE("A0E23871-CC3D-43C9-91B1-EE185324D83D")
                ISpeechSynthesizerOptions : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IncludeWordBoundaryMetadata(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_IncludeWordBoundaryMetadata(
                        /* [in] */boolean value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IncludeSentenceBoundaryMetadata(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_IncludeSentenceBoundaryMetadata(
                        /* [in] */boolean value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ISpeechSynthesizerOptions=_uuidof(ISpeechSynthesizerOptions);
                
            } /* Windows */
        } /* Media */
    } /* SpeechSynthesis */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizerOptions;
#endif /* !defined(____x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizerOptions_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Media.SpeechSynthesis.ISpeechSynthesizerOptions2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.SpeechSynthesis.SpeechSynthesizerOptions
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizerOptions2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizerOptions2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_SpeechSynthesis_ISpeechSynthesizerOptions2[] = L"Windows.Media.SpeechSynthesis.ISpeechSynthesizerOptions2";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace SpeechSynthesis {
                /* [object, uuid("1CBEF60E-119C-4BED-B118-D250C3A25793"), exclusiveto, contract] */
                MIDL_INTERFACE("1CBEF60E-119C-4BED-B118-D250C3A25793")
                ISpeechSynthesizerOptions2 : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AudioVolume(
                        /* [retval, out] */__RPC__out DOUBLE * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_AudioVolume(
                        /* [in] */DOUBLE value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SpeakingRate(
                        /* [retval, out] */__RPC__out DOUBLE * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_SpeakingRate(
                        /* [in] */DOUBLE value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AudioPitch(
                        /* [retval, out] */__RPC__out DOUBLE * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_AudioPitch(
                        /* [in] */DOUBLE value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ISpeechSynthesizerOptions2=_uuidof(ISpeechSynthesizerOptions2);
                
            } /* Windows */
        } /* Media */
    } /* SpeechSynthesis */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizerOptions2;
#endif /* !defined(____x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizerOptions2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.Media.SpeechSynthesis.IVoiceInformation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.SpeechSynthesis.VoiceInformation
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CSpeechSynthesis_CIVoiceInformation_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CSpeechSynthesis_CIVoiceInformation_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_SpeechSynthesis_IVoiceInformation[] = L"Windows.Media.SpeechSynthesis.IVoiceInformation";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace SpeechSynthesis {
                /* [object, uuid("B127D6A4-1291-4604-AA9C-83134083352C"), exclusiveto, contract] */
                MIDL_INTERFACE("B127D6A4-1291-4604-AA9C-83134083352C")
                IVoiceInformation : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DisplayName(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Id(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Language(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Description(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Gender(
                        /* [retval, out] */__RPC__out ABI::Windows::Media::SpeechSynthesis::VoiceGender * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IVoiceInformation=_uuidof(IVoiceInformation);
                
            } /* Windows */
        } /* Media */
    } /* SpeechSynthesis */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CSpeechSynthesis_CIVoiceInformation;
#endif /* !defined(____x_ABI_CWindows_CMedia_CSpeechSynthesis_CIVoiceInformation_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.SpeechSynthesis.SpeechSynthesisStream
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.SpeechSynthesis.ISpeechSynthesisStream ** Default Interface **
 *    Windows.Storage.Streams.IRandomAccessStreamWithContentType
 *    Windows.Storage.Streams.IContentTypeProvider
 *    Windows.Storage.Streams.IRandomAccessStream
 *    Windows.Storage.Streams.IOutputStream
 *    Windows.Foundation.IClosable
 *    Windows.Storage.Streams.IInputStream
 *    Windows.Media.Core.ITimedMetadataTrackProvider
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_SpeechSynthesis_SpeechSynthesisStream_DEFINED
#define RUNTIMECLASS_Windows_Media_SpeechSynthesis_SpeechSynthesisStream_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_SpeechSynthesis_SpeechSynthesisStream[] = L"Windows.Media.SpeechSynthesis.SpeechSynthesisStream";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.SpeechSynthesis.SpeechSynthesizer
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Media.SpeechSynthesis.IInstalledVoicesStatic2 interface starting with version 5.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.Media.SpeechSynthesis.IInstalledVoicesStatic interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Media.SpeechSynthesis.ISpeechSynthesizer ** Default Interface **
 *    Windows.Foundation.IClosable
 *    Windows.Media.SpeechSynthesis.ISpeechSynthesizer2
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_SpeechSynthesis_SpeechSynthesizer_DEFINED
#define RUNTIMECLASS_Windows_Media_SpeechSynthesis_SpeechSynthesizer_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_SpeechSynthesis_SpeechSynthesizer[] = L"Windows.Media.SpeechSynthesis.SpeechSynthesizer";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.SpeechSynthesis.SpeechSynthesizerOptions
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.SpeechSynthesis.ISpeechSynthesizerOptions ** Default Interface **
 *    Windows.Media.SpeechSynthesis.ISpeechSynthesizerOptions2
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_Media_SpeechSynthesis_SpeechSynthesizerOptions_DEFINED
#define RUNTIMECLASS_Windows_Media_SpeechSynthesis_SpeechSynthesizerOptions_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_SpeechSynthesis_SpeechSynthesizerOptions[] = L"Windows.Media.SpeechSynthesis.SpeechSynthesizerOptions";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.Media.SpeechSynthesis.VoiceInformation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.SpeechSynthesis.IVoiceInformation ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_SpeechSynthesis_VoiceInformation_DEFINED
#define RUNTIMECLASS_Windows_Media_SpeechSynthesis_VoiceInformation_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_SpeechSynthesis_VoiceInformation[] = L"Windows.Media.SpeechSynthesis.VoiceInformation";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000




#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CMedia_CSpeechSynthesis_CIInstalledVoicesStatic_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CSpeechSynthesis_CIInstalledVoicesStatic_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CSpeechSynthesis_CIInstalledVoicesStatic __x_ABI_CWindows_CMedia_CSpeechSynthesis_CIInstalledVoicesStatic;

#endif // ____x_ABI_CWindows_CMedia_CSpeechSynthesis_CIInstalledVoicesStatic_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CSpeechSynthesis_CIInstalledVoicesStatic2_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CSpeechSynthesis_CIInstalledVoicesStatic2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CSpeechSynthesis_CIInstalledVoicesStatic2 __x_ABI_CWindows_CMedia_CSpeechSynthesis_CIInstalledVoicesStatic2;

#endif // ____x_ABI_CWindows_CMedia_CSpeechSynthesis_CIInstalledVoicesStatic2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesisStream_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesisStream_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesisStream __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesisStream;

#endif // ____x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesisStream_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizer_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizer_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizer __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizer;

#endif // ____x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizer_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizer2_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizer2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizer2 __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizer2;

#endif // ____x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizer2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizerOptions_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizerOptions_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizerOptions __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizerOptions;

#endif // ____x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizerOptions_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizerOptions2_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizerOptions2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizerOptions2 __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizerOptions2;

#endif // ____x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizerOptions2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CSpeechSynthesis_CIVoiceInformation_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CSpeechSynthesis_CIVoiceInformation_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CSpeechSynthesis_CIVoiceInformation __x_ABI_CWindows_CMedia_CSpeechSynthesis_CIVoiceInformation;

#endif // ____x_ABI_CWindows_CMedia_CSpeechSynthesis_CIVoiceInformation_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CMedia__CSpeechSynthesis__CVoiceInformation_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CMedia__CSpeechSynthesis__CVoiceInformation_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CMedia__CSpeechSynthesis__CVoiceInformation __FIIterator_1_Windows__CMedia__CSpeechSynthesis__CVoiceInformation;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CMedia__CSpeechSynthesis__CVoiceInformation;

typedef struct __FIIterator_1_Windows__CMedia__CSpeechSynthesis__CVoiceInformationVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CMedia__CSpeechSynthesis__CVoiceInformation * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CMedia__CSpeechSynthesis__CVoiceInformation * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CMedia__CSpeechSynthesis__CVoiceInformation * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CMedia__CSpeechSynthesis__CVoiceInformation * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CMedia__CSpeechSynthesis__CVoiceInformation * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CMedia__CSpeechSynthesis__CVoiceInformation * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CMedia__CSpeechSynthesis__CVoiceInformation * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CMedia_CSpeechSynthesis_CIVoiceInformation * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CMedia__CSpeechSynthesis__CVoiceInformation * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CMedia__CSpeechSynthesis__CVoiceInformation * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CMedia__CSpeechSynthesis__CVoiceInformation * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CSpeechSynthesis_CIVoiceInformation * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CMedia__CSpeechSynthesis__CVoiceInformationVtbl;

interface __FIIterator_1_Windows__CMedia__CSpeechSynthesis__CVoiceInformation
{
    CONST_VTBL struct __FIIterator_1_Windows__CMedia__CSpeechSynthesis__CVoiceInformationVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CMedia__CSpeechSynthesis__CVoiceInformation_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CMedia__CSpeechSynthesis__CVoiceInformation_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CMedia__CSpeechSynthesis__CVoiceInformation_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CMedia__CSpeechSynthesis__CVoiceInformation_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CMedia__CSpeechSynthesis__CVoiceInformation_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CMedia__CSpeechSynthesis__CVoiceInformation_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CMedia__CSpeechSynthesis__CVoiceInformation_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CMedia__CSpeechSynthesis__CVoiceInformation_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CMedia__CSpeechSynthesis__CVoiceInformation_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CMedia__CSpeechSynthesis__CVoiceInformation_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CMedia__CSpeechSynthesis__CVoiceInformation_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CMedia__CSpeechSynthesis__CVoiceInformation_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CMedia__CSpeechSynthesis__CVoiceInformation_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CMedia__CSpeechSynthesis__CVoiceInformation __FIIterable_1_Windows__CMedia__CSpeechSynthesis__CVoiceInformation;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CMedia__CSpeechSynthesis__CVoiceInformation;

typedef  struct __FIIterable_1_Windows__CMedia__CSpeechSynthesis__CVoiceInformationVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CMedia__CSpeechSynthesis__CVoiceInformation * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CMedia__CSpeechSynthesis__CVoiceInformation * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CMedia__CSpeechSynthesis__CVoiceInformation * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CMedia__CSpeechSynthesis__CVoiceInformation * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CMedia__CSpeechSynthesis__CVoiceInformation * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CMedia__CSpeechSynthesis__CVoiceInformation * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CMedia__CSpeechSynthesis__CVoiceInformation * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CMedia__CSpeechSynthesis__CVoiceInformation **first);

    END_INTERFACE
} __FIIterable_1_Windows__CMedia__CSpeechSynthesis__CVoiceInformationVtbl;

interface __FIIterable_1_Windows__CMedia__CSpeechSynthesis__CVoiceInformation
{
    CONST_VTBL struct __FIIterable_1_Windows__CMedia__CSpeechSynthesis__CVoiceInformationVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CMedia__CSpeechSynthesis__CVoiceInformation_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CMedia__CSpeechSynthesis__CVoiceInformation_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CMedia__CSpeechSynthesis__CVoiceInformation_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CMedia__CSpeechSynthesis__CVoiceInformation_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CMedia__CSpeechSynthesis__CVoiceInformation_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CMedia__CSpeechSynthesis__CVoiceInformation_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CMedia__CSpeechSynthesis__CVoiceInformation_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CMedia__CSpeechSynthesis__CVoiceInformation_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CMedia__CSpeechSynthesis__CVoiceInformation_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CMedia__CSpeechSynthesis__CVoiceInformation_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CMedia__CSpeechSynthesis__CVoiceInformation __FIVectorView_1_Windows__CMedia__CSpeechSynthesis__CVoiceInformation;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CMedia__CSpeechSynthesis__CVoiceInformation;

typedef struct __FIVectorView_1_Windows__CMedia__CSpeechSynthesis__CVoiceInformationVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CMedia__CSpeechSynthesis__CVoiceInformation * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CMedia__CSpeechSynthesis__CVoiceInformation * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CMedia__CSpeechSynthesis__CVoiceInformation * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CMedia__CSpeechSynthesis__CVoiceInformation * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CMedia__CSpeechSynthesis__CVoiceInformation * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CMedia__CSpeechSynthesis__CVoiceInformation * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CMedia__CSpeechSynthesis__CVoiceInformation * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CMedia_CSpeechSynthesis_CIVoiceInformation * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CMedia__CSpeechSynthesis__CVoiceInformation * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CSpeechSynthesis__CVoiceInformation * This,
            /* [in] */ __x_ABI_CWindows_CMedia_CSpeechSynthesis_CIVoiceInformation * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CSpeechSynthesis__CVoiceInformation * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CSpeechSynthesis_CIVoiceInformation * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CMedia__CSpeechSynthesis__CVoiceInformationVtbl;

interface __FIVectorView_1_Windows__CMedia__CSpeechSynthesis__CVoiceInformation
{
    CONST_VTBL struct __FIVectorView_1_Windows__CMedia__CSpeechSynthesis__CVoiceInformationVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CMedia__CSpeechSynthesis__CVoiceInformation_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CMedia__CSpeechSynthesis__CVoiceInformation_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CMedia__CSpeechSynthesis__CVoiceInformation_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CMedia__CSpeechSynthesis__CVoiceInformation_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CMedia__CSpeechSynthesis__CVoiceInformation_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CMedia__CSpeechSynthesis__CVoiceInformation_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CMedia__CSpeechSynthesis__CVoiceInformation_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CMedia__CSpeechSynthesis__CVoiceInformation_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CMedia__CSpeechSynthesis__CVoiceInformation_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CMedia__CSpeechSynthesis__CVoiceInformation_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CMedia__CSpeechSynthesis__CVoiceInformation_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CMedia__CSpeechSynthesis__CSpeechSynthesisStream_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CMedia__CSpeechSynthesis__CSpeechSynthesisStream_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CSpeechSynthesis__CSpeechSynthesisStream __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CSpeechSynthesis__CSpeechSynthesisStream;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CSpeechSynthesis__CSpeechSynthesisStream;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CMedia__CSpeechSynthesis__CSpeechSynthesisStream __FIAsyncOperation_1_Windows__CMedia__CSpeechSynthesis__CSpeechSynthesisStream;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CSpeechSynthesis__CSpeechSynthesisStreamVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CSpeechSynthesis__CSpeechSynthesisStream * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CSpeechSynthesis__CSpeechSynthesisStream * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CSpeechSynthesis__CSpeechSynthesisStream * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CSpeechSynthesis__CSpeechSynthesisStream * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CMedia__CSpeechSynthesis__CSpeechSynthesisStream *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CSpeechSynthesis__CSpeechSynthesisStreamVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CSpeechSynthesis__CSpeechSynthesisStream
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CSpeechSynthesis__CSpeechSynthesisStreamVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CSpeechSynthesis__CSpeechSynthesisStream_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CSpeechSynthesis__CSpeechSynthesisStream_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CSpeechSynthesis__CSpeechSynthesisStream_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CSpeechSynthesis__CSpeechSynthesisStream_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CMedia__CSpeechSynthesis__CSpeechSynthesisStream_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1_Windows__CMedia__CSpeechSynthesis__CSpeechSynthesisStream_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CMedia__CSpeechSynthesis__CSpeechSynthesisStream_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CMedia__CSpeechSynthesis__CSpeechSynthesisStream __FIAsyncOperation_1_Windows__CMedia__CSpeechSynthesis__CSpeechSynthesisStream;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CMedia__CSpeechSynthesis__CSpeechSynthesisStream;

typedef struct __FIAsyncOperation_1_Windows__CMedia__CSpeechSynthesis__CSpeechSynthesisStreamVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CSpeechSynthesis__CSpeechSynthesisStream * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CSpeechSynthesis__CSpeechSynthesisStream * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CSpeechSynthesis__CSpeechSynthesisStream * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CSpeechSynthesis__CSpeechSynthesisStream * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CSpeechSynthesis__CSpeechSynthesisStream * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CSpeechSynthesis__CSpeechSynthesisStream * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CSpeechSynthesis__CSpeechSynthesisStream * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CSpeechSynthesis__CSpeechSynthesisStream *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CSpeechSynthesis__CSpeechSynthesisStream * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CSpeechSynthesis__CSpeechSynthesisStream **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CSpeechSynthesis__CSpeechSynthesisStream * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesisStream * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CMedia__CSpeechSynthesis__CSpeechSynthesisStreamVtbl;

interface __FIAsyncOperation_1_Windows__CMedia__CSpeechSynthesis__CSpeechSynthesisStream
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CMedia__CSpeechSynthesis__CSpeechSynthesisStreamVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CMedia__CSpeechSynthesis__CSpeechSynthesisStream_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CSpeechSynthesis__CSpeechSynthesisStream_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CSpeechSynthesis__CSpeechSynthesisStream_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CMedia__CSpeechSynthesis__CSpeechSynthesisStream_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CSpeechSynthesis__CSpeechSynthesisStream_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CSpeechSynthesis__CSpeechSynthesisStream_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CMedia__CSpeechSynthesis__CSpeechSynthesisStream_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CSpeechSynthesis__CSpeechSynthesisStream_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CSpeechSynthesis__CSpeechSynthesisStream_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CMedia__CSpeechSynthesis__CSpeechSynthesisStream_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

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


#ifndef ____x_ABI_CWindows_CMedia_CIMediaMarker_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CIMediaMarker_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CIMediaMarker __x_ABI_CWindows_CMedia_CIMediaMarker;

#endif // ____x_ABI_CWindows_CMedia_CIMediaMarker_FWD_DEFINED__


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CMedia__CIMediaMarker_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CMedia__CIMediaMarker_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CMedia__CIMediaMarker __FIIterator_1_Windows__CMedia__CIMediaMarker;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CMedia__CIMediaMarker;

typedef struct __FIIterator_1_Windows__CMedia__CIMediaMarkerVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CMedia__CIMediaMarker * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CMedia__CIMediaMarker * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CMedia__CIMediaMarker * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CMedia__CIMediaMarker * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CMedia__CIMediaMarker * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CMedia__CIMediaMarker * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CMedia__CIMediaMarker * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CMedia_CIMediaMarker * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CMedia__CIMediaMarker * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CMedia__CIMediaMarker * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CMedia__CIMediaMarker * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CIMediaMarker * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CMedia__CIMediaMarkerVtbl;

interface __FIIterator_1_Windows__CMedia__CIMediaMarker
{
    CONST_VTBL struct __FIIterator_1_Windows__CMedia__CIMediaMarkerVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CMedia__CIMediaMarker_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CMedia__CIMediaMarker_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CMedia__CIMediaMarker_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CMedia__CIMediaMarker_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CMedia__CIMediaMarker_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CMedia__CIMediaMarker_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CMedia__CIMediaMarker_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CMedia__CIMediaMarker_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CMedia__CIMediaMarker_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CMedia__CIMediaMarker_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CMedia__CIMediaMarker_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CMedia__CIMediaMarker_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CMedia__CIMediaMarker_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CMedia__CIMediaMarker __FIIterable_1_Windows__CMedia__CIMediaMarker;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CMedia__CIMediaMarker;

typedef  struct __FIIterable_1_Windows__CMedia__CIMediaMarkerVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CMedia__CIMediaMarker * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CMedia__CIMediaMarker * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CMedia__CIMediaMarker * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CMedia__CIMediaMarker * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CMedia__CIMediaMarker * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CMedia__CIMediaMarker * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CMedia__CIMediaMarker * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CMedia__CIMediaMarker **first);

    END_INTERFACE
} __FIIterable_1_Windows__CMedia__CIMediaMarkerVtbl;

interface __FIIterable_1_Windows__CMedia__CIMediaMarker
{
    CONST_VTBL struct __FIIterable_1_Windows__CMedia__CIMediaMarkerVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CMedia__CIMediaMarker_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CMedia__CIMediaMarker_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CMedia__CIMediaMarker_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CMedia__CIMediaMarker_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CMedia__CIMediaMarker_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CMedia__CIMediaMarker_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CMedia__CIMediaMarker_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CMedia__CIMediaMarker_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CMedia__CIMediaMarker_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CMedia__CIMediaMarker_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CMedia__CIMediaMarker __FIVectorView_1_Windows__CMedia__CIMediaMarker;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CMedia__CIMediaMarker;

typedef struct __FIVectorView_1_Windows__CMedia__CIMediaMarkerVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CMedia__CIMediaMarker * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CMedia__CIMediaMarker * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CMedia__CIMediaMarker * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CMedia__CIMediaMarker * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CMedia__CIMediaMarker * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CMedia__CIMediaMarker * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CMedia__CIMediaMarker * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CMedia_CIMediaMarker * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CMedia__CIMediaMarker * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CIMediaMarker * This,
            /* [in] */ __x_ABI_CWindows_CMedia_CIMediaMarker * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CIMediaMarker * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CIMediaMarker * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CMedia__CIMediaMarkerVtbl;

interface __FIVectorView_1_Windows__CMedia__CIMediaMarker
{
    CONST_VTBL struct __FIVectorView_1_Windows__CMedia__CIMediaMarkerVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CMedia__CIMediaMarker_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CMedia__CIMediaMarker_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CMedia__CIMediaMarker_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CMedia__CIMediaMarker_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CMedia__CIMediaMarker_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CMedia__CIMediaMarker_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CMedia__CIMediaMarker_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CMedia__CIMediaMarker_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CMedia__CIMediaMarker_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CMedia__CIMediaMarker_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CMedia__CIMediaMarker_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#ifndef ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIClosable __x_ABI_CWindows_CFoundation_CIClosable;

#endif // ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__





#ifndef ____x_ABI_CWindows_CMedia_CCore_CITimedMetadataTrackProvider_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CCore_CITimedMetadataTrackProvider_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CCore_CITimedMetadataTrackProvider __x_ABI_CWindows_CMedia_CCore_CITimedMetadataTrackProvider;

#endif // ____x_ABI_CWindows_CMedia_CCore_CITimedMetadataTrackProvider_FWD_DEFINED__








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


#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamWithContentType_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamWithContentType_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamWithContentType __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamWithContentType;

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamWithContentType_FWD_DEFINED__






typedef enum __x_ABI_CWindows_CMedia_CSpeechSynthesis_CVoiceGender __x_ABI_CWindows_CMedia_CSpeechSynthesis_CVoiceGender;





















/*
 *
 * Struct Windows.Media.SpeechSynthesis.VoiceGender
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CMedia_CSpeechSynthesis_CVoiceGender
{
    VoiceGender_Male = 0,
    VoiceGender_Female = 1,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.SpeechSynthesis.IInstalledVoicesStatic
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.SpeechSynthesis.SpeechSynthesizer
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CSpeechSynthesis_CIInstalledVoicesStatic_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CSpeechSynthesis_CIInstalledVoicesStatic_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_SpeechSynthesis_IInstalledVoicesStatic[] = L"Windows.Media.SpeechSynthesis.IInstalledVoicesStatic";
/* [object, uuid("7D526ECC-7533-4C3F-85BE-888C2BAEEBDC"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CSpeechSynthesis_CIInstalledVoicesStaticVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechSynthesis_CIInstalledVoicesStatic * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechSynthesis_CIInstalledVoicesStatic * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechSynthesis_CIInstalledVoicesStatic * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechSynthesis_CIInstalledVoicesStatic * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechSynthesis_CIInstalledVoicesStatic * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechSynthesis_CIInstalledVoicesStatic * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AllVoices )(
        __x_ABI_CWindows_CMedia_CSpeechSynthesis_CIInstalledVoicesStatic * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CSpeechSynthesis__CVoiceInformation * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DefaultVoice )(
        __x_ABI_CWindows_CMedia_CSpeechSynthesis_CIInstalledVoicesStatic * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CSpeechSynthesis_CIVoiceInformation * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CSpeechSynthesis_CIInstalledVoicesStaticVtbl;

interface __x_ABI_CWindows_CMedia_CSpeechSynthesis_CIInstalledVoicesStatic
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CSpeechSynthesis_CIInstalledVoicesStaticVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CSpeechSynthesis_CIInstalledVoicesStatic_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CSpeechSynthesis_CIInstalledVoicesStatic_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CSpeechSynthesis_CIInstalledVoicesStatic_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CSpeechSynthesis_CIInstalledVoicesStatic_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CSpeechSynthesis_CIInstalledVoicesStatic_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CSpeechSynthesis_CIInstalledVoicesStatic_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CSpeechSynthesis_CIInstalledVoicesStatic_get_AllVoices(This,value) \
    ( (This)->lpVtbl->get_AllVoices(This,value) )

#define __x_ABI_CWindows_CMedia_CSpeechSynthesis_CIInstalledVoicesStatic_get_DefaultVoice(This,value) \
    ( (This)->lpVtbl->get_DefaultVoice(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CSpeechSynthesis_CIInstalledVoicesStatic;
#endif /* !defined(____x_ABI_CWindows_CMedia_CSpeechSynthesis_CIInstalledVoicesStatic_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.SpeechSynthesis.IInstalledVoicesStatic2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.SpeechSynthesis.SpeechSynthesizer
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CMedia_CSpeechSynthesis_CIInstalledVoicesStatic2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CSpeechSynthesis_CIInstalledVoicesStatic2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_SpeechSynthesis_IInstalledVoicesStatic2[] = L"Windows.Media.SpeechSynthesis.IInstalledVoicesStatic2";
/* [object, uuid("64255F2E-358D-4058-BE9A-FD3FCB423530"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CSpeechSynthesis_CIInstalledVoicesStatic2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechSynthesis_CIInstalledVoicesStatic2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechSynthesis_CIInstalledVoicesStatic2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechSynthesis_CIInstalledVoicesStatic2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechSynthesis_CIInstalledVoicesStatic2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechSynthesis_CIInstalledVoicesStatic2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechSynthesis_CIInstalledVoicesStatic2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *TrySetDefaultVoiceAsync )(
        __x_ABI_CWindows_CMedia_CSpeechSynthesis_CIInstalledVoicesStatic2 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CMedia_CSpeechSynthesis_CIVoiceInformation * voice,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CSpeechSynthesis_CIInstalledVoicesStatic2Vtbl;

interface __x_ABI_CWindows_CMedia_CSpeechSynthesis_CIInstalledVoicesStatic2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CSpeechSynthesis_CIInstalledVoicesStatic2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CSpeechSynthesis_CIInstalledVoicesStatic2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CSpeechSynthesis_CIInstalledVoicesStatic2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CSpeechSynthesis_CIInstalledVoicesStatic2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CSpeechSynthesis_CIInstalledVoicesStatic2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CSpeechSynthesis_CIInstalledVoicesStatic2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CSpeechSynthesis_CIInstalledVoicesStatic2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CSpeechSynthesis_CIInstalledVoicesStatic2_TrySetDefaultVoiceAsync(This,voice,result) \
    ( (This)->lpVtbl->TrySetDefaultVoiceAsync(This,voice,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CSpeechSynthesis_CIInstalledVoicesStatic2;
#endif /* !defined(____x_ABI_CWindows_CMedia_CSpeechSynthesis_CIInstalledVoicesStatic2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.Media.SpeechSynthesis.ISpeechSynthesisStream
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.SpeechSynthesis.SpeechSynthesisStream
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Storage.Streams.IRandomAccessStreamWithContentType
 *     Windows.Storage.Streams.IRandomAccessStream
 *     Windows.Foundation.IClosable
 *     Windows.Storage.Streams.IInputStream
 *     Windows.Storage.Streams.IOutputStream
 *     Windows.Storage.Streams.IContentTypeProvider
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesisStream_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesisStream_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_SpeechSynthesis_ISpeechSynthesisStream[] = L"Windows.Media.SpeechSynthesis.ISpeechSynthesisStream";
/* [object, uuid("83E46E93-244C-4622-BA0B-6229C4D0D65D"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesisStreamVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesisStream * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesisStream * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesisStream * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesisStream * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesisStream * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesisStream * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Markers )(
        __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesisStream * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CIMediaMarker * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesisStreamVtbl;

interface __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesisStream
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesisStreamVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesisStream_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesisStream_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesisStream_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesisStream_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesisStream_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesisStream_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesisStream_get_Markers(This,value) \
    ( (This)->lpVtbl->get_Markers(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesisStream;
#endif /* !defined(____x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesisStream_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.SpeechSynthesis.ISpeechSynthesizer
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.SpeechSynthesis.SpeechSynthesizer
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizer_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizer_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_SpeechSynthesis_ISpeechSynthesizer[] = L"Windows.Media.SpeechSynthesis.ISpeechSynthesizer";
/* [object, uuid("CE9F7C76-97F4-4CED-AD68-D51C458E45C6"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizer * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizer * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizer * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizer * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizer * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizer * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *SynthesizeTextToStreamAsync )(
        __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizer * This,
        /* [in] */__RPC__in HSTRING text,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CSpeechSynthesis__CSpeechSynthesisStream * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *SynthesizeSsmlToStreamAsync )(
        __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizer * This,
        /* [in] */__RPC__in HSTRING Ssml,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CSpeechSynthesis__CSpeechSynthesisStream * * operation
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Voice )(
        __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizer * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CMedia_CSpeechSynthesis_CIVoiceInformation * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Voice )(
        __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizer * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CSpeechSynthesis_CIVoiceInformation * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizerVtbl;

interface __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizer
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizer_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizer_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizer_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizer_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizer_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizer_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizer_SynthesizeTextToStreamAsync(This,text,operation) \
    ( (This)->lpVtbl->SynthesizeTextToStreamAsync(This,text,operation) )

#define __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizer_SynthesizeSsmlToStreamAsync(This,Ssml,operation) \
    ( (This)->lpVtbl->SynthesizeSsmlToStreamAsync(This,Ssml,operation) )

#define __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizer_put_Voice(This,value) \
    ( (This)->lpVtbl->put_Voice(This,value) )

#define __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizer_get_Voice(This,value) \
    ( (This)->lpVtbl->get_Voice(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizer;
#endif /* !defined(____x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizer_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.SpeechSynthesis.ISpeechSynthesizer2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.SpeechSynthesis.SpeechSynthesizer
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizer2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizer2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_SpeechSynthesis_ISpeechSynthesizer2[] = L"Windows.Media.SpeechSynthesis.ISpeechSynthesizer2";
/* [object, uuid("A7C5ECB2-4339-4D6A-BBF8-C7A4F1544C2E"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizer2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizer2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizer2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizer2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizer2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizer2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizer2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Options )(
        __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizer2 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizerOptions * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizer2Vtbl;

interface __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizer2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizer2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizer2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizer2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizer2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizer2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizer2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizer2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizer2_get_Options(This,value) \
    ( (This)->lpVtbl->get_Options(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizer2;
#endif /* !defined(____x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizer2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Media.SpeechSynthesis.ISpeechSynthesizerOptions
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.SpeechSynthesis.SpeechSynthesizerOptions
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizerOptions_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizerOptions_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_SpeechSynthesis_ISpeechSynthesizerOptions[] = L"Windows.Media.SpeechSynthesis.ISpeechSynthesizerOptions";
/* [object, uuid("A0E23871-CC3D-43C9-91B1-EE185324D83D"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizerOptionsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizerOptions * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizerOptions * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizerOptions * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizerOptions * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizerOptions * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizerOptions * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IncludeWordBoundaryMetadata )(
        __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizerOptions * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_IncludeWordBoundaryMetadata )(
        __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizerOptions * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IncludeSentenceBoundaryMetadata )(
        __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizerOptions * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_IncludeSentenceBoundaryMetadata )(
        __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizerOptions * This,
        /* [in] */boolean value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizerOptionsVtbl;

interface __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizerOptions
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizerOptionsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizerOptions_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizerOptions_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizerOptions_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizerOptions_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizerOptions_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizerOptions_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizerOptions_get_IncludeWordBoundaryMetadata(This,value) \
    ( (This)->lpVtbl->get_IncludeWordBoundaryMetadata(This,value) )

#define __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizerOptions_put_IncludeWordBoundaryMetadata(This,value) \
    ( (This)->lpVtbl->put_IncludeWordBoundaryMetadata(This,value) )

#define __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizerOptions_get_IncludeSentenceBoundaryMetadata(This,value) \
    ( (This)->lpVtbl->get_IncludeSentenceBoundaryMetadata(This,value) )

#define __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizerOptions_put_IncludeSentenceBoundaryMetadata(This,value) \
    ( (This)->lpVtbl->put_IncludeSentenceBoundaryMetadata(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizerOptions;
#endif /* !defined(____x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizerOptions_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Media.SpeechSynthesis.ISpeechSynthesizerOptions2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.SpeechSynthesis.SpeechSynthesizerOptions
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizerOptions2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizerOptions2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_SpeechSynthesis_ISpeechSynthesizerOptions2[] = L"Windows.Media.SpeechSynthesis.ISpeechSynthesizerOptions2";
/* [object, uuid("1CBEF60E-119C-4BED-B118-D250C3A25793"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizerOptions2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizerOptions2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizerOptions2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizerOptions2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizerOptions2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizerOptions2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizerOptions2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AudioVolume )(
        __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizerOptions2 * This,
        /* [retval, out] */__RPC__out DOUBLE * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_AudioVolume )(
        __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizerOptions2 * This,
        /* [in] */DOUBLE value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SpeakingRate )(
        __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizerOptions2 * This,
        /* [retval, out] */__RPC__out DOUBLE * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_SpeakingRate )(
        __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizerOptions2 * This,
        /* [in] */DOUBLE value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AudioPitch )(
        __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizerOptions2 * This,
        /* [retval, out] */__RPC__out DOUBLE * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_AudioPitch )(
        __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizerOptions2 * This,
        /* [in] */DOUBLE value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizerOptions2Vtbl;

interface __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizerOptions2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizerOptions2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizerOptions2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizerOptions2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizerOptions2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizerOptions2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizerOptions2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizerOptions2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizerOptions2_get_AudioVolume(This,value) \
    ( (This)->lpVtbl->get_AudioVolume(This,value) )

#define __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizerOptions2_put_AudioVolume(This,value) \
    ( (This)->lpVtbl->put_AudioVolume(This,value) )

#define __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizerOptions2_get_SpeakingRate(This,value) \
    ( (This)->lpVtbl->get_SpeakingRate(This,value) )

#define __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizerOptions2_put_SpeakingRate(This,value) \
    ( (This)->lpVtbl->put_SpeakingRate(This,value) )

#define __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizerOptions2_get_AudioPitch(This,value) \
    ( (This)->lpVtbl->get_AudioPitch(This,value) )

#define __x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizerOptions2_put_AudioPitch(This,value) \
    ( (This)->lpVtbl->put_AudioPitch(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizerOptions2;
#endif /* !defined(____x_ABI_CWindows_CMedia_CSpeechSynthesis_CISpeechSynthesizerOptions2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.Media.SpeechSynthesis.IVoiceInformation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.SpeechSynthesis.VoiceInformation
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CSpeechSynthesis_CIVoiceInformation_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CSpeechSynthesis_CIVoiceInformation_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_SpeechSynthesis_IVoiceInformation[] = L"Windows.Media.SpeechSynthesis.IVoiceInformation";
/* [object, uuid("B127D6A4-1291-4604-AA9C-83134083352C"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CSpeechSynthesis_CIVoiceInformationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechSynthesis_CIVoiceInformation * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechSynthesis_CIVoiceInformation * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechSynthesis_CIVoiceInformation * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechSynthesis_CIVoiceInformation * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechSynthesis_CIVoiceInformation * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CSpeechSynthesis_CIVoiceInformation * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DisplayName )(
        __x_ABI_CWindows_CMedia_CSpeechSynthesis_CIVoiceInformation * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CMedia_CSpeechSynthesis_CIVoiceInformation * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Language )(
        __x_ABI_CWindows_CMedia_CSpeechSynthesis_CIVoiceInformation * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Description )(
        __x_ABI_CWindows_CMedia_CSpeechSynthesis_CIVoiceInformation * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Gender )(
        __x_ABI_CWindows_CMedia_CSpeechSynthesis_CIVoiceInformation * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CMedia_CSpeechSynthesis_CVoiceGender * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CSpeechSynthesis_CIVoiceInformationVtbl;

interface __x_ABI_CWindows_CMedia_CSpeechSynthesis_CIVoiceInformation
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CSpeechSynthesis_CIVoiceInformationVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CSpeechSynthesis_CIVoiceInformation_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CSpeechSynthesis_CIVoiceInformation_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CSpeechSynthesis_CIVoiceInformation_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CSpeechSynthesis_CIVoiceInformation_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CSpeechSynthesis_CIVoiceInformation_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CSpeechSynthesis_CIVoiceInformation_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CSpeechSynthesis_CIVoiceInformation_get_DisplayName(This,value) \
    ( (This)->lpVtbl->get_DisplayName(This,value) )

#define __x_ABI_CWindows_CMedia_CSpeechSynthesis_CIVoiceInformation_get_Id(This,value) \
    ( (This)->lpVtbl->get_Id(This,value) )

#define __x_ABI_CWindows_CMedia_CSpeechSynthesis_CIVoiceInformation_get_Language(This,value) \
    ( (This)->lpVtbl->get_Language(This,value) )

#define __x_ABI_CWindows_CMedia_CSpeechSynthesis_CIVoiceInformation_get_Description(This,value) \
    ( (This)->lpVtbl->get_Description(This,value) )

#define __x_ABI_CWindows_CMedia_CSpeechSynthesis_CIVoiceInformation_get_Gender(This,value) \
    ( (This)->lpVtbl->get_Gender(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CSpeechSynthesis_CIVoiceInformation;
#endif /* !defined(____x_ABI_CWindows_CMedia_CSpeechSynthesis_CIVoiceInformation_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.SpeechSynthesis.SpeechSynthesisStream
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.SpeechSynthesis.ISpeechSynthesisStream ** Default Interface **
 *    Windows.Storage.Streams.IRandomAccessStreamWithContentType
 *    Windows.Storage.Streams.IContentTypeProvider
 *    Windows.Storage.Streams.IRandomAccessStream
 *    Windows.Storage.Streams.IOutputStream
 *    Windows.Foundation.IClosable
 *    Windows.Storage.Streams.IInputStream
 *    Windows.Media.Core.ITimedMetadataTrackProvider
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_SpeechSynthesis_SpeechSynthesisStream_DEFINED
#define RUNTIMECLASS_Windows_Media_SpeechSynthesis_SpeechSynthesisStream_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_SpeechSynthesis_SpeechSynthesisStream[] = L"Windows.Media.SpeechSynthesis.SpeechSynthesisStream";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.SpeechSynthesis.SpeechSynthesizer
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Media.SpeechSynthesis.IInstalledVoicesStatic2 interface starting with version 5.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.Media.SpeechSynthesis.IInstalledVoicesStatic interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Media.SpeechSynthesis.ISpeechSynthesizer ** Default Interface **
 *    Windows.Foundation.IClosable
 *    Windows.Media.SpeechSynthesis.ISpeechSynthesizer2
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_SpeechSynthesis_SpeechSynthesizer_DEFINED
#define RUNTIMECLASS_Windows_Media_SpeechSynthesis_SpeechSynthesizer_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_SpeechSynthesis_SpeechSynthesizer[] = L"Windows.Media.SpeechSynthesis.SpeechSynthesizer";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.SpeechSynthesis.SpeechSynthesizerOptions
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.SpeechSynthesis.ISpeechSynthesizerOptions ** Default Interface **
 *    Windows.Media.SpeechSynthesis.ISpeechSynthesizerOptions2
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_Media_SpeechSynthesis_SpeechSynthesizerOptions_DEFINED
#define RUNTIMECLASS_Windows_Media_SpeechSynthesis_SpeechSynthesizerOptions_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_SpeechSynthesis_SpeechSynthesizerOptions[] = L"Windows.Media.SpeechSynthesis.SpeechSynthesizerOptions";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.Media.SpeechSynthesis.VoiceInformation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.SpeechSynthesis.IVoiceInformation ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_SpeechSynthesis_VoiceInformation_DEFINED
#define RUNTIMECLASS_Windows_Media_SpeechSynthesis_VoiceInformation_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_SpeechSynthesis_VoiceInformation[] = L"Windows.Media.SpeechSynthesis.VoiceInformation";
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
#endif // __windows2Emedia2Espeechsynthesis_p_h__

#endif // __windows2Emedia2Espeechsynthesis_h__
