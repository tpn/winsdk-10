

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

#ifndef __windows2Edevices2Ebackground_h__
#define __windows2Edevices2Ebackground_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef ____x_ABI_CWindows_CDevices_CBackground_CIDeviceServicingDetails_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CBackground_CIDeviceServicingDetails_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CBackground_CIDeviceServicingDetails __x_ABI_CWindows_CDevices_CBackground_CIDeviceServicingDetails;

#ifdef __cplusplus
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Background {
                interface IDeviceServicingDetails;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CWindows_CDevices_CBackground_CIDeviceServicingDetails_FWD_DEFINED__ */


#ifndef ____x_ABI_CWindows_CDevices_CBackground_CIDeviceUseDetails_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CBackground_CIDeviceUseDetails_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CBackground_CIDeviceUseDetails __x_ABI_CWindows_CDevices_CBackground_CIDeviceUseDetails;

#ifdef __cplusplus
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Background {
                interface IDeviceUseDetails;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CWindows_CDevices_CBackground_CIDeviceUseDetails_FWD_DEFINED__ */


/* header files for imported files */
#include "inspectable.h"
#include "AsyncInfo.h"
#include "EventToken.h"
#include "Windows.Foundation.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_windows2Edevices2Ebackground_0000_0000 */
/* [local] */ 

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


#ifdef __cplusplus
namespace ABI {
namespace Windows {
namespace Devices {
namespace Background {
class DeviceServicingDetails;
} /*Background*/
} /*Devices*/
} /*Windows*/
}
#endif
#ifdef __cplusplus
namespace ABI {
namespace Windows {
namespace Devices {
namespace Background {
class DeviceUseDetails;
} /*Background*/
} /*Devices*/
} /*Windows*/
}
#endif
#if !defined(____x_ABI_CWindows_CDevices_CBackground_CIDeviceServicingDetails_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Background_IDeviceServicingDetails[] = L"Windows.Devices.Background.IDeviceServicingDetails";
#endif /* !defined(____x_ABI_CWindows_CDevices_CBackground_CIDeviceServicingDetails_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_windows2Edevices2Ebackground_0000_0000 */
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





extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Ebackground_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Ebackground_0000_0000_v0_0_s_ifspec;

#ifndef ____x_ABI_CWindows_CDevices_CBackground_CIDeviceServicingDetails_INTERFACE_DEFINED__
#define ____x_ABI_CWindows_CDevices_CBackground_CIDeviceServicingDetails_INTERFACE_DEFINED__

/* interface __x_ABI_CWindows_CDevices_CBackground_CIDeviceServicingDetails */
/* [uuid][object] */ 



/* interface ABI::Windows::Devices::Background::IDeviceServicingDetails */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBackground_CIDeviceServicingDetails;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Windows {
            namespace Devices {
                namespace Background {
                    
                    MIDL_INTERFACE("4AABEE29-2344-4AC4-8527-4A8EF6905645")
                    IDeviceServicingDetails : public IInspectable
                    {
                    public:
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_DeviceId( 
                            /* [out][retval] */ __RPC__deref_out_opt HSTRING *value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Arguments( 
                            /* [out][retval] */ __RPC__deref_out_opt HSTRING *value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ExpectedDuration( 
                            /* [out][retval] */ __RPC__out ABI::Windows::Foundation::TimeSpan *value) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_IDeviceServicingDetails = __uuidof(IDeviceServicingDetails);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CWindows_CDevices_CBackground_CIDeviceServicingDetailsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CWindows_CDevices_CBackground_CIDeviceServicingDetails * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CWindows_CDevices_CBackground_CIDeviceServicingDetails * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CWindows_CDevices_CBackground_CIDeviceServicingDetails * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CWindows_CDevices_CBackground_CIDeviceServicingDetails * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CWindows_CDevices_CBackground_CIDeviceServicingDetails * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CWindows_CDevices_CBackground_CIDeviceServicingDetails * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_DeviceId )( 
            __RPC__in __x_ABI_CWindows_CDevices_CBackground_CIDeviceServicingDetails * This,
            /* [out][retval] */ __RPC__deref_out_opt HSTRING *value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Arguments )( 
            __RPC__in __x_ABI_CWindows_CDevices_CBackground_CIDeviceServicingDetails * This,
            /* [out][retval] */ __RPC__deref_out_opt HSTRING *value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ExpectedDuration )( 
            __RPC__in __x_ABI_CWindows_CDevices_CBackground_CIDeviceServicingDetails * This,
            /* [out][retval] */ __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan *value);
        
        END_INTERFACE
    } __x_ABI_CWindows_CDevices_CBackground_CIDeviceServicingDetailsVtbl;

    interface __x_ABI_CWindows_CDevices_CBackground_CIDeviceServicingDetails
    {
        CONST_VTBL struct __x_ABI_CWindows_CDevices_CBackground_CIDeviceServicingDetailsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CWindows_CDevices_CBackground_CIDeviceServicingDetails_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CWindows_CDevices_CBackground_CIDeviceServicingDetails_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CWindows_CDevices_CBackground_CIDeviceServicingDetails_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CWindows_CDevices_CBackground_CIDeviceServicingDetails_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CWindows_CDevices_CBackground_CIDeviceServicingDetails_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CWindows_CDevices_CBackground_CIDeviceServicingDetails_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CWindows_CDevices_CBackground_CIDeviceServicingDetails_get_DeviceId(This,value)	\
    ( (This)->lpVtbl -> get_DeviceId(This,value) ) 

#define __x_ABI_CWindows_CDevices_CBackground_CIDeviceServicingDetails_get_Arguments(This,value)	\
    ( (This)->lpVtbl -> get_Arguments(This,value) ) 

#define __x_ABI_CWindows_CDevices_CBackground_CIDeviceServicingDetails_get_ExpectedDuration(This,value)	\
    ( (This)->lpVtbl -> get_ExpectedDuration(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CWindows_CDevices_CBackground_CIDeviceServicingDetails_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Edevices2Ebackground_0000_0001 */
/* [local] */ 

#if !defined(____x_ABI_CWindows_CDevices_CBackground_CIDeviceUseDetails_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Background_IDeviceUseDetails[] = L"Windows.Devices.Background.IDeviceUseDetails";
#endif /* !defined(____x_ABI_CWindows_CDevices_CBackground_CIDeviceUseDetails_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_windows2Edevices2Ebackground_0000_0001 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Ebackground_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Ebackground_0000_0001_v0_0_s_ifspec;

#ifndef ____x_ABI_CWindows_CDevices_CBackground_CIDeviceUseDetails_INTERFACE_DEFINED__
#define ____x_ABI_CWindows_CDevices_CBackground_CIDeviceUseDetails_INTERFACE_DEFINED__

/* interface __x_ABI_CWindows_CDevices_CBackground_CIDeviceUseDetails */
/* [uuid][object] */ 



/* interface ABI::Windows::Devices::Background::IDeviceUseDetails */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBackground_CIDeviceUseDetails;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Windows {
            namespace Devices {
                namespace Background {
                    
                    MIDL_INTERFACE("7D565141-557E-4154-B994-E4F7A11FB323")
                    IDeviceUseDetails : public IInspectable
                    {
                    public:
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_DeviceId( 
                            /* [out][retval] */ __RPC__deref_out_opt HSTRING *value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Arguments( 
                            /* [out][retval] */ __RPC__deref_out_opt HSTRING *value) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_IDeviceUseDetails = __uuidof(IDeviceUseDetails);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CWindows_CDevices_CBackground_CIDeviceUseDetailsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CWindows_CDevices_CBackground_CIDeviceUseDetails * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CWindows_CDevices_CBackground_CIDeviceUseDetails * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CWindows_CDevices_CBackground_CIDeviceUseDetails * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CWindows_CDevices_CBackground_CIDeviceUseDetails * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CWindows_CDevices_CBackground_CIDeviceUseDetails * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CWindows_CDevices_CBackground_CIDeviceUseDetails * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_DeviceId )( 
            __RPC__in __x_ABI_CWindows_CDevices_CBackground_CIDeviceUseDetails * This,
            /* [out][retval] */ __RPC__deref_out_opt HSTRING *value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Arguments )( 
            __RPC__in __x_ABI_CWindows_CDevices_CBackground_CIDeviceUseDetails * This,
            /* [out][retval] */ __RPC__deref_out_opt HSTRING *value);
        
        END_INTERFACE
    } __x_ABI_CWindows_CDevices_CBackground_CIDeviceUseDetailsVtbl;

    interface __x_ABI_CWindows_CDevices_CBackground_CIDeviceUseDetails
    {
        CONST_VTBL struct __x_ABI_CWindows_CDevices_CBackground_CIDeviceUseDetailsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CWindows_CDevices_CBackground_CIDeviceUseDetails_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CWindows_CDevices_CBackground_CIDeviceUseDetails_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CWindows_CDevices_CBackground_CIDeviceUseDetails_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CWindows_CDevices_CBackground_CIDeviceUseDetails_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CWindows_CDevices_CBackground_CIDeviceUseDetails_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CWindows_CDevices_CBackground_CIDeviceUseDetails_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CWindows_CDevices_CBackground_CIDeviceUseDetails_get_DeviceId(This,value)	\
    ( (This)->lpVtbl -> get_DeviceId(This,value) ) 

#define __x_ABI_CWindows_CDevices_CBackground_CIDeviceUseDetails_get_Arguments(This,value)	\
    ( (This)->lpVtbl -> get_Arguments(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CWindows_CDevices_CBackground_CIDeviceUseDetails_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Edevices2Ebackground_0000_0002 */
/* [local] */ 

#ifndef RUNTIMECLASS_Windows_Devices_Background_DeviceServicingDetails_DEFINED
#define RUNTIMECLASS_Windows_Devices_Background_DeviceServicingDetails_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Background_DeviceServicingDetails[] = L"Windows.Devices.Background.DeviceServicingDetails";
#endif
#ifndef RUNTIMECLASS_Windows_Devices_Background_DeviceUseDetails_DEFINED
#define RUNTIMECLASS_Windows_Devices_Background_DeviceUseDetails_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Background_DeviceUseDetails[] = L"Windows.Devices.Background.DeviceUseDetails";
#endif


/* interface __MIDL_itf_windows2Edevices2Ebackground_0000_0002 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Ebackground_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Ebackground_0000_0002_v0_0_s_ifspec;

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


