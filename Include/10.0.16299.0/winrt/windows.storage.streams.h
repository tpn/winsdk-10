/* Header file automatically generated from windows.storage.streams.idl */
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
#ifndef __windows2Estorage2Estreams_h__
#define __windows2Estorage2Estreams_h__
#ifndef __windows2Estorage2Estreams_p_h__
#define __windows2Estorage2Estreams_p_h__


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
#include "Windows.System.h"
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
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

#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIBufferFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIBufferFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Streams {
                interface IBufferFactory;
            } /* Windows */
        } /* Storage */
    } /* Streams */} /* ABI */
#define __x_ABI_CWindows_CStorage_CStreams_CIBufferFactory ABI::Windows::Storage::Streams::IBufferFactory

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIBufferFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIBufferStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIBufferStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Streams {
                interface IBufferStatics;
            } /* Windows */
        } /* Storage */
    } /* Streams */} /* ABI */
#define __x_ABI_CWindows_CStorage_CStreams_CIBufferStatics ABI::Windows::Storage::Streams::IBufferStatics

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIBufferStatics_FWD_DEFINED__

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

#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIDataReader_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIDataReader_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Streams {
                interface IDataReader;
            } /* Windows */
        } /* Storage */
    } /* Streams */} /* ABI */
#define __x_ABI_CWindows_CStorage_CStreams_CIDataReader ABI::Windows::Storage::Streams::IDataReader

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIDataReader_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIDataReaderFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIDataReaderFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Streams {
                interface IDataReaderFactory;
            } /* Windows */
        } /* Storage */
    } /* Streams */} /* ABI */
#define __x_ABI_CWindows_CStorage_CStreams_CIDataReaderFactory ABI::Windows::Storage::Streams::IDataReaderFactory

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIDataReaderFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIDataReaderStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIDataReaderStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Streams {
                interface IDataReaderStatics;
            } /* Windows */
        } /* Storage */
    } /* Streams */} /* ABI */
#define __x_ABI_CWindows_CStorage_CStreams_CIDataReaderStatics ABI::Windows::Storage::Streams::IDataReaderStatics

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIDataReaderStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIDataWriter_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIDataWriter_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Streams {
                interface IDataWriter;
            } /* Windows */
        } /* Storage */
    } /* Streams */} /* ABI */
#define __x_ABI_CWindows_CStorage_CStreams_CIDataWriter ABI::Windows::Storage::Streams::IDataWriter

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIDataWriter_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIDataWriterFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIDataWriterFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Streams {
                interface IDataWriterFactory;
            } /* Windows */
        } /* Storage */
    } /* Streams */} /* ABI */
#define __x_ABI_CWindows_CStorage_CStreams_CIDataWriterFactory ABI::Windows::Storage::Streams::IDataWriterFactory

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIDataWriterFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIFileRandomAccessStreamStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIFileRandomAccessStreamStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Streams {
                interface IFileRandomAccessStreamStatics;
            } /* Windows */
        } /* Storage */
    } /* Streams */} /* ABI */
#define __x_ABI_CWindows_CStorage_CStreams_CIFileRandomAccessStreamStatics ABI::Windows::Storage::Streams::IFileRandomAccessStreamStatics

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIFileRandomAccessStreamStatics_FWD_DEFINED__

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

#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIInputStreamReference_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIInputStreamReference_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Streams {
                interface IInputStreamReference;
            } /* Windows */
        } /* Storage */
    } /* Streams */} /* ABI */
#define __x_ABI_CWindows_CStorage_CStreams_CIInputStreamReference ABI::Windows::Storage::Streams::IInputStreamReference

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIInputStreamReference_FWD_DEFINED__

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

#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Streams {
                interface IRandomAccessStreamReference;
            } /* Windows */
        } /* Storage */
    } /* Streams */} /* ABI */
#define __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference ABI::Windows::Storage::Streams::IRandomAccessStreamReference

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReferenceStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReferenceStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Streams {
                interface IRandomAccessStreamReferenceStatics;
            } /* Windows */
        } /* Storage */
    } /* Streams */} /* ABI */
#define __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReferenceStatics ABI::Windows::Storage::Streams::IRandomAccessStreamReferenceStatics

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReferenceStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Streams {
                interface IRandomAccessStreamStatics;
            } /* Windows */
        } /* Storage */
    } /* Streams */} /* ABI */
#define __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamStatics ABI::Windows::Storage::Streams::IRandomAccessStreamStatics

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamStatics_FWD_DEFINED__

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

// Parameterized interface forward declarations (C++)

// Collection interface definitions

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer_USE
#define DEF___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("9114f794-2ceb-5b03-9b22-36884e1f58b3"))
IKeyValuePair<HSTRING,ABI::Windows::Storage::Streams::IBuffer*> : IKeyValuePair_impl<HSTRING,ABI::Windows::Storage::Streams::IBuffer*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IKeyValuePair`2<String, Windows.Storage.Streams.IBuffer>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IKeyValuePair<HSTRING,ABI::Windows::Storage::Streams::IBuffer*> __FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer_t;
#define __FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer ABI::Windows::Foundation::Collections::__FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,ABI::Windows::Storage::Streams::IBuffer*>
//#define __FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer_t ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,ABI::Windows::Storage::Streams::IBuffer*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer_USE
#define DEF___FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("790acb62-c4b3-57ea-a152-9e219371c6dc"))
IIterator<__FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer*> : IIterator_impl<__FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Foundation.Collections.IKeyValuePair`2<String, Windows.Storage.Streams.IBuffer>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<__FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer*> __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer_t;
#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer ABI::Windows::Foundation::Collections::__FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,ABI::Windows::Storage::Streams::IBuffer*>*>
//#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,ABI::Windows::Storage::Streams::IBuffer*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer_USE
#define DEF___FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("3c9ffa92-5123-5ac4-b111-03c215f0c51c"))
IIterable<__FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer*> : IIterable_impl<__FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Foundation.Collections.IKeyValuePair`2<String, Windows.Storage.Streams.IBuffer>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<__FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer*> __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer_t;
#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer ABI::Windows::Foundation::Collections::__FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,ABI::Windows::Storage::Streams::IBuffer*>*>
//#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,ABI::Windows::Storage::Streams::IBuffer*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Streams {
                class RandomAccessStreamReference;
            } /* Windows */
        } /* Storage */
    } /* Streams */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_USE
#define DEF___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("e5195792-aeab-56e8-bd30-1372c4340bf6"))
IKeyValuePair<HSTRING,ABI::Windows::Storage::Streams::RandomAccessStreamReference*> : IKeyValuePair_impl<HSTRING,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Storage::Streams::RandomAccessStreamReference*, ABI::Windows::Storage::Streams::IRandomAccessStreamReference*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IKeyValuePair`2<String, Windows.Storage.Streams.RandomAccessStreamReference>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IKeyValuePair<HSTRING,ABI::Windows::Storage::Streams::RandomAccessStreamReference*> __FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_t;
#define __FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference ABI::Windows::Foundation::Collections::__FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,ABI::Windows::Storage::Streams::IRandomAccessStreamReference*>
//#define __FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_t ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,ABI::Windows::Storage::Streams::IRandomAccessStreamReference*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_USE
#define DEF___FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("9419af53-acb8-5328-8853-70ba87eb6ad5"))
IIterator<__FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference*> : IIterator_impl<__FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Foundation.Collections.IKeyValuePair`2<String, Windows.Storage.Streams.RandomAccessStreamReference>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<__FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference*> __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_t;
#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference ABI::Windows::Foundation::Collections::__FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,ABI::Windows::Storage::Streams::IRandomAccessStreamReference*>*>
//#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,ABI::Windows::Storage::Streams::IRandomAccessStreamReference*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_USE
#define DEF___FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("c9729ba7-5e20-569d-a3d1-97a4e653e5bb"))
IIterable<__FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference*> : IIterable_impl<__FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Foundation.Collections.IKeyValuePair`2<String, Windows.Storage.Streams.RandomAccessStreamReference>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<__FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference*> __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_t;
#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference ABI::Windows::Foundation::Collections::__FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,ABI::Windows::Storage::Streams::IRandomAccessStreamReference*>*>
//#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,ABI::Windows::Storage::Streams::IRandomAccessStreamReference*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIKeyValuePair_2_UINT32_Windows__CStorage__CStreams__CIBuffer_USE
#define DEF___FIKeyValuePair_2_UINT32_Windows__CStorage__CStreams__CIBuffer_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("82a3a3b7-e04a-5395-8487-7f94f1508ce7"))
IKeyValuePair<UINT32,ABI::Windows::Storage::Streams::IBuffer*> : IKeyValuePair_impl<UINT32,ABI::Windows::Storage::Streams::IBuffer*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IKeyValuePair`2<UInt32, Windows.Storage.Streams.IBuffer>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IKeyValuePair<UINT32,ABI::Windows::Storage::Streams::IBuffer*> __FIKeyValuePair_2_UINT32_Windows__CStorage__CStreams__CIBuffer_t;
#define __FIKeyValuePair_2_UINT32_Windows__CStorage__CStreams__CIBuffer ABI::Windows::Foundation::Collections::__FIKeyValuePair_2_UINT32_Windows__CStorage__CStreams__CIBuffer_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIKeyValuePair_2_UINT32_Windows__CStorage__CStreams__CIBuffer ABI::Windows::Foundation::Collections::IKeyValuePair<UINT32,ABI::Windows::Storage::Streams::IBuffer*>
//#define __FIKeyValuePair_2_UINT32_Windows__CStorage__CStreams__CIBuffer_t ABI::Windows::Foundation::Collections::IKeyValuePair<UINT32,ABI::Windows::Storage::Streams::IBuffer*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIKeyValuePair_2_UINT32_Windows__CStorage__CStreams__CIBuffer_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1___FIKeyValuePair_2_UINT32_Windows__CStorage__CStreams__CIBuffer_USE
#define DEF___FIIterator_1___FIKeyValuePair_2_UINT32_Windows__CStorage__CStreams__CIBuffer_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("a295fa0c-c99f-5109-8ab9-91534bb48c9b"))
IIterator<__FIKeyValuePair_2_UINT32_Windows__CStorage__CStreams__CIBuffer*> : IIterator_impl<__FIKeyValuePair_2_UINT32_Windows__CStorage__CStreams__CIBuffer*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Foundation.Collections.IKeyValuePair`2<UInt32, Windows.Storage.Streams.IBuffer>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<__FIKeyValuePair_2_UINT32_Windows__CStorage__CStreams__CIBuffer*> __FIIterator_1___FIKeyValuePair_2_UINT32_Windows__CStorage__CStreams__CIBuffer_t;
#define __FIIterator_1___FIKeyValuePair_2_UINT32_Windows__CStorage__CStreams__CIBuffer ABI::Windows::Foundation::Collections::__FIIterator_1___FIKeyValuePair_2_UINT32_Windows__CStorage__CStreams__CIBuffer_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1___FIKeyValuePair_2_UINT32_Windows__CStorage__CStreams__CIBuffer ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Foundation::Collections::IKeyValuePair<UINT32,ABI::Windows::Storage::Streams::IBuffer*>*>
//#define __FIIterator_1___FIKeyValuePair_2_UINT32_Windows__CStorage__CStreams__CIBuffer_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Foundation::Collections::IKeyValuePair<UINT32,ABI::Windows::Storage::Streams::IBuffer*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1___FIKeyValuePair_2_UINT32_Windows__CStorage__CStreams__CIBuffer_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1___FIKeyValuePair_2_UINT32_Windows__CStorage__CStreams__CIBuffer_USE
#define DEF___FIIterable_1___FIKeyValuePair_2_UINT32_Windows__CStorage__CStreams__CIBuffer_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("4fe7fe23-22b1-528c-881d-a4eceaef0f11"))
IIterable<__FIKeyValuePair_2_UINT32_Windows__CStorage__CStreams__CIBuffer*> : IIterable_impl<__FIKeyValuePair_2_UINT32_Windows__CStorage__CStreams__CIBuffer*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Foundation.Collections.IKeyValuePair`2<UInt32, Windows.Storage.Streams.IBuffer>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<__FIKeyValuePair_2_UINT32_Windows__CStorage__CStreams__CIBuffer*> __FIIterable_1___FIKeyValuePair_2_UINT32_Windows__CStorage__CStreams__CIBuffer_t;
#define __FIIterable_1___FIKeyValuePair_2_UINT32_Windows__CStorage__CStreams__CIBuffer ABI::Windows::Foundation::Collections::__FIIterable_1___FIKeyValuePair_2_UINT32_Windows__CStorage__CStreams__CIBuffer_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1___FIKeyValuePair_2_UINT32_Windows__CStorage__CStreams__CIBuffer ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Foundation::Collections::IKeyValuePair<UINT32,ABI::Windows::Storage::Streams::IBuffer*>*>
//#define __FIIterable_1___FIKeyValuePair_2_UINT32_Windows__CStorage__CStreams__CIBuffer_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Foundation::Collections::IKeyValuePair<UINT32,ABI::Windows::Storage::Streams::IBuffer*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1___FIKeyValuePair_2_UINT32_Windows__CStorage__CStreams__CIBuffer_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CStorage__CStreams__CIBuffer_USE
#define DEF___FIIterator_1_Windows__CStorage__CStreams__CIBuffer_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("afee38e0-f882-5f10-9655-1fc98cc8cce5"))
IIterator<ABI::Windows::Storage::Streams::IBuffer*> : IIterator_impl<ABI::Windows::Storage::Streams::IBuffer*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Storage.Streams.IBuffer>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Storage::Streams::IBuffer*> __FIIterator_1_Windows__CStorage__CStreams__CIBuffer_t;
#define __FIIterator_1_Windows__CStorage__CStreams__CIBuffer ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CStorage__CStreams__CIBuffer_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CStorage__CStreams__CIBuffer ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Storage::Streams::IBuffer*>
//#define __FIIterator_1_Windows__CStorage__CStreams__CIBuffer_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Storage::Streams::IBuffer*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CStorage__CStreams__CIBuffer_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CStorage__CStreams__CIBuffer_USE
#define DEF___FIIterable_1_Windows__CStorage__CStreams__CIBuffer_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("902972bf-a984-5443-b1c5-2f04a99e1fca"))
IIterable<ABI::Windows::Storage::Streams::IBuffer*> : IIterable_impl<ABI::Windows::Storage::Streams::IBuffer*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Storage.Streams.IBuffer>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Storage::Streams::IBuffer*> __FIIterable_1_Windows__CStorage__CStreams__CIBuffer_t;
#define __FIIterable_1_Windows__CStorage__CStreams__CIBuffer ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CStorage__CStreams__CIBuffer_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CStorage__CStreams__CIBuffer ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Storage::Streams::IBuffer*>
//#define __FIIterable_1_Windows__CStorage__CStreams__CIBuffer_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Storage::Streams::IBuffer*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CStorage__CStreams__CIBuffer_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CStorage__CStreams__CIRandomAccessStream_USE
#define DEF___FIIterator_1_Windows__CStorage__CStreams__CIRandomAccessStream_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("c875446a-587f-58da-897e-3bbe5ec7c30b"))
IIterator<ABI::Windows::Storage::Streams::IRandomAccessStream*> : IIterator_impl<ABI::Windows::Storage::Streams::IRandomAccessStream*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Storage.Streams.IRandomAccessStream>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Storage::Streams::IRandomAccessStream*> __FIIterator_1_Windows__CStorage__CStreams__CIRandomAccessStream_t;
#define __FIIterator_1_Windows__CStorage__CStreams__CIRandomAccessStream ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CStorage__CStreams__CIRandomAccessStream_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CStorage__CStreams__CIRandomAccessStream ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Storage::Streams::IRandomAccessStream*>
//#define __FIIterator_1_Windows__CStorage__CStreams__CIRandomAccessStream_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Storage::Streams::IRandomAccessStream*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CStorage__CStreams__CIRandomAccessStream_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CStorage__CStreams__CIRandomAccessStream_USE
#define DEF___FIIterable_1_Windows__CStorage__CStreams__CIRandomAccessStream_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("ba666a00-1555-5df4-81a5-07d23f7ffceb"))
IIterable<ABI::Windows::Storage::Streams::IRandomAccessStream*> : IIterable_impl<ABI::Windows::Storage::Streams::IRandomAccessStream*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Storage.Streams.IRandomAccessStream>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Storage::Streams::IRandomAccessStream*> __FIIterable_1_Windows__CStorage__CStreams__CIRandomAccessStream_t;
#define __FIIterable_1_Windows__CStorage__CStreams__CIRandomAccessStream ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CStorage__CStreams__CIRandomAccessStream_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CStorage__CStreams__CIRandomAccessStream ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Storage::Streams::IRandomAccessStream*>
//#define __FIIterable_1_Windows__CStorage__CStreams__CIRandomAccessStream_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Storage::Streams::IRandomAccessStream*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CStorage__CStreams__CIRandomAccessStream_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIMapView_2_HSTRING_Windows__CStorage__CStreams__CIBuffer_USE
#define DEF___FIMapView_2_HSTRING_Windows__CStorage__CStreams__CIBuffer_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("2cfeec4f-e261-5f4c-aee1-c78518e9d5b9"))
IMapView<HSTRING,ABI::Windows::Storage::Streams::IBuffer*> : IMapView_impl<HSTRING,ABI::Windows::Storage::Streams::IBuffer*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IMapView`2<String, Windows.Storage.Streams.IBuffer>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IMapView<HSTRING,ABI::Windows::Storage::Streams::IBuffer*> __FIMapView_2_HSTRING_Windows__CStorage__CStreams__CIBuffer_t;
#define __FIMapView_2_HSTRING_Windows__CStorage__CStreams__CIBuffer ABI::Windows::Foundation::Collections::__FIMapView_2_HSTRING_Windows__CStorage__CStreams__CIBuffer_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIMapView_2_HSTRING_Windows__CStorage__CStreams__CIBuffer ABI::Windows::Foundation::Collections::IMapView<HSTRING,ABI::Windows::Storage::Streams::IBuffer*>
//#define __FIMapView_2_HSTRING_Windows__CStorage__CStreams__CIBuffer_t ABI::Windows::Foundation::Collections::IMapView<HSTRING,ABI::Windows::Storage::Streams::IBuffer*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIMapView_2_HSTRING_Windows__CStorage__CStreams__CIBuffer_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_USE
#define DEF___FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("0a4ce7a5-dfe0-5796-a438-effdfaa31f1b"))
IMapView<HSTRING,ABI::Windows::Storage::Streams::RandomAccessStreamReference*> : IMapView_impl<HSTRING,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Storage::Streams::RandomAccessStreamReference*, ABI::Windows::Storage::Streams::IRandomAccessStreamReference*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IMapView`2<String, Windows.Storage.Streams.RandomAccessStreamReference>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IMapView<HSTRING,ABI::Windows::Storage::Streams::RandomAccessStreamReference*> __FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_t;
#define __FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference ABI::Windows::Foundation::Collections::__FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference ABI::Windows::Foundation::Collections::IMapView<HSTRING,ABI::Windows::Storage::Streams::IRandomAccessStreamReference*>
//#define __FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_t ABI::Windows::Foundation::Collections::IMapView<HSTRING,ABI::Windows::Storage::Streams::IRandomAccessStreamReference*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBuffer_USE
#define DEF___FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBuffer_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("57dc41e6-8b4d-5910-9703-d7c668436852"))
IMapView<UINT32,ABI::Windows::Storage::Streams::IBuffer*> : IMapView_impl<UINT32,ABI::Windows::Storage::Streams::IBuffer*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IMapView`2<UInt32, Windows.Storage.Streams.IBuffer>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IMapView<UINT32,ABI::Windows::Storage::Streams::IBuffer*> __FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBuffer_t;
#define __FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBuffer ABI::Windows::Foundation::Collections::__FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBuffer_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBuffer ABI::Windows::Foundation::Collections::IMapView<UINT32,ABI::Windows::Storage::Streams::IBuffer*>
//#define __FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBuffer_t ABI::Windows::Foundation::Collections::IMapView<UINT32,ABI::Windows::Storage::Streams::IBuffer*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBuffer_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIMap_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_USE
#define DEF___FIMap_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("e5d2ccfc-825a-5a8e-82aa-095ed5dbd5d1"))
IMap<HSTRING,ABI::Windows::Storage::Streams::RandomAccessStreamReference*> : IMap_impl<HSTRING,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Storage::Streams::RandomAccessStreamReference*, ABI::Windows::Storage::Streams::IRandomAccessStreamReference*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IMap`2<String, Windows.Storage.Streams.RandomAccessStreamReference>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IMap<HSTRING,ABI::Windows::Storage::Streams::RandomAccessStreamReference*> __FIMap_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_t;
#define __FIMap_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference ABI::Windows::Foundation::Collections::__FIMap_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIMap_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference ABI::Windows::Foundation::Collections::IMap<HSTRING,ABI::Windows::Storage::Streams::IRandomAccessStreamReference*>
//#define __FIMap_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_t ABI::Windows::Foundation::Collections::IMap<HSTRING,ABI::Windows::Storage::Streams::IRandomAccessStreamReference*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIMap_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIMap_2_UINT32_Windows__CStorage__CStreams__CIBuffer_USE
#define DEF___FIMap_2_UINT32_Windows__CStorage__CStreams__CIBuffer_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("5d2591df-48c5-5734-9ef1-bd639b032007"))
IMap<UINT32,ABI::Windows::Storage::Streams::IBuffer*> : IMap_impl<UINT32,ABI::Windows::Storage::Streams::IBuffer*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IMap`2<UInt32, Windows.Storage.Streams.IBuffer>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IMap<UINT32,ABI::Windows::Storage::Streams::IBuffer*> __FIMap_2_UINT32_Windows__CStorage__CStreams__CIBuffer_t;
#define __FIMap_2_UINT32_Windows__CStorage__CStreams__CIBuffer ABI::Windows::Foundation::Collections::__FIMap_2_UINT32_Windows__CStorage__CStreams__CIBuffer_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIMap_2_UINT32_Windows__CStorage__CStreams__CIBuffer ABI::Windows::Foundation::Collections::IMap<UINT32,ABI::Windows::Storage::Streams::IBuffer*>
//#define __FIMap_2_UINT32_Windows__CStorage__CStreams__CIBuffer_t ABI::Windows::Foundation::Collections::IMap<UINT32,ABI::Windows::Storage::Streams::IBuffer*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIMap_2_UINT32_Windows__CStorage__CStreams__CIBuffer_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CStorage__CStreams__CIBuffer_USE
#define DEF___FIVectorView_1_Windows__CStorage__CStreams__CIBuffer_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("fd944562-11d6-5eab-bd72-701993b68fac"))
IVectorView<ABI::Windows::Storage::Streams::IBuffer*> : IVectorView_impl<ABI::Windows::Storage::Streams::IBuffer*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Storage.Streams.IBuffer>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Storage::Streams::IBuffer*> __FIVectorView_1_Windows__CStorage__CStreams__CIBuffer_t;
#define __FIVectorView_1_Windows__CStorage__CStreams__CIBuffer ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CStorage__CStreams__CIBuffer_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CStorage__CStreams__CIBuffer ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Storage::Streams::IBuffer*>
//#define __FIVectorView_1_Windows__CStorage__CStreams__CIBuffer_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Storage::Streams::IBuffer*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CStorage__CStreams__CIBuffer_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CStorage__CStreams__CIRandomAccessStream_USE
#define DEF___FIVectorView_1_Windows__CStorage__CStreams__CIRandomAccessStream_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("92cd0a46-2266-5cd6-9293-e111299f2793"))
IVectorView<ABI::Windows::Storage::Streams::IRandomAccessStream*> : IVectorView_impl<ABI::Windows::Storage::Streams::IRandomAccessStream*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Storage.Streams.IRandomAccessStream>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Storage::Streams::IRandomAccessStream*> __FIVectorView_1_Windows__CStorage__CStreams__CIRandomAccessStream_t;
#define __FIVectorView_1_Windows__CStorage__CStreams__CIRandomAccessStream ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CStorage__CStreams__CIRandomAccessStream_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CStorage__CStreams__CIRandomAccessStream ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Storage::Streams::IRandomAccessStream*>
//#define __FIVectorView_1_Windows__CStorage__CStreams__CIRandomAccessStream_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Storage::Streams::IRandomAccessStream*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CStorage__CStreams__CIRandomAccessStream_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVector_1_Windows__CStorage__CStreams__CIBuffer_USE
#define DEF___FIVector_1_Windows__CStorage__CStreams__CIBuffer_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("308fe894-cc06-5007-bc85-cbe94ac1a70c"))
IVector<ABI::Windows::Storage::Streams::IBuffer*> : IVector_impl<ABI::Windows::Storage::Streams::IBuffer*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVector`1<Windows.Storage.Streams.IBuffer>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVector<ABI::Windows::Storage::Streams::IBuffer*> __FIVector_1_Windows__CStorage__CStreams__CIBuffer_t;
#define __FIVector_1_Windows__CStorage__CStreams__CIBuffer ABI::Windows::Foundation::Collections::__FIVector_1_Windows__CStorage__CStreams__CIBuffer_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVector_1_Windows__CStorage__CStreams__CIBuffer ABI::Windows::Foundation::Collections::IVector<ABI::Windows::Storage::Streams::IBuffer*>
//#define __FIVector_1_Windows__CStorage__CStreams__CIBuffer_t ABI::Windows::Foundation::Collections::IVector<ABI::Windows::Storage::Streams::IBuffer*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVector_1_Windows__CStorage__CStreams__CIBuffer_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVector_1_Windows__CStorage__CStreams__CIRandomAccessStream_USE
#define DEF___FIVector_1_Windows__CStorage__CStreams__CIRandomAccessStream_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("2736b66b-daa3-5e0c-9842-6a0f44b5440b"))
IVector<ABI::Windows::Storage::Streams::IRandomAccessStream*> : IVector_impl<ABI::Windows::Storage::Streams::IRandomAccessStream*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVector`1<Windows.Storage.Streams.IRandomAccessStream>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVector<ABI::Windows::Storage::Streams::IRandomAccessStream*> __FIVector_1_Windows__CStorage__CStreams__CIRandomAccessStream_t;
#define __FIVector_1_Windows__CStorage__CStreams__CIRandomAccessStream ABI::Windows::Foundation::Collections::__FIVector_1_Windows__CStorage__CStreams__CIRandomAccessStream_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVector_1_Windows__CStorage__CStreams__CIRandomAccessStream ABI::Windows::Foundation::Collections::IVector<ABI::Windows::Storage::Streams::IRandomAccessStream*>
//#define __FIVector_1_Windows__CStorage__CStreams__CIRandomAccessStream_t ABI::Windows::Foundation::Collections::IVector<ABI::Windows::Storage::Streams::IRandomAccessStream*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVector_1_Windows__CStorage__CStreams__CIRandomAccessStream_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT32_USE
#define DEF___FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT32_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("bf666554-7605-5d9a-b14e-18d8c8472afe"))
IAsyncOperationProgressHandler<ABI::Windows::Storage::Streams::IBuffer*,UINT32> : IAsyncOperationProgressHandler_impl<ABI::Windows::Storage::Streams::IBuffer*,UINT32> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationProgressHandler`2<Windows.Storage.Streams.IBuffer, UInt32>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationProgressHandler<ABI::Windows::Storage::Streams::IBuffer*,UINT32> __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT32_t;
#define __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT32 ABI::Windows::Foundation::__FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT32_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT32 ABI::Windows::Foundation::IAsyncOperationProgressHandler<ABI::Windows::Storage::Streams::IBuffer*,UINT32>
//#define __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT32_t ABI::Windows::Foundation::IAsyncOperationProgressHandler<ABI::Windows::Storage::Streams::IBuffer*,UINT32>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT32_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT32_USE
#define DEF___FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT32_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("06386a7a-e009-5b0b-ab68-a8e48b516647"))
IAsyncOperationWithProgressCompletedHandler<ABI::Windows::Storage::Streams::IBuffer*,UINT32> : IAsyncOperationWithProgressCompletedHandler_impl<ABI::Windows::Storage::Streams::IBuffer*,UINT32> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<Windows.Storage.Streams.IBuffer, UInt32>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationWithProgressCompletedHandler<ABI::Windows::Storage::Streams::IBuffer*,UINT32> __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT32_t;
#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT32 ABI::Windows::Foundation::__FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT32_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT32 ABI::Windows::Foundation::IAsyncOperationWithProgressCompletedHandler<ABI::Windows::Storage::Streams::IBuffer*,UINT32>
//#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT32_t ABI::Windows::Foundation::IAsyncOperationWithProgressCompletedHandler<ABI::Windows::Storage::Streams::IBuffer*,UINT32>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT32_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_UINT32_USE
#define DEF___FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_UINT32_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("d26b2819-897f-5c7d-84d6-56d796561431"))
IAsyncOperationWithProgress<ABI::Windows::Storage::Streams::IBuffer*,UINT32> : IAsyncOperationWithProgress_impl<ABI::Windows::Storage::Streams::IBuffer*,UINT32> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperationWithProgress`2<Windows.Storage.Streams.IBuffer, UInt32>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationWithProgress<ABI::Windows::Storage::Streams::IBuffer*,UINT32> __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_UINT32_t;
#define __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_UINT32 ABI::Windows::Foundation::__FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_UINT32_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_UINT32 ABI::Windows::Foundation::IAsyncOperationWithProgress<ABI::Windows::Storage::Streams::IBuffer*,UINT32>
//#define __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_UINT32_t ABI::Windows::Foundation::IAsyncOperationWithProgress<ABI::Windows::Storage::Streams::IBuffer*,UINT32>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_UINT32_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT64_USE
#define DEF___FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT64_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("d17f5eb6-b422-5e26-a817-7e0fd08f75d5"))
IAsyncOperationProgressHandler<ABI::Windows::Storage::Streams::IBuffer*,UINT64> : IAsyncOperationProgressHandler_impl<ABI::Windows::Storage::Streams::IBuffer*,UINT64> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationProgressHandler`2<Windows.Storage.Streams.IBuffer, UInt64>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationProgressHandler<ABI::Windows::Storage::Streams::IBuffer*,UINT64> __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT64_t;
#define __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT64 ABI::Windows::Foundation::__FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT64_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT64 ABI::Windows::Foundation::IAsyncOperationProgressHandler<ABI::Windows::Storage::Streams::IBuffer*,UINT64>
//#define __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT64_t ABI::Windows::Foundation::IAsyncOperationProgressHandler<ABI::Windows::Storage::Streams::IBuffer*,UINT64>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT64_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT64_USE
#define DEF___FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT64_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("abc81235-39c7-59bf-9948-2d14a93d40fd"))
IAsyncOperationWithProgressCompletedHandler<ABI::Windows::Storage::Streams::IBuffer*,UINT64> : IAsyncOperationWithProgressCompletedHandler_impl<ABI::Windows::Storage::Streams::IBuffer*,UINT64> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<Windows.Storage.Streams.IBuffer, UInt64>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationWithProgressCompletedHandler<ABI::Windows::Storage::Streams::IBuffer*,UINT64> __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT64_t;
#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT64 ABI::Windows::Foundation::__FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT64_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT64 ABI::Windows::Foundation::IAsyncOperationWithProgressCompletedHandler<ABI::Windows::Storage::Streams::IBuffer*,UINT64>
//#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT64_t ABI::Windows::Foundation::IAsyncOperationWithProgressCompletedHandler<ABI::Windows::Storage::Streams::IBuffer*,UINT64>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT64_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_UINT64_USE
#define DEF___FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_UINT64_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("ad960e7f-d73b-56e4-a58c-6ec7678cfd88"))
IAsyncOperationWithProgress<ABI::Windows::Storage::Streams::IBuffer*,UINT64> : IAsyncOperationWithProgress_impl<ABI::Windows::Storage::Streams::IBuffer*,UINT64> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperationWithProgress`2<Windows.Storage.Streams.IBuffer, UInt64>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationWithProgress<ABI::Windows::Storage::Streams::IBuffer*,UINT64> __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_UINT64_t;
#define __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_UINT64 ABI::Windows::Foundation::__FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_UINT64_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_UINT64 ABI::Windows::Foundation::IAsyncOperationWithProgress<ABI::Windows::Storage::Streams::IBuffer*,UINT64>
//#define __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_UINT64_t ABI::Windows::Foundation::IAsyncOperationWithProgress<ABI::Windows::Storage::Streams::IBuffer*,UINT64>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_UINT64_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIInputStream_UINT64_USE
#define DEF___FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIInputStream_UINT64_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("f9b2e7f6-762f-50db-95dd-7f6c6ec47090"))
IAsyncOperationProgressHandler<ABI::Windows::Storage::Streams::IInputStream*,UINT64> : IAsyncOperationProgressHandler_impl<ABI::Windows::Storage::Streams::IInputStream*,UINT64> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationProgressHandler`2<Windows.Storage.Streams.IInputStream, UInt64>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationProgressHandler<ABI::Windows::Storage::Streams::IInputStream*,UINT64> __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIInputStream_UINT64_t;
#define __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIInputStream_UINT64 ABI::Windows::Foundation::__FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIInputStream_UINT64_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIInputStream_UINT64 ABI::Windows::Foundation::IAsyncOperationProgressHandler<ABI::Windows::Storage::Streams::IInputStream*,UINT64>
//#define __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIInputStream_UINT64_t ABI::Windows::Foundation::IAsyncOperationProgressHandler<ABI::Windows::Storage::Streams::IInputStream*,UINT64>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIInputStream_UINT64_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIInputStream_UINT64_USE
#define DEF___FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIInputStream_UINT64_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("8db69706-3dd1-5a28-986a-93be0776d9c3"))
IAsyncOperationWithProgressCompletedHandler<ABI::Windows::Storage::Streams::IInputStream*,UINT64> : IAsyncOperationWithProgressCompletedHandler_impl<ABI::Windows::Storage::Streams::IInputStream*,UINT64> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<Windows.Storage.Streams.IInputStream, UInt64>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationWithProgressCompletedHandler<ABI::Windows::Storage::Streams::IInputStream*,UINT64> __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIInputStream_UINT64_t;
#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIInputStream_UINT64 ABI::Windows::Foundation::__FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIInputStream_UINT64_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIInputStream_UINT64 ABI::Windows::Foundation::IAsyncOperationWithProgressCompletedHandler<ABI::Windows::Storage::Streams::IInputStream*,UINT64>
//#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIInputStream_UINT64_t ABI::Windows::Foundation::IAsyncOperationWithProgressCompletedHandler<ABI::Windows::Storage::Streams::IInputStream*,UINT64>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIInputStream_UINT64_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_UINT64_USE
#define DEF___FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_UINT64_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("455aa601-f13e-5dee-b9cb-16b531996327"))
IAsyncOperationWithProgress<ABI::Windows::Storage::Streams::IInputStream*,UINT64> : IAsyncOperationWithProgress_impl<ABI::Windows::Storage::Streams::IInputStream*,UINT64> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperationWithProgress`2<Windows.Storage.Streams.IInputStream, UInt64>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationWithProgress<ABI::Windows::Storage::Streams::IInputStream*,UINT64> __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_UINT64_t;
#define __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_UINT64 ABI::Windows::Foundation::__FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_UINT64_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_UINT64 ABI::Windows::Foundation::IAsyncOperationWithProgress<ABI::Windows::Storage::Streams::IInputStream*,UINT64>
//#define __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_UINT64_t ABI::Windows::Foundation::IAsyncOperationWithProgress<ABI::Windows::Storage::Streams::IInputStream*,UINT64>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_UINT64_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_USE
#define DEF___FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("d4cb6b80-821a-5a7b-898d-d58917b31a36"))
IAsyncOperationCompletedHandler<__FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference*> : IAsyncOperationCompletedHandler_impl<__FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Foundation.Collections.IMapView`2<String, Windows.Storage.Streams.RandomAccessStreamReference>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<__FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference*> __FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_t;
#define __FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Foundation::Collections::IMapView<HSTRING,ABI::Windows::Storage::Streams::IRandomAccessStreamReference*>*>
//#define __FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Foundation::Collections::IMapView<HSTRING,ABI::Windows::Storage::Streams::IRandomAccessStreamReference*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1___FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_USE
#define DEF___FIAsyncOperation_1___FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("fc012d44-2dcf-5162-be9a-7668675aa590"))
IAsyncOperation<__FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference*> : IAsyncOperation_impl<__FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Foundation.Collections.IMapView`2<String, Windows.Storage.Streams.RandomAccessStreamReference>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<__FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference*> __FIAsyncOperation_1___FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_t;
#define __FIAsyncOperation_1___FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference ABI::Windows::Foundation::__FIAsyncOperation_1___FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1___FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Foundation::Collections::IMapView<HSTRING,ABI::Windows::Storage::Streams::IRandomAccessStreamReference*>*>
//#define __FIAsyncOperation_1___FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Foundation::Collections::IMapView<HSTRING,ABI::Windows::Storage::Streams::IRandomAccessStreamReference*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1___FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1___FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBuffer_USE
#define DEF___FIAsyncOperationCompletedHandler_1___FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBuffer_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("92c2e4d0-7c25-596b-9135-10d1472e6968"))
IAsyncOperationCompletedHandler<__FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBuffer*> : IAsyncOperationCompletedHandler_impl<__FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBuffer*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Foundation.Collections.IMapView`2<UInt32, Windows.Storage.Streams.IBuffer>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<__FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBuffer*> __FIAsyncOperationCompletedHandler_1___FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBuffer_t;
#define __FIAsyncOperationCompletedHandler_1___FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBuffer ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1___FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBuffer_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1___FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBuffer ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Foundation::Collections::IMapView<UINT32,ABI::Windows::Storage::Streams::IBuffer*>*>
//#define __FIAsyncOperationCompletedHandler_1___FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBuffer_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Foundation::Collections::IMapView<UINT32,ABI::Windows::Storage::Streams::IBuffer*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1___FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBuffer_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1___FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBuffer_USE
#define DEF___FIAsyncOperation_1___FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBuffer_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("d4904ded-bc1d-5933-aecf-e42c5d465bff"))
IAsyncOperation<__FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBuffer*> : IAsyncOperation_impl<__FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBuffer*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Foundation.Collections.IMapView`2<UInt32, Windows.Storage.Streams.IBuffer>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<__FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBuffer*> __FIAsyncOperation_1___FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBuffer_t;
#define __FIAsyncOperation_1___FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBuffer ABI::Windows::Foundation::__FIAsyncOperation_1___FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBuffer_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1___FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBuffer ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Foundation::Collections::IMapView<UINT32,ABI::Windows::Storage::Streams::IBuffer*>*>
//#define __FIAsyncOperation_1___FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBuffer_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Foundation::Collections::IMapView<UINT32,ABI::Windows::Storage::Streams::IBuffer*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1___FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBuffer_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("51c3d2fd-b8a1-5620-b746-7ee6d533aca3"))
IAsyncOperationCompletedHandler<ABI::Windows::Storage::Streams::IBuffer*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Storage::Streams::IBuffer*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Storage.Streams.IBuffer>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::Storage::Streams::IBuffer*> __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Storage::Streams::IBuffer*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Storage::Streams::IBuffer*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer_USE
#define DEF___FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("3bee8834-b9a7-5a80-a746-5ef097227878"))
IAsyncOperation<ABI::Windows::Storage::Streams::IBuffer*> : IAsyncOperation_impl<ABI::Windows::Storage::Streams::IBuffer*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Storage.Streams.IBuffer>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::Storage::Streams::IBuffer*> __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer_t;
#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Storage::Streams::IBuffer*>
//#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Storage::Streams::IBuffer*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIInputStream_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIInputStream_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("d0bd0125-9049-57a3-bd66-e2525d98c814"))
IAsyncOperationCompletedHandler<ABI::Windows::Storage::Streams::IInputStream*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Storage::Streams::IInputStream*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Storage.Streams.IInputStream>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::Storage::Streams::IInputStream*> __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIInputStream_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIInputStream ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIInputStream_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIInputStream ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Storage::Streams::IInputStream*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIInputStream_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Storage::Streams::IInputStream*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIInputStream_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1_Windows__CStorage__CStreams__CIInputStream_USE
#define DEF___FIAsyncOperation_1_Windows__CStorage__CStreams__CIInputStream_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("a8fe0732-556d-5841-b7ee-b3450fb52666"))
IAsyncOperation<ABI::Windows::Storage::Streams::IInputStream*> : IAsyncOperation_impl<ABI::Windows::Storage::Streams::IInputStream*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Storage.Streams.IInputStream>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::Storage::Streams::IInputStream*> __FIAsyncOperation_1_Windows__CStorage__CStreams__CIInputStream_t;
#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIInputStream ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CStorage__CStreams__CIInputStream_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIInputStream ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Storage::Streams::IInputStream*>
//#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIInputStream_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Storage::Streams::IInputStream*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CStorage__CStreams__CIInputStream_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIOutputStream_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIOutputStream_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("bcb37f4f-3af4-561c-a9e3-eef1738494d7"))
IAsyncOperationCompletedHandler<ABI::Windows::Storage::Streams::IOutputStream*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Storage::Streams::IOutputStream*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Storage.Streams.IOutputStream>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::Storage::Streams::IOutputStream*> __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIOutputStream_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIOutputStream ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIOutputStream_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIOutputStream ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Storage::Streams::IOutputStream*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIOutputStream_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Storage::Streams::IOutputStream*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIOutputStream_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1_Windows__CStorage__CStreams__CIOutputStream_USE
#define DEF___FIAsyncOperation_1_Windows__CStorage__CStreams__CIOutputStream_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("e8736833-d013-5361-977d-c5e99934680e"))
IAsyncOperation<ABI::Windows::Storage::Streams::IOutputStream*> : IAsyncOperation_impl<ABI::Windows::Storage::Streams::IOutputStream*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Storage.Streams.IOutputStream>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::Storage::Streams::IOutputStream*> __FIAsyncOperation_1_Windows__CStorage__CStreams__CIOutputStream_t;
#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIOutputStream ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CStorage__CStreams__CIOutputStream_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIOutputStream ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Storage::Streams::IOutputStream*>
//#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIOutputStream_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Storage::Streams::IOutputStream*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CStorage__CStreams__CIOutputStream_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


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


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("60847289-ea0b-5df6-89df-f2c62cba9693"))
IAsyncOperationCompletedHandler<ABI::Windows::Storage::Streams::IRandomAccessStreamReference*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Storage::Streams::IRandomAccessStreamReference*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Storage.Streams.IRandomAccessStreamReference>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::Storage::Streams::IRandomAccessStreamReference*> __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Storage::Streams::IRandomAccessStreamReference*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Storage::Streams::IRandomAccessStreamReference*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference_USE
#define DEF___FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("65178d50-e6a2-5d16-b244-65e9725e5a0c"))
IAsyncOperation<ABI::Windows::Storage::Streams::IRandomAccessStreamReference*> : IAsyncOperation_impl<ABI::Windows::Storage::Streams::IRandomAccessStreamReference*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Storage.Streams.IRandomAccessStreamReference>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::Storage::Streams::IRandomAccessStreamReference*> __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference_t;
#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Storage::Streams::IRandomAccessStreamReference*>
//#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Storage::Streams::IRandomAccessStreamReference*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("3dddecf4-1d39-58e8-83b1-dbed541c7f35"))
IAsyncOperationCompletedHandler<ABI::Windows::Storage::Streams::IRandomAccessStreamWithContentType*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Storage::Streams::IRandomAccessStreamWithContentType*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Storage.Streams.IRandomAccessStreamWithContentType>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::Storage::Streams::IRandomAccessStreamWithContentType*> __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Storage::Streams::IRandomAccessStreamWithContentType*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Storage::Streams::IRandomAccessStreamWithContentType*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType_USE
#define DEF___FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("c4a57c5e-32b0-55b3-ad13-ce1c23041ed6"))
IAsyncOperation<ABI::Windows::Storage::Streams::IRandomAccessStreamWithContentType*> : IAsyncOperation_impl<ABI::Windows::Storage::Streams::IRandomAccessStreamWithContentType*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Storage.Streams.IRandomAccessStreamWithContentType>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::Storage::Streams::IRandomAccessStreamWithContentType*> __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType_t;
#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Storage::Streams::IRandomAccessStreamWithContentType*>
//#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Storage::Streams::IRandomAccessStreamWithContentType*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CRandomAccessStreamReference_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CRandomAccessStreamReference_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("3d203732-ded7-5d32-87e6-c179781f791f"))
IAsyncOperationCompletedHandler<ABI::Windows::Storage::Streams::RandomAccessStreamReference*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Storage::Streams::RandomAccessStreamReference*, ABI::Windows::Storage::Streams::IRandomAccessStreamReference*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Storage.Streams.RandomAccessStreamReference>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::Storage::Streams::RandomAccessStreamReference*> __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CRandomAccessStreamReference_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CRandomAccessStreamReference ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CRandomAccessStreamReference_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CRandomAccessStreamReference ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Storage::Streams::IRandomAccessStreamReference*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CRandomAccessStreamReference_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Storage::Streams::IRandomAccessStreamReference*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CRandomAccessStreamReference_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1_Windows__CStorage__CStreams__CRandomAccessStreamReference_USE
#define DEF___FIAsyncOperation_1_Windows__CStorage__CStreams__CRandomAccessStreamReference_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("d90442ca-543c-504b-9eb9-294bcad8a283"))
IAsyncOperation<ABI::Windows::Storage::Streams::RandomAccessStreamReference*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Storage::Streams::RandomAccessStreamReference*, ABI::Windows::Storage::Streams::IRandomAccessStreamReference*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Storage.Streams.RandomAccessStreamReference>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::Storage::Streams::RandomAccessStreamReference*> __FIAsyncOperation_1_Windows__CStorage__CStreams__CRandomAccessStreamReference_t;
#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CRandomAccessStreamReference ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CStorage__CStreams__CRandomAccessStreamReference_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CRandomAccessStreamReference ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Storage::Streams::IRandomAccessStreamReference*>
//#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CRandomAccessStreamReference_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Storage::Streams::IRandomAccessStreamReference*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CStorage__CStreams__CRandomAccessStreamReference_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#ifndef DEF___FIAsyncOperationCompletedHandler_1_UINT32_USE
#define DEF___FIAsyncOperationCompletedHandler_1_UINT32_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("9343b6e7-e3d2-5e4a-ab2d-2bce4919a6a4"))
IAsyncOperationCompletedHandler<UINT32> : IAsyncOperationCompletedHandler_impl<UINT32> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<UInt32>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<UINT32> __FIAsyncOperationCompletedHandler_1_UINT32_t;
#define __FIAsyncOperationCompletedHandler_1_UINT32 ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_UINT32_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_UINT32 ABI::Windows::Foundation::IAsyncOperationCompletedHandler<UINT32>
//#define __FIAsyncOperationCompletedHandler_1_UINT32_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<UINT32>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_UINT32_USE */




