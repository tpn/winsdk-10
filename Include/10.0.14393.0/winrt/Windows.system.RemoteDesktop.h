

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

#ifndef __windows2Esystem2Eremotedesktop_h__
#define __windows2Esystem2Eremotedesktop_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef ____x_ABI_CWindows_CSystem_CRemoteDesktop_CIInteractiveSessionStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CRemoteDesktop_CIInteractiveSessionStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CRemoteDesktop_CIInteractiveSessionStatics __x_ABI_CWindows_CSystem_CRemoteDesktop_CIInteractiveSessionStatics;

#ifdef __cplusplus
namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteDesktop {
                interface IInteractiveSessionStatics;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CWindows_CSystem_CRemoteDesktop_CIInteractiveSessionStatics_FWD_DEFINED__ */


/* header files for imported files */
#include "inspectable.h"
#include "AsyncInfo.h"
#include "EventToken.h"
#include "Windows.Foundation.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_windows2Esystem2Eremotedesktop_0000_0000 */
/* [local] */ 

#if defined(__cplusplus)
}
#endif // defined(__cplusplus)
#include <Windows.Foundation.h>
#if defined(__cplusplus)
extern "C" {
#endif // defined(__cplusplus)

#if !defined(____x_ABI_CWindows_CSystem_CRemoteDesktop_CIInteractiveSessionStatics_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteDesktop_IInteractiveSessionStatics[] = L"Windows.System.RemoteDesktop.IInteractiveSessionStatics";
#endif /* !defined(____x_ABI_CWindows_CSystem_CRemoteDesktop_CIInteractiveSessionStatics_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_windows2Esystem2Eremotedesktop_0000_0000 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_windows2Esystem2Eremotedesktop_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Esystem2Eremotedesktop_0000_0000_v0_0_s_ifspec;

#ifndef ____x_ABI_CWindows_CSystem_CRemoteDesktop_CIInteractiveSessionStatics_INTERFACE_DEFINED__
#define ____x_ABI_CWindows_CSystem_CRemoteDesktop_CIInteractiveSessionStatics_INTERFACE_DEFINED__

/* interface __x_ABI_CWindows_CSystem_CRemoteDesktop_CIInteractiveSessionStatics */
/* [uuid][object] */ 



/* interface ABI::Windows::System::RemoteDesktop::IInteractiveSessionStatics */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteDesktop_CIInteractiveSessionStatics;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Windows {
            namespace System {
                namespace RemoteDesktop {
                    
                    MIDL_INTERFACE("60884631-DD3A-4576-9C8D-E8027618BDCE")
                    IInteractiveSessionStatics : public IInspectable
                    {
                    public:
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_IsRemote( 
                            /* [out][retval] */ __RPC__out boolean *value) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_IInteractiveSessionStatics = __uuidof(IInteractiveSessionStatics);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CWindows_CSystem_CRemoteDesktop_CIInteractiveSessionStaticsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CWindows_CSystem_CRemoteDesktop_CIInteractiveSessionStatics * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CWindows_CSystem_CRemoteDesktop_CIInteractiveSessionStatics * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CWindows_CSystem_CRemoteDesktop_CIInteractiveSessionStatics * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CWindows_CSystem_CRemoteDesktop_CIInteractiveSessionStatics * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CWindows_CSystem_CRemoteDesktop_CIInteractiveSessionStatics * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CWindows_CSystem_CRemoteDesktop_CIInteractiveSessionStatics * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsRemote )( 
            __RPC__in __x_ABI_CWindows_CSystem_CRemoteDesktop_CIInteractiveSessionStatics * This,
            /* [out][retval] */ __RPC__out boolean *value);
        
        END_INTERFACE
    } __x_ABI_CWindows_CSystem_CRemoteDesktop_CIInteractiveSessionStaticsVtbl;

    interface __x_ABI_CWindows_CSystem_CRemoteDesktop_CIInteractiveSessionStatics
    {
        CONST_VTBL struct __x_ABI_CWindows_CSystem_CRemoteDesktop_CIInteractiveSessionStaticsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CWindows_CSystem_CRemoteDesktop_CIInteractiveSessionStatics_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CWindows_CSystem_CRemoteDesktop_CIInteractiveSessionStatics_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CWindows_CSystem_CRemoteDesktop_CIInteractiveSessionStatics_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CWindows_CSystem_CRemoteDesktop_CIInteractiveSessionStatics_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CWindows_CSystem_CRemoteDesktop_CIInteractiveSessionStatics_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CWindows_CSystem_CRemoteDesktop_CIInteractiveSessionStatics_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CWindows_CSystem_CRemoteDesktop_CIInteractiveSessionStatics_get_IsRemote(This,value)	\
    ( (This)->lpVtbl -> get_IsRemote(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CWindows_CSystem_CRemoteDesktop_CIInteractiveSessionStatics_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Esystem2Eremotedesktop_0000_0001 */
/* [local] */ 

#ifndef RUNTIMECLASS_Windows_System_RemoteDesktop_InteractiveSession_DEFINED
#define RUNTIMECLASS_Windows_System_RemoteDesktop_InteractiveSession_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_RemoteDesktop_InteractiveSession[] = L"Windows.System.RemoteDesktop.InteractiveSession";
#endif


/* interface __MIDL_itf_windows2Esystem2Eremotedesktop_0000_0001 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Esystem2Eremotedesktop_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Esystem2Eremotedesktop_0000_0001_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


