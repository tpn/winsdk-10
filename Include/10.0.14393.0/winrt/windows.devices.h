

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

#ifndef __windows2Edevices_h__
#define __windows2Edevices_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef ____x_ABI_CWindows_CDevices_CILowLevelDevicesAggregateProvider_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CILowLevelDevicesAggregateProvider_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CILowLevelDevicesAggregateProvider __x_ABI_CWindows_CDevices_CILowLevelDevicesAggregateProvider;

#ifdef __cplusplus
namespace ABI {
    namespace Windows {
        namespace Devices {
            interface ILowLevelDevicesAggregateProvider;
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CWindows_CDevices_CILowLevelDevicesAggregateProvider_FWD_DEFINED__ */


#ifndef ____x_ABI_CWindows_CDevices_CILowLevelDevicesAggregateProviderFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CILowLevelDevicesAggregateProviderFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CILowLevelDevicesAggregateProviderFactory __x_ABI_CWindows_CDevices_CILowLevelDevicesAggregateProviderFactory;

#ifdef __cplusplus
namespace ABI {
    namespace Windows {
        namespace Devices {
            interface ILowLevelDevicesAggregateProviderFactory;
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CWindows_CDevices_CILowLevelDevicesAggregateProviderFactory_FWD_DEFINED__ */


#ifndef ____x_ABI_CWindows_CDevices_CILowLevelDevicesController_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CILowLevelDevicesController_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CILowLevelDevicesController __x_ABI_CWindows_CDevices_CILowLevelDevicesController;

#ifdef __cplusplus
namespace ABI {
    namespace Windows {
        namespace Devices {
            interface ILowLevelDevicesController;
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CWindows_CDevices_CILowLevelDevicesController_FWD_DEFINED__ */


#ifndef ____x_ABI_CWindows_CDevices_CILowLevelDevicesControllerStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CILowLevelDevicesControllerStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CILowLevelDevicesControllerStatics __x_ABI_CWindows_CDevices_CILowLevelDevicesControllerStatics;

#ifdef __cplusplus
namespace ABI {
    namespace Windows {
        namespace Devices {
            interface ILowLevelDevicesControllerStatics;
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CWindows_CDevices_CILowLevelDevicesControllerStatics_FWD_DEFINED__ */


/* header files for imported files */
#include "inspectable.h"
#include "AsyncInfo.h"
#include "EventToken.h"
#include "Windows.Foundation.h"
#include "Windows.Devices.Adc.Provider.h"
#include "Windows.Devices.Gpio.Provider.h"
#include "Windows.Devices.I2c.Provider.h"
#include "Windows.Devices.Pwm.Provider.h"
#include "Windows.Devices.Spi.Provider.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_windows2Edevices_0000_0000 */
/* [local] */ 

#if defined(__cplusplus)
}
#endif // defined(__cplusplus)
#include <Windows.Foundation.h>
#if !defined(__windows2Edevices2Eadc2Eprovider_h__)
#include <Windows.Devices.Adc.Provider.h>
#endif // !defined(__windows2Edevices2Eadc2Eprovider_h__)
#if !defined(__windows2Edevices2Egpio2Eprovider_h__)
#include <Windows.Devices.Gpio.Provider.h>
#endif // !defined(__windows2Edevices2Egpio2Eprovider_h__)
#if !defined(__windows2Edevices2Ei2c2Eprovider_h__)
#include <Windows.Devices.I2c.Provider.h>
#endif // !defined(__windows2Edevices2Ei2c2Eprovider_h__)
#if !defined(__windows2Edevices2Epwm2Eprovider_h__)
#include <Windows.Devices.Pwm.Provider.h>
#endif // !defined(__windows2Edevices2Epwm2Eprovider_h__)
#if !defined(__windows2Edevices2Espi2Eprovider_h__)
#include <Windows.Devices.Spi.Provider.h>
#endif // !defined(__windows2Edevices2Espi2Eprovider_h__)
#if defined(__cplusplus)
extern "C" {
#endif // defined(__cplusplus)









#ifdef __cplusplus
namespace ABI {
namespace Windows {
namespace Devices {
class LowLevelDevicesAggregateProvider;
} /*Devices*/
} /*Windows*/
}
#endif
#ifdef __cplusplus
namespace ABI {
namespace Windows {
namespace Devices {
class LowLevelDevicesController;
} /*Devices*/
} /*Windows*/
}
#endif
#if !defined(____x_ABI_CWindows_CDevices_CILowLevelDevicesAggregateProvider_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_ILowLevelDevicesAggregateProvider[] = L"Windows.Devices.ILowLevelDevicesAggregateProvider";
#endif /* !defined(____x_ABI_CWindows_CDevices_CILowLevelDevicesAggregateProvider_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_windows2Edevices_0000_0000 */
/* [local] */ 












extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices_0000_0000_v0_0_s_ifspec;

#ifndef ____x_ABI_CWindows_CDevices_CILowLevelDevicesAggregateProvider_INTERFACE_DEFINED__
#define ____x_ABI_CWindows_CDevices_CILowLevelDevicesAggregateProvider_INTERFACE_DEFINED__

/* interface __x_ABI_CWindows_CDevices_CILowLevelDevicesAggregateProvider */
/* [uuid][object] */ 



/* interface ABI::Windows::Devices::ILowLevelDevicesAggregateProvider */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CILowLevelDevicesAggregateProvider;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Windows {
            namespace Devices {
                
                MIDL_INTERFACE("A73E561C-AAC1-4EC7-A852-479F7060D01F")
                ILowLevelDevicesAggregateProvider : public IInspectable
                {
                public:
                    virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_AdcControllerProvider( 
                        /* [out][retval] */ __RPC__deref_out_opt ABI::Windows::Devices::Adc::Provider::IAdcControllerProvider **value) = 0;
                    
                    virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_PwmControllerProvider( 
                        /* [out][retval] */ __RPC__deref_out_opt ABI::Windows::Devices::Pwm::Provider::IPwmControllerProvider **value) = 0;
                    
                    virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_GpioControllerProvider( 
                        /* [out][retval] */ __RPC__deref_out_opt ABI::Windows::Devices::Gpio::Provider::IGpioControllerProvider **value) = 0;
                    
                    virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_I2cControllerProvider( 
                        /* [out][retval] */ __RPC__deref_out_opt ABI::Windows::Devices::I2c::Provider::II2cControllerProvider **value) = 0;
                    
                    virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_SpiControllerProvider( 
                        /* [out][retval] */ __RPC__deref_out_opt ABI::Windows::Devices::Spi::Provider::ISpiControllerProvider **value) = 0;
                    
                };

                extern const __declspec(selectany) IID & IID_ILowLevelDevicesAggregateProvider = __uuidof(ILowLevelDevicesAggregateProvider);

                
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CWindows_CDevices_CILowLevelDevicesAggregateProviderVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CWindows_CDevices_CILowLevelDevicesAggregateProvider * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CWindows_CDevices_CILowLevelDevicesAggregateProvider * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CWindows_CDevices_CILowLevelDevicesAggregateProvider * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CWindows_CDevices_CILowLevelDevicesAggregateProvider * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CWindows_CDevices_CILowLevelDevicesAggregateProvider * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CWindows_CDevices_CILowLevelDevicesAggregateProvider * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_AdcControllerProvider )( 
            __RPC__in __x_ABI_CWindows_CDevices_CILowLevelDevicesAggregateProvider * This,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CAdc_CProvider_CIAdcControllerProvider **value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_PwmControllerProvider )( 
            __RPC__in __x_ABI_CWindows_CDevices_CILowLevelDevicesAggregateProvider * This,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CPwm_CProvider_CIPwmControllerProvider **value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_GpioControllerProvider )( 
            __RPC__in __x_ABI_CWindows_CDevices_CILowLevelDevicesAggregateProvider * This,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioControllerProvider **value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_I2cControllerProvider )( 
            __RPC__in __x_ABI_CWindows_CDevices_CILowLevelDevicesAggregateProvider * This,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cControllerProvider **value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_SpiControllerProvider )( 
            __RPC__in __x_ABI_CWindows_CDevices_CILowLevelDevicesAggregateProvider * This,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CSpi_CProvider_CISpiControllerProvider **value);
        
        END_INTERFACE
    } __x_ABI_CWindows_CDevices_CILowLevelDevicesAggregateProviderVtbl;

    interface __x_ABI_CWindows_CDevices_CILowLevelDevicesAggregateProvider
    {
        CONST_VTBL struct __x_ABI_CWindows_CDevices_CILowLevelDevicesAggregateProviderVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CWindows_CDevices_CILowLevelDevicesAggregateProvider_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CWindows_CDevices_CILowLevelDevicesAggregateProvider_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CWindows_CDevices_CILowLevelDevicesAggregateProvider_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CWindows_CDevices_CILowLevelDevicesAggregateProvider_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CWindows_CDevices_CILowLevelDevicesAggregateProvider_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CWindows_CDevices_CILowLevelDevicesAggregateProvider_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CWindows_CDevices_CILowLevelDevicesAggregateProvider_get_AdcControllerProvider(This,value)	\
    ( (This)->lpVtbl -> get_AdcControllerProvider(This,value) ) 

#define __x_ABI_CWindows_CDevices_CILowLevelDevicesAggregateProvider_get_PwmControllerProvider(This,value)	\
    ( (This)->lpVtbl -> get_PwmControllerProvider(This,value) ) 

#define __x_ABI_CWindows_CDevices_CILowLevelDevicesAggregateProvider_get_GpioControllerProvider(This,value)	\
    ( (This)->lpVtbl -> get_GpioControllerProvider(This,value) ) 

#define __x_ABI_CWindows_CDevices_CILowLevelDevicesAggregateProvider_get_I2cControllerProvider(This,value)	\
    ( (This)->lpVtbl -> get_I2cControllerProvider(This,value) ) 

#define __x_ABI_CWindows_CDevices_CILowLevelDevicesAggregateProvider_get_SpiControllerProvider(This,value)	\
    ( (This)->lpVtbl -> get_SpiControllerProvider(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CWindows_CDevices_CILowLevelDevicesAggregateProvider_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Edevices_0000_0001 */
/* [local] */ 

#if !defined(____x_ABI_CWindows_CDevices_CILowLevelDevicesAggregateProviderFactory_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_ILowLevelDevicesAggregateProviderFactory[] = L"Windows.Devices.ILowLevelDevicesAggregateProviderFactory";
#endif /* !defined(____x_ABI_CWindows_CDevices_CILowLevelDevicesAggregateProviderFactory_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_windows2Edevices_0000_0001 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices_0000_0001_v0_0_s_ifspec;

#ifndef ____x_ABI_CWindows_CDevices_CILowLevelDevicesAggregateProviderFactory_INTERFACE_DEFINED__
#define ____x_ABI_CWindows_CDevices_CILowLevelDevicesAggregateProviderFactory_INTERFACE_DEFINED__

/* interface __x_ABI_CWindows_CDevices_CILowLevelDevicesAggregateProviderFactory */
/* [uuid][object] */ 



/* interface ABI::Windows::Devices::ILowLevelDevicesAggregateProviderFactory */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CILowLevelDevicesAggregateProviderFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Windows {
            namespace Devices {
                
                MIDL_INTERFACE("9AC4AAF6-3473-465E-96D5-36281A2C57AF")
                ILowLevelDevicesAggregateProviderFactory : public IInspectable
                {
                public:
                    virtual HRESULT STDMETHODCALLTYPE Create( 
                        /* [in] */ __RPC__in_opt ABI::Windows::Devices::Adc::Provider::IAdcControllerProvider *adc,
                        /* [in] */ __RPC__in_opt ABI::Windows::Devices::Pwm::Provider::IPwmControllerProvider *pwm,
                        /* [in] */ __RPC__in_opt ABI::Windows::Devices::Gpio::Provider::IGpioControllerProvider *gpio,
                        /* [in] */ __RPC__in_opt ABI::Windows::Devices::I2c::Provider::II2cControllerProvider *i2c,
                        /* [in] */ __RPC__in_opt ABI::Windows::Devices::Spi::Provider::ISpiControllerProvider *spi,
                        /* [out][retval] */ __RPC__deref_out_opt ABI::Windows::Devices::ILowLevelDevicesAggregateProvider **value) = 0;
                    
                };

                extern const __declspec(selectany) IID & IID_ILowLevelDevicesAggregateProviderFactory = __uuidof(ILowLevelDevicesAggregateProviderFactory);

                
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CWindows_CDevices_CILowLevelDevicesAggregateProviderFactoryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CWindows_CDevices_CILowLevelDevicesAggregateProviderFactory * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CWindows_CDevices_CILowLevelDevicesAggregateProviderFactory * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CWindows_CDevices_CILowLevelDevicesAggregateProviderFactory * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CWindows_CDevices_CILowLevelDevicesAggregateProviderFactory * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CWindows_CDevices_CILowLevelDevicesAggregateProviderFactory * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CWindows_CDevices_CILowLevelDevicesAggregateProviderFactory * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *Create )( 
            __RPC__in __x_ABI_CWindows_CDevices_CILowLevelDevicesAggregateProviderFactory * This,
            /* [in] */ __RPC__in_opt __x_ABI_CWindows_CDevices_CAdc_CProvider_CIAdcControllerProvider *adc,
            /* [in] */ __RPC__in_opt __x_ABI_CWindows_CDevices_CPwm_CProvider_CIPwmControllerProvider *pwm,
            /* [in] */ __RPC__in_opt __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioControllerProvider *gpio,
            /* [in] */ __RPC__in_opt __x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cControllerProvider *i2c,
            /* [in] */ __RPC__in_opt __x_ABI_CWindows_CDevices_CSpi_CProvider_CISpiControllerProvider *spi,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CILowLevelDevicesAggregateProvider **value);
        
        END_INTERFACE
    } __x_ABI_CWindows_CDevices_CILowLevelDevicesAggregateProviderFactoryVtbl;

    interface __x_ABI_CWindows_CDevices_CILowLevelDevicesAggregateProviderFactory
    {
        CONST_VTBL struct __x_ABI_CWindows_CDevices_CILowLevelDevicesAggregateProviderFactoryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CWindows_CDevices_CILowLevelDevicesAggregateProviderFactory_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CWindows_CDevices_CILowLevelDevicesAggregateProviderFactory_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CWindows_CDevices_CILowLevelDevicesAggregateProviderFactory_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CWindows_CDevices_CILowLevelDevicesAggregateProviderFactory_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CWindows_CDevices_CILowLevelDevicesAggregateProviderFactory_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CWindows_CDevices_CILowLevelDevicesAggregateProviderFactory_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CWindows_CDevices_CILowLevelDevicesAggregateProviderFactory_Create(This,adc,pwm,gpio,i2c,spi,value)	\
    ( (This)->lpVtbl -> Create(This,adc,pwm,gpio,i2c,spi,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CWindows_CDevices_CILowLevelDevicesAggregateProviderFactory_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Edevices_0000_0002 */
/* [local] */ 

#if !defined(____x_ABI_CWindows_CDevices_CILowLevelDevicesController_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_ILowLevelDevicesController[] = L"Windows.Devices.ILowLevelDevicesController";
#endif /* !defined(____x_ABI_CWindows_CDevices_CILowLevelDevicesController_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_windows2Edevices_0000_0002 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices_0000_0002_v0_0_s_ifspec;

#ifndef ____x_ABI_CWindows_CDevices_CILowLevelDevicesController_INTERFACE_DEFINED__
#define ____x_ABI_CWindows_CDevices_CILowLevelDevicesController_INTERFACE_DEFINED__

/* interface __x_ABI_CWindows_CDevices_CILowLevelDevicesController */
/* [uuid][object] */ 



/* interface ABI::Windows::Devices::ILowLevelDevicesController */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CILowLevelDevicesController;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Windows {
            namespace Devices {
                
                MIDL_INTERFACE("2EC23DD4-179B-45DE-9B39-3AE02527DE52")
                ILowLevelDevicesController : public IInspectable
                {
                public:
                };

                extern const __declspec(selectany) IID & IID_ILowLevelDevicesController = __uuidof(ILowLevelDevicesController);

                
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CWindows_CDevices_CILowLevelDevicesControllerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CWindows_CDevices_CILowLevelDevicesController * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CWindows_CDevices_CILowLevelDevicesController * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CWindows_CDevices_CILowLevelDevicesController * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CWindows_CDevices_CILowLevelDevicesController * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CWindows_CDevices_CILowLevelDevicesController * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CWindows_CDevices_CILowLevelDevicesController * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        END_INTERFACE
    } __x_ABI_CWindows_CDevices_CILowLevelDevicesControllerVtbl;

    interface __x_ABI_CWindows_CDevices_CILowLevelDevicesController
    {
        CONST_VTBL struct __x_ABI_CWindows_CDevices_CILowLevelDevicesControllerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CWindows_CDevices_CILowLevelDevicesController_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CWindows_CDevices_CILowLevelDevicesController_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CWindows_CDevices_CILowLevelDevicesController_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CWindows_CDevices_CILowLevelDevicesController_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CWindows_CDevices_CILowLevelDevicesController_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CWindows_CDevices_CILowLevelDevicesController_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CWindows_CDevices_CILowLevelDevicesController_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Edevices_0000_0003 */
/* [local] */ 

#if !defined(____x_ABI_CWindows_CDevices_CILowLevelDevicesControllerStatics_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_ILowLevelDevicesControllerStatics[] = L"Windows.Devices.ILowLevelDevicesControllerStatics";
#endif /* !defined(____x_ABI_CWindows_CDevices_CILowLevelDevicesControllerStatics_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_windows2Edevices_0000_0003 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices_0000_0003_v0_0_s_ifspec;

#ifndef ____x_ABI_CWindows_CDevices_CILowLevelDevicesControllerStatics_INTERFACE_DEFINED__
#define ____x_ABI_CWindows_CDevices_CILowLevelDevicesControllerStatics_INTERFACE_DEFINED__

/* interface __x_ABI_CWindows_CDevices_CILowLevelDevicesControllerStatics */
/* [uuid][object] */ 



/* interface ABI::Windows::Devices::ILowLevelDevicesControllerStatics */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CILowLevelDevicesControllerStatics;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Windows {
            namespace Devices {
                
                MIDL_INTERFACE("093E926A-FCCB-4394-A697-19DE637C2DB3")
                ILowLevelDevicesControllerStatics : public IInspectable
                {
                public:
                    virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_DefaultProvider( 
                        /* [out][retval] */ __RPC__deref_out_opt ABI::Windows::Devices::ILowLevelDevicesAggregateProvider **value) = 0;
                    
                    virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_DefaultProvider( 
                        /* [in] */ __RPC__in_opt ABI::Windows::Devices::ILowLevelDevicesAggregateProvider *value) = 0;
                    
                };

                extern const __declspec(selectany) IID & IID_ILowLevelDevicesControllerStatics = __uuidof(ILowLevelDevicesControllerStatics);

                
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CWindows_CDevices_CILowLevelDevicesControllerStaticsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CWindows_CDevices_CILowLevelDevicesControllerStatics * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CWindows_CDevices_CILowLevelDevicesControllerStatics * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CWindows_CDevices_CILowLevelDevicesControllerStatics * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CWindows_CDevices_CILowLevelDevicesControllerStatics * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CWindows_CDevices_CILowLevelDevicesControllerStatics * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CWindows_CDevices_CILowLevelDevicesControllerStatics * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_DefaultProvider )( 
            __RPC__in __x_ABI_CWindows_CDevices_CILowLevelDevicesControllerStatics * This,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CILowLevelDevicesAggregateProvider **value);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_DefaultProvider )( 
            __RPC__in __x_ABI_CWindows_CDevices_CILowLevelDevicesControllerStatics * This,
            /* [in] */ __RPC__in_opt __x_ABI_CWindows_CDevices_CILowLevelDevicesAggregateProvider *value);
        
        END_INTERFACE
    } __x_ABI_CWindows_CDevices_CILowLevelDevicesControllerStaticsVtbl;

    interface __x_ABI_CWindows_CDevices_CILowLevelDevicesControllerStatics
    {
        CONST_VTBL struct __x_ABI_CWindows_CDevices_CILowLevelDevicesControllerStaticsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CWindows_CDevices_CILowLevelDevicesControllerStatics_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CWindows_CDevices_CILowLevelDevicesControllerStatics_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CWindows_CDevices_CILowLevelDevicesControllerStatics_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CWindows_CDevices_CILowLevelDevicesControllerStatics_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CWindows_CDevices_CILowLevelDevicesControllerStatics_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CWindows_CDevices_CILowLevelDevicesControllerStatics_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CWindows_CDevices_CILowLevelDevicesControllerStatics_get_DefaultProvider(This,value)	\
    ( (This)->lpVtbl -> get_DefaultProvider(This,value) ) 

#define __x_ABI_CWindows_CDevices_CILowLevelDevicesControllerStatics_put_DefaultProvider(This,value)	\
    ( (This)->lpVtbl -> put_DefaultProvider(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CWindows_CDevices_CILowLevelDevicesControllerStatics_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Edevices_0000_0004 */
/* [local] */ 

#ifndef RUNTIMECLASS_Windows_Devices_LowLevelDevicesAggregateProvider_DEFINED
#define RUNTIMECLASS_Windows_Devices_LowLevelDevicesAggregateProvider_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_LowLevelDevicesAggregateProvider[] = L"Windows.Devices.LowLevelDevicesAggregateProvider";
#endif
#ifndef RUNTIMECLASS_Windows_Devices_LowLevelDevicesController_DEFINED
#define RUNTIMECLASS_Windows_Devices_LowLevelDevicesController_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_LowLevelDevicesController[] = L"Windows.Devices.LowLevelDevicesController";
#endif


/* interface __MIDL_itf_windows2Edevices_0000_0004 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices_0000_0004_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


