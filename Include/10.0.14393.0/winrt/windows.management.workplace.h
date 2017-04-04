

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

#ifndef __windows2Emanagement2Eworkplace_h__
#define __windows2Emanagement2Eworkplace_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef ____x_ABI_CWindows_CManagement_CWorkplace_CIMdmAllowPolicyStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CManagement_CWorkplace_CIMdmAllowPolicyStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CManagement_CWorkplace_CIMdmAllowPolicyStatics __x_ABI_CWindows_CManagement_CWorkplace_CIMdmAllowPolicyStatics;

#ifdef __cplusplus
namespace ABI {
    namespace Windows {
        namespace Management {
            namespace Workplace {
                interface IMdmAllowPolicyStatics;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CWindows_CManagement_CWorkplace_CIMdmAllowPolicyStatics_FWD_DEFINED__ */


#ifndef ____x_ABI_CWindows_CManagement_CWorkplace_CIMdmPolicyStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CManagement_CWorkplace_CIMdmPolicyStatics2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CManagement_CWorkplace_CIMdmPolicyStatics2 __x_ABI_CWindows_CManagement_CWorkplace_CIMdmPolicyStatics2;

#ifdef __cplusplus
namespace ABI {
    namespace Windows {
        namespace Management {
            namespace Workplace {
                interface IMdmPolicyStatics2;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CWindows_CManagement_CWorkplace_CIMdmPolicyStatics2_FWD_DEFINED__ */


#ifndef ____x_ABI_CWindows_CManagement_CWorkplace_CIWorkplaceSettingsStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CManagement_CWorkplace_CIWorkplaceSettingsStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CManagement_CWorkplace_CIWorkplaceSettingsStatics __x_ABI_CWindows_CManagement_CWorkplace_CIWorkplaceSettingsStatics;

#ifdef __cplusplus
namespace ABI {
    namespace Windows {
        namespace Management {
            namespace Workplace {
                interface IWorkplaceSettingsStatics;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CWindows_CManagement_CWorkplace_CIWorkplaceSettingsStatics_FWD_DEFINED__ */


/* header files for imported files */
#include "inspectable.h"
#include "AsyncInfo.h"
#include "EventToken.h"
#include "Windows.Foundation.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_windows2Emanagement2Eworkplace_0000_0000 */
/* [local] */ 

#if defined(__cplusplus)
}
#endif // defined(__cplusplus)
#include <Windows.Foundation.h>
#if defined(__cplusplus)
extern "C" {
#endif // defined(__cplusplus)
#if !defined(__cplusplus)
#if !defined(__cplusplus)

typedef enum __x_ABI_CWindows_CManagement_CWorkplace_CMessagingSyncPolicy __x_ABI_CWindows_CManagement_CWorkplace_CMessagingSyncPolicy;


#endif /* end if !defined(__cplusplus) */


#endif



#if !defined(__cplusplus)

#if !defined(__cplusplus)
/* [v1_enum] */ 
enum __x_ABI_CWindows_CManagement_CWorkplace_CMessagingSyncPolicy
    {
        MessagingSyncPolicy_Disallowed	= 0,
        MessagingSyncPolicy_Allowed	= 1,
        MessagingSyncPolicy_Required	= 2
    } ;
#endif /* end if !defined(__cplusplus) */

#endif
#if !defined(____x_ABI_CWindows_CManagement_CWorkplace_CIMdmAllowPolicyStatics_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Management_Workplace_IMdmAllowPolicyStatics[] = L"Windows.Management.Workplace.IMdmAllowPolicyStatics";
#endif /* !defined(____x_ABI_CWindows_CManagement_CWorkplace_CIMdmAllowPolicyStatics_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_windows2Emanagement2Eworkplace_0000_0000 */
/* [local] */ 

#ifdef __cplusplus

} /* end extern "C" */
namespace ABI {
    namespace Windows {
        namespace Management {
            namespace Workplace {
                
                typedef enum MessagingSyncPolicy MessagingSyncPolicy;
                
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

extern "C" { 
#endif




#ifdef __cplusplus
} /* end extern "C" */
namespace ABI {
    namespace Windows {
        namespace Management {
            namespace Workplace {
                
