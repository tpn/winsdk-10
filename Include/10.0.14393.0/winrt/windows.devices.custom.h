

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

#ifndef __windows2Edevices2Ecustom_h__
#define __windows2Edevices2Ecustom_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef ____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CCustom__CCustomDevice_FWD_DEFINED__
#define ____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CCustom__CCustomDevice_FWD_DEFINED__
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CCustom__CCustomDevice __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CCustom__CCustomDevice;

#endif 	/* ____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CCustom__CCustomDevice_FWD_DEFINED__ */


#ifndef ____FIAsyncOperation_1_Windows__CDevices__CCustom__CCustomDevice_FWD_DEFINED__
#define ____FIAsyncOperation_1_Windows__CDevices__CCustom__CCustomDevice_FWD_DEFINED__
typedef interface __FIAsyncOperation_1_Windows__CDevices__CCustom__CCustomDevice __FIAsyncOperation_1_Windows__CDevices__CCustom__CCustomDevice;

#endif 	/* ____FIAsyncOperation_1_Windows__CDevices__CCustom__CCustomDevice_FWD_DEFINED__ */


#ifndef ____x_ABI_CWindows_CDevices_CCustom_CICustomDevice_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CCustom_CICustomDevice_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CCustom_CICustomDevice __x_ABI_CWindows_CDevices_CCustom_CICustomDevice;

#ifdef __cplusplus
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Custom {
                interface ICustomDevice;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CWindows_CDevices_CCustom_CICustomDevice_FWD_DEFINED__ */


#ifndef ____x_ABI_CWindows_CDevices_CCustom_CICustomDeviceStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CCustom_CICustomDeviceStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CCustom_CICustomDeviceStatics __x_ABI_CWindows_CDevices_CCustom_CICustomDeviceStatics;

#ifdef __cplusplus
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Custom {
                interface ICustomDeviceStatics;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CWindows_CDevices_CCustom_CICustomDeviceStatics_FWD_DEFINED__ */


#ifndef ____x_ABI_CWindows_CDevices_CCustom_CIIOControlCode_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CCustom_CIIOControlCode_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CCustom_CIIOControlCode __x_ABI_CWindows_CDevices_CCustom_CIIOControlCode;

#ifdef __cplusplus
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Custom {
                interface IIOControlCode;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CWindows_CDevices_CCustom_CIIOControlCode_FWD_DEFINED__ */


#ifndef ____x_ABI_CWindows_CDevices_CCustom_CIIOControlCodeFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CCustom_CIIOControlCodeFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CCustom_CIIOControlCodeFactory __x_ABI_CWindows_CDevices_CCustom_CIIOControlCodeFactory;

#ifdef __cplusplus
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Custom {
                interface IIOControlCodeFactory;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CWindows_CDevices_CCustom_CIIOControlCodeFactory_FWD_DEFINED__ */


#ifndef ____x_ABI_CWindows_CDevices_CCustom_CIKnownDeviceTypesStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CCustom_CIKnownDeviceTypesStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CCustom_CIKnownDeviceTypesStatics __x_ABI_CWindows_CDevices_CCustom_CIKnownDeviceTypesStatics;

#ifdef __cplusplus
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Custom {
                interface IKnownDeviceTypesStatics;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CWindows_CDevices_CCustom_CIKnownDeviceTypesStatics_FWD_DEFINED__ */


/* header files for imported files */
#include "inspectable.h"
#include "AsyncInfo.h"
#include "EventToken.h"
#include "Windows.Foundation.h"
#include "Windows.Storage.Streams.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_windows2Edevices2Ecustom_0000_0000 */
/* [local] */ 

#ifdef __cplusplus
} /*extern "C"*/ 
#endif
#include <windows.foundation.collections.h>
#ifdef __cplusplus
extern "C" {
#endif
#ifdef __cplusplus
namespace ABI {
namespace Windows {
namespace Devices {
namespace Custom {
class CustomDevice;
} /*Custom*/
} /*Devices*/
} /*Windows*/
}
#endif

#ifdef __cplusplus
namespace ABI {
namespace Windows {
namespace Devices {
namespace Custom {
interface ICustomDevice;
} /*Custom*/
} /*Devices*/
} /*Windows*/
}
#endif


/* interface __MIDL_itf_windows2Edevices2Ecustom_0000_0000 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Ecustom_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Ecustom_0000_0000_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Edevices2Ecustom2Eidl_0000_3109 */




/* interface __MIDL_itf_windows2Edevices2Ecustom2Eidl_0000_3109 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Ecustom2Eidl_0000_3109_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Ecustom2Eidl_0000_3109_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Edevices2Ecustom_0000_0001 */
/* [local] */ 

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CCustom__CCustomDevice_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CCustom__CCustomDevice_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("1fdd39b0-e0e5-5c59-b27d-a549b1075ce9"))
IAsyncOperationCompletedHandler<ABI::Windows::Devices::Custom::CustomDevice*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Custom::CustomDevice*, ABI::Windows::Devices::Custom::ICustomDevice*>> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Devices.Custom.CustomDevice>"; }
};
typedef IAsyncOperationCompletedHandler<ABI::Windows::Devices::Custom::CustomDevice*> __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CCustom__CCustomDevice_t;
#define ____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CCustom__CCustomDevice_FWD_DEFINED__
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CCustom__CCustomDevice ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CDevices__CCustom__CCustomDevice_t

/* ABI */ } /* Windows */ } /* Foundation */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CCustom__CCustomDevice_USE */


/* interface __MIDL_itf_windows2Edevices2Ecustom_0000_0001 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Ecustom_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Ecustom_0000_0001_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Edevices2Ecustom2Eidl_0000_3110 */




/* interface __MIDL_itf_windows2Edevices2Ecustom2Eidl_0000_3110 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Ecustom2Eidl_0000_3110_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Ecustom2Eidl_0000_3110_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Edevices2Ecustom_0000_0002 */
/* [local] */ 

#ifndef DEF___FIAsyncOperation_1_Windows__CDevices__CCustom__CCustomDevice_USE
#define DEF___FIAsyncOperation_1_Windows__CDevices__CCustom__CCustomDevice_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("2a6344aa-0568-548e-a1a2-b6bb451d228c"))
IAsyncOperation<ABI::Windows::Devices::Custom::CustomDevice*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Custom::CustomDevice*, ABI::Windows::Devices::Custom::ICustomDevice*>> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.IAsyncOperation`1<Windows.Devices.Custom.CustomDevice>"; }
};
typedef IAsyncOperation<ABI::Windows::Devices::Custom::CustomDevice*> __FIAsyncOperation_1_Windows__CDevices__CCustom__CCustomDevice_t;
#define ____FIAsyncOperation_1_Windows__CDevices__CCustom__CCustomDevice_FWD_DEFINED__
#define __FIAsyncOperation_1_Windows__CDevices__CCustom__CCustomDevice ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CDevices__CCustom__CCustomDevice_t

/* ABI */ } /* Windows */ } /* Foundation */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIAsyncOperation_1_Windows__CDevices__CCustom__CCustomDevice_USE */


/* interface __MIDL_itf_windows2Edevices2Ecustom_0000_0002 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Ecustom_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Ecustom_0000_0002_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Edevices2Ecustom2Eidl_0000_3111 */




/* interface __MIDL_itf_windows2Edevices2Ecustom2Eidl_0000_3111 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Ecustom2Eidl_0000_3111_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Ecustom2Eidl_0000_3111_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Edevices2Ecustom_0000_0003 */
/* [local] */ 

#ifndef DEF___FIAsyncOperationCompletedHandler_1_UINT32_USE
#define DEF___FIAsyncOperationCompletedHandler_1_UINT32_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("9343b6e7-e3d2-5e4a-ab2d-2bce4919a6a4"))
IAsyncOperationCompletedHandler<UINT32> : IAsyncOperationCompletedHandler_impl<UINT32> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.AsyncOperationCompletedHandler`1<UInt32>"; }
};
typedef IAsyncOperationCompletedHandler<UINT32> __FIAsyncOperationCompletedHandler_1_UINT32_t;
#define ____FIAsyncOperationCompletedHandler_1_UINT32_FWD_DEFINED__
#define __FIAsyncOperationCompletedHandler_1_UINT32 ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_UINT32_t

