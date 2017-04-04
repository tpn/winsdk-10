

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

#ifndef __windows2Eui2Ecore2Ecorewindowfactory_h__
#define __windows2Eui2Ecore2Ecorewindowfactory_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef ____x_ABI_CWindows_CUI_CCore_CICoreWindowFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CCore_CICoreWindowFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CCore_CICoreWindowFactory __x_ABI_CWindows_CUI_CCore_CICoreWindowFactory;

#ifdef __cplusplus
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                interface ICoreWindowFactory;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CWindows_CUI_CCore_CICoreWindowFactory_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "Inspectable.h"
#include "windows.ui.core.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_windows2Eui2Ecore2Ecorewindowfactory_0000_0000 */
/* [local] */ 

#pragma warning(push)
#pragma warning(disable:4668) 
#pragma warning(disable:4001) 
#pragma once
#pragma warning(pop)
#if !defined(____x_ABI_CWindows_CUI_CCore_CICoreWindowFactory_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_ICoreWindowFactory[] = L"Windows.UI.Core.ICoreWindowFactory";
#endif /* !defined(____x_ABI_CWindows_CUI_CCore_CICoreWindowFactory_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_windows2Eui2Ecore2Ecorewindowfactory_0000_0000 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Eui2Ecore2Ecorewindowfactory_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eui2Ecore2Ecorewindowfactory_0000_0000_v0_0_s_ifspec;

#ifndef ____x_ABI_CWindows_CUI_CCore_CICoreWindowFactory_INTERFACE_DEFINED__
#define ____x_ABI_CWindows_CUI_CCore_CICoreWindowFactory_INTERFACE_DEFINED__

/* interface __x_ABI_CWindows_CUI_CCore_CICoreWindowFactory */
/* [uuid][object] */ 



/* interface ABI::Windows::UI::Core::ICoreWindowFactory */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CICoreWindowFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Windows {
            namespace UI {
                namespace Core {
                    
                    MIDL_INTERFACE("CD292360-2763-4085-8A9F-74B224A29175")
                    ICoreWindowFactory : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE CreateCoreWindow( 
                            /* [in] */ __RPC__in HSTRING windowTitle,
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Windows::UI::Core::ICoreWindow **window) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_WindowReuseAllowed( 
                            /* [out][retval] */ __RPC__out boolean *value) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_ICoreWindowFactory = __uuidof(ICoreWindowFactory);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CWindows_CUI_CCore_CICoreWindowFactoryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindowFactory * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindowFactory * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindowFactory * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindowFactory * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindowFactory * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindowFactory * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *CreateCoreWindow )( 
            __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindowFactory * This,
            /* [in] */ __RPC__in HSTRING windowTitle,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CWindows_CUI_CCore_CICoreWindow **window);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_WindowReuseAllowed )( 
            __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindowFactory * This,
            /* [out][retval] */ __RPC__out boolean *value);
        
        END_INTERFACE
    } __x_ABI_CWindows_CUI_CCore_CICoreWindowFactoryVtbl;

    interface __x_ABI_CWindows_CUI_CCore_CICoreWindowFactory
    {
        CONST_VTBL struct __x_ABI_CWindows_CUI_CCore_CICoreWindowFactoryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CWindows_CUI_CCore_CICoreWindowFactory_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CWindows_CUI_CCore_CICoreWindowFactory_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CWindows_CUI_CCore_CICoreWindowFactory_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CWindows_CUI_CCore_CICoreWindowFactory_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CWindows_CUI_CCore_CICoreWindowFactory_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CWindows_CUI_CCore_CICoreWindowFactory_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CWindows_CUI_CCore_CICoreWindowFactory_CreateCoreWindow(This,windowTitle,window)	\
    ( (This)->lpVtbl -> CreateCoreWindow(This,windowTitle,window) ) 

#define __x_ABI_CWindows_CUI_CCore_CICoreWindowFactory_get_WindowReuseAllowed(This,value)	\
    ( (This)->lpVtbl -> get_WindowReuseAllowed(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CWindows_CUI_CCore_CICoreWindowFactory_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Eui2Ecore2Ecorewindowfactory_0000_0001 */
/* [local] */ 

#ifdef __cplusplus
namespace ABI {
namespace Windows {
namespace UI {
namespace Core {
class ImmersiveCoreWindowFactory;
} /*Core*/
} /*UI*/
} /*Windows*/
}
#endif

#ifndef RUNTIMECLASS_Windows_UI_Core_ImmersiveCoreWindowFactory_DEFINED
#define RUNTIMECLASS_Windows_UI_Core_ImmersiveCoreWindowFactory_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Core_ImmersiveCoreWindowFactory[] = L"Windows.UI.Core.ImmersiveCoreWindowFactory";
#endif
#ifdef __cplusplus
namespace ABI {
namespace Windows {
namespace UI {
namespace Core {
class HostedCoreWindowFactory;
} /*Core*/
} /*UI*/
} /*Windows*/
}
#endif
#ifndef RUNTIMECLASS_Windows_UI_Core_HostedCoreWindowFactory_DEFINED
#define RUNTIMECLASS_Windows_UI_Core_HostedCoreWindowFactory_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Core_HostedCoreWindowFactory[] = L"Windows.UI.Core.HostedCoreWindowFactory";
#endif


/* interface __MIDL_itf_windows2Eui2Ecore2Ecorewindowfactory_0000_0001 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_windows2Eui2Ecore2Ecorewindowfactory_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eui2Ecore2Ecorewindowfactory_0000_0001_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  HSTRING_UserSize(     __RPC__in unsigned long *, unsigned long            , __RPC__in HSTRING * ); 
unsigned char * __RPC_USER  HSTRING_UserMarshal(  __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HSTRING * ); 
unsigned char * __RPC_USER  HSTRING_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HSTRING * ); 
void                      __RPC_USER  HSTRING_UserFree(     __RPC__in unsigned long *, __RPC__in HSTRING * ); 

unsigned long             __RPC_USER  HSTRING_UserSize64(     __RPC__in unsigned long *, unsigned long            , __RPC__in HSTRING * ); 
unsigned char * __RPC_USER  HSTRING_UserMarshal64(  __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HSTRING * ); 
unsigned char * __RPC_USER  HSTRING_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HSTRING * ); 
void                      __RPC_USER  HSTRING_UserFree64(     __RPC__in unsigned long *, __RPC__in HSTRING * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


