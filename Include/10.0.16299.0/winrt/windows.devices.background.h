/* Header file automatically generated from windows.devices.background.idl */
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
#ifndef __windows2Edevices2Ebackground_h__
#define __windows2Edevices2Ebackground_h__
#ifndef __windows2Edevices2Ebackground_p_h__
#define __windows2Edevices2Ebackground_p_h__


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

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CDevices_CBackground_CIDeviceServicingDetails_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CBackground_CIDeviceServicingDetails_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Background {
                interface IDeviceServicingDetails;
            } /* Windows */
        } /* Devices */
    } /* Background */} /* ABI */
#define __x_ABI_CWindows_CDevices_CBackground_CIDeviceServicingDetails ABI::Windows::Devices::Background::IDeviceServicingDetails

#endif // ____x_ABI_CWindows_CDevices_CBackground_CIDeviceServicingDetails_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CBackground_CIDeviceUseDetails_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CBackground_CIDeviceUseDetails_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Background {
                interface IDeviceUseDetails;
            } /* Windows */
        } /* Devices */
    } /* Background */} /* ABI */
#define __x_ABI_CWindows_CDevices_CBackground_CIDeviceUseDetails ABI::Windows::Devices::Background::IDeviceUseDetails

#endif // ____x_ABI_CWindows_CDevices_CBackground_CIDeviceUseDetails_FWD_DEFINED__


namespace ABI {
    namespace Windows {
        namespace Foundation {
            
            typedef struct TimeSpan TimeSpan;
            
        } /* Windows */
    } /* Foundation */} /* ABI */






namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Background {
                class DeviceServicingDetails;
            } /* Windows */
        } /* Devices */
    } /* Background */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Background {
                class DeviceUseDetails;
            } /* Windows */
        } /* Devices */
    } /* Background */} /* ABI */






/*
 *
 * Interface Windows.Devices.Background.IDeviceServicingDetails
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Background.DeviceServicingDetails
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CBackground_CIDeviceServicingDetails_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CBackground_CIDeviceServicingDetails_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Background_IDeviceServicingDetails[] = L"Windows.Devices.Background.IDeviceServicingDetails";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Background {
                /* [object, uuid("4AABEE29-2344-4AC4-8527-4A8EF6905645"), exclusiveto, contract] */
                MIDL_INTERFACE("4AABEE29-2344-4AC4-8527-4A8EF6905645")
                IDeviceServicingDetails : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DeviceId(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Arguments(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ExpectedDuration(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::TimeSpan * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IDeviceServicingDetails=_uuidof(IDeviceServicingDetails);
                
            } /* Windows */
        } /* Devices */
    } /* Background */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBackground_CIDeviceServicingDetails;
#endif /* !defined(____x_ABI_CWindows_CDevices_CBackground_CIDeviceServicingDetails_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Background.IDeviceUseDetails
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Background.DeviceUseDetails
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CBackground_CIDeviceUseDetails_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CBackground_CIDeviceUseDetails_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Background_IDeviceUseDetails[] = L"Windows.Devices.Background.IDeviceUseDetails";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Background {
                /* [object, uuid("7D565141-557E-4154-B994-E4F7A11FB323"), exclusiveto, contract] */
                MIDL_INTERFACE("7D565141-557E-4154-B994-E4F7A11FB323")
                IDeviceUseDetails : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DeviceId(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Arguments(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IDeviceUseDetails=_uuidof(IDeviceUseDetails);
                
            } /* Windows */
        } /* Devices */
    } /* Background */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBackground_CIDeviceUseDetails;
#endif /* !defined(____x_ABI_CWindows_CDevices_CBackground_CIDeviceUseDetails_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Background.DeviceServicingDetails
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Background.IDeviceServicingDetails ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Background_DeviceServicingDetails_DEFINED
#define RUNTIMECLASS_Windows_Devices_Background_DeviceServicingDetails_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Background_DeviceServicingDetails[] = L"Windows.Devices.Background.DeviceServicingDetails";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Background.DeviceUseDetails
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Background.IDeviceUseDetails ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Background_DeviceUseDetails_DEFINED
#define RUNTIMECLASS_Windows_Devices_Background_DeviceUseDetails_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Background_DeviceUseDetails[] = L"Windows.Devices.Background.DeviceUseDetails";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000




#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CDevices_CBackground_CIDeviceServicingDetails_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CBackground_CIDeviceServicingDetails_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CBackground_CIDeviceServicingDetails __x_ABI_CWindows_CDevices_CBackground_CIDeviceServicingDetails;

#endif // ____x_ABI_CWindows_CDevices_CBackground_CIDeviceServicingDetails_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CBackground_CIDeviceUseDetails_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CBackground_CIDeviceUseDetails_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CBackground_CIDeviceUseDetails __x_ABI_CWindows_CDevices_CBackground_CIDeviceUseDetails;

#endif // ____x_ABI_CWindows_CDevices_CBackground_CIDeviceUseDetails_FWD_DEFINED__


typedef struct __x_ABI_CWindows_CFoundation_CTimeSpan __x_ABI_CWindows_CFoundation_CTimeSpan;












