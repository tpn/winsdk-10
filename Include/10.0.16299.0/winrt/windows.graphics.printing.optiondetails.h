/* Header file automatically generated from windows.graphics.printing.optiondetails.idl */
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
#ifndef __windows2Egraphics2Eprinting2Eoptiondetails_h__
#define __windows2Egraphics2Eprinting2Eoptiondetails_h__
#ifndef __windows2Egraphics2Eprinting2Eoptiondetails_p_h__
#define __windows2Egraphics2Eprinting2Eoptiondetails_p_h__


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
#include "Windows.Graphics.Printing.h"
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomItemDetails_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomItemDetails_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                namespace OptionDetails {
                    interface IPrintCustomItemDetails;
                } /* Windows */
            } /* Graphics */
        } /* Printing */
    } /* OptionDetails */} /* ABI */
#define __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomItemDetails ABI::Windows::Graphics::Printing::OptionDetails::IPrintCustomItemDetails

#endif // ____x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomItemDetails_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomItemListOptionDetails_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomItemListOptionDetails_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                namespace OptionDetails {
                    interface IPrintCustomItemListOptionDetails;
                } /* Windows */
            } /* Graphics */
        } /* Printing */
    } /* OptionDetails */} /* ABI */
#define __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomItemListOptionDetails ABI::Windows::Graphics::Printing::OptionDetails::IPrintCustomItemListOptionDetails

#endif // ____x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomItemListOptionDetails_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomOptionDetails_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomOptionDetails_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                namespace OptionDetails {
                    interface IPrintCustomOptionDetails;
                } /* Windows */
            } /* Graphics */
        } /* Printing */
    } /* OptionDetails */} /* ABI */
#define __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomOptionDetails ABI::Windows::Graphics::Printing::OptionDetails::IPrintCustomOptionDetails

#endif // ____x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomOptionDetails_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomTextOptionDetails_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomTextOptionDetails_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                namespace OptionDetails {
                    interface IPrintCustomTextOptionDetails;
                } /* Windows */
            } /* Graphics */
        } /* Printing */
    } /* OptionDetails */} /* ABI */
#define __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomTextOptionDetails ABI::Windows::Graphics::Printing::OptionDetails::IPrintCustomTextOptionDetails

#endif // ____x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomTextOptionDetails_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintItemListOptionDetails_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintItemListOptionDetails_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                namespace OptionDetails {
                    interface IPrintItemListOptionDetails;
                } /* Windows */
            } /* Graphics */
        } /* Printing */
    } /* OptionDetails */} /* ABI */
#define __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintItemListOptionDetails ABI::Windows::Graphics::Printing::OptionDetails::IPrintItemListOptionDetails

#endif // ____x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintItemListOptionDetails_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintNumberOptionDetails_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintNumberOptionDetails_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                namespace OptionDetails {
                    interface IPrintNumberOptionDetails;
                } /* Windows */
            } /* Graphics */
        } /* Printing */
    } /* OptionDetails */} /* ABI */
#define __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintNumberOptionDetails ABI::Windows::Graphics::Printing::OptionDetails::IPrintNumberOptionDetails

#endif // ____x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintNumberOptionDetails_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintOptionDetails_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintOptionDetails_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                namespace OptionDetails {
                    interface IPrintOptionDetails;
                } /* Windows */
            } /* Graphics */
        } /* Printing */
    } /* OptionDetails */} /* ABI */
#define __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintOptionDetails ABI::Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails

#endif // ____x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintOptionDetails_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionChangedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionChangedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                namespace OptionDetails {
                    interface IPrintTaskOptionChangedEventArgs;
                } /* Windows */
            } /* Graphics */
        } /* Printing */
    } /* OptionDetails */} /* ABI */
#define __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionChangedEventArgs ABI::Windows::Graphics::Printing::OptionDetails::IPrintTaskOptionChangedEventArgs

#endif // ____x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionChangedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionDetails_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionDetails_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                namespace OptionDetails {
                    interface IPrintTaskOptionDetails;
                } /* Windows */
            } /* Graphics */
        } /* Printing */
    } /* OptionDetails */} /* ABI */
#define __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionDetails ABI::Windows::Graphics::Printing::OptionDetails::IPrintTaskOptionDetails

#endif // ____x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionDetails_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionDetailsStatic_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionDetailsStatic_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                namespace OptionDetails {
                    interface IPrintTaskOptionDetailsStatic;
                } /* Windows */
            } /* Graphics */
        } /* Printing */
    } /* OptionDetails */} /* ABI */
#define __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionDetailsStatic ABI::Windows::Graphics::Printing::OptionDetails::IPrintTaskOptionDetailsStatic

#endif // ____x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionDetailsStatic_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTextOptionDetails_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTextOptionDetails_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                namespace OptionDetails {
                    interface IPrintTextOptionDetails;
                } /* Windows */
            } /* Graphics */
        } /* Printing */
    } /* OptionDetails */} /* ABI */
#define __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTextOptionDetails ABI::Windows::Graphics::Printing::OptionDetails::IPrintTextOptionDetails

#endif // ____x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTextOptionDetails_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails_USE
#define DEF___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("f5d9c723-a4b1-5fc8-9f78-0b95b716720b"))
IKeyValuePair<HSTRING,ABI::Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails*> : IKeyValuePair_impl<HSTRING,ABI::Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IKeyValuePair`2<String, Windows.Graphics.Printing.OptionDetails.IPrintOptionDetails>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IKeyValuePair<HSTRING,ABI::Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails*> __FIKeyValuePair_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails_t;
#define __FIKeyValuePair_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails ABI::Windows::Foundation::Collections::__FIKeyValuePair_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIKeyValuePair_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,ABI::Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails*>
//#define __FIKeyValuePair_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails_t ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,ABI::Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails_USE
#define DEF___FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("7bef6011-58a1-5523-8e2a-309f8cb1bd39"))
IIterator<__FIKeyValuePair_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails*> : IIterator_impl<__FIKeyValuePair_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Foundation.Collections.IKeyValuePair`2<String, Windows.Graphics.Printing.OptionDetails.IPrintOptionDetails>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<__FIKeyValuePair_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails*> __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails_t;
#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails ABI::Windows::Foundation::Collections::__FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,ABI::Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails*>*>
//#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,ABI::Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails_USE
#define DEF___FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("6770cf39-094f-59c5-8a5d-e3b5dc64db0f"))
IIterable<__FIKeyValuePair_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails*> : IIterable_impl<__FIKeyValuePair_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Foundation.Collections.IKeyValuePair`2<String, Windows.Graphics.Printing.OptionDetails.IPrintOptionDetails>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<__FIKeyValuePair_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails*> __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails_t;
#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails ABI::Windows::Foundation::Collections::__FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,ABI::Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails*>*>
//#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,ABI::Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIMapView_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails_USE
#define DEF___FIMapView_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("79e5168f-702a-5030-bd44-ef23d8887aed"))
IMapView<HSTRING,ABI::Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails*> : IMapView_impl<HSTRING,ABI::Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IMapView`2<String, Windows.Graphics.Printing.OptionDetails.IPrintOptionDetails>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IMapView<HSTRING,ABI::Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails*> __FIMapView_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails_t;
#define __FIMapView_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails ABI::Windows::Foundation::Collections::__FIMapView_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIMapView_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails ABI::Windows::Foundation::Collections::IMapView<HSTRING,ABI::Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails*>
//#define __FIMapView_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails_t ABI::Windows::Foundation::Collections::IMapView<HSTRING,ABI::Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIMapView_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                namespace OptionDetails {
                    class PrintTaskOptionDetails;
                } /* Windows */
            } /* Graphics */
        } /* Printing */
    } /* OptionDetails */} /* ABI */



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CGraphics__CPrinting__COptionDetails__CPrintTaskOptionDetails_IInspectable_USE
#define DEF___FITypedEventHandler_2_Windows__CGraphics__CPrinting__COptionDetails__CPrintTaskOptionDetails_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("5c88455c-5b59-557c-8064-5e4f3d59a8ec"))
ITypedEventHandler<ABI::Windows::Graphics::Printing::OptionDetails::PrintTaskOptionDetails*,IInspectable*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Graphics::Printing::OptionDetails::PrintTaskOptionDetails*, ABI::Windows::Graphics::Printing::OptionDetails::IPrintTaskOptionDetails*>,IInspectable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.Graphics.Printing.OptionDetails.PrintTaskOptionDetails, Object>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::Graphics::Printing::OptionDetails::PrintTaskOptionDetails*,IInspectable*> __FITypedEventHandler_2_Windows__CGraphics__CPrinting__COptionDetails__CPrintTaskOptionDetails_IInspectable_t;
#define __FITypedEventHandler_2_Windows__CGraphics__CPrinting__COptionDetails__CPrintTaskOptionDetails_IInspectable ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CGraphics__CPrinting__COptionDetails__CPrintTaskOptionDetails_IInspectable_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CGraphics__CPrinting__COptionDetails__CPrintTaskOptionDetails_IInspectable ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Graphics::Printing::OptionDetails::IPrintTaskOptionDetails*,IInspectable*>
//#define __FITypedEventHandler_2_Windows__CGraphics__CPrinting__COptionDetails__CPrintTaskOptionDetails_IInspectable_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Graphics::Printing::OptionDetails::IPrintTaskOptionDetails*,IInspectable*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CGraphics__CPrinting__COptionDetails__CPrintTaskOptionDetails_IInspectable_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                namespace OptionDetails {
                    class PrintTaskOptionChangedEventArgs;
                } /* Windows */
            } /* Graphics */
        } /* Printing */
    } /* OptionDetails */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CGraphics__CPrinting__COptionDetails__CPrintTaskOptionDetails_Windows__CGraphics__CPrinting__COptionDetails__CPrintTaskOptionChangedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CGraphics__CPrinting__COptionDetails__CPrintTaskOptionDetails_Windows__CGraphics__CPrinting__COptionDetails__CPrintTaskOptionChangedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("1b1f456b-8821-592e-b4a7-9b4c3712518e"))
