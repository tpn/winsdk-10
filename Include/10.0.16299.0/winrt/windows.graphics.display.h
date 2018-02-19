/* Header file automatically generated from windows.graphics.display.idl */
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
#ifndef __windows2Egraphics2Edisplay_h__
#define __windows2Egraphics2Edisplay_h__
#ifndef __windows2Egraphics2Edisplay_p_h__
#define __windows2Egraphics2Edisplay_p_h__


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
#ifndef ____x_ABI_CWindows_CGraphics_CDisplay_CIDisplayPropertiesEventHandler_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CDisplay_CIDisplayPropertiesEventHandler_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Display {
                interface IDisplayPropertiesEventHandler;
            } /* Windows */
        } /* Graphics */
    } /* Display */} /* ABI */
#define __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayPropertiesEventHandler ABI::Windows::Graphics::Display::IDisplayPropertiesEventHandler

#endif // ____x_ABI_CWindows_CGraphics_CDisplay_CIDisplayPropertiesEventHandler_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverride_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverride_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Display {
                interface IBrightnessOverride;
            } /* Windows */
        } /* Graphics */
    } /* Display */} /* ABI */
#define __x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverride ABI::Windows::Graphics::Display::IBrightnessOverride

#endif // ____x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverride_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverrideStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverrideStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Display {
                interface IBrightnessOverrideStatics;
            } /* Windows */
        } /* Graphics */
    } /* Display */} /* ABI */
#define __x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverrideStatics ABI::Windows::Graphics::Display::IBrightnessOverrideStatics

#endif // ____x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverrideStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Display {
                interface IDisplayInformation;
            } /* Windows */
        } /* Graphics */
    } /* Display */} /* ABI */
#define __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation ABI::Windows::Graphics::Display::IDisplayInformation

#endif // ____x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation2_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Display {
                interface IDisplayInformation2;
            } /* Windows */
        } /* Graphics */
    } /* Display */} /* ABI */
#define __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation2 ABI::Windows::Graphics::Display::IDisplayInformation2

#endif // ____x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation3_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation3_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Display {
                interface IDisplayInformation3;
            } /* Windows */
        } /* Graphics */
    } /* Display */} /* ABI */
#define __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation3 ABI::Windows::Graphics::Display::IDisplayInformation3

#endif // ____x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation4_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation4_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Display {
                interface IDisplayInformation4;
            } /* Windows */
        } /* Graphics */
    } /* Display */} /* ABI */
#define __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation4 ABI::Windows::Graphics::Display::IDisplayInformation4

#endif // ____x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation4_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformationStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformationStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Display {
                interface IDisplayInformationStatics;
            } /* Windows */
        } /* Graphics */
    } /* Display */} /* ABI */
#define __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformationStatics ABI::Windows::Graphics::Display::IDisplayInformationStatics

#endif // ____x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformationStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CDisplay_CIDisplayPropertiesStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CDisplay_CIDisplayPropertiesStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Display {
                interface IDisplayPropertiesStatics;
            } /* Windows */
        } /* Graphics */
    } /* Display */} /* ABI */
#define __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayPropertiesStatics ABI::Windows::Graphics::Display::IDisplayPropertiesStatics