/*
 *
 * Interface Windows.Devices.Background.IDeviceServicingDetails
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Background.DeviceServicingDetails
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CBackground_CIDeviceServicingDetails_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CBackground_CIDeviceServicingDetails_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Background_IDeviceServicingDetails[] = L"Windows.Devices.Background.IDeviceServicingDetails";
/* [object, uuid("4AABEE29-2344-4AC4-8527-4A8EF6905645"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CBackground_CIDeviceServicingDetailsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CBackground_CIDeviceServicingDetails * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CBackground_CIDeviceServicingDetails * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CBackground_CIDeviceServicingDetails * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CBackground_CIDeviceServicingDetails * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CBackground_CIDeviceServicingDetails * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CBackground_CIDeviceServicingDetails * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DeviceId )(
        __x_ABI_CWindows_CDevices_CBackground_CIDeviceServicingDetails * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Arguments )(
        __x_ABI_CWindows_CDevices_CBackground_CIDeviceServicingDetails * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ExpectedDuration )(
        __x_ABI_CWindows_CDevices_CBackground_CIDeviceServicingDetails * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CBackground_CIDeviceServicingDetailsVtbl;

interface __x_ABI_CWindows_CDevices_CBackground_CIDeviceServicingDetails
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CBackground_CIDeviceServicingDetailsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CBackground_CIDeviceServicingDetails_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CBackground_CIDeviceServicingDetails_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CBackground_CIDeviceServicingDetails_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CBackground_CIDeviceServicingDetails_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CBackground_CIDeviceServicingDetails_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CBackground_CIDeviceServicingDetails_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CBackground_CIDeviceServicingDetails_get_DeviceId(This,value) \
    ( (This)->lpVtbl->get_DeviceId(This,value) )

#define __x_ABI_CWindows_CDevices_CBackground_CIDeviceServicingDetails_get_Arguments(This,value) \
    ( (This)->lpVtbl->get_Arguments(This,value) )

#define __x_ABI_CWindows_CDevices_CBackground_CIDeviceServicingDetails_get_ExpectedDuration(This,value) \
    ( (This)->lpVtbl->get_ExpectedDuration(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBackground_CIDeviceServicingDetails;
#endif /* !defined(____x_ABI_CWindows_CDevices_CBackground_CIDeviceServicingDetails_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Background.IDeviceUseDetails
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Background.DeviceUseDetails
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CBackground_CIDeviceUseDetails_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CBackground_CIDeviceUseDetails_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Background_IDeviceUseDetails[] = L"Windows.Devices.Background.IDeviceUseDetails";
/* [object, uuid("7D565141-557E-4154-B994-E4F7A11FB323"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CBackground_CIDeviceUseDetailsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CBackground_CIDeviceUseDetails * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CBackground_CIDeviceUseDetails * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CBackground_CIDeviceUseDetails * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CBackground_CIDeviceUseDetails * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CBackground_CIDeviceUseDetails * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CBackground_CIDeviceUseDetails * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DeviceId )(
        __x_ABI_CWindows_CDevices_CBackground_CIDeviceUseDetails * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Arguments )(
        __x_ABI_CWindows_CDevices_CBackground_CIDeviceUseDetails * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CBackground_CIDeviceUseDetailsVtbl;

interface __x_ABI_CWindows_CDevices_CBackground_CIDeviceUseDetails
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CBackground_CIDeviceUseDetailsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CBackground_CIDeviceUseDetails_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CBackground_CIDeviceUseDetails_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CBackground_CIDeviceUseDetails_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CBackground_CIDeviceUseDetails_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CBackground_CIDeviceUseDetails_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CBackground_CIDeviceUseDetails_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CBackground_CIDeviceUseDetails_get_DeviceId(This,value) \
    ( (This)->lpVtbl->get_DeviceId(This,value) )

#define __x_ABI_CWindows_CDevices_CBackground_CIDeviceUseDetails_get_Arguments(This,value) \
    ( (This)->lpVtbl->get_Arguments(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBackground_CIDeviceUseDetails;
#endif /* !defined(____x_ABI_CWindows_CDevices_CBackground_CIDeviceUseDetails_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Background.DeviceServicingDetails
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Background.IDeviceServicingDetails ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Background_DeviceServicingDetails_DEFINED
#define RUNTIMECLASS_Windows_Devices_Background_DeviceServicingDetails_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Background_DeviceServicingDetails[] = L"Windows.Devices.Background.DeviceServicingDetails";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Background.DeviceUseDetails
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Background.IDeviceUseDetails ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Background_DeviceUseDetails_DEFINED
#define RUNTIMECLASS_Windows_Devices_Background_DeviceUseDetails_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Background_DeviceUseDetails[] = L"Windows.Devices.Background.DeviceUseDetails";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000




#endif // defined(__cplusplus)
#pragma pop_macro("MIDL_CONST_ID")
// Restore the original value of the 'DEPRECATED' macro
#pragma pop_macro("DEPRECATED")

#ifdef __clang__
#pragma clang diagnostic pop // deprecated-declarations
#else
#pragma warning(pop)
#endif
#endif // __windows2Edevices2Ebackground_p_h__

#endif // __windows2Edevices2Ebackground_h__
