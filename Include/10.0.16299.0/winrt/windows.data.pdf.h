/* Header file automatically generated from windows.data.pdf.idl */
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
#ifndef __windows2Edata2Epdf_h__
#define __windows2Edata2Epdf_h__
#ifndef __windows2Edata2Epdf_p_h__
#define __windows2Edata2Epdf_p_h__


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
#include "Windows.Storage.h"
#include "Windows.Storage.Streams.h"
#include "Windows.UI.h"
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CData_CPdf_CIPdfDocument_FWD_DEFINED__
#define ____x_ABI_CWindows_CData_CPdf_CIPdfDocument_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Data {
            namespace Pdf {
                interface IPdfDocument;
            } /* Windows */
        } /* Data */
    } /* Pdf */} /* ABI */
#define __x_ABI_CWindows_CData_CPdf_CIPdfDocument ABI::Windows::Data::Pdf::IPdfDocument

#endif // ____x_ABI_CWindows_CData_CPdf_CIPdfDocument_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CData_CPdf_CIPdfDocumentStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CData_CPdf_CIPdfDocumentStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Data {
            namespace Pdf {
                interface IPdfDocumentStatics;
            } /* Windows */
        } /* Data */
    } /* Pdf */} /* ABI */
#define __x_ABI_CWindows_CData_CPdf_CIPdfDocumentStatics ABI::Windows::Data::Pdf::IPdfDocumentStatics

#endif // ____x_ABI_CWindows_CData_CPdf_CIPdfDocumentStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CData_CPdf_CIPdfPage_FWD_DEFINED__
#define ____x_ABI_CWindows_CData_CPdf_CIPdfPage_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Data {
            namespace Pdf {
                interface IPdfPage;
            } /* Windows */
        } /* Data */
    } /* Pdf */} /* ABI */
#define __x_ABI_CWindows_CData_CPdf_CIPdfPage ABI::Windows::Data::Pdf::IPdfPage

#endif // ____x_ABI_CWindows_CData_CPdf_CIPdfPage_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CData_CPdf_CIPdfPageDimensions_FWD_DEFINED__
#define ____x_ABI_CWindows_CData_CPdf_CIPdfPageDimensions_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Data {
            namespace Pdf {
                interface IPdfPageDimensions;
            } /* Windows */
        } /* Data */
    } /* Pdf */} /* ABI */
#define __x_ABI_CWindows_CData_CPdf_CIPdfPageDimensions ABI::Windows::Data::Pdf::IPdfPageDimensions

#endif // ____x_ABI_CWindows_CData_CPdf_CIPdfPageDimensions_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CData_CPdf_CIPdfPageRenderOptions_FWD_DEFINED__
#define ____x_ABI_CWindows_CData_CPdf_CIPdfPageRenderOptions_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Data {
            namespace Pdf {
                interface IPdfPageRenderOptions;
            } /* Windows */
        } /* Data */
    } /* Pdf */} /* ABI */
#define __x_ABI_CWindows_CData_CPdf_CIPdfPageRenderOptions ABI::Windows::Data::Pdf::IPdfPageRenderOptions

#endif // ____x_ABI_CWindows_CData_CPdf_CIPdfPageRenderOptions_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Windows {
        namespace Data {
            namespace Pdf {
                class PdfDocument;
            } /* Windows */
        } /* Data */
    } /* Pdf */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CData__CPdf__CPdfDocument_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CData__CPdf__CPdfDocument_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("8d4950b3-629d-5d7d-84cc-04c0dcf7942b"))
IAsyncOperationCompletedHandler<ABI::Windows::Data::Pdf::PdfDocument*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Data::Pdf::PdfDocument*, ABI::Windows::Data::Pdf::IPdfDocument*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Data.Pdf.PdfDocument>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::Data::Pdf::PdfDocument*> __FIAsyncOperationCompletedHandler_1_Windows__CData__CPdf__CPdfDocument_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CData__CPdf__CPdfDocument ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CData__CPdf__CPdfDocument_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CData__CPdf__CPdfDocument ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Data::Pdf::IPdfDocument*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CData__CPdf__CPdfDocument_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Data::Pdf::IPdfDocument*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CData__CPdf__CPdfDocument_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1_Windows__CData__CPdf__CPdfDocument_USE
#define DEF___FIAsyncOperation_1_Windows__CData__CPdf__CPdfDocument_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("d6b166ec-099a-5ee2-ad2e-f4c88614aabb"))
IAsyncOperation<ABI::Windows::Data::Pdf::PdfDocument*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Data::Pdf::PdfDocument*, ABI::Windows::Data::Pdf::IPdfDocument*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Data.Pdf.PdfDocument>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::Data::Pdf::PdfDocument*> __FIAsyncOperation_1_Windows__CData__CPdf__CPdfDocument_t;
#define __FIAsyncOperation_1_Windows__CData__CPdf__CPdfDocument ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CData__CPdf__CPdfDocument_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CData__CPdf__CPdfDocument ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Data::Pdf::IPdfDocument*>
//#define __FIAsyncOperation_1_Windows__CData__CPdf__CPdfDocument_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Data::Pdf::IPdfDocument*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CData__CPdf__CPdfDocument_USE */


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
            
            typedef struct Rect Rect;
            
        } /* Windows */
    } /* Foundation */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Foundation {
            
            typedef struct Size Size;
            
        } /* Windows */
    } /* Foundation */} /* ABI */




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
        namespace UI {
            
            typedef struct Color Color;
            
        } /* Windows */
    } /* UI */} /* ABI */



