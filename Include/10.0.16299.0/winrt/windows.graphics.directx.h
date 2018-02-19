/* Header file automatically generated from windows.graphics.directx.idl */
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
#ifndef __windows2Egraphics2Edirectx_h__
#define __windows2Egraphics2Edirectx_h__
#ifndef __windows2Egraphics2Edirectx_p_h__
#define __windows2Egraphics2Edirectx_p_h__


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
        namespace Graphics {
            namespace DirectX {
                enum DirectXPixelFormat : int;
            } /* Windows */
        } /* Graphics */
    } /* DirectX */} /* ABI */


#ifndef DEF___FIIterator_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat_USE
#define DEF___FIIterator_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("ea016190-ac80-5840-8f58-ff434c7b2907"))
IIterator<enum ABI::Windows::Graphics::DirectX::DirectXPixelFormat> : IIterator_impl<enum ABI::Windows::Graphics::DirectX::DirectXPixelFormat> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Graphics.DirectX.DirectXPixelFormat>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<enum ABI::Windows::Graphics::DirectX::DirectXPixelFormat> __FIIterator_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat_t;
#define __FIIterator_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Graphics::DirectX::DirectXPixelFormat>
//#define __FIIterator_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Graphics::DirectX::DirectXPixelFormat>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat_USE */





#ifndef DEF___FIIterable_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat_USE
#define DEF___FIIterable_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("3908f2c6-1aee-5129-b9a6-2a6e01d9507e"))
IIterable<enum ABI::Windows::Graphics::DirectX::DirectXPixelFormat> : IIterable_impl<enum ABI::Windows::Graphics::DirectX::DirectXPixelFormat> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Graphics.DirectX.DirectXPixelFormat>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<enum ABI::Windows::Graphics::DirectX::DirectXPixelFormat> __FIIterable_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat_t;
#define __FIIterable_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Graphics::DirectX::DirectXPixelFormat>
//#define __FIIterable_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Graphics::DirectX::DirectXPixelFormat>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat_USE */





#ifndef DEF___FIVectorView_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat_USE
#define DEF___FIVectorView_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("1edda1c2-0f6e-516c-80b8-7687dcd1280e"))
IVectorView<enum ABI::Windows::Graphics::DirectX::DirectXPixelFormat> : IVectorView_impl<enum ABI::Windows::Graphics::DirectX::DirectXPixelFormat> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Graphics.DirectX.DirectXPixelFormat>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<enum ABI::Windows::Graphics::DirectX::DirectXPixelFormat> __FIVectorView_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat_t;
#define __FIVectorView_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Graphics::DirectX::DirectXPixelFormat>
//#define __FIVectorView_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Graphics::DirectX::DirectXPixelFormat>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat_USE */








namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace DirectX {
                
                typedef enum DirectXAlphaMode : int DirectXAlphaMode;
                
            } /* Windows */
        } /* Graphics */
    } /* DirectX */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace DirectX {
                
                typedef enum DirectXPixelFormat : int DirectXPixelFormat;
                
            } /* Windows */
        } /* Graphics */
    } /* DirectX */} /* ABI */









