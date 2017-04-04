

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

#ifndef __windows2Esystem2Epower_h__
#define __windows2Esystem2Epower_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef ____x_ABI_CWindows_CSystem_CPower_CIBackgroundEnergyManagerStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CPower_CIBackgroundEnergyManagerStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CPower_CIBackgroundEnergyManagerStatics __x_ABI_CWindows_CSystem_CPower_CIBackgroundEnergyManagerStatics;

#ifdef __cplusplus
namespace ABI {
    namespace Windows {
        namespace System {
            namespace Power {
                interface IBackgroundEnergyManagerStatics;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CWindows_CSystem_CPower_CIBackgroundEnergyManagerStatics_FWD_DEFINED__ */


#ifndef ____x_ABI_CWindows_CSystem_CPower_CIForegroundEnergyManagerStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CPower_CIForegroundEnergyManagerStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CPower_CIForegroundEnergyManagerStatics __x_ABI_CWindows_CSystem_CPower_CIForegroundEnergyManagerStatics;

#ifdef __cplusplus
namespace ABI {
    namespace Windows {
        namespace System {
            namespace Power {
                interface IForegroundEnergyManagerStatics;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CWindows_CSystem_CPower_CIForegroundEnergyManagerStatics_FWD_DEFINED__ */


#ifndef ____x_ABI_CWindows_CSystem_CPower_CIPowerManagerStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CPower_CIPowerManagerStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CPower_CIPowerManagerStatics __x_ABI_CWindows_CSystem_CPower_CIPowerManagerStatics;

#ifdef __cplusplus
namespace ABI {
    namespace Windows {
        namespace System {
            namespace Power {
                interface IPowerManagerStatics;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CWindows_CSystem_CPower_CIPowerManagerStatics_FWD_DEFINED__ */


/* header files for imported files */
#include "inspectable.h"
#include "AsyncInfo.h"
#include "EventToken.h"
#include "Windows.Foundation.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_windows2Esystem2Epower_0000_0000 */
/* [local] */ 

#ifdef __cplusplus
} /*extern "C"*/ 
#endif
#include <windows.foundation.collections.h>
#ifdef __cplusplus
extern "C" {
#endif

interface IInspectable;


/* interface __MIDL_itf_windows2Esystem2Epower_0000_0000 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_windows2Esystem2Epower_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Esystem2Epower_0000_0000_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Esystem2Epower2Eidl_0000_0324 */




/* interface __MIDL_itf_windows2Esystem2Epower2Eidl_0000_0324 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Esystem2Epower2Eidl_0000_0324_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Esystem2Epower2Eidl_0000_0324_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Esystem2Epower_0000_0001 */
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
#if !defined(__cplusplus)
typedef struct __x_ABI_CWindows_CFoundation_CTimeSpan __x_ABI_CWindows_CFoundation_CTimeSpan;

#endif
#if !defined(__cplusplus)
#if !defined(__cplusplus)

typedef enum __x_ABI_CWindows_CSystem_CPower_CBatteryStatus __x_ABI_CWindows_CSystem_CPower_CBatteryStatus;


#endif /* end if !defined(__cplusplus) */


#endif
#if !defined(__cplusplus)
#if !defined(__cplusplus)

typedef enum __x_ABI_CWindows_CSystem_CPower_CEnergySaverStatus __x_ABI_CWindows_CSystem_CPower_CEnergySaverStatus;


#endif /* end if !defined(__cplusplus) */


#endif
#if !defined(__cplusplus)
#if !defined(__cplusplus)

typedef enum __x_ABI_CWindows_CSystem_CPower_CPowerSupplyStatus __x_ABI_CWindows_CSystem_CPower_CPowerSupplyStatus;


#endif /* end if !defined(__cplusplus) */


#endif



#if !defined(__cplusplus)

#if !defined(__cplusplus)
/* [v1_enum] */ 
enum __x_ABI_CWindows_CSystem_CPower_CBatteryStatus
    {
        BatteryStatus_NotPresent	= 0,
        BatteryStatus_Discharging	= 1,
        BatteryStatus_Idle	= 2,
        BatteryStatus_Charging	= 3
    } ;
#endif /* end if !defined(__cplusplus) */

#endif
#if !defined(__cplusplus)

#if !defined(__cplusplus)
/* [v1_enum] */ 
enum __x_ABI_CWindows_CSystem_CPower_CEnergySaverStatus
    {
        EnergySaverStatus_Disabled	= 0,
        EnergySaverStatus_Off	= 1,
        EnergySaverStatus_On	= 2
    } ;
#endif /* end if !defined(__cplusplus) */

#endif
#if !defined(__cplusplus)

#if !defined(__cplusplus)
/* [v1_enum] */ 
enum __x_ABI_CWindows_CSystem_CPower_CPowerSupplyStatus
    {
        PowerSupplyStatus_NotPresent	= 0,
        PowerSupplyStatus_Inadequate	= 1,
        PowerSupplyStatus_Adequate	= 2
    } ;
#endif /* end if !defined(__cplusplus) */

#endif
#if !defined(____x_ABI_CWindows_CSystem_CPower_CIBackgroundEnergyManagerStatics_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Power_IBackgroundEnergyManagerStatics[] = L"Windows.System.Power.IBackgroundEnergyManagerStatics";
#endif /* !defined(____x_ABI_CWindows_CSystem_CPower_CIBackgroundEnergyManagerStatics_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_windows2Esystem2Epower_0000_0001 */
/* [local] */ 


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

#ifdef __cplusplus

} /* end extern "C" */
namespace ABI {
    namespace Windows {
        namespace System {
            namespace Power {
                