namespace ABI {
    namespace Windows {
        namespace Data {
            namespace Pdf {
                
                typedef enum PdfPageRotation : int PdfPageRotation;
                
            } /* Windows */
        } /* Data */
    } /* Pdf */} /* ABI */







namespace ABI {
    namespace Windows {
        namespace Data {
            namespace Pdf {
                class PdfPage;
            } /* Windows */
        } /* Data */
    } /* Pdf */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Data {
            namespace Pdf {
                class PdfPageDimensions;
            } /* Windows */
        } /* Data */
    } /* Pdf */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Data {
            namespace Pdf {
                class PdfPageRenderOptions;
            } /* Windows */
        } /* Data */
    } /* Pdf */} /* ABI */










/*
 *
 * Struct Windows.Data.Pdf.PdfPageRotation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Data {
            namespace Pdf {
                /* [v1_enum, contract] */
                enum PdfPageRotation : int
                {
                    PdfPageRotation_Normal = 0,
                    PdfPageRotation_Rotate90 = 1,
                    PdfPageRotation_Rotate180 = 2,
                    PdfPageRotation_Rotate270 = 3,
                };
                
            } /* Windows */
        } /* Data */
    } /* Pdf */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Data.Pdf.IPdfDocument
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Data.Pdf.PdfDocument
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CData_CPdf_CIPdfDocument_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CData_CPdf_CIPdfDocument_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Data_Pdf_IPdfDocument[] = L"Windows.Data.Pdf.IPdfDocument";
namespace ABI {
    namespace Windows {
        namespace Data {
            namespace Pdf {
                /* [object, uuid("AC7EBEDD-80FA-4089-846E-81B77FF5A86C"), exclusiveto, contract] */
                MIDL_INTERFACE("AC7EBEDD-80FA-4089-846E-81B77FF5A86C")
                IPdfDocument : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE GetPage(
                        /* [in] */UINT32 pageIndex,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Data::Pdf::IPdfPage * * pdfPage
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PageCount(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsPasswordProtected(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IPdfDocument=_uuidof(IPdfDocument);
                
            } /* Windows */
        } /* Data */
    } /* Pdf */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CData_CPdf_CIPdfDocument;
#endif /* !defined(____x_ABI_CWindows_CData_CPdf_CIPdfDocument_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Data.Pdf.IPdfDocumentStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Data.Pdf.PdfDocument
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CData_CPdf_CIPdfDocumentStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CData_CPdf_CIPdfDocumentStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Data_Pdf_IPdfDocumentStatics[] = L"Windows.Data.Pdf.IPdfDocumentStatics";
namespace ABI {
    namespace Windows {
        namespace Data {
            namespace Pdf {
                /* [object, uuid("433A0B5F-C007-4788-90F2-08143D922599"), exclusiveto, contract] */
                MIDL_INTERFACE("433A0B5F-C007-4788-90F2-08143D922599")
                IPdfDocumentStatics : IInspectable
                {
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE LoadFromFileAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::IStorageFile * file,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CData__CPdf__CPdfDocument * * asyncInfo
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE LoadFromFileWithPasswordAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::IStorageFile * file,
                        /* [in] */__RPC__in HSTRING password,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CData__CPdf__CPdfDocument * * asyncInfo
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE LoadFromStreamAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IRandomAccessStream * inputStream,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CData__CPdf__CPdfDocument * * asyncInfo
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE LoadFromStreamWithPasswordAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IRandomAccessStream * inputStream,
                        /* [in] */__RPC__in HSTRING password,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CData__CPdf__CPdfDocument * * asyncInfo
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IPdfDocumentStatics=_uuidof(IPdfDocumentStatics);
                
            } /* Windows */
        } /* Data */
    } /* Pdf */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CData_CPdf_CIPdfDocumentStatics;
#endif /* !defined(____x_ABI_CWindows_CData_CPdf_CIPdfDocumentStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Data.Pdf.IPdfPage
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Data.Pdf.PdfPage
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CData_CPdf_CIPdfPage_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CData_CPdf_CIPdfPage_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Data_Pdf_IPdfPage[] = L"Windows.Data.Pdf.IPdfPage";
namespace ABI {
    namespace Windows {
        namespace Data {
            namespace Pdf {
                /* [object, uuid("9DB4B0C8-5320-4CFC-AD76-493FDAD0E594"), exclusiveto, contract] */
                MIDL_INTERFACE("9DB4B0C8-5320-4CFC-AD76-493FDAD0E594")
                IPdfPage : IInspectable
                {
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE RenderToStreamAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IRandomAccessStream * outputStream,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * asyncInfo
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE RenderWithOptionsToStreamAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IRandomAccessStream * outputStream,
                        /* [in] */__RPC__in_opt ABI::Windows::Data::Pdf::IPdfPageRenderOptions * options,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * asyncInfo
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE PreparePageAsync(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * asyncInfo
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Index(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Size(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::Size * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Dimensions(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Data::Pdf::IPdfPageDimensions * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Rotation(
                        /* [retval, out] */__RPC__out ABI::Windows::Data::Pdf::PdfPageRotation * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PreferredZoom(
                        /* [retval, out] */__RPC__out FLOAT * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IPdfPage=_uuidof(IPdfPage);
                
            } /* Windows */
        } /* Data */
    } /* Pdf */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CData_CPdf_CIPdfPage;
#endif /* !defined(____x_ABI_CWindows_CData_CPdf_CIPdfPage_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Data.Pdf.IPdfPageDimensions
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Data.Pdf.PdfPageDimensions
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CData_CPdf_CIPdfPageDimensions_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CData_CPdf_CIPdfPageDimensions_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Data_Pdf_IPdfPageDimensions[] = L"Windows.Data.Pdf.IPdfPageDimensions";
namespace ABI {
    namespace Windows {
        namespace Data {
            namespace Pdf {
                /* [object, uuid("22170471-313E-44E8-835D-63A3E7624A10"), exclusiveto, contract] */
                MIDL_INTERFACE("22170471-313E-44E8-835D-63A3E7624A10")
                IPdfPageDimensions : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MediaBox(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::Rect * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CropBox(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::Rect * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_BleedBox(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::Rect * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_TrimBox(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::Rect * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ArtBox(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::Rect * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IPdfPageDimensions=_uuidof(IPdfPageDimensions);
                
            } /* Windows */
        } /* Data */
    } /* Pdf */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CData_CPdf_CIPdfPageDimensions;
#endif /* !defined(____x_ABI_CWindows_CData_CPdf_CIPdfPageDimensions_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Data.Pdf.IPdfPageRenderOptions
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Data.Pdf.PdfPageRenderOptions
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CData_CPdf_CIPdfPageRenderOptions_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CData_CPdf_CIPdfPageRenderOptions_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Data_Pdf_IPdfPageRenderOptions[] = L"Windows.Data.Pdf.IPdfPageRenderOptions";
namespace ABI {
    namespace Windows {
        namespace Data {
            namespace Pdf {
                /* [object, uuid("3C98056F-B7CF-4C29-9A04-52D90267F425"), exclusiveto, contract] */
                MIDL_INTERFACE("3C98056F-B7CF-4C29-9A04-52D90267F425")
                IPdfPageRenderOptions : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SourceRect(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::Rect * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_SourceRect(
                        /* [in] */ABI::Windows::Foundation::Rect value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DestinationWidth(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_DestinationWidth(
                        /* [in] */UINT32 value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DestinationHeight(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_DestinationHeight(
                        /* [in] */UINT32 value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_BackgroundColor(
                        /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_BackgroundColor(
                        /* [in] */ABI::Windows::UI::Color value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsIgnoringHighContrast(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_IsIgnoringHighContrast(
                        /* [in] */boolean value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_BitmapEncoderId(
                        /* [retval, out] */__RPC__out GUID * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_BitmapEncoderId(
                        /* [in] */GUID value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IPdfPageRenderOptions=_uuidof(IPdfPageRenderOptions);
                
            } /* Windows */
        } /* Data */
    } /* Pdf */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CData_CPdf_CIPdfPageRenderOptions;
#endif /* !defined(____x_ABI_CWindows_CData_CPdf_CIPdfPageRenderOptions_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Data.Pdf.PdfDocument
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Data.Pdf.IPdfDocumentStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Data.Pdf.IPdfDocument ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Data_Pdf_PdfDocument_DEFINED
#define RUNTIMECLASS_Windows_Data_Pdf_PdfDocument_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Data_Pdf_PdfDocument[] = L"Windows.Data.Pdf.PdfDocument";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Data.Pdf.PdfPage
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Data.Pdf.IPdfPage ** Default Interface **
 *    Windows.Foundation.IClosable
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Data_Pdf_PdfPage_DEFINED
#define RUNTIMECLASS_Windows_Data_Pdf_PdfPage_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Data_Pdf_PdfPage[] = L"Windows.Data.Pdf.PdfPage";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Data.Pdf.PdfPageDimensions
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Data.Pdf.IPdfPageDimensions ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Data_Pdf_PdfPageDimensions_DEFINED
#define RUNTIMECLASS_Windows_Data_Pdf_PdfPageDimensions_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Data_Pdf_PdfPageDimensions[] = L"Windows.Data.Pdf.PdfPageDimensions";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Data.Pdf.PdfPageRenderOptions
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Data.Pdf.IPdfPageRenderOptions ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Data_Pdf_PdfPageRenderOptions_DEFINED
#define RUNTIMECLASS_Windows_Data_Pdf_PdfPageRenderOptions_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Data_Pdf_PdfPageRenderOptions[] = L"Windows.Data.Pdf.PdfPageRenderOptions";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000




#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CData_CPdf_CIPdfDocument_FWD_DEFINED__
#define ____x_ABI_CWindows_CData_CPdf_CIPdfDocument_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CData_CPdf_CIPdfDocument __x_ABI_CWindows_CData_CPdf_CIPdfDocument;

#endif // ____x_ABI_CWindows_CData_CPdf_CIPdfDocument_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CData_CPdf_CIPdfDocumentStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CData_CPdf_CIPdfDocumentStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CData_CPdf_CIPdfDocumentStatics __x_ABI_CWindows_CData_CPdf_CIPdfDocumentStatics;

#endif // ____x_ABI_CWindows_CData_CPdf_CIPdfDocumentStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CData_CPdf_CIPdfPage_FWD_DEFINED__
#define ____x_ABI_CWindows_CData_CPdf_CIPdfPage_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CData_CPdf_CIPdfPage __x_ABI_CWindows_CData_CPdf_CIPdfPage;

#endif // ____x_ABI_CWindows_CData_CPdf_CIPdfPage_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CData_CPdf_CIPdfPageDimensions_FWD_DEFINED__
#define ____x_ABI_CWindows_CData_CPdf_CIPdfPageDimensions_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CData_CPdf_CIPdfPageDimensions __x_ABI_CWindows_CData_CPdf_CIPdfPageDimensions;

#endif // ____x_ABI_CWindows_CData_CPdf_CIPdfPageDimensions_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CData_CPdf_CIPdfPageRenderOptions_FWD_DEFINED__
#define ____x_ABI_CWindows_CData_CPdf_CIPdfPageRenderOptions_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CData_CPdf_CIPdfPageRenderOptions __x_ABI_CWindows_CData_CPdf_CIPdfPageRenderOptions;

#endif // ____x_ABI_CWindows_CData_CPdf_CIPdfPageRenderOptions_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CData__CPdf__CPdfDocument_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CData__CPdf__CPdfDocument_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CData__CPdf__CPdfDocument __FIAsyncOperationCompletedHandler_1_Windows__CData__CPdf__CPdfDocument;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CData__CPdf__CPdfDocument;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CData__CPdf__CPdfDocument __FIAsyncOperation_1_Windows__CData__CPdf__CPdfDocument;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CData__CPdf__CPdfDocumentVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CData__CPdf__CPdfDocument * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CData__CPdf__CPdfDocument * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CData__CPdf__CPdfDocument * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CData__CPdf__CPdfDocument * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CData__CPdf__CPdfDocument *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CData__CPdf__CPdfDocumentVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CData__CPdf__CPdfDocument
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CData__CPdf__CPdfDocumentVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CData__CPdf__CPdfDocument_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CData__CPdf__CPdfDocument_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CData__CPdf__CPdfDocument_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CData__CPdf__CPdfDocument_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CData__CPdf__CPdfDocument_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1_Windows__CData__CPdf__CPdfDocument_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CData__CPdf__CPdfDocument_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CData__CPdf__CPdfDocument __FIAsyncOperation_1_Windows__CData__CPdf__CPdfDocument;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CData__CPdf__CPdfDocument;

typedef struct __FIAsyncOperation_1_Windows__CData__CPdf__CPdfDocumentVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CData__CPdf__CPdfDocument * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CData__CPdf__CPdfDocument * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CData__CPdf__CPdfDocument * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CData__CPdf__CPdfDocument * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CData__CPdf__CPdfDocument * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CData__CPdf__CPdfDocument * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CData__CPdf__CPdfDocument * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CData__CPdf__CPdfDocument *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CData__CPdf__CPdfDocument * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CData__CPdf__CPdfDocument **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CData__CPdf__CPdfDocument * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CData_CPdf_CIPdfDocument * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CData__CPdf__CPdfDocumentVtbl;

interface __FIAsyncOperation_1_Windows__CData__CPdf__CPdfDocument
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CData__CPdf__CPdfDocumentVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CData__CPdf__CPdfDocument_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CData__CPdf__CPdfDocument_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CData__CPdf__CPdfDocument_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CData__CPdf__CPdfDocument_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CData__CPdf__CPdfDocument_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CData__CPdf__CPdfDocument_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CData__CPdf__CPdfDocument_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CData__CPdf__CPdfDocument_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CData__CPdf__CPdfDocument_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CData__CPdf__CPdfDocument_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#ifndef ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIAsyncAction __x_ABI_CWindows_CFoundation_CIAsyncAction;

#endif // ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIClosable __x_ABI_CWindows_CFoundation_CIClosable;

#endif // ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__



typedef struct __x_ABI_CWindows_CFoundation_CRect __x_ABI_CWindows_CFoundation_CRect;


typedef struct __x_ABI_CWindows_CFoundation_CSize __x_ABI_CWindows_CFoundation_CSize;




#ifndef ____x_ABI_CWindows_CStorage_CIStorageFile_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CIStorageFile_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CIStorageFile __x_ABI_CWindows_CStorage_CIStorageFile;

#endif // ____x_ABI_CWindows_CStorage_CIStorageFile_FWD_DEFINED__




#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream;

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream_FWD_DEFINED__






typedef struct __x_ABI_CWindows_CUI_CColor __x_ABI_CWindows_CUI_CColor;




typedef enum __x_ABI_CWindows_CData_CPdf_CPdfPageRotation __x_ABI_CWindows_CData_CPdf_CPdfPageRotation;


















/*
 *
 * Struct Windows.Data.Pdf.PdfPageRotation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CData_CPdf_CPdfPageRotation
{
    PdfPageRotation_Normal = 0,
    PdfPageRotation_Rotate90 = 1,
    PdfPageRotation_Rotate180 = 2,
    PdfPageRotation_Rotate270 = 3,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Data.Pdf.IPdfDocument
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Data.Pdf.PdfDocument
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CData_CPdf_CIPdfDocument_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CData_CPdf_CIPdfDocument_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Data_Pdf_IPdfDocument[] = L"Windows.Data.Pdf.IPdfDocument";
/* [object, uuid("AC7EBEDD-80FA-4089-846E-81B77FF5A86C"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CData_CPdf_CIPdfDocumentVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CData_CPdf_CIPdfDocument * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CData_CPdf_CIPdfDocument * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CData_CPdf_CIPdfDocument * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CData_CPdf_CIPdfDocument * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CData_CPdf_CIPdfDocument * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CData_CPdf_CIPdfDocument * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetPage )(
        __x_ABI_CWindows_CData_CPdf_CIPdfDocument * This,
        /* [in] */UINT32 pageIndex,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CData_CPdf_CIPdfPage * * pdfPage
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PageCount )(
        __x_ABI_CWindows_CData_CPdf_CIPdfDocument * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsPasswordProtected )(
        __x_ABI_CWindows_CData_CPdf_CIPdfDocument * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CData_CPdf_CIPdfDocumentVtbl;

interface __x_ABI_CWindows_CData_CPdf_CIPdfDocument
{
    CONST_VTBL struct __x_ABI_CWindows_CData_CPdf_CIPdfDocumentVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CData_CPdf_CIPdfDocument_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CData_CPdf_CIPdfDocument_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CData_CPdf_CIPdfDocument_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CData_CPdf_CIPdfDocument_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CData_CPdf_CIPdfDocument_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CData_CPdf_CIPdfDocument_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CData_CPdf_CIPdfDocument_GetPage(This,pageIndex,pdfPage) \
    ( (This)->lpVtbl->GetPage(This,pageIndex,pdfPage) )

#define __x_ABI_CWindows_CData_CPdf_CIPdfDocument_get_PageCount(This,value) \
    ( (This)->lpVtbl->get_PageCount(This,value) )

#define __x_ABI_CWindows_CData_CPdf_CIPdfDocument_get_IsPasswordProtected(This,value) \
    ( (This)->lpVtbl->get_IsPasswordProtected(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CData_CPdf_CIPdfDocument;
#endif /* !defined(____x_ABI_CWindows_CData_CPdf_CIPdfDocument_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Data.Pdf.IPdfDocumentStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Data.Pdf.PdfDocument
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CData_CPdf_CIPdfDocumentStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CData_CPdf_CIPdfDocumentStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Data_Pdf_IPdfDocumentStatics[] = L"Windows.Data.Pdf.IPdfDocumentStatics";
/* [object, uuid("433A0B5F-C007-4788-90F2-08143D922599"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CData_CPdf_CIPdfDocumentStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CData_CPdf_CIPdfDocumentStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CData_CPdf_CIPdfDocumentStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CData_CPdf_CIPdfDocumentStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CData_CPdf_CIPdfDocumentStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CData_CPdf_CIPdfDocumentStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CData_CPdf_CIPdfDocumentStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [overload] */HRESULT ( STDMETHODCALLTYPE *LoadFromFileAsync )(
        __x_ABI_CWindows_CData_CPdf_CIPdfDocumentStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile * file,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CData__CPdf__CPdfDocument * * asyncInfo
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *LoadFromFileWithPasswordAsync )(
        __x_ABI_CWindows_CData_CPdf_CIPdfDocumentStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile * file,
        /* [in] */__RPC__in HSTRING password,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CData__CPdf__CPdfDocument * * asyncInfo
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *LoadFromStreamAsync )(
        __x_ABI_CWindows_CData_CPdf_CIPdfDocumentStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * inputStream,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CData__CPdf__CPdfDocument * * asyncInfo
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *LoadFromStreamWithPasswordAsync )(
        __x_ABI_CWindows_CData_CPdf_CIPdfDocumentStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * inputStream,
        /* [in] */__RPC__in HSTRING password,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CData__CPdf__CPdfDocument * * asyncInfo
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CData_CPdf_CIPdfDocumentStaticsVtbl;

interface __x_ABI_CWindows_CData_CPdf_CIPdfDocumentStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CData_CPdf_CIPdfDocumentStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CData_CPdf_CIPdfDocumentStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CData_CPdf_CIPdfDocumentStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CData_CPdf_CIPdfDocumentStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CData_CPdf_CIPdfDocumentStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CData_CPdf_CIPdfDocumentStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CData_CPdf_CIPdfDocumentStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CData_CPdf_CIPdfDocumentStatics_LoadFromFileAsync(This,file,asyncInfo) \
    ( (This)->lpVtbl->LoadFromFileAsync(This,file,asyncInfo) )

#define __x_ABI_CWindows_CData_CPdf_CIPdfDocumentStatics_LoadFromFileWithPasswordAsync(This,file,password,asyncInfo) \
    ( (This)->lpVtbl->LoadFromFileWithPasswordAsync(This,file,password,asyncInfo) )

#define __x_ABI_CWindows_CData_CPdf_CIPdfDocumentStatics_LoadFromStreamAsync(This,inputStream,asyncInfo) \
    ( (This)->lpVtbl->LoadFromStreamAsync(This,inputStream,asyncInfo) )

#define __x_ABI_CWindows_CData_CPdf_CIPdfDocumentStatics_LoadFromStreamWithPasswordAsync(This,inputStream,password,asyncInfo) \
    ( (This)->lpVtbl->LoadFromStreamWithPasswordAsync(This,inputStream,password,asyncInfo) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CData_CPdf_CIPdfDocumentStatics;
#endif /* !defined(____x_ABI_CWindows_CData_CPdf_CIPdfDocumentStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Data.Pdf.IPdfPage
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Data.Pdf.PdfPage
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CData_CPdf_CIPdfPage_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CData_CPdf_CIPdfPage_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Data_Pdf_IPdfPage[] = L"Windows.Data.Pdf.IPdfPage";
/* [object, uuid("9DB4B0C8-5320-4CFC-AD76-493FDAD0E594"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CData_CPdf_CIPdfPageVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CData_CPdf_CIPdfPage * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CData_CPdf_CIPdfPage * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CData_CPdf_CIPdfPage * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CData_CPdf_CIPdfPage * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CData_CPdf_CIPdfPage * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CData_CPdf_CIPdfPage * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [overload] */HRESULT ( STDMETHODCALLTYPE *RenderToStreamAsync )(
        __x_ABI_CWindows_CData_CPdf_CIPdfPage * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * outputStream,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * asyncInfo
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *RenderWithOptionsToStreamAsync )(
        __x_ABI_CWindows_CData_CPdf_CIPdfPage * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * outputStream,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CData_CPdf_CIPdfPageRenderOptions * options,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * asyncInfo
        );
    HRESULT ( STDMETHODCALLTYPE *PreparePageAsync )(
        __x_ABI_CWindows_CData_CPdf_CIPdfPage * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * asyncInfo
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Index )(
        __x_ABI_CWindows_CData_CPdf_CIPdfPage * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __x_ABI_CWindows_CData_CPdf_CIPdfPage * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CSize * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Dimensions )(
        __x_ABI_CWindows_CData_CPdf_CIPdfPage * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CData_CPdf_CIPdfPageDimensions * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Rotation )(
        __x_ABI_CWindows_CData_CPdf_CIPdfPage * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CData_CPdf_CPdfPageRotation * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PreferredZoom )(
        __x_ABI_CWindows_CData_CPdf_CIPdfPage * This,
        /* [retval, out] */__RPC__out FLOAT * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CData_CPdf_CIPdfPageVtbl;

interface __x_ABI_CWindows_CData_CPdf_CIPdfPage
{
    CONST_VTBL struct __x_ABI_CWindows_CData_CPdf_CIPdfPageVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CData_CPdf_CIPdfPage_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CData_CPdf_CIPdfPage_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CData_CPdf_CIPdfPage_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CData_CPdf_CIPdfPage_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CData_CPdf_CIPdfPage_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CData_CPdf_CIPdfPage_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CData_CPdf_CIPdfPage_RenderToStreamAsync(This,outputStream,asyncInfo) \
    ( (This)->lpVtbl->RenderToStreamAsync(This,outputStream,asyncInfo) )

#define __x_ABI_CWindows_CData_CPdf_CIPdfPage_RenderWithOptionsToStreamAsync(This,outputStream,options,asyncInfo) \
    ( (This)->lpVtbl->RenderWithOptionsToStreamAsync(This,outputStream,options,asyncInfo) )

#define __x_ABI_CWindows_CData_CPdf_CIPdfPage_PreparePageAsync(This,asyncInfo) \
    ( (This)->lpVtbl->PreparePageAsync(This,asyncInfo) )

#define __x_ABI_CWindows_CData_CPdf_CIPdfPage_get_Index(This,value) \
    ( (This)->lpVtbl->get_Index(This,value) )

#define __x_ABI_CWindows_CData_CPdf_CIPdfPage_get_Size(This,value) \
    ( (This)->lpVtbl->get_Size(This,value) )

#define __x_ABI_CWindows_CData_CPdf_CIPdfPage_get_Dimensions(This,value) \
    ( (This)->lpVtbl->get_Dimensions(This,value) )

#define __x_ABI_CWindows_CData_CPdf_CIPdfPage_get_Rotation(This,value) \
    ( (This)->lpVtbl->get_Rotation(This,value) )

#define __x_ABI_CWindows_CData_CPdf_CIPdfPage_get_PreferredZoom(This,value) \
    ( (This)->lpVtbl->get_PreferredZoom(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CData_CPdf_CIPdfPage;
#endif /* !defined(____x_ABI_CWindows_CData_CPdf_CIPdfPage_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Data.Pdf.IPdfPageDimensions
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Data.Pdf.PdfPageDimensions
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CData_CPdf_CIPdfPageDimensions_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CData_CPdf_CIPdfPageDimensions_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Data_Pdf_IPdfPageDimensions[] = L"Windows.Data.Pdf.IPdfPageDimensions";
/* [object, uuid("22170471-313E-44E8-835D-63A3E7624A10"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CData_CPdf_CIPdfPageDimensionsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CData_CPdf_CIPdfPageDimensions * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CData_CPdf_CIPdfPageDimensions * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CData_CPdf_CIPdfPageDimensions * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CData_CPdf_CIPdfPageDimensions * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CData_CPdf_CIPdfPageDimensions * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CData_CPdf_CIPdfPageDimensions * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MediaBox )(
        __x_ABI_CWindows_CData_CPdf_CIPdfPageDimensions * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CRect * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CropBox )(
        __x_ABI_CWindows_CData_CPdf_CIPdfPageDimensions * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CRect * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_BleedBox )(
        __x_ABI_CWindows_CData_CPdf_CIPdfPageDimensions * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CRect * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_TrimBox )(
        __x_ABI_CWindows_CData_CPdf_CIPdfPageDimensions * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CRect * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ArtBox )(
        __x_ABI_CWindows_CData_CPdf_CIPdfPageDimensions * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CRect * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CData_CPdf_CIPdfPageDimensionsVtbl;

interface __x_ABI_CWindows_CData_CPdf_CIPdfPageDimensions
{
    CONST_VTBL struct __x_ABI_CWindows_CData_CPdf_CIPdfPageDimensionsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CData_CPdf_CIPdfPageDimensions_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CData_CPdf_CIPdfPageDimensions_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CData_CPdf_CIPdfPageDimensions_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CData_CPdf_CIPdfPageDimensions_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CData_CPdf_CIPdfPageDimensions_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CData_CPdf_CIPdfPageDimensions_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CData_CPdf_CIPdfPageDimensions_get_MediaBox(This,value) \
    ( (This)->lpVtbl->get_MediaBox(This,value) )

#define __x_ABI_CWindows_CData_CPdf_CIPdfPageDimensions_get_CropBox(This,value) \
    ( (This)->lpVtbl->get_CropBox(This,value) )

#define __x_ABI_CWindows_CData_CPdf_CIPdfPageDimensions_get_BleedBox(This,value) \
    ( (This)->lpVtbl->get_BleedBox(This,value) )

#define __x_ABI_CWindows_CData_CPdf_CIPdfPageDimensions_get_TrimBox(This,value) \
    ( (This)->lpVtbl->get_TrimBox(This,value) )

#define __x_ABI_CWindows_CData_CPdf_CIPdfPageDimensions_get_ArtBox(This,value) \
    ( (This)->lpVtbl->get_ArtBox(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CData_CPdf_CIPdfPageDimensions;
#endif /* !defined(____x_ABI_CWindows_CData_CPdf_CIPdfPageDimensions_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Data.Pdf.IPdfPageRenderOptions
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Data.Pdf.PdfPageRenderOptions
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CData_CPdf_CIPdfPageRenderOptions_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CData_CPdf_CIPdfPageRenderOptions_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Data_Pdf_IPdfPageRenderOptions[] = L"Windows.Data.Pdf.IPdfPageRenderOptions";
/* [object, uuid("3C98056F-B7CF-4C29-9A04-52D90267F425"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CData_CPdf_CIPdfPageRenderOptionsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CData_CPdf_CIPdfPageRenderOptions * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CData_CPdf_CIPdfPageRenderOptions * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CData_CPdf_CIPdfPageRenderOptions * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CData_CPdf_CIPdfPageRenderOptions * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CData_CPdf_CIPdfPageRenderOptions * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CData_CPdf_CIPdfPageRenderOptions * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SourceRect )(
        __x_ABI_CWindows_CData_CPdf_CIPdfPageRenderOptions * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CRect * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_SourceRect )(
        __x_ABI_CWindows_CData_CPdf_CIPdfPageRenderOptions * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CRect value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DestinationWidth )(
        __x_ABI_CWindows_CData_CPdf_CIPdfPageRenderOptions * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_DestinationWidth )(
        __x_ABI_CWindows_CData_CPdf_CIPdfPageRenderOptions * This,
        /* [in] */UINT32 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DestinationHeight )(
        __x_ABI_CWindows_CData_CPdf_CIPdfPageRenderOptions * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_DestinationHeight )(
        __x_ABI_CWindows_CData_CPdf_CIPdfPageRenderOptions * This,
        /* [in] */UINT32 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_BackgroundColor )(
        __x_ABI_CWindows_CData_CPdf_CIPdfPageRenderOptions * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_BackgroundColor )(
        __x_ABI_CWindows_CData_CPdf_CIPdfPageRenderOptions * This,
        /* [in] */__x_ABI_CWindows_CUI_CColor value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsIgnoringHighContrast )(
        __x_ABI_CWindows_CData_CPdf_CIPdfPageRenderOptions * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_IsIgnoringHighContrast )(
        __x_ABI_CWindows_CData_CPdf_CIPdfPageRenderOptions * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_BitmapEncoderId )(
        __x_ABI_CWindows_CData_CPdf_CIPdfPageRenderOptions * This,
        /* [retval, out] */__RPC__out GUID * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_BitmapEncoderId )(
        __x_ABI_CWindows_CData_CPdf_CIPdfPageRenderOptions * This,
        /* [in] */GUID value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CData_CPdf_CIPdfPageRenderOptionsVtbl;

interface __x_ABI_CWindows_CData_CPdf_CIPdfPageRenderOptions
{
    CONST_VTBL struct __x_ABI_CWindows_CData_CPdf_CIPdfPageRenderOptionsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CData_CPdf_CIPdfPageRenderOptions_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CData_CPdf_CIPdfPageRenderOptions_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CData_CPdf_CIPdfPageRenderOptions_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CData_CPdf_CIPdfPageRenderOptions_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CData_CPdf_CIPdfPageRenderOptions_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CData_CPdf_CIPdfPageRenderOptions_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CData_CPdf_CIPdfPageRenderOptions_get_SourceRect(This,value) \
    ( (This)->lpVtbl->get_SourceRect(This,value) )

#define __x_ABI_CWindows_CData_CPdf_CIPdfPageRenderOptions_put_SourceRect(This,value) \
    ( (This)->lpVtbl->put_SourceRect(This,value) )

#define __x_ABI_CWindows_CData_CPdf_CIPdfPageRenderOptions_get_DestinationWidth(This,value) \
    ( (This)->lpVtbl->get_DestinationWidth(This,value) )

#define __x_ABI_CWindows_CData_CPdf_CIPdfPageRenderOptions_put_DestinationWidth(This,value) \
    ( (This)->lpVtbl->put_DestinationWidth(This,value) )

#define __x_ABI_CWindows_CData_CPdf_CIPdfPageRenderOptions_get_DestinationHeight(This,value) \
    ( (This)->lpVtbl->get_DestinationHeight(This,value) )

#define __x_ABI_CWindows_CData_CPdf_CIPdfPageRenderOptions_put_DestinationHeight(This,value) \
    ( (This)->lpVtbl->put_DestinationHeight(This,value) )

#define __x_ABI_CWindows_CData_CPdf_CIPdfPageRenderOptions_get_BackgroundColor(This,value) \
    ( (This)->lpVtbl->get_BackgroundColor(This,value) )

#define __x_ABI_CWindows_CData_CPdf_CIPdfPageRenderOptions_put_BackgroundColor(This,value) \
    ( (This)->lpVtbl->put_BackgroundColor(This,value) )

#define __x_ABI_CWindows_CData_CPdf_CIPdfPageRenderOptions_get_IsIgnoringHighContrast(This,value) \
    ( (This)->lpVtbl->get_IsIgnoringHighContrast(This,value) )

#define __x_ABI_CWindows_CData_CPdf_CIPdfPageRenderOptions_put_IsIgnoringHighContrast(This,value) \
    ( (This)->lpVtbl->put_IsIgnoringHighContrast(This,value) )

#define __x_ABI_CWindows_CData_CPdf_CIPdfPageRenderOptions_get_BitmapEncoderId(This,value) \
    ( (This)->lpVtbl->get_BitmapEncoderId(This,value) )

#define __x_ABI_CWindows_CData_CPdf_CIPdfPageRenderOptions_put_BitmapEncoderId(This,value) \
    ( (This)->lpVtbl->put_BitmapEncoderId(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CData_CPdf_CIPdfPageRenderOptions;
#endif /* !defined(____x_ABI_CWindows_CData_CPdf_CIPdfPageRenderOptions_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Data.Pdf.PdfDocument
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Data.Pdf.IPdfDocumentStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Data.Pdf.IPdfDocument ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Data_Pdf_PdfDocument_DEFINED
#define RUNTIMECLASS_Windows_Data_Pdf_PdfDocument_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Data_Pdf_PdfDocument[] = L"Windows.Data.Pdf.PdfDocument";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Data.Pdf.PdfPage
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Data.Pdf.IPdfPage ** Default Interface **
 *    Windows.Foundation.IClosable
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Data_Pdf_PdfPage_DEFINED
#define RUNTIMECLASS_Windows_Data_Pdf_PdfPage_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Data_Pdf_PdfPage[] = L"Windows.Data.Pdf.PdfPage";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Data.Pdf.PdfPageDimensions
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Data.Pdf.IPdfPageDimensions ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Data_Pdf_PdfPageDimensions_DEFINED
#define RUNTIMECLASS_Windows_Data_Pdf_PdfPageDimensions_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Data_Pdf_PdfPageDimensions[] = L"Windows.Data.Pdf.PdfPageDimensions";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Data.Pdf.PdfPageRenderOptions
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Data.Pdf.IPdfPageRenderOptions ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Data_Pdf_PdfPageRenderOptions_DEFINED
#define RUNTIMECLASS_Windows_Data_Pdf_PdfPageRenderOptions_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Data_Pdf_PdfPageRenderOptions[] = L"Windows.Data.Pdf.PdfPageRenderOptions";
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
#endif // __windows2Edata2Epdf_p_h__

#endif // __windows2Edata2Epdf_h__