/*
 *
 * Struct Windows.Graphics.DirectX.DirectXAlphaMode
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace DirectX {
                /* [v1_enum, contract] */
                enum DirectXAlphaMode : int
                {
                    DirectXAlphaMode_Unspecified = 0,
                    DirectXAlphaMode_Premultiplied = 1,
                    DirectXAlphaMode_Straight = 2,
                    DirectXAlphaMode_Ignore = 3,
                };
                
            } /* Windows */
        } /* Graphics */
    } /* DirectX */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Struct Windows.Graphics.DirectX.DirectXPixelFormat
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace DirectX {
                /* [v1_enum, contract] */
                enum DirectXPixelFormat : int
                {
                    DirectXPixelFormat_Unknown = 0,
                    DirectXPixelFormat_R32G32B32A32Typeless = 1,
                    DirectXPixelFormat_R32G32B32A32Float = 2,
                    DirectXPixelFormat_R32G32B32A32UInt = 3,
                    DirectXPixelFormat_R32G32B32A32Int = 4,
                    DirectXPixelFormat_R32G32B32Typeless = 5,
                    DirectXPixelFormat_R32G32B32Float = 6,
                    DirectXPixelFormat_R32G32B32UInt = 7,
                    DirectXPixelFormat_R32G32B32Int = 8,
                    DirectXPixelFormat_R16G16B16A16Typeless = 9,
                    DirectXPixelFormat_R16G16B16A16Float = 10,
                    DirectXPixelFormat_R16G16B16A16UIntNormalized = 11,
                    DirectXPixelFormat_R16G16B16A16UInt = 12,
                    DirectXPixelFormat_R16G16B16A16IntNormalized = 13,
                    DirectXPixelFormat_R16G16B16A16Int = 14,
                    DirectXPixelFormat_R32G32Typeless = 15,
                    DirectXPixelFormat_R32G32Float = 16,
                    DirectXPixelFormat_R32G32UInt = 17,
                    DirectXPixelFormat_R32G32Int = 18,
                    DirectXPixelFormat_R32G8X24Typeless = 19,
                    DirectXPixelFormat_D32FloatS8X24UInt = 20,
                    DirectXPixelFormat_R32FloatX8X24Typeless = 21,
                    DirectXPixelFormat_X32TypelessG8X24UInt = 22,
                    DirectXPixelFormat_R10G10B10A2Typeless = 23,
                    DirectXPixelFormat_R10G10B10A2UIntNormalized = 24,
                    DirectXPixelFormat_R10G10B10A2UInt = 25,
                    DirectXPixelFormat_R11G11B10Float = 26,
                    DirectXPixelFormat_R8G8B8A8Typeless = 27,
                    DirectXPixelFormat_R8G8B8A8UIntNormalized = 28,
                    DirectXPixelFormat_R8G8B8A8UIntNormalizedSrgb = 29,
                    DirectXPixelFormat_R8G8B8A8UInt = 30,
                    DirectXPixelFormat_R8G8B8A8IntNormalized = 31,
                    DirectXPixelFormat_R8G8B8A8Int = 32,
                    DirectXPixelFormat_R16G16Typeless = 33,
                    DirectXPixelFormat_R16G16Float = 34,
                    DirectXPixelFormat_R16G16UIntNormalized = 35,
                    DirectXPixelFormat_R16G16UInt = 36,
                    DirectXPixelFormat_R16G16IntNormalized = 37,
                    DirectXPixelFormat_R16G16Int = 38,
                    DirectXPixelFormat_R32Typeless = 39,
                    DirectXPixelFormat_D32Float = 40,
                    DirectXPixelFormat_R32Float = 41,
                    DirectXPixelFormat_R32UInt = 42,
                    DirectXPixelFormat_R32Int = 43,
                    DirectXPixelFormat_R24G8Typeless = 44,
                    DirectXPixelFormat_D24UIntNormalizedS8UInt = 45,
                    DirectXPixelFormat_R24UIntNormalizedX8Typeless = 46,
                    DirectXPixelFormat_X24TypelessG8UInt = 47,
                    DirectXPixelFormat_R8G8Typeless = 48,
                    DirectXPixelFormat_R8G8UIntNormalized = 49,
                    DirectXPixelFormat_R8G8UInt = 50,
                    DirectXPixelFormat_R8G8IntNormalized = 51,
                    DirectXPixelFormat_R8G8Int = 52,
                    DirectXPixelFormat_R16Typeless = 53,
                    DirectXPixelFormat_R16Float = 54,
                    DirectXPixelFormat_D16UIntNormalized = 55,
                    DirectXPixelFormat_R16UIntNormalized = 56,
                    DirectXPixelFormat_R16UInt = 57,
                    DirectXPixelFormat_R16IntNormalized = 58,
                    DirectXPixelFormat_R16Int = 59,
                    DirectXPixelFormat_R8Typeless = 60,
                    DirectXPixelFormat_R8UIntNormalized = 61,
                    DirectXPixelFormat_R8UInt = 62,
                    DirectXPixelFormat_R8IntNormalized = 63,
                    DirectXPixelFormat_R8Int = 64,
                    DirectXPixelFormat_A8UIntNormalized = 65,
                    DirectXPixelFormat_R1UIntNormalized = 66,
                    DirectXPixelFormat_R9G9B9E5SharedExponent = 67,
                    DirectXPixelFormat_R8G8B8G8UIntNormalized = 68,
                    DirectXPixelFormat_G8R8G8B8UIntNormalized = 69,
                    DirectXPixelFormat_BC1Typeless = 70,
                    DirectXPixelFormat_BC1UIntNormalized = 71,
                    DirectXPixelFormat_BC1UIntNormalizedSrgb = 72,
                    DirectXPixelFormat_BC2Typeless = 73,
                    DirectXPixelFormat_BC2UIntNormalized = 74,
                    DirectXPixelFormat_BC2UIntNormalizedSrgb = 75,
                    DirectXPixelFormat_BC3Typeless = 76,
                    DirectXPixelFormat_BC3UIntNormalized = 77,
                    DirectXPixelFormat_BC3UIntNormalizedSrgb = 78,
                    DirectXPixelFormat_BC4Typeless = 79,
                    DirectXPixelFormat_BC4UIntNormalized = 80,
                    DirectXPixelFormat_BC4IntNormalized = 81,
                    DirectXPixelFormat_BC5Typeless = 82,
                    DirectXPixelFormat_BC5UIntNormalized = 83,
                    DirectXPixelFormat_BC5IntNormalized = 84,
                    DirectXPixelFormat_B5G6R5UIntNormalized = 85,
                    DirectXPixelFormat_B5G5R5A1UIntNormalized = 86,
                    DirectXPixelFormat_B8G8R8A8UIntNormalized = 87,
                    DirectXPixelFormat_B8G8R8X8UIntNormalized = 88,
                    DirectXPixelFormat_R10G10B10XRBiasA2UIntNormalized = 89,
                    DirectXPixelFormat_B8G8R8A8Typeless = 90,
                    DirectXPixelFormat_B8G8R8A8UIntNormalizedSrgb = 91,
                    DirectXPixelFormat_B8G8R8X8Typeless = 92,
                    DirectXPixelFormat_B8G8R8X8UIntNormalizedSrgb = 93,
                    DirectXPixelFormat_BC6HTypeless = 94,
                    DirectXPixelFormat_BC6H16UnsignedFloat = 95,
                    DirectXPixelFormat_BC6H16Float = 96,
                    DirectXPixelFormat_BC7Typeless = 97,
                    DirectXPixelFormat_BC7UIntNormalized = 98,
                    DirectXPixelFormat_BC7UIntNormalizedSrgb = 99,
                    DirectXPixelFormat_Ayuv = 100,
                    DirectXPixelFormat_Y410 = 101,
                    DirectXPixelFormat_Y416 = 102,
                    DirectXPixelFormat_NV12 = 103,
                    DirectXPixelFormat_P010 = 104,
                    DirectXPixelFormat_P016 = 105,
                    DirectXPixelFormat_Opaque420 = 106,
                    DirectXPixelFormat_Yuy2 = 107,
                    DirectXPixelFormat_Y210 = 108,
                    DirectXPixelFormat_Y216 = 109,
                    DirectXPixelFormat_NV11 = 110,
                    DirectXPixelFormat_AI44 = 111,
                    DirectXPixelFormat_IA44 = 112,
                    DirectXPixelFormat_P8 = 113,
                    DirectXPixelFormat_A8P8 = 114,
                    DirectXPixelFormat_B4G4R4A4UIntNormalized = 115,
                    DirectXPixelFormat_P208 = 130,
                    DirectXPixelFormat_V208 = 131,
                    DirectXPixelFormat_V408 = 132,
                };
                
            } /* Windows */
        } /* Graphics */
    } /* DirectX */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000




