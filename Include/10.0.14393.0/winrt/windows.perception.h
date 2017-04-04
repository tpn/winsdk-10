

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

#ifndef __windows2Eperception_h__
#define __windows2Eperception_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef ____x_ABI_CWindows_CPerception_CIPerceptionTimestamp_FWD_DEFINED__
#define ____x_ABI_CWindows_CPerception_CIPerceptionTimestamp_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CPerception_CIPerceptionTimestamp __x_ABI_CWindows_CPerception_CIPerceptionTimestamp;

#ifdef __cplusplus
namespace ABI {
    namespace Windows {
        namespace Perception {
            interface IPerceptionTimestamp;
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CWindows_CPerception_CIPerceptionTimestamp_FWD_DEFINED__ */


#ifndef ____x_ABI_CWindows_CPerception_CIPerceptionTimestampHelperStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CPerception_CIPerceptionTimestampHelperStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CPerception_CIPerceptionTimestampHelperStatics __x_ABI_CWindows_CPerception_CIPerceptionTimestampHelperStatics;

#ifdef __cplusplus
namespace ABI {
    namespace Windows {
        namespace Perception {
            interface IPerceptionTimestampHelperStatics;
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CWindows_CPerception_CIPerceptionTimestampHelperStatics_FWD_DEFINED__ */


/* header files for imported files */
#include "inspectable.h"
#include "AsyncInfo.h"
#include "EventToken.h"
#include "Windows.Foundation.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_windows2Eperception_0000_0000 */
/* [local] */ 

#if defined(__cplusplus)
}
#endif // defined(__cplusplus)
#include <Windows.Foundation.h>
#if defined(__cplusplus)
extern "C" {
#endif // defined(__cplusplus)
#if !defined(__cplusplus)
typedef struct __x_ABI_CWindows_CFoundation_CDateTime __x_ABI_CWindows_CFoundation_CDateTime;

#endif
#if !defined(__cplusplus)
typedef struct __x_ABI_CWindows_CFoundation_CTimeSpan __x_ABI_CWindows_CFoundation_CTimeSpan;

#endif


#ifdef __cplusplus
namespace ABI {
namespace Windows {
namespace Perception {
class PerceptionTimestamp;
} /*Perception*/
} /*Windows*/
}
#endif
#if !defined(____x_ABI_CWindows_CPerception_CIPerceptionTimestamp_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Perception_IPerceptionTimestamp[] = L"Windows.Perception.IPerceptionTimestamp";
#endif /* !defined(____x_ABI_CWindows_CPerception_CIPerceptionTimestamp_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_windows2Eperception_0000_0000 */
/* [local] */ 

#ifdef __cplusplus

} /* end extern "C" */
namespace ABI {
    namespace Windows {
        namespace Foundation {
            
            typedef struct DateTime DateTime;
            
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
            
