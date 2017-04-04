

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

#ifndef __windows2Emanagement2Ecore_h__
#define __windows2Emanagement2Ecore_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef ____x_ABI_CWindows_CManagement_CCore_CIApplicationDataManager_FWD_DEFINED__
#define ____x_ABI_CWindows_CManagement_CCore_CIApplicationDataManager_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CManagement_CCore_CIApplicationDataManager __x_ABI_CWindows_CManagement_CCore_CIApplicationDataManager;

#ifdef __cplusplus
namespace ABI {
    namespace Windows {
        namespace Management {
            namespace Core {
                interface IApplicationDataManager;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CWindows_CManagement_CCore_CIApplicationDataManager_FWD_DEFINED__ */


#ifndef ____x_ABI_CWindows_CManagement_CCore_CIApplicationDataManagerStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CManagement_CCore_CIApplicationDataManagerStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CManagement_CCore_CIApplicationDataManagerStatics __x_ABI_CWindows_CManagement_CCore_CIApplicationDataManagerStatics;

#ifdef __cplusplus
namespace ABI {
    namespace Windows {
        namespace Management {
            namespace Core {
                interface IApplicationDataManagerStatics;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CWindows_CManagement_CCore_CIApplicationDataManagerStatics_FWD_DEFINED__ */


/* header files for imported files */
#include "inspectable.h"
#include "AsyncInfo.h"
#include "EventToken.h"
#include "Windows.Foundation.h"
#include "Windows.Storage.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_windows2Emanagement2Ecore_0000_0000 */
/* [local] */ 

#if defined(__cplusplus)
}
#endif // defined(__cplusplus)
#include <Windows.Foundation.h>
#if !defined(__windows2Estorage_h__)
#include <Windows.Storage.h>
#endif // !defined(__windows2Estorage_h__)
#if defined(__cplusplus)
extern "C" {
#endif // defined(__cplusplus)
#ifdef __cplusplus
namespace ABI {
namespace Windows {
namespace Storage {
class ApplicationData;
} /*Storage*/
} /*Windows*/
}
#endif



#ifdef __cplusplus
namespace ABI {
namespace Windows {
namespace Management {
namespace Core {
class ApplicationDataManager;
} /*Core*/
} /*Management*/
} /*Windows*/
}
#endif
#if !defined(____x_ABI_CWindows_CManagement_CCore_CIApplicationDataManager_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Management_Core_IApplicationDataManager[] = L"Windows.Management.Core.IApplicationDataManager";
#endif /* !defined(____x_ABI_CWindows_CManagement_CCore_CIApplicationDataManager_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_windows2Emanagement2Ecore_0000_0000 */
/* [local] */ 






extern RPC_IF_HANDLE __MIDL_itf_windows2Emanagement2Ecore_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Emanagement2Ecore_0000_0000_v0_0_s_ifspec;

#ifndef ____x_ABI_CWindows_CManagement_CCore_CIApplicationDataManager_INTERFACE_DEFINED__
#define ____x_ABI_CWindows_CManagement_CCore_CIApplicationDataManager_INTERFACE_DEFINED__

/* interface __x_ABI_CWindows_CManagement_CCore_CIApplicationDataManager */
/* [uuid][object] */ 



/* interface ABI::Windows::Management::Core::IApplicationDataManager */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CWindows_CManagement_CCore_CIApplicationDataManager;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Windows {
            namespace Management {
                namespace Core {
                    
                    MIDL_INTERFACE("74D10432-2E99-4000-9A3A-64307E858129")
                    IApplicationDataManager : public IInspectable
                    {
                    public:
                    };

                    extern const __declspec(selectany) IID & IID_IApplicationDataManager = __uuidof(IApplicationDataManager);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CWindows_CManagement_CCore_CIApplicationDataManagerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CWindows_CManagement_CCore_CIApplicationDataManager * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CWindows_CManagement_CCore_CIApplicationDataManager * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CWindows_CManagement_CCore_CIApplicationDataManager * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CWindows_CManagement_CCore_CIApplicationDataManager * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CWindows_CManagement_CCore_CIApplicationDataManager * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CWindows_CManagement_CCore_CIApplicationDataManager * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        END_INTERFACE
    } __x_ABI_CWindows_CManagement_CCore_CIApplicationDataManagerVtbl;

    interface __x_ABI_CWindows_CManagement_CCore_CIApplicationDataManager
    {
        CONST_VTBL struct __x_ABI_CWindows_CManagement_CCore_CIApplicationDataManagerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CWindows_CManagement_CCore_CIApplicationDataManager_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CWindows_CManagement_CCore_CIApplicationDataManager_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CWindows_CManagement_CCore_CIApplicationDataManager_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CWindows_CManagement_CCore_CIApplicationDataManager_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CWindows_CManagement_CCore_CIApplicationDataManager_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CWindows_CManagement_CCore_CIApplicationDataManager_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CWindows_CManagement_CCore_CIApplicationDataManager_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Emanagement2Ecore_0000_0001 */
/* [local] */ 

#if !defined(____x_ABI_CWindows_CManagement_CCore_CIApplicationDataManagerStatics_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Management_Core_IApplicationDataManagerStatics[] = L"Windows.Management.Core.IApplicationDataManagerStatics";
#endif /* !defined(____x_ABI_CWindows_CManagement_CCore_CIApplicationDataManagerStatics_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_windows2Emanagement2Ecore_0000_0001 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Emanagement2Ecore_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Emanagement2Ecore_0000_0001_v0_0_s_ifspec;

#ifndef ____x_ABI_CWindows_CManagement_CCore_CIApplicationDataManagerStatics_INTERFACE_DEFINED__
#define ____x_ABI_CWindows_CManagement_CCore_CIApplicationDataManagerStatics_INTERFACE_DEFINED__

/* interface __x_ABI_CWindows_CManagement_CCore_CIApplicationDataManagerStatics */
/* [uuid][object] */ 



/* interface ABI::Windows::Management::Core::IApplicationDataManagerStatics */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CWindows_CManagement_CCore_CIApplicationDataManagerStatics;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Windows {
            namespace Management {
                namespace Core {
                    
                    MIDL_INTERFACE("1E1862E3-698E-49A1-9752-DEE94925B9B3")
                    IApplicationDataManagerStatics : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE CreateForPackageFamily( 
                            /* [in] */ __RPC__in HSTRING packageFamilyName,
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Windows::Storage::IApplicationData **applicationData) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_IApplicationDataManagerStatics = __uuidof(IApplicationDataManagerStatics);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CWindows_CManagement_CCore_CIApplicationDataManagerStaticsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CWindows_CManagement_CCore_CIApplicationDataManagerStatics * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CWindows_CManagement_CCore_CIApplicationDataManagerStatics * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CWindows_CManagement_CCore_CIApplicationDataManagerStatics * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CWindows_CManagement_CCore_CIApplicationDataManagerStatics * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CWindows_CManagement_CCore_CIApplicationDataManagerStatics * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CWindows_CManagement_CCore_CIApplicationDataManagerStatics * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *CreateForPackageFamily )( 
            __RPC__in __x_ABI_CWindows_CManagement_CCore_CIApplicationDataManagerStatics * This,
            /* [in] */ __RPC__in HSTRING packageFamilyName,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CIApplicationData **applicationData);
        
        END_INTERFACE
    } __x_ABI_CWindows_CManagement_CCore_CIApplicationDataManagerStaticsVtbl;

    interface __x_ABI_CWindows_CManagement_CCore_CIApplicationDataManagerStatics
    {
        CONST_VTBL struct __x_ABI_CWindows_CManagement_CCore_CIApplicationDataManagerStaticsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CWindows_CManagement_CCore_CIApplicationDataManagerStatics_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CWindows_CManagement_CCore_CIApplicationDataManagerStatics_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CWindows_CManagement_CCore_CIApplicationDataManagerStatics_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CWindows_CManagement_CCore_CIApplicationDataManagerStatics_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CWindows_CManagement_CCore_CIApplicationDataManagerStatics_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CWindows_CManagement_CCore_CIApplicationDataManagerStatics_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CWindows_CManagement_CCore_CIApplicationDataManagerStatics_CreateForPackageFamily(This,packageFamilyName,applicationData)	\
    ( (This)->lpVtbl -> CreateForPackageFamily(This,packageFamilyName,applicationData) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CWindows_CManagement_CCore_CIApplicationDataManagerStatics_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Emanagement2Ecore_0000_0002 */
/* [local] */ 

#ifndef RUNTIMECLASS_Windows_Management_Core_ApplicationDataManager_DEFINED
#define RUNTIMECLASS_Windows_Management_Core_ApplicationDataManager_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Management_Core_ApplicationDataManager[] = L"Windows.Management.Core.ApplicationDataManager";
#endif


/* interface __MIDL_itf_windows2Emanagement2Ecore_0000_0002 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Emanagement2Ecore_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Emanagement2Ecore_0000_0002_v0_0_s_ifspec;

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


