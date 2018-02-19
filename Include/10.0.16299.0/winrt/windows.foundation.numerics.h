/* Header file automatically generated from windows.foundation.numerics.idl */
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
#ifndef __windows2Efoundation2Enumerics_h__
#define __windows2Efoundation2Enumerics_h__
#ifndef __windows2Efoundation2Enumerics_p_h__
#define __windows2Efoundation2Enumerics_p_h__


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
// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Numerics {
                struct Matrix4x4;
                
            } /* Windows */
        } /* Foundation */
    } /* Numerics */} /* ABI */


#ifndef DEF___FIReference_1_Windows__CFoundation__CNumerics__CMatrix4x4_USE
#define DEF___FIReference_1_Windows__CFoundation__CNumerics__CMatrix4x4_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("dacbffdc-68ef-5fd0-b657-782d0ac9807e"))
IReference<struct ABI::Windows::Foundation::Numerics::Matrix4x4> : IReference_impl<struct ABI::Windows::Foundation::Numerics::Matrix4x4> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IReference`1<Windows.Foundation.Numerics.Matrix4x4>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IReference<struct ABI::Windows::Foundation::Numerics::Matrix4x4> __FIReference_1_Windows__CFoundation__CNumerics__CMatrix4x4_t;
#define __FIReference_1_Windows__CFoundation__CNumerics__CMatrix4x4 ABI::Windows::Foundation::__FIReference_1_Windows__CFoundation__CNumerics__CMatrix4x4_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIReference_1_Windows__CFoundation__CNumerics__CMatrix4x4 ABI::Windows::Foundation::IReference<ABI::Windows::Foundation::Numerics::Matrix4x4>
//#define __FIReference_1_Windows__CFoundation__CNumerics__CMatrix4x4_t ABI::Windows::Foundation::IReference<ABI::Windows::Foundation::Numerics::Matrix4x4>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIReference_1_Windows__CFoundation__CNumerics__CMatrix4x4_USE */



namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Numerics {
                struct Quaternion;
                
            } /* Windows */
        } /* Foundation */
    } /* Numerics */} /* ABI */


#ifndef DEF___FIReference_1_Windows__CFoundation__CNumerics__CQuaternion_USE
#define DEF___FIReference_1_Windows__CFoundation__CNumerics__CQuaternion_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("b27004bb-c014-5dce-9a21-799c5a3c1461"))
IReference<struct ABI::Windows::Foundation::Numerics::Quaternion> : IReference_impl<struct ABI::Windows::Foundation::Numerics::Quaternion> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IReference`1<Windows.Foundation.Numerics.Quaternion>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IReference<struct ABI::Windows::Foundation::Numerics::Quaternion> __FIReference_1_Windows__CFoundation__CNumerics__CQuaternion_t;
#define __FIReference_1_Windows__CFoundation__CNumerics__CQuaternion ABI::Windows::Foundation::__FIReference_1_Windows__CFoundation__CNumerics__CQuaternion_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIReference_1_Windows__CFoundation__CNumerics__CQuaternion ABI::Windows::Foundation::IReference<ABI::Windows::Foundation::Numerics::Quaternion>
//#define __FIReference_1_Windows__CFoundation__CNumerics__CQuaternion_t ABI::Windows::Foundation::IReference<ABI::Windows::Foundation::Numerics::Quaternion>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIReference_1_Windows__CFoundation__CNumerics__CQuaternion_USE */



namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Numerics {
                struct Vector2;
                
            } /* Windows */
        } /* Foundation */
    } /* Numerics */} /* ABI */