ITypedEventHandler<ABI::Windows::Graphics::Printing::OptionDetails::PrintTaskOptionDetails*,ABI::Windows::Graphics::Printing::OptionDetails::PrintTaskOptionChangedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Graphics::Printing::OptionDetails::PrintTaskOptionDetails*, ABI::Windows::Graphics::Printing::OptionDetails::IPrintTaskOptionDetails*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Graphics::Printing::OptionDetails::PrintTaskOptionChangedEventArgs*, ABI::Windows::Graphics::Printing::OptionDetails::IPrintTaskOptionChangedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.Graphics.Printing.OptionDetails.PrintTaskOptionDetails, Windows.Graphics.Printing.OptionDetails.PrintTaskOptionChangedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::Graphics::Printing::OptionDetails::PrintTaskOptionDetails*,ABI::Windows::Graphics::Printing::OptionDetails::PrintTaskOptionChangedEventArgs*> __FITypedEventHandler_2_Windows__CGraphics__CPrinting__COptionDetails__CPrintTaskOptionDetails_Windows__CGraphics__CPrinting__COptionDetails__CPrintTaskOptionChangedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CGraphics__CPrinting__COptionDetails__CPrintTaskOptionDetails_Windows__CGraphics__CPrinting__COptionDetails__CPrintTaskOptionChangedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CGraphics__CPrinting__COptionDetails__CPrintTaskOptionDetails_Windows__CGraphics__CPrinting__COptionDetails__CPrintTaskOptionChangedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CGraphics__CPrinting__COptionDetails__CPrintTaskOptionDetails_Windows__CGraphics__CPrinting__COptionDetails__CPrintTaskOptionChangedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Graphics::Printing::OptionDetails::IPrintTaskOptionDetails*,ABI::Windows::Graphics::Printing::OptionDetails::IPrintTaskOptionChangedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CGraphics__CPrinting__COptionDetails__CPrintTaskOptionDetails_Windows__CGraphics__CPrinting__COptionDetails__CPrintTaskOptionChangedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Graphics::Printing::OptionDetails::IPrintTaskOptionDetails*,ABI::Windows::Graphics::Printing::OptionDetails::IPrintTaskOptionChangedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CGraphics__CPrinting__COptionDetails__CPrintTaskOptionDetails_Windows__CGraphics__CPrinting__COptionDetails__CPrintTaskOptionChangedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#ifndef DEF___FIIterator_1_IInspectable_USE
#define DEF___FIIterator_1_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("44a94f2d-04f8-5091-b336-be7892dd10be"))
IIterator<IInspectable*> : IIterator_impl<IInspectable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Object>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<IInspectable*> __FIIterator_1_IInspectable_t;
#define __FIIterator_1_IInspectable ABI::Windows::Foundation::Collections::__FIIterator_1_IInspectable_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_IInspectable ABI::Windows::Foundation::Collections::IIterator<IInspectable*>
//#define __FIIterator_1_IInspectable_t ABI::Windows::Foundation::Collections::IIterator<IInspectable*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_IInspectable_USE */





#ifndef DEF___FIIterable_1_IInspectable_USE
#define DEF___FIIterable_1_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("092b849b-60b1-52be-a44a-6fe8e933cbe4"))
IIterable<IInspectable*> : IIterable_impl<IInspectable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Object>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<IInspectable*> __FIIterable_1_IInspectable_t;
#define __FIIterable_1_IInspectable ABI::Windows::Foundation::Collections::__FIIterable_1_IInspectable_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_IInspectable ABI::Windows::Foundation::Collections::IIterable<IInspectable*>
//#define __FIIterable_1_IInspectable_t ABI::Windows::Foundation::Collections::IIterable<IInspectable*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_IInspectable_USE */





#ifndef DEF___FIVectorView_1_IInspectable_USE
#define DEF___FIVectorView_1_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("a6487363-b074-5c60-ab16-866dce4ee54d"))
IVectorView<IInspectable*> : IVectorView_impl<IInspectable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Object>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<IInspectable*> __FIVectorView_1_IInspectable_t;
#define __FIVectorView_1_IInspectable ABI::Windows::Foundation::Collections::__FIVectorView_1_IInspectable_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_IInspectable ABI::Windows::Foundation::Collections::IVectorView<IInspectable*>
//#define __FIVectorView_1_IInspectable_t ABI::Windows::Foundation::Collections::IVectorView<IInspectable*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_IInspectable_USE */








#ifndef ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCore_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCore_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                interface IPrintTaskOptionsCore;
            } /* Windows */
        } /* Graphics */
    } /* Printing */} /* ABI */
#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCore ABI::Windows::Graphics::Printing::IPrintTaskOptionsCore

#endif // ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCore_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreUIConfiguration_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreUIConfiguration_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                interface IPrintTaskOptionsCoreUIConfiguration;
            } /* Windows */
        } /* Graphics */
    } /* Printing */} /* ABI */
#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreUIConfiguration ABI::Windows::Graphics::Printing::IPrintTaskOptionsCoreUIConfiguration

#endif // ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreUIConfiguration_FWD_DEFINED__


namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                class PrintTaskOptions;
            } /* Windows */
        } /* Graphics */
    } /* Printing */} /* ABI */





namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                namespace OptionDetails {
                    
                    typedef enum PrintOptionStates : unsigned int PrintOptionStates;
                    
                } /* Windows */
            } /* Graphics */
        } /* Printing */
    } /* OptionDetails */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                namespace OptionDetails {
                    
                    typedef enum PrintOptionType : int PrintOptionType;
                    
                } /* Windows */
            } /* Graphics */
        } /* Printing */
    } /* OptionDetails */} /* ABI */












namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                namespace OptionDetails {
                    class PrintBindingOptionDetails;
                } /* Windows */
            } /* Graphics */
        } /* Printing */
    } /* OptionDetails */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                namespace OptionDetails {
                    class PrintBorderingOptionDetails;
                } /* Windows */
            } /* Graphics */
        } /* Printing */
    } /* OptionDetails */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                namespace OptionDetails {
                    class PrintCollationOptionDetails;
                } /* Windows */
            } /* Graphics */
        } /* Printing */
    } /* OptionDetails */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                namespace OptionDetails {
                    class PrintColorModeOptionDetails;
                } /* Windows */
            } /* Graphics */
        } /* Printing */
    } /* OptionDetails */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                namespace OptionDetails {
                    class PrintCopiesOptionDetails;
                } /* Windows */
            } /* Graphics */
        } /* Printing */
    } /* OptionDetails */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                namespace OptionDetails {
                    class PrintCustomItemDetails;
                } /* Windows */
            } /* Graphics */
        } /* Printing */
    } /* OptionDetails */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                namespace OptionDetails {
                    class PrintCustomItemListOptionDetails;
                } /* Windows */
            } /* Graphics */
        } /* Printing */
    } /* OptionDetails */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                namespace OptionDetails {
                    class PrintCustomTextOptionDetails;
                } /* Windows */
            } /* Graphics */
        } /* Printing */
    } /* OptionDetails */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                namespace OptionDetails {
                    class PrintDuplexOptionDetails;
                } /* Windows */
            } /* Graphics */
        } /* Printing */
    } /* OptionDetails */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                namespace OptionDetails {
                    class PrintHolePunchOptionDetails;
                } /* Windows */
            } /* Graphics */
        } /* Printing */
    } /* OptionDetails */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                namespace OptionDetails {
                    class PrintMediaSizeOptionDetails;
                } /* Windows */
            } /* Graphics */
        } /* Printing */
    } /* OptionDetails */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                namespace OptionDetails {
                    class PrintMediaTypeOptionDetails;
                } /* Windows */
            } /* Graphics */
        } /* Printing */
    } /* OptionDetails */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                namespace OptionDetails {
                    class PrintOrientationOptionDetails;
                } /* Windows */
            } /* Graphics */
        } /* Printing */
    } /* OptionDetails */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                namespace OptionDetails {
                    class PrintQualityOptionDetails;
                } /* Windows */
            } /* Graphics */
        } /* Printing */
    } /* OptionDetails */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                namespace OptionDetails {
                    class PrintStapleOptionDetails;
                } /* Windows */
            } /* Graphics */
        } /* Printing */
    } /* OptionDetails */} /* ABI */














