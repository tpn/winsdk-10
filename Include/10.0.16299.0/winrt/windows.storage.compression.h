/* Header file automatically generated from windows.storage.compression.idl */
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
#ifndef __windows2Estorage2Ecompression_h__
#define __windows2Estorage2Ecompression_h__
#ifndef __windows2Estorage2Ecompression_p_h__
#define __windows2Estorage2Ecompression_p_h__


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
#ifndef ____x_ABI_CWindows_CStorage_CCompression_CICompressor_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CCompression_CICompressor_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Compression {
                interface ICompressor;
            } /* Windows */
        } /* Storage */
    } /* Compression */} /* ABI */
#define __x_ABI_CWindows_CStorage_CCompression_CICompressor ABI::Windows::Storage::Compression::ICompressor

#endif // ____x_ABI_CWindows_CStorage_CCompression_CICompressor_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CStorage_CCompression_CICompressorFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CCompression_CICompressorFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Compression {
                interface ICompressorFactory;
            } /* Windows */
        } /* Storage */
    } /* Compression */} /* ABI */
#define __x_ABI_CWindows_CStorage_CCompression_CICompressorFactory ABI::Windows::Storage::Compression::ICompressorFactory

#endif // ____x_ABI_CWindows_CStorage_CCompression_CICompressorFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CStorage_CCompression_CIDecompressor_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CCompression_CIDecompressor_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Compression {
                interface IDecompressor;
            } /* Windows */
        } /* Storage */
    } /* Compression */} /* ABI */
#define __x_ABI_CWindows_CStorage_CCompression_CIDecompressor ABI::Windows::Storage::Compression::IDecompressor

#endif // ____x_ABI_CWindows_CStorage_CCompression_CIDecompressor_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CStorage_CCompression_CIDecompressorFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CCompression_CIDecompressorFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Compression {
                interface IDecompressorFactory;
            } /* Windows */
        } /* Storage */
    } /* Compression */} /* ABI */
#define __x_ABI_CWindows_CStorage_CCompression_CIDecompressorFactory ABI::Windows::Storage::Compression::IDecompressorFactory

#endif // ____x_ABI_CWindows_CStorage_CCompression_CIDecompressorFactory_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions

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





namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Compression {
                
                typedef enum CompressAlgorithm : int CompressAlgorithm;
                
            } /* Windows */
        } /* Storage */
    } /* Compression */} /* ABI */





namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Compression {
                class Compressor;
            } /* Windows */
        } /* Storage */
    } /* Compression */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Compression {
                class Decompressor;
            } /* Windows */
        } /* Storage */
    } /* Compression */} /* ABI */






/*
 *
 * Struct Windows.Storage.Compression.CompressAlgorithm
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Compression {
                /* [v1_enum, contract] */
                enum CompressAlgorithm : int
                {
                    CompressAlgorithm_InvalidAlgorithm = 0,
                    CompressAlgorithm_NullAlgorithm = 1,
                    CompressAlgorithm_Mszip = 2,
                    CompressAlgorithm_Xpress = 3,
                    CompressAlgorithm_XpressHuff = 4,
                    CompressAlgorithm_Lzms = 5,
                };
                
            } /* Windows */
        } /* Storage */
    } /* Compression */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Storage.Compression.ICompressor
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Storage.Compression.Compressor
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Storage.Streams.IOutputStream
 *     Windows.Foundation.IClosable
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CStorage_CCompression_CICompressor_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CStorage_CCompression_CICompressor_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Compression_ICompressor[] = L"Windows.Storage.Compression.ICompressor";
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Compression {
                /* [object, uuid("0AC3645A-57AC-4EE1-B702-84D39D5424E0"), exclusiveto, contract] */
                MIDL_INTERFACE("0AC3645A-57AC-4EE1-B702-84D39D5424E0")
                ICompressor : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE FinishAsync(
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DetachStream(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::Streams::IOutputStream * * stream
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ICompressor=_uuidof(ICompressor);
                
            } /* Windows */
        } /* Storage */
    } /* Compression */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CCompression_CICompressor;
