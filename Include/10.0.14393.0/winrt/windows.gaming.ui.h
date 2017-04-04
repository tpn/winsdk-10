

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

#ifndef __windows2Egaming2Eui_h__
#define __windows2Egaming2Eui_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef ____x_ABI_CWindows_CGaming_CUI_CIGameBarStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CGaming_CUI_CIGameBarStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGaming_CUI_CIGameBarStatics __x_ABI_CWindows_CGaming_CUI_CIGameBarStatics;

#ifdef __cplusplus
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace UI {
                interface IGameBarStatics;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CWindows_CGaming_CUI_CIGameBarStatics_FWD_DEFINED__ */


/* header files for imported files */
#include "inspectable.h"
#include "AsyncInfo.h"
#include "EventToken.h"
#include "Windows.Foundation.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_windows2Egaming2Eui_0000_0000 */
/* [local] */ 

#ifdef __cplusplus
} /*extern "C"*/ 
#endif
#include <windows.foundation.collections.h>
#ifdef __cplusplus
extern "C" {
#endif

interface IInspectable;


/* interface __MIDL_itf_windows2Egaming2Eui_0000_0000 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_windows2Egaming2Eui_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Egaming2Eui_0000_0000_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Egaming2Eui2Eidl_0000_0323 */




/* interface __MIDL_itf_windows2Egaming2Eui2Eidl_0000_0323 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Egaming2Eui2Eidl_0000_0323_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Egaming2Eui2Eidl_0000_0323_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Egaming2Eui_0000_0001 */
/* [local] */ 

#ifndef DEF___FIEventHandler_1_IInspectable_USE
#define DEF___FIEventHandler_1_IInspectable_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("c50898f6-c536-5f47-8583-8b2c2438a13b"))
IEventHandler<IInspectable*> : IEventHandler_impl<IInspectable*> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.EventHandler`1<Object>"; }
};
typedef IEventHandler<IInspectable*> __FIEventHandler_1_IInspectable_t;
#define ____FIEventHandler_1_IInspectable_FWD_DEFINED__
#define __FIEventHandler_1_IInspectable ABI::Windows::Foundation::__FIEventHandler_1_IInspectable_t

/* ABI */ } /* Windows */ } /* Foundation */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIEventHandler_1_IInspectable_USE */
#if defined(__cplusplus)
}
#endif // defined(__cplusplus)
#include <Windows.Foundation.h>
#if defined(__cplusplus)
extern "C" {
#endif // defined(__cplusplus)

#if !defined(____x_ABI_CWindows_CGaming_CUI_CIGameBarStatics_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_UI_IGameBarStatics[] = L"Windows.Gaming.UI.IGameBarStatics";
#endif /* !defined(____x_ABI_CWindows_CGaming_CUI_CIGameBarStatics_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_windows2Egaming2Eui_0000_0001 */
/* [local] */ 





extern RPC_IF_HANDLE __MIDL_itf_windows2Egaming2Eui_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Egaming2Eui_0000_0001_v0_0_s_ifspec;

#ifndef ____x_ABI_CWindows_CGaming_CUI_CIGameBarStatics_INTERFACE_DEFINED__
#define ____x_ABI_CWindows_CGaming_CUI_CIGameBarStatics_INTERFACE_DEFINED__

/* interface __x_ABI_CWindows_CGaming_CUI_CIGameBarStatics */
/* [uuid][object] */ 



/* interface ABI::Windows::Gaming::UI::IGameBarStatics */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CUI_CIGameBarStatics;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Windows {
            namespace Gaming {
                namespace UI {
                    
                    MIDL_INTERFACE("1DB9A292-CC78-4173-BE45-B61E67283EA7")
                    IGameBarStatics : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE add_VisibilityChanged( 
                            /* [in] */ __RPC__in_opt __FIEventHandler_1_IInspectable *handler,
                            /* [out][retval] */ __RPC__out EventRegistrationToken *token) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE remove_VisibilityChanged( 
                            /* [in] */ EventRegistrationToken token) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE add_IsInputRedirectedChanged( 
                            /* [in] */ __RPC__in_opt __FIEventHandler_1_IInspectable *handler,
                            /* [out][retval] */ __RPC__out EventRegistrationToken *token) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE remove_IsInputRedirectedChanged( 
                            /* [in] */ EventRegistrationToken token) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Visible( 
                            /* [out][retval] */ __RPC__out boolean *value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_IsInputRedirected( 
                            /* [out][retval] */ __RPC__out boolean *value) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_IGameBarStatics = __uuidof(IGameBarStatics);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CWindows_CGaming_CUI_CIGameBarStaticsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CWindows_CGaming_CUI_CIGameBarStatics * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CWindows_CGaming_CUI_CIGameBarStatics * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CWindows_CGaming_CUI_CIGameBarStatics * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CWindows_CGaming_CUI_CIGameBarStatics * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CWindows_CGaming_CUI_CIGameBarStatics * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CWindows_CGaming_CUI_CIGameBarStatics * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *add_VisibilityChanged )( 
            __RPC__in __x_ABI_CWindows_CGaming_CUI_CIGameBarStatics * This,
            /* [in] */ __RPC__in_opt __FIEventHandler_1_IInspectable *handler,
            /* [out][retval] */ __RPC__out EventRegistrationToken *token);
        
        HRESULT ( STDMETHODCALLTYPE *remove_VisibilityChanged )( 
            __RPC__in __x_ABI_CWindows_CGaming_CUI_CIGameBarStatics * This,
            /* [in] */ EventRegistrationToken token);
        
        HRESULT ( STDMETHODCALLTYPE *add_IsInputRedirectedChanged )( 
            __RPC__in __x_ABI_CWindows_CGaming_CUI_CIGameBarStatics * This,
            /* [in] */ __RPC__in_opt __FIEventHandler_1_IInspectable *handler,
            /* [out][retval] */ __RPC__out EventRegistrationToken *token);
        
        HRESULT ( STDMETHODCALLTYPE *remove_IsInputRedirectedChanged )( 
            __RPC__in __x_ABI_CWindows_CGaming_CUI_CIGameBarStatics * This,
            /* [in] */ EventRegistrationToken token);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Visible )( 
            __RPC__in __x_ABI_CWindows_CGaming_CUI_CIGameBarStatics * This,
            /* [out][retval] */ __RPC__out boolean *value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsInputRedirected )( 
            __RPC__in __x_ABI_CWindows_CGaming_CUI_CIGameBarStatics * This,
            /* [out][retval] */ __RPC__out boolean *value);
        
        END_INTERFACE
    } __x_ABI_CWindows_CGaming_CUI_CIGameBarStaticsVtbl;

    interface __x_ABI_CWindows_CGaming_CUI_CIGameBarStatics
    {
        CONST_VTBL struct __x_ABI_CWindows_CGaming_CUI_CIGameBarStaticsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CWindows_CGaming_CUI_CIGameBarStatics_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CWindows_CGaming_CUI_CIGameBarStatics_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CWindows_CGaming_CUI_CIGameBarStatics_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CWindows_CGaming_CUI_CIGameBarStatics_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CWindows_CGaming_CUI_CIGameBarStatics_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CWindows_CGaming_CUI_CIGameBarStatics_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CWindows_CGaming_CUI_CIGameBarStatics_add_VisibilityChanged(This,handler,token)	\
    ( (This)->lpVtbl -> add_VisibilityChanged(This,handler,token) ) 

#define __x_ABI_CWindows_CGaming_CUI_CIGameBarStatics_remove_VisibilityChanged(This,token)	\
    ( (This)->lpVtbl -> remove_VisibilityChanged(This,token) ) 

#define __x_ABI_CWindows_CGaming_CUI_CIGameBarStatics_add_IsInputRedirectedChanged(This,handler,token)	\
    ( (This)->lpVtbl -> add_IsInputRedirectedChanged(This,handler,token) ) 

#define __x_ABI_CWindows_CGaming_CUI_CIGameBarStatics_remove_IsInputRedirectedChanged(This,token)	\
    ( (This)->lpVtbl -> remove_IsInputRedirectedChanged(This,token) ) 

#define __x_ABI_CWindows_CGaming_CUI_CIGameBarStatics_get_Visible(This,value)	\
    ( (This)->lpVtbl -> get_Visible(This,value) ) 

#define __x_ABI_CWindows_CGaming_CUI_CIGameBarStatics_get_IsInputRedirected(This,value)	\
    ( (This)->lpVtbl -> get_IsInputRedirected(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CWindows_CGaming_CUI_CIGameBarStatics_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Egaming2Eui_0000_0002 */
/* [local] */ 

#ifndef RUNTIMECLASS_Windows_Gaming_UI_GameBar_DEFINED
#define RUNTIMECLASS_Windows_Gaming_UI_GameBar_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Gaming_UI_GameBar[] = L"Windows.Gaming.UI.GameBar";
#endif


/* interface __MIDL_itf_windows2Egaming2Eui_0000_0002 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Egaming2Eui_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Egaming2Eui_0000_0002_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