/*
 *
 * Struct Windows.Graphics.Printing.OptionDetails.PrintOptionStates
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                namespace OptionDetails {
                    /* [v1_enum, flags, contract] */
                    enum PrintOptionStates : unsigned int
                    {
                        PrintOptionStates_None = 0,
                        PrintOptionStates_Enabled = 0x1,
                        PrintOptionStates_Constrained = 0x2,
                    };
                    
                    DEFINE_ENUM_FLAG_OPERATORS(PrintOptionStates)
                    
                } /* Windows */
            } /* Graphics */
        } /* Printing */
    } /* OptionDetails */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Graphics.Printing.OptionDetails.PrintOptionType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                namespace OptionDetails {
                    /* [v1_enum, contract] */
                    enum PrintOptionType : int
                    {
                        PrintOptionType_Unknown = 0,
                        PrintOptionType_Number = 1,
                        PrintOptionType_Text = 2,
                        PrintOptionType_ItemList = 3,
                    };
                    
                } /* Windows */
            } /* Graphics */
        } /* Printing */
    } /* OptionDetails */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Graphics.Printing.OptionDetails.IPrintCustomItemDetails
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Graphics.Printing.OptionDetails.PrintCustomItemDetails
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomItemDetails_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomItemDetails_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing_OptionDetails_IPrintCustomItemDetails[] = L"Windows.Graphics.Printing.OptionDetails.IPrintCustomItemDetails";
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                namespace OptionDetails {
                    /* [object, uuid("5704B637-5C3A-449A-AA36-B3291B1192FD"), exclusiveto, contract] */
                    MIDL_INTERFACE("5704B637-5C3A-449A-AA36-B3291B1192FD")
                    IPrintCustomItemDetails : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ItemId(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ItemDisplayName(
                            /* [in] */__RPC__in HSTRING value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ItemDisplayName(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IPrintCustomItemDetails=_uuidof(IPrintCustomItemDetails);
                    
                } /* Windows */
            } /* Graphics */
        } /* Printing */
    } /* OptionDetails */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomItemDetails;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomItemDetails_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Graphics.Printing.OptionDetails.IPrintCustomItemListOptionDetails
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Graphics.Printing.OptionDetails.PrintCustomItemListOptionDetails
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Graphics.Printing.OptionDetails.IPrintItemListOptionDetails
 *     Windows.Graphics.Printing.OptionDetails.IPrintOptionDetails
 *     Windows.Graphics.Printing.OptionDetails.IPrintCustomOptionDetails
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomItemListOptionDetails_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomItemListOptionDetails_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing_OptionDetails_IPrintCustomItemListOptionDetails[] = L"Windows.Graphics.Printing.OptionDetails.IPrintCustomItemListOptionDetails";
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                namespace OptionDetails {
                    /* [object, uuid("A5FAFD88-58F2-4EBD-B90F-51E4F2944C5D"), exclusiveto, contract] */
                    MIDL_INTERFACE("A5FAFD88-58F2-4EBD-B90F-51E4F2944C5D")
                    IPrintCustomItemListOptionDetails : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE AddItem(
                            /* [in] */__RPC__in HSTRING itemId,
                            /* [in] */__RPC__in HSTRING displayName
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IPrintCustomItemListOptionDetails=_uuidof(IPrintCustomItemListOptionDetails);
                    
                } /* Windows */
            } /* Graphics */
        } /* Printing */
    } /* OptionDetails */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomItemListOptionDetails;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomItemListOptionDetails_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Graphics.Printing.OptionDetails.IPrintCustomOptionDetails
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Graphics.Printing.OptionDetails.IPrintOptionDetails
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomOptionDetails_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomOptionDetails_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing_OptionDetails_IPrintCustomOptionDetails[] = L"Windows.Graphics.Printing.OptionDetails.IPrintCustomOptionDetails";
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                namespace OptionDetails {
                    /* [object, uuid("E32BDE1C-28AF-4B90-95DA-A3ACF320B929"), contract] */
                    MIDL_INTERFACE("E32BDE1C-28AF-4B90-95DA-A3ACF320B929")
                    IPrintCustomOptionDetails : IInspectable
                    {
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_DisplayName(
                            /* [in] */__RPC__in HSTRING value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DisplayName(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IPrintCustomOptionDetails=_uuidof(IPrintCustomOptionDetails);
                    
                } /* Windows */
            } /* Graphics */
        } /* Printing */
    } /* OptionDetails */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomOptionDetails;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomOptionDetails_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Graphics.Printing.OptionDetails.IPrintCustomTextOptionDetails
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Graphics.Printing.OptionDetails.PrintCustomTextOptionDetails
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Graphics.Printing.OptionDetails.IPrintCustomOptionDetails
 *     Windows.Graphics.Printing.OptionDetails.IPrintOptionDetails
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomTextOptionDetails_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomTextOptionDetails_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing_OptionDetails_IPrintCustomTextOptionDetails[] = L"Windows.Graphics.Printing.OptionDetails.IPrintCustomTextOptionDetails";
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                namespace OptionDetails {
                    /* [object, uuid("2AD171F8-C8BD-4905-9192-0D75136E8B31"), exclusiveto, contract] */
                    MIDL_INTERFACE("2AD171F8-C8BD-4905-9192-0D75136E8B31")
                    IPrintCustomTextOptionDetails : IInspectable
                    {
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_MaxCharacters(
                            /* [in] */UINT32 value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MaxCharacters(
                            /* [retval, out] */__RPC__out UINT32 * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IPrintCustomTextOptionDetails=_uuidof(IPrintCustomTextOptionDetails);
                    
                } /* Windows */
            } /* Graphics */
        } /* Printing */
    } /* OptionDetails */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomTextOptionDetails;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomTextOptionDetails_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Graphics.Printing.OptionDetails.IPrintItemListOptionDetails
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Graphics.Printing.OptionDetails.IPrintOptionDetails
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintItemListOptionDetails_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintItemListOptionDetails_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing_OptionDetails_IPrintItemListOptionDetails[] = L"Windows.Graphics.Printing.OptionDetails.IPrintItemListOptionDetails";
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                namespace OptionDetails {
                    /* [object, uuid("9A2257BF-FE61-43D8-A24F-A3F6AB7320E7"), contract] */
                    MIDL_INTERFACE("9A2257BF-FE61-43D8-A24F-A3F6AB7320E7")
                    IPrintItemListOptionDetails : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Items(
                            /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_IInspectable * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IPrintItemListOptionDetails=_uuidof(IPrintItemListOptionDetails);
                    
                } /* Windows */
            } /* Graphics */
        } /* Printing */
    } /* OptionDetails */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintItemListOptionDetails;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintItemListOptionDetails_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Graphics.Printing.OptionDetails.IPrintNumberOptionDetails
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Graphics.Printing.OptionDetails.IPrintOptionDetails
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintNumberOptionDetails_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintNumberOptionDetails_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing_OptionDetails_IPrintNumberOptionDetails[] = L"Windows.Graphics.Printing.OptionDetails.IPrintNumberOptionDetails";
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                namespace OptionDetails {
                    /* [object, uuid("4D01BBAF-645C-4DE9-965F-6FC6BBC47CAB"), contract] */
                    MIDL_INTERFACE("4D01BBAF-645C-4DE9-965F-6FC6BBC47CAB")
                    IPrintNumberOptionDetails : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MinValue(
                            /* [retval, out] */__RPC__out UINT32 * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MaxValue(
                            /* [retval, out] */__RPC__out UINT32 * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IPrintNumberOptionDetails=_uuidof(IPrintNumberOptionDetails);
                    
                } /* Windows */
            } /* Graphics */
        } /* Printing */
    } /* OptionDetails */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintNumberOptionDetails;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintNumberOptionDetails_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Graphics.Printing.OptionDetails.IPrintOptionDetails
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintOptionDetails_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintOptionDetails_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing_OptionDetails_IPrintOptionDetails[] = L"Windows.Graphics.Printing.OptionDetails.IPrintOptionDetails";
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                namespace OptionDetails {
                    /* [object, uuid("390686CF-D682-495F-ADFE-D7333F5C1808"), contract] */
                    MIDL_INTERFACE("390686CF-D682-495F-ADFE-D7333F5C1808")
                    IPrintOptionDetails : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_OptionId(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_OptionType(
                            /* [retval, out] */__RPC__out ABI::Windows::Graphics::Printing::OptionDetails::PrintOptionType * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ErrorText(
                            /* [in] */__RPC__in HSTRING value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ErrorText(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_State(
                            /* [in] */ABI::Windows::Graphics::Printing::OptionDetails::PrintOptionStates value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_State(
                            /* [retval, out] */__RPC__out ABI::Windows::Graphics::Printing::OptionDetails::PrintOptionStates * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Value(
                            /* [retval, out] */__RPC__deref_out_opt IInspectable * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE TrySetValue(
                            /* [in] */__RPC__in_opt IInspectable * value,
                            /* [retval, out] */__RPC__out boolean * succeeded
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IPrintOptionDetails=_uuidof(IPrintOptionDetails);
                    
                } /* Windows */
            } /* Graphics */
        } /* Printing */
    } /* OptionDetails */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintOptionDetails;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintOptionDetails_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Graphics.Printing.OptionDetails.IPrintTaskOptionChangedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Graphics.Printing.OptionDetails.PrintTaskOptionChangedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionChangedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionChangedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing_OptionDetails_IPrintTaskOptionChangedEventArgs[] = L"Windows.Graphics.Printing.OptionDetails.IPrintTaskOptionChangedEventArgs";
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                namespace OptionDetails {
                    /* [object, uuid("65197D05-A5EE-4307-9407-9ACAD147679C"), exclusiveto, contract] */
                    MIDL_INTERFACE("65197D05-A5EE-4307-9407-9ACAD147679C")
                    IPrintTaskOptionChangedEventArgs : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_OptionId(
                            /* [retval, out] */__RPC__deref_out_opt IInspectable * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IPrintTaskOptionChangedEventArgs=_uuidof(IPrintTaskOptionChangedEventArgs);
                    
                } /* Windows */
            } /* Graphics */
        } /* Printing */
    } /* OptionDetails */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionChangedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionChangedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Graphics.Printing.OptionDetails.IPrintTaskOptionDetails
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Graphics.Printing.OptionDetails.PrintTaskOptionDetails
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionDetails_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionDetails_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing_OptionDetails_IPrintTaskOptionDetails[] = L"Windows.Graphics.Printing.OptionDetails.IPrintTaskOptionDetails";
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                namespace OptionDetails {
                    /* [object, uuid("F5720AF1-A89E-42A6-81AF-F8E010B38A68"), exclusiveto, contract] */
                    MIDL_INTERFACE("F5720AF1-A89E-42A6-81AF-F8E010B38A68")
                    IPrintTaskOptionDetails : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Options(
                            /* [retval, out] */__RPC__deref_out_opt __FIMapView_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE CreateItemListOption(
                            /* [in] */__RPC__in HSTRING optionId,
                            /* [in] */__RPC__in HSTRING displayName,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails * * itemListOption
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE CreateTextOption(
                            /* [in] */__RPC__in HSTRING optionId,
                            /* [in] */__RPC__in HSTRING displayName,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails * * textOption
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_OptionChanged(
                            /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CGraphics__CPrinting__COptionDetails__CPrintTaskOptionDetails_Windows__CGraphics__CPrinting__COptionDetails__CPrintTaskOptionChangedEventArgs * eventHandler,
                            /* [retval, out] */__RPC__out EventRegistrationToken * eventCookie
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_OptionChanged(
                            /* [in] */EventRegistrationToken eventCookie
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_BeginValidation(
                            /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CGraphics__CPrinting__COptionDetails__CPrintTaskOptionDetails_IInspectable * eventHandler,
                            /* [retval, out] */__RPC__out EventRegistrationToken * eventCookie
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_BeginValidation(
                            /* [in] */EventRegistrationToken eventCookie
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IPrintTaskOptionDetails=_uuidof(IPrintTaskOptionDetails);
                    
                } /* Windows */
            } /* Graphics */
        } /* Printing */
    } /* OptionDetails */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionDetails;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionDetails_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Graphics.Printing.OptionDetails.IPrintTaskOptionDetailsStatic
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Graphics.Printing.OptionDetails.PrintTaskOptionDetails
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionDetailsStatic_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionDetailsStatic_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing_OptionDetails_IPrintTaskOptionDetailsStatic[] = L"Windows.Graphics.Printing.OptionDetails.IPrintTaskOptionDetailsStatic";
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                namespace OptionDetails {
                    /* [object, uuid("135DA193-0961-4B6E-8766-F13B7FBCCD58"), exclusiveto, contract] */
                    MIDL_INTERFACE("135DA193-0961-4B6E-8766-F13B7FBCCD58")
                    IPrintTaskOptionDetailsStatic : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE GetFromPrintTaskOptions(
                            /* [in] */__RPC__in_opt ABI::Windows::Graphics::Printing::IPrintTaskOptionsCore * printTaskOptions,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Graphics::Printing::OptionDetails::IPrintTaskOptionDetails * * printTaskOptionDetails
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IPrintTaskOptionDetailsStatic=_uuidof(IPrintTaskOptionDetailsStatic);
                    
                } /* Windows */
            } /* Graphics */
        } /* Printing */
    } /* OptionDetails */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionDetailsStatic;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionDetailsStatic_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Graphics.Printing.OptionDetails.IPrintTextOptionDetails
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Graphics.Printing.OptionDetails.IPrintOptionDetails
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTextOptionDetails_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTextOptionDetails_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing_OptionDetails_IPrintTextOptionDetails[] = L"Windows.Graphics.Printing.OptionDetails.IPrintTextOptionDetails";
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                namespace OptionDetails {
                    /* [object, uuid("AD75E563-5CE4-46BC-9918-AB9FAD144C5B"), contract] */
                    MIDL_INTERFACE("AD75E563-5CE4-46BC-9918-AB9FAD144C5B")
                    IPrintTextOptionDetails : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MaxCharacters(
                            /* [retval, out] */__RPC__out UINT32 * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IPrintTextOptionDetails=_uuidof(IPrintTextOptionDetails);
                    
                } /* Windows */
            } /* Graphics */
        } /* Printing */
    } /* OptionDetails */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTextOptionDetails;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTextOptionDetails_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Graphics.Printing.OptionDetails.PrintBindingOptionDetails
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Graphics.Printing.OptionDetails.IPrintOptionDetails ** Default Interface **
 *    Windows.Graphics.Printing.OptionDetails.IPrintItemListOptionDetails
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Graphics_Printing_OptionDetails_PrintBindingOptionDetails_DEFINED
#define RUNTIMECLASS_Windows_Graphics_Printing_OptionDetails_PrintBindingOptionDetails_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Printing_OptionDetails_PrintBindingOptionDetails[] = L"Windows.Graphics.Printing.OptionDetails.PrintBindingOptionDetails";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Graphics.Printing.OptionDetails.PrintBorderingOptionDetails
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Graphics.Printing.OptionDetails.IPrintOptionDetails ** Default Interface **
 *    Windows.Graphics.Printing.OptionDetails.IPrintItemListOptionDetails
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_Graphics_Printing_OptionDetails_PrintBorderingOptionDetails_DEFINED
#define RUNTIMECLASS_Windows_Graphics_Printing_OptionDetails_PrintBorderingOptionDetails_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Printing_OptionDetails_PrintBorderingOptionDetails[] = L"Windows.Graphics.Printing.OptionDetails.PrintBorderingOptionDetails";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.Graphics.Printing.OptionDetails.PrintCollationOptionDetails
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Graphics.Printing.OptionDetails.IPrintOptionDetails ** Default Interface **
 *    Windows.Graphics.Printing.OptionDetails.IPrintItemListOptionDetails
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Graphics_Printing_OptionDetails_PrintCollationOptionDetails_DEFINED
#define RUNTIMECLASS_Windows_Graphics_Printing_OptionDetails_PrintCollationOptionDetails_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Printing_OptionDetails_PrintCollationOptionDetails[] = L"Windows.Graphics.Printing.OptionDetails.PrintCollationOptionDetails";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Graphics.Printing.OptionDetails.PrintColorModeOptionDetails
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Graphics.Printing.OptionDetails.IPrintOptionDetails ** Default Interface **
 *    Windows.Graphics.Printing.OptionDetails.IPrintItemListOptionDetails
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Graphics_Printing_OptionDetails_PrintColorModeOptionDetails_DEFINED
#define RUNTIMECLASS_Windows_Graphics_Printing_OptionDetails_PrintColorModeOptionDetails_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Printing_OptionDetails_PrintColorModeOptionDetails[] = L"Windows.Graphics.Printing.OptionDetails.PrintColorModeOptionDetails";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Graphics.Printing.OptionDetails.PrintCopiesOptionDetails
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Graphics.Printing.OptionDetails.IPrintOptionDetails ** Default Interface **
 *    Windows.Graphics.Printing.OptionDetails.IPrintNumberOptionDetails
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Graphics_Printing_OptionDetails_PrintCopiesOptionDetails_DEFINED
#define RUNTIMECLASS_Windows_Graphics_Printing_OptionDetails_PrintCopiesOptionDetails_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Printing_OptionDetails_PrintCopiesOptionDetails[] = L"Windows.Graphics.Printing.OptionDetails.PrintCopiesOptionDetails";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Graphics.Printing.OptionDetails.PrintCustomItemDetails
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Graphics.Printing.OptionDetails.IPrintCustomItemDetails ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Graphics_Printing_OptionDetails_PrintCustomItemDetails_DEFINED
#define RUNTIMECLASS_Windows_Graphics_Printing_OptionDetails_PrintCustomItemDetails_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Printing_OptionDetails_PrintCustomItemDetails[] = L"Windows.Graphics.Printing.OptionDetails.PrintCustomItemDetails";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Graphics.Printing.OptionDetails.PrintCustomItemListOptionDetails
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Graphics.Printing.OptionDetails.IPrintOptionDetails ** Default Interface **
 *    Windows.Graphics.Printing.OptionDetails.IPrintCustomOptionDetails
 *    Windows.Graphics.Printing.OptionDetails.IPrintItemListOptionDetails
 *    Windows.Graphics.Printing.OptionDetails.IPrintCustomItemListOptionDetails
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Graphics_Printing_OptionDetails_PrintCustomItemListOptionDetails_DEFINED
#define RUNTIMECLASS_Windows_Graphics_Printing_OptionDetails_PrintCustomItemListOptionDetails_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Printing_OptionDetails_PrintCustomItemListOptionDetails[] = L"Windows.Graphics.Printing.OptionDetails.PrintCustomItemListOptionDetails";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Graphics.Printing.OptionDetails.PrintCustomTextOptionDetails
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Graphics.Printing.OptionDetails.IPrintOptionDetails ** Default Interface **
 *    Windows.Graphics.Printing.OptionDetails.IPrintCustomOptionDetails
 *    Windows.Graphics.Printing.OptionDetails.IPrintCustomTextOptionDetails
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Graphics_Printing_OptionDetails_PrintCustomTextOptionDetails_DEFINED
#define RUNTIMECLASS_Windows_Graphics_Printing_OptionDetails_PrintCustomTextOptionDetails_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Printing_OptionDetails_PrintCustomTextOptionDetails[] = L"Windows.Graphics.Printing.OptionDetails.PrintCustomTextOptionDetails";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Graphics.Printing.OptionDetails.PrintDuplexOptionDetails
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Graphics.Printing.OptionDetails.IPrintOptionDetails ** Default Interface **
 *    Windows.Graphics.Printing.OptionDetails.IPrintItemListOptionDetails
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Graphics_Printing_OptionDetails_PrintDuplexOptionDetails_DEFINED
#define RUNTIMECLASS_Windows_Graphics_Printing_OptionDetails_PrintDuplexOptionDetails_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Printing_OptionDetails_PrintDuplexOptionDetails[] = L"Windows.Graphics.Printing.OptionDetails.PrintDuplexOptionDetails";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Graphics.Printing.OptionDetails.PrintHolePunchOptionDetails
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Graphics.Printing.OptionDetails.IPrintOptionDetails ** Default Interface **
 *    Windows.Graphics.Printing.OptionDetails.IPrintItemListOptionDetails
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Graphics_Printing_OptionDetails_PrintHolePunchOptionDetails_DEFINED
#define RUNTIMECLASS_Windows_Graphics_Printing_OptionDetails_PrintHolePunchOptionDetails_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Printing_OptionDetails_PrintHolePunchOptionDetails[] = L"Windows.Graphics.Printing.OptionDetails.PrintHolePunchOptionDetails";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Graphics.Printing.OptionDetails.PrintMediaSizeOptionDetails
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Graphics.Printing.OptionDetails.IPrintOptionDetails ** Default Interface **
 *    Windows.Graphics.Printing.OptionDetails.IPrintItemListOptionDetails
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Graphics_Printing_OptionDetails_PrintMediaSizeOptionDetails_DEFINED
#define RUNTIMECLASS_Windows_Graphics_Printing_OptionDetails_PrintMediaSizeOptionDetails_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Printing_OptionDetails_PrintMediaSizeOptionDetails[] = L"Windows.Graphics.Printing.OptionDetails.PrintMediaSizeOptionDetails";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Graphics.Printing.OptionDetails.PrintMediaTypeOptionDetails
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Graphics.Printing.OptionDetails.IPrintOptionDetails ** Default Interface **
 *    Windows.Graphics.Printing.OptionDetails.IPrintItemListOptionDetails
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Graphics_Printing_OptionDetails_PrintMediaTypeOptionDetails_DEFINED
#define RUNTIMECLASS_Windows_Graphics_Printing_OptionDetails_PrintMediaTypeOptionDetails_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Printing_OptionDetails_PrintMediaTypeOptionDetails[] = L"Windows.Graphics.Printing.OptionDetails.PrintMediaTypeOptionDetails";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Graphics.Printing.OptionDetails.PrintOrientationOptionDetails
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Graphics.Printing.OptionDetails.IPrintOptionDetails ** Default Interface **
 *    Windows.Graphics.Printing.OptionDetails.IPrintItemListOptionDetails
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Graphics_Printing_OptionDetails_PrintOrientationOptionDetails_DEFINED
#define RUNTIMECLASS_Windows_Graphics_Printing_OptionDetails_PrintOrientationOptionDetails_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Printing_OptionDetails_PrintOrientationOptionDetails[] = L"Windows.Graphics.Printing.OptionDetails.PrintOrientationOptionDetails";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Graphics.Printing.OptionDetails.PrintQualityOptionDetails
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Graphics.Printing.OptionDetails.IPrintOptionDetails ** Default Interface **
 *    Windows.Graphics.Printing.OptionDetails.IPrintItemListOptionDetails
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Graphics_Printing_OptionDetails_PrintQualityOptionDetails_DEFINED
#define RUNTIMECLASS_Windows_Graphics_Printing_OptionDetails_PrintQualityOptionDetails_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Printing_OptionDetails_PrintQualityOptionDetails[] = L"Windows.Graphics.Printing.OptionDetails.PrintQualityOptionDetails";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Graphics.Printing.OptionDetails.PrintStapleOptionDetails
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Graphics.Printing.OptionDetails.IPrintOptionDetails ** Default Interface **
 *    Windows.Graphics.Printing.OptionDetails.IPrintItemListOptionDetails
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Graphics_Printing_OptionDetails_PrintStapleOptionDetails_DEFINED
#define RUNTIMECLASS_Windows_Graphics_Printing_OptionDetails_PrintStapleOptionDetails_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Printing_OptionDetails_PrintStapleOptionDetails[] = L"Windows.Graphics.Printing.OptionDetails.PrintStapleOptionDetails";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Graphics.Printing.OptionDetails.PrintTaskOptionChangedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Graphics.Printing.OptionDetails.IPrintTaskOptionChangedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Graphics_Printing_OptionDetails_PrintTaskOptionChangedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Graphics_Printing_OptionDetails_PrintTaskOptionChangedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Printing_OptionDetails_PrintTaskOptionChangedEventArgs[] = L"Windows.Graphics.Printing.OptionDetails.PrintTaskOptionChangedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Graphics.Printing.OptionDetails.PrintTaskOptionDetails
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Graphics.Printing.OptionDetails.IPrintTaskOptionDetailsStatic interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Graphics.Printing.OptionDetails.IPrintTaskOptionDetails ** Default Interface **
 *    Windows.Graphics.Printing.IPrintTaskOptionsCore
 *    Windows.Graphics.Printing.IPrintTaskOptionsCoreUIConfiguration
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Graphics_Printing_OptionDetails_PrintTaskOptionDetails_DEFINED
#define RUNTIMECLASS_Windows_Graphics_Printing_OptionDetails_PrintTaskOptionDetails_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Printing_OptionDetails_PrintTaskOptionDetails[] = L"Windows.Graphics.Printing.OptionDetails.PrintTaskOptionDetails";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000





#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomItemDetails_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomItemDetails_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomItemDetails __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomItemDetails;

#endif // ____x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomItemDetails_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomItemListOptionDetails_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomItemListOptionDetails_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomItemListOptionDetails __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomItemListOptionDetails;

#endif // ____x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomItemListOptionDetails_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomOptionDetails_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomOptionDetails_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomOptionDetails __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomOptionDetails;

#endif // ____x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomOptionDetails_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomTextOptionDetails_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomTextOptionDetails_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomTextOptionDetails __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomTextOptionDetails;

#endif // ____x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomTextOptionDetails_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintItemListOptionDetails_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintItemListOptionDetails_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintItemListOptionDetails __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintItemListOptionDetails;

#endif // ____x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintItemListOptionDetails_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintNumberOptionDetails_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintNumberOptionDetails_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintNumberOptionDetails __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintNumberOptionDetails;

#endif // ____x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintNumberOptionDetails_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintOptionDetails_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintOptionDetails_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintOptionDetails __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintOptionDetails;

#endif // ____x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintOptionDetails_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionChangedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionChangedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionChangedEventArgs __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionChangedEventArgs;

#endif // ____x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionChangedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionDetails_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionDetails_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionDetails __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionDetails;

#endif // ____x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionDetails_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionDetailsStatic_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionDetailsStatic_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionDetailsStatic __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionDetailsStatic;

#endif // ____x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionDetailsStatic_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTextOptionDetails_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTextOptionDetails_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTextOptionDetails __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTextOptionDetails;

#endif // ____x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTextOptionDetails_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIKeyValuePair_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails_INTERFACE_DEFINED__)
#define ____FIKeyValuePair_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails_INTERFACE_DEFINED__

typedef interface __FIKeyValuePair_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails __FIKeyValuePair_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails;

typedef struct __FIKeyValuePair_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetailsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Key )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails * This, /* [retval][out] */ __RPC__out HSTRING *key);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails * This, /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintOptionDetails * *value);
    END_INTERFACE
} __FIKeyValuePair_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetailsVtbl;