/* ABI */ } /* Windows */ } /* Foundation */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIAsyncOperationCompletedHandler_1_UINT32_USE */


/* interface __MIDL_itf_windows2Edevices2Ecustom_0000_0003 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Ecustom_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Ecustom_0000_0003_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Edevices2Ecustom2Eidl_0000_3112 */




/* interface __MIDL_itf_windows2Edevices2Ecustom2Eidl_0000_3112 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Ecustom2Eidl_0000_3112_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Ecustom2Eidl_0000_3112_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Edevices2Ecustom_0000_0004 */
/* [local] */ 

#ifndef DEF___FIAsyncOperation_1_UINT32_USE
#define DEF___FIAsyncOperation_1_UINT32_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("ef60385f-be78-584b-aaef-7829ada2b0de"))
IAsyncOperation<UINT32> : IAsyncOperation_impl<UINT32> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.IAsyncOperation`1<UInt32>"; }
};
typedef IAsyncOperation<UINT32> __FIAsyncOperation_1_UINT32_t;
#define ____FIAsyncOperation_1_UINT32_FWD_DEFINED__
#define __FIAsyncOperation_1_UINT32 ABI::Windows::Foundation::__FIAsyncOperation_1_UINT32_t

/* ABI */ } /* Windows */ } /* Foundation */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIAsyncOperation_1_UINT32_USE */


/* interface __MIDL_itf_windows2Edevices2Ecustom_0000_0004 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Ecustom_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Ecustom_0000_0004_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Edevices2Ecustom2Eidl_0000_3113 */




/* interface __MIDL_itf_windows2Edevices2Ecustom2Eidl_0000_3113 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Ecustom2Eidl_0000_3113_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Ecustom2Eidl_0000_3113_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Edevices2Ecustom_0000_0005 */
/* [local] */ 

#ifndef DEF___FIAsyncOperationCompletedHandler_1_boolean_USE
#define DEF___FIAsyncOperationCompletedHandler_1_boolean_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("c1d3d1a2-ae17-5a5f-b5a2-bdcc8844889a"))
IAsyncOperationCompletedHandler<bool> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<bool, boolean>> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Boolean>"; }
};
typedef IAsyncOperationCompletedHandler<bool> __FIAsyncOperationCompletedHandler_1_boolean_t;
#define ____FIAsyncOperationCompletedHandler_1_boolean_FWD_DEFINED__
#define __FIAsyncOperationCompletedHandler_1_boolean ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_boolean_t

/* ABI */ } /* Windows */ } /* Foundation */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIAsyncOperationCompletedHandler_1_boolean_USE */


/* interface __MIDL_itf_windows2Edevices2Ecustom_0000_0005 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Ecustom_0000_0005_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Ecustom_0000_0005_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Edevices2Ecustom2Eidl_0000_3114 */




/* interface __MIDL_itf_windows2Edevices2Ecustom2Eidl_0000_3114 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Ecustom2Eidl_0000_3114_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Ecustom2Eidl_0000_3114_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Edevices2Ecustom_0000_0006 */
/* [local] */ 

#ifndef DEF___FIAsyncOperation_1_boolean_USE
#define DEF___FIAsyncOperation_1_boolean_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("cdb5efb3-5788-509d-9be1-71ccb8a3362a"))
IAsyncOperation<bool> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<bool, boolean>> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.IAsyncOperation`1<Boolean>"; }
};
typedef IAsyncOperation<bool> __FIAsyncOperation_1_boolean_t;
#define ____FIAsyncOperation_1_boolean_FWD_DEFINED__
#define __FIAsyncOperation_1_boolean ABI::Windows::Foundation::__FIAsyncOperation_1_boolean_t

