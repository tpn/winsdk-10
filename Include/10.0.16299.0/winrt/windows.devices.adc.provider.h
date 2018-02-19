/* Header file automatically generated from windows.devices.adc.provider.idl */
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
#ifndef __windows2Edevices2Eadc2Eprovider_h__
#define __windows2Edevices2Eadc2Eprovider_h__
#ifndef __windows2Edevices2Eadc2Eprovider_p_h__
#define __windows2Edevices2Eadc2Eprovider_p_h__


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
#ifndef ____x_ABI_CWindows_CDevices_CAdc_CProvider_CIAdcControllerProvider_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CAdc_CProvider_CIAdcControllerProvider_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Adc {
                namespace Provider {
                    interface IAdcControllerProvider;
                } /* Windows */
            } /* Devices */
        } /* Adc */
    } /* Provider */} /* ABI */
#define __x_ABI_CWindows_CDevices_CAdc_CProvider_CIAdcControllerProvider ABI::Windows::Devices::Adc::Provider::IAdcControllerProvider

#endif // ____x_ABI_CWindows_CDevices_CAdc_CProvider_CIAdcControllerProvider_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CAdc_CProvider_CIAdcProvider_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CAdc_CProvider_CIAdcProvider_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Adc {
                namespace Provider {
                    interface IAdcProvider;
                } /* Windows */
            } /* Devices */
        } /* Adc */
    } /* Provider */} /* ABI */
#define __x_ABI_CWindows_CDevices_CAdc_CProvider_CIAdcProvider ABI::Windows::Devices::Adc::Provider::IAdcProvider

#endif // ____x_ABI_CWindows_CDevices_CAdc_CProvider_CIAdcProvider_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions

#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CDevices__CAdc__CProvider__CIAdcControllerProvider_USE
#define DEF___FIIterator_1_Windows__CDevices__CAdc__CProvider__CIAdcControllerProvider_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("b43acf15-a24a-5b00-b710-1737ba550a18"))
IIterator<ABI::Windows::Devices::Adc::Provider::IAdcControllerProvider*> : IIterator_impl<ABI::Windows::Devices::Adc::Provider::IAdcControllerProvider*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Devices.Adc.Provider.IAdcControllerProvider>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Devices::Adc::Provider::IAdcControllerProvider*> __FIIterator_1_Windows__CDevices__CAdc__CProvider__CIAdcControllerProvider_t;
#define __FIIterator_1_Windows__CDevices__CAdc__CProvider__CIAdcControllerProvider ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CDevices__CAdc__CProvider__CIAdcControllerProvider_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CDevices__CAdc__CProvider__CIAdcControllerProvider ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Devices::Adc::Provider::IAdcControllerProvider*>
//#define __FIIterator_1_Windows__CDevices__CAdc__CProvider__CIAdcControllerProvider_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Devices::Adc::Provider::IAdcControllerProvider*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CDevices__CAdc__CProvider__CIAdcControllerProvider_USE */


#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000


#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CDevices__CAdc__CProvider__CIAdcControllerProvider_USE
#define DEF___FIIterable_1_Windows__CDevices__CAdc__CProvider__CIAdcControllerProvider_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("30047155-1f71-5223-8482-e5159d0137d0"))
IIterable<ABI::Windows::Devices::Adc::Provider::IAdcControllerProvider*> : IIterable_impl<ABI::Windows::Devices::Adc::Provider::IAdcControllerProvider*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Devices.Adc.Provider.IAdcControllerProvider>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Devices::Adc::Provider::IAdcControllerProvider*> __FIIterable_1_Windows__CDevices__CAdc__CProvider__CIAdcControllerProvider_t;
#define __FIIterable_1_Windows__CDevices__CAdc__CProvider__CIAdcControllerProvider ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CDevices__CAdc__CProvider__CIAdcControllerProvider_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CDevices__CAdc__CProvider__CIAdcControllerProvider ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Devices::Adc::Provider::IAdcControllerProvider*>
//#define __FIIterable_1_Windows__CDevices__CAdc__CProvider__CIAdcControllerProvider_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Devices::Adc::Provider::IAdcControllerProvider*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CDevices__CAdc__CProvider__CIAdcControllerProvider_USE */


#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000


