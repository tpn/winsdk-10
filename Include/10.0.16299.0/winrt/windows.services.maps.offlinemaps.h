/* Header file automatically generated from windows.services.maps.offlinemaps.idl */
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
#ifndef __windows2Eservices2Emaps2Eofflinemaps_h__
#define __windows2Eservices2Emaps2Eofflinemaps_h__
#ifndef __windows2Eservices2Emaps2Eofflinemaps_p_h__
#define __windows2Eservices2Emaps2Eofflinemaps_p_h__


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
#if !defined(WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION 0x30000
#endif // defined(WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION)

#if !defined(WINDOWS_FOUNDATION_FOUNDATIONCONTRACT_VERSION)
#define WINDOWS_FOUNDATION_FOUNDATIONCONTRACT_VERSION 0x30000
#endif // defined(WINDOWS_FOUNDATION_FOUNDATIONCONTRACT_VERSION)

#if !defined(WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION)
#define WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION 0x50000
#endif // defined(WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION)

#if !defined(WINDOWS_PHONE_PHONECONTRACT_VERSION)
#define WINDOWS_PHONE_PHONECONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_PHONE_PHONECONTRACT_VERSION)

#if !defined(WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION)
#define WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION)

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
#include "Windows.Devices.Geolocation.h"
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackage_FWD_DEFINED__
#define ____x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackage_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                namespace OfflineMaps {
                    interface IOfflineMapPackage;
                } /* Windows */
            } /* Services */
        } /* Maps */
    } /* OfflineMaps */} /* ABI */
#define __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackage ABI::Windows::Services::Maps::OfflineMaps::IOfflineMapPackage

#endif // ____x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackage_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageQueryResult_FWD_DEFINED__
#define ____x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageQueryResult_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                namespace OfflineMaps {
                    interface IOfflineMapPackageQueryResult;
                } /* Windows */
            } /* Services */
        } /* Maps */
    } /* OfflineMaps */} /* ABI */
#define __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageQueryResult ABI::Windows::Services::Maps::OfflineMaps::IOfflineMapPackageQueryResult

#endif // ____x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageQueryResult_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageStartDownloadResult_FWD_DEFINED__
#define ____x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageStartDownloadResult_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                namespace OfflineMaps {
                    interface IOfflineMapPackageStartDownloadResult;
                } /* Windows */
            } /* Services */
        } /* Maps */
    } /* OfflineMaps */} /* ABI */
#define __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageStartDownloadResult ABI::Windows::Services::Maps::OfflineMaps::IOfflineMapPackageStartDownloadResult

#endif // ____x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageStartDownloadResult_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                namespace OfflineMaps {
                    interface IOfflineMapPackageStatics;
                } /* Windows */
            } /* Services */
        } /* Maps */
    } /* OfflineMaps */} /* ABI */
#define __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageStatics ABI::Windows::Services::Maps::OfflineMaps::IOfflineMapPackageStatics

#endif // ____x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageStatics_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                namespace OfflineMaps {
                    class OfflineMapPackage;
                } /* Windows */
            } /* Services */
        } /* Maps */
    } /* OfflineMaps */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef DEF___FIIterator_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage_USE
#define DEF___FIIterator_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("750f4d37-3766-5842-a425-ccd9b8d80786"))
IIterator<ABI::Windows::Services::Maps::OfflineMaps::OfflineMapPackage*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Services::Maps::OfflineMaps::OfflineMapPackage*, ABI::Windows::Services::Maps::OfflineMaps::IOfflineMapPackage*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Services.Maps.OfflineMaps.OfflineMapPackage>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Services::Maps::OfflineMaps::OfflineMapPackage*> __FIIterator_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage_t;
#define __FIIterator_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Services::Maps::OfflineMaps::IOfflineMapPackage*>
//#define __FIIterator_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Services::Maps::OfflineMaps::IOfflineMapPackage*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef DEF___FIIterable_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage_USE
#define DEF___FIIterable_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("7522287c-0af2-586c-bb3f-457c07984a6f"))
IIterable<ABI::Windows::Services::Maps::OfflineMaps::OfflineMapPackage*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Services::Maps::OfflineMaps::OfflineMapPackage*, ABI::Windows::Services::Maps::OfflineMaps::IOfflineMapPackage*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Services.Maps.OfflineMaps.OfflineMapPackage>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Services::Maps::OfflineMaps::OfflineMapPackage*> __FIIterable_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage_t;
#define __FIIterable_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Services::Maps::OfflineMaps::IOfflineMapPackage*>
//#define __FIIterable_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Services::Maps::OfflineMaps::IOfflineMapPackage*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef DEF___FIVectorView_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage_USE
#define DEF___FIVectorView_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("2522ebc2-bd9f-551b-b90e-6c28152958a0"))
IVectorView<ABI::Windows::Services::Maps::OfflineMaps::OfflineMapPackage*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Services::Maps::OfflineMaps::OfflineMapPackage*, ABI::Windows::Services::Maps::OfflineMaps::IOfflineMapPackage*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Services.Maps.OfflineMaps.OfflineMapPackage>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Services::Maps::OfflineMaps::OfflineMapPackage*> __FIVectorView_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage_t;
#define __FIVectorView_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Services::Maps::OfflineMaps::IOfflineMapPackage*>
//#define __FIVectorView_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Services::Maps::OfflineMaps::IOfflineMapPackage*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                namespace OfflineMaps {
                    class OfflineMapPackageQueryResult;
                } /* Windows */
            } /* Services */
        } /* Maps */
    } /* OfflineMaps */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageQueryResult_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageQueryResult_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("8a4df3c9-2595-5bec-8ba1-c1d955f168c0"))