#ifndef DEF___FIAsyncOperation_1_UINT32_USE
#define DEF___FIAsyncOperation_1_UINT32_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("ef60385f-be78-584b-aaef-7829ada2b0de"))
IAsyncOperation<UINT32> : IAsyncOperation_impl<UINT32> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<UInt32>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<UINT32> __FIAsyncOperation_1_UINT32_t;
#define __FIAsyncOperation_1_UINT32 ABI::Windows::Foundation::__FIAsyncOperation_1_UINT32_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_UINT32 ABI::Windows::Foundation::IAsyncOperation<UINT32>
//#define __FIAsyncOperation_1_UINT32_t ABI::Windows::Foundation::IAsyncOperation<UINT32>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_UINT32_USE */




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



namespace ABI {
    namespace Windows {
        namespace Storage {
            class StorageStreamTransaction;
        } /* Windows */
    } /* Storage */} /* ABI */

#ifndef ____x_ABI_CWindows_CStorage_CIStorageStreamTransaction_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CIStorageStreamTransaction_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Storage {
            interface IStorageStreamTransaction;
        } /* Windows */
    } /* Storage */} /* ABI */
#define __x_ABI_CWindows_CStorage_CIStorageStreamTransaction ABI::Windows::Storage::IStorageStreamTransaction

#endif // ____x_ABI_CWindows_CStorage_CIStorageStreamTransaction_FWD_DEFINED__


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageStreamTransaction_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageStreamTransaction_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("d11739e6-2995-5d33-bfff-51b6041f68c1"))
IAsyncOperationCompletedHandler<ABI::Windows::Storage::StorageStreamTransaction*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Storage::StorageStreamTransaction*, ABI::Windows::Storage::IStorageStreamTransaction*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Storage.StorageStreamTransaction>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::Storage::StorageStreamTransaction*> __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageStreamTransaction_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageStreamTransaction ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageStreamTransaction_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageStreamTransaction ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Storage::IStorageStreamTransaction*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageStreamTransaction_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Storage::IStorageStreamTransaction*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageStreamTransaction_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1_Windows__CStorage__CStorageStreamTransaction_USE
#define DEF___FIAsyncOperation_1_Windows__CStorage__CStorageStreamTransaction_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("0d81405a-9bd3-5e87-82f4-9b4128a887eb"))
IAsyncOperation<ABI::Windows::Storage::StorageStreamTransaction*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Storage::StorageStreamTransaction*, ABI::Windows::Storage::IStorageStreamTransaction*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Storage.StorageStreamTransaction>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::Storage::StorageStreamTransaction*> __FIAsyncOperation_1_Windows__CStorage__CStorageStreamTransaction_t;
#define __FIAsyncOperation_1_Windows__CStorage__CStorageStreamTransaction ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CStorage__CStorageStreamTransaction_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CStorage__CStorageStreamTransaction ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Storage::IStorageStreamTransaction*>
//#define __FIAsyncOperation_1_Windows__CStorage__CStorageStreamTransaction_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Storage::IStorageStreamTransaction*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CStorage__CStorageStreamTransaction_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#ifndef DEF___FIAsyncOperationProgressHandler_2_UINT32_UINT32_USE
#define DEF___FIAsyncOperationProgressHandler_2_UINT32_UINT32_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("ea0fe405-d432-5ac7-9ef8-5a65e1f97d7e"))
IAsyncOperationProgressHandler<UINT32,UINT32> : IAsyncOperationProgressHandler_impl<UINT32,UINT32> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationProgressHandler`2<UInt32, UInt32>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationProgressHandler<UINT32,UINT32> __FIAsyncOperationProgressHandler_2_UINT32_UINT32_t;
#define __FIAsyncOperationProgressHandler_2_UINT32_UINT32 ABI::Windows::Foundation::__FIAsyncOperationProgressHandler_2_UINT32_UINT32_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationProgressHandler_2_UINT32_UINT32 ABI::Windows::Foundation::IAsyncOperationProgressHandler<UINT32,UINT32>
//#define __FIAsyncOperationProgressHandler_2_UINT32_UINT32_t ABI::Windows::Foundation::IAsyncOperationProgressHandler<UINT32,UINT32>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationProgressHandler_2_UINT32_UINT32_USE */




#ifndef DEF___FIAsyncOperationWithProgressCompletedHandler_2_UINT32_UINT32_USE
#define DEF___FIAsyncOperationWithProgressCompletedHandler_2_UINT32_UINT32_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("1e466dc5-840f-54f9-b877-5e3a9f4b6c74"))
IAsyncOperationWithProgressCompletedHandler<UINT32,UINT32> : IAsyncOperationWithProgressCompletedHandler_impl<UINT32,UINT32> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<UInt32, UInt32>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationWithProgressCompletedHandler<UINT32,UINT32> __FIAsyncOperationWithProgressCompletedHandler_2_UINT32_UINT32_t;
#define __FIAsyncOperationWithProgressCompletedHandler_2_UINT32_UINT32 ABI::Windows::Foundation::__FIAsyncOperationWithProgressCompletedHandler_2_UINT32_UINT32_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationWithProgressCompletedHandler_2_UINT32_UINT32 ABI::Windows::Foundation::IAsyncOperationWithProgressCompletedHandler<UINT32,UINT32>
//#define __FIAsyncOperationWithProgressCompletedHandler_2_UINT32_UINT32_t ABI::Windows::Foundation::IAsyncOperationWithProgressCompletedHandler<UINT32,UINT32>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationWithProgressCompletedHandler_2_UINT32_UINT32_USE */




#ifndef DEF___FIAsyncOperationWithProgress_2_UINT32_UINT32_USE
#define DEF___FIAsyncOperationWithProgress_2_UINT32_UINT32_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("eccb574a-c684-5572-a679-6b0842cfb57f"))
IAsyncOperationWithProgress<UINT32,UINT32> : IAsyncOperationWithProgress_impl<UINT32,UINT32> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperationWithProgress`2<UInt32, UInt32>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationWithProgress<UINT32,UINT32> __FIAsyncOperationWithProgress_2_UINT32_UINT32_t;
#define __FIAsyncOperationWithProgress_2_UINT32_UINT32 ABI::Windows::Foundation::__FIAsyncOperationWithProgress_2_UINT32_UINT32_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationWithProgress_2_UINT32_UINT32 ABI::Windows::Foundation::IAsyncOperationWithProgress<UINT32,UINT32>
//#define __FIAsyncOperationWithProgress_2_UINT32_UINT32_t ABI::Windows::Foundation::IAsyncOperationWithProgress<UINT32,UINT32>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationWithProgress_2_UINT32_UINT32_USE */




#ifndef DEF___FIAsyncOperationProgressHandler_2_UINT64_UINT64_USE
#define DEF___FIAsyncOperationProgressHandler_2_UINT64_UINT64_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("ffb2b65d-4120-5d13-826d-107851e6bb1c"))
IAsyncOperationProgressHandler<UINT64,UINT64> : IAsyncOperationProgressHandler_impl<UINT64,UINT64> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationProgressHandler`2<UInt64, UInt64>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationProgressHandler<UINT64,UINT64> __FIAsyncOperationProgressHandler_2_UINT64_UINT64_t;
#define __FIAsyncOperationProgressHandler_2_UINT64_UINT64 ABI::Windows::Foundation::__FIAsyncOperationProgressHandler_2_UINT64_UINT64_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationProgressHandler_2_UINT64_UINT64 ABI::Windows::Foundation::IAsyncOperationProgressHandler<UINT64,UINT64>
//#define __FIAsyncOperationProgressHandler_2_UINT64_UINT64_t ABI::Windows::Foundation::IAsyncOperationProgressHandler<UINT64,UINT64>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationProgressHandler_2_UINT64_UINT64_USE */




#ifndef DEF___FIAsyncOperationWithProgressCompletedHandler_2_UINT64_UINT64_USE
#define DEF___FIAsyncOperationWithProgressCompletedHandler_2_UINT64_UINT64_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("d2024e41-5500-5b5a-ba46-cb7009596a2f"))
IAsyncOperationWithProgressCompletedHandler<UINT64,UINT64> : IAsyncOperationWithProgressCompletedHandler_impl<UINT64,UINT64> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<UInt64, UInt64>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationWithProgressCompletedHandler<UINT64,UINT64> __FIAsyncOperationWithProgressCompletedHandler_2_UINT64_UINT64_t;
#define __FIAsyncOperationWithProgressCompletedHandler_2_UINT64_UINT64 ABI::Windows::Foundation::__FIAsyncOperationWithProgressCompletedHandler_2_UINT64_UINT64_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationWithProgressCompletedHandler_2_UINT64_UINT64 ABI::Windows::Foundation::IAsyncOperationWithProgressCompletedHandler<UINT64,UINT64>
//#define __FIAsyncOperationWithProgressCompletedHandler_2_UINT64_UINT64_t ABI::Windows::Foundation::IAsyncOperationWithProgressCompletedHandler<UINT64,UINT64>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationWithProgressCompletedHandler_2_UINT64_UINT64_USE */




#ifndef DEF___FIAsyncOperationWithProgress_2_UINT64_UINT64_USE
#define DEF___FIAsyncOperationWithProgress_2_UINT64_UINT64_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("8f1db6e3-6556-5516-825c-1021ee27cd0c"))
IAsyncOperationWithProgress<UINT64,UINT64> : IAsyncOperationWithProgress_impl<UINT64,UINT64> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperationWithProgress`2<UInt64, UInt64>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationWithProgress<UINT64,UINT64> __FIAsyncOperationWithProgress_2_UINT64_UINT64_t;
#define __FIAsyncOperationWithProgress_2_UINT64_UINT64 ABI::Windows::Foundation::__FIAsyncOperationWithProgress_2_UINT64_UINT64_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationWithProgress_2_UINT64_UINT64 ABI::Windows::Foundation::IAsyncOperationWithProgress<UINT64,UINT64>
//#define __FIAsyncOperationWithProgress_2_UINT64_UINT64_t ABI::Windows::Foundation::IAsyncOperationWithProgress<UINT64,UINT64>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationWithProgress_2_UINT64_UINT64_USE */





namespace ABI {
    namespace Windows {
        namespace Foundation {
            
            typedef struct DateTime DateTime;
            
        } /* Windows */
    } /* Foundation */} /* ABI */

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
            class MemoryBuffer;
        } /* Windows */
    } /* Foundation */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Foundation {
            
            typedef struct TimeSpan TimeSpan;
            
        } /* Windows */
    } /* Foundation */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Foundation {
            class Uri;
        } /* Windows */
    } /* Foundation */} /* ABI */

#ifndef ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Foundation {
            interface IUriRuntimeClass;
        } /* Windows */
    } /* Foundation */} /* ABI */
#define __x_ABI_CWindows_CFoundation_CIUriRuntimeClass ABI::Windows::Foundation::IUriRuntimeClass

#endif // ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__




namespace ABI {
    namespace Windows {
        namespace Storage {
            
            typedef enum FileAccessMode : int FileAccessMode;
            
        } /* Windows */
    } /* Storage */} /* ABI */

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
            
            typedef enum StorageOpenOptions : unsigned int StorageOpenOptions;
            
        } /* Windows */
    } /* Storage */} /* ABI */