                /* [v1_enum] */ 
                enum MessagingSyncPolicy
                    {
                        MessagingSyncPolicy_Disallowed	= 0,
                        MessagingSyncPolicy_Allowed	= 1,
                        MessagingSyncPolicy_Required	= 2
                    } ;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

extern "C" { 
#endif



extern RPC_IF_HANDLE __MIDL_itf_windows2Emanagement2Eworkplace_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Emanagement2Eworkplace_0000_0000_v0_0_s_ifspec;

#ifndef ____x_ABI_CWindows_CManagement_CWorkplace_CIMdmAllowPolicyStatics_INTERFACE_DEFINED__
#define ____x_ABI_CWindows_CManagement_CWorkplace_CIMdmAllowPolicyStatics_INTERFACE_DEFINED__

/* interface __x_ABI_CWindows_CManagement_CWorkplace_CIMdmAllowPolicyStatics */
/* [uuid][object] */ 



/* interface ABI::Windows::Management::Workplace::IMdmAllowPolicyStatics */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CWindows_CManagement_CWorkplace_CIMdmAllowPolicyStatics;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Windows {
            namespace Management {
                namespace Workplace {
                    
                    MIDL_INTERFACE("C39709E7-741C-41F2-A4B6-314C31502586")
                    IMdmAllowPolicyStatics : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE IsBrowserAllowed( 
                            /* [out][retval] */ __RPC__out boolean *value) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE IsCameraAllowed( 
                            /* [out][retval] */ __RPC__out boolean *value) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE IsMicrosoftAccountAllowed( 
                            /* [out][retval] */ __RPC__out boolean *value) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE IsStoreAllowed( 
                            /* [out][retval] */ __RPC__out boolean *value) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_IMdmAllowPolicyStatics = __uuidof(IMdmAllowPolicyStatics);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CWindows_CManagement_CWorkplace_CIMdmAllowPolicyStaticsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CWindows_CManagement_CWorkplace_CIMdmAllowPolicyStatics * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CWindows_CManagement_CWorkplace_CIMdmAllowPolicyStatics * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CWindows_CManagement_CWorkplace_CIMdmAllowPolicyStatics * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CWindows_CManagement_CWorkplace_CIMdmAllowPolicyStatics * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CWindows_CManagement_CWorkplace_CIMdmAllowPolicyStatics * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CWindows_CManagement_CWorkplace_CIMdmAllowPolicyStatics * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *IsBrowserAllowed )( 
            __RPC__in __x_ABI_CWindows_CManagement_CWorkplace_CIMdmAllowPolicyStatics * This,
            /* [out][retval] */ __RPC__out boolean *value);
        
        HRESULT ( STDMETHODCALLTYPE *IsCameraAllowed )( 
            __RPC__in __x_ABI_CWindows_CManagement_CWorkplace_CIMdmAllowPolicyStatics * This,
            /* [out][retval] */ __RPC__out boolean *value);
        
        HRESULT ( STDMETHODCALLTYPE *IsMicrosoftAccountAllowed )( 
            __RPC__in __x_ABI_CWindows_CManagement_CWorkplace_CIMdmAllowPolicyStatics * This,
            /* [out][retval] */ __RPC__out boolean *value);
        
        HRESULT ( STDMETHODCALLTYPE *IsStoreAllowed )( 
            __RPC__in __x_ABI_CWindows_CManagement_CWorkplace_CIMdmAllowPolicyStatics * This,
            /* [out][retval] */ __RPC__out boolean *value);
        
        END_INTERFACE
    } __x_ABI_CWindows_CManagement_CWorkplace_CIMdmAllowPolicyStaticsVtbl;

    interface __x_ABI_CWindows_CManagement_CWorkplace_CIMdmAllowPolicyStatics
    {
        CONST_VTBL struct __x_ABI_CWindows_CManagement_CWorkplace_CIMdmAllowPolicyStaticsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CWindows_CManagement_CWorkplace_CIMdmAllowPolicyStatics_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CWindows_CManagement_CWorkplace_CIMdmAllowPolicyStatics_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CWindows_CManagement_CWorkplace_CIMdmAllowPolicyStatics_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CWindows_CManagement_CWorkplace_CIMdmAllowPolicyStatics_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CWindows_CManagement_CWorkplace_CIMdmAllowPolicyStatics_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CWindows_CManagement_CWorkplace_CIMdmAllowPolicyStatics_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CWindows_CManagement_CWorkplace_CIMdmAllowPolicyStatics_IsBrowserAllowed(This,value)	\
    ( (This)->lpVtbl -> IsBrowserAllowed(This,value) ) 

#define __x_ABI_CWindows_CManagement_CWorkplace_CIMdmAllowPolicyStatics_IsCameraAllowed(This,value)	\
    ( (This)->lpVtbl -> IsCameraAllowed(This,value) ) 

#define __x_ABI_CWindows_CManagement_CWorkplace_CIMdmAllowPolicyStatics_IsMicrosoftAccountAllowed(This,value)	\
    ( (This)->lpVtbl -> IsMicrosoftAccountAllowed(This,value) ) 

#define __x_ABI_CWindows_CManagement_CWorkplace_CIMdmAllowPolicyStatics_IsStoreAllowed(This,value)	\
    ( (This)->lpVtbl -> IsStoreAllowed(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CWindows_CManagement_CWorkplace_CIMdmAllowPolicyStatics_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Emanagement2Eworkplace_0000_0001 */
/* [local] */ 

#if !defined(____x_ABI_CWindows_CManagement_CWorkplace_CIMdmPolicyStatics2_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Management_Workplace_IMdmPolicyStatics2[] = L"Windows.Management.Workplace.IMdmPolicyStatics2";
#endif /* !defined(____x_ABI_CWindows_CManagement_CWorkplace_CIMdmPolicyStatics2_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_windows2Emanagement2Eworkplace_0000_0001 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Emanagement2Eworkplace_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Emanagement2Eworkplace_0000_0001_v0_0_s_ifspec;

#ifndef ____x_ABI_CWindows_CManagement_CWorkplace_CIMdmPolicyStatics2_INTERFACE_DEFINED__
#define ____x_ABI_CWindows_CManagement_CWorkplace_CIMdmPolicyStatics2_INTERFACE_DEFINED__

/* interface __x_ABI_CWindows_CManagement_CWorkplace_CIMdmPolicyStatics2 */
/* [uuid][object] */ 



/* interface ABI::Windows::Management::Workplace::IMdmPolicyStatics2 */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CWindows_CManagement_CWorkplace_CIMdmPolicyStatics2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Windows {
            namespace Management {
                namespace Workplace {
                    
                    MIDL_INTERFACE("C99C7526-03D4-49F9-A993-43EFCCD265C4")
                    IMdmPolicyStatics2 : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE GetMessagingSyncPolicy( 
                            /* [out][retval] */ __RPC__out ABI::Windows::Management::Workplace::MessagingSyncPolicy *value) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_IMdmPolicyStatics2 = __uuidof(IMdmPolicyStatics2);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CWindows_CManagement_CWorkplace_CIMdmPolicyStatics2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CWindows_CManagement_CWorkplace_CIMdmPolicyStatics2 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CWindows_CManagement_CWorkplace_CIMdmPolicyStatics2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CWindows_CManagement_CWorkplace_CIMdmPolicyStatics2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CWindows_CManagement_CWorkplace_CIMdmPolicyStatics2 * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CWindows_CManagement_CWorkplace_CIMdmPolicyStatics2 * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CWindows_CManagement_CWorkplace_CIMdmPolicyStatics2 * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *GetMessagingSyncPolicy )( 
            __RPC__in __x_ABI_CWindows_CManagement_CWorkplace_CIMdmPolicyStatics2 * This,
            /* [out][retval] */ __RPC__out __x_ABI_CWindows_CManagement_CWorkplace_CMessagingSyncPolicy *value);
        
        END_INTERFACE
    } __x_ABI_CWindows_CManagement_CWorkplace_CIMdmPolicyStatics2Vtbl;

    interface __x_ABI_CWindows_CManagement_CWorkplace_CIMdmPolicyStatics2
    {
        CONST_VTBL struct __x_ABI_CWindows_CManagement_CWorkplace_CIMdmPolicyStatics2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CWindows_CManagement_CWorkplace_CIMdmPolicyStatics2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CWindows_CManagement_CWorkplace_CIMdmPolicyStatics2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CWindows_CManagement_CWorkplace_CIMdmPolicyStatics2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CWindows_CManagement_CWorkplace_CIMdmPolicyStatics2_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CWindows_CManagement_CWorkplace_CIMdmPolicyStatics2_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CWindows_CManagement_CWorkplace_CIMdmPolicyStatics2_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CWindows_CManagement_CWorkplace_CIMdmPolicyStatics2_GetMessagingSyncPolicy(This,value)	\
    ( (This)->lpVtbl -> GetMessagingSyncPolicy(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CWindows_CManagement_CWorkplace_CIMdmPolicyStatics2_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Emanagement2Eworkplace_0000_0002 */
/* [local] */ 

#if !defined(____x_ABI_CWindows_CManagement_CWorkplace_CIWorkplaceSettingsStatics_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Management_Workplace_IWorkplaceSettingsStatics[] = L"Windows.Management.Workplace.IWorkplaceSettingsStatics";
#endif /* !defined(____x_ABI_CWindows_CManagement_CWorkplace_CIWorkplaceSettingsStatics_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_windows2Emanagement2Eworkplace_0000_0002 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Emanagement2Eworkplace_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Emanagement2Eworkplace_0000_0002_v0_0_s_ifspec;

#ifndef ____x_ABI_CWindows_CManagement_CWorkplace_CIWorkplaceSettingsStatics_INTERFACE_DEFINED__
#define ____x_ABI_CWindows_CManagement_CWorkplace_CIWorkplaceSettingsStatics_INTERFACE_DEFINED__

/* interface __x_ABI_CWindows_CManagement_CWorkplace_CIWorkplaceSettingsStatics */
/* [uuid][object] */ 



/* interface ABI::Windows::Management::Workplace::IWorkplaceSettingsStatics */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CWindows_CManagement_CWorkplace_CIWorkplaceSettingsStatics;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Windows {
            namespace Management {
                namespace Workplace {
                    
                    MIDL_INTERFACE("E4676FFD-2D92-4C08-BAD4-F6590B54A6D3")
                    IWorkplaceSettingsStatics : public IInspectable
                    {
                    public:
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_IsMicrosoftAccountOptional( 
                            /* [out][retval] */ __RPC__out boolean *value) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_IWorkplaceSettingsStatics = __uuidof(IWorkplaceSettingsStatics);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CWindows_CManagement_CWorkplace_CIWorkplaceSettingsStaticsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CWindows_CManagement_CWorkplace_CIWorkplaceSettingsStatics * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CWindows_CManagement_CWorkplace_CIWorkplaceSettingsStatics * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CWindows_CManagement_CWorkplace_CIWorkplaceSettingsStatics * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CWindows_CManagement_CWorkplace_CIWorkplaceSettingsStatics * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CWindows_CManagement_CWorkplace_CIWorkplaceSettingsStatics * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CWindows_CManagement_CWorkplace_CIWorkplaceSettingsStatics * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsMicrosoftAccountOptional )( 
            __RPC__in __x_ABI_CWindows_CManagement_CWorkplace_CIWorkplaceSettingsStatics * This,
            /* [out][retval] */ __RPC__out boolean *value);
        
        END_INTERFACE
    } __x_ABI_CWindows_CManagement_CWorkplace_CIWorkplaceSettingsStaticsVtbl;

    interface __x_ABI_CWindows_CManagement_CWorkplace_CIWorkplaceSettingsStatics
    {
        CONST_VTBL struct __x_ABI_CWindows_CManagement_CWorkplace_CIWorkplaceSettingsStaticsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CWindows_CManagement_CWorkplace_CIWorkplaceSettingsStatics_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CWindows_CManagement_CWorkplace_CIWorkplaceSettingsStatics_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CWindows_CManagement_CWorkplace_CIWorkplaceSettingsStatics_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CWindows_CManagement_CWorkplace_CIWorkplaceSettingsStatics_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CWindows_CManagement_CWorkplace_CIWorkplaceSettingsStatics_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CWindows_CManagement_CWorkplace_CIWorkplaceSettingsStatics_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CWindows_CManagement_CWorkplace_CIWorkplaceSettingsStatics_get_IsMicrosoftAccountOptional(This,value)	\
    ( (This)->lpVtbl -> get_IsMicrosoftAccountOptional(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CWindows_CManagement_CWorkplace_CIWorkplaceSettingsStatics_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Emanagement2Eworkplace_0000_0003 */
/* [local] */ 

#ifndef RUNTIMECLASS_Windows_Management_Workplace_MdmPolicy_DEFINED
#define RUNTIMECLASS_Windows_Management_Workplace_MdmPolicy_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Management_Workplace_MdmPolicy[] = L"Windows.Management.Workplace.MdmPolicy";
#endif
#ifndef RUNTIMECLASS_Windows_Management_Workplace_WorkplaceSettings_DEFINED
#define RUNTIMECLASS_Windows_Management_Workplace_WorkplaceSettings_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Management_Workplace_WorkplaceSettings[] = L"Windows.Management.Workplace.WorkplaceSettings";
#endif


/* interface __MIDL_itf_windows2Emanagement2Eworkplace_0000_0003 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Emanagement2Eworkplace_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Emanagement2Eworkplace_0000_0003_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