IAsyncOperationCompletedHandler<ABI::Windows::Services::Maps::OfflineMaps::OfflineMapPackageQueryResult*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Services::Maps::OfflineMaps::OfflineMapPackageQueryResult*, ABI::Windows::Services::Maps::OfflineMaps::IOfflineMapPackageQueryResult*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Services.Maps.OfflineMaps.OfflineMapPackageQueryResult>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::Services::Maps::OfflineMaps::OfflineMapPackageQueryResult*> __FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageQueryResult_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageQueryResult ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageQueryResult_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageQueryResult ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Services::Maps::OfflineMaps::IOfflineMapPackageQueryResult*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageQueryResult_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Services::Maps::OfflineMaps::IOfflineMapPackageQueryResult*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageQueryResult_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef DEF___FIAsyncOperation_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageQueryResult_USE
#define DEF___FIAsyncOperation_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageQueryResult_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("c01a663d-6d9b-5385-ae68-0a65a9544514"))
IAsyncOperation<ABI::Windows::Services::Maps::OfflineMaps::OfflineMapPackageQueryResult*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Services::Maps::OfflineMaps::OfflineMapPackageQueryResult*, ABI::Windows::Services::Maps::OfflineMaps::IOfflineMapPackageQueryResult*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Services.Maps.OfflineMaps.OfflineMapPackageQueryResult>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::Services::Maps::OfflineMaps::OfflineMapPackageQueryResult*> __FIAsyncOperation_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageQueryResult_t;
#define __FIAsyncOperation_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageQueryResult ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageQueryResult_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageQueryResult ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Services::Maps::OfflineMaps::IOfflineMapPackageQueryResult*>
//#define __FIAsyncOperation_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageQueryResult_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Services::Maps::OfflineMaps::IOfflineMapPackageQueryResult*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageQueryResult_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                namespace OfflineMaps {
                    class OfflineMapPackageStartDownloadResult;
                } /* Windows */
            } /* Services */
        } /* Maps */
    } /* OfflineMaps */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageStartDownloadResult_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageStartDownloadResult_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("8654a79e-c52f-5f98-af0a-522466c27246"))
IAsyncOperationCompletedHandler<ABI::Windows::Services::Maps::OfflineMaps::OfflineMapPackageStartDownloadResult*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Services::Maps::OfflineMaps::OfflineMapPackageStartDownloadResult*, ABI::Windows::Services::Maps::OfflineMaps::IOfflineMapPackageStartDownloadResult*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Services.Maps.OfflineMaps.OfflineMapPackageStartDownloadResult>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::Services::Maps::OfflineMaps::OfflineMapPackageStartDownloadResult*> __FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageStartDownloadResult_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageStartDownloadResult ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageStartDownloadResult_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageStartDownloadResult ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Services::Maps::OfflineMaps::IOfflineMapPackageStartDownloadResult*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageStartDownloadResult_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Services::Maps::OfflineMaps::IOfflineMapPackageStartDownloadResult*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageStartDownloadResult_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef DEF___FIAsyncOperation_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageStartDownloadResult_USE
#define DEF___FIAsyncOperation_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageStartDownloadResult_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("911272f7-f5aa-5393-94a1-e96adfad3da4"))
IAsyncOperation<ABI::Windows::Services::Maps::OfflineMaps::OfflineMapPackageStartDownloadResult*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Services::Maps::OfflineMaps::OfflineMapPackageStartDownloadResult*, ABI::Windows::Services::Maps::OfflineMaps::IOfflineMapPackageStartDownloadResult*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Services.Maps.OfflineMaps.OfflineMapPackageStartDownloadResult>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::Services::Maps::OfflineMaps::OfflineMapPackageStartDownloadResult*> __FIAsyncOperation_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageStartDownloadResult_t;
#define __FIAsyncOperation_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageStartDownloadResult ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageStartDownloadResult_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageStartDownloadResult ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Services::Maps::OfflineMaps::IOfflineMapPackageStartDownloadResult*>
//#define __FIAsyncOperation_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageStartDownloadResult_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Services::Maps::OfflineMaps::IOfflineMapPackageStartDownloadResult*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageStartDownloadResult_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef DEF___FITypedEventHandler_2_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage_IInspectable_USE
#define DEF___FITypedEventHandler_2_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("2d2e0d20-826f-560c-b1c1-b4bd6fbf329a"))
ITypedEventHandler<ABI::Windows::Services::Maps::OfflineMaps::OfflineMapPackage*,IInspectable*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Services::Maps::OfflineMaps::OfflineMapPackage*, ABI::Windows::Services::Maps::OfflineMaps::IOfflineMapPackage*>,IInspectable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.Services.Maps.OfflineMaps.OfflineMapPackage, Object>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::Services::Maps::OfflineMaps::OfflineMapPackage*,IInspectable*> __FITypedEventHandler_2_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage_IInspectable_t;
#define __FITypedEventHandler_2_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage_IInspectable ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage_IInspectable_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage_IInspectable ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Services::Maps::OfflineMaps::IOfflineMapPackage*,IInspectable*>
//#define __FITypedEventHandler_2_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage_IInspectable_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Services::Maps::OfflineMaps::IOfflineMapPackage*,IInspectable*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage_IInspectable_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000



namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Geolocation {
                class GeoboundingBox;
            } /* Windows */
        } /* Devices */
    } /* Geolocation */} /* ABI */

#ifndef ____x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBox_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBox_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Geolocation {
                interface IGeoboundingBox;
            } /* Windows */
        } /* Devices */
    } /* Geolocation */} /* ABI */
#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBox ABI::Windows::Devices::Geolocation::IGeoboundingBox

#endif // ____x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBox_FWD_DEFINED__


namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Geolocation {
                class Geocircle;
            } /* Windows */
        } /* Devices */
    } /* Geolocation */} /* ABI */

#ifndef ____x_ABI_CWindows_CDevices_CGeolocation_CIGeocircle_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CGeolocation_CIGeocircle_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Geolocation {
                interface IGeocircle;
            } /* Windows */
        } /* Devices */
    } /* Geolocation */} /* ABI */
#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeocircle ABI::Windows::Devices::Geolocation::IGeocircle

#endif // ____x_ABI_CWindows_CDevices_CGeolocation_CIGeocircle_FWD_DEFINED__


namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Geolocation {
                class Geopoint;
            } /* Windows */
        } /* Devices */
    } /* Geolocation */} /* ABI */

#ifndef ____x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Geolocation {
                interface IGeopoint;
            } /* Windows */
        } /* Devices */
    } /* Geolocation */} /* ABI */
#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint ABI::Windows::Devices::Geolocation::IGeopoint

#endif // ____x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint_FWD_DEFINED__








namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                namespace OfflineMaps {
                    
                    typedef enum OfflineMapPackageQueryStatus : int OfflineMapPackageQueryStatus;
                    
                } /* Windows */
            } /* Services */
        } /* Maps */
    } /* OfflineMaps */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                namespace OfflineMaps {
                    
                    typedef enum OfflineMapPackageStartDownloadStatus : int OfflineMapPackageStartDownloadStatus;
                    
                } /* Windows */
            } /* Services */
        } /* Maps */
    } /* OfflineMaps */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                namespace OfflineMaps {
                    
                    typedef enum OfflineMapPackageStatus : int OfflineMapPackageStatus;
                    
                } /* Windows */
            } /* Services */
        } /* Maps */
    } /* OfflineMaps */} /* ABI */


















