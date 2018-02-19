/* Header file automatically generated from windows.ui.composition.effects.idl */
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
#ifndef __windows2Eui2Ecomposition2Eeffects_h__
#define __windows2Eui2Ecomposition2Eeffects_h__
#ifndef __windows2Eui2Ecomposition2Eeffects_p_h__
#define __windows2Eui2Ecomposition2Eeffects_p_h__


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
#include "Windows.Graphics.Effects.h"

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Composition {
                namespace Effects {
                    interface ISceneLightingEffect;
                } /* Windows */
            } /* UI */
        } /* Composition */
    } /* Effects */} /* ABI */
#define __x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect ABI::Windows::UI::Composition::Effects::ISceneLightingEffect

#endif // ____x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect2_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Composition {
                namespace Effects {
                    interface ISceneLightingEffect2;
                } /* Windows */
            } /* UI */
        } /* Composition */
    } /* Effects */} /* ABI */
#define __x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect2 ABI::Windows::UI::Composition::Effects::ISceneLightingEffect2

#endif // ____x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect2_FWD_DEFINED__





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





namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Composition {
                namespace Effects {
                    
                    typedef enum SceneLightingEffectReflectanceModel : int SceneLightingEffectReflectanceModel;
                    
                } /* Windows */
            } /* UI */
        } /* Composition */
    } /* Effects */} /* ABI */



namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Composition {
                namespace Effects {
                    class SceneLightingEffect;
                } /* Windows */
            } /* UI */
        } /* Composition */
    } /* Effects */} /* ABI */







