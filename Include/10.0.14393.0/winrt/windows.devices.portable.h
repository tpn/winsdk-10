

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

#ifndef __windows2Edevices2Eportable_h__
#define __windows2Edevices2Eportable_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef ____x_ABI_CWindows_CDevices_CPortable_CIServiceDeviceStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CPortable_CIServiceDeviceStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CPortable_CIServiceDeviceStatics __x_ABI_CWindows_CDevices_CPortable_CIServiceDeviceStatics;

#ifdef __cplusplus
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Portable {
                interface IServiceDeviceStatics;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CWindows_CDevices_CPortable_CIServiceDeviceStatics_FWD_DEFINED__ */


#ifndef ____x_ABI_CWindows_CDevices_CPortable_CIStorageDeviceStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CPortable_CIStorageDeviceStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CPortable_CIStorageDeviceStatics __x_ABI_CWindows_CDevices_CPortable_CIStorageDeviceStatics;

#ifdef __cplusplus
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Portable {
                interface IStorageDeviceStatics;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CWindows_CDevices_CPortable_CIStorageDeviceStatics_FWD_DEFINED__ */


/* header files for imported files */
#include "inspectable.h"
#include "AsyncInfo.h"
#include "EventToken.h"
#include "Windows.Foundation.h"
#include "Windows.Storage.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_windows2Edevices2Eportable_0000_0000 */
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
class StorageFolder;
} /*Storage*/
} /*Windows*/
}
#endif

#if !defined(__cplusplus)
#if !defined(__cplusplus)

typedef enum __x_ABI_CWindows_CDevices_CPortable_CServiceDeviceType __x_ABI_CWindows_CDevices_CPortable_CServiceDeviceType;


#endif /* end if !defined(__cplusplus) */


#endif


#if !defined(__cplusplus)

#if !defined(__cplusplus)
/* [v1_enum] */ 
enum __x_ABI_CWindows_CDevices_CPortable_CServiceDeviceType
    {
        ServiceDeviceType_CalendarService	= 0,
        ServiceDeviceType_ContactsService	= 1,
        ServiceDeviceType_DeviceStatusService	= 2,
        ServiceDeviceType_NotesService	= 3,
        ServiceDeviceType_RingtonesService	= 4,
        ServiceDeviceType_SmsService	= 5,
        ServiceDeviceType_TasksService	= 6
    } ;
#endif /* end if !defined(__cplusplus) */

#endif
#if !defined(____x_ABI_CWindows_CDevices_CPortable_CIServiceDeviceStatics_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Portable_IServiceDeviceStatics[] = L"Windows.Devices.Portable.IServiceDeviceStatics";
#endif /* !defined(____x_ABI_CWindows_CDevices_CPortable_CIServiceDeviceStatics_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_windows2Edevices2Eportable_0000_0000 */
/* [local] */ 