#endif /* !defined(____x_ABI_CWindows_CStorage_CCompression_CICompressor_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Storage.Compression.ICompressorFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Storage.Compression.Compressor
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CStorage_CCompression_CICompressorFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CStorage_CCompression_CICompressorFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Compression_ICompressorFactory[] = L"Windows.Storage.Compression.ICompressorFactory";
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Compression {
                /* [object, uuid("5F3D96A4-2CFB-442C-A8BA-D7D11B039DA0"), exclusiveto, contract] */
                MIDL_INTERFACE("5F3D96A4-2CFB-442C-A8BA-D7D11B039DA0")
                ICompressorFactory : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE CreateCompressor(
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IOutputStream * underlyingStream,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::Compression::ICompressor * * createdCompressor
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateCompressorEx(
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IOutputStream * underlyingStream,
                        /* [in] */ABI::Windows::Storage::Compression::CompressAlgorithm algorithm,
                        /* [in] */UINT32 blockSize,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::Compression::ICompressor * * createdCompressor
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ICompressorFactory=_uuidof(ICompressorFactory);
                
            } /* Windows */
        } /* Storage */
    } /* Compression */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CCompression_CICompressorFactory;
#endif /* !defined(____x_ABI_CWindows_CStorage_CCompression_CICompressorFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Storage.Compression.IDecompressor
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Storage.Compression.Decompressor
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Storage.Streams.IInputStream
 *     Windows.Foundation.IClosable
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CStorage_CCompression_CIDecompressor_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CStorage_CCompression_CIDecompressor_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Compression_IDecompressor[] = L"Windows.Storage.Compression.IDecompressor";
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Compression {
                /* [object, uuid("B883FE46-D68A-4C8B-ADA0-4EE813FC5283"), exclusiveto, contract] */
                MIDL_INTERFACE("B883FE46-D68A-4C8B-ADA0-4EE813FC5283")
                IDecompressor : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE DetachStream(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::Streams::IInputStream * * stream
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IDecompressor=_uuidof(IDecompressor);
                
            } /* Windows */
        } /* Storage */
    } /* Compression */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CCompression_CIDecompressor;
#endif /* !defined(____x_ABI_CWindows_CStorage_CCompression_CIDecompressor_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Storage.Compression.IDecompressorFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Storage.Compression.Decompressor
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CStorage_CCompression_CIDecompressorFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CStorage_CCompression_CIDecompressorFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Compression_IDecompressorFactory[] = L"Windows.Storage.Compression.IDecompressorFactory";
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Compression {
                /* [object, uuid("5337E252-1DA2-42E1-8834-0379D28D742F"), exclusiveto, contract] */
                MIDL_INTERFACE("5337E252-1DA2-42E1-8834-0379D28D742F")
                IDecompressorFactory : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE CreateDecompressor(
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IInputStream * underlyingStream,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::Compression::IDecompressor * * createdDecompressor
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IDecompressorFactory=_uuidof(IDecompressorFactory);
                
            } /* Windows */
        } /* Storage */
    } /* Compression */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CCompression_CIDecompressorFactory;
#endif /* !defined(____x_ABI_CWindows_CStorage_CCompression_CIDecompressorFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Storage.Compression.Compressor
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Storage.Compression.ICompressorFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Storage.Compression.ICompressor ** Default Interface **
 *    Windows.Storage.Streams.IOutputStream
 *    Windows.Foundation.IClosable
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Storage_Compression_Compressor_DEFINED
#define RUNTIMECLASS_Windows_Storage_Compression_Compressor_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_Compression_Compressor[] = L"Windows.Storage.Compression.Compressor";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Storage.Compression.Decompressor
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Storage.Compression.IDecompressorFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Storage.Compression.IDecompressor ** Default Interface **
 *    Windows.Storage.Streams.IInputStream
 *    Windows.Foundation.IClosable
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Storage_Compression_Decompressor_DEFINED
#define RUNTIMECLASS_Windows_Storage_Compression_Decompressor_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_Compression_Decompressor[] = L"Windows.Storage.Compression.Decompressor";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000




#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CStorage_CCompression_CICompressor_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CCompression_CICompressor_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CCompression_CICompressor __x_ABI_CWindows_CStorage_CCompression_CICompressor;

#endif // ____x_ABI_CWindows_CStorage_CCompression_CICompressor_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CStorage_CCompression_CICompressorFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CCompression_CICompressorFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CCompression_CICompressorFactory __x_ABI_CWindows_CStorage_CCompression_CICompressorFactory;

#endif // ____x_ABI_CWindows_CStorage_CCompression_CICompressorFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CStorage_CCompression_CIDecompressor_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CCompression_CIDecompressor_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CCompression_CIDecompressor __x_ABI_CWindows_CStorage_CCompression_CIDecompressor;

#endif // ____x_ABI_CWindows_CStorage_CCompression_CIDecompressor_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CStorage_CCompression_CIDecompressorFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CCompression_CIDecompressorFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CCompression_CIDecompressorFactory __x_ABI_CWindows_CStorage_CCompression_CIDecompressorFactory;

#endif // ____x_ABI_CWindows_CStorage_CCompression_CIDecompressorFactory_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions
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



#ifndef ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIClosable __x_ABI_CWindows_CFoundation_CIClosable;