namespace ABI {
    namespace Windows {
        namespace System {
            class User;
        } /* Windows */
    } /* System */} /* ABI */

#ifndef ____x_ABI_CWindows_CSystem_CIUser_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CIUser_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace System {
            interface IUser;
        } /* Windows */
    } /* System */} /* ABI */
#define __x_ABI_CWindows_CSystem_CIUser ABI::Windows::System::IUser

#endif // ____x_ABI_CWindows_CSystem_CIUser_FWD_DEFINED__




namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Streams {
                
                typedef enum ByteOrder : int ByteOrder;
                
            } /* Windows */
        } /* Storage */
    } /* Streams */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Streams {
                
                typedef enum FileOpenDisposition : int FileOpenDisposition;
                
            } /* Windows */
        } /* Storage */
    } /* Streams */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Streams {
                
                typedef enum InputStreamOptions : unsigned int InputStreamOptions;
                
            } /* Windows */
        } /* Storage */
    } /* Streams */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Streams {
                
                typedef enum UnicodeEncoding : int UnicodeEncoding;
                
            } /* Windows */
        } /* Storage */
    } /* Streams */} /* ABI */



















namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Streams {
                class Buffer;
            } /* Windows */
        } /* Storage */
    } /* Streams */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Streams {
                class DataReader;
            } /* Windows */
        } /* Storage */
    } /* Streams */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Streams {
                class DataReaderLoadOperation;
            } /* Windows */
        } /* Storage */
    } /* Streams */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Streams {
                class DataWriter;
            } /* Windows */
        } /* Storage */
    } /* Streams */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Streams {
                class DataWriterStoreOperation;
            } /* Windows */
        } /* Storage */
    } /* Streams */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Streams {
                class FileInputStream;
            } /* Windows */
        } /* Storage */
    } /* Streams */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Streams {
                class FileOutputStream;
            } /* Windows */
        } /* Storage */
    } /* Streams */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Streams {
                class FileRandomAccessStream;
            } /* Windows */
        } /* Storage */
    } /* Streams */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Streams {
                class InMemoryRandomAccessStream;
            } /* Windows */
        } /* Storage */
    } /* Streams */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Streams {
                class InputStreamOverStream;
            } /* Windows */
        } /* Storage */
    } /* Streams */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Streams {
                class OutputStreamOverStream;
            } /* Windows */
        } /* Storage */
    } /* Streams */} /* ABI */



namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Streams {
                class RandomAccessStreamOverStream;
            } /* Windows */
        } /* Storage */
    } /* Streams */} /* ABI */











/*
 *
 * Struct Windows.Storage.Streams.ByteOrder
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Streams {
                /* [v1_enum, contract] */
                enum ByteOrder : int
                {
                    ByteOrder_LittleEndian = 0,
                    ByteOrder_BigEndian = 1,
                };
                
            } /* Windows */
        } /* Storage */
    } /* Streams */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Storage.Streams.FileOpenDisposition
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Streams {
                /* [v1_enum, contract] */
                enum FileOpenDisposition : int
                {
                    FileOpenDisposition_OpenExisting = 0,
                    FileOpenDisposition_OpenAlways = 1,
                    FileOpenDisposition_CreateNew = 2,
                    FileOpenDisposition_CreateAlways = 3,
                    FileOpenDisposition_TruncateExisting = 4,
                };
                
            } /* Windows */
        } /* Storage */
    } /* Streams */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Struct Windows.Storage.Streams.InputStreamOptions
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Streams {
                /* [v1_enum, flags, contract] */
                enum InputStreamOptions : unsigned int
                {
                    InputStreamOptions_None = 0,
                    InputStreamOptions_Partial = 0x1,
                    InputStreamOptions_ReadAhead = 0x2,
                };
                
                DEFINE_ENUM_FLAG_OPERATORS(InputStreamOptions)
                
            } /* Windows */
        } /* Storage */
    } /* Streams */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Storage.Streams.UnicodeEncoding
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Streams {
                /* [v1_enum, contract] */
                enum UnicodeEncoding : int
                {
                    UnicodeEncoding_Utf8 = 0,
                    UnicodeEncoding_Utf16LE = 1,
                    UnicodeEncoding_Utf16BE = 2,
                };
                
            } /* Windows */
        } /* Storage */
    } /* Streams */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Storage.Streams.IBuffer
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CStorage_CStreams_CIBuffer_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CStorage_CStreams_CIBuffer_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Streams_IBuffer[] = L"Windows.Storage.Streams.IBuffer";
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Streams {
                /* [object, uuid("905A0FE0-BC53-11DF-8C49-001E4FC686DA"), contract] */
                MIDL_INTERFACE("905A0FE0-BC53-11DF-8C49-001E4FC686DA")
                IBuffer : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Capacity(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Length(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Length(
                        /* [in] */UINT32 value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IBuffer=_uuidof(IBuffer);
                
            } /* Windows */
        } /* Storage */
    } /* Streams */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CStreams_CIBuffer;
#endif /* !defined(____x_ABI_CWindows_CStorage_CStreams_CIBuffer_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Storage.Streams.IBufferFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Storage.Streams.Buffer
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CStorage_CStreams_CIBufferFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CStorage_CStreams_CIBufferFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Streams_IBufferFactory[] = L"Windows.Storage.Streams.IBufferFactory";
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Streams {
                /* [object, uuid("71AF914D-C10F-484B-BC50-14BC623B3A27"), exclusiveto, contract] */
                MIDL_INTERFACE("71AF914D-C10F-484B-BC50-14BC623B3A27")
                IBufferFactory : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE Create(
                        /* [range(0, 2147483647), in] */__RPC__in_range(0,0x7fffffff) UINT32 capacity,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::Streams::IBuffer * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IBufferFactory=_uuidof(IBufferFactory);
                
            } /* Windows */
        } /* Storage */
    } /* Streams */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CStreams_CIBufferFactory;
#endif /* !defined(____x_ABI_CWindows_CStorage_CStreams_CIBufferFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Storage.Streams.IBufferStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Storage.Streams.Buffer
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CStorage_CStreams_CIBufferStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CStorage_CStreams_CIBufferStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Streams_IBufferStatics[] = L"Windows.Storage.Streams.IBufferStatics";
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Streams {
                /* [object, uuid("E901E65B-D716-475A-A90A-AF7229B1E741"), exclusiveto, contract] */
                MIDL_INTERFACE("E901E65B-D716-475A-A90A-AF7229B1E741")
                IBufferStatics : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE CreateCopyFromMemoryBuffer(
                        /* [in] */__RPC__in_opt ABI::Windows::Foundation::IMemoryBuffer * input,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::Streams::IBuffer * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateMemoryBufferOverIBuffer(
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IBuffer * input,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IMemoryBuffer * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IBufferStatics=_uuidof(IBufferStatics);
                
            } /* Windows */
        } /* Storage */
    } /* Streams */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CStreams_CIBufferStatics;
#endif /* !defined(____x_ABI_CWindows_CStorage_CStreams_CIBufferStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Storage.Streams.IContentTypeProvider
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CStorage_CStreams_CIContentTypeProvider_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CStorage_CStreams_CIContentTypeProvider_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Streams_IContentTypeProvider[] = L"Windows.Storage.Streams.IContentTypeProvider";
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Streams {
                /* [object, uuid("97D098A5-3B99-4DE9-88A5-E11D2F50C795"), contract] */
                MIDL_INTERFACE("97D098A5-3B99-4DE9-88A5-E11D2F50C795")
                IContentTypeProvider : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ContentType(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IContentTypeProvider=_uuidof(IContentTypeProvider);
                
            } /* Windows */
        } /* Storage */
    } /* Streams */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CStreams_CIContentTypeProvider;