#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CDevices__CAdc__CProvider__CIAdcControllerProvider_USE
#define DEF___FIVectorView_1_Windows__CDevices__CAdc__CProvider__CIAdcControllerProvider_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("7c4789c0-8445-5757-aab7-659cbf50aaa7"))
IVectorView<ABI::Windows::Devices::Adc::Provider::IAdcControllerProvider*> : IVectorView_impl<ABI::Windows::Devices::Adc::Provider::IAdcControllerProvider*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Devices.Adc.Provider.IAdcControllerProvider>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Devices::Adc::Provider::IAdcControllerProvider*> __FIVectorView_1_Windows__CDevices__CAdc__CProvider__CIAdcControllerProvider_t;
#define __FIVectorView_1_Windows__CDevices__CAdc__CProvider__CIAdcControllerProvider ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CDevices__CAdc__CProvider__CIAdcControllerProvider_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CDevices__CAdc__CProvider__CIAdcControllerProvider ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Devices::Adc::Provider::IAdcControllerProvider*>
//#define __FIVectorView_1_Windows__CDevices__CAdc__CProvider__CIAdcControllerProvider_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Devices::Adc::Provider::IAdcControllerProvider*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CDevices__CAdc__CProvider__CIAdcControllerProvider_USE */


#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000






namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Adc {
                namespace Provider {
                    
                    typedef enum ProviderAdcChannelMode : int ProviderAdcChannelMode;
                    
                } /* Windows */
            } /* Devices */
        } /* Adc */
    } /* Provider */} /* ABI */













/*
 *
 * Struct Windows.Devices.Adc.Provider.ProviderAdcChannelMode
 *
 * Introduced to Windows.Devices.DevicesLowLevelContract in version 1.0
 *
 *
 */

#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Adc {
                namespace Provider {
                    /* [v1_enum, contract] */
                    enum ProviderAdcChannelMode : int
                    {
                        ProviderAdcChannelMode_SingleEnded = 0,
                        ProviderAdcChannelMode_Differential = 1,
                    };
                    
                } /* Windows */
            } /* Devices */
        } /* Adc */
    } /* Provider */} /* ABI */
#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Adc.Provider.IAdcControllerProvider
 *
 * Introduced to Windows.Devices.DevicesLowLevelContract in version 1.0
 *
 *
 */