#else // !defined(__cplusplus)
/* Forward Declarations */
// Parameterized interface forward declarations (C)

// Collection interface definitions
enum __x_ABI_CWindows_CGraphics_CDirectX_CDirectXPixelFormat;
#if !defined(____FIIterator_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat __FIIterator_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat;

typedef struct __FIIterator_1_Windows__CGraphics__CDirectX__CDirectXPixelFormatVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat * This, /* [retval][out] */ __RPC__out enum __x_ABI_CWindows_CGraphics_CDirectX_CDirectXPixelFormat *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) enum __x_ABI_CWindows_CGraphics_CDirectX_CDirectXPixelFormat *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CGraphics__CDirectX__CDirectXPixelFormatVtbl;

interface __FIIterator_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat
{
    CONST_VTBL struct __FIIterator_1_Windows__CGraphics__CDirectX__CDirectXPixelFormatVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat_INTERFACE_DEFINED__



#if !defined(____FIIterable_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat __FIIterable_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat;

typedef  struct __FIIterable_1_Windows__CGraphics__CDirectX__CDirectXPixelFormatVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat **first);

    END_INTERFACE
} __FIIterable_1_Windows__CGraphics__CDirectX__CDirectXPixelFormatVtbl;

interface __FIIterable_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat
{
    CONST_VTBL struct __FIIterable_1_Windows__CGraphics__CDirectX__CDirectXPixelFormatVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat_INTERFACE_DEFINED__



#if !defined(____FIVectorView_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat __FIVectorView_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat;

typedef struct __FIVectorView_1_Windows__CGraphics__CDirectX__CDirectXPixelFormatVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out enum __x_ABI_CWindows_CGraphics_CDirectX_CDirectXPixelFormat *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat * This,
            /* [in] */ enum __x_ABI_CWindows_CGraphics_CDirectX_CDirectXPixelFormat item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) enum __x_ABI_CWindows_CGraphics_CDirectX_CDirectXPixelFormat *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CGraphics__CDirectX__CDirectXPixelFormatVtbl;