#endif // ____x_ABI_CWindows_CGraphics_CDisplay_CIDisplayPropertiesStatics_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Display {
                class BrightnessOverride;
            } /* Windows */
        } /* Graphics */
    } /* Display */} /* ABI */



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef DEF___FITypedEventHandler_2_Windows__CGraphics__CDisplay__CBrightnessOverride_IInspectable_USE
#define DEF___FITypedEventHandler_2_Windows__CGraphics__CDisplay__CBrightnessOverride_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("a460214e-6620-521d-9cb9-a0a0f732ce90"))
ITypedEventHandler<ABI::Windows::Graphics::Display::BrightnessOverride*,IInspectable*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Graphics::Display::BrightnessOverride*, ABI::Windows::Graphics::Display::IBrightnessOverride*>,IInspectable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.Graphics.Display.BrightnessOverride, Object>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::Graphics::Display::BrightnessOverride*,IInspectable*> __FITypedEventHandler_2_Windows__CGraphics__CDisplay__CBrightnessOverride_IInspectable_t;
#define __FITypedEventHandler_2_Windows__CGraphics__CDisplay__CBrightnessOverride_IInspectable ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CGraphics__CDisplay__CBrightnessOverride_IInspectable_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CGraphics__CDisplay__CBrightnessOverride_IInspectable ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Graphics::Display::IBrightnessOverride*,IInspectable*>
//#define __FITypedEventHandler_2_Windows__CGraphics__CDisplay__CBrightnessOverride_IInspectable_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Graphics::Display::IBrightnessOverride*,IInspectable*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CGraphics__CDisplay__CBrightnessOverride_IInspectable_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Display {
                class DisplayInformation;
            } /* Windows */
        } /* Graphics */
    } /* Display */} /* ABI */



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CGraphics__CDisplay__CDisplayInformation_IInspectable_USE
#define DEF___FITypedEventHandler_2_Windows__CGraphics__CDisplay__CDisplayInformation_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("86c4f619-67b6-51c7-b30d-d8cf13625327"))
ITypedEventHandler<ABI::Windows::Graphics::Display::DisplayInformation*,IInspectable*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Graphics::Display::DisplayInformation*, ABI::Windows::Graphics::Display::IDisplayInformation*>,IInspectable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.Graphics.Display.DisplayInformation, Object>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::Graphics::Display::DisplayInformation*,IInspectable*> __FITypedEventHandler_2_Windows__CGraphics__CDisplay__CDisplayInformation_IInspectable_t;
#define __FITypedEventHandler_2_Windows__CGraphics__CDisplay__CDisplayInformation_IInspectable ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CGraphics__CDisplay__CDisplayInformation_IInspectable_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CGraphics__CDisplay__CDisplayInformation_IInspectable ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Graphics::Display::IDisplayInformation*,IInspectable*>
//#define __FITypedEventHandler_2_Windows__CGraphics__CDisplay__CDisplayInformation_IInspectable_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Graphics::Display::IDisplayInformation*,IInspectable*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CGraphics__CDisplay__CDisplayInformation_IInspectable_USE */


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


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStream_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStream_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("398c4183-793d-5b00-819b-4aef92485e94"))
IAsyncOperationCompletedHandler<ABI::Windows::Storage::Streams::IRandomAccessStream*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Storage::Streams::IRandomAccessStream*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Storage.Streams.IRandomAccessStream>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::Storage::Streams::IRandomAccessStream*> __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStream_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStream ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStream_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStream ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Storage::Streams::IRandomAccessStream*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStream_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Storage::Streams::IRandomAccessStream*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStream_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream_USE
#define DEF___FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("430ecece-1418-5d19-81b2-5ddb381603cc"))
IAsyncOperation<ABI::Windows::Storage::Streams::IRandomAccessStream*> : IAsyncOperation_impl<ABI::Windows::Storage::Streams::IRandomAccessStream*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Storage.Streams.IRandomAccessStream>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::Storage::Streams::IRandomAccessStream*> __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream_t;
#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Storage::Streams::IRandomAccessStream*>
//#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Storage::Streams::IRandomAccessStream*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#ifndef DEF___FIReference_1_double_USE
#define DEF___FIReference_1_double_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("2f2d6c29-5473-5f3e-92e7-96572bb990e2"))
IReference<double> : IReference_impl<double> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IReference`1<Double>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IReference<double> __FIReference_1_double_t;
#define __FIReference_1_double ABI::Windows::Foundation::__FIReference_1_double_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIReference_1_double ABI::Windows::Foundation::IReference<DOUBLE>
//#define __FIReference_1_double_t ABI::Windows::Foundation::IReference<DOUBLE>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIReference_1_double_USE */












namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Display {
                
                typedef enum DisplayBrightnessOverrideOptions : unsigned int DisplayBrightnessOverrideOptions;
                
            } /* Windows */
        } /* Graphics */
    } /* Display */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Display {
                
                typedef enum DisplayBrightnessScenario : int DisplayBrightnessScenario;
                
            } /* Windows */
        } /* Graphics */
    } /* Display */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Display {
                
                typedef enum DisplayOrientations : unsigned int DisplayOrientations;
                
            } /* Windows */
        } /* Graphics */
    } /* Display */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Display {
                
                typedef enum ResolutionScale : int ResolutionScale;
                
            } /* Windows */
        } /* Graphics */
    } /* Display */} /* ABI */





















/*
 *
 * Struct Windows.Graphics.Display.DisplayBrightnessOverrideOptions
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Display {
                /* [v1_enum, flags, contract] */
                enum DisplayBrightnessOverrideOptions : unsigned int
                {
                    DisplayBrightnessOverrideOptions_None = 0,
                    DisplayBrightnessOverrideOptions_UseDimmedPolicyWhenBatteryIsLow = 0x1,
                };
                
                DEFINE_ENUM_FLAG_OPERATORS(DisplayBrightnessOverrideOptions)
                
            } /* Windows */
        } /* Graphics */
    } /* Display */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Struct Windows.Graphics.Display.DisplayBrightnessScenario
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Display {
                /* [v1_enum, contract] */
                enum DisplayBrightnessScenario : int
                {
                    DisplayBrightnessScenario_DefaultBrightness = 0,
                    DisplayBrightnessScenario_IdleBrightness = 1,
                    DisplayBrightnessScenario_BarcodeReadingBrightness = 2,
                    DisplayBrightnessScenario_FullBrightness = 3,
                };
                
            } /* Windows */
        } /* Graphics */
    } /* Display */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Struct Windows.Graphics.Display.DisplayOrientations
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Display {
                /* [v1_enum, flags, contract] */
                enum DisplayOrientations : unsigned int
                {
                    DisplayOrientations_None = 0,
                    DisplayOrientations_Landscape = 0x1,
                    DisplayOrientations_Portrait = 0x2,
                    DisplayOrientations_LandscapeFlipped = 0x4,
                    DisplayOrientations_PortraitFlipped = 0x8,
                };
                
                DEFINE_ENUM_FLAG_OPERATORS(DisplayOrientations)
                
            } /* Windows */
        } /* Graphics */
    } /* Display */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Graphics.Display.ResolutionScale
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Display {
                /* [v1_enum, contract] */
                enum ResolutionScale : int
                {
                    ResolutionScale_Invalid = 0,
                    ResolutionScale_Scale100Percent = 100,
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    
                    ResolutionScale_Scale120Percent = 120,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    
                    ResolutionScale_Scale125Percent = 125,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    
                    ResolutionScale_Scale140Percent = 140,
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    
                    ResolutionScale_Scale150Percent = 150,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    
                    ResolutionScale_Scale160Percent = 160,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    
                    ResolutionScale_Scale175Percent = 175,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    
                    ResolutionScale_Scale180Percent = 180,
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    
                    ResolutionScale_Scale200Percent = 200,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    
                    ResolutionScale_Scale225Percent = 225,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    
                    ResolutionScale_Scale250Percent = 250,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    
                    ResolutionScale_Scale300Percent = 300,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    
                    ResolutionScale_Scale350Percent = 350,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    
                    ResolutionScale_Scale400Percent = 400,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    
                    ResolutionScale_Scale450Percent = 450,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    
                    ResolutionScale_Scale500Percent = 500,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    
                };
                
            } /* Windows */
        } /* Graphics */
    } /* Display */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Delegate Windows.Graphics.Display.DisplayPropertiesEventHandler
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGraphics_CDisplay_CIDisplayPropertiesEventHandler_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CDisplay_CIDisplayPropertiesEventHandler_INTERFACE_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Display {
                /* [object, uuid("DBDD8B01-F1A1-46D1-9EE3-543BCC995980"), deprecated, contract] */
                MIDL_INTERFACE("DBDD8B01-F1A1-46D1-9EE3-543BCC995980")
                
                #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                DEPRECATED("DisplayProperties may be altered or unavailable for releases after Windows Phone 8.1. Instead, use DisplayInformation.")
                #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                IDisplayPropertiesEventHandler : IUnknown
                {
                    virtual HRESULT STDMETHODCALLTYPE Invoke(
                        /* [in] */__RPC__in_opt IInspectable * sender
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IDisplayPropertiesEventHandler=_uuidof(IDisplayPropertiesEventHandler);
                
            } /* Windows */
        } /* Graphics */
    } /* Display */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CDisplay_CIDisplayPropertiesEventHandler;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CDisplay_CIDisplayPropertiesEventHandler_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Graphics.Display.IBrightnessOverride
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Graphics.Display.BrightnessOverride
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverride_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverride_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Display_IBrightnessOverride[] = L"Windows.Graphics.Display.IBrightnessOverride";
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Display {
                /* [object, uuid("96C9621A-C143-4392-BEDD-4A7E9574C8FD"), exclusiveto, contract] */
                MIDL_INTERFACE("96C9621A-C143-4392-BEDD-4A7E9574C8FD")
                IBrightnessOverride : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsSupported(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsOverrideActive(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_BrightnessLevel(
                        /* [retval, out] */__RPC__out DOUBLE * level
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE SetBrightnessLevel(
                        /* [in] */DOUBLE brightnessLevel,
                        /* [in] */ABI::Windows::Graphics::Display::DisplayBrightnessOverrideOptions options
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE SetBrightnessScenario(
                        /* [in] */ABI::Windows::Graphics::Display::DisplayBrightnessScenario scenario,
                        /* [in] */ABI::Windows::Graphics::Display::DisplayBrightnessOverrideOptions options
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetLevelForScenario(
                        /* [in] */ABI::Windows::Graphics::Display::DisplayBrightnessScenario scenario,
                        /* [retval, out] */__RPC__out DOUBLE * brightnessLevel
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE StartOverride(void) = 0;
                    virtual HRESULT STDMETHODCALLTYPE StopOverride(void) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_IsSupportedChanged(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CGraphics__CDisplay__CBrightnessOverride_IInspectable * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_IsSupportedChanged(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_IsOverrideActiveChanged(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CGraphics__CDisplay__CBrightnessOverride_IInspectable * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_IsOverrideActiveChanged(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_BrightnessLevelChanged(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CGraphics__CDisplay__CBrightnessOverride_IInspectable * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_BrightnessLevelChanged(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IBrightnessOverride=_uuidof(IBrightnessOverride);
                
            } /* Windows */
        } /* Graphics */
    } /* Display */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverride;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverride_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Graphics.Display.IBrightnessOverrideStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Graphics.Display.BrightnessOverride
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverrideStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverrideStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Display_IBrightnessOverrideStatics[] = L"Windows.Graphics.Display.IBrightnessOverrideStatics";
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Display {
                /* [object, uuid("03A7B9ED-E1F1-4A68-A11F-946AD8CE5393"), exclusiveto, contract] */
                MIDL_INTERFACE("03A7B9ED-E1F1-4A68-A11F-946AD8CE5393")
                IBrightnessOverrideStatics : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE GetDefaultForSystem(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Graphics::Display::IBrightnessOverride * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetForCurrentView(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Graphics::Display::IBrightnessOverride * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE SaveForSystemAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Graphics::Display::IBrightnessOverride * value,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IBrightnessOverrideStatics=_uuidof(IBrightnessOverrideStatics);
                
            } /* Windows */
        } /* Graphics */
    } /* Display */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverrideStatics;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverrideStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Graphics.Display.IDisplayInformation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Graphics.Display.DisplayInformation
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Display_IDisplayInformation[] = L"Windows.Graphics.Display.IDisplayInformation";
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Display {
                /* [object, uuid("BED112AE-ADC3-4DC9-AE65-851F4D7D4799"), exclusiveto, contract] */
                MIDL_INTERFACE("BED112AE-ADC3-4DC9-AE65-851F4D7D4799")
                IDisplayInformation : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CurrentOrientation(
                        /* [retval, out] */__RPC__out ABI::Windows::Graphics::Display::DisplayOrientations * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_NativeOrientation(
                        /* [retval, out] */__RPC__out ABI::Windows::Graphics::Display::DisplayOrientations * value
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_OrientationChanged(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CGraphics__CDisplay__CDisplayInformation_IInspectable * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_OrientationChanged(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ResolutionScale(
                        /* [retval, out] */__RPC__out ABI::Windows::Graphics::Display::ResolutionScale * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LogicalDpi(
                        /* [retval, out] */__RPC__out FLOAT * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RawDpiX(
                        /* [retval, out] */__RPC__out FLOAT * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RawDpiY(
                        /* [retval, out] */__RPC__out FLOAT * value
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_DpiChanged(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CGraphics__CDisplay__CDisplayInformation_IInspectable * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_DpiChanged(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_StereoEnabled(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_StereoEnabledChanged(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CGraphics__CDisplay__CDisplayInformation_IInspectable * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_StereoEnabledChanged(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetColorProfileAsync(
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream * * asyncInfo
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_ColorProfileChanged(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CGraphics__CDisplay__CDisplayInformation_IInspectable * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_ColorProfileChanged(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IDisplayInformation=_uuidof(IDisplayInformation);
                
            } /* Windows */
        } /* Graphics */
    } /* Display */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Graphics.Display.IDisplayInformation2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Graphics.Display.DisplayInformation
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Graphics.Display.IDisplayInformation
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Display_IDisplayInformation2[] = L"Windows.Graphics.Display.IDisplayInformation2";
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Display {
                /* [object, uuid("4DCD0021-FAD1-4B8E-8EDF-775887B8BF19"), exclusiveto, contract] */
                MIDL_INTERFACE("4DCD0021-FAD1-4B8E-8EDF-775887B8BF19")
                IDisplayInformation2 : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RawPixelsPerViewPixel(
                        /* [retval, out] */__RPC__out DOUBLE * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IDisplayInformation2=_uuidof(IDisplayInformation2);
                
            } /* Windows */
        } /* Graphics */
    } /* Display */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation2;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Graphics.Display.IDisplayInformation3
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.Graphics.Display.DisplayInformation
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Display_IDisplayInformation3[] = L"Windows.Graphics.Display.IDisplayInformation3";
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Display {
                /* [object, uuid("DB15011D-0F09-4466-8FF3-11DE9A3C929A"), exclusiveto, contract] */
                MIDL_INTERFACE("DB15011D-0F09-4466-8FF3-11DE9A3C929A")
                IDisplayInformation3 : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DiagonalSizeInInches(
                        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_double * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IDisplayInformation3=_uuidof(IDisplayInformation3);
                
            } /* Windows */
        } /* Graphics */
    } /* Display */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation3;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation3_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Graphics.Display.IDisplayInformation4
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Graphics.Display.DisplayInformation
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation4_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation4_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Display_IDisplayInformation4[] = L"Windows.Graphics.Display.IDisplayInformation4";
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Display {
                /* [object, uuid("C972CE2F-1242-46BE-B536-E1AAFE9E7ACF"), exclusiveto, contract] */
                MIDL_INTERFACE("C972CE2F-1242-46BE-B536-E1AAFE9E7ACF")
                IDisplayInformation4 : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ScreenWidthInRawPixels(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ScreenHeightInRawPixels(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IDisplayInformation4=_uuidof(IDisplayInformation4);
                
            } /* Windows */
        } /* Graphics */
    } /* Display */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation4;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation4_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Graphics.Display.IDisplayInformationStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Graphics.Display.DisplayInformation
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformationStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformationStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Display_IDisplayInformationStatics[] = L"Windows.Graphics.Display.IDisplayInformationStatics";
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Display {
                /* [object, uuid("C6A02A6C-D452-44DC-BA07-96F3C6ADF9D1"), exclusiveto, contract] */
                MIDL_INTERFACE("C6A02A6C-D452-44DC-BA07-96F3C6ADF9D1")
                IDisplayInformationStatics : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE GetForCurrentView(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Graphics::Display::IDisplayInformation * * current
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AutoRotationPreferences(
                        /* [retval, out] */__RPC__out ABI::Windows::Graphics::Display::DisplayOrientations * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_AutoRotationPreferences(
                        /* [in] */ABI::Windows::Graphics::Display::DisplayOrientations value
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_DisplayContentsInvalidated(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CGraphics__CDisplay__CDisplayInformation_IInspectable * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_DisplayContentsInvalidated(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IDisplayInformationStatics=_uuidof(IDisplayInformationStatics);
                
            } /* Windows */
        } /* Graphics */
    } /* Display */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformationStatics;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformationStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Graphics.Display.IDisplayPropertiesStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Graphics.Display.DisplayProperties
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGraphics_CDisplay_CIDisplayPropertiesStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CDisplay_CIDisplayPropertiesStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Display_IDisplayPropertiesStatics[] = L"Windows.Graphics.Display.IDisplayPropertiesStatics";
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Display {
                /* [object, uuid("6937ED8D-30EA-4DED-8271-4553FF02F68A"), exclusiveto, deprecated, contract] */
                MIDL_INTERFACE("6937ED8D-30EA-4DED-8271-4553FF02F68A")
                
                #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                DEPRECATED("DisplayProperties may be altered or unavailable for releases after Windows Phone 8.1. Instead, use DisplayInformation.")
                #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                IDisplayPropertiesStatics : IInspectable
                {
                    
                    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    DEPRECATED("DisplayProperties may be altered or unavailable for releases after Windows Phone 8.1. Instead, use DisplayInformation.")
                    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    /* [propget, deprecated] */virtual HRESULT STDMETHODCALLTYPE get_CurrentOrientation(
                        /* [retval, out] */__RPC__out ABI::Windows::Graphics::Display::DisplayOrientations * value
                        ) = 0;
                    
                    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    DEPRECATED("DisplayProperties may be altered or unavailable for releases after Windows Phone 8.1. Instead, use DisplayInformation.")
                    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    /* [propget, deprecated] */virtual HRESULT STDMETHODCALLTYPE get_NativeOrientation(
                        /* [retval, out] */__RPC__out ABI::Windows::Graphics::Display::DisplayOrientations * value
                        ) = 0;
                    
                    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    DEPRECATED("DisplayProperties may be altered or unavailable for releases after Windows Phone 8.1. Instead, use DisplayInformation.")
                    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    /* [propget, deprecated] */virtual HRESULT STDMETHODCALLTYPE get_AutoRotationPreferences(
                        /* [retval, out] */__RPC__out ABI::Windows::Graphics::Display::DisplayOrientations * value
                        ) = 0;
                    
                    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    DEPRECATED("DisplayProperties may be altered or unavailable for releases after Windows Phone 8.1. Instead, use DisplayInformation.")
                    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    /* [propput, deprecated] */virtual HRESULT STDMETHODCALLTYPE put_AutoRotationPreferences(
                        /* [in] */ABI::Windows::Graphics::Display::DisplayOrientations value
                        ) = 0;
                    
                    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    DEPRECATED("DisplayProperties may be altered or unavailable for releases after Windows Phone 8.1. Instead, use DisplayInformation.")
                    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    /* [eventadd, deprecated] */virtual HRESULT STDMETHODCALLTYPE add_OrientationChanged(
                        /* [in] */__RPC__in_opt ABI::Windows::Graphics::Display::IDisplayPropertiesEventHandler  * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    
                    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    DEPRECATED("DisplayProperties may be altered or unavailable for releases after Windows Phone 8.1. Instead, use DisplayInformation.")
                    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    /* [eventremove, deprecated] */virtual HRESULT STDMETHODCALLTYPE remove_OrientationChanged(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    
                    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    DEPRECATED("DisplayProperties may be altered or unavailable for releases after Windows Phone 8.1. Instead, use DisplayInformation.")
                    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    /* [propget, deprecated] */virtual HRESULT STDMETHODCALLTYPE get_ResolutionScale(
                        /* [retval, out] */__RPC__out ABI::Windows::Graphics::Display::ResolutionScale * value
                        ) = 0;
                    
                    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    DEPRECATED("DisplayProperties may be altered or unavailable for releases after Windows Phone 8.1. Instead, use DisplayInformation.")
                    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    /* [propget, deprecated] */virtual HRESULT STDMETHODCALLTYPE get_LogicalDpi(
                        /* [retval, out] */__RPC__out FLOAT * value
                        ) = 0;
                    
                    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    DEPRECATED("DisplayProperties may be altered or unavailable for releases after Windows Phone 8.1. Instead, use DisplayInformation.")
                    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    /* [eventadd, deprecated] */virtual HRESULT STDMETHODCALLTYPE add_LogicalDpiChanged(
                        /* [in] */__RPC__in_opt ABI::Windows::Graphics::Display::IDisplayPropertiesEventHandler  * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    
                    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    DEPRECATED("DisplayProperties may be altered or unavailable for releases after Windows Phone 8.1. Instead, use DisplayInformation.")
                    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    /* [eventremove, deprecated] */virtual HRESULT STDMETHODCALLTYPE remove_LogicalDpiChanged(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    
                    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    DEPRECATED("DisplayProperties may be altered or unavailable for releases after Windows Phone 8.1. Instead, use DisplayInformation.")
                    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    /* [propget, deprecated] */virtual HRESULT STDMETHODCALLTYPE get_StereoEnabled(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    
                    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    DEPRECATED("DisplayProperties may be altered or unavailable for releases after Windows Phone 8.1. Instead, use DisplayInformation.")
                    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    /* [eventadd, deprecated] */virtual HRESULT STDMETHODCALLTYPE add_StereoEnabledChanged(
                        /* [in] */__RPC__in_opt ABI::Windows::Graphics::Display::IDisplayPropertiesEventHandler  * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    
                    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    DEPRECATED("DisplayProperties may be altered or unavailable for releases after Windows Phone 8.1. Instead, use DisplayInformation.")
                    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    /* [eventremove, deprecated] */virtual HRESULT STDMETHODCALLTYPE remove_StereoEnabledChanged(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    
                    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    DEPRECATED("DisplayProperties may be altered or unavailable for releases after Windows Phone 8.1. Instead, use DisplayInformation.")
                    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    /* [deprecated] */virtual HRESULT STDMETHODCALLTYPE GetColorProfileAsync(
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream * * asyncInfo
                        ) = 0;
                    
                    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    DEPRECATED("DisplayProperties may be altered or unavailable for releases after Windows Phone 8.1. Instead, use DisplayInformation.")
                    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    /* [eventadd, deprecated] */virtual HRESULT STDMETHODCALLTYPE add_ColorProfileChanged(
                        /* [in] */__RPC__in_opt ABI::Windows::Graphics::Display::IDisplayPropertiesEventHandler  * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    
                    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    DEPRECATED("DisplayProperties may be altered or unavailable for releases after Windows Phone 8.1. Instead, use DisplayInformation.")
                    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    /* [eventremove, deprecated] */virtual HRESULT STDMETHODCALLTYPE remove_ColorProfileChanged(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    
                    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    DEPRECATED("DisplayProperties may be altered or unavailable for releases after Windows Phone 8.1. Instead, use DisplayInformation.")
                    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    /* [eventadd, deprecated] */virtual HRESULT STDMETHODCALLTYPE add_DisplayContentsInvalidated(
                        /* [in] */__RPC__in_opt ABI::Windows::Graphics::Display::IDisplayPropertiesEventHandler  * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    
                    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    DEPRECATED("DisplayProperties may be altered or unavailable for releases after Windows Phone 8.1. Instead, use DisplayInformation.")
                    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    /* [eventremove, deprecated] */virtual HRESULT STDMETHODCALLTYPE remove_DisplayContentsInvalidated(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IDisplayPropertiesStatics=_uuidof(IDisplayPropertiesStatics);
                
            } /* Windows */
        } /* Graphics */
    } /* Display */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CDisplay_CIDisplayPropertiesStatics;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CDisplay_CIDisplayPropertiesStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Graphics.Display.BrightnessOverride
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Graphics.Display.IBrightnessOverrideStatics interface starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Graphics.Display.IBrightnessOverride ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_Graphics_Display_BrightnessOverride_DEFINED
#define RUNTIMECLASS_Windows_Graphics_Display_BrightnessOverride_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Display_BrightnessOverride[] = L"Windows.Graphics.Display.BrightnessOverride";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.Graphics.Display.DisplayInformation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Graphics.Display.IDisplayInformationStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Graphics.Display.IDisplayInformation ** Default Interface **
 *    Windows.Graphics.Display.IDisplayInformation2
 *    Windows.Graphics.Display.IDisplayInformation3
 *    Windows.Graphics.Display.IDisplayInformation4
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Graphics_Display_DisplayInformation_DEFINED
#define RUNTIMECLASS_Windows_Graphics_Display_DisplayInformation_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Display_DisplayInformation[] = L"Windows.Graphics.Display.DisplayInformation";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Graphics.Display.DisplayProperties
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Graphics.Display.IDisplayPropertiesStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_Graphics_Display_DisplayProperties_DEFINED
#define RUNTIMECLASS_Windows_Graphics_Display_DisplayProperties_DEFINED

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
DEPRECATED("DisplayProperties may be altered or unavailable for releases after Windows Phone 8.1. Instead, use DisplayInformation.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Display_DisplayProperties[] = L"Windows.Graphics.Display.DisplayProperties";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000




#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CGraphics_CDisplay_CIDisplayPropertiesEventHandler_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CDisplay_CIDisplayPropertiesEventHandler_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayPropertiesEventHandler __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayPropertiesEventHandler;

#endif // ____x_ABI_CWindows_CGraphics_CDisplay_CIDisplayPropertiesEventHandler_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverride_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverride_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverride __x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverride;

#endif // ____x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverride_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverrideStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverrideStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverrideStatics __x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverrideStatics;

#endif // ____x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverrideStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation;

#endif // ____x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation2_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation2 __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation2;

#endif // ____x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation3_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation3_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation3 __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation3;

#endif // ____x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation4_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation4_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation4 __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation4;

#endif // ____x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation4_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformationStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformationStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformationStatics __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformationStatics;

#endif // ____x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformationStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CDisplay_CIDisplayPropertiesStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CDisplay_CIDisplayPropertiesStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayPropertiesStatics __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayPropertiesStatics;

#endif // ____x_ABI_CWindows_CGraphics_CDisplay_CIDisplayPropertiesStatics_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____FITypedEventHandler_2_Windows__CGraphics__CDisplay__CBrightnessOverride_IInspectable_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CGraphics__CDisplay__CBrightnessOverride_IInspectable_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CGraphics__CDisplay__CBrightnessOverride_IInspectable __FITypedEventHandler_2_Windows__CGraphics__CDisplay__CBrightnessOverride_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CGraphics__CDisplay__CBrightnessOverride_IInspectable;

typedef struct __FITypedEventHandler_2_Windows__CGraphics__CDisplay__CBrightnessOverride_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CGraphics__CDisplay__CBrightnessOverride_IInspectable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CGraphics__CDisplay__CBrightnessOverride_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CGraphics__CDisplay__CBrightnessOverride_IInspectable * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CGraphics__CDisplay__CBrightnessOverride_IInspectable * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverride * sender,/* [in] */ __RPC__in_opt IInspectable * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CGraphics__CDisplay__CBrightnessOverride_IInspectableVtbl;

interface __FITypedEventHandler_2_Windows__CGraphics__CDisplay__CBrightnessOverride_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CGraphics__CDisplay__CBrightnessOverride_IInspectableVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CGraphics__CDisplay__CBrightnessOverride_IInspectable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CGraphics__CDisplay__CBrightnessOverride_IInspectable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CGraphics__CDisplay__CBrightnessOverride_IInspectable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CGraphics__CDisplay__CBrightnessOverride_IInspectable_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CGraphics__CDisplay__CBrightnessOverride_IInspectable_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CGraphics__CDisplay__CDisplayInformation_IInspectable_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CGraphics__CDisplay__CDisplayInformation_IInspectable_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CGraphics__CDisplay__CDisplayInformation_IInspectable __FITypedEventHandler_2_Windows__CGraphics__CDisplay__CDisplayInformation_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CGraphics__CDisplay__CDisplayInformation_IInspectable;

typedef struct __FITypedEventHandler_2_Windows__CGraphics__CDisplay__CDisplayInformation_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CGraphics__CDisplay__CDisplayInformation_IInspectable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CGraphics__CDisplay__CDisplayInformation_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CGraphics__CDisplay__CDisplayInformation_IInspectable * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CGraphics__CDisplay__CDisplayInformation_IInspectable * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation * sender,/* [in] */ __RPC__in_opt IInspectable * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CGraphics__CDisplay__CDisplayInformation_IInspectableVtbl;

interface __FITypedEventHandler_2_Windows__CGraphics__CDisplay__CDisplayInformation_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CGraphics__CDisplay__CDisplayInformation_IInspectableVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CGraphics__CDisplay__CDisplayInformation_IInspectable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CGraphics__CDisplay__CDisplayInformation_IInspectable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CGraphics__CDisplay__CDisplayInformation_IInspectable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CGraphics__CDisplay__CDisplayInformation_IInspectable_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CGraphics__CDisplay__CDisplayInformation_IInspectable_INTERFACE_DEFINED__

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


#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream;

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream_FWD_DEFINED__


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStream_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStream_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStream __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStream;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStream;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStream * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStream * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStream * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStream * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStream
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStream_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStream_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStream_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStream_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStream_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream;

typedef struct __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStream *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStream **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamVtbl;

interface __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#if !defined(____FIReference_1_double_INTERFACE_DEFINED__)
#define ____FIReference_1_double_INTERFACE_DEFINED__

typedef interface __FIReference_1_double __FIReference_1_double;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIReference_1_double;

typedef struct __FIReference_1_doubleVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_double * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_double * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_double * This );

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_double * This, 
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_double * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_double * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_double * This, /* [retval][out] */ __RPC__out double *value);
    END_INTERFACE
} __FIReference_1_doubleVtbl;

interface __FIReference_1_double
{
    CONST_VTBL struct __FIReference_1_doubleVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIReference_1_double_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIReference_1_double_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIReference_1_double_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIReference_1_double_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIReference_1_double_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIReference_1_double_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIReference_1_double_get_Value(This,value)	\
    ( (This)->lpVtbl -> get_Value(This,value) ) 
#endif /* COBJMACROS */


#endif // ____FIReference_1_double_INTERFACE_DEFINED__











typedef enum __x_ABI_CWindows_CGraphics_CDisplay_CDisplayBrightnessOverrideOptions __x_ABI_CWindows_CGraphics_CDisplay_CDisplayBrightnessOverrideOptions;


typedef enum __x_ABI_CWindows_CGraphics_CDisplay_CDisplayBrightnessScenario __x_ABI_CWindows_CGraphics_CDisplay_CDisplayBrightnessScenario;


typedef enum __x_ABI_CWindows_CGraphics_CDisplay_CDisplayOrientations __x_ABI_CWindows_CGraphics_CDisplay_CDisplayOrientations;


typedef enum __x_ABI_CWindows_CGraphics_CDisplay_CResolutionScale __x_ABI_CWindows_CGraphics_CDisplay_CResolutionScale;





















/*
 *
 * Struct Windows.Graphics.Display.DisplayBrightnessOverrideOptions
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
/* [v1_enum, flags, contract] */
enum __x_ABI_CWindows_CGraphics_CDisplay_CDisplayBrightnessOverrideOptions
{
    DisplayBrightnessOverrideOptions_None = 0,
    DisplayBrightnessOverrideOptions_UseDimmedPolicyWhenBatteryIsLow = 0x1,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Struct Windows.Graphics.Display.DisplayBrightnessScenario
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CGraphics_CDisplay_CDisplayBrightnessScenario
{
    DisplayBrightnessScenario_DefaultBrightness = 0,
    DisplayBrightnessScenario_IdleBrightness = 1,
    DisplayBrightnessScenario_BarcodeReadingBrightness = 2,
    DisplayBrightnessScenario_FullBrightness = 3,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Struct Windows.Graphics.Display.DisplayOrientations
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, flags, contract] */
enum __x_ABI_CWindows_CGraphics_CDisplay_CDisplayOrientations
{
    DisplayOrientations_None = 0,
    DisplayOrientations_Landscape = 0x1,
    DisplayOrientations_Portrait = 0x2,
    DisplayOrientations_LandscapeFlipped = 0x4,
    DisplayOrientations_PortraitFlipped = 0x8,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Graphics.Display.ResolutionScale
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CGraphics_CDisplay_CResolutionScale
{
    ResolutionScale_Invalid = 0,
    ResolutionScale_Scale100Percent = 100,
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
    ResolutionScale_Scale120Percent = 120,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
    ResolutionScale_Scale125Percent = 125,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
    ResolutionScale_Scale140Percent = 140,
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
    ResolutionScale_Scale150Percent = 150,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
    ResolutionScale_Scale160Percent = 160,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
    ResolutionScale_Scale175Percent = 175,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
    ResolutionScale_Scale180Percent = 180,
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
    ResolutionScale_Scale200Percent = 200,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
    ResolutionScale_Scale225Percent = 225,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
    ResolutionScale_Scale250Percent = 250,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
    ResolutionScale_Scale300Percent = 300,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
    ResolutionScale_Scale350Percent = 350,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
    ResolutionScale_Scale400Percent = 400,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
    ResolutionScale_Scale450Percent = 450,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
    ResolutionScale_Scale500Percent = 500,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Delegate Windows.Graphics.Display.DisplayPropertiesEventHandler
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGraphics_CDisplay_CIDisplayPropertiesEventHandler_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CDisplay_CIDisplayPropertiesEventHandler_INTERFACE_DEFINED__
/* [object, uuid("DBDD8B01-F1A1-46D1-9EE3-543BCC995980"), deprecated, contract] */
typedef struct 
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
DEPRECATED("DisplayProperties may be altered or unavailable for releases after Windows Phone 8.1. Instead, use DisplayInformation.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
__x_ABI_CWindows_CGraphics_CDisplay_CIDisplayPropertiesEventHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayPropertiesEventHandler * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject);

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayPropertiesEventHandler * This);

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayPropertiesEventHandler * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayPropertiesEventHandler * This,
        /* [in] */__RPC__in_opt IInspectable * sender
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayPropertiesEventHandlerVtbl;

interface __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayPropertiesEventHandler
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayPropertiesEventHandlerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayPropertiesEventHandler_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayPropertiesEventHandler_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayPropertiesEventHandler_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayPropertiesEventHandler_Invoke(This,sender) \
    ( (This)->lpVtbl->Invoke(This,sender) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CDisplay_CIDisplayPropertiesEventHandler;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CDisplay_CIDisplayPropertiesEventHandler_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Graphics.Display.IBrightnessOverride
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Graphics.Display.BrightnessOverride
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverride_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverride_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Display_IBrightnessOverride[] = L"Windows.Graphics.Display.IBrightnessOverride";
/* [object, uuid("96C9621A-C143-4392-BEDD-4A7E9574C8FD"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverrideVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverride * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverride * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverride * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverride * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverride * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverride * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsSupported )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverride * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsOverrideActive )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverride * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_BrightnessLevel )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverride * This,
        /* [retval, out] */__RPC__out DOUBLE * level
        );
    HRESULT ( STDMETHODCALLTYPE *SetBrightnessLevel )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverride * This,
        /* [in] */DOUBLE brightnessLevel,
        /* [in] */__x_ABI_CWindows_CGraphics_CDisplay_CDisplayBrightnessOverrideOptions options
        );
    HRESULT ( STDMETHODCALLTYPE *SetBrightnessScenario )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverride * This,
        /* [in] */__x_ABI_CWindows_CGraphics_CDisplay_CDisplayBrightnessScenario scenario,
        /* [in] */__x_ABI_CWindows_CGraphics_CDisplay_CDisplayBrightnessOverrideOptions options
        );
    HRESULT ( STDMETHODCALLTYPE *GetLevelForScenario )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverride * This,
        /* [in] */__x_ABI_CWindows_CGraphics_CDisplay_CDisplayBrightnessScenario scenario,
        /* [retval, out] */__RPC__out DOUBLE * brightnessLevel
        );
    HRESULT ( STDMETHODCALLTYPE *StartOverride )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverride * This
        );
    HRESULT ( STDMETHODCALLTYPE *StopOverride )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverride * This
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_IsSupportedChanged )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverride * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CGraphics__CDisplay__CBrightnessOverride_IInspectable * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_IsSupportedChanged )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverride * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_IsOverrideActiveChanged )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverride * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CGraphics__CDisplay__CBrightnessOverride_IInspectable * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_IsOverrideActiveChanged )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverride * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_BrightnessLevelChanged )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverride * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CGraphics__CDisplay__CBrightnessOverride_IInspectable * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_BrightnessLevelChanged )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverride * This,
        /* [in] */EventRegistrationToken token
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverrideVtbl;

interface __x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverride
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverrideVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverride_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverride_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverride_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverride_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverride_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverride_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverride_get_IsSupported(This,value) \
    ( (This)->lpVtbl->get_IsSupported(This,value) )

#define __x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverride_get_IsOverrideActive(This,value) \
    ( (This)->lpVtbl->get_IsOverrideActive(This,value) )

#define __x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverride_get_BrightnessLevel(This,level) \
    ( (This)->lpVtbl->get_BrightnessLevel(This,level) )

#define __x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverride_SetBrightnessLevel(This,brightnessLevel,options) \
    ( (This)->lpVtbl->SetBrightnessLevel(This,brightnessLevel,options) )

#define __x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverride_SetBrightnessScenario(This,scenario,options) \
    ( (This)->lpVtbl->SetBrightnessScenario(This,scenario,options) )

#define __x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverride_GetLevelForScenario(This,scenario,brightnessLevel) \
    ( (This)->lpVtbl->GetLevelForScenario(This,scenario,brightnessLevel) )

#define __x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverride_StartOverride(This) \
    ( (This)->lpVtbl->StartOverride(This) )

#define __x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverride_StopOverride(This) \
    ( (This)->lpVtbl->StopOverride(This) )

#define __x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverride_add_IsSupportedChanged(This,handler,token) \
    ( (This)->lpVtbl->add_IsSupportedChanged(This,handler,token) )

#define __x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverride_remove_IsSupportedChanged(This,token) \
    ( (This)->lpVtbl->remove_IsSupportedChanged(This,token) )

#define __x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverride_add_IsOverrideActiveChanged(This,handler,token) \
    ( (This)->lpVtbl->add_IsOverrideActiveChanged(This,handler,token) )

#define __x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverride_remove_IsOverrideActiveChanged(This,token) \
    ( (This)->lpVtbl->remove_IsOverrideActiveChanged(This,token) )

#define __x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverride_add_BrightnessLevelChanged(This,handler,token) \
    ( (This)->lpVtbl->add_BrightnessLevelChanged(This,handler,token) )

#define __x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverride_remove_BrightnessLevelChanged(This,token) \
    ( (This)->lpVtbl->remove_BrightnessLevelChanged(This,token) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverride;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverride_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Graphics.Display.IBrightnessOverrideStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Graphics.Display.BrightnessOverride
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverrideStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverrideStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Display_IBrightnessOverrideStatics[] = L"Windows.Graphics.Display.IBrightnessOverrideStatics";
/* [object, uuid("03A7B9ED-E1F1-4A68-A11F-946AD8CE5393"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverrideStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverrideStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverrideStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverrideStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverrideStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverrideStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverrideStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetDefaultForSystem )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverrideStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverride * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetForCurrentView )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverrideStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverride * * value
        );
    HRESULT ( STDMETHODCALLTYPE *SaveForSystemAsync )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverrideStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverride * value,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverrideStaticsVtbl;

interface __x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverrideStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverrideStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverrideStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverrideStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverrideStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverrideStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverrideStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverrideStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverrideStatics_GetDefaultForSystem(This,value) \
    ( (This)->lpVtbl->GetDefaultForSystem(This,value) )

#define __x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverrideStatics_GetForCurrentView(This,value) \
    ( (This)->lpVtbl->GetForCurrentView(This,value) )

#define __x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverrideStatics_SaveForSystemAsync(This,value,operation) \
    ( (This)->lpVtbl->SaveForSystemAsync(This,value,operation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverrideStatics;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CDisplay_CIBrightnessOverrideStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Graphics.Display.IDisplayInformation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Graphics.Display.DisplayInformation
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Display_IDisplayInformation[] = L"Windows.Graphics.Display.IDisplayInformation";
/* [object, uuid("BED112AE-ADC3-4DC9-AE65-851F4D7D4799"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CurrentOrientation )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CGraphics_CDisplay_CDisplayOrientations * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_NativeOrientation )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CGraphics_CDisplay_CDisplayOrientations * value
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_OrientationChanged )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CGraphics__CDisplay__CDisplayInformation_IInspectable * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_OrientationChanged )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation * This,
        /* [in] */EventRegistrationToken token
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ResolutionScale )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CGraphics_CDisplay_CResolutionScale * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LogicalDpi )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation * This,
        /* [retval, out] */__RPC__out FLOAT * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RawDpiX )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation * This,
        /* [retval, out] */__RPC__out FLOAT * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RawDpiY )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation * This,
        /* [retval, out] */__RPC__out FLOAT * value
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_DpiChanged )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CGraphics__CDisplay__CDisplayInformation_IInspectable * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_DpiChanged )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation * This,
        /* [in] */EventRegistrationToken token
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_StereoEnabled )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_StereoEnabledChanged )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CGraphics__CDisplay__CDisplayInformation_IInspectable * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_StereoEnabledChanged )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation * This,
        /* [in] */EventRegistrationToken token
        );
    HRESULT ( STDMETHODCALLTYPE *GetColorProfileAsync )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream * * asyncInfo
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_ColorProfileChanged )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CGraphics__CDisplay__CDisplayInformation_IInspectable * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_ColorProfileChanged )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation * This,
        /* [in] */EventRegistrationToken token
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformationVtbl;

interface __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformationVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation_get_CurrentOrientation(This,value) \
    ( (This)->lpVtbl->get_CurrentOrientation(This,value) )

#define __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation_get_NativeOrientation(This,value) \
    ( (This)->lpVtbl->get_NativeOrientation(This,value) )

#define __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation_add_OrientationChanged(This,handler,token) \
    ( (This)->lpVtbl->add_OrientationChanged(This,handler,token) )

#define __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation_remove_OrientationChanged(This,token) \
    ( (This)->lpVtbl->remove_OrientationChanged(This,token) )

#define __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation_get_ResolutionScale(This,value) \
    ( (This)->lpVtbl->get_ResolutionScale(This,value) )

#define __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation_get_LogicalDpi(This,value) \
    ( (This)->lpVtbl->get_LogicalDpi(This,value) )

#define __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation_get_RawDpiX(This,value) \
    ( (This)->lpVtbl->get_RawDpiX(This,value) )

#define __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation_get_RawDpiY(This,value) \
    ( (This)->lpVtbl->get_RawDpiY(This,value) )

#define __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation_add_DpiChanged(This,handler,token) \
    ( (This)->lpVtbl->add_DpiChanged(This,handler,token) )

#define __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation_remove_DpiChanged(This,token) \
    ( (This)->lpVtbl->remove_DpiChanged(This,token) )

#define __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation_get_StereoEnabled(This,value) \
    ( (This)->lpVtbl->get_StereoEnabled(This,value) )

#define __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation_add_StereoEnabledChanged(This,handler,token) \
    ( (This)->lpVtbl->add_StereoEnabledChanged(This,handler,token) )

#define __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation_remove_StereoEnabledChanged(This,token) \
    ( (This)->lpVtbl->remove_StereoEnabledChanged(This,token) )

#define __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation_GetColorProfileAsync(This,asyncInfo) \
    ( (This)->lpVtbl->GetColorProfileAsync(This,asyncInfo) )

#define __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation_add_ColorProfileChanged(This,handler,token) \
    ( (This)->lpVtbl->add_ColorProfileChanged(This,handler,token) )

#define __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation_remove_ColorProfileChanged(This,token) \
    ( (This)->lpVtbl->remove_ColorProfileChanged(This,token) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Graphics.Display.IDisplayInformation2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Graphics.Display.DisplayInformation
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Graphics.Display.IDisplayInformation
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Display_IDisplayInformation2[] = L"Windows.Graphics.Display.IDisplayInformation2";
/* [object, uuid("4DCD0021-FAD1-4B8E-8EDF-775887B8BF19"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RawPixelsPerViewPixel )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation2 * This,
        /* [retval, out] */__RPC__out DOUBLE * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation2Vtbl;

interface __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation2
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation2_get_RawPixelsPerViewPixel(This,value) \
    ( (This)->lpVtbl->get_RawPixelsPerViewPixel(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation2;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Graphics.Display.IDisplayInformation3
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.Graphics.Display.DisplayInformation
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Display_IDisplayInformation3[] = L"Windows.Graphics.Display.IDisplayInformation3";
/* [object, uuid("DB15011D-0F09-4466-8FF3-11DE9A3C929A"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation3 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation3 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation3 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation3 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation3 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation3 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DiagonalSizeInInches )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation3 * This,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_double * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation3Vtbl;

interface __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation3
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation3Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation3_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation3_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation3_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation3_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation3_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation3_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation3_get_DiagonalSizeInInches(This,value) \
    ( (This)->lpVtbl->get_DiagonalSizeInInches(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation3;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation3_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Graphics.Display.IDisplayInformation4
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Graphics.Display.DisplayInformation
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation4_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation4_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Display_IDisplayInformation4[] = L"Windows.Graphics.Display.IDisplayInformation4";
/* [object, uuid("C972CE2F-1242-46BE-B536-E1AAFE9E7ACF"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation4Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation4 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation4 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation4 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation4 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation4 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation4 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ScreenWidthInRawPixels )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation4 * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ScreenHeightInRawPixels )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation4 * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation4Vtbl;

interface __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation4
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation4Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation4_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation4_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation4_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation4_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation4_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation4_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation4_get_ScreenWidthInRawPixels(This,value) \
    ( (This)->lpVtbl->get_ScreenWidthInRawPixels(This,value) )

#define __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation4_get_ScreenHeightInRawPixels(This,value) \
    ( (This)->lpVtbl->get_ScreenHeightInRawPixels(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation4;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation4_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Graphics.Display.IDisplayInformationStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Graphics.Display.DisplayInformation
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformationStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformationStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Display_IDisplayInformationStatics[] = L"Windows.Graphics.Display.IDisplayInformationStatics";
/* [object, uuid("C6A02A6C-D452-44DC-BA07-96F3C6ADF9D1"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformationStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformationStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformationStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformationStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformationStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformationStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformationStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetForCurrentView )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformationStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformation * * current
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AutoRotationPreferences )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformationStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CGraphics_CDisplay_CDisplayOrientations * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_AutoRotationPreferences )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformationStatics * This,
        /* [in] */__x_ABI_CWindows_CGraphics_CDisplay_CDisplayOrientations value
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_DisplayContentsInvalidated )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformationStatics * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CGraphics__CDisplay__CDisplayInformation_IInspectable * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_DisplayContentsInvalidated )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformationStatics * This,
        /* [in] */EventRegistrationToken token
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformationStaticsVtbl;

interface __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformationStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformationStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformationStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformationStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformationStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformationStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformationStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformationStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformationStatics_GetForCurrentView(This,current) \
    ( (This)->lpVtbl->GetForCurrentView(This,current) )

#define __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformationStatics_get_AutoRotationPreferences(This,value) \
    ( (This)->lpVtbl->get_AutoRotationPreferences(This,value) )

#define __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformationStatics_put_AutoRotationPreferences(This,value) \
    ( (This)->lpVtbl->put_AutoRotationPreferences(This,value) )

#define __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformationStatics_add_DisplayContentsInvalidated(This,handler,token) \
    ( (This)->lpVtbl->add_DisplayContentsInvalidated(This,handler,token) )

#define __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformationStatics_remove_DisplayContentsInvalidated(This,token) \
    ( (This)->lpVtbl->remove_DisplayContentsInvalidated(This,token) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformationStatics;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CDisplay_CIDisplayInformationStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Graphics.Display.IDisplayPropertiesStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Graphics.Display.DisplayProperties
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGraphics_CDisplay_CIDisplayPropertiesStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CDisplay_CIDisplayPropertiesStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Display_IDisplayPropertiesStatics[] = L"Windows.Graphics.Display.IDisplayPropertiesStatics";
/* [object, uuid("6937ED8D-30EA-4DED-8271-4553FF02F68A"), exclusiveto, deprecated, contract] */
typedef struct 
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
DEPRECATED("DisplayProperties may be altered or unavailable for releases after Windows Phone 8.1. Instead, use DisplayInformation.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
__x_ABI_CWindows_CGraphics_CDisplay_CIDisplayPropertiesStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayPropertiesStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayPropertiesStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayPropertiesStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayPropertiesStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayPropertiesStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayPropertiesStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );

    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    DEPRECATED("DisplayProperties may be altered or unavailable for releases after Windows Phone 8.1. Instead, use DisplayInformation.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    /* [propget, deprecated] */HRESULT ( STDMETHODCALLTYPE *get_CurrentOrientation )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayPropertiesStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CGraphics_CDisplay_CDisplayOrientations * value
        );
    
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    DEPRECATED("DisplayProperties may be altered or unavailable for releases after Windows Phone 8.1. Instead, use DisplayInformation.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    /* [propget, deprecated] */HRESULT ( STDMETHODCALLTYPE *get_NativeOrientation )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayPropertiesStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CGraphics_CDisplay_CDisplayOrientations * value
        );
    
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    DEPRECATED("DisplayProperties may be altered or unavailable for releases after Windows Phone 8.1. Instead, use DisplayInformation.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    /* [propget, deprecated] */HRESULT ( STDMETHODCALLTYPE *get_AutoRotationPreferences )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayPropertiesStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CGraphics_CDisplay_CDisplayOrientations * value
        );
    
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    DEPRECATED("DisplayProperties may be altered or unavailable for releases after Windows Phone 8.1. Instead, use DisplayInformation.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    /* [propput, deprecated] */HRESULT ( STDMETHODCALLTYPE *put_AutoRotationPreferences )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayPropertiesStatics * This,
        /* [in] */__x_ABI_CWindows_CGraphics_CDisplay_CDisplayOrientations value
        );
    
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    DEPRECATED("DisplayProperties may be altered or unavailable for releases after Windows Phone 8.1. Instead, use DisplayInformation.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    /* [eventadd, deprecated] */HRESULT ( STDMETHODCALLTYPE *add_OrientationChanged )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayPropertiesStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayPropertiesEventHandler  * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    DEPRECATED("DisplayProperties may be altered or unavailable for releases after Windows Phone 8.1. Instead, use DisplayInformation.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    /* [eventremove, deprecated] */HRESULT ( STDMETHODCALLTYPE *remove_OrientationChanged )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayPropertiesStatics * This,
        /* [in] */EventRegistrationToken token
        );
    
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    DEPRECATED("DisplayProperties may be altered or unavailable for releases after Windows Phone 8.1. Instead, use DisplayInformation.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    /* [propget, deprecated] */HRESULT ( STDMETHODCALLTYPE *get_ResolutionScale )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayPropertiesStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CGraphics_CDisplay_CResolutionScale * value
        );
    
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    DEPRECATED("DisplayProperties may be altered or unavailable for releases after Windows Phone 8.1. Instead, use DisplayInformation.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    /* [propget, deprecated] */HRESULT ( STDMETHODCALLTYPE *get_LogicalDpi )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayPropertiesStatics * This,
        /* [retval, out] */__RPC__out FLOAT * value
        );
    
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    DEPRECATED("DisplayProperties may be altered or unavailable for releases after Windows Phone 8.1. Instead, use DisplayInformation.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    /* [eventadd, deprecated] */HRESULT ( STDMETHODCALLTYPE *add_LogicalDpiChanged )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayPropertiesStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayPropertiesEventHandler  * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    DEPRECATED("DisplayProperties may be altered or unavailable for releases after Windows Phone 8.1. Instead, use DisplayInformation.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    /* [eventremove, deprecated] */HRESULT ( STDMETHODCALLTYPE *remove_LogicalDpiChanged )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayPropertiesStatics * This,
        /* [in] */EventRegistrationToken token
        );
    
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    DEPRECATED("DisplayProperties may be altered or unavailable for releases after Windows Phone 8.1. Instead, use DisplayInformation.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    /* [propget, deprecated] */HRESULT ( STDMETHODCALLTYPE *get_StereoEnabled )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayPropertiesStatics * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    DEPRECATED("DisplayProperties may be altered or unavailable for releases after Windows Phone 8.1. Instead, use DisplayInformation.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    /* [eventadd, deprecated] */HRESULT ( STDMETHODCALLTYPE *add_StereoEnabledChanged )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayPropertiesStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayPropertiesEventHandler  * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    DEPRECATED("DisplayProperties may be altered or unavailable for releases after Windows Phone 8.1. Instead, use DisplayInformation.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    /* [eventremove, deprecated] */HRESULT ( STDMETHODCALLTYPE *remove_StereoEnabledChanged )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayPropertiesStatics * This,
        /* [in] */EventRegistrationToken token
        );
    
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    DEPRECATED("DisplayProperties may be altered or unavailable for releases after Windows Phone 8.1. Instead, use DisplayInformation.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    /* [deprecated] */HRESULT ( STDMETHODCALLTYPE *GetColorProfileAsync )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayPropertiesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream * * asyncInfo
        );
    
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    DEPRECATED("DisplayProperties may be altered or unavailable for releases after Windows Phone 8.1. Instead, use DisplayInformation.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    /* [eventadd, deprecated] */HRESULT ( STDMETHODCALLTYPE *add_ColorProfileChanged )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayPropertiesStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayPropertiesEventHandler  * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    DEPRECATED("DisplayProperties may be altered or unavailable for releases after Windows Phone 8.1. Instead, use DisplayInformation.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    /* [eventremove, deprecated] */HRESULT ( STDMETHODCALLTYPE *remove_ColorProfileChanged )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayPropertiesStatics * This,
        /* [in] */EventRegistrationToken token
        );
    
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    DEPRECATED("DisplayProperties may be altered or unavailable for releases after Windows Phone 8.1. Instead, use DisplayInformation.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    /* [eventadd, deprecated] */HRESULT ( STDMETHODCALLTYPE *add_DisplayContentsInvalidated )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayPropertiesStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayPropertiesEventHandler  * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    DEPRECATED("DisplayProperties may be altered or unavailable for releases after Windows Phone 8.1. Instead, use DisplayInformation.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    /* [eventremove, deprecated] */HRESULT ( STDMETHODCALLTYPE *remove_DisplayContentsInvalidated )(
        __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayPropertiesStatics * This,
        /* [in] */EventRegistrationToken token
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayPropertiesStaticsVtbl;

interface __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayPropertiesStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayPropertiesStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayPropertiesStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayPropertiesStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayPropertiesStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayPropertiesStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayPropertiesStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayPropertiesStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
DEPRECATED("DisplayProperties may be altered or unavailable for releases after Windows Phone 8.1. Instead, use DisplayInformation.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#define __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayPropertiesStatics_get_CurrentOrientation(This,value) \
    ( (This)->lpVtbl->get_CurrentOrientation(This,value) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
DEPRECATED("DisplayProperties may be altered or unavailable for releases after Windows Phone 8.1. Instead, use DisplayInformation.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#define __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayPropertiesStatics_get_NativeOrientation(This,value) \
    ( (This)->lpVtbl->get_NativeOrientation(This,value) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
DEPRECATED("DisplayProperties may be altered or unavailable for releases after Windows Phone 8.1. Instead, use DisplayInformation.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#define __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayPropertiesStatics_get_AutoRotationPreferences(This,value) \
    ( (This)->lpVtbl->get_AutoRotationPreferences(This,value) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
DEPRECATED("DisplayProperties may be altered or unavailable for releases after Windows Phone 8.1. Instead, use DisplayInformation.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#define __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayPropertiesStatics_put_AutoRotationPreferences(This,value) \
    ( (This)->lpVtbl->put_AutoRotationPreferences(This,value) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
DEPRECATED("DisplayProperties may be altered or unavailable for releases after Windows Phone 8.1. Instead, use DisplayInformation.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#define __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayPropertiesStatics_add_OrientationChanged(This,handler,token) \
    ( (This)->lpVtbl->add_OrientationChanged(This,handler,token) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
DEPRECATED("DisplayProperties may be altered or unavailable for releases after Windows Phone 8.1. Instead, use DisplayInformation.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#define __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayPropertiesStatics_remove_OrientationChanged(This,token) \
    ( (This)->lpVtbl->remove_OrientationChanged(This,token) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
DEPRECATED("DisplayProperties may be altered or unavailable for releases after Windows Phone 8.1. Instead, use DisplayInformation.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#define __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayPropertiesStatics_get_ResolutionScale(This,value) \
    ( (This)->lpVtbl->get_ResolutionScale(This,value) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
DEPRECATED("DisplayProperties may be altered or unavailable for releases after Windows Phone 8.1. Instead, use DisplayInformation.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#define __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayPropertiesStatics_get_LogicalDpi(This,value) \
    ( (This)->lpVtbl->get_LogicalDpi(This,value) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
DEPRECATED("DisplayProperties may be altered or unavailable for releases after Windows Phone 8.1. Instead, use DisplayInformation.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#define __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayPropertiesStatics_add_LogicalDpiChanged(This,handler,token) \
    ( (This)->lpVtbl->add_LogicalDpiChanged(This,handler,token) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
DEPRECATED("DisplayProperties may be altered or unavailable for releases after Windows Phone 8.1. Instead, use DisplayInformation.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#define __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayPropertiesStatics_remove_LogicalDpiChanged(This,token) \
    ( (This)->lpVtbl->remove_LogicalDpiChanged(This,token) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
DEPRECATED("DisplayProperties may be altered or unavailable for releases after Windows Phone 8.1. Instead, use DisplayInformation.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#define __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayPropertiesStatics_get_StereoEnabled(This,value) \
    ( (This)->lpVtbl->get_StereoEnabled(This,value) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
DEPRECATED("DisplayProperties may be altered or unavailable for releases after Windows Phone 8.1. Instead, use DisplayInformation.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#define __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayPropertiesStatics_add_StereoEnabledChanged(This,handler,token) \
    ( (This)->lpVtbl->add_StereoEnabledChanged(This,handler,token) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
DEPRECATED("DisplayProperties may be altered or unavailable for releases after Windows Phone 8.1. Instead, use DisplayInformation.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#define __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayPropertiesStatics_remove_StereoEnabledChanged(This,token) \
    ( (This)->lpVtbl->remove_StereoEnabledChanged(This,token) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
DEPRECATED("DisplayProperties may be altered or unavailable for releases after Windows Phone 8.1. Instead, use DisplayInformation.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#define __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayPropertiesStatics_GetColorProfileAsync(This,asyncInfo) \
    ( (This)->lpVtbl->GetColorProfileAsync(This,asyncInfo) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
DEPRECATED("DisplayProperties may be altered or unavailable for releases after Windows Phone 8.1. Instead, use DisplayInformation.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#define __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayPropertiesStatics_add_ColorProfileChanged(This,handler,token) \
    ( (This)->lpVtbl->add_ColorProfileChanged(This,handler,token) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
DEPRECATED("DisplayProperties may be altered or unavailable for releases after Windows Phone 8.1. Instead, use DisplayInformation.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#define __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayPropertiesStatics_remove_ColorProfileChanged(This,token) \
    ( (This)->lpVtbl->remove_ColorProfileChanged(This,token) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
DEPRECATED("DisplayProperties may be altered or unavailable for releases after Windows Phone 8.1. Instead, use DisplayInformation.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#define __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayPropertiesStatics_add_DisplayContentsInvalidated(This,handler,token) \
    ( (This)->lpVtbl->add_DisplayContentsInvalidated(This,handler,token) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
DEPRECATED("DisplayProperties may be altered or unavailable for releases after Windows Phone 8.1. Instead, use DisplayInformation.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#define __x_ABI_CWindows_CGraphics_CDisplay_CIDisplayPropertiesStatics_remove_DisplayContentsInvalidated(This,token) \
    ( (This)->lpVtbl->remove_DisplayContentsInvalidated(This,token) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CDisplay_CIDisplayPropertiesStatics;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CDisplay_CIDisplayPropertiesStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Graphics.Display.BrightnessOverride
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Graphics.Display.IBrightnessOverrideStatics interface starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Graphics.Display.IBrightnessOverride ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_Graphics_Display_BrightnessOverride_DEFINED
#define RUNTIMECLASS_Windows_Graphics_Display_BrightnessOverride_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Display_BrightnessOverride[] = L"Windows.Graphics.Display.BrightnessOverride";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.Graphics.Display.DisplayInformation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Graphics.Display.IDisplayInformationStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Graphics.Display.IDisplayInformation ** Default Interface **
 *    Windows.Graphics.Display.IDisplayInformation2
 *    Windows.Graphics.Display.IDisplayInformation3
 *    Windows.Graphics.Display.IDisplayInformation4
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Graphics_Display_DisplayInformation_DEFINED
#define RUNTIMECLASS_Windows_Graphics_Display_DisplayInformation_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Display_DisplayInformation[] = L"Windows.Graphics.Display.DisplayInformation";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Graphics.Display.DisplayProperties
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Graphics.Display.IDisplayPropertiesStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_Graphics_Display_DisplayProperties_DEFINED
#define RUNTIMECLASS_Windows_Graphics_Display_DisplayProperties_DEFINED

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
DEPRECATED("DisplayProperties may be altered or unavailable for releases after Windows Phone 8.1. Instead, use DisplayInformation.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Display_DisplayProperties[] = L"Windows.Graphics.Display.DisplayProperties";
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
#endif // __windows2Egraphics2Edisplay_p_h__

#endif // __windows2Egraphics2Edisplay_h__
