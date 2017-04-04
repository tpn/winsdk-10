

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0618 */
/* @@MIDL_FILE_HEADING(  ) */



/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

/* verify that the <rpcsal.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCSAL_H_VERSION__
#define __REQUIRED_RPCSAL_H_VERSION__ 100
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __windows2Eui2Ecomposition2Eeffects_h__
#define __windows2Eui2Ecomposition2Eeffects_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef ____x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect __x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect;

#ifdef __cplusplus
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Composition {
                namespace Effects {
                    interface ISceneLightingEffect;
                } /* end namespace */
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect_FWD_DEFINED__ */


/* header files for imported files */
#include "inspectable.h"
#include "AsyncInfo.h"
#include "EventToken.h"
#include "Windows.Foundation.h"
#include "Windows.Graphics.Effects.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_windows2Eui2Ecomposition2Eeffects_0000_0000 */
/* [local] */ 

#if defined(__cplusplus)
}
#endif // defined(__cplusplus)
#include <Windows.Foundation.h>
#if !defined(__windows2Egraphics2Eeffects_h__)
#include <Windows.Graphics.Effects.h>
#endif // !defined(__windows2Egraphics2Eeffects_h__)
#if defined(__cplusplus)
extern "C" {
#endif // defined(__cplusplus)



#ifdef __cplusplus
namespace ABI {
namespace Windows {
namespace UI {
namespace Composition {
namespace Effects {
class SceneLightingEffect;
} /*Effects*/
} /*Composition*/
} /*UI*/
} /*Windows*/
}
#endif
#if !defined(____x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_Effects_ISceneLightingEffect[] = L"Windows.UI.Composition.Effects.ISceneLightingEffect";
#endif /* !defined(____x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_windows2Eui2Ecomposition2Eeffects_0000_0000 */
/* [local] */ 






extern RPC_IF_HANDLE __MIDL_itf_windows2Eui2Ecomposition2Eeffects_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eui2Ecomposition2Eeffects_0000_0000_v0_0_s_ifspec;

#ifndef ____x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect_INTERFACE_DEFINED__
#define ____x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect_INTERFACE_DEFINED__

/* interface __x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect */
/* [uuid][object] */ 



/* interface ABI::Windows::UI::Composition::Effects::ISceneLightingEffect */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Windows {
            namespace UI {
                namespace Composition {
                    namespace Effects {
                        
                        MIDL_INTERFACE("91BB5E52-95D1-4F8B-9A5A-6408B24B8C6A")
                        ISceneLightingEffect : public IInspectable
                        {
                        public:
                            virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_AmbientAmount( 
                                /* [out][retval] */ __RPC__out FLOAT *value) = 0;
                            
                            virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_AmbientAmount( 
                                /* [in] */ FLOAT value) = 0;
                            
                            virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_DiffuseAmount( 
                                /* [out][retval] */ __RPC__out FLOAT *value) = 0;
                            
                            virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_DiffuseAmount( 
                                /* [in] */ FLOAT value) = 0;
                            
                            virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_NormalMapSource( 
                                /* [out][retval] */ __RPC__deref_out_opt ABI::Windows::Graphics::Effects::IGraphicsEffectSource **value) = 0;
                            
                            virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_NormalMapSource( 
                                /* [in] */ __RPC__in_opt ABI::Windows::Graphics::Effects::IGraphicsEffectSource *value) = 0;
                            
                            virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_SpecularAmount( 
                                /* [out][retval] */ __RPC__out FLOAT *value) = 0;
                            
                            virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_SpecularAmount( 
                                /* [in] */ FLOAT value) = 0;
                            
                            virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_SpecularShine( 
                                /* [out][retval] */ __RPC__out FLOAT *value) = 0;
                            
                            virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_SpecularShine( 
                                /* [in] */ FLOAT value) = 0;
                            
                        };

                        extern const __declspec(selectany) IID & IID_ISceneLightingEffect = __uuidof(ISceneLightingEffect);

                        
                    }  /* end namespace */
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffectVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_AmbientAmount )( 
            __RPC__in __x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect * This,
            /* [out][retval] */ __RPC__out FLOAT *value);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_AmbientAmount )( 
            __RPC__in __x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect * This,
            /* [in] */ FLOAT value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_DiffuseAmount )( 
            __RPC__in __x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect * This,
            /* [out][retval] */ __RPC__out FLOAT *value);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_DiffuseAmount )( 
            __RPC__in __x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect * This,
            /* [in] */ FLOAT value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_NormalMapSource )( 
            __RPC__in __x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect * This,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffectSource **value);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_NormalMapSource )( 
            __RPC__in __x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect * This,
            /* [in] */ __RPC__in_opt __x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffectSource *value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_SpecularAmount )( 
            __RPC__in __x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect * This,
            /* [out][retval] */ __RPC__out FLOAT *value);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_SpecularAmount )( 
            __RPC__in __x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect * This,
            /* [in] */ FLOAT value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_SpecularShine )( 
            __RPC__in __x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect * This,
            /* [out][retval] */ __RPC__out FLOAT *value);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_SpecularShine )( 
            __RPC__in __x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect * This,
            /* [in] */ FLOAT value);
        
        END_INTERFACE
    } __x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffectVtbl;

    interface __x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect
    {
        CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffectVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect_get_AmbientAmount(This,value)	\
    ( (This)->lpVtbl -> get_AmbientAmount(This,value) ) 

#define __x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect_put_AmbientAmount(This,value)	\
    ( (This)->lpVtbl -> put_AmbientAmount(This,value) ) 

#define __x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect_get_DiffuseAmount(This,value)	\
    ( (This)->lpVtbl -> get_DiffuseAmount(This,value) ) 

#define __x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect_put_DiffuseAmount(This,value)	\
    ( (This)->lpVtbl -> put_DiffuseAmount(This,value) ) 

#define __x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect_get_NormalMapSource(This,value)	\
    ( (This)->lpVtbl -> get_NormalMapSource(This,value) ) 

#define __x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect_put_NormalMapSource(This,value)	\
    ( (This)->lpVtbl -> put_NormalMapSource(This,value) ) 

#define __x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect_get_SpecularAmount(This,value)	\
    ( (This)->lpVtbl -> get_SpecularAmount(This,value) ) 

#define __x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect_put_SpecularAmount(This,value)	\
    ( (This)->lpVtbl -> put_SpecularAmount(This,value) ) 

#define __x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect_get_SpecularShine(This,value)	\
    ( (This)->lpVtbl -> get_SpecularShine(This,value) ) 

#define __x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect_put_SpecularShine(This,value)	\
    ( (This)->lpVtbl -> put_SpecularShine(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Eui2Ecomposition2Eeffects_0000_0001 */
/* [local] */ 

#ifndef RUNTIMECLASS_Windows_UI_Composition_Effects_SceneLightingEffect_DEFINED
#define RUNTIMECLASS_Windows_UI_Composition_Effects_SceneLightingEffect_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Composition_Effects_SceneLightingEffect[] = L"Windows.UI.Composition.Effects.SceneLightingEffect";
#endif


/* interface __MIDL_itf_windows2Eui2Ecomposition2Eeffects_0000_0001 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Eui2Ecomposition2Eeffects_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eui2Ecomposition2Eeffects_0000_0001_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