            typedef struct TimeSpan TimeSpan;
            
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

extern "C" { 
#endif





extern RPC_IF_HANDLE __MIDL_itf_windows2Eperception_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eperception_0000_0000_v0_0_s_ifspec;

#ifndef ____x_ABI_CWindows_CPerception_CIPerceptionTimestamp_INTERFACE_DEFINED__
#define ____x_ABI_CWindows_CPerception_CIPerceptionTimestamp_INTERFACE_DEFINED__

/* interface __x_ABI_CWindows_CPerception_CIPerceptionTimestamp */
/* [uuid][object] */ 



/* interface ABI::Windows::Perception::IPerceptionTimestamp */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CWindows_CPerception_CIPerceptionTimestamp;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Windows {
            namespace Perception {
                
                MIDL_INTERFACE("87C24804-A22E-4ADB-BA26-D78EF639BCF4")
                IPerceptionTimestamp : public IInspectable
                {
                public:
                    virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_TargetTime( 
                        /* [out][retval] */ __RPC__out ABI::Windows::Foundation::DateTime *value) = 0;
                    
                    virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_PredictionAmount( 
                        /* [out][retval] */ __RPC__out ABI::Windows::Foundation::TimeSpan *value) = 0;
                    
                };

                extern const __declspec(selectany) IID & IID_IPerceptionTimestamp = __uuidof(IPerceptionTimestamp);

                
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CWindows_CPerception_CIPerceptionTimestampVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CWindows_CPerception_CIPerceptionTimestamp * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CWindows_CPerception_CIPerceptionTimestamp * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CWindows_CPerception_CIPerceptionTimestamp * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CWindows_CPerception_CIPerceptionTimestamp * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CWindows_CPerception_CIPerceptionTimestamp * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CWindows_CPerception_CIPerceptionTimestamp * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_TargetTime )( 
            __RPC__in __x_ABI_CWindows_CPerception_CIPerceptionTimestamp * This,
            /* [out][retval] */ __RPC__out __x_ABI_CWindows_CFoundation_CDateTime *value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_PredictionAmount )( 
            __RPC__in __x_ABI_CWindows_CPerception_CIPerceptionTimestamp * This,
            /* [out][retval] */ __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan *value);
        
        END_INTERFACE
    } __x_ABI_CWindows_CPerception_CIPerceptionTimestampVtbl;

    interface __x_ABI_CWindows_CPerception_CIPerceptionTimestamp
    {
        CONST_VTBL struct __x_ABI_CWindows_CPerception_CIPerceptionTimestampVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CWindows_CPerception_CIPerceptionTimestamp_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CWindows_CPerception_CIPerceptionTimestamp_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CWindows_CPerception_CIPerceptionTimestamp_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CWindows_CPerception_CIPerceptionTimestamp_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CWindows_CPerception_CIPerceptionTimestamp_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CWindows_CPerception_CIPerceptionTimestamp_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CWindows_CPerception_CIPerceptionTimestamp_get_TargetTime(This,value)	\
    ( (This)->lpVtbl -> get_TargetTime(This,value) ) 

#define __x_ABI_CWindows_CPerception_CIPerceptionTimestamp_get_PredictionAmount(This,value)	\
    ( (This)->lpVtbl -> get_PredictionAmount(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CWindows_CPerception_CIPerceptionTimestamp_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Eperception_0000_0001 */
/* [local] */ 

#if !defined(____x_ABI_CWindows_CPerception_CIPerceptionTimestampHelperStatics_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Perception_IPerceptionTimestampHelperStatics[] = L"Windows.Perception.IPerceptionTimestampHelperStatics";
#endif /* !defined(____x_ABI_CWindows_CPerception_CIPerceptionTimestampHelperStatics_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_windows2Eperception_0000_0001 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Eperception_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eperception_0000_0001_v0_0_s_ifspec;

#ifndef ____x_ABI_CWindows_CPerception_CIPerceptionTimestampHelperStatics_INTERFACE_DEFINED__
#define ____x_ABI_CWindows_CPerception_CIPerceptionTimestampHelperStatics_INTERFACE_DEFINED__

/* interface __x_ABI_CWindows_CPerception_CIPerceptionTimestampHelperStatics */
/* [uuid][object] */ 



/* interface ABI::Windows::Perception::IPerceptionTimestampHelperStatics */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CWindows_CPerception_CIPerceptionTimestampHelperStatics;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Windows {
            namespace Perception {
                
                MIDL_INTERFACE("47A611D4-A9DF-4EDC-855D-F4D339D967AC")
                IPerceptionTimestampHelperStatics : public IInspectable
                {
                public:
                    virtual HRESULT STDMETHODCALLTYPE FromHistoricalTargetTime( 
                        /* [in] */ ABI::Windows::Foundation::DateTime targetTime,
                        /* [out][retval] */ __RPC__deref_out_opt ABI::Windows::Perception::IPerceptionTimestamp **value) = 0;
                    
                };

                extern const __declspec(selectany) IID & IID_IPerceptionTimestampHelperStatics = __uuidof(IPerceptionTimestampHelperStatics);

                
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CWindows_CPerception_CIPerceptionTimestampHelperStaticsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CWindows_CPerception_CIPerceptionTimestampHelperStatics * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CWindows_CPerception_CIPerceptionTimestampHelperStatics * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CWindows_CPerception_CIPerceptionTimestampHelperStatics * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CWindows_CPerception_CIPerceptionTimestampHelperStatics * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CWindows_CPerception_CIPerceptionTimestampHelperStatics * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CWindows_CPerception_CIPerceptionTimestampHelperStatics * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *FromHistoricalTargetTime )( 
            __RPC__in __x_ABI_CWindows_CPerception_CIPerceptionTimestampHelperStatics * This,
            /* [in] */ __x_ABI_CWindows_CFoundation_CDateTime targetTime,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CWindows_CPerception_CIPerceptionTimestamp **value);
        
        END_INTERFACE
    } __x_ABI_CWindows_CPerception_CIPerceptionTimestampHelperStaticsVtbl;

    interface __x_ABI_CWindows_CPerception_CIPerceptionTimestampHelperStatics
    {
        CONST_VTBL struct __x_ABI_CWindows_CPerception_CIPerceptionTimestampHelperStaticsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CWindows_CPerception_CIPerceptionTimestampHelperStatics_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CWindows_CPerception_CIPerceptionTimestampHelperStatics_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CWindows_CPerception_CIPerceptionTimestampHelperStatics_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CWindows_CPerception_CIPerceptionTimestampHelperStatics_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CWindows_CPerception_CIPerceptionTimestampHelperStatics_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CWindows_CPerception_CIPerceptionTimestampHelperStatics_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CWindows_CPerception_CIPerceptionTimestampHelperStatics_FromHistoricalTargetTime(This,targetTime,value)	\
    ( (This)->lpVtbl -> FromHistoricalTargetTime(This,targetTime,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CWindows_CPerception_CIPerceptionTimestampHelperStatics_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Eperception_0000_0002 */
/* [local] */ 

#ifndef RUNTIMECLASS_Windows_Perception_PerceptionTimestamp_DEFINED
#define RUNTIMECLASS_Windows_Perception_PerceptionTimestamp_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Perception_PerceptionTimestamp[] = L"Windows.Perception.PerceptionTimestamp";
#endif
#ifndef RUNTIMECLASS_Windows_Perception_PerceptionTimestampHelper_DEFINED
#define RUNTIMECLASS_Windows_Perception_PerceptionTimestampHelper_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Perception_PerceptionTimestampHelper[] = L"Windows.Perception.PerceptionTimestampHelper";
#endif


/* interface __MIDL_itf_windows2Eperception_0000_0002 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Eperception_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eperception_0000_0002_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