/*
 *
 * Struct Windows.UI.Composition.Effects.SceneLightingEffectReflectanceModel
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Composition {
                namespace Effects {
                    /* [v1_enum, contract] */
                    enum SceneLightingEffectReflectanceModel : int
                    {
                        SceneLightingEffectReflectanceModel_BlinnPhong = 0,
                        SceneLightingEffectReflectanceModel_PhysicallyBasedBlinnPhong = 1,
                    };
                    
                } /* Windows */
            } /* UI */
        } /* Composition */
    } /* Effects */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.UI.Composition.Effects.ISceneLightingEffect
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Composition.Effects.SceneLightingEffect
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_Effects_ISceneLightingEffect[] = L"Windows.UI.Composition.Effects.ISceneLightingEffect";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Composition {
                namespace Effects {
                    /* [object, uuid("91BB5E52-95D1-4F8B-9A5A-6408B24B8C6A"), exclusiveto, contract] */
                    MIDL_INTERFACE("91BB5E52-95D1-4F8B-9A5A-6408B24B8C6A")
                    ISceneLightingEffect : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AmbientAmount(
                            /* [retval, out] */__RPC__out FLOAT * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_AmbientAmount(
                            /* [in] */FLOAT value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DiffuseAmount(
                            /* [retval, out] */__RPC__out FLOAT * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_DiffuseAmount(
                            /* [in] */FLOAT value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_NormalMapSource(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Graphics::Effects::IGraphicsEffectSource * * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_NormalMapSource(
                            /* [in] */__RPC__in_opt ABI::Windows::Graphics::Effects::IGraphicsEffectSource * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SpecularAmount(
                            /* [retval, out] */__RPC__out FLOAT * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_SpecularAmount(
                            /* [in] */FLOAT value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SpecularShine(
                            /* [retval, out] */__RPC__out FLOAT * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_SpecularShine(
                            /* [in] */FLOAT value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ISceneLightingEffect=_uuidof(ISceneLightingEffect);
                    
                } /* Windows */
            } /* UI */
        } /* Composition */
    } /* Effects */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect;
#endif /* !defined(____x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.UI.Composition.Effects.ISceneLightingEffect2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Composition.Effects.SceneLightingEffect
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_Effects_ISceneLightingEffect2[] = L"Windows.UI.Composition.Effects.ISceneLightingEffect2";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Composition {
                namespace Effects {
                    /* [object, uuid("9E270E81-72F0-4C5C-95F8-8A6E0024F409"), exclusiveto, contract] */
                    MIDL_INTERFACE("9E270E81-72F0-4C5C-95F8-8A6E0024F409")
                    ISceneLightingEffect2 : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ReflectanceModel(
                            /* [retval, out] */__RPC__out ABI::Windows::UI::Composition::Effects::SceneLightingEffectReflectanceModel * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ReflectanceModel(
                            /* [in] */ABI::Windows::UI::Composition::Effects::SceneLightingEffectReflectanceModel value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ISceneLightingEffect2=_uuidof(ISceneLightingEffect2);
                    
                } /* Windows */
            } /* UI */
        } /* Composition */
    } /* Effects */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect2;
#endif /* !defined(____x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Class Windows.UI.Composition.Effects.SceneLightingEffect
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Composition.Effects.ISceneLightingEffect ** Default Interface **
 *    Windows.Graphics.Effects.IGraphicsEffect
 *    Windows.Graphics.Effects.IGraphicsEffectSource
 *    Windows.UI.Composition.Effects.ISceneLightingEffect2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_UI_Composition_Effects_SceneLightingEffect_DEFINED
#define RUNTIMECLASS_Windows_UI_Composition_Effects_SceneLightingEffect_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Composition_Effects_SceneLightingEffect[] = L"Windows.UI.Composition.Effects.SceneLightingEffect";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000





#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect __x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect;

#endif // ____x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect2_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect2 __x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect2;

#endif // ____x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect2_FWD_DEFINED__




#ifndef ____x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffect_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffect_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffect __x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffect;

#endif // ____x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffect_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffectSource_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffectSource_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffectSource __x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffectSource;

#endif // ____x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffectSource_FWD_DEFINED__






typedef enum __x_ABI_CWindows_CUI_CComposition_CEffects_CSceneLightingEffectReflectanceModel __x_ABI_CWindows_CUI_CComposition_CEffects_CSceneLightingEffectReflectanceModel;









/*
 *
 * Struct Windows.UI.Composition.Effects.SceneLightingEffectReflectanceModel
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CUI_CComposition_CEffects_CSceneLightingEffectReflectanceModel
{
    SceneLightingEffectReflectanceModel_BlinnPhong = 0,
    SceneLightingEffectReflectanceModel_PhysicallyBasedBlinnPhong = 1,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.UI.Composition.Effects.ISceneLightingEffect
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Composition.Effects.SceneLightingEffect
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_Effects_ISceneLightingEffect[] = L"Windows.UI.Composition.Effects.ISceneLightingEffect";
/* [object, uuid("91BB5E52-95D1-4F8B-9A5A-6408B24B8C6A"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffectVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AmbientAmount )(
        __x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect * This,
        /* [retval, out] */__RPC__out FLOAT * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_AmbientAmount )(
        __x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect * This,
        /* [in] */FLOAT value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DiffuseAmount )(
        __x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect * This,
        /* [retval, out] */__RPC__out FLOAT * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_DiffuseAmount )(
        __x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect * This,
        /* [in] */FLOAT value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_NormalMapSource )(
        __x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffectSource * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_NormalMapSource )(
        __x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffectSource * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SpecularAmount )(
        __x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect * This,
        /* [retval, out] */__RPC__out FLOAT * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_SpecularAmount )(
        __x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect * This,
        /* [in] */FLOAT value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SpecularShine )(
        __x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect * This,
        /* [retval, out] */__RPC__out FLOAT * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_SpecularShine )(
        __x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect * This,
        /* [in] */FLOAT value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffectVtbl;

interface __x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffectVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect_get_AmbientAmount(This,value) \
    ( (This)->lpVtbl->get_AmbientAmount(This,value) )

#define __x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect_put_AmbientAmount(This,value) \
    ( (This)->lpVtbl->put_AmbientAmount(This,value) )

#define __x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect_get_DiffuseAmount(This,value) \
    ( (This)->lpVtbl->get_DiffuseAmount(This,value) )

#define __x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect_put_DiffuseAmount(This,value) \
    ( (This)->lpVtbl->put_DiffuseAmount(This,value) )

#define __x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect_get_NormalMapSource(This,value) \
    ( (This)->lpVtbl->get_NormalMapSource(This,value) )

#define __x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect_put_NormalMapSource(This,value) \
    ( (This)->lpVtbl->put_NormalMapSource(This,value) )

#define __x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect_get_SpecularAmount(This,value) \
    ( (This)->lpVtbl->get_SpecularAmount(This,value) )

#define __x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect_put_SpecularAmount(This,value) \
    ( (This)->lpVtbl->put_SpecularAmount(This,value) )

#define __x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect_get_SpecularShine(This,value) \
    ( (This)->lpVtbl->get_SpecularShine(This,value) )

#define __x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect_put_SpecularShine(This,value) \
    ( (This)->lpVtbl->put_SpecularShine(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect;
#endif /* !defined(____x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.UI.Composition.Effects.ISceneLightingEffect2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Composition.Effects.SceneLightingEffect
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_Effects_ISceneLightingEffect2[] = L"Windows.UI.Composition.Effects.ISceneLightingEffect2";
/* [object, uuid("9E270E81-72F0-4C5C-95F8-8A6E0024F409"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ReflectanceModel )(
        __x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect2 * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CComposition_CEffects_CSceneLightingEffectReflectanceModel * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ReflectanceModel )(
        __x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect2 * This,
        /* [in] */__x_ABI_CWindows_CUI_CComposition_CEffects_CSceneLightingEffectReflectanceModel value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect2Vtbl;

interface __x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect2_get_ReflectanceModel(This,value) \
    ( (This)->lpVtbl->get_ReflectanceModel(This,value) )

#define __x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect2_put_ReflectanceModel(This,value) \
    ( (This)->lpVtbl->put_ReflectanceModel(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect2;
#endif /* !defined(____x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Class Windows.UI.Composition.Effects.SceneLightingEffect
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Composition.Effects.ISceneLightingEffect ** Default Interface **
 *    Windows.Graphics.Effects.IGraphicsEffect
 *    Windows.Graphics.Effects.IGraphicsEffectSource
 *    Windows.UI.Composition.Effects.ISceneLightingEffect2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_UI_Composition_Effects_SceneLightingEffect_DEFINED
#define RUNTIMECLASS_Windows_UI_Composition_Effects_SceneLightingEffect_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Composition_Effects_SceneLightingEffect[] = L"Windows.UI.Composition.Effects.SceneLightingEffect";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000





#endif // defined(__cplusplus)
#pragma pop_macro("MIDL_CONST_ID")
// Restore the original value of the 'DEPRECATED' macro
#pragma pop_macro("DEPRECATED")

#ifdef __clang__
#pragma clang diagnostic pop // deprecated-declarations
#else
#pragma warning(pop)
#endif
#endif // __windows2Eui2Ecomposition2Eeffects_p_h__

#endif // __windows2Eui2Ecomposition2Eeffects_h__
