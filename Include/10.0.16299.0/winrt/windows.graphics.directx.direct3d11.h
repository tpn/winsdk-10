/* Header file automatically generated from windows.graphics.directx.direct3d11.idl */
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
#ifndef __windows2Egraphics2Edirectx2Edirect3d11_h__
#define __windows2Egraphics2Edirectx2Edirect3d11_h__
#ifndef __windows2Egraphics2Edirectx2Edirect3d11_p_h__
#define __windows2Egraphics2Edirectx2Edirect3d11_p_h__


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
#include "Windows.Graphics.DirectX.h"
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DDevice_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DDevice_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace DirectX {
                namespace Direct3D11 {
                    interface IDirect3DDevice;
                } /* Windows */
            } /* Graphics */
        } /* DirectX */
    } /* Direct3D11 */} /* ABI */
#define __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DDevice ABI::Windows::Graphics::DirectX::Direct3D11::IDirect3DDevice

#endif // ____x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DDevice_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace DirectX {
                namespace Direct3D11 {
                    interface IDirect3DSurface;
                } /* Windows */
            } /* Graphics */
        } /* DirectX */
    } /* Direct3D11 */} /* ABI */
#define __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface ABI::Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface

#endif // ____x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface_USE
#define DEF___FIIterator_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("bdfb6d0b-e785-5d5a-abd2-fe1b18c43257"))
IIterator<ABI::Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface*> : IIterator_impl<ABI::Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Graphics.DirectX.Direct3D11.IDirect3DSurface>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface*> __FIIterator_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface_t;
#define __FIIterator_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface*>
//#define __FIIterator_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface_USE
#define DEF___FIIterable_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("cc63bf9c-e16a-5a75-a5aa-2b53f975b0b0"))
IIterable<ABI::Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface*> : IIterable_impl<ABI::Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Graphics.DirectX.Direct3D11.IDirect3DSurface>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface*> __FIIterable_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface_t;
#define __FIIterable_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface*>
//#define __FIIterable_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface_USE
#define DEF___FIVectorView_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("1a81ec3e-5afb-5e10-92bb-c843fec70887"))
IVectorView<ABI::Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface*> : IVectorView_impl<ABI::Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Graphics.DirectX.Direct3D11.IDirect3DSurface>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface*> __FIVectorView_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface_t;
#define __FIVectorView_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface*>
//#define __FIVectorView_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



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
        namespace Graphics {
            namespace DirectX {
                
                typedef enum DirectXPixelFormat : int DirectXPixelFormat;
                
            } /* Windows */
        } /* Graphics */
    } /* DirectX */} /* ABI */




namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace DirectX {
                namespace Direct3D11 {
                    
                    typedef enum Direct3DBindings : unsigned int Direct3DBindings;
                    
                } /* Windows */
            } /* Graphics */
        } /* DirectX */
    } /* Direct3D11 */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace DirectX {
                namespace Direct3D11 {
                    
                    typedef enum Direct3DUsage : int Direct3DUsage;
                    
                } /* Windows */
            } /* Graphics */
        } /* DirectX */
    } /* Direct3D11 */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace DirectX {
                namespace Direct3D11 {
                    
                    typedef struct Direct3DMultisampleDescription Direct3DMultisampleDescription;
                    
                } /* Windows */
            } /* Graphics */
        } /* DirectX */
    } /* Direct3D11 */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace DirectX {
                namespace Direct3D11 {
                    
                    typedef struct Direct3DSurfaceDescription Direct3DSurfaceDescription;
                    
                } /* Windows */
            } /* Graphics */
        } /* DirectX */
    } /* Direct3D11 */} /* ABI */