/*
 *
 * Struct Windows.Services.Maps.OfflineMaps.OfflineMapPackageQueryStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                namespace OfflineMaps {
                    /* [v1_enum, contract] */
                    enum OfflineMapPackageQueryStatus : int
                    {
                        OfflineMapPackageQueryStatus_Success = 0,
                        OfflineMapPackageQueryStatus_UnknownError = 1,
                        OfflineMapPackageQueryStatus_InvalidCredentials = 2,
                        OfflineMapPackageQueryStatus_NetworkFailure = 3,
                    };
                    
                } /* Windows */
            } /* Services */
        } /* Maps */
    } /* OfflineMaps */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Struct Windows.Services.Maps.OfflineMaps.OfflineMapPackageStartDownloadStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                namespace OfflineMaps {
                    /* [v1_enum, contract] */
                    enum OfflineMapPackageStartDownloadStatus : int
                    {
                        OfflineMapPackageStartDownloadStatus_Success = 0,
                        OfflineMapPackageStartDownloadStatus_UnknownError = 1,
                        OfflineMapPackageStartDownloadStatus_InvalidCredentials = 2,
                        OfflineMapPackageStartDownloadStatus_DeniedWithoutCapability = 3,
                    };
                    
                } /* Windows */
            } /* Services */
        } /* Maps */
    } /* OfflineMaps */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Struct Windows.Services.Maps.OfflineMaps.OfflineMapPackageStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                namespace OfflineMaps {
                    /* [v1_enum, contract] */
                    enum OfflineMapPackageStatus : int
                    {
                        OfflineMapPackageStatus_NotDownloaded = 0,
                        OfflineMapPackageStatus_Downloading = 1,
                        OfflineMapPackageStatus_Downloaded = 2,
                        OfflineMapPackageStatus_Deleting = 3,
                    };
                    
                } /* Windows */
            } /* Services */
        } /* Maps */
    } /* OfflineMaps */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Services.Maps.OfflineMaps.IOfflineMapPackage
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Services.Maps.OfflineMaps.OfflineMapPackage
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackage_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackage_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_OfflineMaps_IOfflineMapPackage[] = L"Windows.Services.Maps.OfflineMaps.IOfflineMapPackage";
namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                namespace OfflineMaps {
                    /* [object, uuid("A797673B-A5B5-4144-B525-E68C8862664B"), exclusiveto, contract] */
                    MIDL_INTERFACE("A797673B-A5B5-4144-B525-E68C8862664B")
                    IOfflineMapPackage : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Status(
                            /* [retval, out] */__RPC__out ABI::Windows::Services::Maps::OfflineMaps::OfflineMapPackageStatus * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DisplayName(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_EnclosingRegionName(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_EstimatedSizeInBytes(
                            /* [retval, out] */__RPC__out UINT64 * value
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_StatusChanged(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_StatusChanged(
                            /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage_IInspectable * value,
                            /* [retval, out] */__RPC__out EventRegistrationToken * token
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE RequestStartDownloadAsync(
                            /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageStartDownloadResult * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IOfflineMapPackage=_uuidof(IOfflineMapPackage);
                    
                } /* Windows */
            } /* Services */
        } /* Maps */
    } /* OfflineMaps */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackage;
#endif /* !defined(____x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackage_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Services.Maps.OfflineMaps.IOfflineMapPackageQueryResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Services.Maps.OfflineMaps.OfflineMapPackageQueryResult
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageQueryResult_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageQueryResult_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_OfflineMaps_IOfflineMapPackageQueryResult[] = L"Windows.Services.Maps.OfflineMaps.IOfflineMapPackageQueryResult";
namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                namespace OfflineMaps {
                    /* [object, uuid("55585411-39E1-4E41-A4E1-5F4872BEE199"), exclusiveto, contract] */
                    MIDL_INTERFACE("55585411-39E1-4E41-A4E1-5F4872BEE199")
                    IOfflineMapPackageQueryResult : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Status(
                            /* [retval, out] */__RPC__out ABI::Windows::Services::Maps::OfflineMaps::OfflineMapPackageQueryStatus * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Packages(
                            /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IOfflineMapPackageQueryResult=_uuidof(IOfflineMapPackageQueryResult);
                    
                } /* Windows */
            } /* Services */
        } /* Maps */
    } /* OfflineMaps */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageQueryResult;
#endif /* !defined(____x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageQueryResult_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Services.Maps.OfflineMaps.IOfflineMapPackageStartDownloadResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Services.Maps.OfflineMaps.OfflineMapPackageStartDownloadResult
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageStartDownloadResult_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageStartDownloadResult_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_OfflineMaps_IOfflineMapPackageStartDownloadResult[] = L"Windows.Services.Maps.OfflineMaps.IOfflineMapPackageStartDownloadResult";
namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                namespace OfflineMaps {
                    /* [object, uuid("D965B918-D4D6-4AFE-9378-3EC71EF11C3D"), exclusiveto, contract] */
                    MIDL_INTERFACE("D965B918-D4D6-4AFE-9378-3EC71EF11C3D")
                    IOfflineMapPackageStartDownloadResult : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Status(
                            /* [retval, out] */__RPC__out ABI::Windows::Services::Maps::OfflineMaps::OfflineMapPackageStartDownloadStatus * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IOfflineMapPackageStartDownloadResult=_uuidof(IOfflineMapPackageStartDownloadResult);
                    
                } /* Windows */
            } /* Services */
        } /* Maps */
    } /* OfflineMaps */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageStartDownloadResult;
#endif /* !defined(____x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageStartDownloadResult_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Services.Maps.OfflineMaps.IOfflineMapPackageStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Services.Maps.OfflineMaps.OfflineMapPackage
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_OfflineMaps_IOfflineMapPackageStatics[] = L"Windows.Services.Maps.OfflineMaps.IOfflineMapPackageStatics";
namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                namespace OfflineMaps {
                    /* [object, uuid("185E7922-A831-4AB0-941F-6998FA929285"), exclusiveto, contract] */
                    MIDL_INTERFACE("185E7922-A831-4AB0-941F-6998FA929285")
                    IOfflineMapPackageStatics : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE FindPackagesAsync(
                            /* [in] */__RPC__in_opt ABI::Windows::Devices::Geolocation::IGeopoint * queryPoint,
                            /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageQueryResult * * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE FindPackagesInBoundingBoxAsync(
                            /* [in] */__RPC__in_opt ABI::Windows::Devices::Geolocation::IGeoboundingBox * queryBoundingBox,
                            /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageQueryResult * * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE FindPackagesInGeocircleAsync(
                            /* [in] */__RPC__in_opt ABI::Windows::Devices::Geolocation::IGeocircle * queryCircle,
                            /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageQueryResult * * result
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IOfflineMapPackageStatics=_uuidof(IOfflineMapPackageStatics);
                    
                } /* Windows */
            } /* Services */
        } /* Maps */
    } /* OfflineMaps */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageStatics;
#endif /* !defined(____x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.Services.Maps.OfflineMaps.OfflineMapPackage
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Services.Maps.OfflineMaps.IOfflineMapPackageStatics interface starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Services.Maps.OfflineMaps.IOfflineMapPackage ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_Services_Maps_OfflineMaps_OfflineMapPackage_DEFINED
#define RUNTIMECLASS_Windows_Services_Maps_OfflineMaps_OfflineMapPackage_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_Maps_OfflineMaps_OfflineMapPackage[] = L"Windows.Services.Maps.OfflineMaps.OfflineMapPackage";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.Services.Maps.OfflineMaps.OfflineMapPackageQueryResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Services.Maps.OfflineMaps.IOfflineMapPackageQueryResult ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_Services_Maps_OfflineMaps_OfflineMapPackageQueryResult_DEFINED
#define RUNTIMECLASS_Windows_Services_Maps_OfflineMaps_OfflineMapPackageQueryResult_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_Maps_OfflineMaps_OfflineMapPackageQueryResult[] = L"Windows.Services.Maps.OfflineMaps.OfflineMapPackageQueryResult";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.Services.Maps.OfflineMaps.OfflineMapPackageStartDownloadResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Services.Maps.OfflineMaps.IOfflineMapPackageStartDownloadResult ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_Services_Maps_OfflineMaps_OfflineMapPackageStartDownloadResult_DEFINED
#define RUNTIMECLASS_Windows_Services_Maps_OfflineMaps_OfflineMapPackageStartDownloadResult_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_Maps_OfflineMaps_OfflineMapPackageStartDownloadResult[] = L"Windows.Services.Maps.OfflineMaps.OfflineMapPackageStartDownloadResult";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000





#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackage_FWD_DEFINED__
#define ____x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackage_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackage __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackage;

#endif // ____x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackage_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageQueryResult_FWD_DEFINED__
#define ____x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageQueryResult_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageQueryResult __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageQueryResult;

#endif // ____x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageQueryResult_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageStartDownloadResult_FWD_DEFINED__
#define ____x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageStartDownloadResult_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageStartDownloadResult __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageStartDownloadResult;

#endif // ____x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageStartDownloadResult_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageStatics __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageStatics;

#endif // ____x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageStatics_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____FIIterator_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage __FIIterator_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage;

typedef struct __FIIterator_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackage * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackage * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageVtbl;

interface __FIIterator_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage
{
    CONST_VTBL struct __FIIterator_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____FIIterable_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage __FIIterable_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage;

typedef  struct __FIIterable_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage **first);

    END_INTERFACE
} __FIIterable_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageVtbl;