#ifndef DEF___FIReference_1_Windows__CFoundation__CNumerics__CVector2_USE
#define DEF___FIReference_1_Windows__CFoundation__CNumerics__CVector2_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("48f6a69e-8465-57ae-9400-9764087f65ad"))
IReference<struct ABI::Windows::Foundation::Numerics::Vector2> : IReference_impl<struct ABI::Windows::Foundation::Numerics::Vector2> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IReference`1<Windows.Foundation.Numerics.Vector2>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IReference<struct ABI::Windows::Foundation::Numerics::Vector2> __FIReference_1_Windows__CFoundation__CNumerics__CVector2_t;
#define __FIReference_1_Windows__CFoundation__CNumerics__CVector2 ABI::Windows::Foundation::__FIReference_1_Windows__CFoundation__CNumerics__CVector2_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIReference_1_Windows__CFoundation__CNumerics__CVector2 ABI::Windows::Foundation::IReference<ABI::Windows::Foundation::Numerics::Vector2>
//#define __FIReference_1_Windows__CFoundation__CNumerics__CVector2_t ABI::Windows::Foundation::IReference<ABI::Windows::Foundation::Numerics::Vector2>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIReference_1_Windows__CFoundation__CNumerics__CVector2_USE */



namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Numerics {
                struct Vector3;
                
            } /* Windows */
        } /* Foundation */
    } /* Numerics */} /* ABI */


#ifndef DEF___FIReference_1_Windows__CFoundation__CNumerics__CVector3_USE
#define DEF___FIReference_1_Windows__CFoundation__CNumerics__CVector3_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("1ee770ff-c954-59ca-a754-6199a9be282c"))
IReference<struct ABI::Windows::Foundation::Numerics::Vector3> : IReference_impl<struct ABI::Windows::Foundation::Numerics::Vector3> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IReference`1<Windows.Foundation.Numerics.Vector3>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IReference<struct ABI::Windows::Foundation::Numerics::Vector3> __FIReference_1_Windows__CFoundation__CNumerics__CVector3_t;
#define __FIReference_1_Windows__CFoundation__CNumerics__CVector3 ABI::Windows::Foundation::__FIReference_1_Windows__CFoundation__CNumerics__CVector3_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIReference_1_Windows__CFoundation__CNumerics__CVector3 ABI::Windows::Foundation::IReference<ABI::Windows::Foundation::Numerics::Vector3>
//#define __FIReference_1_Windows__CFoundation__CNumerics__CVector3_t ABI::Windows::Foundation::IReference<ABI::Windows::Foundation::Numerics::Vector3>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIReference_1_Windows__CFoundation__CNumerics__CVector3_USE */








namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Numerics {
                
                typedef struct Matrix3x2 Matrix3x2;
                
            } /* Windows */
        } /* Foundation */
    } /* Numerics */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Numerics {
                
                typedef struct Matrix4x4 Matrix4x4;
                
            } /* Windows */
        } /* Foundation */
    } /* Numerics */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Numerics {
                
                typedef struct Plane Plane;
                
            } /* Windows */
        } /* Foundation */
    } /* Numerics */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Numerics {
                
                typedef struct Quaternion Quaternion;
                
            } /* Windows */
        } /* Foundation */
    } /* Numerics */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Numerics {
                
                typedef struct Vector2 Vector2;
                
            } /* Windows */
        } /* Foundation */
    } /* Numerics */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Numerics {
                
                typedef struct Vector3 Vector3;
                
            } /* Windows */
        } /* Foundation */
    } /* Numerics */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Numerics {
                
                typedef struct Vector4 Vector4;
                
            } /* Windows */
        } /* Foundation */
    } /* Numerics */} /* ABI */









/*
 *
 * Struct Windows.Foundation.Numerics.Matrix3x2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Numerics {
                /* [contract] */
                struct Matrix3x2
                {
                    FLOAT M11;
                    FLOAT M12;
                    FLOAT M21;
                    FLOAT M22;
                    FLOAT M31;
                    FLOAT M32;
                };
                
            } /* Windows */
        } /* Foundation */
    } /* Numerics */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Foundation.Numerics.Matrix4x4
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Numerics {
                /* [contract] */
                struct Matrix4x4
                {
                    FLOAT M11;
                    FLOAT M12;
                    FLOAT M13;
                    FLOAT M14;
                    FLOAT M21;
                    FLOAT M22;
                    FLOAT M23;
                    FLOAT M24;
                    FLOAT M31;
                    FLOAT M32;
                    FLOAT M33;
                    FLOAT M34;
                    FLOAT M41;
                    FLOAT M42;
                    FLOAT M43;
                    FLOAT M44;
                };
                
            } /* Windows */
        } /* Foundation */
    } /* Numerics */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Foundation.Numerics.Vector3
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Numerics {
                /* [contract] */
                struct Vector3
                {
                    FLOAT X;
                    FLOAT Y;
                    FLOAT Z;
                };
                
            } /* Windows */
        } /* Foundation */
    } /* Numerics */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Foundation.Numerics.Plane
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Numerics {
                /* [contract] */
                struct Plane
                {
                    ABI::Windows::Foundation::Numerics::Vector3 Normal;
                    FLOAT D;
                };
                
            } /* Windows */
        } /* Foundation */
    } /* Numerics */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Foundation.Numerics.Quaternion
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Numerics {
                /* [contract] */
                struct Quaternion
                {
                    FLOAT X;
                    FLOAT Y;
                    FLOAT Z;
                    FLOAT W;
                };
                
            } /* Windows */
        } /* Foundation */
    } /* Numerics */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Foundation.Numerics.Vector2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Numerics {
                /* [contract] */
                struct Vector2
                {
                    FLOAT X;
                    FLOAT Y;
                };
                
            } /* Windows */
        } /* Foundation */
    } /* Numerics */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Foundation.Numerics.Vector4
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Numerics {
                /* [contract] */
                struct Vector4
                {
                    FLOAT X;
                    FLOAT Y;
                    FLOAT Z;
                    FLOAT W;
                };
                
            } /* Windows */
        } /* Foundation */
    } /* Numerics */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000




