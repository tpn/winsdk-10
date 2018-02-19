/* Header file automatically generated from windows.devices.pwm.provider.idl */
/*
 * File built with Microsoft(R) MIDLRT Compiler Engine Version 10.00.0206 
 */

#pragma warning( disable: 4049 )  /* more than 64k source lines */

/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

/* verify that the <rpcsal.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCSAL_H_VERSION__
#define __REQUIRED_RPCSAL_H_VERSION__ 100
#endif

#include <rpc.h>
#include <rpcndr.h>

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */

#ifndef COM_NO_WINDOWS_H
#include <windows.h>
#include <ole2.h>
#endif /*COM_NO_WINDOWS_H*/
#ifndef __windows2Edevices2Epwm2Eprovider_h__
#define __windows2Edevices2Epwm2Eprovider_h__
#ifndef __windows2Edevices2Epwm2Eprovider_p_h__
#define __windows2Edevices2Epwm2Eprovider_p_h__


#pragma once

//
// Deprecated attribute support
//

#pragma push_macro("DEPRECATED")
#undef DEPRECATED

#if !defined(DISABLE_WINRT_DEPRECATION)
#if defined(__cplusplus)
#if __cplusplus >= 201402
#define DEPRECATED(x) [[deprecated(x)]]
#elif defined(_MSC_VER)
#if _MSC_VER >= 1900
#define DEPRECATED(x) [[deprecated(x)]]
#define DEPRECATEDENUMERATOR(x) [[deprecated(x)]]
#else
#define DEPRECATED(x) __declspec(deprecated(x))
#define DEPRECATEDENUMERATOR(x)
#endif // _MSC_VER >= 1900
#else // Not Standard C++ or MSVC, ignore the construct.
#define DEPRECATED(x)
#define DEPRECATEDENUMERATOR(x)
#endif  // C++ deprecation
#else // C - disable deprecation
#define DEPRECATED(x)
#define DEPRECATEDENUMERATOR(x)
#endif
#else // Deprecation is disabled
#define DEPRECATED(x)
#define DEPRECATEDENUMERATOR(x)
#endif  /* DEPRECATED */

// Disable Deprecation for this header, MIDL verifies that cross-type access is acceptable
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#else
#pragma warning(push)
#pragma warning(disable: 4996)
#endif

#pragma push_macro("MIDL_CONST_ID")
#if !defined(_MSC_VER) || (_MSC_VER >= 1910)
#define MIDL_CONST_ID constexpr const
#else
#define MIDL_CONST_ID const __declspec(selectany)
#endif


//  API Contract Inclusion Definitions
#if !defined(SPECIFIC_API_CONTRACT_DEFINITIONS)
#if !defined(WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION 0x30000
#endif // defined(WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION)

#if !defined(WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION)
#define WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION 0x30000
#endif // defined(WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION)

#if !defined(WINDOWS_FOUNDATION_FOUNDATIONCONTRACT_VERSION)
#define WINDOWS_FOUNDATION_FOUNDATIONCONTRACT_VERSION 0x30000
#endif // defined(WINDOWS_FOUNDATION_FOUNDATIONCONTRACT_VERSION)

#if !defined(WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION)
#define WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION 0x50000
#endif // defined(WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION)

#if !defined(WINDOWS_PHONE_PHONECONTRACT_VERSION)
#define WINDOWS_PHONE_PHONECONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_PHONE_PHONECONTRACT_VERSION)

#if !defined(WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION)
#define WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION)

#if !defined(WINDOWS_UI_WEBUI_CORE_WEBUICOMMANDBARCONTRACT_VERSION)
#define WINDOWS_UI_WEBUI_CORE_WEBUICOMMANDBARCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_UI_WEBUI_CORE_WEBUICOMMANDBARCONTRACT_VERSION)

#endif // defined(SPECIFIC_API_CONTRACT_DEFINITIONS)


