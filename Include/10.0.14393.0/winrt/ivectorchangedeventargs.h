

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

#ifndef __ivectorchangedeventargs_h__
#define __ivectorchangedeventargs_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef ____x_ABI_CWindows_CFoundation_CCollections_CIVectorChangedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CCollections_CIVectorChangedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CCollections_CIVectorChangedEventArgs __x_ABI_CWindows_CFoundation_CCollections_CIVectorChangedEventArgs;

#ifdef __cplusplus
namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Collections {
                interface IVectorChangedEventArgs;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CWindows_CFoundation_CCollections_CIVectorChangedEventArgs_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "inspectable.h"
#include "asyncinfo.h"
#include "eventtoken.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_ivectorchangedeventargs_0000_0000 */
/* [local] */ 

#pragma warning(push)
#pragma warning(disable:4668) 
#pragma warning(disable:4001) 
#pragma once
#pragma warning(pop)
#if !defined(__cplusplus)

#if !defined(__cplusplus)
/* [v1_enum] */ 
enum __x_ABI_CWindows_CFoundation_CCollections_CCollectionChange
    {
        CollectionChange_Reset	= 0,
        CollectionChange_ItemInserted	= ( CollectionChange_Reset + 1 ) ,
        CollectionChange_ItemRemoved	= ( CollectionChange_ItemInserted + 1 ) ,
        CollectionChange_ItemChanged	= ( CollectionChange_ItemRemoved + 1 ) 
    } ;
#endif /* end if !defined(__cplusplus) */

#if !defined(__cplusplus)

typedef enum __x_ABI_CWindows_CFoundation_CCollections_CCollectionChange __x_ABI_CWindows_CFoundation_CCollections_CCollectionChange;


#endif /* end if !defined(__cplusplus) */


#endif
#if !defined(____x_ABI_CWindows_CFoundation_CCollections_CIVectorChangedEventArgs_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Foundation_Collections_IVectorChangedEventArgs[] = L"Windows.Foundation.Collections.IVectorChangedEventArgs";
#endif /* !defined(____x_ABI_CWindows_CFoundation_CCollections_CIVectorChangedEventArgs_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_ivectorchangedeventargs_0000_0000 */
/* [local] */ 

#ifdef __cplusplus
} /* end extern "C" */
namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Collections {
                
                /* [v1_enum] */ 
                enum CollectionChange
                    {
                        CollectionChange_Reset	= 0,
                        CollectionChange_ItemInserted	= ( CollectionChange_Reset + 1 ) ,
                        CollectionChange_ItemRemoved	= ( CollectionChange_ItemInserted + 1 ) ,
                        CollectionChange_ItemChanged	= ( CollectionChange_ItemRemoved + 1 ) 
                    } ;
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
        namespace Foundation {
            namespace Collections {
                
                typedef enum CollectionChange CollectionChange;
                
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

extern "C" { 
#endif



extern RPC_IF_HANDLE __MIDL_itf_ivectorchangedeventargs_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_ivectorchangedeventargs_0000_0000_v0_0_s_ifspec;

#ifndef ____x_ABI_CWindows_CFoundation_CCollections_CIVectorChangedEventArgs_INTERFACE_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CCollections_CIVectorChangedEventArgs_INTERFACE_DEFINED__

/* interface __x_ABI_CWindows_CFoundation_CCollections_CIVectorChangedEventArgs */
/* [object][uuid][unique] */ 



/* interface ABI::Windows::Foundation::Collections::IVectorChangedEventArgs */
/* [object][uuid][unique] */ 


EXTERN_C const IID IID___x_ABI_CWindows_CFoundation_CCollections_CIVectorChangedEventArgs;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Windows {
            namespace Foundation {
                namespace Collections {
                    
                    MIDL_INTERFACE("575933df-34fe-4480-af15-07691f3d5d9b")
                    IVectorChangedEventArgs : public IInspectable
                    {
                    public:
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CollectionChange( 
                            /* [out][retval] */ __RPC__out ABI::Windows::Foundation::Collections::CollectionChange *value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Index( 
                            /* [out][retval] */ __RPC__out unsigned int *value) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_IVectorChangedEventArgs = __uuidof(IVectorChangedEventArgs);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CWindows_CFoundation_CCollections_CIVectorChangedEventArgsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CWindows_CFoundation_CCollections_CIVectorChangedEventArgs * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CWindows_CFoundation_CCollections_CIVectorChangedEventArgs * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CWindows_CFoundation_CCollections_CIVectorChangedEventArgs * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CWindows_CFoundation_CCollections_CIVectorChangedEventArgs * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CWindows_CFoundation_CCollections_CIVectorChangedEventArgs * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CWindows_CFoundation_CCollections_CIVectorChangedEventArgs * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CollectionChange )( 
            __RPC__in __x_ABI_CWindows_CFoundation_CCollections_CIVectorChangedEventArgs * This,
            /* [out][retval] */ __RPC__out __x_ABI_CWindows_CFoundation_CCollections_CCollectionChange *value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Index )( 
            __RPC__in __x_ABI_CWindows_CFoundation_CCollections_CIVectorChangedEventArgs * This,
            /* [out][retval] */ __RPC__out unsigned int *value);
        
        END_INTERFACE
    } __x_ABI_CWindows_CFoundation_CCollections_CIVectorChangedEventArgsVtbl;

    interface __x_ABI_CWindows_CFoundation_CCollections_CIVectorChangedEventArgs
    {
        CONST_VTBL struct __x_ABI_CWindows_CFoundation_CCollections_CIVectorChangedEventArgsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CWindows_CFoundation_CCollections_CIVectorChangedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CWindows_CFoundation_CCollections_CIVectorChangedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CWindows_CFoundation_CCollections_CIVectorChangedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CWindows_CFoundation_CCollections_CIVectorChangedEventArgs_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CWindows_CFoundation_CCollections_CIVectorChangedEventArgs_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CWindows_CFoundation_CCollections_CIVectorChangedEventArgs_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CWindows_CFoundation_CCollections_CIVectorChangedEventArgs_get_CollectionChange(This,value)	\
    ( (This)->lpVtbl -> get_CollectionChange(This,value) ) 

#define __x_ABI_CWindows_CFoundation_CCollections_CIVectorChangedEventArgs_get_Index(This,value)	\
    ( (This)->lpVtbl -> get_Index(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CWindows_CFoundation_CCollections_CIVectorChangedEventArgs_INTERFACE_DEFINED__ */


/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


