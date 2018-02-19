/* Header file automatically generated from windows.graphics.printing.printticket.idl */
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
#ifndef __windows2Egraphics2Eprinting2Eprintticket_h__
#define __windows2Egraphics2Eprinting2Eprintticket_h__
#ifndef __windows2Egraphics2Eprinting2Eprintticket_p_h__
#define __windows2Egraphics2Eprinting2Eprintticket_p_h__


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
#include "Windows.Data.Xml.Dom.h"
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketCapabilities_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketCapabilities_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                namespace PrintTicket {
                    interface IPrintTicketCapabilities;
                } /* Windows */
            } /* Graphics */
        } /* Printing */
    } /* PrintTicket */} /* ABI */
#define __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketCapabilities ABI::Windows::Graphics::Printing::PrintTicket::IPrintTicketCapabilities

#endif // ____x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketCapabilities_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketFeature_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketFeature_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                namespace PrintTicket {
                    interface IPrintTicketFeature;
                } /* Windows */
            } /* Graphics */
        } /* Printing */
    } /* PrintTicket */} /* ABI */
#define __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketFeature ABI::Windows::Graphics::Printing::PrintTicket::IPrintTicketFeature

#endif // ____x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketFeature_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketOption_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketOption_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                namespace PrintTicket {
                    interface IPrintTicketOption;
                } /* Windows */
            } /* Graphics */
        } /* Printing */
    } /* PrintTicket */} /* ABI */
#define __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketOption ABI::Windows::Graphics::Printing::PrintTicket::IPrintTicketOption

#endif // ____x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketOption_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketParameterDefinition_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketParameterDefinition_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                namespace PrintTicket {
                    interface IPrintTicketParameterDefinition;
                } /* Windows */
            } /* Graphics */
        } /* Printing */
    } /* PrintTicket */} /* ABI */
#define __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketParameterDefinition ABI::Windows::Graphics::Printing::PrintTicket::IPrintTicketParameterDefinition

#endif // ____x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketParameterDefinition_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketParameterInitializer_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketParameterInitializer_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                namespace PrintTicket {
                    interface IPrintTicketParameterInitializer;
                } /* Windows */
            } /* Graphics */
        } /* Printing */
    } /* PrintTicket */} /* ABI */
#define __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketParameterInitializer ABI::Windows::Graphics::Printing::PrintTicket::IPrintTicketParameterInitializer

#endif // ____x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketParameterInitializer_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketValue_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketValue_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                namespace PrintTicket {
                    interface IPrintTicketValue;
                } /* Windows */
            } /* Graphics */
        } /* Printing */
    } /* PrintTicket */} /* ABI */
#define __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketValue ABI::Windows::Graphics::Printing::PrintTicket::IPrintTicketValue

#endif // ____x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketValue_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicket_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicket_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                namespace PrintTicket {
                    interface IWorkflowPrintTicket;
                } /* Windows */
            } /* Graphics */
        } /* Printing */
    } /* PrintTicket */} /* ABI */
#define __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicket ABI::Windows::Graphics::Printing::PrintTicket::IWorkflowPrintTicket

#endif // ____x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicket_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicketValidationResult_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicketValidationResult_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                namespace PrintTicket {
                    interface IWorkflowPrintTicketValidationResult;
                } /* Windows */
            } /* Graphics */
        } /* Printing */
    } /* PrintTicket */} /* ABI */
#define __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicketValidationResult ABI::Windows::Graphics::Printing::PrintTicket::IWorkflowPrintTicketValidationResult

#endif // ____x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicketValidationResult_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                namespace PrintTicket {
                    class PrintTicketOption;
                } /* Windows */
            } /* Graphics */
        } /* Printing */
    } /* PrintTicket */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

#ifndef DEF___FIIterator_1_Windows__CGraphics__CPrinting__CPrintTicket__CPrintTicketOption_USE
#define DEF___FIIterator_1_Windows__CGraphics__CPrinting__CPrintTicket__CPrintTicketOption_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("c92a35e2-829d-5adf-874e-4d745b4ef0aa"))
IIterator<ABI::Windows::Graphics::Printing::PrintTicket::PrintTicketOption*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Graphics::Printing::PrintTicket::PrintTicketOption*, ABI::Windows::Graphics::Printing::PrintTicket::IPrintTicketOption*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Graphics.Printing.PrintTicket.PrintTicketOption>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Graphics::Printing::PrintTicket::PrintTicketOption*> __FIIterator_1_Windows__CGraphics__CPrinting__CPrintTicket__CPrintTicketOption_t;
#define __FIIterator_1_Windows__CGraphics__CPrinting__CPrintTicket__CPrintTicketOption ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CGraphics__CPrinting__CPrintTicket__CPrintTicketOption_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CGraphics__CPrinting__CPrintTicket__CPrintTicketOption ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Graphics::Printing::PrintTicket::IPrintTicketOption*>
//#define __FIIterator_1_Windows__CGraphics__CPrinting__CPrintTicket__CPrintTicketOption_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Graphics::Printing::PrintTicket::IPrintTicketOption*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CGraphics__CPrinting__CPrintTicket__CPrintTicketOption_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

#ifndef DEF___FIIterable_1_Windows__CGraphics__CPrinting__CPrintTicket__CPrintTicketOption_USE
#define DEF___FIIterable_1_Windows__CGraphics__CPrinting__CPrintTicket__CPrintTicketOption_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("5c7e6676-9046-5b6a-9eb0-c6a954e8226b"))
IIterable<ABI::Windows::Graphics::Printing::PrintTicket::PrintTicketOption*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Graphics::Printing::PrintTicket::PrintTicketOption*, ABI::Windows::Graphics::Printing::PrintTicket::IPrintTicketOption*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Graphics.Printing.PrintTicket.PrintTicketOption>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Graphics::Printing::PrintTicket::PrintTicketOption*> __FIIterable_1_Windows__CGraphics__CPrinting__CPrintTicket__CPrintTicketOption_t;
#define __FIIterable_1_Windows__CGraphics__CPrinting__CPrintTicket__CPrintTicketOption ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CGraphics__CPrinting__CPrintTicket__CPrintTicketOption_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CGraphics__CPrinting__CPrintTicket__CPrintTicketOption ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Graphics::Printing::PrintTicket::IPrintTicketOption*>
//#define __FIIterable_1_Windows__CGraphics__CPrinting__CPrintTicket__CPrintTicketOption_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Graphics::Printing::PrintTicket::IPrintTicketOption*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CGraphics__CPrinting__CPrintTicket__CPrintTicketOption_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

#ifndef DEF___FIVectorView_1_Windows__CGraphics__CPrinting__CPrintTicket__CPrintTicketOption_USE
#define DEF___FIVectorView_1_Windows__CGraphics__CPrinting__CPrintTicket__CPrintTicketOption_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("c80b48ef-2a4c-5685-b7a4-88cc796ca274"))
IVectorView<ABI::Windows::Graphics::Printing::PrintTicket::PrintTicketOption*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Graphics::Printing::PrintTicket::PrintTicketOption*, ABI::Windows::Graphics::Printing::PrintTicket::IPrintTicketOption*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Graphics.Printing.PrintTicket.PrintTicketOption>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Graphics::Printing::PrintTicket::PrintTicketOption*> __FIVectorView_1_Windows__CGraphics__CPrinting__CPrintTicket__CPrintTicketOption_t;
#define __FIVectorView_1_Windows__CGraphics__CPrinting__CPrintTicket__CPrintTicketOption ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CGraphics__CPrinting__CPrintTicket__CPrintTicketOption_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CGraphics__CPrinting__CPrintTicket__CPrintTicketOption ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Graphics::Printing::PrintTicket::IPrintTicketOption*>
//#define __FIVectorView_1_Windows__CGraphics__CPrinting__CPrintTicket__CPrintTicketOption_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Graphics::Printing::PrintTicket::IPrintTicketOption*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CGraphics__CPrinting__CPrintTicket__CPrintTicketOption_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                namespace PrintTicket {
                    class WorkflowPrintTicket;
                } /* Windows */
            } /* Graphics */
        } /* Printing */
    } /* PrintTicket */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicket_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicket_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("d486c08d-8e7c-5f8d-87ab-0df7ba06c5e3"))
IAsyncOperationCompletedHandler<ABI::Windows::Graphics::Printing::PrintTicket::WorkflowPrintTicket*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Graphics::Printing::PrintTicket::WorkflowPrintTicket*, ABI::Windows::Graphics::Printing::PrintTicket::IWorkflowPrintTicket*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Graphics.Printing.PrintTicket.WorkflowPrintTicket>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::Graphics::Printing::PrintTicket::WorkflowPrintTicket*> __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicket_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicket ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicket_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicket ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Graphics::Printing::PrintTicket::IWorkflowPrintTicket*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicket_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Graphics::Printing::PrintTicket::IWorkflowPrintTicket*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicket_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