// Header files for imported files
#include "inspectable.h"
#include "AsyncInfo.h"
#include "EventToken.h"
#include "windowscontracts.h"
#include "Windows.Foundation.h"
#include "Windows.Devices.h"
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CDevices_CPwm_CProvider_CIPwmControllerProvider_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CPwm_CProvider_CIPwmControllerProvider_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Pwm {
                namespace Provider {
                    interface IPwmControllerProvider;
                } /* Windows */
            } /* Devices */
        } /* Pwm */
    } /* Provider */} /* ABI */
#define __x_ABI_CWindows_CDevices_CPwm_CProvider_CIPwmControllerProvider ABI::Windows::Devices::Pwm::Provider::IPwmControllerProvider

#endif // ____x_ABI_CWindows_CDevices_CPwm_CProvider_CIPwmControllerProvider_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CPwm_CProvider_CIPwmProvider_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CPwm_CProvider_CIPwmProvider_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Pwm {
                namespace Provider {
                    interface IPwmProvider;
                } /* Windows */
            } /* Devices */
        } /* Pwm */
    } /* Provider */} /* ABI */
#define __x_ABI_CWindows_CDevices_CPwm_CProvider_CIPwmProvider ABI::Windows::Devices::Pwm::Provider::IPwmProvider

#endif // ____x_ABI_CWindows_CDevices_CPwm_CProvider_CIPwmProvider_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions

#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CDevices__CPwm__CProvider__CIPwmControllerProvider_USE
#define DEF___FIIterator_1_Windows__CDevices__CPwm__CProvider__CIPwmControllerProvider_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("90389702-f036-56e1-a94f-6d99d52b9578"))
IIterator<ABI::Windows::Devices::Pwm::Provider::IPwmControllerProvider*> : IIterator_impl<ABI::Windows::Devices::Pwm::Provider::IPwmControllerProvider*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Devices.Pwm.Provider.IPwmControllerProvider>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Devices::Pwm::Provider::IPwmControllerProvider*> __FIIterator_1_Windows__CDevices__CPwm__CProvider__CIPwmControllerProvider_t;
#define __FIIterator_1_Windows__CDevices__CPwm__CProvider__CIPwmControllerProvider ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CDevices__CPwm__CProvider__CIPwmControllerProvider_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CDevices__CPwm__CProvider__CIPwmControllerProvider ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Devices::Pwm::Provider::IPwmControllerProvider*>
//#define __FIIterator_1_Windows__CDevices__CPwm__CProvider__CIPwmControllerProvider_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Devices::Pwm::Provider::IPwmControllerProvider*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CDevices__CPwm__CProvider__CIPwmControllerProvider_USE */


#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000


#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CDevices__CPwm__CProvider__CIPwmControllerProvider_USE
#define DEF___FIIterable_1_Windows__CDevices__CPwm__CProvider__CIPwmControllerProvider_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("4936ed59-b494-5128-bc7e-03e630346475"))
IIterable<ABI::Windows::Devices::Pwm::Provider::IPwmControllerProvider*> : IIterable_impl<ABI::Windows::Devices::Pwm::Provider::IPwmControllerProvider*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Devices.Pwm.Provider.IPwmControllerProvider>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Devices::Pwm::Provider::IPwmControllerProvider*> __FIIterable_1_Windows__CDevices__CPwm__CProvider__CIPwmControllerProvider_t;
#define __FIIterable_1_Windows__CDevices__CPwm__CProvider__CIPwmControllerProvider ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CDevices__CPwm__CProvider__CIPwmControllerProvider_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CDevices__CPwm__CProvider__CIPwmControllerProvider ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Devices::Pwm::Provider::IPwmControllerProvider*>
//#define __FIIterable_1_Windows__CDevices__CPwm__CProvider__CIPwmControllerProvider_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Devices::Pwm::Provider::IPwmControllerProvider*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CDevices__CPwm__CProvider__CIPwmControllerProvider_USE */


#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000