interface __FIVectorView_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat
{
    CONST_VTBL struct __FIVectorView_1_Windows__CGraphics__CDirectX__CDirectXPixelFormatVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat_INTERFACE_DEFINED__







typedef enum __x_ABI_CWindows_CGraphics_CDirectX_CDirectXAlphaMode __x_ABI_CWindows_CGraphics_CDirectX_CDirectXAlphaMode;


typedef enum __x_ABI_CWindows_CGraphics_CDirectX_CDirectXPixelFormat __x_ABI_CWindows_CGraphics_CDirectX_CDirectXPixelFormat;









/*
 *
 * Struct Windows.Graphics.DirectX.DirectXAlphaMode
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CGraphics_CDirectX_CDirectXAlphaMode
{
    DirectXAlphaMode_Unspecified = 0,
    DirectXAlphaMode_Premultiplied = 1,
    DirectXAlphaMode_Straight = 2,
    DirectXAlphaMode_Ignore = 3,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Struct Windows.Graphics.DirectX.DirectXPixelFormat
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CGraphics_CDirectX_CDirectXPixelFormat
{
    DirectXPixelFormat_Unknown = 0,
    DirectXPixelFormat_R32G32B32A32Typeless = 1,
    DirectXPixelFormat_R32G32B32A32Float = 2,
    DirectXPixelFormat_R32G32B32A32UInt = 3,
    DirectXPixelFormat_R32G32B32A32Int = 4,
    DirectXPixelFormat_R32G32B32Typeless = 5,
    DirectXPixelFormat_R32G32B32Float = 6,
    DirectXPixelFormat_R32G32B32UInt = 7,
    DirectXPixelFormat_R32G32B32Int = 8,
    DirectXPixelFormat_R16G16B16A16Typeless = 9,
    DirectXPixelFormat_R16G16B16A16Float = 10,
    DirectXPixelFormat_R16G16B16A16UIntNormalized = 11,
    DirectXPixelFormat_R16G16B16A16UInt = 12,
    DirectXPixelFormat_R16G16B16A16IntNormalized = 13,
    DirectXPixelFormat_R16G16B16A16Int = 14,
    DirectXPixelFormat_R32G32Typeless = 15,
    DirectXPixelFormat_R32G32Float = 16,
    DirectXPixelFormat_R32G32UInt = 17,
    DirectXPixelFormat_R32G32Int = 18,
    DirectXPixelFormat_R32G8X24Typeless = 19,
    DirectXPixelFormat_D32FloatS8X24UInt = 20,
    DirectXPixelFormat_R32FloatX8X24Typeless = 21,
    DirectXPixelFormat_X32TypelessG8X24UInt = 22,
    DirectXPixelFormat_R10G10B10A2Typeless = 23,
    DirectXPixelFormat_R10G10B10A2UIntNormalized = 24,
    DirectXPixelFormat_R10G10B10A2UInt = 25,
    DirectXPixelFormat_R11G11B10Float = 26,
    DirectXPixelFormat_R8G8B8A8Typeless = 27,
    DirectXPixelFormat_R8G8B8A8UIntNormalized = 28,
    DirectXPixelFormat_R8G8B8A8UIntNormalizedSrgb = 29,
    DirectXPixelFormat_R8G8B8A8UInt = 30,
    DirectXPixelFormat_R8G8B8A8IntNormalized = 31,
    DirectXPixelFormat_R8G8B8A8Int = 32,
    DirectXPixelFormat_R16G16Typeless = 33,
    DirectXPixelFormat_R16G16Float = 34,
    DirectXPixelFormat_R16G16UIntNormalized = 35,
    DirectXPixelFormat_R16G16UInt = 36,
    DirectXPixelFormat_R16G16IntNormalized = 37,
    DirectXPixelFormat_R16G16Int = 38,
    DirectXPixelFormat_R32Typeless = 39,
    DirectXPixelFormat_D32Float = 40,
    DirectXPixelFormat_R32Float = 41,
    DirectXPixelFormat_R32UInt = 42,
    DirectXPixelFormat_R32Int = 43,
    DirectXPixelFormat_R24G8Typeless = 44,
    DirectXPixelFormat_D24UIntNormalizedS8UInt = 45,
    DirectXPixelFormat_R24UIntNormalizedX8Typeless = 46,
    DirectXPixelFormat_X24TypelessG8UInt = 47,
    DirectXPixelFormat_R8G8Typeless = 48,
    DirectXPixelFormat_R8G8UIntNormalized = 49,
    DirectXPixelFormat_R8G8UInt = 50,
    DirectXPixelFormat_R8G8IntNormalized = 51,
    DirectXPixelFormat_R8G8Int = 52,
    DirectXPixelFormat_R16Typeless = 53,
    DirectXPixelFormat_R16Float = 54,
    DirectXPixelFormat_D16UIntNormalized = 55,
    DirectXPixelFormat_R16UIntNormalized = 56,
    DirectXPixelFormat_R16UInt = 57,
    DirectXPixelFormat_R16IntNormalized = 58,
    DirectXPixelFormat_R16Int = 59,
    DirectXPixelFormat_R8Typeless = 60,
    DirectXPixelFormat_R8UIntNormalized = 61,
    DirectXPixelFormat_R8UInt = 62,
    DirectXPixelFormat_R8IntNormalized = 63,
    DirectXPixelFormat_R8Int = 64,
    DirectXPixelFormat_A8UIntNormalized = 65,
    DirectXPixelFormat_R1UIntNormalized = 66,
    DirectXPixelFormat_R9G9B9E5SharedExponent = 67,
    DirectXPixelFormat_R8G8B8G8UIntNormalized = 68,
    DirectXPixelFormat_G8R8G8B8UIntNormalized = 69,
    DirectXPixelFormat_BC1Typeless = 70,
    DirectXPixelFormat_BC1UIntNormalized = 71,
    DirectXPixelFormat_BC1UIntNormalizedSrgb = 72,
    DirectXPixelFormat_BC2Typeless = 73,
    DirectXPixelFormat_BC2UIntNormalized = 74,
    DirectXPixelFormat_BC2UIntNormalizedSrgb = 75,
    DirectXPixelFormat_BC3Typeless = 76,
    DirectXPixelFormat_BC3UIntNormalized = 77,
    DirectXPixelFormat_BC3UIntNormalizedSrgb = 78,
    DirectXPixelFormat_BC4Typeless = 79,
    DirectXPixelFormat_BC4UIntNormalized = 80,
    DirectXPixelFormat_BC4IntNormalized = 81,
    DirectXPixelFormat_BC5Typeless = 82,
    DirectXPixelFormat_BC5UIntNormalized = 83,
    DirectXPixelFormat_BC5IntNormalized = 84,
    DirectXPixelFormat_B5G6R5UIntNormalized = 85,
    DirectXPixelFormat_B5G5R5A1UIntNormalized = 86,
    DirectXPixelFormat_B8G8R8A8UIntNormalized = 87,
    DirectXPixelFormat_B8G8R8X8UIntNormalized = 88,
    DirectXPixelFormat_R10G10B10XRBiasA2UIntNormalized = 89,
    DirectXPixelFormat_B8G8R8A8Typeless = 90,
    DirectXPixelFormat_B8G8R8A8UIntNormalizedSrgb = 91,
    DirectXPixelFormat_B8G8R8X8Typeless = 92,
    DirectXPixelFormat_B8G8R8X8UIntNormalizedSrgb = 93,
    DirectXPixelFormat_BC6HTypeless = 94,
    DirectXPixelFormat_BC6H16UnsignedFloat = 95,
    DirectXPixelFormat_BC6H16Float = 96,
    DirectXPixelFormat_BC7Typeless = 97,
    DirectXPixelFormat_BC7UIntNormalized = 98,
    DirectXPixelFormat_BC7UIntNormalizedSrgb = 99,
    DirectXPixelFormat_Ayuv = 100,
    DirectXPixelFormat_Y410 = 101,
    DirectXPixelFormat_Y416 = 102,
    DirectXPixelFormat_NV12 = 103,
    DirectXPixelFormat_P010 = 104,
    DirectXPixelFormat_P016 = 105,
    DirectXPixelFormat_Opaque420 = 106,
    DirectXPixelFormat_Yuy2 = 107,
    DirectXPixelFormat_Y210 = 108,
    DirectXPixelFormat_Y216 = 109,
    DirectXPixelFormat_NV11 = 110,
    DirectXPixelFormat_AI44 = 111,
    DirectXPixelFormat_IA44 = 112,
    DirectXPixelFormat_P8 = 113,
    DirectXPixelFormat_A8P8 = 114,
    DirectXPixelFormat_B4G4R4A4UIntNormalized = 115,
    DirectXPixelFormat_P208 = 130,
    DirectXPixelFormat_V208 = 131,
    DirectXPixelFormat_V408 = 132,
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
#endif // __windows2Egraphics2Edirectx_p_h__

#endif // __windows2Egraphics2Edirectx_h__