#endif // ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__





#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIInputStream_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIInputStream_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIInputStream __x_ABI_CWindows_CStorage_CStreams_CIInputStream;

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIInputStream_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIOutputStream_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIOutputStream_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIOutputStream __x_ABI_CWindows_CStorage_CStreams_CIOutputStream;

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIOutputStream_FWD_DEFINED__






typedef enum __x_ABI_CWindows_CStorage_CCompression_CCompressAlgorithm __x_ABI_CWindows_CStorage_CCompression_CCompressAlgorithm;











/*
 *
 * Struct Windows.Storage.Compression.CompressAlgorithm
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CStorage_CCompression_CCompressAlgorithm
{
    CompressAlgorithm_InvalidAlgorithm = 0,
    CompressAlgorithm_NullAlgorithm = 1,
    CompressAlgorithm_Mszip = 2,
    CompressAlgorithm_Xpress = 3,
    CompressAlgorithm_XpressHuff = 4,
    CompressAlgorithm_Lzms = 5,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Storage.Compression.ICompressor
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Storage.Compression.Compressor
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Storage.Streams.IOutputStream
 *     Windows.Foundation.IClosable
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CStorage_CCompression_CICompressor_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CStorage_CCompression_CICompressor_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Compression_ICompressor[] = L"Windows.Storage.Compression.ICompressor";
/* [object, uuid("0AC3645A-57AC-4EE1-B702-84D39D5424E0"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CStorage_CCompression_CICompressorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CCompression_CICompressor * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CCompression_CICompressor * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CCompression_CICompressor * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CCompression_CICompressor * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CCompression_CICompressor * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CCompression_CICompressor * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *FinishAsync )(
        __x_ABI_CWindows_CStorage_CCompression_CICompressor * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *DetachStream )(
        __x_ABI_CWindows_CStorage_CCompression_CICompressor * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIOutputStream * * stream
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CStorage_CCompression_CICompressorVtbl;

interface __x_ABI_CWindows_CStorage_CCompression_CICompressor
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CCompression_CICompressorVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CStorage_CCompression_CICompressor_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CStorage_CCompression_CICompressor_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CStorage_CCompression_CICompressor_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CStorage_CCompression_CICompressor_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CStorage_CCompression_CICompressor_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CStorage_CCompression_CICompressor_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CStorage_CCompression_CICompressor_FinishAsync(This,operation) \
    ( (This)->lpVtbl->FinishAsync(This,operation) )

#define __x_ABI_CWindows_CStorage_CCompression_CICompressor_DetachStream(This,stream) \
    ( (This)->lpVtbl->DetachStream(This,stream) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CCompression_CICompressor;
#endif /* !defined(____x_ABI_CWindows_CStorage_CCompression_CICompressor_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Storage.Compression.ICompressorFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Storage.Compression.Compressor
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CStorage_CCompression_CICompressorFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CStorage_CCompression_CICompressorFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Compression_ICompressorFactory[] = L"Windows.Storage.Compression.ICompressorFactory";
/* [object, uuid("5F3D96A4-2CFB-442C-A8BA-D7D11B039DA0"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CStorage_CCompression_CICompressorFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CCompression_CICompressorFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CCompression_CICompressorFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CCompression_CICompressorFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CCompression_CICompressorFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CCompression_CICompressorFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CCompression_CICompressorFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateCompressor )(
        __x_ABI_CWindows_CStorage_CCompression_CICompressorFactory * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIOutputStream * underlyingStream,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CCompression_CICompressor * * createdCompressor
        );
    HRESULT ( STDMETHODCALLTYPE *CreateCompressorEx )(
        __x_ABI_CWindows_CStorage_CCompression_CICompressorFactory * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIOutputStream * underlyingStream,
        /* [in] */__x_ABI_CWindows_CStorage_CCompression_CCompressAlgorithm algorithm,
        /* [in] */UINT32 blockSize,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CCompression_CICompressor * * createdCompressor
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CStorage_CCompression_CICompressorFactoryVtbl;

interface __x_ABI_CWindows_CStorage_CCompression_CICompressorFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CCompression_CICompressorFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CStorage_CCompression_CICompressorFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CStorage_CCompression_CICompressorFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CStorage_CCompression_CICompressorFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CStorage_CCompression_CICompressorFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CStorage_CCompression_CICompressorFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CStorage_CCompression_CICompressorFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CStorage_CCompression_CICompressorFactory_CreateCompressor(This,underlyingStream,createdCompressor) \
    ( (This)->lpVtbl->CreateCompressor(This,underlyingStream,createdCompressor) )