#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CDevices__CPwm__CProvider__CIPwmControllerProvider_USE
#define DEF___FIVectorView_1_Windows__CDevices__CPwm__CProvider__CIPwmControllerProvider_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("1a166093-1a7a-5e12-9d38-f892fec3ec66"))
IVectorView<ABI::Windows::Devices::Pwm::Provider::IPwmControllerProvider*> : IVectorView_impl<ABI::Windows::Devices::Pwm::Provider::IPwmControllerProvider*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Devices.Pwm.Provider.IPwmControllerProvider>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Devices::Pwm::Provider::IPwmControllerProvider*> __FIVectorView_1_Windows__CDevices__CPwm__CProvider__CIPwmControllerProvider_t;
#define __FIVectorView_1_Windows__CDevices__CPwm__CProvider__CIPwmControllerProvider ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CDevices__CPwm__CProvider__CIPwmControllerProvider_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CDevices__CPwm__CProvider__CIPwmControllerProvider ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Devices::Pwm::Provider::IPwmControllerProvider*>
//#define __FIVectorView_1_Windows__CDevices__CPwm__CProvider__CIPwmControllerProvider_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Devices::Pwm::Provider::IPwmControllerProvider*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CDevices__CPwm__CProvider__CIPwmControllerProvider_USE */


#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000


















/*
 *
 * Interface Windows.Devices.Pwm.Provider.IPwmControllerProvider
 *
 * Introduced to Windows.Devices.DevicesLowLevelContract in version 1.0
 *
 *
 */