#else // !defined(__cplusplus)
/* Forward Declarations */
// Parameterized interface forward declarations (C)

// Collection interface definitions
struct __x_ABI_CWindows_CFoundation_CNumerics_CMatrix4x4;

#if !defined(____FIReference_1_Windows__CFoundation__CNumerics__CMatrix4x4_INTERFACE_DEFINED__)
#define ____FIReference_1_Windows__CFoundation__CNumerics__CMatrix4x4_INTERFACE_DEFINED__

typedef interface __FIReference_1_Windows__CFoundation__CNumerics__CMatrix4x4 __FIReference_1_Windows__CFoundation__CNumerics__CMatrix4x4;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIReference_1_Windows__CFoundation__CNumerics__CMatrix4x4;

typedef struct __FIReference_1_Windows__CFoundation__CNumerics__CMatrix4x4Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_Windows__CFoundation__CNumerics__CMatrix4x4 * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_Windows__CFoundation__CNumerics__CMatrix4x4 * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_Windows__CFoundation__CNumerics__CMatrix4x4 * This );

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_Windows__CFoundation__CNumerics__CMatrix4x4 * This, 
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_Windows__CFoundation__CNumerics__CMatrix4x4 * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_Windows__CFoundation__CNumerics__CMatrix4x4 * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_Windows__CFoundation__CNumerics__CMatrix4x4 * This, /* [retval][out] */ __RPC__out struct __x_ABI_CWindows_CFoundation_CNumerics_CMatrix4x4 *value);
    END_INTERFACE
} __FIReference_1_Windows__CFoundation__CNumerics__CMatrix4x4Vtbl;

interface __FIReference_1_Windows__CFoundation__CNumerics__CMatrix4x4
{
    CONST_VTBL struct __FIReference_1_Windows__CFoundation__CNumerics__CMatrix4x4Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIReference_1_Windows__CFoundation__CNumerics__CMatrix4x4_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIReference_1_Windows__CFoundation__CNumerics__CMatrix4x4_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIReference_1_Windows__CFoundation__CNumerics__CMatrix4x4_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIReference_1_Windows__CFoundation__CNumerics__CMatrix4x4_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIReference_1_Windows__CFoundation__CNumerics__CMatrix4x4_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIReference_1_Windows__CFoundation__CNumerics__CMatrix4x4_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIReference_1_Windows__CFoundation__CNumerics__CMatrix4x4_get_Value(This,value)	\
    ( (This)->lpVtbl -> get_Value(This,value) ) 
#endif /* COBJMACROS */


#endif // ____FIReference_1_Windows__CFoundation__CNumerics__CMatrix4x4_INTERFACE_DEFINED__


struct __x_ABI_CWindows_CFoundation_CNumerics_CQuaternion;

#if !defined(____FIReference_1_Windows__CFoundation__CNumerics__CQuaternion_INTERFACE_DEFINED__)
#define ____FIReference_1_Windows__CFoundation__CNumerics__CQuaternion_INTERFACE_DEFINED__

typedef interface __FIReference_1_Windows__CFoundation__CNumerics__CQuaternion __FIReference_1_Windows__CFoundation__CNumerics__CQuaternion;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIReference_1_Windows__CFoundation__CNumerics__CQuaternion;

typedef struct __FIReference_1_Windows__CFoundation__CNumerics__CQuaternionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_Windows__CFoundation__CNumerics__CQuaternion * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_Windows__CFoundation__CNumerics__CQuaternion * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_Windows__CFoundation__CNumerics__CQuaternion * This );

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_Windows__CFoundation__CNumerics__CQuaternion * This, 
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_Windows__CFoundation__CNumerics__CQuaternion * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_Windows__CFoundation__CNumerics__CQuaternion * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_Windows__CFoundation__CNumerics__CQuaternion * This, /* [retval][out] */ __RPC__out struct __x_ABI_CWindows_CFoundation_CNumerics_CQuaternion *value);
    END_INTERFACE
} __FIReference_1_Windows__CFoundation__CNumerics__CQuaternionVtbl;

