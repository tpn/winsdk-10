/* Header file automatically generated from windows.graphics.effects.idl */
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
#ifndef __windows2Egraphics2Eeffects_h__
#define __windows2Egraphics2Eeffects_h__
#ifndef __windows2Egraphics2Eeffects_p_h__
#define __windows2Egraphics2Eeffects_p_h__


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

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffect_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffect_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Effects {
                interface IGraphicsEffect;
            } /* Windows */
        } /* Graphics */
    } /* Effects */} /* ABI */
#define __x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffect ABI::Windows::Graphics::Effects::IGraphicsEffect

#endif // ____x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffect_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffectSource_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffectSource_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Effects {
                interface IGraphicsEffectSource;
            } /* Windows */
        } /* Graphics */
    } /* Effects */} /* ABI */
#define __x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffectSource ABI::Windows::Graphics::Effects::IGraphicsEffectSource

#endif // ____x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffectSource_FWD_DEFINED__











/*
 *
 * Interface Windows.Graphics.Effects.IGraphicsEffect
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Graphics.Effects.IGraphicsEffectSource
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffect_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffect_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Effects_IGraphicsEffect[] = L"Windows.Graphics.Effects.IGraphicsEffect";
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Effects {
                /* [object, uuid("CB51C0CE-8FE6-4636-B202-861FAA07D8F3"), contract] */
                MIDL_INTERFACE("CB51C0CE-8FE6-4636-B202-861FAA07D8F3")
                IGraphicsEffect : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Name(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * name
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Name(
                        /* [in] */__RPC__in HSTRING name
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IGraphicsEffect=_uuidof(IGraphicsEffect);
                
            } /* Windows */
        } /* Graphics */
    } /* Effects */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffect;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffect_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Graphics.Effects.IGraphicsEffectSource
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffectSource_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffectSource_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Effects_IGraphicsEffectSource[] = L"Windows.Graphics.Effects.IGraphicsEffectSource";
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Effects {
                /* [object, uuid("2D8F9DDC-4339-4EB9-9216-F9DEB75658A2"), contract] */
                MIDL_INTERFACE("2D8F9DDC-4339-4EB9-9216-F9DEB75658A2")
                IGraphicsEffectSource : IInspectable
                {
                    
                };

                extern MIDL_CONST_ID IID & IID_IGraphicsEffectSource=_uuidof(IGraphicsEffectSource);
                
            } /* Windows */
        } /* Graphics */
    } /* Effects */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffectSource;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffectSource_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000




#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffect_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffect_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffect __x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffect;

#endif // ____x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffect_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffectSource_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffectSource_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffectSource __x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffectSource;

#endif // ____x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffectSource_FWD_DEFINED__










/*
 *
 * Interface Windows.Graphics.Effects.IGraphicsEffect
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Graphics.Effects.IGraphicsEffectSource
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffect_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffect_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Effects_IGraphicsEffect[] = L"Windows.Graphics.Effects.IGraphicsEffect";
/* [object, uuid("CB51C0CE-8FE6-4636-B202-861FAA07D8F3"), contract] */
typedef struct __x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffectVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffect * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffect * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffect * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffect * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffect * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffect * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Name )(
        __x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffect * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * name
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Name )(
        __x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffect * This,
        /* [in] */__RPC__in HSTRING name
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffectVtbl;

interface __x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffect
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffectVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffect_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffect_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffect_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffect_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffect_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffect_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffect_get_Name(This,name) \
    ( (This)->lpVtbl->get_Name(This,name) )

#define __x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffect_put_Name(This,name) \
    ( (This)->lpVtbl->put_Name(This,name) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffect;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffect_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Graphics.Effects.IGraphicsEffectSource
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffectSource_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffectSource_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Effects_IGraphicsEffectSource[] = L"Windows.Graphics.Effects.IGraphicsEffectSource";
/* [object, uuid("2D8F9DDC-4339-4EB9-9216-F9DEB75658A2"), contract] */
typedef struct __x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffectSourceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffectSource * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffectSource * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffectSource * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffectSource * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffectSource * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffectSource * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
    
} __x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffectSourceVtbl;

interface __x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffectSource
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffectSourceVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffectSource_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffectSource_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffectSource_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffectSource_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffectSource_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffectSource_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffectSource;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffectSource_INTERFACE_DEFINED__) */
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
#endif // __windows2Egraphics2Eeffects_p_h__

#endif // __windows2Egraphics2Eeffects_h__