#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CPwm_CProvider_CIPwmControllerProvider_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CPwm_CProvider_CIPwmControllerProvider_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Pwm_Provider_IPwmControllerProvider[] = L"Windows.Devices.Pwm.Provider.IPwmControllerProvider";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Pwm {
                namespace Provider {
                    /* [object, uuid("1300593B-E2E3-40A4-B7D9-48DFF0377A52"), contract] */
                    MIDL_INTERFACE("1300593B-E2E3-40A4-B7D9-48DFF0377A52")
                    IPwmControllerProvider : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PinCount(
                            /* [retval, out] */__RPC__out INT32 * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ActualFrequency(
                            /* [retval, out] */__RPC__out DOUBLE * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetDesiredFrequency(
                            /* [in] */DOUBLE frequency,
                            /* [retval, out] */__RPC__out DOUBLE * result
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MaxFrequency(
                            /* [retval, out] */__RPC__out DOUBLE * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MinFrequency(
                            /* [retval, out] */__RPC__out DOUBLE * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE AcquirePin(
                            /* [in] */INT32 pin
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE ReleasePin(
                            /* [in] */INT32 pin
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE EnablePin(
                            /* [in] */INT32 pin
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE DisablePin(
                            /* [in] */INT32 pin
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetPulseParameters(
                            /* [in] */INT32 pin,
                            /* [in] */DOUBLE dutyCycle,
                            /* [in] */boolean invertPolarity
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IPwmControllerProvider=_uuidof(IPwmControllerProvider);
                    
                } /* Windows */
            } /* Devices */
        } /* Pwm */
    } /* Provider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPwm_CProvider_CIPwmControllerProvider;
#endif /* !defined(____x_ABI_CWindows_CDevices_CPwm_CProvider_CIPwmControllerProvider_INTERFACE_DEFINED__) */
#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Pwm.Provider.IPwmProvider
 *
 * Introduced to Windows.Devices.DevicesLowLevelContract in version 1.0
 *
 *
 */
#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CPwm_CProvider_CIPwmProvider_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CPwm_CProvider_CIPwmProvider_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Pwm_Provider_IPwmProvider[] = L"Windows.Devices.Pwm.Provider.IPwmProvider";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Pwm {
                namespace Provider {
                    /* [object, uuid("A3301228-52F1-47B0-9349-66BA43D25902"), contract] */
                    MIDL_INTERFACE("A3301228-52F1-47B0-9349-66BA43D25902")
                    IPwmProvider : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE GetControllers(
                            /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CPwm__CProvider__CIPwmControllerProvider * * result
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IPwmProvider=_uuidof(IPwmProvider);
                    
                } /* Windows */
            } /* Devices */
        } /* Pwm */
    } /* Provider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPwm_CProvider_CIPwmProvider;
#endif /* !defined(____x_ABI_CWindows_CDevices_CPwm_CProvider_CIPwmProvider_INTERFACE_DEFINED__) */
#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000





#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CDevices_CPwm_CProvider_CIPwmControllerProvider_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CPwm_CProvider_CIPwmControllerProvider_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CPwm_CProvider_CIPwmControllerProvider __x_ABI_CWindows_CDevices_CPwm_CProvider_CIPwmControllerProvider;

#endif // ____x_ABI_CWindows_CDevices_CPwm_CProvider_CIPwmControllerProvider_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CPwm_CProvider_CIPwmProvider_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CPwm_CProvider_CIPwmProvider_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CPwm_CProvider_CIPwmProvider __x_ABI_CWindows_CDevices_CPwm_CProvider_CIPwmProvider;

#endif // ____x_ABI_CWindows_CDevices_CPwm_CProvider_CIPwmProvider_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CDevices__CPwm__CProvider__CIPwmControllerProvider_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CDevices__CPwm__CProvider__CIPwmControllerProvider_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CDevices__CPwm__CProvider__CIPwmControllerProvider __FIIterator_1_Windows__CDevices__CPwm__CProvider__CIPwmControllerProvider;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CDevices__CPwm__CProvider__CIPwmControllerProvider;

typedef struct __FIIterator_1_Windows__CDevices__CPwm__CProvider__CIPwmControllerProviderVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CDevices__CPwm__CProvider__CIPwmControllerProvider * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CDevices__CPwm__CProvider__CIPwmControllerProvider * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CDevices__CPwm__CProvider__CIPwmControllerProvider * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CDevices__CPwm__CProvider__CIPwmControllerProvider * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CDevices__CPwm__CProvider__CIPwmControllerProvider * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CDevices__CPwm__CProvider__CIPwmControllerProvider * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CDevices__CPwm__CProvider__CIPwmControllerProvider * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CDevices_CPwm_CProvider_CIPwmControllerProvider * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CDevices__CPwm__CProvider__CIPwmControllerProvider * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CDevices__CPwm__CProvider__CIPwmControllerProvider * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CDevices__CPwm__CProvider__CIPwmControllerProvider * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CPwm_CProvider_CIPwmControllerProvider * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CDevices__CPwm__CProvider__CIPwmControllerProviderVtbl;

interface __FIIterator_1_Windows__CDevices__CPwm__CProvider__CIPwmControllerProvider
{
    CONST_VTBL struct __FIIterator_1_Windows__CDevices__CPwm__CProvider__CIPwmControllerProviderVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CDevices__CPwm__CProvider__CIPwmControllerProvider_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CDevices__CPwm__CProvider__CIPwmControllerProvider_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CDevices__CPwm__CProvider__CIPwmControllerProvider_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CDevices__CPwm__CProvider__CIPwmControllerProvider_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CDevices__CPwm__CProvider__CIPwmControllerProvider_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CDevices__CPwm__CProvider__CIPwmControllerProvider_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CDevices__CPwm__CProvider__CIPwmControllerProvider_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CDevices__CPwm__CProvider__CIPwmControllerProvider_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CDevices__CPwm__CProvider__CIPwmControllerProvider_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CDevices__CPwm__CProvider__CIPwmControllerProvider_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CDevices__CPwm__CProvider__CIPwmControllerProvider_INTERFACE_DEFINED__

#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000


#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CDevices__CPwm__CProvider__CIPwmControllerProvider_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CDevices__CPwm__CProvider__CIPwmControllerProvider_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CDevices__CPwm__CProvider__CIPwmControllerProvider __FIIterable_1_Windows__CDevices__CPwm__CProvider__CIPwmControllerProvider;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CDevices__CPwm__CProvider__CIPwmControllerProvider;

typedef  struct __FIIterable_1_Windows__CDevices__CPwm__CProvider__CIPwmControllerProviderVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CDevices__CPwm__CProvider__CIPwmControllerProvider * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CDevices__CPwm__CProvider__CIPwmControllerProvider * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CDevices__CPwm__CProvider__CIPwmControllerProvider * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CDevices__CPwm__CProvider__CIPwmControllerProvider * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CDevices__CPwm__CProvider__CIPwmControllerProvider * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CDevices__CPwm__CProvider__CIPwmControllerProvider * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CDevices__CPwm__CProvider__CIPwmControllerProvider * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CDevices__CPwm__CProvider__CIPwmControllerProvider **first);

    END_INTERFACE
} __FIIterable_1_Windows__CDevices__CPwm__CProvider__CIPwmControllerProviderVtbl;

interface __FIIterable_1_Windows__CDevices__CPwm__CProvider__CIPwmControllerProvider
{
    CONST_VTBL struct __FIIterable_1_Windows__CDevices__CPwm__CProvider__CIPwmControllerProviderVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CDevices__CPwm__CProvider__CIPwmControllerProvider_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CDevices__CPwm__CProvider__CIPwmControllerProvider_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CDevices__CPwm__CProvider__CIPwmControllerProvider_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CDevices__CPwm__CProvider__CIPwmControllerProvider_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CDevices__CPwm__CProvider__CIPwmControllerProvider_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CDevices__CPwm__CProvider__CIPwmControllerProvider_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CDevices__CPwm__CProvider__CIPwmControllerProvider_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CDevices__CPwm__CProvider__CIPwmControllerProvider_INTERFACE_DEFINED__

#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000


#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CDevices__CPwm__CProvider__CIPwmControllerProvider_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CDevices__CPwm__CProvider__CIPwmControllerProvider_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CDevices__CPwm__CProvider__CIPwmControllerProvider __FIVectorView_1_Windows__CDevices__CPwm__CProvider__CIPwmControllerProvider;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CDevices__CPwm__CProvider__CIPwmControllerProvider;

typedef struct __FIVectorView_1_Windows__CDevices__CPwm__CProvider__CIPwmControllerProviderVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CPwm__CProvider__CIPwmControllerProvider * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CDevices__CPwm__CProvider__CIPwmControllerProvider * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CDevices__CPwm__CProvider__CIPwmControllerProvider * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CDevices__CPwm__CProvider__CIPwmControllerProvider * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CPwm__CProvider__CIPwmControllerProvider * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CPwm__CProvider__CIPwmControllerProvider * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CDevices__CPwm__CProvider__CIPwmControllerProvider * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CDevices_CPwm_CProvider_CIPwmControllerProvider * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CDevices__CPwm__CProvider__CIPwmControllerProvider * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CPwm__CProvider__CIPwmControllerProvider * This,
            /* [in] */ __x_ABI_CWindows_CDevices_CPwm_CProvider_CIPwmControllerProvider * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CPwm__CProvider__CIPwmControllerProvider * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CPwm_CProvider_CIPwmControllerProvider * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CDevices__CPwm__CProvider__CIPwmControllerProviderVtbl;

interface __FIVectorView_1_Windows__CDevices__CPwm__CProvider__CIPwmControllerProvider
{
    CONST_VTBL struct __FIVectorView_1_Windows__CDevices__CPwm__CProvider__CIPwmControllerProviderVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CDevices__CPwm__CProvider__CIPwmControllerProvider_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CDevices__CPwm__CProvider__CIPwmControllerProvider_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CDevices__CPwm__CProvider__CIPwmControllerProvider_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CDevices__CPwm__CProvider__CIPwmControllerProvider_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CDevices__CPwm__CProvider__CIPwmControllerProvider_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CDevices__CPwm__CProvider__CIPwmControllerProvider_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CDevices__CPwm__CProvider__CIPwmControllerProvider_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CDevices__CPwm__CProvider__CIPwmControllerProvider_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CDevices__CPwm__CProvider__CIPwmControllerProvider_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CDevices__CPwm__CProvider__CIPwmControllerProvider_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CDevices__CPwm__CProvider__CIPwmControllerProvider_INTERFACE_DEFINED__

#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000

















/*
 *
 * Interface Windows.Devices.Pwm.Provider.IPwmControllerProvider
 *
 * Introduced to Windows.Devices.DevicesLowLevelContract in version 1.0
 *
 *
 */
#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CPwm_CProvider_CIPwmControllerProvider_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CPwm_CProvider_CIPwmControllerProvider_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Pwm_Provider_IPwmControllerProvider[] = L"Windows.Devices.Pwm.Provider.IPwmControllerProvider";
/* [object, uuid("1300593B-E2E3-40A4-B7D9-48DFF0377A52"), contract] */
typedef struct __x_ABI_CWindows_CDevices_CPwm_CProvider_CIPwmControllerProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPwm_CProvider_CIPwmControllerProvider * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPwm_CProvider_CIPwmControllerProvider * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPwm_CProvider_CIPwmControllerProvider * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPwm_CProvider_CIPwmControllerProvider * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPwm_CProvider_CIPwmControllerProvider * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPwm_CProvider_CIPwmControllerProvider * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PinCount )(
        __x_ABI_CWindows_CDevices_CPwm_CProvider_CIPwmControllerProvider * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ActualFrequency )(
        __x_ABI_CWindows_CDevices_CPwm_CProvider_CIPwmControllerProvider * This,
        /* [retval, out] */__RPC__out DOUBLE * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetDesiredFrequency )(
        __x_ABI_CWindows_CDevices_CPwm_CProvider_CIPwmControllerProvider * This,
        /* [in] */DOUBLE frequency,
        /* [retval, out] */__RPC__out DOUBLE * result
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MaxFrequency )(
        __x_ABI_CWindows_CDevices_CPwm_CProvider_CIPwmControllerProvider * This,
        /* [retval, out] */__RPC__out DOUBLE * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MinFrequency )(
        __x_ABI_CWindows_CDevices_CPwm_CProvider_CIPwmControllerProvider * This,
        /* [retval, out] */__RPC__out DOUBLE * value
        );
    HRESULT ( STDMETHODCALLTYPE *AcquirePin )(
        __x_ABI_CWindows_CDevices_CPwm_CProvider_CIPwmControllerProvider * This,
        /* [in] */INT32 pin
        );
    HRESULT ( STDMETHODCALLTYPE *ReleasePin )(
        __x_ABI_CWindows_CDevices_CPwm_CProvider_CIPwmControllerProvider * This,
        /* [in] */INT32 pin
        );
    HRESULT ( STDMETHODCALLTYPE *EnablePin )(
        __x_ABI_CWindows_CDevices_CPwm_CProvider_CIPwmControllerProvider * This,
        /* [in] */INT32 pin
        );
    HRESULT ( STDMETHODCALLTYPE *DisablePin )(
        __x_ABI_CWindows_CDevices_CPwm_CProvider_CIPwmControllerProvider * This,
        /* [in] */INT32 pin
        );
    HRESULT ( STDMETHODCALLTYPE *SetPulseParameters )(
        __x_ABI_CWindows_CDevices_CPwm_CProvider_CIPwmControllerProvider * This,
        /* [in] */INT32 pin,
        /* [in] */DOUBLE dutyCycle,
        /* [in] */boolean invertPolarity
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CPwm_CProvider_CIPwmControllerProviderVtbl;

interface __x_ABI_CWindows_CDevices_CPwm_CProvider_CIPwmControllerProvider
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPwm_CProvider_CIPwmControllerProviderVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CPwm_CProvider_CIPwmControllerProvider_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CPwm_CProvider_CIPwmControllerProvider_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CPwm_CProvider_CIPwmControllerProvider_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CPwm_CProvider_CIPwmControllerProvider_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CPwm_CProvider_CIPwmControllerProvider_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CPwm_CProvider_CIPwmControllerProvider_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CPwm_CProvider_CIPwmControllerProvider_get_PinCount(This,value) \
    ( (This)->lpVtbl->get_PinCount(This,value) )

#define __x_ABI_CWindows_CDevices_CPwm_CProvider_CIPwmControllerProvider_get_ActualFrequency(This,value) \
    ( (This)->lpVtbl->get_ActualFrequency(This,value) )

#define __x_ABI_CWindows_CDevices_CPwm_CProvider_CIPwmControllerProvider_SetDesiredFrequency(This,frequency,result) \
    ( (This)->lpVtbl->SetDesiredFrequency(This,frequency,result) )

#define __x_ABI_CWindows_CDevices_CPwm_CProvider_CIPwmControllerProvider_get_MaxFrequency(This,value) \
    ( (This)->lpVtbl->get_MaxFrequency(This,value) )

#define __x_ABI_CWindows_CDevices_CPwm_CProvider_CIPwmControllerProvider_get_MinFrequency(This,value) \
    ( (This)->lpVtbl->get_MinFrequency(This,value) )

#define __x_ABI_CWindows_CDevices_CPwm_CProvider_CIPwmControllerProvider_AcquirePin(This,pin) \
    ( (This)->lpVtbl->AcquirePin(This,pin) )

#define __x_ABI_CWindows_CDevices_CPwm_CProvider_CIPwmControllerProvider_ReleasePin(This,pin) \
    ( (This)->lpVtbl->ReleasePin(This,pin) )

#define __x_ABI_CWindows_CDevices_CPwm_CProvider_CIPwmControllerProvider_EnablePin(This,pin) \
    ( (This)->lpVtbl->EnablePin(This,pin) )

#define __x_ABI_CWindows_CDevices_CPwm_CProvider_CIPwmControllerProvider_DisablePin(This,pin) \
    ( (This)->lpVtbl->DisablePin(This,pin) )

#define __x_ABI_CWindows_CDevices_CPwm_CProvider_CIPwmControllerProvider_SetPulseParameters(This,pin,dutyCycle,invertPolarity) \
    ( (This)->lpVtbl->SetPulseParameters(This,pin,dutyCycle,invertPolarity) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPwm_CProvider_CIPwmControllerProvider;
#endif /* !defined(____x_ABI_CWindows_CDevices_CPwm_CProvider_CIPwmControllerProvider_INTERFACE_DEFINED__) */
#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Pwm.Provider.IPwmProvider
 *
 * Introduced to Windows.Devices.DevicesLowLevelContract in version 1.0
 *
 *
 */
#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CPwm_CProvider_CIPwmProvider_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CPwm_CProvider_CIPwmProvider_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Pwm_Provider_IPwmProvider[] = L"Windows.Devices.Pwm.Provider.IPwmProvider";
/* [object, uuid("A3301228-52F1-47B0-9349-66BA43D25902"), contract] */
typedef struct __x_ABI_CWindows_CDevices_CPwm_CProvider_CIPwmProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPwm_CProvider_CIPwmProvider * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPwm_CProvider_CIPwmProvider * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPwm_CProvider_CIPwmProvider * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPwm_CProvider_CIPwmProvider * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPwm_CProvider_CIPwmProvider * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPwm_CProvider_CIPwmProvider * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetControllers )(
        __x_ABI_CWindows_CDevices_CPwm_CProvider_CIPwmProvider * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CPwm__CProvider__CIPwmControllerProvider * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CPwm_CProvider_CIPwmProviderVtbl;

interface __x_ABI_CWindows_CDevices_CPwm_CProvider_CIPwmProvider
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPwm_CProvider_CIPwmProviderVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CPwm_CProvider_CIPwmProvider_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CPwm_CProvider_CIPwmProvider_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CPwm_CProvider_CIPwmProvider_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CPwm_CProvider_CIPwmProvider_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CPwm_CProvider_CIPwmProvider_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CPwm_CProvider_CIPwmProvider_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CPwm_CProvider_CIPwmProvider_GetControllers(This,result) \
    ( (This)->lpVtbl->GetControllers(This,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPwm_CProvider_CIPwmProvider;
#endif /* !defined(____x_ABI_CWindows_CDevices_CPwm_CProvider_CIPwmProvider_INTERFACE_DEFINED__) */
#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000





#endif // defined(__cplusplus)
#pragma pop_macro("MIDL_CONST_ID")
// Restore the original value of the 'DEPRECATED' macro
#pragma pop_macro("DEPRECATED")

#ifdef __clang__
#pragma clang diagnostic pop // deprecated-declarations
#else
#pragma warning(pop)
#endif
#endif // __windows2Edevices2Epwm2Eprovider_p_h__

#endif // __windows2Edevices2Epwm2Eprovider_h__