#ifdef __cplusplus

} /* end extern "C" */
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Portable {
                
                typedef enum ServiceDeviceType ServiceDeviceType;
                
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
        namespace Devices {
            namespace Portable {
                
                /* [v1_enum] */ 
                enum ServiceDeviceType
                    {
                        ServiceDeviceType_CalendarService	= 0,
                        ServiceDeviceType_ContactsService	= 1,
                        ServiceDeviceType_DeviceStatusService	= 2,
                        ServiceDeviceType_NotesService	= 3,
                        ServiceDeviceType_RingtonesService	= 4,
                        ServiceDeviceType_SmsService	= 5,
                        ServiceDeviceType_TasksService	= 6
                    } ;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

extern "C" { 
#endif



extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Eportable_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Eportable_0000_0000_v0_0_s_ifspec;

#ifndef ____x_ABI_CWindows_CDevices_CPortable_CIServiceDeviceStatics_INTERFACE_DEFINED__
#define ____x_ABI_CWindows_CDevices_CPortable_CIServiceDeviceStatics_INTERFACE_DEFINED__

/* interface __x_ABI_CWindows_CDevices_CPortable_CIServiceDeviceStatics */
/* [uuid][object] */ 



/* interface ABI::Windows::Devices::Portable::IServiceDeviceStatics */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPortable_CIServiceDeviceStatics;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Windows {
            namespace Devices {
                namespace Portable {
                    
                    MIDL_INTERFACE("A88214E1-59C7-4A20-ABA6-9F6707937230")
                    IServiceDeviceStatics : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE GetDeviceSelector( 
                            /* [in] */ ABI::Windows::Devices::Portable::ServiceDeviceType serviceType,
                            /* [out][retval] */ __RPC__deref_out_opt HSTRING *selector) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE GetDeviceSelectorFromServiceId( 
                            /* [in] */ GUID serviceId,
                            /* [out][retval] */ __RPC__deref_out_opt HSTRING *selector) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_IServiceDeviceStatics = __uuidof(IServiceDeviceStatics);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CWindows_CDevices_CPortable_CIServiceDeviceStaticsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CWindows_CDevices_CPortable_CIServiceDeviceStatics * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CWindows_CDevices_CPortable_CIServiceDeviceStatics * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CWindows_CDevices_CPortable_CIServiceDeviceStatics * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CWindows_CDevices_CPortable_CIServiceDeviceStatics * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CWindows_CDevices_CPortable_CIServiceDeviceStatics * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CWindows_CDevices_CPortable_CIServiceDeviceStatics * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *GetDeviceSelector )( 
            __RPC__in __x_ABI_CWindows_CDevices_CPortable_CIServiceDeviceStatics * This,
            /* [in] */ __x_ABI_CWindows_CDevices_CPortable_CServiceDeviceType serviceType,
            /* [out][retval] */ __RPC__deref_out_opt HSTRING *selector);
        
        HRESULT ( STDMETHODCALLTYPE *GetDeviceSelectorFromServiceId )( 
            __RPC__in __x_ABI_CWindows_CDevices_CPortable_CIServiceDeviceStatics * This,
            /* [in] */ GUID serviceId,
            /* [out][retval] */ __RPC__deref_out_opt HSTRING *selector);
        
        END_INTERFACE
    } __x_ABI_CWindows_CDevices_CPortable_CIServiceDeviceStaticsVtbl;

    interface __x_ABI_CWindows_CDevices_CPortable_CIServiceDeviceStatics
    {
        CONST_VTBL struct __x_ABI_CWindows_CDevices_CPortable_CIServiceDeviceStaticsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CWindows_CDevices_CPortable_CIServiceDeviceStatics_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CWindows_CDevices_CPortable_CIServiceDeviceStatics_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CWindows_CDevices_CPortable_CIServiceDeviceStatics_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CWindows_CDevices_CPortable_CIServiceDeviceStatics_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CWindows_CDevices_CPortable_CIServiceDeviceStatics_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CWindows_CDevices_CPortable_CIServiceDeviceStatics_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CWindows_CDevices_CPortable_CIServiceDeviceStatics_GetDeviceSelector(This,serviceType,selector)	\
    ( (This)->lpVtbl -> GetDeviceSelector(This,serviceType,selector) ) 

#define __x_ABI_CWindows_CDevices_CPortable_CIServiceDeviceStatics_GetDeviceSelectorFromServiceId(This,serviceId,selector)	\
    ( (This)->lpVtbl -> GetDeviceSelectorFromServiceId(This,serviceId,selector) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CWindows_CDevices_CPortable_CIServiceDeviceStatics_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Edevices2Eportable_0000_0001 */
/* [local] */ 

#if !defined(____x_ABI_CWindows_CDevices_CPortable_CIStorageDeviceStatics_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Portable_IStorageDeviceStatics[] = L"Windows.Devices.Portable.IStorageDeviceStatics";
#endif /* !defined(____x_ABI_CWindows_CDevices_CPortable_CIStorageDeviceStatics_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_windows2Edevices2Eportable_0000_0001 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Eportable_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Eportable_0000_0001_v0_0_s_ifspec;

#ifndef ____x_ABI_CWindows_CDevices_CPortable_CIStorageDeviceStatics_INTERFACE_DEFINED__
#define ____x_ABI_CWindows_CDevices_CPortable_CIStorageDeviceStatics_INTERFACE_DEFINED__

/* interface __x_ABI_CWindows_CDevices_CPortable_CIStorageDeviceStatics */
/* [uuid][object] */ 



/* interface ABI::Windows::Devices::Portable::IStorageDeviceStatics */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPortable_CIStorageDeviceStatics;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Windows {
            namespace Devices {
                namespace Portable {
                    
                    MIDL_INTERFACE("5ECE44EE-1B23-4DD2-8652-BC164F003128")
                    IStorageDeviceStatics : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE FromId( 
                            /* [in] */ __RPC__in HSTRING deviceId,
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Windows::Storage::IStorageFolder **deviceRoot) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE GetDeviceSelector( 
                            /* [out][retval] */ __RPC__deref_out_opt HSTRING *selector) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_IStorageDeviceStatics = __uuidof(IStorageDeviceStatics);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CWindows_CDevices_CPortable_CIStorageDeviceStaticsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CWindows_CDevices_CPortable_CIStorageDeviceStatics * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CWindows_CDevices_CPortable_CIStorageDeviceStatics * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CWindows_CDevices_CPortable_CIStorageDeviceStatics * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CWindows_CDevices_CPortable_CIStorageDeviceStatics * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CWindows_CDevices_CPortable_CIStorageDeviceStatics * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CWindows_CDevices_CPortable_CIStorageDeviceStatics * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *FromId )( 
            __RPC__in __x_ABI_CWindows_CDevices_CPortable_CIStorageDeviceStatics * This,
            /* [in] */ __RPC__in HSTRING deviceId,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CIStorageFolder **deviceRoot);
        
        HRESULT ( STDMETHODCALLTYPE *GetDeviceSelector )( 
            __RPC__in __x_ABI_CWindows_CDevices_CPortable_CIStorageDeviceStatics * This,
            /* [out][retval] */ __RPC__deref_out_opt HSTRING *selector);
        
        END_INTERFACE
    } __x_ABI_CWindows_CDevices_CPortable_CIStorageDeviceStaticsVtbl;

    interface __x_ABI_CWindows_CDevices_CPortable_CIStorageDeviceStatics
    {
        CONST_VTBL struct __x_ABI_CWindows_CDevices_CPortable_CIStorageDeviceStaticsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CWindows_CDevices_CPortable_CIStorageDeviceStatics_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CWindows_CDevices_CPortable_CIStorageDeviceStatics_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CWindows_CDevices_CPortable_CIStorageDeviceStatics_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CWindows_CDevices_CPortable_CIStorageDeviceStatics_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CWindows_CDevices_CPortable_CIStorageDeviceStatics_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CWindows_CDevices_CPortable_CIStorageDeviceStatics_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CWindows_CDevices_CPortable_CIStorageDeviceStatics_FromId(This,deviceId,deviceRoot)	\
    ( (This)->lpVtbl -> FromId(This,deviceId,deviceRoot) ) 

#define __x_ABI_CWindows_CDevices_CPortable_CIStorageDeviceStatics_GetDeviceSelector(This,selector)	\
    ( (This)->lpVtbl -> GetDeviceSelector(This,selector) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CWindows_CDevices_CPortable_CIStorageDeviceStatics_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Edevices2Eportable_0000_0002 */
/* [local] */ 

#ifndef RUNTIMECLASS_Windows_Devices_Portable_ServiceDevice_DEFINED
#define RUNTIMECLASS_Windows_Devices_Portable_ServiceDevice_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Portable_ServiceDevice[] = L"Windows.Devices.Portable.ServiceDevice";
#endif
#ifndef RUNTIMECLASS_Windows_Devices_Portable_StorageDevice_DEFINED
#define RUNTIMECLASS_Windows_Devices_Portable_StorageDevice_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Portable_StorageDevice[] = L"Windows.Devices.Portable.StorageDevice";
#endif


/* interface __MIDL_itf_windows2Edevices2Eportable_0000_0002 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Eportable_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Eportable_0000_0002_v0_0_s_ifspec;

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