#endif /* !defined(____x_ABI_CWindows_CStorage_CStreams_CIContentTypeProvider_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Storage.Streams.IDataReader
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CStorage_CStreams_CIDataReader_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CStorage_CStreams_CIDataReader_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Streams_IDataReader[] = L"Windows.Storage.Streams.IDataReader";
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Streams {
                /* [object, uuid("E2B50029-B4C1-4314-A4B8-FB813A2F275E"), contract] */
                MIDL_INTERFACE("E2B50029-B4C1-4314-A4B8-FB813A2F275E")
                IDataReader : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_UnconsumedBufferLength(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_UnicodeEncoding(
                        /* [retval, out] */__RPC__out ABI::Windows::Storage::Streams::UnicodeEncoding * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_UnicodeEncoding(
                        /* [in] */ABI::Windows::Storage::Streams::UnicodeEncoding value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ByteOrder(
                        /* [retval, out] */__RPC__out ABI::Windows::Storage::Streams::ByteOrder * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ByteOrder(
                        /* [in] */ABI::Windows::Storage::Streams::ByteOrder value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_InputStreamOptions(
                        /* [retval, out] */__RPC__out ABI::Windows::Storage::Streams::InputStreamOptions * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_InputStreamOptions(
                        /* [in] */ABI::Windows::Storage::Streams::InputStreamOptions value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE ReadByte(
                        /* [retval, out] */__RPC__out BYTE * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE ReadBytes(
                        /* [in] */UINT32 __valueSize,
                        /* [size_is(__valueSize), out] */__RPC__out_ecount_full(__valueSize) BYTE * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE ReadBuffer(
                        /* [in] */UINT32 length,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::Streams::IBuffer * * buffer
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE ReadBoolean(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE ReadGuid(
                        /* [retval, out] */__RPC__out GUID * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE ReadInt16(
                        /* [retval, out] */__RPC__out INT16 * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE ReadInt32(
                        /* [retval, out] */__RPC__out INT32 * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE ReadInt64(
                        /* [retval, out] */__RPC__out INT64 * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE ReadUInt16(
                        /* [retval, out] */__RPC__out UINT16 * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE ReadUInt32(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE ReadUInt64(
                        /* [retval, out] */__RPC__out UINT64 * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE ReadSingle(
                        /* [retval, out] */__RPC__out FLOAT * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE ReadDouble(
                        /* [retval, out] */__RPC__out DOUBLE * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE ReadString(
                        /* [in] */UINT32 codeUnitCount,
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE ReadDateTime(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::DateTime * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE ReadTimeSpan(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::TimeSpan * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE LoadAsync(
                        /* [in] */UINT32 count,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_UINT32 * * operation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DetachBuffer(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::Streams::IBuffer * * buffer
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DetachStream(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::Streams::IInputStream * * stream
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IDataReader=_uuidof(IDataReader);
                
            } /* Windows */
        } /* Storage */
    } /* Streams */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CStreams_CIDataReader;
#endif /* !defined(____x_ABI_CWindows_CStorage_CStreams_CIDataReader_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Storage.Streams.IDataReaderFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Storage.Streams.DataReader
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CStorage_CStreams_CIDataReaderFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CStorage_CStreams_CIDataReaderFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Streams_IDataReaderFactory[] = L"Windows.Storage.Streams.IDataReaderFactory";
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Streams {
                /* [object, uuid("D7527847-57DA-4E15-914C-06806699A098"), exclusiveto, contract] */
                MIDL_INTERFACE("D7527847-57DA-4E15-914C-06806699A098")
                IDataReaderFactory : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE CreateDataReader(
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IInputStream * inputStream,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::Streams::IDataReader * * dataReader
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IDataReaderFactory=_uuidof(IDataReaderFactory);
                
            } /* Windows */
        } /* Storage */
    } /* Streams */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CStreams_CIDataReaderFactory;
#endif /* !defined(____x_ABI_CWindows_CStorage_CStreams_CIDataReaderFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Storage.Streams.IDataReaderStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Storage.Streams.DataReader
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CStorage_CStreams_CIDataReaderStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CStorage_CStreams_CIDataReaderStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Streams_IDataReaderStatics[] = L"Windows.Storage.Streams.IDataReaderStatics";
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Streams {
                /* [object, uuid("11FCBFC8-F93A-471B-B121-F379E349313C"), exclusiveto, contract] */
                MIDL_INTERFACE("11FCBFC8-F93A-471B-B121-F379E349313C")
                IDataReaderStatics : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE FromBuffer(
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IBuffer * buffer,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::Streams::IDataReader * * dataReader
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IDataReaderStatics=_uuidof(IDataReaderStatics);
                
            } /* Windows */
        } /* Storage */
    } /* Streams */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CStreams_CIDataReaderStatics;
#endif /* !defined(____x_ABI_CWindows_CStorage_CStreams_CIDataReaderStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Storage.Streams.IDataWriter
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CStorage_CStreams_CIDataWriter_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CStorage_CStreams_CIDataWriter_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Streams_IDataWriter[] = L"Windows.Storage.Streams.IDataWriter";
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Streams {
                /* [object, uuid("64B89265-D341-4922-B38A-DD4AF8808C4E"), contract] */
                MIDL_INTERFACE("64B89265-D341-4922-B38A-DD4AF8808C4E")
                IDataWriter : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_UnstoredBufferLength(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_UnicodeEncoding(
                        /* [retval, out] */__RPC__out ABI::Windows::Storage::Streams::UnicodeEncoding * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_UnicodeEncoding(
                        /* [in] */ABI::Windows::Storage::Streams::UnicodeEncoding value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ByteOrder(
                        /* [retval, out] */__RPC__out ABI::Windows::Storage::Streams::ByteOrder * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ByteOrder(
                        /* [in] */ABI::Windows::Storage::Streams::ByteOrder value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE WriteByte(
                        /* [in] */BYTE value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE WriteBytes(
                        /* [in] */UINT32 __valueSize,
                        /* [size_is(__valueSize), in] */__RPC__in_ecount_full(__valueSize) BYTE * value
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE WriteBuffer(
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IBuffer * buffer
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE WriteBufferRange(
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IBuffer * buffer,
                        /* [in] */UINT32 start,
                        /* [in] */UINT32 count
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE WriteBoolean(
                        /* [in] */boolean value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE WriteGuid(
                        /* [in] */GUID value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE WriteInt16(
                        /* [in] */INT16 value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE WriteInt32(
                        /* [in] */INT32 value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE WriteInt64(
                        /* [in] */INT64 value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE WriteUInt16(
                        /* [in] */UINT16 value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE WriteUInt32(
                        /* [in] */UINT32 value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE WriteUInt64(
                        /* [in] */UINT64 value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE WriteSingle(
                        /* [in] */FLOAT value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE WriteDouble(
                        /* [in] */DOUBLE value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE WriteDateTime(
                        /* [in] */ABI::Windows::Foundation::DateTime value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE WriteTimeSpan(
                        /* [in] */ABI::Windows::Foundation::TimeSpan value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE WriteString(
                        /* [in] */__RPC__in HSTRING value,
                        /* [retval, out] */__RPC__out UINT32 * codeUnitCount
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE MeasureString(
                        /* [in] */__RPC__in HSTRING value,
                        /* [retval, out] */__RPC__out UINT32 * codeUnitCount
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE StoreAsync(
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_UINT32 * * operation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE FlushAsync(
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DetachBuffer(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::Streams::IBuffer * * buffer
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DetachStream(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::Streams::IOutputStream * * outputStream
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IDataWriter=_uuidof(IDataWriter);
                
            } /* Windows */
        } /* Storage */
    } /* Streams */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CStreams_CIDataWriter;
#endif /* !defined(____x_ABI_CWindows_CStorage_CStreams_CIDataWriter_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Storage.Streams.IDataWriterFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Storage.Streams.DataWriter
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CStorage_CStreams_CIDataWriterFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CStorage_CStreams_CIDataWriterFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Streams_IDataWriterFactory[] = L"Windows.Storage.Streams.IDataWriterFactory";
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Streams {
                /* [object, uuid("338C67C2-8B84-4C2B-9C50-7B8767847A1F"), exclusiveto, contract] */
                MIDL_INTERFACE("338C67C2-8B84-4C2B-9C50-7B8767847A1F")
                IDataWriterFactory : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE CreateDataWriter(
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IOutputStream * outputStream,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::Streams::IDataWriter * * dataWriter
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IDataWriterFactory=_uuidof(IDataWriterFactory);
                
            } /* Windows */
        } /* Storage */
    } /* Streams */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CStreams_CIDataWriterFactory;
#endif /* !defined(____x_ABI_CWindows_CStorage_CStreams_CIDataWriterFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Storage.Streams.IFileRandomAccessStreamStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.Storage.Streams.FileRandomAccessStream
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CStorage_CStreams_CIFileRandomAccessStreamStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CStorage_CStreams_CIFileRandomAccessStreamStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Streams_IFileRandomAccessStreamStatics[] = L"Windows.Storage.Streams.IFileRandomAccessStreamStatics";
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Streams {
                /* [object, uuid("73550107-3B57-4B5D-8345-554D2FC621F0"), exclusiveto, contract] */
                MIDL_INTERFACE("73550107-3B57-4B5D-8345-554D2FC621F0")
                IFileRandomAccessStreamStatics : IInspectable
                {
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE OpenAsync(
                        /* [in] */__RPC__in HSTRING filePath,
                        /* [in] */ABI::Windows::Storage::FileAccessMode accessMode,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream * * operation
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE OpenWithOptionsAsync(
                        /* [in] */__RPC__in HSTRING filePath,
                        /* [in] */ABI::Windows::Storage::FileAccessMode accessMode,
                        /* [in] */ABI::Windows::Storage::StorageOpenOptions sharingOptions,
                        /* [in] */ABI::Windows::Storage::Streams::FileOpenDisposition openDisposition,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream * * operation
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE OpenTransactedWriteAsync(
                        /* [in] */__RPC__in HSTRING filePath,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStorageStreamTransaction * * operation
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE OpenTransactedWriteWithOptionsAsync(
                        /* [in] */__RPC__in HSTRING filePath,
                        /* [in] */ABI::Windows::Storage::StorageOpenOptions openOptions,
                        /* [in] */ABI::Windows::Storage::Streams::FileOpenDisposition openDisposition,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStorageStreamTransaction * * operation
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE OpenForUserAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::System::IUser * user,
                        /* [in] */__RPC__in HSTRING filePath,
                        /* [in] */ABI::Windows::Storage::FileAccessMode accessMode,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream * * operation
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE OpenForUserWithOptionsAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::System::IUser * user,
                        /* [in] */__RPC__in HSTRING filePath,
                        /* [in] */ABI::Windows::Storage::FileAccessMode accessMode,
                        /* [in] */ABI::Windows::Storage::StorageOpenOptions sharingOptions,
                        /* [in] */ABI::Windows::Storage::Streams::FileOpenDisposition openDisposition,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream * * operation
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE OpenTransactedWriteForUserAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::System::IUser * user,
                        /* [in] */__RPC__in HSTRING filePath,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStorageStreamTransaction * * operation
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE OpenTransactedWriteForUserWithOptionsAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::System::IUser * user,
                        /* [in] */__RPC__in HSTRING filePath,
                        /* [in] */ABI::Windows::Storage::StorageOpenOptions openOptions,
                        /* [in] */ABI::Windows::Storage::Streams::FileOpenDisposition openDisposition,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStorageStreamTransaction * * operation
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IFileRandomAccessStreamStatics=_uuidof(IFileRandomAccessStreamStatics);
                
            } /* Windows */
        } /* Storage */
    } /* Streams */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CStreams_CIFileRandomAccessStreamStatics;
#endif /* !defined(____x_ABI_CWindows_CStorage_CStreams_CIFileRandomAccessStreamStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.Storage.Streams.IInputStream
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CStorage_CStreams_CIInputStream_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CStorage_CStreams_CIInputStream_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Streams_IInputStream[] = L"Windows.Storage.Streams.IInputStream";
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Streams {
                /* [object, uuid("905A0FE2-BC53-11DF-8C49-001E4FC686DA"), contract] */
                MIDL_INTERFACE("905A0FE2-BC53-11DF-8C49-001E4FC686DA")
                IInputStream : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE ReadAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IBuffer * buffer,
                        /* [in] */UINT32 count,
                        /* [in] */ABI::Windows::Storage::Streams::InputStreamOptions options,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_UINT32 * * operation
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IInputStream=_uuidof(IInputStream);
                
            } /* Windows */
        } /* Storage */
    } /* Streams */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CStreams_CIInputStream;
#endif /* !defined(____x_ABI_CWindows_CStorage_CStreams_CIInputStream_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Storage.Streams.IInputStreamReference
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CStorage_CStreams_CIInputStreamReference_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CStorage_CStreams_CIInputStreamReference_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Streams_IInputStreamReference[] = L"Windows.Storage.Streams.IInputStreamReference";
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Streams {
                /* [object, uuid("43929D18-5EC9-4B5A-919C-4205B0C804B6"), contract] */
                MIDL_INTERFACE("43929D18-5EC9-4B5A-919C-4205B0C804B6")
                IInputStreamReference : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE OpenSequentialReadAsync(
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStreams__CIInputStream * * operation
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IInputStreamReference=_uuidof(IInputStreamReference);
                
            } /* Windows */
        } /* Storage */
    } /* Streams */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CStreams_CIInputStreamReference;
#endif /* !defined(____x_ABI_CWindows_CStorage_CStreams_CIInputStreamReference_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Storage.Streams.IOutputStream
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CStorage_CStreams_CIOutputStream_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CStorage_CStreams_CIOutputStream_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Streams_IOutputStream[] = L"Windows.Storage.Streams.IOutputStream";
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Streams {
                /* [object, uuid("905A0FE6-BC53-11DF-8C49-001E4FC686DA"), contract] */
                MIDL_INTERFACE("905A0FE6-BC53-11DF-8C49-001E4FC686DA")
                IOutputStream : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE WriteAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IBuffer * buffer,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperationWithProgress_2_UINT32_UINT32 * * operation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE FlushAsync(
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IOutputStream=_uuidof(IOutputStream);
                
            } /* Windows */
        } /* Storage */
    } /* Streams */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CStreams_CIOutputStream;
#endif /* !defined(____x_ABI_CWindows_CStorage_CStreams_CIOutputStream_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Storage.Streams.IRandomAccessStream
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *     Windows.Storage.Streams.IInputStream
 *     Windows.Storage.Streams.IOutputStream
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Streams_IRandomAccessStream[] = L"Windows.Storage.Streams.IRandomAccessStream";
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Streams {
                /* [object, uuid("905A0FE1-BC53-11DF-8C49-001E4FC686DA"), contract] */
                MIDL_INTERFACE("905A0FE1-BC53-11DF-8C49-001E4FC686DA")
                IRandomAccessStream : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Size(
                        /* [retval, out] */__RPC__out UINT64 * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Size(
                        /* [in] */UINT64 value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetInputStreamAt(
                        /* [in] */UINT64 position,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::Streams::IInputStream * * stream
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetOutputStreamAt(
                        /* [in] */UINT64 position,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::Streams::IOutputStream * * stream
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Position(
                        /* [retval, out] */__RPC__out UINT64 * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE Seek(
                        /* [in] */UINT64 position
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CloneStream(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::Streams::IRandomAccessStream * * stream
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CanRead(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CanWrite(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IRandomAccessStream=_uuidof(IRandomAccessStream);
                
            } /* Windows */
        } /* Storage */
    } /* Streams */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream;
#endif /* !defined(____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Storage.Streams.IRandomAccessStreamReference
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Streams_IRandomAccessStreamReference[] = L"Windows.Storage.Streams.IRandomAccessStreamReference";
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Streams {
                /* [object, uuid("33EE3134-1DD6-4E3A-8067-D1C162E8642B"), contract] */
                MIDL_INTERFACE("33EE3134-1DD6-4E3A-8067-D1C162E8642B")
                IRandomAccessStreamReference : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE OpenReadAsync(
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType * * operation
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IRandomAccessStreamReference=_uuidof(IRandomAccessStreamReference);
                
            } /* Windows */
        } /* Storage */
    } /* Streams */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference;
#endif /* !defined(____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Storage.Streams.IRandomAccessStreamReferenceStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Storage.Streams.RandomAccessStreamReference
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReferenceStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReferenceStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Streams_IRandomAccessStreamReferenceStatics[] = L"Windows.Storage.Streams.IRandomAccessStreamReferenceStatics";
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Streams {
                /* [object, uuid("857309DC-3FBF-4E7D-986F-EF3B1A07A964"), exclusiveto, contract] */
                MIDL_INTERFACE("857309DC-3FBF-4E7D-986F-EF3B1A07A964")
                IRandomAccessStreamReferenceStatics : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE CreateFromFile(
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::IStorageFile * file,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::Streams::IRandomAccessStreamReference * * streamReference
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateFromUri(
                        /* [in] */__RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass * uri,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::Streams::IRandomAccessStreamReference * * streamReference
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateFromStream(
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IRandomAccessStream * stream,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::Streams::IRandomAccessStreamReference * * streamReference
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IRandomAccessStreamReferenceStatics=_uuidof(IRandomAccessStreamReferenceStatics);
                
            } /* Windows */
        } /* Storage */
    } /* Streams */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReferenceStatics;
#endif /* !defined(____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReferenceStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Storage.Streams.IRandomAccessStreamStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Storage.Streams.RandomAccessStream
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Streams_IRandomAccessStreamStatics[] = L"Windows.Storage.Streams.IRandomAccessStreamStatics";
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Streams {
                /* [object, uuid("524CEDCF-6E29-4CE5-9573-6B753DB66C3A"), exclusiveto, contract] */
                MIDL_INTERFACE("524CEDCF-6E29-4CE5-9573-6B753DB66C3A")
                IRandomAccessStreamStatics : IInspectable
                {
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE CopyAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IInputStream * source,
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IOutputStream * destination,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperationWithProgress_2_UINT64_UINT64 * * operation
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE CopySizeAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IInputStream * source,
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IOutputStream * destination,
                        /* [in] */UINT64 bytesToCopy,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperationWithProgress_2_UINT64_UINT64 * * operation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CopyAndCloseAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IInputStream * source,
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IOutputStream * destination,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperationWithProgress_2_UINT64_UINT64 * * operation
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IRandomAccessStreamStatics=_uuidof(IRandomAccessStreamStatics);
                
            } /* Windows */
        } /* Storage */
    } /* Streams */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamStatics;
#endif /* !defined(____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Storage.Streams.IRandomAccessStreamWithContentType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Storage.Streams.IRandomAccessStream
 *     Windows.Foundation.IClosable
 *     Windows.Storage.Streams.IInputStream
 *     Windows.Storage.Streams.IOutputStream
 *     Windows.Storage.Streams.IContentTypeProvider
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamWithContentType_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamWithContentType_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Streams_IRandomAccessStreamWithContentType[] = L"Windows.Storage.Streams.IRandomAccessStreamWithContentType";
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Streams {
                /* [object, uuid("CC254827-4B3D-438F-9232-10C76BC7E038"), contract] */
                MIDL_INTERFACE("CC254827-4B3D-438F-9232-10C76BC7E038")
                IRandomAccessStreamWithContentType : IInspectable
                {
                    
                };

                extern MIDL_CONST_ID IID & IID_IRandomAccessStreamWithContentType=_uuidof(IRandomAccessStreamWithContentType);
                
            } /* Windows */
        } /* Storage */
    } /* Streams */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamWithContentType;
#endif /* !defined(____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamWithContentType_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Storage.Streams.Buffer
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Storage.Streams.IBufferFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Storage.Streams.IBufferStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Storage.Streams.IBuffer ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Storage_Streams_Buffer_DEFINED
#define RUNTIMECLASS_Windows_Storage_Streams_Buffer_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_Streams_Buffer[] = L"Windows.Storage.Streams.Buffer";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Storage.Streams.DataReader
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Storage.Streams.IDataReaderFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Storage.Streams.IDataReaderStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Storage.Streams.IDataReader ** Default Interface **
 *    Windows.Foundation.IClosable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Storage_Streams_DataReader_DEFINED
#define RUNTIMECLASS_Windows_Storage_Streams_DataReader_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_Streams_DataReader[] = L"Windows.Storage.Streams.DataReader";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Storage.Streams.DataReaderLoadOperation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Foundation.IAsyncOperation_1_UINT32 ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Storage_Streams_DataReaderLoadOperation_DEFINED
#define RUNTIMECLASS_Windows_Storage_Streams_DataReaderLoadOperation_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_Streams_DataReaderLoadOperation[] = L"Windows.Storage.Streams.DataReaderLoadOperation";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Storage.Streams.DataWriter
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Storage.Streams.IDataWriterFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Storage.Streams.IDataWriter ** Default Interface **
 *    Windows.Foundation.IClosable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Storage_Streams_DataWriter_DEFINED
#define RUNTIMECLASS_Windows_Storage_Streams_DataWriter_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_Streams_DataWriter[] = L"Windows.Storage.Streams.DataWriter";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Storage.Streams.DataWriterStoreOperation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Foundation.IAsyncOperation_1_UINT32 ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Storage_Streams_DataWriterStoreOperation_DEFINED
#define RUNTIMECLASS_Windows_Storage_Streams_DataWriterStoreOperation_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_Streams_DataWriterStoreOperation[] = L"Windows.Storage.Streams.DataWriterStoreOperation";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Storage.Streams.FileInputStream
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Storage.Streams.IInputStream ** Default Interface **
 *    Windows.Foundation.IClosable
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Storage_Streams_FileInputStream_DEFINED
#define RUNTIMECLASS_Windows_Storage_Streams_FileInputStream_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_Streams_FileInputStream[] = L"Windows.Storage.Streams.FileInputStream";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Storage.Streams.FileOutputStream
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Storage.Streams.IOutputStream ** Default Interface **
 *    Windows.Foundation.IClosable
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Storage_Streams_FileOutputStream_DEFINED
#define RUNTIMECLASS_Windows_Storage_Streams_FileOutputStream_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_Streams_FileOutputStream[] = L"Windows.Storage.Streams.FileOutputStream";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Storage.Streams.FileRandomAccessStream
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Storage.Streams.IFileRandomAccessStreamStatics interface starting with version 5.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Storage.Streams.IRandomAccessStream ** Default Interface **
 *    Windows.Storage.Streams.IOutputStream
 *    Windows.Foundation.IClosable
 *    Windows.Storage.Streams.IInputStream
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Storage_Streams_FileRandomAccessStream_DEFINED
#define RUNTIMECLASS_Windows_Storage_Streams_FileRandomAccessStream_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_Streams_FileRandomAccessStream[] = L"Windows.Storage.Streams.FileRandomAccessStream";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Storage.Streams.InMemoryRandomAccessStream
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Storage.Streams.IRandomAccessStream ** Default Interface **
 *    Windows.Storage.Streams.IOutputStream
 *    Windows.Foundation.IClosable
 *    Windows.Storage.Streams.IInputStream
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Storage_Streams_InMemoryRandomAccessStream_DEFINED
#define RUNTIMECLASS_Windows_Storage_Streams_InMemoryRandomAccessStream_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_Streams_InMemoryRandomAccessStream[] = L"Windows.Storage.Streams.InMemoryRandomAccessStream";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Storage.Streams.InputStreamOverStream
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Storage.Streams.IInputStream ** Default Interface **
 *    Windows.Foundation.IClosable
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Storage_Streams_InputStreamOverStream_DEFINED
#define RUNTIMECLASS_Windows_Storage_Streams_InputStreamOverStream_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_Streams_InputStreamOverStream[] = L"Windows.Storage.Streams.InputStreamOverStream";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Storage.Streams.OutputStreamOverStream
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Storage.Streams.IOutputStream ** Default Interface **
 *    Windows.Foundation.IClosable
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Storage_Streams_OutputStreamOverStream_DEFINED
#define RUNTIMECLASS_Windows_Storage_Streams_OutputStreamOverStream_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_Streams_OutputStreamOverStream[] = L"Windows.Storage.Streams.OutputStreamOverStream";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Storage.Streams.RandomAccessStream
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Storage.Streams.IRandomAccessStreamStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_Storage_Streams_RandomAccessStream_DEFINED
#define RUNTIMECLASS_Windows_Storage_Streams_RandomAccessStream_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_Streams_RandomAccessStream[] = L"Windows.Storage.Streams.RandomAccessStream";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Storage.Streams.RandomAccessStreamOverStream
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Storage.Streams.IRandomAccessStream ** Default Interface **
 *    Windows.Storage.Streams.IOutputStream
 *    Windows.Foundation.IClosable
 *    Windows.Storage.Streams.IInputStream
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Storage_Streams_RandomAccessStreamOverStream_DEFINED
#define RUNTIMECLASS_Windows_Storage_Streams_RandomAccessStreamOverStream_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_Streams_RandomAccessStreamOverStream[] = L"Windows.Storage.Streams.RandomAccessStreamOverStream";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Storage.Streams.RandomAccessStreamReference
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Storage.Streams.IRandomAccessStreamReferenceStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Storage.Streams.IRandomAccessStreamReference ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Storage_Streams_RandomAccessStreamReference_DEFINED
#define RUNTIMECLASS_Windows_Storage_Streams_RandomAccessStreamReference_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_Streams_RandomAccessStreamReference[] = L"Windows.Storage.Streams.RandomAccessStreamReference";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000




#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIBuffer_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIBuffer_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIBuffer __x_ABI_CWindows_CStorage_CStreams_CIBuffer;

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIBuffer_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIBufferFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIBufferFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIBufferFactory __x_ABI_CWindows_CStorage_CStreams_CIBufferFactory;

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIBufferFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIBufferStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIBufferStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIBufferStatics __x_ABI_CWindows_CStorage_CStreams_CIBufferStatics;

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIBufferStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIContentTypeProvider_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIContentTypeProvider_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIContentTypeProvider __x_ABI_CWindows_CStorage_CStreams_CIContentTypeProvider;

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIContentTypeProvider_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIDataReader_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIDataReader_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIDataReader __x_ABI_CWindows_CStorage_CStreams_CIDataReader;

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIDataReader_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIDataReaderFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIDataReaderFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIDataReaderFactory __x_ABI_CWindows_CStorage_CStreams_CIDataReaderFactory;

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIDataReaderFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIDataReaderStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIDataReaderStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIDataReaderStatics __x_ABI_CWindows_CStorage_CStreams_CIDataReaderStatics;

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIDataReaderStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIDataWriter_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIDataWriter_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIDataWriter __x_ABI_CWindows_CStorage_CStreams_CIDataWriter;

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIDataWriter_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIDataWriterFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIDataWriterFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIDataWriterFactory __x_ABI_CWindows_CStorage_CStreams_CIDataWriterFactory;

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIDataWriterFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIFileRandomAccessStreamStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIFileRandomAccessStreamStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIFileRandomAccessStreamStatics __x_ABI_CWindows_CStorage_CStreams_CIFileRandomAccessStreamStatics;

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIFileRandomAccessStreamStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIInputStream_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIInputStream_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIInputStream __x_ABI_CWindows_CStorage_CStreams_CIInputStream;

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIInputStream_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIInputStreamReference_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIInputStreamReference_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIInputStreamReference __x_ABI_CWindows_CStorage_CStreams_CIInputStreamReference;

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIInputStreamReference_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIOutputStream_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIOutputStream_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIOutputStream __x_ABI_CWindows_CStorage_CStreams_CIOutputStream;

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIOutputStream_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream;

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference;

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReferenceStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReferenceStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReferenceStatics __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReferenceStatics;

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReferenceStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamStatics __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamStatics;

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamWithContentType_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamWithContentType_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamWithContentType __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamWithContentType;

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamWithContentType_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer_INTERFACE_DEFINED__)
#define ____FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer_INTERFACE_DEFINED__

typedef interface __FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer __FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer;

typedef struct __FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBufferVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Key )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer * This, /* [retval][out] */ __RPC__out HSTRING *key);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer * This, /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * *value);
    END_INTERFACE
} __FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBufferVtbl;

interface __FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer
{
    CONST_VTBL struct __FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBufferVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer_get_Key(This,key)	\
    ( (This)->lpVtbl -> get_Key(This,key) ) 

#define __FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer_get_Value(This,value)	\
    ( (This)->lpVtbl -> get_Value(This,value) ) 
#endif /* COBJMACROS */


#endif // ____FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer_INTERFACE_DEFINED__)
#define ____FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer_INTERFACE_DEFINED__

typedef interface __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer;

typedef struct __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBufferVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer * This, /* [retval][out] */ __RPC__out __FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBufferVtbl;

interface __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer
{
    CONST_VTBL struct __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBufferVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer_INTERFACE_DEFINED__)
#define ____FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer_INTERFACE_DEFINED__

typedef interface __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer;

typedef  struct __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBufferVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer **first);

    END_INTERFACE
} __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBufferVtbl;

interface __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer
{
    CONST_VTBL struct __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBufferVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_INTERFACE_DEFINED__)
#define ____FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_INTERFACE_DEFINED__

typedef interface __FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference __FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference;

typedef struct __FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReferenceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Key )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference * This, /* [retval][out] */ __RPC__out HSTRING *key);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference * This, /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference * *value);
    END_INTERFACE
} __FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReferenceVtbl;

interface __FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference
{
    CONST_VTBL struct __FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReferenceVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_get_Key(This,key)	\
    ( (This)->lpVtbl -> get_Key(This,key) ) 

#define __FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_get_Value(This,value)	\
    ( (This)->lpVtbl -> get_Value(This,value) ) 
#endif /* COBJMACROS */


#endif // ____FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_INTERFACE_DEFINED__)
#define ____FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_INTERFACE_DEFINED__

typedef interface __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference;

typedef struct __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReferenceVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference * This, /* [retval][out] */ __RPC__out __FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReferenceVtbl;

interface __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference
{
    CONST_VTBL struct __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReferenceVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_INTERFACE_DEFINED__)
#define ____FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_INTERFACE_DEFINED__

typedef interface __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference;

typedef  struct __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReferenceVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference **first);

    END_INTERFACE
} __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReferenceVtbl;

interface __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference
{
    CONST_VTBL struct __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReferenceVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIKeyValuePair_2_UINT32_Windows__CStorage__CStreams__CIBuffer_INTERFACE_DEFINED__)
#define ____FIKeyValuePair_2_UINT32_Windows__CStorage__CStreams__CIBuffer_INTERFACE_DEFINED__

typedef interface __FIKeyValuePair_2_UINT32_Windows__CStorage__CStreams__CIBuffer __FIKeyValuePair_2_UINT32_Windows__CStorage__CStreams__CIBuffer;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIKeyValuePair_2_UINT32_Windows__CStorage__CStreams__CIBuffer;

typedef struct __FIKeyValuePair_2_UINT32_Windows__CStorage__CStreams__CIBufferVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIKeyValuePair_2_UINT32_Windows__CStorage__CStreams__CIBuffer * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIKeyValuePair_2_UINT32_Windows__CStorage__CStreams__CIBuffer * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIKeyValuePair_2_UINT32_Windows__CStorage__CStreams__CIBuffer * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIKeyValuePair_2_UINT32_Windows__CStorage__CStreams__CIBuffer * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIKeyValuePair_2_UINT32_Windows__CStorage__CStreams__CIBuffer * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIKeyValuePair_2_UINT32_Windows__CStorage__CStreams__CIBuffer * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Key )(__RPC__in __FIKeyValuePair_2_UINT32_Windows__CStorage__CStreams__CIBuffer * This, /* [retval][out] */ __RPC__out int *key);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIKeyValuePair_2_UINT32_Windows__CStorage__CStreams__CIBuffer * This, /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * *value);
    END_INTERFACE
} __FIKeyValuePair_2_UINT32_Windows__CStorage__CStreams__CIBufferVtbl;

interface __FIKeyValuePair_2_UINT32_Windows__CStorage__CStreams__CIBuffer
{
    CONST_VTBL struct __FIKeyValuePair_2_UINT32_Windows__CStorage__CStreams__CIBufferVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIKeyValuePair_2_UINT32_Windows__CStorage__CStreams__CIBuffer_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIKeyValuePair_2_UINT32_Windows__CStorage__CStreams__CIBuffer_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIKeyValuePair_2_UINT32_Windows__CStorage__CStreams__CIBuffer_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIKeyValuePair_2_UINT32_Windows__CStorage__CStreams__CIBuffer_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIKeyValuePair_2_UINT32_Windows__CStorage__CStreams__CIBuffer_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIKeyValuePair_2_UINT32_Windows__CStorage__CStreams__CIBuffer_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIKeyValuePair_2_UINT32_Windows__CStorage__CStreams__CIBuffer_get_Key(This,key)	\
    ( (This)->lpVtbl -> get_Key(This,key) ) 

#define __FIKeyValuePair_2_UINT32_Windows__CStorage__CStreams__CIBuffer_get_Value(This,value)	\
    ( (This)->lpVtbl -> get_Value(This,value) ) 
#endif /* COBJMACROS */


#endif // ____FIKeyValuePair_2_UINT32_Windows__CStorage__CStreams__CIBuffer_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1___FIKeyValuePair_2_UINT32_Windows__CStorage__CStreams__CIBuffer_INTERFACE_DEFINED__)
#define ____FIIterator_1___FIKeyValuePair_2_UINT32_Windows__CStorage__CStreams__CIBuffer_INTERFACE_DEFINED__

typedef interface __FIIterator_1___FIKeyValuePair_2_UINT32_Windows__CStorage__CStreams__CIBuffer __FIIterator_1___FIKeyValuePair_2_UINT32_Windows__CStorage__CStreams__CIBuffer;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1___FIKeyValuePair_2_UINT32_Windows__CStorage__CStreams__CIBuffer;

typedef struct __FIIterator_1___FIKeyValuePair_2_UINT32_Windows__CStorage__CStreams__CIBufferVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1___FIKeyValuePair_2_UINT32_Windows__CStorage__CStreams__CIBuffer * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1___FIKeyValuePair_2_UINT32_Windows__CStorage__CStreams__CIBuffer * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1___FIKeyValuePair_2_UINT32_Windows__CStorage__CStreams__CIBuffer * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1___FIKeyValuePair_2_UINT32_Windows__CStorage__CStreams__CIBuffer * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1___FIKeyValuePair_2_UINT32_Windows__CStorage__CStreams__CIBuffer * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1___FIKeyValuePair_2_UINT32_Windows__CStorage__CStreams__CIBuffer * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1___FIKeyValuePair_2_UINT32_Windows__CStorage__CStreams__CIBuffer * This, /* [retval][out] */ __RPC__out __FIKeyValuePair_2_UINT32_Windows__CStorage__CStreams__CIBuffer * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1___FIKeyValuePair_2_UINT32_Windows__CStorage__CStreams__CIBuffer * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1___FIKeyValuePair_2_UINT32_Windows__CStorage__CStreams__CIBuffer * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1___FIKeyValuePair_2_UINT32_Windows__CStorage__CStreams__CIBuffer * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __FIKeyValuePair_2_UINT32_Windows__CStorage__CStreams__CIBuffer * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1___FIKeyValuePair_2_UINT32_Windows__CStorage__CStreams__CIBufferVtbl;

interface __FIIterator_1___FIKeyValuePair_2_UINT32_Windows__CStorage__CStreams__CIBuffer
{
    CONST_VTBL struct __FIIterator_1___FIKeyValuePair_2_UINT32_Windows__CStorage__CStreams__CIBufferVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1___FIKeyValuePair_2_UINT32_Windows__CStorage__CStreams__CIBuffer_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1___FIKeyValuePair_2_UINT32_Windows__CStorage__CStreams__CIBuffer_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1___FIKeyValuePair_2_UINT32_Windows__CStorage__CStreams__CIBuffer_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1___FIKeyValuePair_2_UINT32_Windows__CStorage__CStreams__CIBuffer_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1___FIKeyValuePair_2_UINT32_Windows__CStorage__CStreams__CIBuffer_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1___FIKeyValuePair_2_UINT32_Windows__CStorage__CStreams__CIBuffer_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1___FIKeyValuePair_2_UINT32_Windows__CStorage__CStreams__CIBuffer_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1___FIKeyValuePair_2_UINT32_Windows__CStorage__CStreams__CIBuffer_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1___FIKeyValuePair_2_UINT32_Windows__CStorage__CStreams__CIBuffer_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1___FIKeyValuePair_2_UINT32_Windows__CStorage__CStreams__CIBuffer_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1___FIKeyValuePair_2_UINT32_Windows__CStorage__CStreams__CIBuffer_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1___FIKeyValuePair_2_UINT32_Windows__CStorage__CStreams__CIBuffer_INTERFACE_DEFINED__)
#define ____FIIterable_1___FIKeyValuePair_2_UINT32_Windows__CStorage__CStreams__CIBuffer_INTERFACE_DEFINED__

typedef interface __FIIterable_1___FIKeyValuePair_2_UINT32_Windows__CStorage__CStreams__CIBuffer __FIIterable_1___FIKeyValuePair_2_UINT32_Windows__CStorage__CStreams__CIBuffer;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1___FIKeyValuePair_2_UINT32_Windows__CStorage__CStreams__CIBuffer;

typedef  struct __FIIterable_1___FIKeyValuePair_2_UINT32_Windows__CStorage__CStreams__CIBufferVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1___FIKeyValuePair_2_UINT32_Windows__CStorage__CStreams__CIBuffer * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1___FIKeyValuePair_2_UINT32_Windows__CStorage__CStreams__CIBuffer * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1___FIKeyValuePair_2_UINT32_Windows__CStorage__CStreams__CIBuffer * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1___FIKeyValuePair_2_UINT32_Windows__CStorage__CStreams__CIBuffer * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1___FIKeyValuePair_2_UINT32_Windows__CStorage__CStreams__CIBuffer * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1___FIKeyValuePair_2_UINT32_Windows__CStorage__CStreams__CIBuffer * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1___FIKeyValuePair_2_UINT32_Windows__CStorage__CStreams__CIBuffer * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1___FIKeyValuePair_2_UINT32_Windows__CStorage__CStreams__CIBuffer **first);

    END_INTERFACE
} __FIIterable_1___FIKeyValuePair_2_UINT32_Windows__CStorage__CStreams__CIBufferVtbl;

interface __FIIterable_1___FIKeyValuePair_2_UINT32_Windows__CStorage__CStreams__CIBuffer
{
    CONST_VTBL struct __FIIterable_1___FIKeyValuePair_2_UINT32_Windows__CStorage__CStreams__CIBufferVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1___FIKeyValuePair_2_UINT32_Windows__CStorage__CStreams__CIBuffer_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1___FIKeyValuePair_2_UINT32_Windows__CStorage__CStreams__CIBuffer_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1___FIKeyValuePair_2_UINT32_Windows__CStorage__CStreams__CIBuffer_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1___FIKeyValuePair_2_UINT32_Windows__CStorage__CStreams__CIBuffer_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1___FIKeyValuePair_2_UINT32_Windows__CStorage__CStreams__CIBuffer_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1___FIKeyValuePair_2_UINT32_Windows__CStorage__CStreams__CIBuffer_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1___FIKeyValuePair_2_UINT32_Windows__CStorage__CStreams__CIBuffer_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1___FIKeyValuePair_2_UINT32_Windows__CStorage__CStreams__CIBuffer_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CStorage__CStreams__CIBuffer_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CStorage__CStreams__CIBuffer_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CStorage__CStreams__CIBuffer __FIIterator_1_Windows__CStorage__CStreams__CIBuffer;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CStorage__CStreams__CIBuffer;

typedef struct __FIIterator_1_Windows__CStorage__CStreams__CIBufferVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CStorage__CStreams__CIBuffer * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CStorage__CStreams__CIBuffer * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CStorage__CStreams__CIBuffer * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CStorage__CStreams__CIBuffer * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CStorage__CStreams__CIBuffer * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CStorage__CStreams__CIBuffer * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CStorage__CStreams__CIBuffer * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CStorage_CStreams_CIBuffer * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CStorage__CStreams__CIBuffer * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CStorage__CStreams__CIBuffer * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CStorage__CStreams__CIBuffer * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CStorage_CStreams_CIBuffer * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CStorage__CStreams__CIBufferVtbl;

interface __FIIterator_1_Windows__CStorage__CStreams__CIBuffer
{
    CONST_VTBL struct __FIIterator_1_Windows__CStorage__CStreams__CIBufferVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CStorage__CStreams__CIBuffer_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CStorage__CStreams__CIBuffer_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CStorage__CStreams__CIBuffer_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CStorage__CStreams__CIBuffer_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CStorage__CStreams__CIBuffer_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CStorage__CStreams__CIBuffer_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CStorage__CStreams__CIBuffer_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CStorage__CStreams__CIBuffer_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CStorage__CStreams__CIBuffer_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CStorage__CStreams__CIBuffer_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CStorage__CStreams__CIBuffer_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CStorage__CStreams__CIBuffer_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CStorage__CStreams__CIBuffer_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CStorage__CStreams__CIBuffer __FIIterable_1_Windows__CStorage__CStreams__CIBuffer;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CStorage__CStreams__CIBuffer;

typedef  struct __FIIterable_1_Windows__CStorage__CStreams__CIBufferVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CStorage__CStreams__CIBuffer * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CStorage__CStreams__CIBuffer * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CStorage__CStreams__CIBuffer * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CStorage__CStreams__CIBuffer * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CStorage__CStreams__CIBuffer * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CStorage__CStreams__CIBuffer * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CStorage__CStreams__CIBuffer * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CStorage__CStreams__CIBuffer **first);

    END_INTERFACE
} __FIIterable_1_Windows__CStorage__CStreams__CIBufferVtbl;

interface __FIIterable_1_Windows__CStorage__CStreams__CIBuffer
{
    CONST_VTBL struct __FIIterable_1_Windows__CStorage__CStreams__CIBufferVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CStorage__CStreams__CIBuffer_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CStorage__CStreams__CIBuffer_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CStorage__CStreams__CIBuffer_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CStorage__CStreams__CIBuffer_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CStorage__CStreams__CIBuffer_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CStorage__CStreams__CIBuffer_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CStorage__CStreams__CIBuffer_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CStorage__CStreams__CIBuffer_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CStorage__CStreams__CIRandomAccessStream_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CStorage__CStreams__CIRandomAccessStream_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CStorage__CStreams__CIRandomAccessStream __FIIterator_1_Windows__CStorage__CStreams__CIRandomAccessStream;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CStorage__CStreams__CIRandomAccessStream;

typedef struct __FIIterator_1_Windows__CStorage__CStreams__CIRandomAccessStreamVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CStorage__CStreams__CIRandomAccessStream * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CStorage__CStreams__CIRandomAccessStream * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CStorage__CStreams__CIRandomAccessStream * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CStorage__CStreams__CIRandomAccessStream * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CStorage__CStreams__CIRandomAccessStream * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CStorage__CStreams__CIRandomAccessStream * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CStorage__CStreams__CIRandomAccessStream * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CStorage__CStreams__CIRandomAccessStream * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CStorage__CStreams__CIRandomAccessStream * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CStorage__CStreams__CIRandomAccessStream * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CStorage__CStreams__CIRandomAccessStreamVtbl;

interface __FIIterator_1_Windows__CStorage__CStreams__CIRandomAccessStream
{
    CONST_VTBL struct __FIIterator_1_Windows__CStorage__CStreams__CIRandomAccessStreamVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CStorage__CStreams__CIRandomAccessStream_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CStorage__CStreams__CIRandomAccessStream_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CStorage__CStreams__CIRandomAccessStream_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CStorage__CStreams__CIRandomAccessStream_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CStorage__CStreams__CIRandomAccessStream_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CStorage__CStreams__CIRandomAccessStream_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CStorage__CStreams__CIRandomAccessStream_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CStorage__CStreams__CIRandomAccessStream_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CStorage__CStreams__CIRandomAccessStream_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CStorage__CStreams__CIRandomAccessStream_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CStorage__CStreams__CIRandomAccessStream_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CStorage__CStreams__CIRandomAccessStream_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CStorage__CStreams__CIRandomAccessStream_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CStorage__CStreams__CIRandomAccessStream __FIIterable_1_Windows__CStorage__CStreams__CIRandomAccessStream;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CStorage__CStreams__CIRandomAccessStream;

typedef  struct __FIIterable_1_Windows__CStorage__CStreams__CIRandomAccessStreamVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CStorage__CStreams__CIRandomAccessStream * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CStorage__CStreams__CIRandomAccessStream * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CStorage__CStreams__CIRandomAccessStream * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CStorage__CStreams__CIRandomAccessStream * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CStorage__CStreams__CIRandomAccessStream * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CStorage__CStreams__CIRandomAccessStream * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CStorage__CStreams__CIRandomAccessStream * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CStorage__CStreams__CIRandomAccessStream **first);

    END_INTERFACE
} __FIIterable_1_Windows__CStorage__CStreams__CIRandomAccessStreamVtbl;

interface __FIIterable_1_Windows__CStorage__CStreams__CIRandomAccessStream
{
    CONST_VTBL struct __FIIterable_1_Windows__CStorage__CStreams__CIRandomAccessStreamVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CStorage__CStreams__CIRandomAccessStream_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CStorage__CStreams__CIRandomAccessStream_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CStorage__CStreams__CIRandomAccessStream_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CStorage__CStreams__CIRandomAccessStream_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CStorage__CStreams__CIRandomAccessStream_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CStorage__CStreams__CIRandomAccessStream_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CStorage__CStreams__CIRandomAccessStream_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CStorage__CStreams__CIRandomAccessStream_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIMapView_2_HSTRING_Windows__CStorage__CStreams__CIBuffer_INTERFACE_DEFINED__)
#define ____FIMapView_2_HSTRING_Windows__CStorage__CStreams__CIBuffer_INTERFACE_DEFINED__

typedef interface __FIMapView_2_HSTRING_Windows__CStorage__CStreams__CIBuffer __FIMapView_2_HSTRING_Windows__CStorage__CStreams__CIBuffer;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIMapView_2_HSTRING_Windows__CStorage__CStreams__CIBuffer;

typedef struct __FIMapView_2_HSTRING_Windows__CStorage__CStreams__CIBufferVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMapView_2_HSTRING_Windows__CStorage__CStreams__CIBuffer * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMapView_2_HSTRING_Windows__CStorage__CStreams__CIBuffer * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMapView_2_HSTRING_Windows__CStorage__CStreams__CIBuffer * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMapView_2_HSTRING_Windows__CStorage__CStreams__CIBuffer * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMapView_2_HSTRING_Windows__CStorage__CStreams__CIBuffer * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMapView_2_HSTRING_Windows__CStorage__CStreams__CIBuffer * This,/* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *Lookup )(__RPC__in __FIMapView_2_HSTRING_Windows__CStorage__CStreams__CIBuffer * This,
        /* [in] */ __RPC__in HSTRING key,
        /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * *value);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )(__RPC__in __FIMapView_2_HSTRING_Windows__CStorage__CStreams__CIBuffer * This, /* [retval][out] */ __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *HasKey )(__RPC__in __FIMapView_2_HSTRING_Windows__CStorage__CStreams__CIBuffer * This, /* [in] */ __RPC__in HSTRING key, /* [retval][out] */ __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *Split )(__RPC__in __FIMapView_2_HSTRING_Windows__CStorage__CStreams__CIBuffer * This,/* [out] */ __RPC__deref_out_opt __FIMapView_2_HSTRING_Windows__CStorage__CStreams__CIBuffer **firstPartition,
        /* [out] */ __RPC__deref_out_opt __FIMapView_2_HSTRING_Windows__CStorage__CStreams__CIBuffer **secondPartition);
    END_INTERFACE
} __FIMapView_2_HSTRING_Windows__CStorage__CStreams__CIBufferVtbl;

interface __FIMapView_2_HSTRING_Windows__CStorage__CStreams__CIBuffer
{
    CONST_VTBL struct __FIMapView_2_HSTRING_Windows__CStorage__CStreams__CIBufferVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIMapView_2_HSTRING_Windows__CStorage__CStreams__CIBuffer_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIMapView_2_HSTRING_Windows__CStorage__CStreams__CIBuffer_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIMapView_2_HSTRING_Windows__CStorage__CStreams__CIBuffer_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIMapView_2_HSTRING_Windows__CStorage__CStreams__CIBuffer_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIMapView_2_HSTRING_Windows__CStorage__CStreams__CIBuffer_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIMapView_2_HSTRING_Windows__CStorage__CStreams__CIBuffer_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIMapView_2_HSTRING_Windows__CStorage__CStreams__CIBuffer_Lookup(This,key,value)	\
    ( (This)->lpVtbl -> Lookup(This,key,value) ) 
#define __FIMapView_2_HSTRING_Windows__CStorage__CStreams__CIBuffer_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 
#define __FIMapView_2_HSTRING_Windows__CStorage__CStreams__CIBuffer_HasKey(This,key,found)	\
    ( (This)->lpVtbl -> HasKey(This,key,found) ) 
#define __FIMapView_2_HSTRING_Windows__CStorage__CStreams__CIBuffer_Split(This,firstPartition,secondPartition)	\
    ( (This)->lpVtbl -> Split(This,firstPartition,secondPartition) ) 
#endif /* COBJMACROS */


#endif // ____FIMapView_2_HSTRING_Windows__CStorage__CStreams__CIBuffer_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_INTERFACE_DEFINED__)
#define ____FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_INTERFACE_DEFINED__

typedef interface __FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference __FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference;

typedef struct __FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReferenceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference * This,/* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *Lookup )(__RPC__in __FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference * This,
        /* [in] */ __RPC__in HSTRING key,
        /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference * *value);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )(__RPC__in __FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference * This, /* [retval][out] */ __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *HasKey )(__RPC__in __FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference * This, /* [in] */ __RPC__in HSTRING key, /* [retval][out] */ __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *Split )(__RPC__in __FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference * This,/* [out] */ __RPC__deref_out_opt __FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference **firstPartition,
        /* [out] */ __RPC__deref_out_opt __FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference **secondPartition);
    END_INTERFACE
} __FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReferenceVtbl;

interface __FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference
{
    CONST_VTBL struct __FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReferenceVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_Lookup(This,key,value)	\
    ( (This)->lpVtbl -> Lookup(This,key,value) ) 
#define __FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 
#define __FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_HasKey(This,key,found)	\
    ( (This)->lpVtbl -> HasKey(This,key,found) ) 
#define __FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_Split(This,firstPartition,secondPartition)	\
    ( (This)->lpVtbl -> Split(This,firstPartition,secondPartition) ) 
#endif /* COBJMACROS */


#endif // ____FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBuffer_INTERFACE_DEFINED__)
#define ____FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBuffer_INTERFACE_DEFINED__

typedef interface __FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBuffer __FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBuffer;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBuffer;

typedef struct __FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBufferVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBuffer * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBuffer * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBuffer * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBuffer * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBuffer * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBuffer * This,/* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *Lookup )(__RPC__in __FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBuffer * This,
        /* [in] */ __RPC__in int key,
        /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * *value);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )(__RPC__in __FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBuffer * This, /* [retval][out] */ __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *HasKey )(__RPC__in __FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBuffer * This, /* [in] */ __RPC__in int key, /* [retval][out] */ __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *Split )(__RPC__in __FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBuffer * This,/* [out] */ __RPC__deref_out_opt __FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBuffer **firstPartition,
        /* [out] */ __RPC__deref_out_opt __FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBuffer **secondPartition);
    END_INTERFACE
} __FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBufferVtbl;

interface __FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBuffer
{
    CONST_VTBL struct __FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBufferVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBuffer_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBuffer_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBuffer_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBuffer_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBuffer_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBuffer_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBuffer_Lookup(This,key,value)	\
    ( (This)->lpVtbl -> Lookup(This,key,value) ) 
#define __FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBuffer_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 
#define __FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBuffer_HasKey(This,key,found)	\
    ( (This)->lpVtbl -> HasKey(This,key,found) ) 
#define __FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBuffer_Split(This,firstPartition,secondPartition)	\
    ( (This)->lpVtbl -> Split(This,firstPartition,secondPartition) ) 
#endif /* COBJMACROS */


#endif // ____FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBuffer_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIMap_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_INTERFACE_DEFINED__)
#define ____FIMap_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_INTERFACE_DEFINED__

typedef interface __FIMap_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference __FIMap_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIMap_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference;

typedef struct __FIMap_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReferenceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMap_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMap_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMap_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMap_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMap_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMap_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *Lookup )(__RPC__in __FIMap_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference * This,
        /* [in] */ HSTRING key,
        /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference * **value);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )(__RPC__in __FIMap_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference * This, /* [retval][out] */ __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *HasKey )(__RPC__in __FIMap_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference * This, /* [in] */ HSTRING key, /* [retval][out] */ __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIMap_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference * This, /* [retval][out] */ __RPC__deref_out_opt __FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference **view);
    HRESULT ( STDMETHODCALLTYPE *Insert )(__RPC__in __FIMap_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference * This,
        /* [in] */ HSTRING key,
        /* [in] */ __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference * *value,
        /* [retval][out] */ __RPC__out boolean *replaced);
    HRESULT ( STDMETHODCALLTYPE *Remove )(__RPC__in __FIMap_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference * This,/* [in] */ HSTRING key);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIMap_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference * This);
    END_INTERFACE
} __FIMap_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReferenceVtbl;

interface __FIMap_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference
{
    CONST_VTBL struct __FIMap_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReferenceVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIMap_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIMap_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIMap_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIMap_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIMap_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIMap_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIMap_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_Lookup(This,key,value)	\
    ( (This)->lpVtbl -> Lookup(This,key,value) ) 

#define __FIMap_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIMap_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_HasKey(This,key,found)	\
    ( (This)->lpVtbl -> HasKey(This,key,found) ) 

#define __FIMap_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_GetView(This,view)	\
    ( (This)->lpVtbl -> GetView(This,view) ) 

#define __FIMap_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_Insert(This,key,value,replaced)	\
    ( (This)->lpVtbl -> Insert(This,key,value,replaced) ) 

#define __FIMap_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_Remove(This,key)	\
    ( (This)->lpVtbl -> Remove(This,key) ) 

#define __FIMap_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 
#endif /* COBJMACROS */



#endif // ____FIMap_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIMap_2_UINT32_Windows__CStorage__CStreams__CIBuffer_INTERFACE_DEFINED__)
#define ____FIMap_2_UINT32_Windows__CStorage__CStreams__CIBuffer_INTERFACE_DEFINED__

typedef interface __FIMap_2_UINT32_Windows__CStorage__CStreams__CIBuffer __FIMap_2_UINT32_Windows__CStorage__CStreams__CIBuffer;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIMap_2_UINT32_Windows__CStorage__CStreams__CIBuffer;

typedef struct __FIMap_2_UINT32_Windows__CStorage__CStreams__CIBufferVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMap_2_UINT32_Windows__CStorage__CStreams__CIBuffer * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMap_2_UINT32_Windows__CStorage__CStreams__CIBuffer * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMap_2_UINT32_Windows__CStorage__CStreams__CIBuffer * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMap_2_UINT32_Windows__CStorage__CStreams__CIBuffer * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMap_2_UINT32_Windows__CStorage__CStreams__CIBuffer * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMap_2_UINT32_Windows__CStorage__CStreams__CIBuffer * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *Lookup )(__RPC__in __FIMap_2_UINT32_Windows__CStorage__CStreams__CIBuffer * This,
        /* [in] */ int key,
        /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * **value);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )(__RPC__in __FIMap_2_UINT32_Windows__CStorage__CStreams__CIBuffer * This, /* [retval][out] */ __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *HasKey )(__RPC__in __FIMap_2_UINT32_Windows__CStorage__CStreams__CIBuffer * This, /* [in] */ int key, /* [retval][out] */ __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIMap_2_UINT32_Windows__CStorage__CStreams__CIBuffer * This, /* [retval][out] */ __RPC__deref_out_opt __FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBuffer **view);
    HRESULT ( STDMETHODCALLTYPE *Insert )(__RPC__in __FIMap_2_UINT32_Windows__CStorage__CStreams__CIBuffer * This,
        /* [in] */ int key,
        /* [in] */ __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * *value,
        /* [retval][out] */ __RPC__out boolean *replaced);
    HRESULT ( STDMETHODCALLTYPE *Remove )(__RPC__in __FIMap_2_UINT32_Windows__CStorage__CStreams__CIBuffer * This,/* [in] */ int key);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIMap_2_UINT32_Windows__CStorage__CStreams__CIBuffer * This);
    END_INTERFACE
} __FIMap_2_UINT32_Windows__CStorage__CStreams__CIBufferVtbl;

interface __FIMap_2_UINT32_Windows__CStorage__CStreams__CIBuffer
{
    CONST_VTBL struct __FIMap_2_UINT32_Windows__CStorage__CStreams__CIBufferVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIMap_2_UINT32_Windows__CStorage__CStreams__CIBuffer_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIMap_2_UINT32_Windows__CStorage__CStreams__CIBuffer_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIMap_2_UINT32_Windows__CStorage__CStreams__CIBuffer_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIMap_2_UINT32_Windows__CStorage__CStreams__CIBuffer_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIMap_2_UINT32_Windows__CStorage__CStreams__CIBuffer_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIMap_2_UINT32_Windows__CStorage__CStreams__CIBuffer_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIMap_2_UINT32_Windows__CStorage__CStreams__CIBuffer_Lookup(This,key,value)	\
    ( (This)->lpVtbl -> Lookup(This,key,value) ) 

#define __FIMap_2_UINT32_Windows__CStorage__CStreams__CIBuffer_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIMap_2_UINT32_Windows__CStorage__CStreams__CIBuffer_HasKey(This,key,found)	\
    ( (This)->lpVtbl -> HasKey(This,key,found) ) 

#define __FIMap_2_UINT32_Windows__CStorage__CStreams__CIBuffer_GetView(This,view)	\
    ( (This)->lpVtbl -> GetView(This,view) ) 

#define __FIMap_2_UINT32_Windows__CStorage__CStreams__CIBuffer_Insert(This,key,value,replaced)	\
    ( (This)->lpVtbl -> Insert(This,key,value,replaced) ) 

#define __FIMap_2_UINT32_Windows__CStorage__CStreams__CIBuffer_Remove(This,key)	\
    ( (This)->lpVtbl -> Remove(This,key) ) 

#define __FIMap_2_UINT32_Windows__CStorage__CStreams__CIBuffer_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 
#endif /* COBJMACROS */



#endif // ____FIMap_2_UINT32_Windows__CStorage__CStreams__CIBuffer_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CStorage__CStreams__CIBuffer_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CStorage__CStreams__CIBuffer_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CStorage__CStreams__CIBuffer __FIVectorView_1_Windows__CStorage__CStreams__CIBuffer;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CStorage__CStreams__CIBuffer;

typedef struct __FIVectorView_1_Windows__CStorage__CStreams__CIBufferVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CStorage__CStreams__CIBuffer * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CStorage__CStreams__CIBuffer * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CStorage__CStreams__CIBuffer * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CStorage__CStreams__CIBuffer * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CStorage__CStreams__CIBuffer * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CStorage__CStreams__CIBuffer * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CStorage__CStreams__CIBuffer * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CStorage_CStreams_CIBuffer * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CStorage__CStreams__CIBuffer * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CStorage__CStreams__CIBuffer * This,
            /* [in] */ __x_ABI_CWindows_CStorage_CStreams_CIBuffer * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CStorage__CStreams__CIBuffer * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CStorage_CStreams_CIBuffer * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CStorage__CStreams__CIBufferVtbl;

interface __FIVectorView_1_Windows__CStorage__CStreams__CIBuffer
{
    CONST_VTBL struct __FIVectorView_1_Windows__CStorage__CStreams__CIBufferVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CStorage__CStreams__CIBuffer_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CStorage__CStreams__CIBuffer_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CStorage__CStreams__CIBuffer_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CStorage__CStreams__CIBuffer_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CStorage__CStreams__CIBuffer_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CStorage__CStreams__CIBuffer_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CStorage__CStreams__CIBuffer_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CStorage__CStreams__CIBuffer_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CStorage__CStreams__CIBuffer_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CStorage__CStreams__CIBuffer_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CStorage__CStreams__CIBuffer_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CStorage__CStreams__CIRandomAccessStream_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CStorage__CStreams__CIRandomAccessStream_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CStorage__CStreams__CIRandomAccessStream __FIVectorView_1_Windows__CStorage__CStreams__CIRandomAccessStream;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CStorage__CStreams__CIRandomAccessStream;

typedef struct __FIVectorView_1_Windows__CStorage__CStreams__CIRandomAccessStreamVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CStorage__CStreams__CIRandomAccessStream * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CStorage__CStreams__CIRandomAccessStream * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CStorage__CStreams__CIRandomAccessStream * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CStorage__CStreams__CIRandomAccessStream * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CStorage__CStreams__CIRandomAccessStream * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CStorage__CStreams__CIRandomAccessStream * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CStorage__CStreams__CIRandomAccessStream * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CStorage__CStreams__CIRandomAccessStream * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CStorage__CStreams__CIRandomAccessStream * This,
            /* [in] */ __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CStorage__CStreams__CIRandomAccessStream * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CStorage__CStreams__CIRandomAccessStreamVtbl;

interface __FIVectorView_1_Windows__CStorage__CStreams__CIRandomAccessStream
{
    CONST_VTBL struct __FIVectorView_1_Windows__CStorage__CStreams__CIRandomAccessStreamVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CStorage__CStreams__CIRandomAccessStream_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CStorage__CStreams__CIRandomAccessStream_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CStorage__CStreams__CIRandomAccessStream_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CStorage__CStreams__CIRandomAccessStream_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CStorage__CStreams__CIRandomAccessStream_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CStorage__CStreams__CIRandomAccessStream_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CStorage__CStreams__CIRandomAccessStream_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CStorage__CStreams__CIRandomAccessStream_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CStorage__CStreams__CIRandomAccessStream_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CStorage__CStreams__CIRandomAccessStream_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CStorage__CStreams__CIRandomAccessStream_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVector_1_Windows__CStorage__CStreams__CIBuffer_INTERFACE_DEFINED__)
#define ____FIVector_1_Windows__CStorage__CStreams__CIBuffer_INTERFACE_DEFINED__

typedef interface __FIVector_1_Windows__CStorage__CStreams__CIBuffer __FIVector_1_Windows__CStorage__CStreams__CIBuffer;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVector_1_Windows__CStorage__CStreams__CIBuffer;

typedef struct __FIVector_1_Windows__CStorage__CStreams__CIBufferVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVector_1_Windows__CStorage__CStreams__CIBuffer * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CStorage__CStreams__CIBuffer * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CStorage__CStreams__CIBuffer * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CStorage__CStreams__CIBuffer * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CStorage__CStreams__CIBuffer * This, /* [out] */ __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CStorage__CStreams__CIBuffer * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CStorage__CStreams__CIBuffer * This,
        /* [in] */ unsigned int index,
        /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * *item);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
        __RPC__in __FIVector_1_Windows__CStorage__CStreams__CIBuffer * This,
        /* [retval][out] */ __RPC__out unsigned int *size);

    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CStorage__CStreams__CIBuffer * This, /* [retval][out] */ __RPC__deref_out_opt __FIVectorView_1_Windows__CStorage__CStreams__CIBuffer **view);

    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CStorage__CStreams__CIBuffer * This,
        /* [in] */ __RPC__in __x_ABI_CWindows_CStorage_CStreams_CIBuffer * item,
        /* [out] */ __RPC__out unsigned int *index,
        /* [retval][out] */ __RPC__out boolean *found);

    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CStorage__CStreams__CIBuffer * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CWindows_CStorage_CStreams_CIBuffer * item);

    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CStorage__CStreams__CIBuffer * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CWindows_CStorage_CStreams_CIBuffer * item);

    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CStorage__CStreams__CIBuffer * This, /* [in] */ unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CStorage__CStreams__CIBuffer * This, /* [in] */ __RPC__in __x_ABI_CWindows_CStorage_CStreams_CIBuffer * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CStorage__CStreams__CIBuffer * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CStorage__CStreams__CIBuffer * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CStorage__CStreams__CIBuffer * This,
        /* [in] */ unsigned int startIndex,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CStorage_CStreams_CIBuffer * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CStorage__CStreams__CIBuffer * This,
        /* [in] */ unsigned int count,
        /* [size_is][in] */ __RPC__in_ecount_full(count) __x_ABI_CWindows_CStorage_CStreams_CIBuffer * *value);

    END_INTERFACE
} __FIVector_1_Windows__CStorage__CStreams__CIBufferVtbl;

interface __FIVector_1_Windows__CStorage__CStreams__CIBuffer
{
    CONST_VTBL struct __FIVector_1_Windows__CStorage__CStreams__CIBufferVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVector_1_Windows__CStorage__CStreams__CIBuffer_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVector_1_Windows__CStorage__CStreams__CIBuffer_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVector_1_Windows__CStorage__CStreams__CIBuffer_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVector_1_Windows__CStorage__CStreams__CIBuffer_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVector_1_Windows__CStorage__CStreams__CIBuffer_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVector_1_Windows__CStorage__CStreams__CIBuffer_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVector_1_Windows__CStorage__CStreams__CIBuffer_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVector_1_Windows__CStorage__CStreams__CIBuffer_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVector_1_Windows__CStorage__CStreams__CIBuffer_GetView(This,view)	\
    ( (This)->lpVtbl -> GetView(This,view) ) 

#define __FIVector_1_Windows__CStorage__CStreams__CIBuffer_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVector_1_Windows__CStorage__CStreams__CIBuffer_SetAt(This,index,item)	\
    ( (This)->lpVtbl -> SetAt(This,index,item) ) 

#define __FIVector_1_Windows__CStorage__CStreams__CIBuffer_InsertAt(This,index,item)	\
    ( (This)->lpVtbl -> InsertAt(This,index,item) ) 

#define __FIVector_1_Windows__CStorage__CStreams__CIBuffer_RemoveAt(This,index)	\
    ( (This)->lpVtbl -> RemoveAt(This,index) ) 

#define __FIVector_1_Windows__CStorage__CStreams__CIBuffer_Append(This,item)	\
    ( (This)->lpVtbl -> Append(This,item) ) 

#define __FIVector_1_Windows__CStorage__CStreams__CIBuffer_RemoveAtEnd(This)	\
    ( (This)->lpVtbl -> RemoveAtEnd(This) ) 

#define __FIVector_1_Windows__CStorage__CStreams__CIBuffer_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define __FIVector_1_Windows__CStorage__CStreams__CIBuffer_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#define __FIVector_1_Windows__CStorage__CStreams__CIBuffer_ReplaceAll(This,count,value)	\
    ( (This)->lpVtbl -> ReplaceAll(This,count,value) ) 

#endif /* COBJMACROS */



#endif // ____FIVector_1_Windows__CStorage__CStreams__CIBuffer_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVector_1_Windows__CStorage__CStreams__CIRandomAccessStream_INTERFACE_DEFINED__)
#define ____FIVector_1_Windows__CStorage__CStreams__CIRandomAccessStream_INTERFACE_DEFINED__

typedef interface __FIVector_1_Windows__CStorage__CStreams__CIRandomAccessStream __FIVector_1_Windows__CStorage__CStreams__CIRandomAccessStream;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVector_1_Windows__CStorage__CStreams__CIRandomAccessStream;

typedef struct __FIVector_1_Windows__CStorage__CStreams__CIRandomAccessStreamVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVector_1_Windows__CStorage__CStreams__CIRandomAccessStream * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CStorage__CStreams__CIRandomAccessStream * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CStorage__CStreams__CIRandomAccessStream * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CStorage__CStreams__CIRandomAccessStream * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CStorage__CStreams__CIRandomAccessStream * This, /* [out] */ __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CStorage__CStreams__CIRandomAccessStream * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CStorage__CStreams__CIRandomAccessStream * This,
        /* [in] */ unsigned int index,
        /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * *item);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
        __RPC__in __FIVector_1_Windows__CStorage__CStreams__CIRandomAccessStream * This,
        /* [retval][out] */ __RPC__out unsigned int *size);

    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CStorage__CStreams__CIRandomAccessStream * This, /* [retval][out] */ __RPC__deref_out_opt __FIVectorView_1_Windows__CStorage__CStreams__CIRandomAccessStream **view);

    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CStorage__CStreams__CIRandomAccessStream * This,
        /* [in] */ __RPC__in __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * item,
        /* [out] */ __RPC__out unsigned int *index,
        /* [retval][out] */ __RPC__out boolean *found);

    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CStorage__CStreams__CIRandomAccessStream * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * item);

    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CStorage__CStreams__CIRandomAccessStream * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * item);

    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CStorage__CStreams__CIRandomAccessStream * This, /* [in] */ unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CStorage__CStreams__CIRandomAccessStream * This, /* [in] */ __RPC__in __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CStorage__CStreams__CIRandomAccessStream * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CStorage__CStreams__CIRandomAccessStream * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CStorage__CStreams__CIRandomAccessStream * This,
        /* [in] */ unsigned int startIndex,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CStorage__CStreams__CIRandomAccessStream * This,
        /* [in] */ unsigned int count,
        /* [size_is][in] */ __RPC__in_ecount_full(count) __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * *value);

    END_INTERFACE
} __FIVector_1_Windows__CStorage__CStreams__CIRandomAccessStreamVtbl;

interface __FIVector_1_Windows__CStorage__CStreams__CIRandomAccessStream
{
    CONST_VTBL struct __FIVector_1_Windows__CStorage__CStreams__CIRandomAccessStreamVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVector_1_Windows__CStorage__CStreams__CIRandomAccessStream_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVector_1_Windows__CStorage__CStreams__CIRandomAccessStream_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVector_1_Windows__CStorage__CStreams__CIRandomAccessStream_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVector_1_Windows__CStorage__CStreams__CIRandomAccessStream_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVector_1_Windows__CStorage__CStreams__CIRandomAccessStream_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVector_1_Windows__CStorage__CStreams__CIRandomAccessStream_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVector_1_Windows__CStorage__CStreams__CIRandomAccessStream_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVector_1_Windows__CStorage__CStreams__CIRandomAccessStream_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVector_1_Windows__CStorage__CStreams__CIRandomAccessStream_GetView(This,view)	\
    ( (This)->lpVtbl -> GetView(This,view) ) 

#define __FIVector_1_Windows__CStorage__CStreams__CIRandomAccessStream_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVector_1_Windows__CStorage__CStreams__CIRandomAccessStream_SetAt(This,index,item)	\
    ( (This)->lpVtbl -> SetAt(This,index,item) ) 

#define __FIVector_1_Windows__CStorage__CStreams__CIRandomAccessStream_InsertAt(This,index,item)	\
    ( (This)->lpVtbl -> InsertAt(This,index,item) ) 

#define __FIVector_1_Windows__CStorage__CStreams__CIRandomAccessStream_RemoveAt(This,index)	\
    ( (This)->lpVtbl -> RemoveAt(This,index) ) 

#define __FIVector_1_Windows__CStorage__CStreams__CIRandomAccessStream_Append(This,item)	\
    ( (This)->lpVtbl -> Append(This,item) ) 

#define __FIVector_1_Windows__CStorage__CStreams__CIRandomAccessStream_RemoveAtEnd(This)	\
    ( (This)->lpVtbl -> RemoveAtEnd(This) ) 

#define __FIVector_1_Windows__CStorage__CStreams__CIRandomAccessStream_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define __FIVector_1_Windows__CStorage__CStreams__CIRandomAccessStream_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#define __FIVector_1_Windows__CStorage__CStreams__CIRandomAccessStream_ReplaceAll(This,count,value)	\
    ( (This)->lpVtbl -> ReplaceAll(This,count,value) ) 

#endif /* COBJMACROS */



#endif // ____FIVector_1_Windows__CStorage__CStreams__CIRandomAccessStream_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT32_INTERFACE_DEFINED__)
#define ____FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT32_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT32 __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT32;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT32;

typedef interface __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_UINT32 __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_UINT32;

typedef struct __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT32Vtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT32 * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT32 * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT32 * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT32 * This, /* [in] */ __RPC__in_opt __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_UINT32 *asyncInfo, /* [in] */ UINT64 progressInfo);
    END_INTERFACE
} __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT32Vtbl;

interface __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT32
{
    CONST_VTBL struct __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT32Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT32_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT32_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT32_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT32_Invoke(This,asyncInfo,progressInfo)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,progressInfo) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT32_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT32_INTERFACE_DEFINED__)
#define ____FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT32_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT32 __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT32;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT32;

//  Forward declare the async operation.
typedef interface __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_UINT32 __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_UINT32;

typedef struct __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT32Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT32 * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT32 * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT32 * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT32 * This, /* [in] */ __RPC__in_opt __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_UINT32 *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT32Vtbl;

interface __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT32
{
    CONST_VTBL struct __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT32Vtbl *lpVtbl;
};



#ifdef COBJMACROS
#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT32_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT32_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT32_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT32_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */



#endif // ____FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT32_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_UINT32_INTERFACE_DEFINED__)
#define ____FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_UINT32_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_UINT32 __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_UINT32;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_UINT32;

typedef struct __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_UINT32Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_UINT32 * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_UINT32 * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_UINT32 * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_UINT32 * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_UINT32 * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_UINT32 * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Progress )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_UINT32 * This, /* [in] */ __RPC__in_opt __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT32 *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Progress )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_UINT32 * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT32 **handler);
    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_UINT32 * This, /* [in] */ __RPC__in_opt __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT32 *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_UINT32 * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT32 **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_UINT32 * This, /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * *results);
    END_INTERFACE
} __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_UINT32Vtbl;

interface __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_UINT32
{
    CONST_VTBL struct __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_UINT32Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_UINT32_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_UINT32_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_UINT32_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_UINT32_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_UINT32_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_UINT32_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_UINT32_put_Progress(This,handler)	\
    ( (This)->lpVtbl -> put_Progress(This,handler) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_UINT32_get_Progress(This,handler)	\
    ( (This)->lpVtbl -> get_Progress(This,handler) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_UINT32_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_UINT32_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_UINT32_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */



#endif // ____FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_UINT32_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT64_INTERFACE_DEFINED__)
#define ____FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT64_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT64 __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT64;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT64;

typedef interface __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_UINT64 __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_UINT64;

typedef struct __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT64Vtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT64 * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT64 * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT64 * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT64 * This, /* [in] */ __RPC__in_opt __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_UINT64 *asyncInfo, /* [in] */ UINT64 progressInfo);
    END_INTERFACE
} __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT64Vtbl;

interface __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT64
{
    CONST_VTBL struct __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT64Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT64_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT64_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT64_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT64_Invoke(This,asyncInfo,progressInfo)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,progressInfo) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT64_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT64_INTERFACE_DEFINED__)
#define ____FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT64_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT64 __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT64;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT64;

//  Forward declare the async operation.
typedef interface __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_UINT64 __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_UINT64;

typedef struct __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT64Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT64 * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT64 * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT64 * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT64 * This, /* [in] */ __RPC__in_opt __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_UINT64 *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT64Vtbl;

interface __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT64
{
    CONST_VTBL struct __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT64Vtbl *lpVtbl;
};



#ifdef COBJMACROS
#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT64_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT64_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT64_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT64_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */



#endif // ____FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT64_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_UINT64_INTERFACE_DEFINED__)
#define ____FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_UINT64_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_UINT64 __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_UINT64;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_UINT64;

typedef struct __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_UINT64Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_UINT64 * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_UINT64 * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_UINT64 * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_UINT64 * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_UINT64 * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_UINT64 * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Progress )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_UINT64 * This, /* [in] */ __RPC__in_opt __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT64 *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Progress )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_UINT64 * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT64 **handler);
    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_UINT64 * This, /* [in] */ __RPC__in_opt __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT64 *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_UINT64 * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIBuffer_UINT64 **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_UINT64 * This, /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * *results);
    END_INTERFACE
} __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_UINT64Vtbl;