/*
 *
 * Struct Windows.Graphics.DirectX.Direct3D11.Direct3DBindings
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
                namespace Direct3D11 {
                    /* [v1_enum, flags, contract] */
                    enum Direct3DBindings : unsigned int
                    {
                        Direct3DBindings_VertexBuffer = 0x1,
                        Direct3DBindings_IndexBuffer = 0x2,
                        Direct3DBindings_ConstantBuffer = 0x4,
                        Direct3DBindings_ShaderResource = 0x8,
                        Direct3DBindings_StreamOutput = 0x10,
                        Direct3DBindings_RenderTarget = 0x20,
                        Direct3DBindings_DepthStencil = 0x40,
                        Direct3DBindings_UnorderedAccess = 0x80,
                        Direct3DBindings_Decoder = 0x200,
                        Direct3DBindings_VideoEncoder = 0x400,
                    };
                    
                    DEFINE_ENUM_FLAG_OPERATORS(Direct3DBindings)
                    
                } /* Windows */
            } /* Graphics */
        } /* DirectX */
    } /* Direct3D11 */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Graphics.DirectX.Direct3D11.Direct3DUsage
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
                namespace Direct3D11 {
                    /* [v1_enum, contract] */
                    enum Direct3DUsage : int
                    {
                        Direct3DUsage_Default = 0,
                        Direct3DUsage_Immutable = 1,
                        Direct3DUsage_Dynamic = 2,
                        Direct3DUsage_Staging = 3,
                    };
                    
                } /* Windows */
            } /* Graphics */
        } /* DirectX */
    } /* Direct3D11 */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Graphics.DirectX.Direct3D11.Direct3DMultisampleDescription
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
                namespace Direct3D11 {
                    /* [contract] */
                    struct Direct3DMultisampleDescription
                    {
                        INT32 Count;
                        INT32 Quality;
                    };
                    
                } /* Windows */
            } /* Graphics */
        } /* DirectX */
    } /* Direct3D11 */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Graphics.DirectX.Direct3D11.Direct3DSurfaceDescription
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
                namespace Direct3D11 {
                    /* [contract] */
                    struct Direct3DSurfaceDescription
                    {
                        INT32 Width;
                        INT32 Height;
                        ABI::Windows::Graphics::DirectX::DirectXPixelFormat Format;
                        ABI::Windows::Graphics::DirectX::Direct3D11::Direct3DMultisampleDescription MultisampleDescription;
                    };
                    
                } /* Windows */
            } /* Graphics */
        } /* DirectX */
    } /* Direct3D11 */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Graphics.DirectX.Direct3D11.IDirect3DDevice
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
#if !defined(____x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DDevice_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DDevice_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_DirectX_Direct3D11_IDirect3DDevice[] = L"Windows.Graphics.DirectX.Direct3D11.IDirect3DDevice";
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace DirectX {
                namespace Direct3D11 {
                    /* [object, uuid("A37624AB-8D5F-4650-9D3E-9EAE3D9BC670"), contract] */
                    MIDL_INTERFACE("A37624AB-8D5F-4650-9D3E-9EAE3D9BC670")
                    IDirect3DDevice : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE Trim(void) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IDirect3DDevice=_uuidof(IDirect3DDevice);
                    
                } /* Windows */
            } /* Graphics */
        } /* DirectX */
    } /* Direct3D11 */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DDevice;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DDevice_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Graphics.DirectX.Direct3D11.IDirect3DSurface
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
#if !defined(____x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_DirectX_Direct3D11_IDirect3DSurface[] = L"Windows.Graphics.DirectX.Direct3D11.IDirect3DSurface";
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace DirectX {
                namespace Direct3D11 {
                    /* [object, uuid("0BF4A146-13C1-4694-BEE3-7ABF15EAF586"), contract] */
                    MIDL_INTERFACE("0BF4A146-13C1-4694-BEE3-7ABF15EAF586")
                    IDirect3DSurface : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Description(
                            /* [retval, out] */__RPC__out ABI::Windows::Graphics::DirectX::Direct3D11::Direct3DSurfaceDescription * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IDirect3DSurface=_uuidof(IDirect3DSurface);
                    
                } /* Windows */
            } /* Graphics */
        } /* DirectX */
    } /* Direct3D11 */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000





#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DDevice_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DDevice_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DDevice __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DDevice;

#endif // ____x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DDevice_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface;

#endif // ____x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface __FIIterator_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface;

typedef struct __FIIterator_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurfaceVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurfaceVtbl;

interface __FIIterator_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface
{
    CONST_VTBL struct __FIIterator_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurfaceVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface __FIIterable_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface;

typedef  struct __FIIterable_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurfaceVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface **first);

    END_INTERFACE
} __FIIterable_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurfaceVtbl;