interface __FIReference_1_Windows__CFoundation__CNumerics__CQuaternion
{
    CONST_VTBL struct __FIReference_1_Windows__CFoundation__CNumerics__CQuaternionVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIReference_1_Windows__CFoundation__CNumerics__CQuaternion_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIReference_1_Windows__CFoundation__CNumerics__CQuaternion_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIReference_1_Windows__CFoundation__CNumerics__CQuaternion_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIReference_1_Windows__CFoundation__CNumerics__CQuaternion_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIReference_1_Windows__CFoundation__CNumerics__CQuaternion_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIReference_1_Windows__CFoundation__CNumerics__CQuaternion_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIReference_1_Windows__CFoundation__CNumerics__CQuaternion_get_Value(This,value)	\
    ( (This)->lpVtbl -> get_Value(This,value) ) 
#endif /* COBJMACROS */


#endif // ____FIReference_1_Windows__CFoundation__CNumerics__CQuaternion_INTERFACE_DEFINED__


struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2;

#if !defined(____FIReference_1_Windows__CFoundation__CNumerics__CVector2_INTERFACE_DEFINED__)
#define ____FIReference_1_Windows__CFoundation__CNumerics__CVector2_INTERFACE_DEFINED__

typedef interface __FIReference_1_Windows__CFoundation__CNumerics__CVector2 __FIReference_1_Windows__CFoundation__CNumerics__CVector2;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIReference_1_Windows__CFoundation__CNumerics__CVector2;

typedef struct __FIReference_1_Windows__CFoundation__CNumerics__CVector2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_Windows__CFoundation__CNumerics__CVector2 * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_Windows__CFoundation__CNumerics__CVector2 * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_Windows__CFoundation__CNumerics__CVector2 * This );

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_Windows__CFoundation__CNumerics__CVector2 * This, 
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_Windows__CFoundation__CNumerics__CVector2 * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_Windows__CFoundation__CNumerics__CVector2 * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_Windows__CFoundation__CNumerics__CVector2 * This, /* [retval][out] */ __RPC__out struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2 *value);
    END_INTERFACE
} __FIReference_1_Windows__CFoundation__CNumerics__CVector2Vtbl;

interface __FIReference_1_Windows__CFoundation__CNumerics__CVector2
{
    CONST_VTBL struct __FIReference_1_Windows__CFoundation__CNumerics__CVector2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIReference_1_Windows__CFoundation__CNumerics__CVector2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIReference_1_Windows__CFoundation__CNumerics__CVector2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIReference_1_Windows__CFoundation__CNumerics__CVector2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIReference_1_Windows__CFoundation__CNumerics__CVector2_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIReference_1_Windows__CFoundation__CNumerics__CVector2_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIReference_1_Windows__CFoundation__CNumerics__CVector2_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIReference_1_Windows__CFoundation__CNumerics__CVector2_get_Value(This,value)	\
    ( (This)->lpVtbl -> get_Value(This,value) ) 
#endif /* COBJMACROS */


#endif // ____FIReference_1_Windows__CFoundation__CNumerics__CVector2_INTERFACE_DEFINED__


struct __x_ABI_CWindows_CFoundation_CNumerics_CVector3;

#if !defined(____FIReference_1_Windows__CFoundation__CNumerics__CVector3_INTERFACE_DEFINED__)
#define ____FIReference_1_Windows__CFoundation__CNumerics__CVector3_INTERFACE_DEFINED__

typedef interface __FIReference_1_Windows__CFoundation__CNumerics__CVector3 __FIReference_1_Windows__CFoundation__CNumerics__CVector3;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIReference_1_Windows__CFoundation__CNumerics__CVector3;

typedef struct __FIReference_1_Windows__CFoundation__CNumerics__CVector3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_Windows__CFoundation__CNumerics__CVector3 * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_Windows__CFoundation__CNumerics__CVector3 * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_Windows__CFoundation__CNumerics__CVector3 * This );

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_Windows__CFoundation__CNumerics__CVector3 * This, 
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_Windows__CFoundation__CNumerics__CVector3 * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_Windows__CFoundation__CNumerics__CVector3 * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_Windows__CFoundation__CNumerics__CVector3 * This, /* [retval][out] */ __RPC__out struct __x_ABI_CWindows_CFoundation_CNumerics_CVector3 *value);
    END_INTERFACE
} __FIReference_1_Windows__CFoundation__CNumerics__CVector3Vtbl;