interface __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_UINT64
{
    CONST_VTBL struct __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_UINT64Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_UINT64_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_UINT64_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_UINT64_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_UINT64_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_UINT64_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_UINT64_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_UINT64_put_Progress(This,handler)	\
    ( (This)->lpVtbl -> put_Progress(This,handler) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_UINT64_get_Progress(This,handler)	\
    ( (This)->lpVtbl -> get_Progress(This,handler) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_UINT64_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_UINT64_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_UINT64_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */



#endif // ____FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_UINT64_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIInputStream_UINT64_INTERFACE_DEFINED__)
#define ____FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIInputStream_UINT64_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIInputStream_UINT64 __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIInputStream_UINT64;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIInputStream_UINT64;

typedef interface __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_UINT64 __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_UINT64;

typedef struct __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIInputStream_UINT64Vtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIInputStream_UINT64 * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIInputStream_UINT64 * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIInputStream_UINT64 * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIInputStream_UINT64 * This, /* [in] */ __RPC__in_opt __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_UINT64 *asyncInfo, /* [in] */ UINT64 progressInfo);
    END_INTERFACE
} __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIInputStream_UINT64Vtbl;

interface __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIInputStream_UINT64
{
    CONST_VTBL struct __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIInputStream_UINT64Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIInputStream_UINT64_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIInputStream_UINT64_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIInputStream_UINT64_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIInputStream_UINT64_Invoke(This,asyncInfo,progressInfo)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,progressInfo) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIInputStream_UINT64_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIInputStream_UINT64_INTERFACE_DEFINED__)
#define ____FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIInputStream_UINT64_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIInputStream_UINT64 __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIInputStream_UINT64;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIInputStream_UINT64;

//  Forward declare the async operation.
typedef interface __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_UINT64 __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_UINT64;

typedef struct __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIInputStream_UINT64Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIInputStream_UINT64 * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIInputStream_UINT64 * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIInputStream_UINT64 * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIInputStream_UINT64 * This, /* [in] */ __RPC__in_opt __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_UINT64 *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIInputStream_UINT64Vtbl;

interface __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIInputStream_UINT64
{
    CONST_VTBL struct __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIInputStream_UINT64Vtbl *lpVtbl;
};



#ifdef COBJMACROS
#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIInputStream_UINT64_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIInputStream_UINT64_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIInputStream_UINT64_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIInputStream_UINT64_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */



#endif // ____FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIInputStream_UINT64_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_UINT64_INTERFACE_DEFINED__)
#define ____FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_UINT64_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_UINT64 __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_UINT64;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_UINT64;

typedef struct __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_UINT64Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_UINT64 * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_UINT64 * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_UINT64 * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_UINT64 * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_UINT64 * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_UINT64 * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Progress )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_UINT64 * This, /* [in] */ __RPC__in_opt __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIInputStream_UINT64 *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Progress )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_UINT64 * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIInputStream_UINT64 **handler);
    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_UINT64 * This, /* [in] */ __RPC__in_opt __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIInputStream_UINT64 *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_UINT64 * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIInputStream_UINT64 **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_UINT64 * This, /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIInputStream * *results);
    END_INTERFACE
} __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_UINT64Vtbl;

