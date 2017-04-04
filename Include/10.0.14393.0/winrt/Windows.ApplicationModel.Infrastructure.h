

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

#ifndef __windows2Eapplicationmodel2Einfrastructure2Einitfactory_h__
#define __windows2Eapplicationmodel2Einfrastructure2Einitfactory_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef ____x_ABI_CWindows_CApplicationModel_CInfrastructure_CISetWindowWithWindowFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CInfrastructure_CISetWindowWithWindowFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CInfrastructure_CISetWindowWithWindowFactory __x_ABI_CWindows_CApplicationModel_CInfrastructure_CISetWindowWithWindowFactory;

#ifdef __cplusplus
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Infrastructure {
                interface ISetWindowWithWindowFactory;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CWindows_CApplicationModel_CInfrastructure_CISetWindowWithWindowFactory_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "inspectable.h"
#include "activation.h"
#include "Windows.Foundation.h"
#include "Windows.ApplicationModel.Core.h"
#include "Windows.UI.Core.CoreWindowFactory.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_windows2Eapplicationmodel2Einfrastructure2Einitfactory_0000_0000 */
/* [local] */ 

#pragma warning(push)
#pragma warning(disable:4668) 
#pragma warning(disable:4001) 
#pragma once
#pragma warning(pop)
#pragma region Initialize With Window Factory
#if !defined(____x_ABI_CWindows_CApplicationModel_CInfrastructure_CISetWindowWithWindowFactory_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Infrastructure_ISetWindowWithWindowFactory[] = L"Windows.ApplicationModel.Infrastructure.ISetWindowWithWindowFactory";
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CInfrastructure_CISetWindowWithWindowFactory_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_windows2Eapplicationmodel2Einfrastructure2Einitfactory_0000_0000 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Eapplicationmodel2Einfrastructure2Einitfactory_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eapplicationmodel2Einfrastructure2Einitfactory_0000_0000_v0_0_s_ifspec;

#ifndef ____x_ABI_CWindows_CApplicationModel_CInfrastructure_CISetWindowWithWindowFactory_INTERFACE_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CInfrastructure_CISetWindowWithWindowFactory_INTERFACE_DEFINED__

/* interface __x_ABI_CWindows_CApplicationModel_CInfrastructure_CISetWindowWithWindowFactory */
/* [object][uuid] */ 



/* interface ABI::Windows::ApplicationModel::Infrastructure::ISetWindowWithWindowFactory */
/* [object][uuid] */ 


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CInfrastructure_CISetWindowWithWindowFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Windows {
            namespace ApplicationModel {
                namespace Infrastructure {
                    
                    MIDL_INTERFACE("5AF48779-F000-493C-99F1-982FBBF305E0")
                    ISetWindowWithWindowFactory : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE SetWindow( 
                            /* [in] */ __RPC__in_opt ABI::Windows::UI::Core::ICoreWindowFactory *windowFactory,
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Windows::UI::Core::ICoreWindow **window) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_ISetWindowWithWindowFactory = __uuidof(ISetWindowWithWindowFactory);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CWindows_CApplicationModel_CInfrastructure_CISetWindowWithWindowFactoryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CWindows_CApplicationModel_CInfrastructure_CISetWindowWithWindowFactory * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CWindows_CApplicationModel_CInfrastructure_CISetWindowWithWindowFactory * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CWindows_CApplicationModel_CInfrastructure_CISetWindowWithWindowFactory * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CWindows_CApplicationModel_CInfrastructure_CISetWindowWithWindowFactory * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CWindows_CApplicationModel_CInfrastructure_CISetWindowWithWindowFactory * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CWindows_CApplicationModel_CInfrastructure_CISetWindowWithWindowFactory * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *SetWindow )( 
            __RPC__in __x_ABI_CWindows_CApplicationModel_CInfrastructure_CISetWindowWithWindowFactory * This,
            /* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CCore_CICoreWindowFactory *windowFactory,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CWindows_CUI_CCore_CICoreWindow **window);
        
        END_INTERFACE
    } __x_ABI_CWindows_CApplicationModel_CInfrastructure_CISetWindowWithWindowFactoryVtbl;

    interface __x_ABI_CWindows_CApplicationModel_CInfrastructure_CISetWindowWithWindowFactory
    {
        CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CInfrastructure_CISetWindowWithWindowFactoryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CWindows_CApplicationModel_CInfrastructure_CISetWindowWithWindowFactory_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CWindows_CApplicationModel_CInfrastructure_CISetWindowWithWindowFactory_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CWindows_CApplicationModel_CInfrastructure_CISetWindowWithWindowFactory_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CWindows_CApplicationModel_CInfrastructure_CISetWindowWithWindowFactory_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CWindows_CApplicationModel_CInfrastructure_CISetWindowWithWindowFactory_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CWindows_CApplicationModel_CInfrastructure_CISetWindowWithWindowFactory_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CWindows_CApplicationModel_CInfrastructure_CISetWindowWithWindowFactory_SetWindow(This,windowFactory,window)	\
    ( (This)->lpVtbl -> SetWindow(This,windowFactory,window) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CWindows_CApplicationModel_CInfrastructure_CISetWindowWithWindowFactory_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Eapplicationmodel2Einfrastructure2Einitfactory_0000_0001 */
/* [local] */ 

#pragma endregion Initialize With Window Factory


/* interface __MIDL_itf_windows2Eapplicationmodel2Einfrastructure2Einitfactory_0000_0001 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Eapplicationmodel2Einfrastructure2Einitfactory_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eapplicationmodel2Einfrastructure2Einitfactory_0000_0001_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