interface __FIIterable_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface
{
    CONST_VTBL struct __FIIterable_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurfaceVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface __FIVectorView_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface;

typedef struct __FIVectorView_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurfaceVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface * This,
            /* [in] */ __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurfaceVtbl;

interface __FIVectorView_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface
{
    CONST_VTBL struct __FIVectorView_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurfaceVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#ifndef ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIClosable __x_ABI_CWindows_CFoundation_CIClosable;

#endif // ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__






typedef enum __x_ABI_CWindows_CGraphics_CDirectX_CDirectXPixelFormat __x_ABI_CWindows_CGraphics_CDirectX_CDirectXPixelFormat;





typedef enum __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CDirect3DBindings __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CDirect3DBindings;


typedef enum __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CDirect3DUsage __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CDirect3DUsage;


typedef struct __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CDirect3DMultisampleDescription __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CDirect3DMultisampleDescription;


typedef struct __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CDirect3DSurfaceDescription __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CDirect3DSurfaceDescription;













/*
 *
 * Struct Windows.Graphics.DirectX.Direct3D11.Direct3DBindings
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, flags, contract] */
enum __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CDirect3DBindings
{
    Direct3DBindings_VertexBuffer = 0x1,
    Direct3DBindings_IndexBuffer = 0x2,
    Direct3DBindings_ConstantBuffer = 0x4,
    Direct3DBindings_ShaderResource = 0x8,
    Direct3DBindings_StreamOutput = 0x10,
    Direct3DBindings_RenderTarget = 0x20,
    Direct3DBindings_DepthStencil = 0x40,
    Direct3DBindings_UnorderedAccess = 0x80,
    Direct3DBindings_Decoder = 0x200,
    Direct3DBindings_VideoEncoder = 0x400,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Graphics.DirectX.Direct3D11.Direct3DUsage
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CDirect3DUsage
{
    Direct3DUsage_Default = 0,
    Direct3DUsage_Immutable = 1,
    Direct3DUsage_Dynamic = 2,
    Direct3DUsage_Staging = 3,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Graphics.DirectX.Direct3D11.Direct3DMultisampleDescription
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

/* [contract] */
struct __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CDirect3DMultisampleDescription
{
    INT32 Count;
    INT32 Quality;
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Graphics.DirectX.Direct3D11.Direct3DSurfaceDescription
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

/* [contract] */
struct __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CDirect3DSurfaceDescription
{
    INT32 Width;
    INT32 Height;
    __x_ABI_CWindows_CGraphics_CDirectX_CDirectXPixelFormat Format;
    __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CDirect3DMultisampleDescription MultisampleDescription;
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Graphics.DirectX.Direct3D11.IDirect3DDevice
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
#if !defined(____x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DDevice_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DDevice_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_DirectX_Direct3D11_IDirect3DDevice[] = L"Windows.Graphics.DirectX.Direct3D11.IDirect3DDevice";
/* [object, uuid("A37624AB-8D5F-4650-9D3E-9EAE3D9BC670"), contract] */
typedef struct __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DDeviceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DDevice * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DDevice * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DDevice * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DDevice * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DDevice * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DDevice * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Trim )(
        __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DDevice * This
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DDeviceVtbl;

interface __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DDevice
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DDeviceVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DDevice_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DDevice_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DDevice_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DDevice_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DDevice_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DDevice_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DDevice_Trim(This) \
    ( (This)->lpVtbl->Trim(This) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DDevice;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DDevice_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Graphics.DirectX.Direct3D11.IDirect3DSurface
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
#if !defined(____x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_DirectX_Direct3D11_IDirect3DSurface[] = L"Windows.Graphics.DirectX.Direct3D11.IDirect3DSurface";
/* [object, uuid("0BF4A146-13C1-4694-BEE3-7ABF15EAF586"), contract] */
typedef struct __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurfaceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Description )(
        __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CDirect3DSurfaceDescription * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurfaceVtbl;

interface __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurfaceVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface_get_Description(This,value) \
    ( (This)->lpVtbl->get_Description(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface_INTERFACE_DEFINED__) */
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
#endif // __windows2Egraphics2Edirectx2Edirect3d11_p_h__

#endif // __windows2Egraphics2Edirectx2Edirect3d11_h__