interface __FIKeyValuePair_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails
{
    CONST_VTBL struct __FIKeyValuePair_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetailsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIKeyValuePair_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIKeyValuePair_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIKeyValuePair_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIKeyValuePair_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIKeyValuePair_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIKeyValuePair_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIKeyValuePair_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails_get_Key(This,key)	\
    ( (This)->lpVtbl -> get_Key(This,key) ) 

#define __FIKeyValuePair_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails_get_Value(This,value)	\
    ( (This)->lpVtbl -> get_Value(This,value) ) 
#endif /* COBJMACROS */


#endif // ____FIKeyValuePair_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails_INTERFACE_DEFINED__)
#define ____FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails_INTERFACE_DEFINED__

typedef interface __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails;

typedef struct __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetailsVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails * This, /* [retval][out] */ __RPC__out __FIKeyValuePair_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __FIKeyValuePair_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetailsVtbl;

interface __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails
{
    CONST_VTBL struct __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetailsVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails_INTERFACE_DEFINED__)
#define ____FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails_INTERFACE_DEFINED__

typedef interface __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails;

typedef  struct __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetailsVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails **first);

    END_INTERFACE
} __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetailsVtbl;

interface __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails
{
    CONST_VTBL struct __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetailsVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIMapView_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails_INTERFACE_DEFINED__)
