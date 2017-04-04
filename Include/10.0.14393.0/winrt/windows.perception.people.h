

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

#ifndef __windows2Eperception2Epeople_h__
#define __windows2Eperception2Epeople_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef ____x_ABI_CWindows_CPerception_CPeople_CIHeadPose_FWD_DEFINED__
#define ____x_ABI_CWindows_CPerception_CPeople_CIHeadPose_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CPerception_CPeople_CIHeadPose __x_ABI_CWindows_CPerception_CPeople_CIHeadPose;

#ifdef __cplusplus
namespace ABI {
    namespace Windows {
        namespace Perception {
            namespace People {
                interface IHeadPose;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CWindows_CPerception_CPeople_CIHeadPose_FWD_DEFINED__ */


/* header files for imported files */
#include "inspectable.h"
#include "AsyncInfo.h"
#include "EventToken.h"
#include "Windows.Foundation.h"
#include "Windows.Foundation.Numerics.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_windows2Eperception2Epeople_0000_0000 */
/* [local] */ 

#if defined(__cplusplus)
}
#endif // defined(__cplusplus)
#include <Windows.Foundation.h>
#if !defined(__windows2Efoundation2Enumerics_h__)
#include <Windows.Foundation.Numerics.h>
#endif // !defined(__windows2Efoundation2Enumerics_h__)
#if defined(__cplusplus)
extern "C" {
#endif // defined(__cplusplus)
#if !defined(__cplusplus)
typedef struct __x_ABI_CWindows_CFoundation_CNumerics_CVector3 __x_ABI_CWindows_CFoundation_CNumerics_CVector3;

#endif

#ifdef __cplusplus
namespace ABI {
namespace Windows {
namespace Perception {
namespace People {
class HeadPose;
} /*People*/
} /*Perception*/
} /*Windows*/
}
#endif
#if !defined(____x_ABI_CWindows_CPerception_CPeople_CIHeadPose_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Perception_People_IHeadPose[] = L"Windows.Perception.People.IHeadPose";
#endif /* !defined(____x_ABI_CWindows_CPerception_CPeople_CIHeadPose_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_windows2Eperception2Epeople_0000_0000 */
/* [local] */ 

#ifdef __cplusplus

} /* end extern "C" */
namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Numerics {
                
                typedef struct Vector3 Vector3;
                
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

extern "C" { 
#endif




extern RPC_IF_HANDLE __MIDL_itf_windows2Eperception2Epeople_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eperception2Epeople_0000_0000_v0_0_s_ifspec;

#ifndef ____x_ABI_CWindows_CPerception_CPeople_CIHeadPose_INTERFACE_DEFINED__
#define ____x_ABI_CWindows_CPerception_CPeople_CIHeadPose_INTERFACE_DEFINED__

/* interface __x_ABI_CWindows_CPerception_CPeople_CIHeadPose */
/* [uuid][object] */ 



/* interface ABI::Windows::Perception::People::IHeadPose */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CWindows_CPerception_CPeople_CIHeadPose;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Windows {
            namespace Perception {
                namespace People {
                    
                    MIDL_INTERFACE("7F5AC5A5-49DB-379F-9429-32A2FAF34FA6")
                    IHeadPose : public IInspectable
                    {
                    public:
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Position( 
                            /* [out][retval] */ __RPC__out ABI::Windows::Foundation::Numerics::Vector3 *value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ForwardDirection( 
                            /* [out][retval] */ __RPC__out ABI::Windows::Foundation::Numerics::Vector3 *value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_UpDirection( 
                            /* [out][retval] */ __RPC__out ABI::Windows::Foundation::Numerics::Vector3 *value) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_IHeadPose = __uuidof(IHeadPose);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CWindows_CPerception_CPeople_CIHeadPoseVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CWindows_CPerception_CPeople_CIHeadPose * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CWindows_CPerception_CPeople_CIHeadPose * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CWindows_CPerception_CPeople_CIHeadPose * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CWindows_CPerception_CPeople_CIHeadPose * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CWindows_CPerception_CPeople_CIHeadPose * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CWindows_CPerception_CPeople_CIHeadPose * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Position )( 
            __RPC__in __x_ABI_CWindows_CPerception_CPeople_CIHeadPose * This,
            /* [out][retval] */ __RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CVector3 *value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ForwardDirection )( 
            __RPC__in __x_ABI_CWindows_CPerception_CPeople_CIHeadPose * This,
            /* [out][retval] */ __RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CVector3 *value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_UpDirection )( 
            __RPC__in __x_ABI_CWindows_CPerception_CPeople_CIHeadPose * This,
            /* [out][retval] */ __RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CVector3 *value);
        
        END_INTERFACE
    } __x_ABI_CWindows_CPerception_CPeople_CIHeadPoseVtbl;

    interface __x_ABI_CWindows_CPerception_CPeople_CIHeadPose
    {
        CONST_VTBL struct __x_ABI_CWindows_CPerception_CPeople_CIHeadPoseVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CWindows_CPerception_CPeople_CIHeadPose_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CWindows_CPerception_CPeople_CIHeadPose_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CWindows_CPerception_CPeople_CIHeadPose_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CWindows_CPerception_CPeople_CIHeadPose_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CWindows_CPerception_CPeople_CIHeadPose_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CWindows_CPerception_CPeople_CIHeadPose_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CWindows_CPerception_CPeople_CIHeadPose_get_Position(This,value)	\
    ( (This)->lpVtbl -> get_Position(This,value) ) 

#define __x_ABI_CWindows_CPerception_CPeople_CIHeadPose_get_ForwardDirection(This,value)	\
    ( (This)->lpVtbl -> get_ForwardDirection(This,value) ) 

#define __x_ABI_CWindows_CPerception_CPeople_CIHeadPose_get_UpDirection(This,value)	\
    ( (This)->lpVtbl -> get_UpDirection(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CWindows_CPerception_CPeople_CIHeadPose_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Eperception2Epeople_0000_0001 */
/* [local] */ 

#ifndef RUNTIMECLASS_Windows_Perception_People_HeadPose_DEFINED
#define RUNTIMECLASS_Windows_Perception_People_HeadPose_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Perception_People_HeadPose[] = L"Windows.Perception.People.HeadPose";
#endif


/* interface __MIDL_itf_windows2Eperception2Epeople_0000_0001 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Eperception2Epeople_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eperception2Epeople_0000_0001_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