/* ABI */ } /* Windows */ } /* Foundation */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIAsyncOperation_1_boolean_USE */
#if defined(__cplusplus)
}
#endif // defined(__cplusplus)
#include <Windows.Foundation.h>
#if !defined(__windows2Estorage2Estreams_h__)
#include <Windows.Storage.Streams.h>
#endif // !defined(__windows2Estorage2Estreams_h__)
#if defined(__cplusplus)
extern "C" {
#endif // defined(__cplusplus)



#if !defined(__cplusplus)
#if !defined(__cplusplus)

typedef enum __x_ABI_CWindows_CDevices_CCustom_CDeviceAccessMode __x_ABI_CWindows_CDevices_CCustom_CDeviceAccessMode;


#endif /* end if !defined(__cplusplus) */


#endif
#if !defined(__cplusplus)
#if !defined(__cplusplus)

typedef enum __x_ABI_CWindows_CDevices_CCustom_CDeviceSharingMode __x_ABI_CWindows_CDevices_CCustom_CDeviceSharingMode;


#endif /* end if !defined(__cplusplus) */


#endif
#if !defined(__cplusplus)
#if !defined(__cplusplus)

typedef enum __x_ABI_CWindows_CDevices_CCustom_CIOControlAccessMode __x_ABI_CWindows_CDevices_CCustom_CIOControlAccessMode;


#endif /* end if !defined(__cplusplus) */


#endif
#if !defined(__cplusplus)
#if !defined(__cplusplus)

typedef enum __x_ABI_CWindows_CDevices_CCustom_CIOControlBufferingMethod __x_ABI_CWindows_CDevices_CCustom_CIOControlBufferingMethod;


#endif /* end if !defined(__cplusplus) */


#endif




#ifdef __cplusplus
namespace ABI {
namespace Windows {
namespace Devices {
namespace Custom {
class IOControlCode;
} /*Custom*/
} /*Devices*/
} /*Windows*/
}
#endif


/* interface __MIDL_itf_windows2Edevices2Ecustom_0000_0006 */
/* [local] */ 





#ifdef __cplusplus

} /* end extern "C" */
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Custom {
                
                typedef enum DeviceAccessMode DeviceAccessMode;
                
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
            namespace Custom {
                
                typedef enum DeviceSharingMode DeviceSharingMode;
                
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
            namespace Custom {
                
                typedef enum IOControlAccessMode IOControlAccessMode;
                
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
            namespace Custom {
                
                typedef enum IOControlBufferingMethod IOControlBufferingMethod;
                
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

extern "C" { 
#endif







extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Ecustom_0000_0006_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Ecustom_0000_0006_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Edevices2Ecustom2Eidl_0000_3115 */




/* interface __MIDL_itf_windows2Edevices2Ecustom2Eidl_0000_3115 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Ecustom2Eidl_0000_3115_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Ecustom2Eidl_0000_3115_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Edevices2Ecustom_0000_0007 */
/* [local] */ 

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CCustom__CCustomDevice
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CCustom__CCustomDevice
#if !defined(__cplusplus) || defined(RO_NO_TEMPLATE_NAME)



/* interface __MIDL_itf_windows2Edevices2Ecustom_0000_0007 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Ecustom_0000_0007_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Ecustom_0000_0007_v0_0_s_ifspec;

#ifndef ____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CCustom__CCustomDevice_INTERFACE_DEFINED__
#define ____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CCustom__CCustomDevice_INTERFACE_DEFINED__

/* interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CCustom__CCustomDevice */
/* [unique][uuid][object] */ 



/* interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CCustom__CCustomDevice */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CCustom__CCustomDevice;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1fdd39b0-e0e5-5c59-b27d-a549b1075ce9")
    __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CCustom__CCustomDevice : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Invoke( 
            /* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CCustom__CCustomDevice *asyncInfo,
            /* [in] */ AsyncStatus status) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CCustom__CCustomDeviceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CCustom__CCustomDevice * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CCustom__CCustomDevice * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CCustom__CCustomDevice * This);
        
        HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            __RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CCustom__CCustomDevice * This,
            /* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CCustom__CCustomDevice *asyncInfo,
            /* [in] */ AsyncStatus status);
        
        END_INTERFACE
    } __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CCustom__CCustomDeviceVtbl;

    interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CCustom__CCustomDevice
    {
        CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CCustom__CCustomDeviceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CCustom__CCustomDevice_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CCustom__CCustomDevice_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CCustom__CCustomDevice_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CCustom__CCustomDevice_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CCustom__CCustomDevice_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Edevices2Ecustom_0000_0008 */
/* [local] */ 

#endif /* pinterface */
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CCustom__CCustomDevice */


/* interface __MIDL_itf_windows2Edevices2Ecustom_0000_0008 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Ecustom_0000_0008_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Ecustom_0000_0008_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Edevices2Ecustom2Eidl_0000_3116 */




/* interface __MIDL_itf_windows2Edevices2Ecustom2Eidl_0000_3116 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Ecustom2Eidl_0000_3116_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Ecustom2Eidl_0000_3116_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Edevices2Ecustom_0000_0009 */
/* [local] */ 

#ifndef DEF___FIAsyncOperation_1_Windows__CDevices__CCustom__CCustomDevice
#define DEF___FIAsyncOperation_1_Windows__CDevices__CCustom__CCustomDevice
#if !defined(__cplusplus) || defined(RO_NO_TEMPLATE_NAME)


/* interface __MIDL_itf_windows2Edevices2Ecustom_0000_0009 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Ecustom_0000_0009_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Ecustom_0000_0009_v0_0_s_ifspec;

#ifndef ____FIAsyncOperation_1_Windows__CDevices__CCustom__CCustomDevice_INTERFACE_DEFINED__
#define ____FIAsyncOperation_1_Windows__CDevices__CCustom__CCustomDevice_INTERFACE_DEFINED__

/* interface __FIAsyncOperation_1_Windows__CDevices__CCustom__CCustomDevice */
/* [unique][uuid][object] */ 



/* interface __FIAsyncOperation_1_Windows__CDevices__CCustom__CCustomDevice */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CCustom__CCustomDevice;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2a6344aa-0568-548e-a1a2-b6bb451d228c")
    __FIAsyncOperation_1_Windows__CDevices__CCustom__CCustomDevice : public IInspectable
    {
    public:
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Completed( 
            /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CCustom__CCustomDevice *handler) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Completed( 
            /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CCustom__CCustomDevice **handler) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetResults( 
            /* [retval][out] */ __RPC__deref_out_opt ABI::Windows::Devices::Custom::ICustomDevice **results) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __FIAsyncOperation_1_Windows__CDevices__CCustom__CCustomDeviceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __FIAsyncOperation_1_Windows__CDevices__CCustom__CCustomDevice * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __FIAsyncOperation_1_Windows__CDevices__CCustom__CCustomDevice * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __FIAsyncOperation_1_Windows__CDevices__CCustom__CCustomDevice * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __FIAsyncOperation_1_Windows__CDevices__CCustom__CCustomDevice * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __FIAsyncOperation_1_Windows__CDevices__CCustom__CCustomDevice * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __FIAsyncOperation_1_Windows__CDevices__CCustom__CCustomDevice * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )( 
            __RPC__in __FIAsyncOperation_1_Windows__CDevices__CCustom__CCustomDevice * This,
            /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CCustom__CCustomDevice *handler);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )( 
            __RPC__in __FIAsyncOperation_1_Windows__CDevices__CCustom__CCustomDevice * This,
            /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CCustom__CCustomDevice **handler);
        
        HRESULT ( STDMETHODCALLTYPE *GetResults )( 
            __RPC__in __FIAsyncOperation_1_Windows__CDevices__CCustom__CCustomDevice * This,
            /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CCustom_CICustomDevice **results);
        
        END_INTERFACE
    } __FIAsyncOperation_1_Windows__CDevices__CCustom__CCustomDeviceVtbl;

    interface __FIAsyncOperation_1_Windows__CDevices__CCustom__CCustomDevice
    {
        CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CCustom__CCustomDeviceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __FIAsyncOperation_1_Windows__CDevices__CCustom__CCustomDevice_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIAsyncOperation_1_Windows__CDevices__CCustom__CCustomDevice_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIAsyncOperation_1_Windows__CDevices__CCustom__CCustomDevice_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIAsyncOperation_1_Windows__CDevices__CCustom__CCustomDevice_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIAsyncOperation_1_Windows__CDevices__CCustom__CCustomDevice_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIAsyncOperation_1_Windows__CDevices__CCustom__CCustomDevice_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIAsyncOperation_1_Windows__CDevices__CCustom__CCustomDevice_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 

#define __FIAsyncOperation_1_Windows__CDevices__CCustom__CCustomDevice_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 

#define __FIAsyncOperation_1_Windows__CDevices__CCustom__CCustomDevice_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____FIAsyncOperation_1_Windows__CDevices__CCustom__CCustomDevice_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Edevices2Ecustom_0000_0010 */
/* [local] */ 

#endif /* pinterface */
#endif /* DEF___FIAsyncOperation_1_Windows__CDevices__CCustom__CCustomDevice */
#if !defined(__cplusplus)

#if !defined(__cplusplus)
/* [v1_enum] */ 
enum __x_ABI_CWindows_CDevices_CCustom_CDeviceAccessMode
    {
        DeviceAccessMode_Read	= 0,
        DeviceAccessMode_Write	= 1,
        DeviceAccessMode_ReadWrite	= 2
    } ;
#endif /* end if !defined(__cplusplus) */

#endif
#if !defined(__cplusplus)

#if !defined(__cplusplus)
/* [v1_enum] */ 
enum __x_ABI_CWindows_CDevices_CCustom_CDeviceSharingMode
    {
        DeviceSharingMode_Shared	= 0,
        DeviceSharingMode_Exclusive	= 1
    } ;
#endif /* end if !defined(__cplusplus) */

#endif
#if !defined(__cplusplus)

#if !defined(__cplusplus)
/* [v1_enum] */ 
enum __x_ABI_CWindows_CDevices_CCustom_CIOControlAccessMode
    {
        IOControlAccessMode_Any	= 0,
        IOControlAccessMode_Read	= 1,
        IOControlAccessMode_Write	= 2,
        IOControlAccessMode_ReadWrite	= 3
    } ;
#endif /* end if !defined(__cplusplus) */

#endif
#if !defined(__cplusplus)

#if !defined(__cplusplus)
/* [v1_enum] */ 
enum __x_ABI_CWindows_CDevices_CCustom_CIOControlBufferingMethod
    {
        IOControlBufferingMethod_Buffered	= 0,
        IOControlBufferingMethod_DirectInput	= 1,
        IOControlBufferingMethod_DirectOutput	= 2,
        IOControlBufferingMethod_Neither	= 3
    } ;
#endif /* end if !defined(__cplusplus) */

#endif
#if !defined(____x_ABI_CWindows_CDevices_CCustom_CICustomDevice_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Custom_ICustomDevice[] = L"Windows.Devices.Custom.ICustomDevice";
#endif /* !defined(____x_ABI_CWindows_CDevices_CCustom_CICustomDevice_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_windows2Edevices2Ecustom_0000_0010 */
/* [local] */ 

#ifdef __cplusplus
} /* end extern "C" */
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Custom {
                
                /* [v1_enum] */ 
                enum DeviceAccessMode
                    {
                        DeviceAccessMode_Read	= 0,
                        DeviceAccessMode_Write	= 1,
                        DeviceAccessMode_ReadWrite	= 2
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
        namespace Devices {
            namespace Custom {
                
                /* [v1_enum] */ 
                enum DeviceSharingMode
                    {
                        DeviceSharingMode_Shared	= 0,
                        DeviceSharingMode_Exclusive	= 1
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
        namespace Devices {
            namespace Custom {
                
                /* [v1_enum] */ 
                enum IOControlAccessMode
                    {
                        IOControlAccessMode_Any	= 0,
                        IOControlAccessMode_Read	= 1,
                        IOControlAccessMode_Write	= 2,
                        IOControlAccessMode_ReadWrite	= 3
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
        namespace Devices {
            namespace Custom {
                
                /* [v1_enum] */ 
                enum IOControlBufferingMethod
                    {
                        IOControlBufferingMethod_Buffered	= 0,
                        IOControlBufferingMethod_DirectInput	= 1,
                        IOControlBufferingMethod_DirectOutput	= 2,
                        IOControlBufferingMethod_Neither	= 3
                    } ;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

extern "C" { 
#endif



extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Ecustom_0000_0010_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Ecustom_0000_0010_v0_0_s_ifspec;

#ifndef ____x_ABI_CWindows_CDevices_CCustom_CICustomDevice_INTERFACE_DEFINED__
#define ____x_ABI_CWindows_CDevices_CCustom_CICustomDevice_INTERFACE_DEFINED__

/* interface __x_ABI_CWindows_CDevices_CCustom_CICustomDevice */
/* [uuid][object] */ 



/* interface ABI::Windows::Devices::Custom::ICustomDevice */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CCustom_CICustomDevice;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Windows {
            namespace Devices {
                namespace Custom {
                    
                    MIDL_INTERFACE("DD30251F-C48B-43BD-BCB1-DEC88F15143E")
                    ICustomDevice : public IInspectable
                    {
                    public:
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_InputStream( 
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Windows::Storage::Streams::IInputStream **value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_OutputStream( 
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Windows::Storage::Streams::IOutputStream **value) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE SendIOControlAsync( 
                            /* [in] */ __RPC__in_opt ABI::Windows::Devices::Custom::IIOControlCode *ioControlCode,
                            /* [in] */ __RPC__in_opt ABI::Windows::Storage::Streams::IBuffer *inputBuffer,
                            /* [in] */ __RPC__in_opt ABI::Windows::Storage::Streams::IBuffer *outputBuffer,
                            /* [out][retval] */ __RPC__deref_out_opt __FIAsyncOperation_1_UINT32 **operation) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE TrySendIOControlAsync( 
                            /* [in] */ __RPC__in_opt ABI::Windows::Devices::Custom::IIOControlCode *ioControlCode,
                            /* [in] */ __RPC__in_opt ABI::Windows::Storage::Streams::IBuffer *inputBuffer,
                            /* [in] */ __RPC__in_opt ABI::Windows::Storage::Streams::IBuffer *outputBuffer,
                            /* [out][retval] */ __RPC__deref_out_opt __FIAsyncOperation_1_boolean **operation) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_ICustomDevice = __uuidof(ICustomDevice);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CWindows_CDevices_CCustom_CICustomDeviceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CWindows_CDevices_CCustom_CICustomDevice * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CWindows_CDevices_CCustom_CICustomDevice * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CWindows_CDevices_CCustom_CICustomDevice * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CWindows_CDevices_CCustom_CICustomDevice * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CWindows_CDevices_CCustom_CICustomDevice * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CWindows_CDevices_CCustom_CICustomDevice * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_InputStream )( 
            __RPC__in __x_ABI_CWindows_CDevices_CCustom_CICustomDevice * This,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIInputStream **value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_OutputStream )( 
            __RPC__in __x_ABI_CWindows_CDevices_CCustom_CICustomDevice * This,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIOutputStream **value);
        
        HRESULT ( STDMETHODCALLTYPE *SendIOControlAsync )( 
            __RPC__in __x_ABI_CWindows_CDevices_CCustom_CICustomDevice * This,
            /* [in] */ __RPC__in_opt __x_ABI_CWindows_CDevices_CCustom_CIIOControlCode *ioControlCode,
            /* [in] */ __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer *inputBuffer,
            /* [in] */ __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer *outputBuffer,
            /* [out][retval] */ __RPC__deref_out_opt __FIAsyncOperation_1_UINT32 **operation);
        
        HRESULT ( STDMETHODCALLTYPE *TrySendIOControlAsync )( 
            __RPC__in __x_ABI_CWindows_CDevices_CCustom_CICustomDevice * This,
            /* [in] */ __RPC__in_opt __x_ABI_CWindows_CDevices_CCustom_CIIOControlCode *ioControlCode,
            /* [in] */ __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer *inputBuffer,
            /* [in] */ __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer *outputBuffer,
            /* [out][retval] */ __RPC__deref_out_opt __FIAsyncOperation_1_boolean **operation);
        
        END_INTERFACE
    } __x_ABI_CWindows_CDevices_CCustom_CICustomDeviceVtbl;

    interface __x_ABI_CWindows_CDevices_CCustom_CICustomDevice
    {
        CONST_VTBL struct __x_ABI_CWindows_CDevices_CCustom_CICustomDeviceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CWindows_CDevices_CCustom_CICustomDevice_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CWindows_CDevices_CCustom_CICustomDevice_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CWindows_CDevices_CCustom_CICustomDevice_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CWindows_CDevices_CCustom_CICustomDevice_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CWindows_CDevices_CCustom_CICustomDevice_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CWindows_CDevices_CCustom_CICustomDevice_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CWindows_CDevices_CCustom_CICustomDevice_get_InputStream(This,value)	\
    ( (This)->lpVtbl -> get_InputStream(This,value) ) 

#define __x_ABI_CWindows_CDevices_CCustom_CICustomDevice_get_OutputStream(This,value)	\
    ( (This)->lpVtbl -> get_OutputStream(This,value) ) 

#define __x_ABI_CWindows_CDevices_CCustom_CICustomDevice_SendIOControlAsync(This,ioControlCode,inputBuffer,outputBuffer,operation)	\
    ( (This)->lpVtbl -> SendIOControlAsync(This,ioControlCode,inputBuffer,outputBuffer,operation) ) 

#define __x_ABI_CWindows_CDevices_CCustom_CICustomDevice_TrySendIOControlAsync(This,ioControlCode,inputBuffer,outputBuffer,operation)	\
    ( (This)->lpVtbl -> TrySendIOControlAsync(This,ioControlCode,inputBuffer,outputBuffer,operation) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CWindows_CDevices_CCustom_CICustomDevice_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Edevices2Ecustom_0000_0011 */
/* [local] */ 

#if !defined(____x_ABI_CWindows_CDevices_CCustom_CICustomDeviceStatics_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Custom_ICustomDeviceStatics[] = L"Windows.Devices.Custom.ICustomDeviceStatics";
#endif /* !defined(____x_ABI_CWindows_CDevices_CCustom_CICustomDeviceStatics_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_windows2Edevices2Ecustom_0000_0011 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Ecustom_0000_0011_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Ecustom_0000_0011_v0_0_s_ifspec;

#ifndef ____x_ABI_CWindows_CDevices_CCustom_CICustomDeviceStatics_INTERFACE_DEFINED__
#define ____x_ABI_CWindows_CDevices_CCustom_CICustomDeviceStatics_INTERFACE_DEFINED__

/* interface __x_ABI_CWindows_CDevices_CCustom_CICustomDeviceStatics */
/* [uuid][object] */ 



/* interface ABI::Windows::Devices::Custom::ICustomDeviceStatics */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CCustom_CICustomDeviceStatics;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Windows {
            namespace Devices {
                namespace Custom {
                    
                    MIDL_INTERFACE("C8220312-EF4C-46B1-A58E-EEB308DC8917")
                    ICustomDeviceStatics : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE GetDeviceSelector( 
                            /* [in] */ GUID classGuid,
                            /* [out][retval] */ __RPC__deref_out_opt HSTRING *value) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE FromIdAsync( 
                            /* [in] */ __RPC__in HSTRING deviceId,
                            /* [in] */ ABI::Windows::Devices::Custom::DeviceAccessMode desiredAccess,
                            /* [in] */ ABI::Windows::Devices::Custom::DeviceSharingMode sharingMode,
                            /* [out][retval] */ __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CCustom__CCustomDevice **operation) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_ICustomDeviceStatics = __uuidof(ICustomDeviceStatics);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CWindows_CDevices_CCustom_CICustomDeviceStaticsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CWindows_CDevices_CCustom_CICustomDeviceStatics * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CWindows_CDevices_CCustom_CICustomDeviceStatics * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CWindows_CDevices_CCustom_CICustomDeviceStatics * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CWindows_CDevices_CCustom_CICustomDeviceStatics * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CWindows_CDevices_CCustom_CICustomDeviceStatics * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CWindows_CDevices_CCustom_CICustomDeviceStatics * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *GetDeviceSelector )( 
            __RPC__in __x_ABI_CWindows_CDevices_CCustom_CICustomDeviceStatics * This,
            /* [in] */ GUID classGuid,
            /* [out][retval] */ __RPC__deref_out_opt HSTRING *value);
        
        HRESULT ( STDMETHODCALLTYPE *FromIdAsync )( 
            __RPC__in __x_ABI_CWindows_CDevices_CCustom_CICustomDeviceStatics * This,
            /* [in] */ __RPC__in HSTRING deviceId,
            /* [in] */ __x_ABI_CWindows_CDevices_CCustom_CDeviceAccessMode desiredAccess,
            /* [in] */ __x_ABI_CWindows_CDevices_CCustom_CDeviceSharingMode sharingMode,
            /* [out][retval] */ __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CCustom__CCustomDevice **operation);
        
        END_INTERFACE
    } __x_ABI_CWindows_CDevices_CCustom_CICustomDeviceStaticsVtbl;

    interface __x_ABI_CWindows_CDevices_CCustom_CICustomDeviceStatics
    {
        CONST_VTBL struct __x_ABI_CWindows_CDevices_CCustom_CICustomDeviceStaticsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CWindows_CDevices_CCustom_CICustomDeviceStatics_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CWindows_CDevices_CCustom_CICustomDeviceStatics_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CWindows_CDevices_CCustom_CICustomDeviceStatics_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CWindows_CDevices_CCustom_CICustomDeviceStatics_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CWindows_CDevices_CCustom_CICustomDeviceStatics_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CWindows_CDevices_CCustom_CICustomDeviceStatics_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CWindows_CDevices_CCustom_CICustomDeviceStatics_GetDeviceSelector(This,classGuid,value)	\
    ( (This)->lpVtbl -> GetDeviceSelector(This,classGuid,value) ) 

#define __x_ABI_CWindows_CDevices_CCustom_CICustomDeviceStatics_FromIdAsync(This,deviceId,desiredAccess,sharingMode,operation)	\
    ( (This)->lpVtbl -> FromIdAsync(This,deviceId,desiredAccess,sharingMode,operation) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CWindows_CDevices_CCustom_CICustomDeviceStatics_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Edevices2Ecustom_0000_0012 */
/* [local] */ 

#if !defined(____x_ABI_CWindows_CDevices_CCustom_CIIOControlCode_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Custom_IIOControlCode[] = L"Windows.Devices.Custom.IIOControlCode";
#endif /* !defined(____x_ABI_CWindows_CDevices_CCustom_CIIOControlCode_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_windows2Edevices2Ecustom_0000_0012 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Ecustom_0000_0012_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Ecustom_0000_0012_v0_0_s_ifspec;

#ifndef ____x_ABI_CWindows_CDevices_CCustom_CIIOControlCode_INTERFACE_DEFINED__
#define ____x_ABI_CWindows_CDevices_CCustom_CIIOControlCode_INTERFACE_DEFINED__

/* interface __x_ABI_CWindows_CDevices_CCustom_CIIOControlCode */
/* [uuid][object] */ 



/* interface ABI::Windows::Devices::Custom::IIOControlCode */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CCustom_CIIOControlCode;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Windows {
            namespace Devices {
                namespace Custom {
                    
                    MIDL_INTERFACE("0E9559E7-60C8-4375-A761-7F8808066C60")
                    IIOControlCode : public IInspectable
                    {
                    public:
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_AccessMode( 
                            /* [out][retval] */ __RPC__out ABI::Windows::Devices::Custom::IOControlAccessMode *value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_BufferingMethod( 
                            /* [out][retval] */ __RPC__out ABI::Windows::Devices::Custom::IOControlBufferingMethod *value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Function( 
                            /* [out][retval] */ __RPC__out UINT16 *value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_DeviceType( 
                            /* [out][retval] */ __RPC__out UINT16 *value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ControlCode( 
                            /* [out][retval] */ __RPC__out UINT32 *value) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_IIOControlCode = __uuidof(IIOControlCode);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CWindows_CDevices_CCustom_CIIOControlCodeVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CWindows_CDevices_CCustom_CIIOControlCode * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CWindows_CDevices_CCustom_CIIOControlCode * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CWindows_CDevices_CCustom_CIIOControlCode * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CWindows_CDevices_CCustom_CIIOControlCode * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CWindows_CDevices_CCustom_CIIOControlCode * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CWindows_CDevices_CCustom_CIIOControlCode * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_AccessMode )( 
            __RPC__in __x_ABI_CWindows_CDevices_CCustom_CIIOControlCode * This,
            /* [out][retval] */ __RPC__out __x_ABI_CWindows_CDevices_CCustom_CIOControlAccessMode *value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_BufferingMethod )( 
            __RPC__in __x_ABI_CWindows_CDevices_CCustom_CIIOControlCode * This,
            /* [out][retval] */ __RPC__out __x_ABI_CWindows_CDevices_CCustom_CIOControlBufferingMethod *value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Function )( 
            __RPC__in __x_ABI_CWindows_CDevices_CCustom_CIIOControlCode * This,
            /* [out][retval] */ __RPC__out UINT16 *value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_DeviceType )( 
            __RPC__in __x_ABI_CWindows_CDevices_CCustom_CIIOControlCode * This,
            /* [out][retval] */ __RPC__out UINT16 *value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ControlCode )( 
            __RPC__in __x_ABI_CWindows_CDevices_CCustom_CIIOControlCode * This,
            /* [out][retval] */ __RPC__out UINT32 *value);
        
        END_INTERFACE
    } __x_ABI_CWindows_CDevices_CCustom_CIIOControlCodeVtbl;

    interface __x_ABI_CWindows_CDevices_CCustom_CIIOControlCode
    {
        CONST_VTBL struct __x_ABI_CWindows_CDevices_CCustom_CIIOControlCodeVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CWindows_CDevices_CCustom_CIIOControlCode_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CWindows_CDevices_CCustom_CIIOControlCode_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CWindows_CDevices_CCustom_CIIOControlCode_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CWindows_CDevices_CCustom_CIIOControlCode_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CWindows_CDevices_CCustom_CIIOControlCode_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CWindows_CDevices_CCustom_CIIOControlCode_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CWindows_CDevices_CCustom_CIIOControlCode_get_AccessMode(This,value)	\
    ( (This)->lpVtbl -> get_AccessMode(This,value) ) 

#define __x_ABI_CWindows_CDevices_CCustom_CIIOControlCode_get_BufferingMethod(This,value)	\
    ( (This)->lpVtbl -> get_BufferingMethod(This,value) ) 

#define __x_ABI_CWindows_CDevices_CCustom_CIIOControlCode_get_Function(This,value)	\
    ( (This)->lpVtbl -> get_Function(This,value) ) 

#define __x_ABI_CWindows_CDevices_CCustom_CIIOControlCode_get_DeviceType(This,value)	\
    ( (This)->lpVtbl -> get_DeviceType(This,value) ) 

#define __x_ABI_CWindows_CDevices_CCustom_CIIOControlCode_get_ControlCode(This,value)	\
    ( (This)->lpVtbl -> get_ControlCode(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CWindows_CDevices_CCustom_CIIOControlCode_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Edevices2Ecustom_0000_0013 */
/* [local] */ 

#if !defined(____x_ABI_CWindows_CDevices_CCustom_CIIOControlCodeFactory_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Custom_IIOControlCodeFactory[] = L"Windows.Devices.Custom.IIOControlCodeFactory";
#endif /* !defined(____x_ABI_CWindows_CDevices_CCustom_CIIOControlCodeFactory_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_windows2Edevices2Ecustom_0000_0013 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Ecustom_0000_0013_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Ecustom_0000_0013_v0_0_s_ifspec;

#ifndef ____x_ABI_CWindows_CDevices_CCustom_CIIOControlCodeFactory_INTERFACE_DEFINED__
#define ____x_ABI_CWindows_CDevices_CCustom_CIIOControlCodeFactory_INTERFACE_DEFINED__

/* interface __x_ABI_CWindows_CDevices_CCustom_CIIOControlCodeFactory */
/* [uuid][object] */ 



/* interface ABI::Windows::Devices::Custom::IIOControlCodeFactory */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CCustom_CIIOControlCodeFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Windows {
            namespace Devices {
                namespace Custom {
                    
                    MIDL_INTERFACE("856A7CF0-4C11-44AE-AFC6-B8D4A212788F")
                    IIOControlCodeFactory : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE CreateIOControlCode( 
                            /* [in] */ UINT16 deviceType,
                            /* [in] */ UINT16 function,
                            /* [in] */ ABI::Windows::Devices::Custom::IOControlAccessMode accessMode,
                            /* [in] */ ABI::Windows::Devices::Custom::IOControlBufferingMethod bufferingMethod,
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Windows::Devices::Custom::IIOControlCode **instance) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_IIOControlCodeFactory = __uuidof(IIOControlCodeFactory);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CWindows_CDevices_CCustom_CIIOControlCodeFactoryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CWindows_CDevices_CCustom_CIIOControlCodeFactory * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CWindows_CDevices_CCustom_CIIOControlCodeFactory * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CWindows_CDevices_CCustom_CIIOControlCodeFactory * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CWindows_CDevices_CCustom_CIIOControlCodeFactory * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CWindows_CDevices_CCustom_CIIOControlCodeFactory * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CWindows_CDevices_CCustom_CIIOControlCodeFactory * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *CreateIOControlCode )( 
            __RPC__in __x_ABI_CWindows_CDevices_CCustom_CIIOControlCodeFactory * This,
            /* [in] */ UINT16 deviceType,
            /* [in] */ UINT16 function,
            /* [in] */ __x_ABI_CWindows_CDevices_CCustom_CIOControlAccessMode accessMode,
            /* [in] */ __x_ABI_CWindows_CDevices_CCustom_CIOControlBufferingMethod bufferingMethod,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CCustom_CIIOControlCode **instance);
        
        END_INTERFACE
    } __x_ABI_CWindows_CDevices_CCustom_CIIOControlCodeFactoryVtbl;

    interface __x_ABI_CWindows_CDevices_CCustom_CIIOControlCodeFactory
    {
        CONST_VTBL struct __x_ABI_CWindows_CDevices_CCustom_CIIOControlCodeFactoryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CWindows_CDevices_CCustom_CIIOControlCodeFactory_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CWindows_CDevices_CCustom_CIIOControlCodeFactory_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CWindows_CDevices_CCustom_CIIOControlCodeFactory_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CWindows_CDevices_CCustom_CIIOControlCodeFactory_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CWindows_CDevices_CCustom_CIIOControlCodeFactory_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CWindows_CDevices_CCustom_CIIOControlCodeFactory_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CWindows_CDevices_CCustom_CIIOControlCodeFactory_CreateIOControlCode(This,deviceType,function,accessMode,bufferingMethod,instance)	\
    ( (This)->lpVtbl -> CreateIOControlCode(This,deviceType,function,accessMode,bufferingMethod,instance) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CWindows_CDevices_CCustom_CIIOControlCodeFactory_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Edevices2Ecustom_0000_0014 */
/* [local] */ 

#if !defined(____x_ABI_CWindows_CDevices_CCustom_CIKnownDeviceTypesStatics_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Custom_IKnownDeviceTypesStatics[] = L"Windows.Devices.Custom.IKnownDeviceTypesStatics";
#endif /* !defined(____x_ABI_CWindows_CDevices_CCustom_CIKnownDeviceTypesStatics_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_windows2Edevices2Ecustom_0000_0014 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Ecustom_0000_0014_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Ecustom_0000_0014_v0_0_s_ifspec;

#ifndef ____x_ABI_CWindows_CDevices_CCustom_CIKnownDeviceTypesStatics_INTERFACE_DEFINED__
#define ____x_ABI_CWindows_CDevices_CCustom_CIKnownDeviceTypesStatics_INTERFACE_DEFINED__

/* interface __x_ABI_CWindows_CDevices_CCustom_CIKnownDeviceTypesStatics */
/* [uuid][object] */ 



/* interface ABI::Windows::Devices::Custom::IKnownDeviceTypesStatics */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CCustom_CIKnownDeviceTypesStatics;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Windows {
            namespace Devices {
                namespace Custom {
                    
                    MIDL_INTERFACE("EE5479C2-5448-45DA-AD1B-24948C239094")
                    IKnownDeviceTypesStatics : public IInspectable
                    {
                    public:
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Unknown( 
                            /* [out][retval] */ __RPC__out UINT16 *value) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_IKnownDeviceTypesStatics = __uuidof(IKnownDeviceTypesStatics);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CWindows_CDevices_CCustom_CIKnownDeviceTypesStaticsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CWindows_CDevices_CCustom_CIKnownDeviceTypesStatics * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CWindows_CDevices_CCustom_CIKnownDeviceTypesStatics * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CWindows_CDevices_CCustom_CIKnownDeviceTypesStatics * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CWindows_CDevices_CCustom_CIKnownDeviceTypesStatics * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CWindows_CDevices_CCustom_CIKnownDeviceTypesStatics * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CWindows_CDevices_CCustom_CIKnownDeviceTypesStatics * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Unknown )( 
            __RPC__in __x_ABI_CWindows_CDevices_CCustom_CIKnownDeviceTypesStatics * This,
            /* [out][retval] */ __RPC__out UINT16 *value);
        
        END_INTERFACE
    } __x_ABI_CWindows_CDevices_CCustom_CIKnownDeviceTypesStaticsVtbl;

    interface __x_ABI_CWindows_CDevices_CCustom_CIKnownDeviceTypesStatics
    {
        CONST_VTBL struct __x_ABI_CWindows_CDevices_CCustom_CIKnownDeviceTypesStaticsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CWindows_CDevices_CCustom_CIKnownDeviceTypesStatics_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CWindows_CDevices_CCustom_CIKnownDeviceTypesStatics_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CWindows_CDevices_CCustom_CIKnownDeviceTypesStatics_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CWindows_CDevices_CCustom_CIKnownDeviceTypesStatics_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CWindows_CDevices_CCustom_CIKnownDeviceTypesStatics_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CWindows_CDevices_CCustom_CIKnownDeviceTypesStatics_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CWindows_CDevices_CCustom_CIKnownDeviceTypesStatics_get_Unknown(This,value)	\
    ( (This)->lpVtbl -> get_Unknown(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CWindows_CDevices_CCustom_CIKnownDeviceTypesStatics_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Edevices2Ecustom_0000_0015 */
/* [local] */ 

#ifndef RUNTIMECLASS_Windows_Devices_Custom_CustomDevice_DEFINED
#define RUNTIMECLASS_Windows_Devices_Custom_CustomDevice_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Custom_CustomDevice[] = L"Windows.Devices.Custom.CustomDevice";
#endif
#ifndef RUNTIMECLASS_Windows_Devices_Custom_IOControlCode_DEFINED
#define RUNTIMECLASS_Windows_Devices_Custom_IOControlCode_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Custom_IOControlCode[] = L"Windows.Devices.Custom.IOControlCode";
#endif
#ifndef RUNTIMECLASS_Windows_Devices_Custom_KnownDeviceTypes_DEFINED
#define RUNTIMECLASS_Windows_Devices_Custom_KnownDeviceTypes_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Custom_KnownDeviceTypes[] = L"Windows.Devices.Custom.KnownDeviceTypes";
#endif


/* interface __MIDL_itf_windows2Edevices2Ecustom_0000_0015 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Ecustom_0000_0015_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Ecustom_0000_0015_v0_0_s_ifspec;

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