interface __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_UINT64
{
    CONST_VTBL struct __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_UINT64Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_UINT64_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_UINT64_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_UINT64_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_UINT64_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_UINT64_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_UINT64_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_UINT64_put_Progress(This,handler)	\
    ( (This)->lpVtbl -> put_Progress(This,handler) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_UINT64_get_Progress(This,handler)	\
    ( (This)->lpVtbl -> get_Progress(This,handler) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_UINT64_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_UINT64_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_UINT64_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */



#endif // ____FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_UINT64_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference __FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1___FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference __FIAsyncOperation_1___FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference;

typedef struct __FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReferenceVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1___FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReferenceVtbl;

interface __FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReferenceVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1___FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1___FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1___FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference __FIAsyncOperation_1___FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1___FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference;

typedef struct __FIAsyncOperation_1___FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReferenceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference * This, /* [retval][out] */ __RPC__out __FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReferenceVtbl;

interface __FIAsyncOperation_1___FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference
{
    CONST_VTBL struct __FIAsyncOperation_1___FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReferenceVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1___FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1___FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1___FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1___FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1___FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1___FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1___FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1___FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1___FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1___FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1___FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBuffer_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1___FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBuffer_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1___FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBuffer __FIAsyncOperationCompletedHandler_1___FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBuffer;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBuffer;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1___FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBuffer __FIAsyncOperation_1___FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBuffer;

typedef struct __FIAsyncOperationCompletedHandler_1___FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBufferVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBuffer * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBuffer * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBuffer * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBuffer * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1___FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBuffer *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBufferVtbl;

interface __FIAsyncOperationCompletedHandler_1___FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBuffer
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBufferVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1___FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBuffer_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1___FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBuffer_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1___FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBuffer_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1___FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBuffer_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1___FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBuffer_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1___FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBuffer_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1___FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBuffer_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1___FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBuffer __FIAsyncOperation_1___FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBuffer;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1___FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBuffer;

typedef struct __FIAsyncOperation_1___FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBufferVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBuffer * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBuffer * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBuffer * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBuffer * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBuffer * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBuffer * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBuffer * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBuffer *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBuffer * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBuffer **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBuffer * This, /* [retval][out] */ __RPC__out __FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBuffer * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBufferVtbl;

interface __FIAsyncOperation_1___FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBuffer
{
    CONST_VTBL struct __FIAsyncOperation_1___FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBufferVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1___FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBuffer_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1___FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBuffer_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1___FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBuffer_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1___FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBuffer_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1___FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBuffer_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1___FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBuffer_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1___FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBuffer_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1___FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBuffer_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1___FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBuffer_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1___FIMapView_2_UINT32_Windows__CStorage__CStreams__CIBuffer_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBufferVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBufferVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBufferVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer;

typedef struct __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBufferVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CStorage_CStreams_CIBuffer * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBufferVtbl;

interface __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBufferVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIInputStream_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIInputStream_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIInputStream __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIInputStream;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIInputStream;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CStorage__CStreams__CIInputStream __FIAsyncOperation_1_Windows__CStorage__CStreams__CIInputStream;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIInputStreamVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIInputStream * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIInputStream * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIInputStream * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIInputStream * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CStorage__CStreams__CIInputStream *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIInputStreamVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIInputStream
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIInputStreamVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIInputStream_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIInputStream_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIInputStream_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIInputStream_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIInputStream_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1_Windows__CStorage__CStreams__CIInputStream_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CStorage__CStreams__CIInputStream_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CStorage__CStreams__CIInputStream __FIAsyncOperation_1_Windows__CStorage__CStreams__CIInputStream;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CStorage__CStreams__CIInputStream;

typedef struct __FIAsyncOperation_1_Windows__CStorage__CStreams__CIInputStreamVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIInputStream * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIInputStream * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIInputStream * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIInputStream * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIInputStream * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIInputStream * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIInputStream * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIInputStream *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIInputStream * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIInputStream **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIInputStream * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CStorage_CStreams_CIInputStream * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CStorage__CStreams__CIInputStreamVtbl;

interface __FIAsyncOperation_1_Windows__CStorage__CStreams__CIInputStream
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CStorage__CStreams__CIInputStreamVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIInputStream_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIInputStream_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIInputStream_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIInputStream_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIInputStream_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIInputStream_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIInputStream_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIInputStream_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIInputStream_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CStorage__CStreams__CIInputStream_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIOutputStream_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIOutputStream_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIOutputStream __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIOutputStream;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIOutputStream;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CStorage__CStreams__CIOutputStream __FIAsyncOperation_1_Windows__CStorage__CStreams__CIOutputStream;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIOutputStreamVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIOutputStream * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIOutputStream * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIOutputStream * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIOutputStream * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CStorage__CStreams__CIOutputStream *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIOutputStreamVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIOutputStream
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIOutputStreamVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIOutputStream_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIOutputStream_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIOutputStream_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIOutputStream_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIOutputStream_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1_Windows__CStorage__CStreams__CIOutputStream_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CStorage__CStreams__CIOutputStream_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CStorage__CStreams__CIOutputStream __FIAsyncOperation_1_Windows__CStorage__CStreams__CIOutputStream;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CStorage__CStreams__CIOutputStream;

typedef struct __FIAsyncOperation_1_Windows__CStorage__CStreams__CIOutputStreamVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIOutputStream * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIOutputStream * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIOutputStream * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIOutputStream * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIOutputStream * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIOutputStream * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIOutputStream * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIOutputStream *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIOutputStream * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIOutputStream **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIOutputStream * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CStorage_CStreams_CIOutputStream * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CStorage__CStreams__CIOutputStreamVtbl;

interface __FIAsyncOperation_1_Windows__CStorage__CStreams__CIOutputStream
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CStorage__CStreams__CIOutputStreamVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIOutputStream_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIOutputStream_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIOutputStream_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIOutputStream_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIOutputStream_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIOutputStream_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIOutputStream_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIOutputStream_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIOutputStream_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CStorage__CStreams__CIOutputStream_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


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


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamReferenceVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamReferenceVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamReferenceVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference;

typedef struct __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamReferenceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamReferenceVtbl;

interface __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamReferenceVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentTypeVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentTypeVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentTypeVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType;

typedef struct __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentTypeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamWithContentType * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentTypeVtbl;

interface __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentTypeVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CRandomAccessStreamReference_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CRandomAccessStreamReference_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CRandomAccessStreamReference __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CRandomAccessStreamReference;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CRandomAccessStreamReference;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CStorage__CStreams__CRandomAccessStreamReference __FIAsyncOperation_1_Windows__CStorage__CStreams__CRandomAccessStreamReference;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CRandomAccessStreamReferenceVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CRandomAccessStreamReference * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CRandomAccessStreamReference * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CRandomAccessStreamReference * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CRandomAccessStreamReference * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CStorage__CStreams__CRandomAccessStreamReference *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CRandomAccessStreamReferenceVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CRandomAccessStreamReference
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CRandomAccessStreamReferenceVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CRandomAccessStreamReference_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CRandomAccessStreamReference_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CRandomAccessStreamReference_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CRandomAccessStreamReference_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CRandomAccessStreamReference_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1_Windows__CStorage__CStreams__CRandomAccessStreamReference_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CStorage__CStreams__CRandomAccessStreamReference_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CStorage__CStreams__CRandomAccessStreamReference __FIAsyncOperation_1_Windows__CStorage__CStreams__CRandomAccessStreamReference;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CStorage__CStreams__CRandomAccessStreamReference;

typedef struct __FIAsyncOperation_1_Windows__CStorage__CStreams__CRandomAccessStreamReferenceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CRandomAccessStreamReference * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CRandomAccessStreamReference * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CRandomAccessStreamReference * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CRandomAccessStreamReference * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CRandomAccessStreamReference * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CRandomAccessStreamReference * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CRandomAccessStreamReference * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CRandomAccessStreamReference *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CRandomAccessStreamReference * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CRandomAccessStreamReference **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CRandomAccessStreamReference * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CStorage__CStreams__CRandomAccessStreamReferenceVtbl;

interface __FIAsyncOperation_1_Windows__CStorage__CStreams__CRandomAccessStreamReference
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CStorage__CStreams__CRandomAccessStreamReferenceVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CRandomAccessStreamReference_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CRandomAccessStreamReference_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CRandomAccessStreamReference_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CRandomAccessStreamReference_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CRandomAccessStreamReference_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CRandomAccessStreamReference_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CRandomAccessStreamReference_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CRandomAccessStreamReference_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CRandomAccessStreamReference_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CStorage__CStreams__CRandomAccessStreamReference_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#if !defined(____FIAsyncOperationCompletedHandler_1_UINT32_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_UINT32_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_UINT32 __FIAsyncOperationCompletedHandler_1_UINT32;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_UINT32;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_UINT32 __FIAsyncOperation_1_UINT32;

typedef struct __FIAsyncOperationCompletedHandler_1_UINT32Vtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_UINT32 * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_UINT32 * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_UINT32 * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_UINT32 * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_UINT32 *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_UINT32Vtbl;

interface __FIAsyncOperationCompletedHandler_1_UINT32
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_UINT32Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_UINT32_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_UINT32_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_UINT32_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_UINT32_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_UINT32_INTERFACE_DEFINED__


#if !defined(____FIAsyncOperation_1_UINT32_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_UINT32_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_UINT32 __FIAsyncOperation_1_UINT32;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_UINT32;

typedef struct __FIAsyncOperation_1_UINT32Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_UINT32 * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_UINT32 * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_UINT32 * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_UINT32 * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_UINT32 * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_UINT32 * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_UINT32 * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_UINT32 *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_UINT32 * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_UINT32 **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_UINT32 * This, /* [retval][out] */ __RPC__out int *results);
    END_INTERFACE
} __FIAsyncOperation_1_UINT32Vtbl;

interface __FIAsyncOperation_1_UINT32
{
    CONST_VTBL struct __FIAsyncOperation_1_UINT32Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_UINT32_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_UINT32_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_UINT32_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_UINT32_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_UINT32_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_UINT32_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_UINT32_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_UINT32_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_UINT32_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_UINT32_INTERFACE_DEFINED__


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


#ifndef ____x_ABI_CWindows_CStorage_CIStorageStreamTransaction_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CIStorageStreamTransaction_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CIStorageStreamTransaction __x_ABI_CWindows_CStorage_CIStorageStreamTransaction;

#endif // ____x_ABI_CWindows_CStorage_CIStorageStreamTransaction_FWD_DEFINED__


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageStreamTransaction_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageStreamTransaction_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageStreamTransaction __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageStreamTransaction;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageStreamTransaction;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CStorage__CStorageStreamTransaction __FIAsyncOperation_1_Windows__CStorage__CStorageStreamTransaction;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageStreamTransactionVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageStreamTransaction * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageStreamTransaction * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageStreamTransaction * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageStreamTransaction * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CStorage__CStorageStreamTransaction *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageStreamTransactionVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageStreamTransaction
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageStreamTransactionVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageStreamTransaction_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageStreamTransaction_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageStreamTransaction_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageStreamTransaction_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageStreamTransaction_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1_Windows__CStorage__CStorageStreamTransaction_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CStorage__CStorageStreamTransaction_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CStorage__CStorageStreamTransaction __FIAsyncOperation_1_Windows__CStorage__CStorageStreamTransaction;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CStorage__CStorageStreamTransaction;

typedef struct __FIAsyncOperation_1_Windows__CStorage__CStorageStreamTransactionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStorageStreamTransaction * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStorageStreamTransaction * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStorageStreamTransaction * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStorageStreamTransaction * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStorageStreamTransaction * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStorageStreamTransaction * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStorageStreamTransaction * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageStreamTransaction *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStorageStreamTransaction * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageStreamTransaction **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStorageStreamTransaction * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CStorage_CIStorageStreamTransaction * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CStorage__CStorageStreamTransactionVtbl;

interface __FIAsyncOperation_1_Windows__CStorage__CStorageStreamTransaction
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CStorage__CStorageStreamTransactionVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CStorage__CStorageStreamTransaction_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CStorage__CStorageStreamTransaction_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CStorage__CStorageStreamTransaction_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CStorage__CStorageStreamTransaction_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CStorage__CStorageStreamTransaction_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CStorage__CStorageStreamTransaction_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CStorage__CStorageStreamTransaction_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CStorage__CStorageStreamTransaction_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CStorage__CStorageStreamTransaction_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CStorage__CStorageStreamTransaction_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#if !defined(____FIAsyncOperationProgressHandler_2_UINT32_UINT32_INTERFACE_DEFINED__)
#define ____FIAsyncOperationProgressHandler_2_UINT32_UINT32_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationProgressHandler_2_UINT32_UINT32 __FIAsyncOperationProgressHandler_2_UINT32_UINT32;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationProgressHandler_2_UINT32_UINT32;

typedef interface __FIAsyncOperationWithProgress_2_UINT32_UINT32 __FIAsyncOperationWithProgress_2_UINT32_UINT32;

typedef struct __FIAsyncOperationProgressHandler_2_UINT32_UINT32Vtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationProgressHandler_2_UINT32_UINT32 * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationProgressHandler_2_UINT32_UINT32 * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationProgressHandler_2_UINT32_UINT32 * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationProgressHandler_2_UINT32_UINT32 * This, /* [in] */ __RPC__in_opt __FIAsyncOperationWithProgress_2_UINT32_UINT32 *asyncInfo, /* [in] */ UINT64 progressInfo);
    END_INTERFACE
} __FIAsyncOperationProgressHandler_2_UINT32_UINT32Vtbl;

interface __FIAsyncOperationProgressHandler_2_UINT32_UINT32
{
    CONST_VTBL struct __FIAsyncOperationProgressHandler_2_UINT32_UINT32Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationProgressHandler_2_UINT32_UINT32_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationProgressHandler_2_UINT32_UINT32_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationProgressHandler_2_UINT32_UINT32_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationProgressHandler_2_UINT32_UINT32_Invoke(This,asyncInfo,progressInfo)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,progressInfo) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationProgressHandler_2_UINT32_UINT32_INTERFACE_DEFINED__


#if !defined(____FIAsyncOperationWithProgressCompletedHandler_2_UINT32_UINT32_INTERFACE_DEFINED__)
#define ____FIAsyncOperationWithProgressCompletedHandler_2_UINT32_UINT32_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationWithProgressCompletedHandler_2_UINT32_UINT32 __FIAsyncOperationWithProgressCompletedHandler_2_UINT32_UINT32;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationWithProgressCompletedHandler_2_UINT32_UINT32;

//  Forward declare the async operation.
typedef interface __FIAsyncOperationWithProgress_2_UINT32_UINT32 __FIAsyncOperationWithProgress_2_UINT32_UINT32;

typedef struct __FIAsyncOperationWithProgressCompletedHandler_2_UINT32_UINT32Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_UINT32_UINT32 * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_UINT32_UINT32 * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_UINT32_UINT32 * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_UINT32_UINT32 * This, /* [in] */ __RPC__in_opt __FIAsyncOperationWithProgress_2_UINT32_UINT32 *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationWithProgressCompletedHandler_2_UINT32_UINT32Vtbl;

interface __FIAsyncOperationWithProgressCompletedHandler_2_UINT32_UINT32
{
    CONST_VTBL struct __FIAsyncOperationWithProgressCompletedHandler_2_UINT32_UINT32Vtbl *lpVtbl;
};



#ifdef COBJMACROS
#define __FIAsyncOperationWithProgressCompletedHandler_2_UINT32_UINT32_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationWithProgressCompletedHandler_2_UINT32_UINT32_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationWithProgressCompletedHandler_2_UINT32_UINT32_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationWithProgressCompletedHandler_2_UINT32_UINT32_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */



#endif // ____FIAsyncOperationWithProgressCompletedHandler_2_UINT32_UINT32_INTERFACE_DEFINED__


#if !defined(____FIAsyncOperationWithProgress_2_UINT32_UINT32_INTERFACE_DEFINED__)
#define ____FIAsyncOperationWithProgress_2_UINT32_UINT32_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationWithProgress_2_UINT32_UINT32 __FIAsyncOperationWithProgress_2_UINT32_UINT32;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationWithProgress_2_UINT32_UINT32;

typedef struct __FIAsyncOperationWithProgress_2_UINT32_UINT32Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationWithProgress_2_UINT32_UINT32 * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationWithProgress_2_UINT32_UINT32 * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationWithProgress_2_UINT32_UINT32 * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperationWithProgress_2_UINT32_UINT32 * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperationWithProgress_2_UINT32_UINT32 * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperationWithProgress_2_UINT32_UINT32 * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Progress )(__RPC__in __FIAsyncOperationWithProgress_2_UINT32_UINT32 * This, /* [in] */ __RPC__in_opt __FIAsyncOperationProgressHandler_2_UINT32_UINT32 *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Progress )(__RPC__in __FIAsyncOperationWithProgress_2_UINT32_UINT32 * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationProgressHandler_2_UINT32_UINT32 **handler);
    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperationWithProgress_2_UINT32_UINT32 * This, /* [in] */ __RPC__in_opt __FIAsyncOperationWithProgressCompletedHandler_2_UINT32_UINT32 *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperationWithProgress_2_UINT32_UINT32 * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationWithProgressCompletedHandler_2_UINT32_UINT32 **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperationWithProgress_2_UINT32_UINT32 * This, /* [retval][out] */ __RPC__deref_out_opt int *results);
    END_INTERFACE
} __FIAsyncOperationWithProgress_2_UINT32_UINT32Vtbl;

interface __FIAsyncOperationWithProgress_2_UINT32_UINT32
{
    CONST_VTBL struct __FIAsyncOperationWithProgress_2_UINT32_UINT32Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationWithProgress_2_UINT32_UINT32_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationWithProgress_2_UINT32_UINT32_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationWithProgress_2_UINT32_UINT32_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationWithProgress_2_UINT32_UINT32_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperationWithProgress_2_UINT32_UINT32_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperationWithProgress_2_UINT32_UINT32_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperationWithProgress_2_UINT32_UINT32_put_Progress(This,handler)	\
    ( (This)->lpVtbl -> put_Progress(This,handler) ) 
#define __FIAsyncOperationWithProgress_2_UINT32_UINT32_get_Progress(This,handler)	\
    ( (This)->lpVtbl -> get_Progress(This,handler) ) 
#define __FIAsyncOperationWithProgress_2_UINT32_UINT32_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperationWithProgress_2_UINT32_UINT32_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperationWithProgress_2_UINT32_UINT32_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */



#endif // ____FIAsyncOperationWithProgress_2_UINT32_UINT32_INTERFACE_DEFINED__


#if !defined(____FIAsyncOperationProgressHandler_2_UINT64_UINT64_INTERFACE_DEFINED__)
#define ____FIAsyncOperationProgressHandler_2_UINT64_UINT64_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationProgressHandler_2_UINT64_UINT64 __FIAsyncOperationProgressHandler_2_UINT64_UINT64;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationProgressHandler_2_UINT64_UINT64;

typedef interface __FIAsyncOperationWithProgress_2_UINT64_UINT64 __FIAsyncOperationWithProgress_2_UINT64_UINT64;

typedef struct __FIAsyncOperationProgressHandler_2_UINT64_UINT64Vtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationProgressHandler_2_UINT64_UINT64 * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationProgressHandler_2_UINT64_UINT64 * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationProgressHandler_2_UINT64_UINT64 * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationProgressHandler_2_UINT64_UINT64 * This, /* [in] */ __RPC__in_opt __FIAsyncOperationWithProgress_2_UINT64_UINT64 *asyncInfo, /* [in] */ UINT64 progressInfo);
    END_INTERFACE
} __FIAsyncOperationProgressHandler_2_UINT64_UINT64Vtbl;

interface __FIAsyncOperationProgressHandler_2_UINT64_UINT64
{
    CONST_VTBL struct __FIAsyncOperationProgressHandler_2_UINT64_UINT64Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationProgressHandler_2_UINT64_UINT64_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationProgressHandler_2_UINT64_UINT64_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationProgressHandler_2_UINT64_UINT64_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationProgressHandler_2_UINT64_UINT64_Invoke(This,asyncInfo,progressInfo)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,progressInfo) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationProgressHandler_2_UINT64_UINT64_INTERFACE_DEFINED__


#if !defined(____FIAsyncOperationWithProgressCompletedHandler_2_UINT64_UINT64_INTERFACE_DEFINED__)
#define ____FIAsyncOperationWithProgressCompletedHandler_2_UINT64_UINT64_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationWithProgressCompletedHandler_2_UINT64_UINT64 __FIAsyncOperationWithProgressCompletedHandler_2_UINT64_UINT64;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationWithProgressCompletedHandler_2_UINT64_UINT64;

//  Forward declare the async operation.
typedef interface __FIAsyncOperationWithProgress_2_UINT64_UINT64 __FIAsyncOperationWithProgress_2_UINT64_UINT64;

typedef struct __FIAsyncOperationWithProgressCompletedHandler_2_UINT64_UINT64Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_UINT64_UINT64 * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_UINT64_UINT64 * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_UINT64_UINT64 * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_UINT64_UINT64 * This, /* [in] */ __RPC__in_opt __FIAsyncOperationWithProgress_2_UINT64_UINT64 *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationWithProgressCompletedHandler_2_UINT64_UINT64Vtbl;

interface __FIAsyncOperationWithProgressCompletedHandler_2_UINT64_UINT64
{
    CONST_VTBL struct __FIAsyncOperationWithProgressCompletedHandler_2_UINT64_UINT64Vtbl *lpVtbl;
};



#ifdef COBJMACROS
#define __FIAsyncOperationWithProgressCompletedHandler_2_UINT64_UINT64_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationWithProgressCompletedHandler_2_UINT64_UINT64_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationWithProgressCompletedHandler_2_UINT64_UINT64_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationWithProgressCompletedHandler_2_UINT64_UINT64_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */



#endif // ____FIAsyncOperationWithProgressCompletedHandler_2_UINT64_UINT64_INTERFACE_DEFINED__


#if !defined(____FIAsyncOperationWithProgress_2_UINT64_UINT64_INTERFACE_DEFINED__)
#define ____FIAsyncOperationWithProgress_2_UINT64_UINT64_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationWithProgress_2_UINT64_UINT64 __FIAsyncOperationWithProgress_2_UINT64_UINT64;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationWithProgress_2_UINT64_UINT64;

typedef struct __FIAsyncOperationWithProgress_2_UINT64_UINT64Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationWithProgress_2_UINT64_UINT64 * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationWithProgress_2_UINT64_UINT64 * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationWithProgress_2_UINT64_UINT64 * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperationWithProgress_2_UINT64_UINT64 * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperationWithProgress_2_UINT64_UINT64 * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperationWithProgress_2_UINT64_UINT64 * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Progress )(__RPC__in __FIAsyncOperationWithProgress_2_UINT64_UINT64 * This, /* [in] */ __RPC__in_opt __FIAsyncOperationProgressHandler_2_UINT64_UINT64 *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Progress )(__RPC__in __FIAsyncOperationWithProgress_2_UINT64_UINT64 * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationProgressHandler_2_UINT64_UINT64 **handler);
    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperationWithProgress_2_UINT64_UINT64 * This, /* [in] */ __RPC__in_opt __FIAsyncOperationWithProgressCompletedHandler_2_UINT64_UINT64 *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperationWithProgress_2_UINT64_UINT64 * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationWithProgressCompletedHandler_2_UINT64_UINT64 **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperationWithProgress_2_UINT64_UINT64 * This, /* [retval][out] */ __RPC__deref_out_opt __int64 *results);
    END_INTERFACE
} __FIAsyncOperationWithProgress_2_UINT64_UINT64Vtbl;