#define ____FIMapView_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails_INTERFACE_DEFINED__

typedef interface __FIMapView_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails __FIMapView_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIMapView_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails;

typedef struct __FIMapView_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetailsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMapView_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMapView_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMapView_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMapView_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMapView_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMapView_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails * This,/* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *Lookup )(__RPC__in __FIMapView_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails * This,
        /* [in] */ __RPC__in HSTRING key,
        /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintOptionDetails * *value);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )(__RPC__in __FIMapView_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails * This, /* [retval][out] */ __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *HasKey )(__RPC__in __FIMapView_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails * This, /* [in] */ __RPC__in HSTRING key, /* [retval][out] */ __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *Split )(__RPC__in __FIMapView_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails * This,/* [out] */ __RPC__deref_out_opt __FIMapView_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails **firstPartition,
        /* [out] */ __RPC__deref_out_opt __FIMapView_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails **secondPartition);
    END_INTERFACE
} __FIMapView_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetailsVtbl;

interface __FIMapView_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails
{
    CONST_VTBL struct __FIMapView_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetailsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIMapView_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIMapView_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIMapView_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIMapView_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIMapView_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIMapView_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIMapView_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails_Lookup(This,key,value)	\
    ( (This)->lpVtbl -> Lookup(This,key,value) ) 
#define __FIMapView_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 
#define __FIMapView_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails_HasKey(This,key,found)	\
    ( (This)->lpVtbl -> HasKey(This,key,found) ) 
#define __FIMapView_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails_Split(This,firstPartition,secondPartition)	\
    ( (This)->lpVtbl -> Split(This,firstPartition,secondPartition) ) 
#endif /* COBJMACROS */


#endif // ____FIMapView_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CGraphics__CPrinting__COptionDetails__CPrintTaskOptionDetails_IInspectable_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CGraphics__CPrinting__COptionDetails__CPrintTaskOptionDetails_IInspectable_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CGraphics__CPrinting__COptionDetails__CPrintTaskOptionDetails_IInspectable __FITypedEventHandler_2_Windows__CGraphics__CPrinting__COptionDetails__CPrintTaskOptionDetails_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CGraphics__CPrinting__COptionDetails__CPrintTaskOptionDetails_IInspectable;

typedef struct __FITypedEventHandler_2_Windows__CGraphics__CPrinting__COptionDetails__CPrintTaskOptionDetails_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CGraphics__CPrinting__COptionDetails__CPrintTaskOptionDetails_IInspectable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CGraphics__CPrinting__COptionDetails__CPrintTaskOptionDetails_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CGraphics__CPrinting__COptionDetails__CPrintTaskOptionDetails_IInspectable * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CGraphics__CPrinting__COptionDetails__CPrintTaskOptionDetails_IInspectable * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionDetails * sender,/* [in] */ __RPC__in_opt IInspectable * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CGraphics__CPrinting__COptionDetails__CPrintTaskOptionDetails_IInspectableVtbl;

interface __FITypedEventHandler_2_Windows__CGraphics__CPrinting__COptionDetails__CPrintTaskOptionDetails_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CGraphics__CPrinting__COptionDetails__CPrintTaskOptionDetails_IInspectableVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CGraphics__CPrinting__COptionDetails__CPrintTaskOptionDetails_IInspectable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CGraphics__CPrinting__COptionDetails__CPrintTaskOptionDetails_IInspectable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CGraphics__CPrinting__COptionDetails__CPrintTaskOptionDetails_IInspectable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CGraphics__CPrinting__COptionDetails__CPrintTaskOptionDetails_IInspectable_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CGraphics__CPrinting__COptionDetails__CPrintTaskOptionDetails_IInspectable_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CGraphics__CPrinting__COptionDetails__CPrintTaskOptionDetails_Windows__CGraphics__CPrinting__COptionDetails__CPrintTaskOptionChangedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CGraphics__CPrinting__COptionDetails__CPrintTaskOptionDetails_Windows__CGraphics__CPrinting__COptionDetails__CPrintTaskOptionChangedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CGraphics__CPrinting__COptionDetails__CPrintTaskOptionDetails_Windows__CGraphics__CPrinting__COptionDetails__CPrintTaskOptionChangedEventArgs __FITypedEventHandler_2_Windows__CGraphics__CPrinting__COptionDetails__CPrintTaskOptionDetails_Windows__CGraphics__CPrinting__COptionDetails__CPrintTaskOptionChangedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CGraphics__CPrinting__COptionDetails__CPrintTaskOptionDetails_Windows__CGraphics__CPrinting__COptionDetails__CPrintTaskOptionChangedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CGraphics__CPrinting__COptionDetails__CPrintTaskOptionDetails_Windows__CGraphics__CPrinting__COptionDetails__CPrintTaskOptionChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CGraphics__CPrinting__COptionDetails__CPrintTaskOptionDetails_Windows__CGraphics__CPrinting__COptionDetails__CPrintTaskOptionChangedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CGraphics__CPrinting__COptionDetails__CPrintTaskOptionDetails_Windows__CGraphics__CPrinting__COptionDetails__CPrintTaskOptionChangedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CGraphics__CPrinting__COptionDetails__CPrintTaskOptionDetails_Windows__CGraphics__CPrinting__COptionDetails__CPrintTaskOptionChangedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CGraphics__CPrinting__COptionDetails__CPrintTaskOptionDetails_Windows__CGraphics__CPrinting__COptionDetails__CPrintTaskOptionChangedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionDetails * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionChangedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CGraphics__CPrinting__COptionDetails__CPrintTaskOptionDetails_Windows__CGraphics__CPrinting__COptionDetails__CPrintTaskOptionChangedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CGraphics__CPrinting__COptionDetails__CPrintTaskOptionDetails_Windows__CGraphics__CPrinting__COptionDetails__CPrintTaskOptionChangedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CGraphics__CPrinting__COptionDetails__CPrintTaskOptionDetails_Windows__CGraphics__CPrinting__COptionDetails__CPrintTaskOptionChangedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CGraphics__CPrinting__COptionDetails__CPrintTaskOptionDetails_Windows__CGraphics__CPrinting__COptionDetails__CPrintTaskOptionChangedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CGraphics__CPrinting__COptionDetails__CPrintTaskOptionDetails_Windows__CGraphics__CPrinting__COptionDetails__CPrintTaskOptionChangedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CGraphics__CPrinting__COptionDetails__CPrintTaskOptionDetails_Windows__CGraphics__CPrinting__COptionDetails__CPrintTaskOptionChangedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CGraphics__CPrinting__COptionDetails__CPrintTaskOptionDetails_Windows__CGraphics__CPrinting__COptionDetails__CPrintTaskOptionChangedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CGraphics__CPrinting__COptionDetails__CPrintTaskOptionDetails_Windows__CGraphics__CPrinting__COptionDetails__CPrintTaskOptionChangedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if !defined(____FIIterator_1_IInspectable_INTERFACE_DEFINED__)
#define ____FIIterator_1_IInspectable_INTERFACE_DEFINED__

typedef interface __FIIterator_1_IInspectable __FIIterator_1_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_IInspectable;

typedef struct __FIIterator_1_IInspectableVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_IInspectable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_IInspectable * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_IInspectable * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_IInspectable * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_IInspectable * This, /* [retval][out] */ __RPC__out IInspectable * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_IInspectable * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_IInspectable * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_IInspectable * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) IInspectable * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_IInspectableVtbl;