                typedef enum BatteryStatus BatteryStatus;
                
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
        namespace System {
            namespace Power {
                
                typedef enum EnergySaverStatus EnergySaverStatus;
                
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
        namespace System {
            namespace Power {
                
                typedef enum PowerSupplyStatus PowerSupplyStatus;
                
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
        namespace System {
            namespace Power {
                
                /* [v1_enum] */ 
                enum BatteryStatus
                    {
                        BatteryStatus_NotPresent	= 0,
                        BatteryStatus_Discharging	= 1,
                        BatteryStatus_Idle	= 2,
                        BatteryStatus_Charging	= 3
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
        namespace System {
            namespace Power {
                
                /* [v1_enum] */ 
                enum EnergySaverStatus
                    {
                        EnergySaverStatus_Disabled	= 0,
                        EnergySaverStatus_Off	= 1,
                        EnergySaverStatus_On	= 2
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
        namespace System {
            namespace Power {
                
                /* [v1_enum] */ 
                enum PowerSupplyStatus
                    {
                        PowerSupplyStatus_NotPresent	= 0,
                        PowerSupplyStatus_Inadequate	= 1,
                        PowerSupplyStatus_Adequate	= 2
                    } ;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

extern "C" { 
#endif



extern RPC_IF_HANDLE __MIDL_itf_windows2Esystem2Epower_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Esystem2Epower_0000_0001_v0_0_s_ifspec;

#ifndef ____x_ABI_CWindows_CSystem_CPower_CIBackgroundEnergyManagerStatics_INTERFACE_DEFINED__
#define ____x_ABI_CWindows_CSystem_CPower_CIBackgroundEnergyManagerStatics_INTERFACE_DEFINED__

/* interface __x_ABI_CWindows_CSystem_CPower_CIBackgroundEnergyManagerStatics */
/* [uuid][object] */ 



/* interface ABI::Windows::System::Power::IBackgroundEnergyManagerStatics */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CPower_CIBackgroundEnergyManagerStatics;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Windows {
            namespace System {
                namespace Power {
                    
                    MIDL_INTERFACE("B3161D95-1180-4376-96E1-4095568147CE")
                    IBackgroundEnergyManagerStatics : public IInspectable
                    {
                    public:
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_LowUsageLevel( 
                            /* [out][retval] */ __RPC__out UINT32 *value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_NearMaxAcceptableUsageLevel( 
                            /* [out][retval] */ __RPC__out UINT32 *value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_MaxAcceptableUsageLevel( 
                            /* [out][retval] */ __RPC__out UINT32 *value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ExcessiveUsageLevel( 
                            /* [out][retval] */ __RPC__out UINT32 *value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_NearTerminationUsageLevel( 
                            /* [out][retval] */ __RPC__out UINT32 *value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_TerminationUsageLevel( 
                            /* [out][retval] */ __RPC__out UINT32 *value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_RecentEnergyUsage( 
                            /* [out][retval] */ __RPC__out UINT32 *value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_RecentEnergyUsageLevel( 
                            /* [out][retval] */ __RPC__out UINT32 *value) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE add_RecentEnergyUsageIncreased( 
                            /* [in] */ __RPC__in_opt __FIEventHandler_1_IInspectable *handler,
                            /* [out][retval] */ __RPC__out EventRegistrationToken *token) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE remove_RecentEnergyUsageIncreased( 
                            /* [in] */ EventRegistrationToken token) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE add_RecentEnergyUsageReturnedToLow( 
                            /* [in] */ __RPC__in_opt __FIEventHandler_1_IInspectable *handler,
                            /* [out][retval] */ __RPC__out EventRegistrationToken *token) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE remove_RecentEnergyUsageReturnedToLow( 
                            /* [in] */ EventRegistrationToken token) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_IBackgroundEnergyManagerStatics = __uuidof(IBackgroundEnergyManagerStatics);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CWindows_CSystem_CPower_CIBackgroundEnergyManagerStaticsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CWindows_CSystem_CPower_CIBackgroundEnergyManagerStatics * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CWindows_CSystem_CPower_CIBackgroundEnergyManagerStatics * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CWindows_CSystem_CPower_CIBackgroundEnergyManagerStatics * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CWindows_CSystem_CPower_CIBackgroundEnergyManagerStatics * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CWindows_CSystem_CPower_CIBackgroundEnergyManagerStatics * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CWindows_CSystem_CPower_CIBackgroundEnergyManagerStatics * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_LowUsageLevel )( 
            __RPC__in __x_ABI_CWindows_CSystem_CPower_CIBackgroundEnergyManagerStatics * This,
            /* [out][retval] */ __RPC__out UINT32 *value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_NearMaxAcceptableUsageLevel )( 
            __RPC__in __x_ABI_CWindows_CSystem_CPower_CIBackgroundEnergyManagerStatics * This,
            /* [out][retval] */ __RPC__out UINT32 *value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_MaxAcceptableUsageLevel )( 
            __RPC__in __x_ABI_CWindows_CSystem_CPower_CIBackgroundEnergyManagerStatics * This,
            /* [out][retval] */ __RPC__out UINT32 *value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ExcessiveUsageLevel )( 
            __RPC__in __x_ABI_CWindows_CSystem_CPower_CIBackgroundEnergyManagerStatics * This,
            /* [out][retval] */ __RPC__out UINT32 *value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_NearTerminationUsageLevel )( 
            __RPC__in __x_ABI_CWindows_CSystem_CPower_CIBackgroundEnergyManagerStatics * This,
            /* [out][retval] */ __RPC__out UINT32 *value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_TerminationUsageLevel )( 
            __RPC__in __x_ABI_CWindows_CSystem_CPower_CIBackgroundEnergyManagerStatics * This,
            /* [out][retval] */ __RPC__out UINT32 *value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_RecentEnergyUsage )( 
            __RPC__in __x_ABI_CWindows_CSystem_CPower_CIBackgroundEnergyManagerStatics * This,
            /* [out][retval] */ __RPC__out UINT32 *value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_RecentEnergyUsageLevel )( 
            __RPC__in __x_ABI_CWindows_CSystem_CPower_CIBackgroundEnergyManagerStatics * This,
            /* [out][retval] */ __RPC__out UINT32 *value);
        
        HRESULT ( STDMETHODCALLTYPE *add_RecentEnergyUsageIncreased )( 
            __RPC__in __x_ABI_CWindows_CSystem_CPower_CIBackgroundEnergyManagerStatics * This,
            /* [in] */ __RPC__in_opt __FIEventHandler_1_IInspectable *handler,
            /* [out][retval] */ __RPC__out EventRegistrationToken *token);
        
        HRESULT ( STDMETHODCALLTYPE *remove_RecentEnergyUsageIncreased )( 
            __RPC__in __x_ABI_CWindows_CSystem_CPower_CIBackgroundEnergyManagerStatics * This,
            /* [in] */ EventRegistrationToken token);
        
        HRESULT ( STDMETHODCALLTYPE *add_RecentEnergyUsageReturnedToLow )( 
            __RPC__in __x_ABI_CWindows_CSystem_CPower_CIBackgroundEnergyManagerStatics * This,
            /* [in] */ __RPC__in_opt __FIEventHandler_1_IInspectable *handler,
            /* [out][retval] */ __RPC__out EventRegistrationToken *token);
        
        HRESULT ( STDMETHODCALLTYPE *remove_RecentEnergyUsageReturnedToLow )( 
            __RPC__in __x_ABI_CWindows_CSystem_CPower_CIBackgroundEnergyManagerStatics * This,
            /* [in] */ EventRegistrationToken token);
        
        END_INTERFACE
    } __x_ABI_CWindows_CSystem_CPower_CIBackgroundEnergyManagerStaticsVtbl;

    interface __x_ABI_CWindows_CSystem_CPower_CIBackgroundEnergyManagerStatics
    {
        CONST_VTBL struct __x_ABI_CWindows_CSystem_CPower_CIBackgroundEnergyManagerStaticsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CWindows_CSystem_CPower_CIBackgroundEnergyManagerStatics_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CWindows_CSystem_CPower_CIBackgroundEnergyManagerStatics_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CWindows_CSystem_CPower_CIBackgroundEnergyManagerStatics_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CWindows_CSystem_CPower_CIBackgroundEnergyManagerStatics_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CWindows_CSystem_CPower_CIBackgroundEnergyManagerStatics_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CWindows_CSystem_CPower_CIBackgroundEnergyManagerStatics_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CWindows_CSystem_CPower_CIBackgroundEnergyManagerStatics_get_LowUsageLevel(This,value)	\
    ( (This)->lpVtbl -> get_LowUsageLevel(This,value) ) 

#define __x_ABI_CWindows_CSystem_CPower_CIBackgroundEnergyManagerStatics_get_NearMaxAcceptableUsageLevel(This,value)	\
    ( (This)->lpVtbl -> get_NearMaxAcceptableUsageLevel(This,value) ) 

#define __x_ABI_CWindows_CSystem_CPower_CIBackgroundEnergyManagerStatics_get_MaxAcceptableUsageLevel(This,value)	\
    ( (This)->lpVtbl -> get_MaxAcceptableUsageLevel(This,value) ) 

#define __x_ABI_CWindows_CSystem_CPower_CIBackgroundEnergyManagerStatics_get_ExcessiveUsageLevel(This,value)	\
    ( (This)->lpVtbl -> get_ExcessiveUsageLevel(This,value) ) 

#define __x_ABI_CWindows_CSystem_CPower_CIBackgroundEnergyManagerStatics_get_NearTerminationUsageLevel(This,value)	\
    ( (This)->lpVtbl -> get_NearTerminationUsageLevel(This,value) ) 

#define __x_ABI_CWindows_CSystem_CPower_CIBackgroundEnergyManagerStatics_get_TerminationUsageLevel(This,value)	\
    ( (This)->lpVtbl -> get_TerminationUsageLevel(This,value) ) 

#define __x_ABI_CWindows_CSystem_CPower_CIBackgroundEnergyManagerStatics_get_RecentEnergyUsage(This,value)	\
    ( (This)->lpVtbl -> get_RecentEnergyUsage(This,value) ) 

#define __x_ABI_CWindows_CSystem_CPower_CIBackgroundEnergyManagerStatics_get_RecentEnergyUsageLevel(This,value)	\
    ( (This)->lpVtbl -> get_RecentEnergyUsageLevel(This,value) ) 

#define __x_ABI_CWindows_CSystem_CPower_CIBackgroundEnergyManagerStatics_add_RecentEnergyUsageIncreased(This,handler,token)	\
    ( (This)->lpVtbl -> add_RecentEnergyUsageIncreased(This,handler,token) ) 

#define __x_ABI_CWindows_CSystem_CPower_CIBackgroundEnergyManagerStatics_remove_RecentEnergyUsageIncreased(This,token)	\
    ( (This)->lpVtbl -> remove_RecentEnergyUsageIncreased(This,token) ) 

#define __x_ABI_CWindows_CSystem_CPower_CIBackgroundEnergyManagerStatics_add_RecentEnergyUsageReturnedToLow(This,handler,token)	\
    ( (This)->lpVtbl -> add_RecentEnergyUsageReturnedToLow(This,handler,token) ) 

#define __x_ABI_CWindows_CSystem_CPower_CIBackgroundEnergyManagerStatics_remove_RecentEnergyUsageReturnedToLow(This,token)	\
    ( (This)->lpVtbl -> remove_RecentEnergyUsageReturnedToLow(This,token) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CWindows_CSystem_CPower_CIBackgroundEnergyManagerStatics_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Esystem2Epower_0000_0002 */
/* [local] */ 

#if !defined(____x_ABI_CWindows_CSystem_CPower_CIForegroundEnergyManagerStatics_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Power_IForegroundEnergyManagerStatics[] = L"Windows.System.Power.IForegroundEnergyManagerStatics";
#endif /* !defined(____x_ABI_CWindows_CSystem_CPower_CIForegroundEnergyManagerStatics_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_windows2Esystem2Epower_0000_0002 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Esystem2Epower_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Esystem2Epower_0000_0002_v0_0_s_ifspec;

#ifndef ____x_ABI_CWindows_CSystem_CPower_CIForegroundEnergyManagerStatics_INTERFACE_DEFINED__
#define ____x_ABI_CWindows_CSystem_CPower_CIForegroundEnergyManagerStatics_INTERFACE_DEFINED__

/* interface __x_ABI_CWindows_CSystem_CPower_CIForegroundEnergyManagerStatics */
/* [uuid][object] */ 



/* interface ABI::Windows::System::Power::IForegroundEnergyManagerStatics */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CPower_CIForegroundEnergyManagerStatics;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Windows {
            namespace System {
                namespace Power {
                    
                    MIDL_INTERFACE("9FF86872-E677-4814-9A20-5337CA732B98")
                    IForegroundEnergyManagerStatics : public IInspectable
                    {
                    public:
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_LowUsageLevel( 
                            /* [out][retval] */ __RPC__out UINT32 *value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_NearMaxAcceptableUsageLevel( 
                            /* [out][retval] */ __RPC__out UINT32 *value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_MaxAcceptableUsageLevel( 
                            /* [out][retval] */ __RPC__out UINT32 *value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ExcessiveUsageLevel( 
                            /* [out][retval] */ __RPC__out UINT32 *value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_RecentEnergyUsage( 
                            /* [out][retval] */ __RPC__out UINT32 *value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_RecentEnergyUsageLevel( 
                            /* [out][retval] */ __RPC__out UINT32 *value) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE add_RecentEnergyUsageIncreased( 
                            /* [in] */ __RPC__in_opt __FIEventHandler_1_IInspectable *handler,
                            /* [out][retval] */ __RPC__out EventRegistrationToken *token) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE remove_RecentEnergyUsageIncreased( 
                            /* [in] */ EventRegistrationToken token) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE add_RecentEnergyUsageReturnedToLow( 
                            /* [in] */ __RPC__in_opt __FIEventHandler_1_IInspectable *handler,
                            /* [out][retval] */ __RPC__out EventRegistrationToken *token) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE remove_RecentEnergyUsageReturnedToLow( 
                            /* [in] */ EventRegistrationToken token) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_IForegroundEnergyManagerStatics = __uuidof(IForegroundEnergyManagerStatics);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CWindows_CSystem_CPower_CIForegroundEnergyManagerStaticsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CWindows_CSystem_CPower_CIForegroundEnergyManagerStatics * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CWindows_CSystem_CPower_CIForegroundEnergyManagerStatics * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CWindows_CSystem_CPower_CIForegroundEnergyManagerStatics * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CWindows_CSystem_CPower_CIForegroundEnergyManagerStatics * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CWindows_CSystem_CPower_CIForegroundEnergyManagerStatics * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CWindows_CSystem_CPower_CIForegroundEnergyManagerStatics * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_LowUsageLevel )( 
            __RPC__in __x_ABI_CWindows_CSystem_CPower_CIForegroundEnergyManagerStatics * This,
            /* [out][retval] */ __RPC__out UINT32 *value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_NearMaxAcceptableUsageLevel )( 
            __RPC__in __x_ABI_CWindows_CSystem_CPower_CIForegroundEnergyManagerStatics * This,
            /* [out][retval] */ __RPC__out UINT32 *value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_MaxAcceptableUsageLevel )( 
            __RPC__in __x_ABI_CWindows_CSystem_CPower_CIForegroundEnergyManagerStatics * This,
            /* [out][retval] */ __RPC__out UINT32 *value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ExcessiveUsageLevel )( 
            __RPC__in __x_ABI_CWindows_CSystem_CPower_CIForegroundEnergyManagerStatics * This,
            /* [out][retval] */ __RPC__out UINT32 *value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_RecentEnergyUsage )( 
            __RPC__in __x_ABI_CWindows_CSystem_CPower_CIForegroundEnergyManagerStatics * This,
            /* [out][retval] */ __RPC__out UINT32 *value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_RecentEnergyUsageLevel )( 
            __RPC__in __x_ABI_CWindows_CSystem_CPower_CIForegroundEnergyManagerStatics * This,
            /* [out][retval] */ __RPC__out UINT32 *value);
        
        HRESULT ( STDMETHODCALLTYPE *add_RecentEnergyUsageIncreased )( 
            __RPC__in __x_ABI_CWindows_CSystem_CPower_CIForegroundEnergyManagerStatics * This,
            /* [in] */ __RPC__in_opt __FIEventHandler_1_IInspectable *handler,
            /* [out][retval] */ __RPC__out EventRegistrationToken *token);
        
        HRESULT ( STDMETHODCALLTYPE *remove_RecentEnergyUsageIncreased )( 
            __RPC__in __x_ABI_CWindows_CSystem_CPower_CIForegroundEnergyManagerStatics * This,
            /* [in] */ EventRegistrationToken token);
        
        HRESULT ( STDMETHODCALLTYPE *add_RecentEnergyUsageReturnedToLow )( 
            __RPC__in __x_ABI_CWindows_CSystem_CPower_CIForegroundEnergyManagerStatics * This,
            /* [in] */ __RPC__in_opt __FIEventHandler_1_IInspectable *handler,
            /* [out][retval] */ __RPC__out EventRegistrationToken *token);
        
        HRESULT ( STDMETHODCALLTYPE *remove_RecentEnergyUsageReturnedToLow )( 
            __RPC__in __x_ABI_CWindows_CSystem_CPower_CIForegroundEnergyManagerStatics * This,
            /* [in] */ EventRegistrationToken token);
        
        END_INTERFACE
    } __x_ABI_CWindows_CSystem_CPower_CIForegroundEnergyManagerStaticsVtbl;

    interface __x_ABI_CWindows_CSystem_CPower_CIForegroundEnergyManagerStatics
    {
        CONST_VTBL struct __x_ABI_CWindows_CSystem_CPower_CIForegroundEnergyManagerStaticsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CWindows_CSystem_CPower_CIForegroundEnergyManagerStatics_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CWindows_CSystem_CPower_CIForegroundEnergyManagerStatics_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CWindows_CSystem_CPower_CIForegroundEnergyManagerStatics_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CWindows_CSystem_CPower_CIForegroundEnergyManagerStatics_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CWindows_CSystem_CPower_CIForegroundEnergyManagerStatics_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CWindows_CSystem_CPower_CIForegroundEnergyManagerStatics_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CWindows_CSystem_CPower_CIForegroundEnergyManagerStatics_get_LowUsageLevel(This,value)	\
    ( (This)->lpVtbl -> get_LowUsageLevel(This,value) ) 

#define __x_ABI_CWindows_CSystem_CPower_CIForegroundEnergyManagerStatics_get_NearMaxAcceptableUsageLevel(This,value)	\
    ( (This)->lpVtbl -> get_NearMaxAcceptableUsageLevel(This,value) ) 

#define __x_ABI_CWindows_CSystem_CPower_CIForegroundEnergyManagerStatics_get_MaxAcceptableUsageLevel(This,value)	\
    ( (This)->lpVtbl -> get_MaxAcceptableUsageLevel(This,value) ) 

#define __x_ABI_CWindows_CSystem_CPower_CIForegroundEnergyManagerStatics_get_ExcessiveUsageLevel(This,value)	\
    ( (This)->lpVtbl -> get_ExcessiveUsageLevel(This,value) ) 

#define __x_ABI_CWindows_CSystem_CPower_CIForegroundEnergyManagerStatics_get_RecentEnergyUsage(This,value)	\
    ( (This)->lpVtbl -> get_RecentEnergyUsage(This,value) ) 

#define __x_ABI_CWindows_CSystem_CPower_CIForegroundEnergyManagerStatics_get_RecentEnergyUsageLevel(This,value)	\
    ( (This)->lpVtbl -> get_RecentEnergyUsageLevel(This,value) ) 

#define __x_ABI_CWindows_CSystem_CPower_CIForegroundEnergyManagerStatics_add_RecentEnergyUsageIncreased(This,handler,token)	\
    ( (This)->lpVtbl -> add_RecentEnergyUsageIncreased(This,handler,token) ) 

#define __x_ABI_CWindows_CSystem_CPower_CIForegroundEnergyManagerStatics_remove_RecentEnergyUsageIncreased(This,token)	\
    ( (This)->lpVtbl -> remove_RecentEnergyUsageIncreased(This,token) ) 

#define __x_ABI_CWindows_CSystem_CPower_CIForegroundEnergyManagerStatics_add_RecentEnergyUsageReturnedToLow(This,handler,token)	\
    ( (This)->lpVtbl -> add_RecentEnergyUsageReturnedToLow(This,handler,token) ) 

#define __x_ABI_CWindows_CSystem_CPower_CIForegroundEnergyManagerStatics_remove_RecentEnergyUsageReturnedToLow(This,token)	\
    ( (This)->lpVtbl -> remove_RecentEnergyUsageReturnedToLow(This,token) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CWindows_CSystem_CPower_CIForegroundEnergyManagerStatics_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Esystem2Epower_0000_0003 */
/* [local] */ 

#if !defined(____x_ABI_CWindows_CSystem_CPower_CIPowerManagerStatics_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Power_IPowerManagerStatics[] = L"Windows.System.Power.IPowerManagerStatics";
#endif /* !defined(____x_ABI_CWindows_CSystem_CPower_CIPowerManagerStatics_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_windows2Esystem2Epower_0000_0003 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Esystem2Epower_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Esystem2Epower_0000_0003_v0_0_s_ifspec;

#ifndef ____x_ABI_CWindows_CSystem_CPower_CIPowerManagerStatics_INTERFACE_DEFINED__
#define ____x_ABI_CWindows_CSystem_CPower_CIPowerManagerStatics_INTERFACE_DEFINED__

/* interface __x_ABI_CWindows_CSystem_CPower_CIPowerManagerStatics */
/* [uuid][object] */ 



/* interface ABI::Windows::System::Power::IPowerManagerStatics */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CPower_CIPowerManagerStatics;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Windows {
            namespace System {
                namespace Power {
                    
                    MIDL_INTERFACE("1394825D-62CE-4364-98D5-AA28C7FBD15B")
                    IPowerManagerStatics : public IInspectable
                    {
                    public:
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_EnergySaverStatus( 
                            /* [out][retval] */ __RPC__out ABI::Windows::System::Power::EnergySaverStatus *value) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE add_EnergySaverStatusChanged( 
                            /* [in] */ __RPC__in_opt __FIEventHandler_1_IInspectable *handler,
                            /* [out][retval] */ __RPC__out EventRegistrationToken *token) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE remove_EnergySaverStatusChanged( 
                            /* [in] */ EventRegistrationToken token) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_BatteryStatus( 
                            /* [out][retval] */ __RPC__out ABI::Windows::System::Power::BatteryStatus *value) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE add_BatteryStatusChanged( 
                            /* [in] */ __RPC__in_opt __FIEventHandler_1_IInspectable *handler,
                            /* [out][retval] */ __RPC__out EventRegistrationToken *token) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE remove_BatteryStatusChanged( 
                            /* [in] */ EventRegistrationToken token) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_PowerSupplyStatus( 
                            /* [out][retval] */ __RPC__out ABI::Windows::System::Power::PowerSupplyStatus *value) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE add_PowerSupplyStatusChanged( 
                            /* [in] */ __RPC__in_opt __FIEventHandler_1_IInspectable *handler,
                            /* [out][retval] */ __RPC__out EventRegistrationToken *token) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE remove_PowerSupplyStatusChanged( 
                            /* [in] */ EventRegistrationToken token) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_RemainingChargePercent( 
                            /* [out][retval] */ __RPC__out INT32 *value) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE add_RemainingChargePercentChanged( 
                            /* [in] */ __RPC__in_opt __FIEventHandler_1_IInspectable *handler,
                            /* [out][retval] */ __RPC__out EventRegistrationToken *token) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE remove_RemainingChargePercentChanged( 
                            /* [in] */ EventRegistrationToken token) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_RemainingDischargeTime( 
                            /* [out][retval] */ __RPC__out ABI::Windows::Foundation::TimeSpan *value) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE add_RemainingDischargeTimeChanged( 
                            /* [in] */ __RPC__in_opt __FIEventHandler_1_IInspectable *handler,
                            /* [out][retval] */ __RPC__out EventRegistrationToken *token) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE remove_RemainingDischargeTimeChanged( 
                            /* [in] */ EventRegistrationToken token) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_IPowerManagerStatics = __uuidof(IPowerManagerStatics);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CWindows_CSystem_CPower_CIPowerManagerStaticsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CWindows_CSystem_CPower_CIPowerManagerStatics * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CWindows_CSystem_CPower_CIPowerManagerStatics * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CWindows_CSystem_CPower_CIPowerManagerStatics * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CWindows_CSystem_CPower_CIPowerManagerStatics * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CWindows_CSystem_CPower_CIPowerManagerStatics * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CWindows_CSystem_CPower_CIPowerManagerStatics * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_EnergySaverStatus )( 
            __RPC__in __x_ABI_CWindows_CSystem_CPower_CIPowerManagerStatics * This,
            /* [out][retval] */ __RPC__out __x_ABI_CWindows_CSystem_CPower_CEnergySaverStatus *value);
        
        HRESULT ( STDMETHODCALLTYPE *add_EnergySaverStatusChanged )( 
            __RPC__in __x_ABI_CWindows_CSystem_CPower_CIPowerManagerStatics * This,
            /* [in] */ __RPC__in_opt __FIEventHandler_1_IInspectable *handler,
            /* [out][retval] */ __RPC__out EventRegistrationToken *token);
        
        HRESULT ( STDMETHODCALLTYPE *remove_EnergySaverStatusChanged )( 
            __RPC__in __x_ABI_CWindows_CSystem_CPower_CIPowerManagerStatics * This,
            /* [in] */ EventRegistrationToken token);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_BatteryStatus )( 
            __RPC__in __x_ABI_CWindows_CSystem_CPower_CIPowerManagerStatics * This,
            /* [out][retval] */ __RPC__out __x_ABI_CWindows_CSystem_CPower_CBatteryStatus *value);
        
        HRESULT ( STDMETHODCALLTYPE *add_BatteryStatusChanged )( 
            __RPC__in __x_ABI_CWindows_CSystem_CPower_CIPowerManagerStatics * This,
            /* [in] */ __RPC__in_opt __FIEventHandler_1_IInspectable *handler,
            /* [out][retval] */ __RPC__out EventRegistrationToken *token);
        
        HRESULT ( STDMETHODCALLTYPE *remove_BatteryStatusChanged )( 
            __RPC__in __x_ABI_CWindows_CSystem_CPower_CIPowerManagerStatics * This,
            /* [in] */ EventRegistrationToken token);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_PowerSupplyStatus )( 
            __RPC__in __x_ABI_CWindows_CSystem_CPower_CIPowerManagerStatics * This,
            /* [out][retval] */ __RPC__out __x_ABI_CWindows_CSystem_CPower_CPowerSupplyStatus *value);
        
        HRESULT ( STDMETHODCALLTYPE *add_PowerSupplyStatusChanged )( 
            __RPC__in __x_ABI_CWindows_CSystem_CPower_CIPowerManagerStatics * This,
            /* [in] */ __RPC__in_opt __FIEventHandler_1_IInspectable *handler,
            /* [out][retval] */ __RPC__out EventRegistrationToken *token);
        
        HRESULT ( STDMETHODCALLTYPE *remove_PowerSupplyStatusChanged )( 
            __RPC__in __x_ABI_CWindows_CSystem_CPower_CIPowerManagerStatics * This,
            /* [in] */ EventRegistrationToken token);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_RemainingChargePercent )( 
            __RPC__in __x_ABI_CWindows_CSystem_CPower_CIPowerManagerStatics * This,
            /* [out][retval] */ __RPC__out INT32 *value);
        
        HRESULT ( STDMETHODCALLTYPE *add_RemainingChargePercentChanged )( 
            __RPC__in __x_ABI_CWindows_CSystem_CPower_CIPowerManagerStatics * This,
            /* [in] */ __RPC__in_opt __FIEventHandler_1_IInspectable *handler,
            /* [out][retval] */ __RPC__out EventRegistrationToken *token);
        
        HRESULT ( STDMETHODCALLTYPE *remove_RemainingChargePercentChanged )( 
            __RPC__in __x_ABI_CWindows_CSystem_CPower_CIPowerManagerStatics * This,
            /* [in] */ EventRegistrationToken token);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_RemainingDischargeTime )( 
            __RPC__in __x_ABI_CWindows_CSystem_CPower_CIPowerManagerStatics * This,
            /* [out][retval] */ __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan *value);
        
        HRESULT ( STDMETHODCALLTYPE *add_RemainingDischargeTimeChanged )( 
            __RPC__in __x_ABI_CWindows_CSystem_CPower_CIPowerManagerStatics * This,
            /* [in] */ __RPC__in_opt __FIEventHandler_1_IInspectable *handler,
            /* [out][retval] */ __RPC__out EventRegistrationToken *token);
        
        HRESULT ( STDMETHODCALLTYPE *remove_RemainingDischargeTimeChanged )( 
            __RPC__in __x_ABI_CWindows_CSystem_CPower_CIPowerManagerStatics * This,
            /* [in] */ EventRegistrationToken token);
        
        END_INTERFACE
    } __x_ABI_CWindows_CSystem_CPower_CIPowerManagerStaticsVtbl;

    interface __x_ABI_CWindows_CSystem_CPower_CIPowerManagerStatics
    {
        CONST_VTBL struct __x_ABI_CWindows_CSystem_CPower_CIPowerManagerStaticsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CWindows_CSystem_CPower_CIPowerManagerStatics_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CWindows_CSystem_CPower_CIPowerManagerStatics_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CWindows_CSystem_CPower_CIPowerManagerStatics_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CWindows_CSystem_CPower_CIPowerManagerStatics_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CWindows_CSystem_CPower_CIPowerManagerStatics_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CWindows_CSystem_CPower_CIPowerManagerStatics_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CWindows_CSystem_CPower_CIPowerManagerStatics_get_EnergySaverStatus(This,value)	\
    ( (This)->lpVtbl -> get_EnergySaverStatus(This,value) ) 

#define __x_ABI_CWindows_CSystem_CPower_CIPowerManagerStatics_add_EnergySaverStatusChanged(This,handler,token)	\
    ( (This)->lpVtbl -> add_EnergySaverStatusChanged(This,handler,token) ) 

#define __x_ABI_CWindows_CSystem_CPower_CIPowerManagerStatics_remove_EnergySaverStatusChanged(This,token)	\
    ( (This)->lpVtbl -> remove_EnergySaverStatusChanged(This,token) ) 

#define __x_ABI_CWindows_CSystem_CPower_CIPowerManagerStatics_get_BatteryStatus(This,value)	\
    ( (This)->lpVtbl -> get_BatteryStatus(This,value) ) 

#define __x_ABI_CWindows_CSystem_CPower_CIPowerManagerStatics_add_BatteryStatusChanged(This,handler,token)	\
    ( (This)->lpVtbl -> add_BatteryStatusChanged(This,handler,token) ) 

#define __x_ABI_CWindows_CSystem_CPower_CIPowerManagerStatics_remove_BatteryStatusChanged(This,token)	\
    ( (This)->lpVtbl -> remove_BatteryStatusChanged(This,token) ) 

#define __x_ABI_CWindows_CSystem_CPower_CIPowerManagerStatics_get_PowerSupplyStatus(This,value)	\
    ( (This)->lpVtbl -> get_PowerSupplyStatus(This,value) ) 

#define __x_ABI_CWindows_CSystem_CPower_CIPowerManagerStatics_add_PowerSupplyStatusChanged(This,handler,token)	\
    ( (This)->lpVtbl -> add_PowerSupplyStatusChanged(This,handler,token) ) 

#define __x_ABI_CWindows_CSystem_CPower_CIPowerManagerStatics_remove_PowerSupplyStatusChanged(This,token)	\
    ( (This)->lpVtbl -> remove_PowerSupplyStatusChanged(This,token) ) 

#define __x_ABI_CWindows_CSystem_CPower_CIPowerManagerStatics_get_RemainingChargePercent(This,value)	\
    ( (This)->lpVtbl -> get_RemainingChargePercent(This,value) ) 

#define __x_ABI_CWindows_CSystem_CPower_CIPowerManagerStatics_add_RemainingChargePercentChanged(This,handler,token)	\
    ( (This)->lpVtbl -> add_RemainingChargePercentChanged(This,handler,token) ) 

#define __x_ABI_CWindows_CSystem_CPower_CIPowerManagerStatics_remove_RemainingChargePercentChanged(This,token)	\
    ( (This)->lpVtbl -> remove_RemainingChargePercentChanged(This,token) ) 

#define __x_ABI_CWindows_CSystem_CPower_CIPowerManagerStatics_get_RemainingDischargeTime(This,value)	\
    ( (This)->lpVtbl -> get_RemainingDischargeTime(This,value) ) 

#define __x_ABI_CWindows_CSystem_CPower_CIPowerManagerStatics_add_RemainingDischargeTimeChanged(This,handler,token)	\
    ( (This)->lpVtbl -> add_RemainingDischargeTimeChanged(This,handler,token) ) 

#define __x_ABI_CWindows_CSystem_CPower_CIPowerManagerStatics_remove_RemainingDischargeTimeChanged(This,token)	\
    ( (This)->lpVtbl -> remove_RemainingDischargeTimeChanged(This,token) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CWindows_CSystem_CPower_CIPowerManagerStatics_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Esystem2Epower_0000_0004 */
/* [local] */ 

#ifndef RUNTIMECLASS_Windows_System_Power_BackgroundEnergyManager_DEFINED
#define RUNTIMECLASS_Windows_System_Power_BackgroundEnergyManager_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_Power_BackgroundEnergyManager[] = L"Windows.System.Power.BackgroundEnergyManager";
#endif
#ifndef RUNTIMECLASS_Windows_System_Power_ForegroundEnergyManager_DEFINED
#define RUNTIMECLASS_Windows_System_Power_ForegroundEnergyManager_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_Power_ForegroundEnergyManager[] = L"Windows.System.Power.ForegroundEnergyManager";
#endif
#ifndef RUNTIMECLASS_Windows_System_Power_PowerManager_DEFINED
#define RUNTIMECLASS_Windows_System_Power_PowerManager_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_Power_PowerManager[] = L"Windows.System.Power.PowerManager";
#endif


/* interface __MIDL_itf_windows2Esystem2Epower_0000_0004 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Esystem2Epower_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Esystem2Epower_0000_0004_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