interface __FIAsyncOperationWithProgress_2_UINT64_UINT64
{
    CONST_VTBL struct __FIAsyncOperationWithProgress_2_UINT64_UINT64Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationWithProgress_2_UINT64_UINT64_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationWithProgress_2_UINT64_UINT64_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationWithProgress_2_UINT64_UINT64_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationWithProgress_2_UINT64_UINT64_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperationWithProgress_2_UINT64_UINT64_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperationWithProgress_2_UINT64_UINT64_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperationWithProgress_2_UINT64_UINT64_put_Progress(This,handler)	\
    ( (This)->lpVtbl -> put_Progress(This,handler) ) 
#define __FIAsyncOperationWithProgress_2_UINT64_UINT64_get_Progress(This,handler)	\
    ( (This)->lpVtbl -> get_Progress(This,handler) ) 
#define __FIAsyncOperationWithProgress_2_UINT64_UINT64_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperationWithProgress_2_UINT64_UINT64_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperationWithProgress_2_UINT64_UINT64_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */



#endif // ____FIAsyncOperationWithProgress_2_UINT64_UINT64_INTERFACE_DEFINED__




typedef struct __x_ABI_CWindows_CFoundation_CDateTime __x_ABI_CWindows_CFoundation_CDateTime;

#ifndef ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIClosable __x_ABI_CWindows_CFoundation_CIClosable;

#endif // ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CFoundation_CIMemoryBuffer_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIMemoryBuffer_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIMemoryBuffer __x_ABI_CWindows_CFoundation_CIMemoryBuffer;

#endif // ____x_ABI_CWindows_CFoundation_CIMemoryBuffer_FWD_DEFINED__




typedef struct __x_ABI_CWindows_CFoundation_CTimeSpan __x_ABI_CWindows_CFoundation_CTimeSpan;


#ifndef ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIUriRuntimeClass __x_ABI_CWindows_CFoundation_CIUriRuntimeClass;

#endif // ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__





typedef enum __x_ABI_CWindows_CStorage_CFileAccessMode __x_ABI_CWindows_CStorage_CFileAccessMode;

#ifndef ____x_ABI_CWindows_CStorage_CIStorageFile_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CIStorageFile_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CIStorageFile __x_ABI_CWindows_CStorage_CIStorageFile;

#endif // ____x_ABI_CWindows_CStorage_CIStorageFile_FWD_DEFINED__



typedef enum __x_ABI_CWindows_CStorage_CStorageOpenOptions __x_ABI_CWindows_CStorage_CStorageOpenOptions;




#ifndef ____x_ABI_CWindows_CSystem_CIUser_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CIUser_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CIUser __x_ABI_CWindows_CSystem_CIUser;

#endif // ____x_ABI_CWindows_CSystem_CIUser_FWD_DEFINED__





typedef enum __x_ABI_CWindows_CStorage_CStreams_CByteOrder __x_ABI_CWindows_CStorage_CStreams_CByteOrder;


typedef enum __x_ABI_CWindows_CStorage_CStreams_CFileOpenDisposition __x_ABI_CWindows_CStorage_CStreams_CFileOpenDisposition;


typedef enum __x_ABI_CWindows_CStorage_CStreams_CInputStreamOptions __x_ABI_CWindows_CStorage_CStreams_CInputStreamOptions;


typedef enum __x_ABI_CWindows_CStorage_CStreams_CUnicodeEncoding __x_ABI_CWindows_CStorage_CStreams_CUnicodeEncoding;









































/*
 *
 * Struct Windows.Storage.Streams.ByteOrder
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CStorage_CStreams_CByteOrder
{
    ByteOrder_LittleEndian = 0,
    ByteOrder_BigEndian = 1,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Storage.Streams.FileOpenDisposition
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CStorage_CStreams_CFileOpenDisposition
{
    FileOpenDisposition_OpenExisting = 0,
    FileOpenDisposition_OpenAlways = 1,
    FileOpenDisposition_CreateNew = 2,
    FileOpenDisposition_CreateAlways = 3,
    FileOpenDisposition_TruncateExisting = 4,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Struct Windows.Storage.Streams.InputStreamOptions
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, flags, contract] */
enum __x_ABI_CWindows_CStorage_CStreams_CInputStreamOptions
{
    InputStreamOptions_None = 0,
    InputStreamOptions_Partial = 0x1,
    InputStreamOptions_ReadAhead = 0x2,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Storage.Streams.UnicodeEncoding
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CStorage_CStreams_CUnicodeEncoding
{
    UnicodeEncoding_Utf8 = 0,
    UnicodeEncoding_Utf16LE = 1,
    UnicodeEncoding_Utf16BE = 2,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Storage.Streams.IBuffer
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CStorage_CStreams_CIBuffer_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CStorage_CStreams_CIBuffer_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Streams_IBuffer[] = L"Windows.Storage.Streams.IBuffer";
/* [object, uuid("905A0FE0-BC53-11DF-8C49-001E4FC686DA"), contract] */
typedef struct __x_ABI_CWindows_CStorage_CStreams_CIBufferVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CStreams_CIBuffer * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CStreams_CIBuffer * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CStreams_CIBuffer * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CStreams_CIBuffer * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CStreams_CIBuffer * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CStreams_CIBuffer * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Capacity )(
        __x_ABI_CWindows_CStorage_CStreams_CIBuffer * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Length )(
        __x_ABI_CWindows_CStorage_CStreams_CIBuffer * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Length )(
        __x_ABI_CWindows_CStorage_CStreams_CIBuffer * This,
        /* [in] */UINT32 value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CStorage_CStreams_CIBufferVtbl;

interface __x_ABI_CWindows_CStorage_CStreams_CIBuffer
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CStreams_CIBufferVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CStorage_CStreams_CIBuffer_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CStorage_CStreams_CIBuffer_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CStorage_CStreams_CIBuffer_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CStorage_CStreams_CIBuffer_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CStorage_CStreams_CIBuffer_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CStorage_CStreams_CIBuffer_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CStorage_CStreams_CIBuffer_get_Capacity(This,value) \
    ( (This)->lpVtbl->get_Capacity(This,value) )

#define __x_ABI_CWindows_CStorage_CStreams_CIBuffer_get_Length(This,value) \
    ( (This)->lpVtbl->get_Length(This,value) )

#define __x_ABI_CWindows_CStorage_CStreams_CIBuffer_put_Length(This,value) \
    ( (This)->lpVtbl->put_Length(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CStreams_CIBuffer;
#endif /* !defined(____x_ABI_CWindows_CStorage_CStreams_CIBuffer_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Storage.Streams.IBufferFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Storage.Streams.Buffer
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CStorage_CStreams_CIBufferFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CStorage_CStreams_CIBufferFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Streams_IBufferFactory[] = L"Windows.Storage.Streams.IBufferFactory";
/* [object, uuid("71AF914D-C10F-484B-BC50-14BC623B3A27"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CStorage_CStreams_CIBufferFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CStreams_CIBufferFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CStreams_CIBufferFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CStreams_CIBufferFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CStreams_CIBufferFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CStreams_CIBufferFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CStreams_CIBufferFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CStorage_CStreams_CIBufferFactory * This,
        /* [range(0, 2147483647), in] */__RPC__in_range(0,0x7fffffff) UINT32 capacity,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CStorage_CStreams_CIBufferFactoryVtbl;

interface __x_ABI_CWindows_CStorage_CStreams_CIBufferFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CStreams_CIBufferFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CStorage_CStreams_CIBufferFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CStorage_CStreams_CIBufferFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CStorage_CStreams_CIBufferFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CStorage_CStreams_CIBufferFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CStorage_CStreams_CIBufferFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CStorage_CStreams_CIBufferFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CStorage_CStreams_CIBufferFactory_Create(This,capacity,value) \
    ( (This)->lpVtbl->Create(This,capacity,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CStreams_CIBufferFactory;
#endif /* !defined(____x_ABI_CWindows_CStorage_CStreams_CIBufferFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Storage.Streams.IBufferStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Storage.Streams.Buffer
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CStorage_CStreams_CIBufferStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CStorage_CStreams_CIBufferStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Streams_IBufferStatics[] = L"Windows.Storage.Streams.IBufferStatics";
/* [object, uuid("E901E65B-D716-475A-A90A-AF7229B1E741"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CStorage_CStreams_CIBufferStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CStreams_CIBufferStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CStreams_CIBufferStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CStreams_CIBufferStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CStreams_CIBufferStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CStreams_CIBufferStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CStreams_CIBufferStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateCopyFromMemoryBuffer )(
        __x_ABI_CWindows_CStorage_CStreams_CIBufferStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIMemoryBuffer * input,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateMemoryBufferOverIBuffer )(
        __x_ABI_CWindows_CStorage_CStreams_CIBufferStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * input,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIMemoryBuffer * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CStorage_CStreams_CIBufferStaticsVtbl;

interface __x_ABI_CWindows_CStorage_CStreams_CIBufferStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CStreams_CIBufferStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CStorage_CStreams_CIBufferStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CStorage_CStreams_CIBufferStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CStorage_CStreams_CIBufferStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CStorage_CStreams_CIBufferStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CStorage_CStreams_CIBufferStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CStorage_CStreams_CIBufferStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CStorage_CStreams_CIBufferStatics_CreateCopyFromMemoryBuffer(This,input,value) \
    ( (This)->lpVtbl->CreateCopyFromMemoryBuffer(This,input,value) )

#define __x_ABI_CWindows_CStorage_CStreams_CIBufferStatics_CreateMemoryBufferOverIBuffer(This,input,value) \
    ( (This)->lpVtbl->CreateMemoryBufferOverIBuffer(This,input,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CStreams_CIBufferStatics;
#endif /* !defined(____x_ABI_CWindows_CStorage_CStreams_CIBufferStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Storage.Streams.IContentTypeProvider
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CStorage_CStreams_CIContentTypeProvider_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CStorage_CStreams_CIContentTypeProvider_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Streams_IContentTypeProvider[] = L"Windows.Storage.Streams.IContentTypeProvider";
/* [object, uuid("97D098A5-3B99-4DE9-88A5-E11D2F50C795"), contract] */
typedef struct __x_ABI_CWindows_CStorage_CStreams_CIContentTypeProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CStreams_CIContentTypeProvider * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CStreams_CIContentTypeProvider * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CStreams_CIContentTypeProvider * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CStreams_CIContentTypeProvider * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CStreams_CIContentTypeProvider * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CStreams_CIContentTypeProvider * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ContentType )(
        __x_ABI_CWindows_CStorage_CStreams_CIContentTypeProvider * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CStorage_CStreams_CIContentTypeProviderVtbl;

interface __x_ABI_CWindows_CStorage_CStreams_CIContentTypeProvider
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CStreams_CIContentTypeProviderVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CStorage_CStreams_CIContentTypeProvider_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CStorage_CStreams_CIContentTypeProvider_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CStorage_CStreams_CIContentTypeProvider_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CStorage_CStreams_CIContentTypeProvider_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CStorage_CStreams_CIContentTypeProvider_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CStorage_CStreams_CIContentTypeProvider_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CStorage_CStreams_CIContentTypeProvider_get_ContentType(This,value) \
    ( (This)->lpVtbl->get_ContentType(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CStreams_CIContentTypeProvider;
#endif /* !defined(____x_ABI_CWindows_CStorage_CStreams_CIContentTypeProvider_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Storage.Streams.IDataReader
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CStorage_CStreams_CIDataReader_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CStorage_CStreams_CIDataReader_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Streams_IDataReader[] = L"Windows.Storage.Streams.IDataReader";
/* [object, uuid("E2B50029-B4C1-4314-A4B8-FB813A2F275E"), contract] */
typedef struct __x_ABI_CWindows_CStorage_CStreams_CIDataReaderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CStreams_CIDataReader * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CStreams_CIDataReader * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CStreams_CIDataReader * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CStreams_CIDataReader * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CStreams_CIDataReader * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CStreams_CIDataReader * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_UnconsumedBufferLength )(
        __x_ABI_CWindows_CStorage_CStreams_CIDataReader * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_UnicodeEncoding )(
        __x_ABI_CWindows_CStorage_CStreams_CIDataReader * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CStorage_CStreams_CUnicodeEncoding * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_UnicodeEncoding )(
        __x_ABI_CWindows_CStorage_CStreams_CIDataReader * This,
        /* [in] */__x_ABI_CWindows_CStorage_CStreams_CUnicodeEncoding value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ByteOrder )(
        __x_ABI_CWindows_CStorage_CStreams_CIDataReader * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CStorage_CStreams_CByteOrder * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ByteOrder )(
        __x_ABI_CWindows_CStorage_CStreams_CIDataReader * This,
        /* [in] */__x_ABI_CWindows_CStorage_CStreams_CByteOrder value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_InputStreamOptions )(
        __x_ABI_CWindows_CStorage_CStreams_CIDataReader * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CStorage_CStreams_CInputStreamOptions * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_InputStreamOptions )(
        __x_ABI_CWindows_CStorage_CStreams_CIDataReader * This,
        /* [in] */__x_ABI_CWindows_CStorage_CStreams_CInputStreamOptions value
        );
    HRESULT ( STDMETHODCALLTYPE *ReadByte )(
        __x_ABI_CWindows_CStorage_CStreams_CIDataReader * This,
        /* [retval, out] */__RPC__out BYTE * value
        );
    HRESULT ( STDMETHODCALLTYPE *ReadBytes )(
        __x_ABI_CWindows_CStorage_CStreams_CIDataReader * This,
        /* [in] */UINT32 __valueSize,
        /* [size_is(__valueSize), out] */__RPC__out_ecount_full(__valueSize) BYTE * value
        );
    HRESULT ( STDMETHODCALLTYPE *ReadBuffer )(
        __x_ABI_CWindows_CStorage_CStreams_CIDataReader * This,
        /* [in] */UINT32 length,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * buffer
        );
    HRESULT ( STDMETHODCALLTYPE *ReadBoolean )(
        __x_ABI_CWindows_CStorage_CStreams_CIDataReader * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *ReadGuid )(
        __x_ABI_CWindows_CStorage_CStreams_CIDataReader * This,
        /* [retval, out] */__RPC__out GUID * value
        );
    HRESULT ( STDMETHODCALLTYPE *ReadInt16 )(
        __x_ABI_CWindows_CStorage_CStreams_CIDataReader * This,
        /* [retval, out] */__RPC__out INT16 * value
        );
    HRESULT ( STDMETHODCALLTYPE *ReadInt32 )(
        __x_ABI_CWindows_CStorage_CStreams_CIDataReader * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    HRESULT ( STDMETHODCALLTYPE *ReadInt64 )(
        __x_ABI_CWindows_CStorage_CStreams_CIDataReader * This,
        /* [retval, out] */__RPC__out INT64 * value
        );
    HRESULT ( STDMETHODCALLTYPE *ReadUInt16 )(
        __x_ABI_CWindows_CStorage_CStreams_CIDataReader * This,
        /* [retval, out] */__RPC__out UINT16 * value
        );
    HRESULT ( STDMETHODCALLTYPE *ReadUInt32 )(
        __x_ABI_CWindows_CStorage_CStreams_CIDataReader * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    HRESULT ( STDMETHODCALLTYPE *ReadUInt64 )(
        __x_ABI_CWindows_CStorage_CStreams_CIDataReader * This,
        /* [retval, out] */__RPC__out UINT64 * value
        );
    HRESULT ( STDMETHODCALLTYPE *ReadSingle )(
        __x_ABI_CWindows_CStorage_CStreams_CIDataReader * This,
        /* [retval, out] */__RPC__out FLOAT * value
        );
    HRESULT ( STDMETHODCALLTYPE *ReadDouble )(
        __x_ABI_CWindows_CStorage_CStreams_CIDataReader * This,
        /* [retval, out] */__RPC__out DOUBLE * value
        );
    HRESULT ( STDMETHODCALLTYPE *ReadString )(
        __x_ABI_CWindows_CStorage_CStreams_CIDataReader * This,
        /* [in] */UINT32 codeUnitCount,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *ReadDateTime )(
        __x_ABI_CWindows_CStorage_CStreams_CIDataReader * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
    HRESULT ( STDMETHODCALLTYPE *ReadTimeSpan )(
        __x_ABI_CWindows_CStorage_CStreams_CIDataReader * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
    HRESULT ( STDMETHODCALLTYPE *LoadAsync )(
        __x_ABI_CWindows_CStorage_CStreams_CIDataReader * This,
        /* [in] */UINT32 count,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_UINT32 * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *DetachBuffer )(
        __x_ABI_CWindows_CStorage_CStreams_CIDataReader * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * buffer
        );
    HRESULT ( STDMETHODCALLTYPE *DetachStream )(
        __x_ABI_CWindows_CStorage_CStreams_CIDataReader * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIInputStream * * stream
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CStorage_CStreams_CIDataReaderVtbl;

interface __x_ABI_CWindows_CStorage_CStreams_CIDataReader
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CStreams_CIDataReaderVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CStorage_CStreams_CIDataReader_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CStorage_CStreams_CIDataReader_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CStorage_CStreams_CIDataReader_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CStorage_CStreams_CIDataReader_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CStorage_CStreams_CIDataReader_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CStorage_CStreams_CIDataReader_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CStorage_CStreams_CIDataReader_get_UnconsumedBufferLength(This,value) \
    ( (This)->lpVtbl->get_UnconsumedBufferLength(This,value) )

#define __x_ABI_CWindows_CStorage_CStreams_CIDataReader_get_UnicodeEncoding(This,value) \
    ( (This)->lpVtbl->get_UnicodeEncoding(This,value) )

#define __x_ABI_CWindows_CStorage_CStreams_CIDataReader_put_UnicodeEncoding(This,value) \
    ( (This)->lpVtbl->put_UnicodeEncoding(This,value) )

#define __x_ABI_CWindows_CStorage_CStreams_CIDataReader_get_ByteOrder(This,value) \
    ( (This)->lpVtbl->get_ByteOrder(This,value) )

#define __x_ABI_CWindows_CStorage_CStreams_CIDataReader_put_ByteOrder(This,value) \
    ( (This)->lpVtbl->put_ByteOrder(This,value) )

#define __x_ABI_CWindows_CStorage_CStreams_CIDataReader_get_InputStreamOptions(This,value) \
    ( (This)->lpVtbl->get_InputStreamOptions(This,value) )

#define __x_ABI_CWindows_CStorage_CStreams_CIDataReader_put_InputStreamOptions(This,value) \
    ( (This)->lpVtbl->put_InputStreamOptions(This,value) )

#define __x_ABI_CWindows_CStorage_CStreams_CIDataReader_ReadByte(This,value) \
    ( (This)->lpVtbl->ReadByte(This,value) )

#define __x_ABI_CWindows_CStorage_CStreams_CIDataReader_ReadBytes(This,__valueSize,value) \
    ( (This)->lpVtbl->ReadBytes(This,__valueSize,value) )

#define __x_ABI_CWindows_CStorage_CStreams_CIDataReader_ReadBuffer(This,length,buffer) \
    ( (This)->lpVtbl->ReadBuffer(This,length,buffer) )

#define __x_ABI_CWindows_CStorage_CStreams_CIDataReader_ReadBoolean(This,value) \
    ( (This)->lpVtbl->ReadBoolean(This,value) )

#define __x_ABI_CWindows_CStorage_CStreams_CIDataReader_ReadGuid(This,value) \
    ( (This)->lpVtbl->ReadGuid(This,value) )

#define __x_ABI_CWindows_CStorage_CStreams_CIDataReader_ReadInt16(This,value) \
    ( (This)->lpVtbl->ReadInt16(This,value) )

#define __x_ABI_CWindows_CStorage_CStreams_CIDataReader_ReadInt32(This,value) \
    ( (This)->lpVtbl->ReadInt32(This,value) )

#define __x_ABI_CWindows_CStorage_CStreams_CIDataReader_ReadInt64(This,value) \
    ( (This)->lpVtbl->ReadInt64(This,value) )

#define __x_ABI_CWindows_CStorage_CStreams_CIDataReader_ReadUInt16(This,value) \
    ( (This)->lpVtbl->ReadUInt16(This,value) )

#define __x_ABI_CWindows_CStorage_CStreams_CIDataReader_ReadUInt32(This,value) \
    ( (This)->lpVtbl->ReadUInt32(This,value) )

#define __x_ABI_CWindows_CStorage_CStreams_CIDataReader_ReadUInt64(This,value) \
    ( (This)->lpVtbl->ReadUInt64(This,value) )

#define __x_ABI_CWindows_CStorage_CStreams_CIDataReader_ReadSingle(This,value) \
    ( (This)->lpVtbl->ReadSingle(This,value) )

#define __x_ABI_CWindows_CStorage_CStreams_CIDataReader_ReadDouble(This,value) \
    ( (This)->lpVtbl->ReadDouble(This,value) )

#define __x_ABI_CWindows_CStorage_CStreams_CIDataReader_ReadString(This,codeUnitCount,value) \
    ( (This)->lpVtbl->ReadString(This,codeUnitCount,value) )

#define __x_ABI_CWindows_CStorage_CStreams_CIDataReader_ReadDateTime(This,value) \
    ( (This)->lpVtbl->ReadDateTime(This,value) )

#define __x_ABI_CWindows_CStorage_CStreams_CIDataReader_ReadTimeSpan(This,value) \
    ( (This)->lpVtbl->ReadTimeSpan(This,value) )

#define __x_ABI_CWindows_CStorage_CStreams_CIDataReader_LoadAsync(This,count,operation) \
    ( (This)->lpVtbl->LoadAsync(This,count,operation) )

#define __x_ABI_CWindows_CStorage_CStreams_CIDataReader_DetachBuffer(This,buffer) \
    ( (This)->lpVtbl->DetachBuffer(This,buffer) )

#define __x_ABI_CWindows_CStorage_CStreams_CIDataReader_DetachStream(This,stream) \
    ( (This)->lpVtbl->DetachStream(This,stream) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CStreams_CIDataReader;
#endif /* !defined(____x_ABI_CWindows_CStorage_CStreams_CIDataReader_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Storage.Streams.IDataReaderFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Storage.Streams.DataReader
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CStorage_CStreams_CIDataReaderFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CStorage_CStreams_CIDataReaderFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Streams_IDataReaderFactory[] = L"Windows.Storage.Streams.IDataReaderFactory";
/* [object, uuid("D7527847-57DA-4E15-914C-06806699A098"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CStorage_CStreams_CIDataReaderFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CStreams_CIDataReaderFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CStreams_CIDataReaderFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CStreams_CIDataReaderFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CStreams_CIDataReaderFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CStreams_CIDataReaderFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CStreams_CIDataReaderFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateDataReader )(
        __x_ABI_CWindows_CStorage_CStreams_CIDataReaderFactory * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIInputStream * inputStream,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIDataReader * * dataReader
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CStorage_CStreams_CIDataReaderFactoryVtbl;

interface __x_ABI_CWindows_CStorage_CStreams_CIDataReaderFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CStreams_CIDataReaderFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CStorage_CStreams_CIDataReaderFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CStorage_CStreams_CIDataReaderFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CStorage_CStreams_CIDataReaderFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CStorage_CStreams_CIDataReaderFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CStorage_CStreams_CIDataReaderFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CStorage_CStreams_CIDataReaderFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CStorage_CStreams_CIDataReaderFactory_CreateDataReader(This,inputStream,dataReader) \
    ( (This)->lpVtbl->CreateDataReader(This,inputStream,dataReader) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CStreams_CIDataReaderFactory;
#endif /* !defined(____x_ABI_CWindows_CStorage_CStreams_CIDataReaderFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Storage.Streams.IDataReaderStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Storage.Streams.DataReader
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CStorage_CStreams_CIDataReaderStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CStorage_CStreams_CIDataReaderStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Streams_IDataReaderStatics[] = L"Windows.Storage.Streams.IDataReaderStatics";
/* [object, uuid("11FCBFC8-F93A-471B-B121-F379E349313C"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CStorage_CStreams_CIDataReaderStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CStreams_CIDataReaderStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CStreams_CIDataReaderStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CStreams_CIDataReaderStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CStreams_CIDataReaderStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CStreams_CIDataReaderStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CStreams_CIDataReaderStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *FromBuffer )(
        __x_ABI_CWindows_CStorage_CStreams_CIDataReaderStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * buffer,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIDataReader * * dataReader
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CStorage_CStreams_CIDataReaderStaticsVtbl;

interface __x_ABI_CWindows_CStorage_CStreams_CIDataReaderStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CStreams_CIDataReaderStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CStorage_CStreams_CIDataReaderStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CStorage_CStreams_CIDataReaderStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CStorage_CStreams_CIDataReaderStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CStorage_CStreams_CIDataReaderStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CStorage_CStreams_CIDataReaderStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CStorage_CStreams_CIDataReaderStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CStorage_CStreams_CIDataReaderStatics_FromBuffer(This,buffer,dataReader) \
    ( (This)->lpVtbl->FromBuffer(This,buffer,dataReader) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CStreams_CIDataReaderStatics;
#endif /* !defined(____x_ABI_CWindows_CStorage_CStreams_CIDataReaderStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Storage.Streams.IDataWriter
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CStorage_CStreams_CIDataWriter_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CStorage_CStreams_CIDataWriter_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Streams_IDataWriter[] = L"Windows.Storage.Streams.IDataWriter";
/* [object, uuid("64B89265-D341-4922-B38A-DD4AF8808C4E"), contract] */
typedef struct __x_ABI_CWindows_CStorage_CStreams_CIDataWriterVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CStreams_CIDataWriter * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CStreams_CIDataWriter * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CStreams_CIDataWriter * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CStreams_CIDataWriter * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CStreams_CIDataWriter * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CStreams_CIDataWriter * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_UnstoredBufferLength )(
        __x_ABI_CWindows_CStorage_CStreams_CIDataWriter * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_UnicodeEncoding )(
        __x_ABI_CWindows_CStorage_CStreams_CIDataWriter * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CStorage_CStreams_CUnicodeEncoding * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_UnicodeEncoding )(
        __x_ABI_CWindows_CStorage_CStreams_CIDataWriter * This,
        /* [in] */__x_ABI_CWindows_CStorage_CStreams_CUnicodeEncoding value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ByteOrder )(
        __x_ABI_CWindows_CStorage_CStreams_CIDataWriter * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CStorage_CStreams_CByteOrder * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ByteOrder )(
        __x_ABI_CWindows_CStorage_CStreams_CIDataWriter * This,
        /* [in] */__x_ABI_CWindows_CStorage_CStreams_CByteOrder value
        );
    HRESULT ( STDMETHODCALLTYPE *WriteByte )(
        __x_ABI_CWindows_CStorage_CStreams_CIDataWriter * This,
        /* [in] */BYTE value
        );
    HRESULT ( STDMETHODCALLTYPE *WriteBytes )(
        __x_ABI_CWindows_CStorage_CStreams_CIDataWriter * This,
        /* [in] */UINT32 __valueSize,
        /* [size_is(__valueSize), in] */__RPC__in_ecount_full(__valueSize) BYTE * value
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *WriteBuffer )(
        __x_ABI_CWindows_CStorage_CStreams_CIDataWriter * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * buffer
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *WriteBufferRange )(
        __x_ABI_CWindows_CStorage_CStreams_CIDataWriter * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * buffer,
        /* [in] */UINT32 start,
        /* [in] */UINT32 count
        );
    HRESULT ( STDMETHODCALLTYPE *WriteBoolean )(
        __x_ABI_CWindows_CStorage_CStreams_CIDataWriter * This,
        /* [in] */boolean value
        );
    HRESULT ( STDMETHODCALLTYPE *WriteGuid )(
        __x_ABI_CWindows_CStorage_CStreams_CIDataWriter * This,
        /* [in] */GUID value
        );
    HRESULT ( STDMETHODCALLTYPE *WriteInt16 )(
        __x_ABI_CWindows_CStorage_CStreams_CIDataWriter * This,
        /* [in] */INT16 value
        );
    HRESULT ( STDMETHODCALLTYPE *WriteInt32 )(
        __x_ABI_CWindows_CStorage_CStreams_CIDataWriter * This,
        /* [in] */INT32 value
        );
    HRESULT ( STDMETHODCALLTYPE *WriteInt64 )(
        __x_ABI_CWindows_CStorage_CStreams_CIDataWriter * This,
        /* [in] */INT64 value
        );
    HRESULT ( STDMETHODCALLTYPE *WriteUInt16 )(
        __x_ABI_CWindows_CStorage_CStreams_CIDataWriter * This,
        /* [in] */UINT16 value
        );
    HRESULT ( STDMETHODCALLTYPE *WriteUInt32 )(
        __x_ABI_CWindows_CStorage_CStreams_CIDataWriter * This,
        /* [in] */UINT32 value
        );
    HRESULT ( STDMETHODCALLTYPE *WriteUInt64 )(
        __x_ABI_CWindows_CStorage_CStreams_CIDataWriter * This,
        /* [in] */UINT64 value
        );
    HRESULT ( STDMETHODCALLTYPE *WriteSingle )(
        __x_ABI_CWindows_CStorage_CStreams_CIDataWriter * This,
        /* [in] */FLOAT value
        );
    HRESULT ( STDMETHODCALLTYPE *WriteDouble )(
        __x_ABI_CWindows_CStorage_CStreams_CIDataWriter * This,
        /* [in] */DOUBLE value
        );
    HRESULT ( STDMETHODCALLTYPE *WriteDateTime )(
        __x_ABI_CWindows_CStorage_CStreams_CIDataWriter * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CDateTime value
        );
    HRESULT ( STDMETHODCALLTYPE *WriteTimeSpan )(
        __x_ABI_CWindows_CStorage_CStreams_CIDataWriter * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CTimeSpan value
        );
    HRESULT ( STDMETHODCALLTYPE *WriteString )(
        __x_ABI_CWindows_CStorage_CStreams_CIDataWriter * This,
        /* [in] */__RPC__in HSTRING value,
        /* [retval, out] */__RPC__out UINT32 * codeUnitCount
        );
    HRESULT ( STDMETHODCALLTYPE *MeasureString )(
        __x_ABI_CWindows_CStorage_CStreams_CIDataWriter * This,
        /* [in] */__RPC__in HSTRING value,
        /* [retval, out] */__RPC__out UINT32 * codeUnitCount
        );
    HRESULT ( STDMETHODCALLTYPE *StoreAsync )(
        __x_ABI_CWindows_CStorage_CStreams_CIDataWriter * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_UINT32 * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *FlushAsync )(
        __x_ABI_CWindows_CStorage_CStreams_CIDataWriter * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *DetachBuffer )(
        __x_ABI_CWindows_CStorage_CStreams_CIDataWriter * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * buffer
        );
    HRESULT ( STDMETHODCALLTYPE *DetachStream )(
        __x_ABI_CWindows_CStorage_CStreams_CIDataWriter * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIOutputStream * * outputStream
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CStorage_CStreams_CIDataWriterVtbl;

interface __x_ABI_CWindows_CStorage_CStreams_CIDataWriter
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CStreams_CIDataWriterVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CStorage_CStreams_CIDataWriter_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CStorage_CStreams_CIDataWriter_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CStorage_CStreams_CIDataWriter_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CStorage_CStreams_CIDataWriter_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CStorage_CStreams_CIDataWriter_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CStorage_CStreams_CIDataWriter_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CStorage_CStreams_CIDataWriter_get_UnstoredBufferLength(This,value) \
    ( (This)->lpVtbl->get_UnstoredBufferLength(This,value) )

#define __x_ABI_CWindows_CStorage_CStreams_CIDataWriter_get_UnicodeEncoding(This,value) \
    ( (This)->lpVtbl->get_UnicodeEncoding(This,value) )

#define __x_ABI_CWindows_CStorage_CStreams_CIDataWriter_put_UnicodeEncoding(This,value) \
    ( (This)->lpVtbl->put_UnicodeEncoding(This,value) )

#define __x_ABI_CWindows_CStorage_CStreams_CIDataWriter_get_ByteOrder(This,value) \
    ( (This)->lpVtbl->get_ByteOrder(This,value) )

#define __x_ABI_CWindows_CStorage_CStreams_CIDataWriter_put_ByteOrder(This,value) \
    ( (This)->lpVtbl->put_ByteOrder(This,value) )

#define __x_ABI_CWindows_CStorage_CStreams_CIDataWriter_WriteByte(This,value) \
    ( (This)->lpVtbl->WriteByte(This,value) )

#define __x_ABI_CWindows_CStorage_CStreams_CIDataWriter_WriteBytes(This,__valueSize,value) \
    ( (This)->lpVtbl->WriteBytes(This,__valueSize,value) )

#define __x_ABI_CWindows_CStorage_CStreams_CIDataWriter_WriteBuffer(This,buffer) \
    ( (This)->lpVtbl->WriteBuffer(This,buffer) )

#define __x_ABI_CWindows_CStorage_CStreams_CIDataWriter_WriteBufferRange(This,buffer,start,count) \
    ( (This)->lpVtbl->WriteBufferRange(This,buffer,start,count) )

#define __x_ABI_CWindows_CStorage_CStreams_CIDataWriter_WriteBoolean(This,value) \
    ( (This)->lpVtbl->WriteBoolean(This,value) )

#define __x_ABI_CWindows_CStorage_CStreams_CIDataWriter_WriteGuid(This,value) \
    ( (This)->lpVtbl->WriteGuid(This,value) )

#define __x_ABI_CWindows_CStorage_CStreams_CIDataWriter_WriteInt16(This,value) \
    ( (This)->lpVtbl->WriteInt16(This,value) )

#define __x_ABI_CWindows_CStorage_CStreams_CIDataWriter_WriteInt32(This,value) \
    ( (This)->lpVtbl->WriteInt32(This,value) )

#define __x_ABI_CWindows_CStorage_CStreams_CIDataWriter_WriteInt64(This,value) \
    ( (This)->lpVtbl->WriteInt64(This,value) )

#define __x_ABI_CWindows_CStorage_CStreams_CIDataWriter_WriteUInt16(This,value) \
    ( (This)->lpVtbl->WriteUInt16(This,value) )

#define __x_ABI_CWindows_CStorage_CStreams_CIDataWriter_WriteUInt32(This,value) \
    ( (This)->lpVtbl->WriteUInt32(This,value) )

#define __x_ABI_CWindows_CStorage_CStreams_CIDataWriter_WriteUInt64(This,value) \
    ( (This)->lpVtbl->WriteUInt64(This,value) )

#define __x_ABI_CWindows_CStorage_CStreams_CIDataWriter_WriteSingle(This,value) \
    ( (This)->lpVtbl->WriteSingle(This,value) )

#define __x_ABI_CWindows_CStorage_CStreams_CIDataWriter_WriteDouble(This,value) \
    ( (This)->lpVtbl->WriteDouble(This,value) )

#define __x_ABI_CWindows_CStorage_CStreams_CIDataWriter_WriteDateTime(This,value) \
    ( (This)->lpVtbl->WriteDateTime(This,value) )

#define __x_ABI_CWindows_CStorage_CStreams_CIDataWriter_WriteTimeSpan(This,value) \
    ( (This)->lpVtbl->WriteTimeSpan(This,value) )

#define __x_ABI_CWindows_CStorage_CStreams_CIDataWriter_WriteString(This,value,codeUnitCount) \
    ( (This)->lpVtbl->WriteString(This,value,codeUnitCount) )

#define __x_ABI_CWindows_CStorage_CStreams_CIDataWriter_MeasureString(This,value,codeUnitCount) \
    ( (This)->lpVtbl->MeasureString(This,value,codeUnitCount) )

#define __x_ABI_CWindows_CStorage_CStreams_CIDataWriter_StoreAsync(This,operation) \
    ( (This)->lpVtbl->StoreAsync(This,operation) )

#define __x_ABI_CWindows_CStorage_CStreams_CIDataWriter_FlushAsync(This,operation) \
    ( (This)->lpVtbl->FlushAsync(This,operation) )

#define __x_ABI_CWindows_CStorage_CStreams_CIDataWriter_DetachBuffer(This,buffer) \
    ( (This)->lpVtbl->DetachBuffer(This,buffer) )

#define __x_ABI_CWindows_CStorage_CStreams_CIDataWriter_DetachStream(This,outputStream) \
    ( (This)->lpVtbl->DetachStream(This,outputStream) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CStreams_CIDataWriter;
#endif /* !defined(____x_ABI_CWindows_CStorage_CStreams_CIDataWriter_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Storage.Streams.IDataWriterFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Storage.Streams.DataWriter
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CStorage_CStreams_CIDataWriterFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CStorage_CStreams_CIDataWriterFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Streams_IDataWriterFactory[] = L"Windows.Storage.Streams.IDataWriterFactory";
/* [object, uuid("338C67C2-8B84-4C2B-9C50-7B8767847A1F"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CStorage_CStreams_CIDataWriterFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CStreams_CIDataWriterFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CStreams_CIDataWriterFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CStreams_CIDataWriterFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CStreams_CIDataWriterFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CStreams_CIDataWriterFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CStreams_CIDataWriterFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateDataWriter )(
        __x_ABI_CWindows_CStorage_CStreams_CIDataWriterFactory * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIOutputStream * outputStream,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIDataWriter * * dataWriter
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CStorage_CStreams_CIDataWriterFactoryVtbl;

interface __x_ABI_CWindows_CStorage_CStreams_CIDataWriterFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CStreams_CIDataWriterFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CStorage_CStreams_CIDataWriterFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CStorage_CStreams_CIDataWriterFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CStorage_CStreams_CIDataWriterFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CStorage_CStreams_CIDataWriterFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CStorage_CStreams_CIDataWriterFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CStorage_CStreams_CIDataWriterFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CStorage_CStreams_CIDataWriterFactory_CreateDataWriter(This,outputStream,dataWriter) \
    ( (This)->lpVtbl->CreateDataWriter(This,outputStream,dataWriter) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CStreams_CIDataWriterFactory;
#endif /* !defined(____x_ABI_CWindows_CStorage_CStreams_CIDataWriterFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Storage.Streams.IFileRandomAccessStreamStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.Storage.Streams.FileRandomAccessStream
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CStorage_CStreams_CIFileRandomAccessStreamStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CStorage_CStreams_CIFileRandomAccessStreamStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Streams_IFileRandomAccessStreamStatics[] = L"Windows.Storage.Streams.IFileRandomAccessStreamStatics";
/* [object, uuid("73550107-3B57-4B5D-8345-554D2FC621F0"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CStorage_CStreams_CIFileRandomAccessStreamStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CStreams_CIFileRandomAccessStreamStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CStreams_CIFileRandomAccessStreamStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CStreams_CIFileRandomAccessStreamStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CStreams_CIFileRandomAccessStreamStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CStreams_CIFileRandomAccessStreamStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CStreams_CIFileRandomAccessStreamStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [overload] */HRESULT ( STDMETHODCALLTYPE *OpenAsync )(
        __x_ABI_CWindows_CStorage_CStreams_CIFileRandomAccessStreamStatics * This,
        /* [in] */__RPC__in HSTRING filePath,
        /* [in] */__x_ABI_CWindows_CStorage_CFileAccessMode accessMode,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream * * operation
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *OpenWithOptionsAsync )(
        __x_ABI_CWindows_CStorage_CStreams_CIFileRandomAccessStreamStatics * This,
        /* [in] */__RPC__in HSTRING filePath,
        /* [in] */__x_ABI_CWindows_CStorage_CFileAccessMode accessMode,
        /* [in] */__x_ABI_CWindows_CStorage_CStorageOpenOptions sharingOptions,
        /* [in] */__x_ABI_CWindows_CStorage_CStreams_CFileOpenDisposition openDisposition,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream * * operation
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *OpenTransactedWriteAsync )(
        __x_ABI_CWindows_CStorage_CStreams_CIFileRandomAccessStreamStatics * This,
        /* [in] */__RPC__in HSTRING filePath,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStorageStreamTransaction * * operation
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *OpenTransactedWriteWithOptionsAsync )(
        __x_ABI_CWindows_CStorage_CStreams_CIFileRandomAccessStreamStatics * This,
        /* [in] */__RPC__in HSTRING filePath,
        /* [in] */__x_ABI_CWindows_CStorage_CStorageOpenOptions openOptions,
        /* [in] */__x_ABI_CWindows_CStorage_CStreams_CFileOpenDisposition openDisposition,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStorageStreamTransaction * * operation
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *OpenForUserAsync )(
        __x_ABI_CWindows_CStorage_CStreams_CIFileRandomAccessStreamStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSystem_CIUser * user,
        /* [in] */__RPC__in HSTRING filePath,
        /* [in] */__x_ABI_CWindows_CStorage_CFileAccessMode accessMode,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream * * operation
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *OpenForUserWithOptionsAsync )(
        __x_ABI_CWindows_CStorage_CStreams_CIFileRandomAccessStreamStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSystem_CIUser * user,
        /* [in] */__RPC__in HSTRING filePath,
        /* [in] */__x_ABI_CWindows_CStorage_CFileAccessMode accessMode,
        /* [in] */__x_ABI_CWindows_CStorage_CStorageOpenOptions sharingOptions,
        /* [in] */__x_ABI_CWindows_CStorage_CStreams_CFileOpenDisposition openDisposition,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream * * operation
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *OpenTransactedWriteForUserAsync )(
        __x_ABI_CWindows_CStorage_CStreams_CIFileRandomAccessStreamStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSystem_CIUser * user,
        /* [in] */__RPC__in HSTRING filePath,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStorageStreamTransaction * * operation
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *OpenTransactedWriteForUserWithOptionsAsync )(
        __x_ABI_CWindows_CStorage_CStreams_CIFileRandomAccessStreamStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSystem_CIUser * user,
        /* [in] */__RPC__in HSTRING filePath,
        /* [in] */__x_ABI_CWindows_CStorage_CStorageOpenOptions openOptions,
        /* [in] */__x_ABI_CWindows_CStorage_CStreams_CFileOpenDisposition openDisposition,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStorageStreamTransaction * * operation
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CStorage_CStreams_CIFileRandomAccessStreamStaticsVtbl;

interface __x_ABI_CWindows_CStorage_CStreams_CIFileRandomAccessStreamStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CStreams_CIFileRandomAccessStreamStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CStorage_CStreams_CIFileRandomAccessStreamStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CStorage_CStreams_CIFileRandomAccessStreamStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CStorage_CStreams_CIFileRandomAccessStreamStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CStorage_CStreams_CIFileRandomAccessStreamStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CStorage_CStreams_CIFileRandomAccessStreamStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CStorage_CStreams_CIFileRandomAccessStreamStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CStorage_CStreams_CIFileRandomAccessStreamStatics_OpenAsync(This,filePath,accessMode,operation) \
    ( (This)->lpVtbl->OpenAsync(This,filePath,accessMode,operation) )

#define __x_ABI_CWindows_CStorage_CStreams_CIFileRandomAccessStreamStatics_OpenWithOptionsAsync(This,filePath,accessMode,sharingOptions,openDisposition,operation) \
    ( (This)->lpVtbl->OpenWithOptionsAsync(This,filePath,accessMode,sharingOptions,openDisposition,operation) )

#define __x_ABI_CWindows_CStorage_CStreams_CIFileRandomAccessStreamStatics_OpenTransactedWriteAsync(This,filePath,operation) \
    ( (This)->lpVtbl->OpenTransactedWriteAsync(This,filePath,operation) )

#define __x_ABI_CWindows_CStorage_CStreams_CIFileRandomAccessStreamStatics_OpenTransactedWriteWithOptionsAsync(This,filePath,openOptions,openDisposition,operation) \
    ( (This)->lpVtbl->OpenTransactedWriteWithOptionsAsync(This,filePath,openOptions,openDisposition,operation) )

#define __x_ABI_CWindows_CStorage_CStreams_CIFileRandomAccessStreamStatics_OpenForUserAsync(This,user,filePath,accessMode,operation) \
    ( (This)->lpVtbl->OpenForUserAsync(This,user,filePath,accessMode,operation) )

#define __x_ABI_CWindows_CStorage_CStreams_CIFileRandomAccessStreamStatics_OpenForUserWithOptionsAsync(This,user,filePath,accessMode,sharingOptions,openDisposition,operation) \
    ( (This)->lpVtbl->OpenForUserWithOptionsAsync(This,user,filePath,accessMode,sharingOptions,openDisposition,operation) )

#define __x_ABI_CWindows_CStorage_CStreams_CIFileRandomAccessStreamStatics_OpenTransactedWriteForUserAsync(This,user,filePath,operation) \
    ( (This)->lpVtbl->OpenTransactedWriteForUserAsync(This,user,filePath,operation) )

#define __x_ABI_CWindows_CStorage_CStreams_CIFileRandomAccessStreamStatics_OpenTransactedWriteForUserWithOptionsAsync(This,user,filePath,openOptions,openDisposition,operation) \
    ( (This)->lpVtbl->OpenTransactedWriteForUserWithOptionsAsync(This,user,filePath,openOptions,openDisposition,operation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CStreams_CIFileRandomAccessStreamStatics;
#endif /* !defined(____x_ABI_CWindows_CStorage_CStreams_CIFileRandomAccessStreamStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.Storage.Streams.IInputStream
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CStorage_CStreams_CIInputStream_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CStorage_CStreams_CIInputStream_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Streams_IInputStream[] = L"Windows.Storage.Streams.IInputStream";
/* [object, uuid("905A0FE2-BC53-11DF-8C49-001E4FC686DA"), contract] */
typedef struct __x_ABI_CWindows_CStorage_CStreams_CIInputStreamVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CStreams_CIInputStream * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CStreams_CIInputStream * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CStreams_CIInputStream * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CStreams_CIInputStream * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CStreams_CIInputStream * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CStreams_CIInputStream * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *ReadAsync )(
        __x_ABI_CWindows_CStorage_CStreams_CIInputStream * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * buffer,
        /* [in] */UINT32 count,
        /* [in] */__x_ABI_CWindows_CStorage_CStreams_CInputStreamOptions options,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_UINT32 * * operation
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CStorage_CStreams_CIInputStreamVtbl;

interface __x_ABI_CWindows_CStorage_CStreams_CIInputStream
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CStreams_CIInputStreamVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CStorage_CStreams_CIInputStream_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CStorage_CStreams_CIInputStream_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CStorage_CStreams_CIInputStream_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CStorage_CStreams_CIInputStream_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CStorage_CStreams_CIInputStream_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CStorage_CStreams_CIInputStream_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CStorage_CStreams_CIInputStream_ReadAsync(This,buffer,count,options,operation) \
    ( (This)->lpVtbl->ReadAsync(This,buffer,count,options,operation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CStreams_CIInputStream;
#endif /* !defined(____x_ABI_CWindows_CStorage_CStreams_CIInputStream_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Storage.Streams.IInputStreamReference
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CStorage_CStreams_CIInputStreamReference_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CStorage_CStreams_CIInputStreamReference_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Streams_IInputStreamReference[] = L"Windows.Storage.Streams.IInputStreamReference";
/* [object, uuid("43929D18-5EC9-4B5A-919C-4205B0C804B6"), contract] */
typedef struct __x_ABI_CWindows_CStorage_CStreams_CIInputStreamReferenceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CStreams_CIInputStreamReference * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CStreams_CIInputStreamReference * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CStreams_CIInputStreamReference * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CStreams_CIInputStreamReference * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CStreams_CIInputStreamReference * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CStreams_CIInputStreamReference * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *OpenSequentialReadAsync )(
        __x_ABI_CWindows_CStorage_CStreams_CIInputStreamReference * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStreams__CIInputStream * * operation
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CStorage_CStreams_CIInputStreamReferenceVtbl;

interface __x_ABI_CWindows_CStorage_CStreams_CIInputStreamReference
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CStreams_CIInputStreamReferenceVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CStorage_CStreams_CIInputStreamReference_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CStorage_CStreams_CIInputStreamReference_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CStorage_CStreams_CIInputStreamReference_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CStorage_CStreams_CIInputStreamReference_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CStorage_CStreams_CIInputStreamReference_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CStorage_CStreams_CIInputStreamReference_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CStorage_CStreams_CIInputStreamReference_OpenSequentialReadAsync(This,operation) \
    ( (This)->lpVtbl->OpenSequentialReadAsync(This,operation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CStreams_CIInputStreamReference;
#endif /* !defined(____x_ABI_CWindows_CStorage_CStreams_CIInputStreamReference_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Storage.Streams.IOutputStream
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CStorage_CStreams_CIOutputStream_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CStorage_CStreams_CIOutputStream_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Streams_IOutputStream[] = L"Windows.Storage.Streams.IOutputStream";
/* [object, uuid("905A0FE6-BC53-11DF-8C49-001E4FC686DA"), contract] */
typedef struct __x_ABI_CWindows_CStorage_CStreams_CIOutputStreamVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CStreams_CIOutputStream * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CStreams_CIOutputStream * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CStreams_CIOutputStream * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CStreams_CIOutputStream * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CStreams_CIOutputStream * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CStreams_CIOutputStream * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *WriteAsync )(
        __x_ABI_CWindows_CStorage_CStreams_CIOutputStream * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * buffer,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperationWithProgress_2_UINT32_UINT32 * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *FlushAsync )(
        __x_ABI_CWindows_CStorage_CStreams_CIOutputStream * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CStorage_CStreams_CIOutputStreamVtbl;

interface __x_ABI_CWindows_CStorage_CStreams_CIOutputStream
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CStreams_CIOutputStreamVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CStorage_CStreams_CIOutputStream_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CStorage_CStreams_CIOutputStream_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CStorage_CStreams_CIOutputStream_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CStorage_CStreams_CIOutputStream_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CStorage_CStreams_CIOutputStream_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CStorage_CStreams_CIOutputStream_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CStorage_CStreams_CIOutputStream_WriteAsync(This,buffer,operation) \
    ( (This)->lpVtbl->WriteAsync(This,buffer,operation) )

#define __x_ABI_CWindows_CStorage_CStreams_CIOutputStream_FlushAsync(This,operation) \
    ( (This)->lpVtbl->FlushAsync(This,operation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CStreams_CIOutputStream;
#endif /* !defined(____x_ABI_CWindows_CStorage_CStreams_CIOutputStream_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Storage.Streams.IRandomAccessStream
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *     Windows.Storage.Streams.IInputStream
 *     Windows.Storage.Streams.IOutputStream
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Streams_IRandomAccessStream[] = L"Windows.Storage.Streams.IRandomAccessStream";
/* [object, uuid("905A0FE1-BC53-11DF-8C49-001E4FC686DA"), contract] */
typedef struct __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * This,
        /* [retval, out] */__RPC__out UINT64 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Size )(
        __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * This,
        /* [in] */UINT64 value
        );
    HRESULT ( STDMETHODCALLTYPE *GetInputStreamAt )(
        __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * This,
        /* [in] */UINT64 position,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIInputStream * * stream
        );
    HRESULT ( STDMETHODCALLTYPE *GetOutputStreamAt )(
        __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * This,
        /* [in] */UINT64 position,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIOutputStream * * stream
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Position )(
        __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * This,
        /* [retval, out] */__RPC__out UINT64 * value
        );
    HRESULT ( STDMETHODCALLTYPE *Seek )(
        __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * This,
        /* [in] */UINT64 position
        );
    HRESULT ( STDMETHODCALLTYPE *CloneStream )(
        __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * * stream
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CanRead )(
        __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CanWrite )(
        __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamVtbl;

interface __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream_get_Size(This,value) \
    ( (This)->lpVtbl->get_Size(This,value) )

#define __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream_put_Size(This,value) \
    ( (This)->lpVtbl->put_Size(This,value) )

#define __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream_GetInputStreamAt(This,position,stream) \
    ( (This)->lpVtbl->GetInputStreamAt(This,position,stream) )

#define __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream_GetOutputStreamAt(This,position,stream) \
    ( (This)->lpVtbl->GetOutputStreamAt(This,position,stream) )

#define __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream_get_Position(This,value) \
    ( (This)->lpVtbl->get_Position(This,value) )

#define __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream_Seek(This,position) \
    ( (This)->lpVtbl->Seek(This,position) )

#define __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream_CloneStream(This,stream) \
    ( (This)->lpVtbl->CloneStream(This,stream) )

#define __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream_get_CanRead(This,value) \
    ( (This)->lpVtbl->get_CanRead(This,value) )

#define __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream_get_CanWrite(This,value) \
    ( (This)->lpVtbl->get_CanWrite(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream;
#endif /* !defined(____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Storage.Streams.IRandomAccessStreamReference
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Streams_IRandomAccessStreamReference[] = L"Windows.Storage.Streams.IRandomAccessStreamReference";
/* [object, uuid("33EE3134-1DD6-4E3A-8067-D1C162E8642B"), contract] */
typedef struct __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReferenceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *OpenReadAsync )(
        __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType * * operation
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReferenceVtbl;

interface __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReferenceVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference_OpenReadAsync(This,operation) \
    ( (This)->lpVtbl->OpenReadAsync(This,operation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference;
#endif /* !defined(____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Storage.Streams.IRandomAccessStreamReferenceStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Storage.Streams.RandomAccessStreamReference
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReferenceStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReferenceStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Streams_IRandomAccessStreamReferenceStatics[] = L"Windows.Storage.Streams.IRandomAccessStreamReferenceStatics";
/* [object, uuid("857309DC-3FBF-4E7D-986F-EF3B1A07A964"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReferenceStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReferenceStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReferenceStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReferenceStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReferenceStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReferenceStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReferenceStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateFromFile )(
        __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReferenceStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile * file,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference * * streamReference
        );
    HRESULT ( STDMETHODCALLTYPE *CreateFromUri )(
        __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReferenceStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * uri,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference * * streamReference
        );
    HRESULT ( STDMETHODCALLTYPE *CreateFromStream )(
        __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReferenceStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * stream,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference * * streamReference
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReferenceStaticsVtbl;

interface __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReferenceStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReferenceStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReferenceStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReferenceStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReferenceStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReferenceStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReferenceStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReferenceStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReferenceStatics_CreateFromFile(This,file,streamReference) \
    ( (This)->lpVtbl->CreateFromFile(This,file,streamReference) )

#define __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReferenceStatics_CreateFromUri(This,uri,streamReference) \
    ( (This)->lpVtbl->CreateFromUri(This,uri,streamReference) )

#define __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReferenceStatics_CreateFromStream(This,stream,streamReference) \
    ( (This)->lpVtbl->CreateFromStream(This,stream,streamReference) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReferenceStatics;
#endif /* !defined(____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReferenceStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Storage.Streams.IRandomAccessStreamStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Storage.Streams.RandomAccessStream
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Streams_IRandomAccessStreamStatics[] = L"Windows.Storage.Streams.IRandomAccessStreamStatics";
/* [object, uuid("524CEDCF-6E29-4CE5-9573-6B753DB66C3A"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [overload] */HRESULT ( STDMETHODCALLTYPE *CopyAsync )(
        __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIInputStream * source,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIOutputStream * destination,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperationWithProgress_2_UINT64_UINT64 * * operation
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *CopySizeAsync )(
        __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIInputStream * source,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIOutputStream * destination,
        /* [in] */UINT64 bytesToCopy,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperationWithProgress_2_UINT64_UINT64 * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *CopyAndCloseAsync )(
        __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIInputStream * source,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIOutputStream * destination,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperationWithProgress_2_UINT64_UINT64 * * operation
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamStaticsVtbl;

interface __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamStatics_CopyAsync(This,source,destination,operation) \
    ( (This)->lpVtbl->CopyAsync(This,source,destination,operation) )

#define __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamStatics_CopySizeAsync(This,source,destination,bytesToCopy,operation) \
    ( (This)->lpVtbl->CopySizeAsync(This,source,destination,bytesToCopy,operation) )

#define __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamStatics_CopyAndCloseAsync(This,source,destination,operation) \
    ( (This)->lpVtbl->CopyAndCloseAsync(This,source,destination,operation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamStatics;
#endif /* !defined(____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Storage.Streams.IRandomAccessStreamWithContentType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Storage.Streams.IRandomAccessStream
 *     Windows.Foundation.IClosable
 *     Windows.Storage.Streams.IInputStream
 *     Windows.Storage.Streams.IOutputStream
 *     Windows.Storage.Streams.IContentTypeProvider
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamWithContentType_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamWithContentType_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Streams_IRandomAccessStreamWithContentType[] = L"Windows.Storage.Streams.IRandomAccessStreamWithContentType";
/* [object, uuid("CC254827-4B3D-438F-9232-10C76BC7E038"), contract] */
typedef struct __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamWithContentTypeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamWithContentType * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamWithContentType * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamWithContentType * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamWithContentType * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamWithContentType * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamWithContentType * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
    
} __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamWithContentTypeVtbl;

interface __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamWithContentType
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamWithContentTypeVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamWithContentType_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamWithContentType_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamWithContentType_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamWithContentType_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamWithContentType_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamWithContentType_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamWithContentType;
#endif /* !defined(____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamWithContentType_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Storage.Streams.Buffer
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Storage.Streams.IBufferFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Storage.Streams.IBufferStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Storage.Streams.IBuffer ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Storage_Streams_Buffer_DEFINED
#define RUNTIMECLASS_Windows_Storage_Streams_Buffer_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_Streams_Buffer[] = L"Windows.Storage.Streams.Buffer";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Storage.Streams.DataReader
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Storage.Streams.IDataReaderFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Storage.Streams.IDataReaderStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Storage.Streams.IDataReader ** Default Interface **
 *    Windows.Foundation.IClosable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Storage_Streams_DataReader_DEFINED
#define RUNTIMECLASS_Windows_Storage_Streams_DataReader_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_Streams_DataReader[] = L"Windows.Storage.Streams.DataReader";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Storage.Streams.DataReaderLoadOperation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Foundation.IAsyncOperation_1_UINT32 ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Storage_Streams_DataReaderLoadOperation_DEFINED
#define RUNTIMECLASS_Windows_Storage_Streams_DataReaderLoadOperation_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_Streams_DataReaderLoadOperation[] = L"Windows.Storage.Streams.DataReaderLoadOperation";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Storage.Streams.DataWriter
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Storage.Streams.IDataWriterFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Storage.Streams.IDataWriter ** Default Interface **
 *    Windows.Foundation.IClosable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Storage_Streams_DataWriter_DEFINED
#define RUNTIMECLASS_Windows_Storage_Streams_DataWriter_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_Streams_DataWriter[] = L"Windows.Storage.Streams.DataWriter";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Storage.Streams.DataWriterStoreOperation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Foundation.IAsyncOperation_1_UINT32 ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Storage_Streams_DataWriterStoreOperation_DEFINED
#define RUNTIMECLASS_Windows_Storage_Streams_DataWriterStoreOperation_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_Streams_DataWriterStoreOperation[] = L"Windows.Storage.Streams.DataWriterStoreOperation";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Storage.Streams.FileInputStream
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Storage.Streams.IInputStream ** Default Interface **
 *    Windows.Foundation.IClosable
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Storage_Streams_FileInputStream_DEFINED
#define RUNTIMECLASS_Windows_Storage_Streams_FileInputStream_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_Streams_FileInputStream[] = L"Windows.Storage.Streams.FileInputStream";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Storage.Streams.FileOutputStream
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Storage.Streams.IOutputStream ** Default Interface **
 *    Windows.Foundation.IClosable
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Storage_Streams_FileOutputStream_DEFINED
#define RUNTIMECLASS_Windows_Storage_Streams_FileOutputStream_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_Streams_FileOutputStream[] = L"Windows.Storage.Streams.FileOutputStream";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Storage.Streams.FileRandomAccessStream
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Storage.Streams.IFileRandomAccessStreamStatics interface starting with version 5.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Storage.Streams.IRandomAccessStream ** Default Interface **
 *    Windows.Storage.Streams.IOutputStream
 *    Windows.Foundation.IClosable
 *    Windows.Storage.Streams.IInputStream
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Storage_Streams_FileRandomAccessStream_DEFINED
#define RUNTIMECLASS_Windows_Storage_Streams_FileRandomAccessStream_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_Streams_FileRandomAccessStream[] = L"Windows.Storage.Streams.FileRandomAccessStream";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Storage.Streams.InMemoryRandomAccessStream
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Storage.Streams.IRandomAccessStream ** Default Interface **
 *    Windows.Storage.Streams.IOutputStream
 *    Windows.Foundation.IClosable
 *    Windows.Storage.Streams.IInputStream
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Storage_Streams_InMemoryRandomAccessStream_DEFINED
#define RUNTIMECLASS_Windows_Storage_Streams_InMemoryRandomAccessStream_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_Streams_InMemoryRandomAccessStream[] = L"Windows.Storage.Streams.InMemoryRandomAccessStream";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Storage.Streams.InputStreamOverStream
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Storage.Streams.IInputStream ** Default Interface **
 *    Windows.Foundation.IClosable
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Storage_Streams_InputStreamOverStream_DEFINED
#define RUNTIMECLASS_Windows_Storage_Streams_InputStreamOverStream_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_Streams_InputStreamOverStream[] = L"Windows.Storage.Streams.InputStreamOverStream";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Storage.Streams.OutputStreamOverStream
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Storage.Streams.IOutputStream ** Default Interface **
 *    Windows.Foundation.IClosable
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Storage_Streams_OutputStreamOverStream_DEFINED
#define RUNTIMECLASS_Windows_Storage_Streams_OutputStreamOverStream_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_Streams_OutputStreamOverStream[] = L"Windows.Storage.Streams.OutputStreamOverStream";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Storage.Streams.RandomAccessStream
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Storage.Streams.IRandomAccessStreamStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_Storage_Streams_RandomAccessStream_DEFINED
#define RUNTIMECLASS_Windows_Storage_Streams_RandomAccessStream_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_Streams_RandomAccessStream[] = L"Windows.Storage.Streams.RandomAccessStream";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Storage.Streams.RandomAccessStreamOverStream
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Storage.Streams.IRandomAccessStream ** Default Interface **
 *    Windows.Storage.Streams.IOutputStream
 *    Windows.Foundation.IClosable
 *    Windows.Storage.Streams.IInputStream
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Storage_Streams_RandomAccessStreamOverStream_DEFINED
#define RUNTIMECLASS_Windows_Storage_Streams_RandomAccessStreamOverStream_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_Streams_RandomAccessStreamOverStream[] = L"Windows.Storage.Streams.RandomAccessStreamOverStream";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Storage.Streams.RandomAccessStreamReference
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Storage.Streams.IRandomAccessStreamReferenceStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Storage.Streams.IRandomAccessStreamReference ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Storage_Streams_RandomAccessStreamReference_DEFINED
#define RUNTIMECLASS_Windows_Storage_Streams_RandomAccessStreamReference_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_Streams_RandomAccessStreamReference[] = L"Windows.Storage.Streams.RandomAccessStreamReference";
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
#endif // __windows2Estorage2Estreams_p_h__

#endif // __windows2Estorage2Estreams_h__