interface __FIIterator_1_IInspectable
{
    CONST_VTBL struct __FIIterator_1_IInspectableVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_IInspectable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_IInspectable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_IInspectable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_IInspectable_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_IInspectable_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_IInspectable_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_IInspectable_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_IInspectable_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_IInspectable_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_IInspectable_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_IInspectable_INTERFACE_DEFINED__



#if !defined(____FIIterable_1_IInspectable_INTERFACE_DEFINED__)
#define ____FIIterable_1_IInspectable_INTERFACE_DEFINED__

typedef interface __FIIterable_1_IInspectable __FIIterable_1_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_IInspectable;

typedef  struct __FIIterable_1_IInspectableVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_IInspectable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_IInspectable * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_IInspectable * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_IInspectable * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_IInspectable * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_IInspectable * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_IInspectable * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_IInspectable **first);

    END_INTERFACE
} __FIIterable_1_IInspectableVtbl;

interface __FIIterable_1_IInspectable
{
    CONST_VTBL struct __FIIterable_1_IInspectableVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_IInspectable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_IInspectable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_IInspectable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_IInspectable_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_IInspectable_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_IInspectable_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_IInspectable_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_IInspectable_INTERFACE_DEFINED__



#if !defined(____FIVectorView_1_IInspectable_INTERFACE_DEFINED__)
#define ____FIVectorView_1_IInspectable_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_IInspectable __FIVectorView_1_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_IInspectable;

typedef struct __FIVectorView_1_IInspectableVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_IInspectable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_IInspectable * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_IInspectable * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_IInspectable * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_IInspectable * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_IInspectable * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_IInspectable * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out IInspectable * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_IInspectable * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_IInspectable * This,
            /* [in] */ IInspectable * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_IInspectable * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) IInspectable * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_IInspectableVtbl;