interface __FIReference_1_Windows__CFoundation__CNumerics__CVector3
{
    CONST_VTBL struct __FIReference_1_Windows__CFoundation__CNumerics__CVector3Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIReference_1_Windows__CFoundation__CNumerics__CVector3_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIReference_1_Windows__CFoundation__CNumerics__CVector3_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIReference_1_Windows__CFoundation__CNumerics__CVector3_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIReference_1_Windows__CFoundation__CNumerics__CVector3_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIReference_1_Windows__CFoundation__CNumerics__CVector3_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIReference_1_Windows__CFoundation__CNumerics__CVector3_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIReference_1_Windows__CFoundation__CNumerics__CVector3_get_Value(This,value)	\
    ( (This)->lpVtbl -> get_Value(This,value) ) 
#endif /* COBJMACROS */


#endif // ____FIReference_1_Windows__CFoundation__CNumerics__CVector3_INTERFACE_DEFINED__







typedef struct __x_ABI_CWindows_CFoundation_CNumerics_CMatrix3x2 __x_ABI_CWindows_CFoundation_CNumerics_CMatrix3x2;


typedef struct __x_ABI_CWindows_CFoundation_CNumerics_CMatrix4x4 __x_ABI_CWindows_CFoundation_CNumerics_CMatrix4x4;


typedef struct __x_ABI_CWindows_CFoundation_CNumerics_CPlane __x_ABI_CWindows_CFoundation_CNumerics_CPlane;


typedef struct __x_ABI_CWindows_CFoundation_CNumerics_CQuaternion __x_ABI_CWindows_CFoundation_CNumerics_CQuaternion;


typedef struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2 __x_ABI_CWindows_CFoundation_CNumerics_CVector2;


typedef struct __x_ABI_CWindows_CFoundation_CNumerics_CVector3 __x_ABI_CWindows_CFoundation_CNumerics_CVector3;


typedef struct __x_ABI_CWindows_CFoundation_CNumerics_CVector4 __x_ABI_CWindows_CFoundation_CNumerics_CVector4;









/*
 *
 * Struct Windows.Foundation.Numerics.Matrix3x2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

/* [contract] */
struct __x_ABI_CWindows_CFoundation_CNumerics_CMatrix3x2
{
    FLOAT M11;
    FLOAT M12;
    FLOAT M21;
    FLOAT M22;
    FLOAT M31;
    FLOAT M32;
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Foundation.Numerics.Matrix4x4
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

/* [contract] */
struct __x_ABI_CWindows_CFoundation_CNumerics_CMatrix4x4
{
    FLOAT M11;
    FLOAT M12;
    FLOAT M13;
    FLOAT M14;
    FLOAT M21;
    FLOAT M22;
    FLOAT M23;
    FLOAT M24;
    FLOAT M31;
    FLOAT M32;
    FLOAT M33;
    FLOAT M34;
    FLOAT M41;
    FLOAT M42;
    FLOAT M43;
    FLOAT M44;
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Foundation.Numerics.Vector3
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

/* [contract] */
struct __x_ABI_CWindows_CFoundation_CNumerics_CVector3
{
    FLOAT X;
    FLOAT Y;
    FLOAT Z;
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Foundation.Numerics.Plane
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

/* [contract] */
struct __x_ABI_CWindows_CFoundation_CNumerics_CPlane
{
    __x_ABI_CWindows_CFoundation_CNumerics_CVector3 Normal;
    FLOAT D;
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Foundation.Numerics.Quaternion
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

/* [contract] */
struct __x_ABI_CWindows_CFoundation_CNumerics_CQuaternion
{
    FLOAT X;
    FLOAT Y;
    FLOAT Z;
    FLOAT W;
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Foundation.Numerics.Vector2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

/* [contract] */
struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2
{
    FLOAT X;
    FLOAT Y;
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Foundation.Numerics.Vector4
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

/* [contract] */
struct __x_ABI_CWindows_CFoundation_CNumerics_CVector4
{
    FLOAT X;
    FLOAT Y;
    FLOAT Z;
    FLOAT W;
};
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
#endif // __windows2Efoundation2Enumerics_p_h__

#endif // __windows2Efoundation2Enumerics_h__
