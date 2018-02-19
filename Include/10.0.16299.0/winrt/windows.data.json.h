/* Header file automatically generated from windows.data.json.idl */
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
#ifndef __windows2Edata2Ejson_h__
#define __windows2Edata2Ejson_h__
#ifndef __windows2Edata2Ejson_p_h__
#define __windows2Edata2Ejson_p_h__


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
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CData_CJson_CIJsonArray_FWD_DEFINED__
#define ____x_ABI_CWindows_CData_CJson_CIJsonArray_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Data {
            namespace Json {
                interface IJsonArray;
            } /* Windows */
        } /* Data */
    } /* Json */} /* ABI */
#define __x_ABI_CWindows_CData_CJson_CIJsonArray ABI::Windows::Data::Json::IJsonArray

#endif // ____x_ABI_CWindows_CData_CJson_CIJsonArray_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CData_CJson_CIJsonArrayStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CData_CJson_CIJsonArrayStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Data {
            namespace Json {
                interface IJsonArrayStatics;
            } /* Windows */
        } /* Data */
    } /* Json */} /* ABI */
#define __x_ABI_CWindows_CData_CJson_CIJsonArrayStatics ABI::Windows::Data::Json::IJsonArrayStatics

#endif // ____x_ABI_CWindows_CData_CJson_CIJsonArrayStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CData_CJson_CIJsonErrorStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CData_CJson_CIJsonErrorStatics2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Data {
            namespace Json {
                interface IJsonErrorStatics2;
            } /* Windows */
        } /* Data */
    } /* Json */} /* ABI */
#define __x_ABI_CWindows_CData_CJson_CIJsonErrorStatics2 ABI::Windows::Data::Json::IJsonErrorStatics2

#endif // ____x_ABI_CWindows_CData_CJson_CIJsonErrorStatics2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CData_CJson_CIJsonObject_FWD_DEFINED__
#define ____x_ABI_CWindows_CData_CJson_CIJsonObject_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Data {
            namespace Json {
                interface IJsonObject;
            } /* Windows */
        } /* Data */
    } /* Json */} /* ABI */
#define __x_ABI_CWindows_CData_CJson_CIJsonObject ABI::Windows::Data::Json::IJsonObject

#endif // ____x_ABI_CWindows_CData_CJson_CIJsonObject_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CData_CJson_CIJsonObjectStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CData_CJson_CIJsonObjectStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Data {
            namespace Json {
                interface IJsonObjectStatics;
            } /* Windows */
        } /* Data */
    } /* Json */} /* ABI */
#define __x_ABI_CWindows_CData_CJson_CIJsonObjectStatics ABI::Windows::Data::Json::IJsonObjectStatics

#endif // ____x_ABI_CWindows_CData_CJson_CIJsonObjectStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CData_CJson_CIJsonObjectWithDefaultValues_FWD_DEFINED__
#define ____x_ABI_CWindows_CData_CJson_CIJsonObjectWithDefaultValues_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Data {
            namespace Json {
                interface IJsonObjectWithDefaultValues;
            } /* Windows */
        } /* Data */
    } /* Json */} /* ABI */
#define __x_ABI_CWindows_CData_CJson_CIJsonObjectWithDefaultValues ABI::Windows::Data::Json::IJsonObjectWithDefaultValues

#endif // ____x_ABI_CWindows_CData_CJson_CIJsonObjectWithDefaultValues_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CData_CJson_CIJsonValue_FWD_DEFINED__
#define ____x_ABI_CWindows_CData_CJson_CIJsonValue_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Data {
            namespace Json {
                interface IJsonValue;
            } /* Windows */
        } /* Data */
    } /* Json */} /* ABI */
#define __x_ABI_CWindows_CData_CJson_CIJsonValue ABI::Windows::Data::Json::IJsonValue

#endif // ____x_ABI_CWindows_CData_CJson_CIJsonValue_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CData_CJson_CIJsonValueStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CData_CJson_CIJsonValueStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Data {
            namespace Json {
                interface IJsonValueStatics;
            } /* Windows */
        } /* Data */
    } /* Json */} /* ABI */
#define __x_ABI_CWindows_CData_CJson_CIJsonValueStatics ABI::Windows::Data::Json::IJsonValueStatics

#endif // ____x_ABI_CWindows_CData_CJson_CIJsonValueStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CData_CJson_CIJsonValueStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CData_CJson_CIJsonValueStatics2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Data {
            namespace Json {
                interface IJsonValueStatics2;
            } /* Windows */
        } /* Data */
    } /* Json */} /* ABI */
#define __x_ABI_CWindows_CData_CJson_CIJsonValueStatics2 ABI::Windows::Data::Json::IJsonValueStatics2

#endif // ____x_ABI_CWindows_CData_CJson_CIJsonValueStatics2_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CData__CJson__CIJsonValue_USE
#define DEF___FIIterator_1_Windows__CData__CJson__CIJsonValue_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("189eb512-5a20-5ec6-9866-60af96f0d23b"))
IIterator<ABI::Windows::Data::Json::IJsonValue*> : IIterator_impl<ABI::Windows::Data::Json::IJsonValue*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Data.Json.IJsonValue>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Data::Json::IJsonValue*> __FIIterator_1_Windows__CData__CJson__CIJsonValue_t;
#define __FIIterator_1_Windows__CData__CJson__CIJsonValue ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CData__CJson__CIJsonValue_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CData__CJson__CIJsonValue ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Data::Json::IJsonValue*>
//#define __FIIterator_1_Windows__CData__CJson__CIJsonValue_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Data::Json::IJsonValue*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CData__CJson__CIJsonValue_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CData__CJson__CIJsonValue_USE
#define DEF___FIIterable_1_Windows__CData__CJson__CIJsonValue_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("cb0492b6-4113-55cf-b2c5-99eb428ba493"))
IIterable<ABI::Windows::Data::Json::IJsonValue*> : IIterable_impl<ABI::Windows::Data::Json::IJsonValue*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Data.Json.IJsonValue>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Data::Json::IJsonValue*> __FIIterable_1_Windows__CData__CJson__CIJsonValue_t;
#define __FIIterable_1_Windows__CData__CJson__CIJsonValue ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CData__CJson__CIJsonValue_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CData__CJson__CIJsonValue ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Data::Json::IJsonValue*>
//#define __FIIterable_1_Windows__CData__CJson__CIJsonValue_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Data::Json::IJsonValue*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CData__CJson__CIJsonValue_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue_USE
#define DEF___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("4deecc89-b0b8-5ee8-a51d-1c25ad9a5b01"))
IKeyValuePair<HSTRING,ABI::Windows::Data::Json::IJsonValue*> : IKeyValuePair_impl<HSTRING,ABI::Windows::Data::Json::IJsonValue*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IKeyValuePair`2<String, Windows.Data.Json.IJsonValue>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IKeyValuePair<HSTRING,ABI::Windows::Data::Json::IJsonValue*> __FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue_t;
#define __FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue ABI::Windows::Foundation::Collections::__FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,ABI::Windows::Data::Json::IJsonValue*>
//#define __FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue_t ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,ABI::Windows::Data::Json::IJsonValue*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue_USE
#define DEF___FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("f948eac5-33eb-50f5-b5af-e7cecf0e4501"))
IIterator<__FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue*> : IIterator_impl<__FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Foundation.Collections.IKeyValuePair`2<String, Windows.Data.Json.IJsonValue>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<__FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue*> __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue_t;
#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue ABI::Windows::Foundation::Collections::__FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,ABI::Windows::Data::Json::IJsonValue*>*>
//#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,ABI::Windows::Data::Json::IJsonValue*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue_USE
#define DEF___FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("dfabb6e1-0411-5a8f-aa87-354e7110f099"))
IIterable<__FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue*> : IIterable_impl<__FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Foundation.Collections.IKeyValuePair`2<String, Windows.Data.Json.IJsonValue>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<__FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue*> __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue_t;
#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue ABI::Windows::Foundation::Collections::__FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,ABI::Windows::Data::Json::IJsonValue*>*>
//#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,ABI::Windows::Data::Json::IJsonValue*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIMapView_2_HSTRING_Windows__CData__CJson__CIJsonValue_USE
#define DEF___FIMapView_2_HSTRING_Windows__CData__CJson__CIJsonValue_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("eecd690c-1ff3-529f-923f-9b1c31fd3d0f"))
IMapView<HSTRING,ABI::Windows::Data::Json::IJsonValue*> : IMapView_impl<HSTRING,ABI::Windows::Data::Json::IJsonValue*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IMapView`2<String, Windows.Data.Json.IJsonValue>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IMapView<HSTRING,ABI::Windows::Data::Json::IJsonValue*> __FIMapView_2_HSTRING_Windows__CData__CJson__CIJsonValue_t;
#define __FIMapView_2_HSTRING_Windows__CData__CJson__CIJsonValue ABI::Windows::Foundation::Collections::__FIMapView_2_HSTRING_Windows__CData__CJson__CIJsonValue_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIMapView_2_HSTRING_Windows__CData__CJson__CIJsonValue ABI::Windows::Foundation::Collections::IMapView<HSTRING,ABI::Windows::Data::Json::IJsonValue*>
//#define __FIMapView_2_HSTRING_Windows__CData__CJson__CIJsonValue_t ABI::Windows::Foundation::Collections::IMapView<HSTRING,ABI::Windows::Data::Json::IJsonValue*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIMapView_2_HSTRING_Windows__CData__CJson__CIJsonValue_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIMap_2_HSTRING_Windows__CData__CJson__CIJsonValue_USE
#define DEF___FIMap_2_HSTRING_Windows__CData__CJson__CIJsonValue_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("c9d9a725-786b-5113-b4b7-9b61764c220b"))
IMap<HSTRING,ABI::Windows::Data::Json::IJsonValue*> : IMap_impl<HSTRING,ABI::Windows::Data::Json::IJsonValue*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IMap`2<String, Windows.Data.Json.IJsonValue>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IMap<HSTRING,ABI::Windows::Data::Json::IJsonValue*> __FIMap_2_HSTRING_Windows__CData__CJson__CIJsonValue_t;
#define __FIMap_2_HSTRING_Windows__CData__CJson__CIJsonValue ABI::Windows::Foundation::Collections::__FIMap_2_HSTRING_Windows__CData__CJson__CIJsonValue_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIMap_2_HSTRING_Windows__CData__CJson__CIJsonValue ABI::Windows::Foundation::Collections::IMap<HSTRING,ABI::Windows::Data::Json::IJsonValue*>
//#define __FIMap_2_HSTRING_Windows__CData__CJson__CIJsonValue_t ABI::Windows::Foundation::Collections::IMap<HSTRING,ABI::Windows::Data::Json::IJsonValue*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIMap_2_HSTRING_Windows__CData__CJson__CIJsonValue_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CData__CJson__CIJsonValue_USE
#define DEF___FIVectorView_1_Windows__CData__CJson__CIJsonValue_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("cffabb0f-6bc4-5ff6-9b9e-7a9df6c687c8"))
IVectorView<ABI::Windows::Data::Json::IJsonValue*> : IVectorView_impl<ABI::Windows::Data::Json::IJsonValue*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Data.Json.IJsonValue>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Data::Json::IJsonValue*> __FIVectorView_1_Windows__CData__CJson__CIJsonValue_t;
#define __FIVectorView_1_Windows__CData__CJson__CIJsonValue ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CData__CJson__CIJsonValue_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CData__CJson__CIJsonValue ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Data::Json::IJsonValue*>
//#define __FIVectorView_1_Windows__CData__CJson__CIJsonValue_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Data::Json::IJsonValue*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CData__CJson__CIJsonValue_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVector_1_Windows__CData__CJson__CIJsonValue_USE
#define DEF___FIVector_1_Windows__CData__CJson__CIJsonValue_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("d44662bc-dce3-59a8-9272-4b210f33908b"))
IVector<ABI::Windows::Data::Json::IJsonValue*> : IVector_impl<ABI::Windows::Data::Json::IJsonValue*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVector`1<Windows.Data.Json.IJsonValue>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVector<ABI::Windows::Data::Json::IJsonValue*> __FIVector_1_Windows__CData__CJson__CIJsonValue_t;
#define __FIVector_1_Windows__CData__CJson__CIJsonValue ABI::Windows::Foundation::Collections::__FIVector_1_Windows__CData__CJson__CIJsonValue_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVector_1_Windows__CData__CJson__CIJsonValue ABI::Windows::Foundation::Collections::IVector<ABI::Windows::Data::Json::IJsonValue*>
//#define __FIVector_1_Windows__CData__CJson__CIJsonValue_t ABI::Windows::Foundation::Collections::IVector<ABI::Windows::Data::Json::IJsonValue*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVector_1_Windows__CData__CJson__CIJsonValue_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#ifndef ____x_ABI_CWindows_CFoundation_CIStringable_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIStringable_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Foundation {
            interface IStringable;
        } /* Windows */
    } /* Foundation */} /* ABI */