#ifndef DEF___FIAsyncOperation_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicket_USE
#define DEF___FIAsyncOperation_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicket_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("26aedf79-0659-5a5d-9acf-b4423eefdebb"))
IAsyncOperation<ABI::Windows::Graphics::Printing::PrintTicket::WorkflowPrintTicket*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Graphics::Printing::PrintTicket::WorkflowPrintTicket*, ABI::Windows::Graphics::Printing::PrintTicket::IWorkflowPrintTicket*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Graphics.Printing.PrintTicket.WorkflowPrintTicket>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::Graphics::Printing::PrintTicket::WorkflowPrintTicket*> __FIAsyncOperation_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicket_t;
#define __FIAsyncOperation_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicket ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicket_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicket ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Graphics::Printing::PrintTicket::IWorkflowPrintTicket*>
//#define __FIAsyncOperation_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicket_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Graphics::Printing::PrintTicket::IWorkflowPrintTicket*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicket_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                namespace PrintTicket {
                    class WorkflowPrintTicketValidationResult;
                } /* Windows */
            } /* Graphics */
        } /* Printing */
    } /* PrintTicket */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicketValidationResult_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicketValidationResult_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("3b0bfff8-0d4b-51eb-b040-493de1addab9"))
IAsyncOperationCompletedHandler<ABI::Windows::Graphics::Printing::PrintTicket::WorkflowPrintTicketValidationResult*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Graphics::Printing::PrintTicket::WorkflowPrintTicketValidationResult*, ABI::Windows::Graphics::Printing::PrintTicket::IWorkflowPrintTicketValidationResult*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Graphics.Printing.PrintTicket.WorkflowPrintTicketValidationResult>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::Graphics::Printing::PrintTicket::WorkflowPrintTicketValidationResult*> __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicketValidationResult_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicketValidationResult ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicketValidationResult_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicketValidationResult ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Graphics::Printing::PrintTicket::IWorkflowPrintTicketValidationResult*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicketValidationResult_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Graphics::Printing::PrintTicket::IWorkflowPrintTicketValidationResult*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicketValidationResult_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

#ifndef DEF___FIAsyncOperation_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicketValidationResult_USE
#define DEF___FIAsyncOperation_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicketValidationResult_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("f47c8f81-23ef-5a68-8840-700747b10999"))
IAsyncOperation<ABI::Windows::Graphics::Printing::PrintTicket::WorkflowPrintTicketValidationResult*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Graphics::Printing::PrintTicket::WorkflowPrintTicketValidationResult*, ABI::Windows::Graphics::Printing::PrintTicket::IWorkflowPrintTicketValidationResult*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Graphics.Printing.PrintTicket.WorkflowPrintTicketValidationResult>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::Graphics::Printing::PrintTicket::WorkflowPrintTicketValidationResult*> __FIAsyncOperation_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicketValidationResult_t;
#define __FIAsyncOperation_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicketValidationResult ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicketValidationResult_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicketValidationResult ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Graphics::Printing::PrintTicket::IWorkflowPrintTicketValidationResult*>
//#define __FIAsyncOperation_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicketValidationResult_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Graphics::Printing::PrintTicket::IWorkflowPrintTicketValidationResult*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicketValidationResult_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000



#ifndef ____x_ABI_CWindows_CData_CXml_CDom_CIXmlNode_FWD_DEFINED__
#define ____x_ABI_CWindows_CData_CXml_CDom_CIXmlNode_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Data {
            namespace Xml {
                namespace Dom {
                    interface IXmlNode;
                } /* Windows */
            } /* Data */
        } /* Xml */
    } /* Dom */} /* ABI */
#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode ABI::Windows::Data::Xml::Dom::IXmlNode

#endif // ____x_ABI_CWindows_CData_CXml_CDom_CIXmlNode_FWD_DEFINED__






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
        namespace Graphics {
            namespace Printing {
                namespace PrintTicket {
                    
                    typedef enum PrintTicketFeatureSelectionType : int PrintTicketFeatureSelectionType;
                    
                } /* Windows */
            } /* Graphics */
        } /* Printing */
    } /* PrintTicket */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                namespace PrintTicket {
                    
                    typedef enum PrintTicketParameterDataType : int PrintTicketParameterDataType;
                    
                } /* Windows */
            } /* Graphics */
        } /* Printing */
    } /* PrintTicket */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                namespace PrintTicket {
                    
                    typedef enum PrintTicketValueType : int PrintTicketValueType;
                    
                } /* Windows */
            } /* Graphics */
        } /* Printing */
    } /* PrintTicket */} /* ABI */









namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                namespace PrintTicket {
                    class PrintTicketCapabilities;
                } /* Windows */
            } /* Graphics */
        } /* Printing */
    } /* PrintTicket */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                namespace PrintTicket {
                    class PrintTicketFeature;
                } /* Windows */
            } /* Graphics */
        } /* Printing */
    } /* PrintTicket */} /* ABI */



namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                namespace PrintTicket {
                    class PrintTicketParameterDefinition;
                } /* Windows */
            } /* Graphics */
        } /* Printing */
    } /* PrintTicket */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                namespace PrintTicket {
                    class PrintTicketParameterInitializer;
                } /* Windows */
            } /* Graphics */
        } /* Printing */
    } /* PrintTicket */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                namespace PrintTicket {
                    class PrintTicketValue;
                } /* Windows */
            } /* Graphics */
        } /* Printing */
    } /* PrintTicket */} /* ABI */