interface __FIIterable_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage
{
    CONST_VTBL struct __FIIterable_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____FIVectorView_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage __FIVectorView_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage;

typedef struct __FIVectorView_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackage * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage * This,
            /* [in] */ __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackage * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackage * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageVtbl;

interface __FIVectorView_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage
{
    CONST_VTBL struct __FIVectorView_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageQueryResult_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageQueryResult_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageQueryResult __FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageQueryResult;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageQueryResult;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageQueryResult __FIAsyncOperation_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageQueryResult;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageQueryResultVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageQueryResult * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageQueryResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageQueryResult * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageQueryResult * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageQueryResult *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageQueryResultVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageQueryResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageQueryResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageQueryResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageQueryResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageQueryResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageQueryResult_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageQueryResult_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____FIAsyncOperation_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageQueryResult_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageQueryResult_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageQueryResult __FIAsyncOperation_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageQueryResult;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageQueryResult;

typedef struct __FIAsyncOperation_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageQueryResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageQueryResult * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageQueryResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageQueryResult * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageQueryResult * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageQueryResult * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageQueryResult * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageQueryResult * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageQueryResult *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageQueryResult * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageQueryResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageQueryResult * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageQueryResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageQueryResultVtbl;

interface __FIAsyncOperation_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageQueryResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageQueryResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageQueryResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageQueryResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageQueryResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageQueryResult_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageQueryResult_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageQueryResult_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageQueryResult_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageQueryResult_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageQueryResult_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageQueryResult_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageStartDownloadResult_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageStartDownloadResult_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageStartDownloadResult __FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageStartDownloadResult;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageStartDownloadResult;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageStartDownloadResult __FIAsyncOperation_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageStartDownloadResult;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageStartDownloadResultVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageStartDownloadResult * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageStartDownloadResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageStartDownloadResult * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageStartDownloadResult * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageStartDownloadResult *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageStartDownloadResultVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageStartDownloadResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageStartDownloadResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageStartDownloadResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageStartDownloadResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageStartDownloadResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageStartDownloadResult_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageStartDownloadResult_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____FIAsyncOperation_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageStartDownloadResult_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageStartDownloadResult_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageStartDownloadResult __FIAsyncOperation_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageStartDownloadResult;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageStartDownloadResult;

typedef struct __FIAsyncOperation_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageStartDownloadResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageStartDownloadResult * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageStartDownloadResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageStartDownloadResult * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageStartDownloadResult * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageStartDownloadResult * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageStartDownloadResult * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageStartDownloadResult * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageStartDownloadResult *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageStartDownloadResult * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageStartDownloadResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageStartDownloadResult * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageStartDownloadResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageStartDownloadResultVtbl;

interface __FIAsyncOperation_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageStartDownloadResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageStartDownloadResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageStartDownloadResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageStartDownloadResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageStartDownloadResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageStartDownloadResult_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageStartDownloadResult_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageStartDownloadResult_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageStartDownloadResult_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageStartDownloadResult_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageStartDownloadResult_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageStartDownloadResult_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____FITypedEventHandler_2_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage_IInspectable_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage_IInspectable_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage_IInspectable __FITypedEventHandler_2_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage_IInspectable;

typedef struct __FITypedEventHandler_2_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage_IInspectable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage_IInspectable * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage_IInspectable * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackage * sender,/* [in] */ __RPC__in_opt IInspectable * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage_IInspectableVtbl;

interface __FITypedEventHandler_2_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage_IInspectableVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage_IInspectable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage_IInspectable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage_IInspectable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage_IInspectable_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage_IInspectable_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


#ifndef ____x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBox_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBox_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBox __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBox;

#endif // ____x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBox_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CDevices_CGeolocation_CIGeocircle_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CGeolocation_CIGeocircle_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CGeolocation_CIGeocircle __x_ABI_CWindows_CDevices_CGeolocation_CIGeocircle;

#endif // ____x_ABI_CWindows_CDevices_CGeolocation_CIGeocircle_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint;

#endif // ____x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint_FWD_DEFINED__









typedef enum __x_ABI_CWindows_CServices_CMaps_COfflineMaps_COfflineMapPackageQueryStatus __x_ABI_CWindows_CServices_CMaps_COfflineMaps_COfflineMapPackageQueryStatus;


typedef enum __x_ABI_CWindows_CServices_CMaps_COfflineMaps_COfflineMapPackageStartDownloadStatus __x_ABI_CWindows_CServices_CMaps_COfflineMaps_COfflineMapPackageStartDownloadStatus;


typedef enum __x_ABI_CWindows_CServices_CMaps_COfflineMaps_COfflineMapPackageStatus __x_ABI_CWindows_CServices_CMaps_COfflineMaps_COfflineMapPackageStatus;


















/*
 *
 * Struct Windows.Services.Maps.OfflineMaps.OfflineMapPackageQueryStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CServices_CMaps_COfflineMaps_COfflineMapPackageQueryStatus
{
    OfflineMapPackageQueryStatus_Success = 0,
    OfflineMapPackageQueryStatus_UnknownError = 1,
    OfflineMapPackageQueryStatus_InvalidCredentials = 2,
    OfflineMapPackageQueryStatus_NetworkFailure = 3,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Struct Windows.Services.Maps.OfflineMaps.OfflineMapPackageStartDownloadStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CServices_CMaps_COfflineMaps_COfflineMapPackageStartDownloadStatus
{
    OfflineMapPackageStartDownloadStatus_Success = 0,
    OfflineMapPackageStartDownloadStatus_UnknownError = 1,
    OfflineMapPackageStartDownloadStatus_InvalidCredentials = 2,
    OfflineMapPackageStartDownloadStatus_DeniedWithoutCapability = 3,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Struct Windows.Services.Maps.OfflineMaps.OfflineMapPackageStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CServices_CMaps_COfflineMaps_COfflineMapPackageStatus
{
    OfflineMapPackageStatus_NotDownloaded = 0,
    OfflineMapPackageStatus_Downloading = 1,
    OfflineMapPackageStatus_Downloaded = 2,
    OfflineMapPackageStatus_Deleting = 3,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Services.Maps.OfflineMaps.IOfflineMapPackage
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Services.Maps.OfflineMaps.OfflineMapPackage
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackage_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackage_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_OfflineMaps_IOfflineMapPackage[] = L"Windows.Services.Maps.OfflineMaps.IOfflineMapPackage";
/* [object, uuid("A797673B-A5B5-4144-B525-E68C8862664B"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackage * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackage * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackage * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackage * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackage * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackage * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackage * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CServices_CMaps_COfflineMaps_COfflineMapPackageStatus * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DisplayName )(
        __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackage * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_EnclosingRegionName )(
        __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackage * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_EstimatedSizeInBytes )(
        __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackage * This,
        /* [retval, out] */__RPC__out UINT64 * value
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_StatusChanged )(
        __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackage * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_StatusChanged )(
        __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackage * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage_IInspectable * value,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    HRESULT ( STDMETHODCALLTYPE *RequestStartDownloadAsync )(
        __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackage * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageStartDownloadResult * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageVtbl;

interface __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackage
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackage_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackage_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackage_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackage_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackage_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackage_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackage_get_Status(This,value) \
    ( (This)->lpVtbl->get_Status(This,value) )

#define __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackage_get_DisplayName(This,value) \
    ( (This)->lpVtbl->get_DisplayName(This,value) )

#define __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackage_get_EnclosingRegionName(This,value) \
    ( (This)->lpVtbl->get_EnclosingRegionName(This,value) )

#define __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackage_get_EstimatedSizeInBytes(This,value) \
    ( (This)->lpVtbl->get_EstimatedSizeInBytes(This,value) )

#define __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackage_remove_StatusChanged(This,token) \
    ( (This)->lpVtbl->remove_StatusChanged(This,token) )

#define __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackage_add_StatusChanged(This,value,token) \
    ( (This)->lpVtbl->add_StatusChanged(This,value,token) )

#define __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackage_RequestStartDownloadAsync(This,value) \
    ( (This)->lpVtbl->RequestStartDownloadAsync(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackage;
#endif /* !defined(____x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackage_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Services.Maps.OfflineMaps.IOfflineMapPackageQueryResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Services.Maps.OfflineMaps.OfflineMapPackageQueryResult
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageQueryResult_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageQueryResult_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_OfflineMaps_IOfflineMapPackageQueryResult[] = L"Windows.Services.Maps.OfflineMaps.IOfflineMapPackageQueryResult";
/* [object, uuid("55585411-39E1-4E41-A4E1-5F4872BEE199"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageQueryResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageQueryResult * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageQueryResult * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageQueryResult * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageQueryResult * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageQueryResult * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageQueryResult * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageQueryResult * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CServices_CMaps_COfflineMaps_COfflineMapPackageQueryStatus * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Packages )(
        __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageQueryResult * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackage * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageQueryResultVtbl;

interface __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageQueryResult
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageQueryResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageQueryResult_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageQueryResult_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageQueryResult_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageQueryResult_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageQueryResult_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageQueryResult_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageQueryResult_get_Status(This,value) \
    ( (This)->lpVtbl->get_Status(This,value) )

#define __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageQueryResult_get_Packages(This,value) \
    ( (This)->lpVtbl->get_Packages(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageQueryResult;
#endif /* !defined(____x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageQueryResult_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Services.Maps.OfflineMaps.IOfflineMapPackageStartDownloadResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Services.Maps.OfflineMaps.OfflineMapPackageStartDownloadResult
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageStartDownloadResult_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageStartDownloadResult_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_OfflineMaps_IOfflineMapPackageStartDownloadResult[] = L"Windows.Services.Maps.OfflineMaps.IOfflineMapPackageStartDownloadResult";
/* [object, uuid("D965B918-D4D6-4AFE-9378-3EC71EF11C3D"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageStartDownloadResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageStartDownloadResult * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageStartDownloadResult * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageStartDownloadResult * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageStartDownloadResult * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageStartDownloadResult * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageStartDownloadResult * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageStartDownloadResult * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CServices_CMaps_COfflineMaps_COfflineMapPackageStartDownloadStatus * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageStartDownloadResultVtbl;

interface __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageStartDownloadResult
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageStartDownloadResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageStartDownloadResult_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageStartDownloadResult_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageStartDownloadResult_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageStartDownloadResult_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageStartDownloadResult_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageStartDownloadResult_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageStartDownloadResult_get_Status(This,value) \
    ( (This)->lpVtbl->get_Status(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageStartDownloadResult;
#endif /* !defined(____x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageStartDownloadResult_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Services.Maps.OfflineMaps.IOfflineMapPackageStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Services.Maps.OfflineMaps.OfflineMapPackage
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_OfflineMaps_IOfflineMapPackageStatics[] = L"Windows.Services.Maps.OfflineMaps.IOfflineMapPackageStatics";
/* [object, uuid("185E7922-A831-4AB0-941F-6998FA929285"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *FindPackagesAsync )(
        __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint * queryPoint,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageQueryResult * * result
        );
    HRESULT ( STDMETHODCALLTYPE *FindPackagesInBoundingBoxAsync )(
        __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBox * queryBoundingBox,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageQueryResult * * result
        );
    HRESULT ( STDMETHODCALLTYPE *FindPackagesInGeocircleAsync )(
        __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeocircle * queryCircle,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CServices__CMaps__COfflineMaps__COfflineMapPackageQueryResult * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageStaticsVtbl;

interface __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageStatics_FindPackagesAsync(This,queryPoint,result) \
    ( (This)->lpVtbl->FindPackagesAsync(This,queryPoint,result) )

#define __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageStatics_FindPackagesInBoundingBoxAsync(This,queryBoundingBox,result) \
    ( (This)->lpVtbl->FindPackagesInBoundingBoxAsync(This,queryBoundingBox,result) )

#define __x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageStatics_FindPackagesInGeocircleAsync(This,queryCircle,result) \
    ( (This)->lpVtbl->FindPackagesInGeocircleAsync(This,queryCircle,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageStatics;
#endif /* !defined(____x_ABI_CWindows_CServices_CMaps_COfflineMaps_CIOfflineMapPackageStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.Services.Maps.OfflineMaps.OfflineMapPackage
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Services.Maps.OfflineMaps.IOfflineMapPackageStatics interface starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Services.Maps.OfflineMaps.IOfflineMapPackage ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_Services_Maps_OfflineMaps_OfflineMapPackage_DEFINED
#define RUNTIMECLASS_Windows_Services_Maps_OfflineMaps_OfflineMapPackage_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_Maps_OfflineMaps_OfflineMapPackage[] = L"Windows.Services.Maps.OfflineMaps.OfflineMapPackage";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.Services.Maps.OfflineMaps.OfflineMapPackageQueryResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Services.Maps.OfflineMaps.IOfflineMapPackageQueryResult ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_Services_Maps_OfflineMaps_OfflineMapPackageQueryResult_DEFINED
#define RUNTIMECLASS_Windows_Services_Maps_OfflineMaps_OfflineMapPackageQueryResult_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_Maps_OfflineMaps_OfflineMapPackageQueryResult[] = L"Windows.Services.Maps.OfflineMaps.OfflineMapPackageQueryResult";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.Services.Maps.OfflineMaps.OfflineMapPackageStartDownloadResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Services.Maps.OfflineMaps.IOfflineMapPackageStartDownloadResult ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_Services_Maps_OfflineMaps_OfflineMapPackageStartDownloadResult_DEFINED
#define RUNTIMECLASS_Windows_Services_Maps_OfflineMaps_OfflineMapPackageStartDownloadResult_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_Maps_OfflineMaps_OfflineMapPackageStartDownloadResult[] = L"Windows.Services.Maps.OfflineMaps.OfflineMapPackageStartDownloadResult";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000





#endif // defined(__cplusplus)
#pragma pop_macro("MIDL_CONST_ID")
// Restore the original value of the 'DEPRECATED' macro
#pragma pop_macro("DEPRECATED")

#ifdef __clang__
#pragma clang diagnostic pop // deprecated-declarations
#else
#pragma warning(pop)
#endif
#endif // __windows2Eservices2Emaps2Eofflinemaps_p_h__

#endif // __windows2Eservices2Emaps2Eofflinemaps_h__
