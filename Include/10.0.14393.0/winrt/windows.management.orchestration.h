

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

#ifndef __windows2Emanagement2Eorchestration_h__
#define __windows2Emanagement2Eorchestration_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef ____x_ABI_CWindows_CManagement_COrchestration_CICurrentAppOrchestration_FWD_DEFINED__
#define ____x_ABI_CWindows_CManagement_COrchestration_CICurrentAppOrchestration_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CManagement_COrchestration_CICurrentAppOrchestration __x_ABI_CWindows_CManagement_COrchestration_CICurrentAppOrchestration;

#ifdef __cplusplus
namespace ABI {
    namespace Windows {
        namespace Management {
            namespace Orchestration {
                interface ICurrentAppOrchestration;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CWindows_CManagement_COrchestration_CICurrentAppOrchestration_FWD_DEFINED__ */


#ifndef ____x_ABI_CWindows_CManagement_COrchestration_CICurrentAppOrchestrationStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CManagement_COrchestration_CICurrentAppOrchestrationStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CManagement_COrchestration_CICurrentAppOrchestrationStatics __x_ABI_CWindows_CManagement_COrchestration_CICurrentAppOrchestrationStatics;

#ifdef __cplusplus
namespace ABI {
    namespace Windows {
        namespace Management {
            namespace Orchestration {
                interface ICurrentAppOrchestrationStatics;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CWindows_CManagement_COrchestration_CICurrentAppOrchestrationStatics_FWD_DEFINED__ */


#ifndef ____x_ABI_CWindows_CManagement_COrchestration_CISingleAppModeContext_FWD_DEFINED__
#define ____x_ABI_CWindows_CManagement_COrchestration_CISingleAppModeContext_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CManagement_COrchestration_CISingleAppModeContext __x_ABI_CWindows_CManagement_COrchestration_CISingleAppModeContext;

#ifdef __cplusplus
namespace ABI {
    namespace Windows {
        namespace Management {
            namespace Orchestration {
                interface ISingleAppModeContext;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CWindows_CManagement_COrchestration_CISingleAppModeContext_FWD_DEFINED__ */


/* header files for imported files */
#include "inspectable.h"
#include "AsyncInfo.h"
#include "EventToken.h"
#include "Windows.Foundation.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_windows2Emanagement2Eorchestration_0000_0000 */
/* [local] */ 

#if defined(__cplusplus)
}
#endif // defined(__cplusplus)
#include <Windows.Foundation.h>
#if defined(__cplusplus)
extern "C" {
#endif // defined(__cplusplus)




#ifdef __cplusplus
namespace ABI {
namespace Windows {
namespace Management {
namespace Orchestration {
class CurrentAppOrchestration;
} /*Orchestration*/
} /*Management*/
} /*Windows*/
}
#endif
#ifdef __cplusplus
namespace ABI {
namespace Windows {
namespace Management {
namespace Orchestration {
class SingleAppModeContext;
} /*Orchestration*/
} /*Management*/
} /*Windows*/
}
#endif
#if !defined(____x_ABI_CWindows_CManagement_COrchestration_CICurrentAppOrchestration_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Management_Orchestration_ICurrentAppOrchestration[] = L"Windows.Management.Orchestration.ICurrentAppOrchestration";
#endif /* !defined(____x_ABI_CWindows_CManagement_COrchestration_CICurrentAppOrchestration_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_windows2Emanagement2Eorchestration_0000_0000 */
/* [local] */ 







extern RPC_IF_HANDLE __MIDL_itf_windows2Emanagement2Eorchestration_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Emanagement2Eorchestration_0000_0000_v0_0_s_ifspec;

#ifndef ____x_ABI_CWindows_CManagement_COrchestration_CICurrentAppOrchestration_INTERFACE_DEFINED__
#define ____x_ABI_CWindows_CManagement_COrchestration_CICurrentAppOrchestration_INTERFACE_DEFINED__

/* interface __x_ABI_CWindows_CManagement_COrchestration_CICurrentAppOrchestration */
/* [uuid][object] */ 



/* interface ABI::Windows::Management::Orchestration::ICurrentAppOrchestration */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CWindows_CManagement_COrchestration_CICurrentAppOrchestration;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Windows {
            namespace Management {
                namespace Orchestration {
                    
                    MIDL_INTERFACE("CFF49929-E352-4FF4-BF46-786197A99112")
                    ICurrentAppOrchestration : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE StartSingleAppMode( 
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Windows::Management::Orchestration::ISingleAppModeContext **result) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_ICurrentAppOrchestration = __uuidof(ICurrentAppOrchestration);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CWindows_CManagement_COrchestration_CICurrentAppOrchestrationVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CWindows_CManagement_COrchestration_CICurrentAppOrchestration * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CWindows_CManagement_COrchestration_CICurrentAppOrchestration * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CWindows_CManagement_COrchestration_CICurrentAppOrchestration * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CWindows_CManagement_COrchestration_CICurrentAppOrchestration * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CWindows_CManagement_COrchestration_CICurrentAppOrchestration * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CWindows_CManagement_COrchestration_CICurrentAppOrchestration * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *StartSingleAppMode )( 
            __RPC__in __x_ABI_CWindows_CManagement_COrchestration_CICurrentAppOrchestration * This,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CWindows_CManagement_COrchestration_CISingleAppModeContext **result);
        
        END_INTERFACE
    } __x_ABI_CWindows_CManagement_COrchestration_CICurrentAppOrchestrationVtbl;

    interface __x_ABI_CWindows_CManagement_COrchestration_CICurrentAppOrchestration
    {
        CONST_VTBL struct __x_ABI_CWindows_CManagement_COrchestration_CICurrentAppOrchestrationVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CWindows_CManagement_COrchestration_CICurrentAppOrchestration_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CWindows_CManagement_COrchestration_CICurrentAppOrchestration_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CWindows_CManagement_COrchestration_CICurrentAppOrchestration_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CWindows_CManagement_COrchestration_CICurrentAppOrchestration_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CWindows_CManagement_COrchestration_CICurrentAppOrchestration_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CWindows_CManagement_COrchestration_CICurrentAppOrchestration_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CWindows_CManagement_COrchestration_CICurrentAppOrchestration_StartSingleAppMode(This,result)	\
    ( (This)->lpVtbl -> StartSingleAppMode(This,result) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CWindows_CManagement_COrchestration_CICurrentAppOrchestration_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Emanagement2Eorchestration_0000_0001 */
/* [local] */ 

#if !defined(____x_ABI_CWindows_CManagement_COrchestration_CICurrentAppOrchestrationStatics_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Management_Orchestration_ICurrentAppOrchestrationStatics[] = L"Windows.Management.Orchestration.ICurrentAppOrchestrationStatics";
#endif /* !defined(____x_ABI_CWindows_CManagement_COrchestration_CICurrentAppOrchestrationStatics_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_windows2Emanagement2Eorchestration_0000_0001 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Emanagement2Eorchestration_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Emanagement2Eorchestration_0000_0001_v0_0_s_ifspec;

#ifndef ____x_ABI_CWindows_CManagement_COrchestration_CICurrentAppOrchestrationStatics_INTERFACE_DEFINED__
#define ____x_ABI_CWindows_CManagement_COrchestration_CICurrentAppOrchestrationStatics_INTERFACE_DEFINED__

/* interface __x_ABI_CWindows_CManagement_COrchestration_CICurrentAppOrchestrationStatics */
/* [uuid][object] */ 



/* interface ABI::Windows::Management::Orchestration::ICurrentAppOrchestrationStatics */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CWindows_CManagement_COrchestration_CICurrentAppOrchestrationStatics;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Windows {
            namespace Management {
                namespace Orchestration {
                    
                    MIDL_INTERFACE("0EE337F8-63C5-46D6-AC61-5093E4AF6DB3")
                    ICurrentAppOrchestrationStatics : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE GetForCurrentView( 
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Windows::Management::Orchestration::ICurrentAppOrchestration **result) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_ICurrentAppOrchestrationStatics = __uuidof(ICurrentAppOrchestrationStatics);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CWindows_CManagement_COrchestration_CICurrentAppOrchestrationStaticsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CWindows_CManagement_COrchestration_CICurrentAppOrchestrationStatics * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CWindows_CManagement_COrchestration_CICurrentAppOrchestrationStatics * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CWindows_CManagement_COrchestration_CICurrentAppOrchestrationStatics * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CWindows_CManagement_COrchestration_CICurrentAppOrchestrationStatics * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CWindows_CManagement_COrchestration_CICurrentAppOrchestrationStatics * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CWindows_CManagement_COrchestration_CICurrentAppOrchestrationStatics * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *GetForCurrentView )( 
            __RPC__in __x_ABI_CWindows_CManagement_COrchestration_CICurrentAppOrchestrationStatics * This,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CWindows_CManagement_COrchestration_CICurrentAppOrchestration **result);
        
        END_INTERFACE
    } __x_ABI_CWindows_CManagement_COrchestration_CICurrentAppOrchestrationStaticsVtbl;

    interface __x_ABI_CWindows_CManagement_COrchestration_CICurrentAppOrchestrationStatics
    {
        CONST_VTBL struct __x_ABI_CWindows_CManagement_COrchestration_CICurrentAppOrchestrationStaticsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CWindows_CManagement_COrchestration_CICurrentAppOrchestrationStatics_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CWindows_CManagement_COrchestration_CICurrentAppOrchestrationStatics_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CWindows_CManagement_COrchestration_CICurrentAppOrchestrationStatics_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CWindows_CManagement_COrchestration_CICurrentAppOrchestrationStatics_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CWindows_CManagement_COrchestration_CICurrentAppOrchestrationStatics_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CWindows_CManagement_COrchestration_CICurrentAppOrchestrationStatics_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CWindows_CManagement_COrchestration_CICurrentAppOrchestrationStatics_GetForCurrentView(This,result)	\
    ( (This)->lpVtbl -> GetForCurrentView(This,result) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CWindows_CManagement_COrchestration_CICurrentAppOrchestrationStatics_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Emanagement2Eorchestration_0000_0002 */
/* [local] */ 

#if !defined(____x_ABI_CWindows_CManagement_COrchestration_CISingleAppModeContext_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Management_Orchestration_ISingleAppModeContext[] = L"Windows.Management.Orchestration.ISingleAppModeContext";
#endif /* !defined(____x_ABI_CWindows_CManagement_COrchestration_CISingleAppModeContext_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_windows2Emanagement2Eorchestration_0000_0002 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Emanagement2Eorchestration_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Emanagement2Eorchestration_0000_0002_v0_0_s_ifspec;

#ifndef ____x_ABI_CWindows_CManagement_COrchestration_CISingleAppModeContext_INTERFACE_DEFINED__
#define ____x_ABI_CWindows_CManagement_COrchestration_CISingleAppModeContext_INTERFACE_DEFINED__

/* interface __x_ABI_CWindows_CManagement_COrchestration_CISingleAppModeContext */
/* [uuid][object] */ 



/* interface ABI::Windows::Management::Orchestration::ISingleAppModeContext */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CWindows_CManagement_COrchestration_CISingleAppModeContext;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Windows {
            namespace Management {
                namespace Orchestration {
                    
                    MIDL_INTERFACE("87739739-6756-498B-8F1B-3ED4B59D7C9E")
                    ISingleAppModeContext : public IInspectable
                    {
                    public:
                    };

                    extern const __declspec(selectany) IID & IID_ISingleAppModeContext = __uuidof(ISingleAppModeContext);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CWindows_CManagement_COrchestration_CISingleAppModeContextVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CWindows_CManagement_COrchestration_CISingleAppModeContext * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CWindows_CManagement_COrchestration_CISingleAppModeContext * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CWindows_CManagement_COrchestration_CISingleAppModeContext * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CWindows_CManagement_COrchestration_CISingleAppModeContext * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CWindows_CManagement_COrchestration_CISingleAppModeContext * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CWindows_CManagement_COrchestration_CISingleAppModeContext * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        END_INTERFACE
    } __x_ABI_CWindows_CManagement_COrchestration_CISingleAppModeContextVtbl;

    interface __x_ABI_CWindows_CManagement_COrchestration_CISingleAppModeContext
    {
        CONST_VTBL struct __x_ABI_CWindows_CManagement_COrchestration_CISingleAppModeContextVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CWindows_CManagement_COrchestration_CISingleAppModeContext_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CWindows_CManagement_COrchestration_CISingleAppModeContext_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CWindows_CManagement_COrchestration_CISingleAppModeContext_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CWindows_CManagement_COrchestration_CISingleAppModeContext_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CWindows_CManagement_COrchestration_CISingleAppModeContext_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CWindows_CManagement_COrchestration_CISingleAppModeContext_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CWindows_CManagement_COrchestration_CISingleAppModeContext_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Emanagement2Eorchestration_0000_0003 */
/* [local] */ 

#ifndef RUNTIMECLASS_Windows_Management_Orchestration_CurrentAppOrchestration_DEFINED
#define RUNTIMECLASS_Windows_Management_Orchestration_CurrentAppOrchestration_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Management_Orchestration_CurrentAppOrchestration[] = L"Windows.Management.Orchestration.CurrentAppOrchestration";
#endif
#ifndef RUNTIMECLASS_Windows_Management_Orchestration_SingleAppModeContext_DEFINED
#define RUNTIMECLASS_Windows_Management_Orchestration_SingleAppModeContext_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Management_Orchestration_SingleAppModeContext[] = L"Windows.Management.Orchestration.SingleAppModeContext";
#endif


/* interface __MIDL_itf_windows2Emanagement2Eorchestration_0000_0003 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Emanagement2Eorchestration_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Emanagement2Eorchestration_0000_0003_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