/*
 *
 * Struct Windows.Graphics.Printing.PrintTicket.PrintTicketFeatureSelectionType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                namespace PrintTicket {
                    /* [v1_enum, contract] */
                    enum PrintTicketFeatureSelectionType : int
                    {
                        PrintTicketFeatureSelectionType_PickOne = 0,
                        PrintTicketFeatureSelectionType_PickMany = 1,
                    };
                    
                } /* Windows */
            } /* Graphics */
        } /* Printing */
    } /* PrintTicket */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Struct Windows.Graphics.Printing.PrintTicket.PrintTicketParameterDataType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                namespace PrintTicket {
                    /* [v1_enum, contract] */
                    enum PrintTicketParameterDataType : int
                    {
                        PrintTicketParameterDataType_Integer = 0,
                        PrintTicketParameterDataType_NumericString = 1,
                        PrintTicketParameterDataType_String = 2,
                    };
                    
                } /* Windows */
            } /* Graphics */
        } /* Printing */
    } /* PrintTicket */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Struct Windows.Graphics.Printing.PrintTicket.PrintTicketValueType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                namespace PrintTicket {
                    /* [v1_enum, contract] */
                    enum PrintTicketValueType : int
                    {
                        PrintTicketValueType_Integer = 0,
                        PrintTicketValueType_String = 1,
                        PrintTicketValueType_Unknown = 2,
                    };
                    
                } /* Windows */
            } /* Graphics */
        } /* Printing */
    } /* PrintTicket */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.Graphics.Printing.PrintTicket.IPrintTicketCapabilities
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.Graphics.Printing.PrintTicket.PrintTicketCapabilities
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketCapabilities_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketCapabilities_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing_PrintTicket_IPrintTicketCapabilities[] = L"Windows.Graphics.Printing.PrintTicket.IPrintTicketCapabilities";
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                namespace PrintTicket {
                    /* [object, uuid("8C45508B-BBDC-4256-A142-2FD615ECB416"), exclusiveto, contract] */
                    MIDL_INTERFACE("8C45508B-BBDC-4256-A142-2FD615ECB416")
                    IPrintTicketCapabilities : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Name(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_XmlNamespace(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_XmlNode(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Data::Xml::Dom::IXmlNode * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DocumentBindingFeature(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Graphics::Printing::PrintTicket::IPrintTicketFeature * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DocumentCollateFeature(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Graphics::Printing::PrintTicket::IPrintTicketFeature * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DocumentDuplexFeature(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Graphics::Printing::PrintTicket::IPrintTicketFeature * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DocumentHolePunchFeature(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Graphics::Printing::PrintTicket::IPrintTicketFeature * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DocumentInputBinFeature(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Graphics::Printing::PrintTicket::IPrintTicketFeature * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DocumentNUpFeature(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Graphics::Printing::PrintTicket::IPrintTicketFeature * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DocumentStapleFeature(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Graphics::Printing::PrintTicket::IPrintTicketFeature * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_JobPasscodeFeature(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Graphics::Printing::PrintTicket::IPrintTicketFeature * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PageBorderlessFeature(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Graphics::Printing::PrintTicket::IPrintTicketFeature * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PageMediaSizeFeature(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Graphics::Printing::PrintTicket::IPrintTicketFeature * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PageMediaTypeFeature(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Graphics::Printing::PrintTicket::IPrintTicketFeature * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PageOrientationFeature(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Graphics::Printing::PrintTicket::IPrintTicketFeature * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PageOutputColorFeature(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Graphics::Printing::PrintTicket::IPrintTicketFeature * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PageOutputQualityFeature(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Graphics::Printing::PrintTicket::IPrintTicketFeature * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PageResolutionFeature(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Graphics::Printing::PrintTicket::IPrintTicketFeature * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetFeature(
                            /* [in] */__RPC__in HSTRING name,
                            /* [in] */__RPC__in HSTRING xmlNamespace,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Graphics::Printing::PrintTicket::IPrintTicketFeature * * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetParameterDefinition(
                            /* [in] */__RPC__in HSTRING name,
                            /* [in] */__RPC__in HSTRING xmlNamespace,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Graphics::Printing::PrintTicket::IPrintTicketParameterDefinition * * result
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IPrintTicketCapabilities=_uuidof(IPrintTicketCapabilities);
                    
                } /* Windows */
            } /* Graphics */
        } /* Printing */
    } /* PrintTicket */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketCapabilities;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketCapabilities_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.Graphics.Printing.PrintTicket.IPrintTicketFeature
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.Graphics.Printing.PrintTicket.PrintTicketFeature
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketFeature_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketFeature_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing_PrintTicket_IPrintTicketFeature[] = L"Windows.Graphics.Printing.PrintTicket.IPrintTicketFeature";
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                namespace PrintTicket {
                    /* [object, uuid("E7607D6A-59F5-4103-8858-B97710963D39"), exclusiveto, contract] */
                    MIDL_INTERFACE("E7607D6A-59F5-4103-8858-B97710963D39")
                    IPrintTicketFeature : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Name(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_XmlNamespace(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_XmlNode(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Data::Xml::Dom::IXmlNode * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DisplayName(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetOption(
                            /* [in] */__RPC__in HSTRING name,
                            /* [in] */__RPC__in HSTRING xmlNamespace,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Graphics::Printing::PrintTicket::IPrintTicketOption * * result
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Options(
                            /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CGraphics__CPrinting__CPrintTicket__CPrintTicketOption * * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetSelectedOption(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Graphics::Printing::PrintTicket::IPrintTicketOption * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetSelectedOption(
                            /* [in] */__RPC__in_opt ABI::Windows::Graphics::Printing::PrintTicket::IPrintTicketOption * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SelectionType(
                            /* [retval, out] */__RPC__out ABI::Windows::Graphics::Printing::PrintTicket::PrintTicketFeatureSelectionType * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IPrintTicketFeature=_uuidof(IPrintTicketFeature);
                    
                } /* Windows */
            } /* Graphics */
        } /* Printing */
    } /* PrintTicket */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketFeature;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketFeature_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.Graphics.Printing.PrintTicket.IPrintTicketOption
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.Graphics.Printing.PrintTicket.PrintTicketOption
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketOption_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketOption_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing_PrintTicket_IPrintTicketOption[] = L"Windows.Graphics.Printing.PrintTicket.IPrintTicketOption";
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                namespace PrintTicket {
                    /* [object, uuid("B086CF90-B367-4E4B-BD48-9C78A0BB31CE"), exclusiveto, contract] */
                    MIDL_INTERFACE("B086CF90-B367-4E4B-BD48-9C78A0BB31CE")
                    IPrintTicketOption : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Name(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_XmlNamespace(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_XmlNode(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Data::Xml::Dom::IXmlNode * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DisplayName(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetPropertyNode(
                            /* [in] */__RPC__in HSTRING name,
                            /* [in] */__RPC__in HSTRING xmlNamespace,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Data::Xml::Dom::IXmlNode * * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetScoredPropertyNode(
                            /* [in] */__RPC__in HSTRING name,
                            /* [in] */__RPC__in HSTRING xmlNamespace,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Data::Xml::Dom::IXmlNode * * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetPropertyValue(
                            /* [in] */__RPC__in HSTRING name,
                            /* [in] */__RPC__in HSTRING xmlNamespace,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Graphics::Printing::PrintTicket::IPrintTicketValue * * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetScoredPropertyValue(
                            /* [in] */__RPC__in HSTRING name,
                            /* [in] */__RPC__in HSTRING xmlNamespace,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Graphics::Printing::PrintTicket::IPrintTicketValue * * result
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IPrintTicketOption=_uuidof(IPrintTicketOption);
                    
                } /* Windows */
            } /* Graphics */
        } /* Printing */
    } /* PrintTicket */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketOption;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketOption_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.Graphics.Printing.PrintTicket.IPrintTicketParameterDefinition
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.Graphics.Printing.PrintTicket.PrintTicketParameterDefinition
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketParameterDefinition_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketParameterDefinition_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing_PrintTicket_IPrintTicketParameterDefinition[] = L"Windows.Graphics.Printing.PrintTicket.IPrintTicketParameterDefinition";
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                namespace PrintTicket {
                    /* [object, uuid("D6BAB4E4-2962-4C01-B7F3-9A9294EB8335"), exclusiveto, contract] */
                    MIDL_INTERFACE("D6BAB4E4-2962-4C01-B7F3-9A9294EB8335")
                    IPrintTicketParameterDefinition : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Name(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_XmlNamespace(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_XmlNode(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Data::Xml::Dom::IXmlNode * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DataType(
                            /* [retval, out] */__RPC__out ABI::Windows::Graphics::Printing::PrintTicket::PrintTicketParameterDataType * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_UnitType(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RangeMin(
                            /* [retval, out] */__RPC__out INT32 * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RangeMax(
                            /* [retval, out] */__RPC__out INT32 * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IPrintTicketParameterDefinition=_uuidof(IPrintTicketParameterDefinition);
                    
                } /* Windows */
            } /* Graphics */
        } /* Printing */
    } /* PrintTicket */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketParameterDefinition;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketParameterDefinition_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.Graphics.Printing.PrintTicket.IPrintTicketParameterInitializer
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.Graphics.Printing.PrintTicket.PrintTicketParameterInitializer
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketParameterInitializer_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketParameterInitializer_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing_PrintTicket_IPrintTicketParameterInitializer[] = L"Windows.Graphics.Printing.PrintTicket.IPrintTicketParameterInitializer";
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                namespace PrintTicket {
                    /* [object, uuid("5E3335BB-A0A5-48B1-9D5C-07116DDC597A"), exclusiveto, contract] */
                    MIDL_INTERFACE("5E3335BB-A0A5-48B1-9D5C-07116DDC597A")
                    IPrintTicketParameterInitializer : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Name(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_XmlNamespace(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_XmlNode(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Data::Xml::Dom::IXmlNode * * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Value(
                            /* [in] */__RPC__in_opt ABI::Windows::Graphics::Printing::PrintTicket::IPrintTicketValue * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Value(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Graphics::Printing::PrintTicket::IPrintTicketValue * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IPrintTicketParameterInitializer=_uuidof(IPrintTicketParameterInitializer);
                    
                } /* Windows */
            } /* Graphics */
        } /* Printing */
    } /* PrintTicket */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketParameterInitializer;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketParameterInitializer_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.Graphics.Printing.PrintTicket.IPrintTicketValue
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.Graphics.Printing.PrintTicket.PrintTicketValue
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketValue_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketValue_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing_PrintTicket_IPrintTicketValue[] = L"Windows.Graphics.Printing.PrintTicket.IPrintTicketValue";
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                namespace PrintTicket {
                    /* [object, uuid("66B30A32-244D-4E22-A98B-BB3CF1F2DD91"), exclusiveto, contract] */
                    MIDL_INTERFACE("66B30A32-244D-4E22-A98B-BB3CF1F2DD91")
                    IPrintTicketValue : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Type(
                            /* [retval, out] */__RPC__out ABI::Windows::Graphics::Printing::PrintTicket::PrintTicketValueType * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetValueAsInteger(
                            /* [retval, out] */__RPC__out INT32 * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetValueAsString(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IPrintTicketValue=_uuidof(IPrintTicketValue);
                    
                } /* Windows */
            } /* Graphics */
        } /* Printing */
    } /* PrintTicket */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketValue;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketValue_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.Graphics.Printing.PrintTicket.IWorkflowPrintTicket
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.Graphics.Printing.PrintTicket.WorkflowPrintTicket
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicket_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicket_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing_PrintTicket_IWorkflowPrintTicket[] = L"Windows.Graphics.Printing.PrintTicket.IWorkflowPrintTicket";
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                namespace PrintTicket {
                    /* [object, uuid("41D52285-35E8-448E-A8C5-E4B6A2CF826C"), exclusiveto, contract] */
                    MIDL_INTERFACE("41D52285-35E8-448E-A8C5-E4B6A2CF826C")
                    IWorkflowPrintTicket : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Name(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_XmlNamespace(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_XmlNode(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Data::Xml::Dom::IXmlNode * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetCapabilities(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Graphics::Printing::PrintTicket::IPrintTicketCapabilities * * result
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DocumentBindingFeature(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Graphics::Printing::PrintTicket::IPrintTicketFeature * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DocumentCollateFeature(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Graphics::Printing::PrintTicket::IPrintTicketFeature * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DocumentDuplexFeature(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Graphics::Printing::PrintTicket::IPrintTicketFeature * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DocumentHolePunchFeature(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Graphics::Printing::PrintTicket::IPrintTicketFeature * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DocumentInputBinFeature(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Graphics::Printing::PrintTicket::IPrintTicketFeature * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DocumentNUpFeature(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Graphics::Printing::PrintTicket::IPrintTicketFeature * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DocumentStapleFeature(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Graphics::Printing::PrintTicket::IPrintTicketFeature * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_JobPasscodeFeature(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Graphics::Printing::PrintTicket::IPrintTicketFeature * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PageBorderlessFeature(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Graphics::Printing::PrintTicket::IPrintTicketFeature * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PageMediaSizeFeature(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Graphics::Printing::PrintTicket::IPrintTicketFeature * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PageMediaTypeFeature(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Graphics::Printing::PrintTicket::IPrintTicketFeature * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PageOrientationFeature(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Graphics::Printing::PrintTicket::IPrintTicketFeature * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PageOutputColorFeature(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Graphics::Printing::PrintTicket::IPrintTicketFeature * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PageOutputQualityFeature(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Graphics::Printing::PrintTicket::IPrintTicketFeature * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PageResolutionFeature(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Graphics::Printing::PrintTicket::IPrintTicketFeature * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetFeature(
                            /* [in] */__RPC__in HSTRING name,
                            /* [in] */__RPC__in HSTRING xmlNamespace,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Graphics::Printing::PrintTicket::IPrintTicketFeature * * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE NotifyXmlChangedAsync(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * operation
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE ValidateAsync(
                            /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicketValidationResult * * operation
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetParameterInitializer(
                            /* [in] */__RPC__in HSTRING name,
                            /* [in] */__RPC__in HSTRING xmlNamespace,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Graphics::Printing::PrintTicket::IPrintTicketParameterInitializer * * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetParameterInitializerAsInteger(
                            /* [in] */__RPC__in HSTRING name,
                            /* [in] */__RPC__in HSTRING xmlNamespace,
                            /* [in] */INT32 integerValue,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Graphics::Printing::PrintTicket::IPrintTicketParameterInitializer * * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetParameterInitializerAsString(
                            /* [in] */__RPC__in HSTRING name,
                            /* [in] */__RPC__in HSTRING xmlNamespace,
                            /* [in] */__RPC__in HSTRING stringValue,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Graphics::Printing::PrintTicket::IPrintTicketParameterInitializer * * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE MergeAndValidateTicket(
                            /* [in] */__RPC__in_opt ABI::Windows::Graphics::Printing::PrintTicket::IWorkflowPrintTicket * deltaShemaTicket,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Graphics::Printing::PrintTicket::IWorkflowPrintTicket * * result
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IWorkflowPrintTicket=_uuidof(IWorkflowPrintTicket);
                    
                } /* Windows */
            } /* Graphics */
        } /* Printing */
    } /* PrintTicket */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicket;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicket_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.Graphics.Printing.PrintTicket.IWorkflowPrintTicketValidationResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.Graphics.Printing.PrintTicket.WorkflowPrintTicketValidationResult
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicketValidationResult_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicketValidationResult_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing_PrintTicket_IWorkflowPrintTicketValidationResult[] = L"Windows.Graphics.Printing.PrintTicket.IWorkflowPrintTicketValidationResult";
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                namespace PrintTicket {
                    /* [object, uuid("0AD1F392-DA7B-4A36-BF36-6A99A62E2059"), exclusiveto, contract] */
                    MIDL_INTERFACE("0AD1F392-DA7B-4A36-BF36-6A99A62E2059")
                    IWorkflowPrintTicketValidationResult : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Validated(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ExtendedError(
                            /* [retval, out] */__RPC__out HRESULT * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IWorkflowPrintTicketValidationResult=_uuidof(IWorkflowPrintTicketValidationResult);
                    
                } /* Windows */
            } /* Graphics */
        } /* Printing */
    } /* PrintTicket */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicketValidationResult;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicketValidationResult_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Class Windows.Graphics.Printing.PrintTicket.PrintTicketCapabilities
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Graphics.Printing.PrintTicket.IPrintTicketCapabilities ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

#ifndef RUNTIMECLASS_Windows_Graphics_Printing_PrintTicket_PrintTicketCapabilities_DEFINED
#define RUNTIMECLASS_Windows_Graphics_Printing_PrintTicket_PrintTicketCapabilities_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Printing_PrintTicket_PrintTicketCapabilities[] = L"Windows.Graphics.Printing.PrintTicket.PrintTicketCapabilities";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Class Windows.Graphics.Printing.PrintTicket.PrintTicketFeature
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Graphics.Printing.PrintTicket.IPrintTicketFeature ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

#ifndef RUNTIMECLASS_Windows_Graphics_Printing_PrintTicket_PrintTicketFeature_DEFINED
#define RUNTIMECLASS_Windows_Graphics_Printing_PrintTicket_PrintTicketFeature_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Printing_PrintTicket_PrintTicketFeature[] = L"Windows.Graphics.Printing.PrintTicket.PrintTicketFeature";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Class Windows.Graphics.Printing.PrintTicket.PrintTicketOption
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Graphics.Printing.PrintTicket.IPrintTicketOption ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

#ifndef RUNTIMECLASS_Windows_Graphics_Printing_PrintTicket_PrintTicketOption_DEFINED
#define RUNTIMECLASS_Windows_Graphics_Printing_PrintTicket_PrintTicketOption_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Printing_PrintTicket_PrintTicketOption[] = L"Windows.Graphics.Printing.PrintTicket.PrintTicketOption";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Class Windows.Graphics.Printing.PrintTicket.PrintTicketParameterDefinition
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Graphics.Printing.PrintTicket.IPrintTicketParameterDefinition ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

#ifndef RUNTIMECLASS_Windows_Graphics_Printing_PrintTicket_PrintTicketParameterDefinition_DEFINED
#define RUNTIMECLASS_Windows_Graphics_Printing_PrintTicket_PrintTicketParameterDefinition_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Printing_PrintTicket_PrintTicketParameterDefinition[] = L"Windows.Graphics.Printing.PrintTicket.PrintTicketParameterDefinition";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Class Windows.Graphics.Printing.PrintTicket.PrintTicketParameterInitializer
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Graphics.Printing.PrintTicket.IPrintTicketParameterInitializer ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

#ifndef RUNTIMECLASS_Windows_Graphics_Printing_PrintTicket_PrintTicketParameterInitializer_DEFINED
#define RUNTIMECLASS_Windows_Graphics_Printing_PrintTicket_PrintTicketParameterInitializer_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Printing_PrintTicket_PrintTicketParameterInitializer[] = L"Windows.Graphics.Printing.PrintTicket.PrintTicketParameterInitializer";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Class Windows.Graphics.Printing.PrintTicket.PrintTicketValue
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Graphics.Printing.PrintTicket.IPrintTicketValue ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

#ifndef RUNTIMECLASS_Windows_Graphics_Printing_PrintTicket_PrintTicketValue_DEFINED
#define RUNTIMECLASS_Windows_Graphics_Printing_PrintTicket_PrintTicketValue_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Printing_PrintTicket_PrintTicketValue[] = L"Windows.Graphics.Printing.PrintTicket.PrintTicketValue";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Class Windows.Graphics.Printing.PrintTicket.WorkflowPrintTicket
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Graphics.Printing.PrintTicket.IWorkflowPrintTicket ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

#ifndef RUNTIMECLASS_Windows_Graphics_Printing_PrintTicket_WorkflowPrintTicket_DEFINED
#define RUNTIMECLASS_Windows_Graphics_Printing_PrintTicket_WorkflowPrintTicket_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Printing_PrintTicket_WorkflowPrintTicket[] = L"Windows.Graphics.Printing.PrintTicket.WorkflowPrintTicket";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Class Windows.Graphics.Printing.PrintTicket.WorkflowPrintTicketValidationResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Graphics.Printing.PrintTicket.IWorkflowPrintTicketValidationResult ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

#ifndef RUNTIMECLASS_Windows_Graphics_Printing_PrintTicket_WorkflowPrintTicketValidationResult_DEFINED
#define RUNTIMECLASS_Windows_Graphics_Printing_PrintTicket_WorkflowPrintTicketValidationResult_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Printing_PrintTicket_WorkflowPrintTicketValidationResult[] = L"Windows.Graphics.Printing.PrintTicket.WorkflowPrintTicketValidationResult";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000





#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketCapabilities_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketCapabilities_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketCapabilities __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketCapabilities;

#endif // ____x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketCapabilities_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketFeature_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketFeature_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketFeature __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketFeature;

#endif // ____x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketFeature_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketOption_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketOption_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketOption __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketOption;

#endif // ____x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketOption_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketParameterDefinition_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketParameterDefinition_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketParameterDefinition __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketParameterDefinition;

#endif // ____x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketParameterDefinition_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketParameterInitializer_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketParameterInitializer_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketParameterInitializer __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketParameterInitializer;

#endif // ____x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketParameterInitializer_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketValue_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketValue_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketValue __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketValue;

#endif // ____x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketValue_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicket_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicket_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicket __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicket;

#endif // ____x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicket_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicketValidationResult_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicketValidationResult_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicketValidationResult __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicketValidationResult;

#endif // ____x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicketValidationResult_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____FIIterator_1_Windows__CGraphics__CPrinting__CPrintTicket__CPrintTicketOption_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CGraphics__CPrinting__CPrintTicket__CPrintTicketOption_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CGraphics__CPrinting__CPrintTicket__CPrintTicketOption __FIIterator_1_Windows__CGraphics__CPrinting__CPrintTicket__CPrintTicketOption;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CGraphics__CPrinting__CPrintTicket__CPrintTicketOption;

typedef struct __FIIterator_1_Windows__CGraphics__CPrinting__CPrintTicket__CPrintTicketOptionVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CGraphics__CPrinting__CPrintTicket__CPrintTicketOption * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CGraphics__CPrinting__CPrintTicket__CPrintTicketOption * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CGraphics__CPrinting__CPrintTicket__CPrintTicketOption * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CGraphics__CPrinting__CPrintTicket__CPrintTicketOption * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CGraphics__CPrinting__CPrintTicket__CPrintTicketOption * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CGraphics__CPrinting__CPrintTicket__CPrintTicketOption * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CGraphics__CPrinting__CPrintTicket__CPrintTicketOption * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketOption * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CGraphics__CPrinting__CPrintTicket__CPrintTicketOption * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CGraphics__CPrinting__CPrintTicket__CPrintTicketOption * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CGraphics__CPrinting__CPrintTicket__CPrintTicketOption * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketOption * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CGraphics__CPrinting__CPrintTicket__CPrintTicketOptionVtbl;

interface __FIIterator_1_Windows__CGraphics__CPrinting__CPrintTicket__CPrintTicketOption
{
    CONST_VTBL struct __FIIterator_1_Windows__CGraphics__CPrinting__CPrintTicket__CPrintTicketOptionVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CGraphics__CPrinting__CPrintTicket__CPrintTicketOption_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CGraphics__CPrinting__CPrintTicket__CPrintTicketOption_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CGraphics__CPrinting__CPrintTicket__CPrintTicketOption_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CGraphics__CPrinting__CPrintTicket__CPrintTicketOption_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CGraphics__CPrinting__CPrintTicket__CPrintTicketOption_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CGraphics__CPrinting__CPrintTicket__CPrintTicketOption_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CGraphics__CPrinting__CPrintTicket__CPrintTicketOption_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CGraphics__CPrinting__CPrintTicket__CPrintTicketOption_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CGraphics__CPrinting__CPrintTicket__CPrintTicketOption_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CGraphics__CPrinting__CPrintTicket__CPrintTicketOption_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CGraphics__CPrinting__CPrintTicket__CPrintTicketOption_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____FIIterable_1_Windows__CGraphics__CPrinting__CPrintTicket__CPrintTicketOption_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CGraphics__CPrinting__CPrintTicket__CPrintTicketOption_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CGraphics__CPrinting__CPrintTicket__CPrintTicketOption __FIIterable_1_Windows__CGraphics__CPrinting__CPrintTicket__CPrintTicketOption;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CGraphics__CPrinting__CPrintTicket__CPrintTicketOption;

typedef  struct __FIIterable_1_Windows__CGraphics__CPrinting__CPrintTicket__CPrintTicketOptionVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CGraphics__CPrinting__CPrintTicket__CPrintTicketOption * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CGraphics__CPrinting__CPrintTicket__CPrintTicketOption * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CGraphics__CPrinting__CPrintTicket__CPrintTicketOption * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CGraphics__CPrinting__CPrintTicket__CPrintTicketOption * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CGraphics__CPrinting__CPrintTicket__CPrintTicketOption * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CGraphics__CPrinting__CPrintTicket__CPrintTicketOption * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CGraphics__CPrinting__CPrintTicket__CPrintTicketOption * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CGraphics__CPrinting__CPrintTicket__CPrintTicketOption **first);

    END_INTERFACE
} __FIIterable_1_Windows__CGraphics__CPrinting__CPrintTicket__CPrintTicketOptionVtbl;

interface __FIIterable_1_Windows__CGraphics__CPrinting__CPrintTicket__CPrintTicketOption
{
    CONST_VTBL struct __FIIterable_1_Windows__CGraphics__CPrinting__CPrintTicket__CPrintTicketOptionVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CGraphics__CPrinting__CPrintTicket__CPrintTicketOption_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CGraphics__CPrinting__CPrintTicket__CPrintTicketOption_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CGraphics__CPrinting__CPrintTicket__CPrintTicketOption_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CGraphics__CPrinting__CPrintTicket__CPrintTicketOption_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CGraphics__CPrinting__CPrintTicket__CPrintTicketOption_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CGraphics__CPrinting__CPrintTicket__CPrintTicketOption_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CGraphics__CPrinting__CPrintTicket__CPrintTicketOption_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CGraphics__CPrinting__CPrintTicket__CPrintTicketOption_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____FIVectorView_1_Windows__CGraphics__CPrinting__CPrintTicket__CPrintTicketOption_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CGraphics__CPrinting__CPrintTicket__CPrintTicketOption_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CGraphics__CPrinting__CPrintTicket__CPrintTicketOption __FIVectorView_1_Windows__CGraphics__CPrinting__CPrintTicket__CPrintTicketOption;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CGraphics__CPrinting__CPrintTicket__CPrintTicketOption;

typedef struct __FIVectorView_1_Windows__CGraphics__CPrinting__CPrintTicket__CPrintTicketOptionVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting__CPrintTicket__CPrintTicketOption * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting__CPrintTicket__CPrintTicketOption * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting__CPrintTicket__CPrintTicketOption * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting__CPrintTicket__CPrintTicketOption * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting__CPrintTicket__CPrintTicketOption * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting__CPrintTicket__CPrintTicketOption * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting__CPrintTicket__CPrintTicketOption * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketOption * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting__CPrintTicket__CPrintTicketOption * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting__CPrintTicket__CPrintTicketOption * This,
            /* [in] */ __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketOption * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CGraphics__CPrinting__CPrintTicket__CPrintTicketOption * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketOption * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CGraphics__CPrinting__CPrintTicket__CPrintTicketOptionVtbl;

interface __FIVectorView_1_Windows__CGraphics__CPrinting__CPrintTicket__CPrintTicketOption
{
    CONST_VTBL struct __FIVectorView_1_Windows__CGraphics__CPrinting__CPrintTicket__CPrintTicketOptionVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CGraphics__CPrinting__CPrintTicket__CPrintTicketOption_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CGraphics__CPrinting__CPrintTicket__CPrintTicketOption_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CGraphics__CPrinting__CPrintTicket__CPrintTicketOption_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CGraphics__CPrinting__CPrintTicket__CPrintTicketOption_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CGraphics__CPrinting__CPrintTicket__CPrintTicketOption_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CGraphics__CPrinting__CPrintTicket__CPrintTicketOption_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CGraphics__CPrinting__CPrintTicket__CPrintTicketOption_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CGraphics__CPrinting__CPrintTicket__CPrintTicketOption_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CGraphics__CPrinting__CPrintTicket__CPrintTicketOption_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CGraphics__CPrinting__CPrintTicket__CPrintTicketOption_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CGraphics__CPrinting__CPrintTicket__CPrintTicketOption_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicket_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicket_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicket __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicket;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicket;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicket __FIAsyncOperation_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicket;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicketVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicket * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicket * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicket * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicket * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicket *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicketVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicket
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicketVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicket_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicket_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicket_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicket_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicket_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____FIAsyncOperation_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicket_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicket_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicket __FIAsyncOperation_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicket;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicket;

typedef struct __FIAsyncOperation_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicketVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicket * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicket * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicket * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicket * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicket * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicket * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicket * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicket *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicket * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicket **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicket * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicket * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicketVtbl;

interface __FIAsyncOperation_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicket
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicketVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicket_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicket_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicket_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicket_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicket_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicket_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicket_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicket_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicket_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicket_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicketValidationResult_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicketValidationResult_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicketValidationResult __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicketValidationResult;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicketValidationResult;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicketValidationResult __FIAsyncOperation_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicketValidationResult;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicketValidationResultVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicketValidationResult * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicketValidationResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicketValidationResult * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicketValidationResult * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicketValidationResult *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicketValidationResultVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicketValidationResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicketValidationResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicketValidationResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicketValidationResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicketValidationResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicketValidationResult_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicketValidationResult_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____FIAsyncOperation_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicketValidationResult_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicketValidationResult_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicketValidationResult __FIAsyncOperation_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicketValidationResult;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicketValidationResult;

typedef struct __FIAsyncOperation_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicketValidationResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicketValidationResult * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicketValidationResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicketValidationResult * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicketValidationResult * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicketValidationResult * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicketValidationResult * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicketValidationResult * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicketValidationResult *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicketValidationResult * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicketValidationResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicketValidationResult * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicketValidationResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicketValidationResultVtbl;

interface __FIAsyncOperation_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicketValidationResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicketValidationResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicketValidationResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicketValidationResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicketValidationResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicketValidationResult_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicketValidationResult_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicketValidationResult_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicketValidationResult_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicketValidationResult_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicketValidationResult_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicketValidationResult_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


#ifndef ____x_ABI_CWindows_CData_CXml_CDom_CIXmlNode_FWD_DEFINED__
#define ____x_ABI_CWindows_CData_CXml_CDom_CIXmlNode_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode;

#endif // ____x_ABI_CWindows_CData_CXml_CDom_CIXmlNode_FWD_DEFINED__






#ifndef ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIAsyncAction __x_ABI_CWindows_CFoundation_CIAsyncAction;

#endif // ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__






typedef enum __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CPrintTicketFeatureSelectionType __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CPrintTicketFeatureSelectionType;


typedef enum __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CPrintTicketParameterDataType __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CPrintTicketParameterDataType;


typedef enum __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CPrintTicketValueType __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CPrintTicketValueType;



























/*
 *
 * Struct Windows.Graphics.Printing.PrintTicket.PrintTicketFeatureSelectionType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CPrintTicketFeatureSelectionType
{
    PrintTicketFeatureSelectionType_PickOne = 0,
    PrintTicketFeatureSelectionType_PickMany = 1,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Struct Windows.Graphics.Printing.PrintTicket.PrintTicketParameterDataType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CPrintTicketParameterDataType
{
    PrintTicketParameterDataType_Integer = 0,
    PrintTicketParameterDataType_NumericString = 1,
    PrintTicketParameterDataType_String = 2,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Struct Windows.Graphics.Printing.PrintTicket.PrintTicketValueType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CPrintTicketValueType
{
    PrintTicketValueType_Integer = 0,
    PrintTicketValueType_String = 1,
    PrintTicketValueType_Unknown = 2,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.Graphics.Printing.PrintTicket.IPrintTicketCapabilities
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.Graphics.Printing.PrintTicket.PrintTicketCapabilities
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketCapabilities_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketCapabilities_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing_PrintTicket_IPrintTicketCapabilities[] = L"Windows.Graphics.Printing.PrintTicket.IPrintTicketCapabilities";
/* [object, uuid("8C45508B-BBDC-4256-A142-2FD615ECB416"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketCapabilitiesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketCapabilities * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketCapabilities * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketCapabilities * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketCapabilities * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketCapabilities * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketCapabilities * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Name )(
        __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketCapabilities * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_XmlNamespace )(
        __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketCapabilities * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_XmlNode )(
        __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketCapabilities * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DocumentBindingFeature )(
        __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketCapabilities * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketFeature * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DocumentCollateFeature )(
        __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketCapabilities * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketFeature * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DocumentDuplexFeature )(
        __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketCapabilities * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketFeature * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DocumentHolePunchFeature )(
        __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketCapabilities * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketFeature * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DocumentInputBinFeature )(
        __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketCapabilities * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketFeature * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DocumentNUpFeature )(
        __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketCapabilities * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketFeature * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DocumentStapleFeature )(
        __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketCapabilities * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketFeature * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_JobPasscodeFeature )(
        __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketCapabilities * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketFeature * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PageBorderlessFeature )(
        __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketCapabilities * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketFeature * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PageMediaSizeFeature )(
        __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketCapabilities * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketFeature * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PageMediaTypeFeature )(
        __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketCapabilities * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketFeature * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PageOrientationFeature )(
        __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketCapabilities * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketFeature * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PageOutputColorFeature )(
        __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketCapabilities * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketFeature * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PageOutputQualityFeature )(
        __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketCapabilities * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketFeature * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PageResolutionFeature )(
        __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketCapabilities * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketFeature * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetFeature )(
        __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketCapabilities * This,
        /* [in] */__RPC__in HSTRING name,
        /* [in] */__RPC__in HSTRING xmlNamespace,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketFeature * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetParameterDefinition )(
        __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketCapabilities * This,
        /* [in] */__RPC__in HSTRING name,
        /* [in] */__RPC__in HSTRING xmlNamespace,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketParameterDefinition * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketCapabilitiesVtbl;

interface __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketCapabilities
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketCapabilitiesVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketCapabilities_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketCapabilities_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketCapabilities_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketCapabilities_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketCapabilities_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketCapabilities_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketCapabilities_get_Name(This,value) \
    ( (This)->lpVtbl->get_Name(This,value) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketCapabilities_get_XmlNamespace(This,value) \
    ( (This)->lpVtbl->get_XmlNamespace(This,value) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketCapabilities_get_XmlNode(This,value) \
    ( (This)->lpVtbl->get_XmlNode(This,value) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketCapabilities_get_DocumentBindingFeature(This,value) \
    ( (This)->lpVtbl->get_DocumentBindingFeature(This,value) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketCapabilities_get_DocumentCollateFeature(This,value) \
    ( (This)->lpVtbl->get_DocumentCollateFeature(This,value) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketCapabilities_get_DocumentDuplexFeature(This,value) \
    ( (This)->lpVtbl->get_DocumentDuplexFeature(This,value) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketCapabilities_get_DocumentHolePunchFeature(This,value) \
    ( (This)->lpVtbl->get_DocumentHolePunchFeature(This,value) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketCapabilities_get_DocumentInputBinFeature(This,value) \
    ( (This)->lpVtbl->get_DocumentInputBinFeature(This,value) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketCapabilities_get_DocumentNUpFeature(This,value) \
    ( (This)->lpVtbl->get_DocumentNUpFeature(This,value) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketCapabilities_get_DocumentStapleFeature(This,value) \
    ( (This)->lpVtbl->get_DocumentStapleFeature(This,value) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketCapabilities_get_JobPasscodeFeature(This,value) \
    ( (This)->lpVtbl->get_JobPasscodeFeature(This,value) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketCapabilities_get_PageBorderlessFeature(This,value) \
    ( (This)->lpVtbl->get_PageBorderlessFeature(This,value) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketCapabilities_get_PageMediaSizeFeature(This,value) \
    ( (This)->lpVtbl->get_PageMediaSizeFeature(This,value) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketCapabilities_get_PageMediaTypeFeature(This,value) \
    ( (This)->lpVtbl->get_PageMediaTypeFeature(This,value) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketCapabilities_get_PageOrientationFeature(This,value) \
    ( (This)->lpVtbl->get_PageOrientationFeature(This,value) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketCapabilities_get_PageOutputColorFeature(This,value) \
    ( (This)->lpVtbl->get_PageOutputColorFeature(This,value) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketCapabilities_get_PageOutputQualityFeature(This,value) \
    ( (This)->lpVtbl->get_PageOutputQualityFeature(This,value) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketCapabilities_get_PageResolutionFeature(This,value) \
    ( (This)->lpVtbl->get_PageResolutionFeature(This,value) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketCapabilities_GetFeature(This,name,xmlNamespace,result) \
    ( (This)->lpVtbl->GetFeature(This,name,xmlNamespace,result) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketCapabilities_GetParameterDefinition(This,name,xmlNamespace,result) \
    ( (This)->lpVtbl->GetParameterDefinition(This,name,xmlNamespace,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketCapabilities;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketCapabilities_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.Graphics.Printing.PrintTicket.IPrintTicketFeature
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.Graphics.Printing.PrintTicket.PrintTicketFeature
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketFeature_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketFeature_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing_PrintTicket_IPrintTicketFeature[] = L"Windows.Graphics.Printing.PrintTicket.IPrintTicketFeature";
/* [object, uuid("E7607D6A-59F5-4103-8858-B97710963D39"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketFeatureVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketFeature * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketFeature * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketFeature * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketFeature * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketFeature * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketFeature * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Name )(
        __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketFeature * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_XmlNamespace )(
        __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketFeature * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_XmlNode )(
        __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketFeature * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DisplayName )(
        __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketFeature * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetOption )(
        __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketFeature * This,
        /* [in] */__RPC__in HSTRING name,
        /* [in] */__RPC__in HSTRING xmlNamespace,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketOption * * result
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Options )(
        __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketFeature * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CGraphics__CPrinting__CPrintTicket__CPrintTicketOption * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetSelectedOption )(
        __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketFeature * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketOption * * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetSelectedOption )(
        __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketFeature * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketOption * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SelectionType )(
        __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketFeature * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CPrintTicketFeatureSelectionType * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketFeatureVtbl;

interface __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketFeature
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketFeatureVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketFeature_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketFeature_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketFeature_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketFeature_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketFeature_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketFeature_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketFeature_get_Name(This,value) \
    ( (This)->lpVtbl->get_Name(This,value) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketFeature_get_XmlNamespace(This,value) \
    ( (This)->lpVtbl->get_XmlNamespace(This,value) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketFeature_get_XmlNode(This,value) \
    ( (This)->lpVtbl->get_XmlNode(This,value) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketFeature_get_DisplayName(This,value) \
    ( (This)->lpVtbl->get_DisplayName(This,value) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketFeature_GetOption(This,name,xmlNamespace,result) \
    ( (This)->lpVtbl->GetOption(This,name,xmlNamespace,result) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketFeature_get_Options(This,result) \
    ( (This)->lpVtbl->get_Options(This,result) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketFeature_GetSelectedOption(This,value) \
    ( (This)->lpVtbl->GetSelectedOption(This,value) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketFeature_SetSelectedOption(This,value) \
    ( (This)->lpVtbl->SetSelectedOption(This,value) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketFeature_get_SelectionType(This,value) \
    ( (This)->lpVtbl->get_SelectionType(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketFeature;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketFeature_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.Graphics.Printing.PrintTicket.IPrintTicketOption
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.Graphics.Printing.PrintTicket.PrintTicketOption
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketOption_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketOption_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing_PrintTicket_IPrintTicketOption[] = L"Windows.Graphics.Printing.PrintTicket.IPrintTicketOption";
/* [object, uuid("B086CF90-B367-4E4B-BD48-9C78A0BB31CE"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketOptionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketOption * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketOption * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketOption * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketOption * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketOption * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketOption * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Name )(
        __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketOption * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_XmlNamespace )(
        __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketOption * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_XmlNode )(
        __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketOption * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DisplayName )(
        __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketOption * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetPropertyNode )(
        __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketOption * This,
        /* [in] */__RPC__in HSTRING name,
        /* [in] */__RPC__in HSTRING xmlNamespace,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetScoredPropertyNode )(
        __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketOption * This,
        /* [in] */__RPC__in HSTRING name,
        /* [in] */__RPC__in HSTRING xmlNamespace,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetPropertyValue )(
        __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketOption * This,
        /* [in] */__RPC__in HSTRING name,
        /* [in] */__RPC__in HSTRING xmlNamespace,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketValue * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetScoredPropertyValue )(
        __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketOption * This,
        /* [in] */__RPC__in HSTRING name,
        /* [in] */__RPC__in HSTRING xmlNamespace,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketValue * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketOptionVtbl;

interface __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketOption
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketOptionVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketOption_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketOption_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketOption_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketOption_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketOption_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketOption_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketOption_get_Name(This,value) \
    ( (This)->lpVtbl->get_Name(This,value) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketOption_get_XmlNamespace(This,value) \
    ( (This)->lpVtbl->get_XmlNamespace(This,value) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketOption_get_XmlNode(This,value) \
    ( (This)->lpVtbl->get_XmlNode(This,value) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketOption_get_DisplayName(This,value) \
    ( (This)->lpVtbl->get_DisplayName(This,value) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketOption_GetPropertyNode(This,name,xmlNamespace,result) \
    ( (This)->lpVtbl->GetPropertyNode(This,name,xmlNamespace,result) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketOption_GetScoredPropertyNode(This,name,xmlNamespace,result) \
    ( (This)->lpVtbl->GetScoredPropertyNode(This,name,xmlNamespace,result) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketOption_GetPropertyValue(This,name,xmlNamespace,result) \
    ( (This)->lpVtbl->GetPropertyValue(This,name,xmlNamespace,result) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketOption_GetScoredPropertyValue(This,name,xmlNamespace,result) \
    ( (This)->lpVtbl->GetScoredPropertyValue(This,name,xmlNamespace,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketOption;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketOption_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.Graphics.Printing.PrintTicket.IPrintTicketParameterDefinition
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.Graphics.Printing.PrintTicket.PrintTicketParameterDefinition
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketParameterDefinition_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketParameterDefinition_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing_PrintTicket_IPrintTicketParameterDefinition[] = L"Windows.Graphics.Printing.PrintTicket.IPrintTicketParameterDefinition";
/* [object, uuid("D6BAB4E4-2962-4C01-B7F3-9A9294EB8335"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketParameterDefinitionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketParameterDefinition * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketParameterDefinition * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketParameterDefinition * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketParameterDefinition * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketParameterDefinition * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketParameterDefinition * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Name )(
        __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketParameterDefinition * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_XmlNamespace )(
        __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketParameterDefinition * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_XmlNode )(
        __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketParameterDefinition * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DataType )(
        __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketParameterDefinition * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CPrintTicketParameterDataType * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_UnitType )(
        __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketParameterDefinition * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RangeMin )(
        __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketParameterDefinition * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RangeMax )(
        __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketParameterDefinition * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketParameterDefinitionVtbl;

interface __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketParameterDefinition
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketParameterDefinitionVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketParameterDefinition_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketParameterDefinition_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketParameterDefinition_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketParameterDefinition_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketParameterDefinition_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketParameterDefinition_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketParameterDefinition_get_Name(This,value) \
    ( (This)->lpVtbl->get_Name(This,value) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketParameterDefinition_get_XmlNamespace(This,value) \
    ( (This)->lpVtbl->get_XmlNamespace(This,value) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketParameterDefinition_get_XmlNode(This,value) \
    ( (This)->lpVtbl->get_XmlNode(This,value) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketParameterDefinition_get_DataType(This,value) \
    ( (This)->lpVtbl->get_DataType(This,value) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketParameterDefinition_get_UnitType(This,value) \
    ( (This)->lpVtbl->get_UnitType(This,value) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketParameterDefinition_get_RangeMin(This,value) \
    ( (This)->lpVtbl->get_RangeMin(This,value) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketParameterDefinition_get_RangeMax(This,value) \
    ( (This)->lpVtbl->get_RangeMax(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketParameterDefinition;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketParameterDefinition_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.Graphics.Printing.PrintTicket.IPrintTicketParameterInitializer
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.Graphics.Printing.PrintTicket.PrintTicketParameterInitializer
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketParameterInitializer_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketParameterInitializer_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing_PrintTicket_IPrintTicketParameterInitializer[] = L"Windows.Graphics.Printing.PrintTicket.IPrintTicketParameterInitializer";
/* [object, uuid("5E3335BB-A0A5-48B1-9D5C-07116DDC597A"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketParameterInitializerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketParameterInitializer * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketParameterInitializer * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketParameterInitializer * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketParameterInitializer * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketParameterInitializer * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketParameterInitializer * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Name )(
        __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketParameterInitializer * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_XmlNamespace )(
        __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketParameterInitializer * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_XmlNode )(
        __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketParameterInitializer * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Value )(
        __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketParameterInitializer * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketValue * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Value )(
        __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketParameterInitializer * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketValue * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketParameterInitializerVtbl;

interface __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketParameterInitializer
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketParameterInitializerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketParameterInitializer_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketParameterInitializer_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketParameterInitializer_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketParameterInitializer_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketParameterInitializer_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketParameterInitializer_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketParameterInitializer_get_Name(This,value) \
    ( (This)->lpVtbl->get_Name(This,value) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketParameterInitializer_get_XmlNamespace(This,value) \
    ( (This)->lpVtbl->get_XmlNamespace(This,value) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketParameterInitializer_get_XmlNode(This,value) \
    ( (This)->lpVtbl->get_XmlNode(This,value) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketParameterInitializer_put_Value(This,value) \
    ( (This)->lpVtbl->put_Value(This,value) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketParameterInitializer_get_Value(This,value) \
    ( (This)->lpVtbl->get_Value(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketParameterInitializer;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketParameterInitializer_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.Graphics.Printing.PrintTicket.IPrintTicketValue
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.Graphics.Printing.PrintTicket.PrintTicketValue
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketValue_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketValue_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing_PrintTicket_IPrintTicketValue[] = L"Windows.Graphics.Printing.PrintTicket.IPrintTicketValue";
/* [object, uuid("66B30A32-244D-4E22-A98B-BB3CF1F2DD91"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketValueVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketValue * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketValue * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketValue * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketValue * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketValue * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketValue * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Type )(
        __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketValue * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CPrintTicketValueType * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetValueAsInteger )(
        __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketValue * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetValueAsString )(
        __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketValue * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketValueVtbl;

interface __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketValue
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketValueVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketValue_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketValue_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketValue_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketValue_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketValue_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketValue_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketValue_get_Type(This,value) \
    ( (This)->lpVtbl->get_Type(This,value) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketValue_GetValueAsInteger(This,value) \
    ( (This)->lpVtbl->GetValueAsInteger(This,value) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketValue_GetValueAsString(This,value) \
    ( (This)->lpVtbl->GetValueAsString(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketValue;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketValue_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.Graphics.Printing.PrintTicket.IWorkflowPrintTicket
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.Graphics.Printing.PrintTicket.WorkflowPrintTicket
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicket_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicket_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing_PrintTicket_IWorkflowPrintTicket[] = L"Windows.Graphics.Printing.PrintTicket.IWorkflowPrintTicket";
/* [object, uuid("41D52285-35E8-448E-A8C5-E4B6A2CF826C"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicketVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicket * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicket * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicket * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicket * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicket * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicket * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Name )(
        __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicket * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_XmlNamespace )(
        __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicket * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_XmlNode )(
        __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicket * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetCapabilities )(
        __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicket * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketCapabilities * * result
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DocumentBindingFeature )(
        __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicket * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketFeature * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DocumentCollateFeature )(
        __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicket * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketFeature * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DocumentDuplexFeature )(
        __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicket * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketFeature * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DocumentHolePunchFeature )(
        __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicket * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketFeature * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DocumentInputBinFeature )(
        __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicket * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketFeature * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DocumentNUpFeature )(
        __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicket * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketFeature * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DocumentStapleFeature )(
        __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicket * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketFeature * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_JobPasscodeFeature )(
        __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicket * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketFeature * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PageBorderlessFeature )(
        __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicket * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketFeature * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PageMediaSizeFeature )(
        __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicket * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketFeature * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PageMediaTypeFeature )(
        __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicket * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketFeature * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PageOrientationFeature )(
        __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicket * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketFeature * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PageOutputColorFeature )(
        __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicket * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketFeature * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PageOutputQualityFeature )(
        __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicket * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketFeature * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PageResolutionFeature )(
        __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicket * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketFeature * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetFeature )(
        __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicket * This,
        /* [in] */__RPC__in HSTRING name,
        /* [in] */__RPC__in HSTRING xmlNamespace,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketFeature * * result
        );
    HRESULT ( STDMETHODCALLTYPE *NotifyXmlChangedAsync )(
        __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicket * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *ValidateAsync )(
        __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicket * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CGraphics__CPrinting__CPrintTicket__CWorkflowPrintTicketValidationResult * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *GetParameterInitializer )(
        __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicket * This,
        /* [in] */__RPC__in HSTRING name,
        /* [in] */__RPC__in HSTRING xmlNamespace,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketParameterInitializer * * result
        );
    HRESULT ( STDMETHODCALLTYPE *SetParameterInitializerAsInteger )(
        __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicket * This,
        /* [in] */__RPC__in HSTRING name,
        /* [in] */__RPC__in HSTRING xmlNamespace,
        /* [in] */INT32 integerValue,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketParameterInitializer * * result
        );
    HRESULT ( STDMETHODCALLTYPE *SetParameterInitializerAsString )(
        __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicket * This,
        /* [in] */__RPC__in HSTRING name,
        /* [in] */__RPC__in HSTRING xmlNamespace,
        /* [in] */__RPC__in HSTRING stringValue,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIPrintTicketParameterInitializer * * result
        );
    HRESULT ( STDMETHODCALLTYPE *MergeAndValidateTicket )(
        __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicket * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicket * deltaShemaTicket,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicket * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicketVtbl;

interface __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicket
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicketVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicket_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicket_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicket_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicket_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicket_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicket_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicket_get_Name(This,value) \
    ( (This)->lpVtbl->get_Name(This,value) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicket_get_XmlNamespace(This,value) \
    ( (This)->lpVtbl->get_XmlNamespace(This,value) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicket_get_XmlNode(This,value) \
    ( (This)->lpVtbl->get_XmlNode(This,value) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicket_GetCapabilities(This,result) \
    ( (This)->lpVtbl->GetCapabilities(This,result) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicket_get_DocumentBindingFeature(This,value) \
    ( (This)->lpVtbl->get_DocumentBindingFeature(This,value) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicket_get_DocumentCollateFeature(This,value) \
    ( (This)->lpVtbl->get_DocumentCollateFeature(This,value) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicket_get_DocumentDuplexFeature(This,value) \
    ( (This)->lpVtbl->get_DocumentDuplexFeature(This,value) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicket_get_DocumentHolePunchFeature(This,value) \
    ( (This)->lpVtbl->get_DocumentHolePunchFeature(This,value) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicket_get_DocumentInputBinFeature(This,value) \
    ( (This)->lpVtbl->get_DocumentInputBinFeature(This,value) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicket_get_DocumentNUpFeature(This,value) \
    ( (This)->lpVtbl->get_DocumentNUpFeature(This,value) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicket_get_DocumentStapleFeature(This,value) \
    ( (This)->lpVtbl->get_DocumentStapleFeature(This,value) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicket_get_JobPasscodeFeature(This,value) \
    ( (This)->lpVtbl->get_JobPasscodeFeature(This,value) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicket_get_PageBorderlessFeature(This,value) \
    ( (This)->lpVtbl->get_PageBorderlessFeature(This,value) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicket_get_PageMediaSizeFeature(This,value) \
    ( (This)->lpVtbl->get_PageMediaSizeFeature(This,value) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicket_get_PageMediaTypeFeature(This,value) \
    ( (This)->lpVtbl->get_PageMediaTypeFeature(This,value) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicket_get_PageOrientationFeature(This,value) \
    ( (This)->lpVtbl->get_PageOrientationFeature(This,value) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicket_get_PageOutputColorFeature(This,value) \
    ( (This)->lpVtbl->get_PageOutputColorFeature(This,value) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicket_get_PageOutputQualityFeature(This,value) \
    ( (This)->lpVtbl->get_PageOutputQualityFeature(This,value) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicket_get_PageResolutionFeature(This,value) \
    ( (This)->lpVtbl->get_PageResolutionFeature(This,value) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicket_GetFeature(This,name,xmlNamespace,result) \
    ( (This)->lpVtbl->GetFeature(This,name,xmlNamespace,result) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicket_NotifyXmlChangedAsync(This,operation) \
    ( (This)->lpVtbl->NotifyXmlChangedAsync(This,operation) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicket_ValidateAsync(This,operation) \
    ( (This)->lpVtbl->ValidateAsync(This,operation) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicket_GetParameterInitializer(This,name,xmlNamespace,result) \
    ( (This)->lpVtbl->GetParameterInitializer(This,name,xmlNamespace,result) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicket_SetParameterInitializerAsInteger(This,name,xmlNamespace,integerValue,result) \
    ( (This)->lpVtbl->SetParameterInitializerAsInteger(This,name,xmlNamespace,integerValue,result) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicket_SetParameterInitializerAsString(This,name,xmlNamespace,stringValue,result) \
    ( (This)->lpVtbl->SetParameterInitializerAsString(This,name,xmlNamespace,stringValue,result) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicket_MergeAndValidateTicket(This,deltaShemaTicket,result) \
    ( (This)->lpVtbl->MergeAndValidateTicket(This,deltaShemaTicket,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicket;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicket_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.Graphics.Printing.PrintTicket.IWorkflowPrintTicketValidationResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.Graphics.Printing.PrintTicket.WorkflowPrintTicketValidationResult
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicketValidationResult_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicketValidationResult_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing_PrintTicket_IWorkflowPrintTicketValidationResult[] = L"Windows.Graphics.Printing.PrintTicket.IWorkflowPrintTicketValidationResult";
/* [object, uuid("0AD1F392-DA7B-4A36-BF36-6A99A62E2059"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicketValidationResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicketValidationResult * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicketValidationResult * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicketValidationResult * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicketValidationResult * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicketValidationResult * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicketValidationResult * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Validated )(
        __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicketValidationResult * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ExtendedError )(
        __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicketValidationResult * This,
        /* [retval, out] */__RPC__out HRESULT * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicketValidationResultVtbl;

interface __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicketValidationResult
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicketValidationResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicketValidationResult_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicketValidationResult_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicketValidationResult_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicketValidationResult_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicketValidationResult_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicketValidationResult_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicketValidationResult_get_Validated(This,value) \
    ( (This)->lpVtbl->get_Validated(This,value) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicketValidationResult_get_ExtendedError(This,value) \
    ( (This)->lpVtbl->get_ExtendedError(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicketValidationResult;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CPrinting_CPrintTicket_CIWorkflowPrintTicketValidationResult_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Class Windows.Graphics.Printing.PrintTicket.PrintTicketCapabilities
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Graphics.Printing.PrintTicket.IPrintTicketCapabilities ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

#ifndef RUNTIMECLASS_Windows_Graphics_Printing_PrintTicket_PrintTicketCapabilities_DEFINED
#define RUNTIMECLASS_Windows_Graphics_Printing_PrintTicket_PrintTicketCapabilities_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Printing_PrintTicket_PrintTicketCapabilities[] = L"Windows.Graphics.Printing.PrintTicket.PrintTicketCapabilities";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Class Windows.Graphics.Printing.PrintTicket.PrintTicketFeature
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Graphics.Printing.PrintTicket.IPrintTicketFeature ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

#ifndef RUNTIMECLASS_Windows_Graphics_Printing_PrintTicket_PrintTicketFeature_DEFINED
#define RUNTIMECLASS_Windows_Graphics_Printing_PrintTicket_PrintTicketFeature_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Printing_PrintTicket_PrintTicketFeature[] = L"Windows.Graphics.Printing.PrintTicket.PrintTicketFeature";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Class Windows.Graphics.Printing.PrintTicket.PrintTicketOption
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Graphics.Printing.PrintTicket.IPrintTicketOption ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

#ifndef RUNTIMECLASS_Windows_Graphics_Printing_PrintTicket_PrintTicketOption_DEFINED
#define RUNTIMECLASS_Windows_Graphics_Printing_PrintTicket_PrintTicketOption_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Printing_PrintTicket_PrintTicketOption[] = L"Windows.Graphics.Printing.PrintTicket.PrintTicketOption";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Class Windows.Graphics.Printing.PrintTicket.PrintTicketParameterDefinition
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Graphics.Printing.PrintTicket.IPrintTicketParameterDefinition ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

#ifndef RUNTIMECLASS_Windows_Graphics_Printing_PrintTicket_PrintTicketParameterDefinition_DEFINED
#define RUNTIMECLASS_Windows_Graphics_Printing_PrintTicket_PrintTicketParameterDefinition_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Printing_PrintTicket_PrintTicketParameterDefinition[] = L"Windows.Graphics.Printing.PrintTicket.PrintTicketParameterDefinition";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Class Windows.Graphics.Printing.PrintTicket.PrintTicketParameterInitializer
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Graphics.Printing.PrintTicket.IPrintTicketParameterInitializer ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

#ifndef RUNTIMECLASS_Windows_Graphics_Printing_PrintTicket_PrintTicketParameterInitializer_DEFINED
#define RUNTIMECLASS_Windows_Graphics_Printing_PrintTicket_PrintTicketParameterInitializer_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Printing_PrintTicket_PrintTicketParameterInitializer[] = L"Windows.Graphics.Printing.PrintTicket.PrintTicketParameterInitializer";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Class Windows.Graphics.Printing.PrintTicket.PrintTicketValue
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Graphics.Printing.PrintTicket.IPrintTicketValue ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

#ifndef RUNTIMECLASS_Windows_Graphics_Printing_PrintTicket_PrintTicketValue_DEFINED
#define RUNTIMECLASS_Windows_Graphics_Printing_PrintTicket_PrintTicketValue_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Printing_PrintTicket_PrintTicketValue[] = L"Windows.Graphics.Printing.PrintTicket.PrintTicketValue";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Class Windows.Graphics.Printing.PrintTicket.WorkflowPrintTicket
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Graphics.Printing.PrintTicket.IWorkflowPrintTicket ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

#ifndef RUNTIMECLASS_Windows_Graphics_Printing_PrintTicket_WorkflowPrintTicket_DEFINED
#define RUNTIMECLASS_Windows_Graphics_Printing_PrintTicket_WorkflowPrintTicket_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Printing_PrintTicket_WorkflowPrintTicket[] = L"Windows.Graphics.Printing.PrintTicket.WorkflowPrintTicket";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Class Windows.Graphics.Printing.PrintTicket.WorkflowPrintTicketValidationResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Graphics.Printing.PrintTicket.IWorkflowPrintTicketValidationResult ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

#ifndef RUNTIMECLASS_Windows_Graphics_Printing_PrintTicket_WorkflowPrintTicketValidationResult_DEFINED
#define RUNTIMECLASS_Windows_Graphics_Printing_PrintTicket_WorkflowPrintTicketValidationResult_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Printing_PrintTicket_WorkflowPrintTicketValidationResult[] = L"Windows.Graphics.Printing.PrintTicket.WorkflowPrintTicketValidationResult";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000





#endif // defined(__cplusplus)
#pragma pop_macro("MIDL_CONST_ID")
// Restore the original value of the 'DEPRECATED' macro
#pragma pop_macro("DEPRECATED")

#ifdef __clang__
#pragma clang diagnostic pop // deprecated-declarations
#else
#pragma warning(pop)
#endif
#endif // __windows2Egraphics2Eprinting2Eprintticket_p_h__

#endif // __windows2Egraphics2Eprinting2Eprintticket_h__