#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CAdc_CProvider_CIAdcControllerProvider_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CAdc_CProvider_CIAdcControllerProvider_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Adc_Provider_IAdcControllerProvider[] = L"Windows.Devices.Adc.Provider.IAdcControllerProvider";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Adc {
                namespace Provider {
                    /* [object, uuid("BE545828-816D-4DE5-A048-ABA06958AAA8"), contract] */
                    MIDL_INTERFACE("BE545828-816D-4DE5-A048-ABA06958AAA8")
                    IAdcControllerProvider : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ChannelCount(
                            /* [retval, out] */__RPC__out INT32 * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ResolutionInBits(
                            /* [retval, out] */__RPC__out INT32 * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MinValue(
                            /* [retval, out] */__RPC__out INT32 * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MaxValue(
                            /* [retval, out] */__RPC__out INT32 * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ChannelMode(
                            /* [retval, out] */__RPC__out ABI::Windows::Devices::Adc::Provider::ProviderAdcChannelMode * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ChannelMode(
                            /* [in] */ABI::Windows::Devices::Adc::Provider::ProviderAdcChannelMode value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE IsChannelModeSupported(
                            /* [in] */ABI::Windows::Devices::Adc::Provider::ProviderAdcChannelMode channelMode,
                            /* [retval, out] */__RPC__out boolean * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE AcquireChannel(
                            /* [in] */INT32 channel
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE ReleaseChannel(
                            /* [in] */INT32 channel
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE ReadValue(
                            /* [in] */INT32 channelNumber,
                            /* [retval, out] */__RPC__out INT32 * result
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IAdcControllerProvider=_uuidof(IAdcControllerProvider);
                    
                } /* Windows */
            } /* Devices */
        } /* Adc */
    } /* Provider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CAdc_CProvider_CIAdcControllerProvider;
#endif /* !defined(____x_ABI_CWindows_CDevices_CAdc_CProvider_CIAdcControllerProvider_INTERFACE_DEFINED__) */
#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Adc.Provider.IAdcProvider
 *
 * Introduced to Windows.Devices.DevicesLowLevelContract in version 1.0
 *
 *
 */
#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CAdc_CProvider_CIAdcProvider_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CAdc_CProvider_CIAdcProvider_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Adc_Provider_IAdcProvider[] = L"Windows.Devices.Adc.Provider.IAdcProvider";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Adc {
                namespace Provider {
                    /* [object, uuid("28953668-9359-4C57-BC88-E275E81638C9"), contract] */
                    MIDL_INTERFACE("28953668-9359-4C57-BC88-E275E81638C9")
                    IAdcProvider : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE GetControllers(
                            /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CAdc__CProvider__CIAdcControllerProvider * * result
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IAdcProvider=_uuidof(IAdcProvider);
                    
                } /* Windows */
            } /* Devices */
        } /* Adc */
    } /* Provider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CAdc_CProvider_CIAdcProvider;
#endif /* !defined(____x_ABI_CWindows_CDevices_CAdc_CProvider_CIAdcProvider_INTERFACE_DEFINED__) */
#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000





#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CDevices_CAdc_CProvider_CIAdcControllerProvider_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CAdc_CProvider_CIAdcControllerProvider_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CAdc_CProvider_CIAdcControllerProvider __x_ABI_CWindows_CDevices_CAdc_CProvider_CIAdcControllerProvider;

#endif // ____x_ABI_CWindows_CDevices_CAdc_CProvider_CIAdcControllerProvider_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CAdc_CProvider_CIAdcProvider_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CAdc_CProvider_CIAdcProvider_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CAdc_CProvider_CIAdcProvider __x_ABI_CWindows_CDevices_CAdc_CProvider_CIAdcProvider;

#endif // ____x_ABI_CWindows_CDevices_CAdc_CProvider_CIAdcProvider_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CDevices__CAdc__CProvider__CIAdcControllerProvider_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CDevices__CAdc__CProvider__CIAdcControllerProvider_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CDevices__CAdc__CProvider__CIAdcControllerProvider __FIIterator_1_Windows__CDevices__CAdc__CProvider__CIAdcControllerProvider;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CDevices__CAdc__CProvider__CIAdcControllerProvider;

typedef struct __FIIterator_1_Windows__CDevices__CAdc__CProvider__CIAdcControllerProviderVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CDevices__CAdc__CProvider__CIAdcControllerProvider * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CDevices__CAdc__CProvider__CIAdcControllerProvider * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CDevices__CAdc__CProvider__CIAdcControllerProvider * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CDevices__CAdc__CProvider__CIAdcControllerProvider * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CDevices__CAdc__CProvider__CIAdcControllerProvider * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CDevices__CAdc__CProvider__CIAdcControllerProvider * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CDevices__CAdc__CProvider__CIAdcControllerProvider * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CDevices_CAdc_CProvider_CIAdcControllerProvider * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CDevices__CAdc__CProvider__CIAdcControllerProvider * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CDevices__CAdc__CProvider__CIAdcControllerProvider * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CDevices__CAdc__CProvider__CIAdcControllerProvider * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CAdc_CProvider_CIAdcControllerProvider * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CDevices__CAdc__CProvider__CIAdcControllerProviderVtbl;

interface __FIIterator_1_Windows__CDevices__CAdc__CProvider__CIAdcControllerProvider
{
    CONST_VTBL struct __FIIterator_1_Windows__CDevices__CAdc__CProvider__CIAdcControllerProviderVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CDevices__CAdc__CProvider__CIAdcControllerProvider_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CDevices__CAdc__CProvider__CIAdcControllerProvider_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CDevices__CAdc__CProvider__CIAdcControllerProvider_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CDevices__CAdc__CProvider__CIAdcControllerProvider_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CDevices__CAdc__CProvider__CIAdcControllerProvider_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CDevices__CAdc__CProvider__CIAdcControllerProvider_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CDevices__CAdc__CProvider__CIAdcControllerProvider_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CDevices__CAdc__CProvider__CIAdcControllerProvider_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CDevices__CAdc__CProvider__CIAdcControllerProvider_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CDevices__CAdc__CProvider__CIAdcControllerProvider_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CDevices__CAdc__CProvider__CIAdcControllerProvider_INTERFACE_DEFINED__

#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000


#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CDevices__CAdc__CProvider__CIAdcControllerProvider_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CDevices__CAdc__CProvider__CIAdcControllerProvider_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CDevices__CAdc__CProvider__CIAdcControllerProvider __FIIterable_1_Windows__CDevices__CAdc__CProvider__CIAdcControllerProvider;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CDevices__CAdc__CProvider__CIAdcControllerProvider;

typedef  struct __FIIterable_1_Windows__CDevices__CAdc__CProvider__CIAdcControllerProviderVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CDevices__CAdc__CProvider__CIAdcControllerProvider * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CDevices__CAdc__CProvider__CIAdcControllerProvider * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CDevices__CAdc__CProvider__CIAdcControllerProvider * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CDevices__CAdc__CProvider__CIAdcControllerProvider * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CDevices__CAdc__CProvider__CIAdcControllerProvider * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CDevices__CAdc__CProvider__CIAdcControllerProvider * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CDevices__CAdc__CProvider__CIAdcControllerProvider * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CDevices__CAdc__CProvider__CIAdcControllerProvider **first);

    END_INTERFACE
} __FIIterable_1_Windows__CDevices__CAdc__CProvider__CIAdcControllerProviderVtbl;

interface __FIIterable_1_Windows__CDevices__CAdc__CProvider__CIAdcControllerProvider
{
    CONST_VTBL struct __FIIterable_1_Windows__CDevices__CAdc__CProvider__CIAdcControllerProviderVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CDevices__CAdc__CProvider__CIAdcControllerProvider_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CDevices__CAdc__CProvider__CIAdcControllerProvider_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CDevices__CAdc__CProvider__CIAdcControllerProvider_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CDevices__CAdc__CProvider__CIAdcControllerProvider_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CDevices__CAdc__CProvider__CIAdcControllerProvider_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CDevices__CAdc__CProvider__CIAdcControllerProvider_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CDevices__CAdc__CProvider__CIAdcControllerProvider_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CDevices__CAdc__CProvider__CIAdcControllerProvider_INTERFACE_DEFINED__

#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000


#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CDevices__CAdc__CProvider__CIAdcControllerProvider_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CDevices__CAdc__CProvider__CIAdcControllerProvider_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CDevices__CAdc__CProvider__CIAdcControllerProvider __FIVectorView_1_Windows__CDevices__CAdc__CProvider__CIAdcControllerProvider;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CDevices__CAdc__CProvider__CIAdcControllerProvider;

typedef struct __FIVectorView_1_Windows__CDevices__CAdc__CProvider__CIAdcControllerProviderVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CAdc__CProvider__CIAdcControllerProvider * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CDevices__CAdc__CProvider__CIAdcControllerProvider * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CDevices__CAdc__CProvider__CIAdcControllerProvider * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CDevices__CAdc__CProvider__CIAdcControllerProvider * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CAdc__CProvider__CIAdcControllerProvider * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CAdc__CProvider__CIAdcControllerProvider * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CDevices__CAdc__CProvider__CIAdcControllerProvider * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CDevices_CAdc_CProvider_CIAdcControllerProvider * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CDevices__CAdc__CProvider__CIAdcControllerProvider * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CAdc__CProvider__CIAdcControllerProvider * This,
            /* [in] */ __x_ABI_CWindows_CDevices_CAdc_CProvider_CIAdcControllerProvider * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CAdc__CProvider__CIAdcControllerProvider * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CAdc_CProvider_CIAdcControllerProvider * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CDevices__CAdc__CProvider__CIAdcControllerProviderVtbl;

interface __FIVectorView_1_Windows__CDevices__CAdc__CProvider__CIAdcControllerProvider
{
    CONST_VTBL struct __FIVectorView_1_Windows__CDevices__CAdc__CProvider__CIAdcControllerProviderVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CDevices__CAdc__CProvider__CIAdcControllerProvider_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CDevices__CAdc__CProvider__CIAdcControllerProvider_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CDevices__CAdc__CProvider__CIAdcControllerProvider_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CDevices__CAdc__CProvider__CIAdcControllerProvider_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CDevices__CAdc__CProvider__CIAdcControllerProvider_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CDevices__CAdc__CProvider__CIAdcControllerProvider_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CDevices__CAdc__CProvider__CIAdcControllerProvider_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CDevices__CAdc__CProvider__CIAdcControllerProvider_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CDevices__CAdc__CProvider__CIAdcControllerProvider_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CDevices__CAdc__CProvider__CIAdcControllerProvider_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CDevices__CAdc__CProvider__CIAdcControllerProvider_INTERFACE_DEFINED__

#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000






typedef enum __x_ABI_CWindows_CDevices_CAdc_CProvider_CProviderAdcChannelMode __x_ABI_CWindows_CDevices_CAdc_CProvider_CProviderAdcChannelMode;













/*
 *
 * Struct Windows.Devices.Adc.Provider.ProviderAdcChannelMode
 *
 * Introduced to Windows.Devices.DevicesLowLevelContract in version 1.0
 *
 *
 */

#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CDevices_CAdc_CProvider_CProviderAdcChannelMode
{
    ProviderAdcChannelMode_SingleEnded = 0,
    ProviderAdcChannelMode_Differential = 1,
};
#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Adc.Provider.IAdcControllerProvider
 *
 * Introduced to Windows.Devices.DevicesLowLevelContract in version 1.0
 *
 *
 */
#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CAdc_CProvider_CIAdcControllerProvider_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CAdc_CProvider_CIAdcControllerProvider_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Adc_Provider_IAdcControllerProvider[] = L"Windows.Devices.Adc.Provider.IAdcControllerProvider";
/* [object, uuid("BE545828-816D-4DE5-A048-ABA06958AAA8"), contract] */
typedef struct __x_ABI_CWindows_CDevices_CAdc_CProvider_CIAdcControllerProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CAdc_CProvider_CIAdcControllerProvider * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CAdc_CProvider_CIAdcControllerProvider * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CAdc_CProvider_CIAdcControllerProvider * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CAdc_CProvider_CIAdcControllerProvider * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CAdc_CProvider_CIAdcControllerProvider * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CAdc_CProvider_CIAdcControllerProvider * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ChannelCount )(
        __x_ABI_CWindows_CDevices_CAdc_CProvider_CIAdcControllerProvider * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ResolutionInBits )(
        __x_ABI_CWindows_CDevices_CAdc_CProvider_CIAdcControllerProvider * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MinValue )(
        __x_ABI_CWindows_CDevices_CAdc_CProvider_CIAdcControllerProvider * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MaxValue )(
        __x_ABI_CWindows_CDevices_CAdc_CProvider_CIAdcControllerProvider * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ChannelMode )(
        __x_ABI_CWindows_CDevices_CAdc_CProvider_CIAdcControllerProvider * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CDevices_CAdc_CProvider_CProviderAdcChannelMode * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ChannelMode )(
        __x_ABI_CWindows_CDevices_CAdc_CProvider_CIAdcControllerProvider * This,
        /* [in] */__x_ABI_CWindows_CDevices_CAdc_CProvider_CProviderAdcChannelMode value
        );
    HRESULT ( STDMETHODCALLTYPE *IsChannelModeSupported )(
        __x_ABI_CWindows_CDevices_CAdc_CProvider_CIAdcControllerProvider * This,
        /* [in] */__x_ABI_CWindows_CDevices_CAdc_CProvider_CProviderAdcChannelMode channelMode,
        /* [retval, out] */__RPC__out boolean * result
        );
    HRESULT ( STDMETHODCALLTYPE *AcquireChannel )(
        __x_ABI_CWindows_CDevices_CAdc_CProvider_CIAdcControllerProvider * This,
        /* [in] */INT32 channel
        );
    HRESULT ( STDMETHODCALLTYPE *ReleaseChannel )(
        __x_ABI_CWindows_CDevices_CAdc_CProvider_CIAdcControllerProvider * This,
        /* [in] */INT32 channel
        );
    HRESULT ( STDMETHODCALLTYPE *ReadValue )(
        __x_ABI_CWindows_CDevices_CAdc_CProvider_CIAdcControllerProvider * This,
        /* [in] */INT32 channelNumber,
        /* [retval, out] */__RPC__out INT32 * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CAdc_CProvider_CIAdcControllerProviderVtbl;

interface __x_ABI_CWindows_CDevices_CAdc_CProvider_CIAdcControllerProvider
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CAdc_CProvider_CIAdcControllerProviderVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CAdc_CProvider_CIAdcControllerProvider_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CAdc_CProvider_CIAdcControllerProvider_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CAdc_CProvider_CIAdcControllerProvider_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CAdc_CProvider_CIAdcControllerProvider_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CAdc_CProvider_CIAdcControllerProvider_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CAdc_CProvider_CIAdcControllerProvider_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CAdc_CProvider_CIAdcControllerProvider_get_ChannelCount(This,value) \
    ( (This)->lpVtbl->get_ChannelCount(This,value) )

#define __x_ABI_CWindows_CDevices_CAdc_CProvider_CIAdcControllerProvider_get_ResolutionInBits(This,value) \
    ( (This)->lpVtbl->get_ResolutionInBits(This,value) )

#define __x_ABI_CWindows_CDevices_CAdc_CProvider_CIAdcControllerProvider_get_MinValue(This,value) \
    ( (This)->lpVtbl->get_MinValue(This,value) )

#define __x_ABI_CWindows_CDevices_CAdc_CProvider_CIAdcControllerProvider_get_MaxValue(This,value) \
    ( (This)->lpVtbl->get_MaxValue(This,value) )

#define __x_ABI_CWindows_CDevices_CAdc_CProvider_CIAdcControllerProvider_get_ChannelMode(This,value) \
    ( (This)->lpVtbl->get_ChannelMode(This,value) )

#define __x_ABI_CWindows_CDevices_CAdc_CProvider_CIAdcControllerProvider_put_ChannelMode(This,value) \
    ( (This)->lpVtbl->put_ChannelMode(This,value) )

#define __x_ABI_CWindows_CDevices_CAdc_CProvider_CIAdcControllerProvider_IsChannelModeSupported(This,channelMode,result) \
    ( (This)->lpVtbl->IsChannelModeSupported(This,channelMode,result) )

#define __x_ABI_CWindows_CDevices_CAdc_CProvider_CIAdcControllerProvider_AcquireChannel(This,channel) \
    ( (This)->lpVtbl->AcquireChannel(This,channel) )

#define __x_ABI_CWindows_CDevices_CAdc_CProvider_CIAdcControllerProvider_ReleaseChannel(This,channel) \
    ( (This)->lpVtbl->ReleaseChannel(This,channel) )

#define __x_ABI_CWindows_CDevices_CAdc_CProvider_CIAdcControllerProvider_ReadValue(This,channelNumber,result) \
    ( (This)->lpVtbl->ReadValue(This,channelNumber,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CAdc_CProvider_CIAdcControllerProvider;
#endif /* !defined(____x_ABI_CWindows_CDevices_CAdc_CProvider_CIAdcControllerProvider_INTERFACE_DEFINED__) */
#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Adc.Provider.IAdcProvider
 *
 * Introduced to Windows.Devices.DevicesLowLevelContract in version 1.0
 *
 *
 */
#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CAdc_CProvider_CIAdcProvider_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CAdc_CProvider_CIAdcProvider_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Adc_Provider_IAdcProvider[] = L"Windows.Devices.Adc.Provider.IAdcProvider";
/* [object, uuid("28953668-9359-4C57-BC88-E275E81638C9"), contract] */
typedef struct __x_ABI_CWindows_CDevices_CAdc_CProvider_CIAdcProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CAdc_CProvider_CIAdcProvider * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CAdc_CProvider_CIAdcProvider * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CAdc_CProvider_CIAdcProvider * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CAdc_CProvider_CIAdcProvider * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CAdc_CProvider_CIAdcProvider * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CAdc_CProvider_CIAdcProvider * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetControllers )(
        __x_ABI_CWindows_CDevices_CAdc_CProvider_CIAdcProvider * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CAdc__CProvider__CIAdcControllerProvider * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CAdc_CProvider_CIAdcProviderVtbl;

interface __x_ABI_CWindows_CDevices_CAdc_CProvider_CIAdcProvider
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CAdc_CProvider_CIAdcProviderVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CAdc_CProvider_CIAdcProvider_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CAdc_CProvider_CIAdcProvider_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CAdc_CProvider_CIAdcProvider_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CAdc_CProvider_CIAdcProvider_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CAdc_CProvider_CIAdcProvider_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CAdc_CProvider_CIAdcProvider_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CAdc_CProvider_CIAdcProvider_GetControllers(This,result) \
    ( (This)->lpVtbl->GetControllers(This,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CAdc_CProvider_CIAdcProvider;
#endif /* !defined(____x_ABI_CWindows_CDevices_CAdc_CProvider_CIAdcProvider_INTERFACE_DEFINED__) */
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
#endif // __windows2Edevices2Eadc2Eprovider_p_h__

#endif // __windows2Edevices2Eadc2Eprovider_h__