interface __FIVectorView_1_IInspectable
{
    CONST_VTBL struct __FIVectorView_1_IInspectableVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_IInspectable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_IInspectable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_IInspectable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_IInspectable_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_IInspectable_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_IInspectable_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_IInspectable_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_IInspectable_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_IInspectable_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_IInspectable_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_IInspectable_INTERFACE_DEFINED__






#ifndef ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCore_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCore_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCore __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCore;

#endif // ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCore_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreUIConfiguration_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreUIConfiguration_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreUIConfiguration __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreUIConfiguration;

#endif // ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreUIConfiguration_FWD_DEFINED__







typedef enum __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CPrintOptionStates __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CPrintOptionStates;


typedef enum __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CPrintOptionType __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CPrintOptionType;







































/*
 *
 * Struct Windows.Graphics.Printing.OptionDetails.PrintOptionStates
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, flags, contract] */
enum __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CPrintOptionStates
{
    PrintOptionStates_None = 0,
    PrintOptionStates_Enabled = 0x1,
    PrintOptionStates_Constrained = 0x2,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Graphics.Printing.OptionDetails.PrintOptionType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CPrintOptionType
{
    PrintOptionType_Unknown = 0,
    PrintOptionType_Number = 1,
    PrintOptionType_Text = 2,
    PrintOptionType_ItemList = 3,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Graphics.Printing.OptionDetails.IPrintCustomItemDetails
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Graphics.Printing.OptionDetails.PrintCustomItemDetails
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomItemDetails_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomItemDetails_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing_OptionDetails_IPrintCustomItemDetails[] = L"Windows.Graphics.Printing.OptionDetails.IPrintCustomItemDetails";
/* [object, uuid("5704B637-5C3A-449A-AA36-B3291B1192FD"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomItemDetailsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomItemDetails * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomItemDetails * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomItemDetails * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomItemDetails * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomItemDetails * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomItemDetails * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ItemId )(
        __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomItemDetails * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ItemDisplayName )(
        __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomItemDetails * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ItemDisplayName )(
        __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomItemDetails * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomItemDetailsVtbl;

interface __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomItemDetails
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomItemDetailsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomItemDetails_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomItemDetails_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomItemDetails_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomItemDetails_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomItemDetails_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomItemDetails_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomItemDetails_get_ItemId(This,value) \
    ( (This)->lpVtbl->get_ItemId(This,value) )

#define __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomItemDetails_put_ItemDisplayName(This,value) \
    ( (This)->lpVtbl->put_ItemDisplayName(This,value) )

#define __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomItemDetails_get_ItemDisplayName(This,value) \
    ( (This)->lpVtbl->get_ItemDisplayName(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomItemDetails;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomItemDetails_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Graphics.Printing.OptionDetails.IPrintCustomItemListOptionDetails
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Graphics.Printing.OptionDetails.PrintCustomItemListOptionDetails
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Graphics.Printing.OptionDetails.IPrintItemListOptionDetails
 *     Windows.Graphics.Printing.OptionDetails.IPrintOptionDetails
 *     Windows.Graphics.Printing.OptionDetails.IPrintCustomOptionDetails
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomItemListOptionDetails_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomItemListOptionDetails_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing_OptionDetails_IPrintCustomItemListOptionDetails[] = L"Windows.Graphics.Printing.OptionDetails.IPrintCustomItemListOptionDetails";
/* [object, uuid("A5FAFD88-58F2-4EBD-B90F-51E4F2944C5D"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomItemListOptionDetailsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomItemListOptionDetails * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomItemListOptionDetails * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomItemListOptionDetails * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomItemListOptionDetails * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomItemListOptionDetails * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomItemListOptionDetails * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *AddItem )(
        __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomItemListOptionDetails * This,
        /* [in] */__RPC__in HSTRING itemId,
        /* [in] */__RPC__in HSTRING displayName
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomItemListOptionDetailsVtbl;

interface __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomItemListOptionDetails
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomItemListOptionDetailsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomItemListOptionDetails_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomItemListOptionDetails_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomItemListOptionDetails_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomItemListOptionDetails_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomItemListOptionDetails_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomItemListOptionDetails_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomItemListOptionDetails_AddItem(This,itemId,displayName) \
    ( (This)->lpVtbl->AddItem(This,itemId,displayName) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomItemListOptionDetails;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomItemListOptionDetails_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Graphics.Printing.OptionDetails.IPrintCustomOptionDetails
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Graphics.Printing.OptionDetails.IPrintOptionDetails
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomOptionDetails_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomOptionDetails_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing_OptionDetails_IPrintCustomOptionDetails[] = L"Windows.Graphics.Printing.OptionDetails.IPrintCustomOptionDetails";
/* [object, uuid("E32BDE1C-28AF-4B90-95DA-A3ACF320B929"), contract] */
typedef struct __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomOptionDetailsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomOptionDetails * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomOptionDetails * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomOptionDetails * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomOptionDetails * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomOptionDetails * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomOptionDetails * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propput] */HRESULT ( STDMETHODCALLTYPE *put_DisplayName )(
        __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomOptionDetails * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DisplayName )(
        __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomOptionDetails * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomOptionDetailsVtbl;

interface __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomOptionDetails
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomOptionDetailsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomOptionDetails_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomOptionDetails_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomOptionDetails_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomOptionDetails_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomOptionDetails_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomOptionDetails_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomOptionDetails_put_DisplayName(This,value) \
    ( (This)->lpVtbl->put_DisplayName(This,value) )

#define __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomOptionDetails_get_DisplayName(This,value) \
    ( (This)->lpVtbl->get_DisplayName(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomOptionDetails;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomOptionDetails_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Graphics.Printing.OptionDetails.IPrintCustomTextOptionDetails
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Graphics.Printing.OptionDetails.PrintCustomTextOptionDetails
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Graphics.Printing.OptionDetails.IPrintCustomOptionDetails
 *     Windows.Graphics.Printing.OptionDetails.IPrintOptionDetails
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomTextOptionDetails_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomTextOptionDetails_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing_OptionDetails_IPrintCustomTextOptionDetails[] = L"Windows.Graphics.Printing.OptionDetails.IPrintCustomTextOptionDetails";
/* [object, uuid("2AD171F8-C8BD-4905-9192-0D75136E8B31"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomTextOptionDetailsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomTextOptionDetails * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomTextOptionDetails * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomTextOptionDetails * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomTextOptionDetails * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomTextOptionDetails * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomTextOptionDetails * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propput] */HRESULT ( STDMETHODCALLTYPE *put_MaxCharacters )(
        __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomTextOptionDetails * This,
        /* [in] */UINT32 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MaxCharacters )(
        __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomTextOptionDetails * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomTextOptionDetailsVtbl;

interface __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomTextOptionDetails
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomTextOptionDetailsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomTextOptionDetails_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomTextOptionDetails_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomTextOptionDetails_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomTextOptionDetails_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomTextOptionDetails_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomTextOptionDetails_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomTextOptionDetails_put_MaxCharacters(This,value) \
    ( (This)->lpVtbl->put_MaxCharacters(This,value) )

#define __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomTextOptionDetails_get_MaxCharacters(This,value) \
    ( (This)->lpVtbl->get_MaxCharacters(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomTextOptionDetails;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintCustomTextOptionDetails_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Graphics.Printing.OptionDetails.IPrintItemListOptionDetails
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Graphics.Printing.OptionDetails.IPrintOptionDetails
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintItemListOptionDetails_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintItemListOptionDetails_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing_OptionDetails_IPrintItemListOptionDetails[] = L"Windows.Graphics.Printing.OptionDetails.IPrintItemListOptionDetails";
/* [object, uuid("9A2257BF-FE61-43D8-A24F-A3F6AB7320E7"), contract] */
typedef struct __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintItemListOptionDetailsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintItemListOptionDetails * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintItemListOptionDetails * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintItemListOptionDetails * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintItemListOptionDetails * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintItemListOptionDetails * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintItemListOptionDetails * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Items )(
        __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintItemListOptionDetails * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_IInspectable * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintItemListOptionDetailsVtbl;

interface __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintItemListOptionDetails
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintItemListOptionDetailsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintItemListOptionDetails_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintItemListOptionDetails_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintItemListOptionDetails_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintItemListOptionDetails_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintItemListOptionDetails_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintItemListOptionDetails_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintItemListOptionDetails_get_Items(This,value) \
    ( (This)->lpVtbl->get_Items(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintItemListOptionDetails;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintItemListOptionDetails_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Graphics.Printing.OptionDetails.IPrintNumberOptionDetails
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Graphics.Printing.OptionDetails.IPrintOptionDetails
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintNumberOptionDetails_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintNumberOptionDetails_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing_OptionDetails_IPrintNumberOptionDetails[] = L"Windows.Graphics.Printing.OptionDetails.IPrintNumberOptionDetails";
/* [object, uuid("4D01BBAF-645C-4DE9-965F-6FC6BBC47CAB"), contract] */
typedef struct __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintNumberOptionDetailsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintNumberOptionDetails * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintNumberOptionDetails * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintNumberOptionDetails * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintNumberOptionDetails * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintNumberOptionDetails * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintNumberOptionDetails * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MinValue )(
        __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintNumberOptionDetails * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MaxValue )(
        __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintNumberOptionDetails * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintNumberOptionDetailsVtbl;

interface __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintNumberOptionDetails
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintNumberOptionDetailsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintNumberOptionDetails_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintNumberOptionDetails_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintNumberOptionDetails_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintNumberOptionDetails_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintNumberOptionDetails_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintNumberOptionDetails_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintNumberOptionDetails_get_MinValue(This,value) \
    ( (This)->lpVtbl->get_MinValue(This,value) )

#define __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintNumberOptionDetails_get_MaxValue(This,value) \
    ( (This)->lpVtbl->get_MaxValue(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintNumberOptionDetails;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintNumberOptionDetails_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Graphics.Printing.OptionDetails.IPrintOptionDetails
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintOptionDetails_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintOptionDetails_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing_OptionDetails_IPrintOptionDetails[] = L"Windows.Graphics.Printing.OptionDetails.IPrintOptionDetails";
/* [object, uuid("390686CF-D682-495F-ADFE-D7333F5C1808"), contract] */
typedef struct __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintOptionDetailsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintOptionDetails * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintOptionDetails * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintOptionDetails * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintOptionDetails * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintOptionDetails * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintOptionDetails * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_OptionId )(
        __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintOptionDetails * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_OptionType )(
        __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintOptionDetails * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CPrintOptionType * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ErrorText )(
        __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintOptionDetails * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ErrorText )(
        __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintOptionDetails * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_State )(
        __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintOptionDetails * This,
        /* [in] */__x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CPrintOptionStates value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_State )(
        __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintOptionDetails * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CPrintOptionStates * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Value )(
        __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintOptionDetails * This,
        /* [retval, out] */__RPC__deref_out_opt IInspectable * * value
        );
    HRESULT ( STDMETHODCALLTYPE *TrySetValue )(
        __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintOptionDetails * This,
        /* [in] */__RPC__in_opt IInspectable * value,
        /* [retval, out] */__RPC__out boolean * succeeded
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintOptionDetailsVtbl;

interface __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintOptionDetails
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintOptionDetailsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintOptionDetails_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintOptionDetails_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintOptionDetails_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintOptionDetails_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintOptionDetails_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintOptionDetails_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintOptionDetails_get_OptionId(This,value) \
    ( (This)->lpVtbl->get_OptionId(This,value) )

#define __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintOptionDetails_get_OptionType(This,value) \
    ( (This)->lpVtbl->get_OptionType(This,value) )

#define __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintOptionDetails_put_ErrorText(This,value) \
    ( (This)->lpVtbl->put_ErrorText(This,value) )

#define __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintOptionDetails_get_ErrorText(This,value) \
    ( (This)->lpVtbl->get_ErrorText(This,value) )

#define __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintOptionDetails_put_State(This,value) \
    ( (This)->lpVtbl->put_State(This,value) )

#define __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintOptionDetails_get_State(This,value) \
    ( (This)->lpVtbl->get_State(This,value) )

#define __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintOptionDetails_get_Value(This,value) \
    ( (This)->lpVtbl->get_Value(This,value) )

#define __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintOptionDetails_TrySetValue(This,value,succeeded) \
    ( (This)->lpVtbl->TrySetValue(This,value,succeeded) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintOptionDetails;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintOptionDetails_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Graphics.Printing.OptionDetails.IPrintTaskOptionChangedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Graphics.Printing.OptionDetails.PrintTaskOptionChangedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionChangedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionChangedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing_OptionDetails_IPrintTaskOptionChangedEventArgs[] = L"Windows.Graphics.Printing.OptionDetails.IPrintTaskOptionChangedEventArgs";
/* [object, uuid("65197D05-A5EE-4307-9407-9ACAD147679C"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionChangedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionChangedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionChangedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionChangedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionChangedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionChangedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_OptionId )(
        __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionChangedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt IInspectable * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionChangedEventArgsVtbl;

interface __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionChangedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionChangedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionChangedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionChangedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionChangedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionChangedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionChangedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionChangedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionChangedEventArgs_get_OptionId(This,value) \
    ( (This)->lpVtbl->get_OptionId(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionChangedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionChangedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Graphics.Printing.OptionDetails.IPrintTaskOptionDetails
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Graphics.Printing.OptionDetails.PrintTaskOptionDetails
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionDetails_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionDetails_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing_OptionDetails_IPrintTaskOptionDetails[] = L"Windows.Graphics.Printing.OptionDetails.IPrintTaskOptionDetails";
/* [object, uuid("F5720AF1-A89E-42A6-81AF-F8E010B38A68"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionDetailsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionDetails * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionDetails * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionDetails * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionDetails * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionDetails * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionDetails * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Options )(
        __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionDetails * This,
        /* [retval, out] */__RPC__deref_out_opt __FIMapView_2_HSTRING_Windows__CGraphics__CPrinting__COptionDetails__CIPrintOptionDetails * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateItemListOption )(
        __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionDetails * This,
        /* [in] */__RPC__in HSTRING optionId,
        /* [in] */__RPC__in HSTRING displayName,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintOptionDetails * * itemListOption
        );
    HRESULT ( STDMETHODCALLTYPE *CreateTextOption )(
        __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionDetails * This,
        /* [in] */__RPC__in HSTRING optionId,
        /* [in] */__RPC__in HSTRING displayName,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintOptionDetails * * textOption
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_OptionChanged )(
        __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionDetails * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CGraphics__CPrinting__COptionDetails__CPrintTaskOptionDetails_Windows__CGraphics__CPrinting__COptionDetails__CPrintTaskOptionChangedEventArgs * eventHandler,
        /* [retval, out] */__RPC__out EventRegistrationToken * eventCookie
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_OptionChanged )(
        __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionDetails * This,
        /* [in] */EventRegistrationToken eventCookie
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_BeginValidation )(
        __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionDetails * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CGraphics__CPrinting__COptionDetails__CPrintTaskOptionDetails_IInspectable * eventHandler,
        /* [retval, out] */__RPC__out EventRegistrationToken * eventCookie
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_BeginValidation )(
        __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionDetails * This,
        /* [in] */EventRegistrationToken eventCookie
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionDetailsVtbl;

interface __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionDetails
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionDetailsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionDetails_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionDetails_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionDetails_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionDetails_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionDetails_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionDetails_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionDetails_get_Options(This,value) \
    ( (This)->lpVtbl->get_Options(This,value) )

#define __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionDetails_CreateItemListOption(This,optionId,displayName,itemListOption) \
    ( (This)->lpVtbl->CreateItemListOption(This,optionId,displayName,itemListOption) )

#define __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionDetails_CreateTextOption(This,optionId,displayName,textOption) \
    ( (This)->lpVtbl->CreateTextOption(This,optionId,displayName,textOption) )

#define __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionDetails_add_OptionChanged(This,eventHandler,eventCookie) \
    ( (This)->lpVtbl->add_OptionChanged(This,eventHandler,eventCookie) )

#define __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionDetails_remove_OptionChanged(This,eventCookie) \
    ( (This)->lpVtbl->remove_OptionChanged(This,eventCookie) )

#define __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionDetails_add_BeginValidation(This,eventHandler,eventCookie) \
    ( (This)->lpVtbl->add_BeginValidation(This,eventHandler,eventCookie) )

#define __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionDetails_remove_BeginValidation(This,eventCookie) \
    ( (This)->lpVtbl->remove_BeginValidation(This,eventCookie) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionDetails;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionDetails_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Graphics.Printing.OptionDetails.IPrintTaskOptionDetailsStatic
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Graphics.Printing.OptionDetails.PrintTaskOptionDetails
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionDetailsStatic_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionDetailsStatic_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing_OptionDetails_IPrintTaskOptionDetailsStatic[] = L"Windows.Graphics.Printing.OptionDetails.IPrintTaskOptionDetailsStatic";
/* [object, uuid("135DA193-0961-4B6E-8766-F13B7FBCCD58"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionDetailsStaticVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionDetailsStatic * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionDetailsStatic * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionDetailsStatic * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionDetailsStatic * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionDetailsStatic * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionDetailsStatic * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetFromPrintTaskOptions )(
        __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionDetailsStatic * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCore * printTaskOptions,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionDetails * * printTaskOptionDetails
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionDetailsStaticVtbl;

interface __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionDetailsStatic
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionDetailsStaticVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionDetailsStatic_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionDetailsStatic_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionDetailsStatic_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionDetailsStatic_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionDetailsStatic_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionDetailsStatic_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionDetailsStatic_GetFromPrintTaskOptions(This,printTaskOptions,printTaskOptionDetails) \
    ( (This)->lpVtbl->GetFromPrintTaskOptions(This,printTaskOptions,printTaskOptionDetails) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionDetailsStatic;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTaskOptionDetailsStatic_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Graphics.Printing.OptionDetails.IPrintTextOptionDetails
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Graphics.Printing.OptionDetails.IPrintOptionDetails
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTextOptionDetails_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTextOptionDetails_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing_OptionDetails_IPrintTextOptionDetails[] = L"Windows.Graphics.Printing.OptionDetails.IPrintTextOptionDetails";
/* [object, uuid("AD75E563-5CE4-46BC-9918-AB9FAD144C5B"), contract] */
typedef struct __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTextOptionDetailsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTextOptionDetails * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTextOptionDetails * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTextOptionDetails * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTextOptionDetails * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTextOptionDetails * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTextOptionDetails * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MaxCharacters )(
        __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTextOptionDetails * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTextOptionDetailsVtbl;

interface __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTextOptionDetails
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTextOptionDetailsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTextOptionDetails_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTextOptionDetails_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTextOptionDetails_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTextOptionDetails_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTextOptionDetails_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTextOptionDetails_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTextOptionDetails_get_MaxCharacters(This,value) \
    ( (This)->lpVtbl->get_MaxCharacters(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTextOptionDetails;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CPrinting_COptionDetails_CIPrintTextOptionDetails_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Graphics.Printing.OptionDetails.PrintBindingOptionDetails
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Graphics.Printing.OptionDetails.IPrintOptionDetails ** Default Interface **
 *    Windows.Graphics.Printing.OptionDetails.IPrintItemListOptionDetails
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Graphics_Printing_OptionDetails_PrintBindingOptionDetails_DEFINED
#define RUNTIMECLASS_Windows_Graphics_Printing_OptionDetails_PrintBindingOptionDetails_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Printing_OptionDetails_PrintBindingOptionDetails[] = L"Windows.Graphics.Printing.OptionDetails.PrintBindingOptionDetails";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Graphics.Printing.OptionDetails.PrintBorderingOptionDetails
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Graphics.Printing.OptionDetails.IPrintOptionDetails ** Default Interface **
 *    Windows.Graphics.Printing.OptionDetails.IPrintItemListOptionDetails
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_Graphics_Printing_OptionDetails_PrintBorderingOptionDetails_DEFINED
#define RUNTIMECLASS_Windows_Graphics_Printing_OptionDetails_PrintBorderingOptionDetails_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Printing_OptionDetails_PrintBorderingOptionDetails[] = L"Windows.Graphics.Printing.OptionDetails.PrintBorderingOptionDetails";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.Graphics.Printing.OptionDetails.PrintCollationOptionDetails
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Graphics.Printing.OptionDetails.IPrintOptionDetails ** Default Interface **
 *    Windows.Graphics.Printing.OptionDetails.IPrintItemListOptionDetails
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Graphics_Printing_OptionDetails_PrintCollationOptionDetails_DEFINED
#define RUNTIMECLASS_Windows_Graphics_Printing_OptionDetails_PrintCollationOptionDetails_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Printing_OptionDetails_PrintCollationOptionDetails[] = L"Windows.Graphics.Printing.OptionDetails.PrintCollationOptionDetails";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Graphics.Printing.OptionDetails.PrintColorModeOptionDetails
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Graphics.Printing.OptionDetails.IPrintOptionDetails ** Default Interface **
 *    Windows.Graphics.Printing.OptionDetails.IPrintItemListOptionDetails
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Graphics_Printing_OptionDetails_PrintColorModeOptionDetails_DEFINED
#define RUNTIMECLASS_Windows_Graphics_Printing_OptionDetails_PrintColorModeOptionDetails_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Printing_OptionDetails_PrintColorModeOptionDetails[] = L"Windows.Graphics.Printing.OptionDetails.PrintColorModeOptionDetails";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Graphics.Printing.OptionDetails.PrintCopiesOptionDetails
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Graphics.Printing.OptionDetails.IPrintOptionDetails ** Default Interface **
 *    Windows.Graphics.Printing.OptionDetails.IPrintNumberOptionDetails
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Graphics_Printing_OptionDetails_PrintCopiesOptionDetails_DEFINED
#define RUNTIMECLASS_Windows_Graphics_Printing_OptionDetails_PrintCopiesOptionDetails_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Printing_OptionDetails_PrintCopiesOptionDetails[] = L"Windows.Graphics.Printing.OptionDetails.PrintCopiesOptionDetails";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Graphics.Printing.OptionDetails.PrintCustomItemDetails
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Graphics.Printing.OptionDetails.IPrintCustomItemDetails ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Graphics_Printing_OptionDetails_PrintCustomItemDetails_DEFINED
#define RUNTIMECLASS_Windows_Graphics_Printing_OptionDetails_PrintCustomItemDetails_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Printing_OptionDetails_PrintCustomItemDetails[] = L"Windows.Graphics.Printing.OptionDetails.PrintCustomItemDetails";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Graphics.Printing.OptionDetails.PrintCustomItemListOptionDetails
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Graphics.Printing.OptionDetails.IPrintOptionDetails ** Default Interface **
 *    Windows.Graphics.Printing.OptionDetails.IPrintCustomOptionDetails
 *    Windows.Graphics.Printing.OptionDetails.IPrintItemListOptionDetails
 *    Windows.Graphics.Printing.OptionDetails.IPrintCustomItemListOptionDetails
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Graphics_Printing_OptionDetails_PrintCustomItemListOptionDetails_DEFINED
#define RUNTIMECLASS_Windows_Graphics_Printing_OptionDetails_PrintCustomItemListOptionDetails_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Printing_OptionDetails_PrintCustomItemListOptionDetails[] = L"Windows.Graphics.Printing.OptionDetails.PrintCustomItemListOptionDetails";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Graphics.Printing.OptionDetails.PrintCustomTextOptionDetails
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Graphics.Printing.OptionDetails.IPrintOptionDetails ** Default Interface **
 *    Windows.Graphics.Printing.OptionDetails.IPrintCustomOptionDetails
 *    Windows.Graphics.Printing.OptionDetails.IPrintCustomTextOptionDetails
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Graphics_Printing_OptionDetails_PrintCustomTextOptionDetails_DEFINED
#define RUNTIMECLASS_Windows_Graphics_Printing_OptionDetails_PrintCustomTextOptionDetails_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Printing_OptionDetails_PrintCustomTextOptionDetails[] = L"Windows.Graphics.Printing.OptionDetails.PrintCustomTextOptionDetails";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Graphics.Printing.OptionDetails.PrintDuplexOptionDetails
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Graphics.Printing.OptionDetails.IPrintOptionDetails ** Default Interface **
 *    Windows.Graphics.Printing.OptionDetails.IPrintItemListOptionDetails
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Graphics_Printing_OptionDetails_PrintDuplexOptionDetails_DEFINED
#define RUNTIMECLASS_Windows_Graphics_Printing_OptionDetails_PrintDuplexOptionDetails_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Printing_OptionDetails_PrintDuplexOptionDetails[] = L"Windows.Graphics.Printing.OptionDetails.PrintDuplexOptionDetails";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Graphics.Printing.OptionDetails.PrintHolePunchOptionDetails
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Graphics.Printing.OptionDetails.IPrintOptionDetails ** Default Interface **
 *    Windows.Graphics.Printing.OptionDetails.IPrintItemListOptionDetails
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Graphics_Printing_OptionDetails_PrintHolePunchOptionDetails_DEFINED
#define RUNTIMECLASS_Windows_Graphics_Printing_OptionDetails_PrintHolePunchOptionDetails_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Printing_OptionDetails_PrintHolePunchOptionDetails[] = L"Windows.Graphics.Printing.OptionDetails.PrintHolePunchOptionDetails";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Graphics.Printing.OptionDetails.PrintMediaSizeOptionDetails
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Graphics.Printing.OptionDetails.IPrintOptionDetails ** Default Interface **
 *    Windows.Graphics.Printing.OptionDetails.IPrintItemListOptionDetails
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Graphics_Printing_OptionDetails_PrintMediaSizeOptionDetails_DEFINED
#define RUNTIMECLASS_Windows_Graphics_Printing_OptionDetails_PrintMediaSizeOptionDetails_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Printing_OptionDetails_PrintMediaSizeOptionDetails[] = L"Windows.Graphics.Printing.OptionDetails.PrintMediaSizeOptionDetails";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Graphics.Printing.OptionDetails.PrintMediaTypeOptionDetails
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Graphics.Printing.OptionDetails.IPrintOptionDetails ** Default Interface **
 *    Windows.Graphics.Printing.OptionDetails.IPrintItemListOptionDetails
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Graphics_Printing_OptionDetails_PrintMediaTypeOptionDetails_DEFINED
#define RUNTIMECLASS_Windows_Graphics_Printing_OptionDetails_PrintMediaTypeOptionDetails_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Printing_OptionDetails_PrintMediaTypeOptionDetails[] = L"Windows.Graphics.Printing.OptionDetails.PrintMediaTypeOptionDetails";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Graphics.Printing.OptionDetails.PrintOrientationOptionDetails
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Graphics.Printing.OptionDetails.IPrintOptionDetails ** Default Interface **
 *    Windows.Graphics.Printing.OptionDetails.IPrintItemListOptionDetails
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Graphics_Printing_OptionDetails_PrintOrientationOptionDetails_DEFINED
#define RUNTIMECLASS_Windows_Graphics_Printing_OptionDetails_PrintOrientationOptionDetails_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Printing_OptionDetails_PrintOrientationOptionDetails[] = L"Windows.Graphics.Printing.OptionDetails.PrintOrientationOptionDetails";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Graphics.Printing.OptionDetails.PrintQualityOptionDetails
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Graphics.Printing.OptionDetails.IPrintOptionDetails ** Default Interface **
 *    Windows.Graphics.Printing.OptionDetails.IPrintItemListOptionDetails
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Graphics_Printing_OptionDetails_PrintQualityOptionDetails_DEFINED
#define RUNTIMECLASS_Windows_Graphics_Printing_OptionDetails_PrintQualityOptionDetails_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Printing_OptionDetails_PrintQualityOptionDetails[] = L"Windows.Graphics.Printing.OptionDetails.PrintQualityOptionDetails";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Graphics.Printing.OptionDetails.PrintStapleOptionDetails
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Graphics.Printing.OptionDetails.IPrintOptionDetails ** Default Interface **
 *    Windows.Graphics.Printing.OptionDetails.IPrintItemListOptionDetails
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Graphics_Printing_OptionDetails_PrintStapleOptionDetails_DEFINED
#define RUNTIMECLASS_Windows_Graphics_Printing_OptionDetails_PrintStapleOptionDetails_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Printing_OptionDetails_PrintStapleOptionDetails[] = L"Windows.Graphics.Printing.OptionDetails.PrintStapleOptionDetails";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Graphics.Printing.OptionDetails.PrintTaskOptionChangedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Graphics.Printing.OptionDetails.IPrintTaskOptionChangedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Graphics_Printing_OptionDetails_PrintTaskOptionChangedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Graphics_Printing_OptionDetails_PrintTaskOptionChangedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Printing_OptionDetails_PrintTaskOptionChangedEventArgs[] = L"Windows.Graphics.Printing.OptionDetails.PrintTaskOptionChangedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Graphics.Printing.OptionDetails.PrintTaskOptionDetails
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Graphics.Printing.OptionDetails.IPrintTaskOptionDetailsStatic interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Graphics.Printing.OptionDetails.IPrintTaskOptionDetails ** Default Interface **
 *    Windows.Graphics.Printing.IPrintTaskOptionsCore
 *    Windows.Graphics.Printing.IPrintTaskOptionsCoreUIConfiguration
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Graphics_Printing_OptionDetails_PrintTaskOptionDetails_DEFINED
#define RUNTIMECLASS_Windows_Graphics_Printing_OptionDetails_PrintTaskOptionDetails_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Printing_OptionDetails_PrintTaskOptionDetails[] = L"Windows.Graphics.Printing.OptionDetails.PrintTaskOptionDetails";
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
#endif // __windows2Egraphics2Eprinting2Eoptiondetails_p_h__

#endif // __windows2Egraphics2Eprinting2Eoptiondetails_h__