#define __x_ABI_CWindows_CStorage_CCompression_CICompressorFactory_CreateCompressorEx(This,underlyingStream,algorithm,blockSize,createdCompressor) \
    ( (This)->lpVtbl->CreateCompressorEx(This,underlyingStream,algorithm,blockSize,createdCompressor) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CCompression_CICompressorFactory;
#endif /* !defined(____x_ABI_CWindows_CStorage_CCompression_CICompressorFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Storage.Compression.IDecompressor
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Storage.Compression.Decompressor
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Storage.Streams.IInputStream
 *     Windows.Foundation.IClosable
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CStorage_CCompression_CIDecompressor_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CStorage_CCompression_CIDecompressor_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Compression_IDecompressor[] = L"Windows.Storage.Compression.IDecompressor";
/* [object, uuid("B883FE46-D68A-4C8B-ADA0-4EE813FC5283"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CStorage_CCompression_CIDecompressorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CCompression_CIDecompressor * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CCompression_CIDecompressor * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CCompression_CIDecompressor * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CCompression_CIDecompressor * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CCompression_CIDecompressor * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CCompression_CIDecompressor * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *DetachStream )(
        __x_ABI_CWindows_CStorage_CCompression_CIDecompressor * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIInputStream * * stream
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CStorage_CCompression_CIDecompressorVtbl;

interface __x_ABI_CWindows_CStorage_CCompression_CIDecompressor
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CCompression_CIDecompressorVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CStorage_CCompression_CIDecompressor_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CStorage_CCompression_CIDecompressor_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CStorage_CCompression_CIDecompressor_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CStorage_CCompression_CIDecompressor_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CStorage_CCompression_CIDecompressor_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CStorage_CCompression_CIDecompressor_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CStorage_CCompression_CIDecompressor_DetachStream(This,stream) \
    ( (This)->lpVtbl->DetachStream(This,stream) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CCompression_CIDecompressor;
#endif /* !defined(____x_ABI_CWindows_CStorage_CCompression_CIDecompressor_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Storage.Compression.IDecompressorFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Storage.Compression.Decompressor
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CStorage_CCompression_CIDecompressorFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CStorage_CCompression_CIDecompressorFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Compression_IDecompressorFactory[] = L"Windows.Storage.Compression.IDecompressorFactory";
/* [object, uuid("5337E252-1DA2-42E1-8834-0379D28D742F"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CStorage_CCompression_CIDecompressorFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CCompression_CIDecompressorFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CCompression_CIDecompressorFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CCompression_CIDecompressorFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CCompression_CIDecompressorFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CCompression_CIDecompressorFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CCompression_CIDecompressorFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateDecompressor )(
        __x_ABI_CWindows_CStorage_CCompression_CIDecompressorFactory * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIInputStream * underlyingStream,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CCompression_CIDecompressor * * createdDecompressor
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CStorage_CCompression_CIDecompressorFactoryVtbl;

interface __x_ABI_CWindows_CStorage_CCompression_CIDecompressorFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CCompression_CIDecompressorFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CStorage_CCompression_CIDecompressorFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CStorage_CCompression_CIDecompressorFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CStorage_CCompression_CIDecompressorFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CStorage_CCompression_CIDecompressorFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CStorage_CCompression_CIDecompressorFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CStorage_CCompression_CIDecompressorFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CStorage_CCompression_CIDecompressorFactory_CreateDecompressor(This,underlyingStream,createdDecompressor) \
    ( (This)->lpVtbl->CreateDecompressor(This,underlyingStream,createdDecompressor) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CCompression_CIDecompressorFactory;
#endif /* !defined(____x_ABI_CWindows_CStorage_CCompression_CIDecompressorFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Storage.Compression.Compressor
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Storage.Compression.ICompressorFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Storage.Compression.ICompressor ** Default Interface **
 *    Windows.Storage.Streams.IOutputStream
 *    Windows.Foundation.IClosable
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Storage_Compression_Compressor_DEFINED
#define RUNTIMECLASS_Windows_Storage_Compression_Compressor_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_Compression_Compressor[] = L"Windows.Storage.Compression.Compressor";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Storage.Compression.Decompressor
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Storage.Compression.IDecompressorFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Storage.Compression.IDecompressor ** Default Interface **
 *    Windows.Storage.Streams.IInputStream
 *    Windows.Foundation.IClosable
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Storage_Compression_Decompressor_DEFINED
#define RUNTIMECLASS_Windows_Storage_Compression_Decompressor_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_Compression_Decompressor[] = L"Windows.Storage.Compression.Decompressor";
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
#endif // __windows2Estorage2Ecompression_p_h__

#endif // __windows2Estorage2Ecompression_h__