#define __x_ABI_CWindows_CFoundation_CIStringable ABI::Windows::Foundation::IStringable

#endif // ____x_ABI_CWindows_CFoundation_CIStringable_FWD_DEFINED__





namespace ABI {
    namespace Windows {
        namespace Data {
            namespace Json {
                
                typedef enum JsonErrorStatus : int JsonErrorStatus;
                
            } /* Windows */
        } /* Data */
    } /* Json */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Data {
            namespace Json {
                
                typedef enum JsonValueType : int JsonValueType;
                
            } /* Windows */
        } /* Data */
    } /* Json */} /* ABI */










namespace ABI {
    namespace Windows {
        namespace Data {
            namespace Json {
                class JsonArray;
            } /* Windows */
        } /* Data */
    } /* Json */} /* ABI */



namespace ABI {
    namespace Windows {
        namespace Data {
            namespace Json {
                class JsonObject;
            } /* Windows */
        } /* Data */
    } /* Json */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Data {
            namespace Json {
                class JsonValue;
            } /* Windows */
        } /* Data */
    } /* Json */} /* ABI */










/*
 *
 * Struct Windows.Data.Json.JsonErrorStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Data {
            namespace Json {
                /* [v1_enum, contract] */
                enum JsonErrorStatus : int
                {
                    JsonErrorStatus_Unknown = 0,
                    JsonErrorStatus_InvalidJsonString = 1,
                    JsonErrorStatus_InvalidJsonNumber = 2,
                    JsonErrorStatus_JsonValueNotFound = 3,
                    JsonErrorStatus_ImplementationLimit = 4,
                };
                
            } /* Windows */
        } /* Data */
    } /* Json */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Data.Json.JsonValueType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Data {
            namespace Json {
                /* [v1_enum, contract] */
                enum JsonValueType : int
                {
                    JsonValueType_Null = 0,
                    JsonValueType_Boolean = 1,
                    JsonValueType_Number = 2,
                    JsonValueType_String = 3,
                    JsonValueType_Array = 4,
                    JsonValueType_Object = 5,
                };
                
            } /* Windows */
        } /* Data */
    } /* Json */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Data.Json.IJsonArray
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Data.Json.JsonArray
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Data.Json.IJsonValue
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CData_CJson_CIJsonArray_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CData_CJson_CIJsonArray_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Data_Json_IJsonArray[] = L"Windows.Data.Json.IJsonArray";
namespace ABI {
    namespace Windows {
        namespace Data {
            namespace Json {
                /* [object, uuid("08C1DDB6-0CBD-4A9A-B5D3-2F852DC37E81"), exclusiveto, contract] */
                MIDL_INTERFACE("08C1DDB6-0CBD-4A9A-B5D3-2F852DC37E81")
                IJsonArray : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE GetObjectAt(
                        /* [in] */UINT32 index,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Data::Json::IJsonObject * * returnValue
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetArrayAt(
                        /* [in] */UINT32 index,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Data::Json::IJsonArray * * returnValue
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetStringAt(
                        /* [in] */UINT32 index,
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * returnValue
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetNumberAt(
                        /* [in] */UINT32 index,
                        /* [retval, out] */__RPC__out DOUBLE * returnValue
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetBooleanAt(
                        /* [in] */UINT32 index,
                        /* [retval, out] */__RPC__out boolean * returnValue
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IJsonArray=_uuidof(IJsonArray);
                
            } /* Windows */
        } /* Data */
    } /* Json */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CData_CJson_CIJsonArray;
#endif /* !defined(____x_ABI_CWindows_CData_CJson_CIJsonArray_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Data.Json.IJsonArrayStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Data.Json.JsonArray
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CData_CJson_CIJsonArrayStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CData_CJson_CIJsonArrayStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Data_Json_IJsonArrayStatics[] = L"Windows.Data.Json.IJsonArrayStatics";
namespace ABI {
    namespace Windows {
        namespace Data {
            namespace Json {
                /* [object, uuid("DB1434A9-E164-499F-93E2-8A8F49BB90BA"), exclusiveto, contract] */
                MIDL_INTERFACE("DB1434A9-E164-499F-93E2-8A8F49BB90BA")
                IJsonArrayStatics : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE Parse(
                        /* [in] */__RPC__in HSTRING input,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Data::Json::IJsonArray * * jsonArray
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE TryParse(
                        /* [in] */__RPC__in HSTRING input,
                        /* [out] */__RPC__deref_out_opt ABI::Windows::Data::Json::IJsonArray * * result,
                        /* [retval, out] */__RPC__out boolean * succeeded
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IJsonArrayStatics=_uuidof(IJsonArrayStatics);
                
            } /* Windows */
        } /* Data */
    } /* Json */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CData_CJson_CIJsonArrayStatics;
#endif /* !defined(____x_ABI_CWindows_CData_CJson_CIJsonArrayStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Data.Json.IJsonErrorStatics2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Data.Json.JsonError
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CData_CJson_CIJsonErrorStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CData_CJson_CIJsonErrorStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Data_Json_IJsonErrorStatics2[] = L"Windows.Data.Json.IJsonErrorStatics2";
namespace ABI {
    namespace Windows {
        namespace Data {
            namespace Json {
                /* [object, uuid("404030DA-87D0-436C-83AB-FC7B12C0CC26"), exclusiveto, contract] */
                MIDL_INTERFACE("404030DA-87D0-436C-83AB-FC7B12C0CC26")
                IJsonErrorStatics2 : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE GetJsonStatus(
                        /* [in] */INT32 hresult,
                        /* [retval, out] */__RPC__out ABI::Windows::Data::Json::JsonErrorStatus * status
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IJsonErrorStatics2=_uuidof(IJsonErrorStatics2);
                
            } /* Windows */
        } /* Data */
    } /* Json */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CData_CJson_CIJsonErrorStatics2;
#endif /* !defined(____x_ABI_CWindows_CData_CJson_CIJsonErrorStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Data.Json.IJsonObject
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Data.Json.JsonObject
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Data.Json.IJsonValue
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CData_CJson_CIJsonObject_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CData_CJson_CIJsonObject_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Data_Json_IJsonObject[] = L"Windows.Data.Json.IJsonObject";
namespace ABI {
    namespace Windows {
        namespace Data {
            namespace Json {
                /* [object, uuid("064E24DD-29C2-4F83-9AC1-9EE11578BEB3"), exclusiveto, contract] */
                MIDL_INTERFACE("064E24DD-29C2-4F83-9AC1-9EE11578BEB3")
                IJsonObject : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE GetNamedValue(
                        /* [in] */__RPC__in HSTRING name,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Data::Json::IJsonValue * * returnValue
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE SetNamedValue(
                        /* [in] */__RPC__in HSTRING name,
                        /* [in] */__RPC__in_opt ABI::Windows::Data::Json::IJsonValue * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetNamedObject(
                        /* [in] */__RPC__in HSTRING name,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Data::Json::IJsonObject * * returnValue
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetNamedArray(
                        /* [in] */__RPC__in HSTRING name,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Data::Json::IJsonArray * * returnValue
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetNamedString(
                        /* [in] */__RPC__in HSTRING name,
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * returnValue
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetNamedNumber(
                        /* [in] */__RPC__in HSTRING name,
                        /* [retval, out] */__RPC__out DOUBLE * returnValue
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetNamedBoolean(
                        /* [in] */__RPC__in HSTRING name,
                        /* [retval, out] */__RPC__out boolean * returnValue
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IJsonObject=_uuidof(IJsonObject);
                
            } /* Windows */
        } /* Data */
    } /* Json */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CData_CJson_CIJsonObject;
#endif /* !defined(____x_ABI_CWindows_CData_CJson_CIJsonObject_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Data.Json.IJsonObjectStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Data.Json.JsonObject
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CData_CJson_CIJsonObjectStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CData_CJson_CIJsonObjectStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Data_Json_IJsonObjectStatics[] = L"Windows.Data.Json.IJsonObjectStatics";
namespace ABI {
    namespace Windows {
        namespace Data {
            namespace Json {
                /* [object, uuid("2289F159-54DE-45D8-ABCC-22603FA066A0"), exclusiveto, contract] */
                MIDL_INTERFACE("2289F159-54DE-45D8-ABCC-22603FA066A0")
                IJsonObjectStatics : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE Parse(
                        /* [in] */__RPC__in HSTRING input,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Data::Json::IJsonObject * * jsonObject
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE TryParse(
                        /* [in] */__RPC__in HSTRING input,
                        /* [out] */__RPC__deref_out_opt ABI::Windows::Data::Json::IJsonObject * * result,
                        /* [retval, out] */__RPC__out boolean * succeeded
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IJsonObjectStatics=_uuidof(IJsonObjectStatics);
                
            } /* Windows */
        } /* Data */
    } /* Json */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CData_CJson_CIJsonObjectStatics;
#endif /* !defined(____x_ABI_CWindows_CData_CJson_CIJsonObjectStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Data.Json.IJsonObjectWithDefaultValues
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Data.Json.JsonObject
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Data.Json.IJsonObject
 *     Windows.Data.Json.IJsonValue
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CData_CJson_CIJsonObjectWithDefaultValues_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CData_CJson_CIJsonObjectWithDefaultValues_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Data_Json_IJsonObjectWithDefaultValues[] = L"Windows.Data.Json.IJsonObjectWithDefaultValues";
namespace ABI {
    namespace Windows {
        namespace Data {
            namespace Json {
                /* [object, uuid("D960D2A2-B7F0-4F00-8E44-D82CF415EA13"), exclusiveto, contract] */
                MIDL_INTERFACE("D960D2A2-B7F0-4F00-8E44-D82CF415EA13")
                IJsonObjectWithDefaultValues : IInspectable
                {
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE GetNamedValueOrDefault(
                        /* [in] */__RPC__in HSTRING name,
                        /* [in] */__RPC__in_opt ABI::Windows::Data::Json::IJsonValue * defaultValue,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Data::Json::IJsonValue * * returnValue
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE GetNamedObjectOrDefault(
                        /* [in] */__RPC__in HSTRING name,
                        /* [in] */__RPC__in_opt ABI::Windows::Data::Json::IJsonObject * defaultValue,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Data::Json::IJsonObject * * returnValue
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE GetNamedStringOrDefault(
                        /* [in] */__RPC__in HSTRING name,
                        /* [in] */__RPC__in HSTRING defaultValue,
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * returnValue
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE GetNamedArrayOrDefault(
                        /* [in] */__RPC__in HSTRING name,
                        /* [in] */__RPC__in_opt ABI::Windows::Data::Json::IJsonArray * defaultValue,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Data::Json::IJsonArray * * returnValue
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE GetNamedNumberOrDefault(
                        /* [in] */__RPC__in HSTRING name,
                        /* [in] */DOUBLE defaultValue,
                        /* [retval, out] */__RPC__out DOUBLE * returnValue
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE GetNamedBooleanOrDefault(
                        /* [in] */__RPC__in HSTRING name,
                        /* [in] */boolean defaultValue,
                        /* [retval, out] */__RPC__out boolean * returnValue
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IJsonObjectWithDefaultValues=_uuidof(IJsonObjectWithDefaultValues);
                
            } /* Windows */
        } /* Data */
    } /* Json */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CData_CJson_CIJsonObjectWithDefaultValues;
#endif /* !defined(____x_ABI_CWindows_CData_CJson_CIJsonObjectWithDefaultValues_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Data.Json.IJsonValue
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CData_CJson_CIJsonValue_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CData_CJson_CIJsonValue_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Data_Json_IJsonValue[] = L"Windows.Data.Json.IJsonValue";
namespace ABI {
    namespace Windows {
        namespace Data {
            namespace Json {
                /* [object, uuid("A3219ECB-F0B3-4DCD-BEEE-19D48CD3ED1E"), contract] */
                MIDL_INTERFACE("A3219ECB-F0B3-4DCD-BEEE-19D48CD3ED1E")
                IJsonValue : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ValueType(
                        /* [retval, out] */__RPC__out ABI::Windows::Data::Json::JsonValueType * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE Stringify(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * returnValue
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetString(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * returnValue
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetNumber(
                        /* [retval, out] */__RPC__out DOUBLE * returnValue
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetBoolean(
                        /* [retval, out] */__RPC__out boolean * returnValue
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetArray(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Data::Json::IJsonArray * * returnValue
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetObject(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Data::Json::IJsonObject * * returnValue
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IJsonValue=_uuidof(IJsonValue);
                
            } /* Windows */
        } /* Data */
    } /* Json */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CData_CJson_CIJsonValue;
#endif /* !defined(____x_ABI_CWindows_CData_CJson_CIJsonValue_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Data.Json.IJsonValueStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Data.Json.JsonValue
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CData_CJson_CIJsonValueStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CData_CJson_CIJsonValueStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Data_Json_IJsonValueStatics[] = L"Windows.Data.Json.IJsonValueStatics";
namespace ABI {
    namespace Windows {
        namespace Data {
            namespace Json {
                /* [object, uuid("5F6B544A-2F53-48E1-91A3-F78B50A6345C"), exclusiveto, contract] */
                MIDL_INTERFACE("5F6B544A-2F53-48E1-91A3-F78B50A6345C")
                IJsonValueStatics : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE Parse(
                        /* [in] */__RPC__in HSTRING input,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Data::Json::IJsonValue * * jsonValue
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE TryParse(
                        /* [in] */__RPC__in HSTRING input,
                        /* [out] */__RPC__deref_out_opt ABI::Windows::Data::Json::IJsonValue * * result,
                        /* [retval, out] */__RPC__out boolean * succeeded
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateBooleanValue(
                        /* [in] */boolean input,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Data::Json::IJsonValue * * jsonValue
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateNumberValue(
                        /* [in] */DOUBLE input,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Data::Json::IJsonValue * * jsonValue
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateStringValue(
                        /* [in] */__RPC__in HSTRING input,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Data::Json::IJsonValue * * jsonValue
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IJsonValueStatics=_uuidof(IJsonValueStatics);
                
            } /* Windows */
        } /* Data */
    } /* Json */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CData_CJson_CIJsonValueStatics;
#endif /* !defined(____x_ABI_CWindows_CData_CJson_CIJsonValueStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Data.Json.IJsonValueStatics2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Data.Json.JsonValue
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CData_CJson_CIJsonValueStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CData_CJson_CIJsonValueStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Data_Json_IJsonValueStatics2[] = L"Windows.Data.Json.IJsonValueStatics2";
namespace ABI {
    namespace Windows {
        namespace Data {
            namespace Json {
                /* [object, uuid("1D9ECBE4-3FE8-4335-8392-93D8E36865F0"), exclusiveto, contract] */
                MIDL_INTERFACE("1D9ECBE4-3FE8-4335-8392-93D8E36865F0")
                IJsonValueStatics2 : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE CreateNullValue(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Data::Json::IJsonValue * * jsonValue
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IJsonValueStatics2=_uuidof(IJsonValueStatics2);
                
            } /* Windows */
        } /* Data */
    } /* Json */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CData_CJson_CIJsonValueStatics2;
#endif /* !defined(____x_ABI_CWindows_CData_CJson_CIJsonValueStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Data.Json.JsonArray
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Data.Json.IJsonArrayStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Data.Json.IJsonArray ** Default Interface **
 *    Windows.Data.Json.IJsonValue
 *    Windows.Foundation.Collections.IVector_1_Windows.Data.Json.IJsonValue
 *    Windows.Foundation.Collections.IIterable_1_Windows.Data.Json.IJsonValue
 *    Windows.Foundation.IStringable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Data_Json_JsonArray_DEFINED
#define RUNTIMECLASS_Windows_Data_Json_JsonArray_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Data_Json_JsonArray[] = L"Windows.Data.Json.JsonArray";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Data.Json.JsonError
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Data.Json.IJsonErrorStatics2 interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_Data_Json_JsonError_DEFINED
#define RUNTIMECLASS_Windows_Data_Json_JsonError_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Data_Json_JsonError[] = L"Windows.Data.Json.JsonError";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Data.Json.JsonObject
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Data.Json.IJsonObjectStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Data.Json.IJsonObject ** Default Interface **
 *    Windows.Data.Json.IJsonValue
 *    Windows.Foundation.Collections.IMap_2_HSTRING,Windows.Data.Json.IJsonValue
 *    Windows.Foundation.Collections.IIterable_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue
 *    Windows.Data.Json.IJsonObjectWithDefaultValues
 *    Windows.Foundation.IStringable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Data_Json_JsonObject_DEFINED
#define RUNTIMECLASS_Windows_Data_Json_JsonObject_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Data_Json_JsonObject[] = L"Windows.Data.Json.JsonObject";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Data.Json.JsonValue
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Data.Json.IJsonValueStatics2 interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.Data.Json.IJsonValueStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Data.Json.IJsonValue ** Default Interface **
 *    Windows.Foundation.IStringable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Data_Json_JsonValue_DEFINED
#define RUNTIMECLASS_Windows_Data_Json_JsonValue_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Data_Json_JsonValue[] = L"Windows.Data.Json.JsonValue";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000




#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CData_CJson_CIJsonArray_FWD_DEFINED__
#define ____x_ABI_CWindows_CData_CJson_CIJsonArray_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CData_CJson_CIJsonArray __x_ABI_CWindows_CData_CJson_CIJsonArray;

#endif // ____x_ABI_CWindows_CData_CJson_CIJsonArray_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CData_CJson_CIJsonArrayStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CData_CJson_CIJsonArrayStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CData_CJson_CIJsonArrayStatics __x_ABI_CWindows_CData_CJson_CIJsonArrayStatics;

#endif // ____x_ABI_CWindows_CData_CJson_CIJsonArrayStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CData_CJson_CIJsonErrorStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CData_CJson_CIJsonErrorStatics2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CData_CJson_CIJsonErrorStatics2 __x_ABI_CWindows_CData_CJson_CIJsonErrorStatics2;

#endif // ____x_ABI_CWindows_CData_CJson_CIJsonErrorStatics2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CData_CJson_CIJsonObject_FWD_DEFINED__
#define ____x_ABI_CWindows_CData_CJson_CIJsonObject_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CData_CJson_CIJsonObject __x_ABI_CWindows_CData_CJson_CIJsonObject;

#endif // ____x_ABI_CWindows_CData_CJson_CIJsonObject_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CData_CJson_CIJsonObjectStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CData_CJson_CIJsonObjectStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CData_CJson_CIJsonObjectStatics __x_ABI_CWindows_CData_CJson_CIJsonObjectStatics;

#endif // ____x_ABI_CWindows_CData_CJson_CIJsonObjectStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CData_CJson_CIJsonObjectWithDefaultValues_FWD_DEFINED__
#define ____x_ABI_CWindows_CData_CJson_CIJsonObjectWithDefaultValues_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CData_CJson_CIJsonObjectWithDefaultValues __x_ABI_CWindows_CData_CJson_CIJsonObjectWithDefaultValues;

#endif // ____x_ABI_CWindows_CData_CJson_CIJsonObjectWithDefaultValues_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CData_CJson_CIJsonValue_FWD_DEFINED__
#define ____x_ABI_CWindows_CData_CJson_CIJsonValue_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CData_CJson_CIJsonValue __x_ABI_CWindows_CData_CJson_CIJsonValue;

#endif // ____x_ABI_CWindows_CData_CJson_CIJsonValue_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CData_CJson_CIJsonValueStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CData_CJson_CIJsonValueStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CData_CJson_CIJsonValueStatics __x_ABI_CWindows_CData_CJson_CIJsonValueStatics;

#endif // ____x_ABI_CWindows_CData_CJson_CIJsonValueStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CData_CJson_CIJsonValueStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CData_CJson_CIJsonValueStatics2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CData_CJson_CIJsonValueStatics2 __x_ABI_CWindows_CData_CJson_CIJsonValueStatics2;

#endif // ____x_ABI_CWindows_CData_CJson_CIJsonValueStatics2_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CData__CJson__CIJsonValue_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CData__CJson__CIJsonValue_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CData__CJson__CIJsonValue __FIIterator_1_Windows__CData__CJson__CIJsonValue;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CData__CJson__CIJsonValue;

typedef struct __FIIterator_1_Windows__CData__CJson__CIJsonValueVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CData__CJson__CIJsonValue * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CData__CJson__CIJsonValue * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CData__CJson__CIJsonValue * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CData__CJson__CIJsonValue * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CData__CJson__CIJsonValue * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CData__CJson__CIJsonValue * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CData__CJson__CIJsonValue * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CData_CJson_CIJsonValue * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CData__CJson__CIJsonValue * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CData__CJson__CIJsonValue * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CData__CJson__CIJsonValue * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CData_CJson_CIJsonValue * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CData__CJson__CIJsonValueVtbl;

interface __FIIterator_1_Windows__CData__CJson__CIJsonValue
{
    CONST_VTBL struct __FIIterator_1_Windows__CData__CJson__CIJsonValueVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CData__CJson__CIJsonValue_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CData__CJson__CIJsonValue_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CData__CJson__CIJsonValue_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CData__CJson__CIJsonValue_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CData__CJson__CIJsonValue_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CData__CJson__CIJsonValue_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CData__CJson__CIJsonValue_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CData__CJson__CIJsonValue_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CData__CJson__CIJsonValue_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CData__CJson__CIJsonValue_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CData__CJson__CIJsonValue_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CData__CJson__CIJsonValue_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CData__CJson__CIJsonValue_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CData__CJson__CIJsonValue __FIIterable_1_Windows__CData__CJson__CIJsonValue;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CData__CJson__CIJsonValue;

typedef  struct __FIIterable_1_Windows__CData__CJson__CIJsonValueVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CData__CJson__CIJsonValue * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CData__CJson__CIJsonValue * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CData__CJson__CIJsonValue * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CData__CJson__CIJsonValue * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CData__CJson__CIJsonValue * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CData__CJson__CIJsonValue * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CData__CJson__CIJsonValue * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CData__CJson__CIJsonValue **first);

    END_INTERFACE
} __FIIterable_1_Windows__CData__CJson__CIJsonValueVtbl;

interface __FIIterable_1_Windows__CData__CJson__CIJsonValue
{
    CONST_VTBL struct __FIIterable_1_Windows__CData__CJson__CIJsonValueVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CData__CJson__CIJsonValue_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CData__CJson__CIJsonValue_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CData__CJson__CIJsonValue_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CData__CJson__CIJsonValue_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CData__CJson__CIJsonValue_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CData__CJson__CIJsonValue_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CData__CJson__CIJsonValue_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CData__CJson__CIJsonValue_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue_INTERFACE_DEFINED__)
#define ____FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue_INTERFACE_DEFINED__

typedef interface __FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue __FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue;

typedef struct __FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValueVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Key )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue * This, /* [retval][out] */ __RPC__out HSTRING *key);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue * This, /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CData_CJson_CIJsonValue * *value);
    END_INTERFACE
} __FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValueVtbl;

interface __FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue
{
    CONST_VTBL struct __FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValueVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue_get_Key(This,key)	\
    ( (This)->lpVtbl -> get_Key(This,key) ) 

#define __FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue_get_Value(This,value)	\
    ( (This)->lpVtbl -> get_Value(This,value) ) 
#endif /* COBJMACROS */


#endif // ____FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue_INTERFACE_DEFINED__)
#define ____FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue_INTERFACE_DEFINED__

typedef interface __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue;

typedef struct __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValueVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue * This, /* [retval][out] */ __RPC__out __FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValueVtbl;

interface __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue
{
    CONST_VTBL struct __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValueVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue_INTERFACE_DEFINED__)
#define ____FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue_INTERFACE_DEFINED__

typedef interface __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue;

typedef  struct __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValueVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue **first);

    END_INTERFACE
} __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValueVtbl;

interface __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue
{
    CONST_VTBL struct __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValueVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIMapView_2_HSTRING_Windows__CData__CJson__CIJsonValue_INTERFACE_DEFINED__)
#define ____FIMapView_2_HSTRING_Windows__CData__CJson__CIJsonValue_INTERFACE_DEFINED__

typedef interface __FIMapView_2_HSTRING_Windows__CData__CJson__CIJsonValue __FIMapView_2_HSTRING_Windows__CData__CJson__CIJsonValue;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIMapView_2_HSTRING_Windows__CData__CJson__CIJsonValue;

typedef struct __FIMapView_2_HSTRING_Windows__CData__CJson__CIJsonValueVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMapView_2_HSTRING_Windows__CData__CJson__CIJsonValue * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMapView_2_HSTRING_Windows__CData__CJson__CIJsonValue * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMapView_2_HSTRING_Windows__CData__CJson__CIJsonValue * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMapView_2_HSTRING_Windows__CData__CJson__CIJsonValue * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMapView_2_HSTRING_Windows__CData__CJson__CIJsonValue * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMapView_2_HSTRING_Windows__CData__CJson__CIJsonValue * This,/* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *Lookup )(__RPC__in __FIMapView_2_HSTRING_Windows__CData__CJson__CIJsonValue * This,
        /* [in] */ __RPC__in HSTRING key,
        /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CData_CJson_CIJsonValue * *value);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )(__RPC__in __FIMapView_2_HSTRING_Windows__CData__CJson__CIJsonValue * This, /* [retval][out] */ __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *HasKey )(__RPC__in __FIMapView_2_HSTRING_Windows__CData__CJson__CIJsonValue * This, /* [in] */ __RPC__in HSTRING key, /* [retval][out] */ __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *Split )(__RPC__in __FIMapView_2_HSTRING_Windows__CData__CJson__CIJsonValue * This,/* [out] */ __RPC__deref_out_opt __FIMapView_2_HSTRING_Windows__CData__CJson__CIJsonValue **firstPartition,
        /* [out] */ __RPC__deref_out_opt __FIMapView_2_HSTRING_Windows__CData__CJson__CIJsonValue **secondPartition);
    END_INTERFACE
} __FIMapView_2_HSTRING_Windows__CData__CJson__CIJsonValueVtbl;

interface __FIMapView_2_HSTRING_Windows__CData__CJson__CIJsonValue
{
    CONST_VTBL struct __FIMapView_2_HSTRING_Windows__CData__CJson__CIJsonValueVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIMapView_2_HSTRING_Windows__CData__CJson__CIJsonValue_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIMapView_2_HSTRING_Windows__CData__CJson__CIJsonValue_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIMapView_2_HSTRING_Windows__CData__CJson__CIJsonValue_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIMapView_2_HSTRING_Windows__CData__CJson__CIJsonValue_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIMapView_2_HSTRING_Windows__CData__CJson__CIJsonValue_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIMapView_2_HSTRING_Windows__CData__CJson__CIJsonValue_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIMapView_2_HSTRING_Windows__CData__CJson__CIJsonValue_Lookup(This,key,value)	\
    ( (This)->lpVtbl -> Lookup(This,key,value) ) 
#define __FIMapView_2_HSTRING_Windows__CData__CJson__CIJsonValue_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 
#define __FIMapView_2_HSTRING_Windows__CData__CJson__CIJsonValue_HasKey(This,key,found)	\
    ( (This)->lpVtbl -> HasKey(This,key,found) ) 
#define __FIMapView_2_HSTRING_Windows__CData__CJson__CIJsonValue_Split(This,firstPartition,secondPartition)	\
    ( (This)->lpVtbl -> Split(This,firstPartition,secondPartition) ) 
#endif /* COBJMACROS */


#endif // ____FIMapView_2_HSTRING_Windows__CData__CJson__CIJsonValue_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIMap_2_HSTRING_Windows__CData__CJson__CIJsonValue_INTERFACE_DEFINED__)
#define ____FIMap_2_HSTRING_Windows__CData__CJson__CIJsonValue_INTERFACE_DEFINED__

typedef interface __FIMap_2_HSTRING_Windows__CData__CJson__CIJsonValue __FIMap_2_HSTRING_Windows__CData__CJson__CIJsonValue;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIMap_2_HSTRING_Windows__CData__CJson__CIJsonValue;

typedef struct __FIMap_2_HSTRING_Windows__CData__CJson__CIJsonValueVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMap_2_HSTRING_Windows__CData__CJson__CIJsonValue * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMap_2_HSTRING_Windows__CData__CJson__CIJsonValue * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMap_2_HSTRING_Windows__CData__CJson__CIJsonValue * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMap_2_HSTRING_Windows__CData__CJson__CIJsonValue * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMap_2_HSTRING_Windows__CData__CJson__CIJsonValue * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMap_2_HSTRING_Windows__CData__CJson__CIJsonValue * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *Lookup )(__RPC__in __FIMap_2_HSTRING_Windows__CData__CJson__CIJsonValue * This,
        /* [in] */ HSTRING key,
        /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CData_CJson_CIJsonValue * **value);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )(__RPC__in __FIMap_2_HSTRING_Windows__CData__CJson__CIJsonValue * This, /* [retval][out] */ __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *HasKey )(__RPC__in __FIMap_2_HSTRING_Windows__CData__CJson__CIJsonValue * This, /* [in] */ HSTRING key, /* [retval][out] */ __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIMap_2_HSTRING_Windows__CData__CJson__CIJsonValue * This, /* [retval][out] */ __RPC__deref_out_opt __FIMapView_2_HSTRING_Windows__CData__CJson__CIJsonValue **view);
    HRESULT ( STDMETHODCALLTYPE *Insert )(__RPC__in __FIMap_2_HSTRING_Windows__CData__CJson__CIJsonValue * This,
        /* [in] */ HSTRING key,
        /* [in] */ __RPC__in_opt __x_ABI_CWindows_CData_CJson_CIJsonValue * *value,
        /* [retval][out] */ __RPC__out boolean *replaced);
    HRESULT ( STDMETHODCALLTYPE *Remove )(__RPC__in __FIMap_2_HSTRING_Windows__CData__CJson__CIJsonValue * This,/* [in] */ HSTRING key);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIMap_2_HSTRING_Windows__CData__CJson__CIJsonValue * This);
    END_INTERFACE
} __FIMap_2_HSTRING_Windows__CData__CJson__CIJsonValueVtbl;

interface __FIMap_2_HSTRING_Windows__CData__CJson__CIJsonValue
{
    CONST_VTBL struct __FIMap_2_HSTRING_Windows__CData__CJson__CIJsonValueVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIMap_2_HSTRING_Windows__CData__CJson__CIJsonValue_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIMap_2_HSTRING_Windows__CData__CJson__CIJsonValue_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIMap_2_HSTRING_Windows__CData__CJson__CIJsonValue_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIMap_2_HSTRING_Windows__CData__CJson__CIJsonValue_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIMap_2_HSTRING_Windows__CData__CJson__CIJsonValue_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIMap_2_HSTRING_Windows__CData__CJson__CIJsonValue_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIMap_2_HSTRING_Windows__CData__CJson__CIJsonValue_Lookup(This,key,value)	\
    ( (This)->lpVtbl -> Lookup(This,key,value) ) 

#define __FIMap_2_HSTRING_Windows__CData__CJson__CIJsonValue_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIMap_2_HSTRING_Windows__CData__CJson__CIJsonValue_HasKey(This,key,found)	\
    ( (This)->lpVtbl -> HasKey(This,key,found) ) 

#define __FIMap_2_HSTRING_Windows__CData__CJson__CIJsonValue_GetView(This,view)	\
    ( (This)->lpVtbl -> GetView(This,view) ) 

#define __FIMap_2_HSTRING_Windows__CData__CJson__CIJsonValue_Insert(This,key,value,replaced)	\
    ( (This)->lpVtbl -> Insert(This,key,value,replaced) ) 

#define __FIMap_2_HSTRING_Windows__CData__CJson__CIJsonValue_Remove(This,key)	\
    ( (This)->lpVtbl -> Remove(This,key) ) 

#define __FIMap_2_HSTRING_Windows__CData__CJson__CIJsonValue_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 
#endif /* COBJMACROS */



#endif // ____FIMap_2_HSTRING_Windows__CData__CJson__CIJsonValue_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CData__CJson__CIJsonValue_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CData__CJson__CIJsonValue_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CData__CJson__CIJsonValue __FIVectorView_1_Windows__CData__CJson__CIJsonValue;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CData__CJson__CIJsonValue;

typedef struct __FIVectorView_1_Windows__CData__CJson__CIJsonValueVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CData__CJson__CIJsonValue * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CData__CJson__CIJsonValue * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CData__CJson__CIJsonValue * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CData__CJson__CIJsonValue * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CData__CJson__CIJsonValue * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CData__CJson__CIJsonValue * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CData__CJson__CIJsonValue * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CData_CJson_CIJsonValue * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CData__CJson__CIJsonValue * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CData__CJson__CIJsonValue * This,
            /* [in] */ __x_ABI_CWindows_CData_CJson_CIJsonValue * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CData__CJson__CIJsonValue * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CData_CJson_CIJsonValue * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CData__CJson__CIJsonValueVtbl;

interface __FIVectorView_1_Windows__CData__CJson__CIJsonValue
{
    CONST_VTBL struct __FIVectorView_1_Windows__CData__CJson__CIJsonValueVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CData__CJson__CIJsonValue_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CData__CJson__CIJsonValue_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CData__CJson__CIJsonValue_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CData__CJson__CIJsonValue_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CData__CJson__CIJsonValue_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CData__CJson__CIJsonValue_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CData__CJson__CIJsonValue_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CData__CJson__CIJsonValue_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CData__CJson__CIJsonValue_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CData__CJson__CIJsonValue_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CData__CJson__CIJsonValue_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVector_1_Windows__CData__CJson__CIJsonValue_INTERFACE_DEFINED__)
#define ____FIVector_1_Windows__CData__CJson__CIJsonValue_INTERFACE_DEFINED__

typedef interface __FIVector_1_Windows__CData__CJson__CIJsonValue __FIVector_1_Windows__CData__CJson__CIJsonValue;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVector_1_Windows__CData__CJson__CIJsonValue;

typedef struct __FIVector_1_Windows__CData__CJson__CIJsonValueVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVector_1_Windows__CData__CJson__CIJsonValue * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CData__CJson__CIJsonValue * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CData__CJson__CIJsonValue * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CData__CJson__CIJsonValue * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CData__CJson__CIJsonValue * This, /* [out] */ __RPC__deref_out_opt __x_ABI_CWindows_CData_CJson_CIJsonValue * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CData__CJson__CIJsonValue * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CData__CJson__CIJsonValue * This,
        /* [in] */ unsigned int index,
        /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CData_CJson_CIJsonValue * *item);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
        __RPC__in __FIVector_1_Windows__CData__CJson__CIJsonValue * This,
        /* [retval][out] */ __RPC__out unsigned int *size);

    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CData__CJson__CIJsonValue * This, /* [retval][out] */ __RPC__deref_out_opt __FIVectorView_1_Windows__CData__CJson__CIJsonValue **view);

    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CData__CJson__CIJsonValue * This,
        /* [in] */ __RPC__in __x_ABI_CWindows_CData_CJson_CIJsonValue * item,
        /* [out] */ __RPC__out unsigned int *index,
        /* [retval][out] */ __RPC__out boolean *found);

    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CData__CJson__CIJsonValue * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CWindows_CData_CJson_CIJsonValue * item);

    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CData__CJson__CIJsonValue * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CWindows_CData_CJson_CIJsonValue * item);

    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CData__CJson__CIJsonValue * This, /* [in] */ unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CData__CJson__CIJsonValue * This, /* [in] */ __RPC__in __x_ABI_CWindows_CData_CJson_CIJsonValue * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CData__CJson__CIJsonValue * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CData__CJson__CIJsonValue * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CData__CJson__CIJsonValue * This,
        /* [in] */ unsigned int startIndex,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CData_CJson_CIJsonValue * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CData__CJson__CIJsonValue * This,
        /* [in] */ unsigned int count,
        /* [size_is][in] */ __RPC__in_ecount_full(count) __x_ABI_CWindows_CData_CJson_CIJsonValue * *value);

    END_INTERFACE
} __FIVector_1_Windows__CData__CJson__CIJsonValueVtbl;

interface __FIVector_1_Windows__CData__CJson__CIJsonValue
{
    CONST_VTBL struct __FIVector_1_Windows__CData__CJson__CIJsonValueVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVector_1_Windows__CData__CJson__CIJsonValue_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVector_1_Windows__CData__CJson__CIJsonValue_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVector_1_Windows__CData__CJson__CIJsonValue_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVector_1_Windows__CData__CJson__CIJsonValue_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVector_1_Windows__CData__CJson__CIJsonValue_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVector_1_Windows__CData__CJson__CIJsonValue_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVector_1_Windows__CData__CJson__CIJsonValue_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVector_1_Windows__CData__CJson__CIJsonValue_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVector_1_Windows__CData__CJson__CIJsonValue_GetView(This,view)	\
    ( (This)->lpVtbl -> GetView(This,view) ) 

#define __FIVector_1_Windows__CData__CJson__CIJsonValue_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVector_1_Windows__CData__CJson__CIJsonValue_SetAt(This,index,item)	\
    ( (This)->lpVtbl -> SetAt(This,index,item) ) 

#define __FIVector_1_Windows__CData__CJson__CIJsonValue_InsertAt(This,index,item)	\
    ( (This)->lpVtbl -> InsertAt(This,index,item) ) 

#define __FIVector_1_Windows__CData__CJson__CIJsonValue_RemoveAt(This,index)	\
    ( (This)->lpVtbl -> RemoveAt(This,index) ) 

#define __FIVector_1_Windows__CData__CJson__CIJsonValue_Append(This,item)	\
    ( (This)->lpVtbl -> Append(This,item) ) 

#define __FIVector_1_Windows__CData__CJson__CIJsonValue_RemoveAtEnd(This)	\
    ( (This)->lpVtbl -> RemoveAtEnd(This) ) 

#define __FIVector_1_Windows__CData__CJson__CIJsonValue_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define __FIVector_1_Windows__CData__CJson__CIJsonValue_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#define __FIVector_1_Windows__CData__CJson__CIJsonValue_ReplaceAll(This,count,value)	\
    ( (This)->lpVtbl -> ReplaceAll(This,count,value) ) 

#endif /* COBJMACROS */



#endif // ____FIVector_1_Windows__CData__CJson__CIJsonValue_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#ifndef ____x_ABI_CWindows_CFoundation_CIStringable_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIStringable_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIStringable __x_ABI_CWindows_CFoundation_CIStringable;

#endif // ____x_ABI_CWindows_CFoundation_CIStringable_FWD_DEFINED__






typedef enum __x_ABI_CWindows_CData_CJson_CJsonErrorStatus __x_ABI_CWindows_CData_CJson_CJsonErrorStatus;


typedef enum __x_ABI_CWindows_CData_CJson_CJsonValueType __x_ABI_CWindows_CData_CJson_CJsonValueType;






















/*
 *
 * Struct Windows.Data.Json.JsonErrorStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CData_CJson_CJsonErrorStatus
{
    JsonErrorStatus_Unknown = 0,
    JsonErrorStatus_InvalidJsonString = 1,
    JsonErrorStatus_InvalidJsonNumber = 2,
    JsonErrorStatus_JsonValueNotFound = 3,
    JsonErrorStatus_ImplementationLimit = 4,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Data.Json.JsonValueType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CData_CJson_CJsonValueType
{
    JsonValueType_Null = 0,
    JsonValueType_Boolean = 1,
    JsonValueType_Number = 2,
    JsonValueType_String = 3,
    JsonValueType_Array = 4,
    JsonValueType_Object = 5,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Data.Json.IJsonArray
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Data.Json.JsonArray
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Data.Json.IJsonValue
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CData_CJson_CIJsonArray_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CData_CJson_CIJsonArray_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Data_Json_IJsonArray[] = L"Windows.Data.Json.IJsonArray";
/* [object, uuid("08C1DDB6-0CBD-4A9A-B5D3-2F852DC37E81"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CData_CJson_CIJsonArrayVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CData_CJson_CIJsonArray * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CData_CJson_CIJsonArray * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CData_CJson_CIJsonArray * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CData_CJson_CIJsonArray * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CData_CJson_CIJsonArray * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CData_CJson_CIJsonArray * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetObjectAt )(
        __x_ABI_CWindows_CData_CJson_CIJsonArray * This,
        /* [in] */UINT32 index,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CData_CJson_CIJsonObject * * returnValue
        );
    HRESULT ( STDMETHODCALLTYPE *GetArrayAt )(
        __x_ABI_CWindows_CData_CJson_CIJsonArray * This,
        /* [in] */UINT32 index,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CData_CJson_CIJsonArray * * returnValue
        );
    HRESULT ( STDMETHODCALLTYPE *GetStringAt )(
        __x_ABI_CWindows_CData_CJson_CIJsonArray * This,
        /* [in] */UINT32 index,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * returnValue
        );
    HRESULT ( STDMETHODCALLTYPE *GetNumberAt )(
        __x_ABI_CWindows_CData_CJson_CIJsonArray * This,
        /* [in] */UINT32 index,
        /* [retval, out] */__RPC__out DOUBLE * returnValue
        );
    HRESULT ( STDMETHODCALLTYPE *GetBooleanAt )(
        __x_ABI_CWindows_CData_CJson_CIJsonArray * This,
        /* [in] */UINT32 index,
        /* [retval, out] */__RPC__out boolean * returnValue
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CData_CJson_CIJsonArrayVtbl;

interface __x_ABI_CWindows_CData_CJson_CIJsonArray
{
    CONST_VTBL struct __x_ABI_CWindows_CData_CJson_CIJsonArrayVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CData_CJson_CIJsonArray_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CData_CJson_CIJsonArray_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CData_CJson_CIJsonArray_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CData_CJson_CIJsonArray_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CData_CJson_CIJsonArray_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CData_CJson_CIJsonArray_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CData_CJson_CIJsonArray_GetObjectAt(This,index,returnValue) \
    ( (This)->lpVtbl->GetObjectAt(This,index,returnValue) )

#define __x_ABI_CWindows_CData_CJson_CIJsonArray_GetArrayAt(This,index,returnValue) \
    ( (This)->lpVtbl->GetArrayAt(This,index,returnValue) )

#define __x_ABI_CWindows_CData_CJson_CIJsonArray_GetStringAt(This,index,returnValue) \
    ( (This)->lpVtbl->GetStringAt(This,index,returnValue) )

#define __x_ABI_CWindows_CData_CJson_CIJsonArray_GetNumberAt(This,index,returnValue) \
    ( (This)->lpVtbl->GetNumberAt(This,index,returnValue) )

#define __x_ABI_CWindows_CData_CJson_CIJsonArray_GetBooleanAt(This,index,returnValue) \
    ( (This)->lpVtbl->GetBooleanAt(This,index,returnValue) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CData_CJson_CIJsonArray;
#endif /* !defined(____x_ABI_CWindows_CData_CJson_CIJsonArray_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Data.Json.IJsonArrayStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Data.Json.JsonArray
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CData_CJson_CIJsonArrayStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CData_CJson_CIJsonArrayStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Data_Json_IJsonArrayStatics[] = L"Windows.Data.Json.IJsonArrayStatics";
/* [object, uuid("DB1434A9-E164-499F-93E2-8A8F49BB90BA"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CData_CJson_CIJsonArrayStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CData_CJson_CIJsonArrayStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CData_CJson_CIJsonArrayStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CData_CJson_CIJsonArrayStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CData_CJson_CIJsonArrayStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CData_CJson_CIJsonArrayStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CData_CJson_CIJsonArrayStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Parse )(
        __x_ABI_CWindows_CData_CJson_CIJsonArrayStatics * This,
        /* [in] */__RPC__in HSTRING input,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CData_CJson_CIJsonArray * * jsonArray
        );
    HRESULT ( STDMETHODCALLTYPE *TryParse )(
        __x_ABI_CWindows_CData_CJson_CIJsonArrayStatics * This,
        /* [in] */__RPC__in HSTRING input,
        /* [out] */__RPC__deref_out_opt __x_ABI_CWindows_CData_CJson_CIJsonArray * * result,
        /* [retval, out] */__RPC__out boolean * succeeded
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CData_CJson_CIJsonArrayStaticsVtbl;

interface __x_ABI_CWindows_CData_CJson_CIJsonArrayStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CData_CJson_CIJsonArrayStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CData_CJson_CIJsonArrayStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CData_CJson_CIJsonArrayStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CData_CJson_CIJsonArrayStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CData_CJson_CIJsonArrayStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CData_CJson_CIJsonArrayStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CData_CJson_CIJsonArrayStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CData_CJson_CIJsonArrayStatics_Parse(This,input,jsonArray) \
    ( (This)->lpVtbl->Parse(This,input,jsonArray) )

#define __x_ABI_CWindows_CData_CJson_CIJsonArrayStatics_TryParse(This,input,result,succeeded) \
    ( (This)->lpVtbl->TryParse(This,input,result,succeeded) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CData_CJson_CIJsonArrayStatics;
#endif /* !defined(____x_ABI_CWindows_CData_CJson_CIJsonArrayStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Data.Json.IJsonErrorStatics2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Data.Json.JsonError
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CData_CJson_CIJsonErrorStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CData_CJson_CIJsonErrorStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Data_Json_IJsonErrorStatics2[] = L"Windows.Data.Json.IJsonErrorStatics2";
/* [object, uuid("404030DA-87D0-436C-83AB-FC7B12C0CC26"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CData_CJson_CIJsonErrorStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CData_CJson_CIJsonErrorStatics2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CData_CJson_CIJsonErrorStatics2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CData_CJson_CIJsonErrorStatics2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CData_CJson_CIJsonErrorStatics2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CData_CJson_CIJsonErrorStatics2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CData_CJson_CIJsonErrorStatics2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetJsonStatus )(
        __x_ABI_CWindows_CData_CJson_CIJsonErrorStatics2 * This,
        /* [in] */INT32 hresult,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CData_CJson_CJsonErrorStatus * status
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CData_CJson_CIJsonErrorStatics2Vtbl;

interface __x_ABI_CWindows_CData_CJson_CIJsonErrorStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CData_CJson_CIJsonErrorStatics2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CData_CJson_CIJsonErrorStatics2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CData_CJson_CIJsonErrorStatics2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CData_CJson_CIJsonErrorStatics2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CData_CJson_CIJsonErrorStatics2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CData_CJson_CIJsonErrorStatics2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CData_CJson_CIJsonErrorStatics2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CData_CJson_CIJsonErrorStatics2_GetJsonStatus(This,hresult,status) \
    ( (This)->lpVtbl->GetJsonStatus(This,hresult,status) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CData_CJson_CIJsonErrorStatics2;
#endif /* !defined(____x_ABI_CWindows_CData_CJson_CIJsonErrorStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Data.Json.IJsonObject
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Data.Json.JsonObject
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Data.Json.IJsonValue
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CData_CJson_CIJsonObject_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CData_CJson_CIJsonObject_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Data_Json_IJsonObject[] = L"Windows.Data.Json.IJsonObject";
/* [object, uuid("064E24DD-29C2-4F83-9AC1-9EE11578BEB3"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CData_CJson_CIJsonObjectVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CData_CJson_CIJsonObject * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CData_CJson_CIJsonObject * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CData_CJson_CIJsonObject * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CData_CJson_CIJsonObject * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CData_CJson_CIJsonObject * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CData_CJson_CIJsonObject * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetNamedValue )(
        __x_ABI_CWindows_CData_CJson_CIJsonObject * This,
        /* [in] */__RPC__in HSTRING name,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CData_CJson_CIJsonValue * * returnValue
        );
    HRESULT ( STDMETHODCALLTYPE *SetNamedValue )(
        __x_ABI_CWindows_CData_CJson_CIJsonObject * This,
        /* [in] */__RPC__in HSTRING name,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CData_CJson_CIJsonValue * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetNamedObject )(
        __x_ABI_CWindows_CData_CJson_CIJsonObject * This,
        /* [in] */__RPC__in HSTRING name,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CData_CJson_CIJsonObject * * returnValue
        );
    HRESULT ( STDMETHODCALLTYPE *GetNamedArray )(
        __x_ABI_CWindows_CData_CJson_CIJsonObject * This,
        /* [in] */__RPC__in HSTRING name,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CData_CJson_CIJsonArray * * returnValue
        );
    HRESULT ( STDMETHODCALLTYPE *GetNamedString )(
        __x_ABI_CWindows_CData_CJson_CIJsonObject * This,
        /* [in] */__RPC__in HSTRING name,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * returnValue
        );
    HRESULT ( STDMETHODCALLTYPE *GetNamedNumber )(
        __x_ABI_CWindows_CData_CJson_CIJsonObject * This,
        /* [in] */__RPC__in HSTRING name,
        /* [retval, out] */__RPC__out DOUBLE * returnValue
        );
    HRESULT ( STDMETHODCALLTYPE *GetNamedBoolean )(
        __x_ABI_CWindows_CData_CJson_CIJsonObject * This,
        /* [in] */__RPC__in HSTRING name,
        /* [retval, out] */__RPC__out boolean * returnValue
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CData_CJson_CIJsonObjectVtbl;

interface __x_ABI_CWindows_CData_CJson_CIJsonObject
{
    CONST_VTBL struct __x_ABI_CWindows_CData_CJson_CIJsonObjectVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CData_CJson_CIJsonObject_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CData_CJson_CIJsonObject_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CData_CJson_CIJsonObject_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CData_CJson_CIJsonObject_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CData_CJson_CIJsonObject_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CData_CJson_CIJsonObject_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CData_CJson_CIJsonObject_GetNamedValue(This,name,returnValue) \
    ( (This)->lpVtbl->GetNamedValue(This,name,returnValue) )

#define __x_ABI_CWindows_CData_CJson_CIJsonObject_SetNamedValue(This,name,value) \
    ( (This)->lpVtbl->SetNamedValue(This,name,value) )

#define __x_ABI_CWindows_CData_CJson_CIJsonObject_GetNamedObject(This,name,returnValue) \
    ( (This)->lpVtbl->GetNamedObject(This,name,returnValue) )

#define __x_ABI_CWindows_CData_CJson_CIJsonObject_GetNamedArray(This,name,returnValue) \
    ( (This)->lpVtbl->GetNamedArray(This,name,returnValue) )

#define __x_ABI_CWindows_CData_CJson_CIJsonObject_GetNamedString(This,name,returnValue) \
    ( (This)->lpVtbl->GetNamedString(This,name,returnValue) )

#define __x_ABI_CWindows_CData_CJson_CIJsonObject_GetNamedNumber(This,name,returnValue) \
    ( (This)->lpVtbl->GetNamedNumber(This,name,returnValue) )

#define __x_ABI_CWindows_CData_CJson_CIJsonObject_GetNamedBoolean(This,name,returnValue) \
    ( (This)->lpVtbl->GetNamedBoolean(This,name,returnValue) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CData_CJson_CIJsonObject;
#endif /* !defined(____x_ABI_CWindows_CData_CJson_CIJsonObject_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Data.Json.IJsonObjectStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Data.Json.JsonObject
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CData_CJson_CIJsonObjectStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CData_CJson_CIJsonObjectStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Data_Json_IJsonObjectStatics[] = L"Windows.Data.Json.IJsonObjectStatics";
/* [object, uuid("2289F159-54DE-45D8-ABCC-22603FA066A0"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CData_CJson_CIJsonObjectStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CData_CJson_CIJsonObjectStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CData_CJson_CIJsonObjectStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CData_CJson_CIJsonObjectStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CData_CJson_CIJsonObjectStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CData_CJson_CIJsonObjectStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CData_CJson_CIJsonObjectStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Parse )(
        __x_ABI_CWindows_CData_CJson_CIJsonObjectStatics * This,
        /* [in] */__RPC__in HSTRING input,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CData_CJson_CIJsonObject * * jsonObject
        );
    HRESULT ( STDMETHODCALLTYPE *TryParse )(
        __x_ABI_CWindows_CData_CJson_CIJsonObjectStatics * This,
        /* [in] */__RPC__in HSTRING input,
        /* [out] */__RPC__deref_out_opt __x_ABI_CWindows_CData_CJson_CIJsonObject * * result,
        /* [retval, out] */__RPC__out boolean * succeeded
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CData_CJson_CIJsonObjectStaticsVtbl;

interface __x_ABI_CWindows_CData_CJson_CIJsonObjectStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CData_CJson_CIJsonObjectStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CData_CJson_CIJsonObjectStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CData_CJson_CIJsonObjectStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CData_CJson_CIJsonObjectStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CData_CJson_CIJsonObjectStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CData_CJson_CIJsonObjectStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CData_CJson_CIJsonObjectStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CData_CJson_CIJsonObjectStatics_Parse(This,input,jsonObject) \
    ( (This)->lpVtbl->Parse(This,input,jsonObject) )

#define __x_ABI_CWindows_CData_CJson_CIJsonObjectStatics_TryParse(This,input,result,succeeded) \
    ( (This)->lpVtbl->TryParse(This,input,result,succeeded) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CData_CJson_CIJsonObjectStatics;
#endif /* !defined(____x_ABI_CWindows_CData_CJson_CIJsonObjectStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Data.Json.IJsonObjectWithDefaultValues
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Data.Json.JsonObject
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Data.Json.IJsonObject
 *     Windows.Data.Json.IJsonValue
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CData_CJson_CIJsonObjectWithDefaultValues_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CData_CJson_CIJsonObjectWithDefaultValues_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Data_Json_IJsonObjectWithDefaultValues[] = L"Windows.Data.Json.IJsonObjectWithDefaultValues";
/* [object, uuid("D960D2A2-B7F0-4F00-8E44-D82CF415EA13"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CData_CJson_CIJsonObjectWithDefaultValuesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CData_CJson_CIJsonObjectWithDefaultValues * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CData_CJson_CIJsonObjectWithDefaultValues * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CData_CJson_CIJsonObjectWithDefaultValues * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CData_CJson_CIJsonObjectWithDefaultValues * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CData_CJson_CIJsonObjectWithDefaultValues * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CData_CJson_CIJsonObjectWithDefaultValues * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [overload] */HRESULT ( STDMETHODCALLTYPE *GetNamedValueOrDefault )(
        __x_ABI_CWindows_CData_CJson_CIJsonObjectWithDefaultValues * This,
        /* [in] */__RPC__in HSTRING name,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CData_CJson_CIJsonValue * defaultValue,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CData_CJson_CIJsonValue * * returnValue
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *GetNamedObjectOrDefault )(
        __x_ABI_CWindows_CData_CJson_CIJsonObjectWithDefaultValues * This,
        /* [in] */__RPC__in HSTRING name,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CData_CJson_CIJsonObject * defaultValue,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CData_CJson_CIJsonObject * * returnValue
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *GetNamedStringOrDefault )(
        __x_ABI_CWindows_CData_CJson_CIJsonObjectWithDefaultValues * This,
        /* [in] */__RPC__in HSTRING name,
        /* [in] */__RPC__in HSTRING defaultValue,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * returnValue
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *GetNamedArrayOrDefault )(
        __x_ABI_CWindows_CData_CJson_CIJsonObjectWithDefaultValues * This,
        /* [in] */__RPC__in HSTRING name,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CData_CJson_CIJsonArray * defaultValue,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CData_CJson_CIJsonArray * * returnValue
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *GetNamedNumberOrDefault )(
        __x_ABI_CWindows_CData_CJson_CIJsonObjectWithDefaultValues * This,
        /* [in] */__RPC__in HSTRING name,
        /* [in] */DOUBLE defaultValue,
        /* [retval, out] */__RPC__out DOUBLE * returnValue
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *GetNamedBooleanOrDefault )(
        __x_ABI_CWindows_CData_CJson_CIJsonObjectWithDefaultValues * This,
        /* [in] */__RPC__in HSTRING name,
        /* [in] */boolean defaultValue,
        /* [retval, out] */__RPC__out boolean * returnValue
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CData_CJson_CIJsonObjectWithDefaultValuesVtbl;

interface __x_ABI_CWindows_CData_CJson_CIJsonObjectWithDefaultValues
{
    CONST_VTBL struct __x_ABI_CWindows_CData_CJson_CIJsonObjectWithDefaultValuesVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CData_CJson_CIJsonObjectWithDefaultValues_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CData_CJson_CIJsonObjectWithDefaultValues_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CData_CJson_CIJsonObjectWithDefaultValues_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CData_CJson_CIJsonObjectWithDefaultValues_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CData_CJson_CIJsonObjectWithDefaultValues_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CData_CJson_CIJsonObjectWithDefaultValues_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CData_CJson_CIJsonObjectWithDefaultValues_GetNamedValueOrDefault(This,name,defaultValue,returnValue) \
    ( (This)->lpVtbl->GetNamedValueOrDefault(This,name,defaultValue,returnValue) )

#define __x_ABI_CWindows_CData_CJson_CIJsonObjectWithDefaultValues_GetNamedObjectOrDefault(This,name,defaultValue,returnValue) \
    ( (This)->lpVtbl->GetNamedObjectOrDefault(This,name,defaultValue,returnValue) )

#define __x_ABI_CWindows_CData_CJson_CIJsonObjectWithDefaultValues_GetNamedStringOrDefault(This,name,defaultValue,returnValue) \
    ( (This)->lpVtbl->GetNamedStringOrDefault(This,name,defaultValue,returnValue) )

#define __x_ABI_CWindows_CData_CJson_CIJsonObjectWithDefaultValues_GetNamedArrayOrDefault(This,name,defaultValue,returnValue) \
    ( (This)->lpVtbl->GetNamedArrayOrDefault(This,name,defaultValue,returnValue) )

#define __x_ABI_CWindows_CData_CJson_CIJsonObjectWithDefaultValues_GetNamedNumberOrDefault(This,name,defaultValue,returnValue) \
    ( (This)->lpVtbl->GetNamedNumberOrDefault(This,name,defaultValue,returnValue) )

#define __x_ABI_CWindows_CData_CJson_CIJsonObjectWithDefaultValues_GetNamedBooleanOrDefault(This,name,defaultValue,returnValue) \
    ( (This)->lpVtbl->GetNamedBooleanOrDefault(This,name,defaultValue,returnValue) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CData_CJson_CIJsonObjectWithDefaultValues;
#endif /* !defined(____x_ABI_CWindows_CData_CJson_CIJsonObjectWithDefaultValues_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Data.Json.IJsonValue
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CData_CJson_CIJsonValue_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CData_CJson_CIJsonValue_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Data_Json_IJsonValue[] = L"Windows.Data.Json.IJsonValue";
/* [object, uuid("A3219ECB-F0B3-4DCD-BEEE-19D48CD3ED1E"), contract] */
typedef struct __x_ABI_CWindows_CData_CJson_CIJsonValueVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CData_CJson_CIJsonValue * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CData_CJson_CIJsonValue * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CData_CJson_CIJsonValue * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CData_CJson_CIJsonValue * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CData_CJson_CIJsonValue * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CData_CJson_CIJsonValue * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ValueType )(
        __x_ABI_CWindows_CData_CJson_CIJsonValue * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CData_CJson_CJsonValueType * value
        );
    HRESULT ( STDMETHODCALLTYPE *Stringify )(
        __x_ABI_CWindows_CData_CJson_CIJsonValue * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * returnValue
        );
    HRESULT ( STDMETHODCALLTYPE *GetString )(
        __x_ABI_CWindows_CData_CJson_CIJsonValue * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * returnValue
        );
    HRESULT ( STDMETHODCALLTYPE *GetNumber )(
        __x_ABI_CWindows_CData_CJson_CIJsonValue * This,
        /* [retval, out] */__RPC__out DOUBLE * returnValue
        );
    HRESULT ( STDMETHODCALLTYPE *GetBoolean )(
        __x_ABI_CWindows_CData_CJson_CIJsonValue * This,
        /* [retval, out] */__RPC__out boolean * returnValue
        );
    HRESULT ( STDMETHODCALLTYPE *GetArray )(
        __x_ABI_CWindows_CData_CJson_CIJsonValue * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CData_CJson_CIJsonArray * * returnValue
        );
    HRESULT ( STDMETHODCALLTYPE *GetObject )(
        __x_ABI_CWindows_CData_CJson_CIJsonValue * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CData_CJson_CIJsonObject * * returnValue
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CData_CJson_CIJsonValueVtbl;

interface __x_ABI_CWindows_CData_CJson_CIJsonValue
{
    CONST_VTBL struct __x_ABI_CWindows_CData_CJson_CIJsonValueVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CData_CJson_CIJsonValue_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CData_CJson_CIJsonValue_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CData_CJson_CIJsonValue_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CData_CJson_CIJsonValue_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CData_CJson_CIJsonValue_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CData_CJson_CIJsonValue_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CData_CJson_CIJsonValue_get_ValueType(This,value) \
    ( (This)->lpVtbl->get_ValueType(This,value) )

#define __x_ABI_CWindows_CData_CJson_CIJsonValue_Stringify(This,returnValue) \
    ( (This)->lpVtbl->Stringify(This,returnValue) )

#define __x_ABI_CWindows_CData_CJson_CIJsonValue_GetString(This,returnValue) \
    ( (This)->lpVtbl->GetString(This,returnValue) )

#define __x_ABI_CWindows_CData_CJson_CIJsonValue_GetNumber(This,returnValue) \
    ( (This)->lpVtbl->GetNumber(This,returnValue) )

#define __x_ABI_CWindows_CData_CJson_CIJsonValue_GetBoolean(This,returnValue) \
    ( (This)->lpVtbl->GetBoolean(This,returnValue) )

#define __x_ABI_CWindows_CData_CJson_CIJsonValue_GetArray(This,returnValue) \
    ( (This)->lpVtbl->GetArray(This,returnValue) )

#define __x_ABI_CWindows_CData_CJson_CIJsonValue_GetObject(This,returnValue) \
    ( (This)->lpVtbl->GetObject(This,returnValue) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CData_CJson_CIJsonValue;
#endif /* !defined(____x_ABI_CWindows_CData_CJson_CIJsonValue_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Data.Json.IJsonValueStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Data.Json.JsonValue
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CData_CJson_CIJsonValueStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CData_CJson_CIJsonValueStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Data_Json_IJsonValueStatics[] = L"Windows.Data.Json.IJsonValueStatics";
/* [object, uuid("5F6B544A-2F53-48E1-91A3-F78B50A6345C"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CData_CJson_CIJsonValueStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CData_CJson_CIJsonValueStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CData_CJson_CIJsonValueStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CData_CJson_CIJsonValueStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CData_CJson_CIJsonValueStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CData_CJson_CIJsonValueStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CData_CJson_CIJsonValueStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Parse )(
        __x_ABI_CWindows_CData_CJson_CIJsonValueStatics * This,
        /* [in] */__RPC__in HSTRING input,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CData_CJson_CIJsonValue * * jsonValue
        );
    HRESULT ( STDMETHODCALLTYPE *TryParse )(
        __x_ABI_CWindows_CData_CJson_CIJsonValueStatics * This,
        /* [in] */__RPC__in HSTRING input,
        /* [out] */__RPC__deref_out_opt __x_ABI_CWindows_CData_CJson_CIJsonValue * * result,
        /* [retval, out] */__RPC__out boolean * succeeded
        );
    HRESULT ( STDMETHODCALLTYPE *CreateBooleanValue )(
        __x_ABI_CWindows_CData_CJson_CIJsonValueStatics * This,
        /* [in] */boolean input,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CData_CJson_CIJsonValue * * jsonValue
        );
    HRESULT ( STDMETHODCALLTYPE *CreateNumberValue )(
        __x_ABI_CWindows_CData_CJson_CIJsonValueStatics * This,
        /* [in] */DOUBLE input,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CData_CJson_CIJsonValue * * jsonValue
        );
    HRESULT ( STDMETHODCALLTYPE *CreateStringValue )(
        __x_ABI_CWindows_CData_CJson_CIJsonValueStatics * This,
        /* [in] */__RPC__in HSTRING input,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CData_CJson_CIJsonValue * * jsonValue
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CData_CJson_CIJsonValueStaticsVtbl;

interface __x_ABI_CWindows_CData_CJson_CIJsonValueStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CData_CJson_CIJsonValueStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CData_CJson_CIJsonValueStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CData_CJson_CIJsonValueStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CData_CJson_CIJsonValueStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CData_CJson_CIJsonValueStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CData_CJson_CIJsonValueStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CData_CJson_CIJsonValueStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CData_CJson_CIJsonValueStatics_Parse(This,input,jsonValue) \
    ( (This)->lpVtbl->Parse(This,input,jsonValue) )

#define __x_ABI_CWindows_CData_CJson_CIJsonValueStatics_TryParse(This,input,result,succeeded) \
    ( (This)->lpVtbl->TryParse(This,input,result,succeeded) )

#define __x_ABI_CWindows_CData_CJson_CIJsonValueStatics_CreateBooleanValue(This,input,jsonValue) \
    ( (This)->lpVtbl->CreateBooleanValue(This,input,jsonValue) )

#define __x_ABI_CWindows_CData_CJson_CIJsonValueStatics_CreateNumberValue(This,input,jsonValue) \
    ( (This)->lpVtbl->CreateNumberValue(This,input,jsonValue) )

#define __x_ABI_CWindows_CData_CJson_CIJsonValueStatics_CreateStringValue(This,input,jsonValue) \
    ( (This)->lpVtbl->CreateStringValue(This,input,jsonValue) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CData_CJson_CIJsonValueStatics;
#endif /* !defined(____x_ABI_CWindows_CData_CJson_CIJsonValueStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Data.Json.IJsonValueStatics2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Data.Json.JsonValue
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CData_CJson_CIJsonValueStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CData_CJson_CIJsonValueStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Data_Json_IJsonValueStatics2[] = L"Windows.Data.Json.IJsonValueStatics2";
/* [object, uuid("1D9ECBE4-3FE8-4335-8392-93D8E36865F0"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CData_CJson_CIJsonValueStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CData_CJson_CIJsonValueStatics2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CData_CJson_CIJsonValueStatics2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CData_CJson_CIJsonValueStatics2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CData_CJson_CIJsonValueStatics2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CData_CJson_CIJsonValueStatics2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CData_CJson_CIJsonValueStatics2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateNullValue )(
        __x_ABI_CWindows_CData_CJson_CIJsonValueStatics2 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CData_CJson_CIJsonValue * * jsonValue
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CData_CJson_CIJsonValueStatics2Vtbl;

interface __x_ABI_CWindows_CData_CJson_CIJsonValueStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CData_CJson_CIJsonValueStatics2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CData_CJson_CIJsonValueStatics2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CData_CJson_CIJsonValueStatics2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CData_CJson_CIJsonValueStatics2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CData_CJson_CIJsonValueStatics2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CData_CJson_CIJsonValueStatics2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CData_CJson_CIJsonValueStatics2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CData_CJson_CIJsonValueStatics2_CreateNullValue(This,jsonValue) \
    ( (This)->lpVtbl->CreateNullValue(This,jsonValue) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CData_CJson_CIJsonValueStatics2;
#endif /* !defined(____x_ABI_CWindows_CData_CJson_CIJsonValueStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Data.Json.JsonArray
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Data.Json.IJsonArrayStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Data.Json.IJsonArray ** Default Interface **
 *    Windows.Data.Json.IJsonValue
 *    Windows.Foundation.Collections.IVector_1_Windows.Data.Json.IJsonValue
 *    Windows.Foundation.Collections.IIterable_1_Windows.Data.Json.IJsonValue
 *    Windows.Foundation.IStringable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Data_Json_JsonArray_DEFINED
#define RUNTIMECLASS_Windows_Data_Json_JsonArray_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Data_Json_JsonArray[] = L"Windows.Data.Json.JsonArray";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Data.Json.JsonError
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Data.Json.IJsonErrorStatics2 interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_Data_Json_JsonError_DEFINED
#define RUNTIMECLASS_Windows_Data_Json_JsonError_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Data_Json_JsonError[] = L"Windows.Data.Json.JsonError";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Data.Json.JsonObject
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Data.Json.IJsonObjectStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Data.Json.IJsonObject ** Default Interface **
 *    Windows.Data.Json.IJsonValue
 *    Windows.Foundation.Collections.IMap_2_HSTRING,Windows.Data.Json.IJsonValue
 *    Windows.Foundation.Collections.IIterable_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue
 *    Windows.Data.Json.IJsonObjectWithDefaultValues
 *    Windows.Foundation.IStringable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Data_Json_JsonObject_DEFINED
#define RUNTIMECLASS_Windows_Data_Json_JsonObject_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Data_Json_JsonObject[] = L"Windows.Data.Json.JsonObject";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Data.Json.JsonValue
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Data.Json.IJsonValueStatics2 interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.Data.Json.IJsonValueStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Data.Json.IJsonValue ** Default Interface **
 *    Windows.Foundation.IStringable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Data_Json_JsonValue_DEFINED
#define RUNTIMECLASS_Windows_Data_Json_JsonValue_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Data_Json_JsonValue[] = L"Windows.Data.Json.JsonValue";
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
#endif // __windows2Edata2Ejson_p_h__

#endif // __windows2Edata2Ejson_h__
