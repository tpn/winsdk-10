/* Header file automatically generated from windows.management.policies.idl */
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
#ifndef __windows2Emanagement2Epolicies_h__
#define __windows2Emanagement2Epolicies_h__
#ifndef __windows2Emanagement2Epolicies_p_h__
#define __windows2Emanagement2Epolicies_p_h__


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
#if !defined(WINDOWS_APPLICATIONMODEL_ACTIVATION_ACTIVATEDEVENTSCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_ACTIVATION_ACTIVATEDEVENTSCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_APPLICATIONMODEL_ACTIVATION_ACTIVATEDEVENTSCONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_ACTIVATION_ACTIVATIONCAMERASETTINGSCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_ACTIVATION_ACTIVATIONCAMERASETTINGSCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_APPLICATIONMODEL_ACTIVATION_ACTIVATIONCAMERASETTINGSCONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_ACTIVATION_CONTACTACTIVATEDEVENTSCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_ACTIVATION_CONTACTACTIVATEDEVENTSCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_APPLICATIONMODEL_ACTIVATION_CONTACTACTIVATEDEVENTSCONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_ACTIVATION_WEBUISEARCHACTIVATEDEVENTSCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_ACTIVATION_WEBUISEARCHACTIVATEDEVENTSCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_APPLICATIONMODEL_ACTIVATION_WEBUISEARCHACTIVATEDEVENTSCONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_BACKGROUND_BACKGROUNDALARMAPPLICATIONCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_BACKGROUND_BACKGROUNDALARMAPPLICATIONCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_APPLICATIONMODEL_BACKGROUND_BACKGROUNDALARMAPPLICATIONCONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_CALLS_BACKGROUND_CALLSBACKGROUNDCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_CALLS_BACKGROUND_CALLSBACKGROUNDCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_APPLICATIONMODEL_CALLS_BACKGROUND_CALLSBACKGROUNDCONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION 0x30000
#endif // defined(WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_CALLS_CALLSVOIPCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_CALLS_CALLSVOIPCONTRACT_VERSION 0x20000
#endif // defined(WINDOWS_APPLICATIONMODEL_CALLS_CALLSVOIPCONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_CALLS_LOCKSCREENCALLCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_CALLS_LOCKSCREENCALLCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_APPLICATIONMODEL_CALLS_LOCKSCREENCALLCONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_FULLTRUSTAPPCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_FULLTRUSTAPPCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_APPLICATIONMODEL_FULLTRUSTAPPCONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_SEARCH_SEARCHCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_SEARCH_SEARCHCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_APPLICATIONMODEL_SEARCH_SEARCHCONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_STARTUPTASKCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_STARTUPTASKCONTRACT_VERSION 0x20000
#endif // defined(WINDOWS_APPLICATIONMODEL_STARTUPTASKCONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_WALLET_WALLETCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_WALLET_WALLETCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_APPLICATIONMODEL_WALLET_WALLETCONTRACT_VERSION)

#if !defined(WINDOWS_DEVICES_PRINTERS_EXTENSIONS_EXTENSIONSCONTRACT_VERSION)
#define WINDOWS_DEVICES_PRINTERS_EXTENSIONS_EXTENSIONSCONTRACT_VERSION 0x20000
#endif // defined(WINDOWS_DEVICES_PRINTERS_EXTENSIONS_EXTENSIONSCONTRACT_VERSION)

#if !defined(WINDOWS_DEVICES_SMARTCARDS_SMARTCARDBACKGROUNDTRIGGERCONTRACT_VERSION)
#define WINDOWS_DEVICES_SMARTCARDS_SMARTCARDBACKGROUNDTRIGGERCONTRACT_VERSION 0x30000
#endif // defined(WINDOWS_DEVICES_SMARTCARDS_SMARTCARDBACKGROUNDTRIGGERCONTRACT_VERSION)

#if !defined(WINDOWS_DEVICES_SMARTCARDS_SMARTCARDEMULATORCONTRACT_VERSION)
#define WINDOWS_DEVICES_SMARTCARDS_SMARTCARDEMULATORCONTRACT_VERSION 0x50000
#endif // defined(WINDOWS_DEVICES_SMARTCARDS_SMARTCARDEMULATORCONTRACT_VERSION)

#if !defined(WINDOWS_DEVICES_SMS_LEGACYSMSAPICONTRACT_VERSION)
#define WINDOWS_DEVICES_SMS_LEGACYSMSAPICONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_DEVICES_SMS_LEGACYSMSAPICONTRACT_VERSION)

#if !defined(WINDOWS_FOUNDATION_FOUNDATIONCONTRACT_VERSION)
#define WINDOWS_FOUNDATION_FOUNDATIONCONTRACT_VERSION 0x30000
#endif // defined(WINDOWS_FOUNDATION_FOUNDATIONCONTRACT_VERSION)

#if !defined(WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION)
#define WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION 0x50000
#endif // defined(WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION)

#if !defined(WINDOWS_GAMING_INPUT_GAMINGINPUTPREVIEWCONTRACT_VERSION)
#define WINDOWS_GAMING_INPUT_GAMINGINPUTPREVIEWCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_GAMING_INPUT_GAMINGINPUTPREVIEWCONTRACT_VERSION)

#if !defined(WINDOWS_GLOBALIZATION_GLOBALIZATIONJAPANESEPHONETICANALYZERCONTRACT_VERSION)
#define WINDOWS_GLOBALIZATION_GLOBALIZATIONJAPANESEPHONETICANALYZERCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_GLOBALIZATION_GLOBALIZATIONJAPANESEPHONETICANALYZERCONTRACT_VERSION)

#if !defined(WINDOWS_MEDIA_CAPTURE_APPBROADCASTCONTRACT_VERSION)
#define WINDOWS_MEDIA_CAPTURE_APPBROADCASTCONTRACT_VERSION 0x20000
#endif // defined(WINDOWS_MEDIA_CAPTURE_APPBROADCASTCONTRACT_VERSION)

#if !defined(WINDOWS_MEDIA_CAPTURE_APPCAPTURECONTRACT_VERSION)
#define WINDOWS_MEDIA_CAPTURE_APPCAPTURECONTRACT_VERSION 0x40000
#endif // defined(WINDOWS_MEDIA_CAPTURE_APPCAPTURECONTRACT_VERSION)

#if !defined(WINDOWS_MEDIA_CAPTURE_APPCAPTUREMETADATACONTRACT_VERSION)
#define WINDOWS_MEDIA_CAPTURE_APPCAPTUREMETADATACONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_MEDIA_CAPTURE_APPCAPTUREMETADATACONTRACT_VERSION)

#if !defined(WINDOWS_MEDIA_CAPTURE_CAMERACAPTUREUICONTRACT_VERSION)
#define WINDOWS_MEDIA_CAPTURE_CAMERACAPTUREUICONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_MEDIA_CAPTURE_CAMERACAPTUREUICONTRACT_VERSION)

#if !defined(WINDOWS_MEDIA_CAPTURE_GAMEBARCONTRACT_VERSION)
#define WINDOWS_MEDIA_CAPTURE_GAMEBARCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_MEDIA_CAPTURE_GAMEBARCONTRACT_VERSION)

#if !defined(WINDOWS_MEDIA_DEVICES_CALLCONTROLCONTRACT_VERSION)
#define WINDOWS_MEDIA_DEVICES_CALLCONTROLCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_MEDIA_DEVICES_CALLCONTROLCONTRACT_VERSION)

#if !defined(WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION)
#define WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION)

#if !defined(WINDOWS_MEDIA_PROTECTION_PROTECTIONRENEWALCONTRACT_VERSION)
#define WINDOWS_MEDIA_PROTECTION_PROTECTIONRENEWALCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_MEDIA_PROTECTION_PROTECTIONRENEWALCONTRACT_VERSION)

#if !defined(WINDOWS_NETWORKING_CONNECTIVITY_WWANCONTRACT_VERSION)
#define WINDOWS_NETWORKING_CONNECTIVITY_WWANCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_NETWORKING_CONNECTIVITY_WWANCONTRACT_VERSION)

#if !defined(WINDOWS_NETWORKING_SOCKETS_CONTROLCHANNELTRIGGERCONTRACT_VERSION)
#define WINDOWS_NETWORKING_SOCKETS_CONTROLCHANNELTRIGGERCONTRACT_VERSION 0x20000
#endif // defined(WINDOWS_NETWORKING_SOCKETS_CONTROLCHANNELTRIGGERCONTRACT_VERSION)

#if !defined(WINDOWS_PHONE_PHONECONTRACT_VERSION)
#define WINDOWS_PHONE_PHONECONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_PHONE_PHONECONTRACT_VERSION)

#if !defined(WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION)
#define WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION)

#if !defined(WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION)
#define WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION 0x50000
#endif // defined(WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION)

#if !defined(WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION)
#define WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION)

#if !defined(WINDOWS_SYSTEM_SYSTEMMANAGEMENTCONTRACT_VERSION)
#define WINDOWS_SYSTEM_SYSTEMMANAGEMENTCONTRACT_VERSION 0x40000
#endif // defined(WINDOWS_SYSTEM_SYSTEMMANAGEMENTCONTRACT_VERSION)

#if !defined(WINDOWS_UI_CORE_COREWINDOWDIALOGSCONTRACT_VERSION)
#define WINDOWS_UI_CORE_COREWINDOWDIALOGSCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_UI_CORE_COREWINDOWDIALOGSCONTRACT_VERSION)

#if !defined(WINDOWS_UI_VIEWMANAGEMENT_VIEWMANAGEMENTVIEWSCALINGCONTRACT_VERSION)
#define WINDOWS_UI_VIEWMANAGEMENT_VIEWMANAGEMENTVIEWSCALINGCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_UI_VIEWMANAGEMENT_VIEWMANAGEMENTVIEWSCALINGCONTRACT_VERSION)

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
#include "Windows.Storage.Streams.h"
#include "Windows.System.h"
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyData_FWD_DEFINED__
#define ____x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyData_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Management {
            namespace Policies {
                interface INamedPolicyData;
            } /* Windows */
        } /* Management */
    } /* Policies */} /* ABI */
#define __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyData ABI::Windows::Management::Policies::INamedPolicyData

#endif // ____x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyData_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Management {
            namespace Policies {
                interface INamedPolicyStatics;
            } /* Windows */
        } /* Management */
    } /* Policies */} /* ABI */
#define __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyStatics ABI::Windows::Management::Policies::INamedPolicyStatics

#endif // ____x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyStatics_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Windows {
        namespace Management {
            namespace Policies {
                class NamedPolicyData;
            } /* Windows */
        } /* Management */
    } /* Policies */} /* ABI */



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef DEF___FITypedEventHandler_2_Windows__CManagement__CPolicies__CNamedPolicyData_IInspectable_USE
#define DEF___FITypedEventHandler_2_Windows__CManagement__CPolicies__CNamedPolicyData_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("791a3c00-5aa2-5f0e-bb17-3480bc2d96cc"))
ITypedEventHandler<ABI::Windows::Management::Policies::NamedPolicyData*,IInspectable*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Management::Policies::NamedPolicyData*, ABI::Windows::Management::Policies::INamedPolicyData*>,IInspectable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.Management.Policies.NamedPolicyData, Object>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::Management::Policies::NamedPolicyData*,IInspectable*> __FITypedEventHandler_2_Windows__CManagement__CPolicies__CNamedPolicyData_IInspectable_t;
#define __FITypedEventHandler_2_Windows__CManagement__CPolicies__CNamedPolicyData_IInspectable ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CManagement__CPolicies__CNamedPolicyData_IInspectable_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CManagement__CPolicies__CNamedPolicyData_IInspectable ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Management::Policies::INamedPolicyData*,IInspectable*>
//#define __FITypedEventHandler_2_Windows__CManagement__CPolicies__CNamedPolicyData_IInspectable_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Management::Policies::INamedPolicyData*,IInspectable*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CManagement__CPolicies__CNamedPolicyData_IInspectable_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000






#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIBuffer_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIBuffer_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Streams {
                interface IBuffer;
            } /* Windows */
        } /* Storage */
    } /* Streams */} /* ABI */
#define __x_ABI_CWindows_CStorage_CStreams_CIBuffer ABI::Windows::Storage::Streams::IBuffer

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIBuffer_FWD_DEFINED__





namespace ABI {
    namespace Windows {
        namespace System {
            class User;
        } /* Windows */
    } /* System */} /* ABI */

#ifndef ____x_ABI_CWindows_CSystem_CIUser_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CIUser_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace System {
            interface IUser;
        } /* Windows */
    } /* System */} /* ABI */
#define __x_ABI_CWindows_CSystem_CIUser ABI::Windows::System::IUser

#endif // ____x_ABI_CWindows_CSystem_CIUser_FWD_DEFINED__




namespace ABI {
    namespace Windows {
        namespace Management {
            namespace Policies {
                
                typedef enum NamedPolicyKind : int NamedPolicyKind;
                
            } /* Windows */
        } /* Management */
    } /* Policies */} /* ABI */













/*
 *
 * Struct Windows.Management.Policies.NamedPolicyKind
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
namespace ABI {
    namespace Windows {
        namespace Management {
            namespace Policies {
                /* [v1_enum, contract] */
                enum NamedPolicyKind : int
                {
                    NamedPolicyKind_Invalid = 0,
                    NamedPolicyKind_Binary = 1,
                    NamedPolicyKind_Boolean = 2,
                    NamedPolicyKind_Int32 = 3,
                    NamedPolicyKind_Int64 = 4,
                    NamedPolicyKind_String = 5,
                };
                
            } /* Windows */
        } /* Management */
    } /* Policies */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Management.Policies.INamedPolicyData
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Management.Policies.NamedPolicyData
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyData_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyData_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Management_Policies_INamedPolicyData[] = L"Windows.Management.Policies.INamedPolicyData";
namespace ABI {
    namespace Windows {
        namespace Management {
            namespace Policies {
                /* [object, uuid("38DCB198-95AC-4077-A643-8078CAE26400"), exclusiveto, contract] */
                MIDL_INTERFACE("38DCB198-95AC-4077-A643-8078CAE26400")
                INamedPolicyData : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Area(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Name(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Kind(
                        /* [retval, out] */__RPC__out ABI::Windows::Management::Policies::NamedPolicyKind * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsManaged(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsUserPolicy(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_User(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::System::IUser * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetBoolean(
                        /* [retval, out] */__RPC__out boolean * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetBinary(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::Streams::IBuffer * * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetInt32(
                        /* [retval, out] */__RPC__out INT32 * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetInt64(
                        /* [retval, out] */__RPC__out INT64 * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetString(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * result
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_Changed(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CManagement__CPolicies__CNamedPolicyData_IInspectable * changedHandler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * cookie
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_Changed(
                        /* [in] */EventRegistrationToken cookie
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_INamedPolicyData=_uuidof(INamedPolicyData);
                
            } /* Windows */
        } /* Management */
    } /* Policies */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyData;
#endif /* !defined(____x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyData_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Management.Policies.INamedPolicyStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Management.Policies.NamedPolicy
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Management_Policies_INamedPolicyStatics[] = L"Windows.Management.Policies.INamedPolicyStatics";
namespace ABI {
    namespace Windows {
        namespace Management {
            namespace Policies {
                /* [object, uuid("7F793BE7-76C4-4058-8CAD-67662CD05F0D"), exclusiveto, contract] */
                MIDL_INTERFACE("7F793BE7-76C4-4058-8CAD-67662CD05F0D")
                INamedPolicyStatics : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE GetPolicyFromPath(
                        /* [in] */__RPC__in HSTRING area,
                        /* [in] */__RPC__in HSTRING name,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Management::Policies::INamedPolicyData * * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetPolicyFromPathForUser(
                        /* [in] */__RPC__in_opt ABI::Windows::System::IUser * user,
                        /* [in] */__RPC__in HSTRING area,
                        /* [in] */__RPC__in HSTRING name,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Management::Policies::INamedPolicyData * * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_INamedPolicyStatics=_uuidof(INamedPolicyStatics);
                
            } /* Windows */
        } /* Management */
    } /* Policies */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyStatics;
#endif /* !defined(____x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.Management.Policies.NamedPolicy
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Management.Policies.INamedPolicyStatics interface starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#ifndef RUNTIMECLASS_Windows_Management_Policies_NamedPolicy_DEFINED
#define RUNTIMECLASS_Windows_Management_Policies_NamedPolicy_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Management_Policies_NamedPolicy[] = L"Windows.Management.Policies.NamedPolicy";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.Management.Policies.NamedPolicyData
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Management.Policies.INamedPolicyData ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_Management_Policies_NamedPolicyData_DEFINED
#define RUNTIMECLASS_Windows_Management_Policies_NamedPolicyData_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Management_Policies_NamedPolicyData[] = L"Windows.Management.Policies.NamedPolicyData";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000




#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyData_FWD_DEFINED__
#define ____x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyData_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyData __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyData;

#endif // ____x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyData_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyStatics __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyStatics;

#endif // ____x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyStatics_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____FITypedEventHandler_2_Windows__CManagement__CPolicies__CNamedPolicyData_IInspectable_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CManagement__CPolicies__CNamedPolicyData_IInspectable_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CManagement__CPolicies__CNamedPolicyData_IInspectable __FITypedEventHandler_2_Windows__CManagement__CPolicies__CNamedPolicyData_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CManagement__CPolicies__CNamedPolicyData_IInspectable;

typedef struct __FITypedEventHandler_2_Windows__CManagement__CPolicies__CNamedPolicyData_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CManagement__CPolicies__CNamedPolicyData_IInspectable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CManagement__CPolicies__CNamedPolicyData_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CManagement__CPolicies__CNamedPolicyData_IInspectable * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CManagement__CPolicies__CNamedPolicyData_IInspectable * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyData * sender,/* [in] */ __RPC__in_opt IInspectable * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CManagement__CPolicies__CNamedPolicyData_IInspectableVtbl;

interface __FITypedEventHandler_2_Windows__CManagement__CPolicies__CNamedPolicyData_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CManagement__CPolicies__CNamedPolicyData_IInspectableVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CManagement__CPolicies__CNamedPolicyData_IInspectable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CManagement__CPolicies__CNamedPolicyData_IInspectable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CManagement__CPolicies__CNamedPolicyData_IInspectable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CManagement__CPolicies__CNamedPolicyData_IInspectable_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CManagement__CPolicies__CNamedPolicyData_IInspectable_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000





#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIBuffer_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIBuffer_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIBuffer __x_ABI_CWindows_CStorage_CStreams_CIBuffer;

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIBuffer_FWD_DEFINED__





#ifndef ____x_ABI_CWindows_CSystem_CIUser_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CIUser_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CIUser __x_ABI_CWindows_CSystem_CIUser;

#endif // ____x_ABI_CWindows_CSystem_CIUser_FWD_DEFINED__





typedef enum __x_ABI_CWindows_CManagement_CPolicies_CNamedPolicyKind __x_ABI_CWindows_CManagement_CPolicies_CNamedPolicyKind;













/*
 *
 * Struct Windows.Management.Policies.NamedPolicyKind
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CManagement_CPolicies_CNamedPolicyKind
{
    NamedPolicyKind_Invalid = 0,
    NamedPolicyKind_Binary = 1,
    NamedPolicyKind_Boolean = 2,
    NamedPolicyKind_Int32 = 3,
    NamedPolicyKind_Int64 = 4,
    NamedPolicyKind_String = 5,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Management.Policies.INamedPolicyData
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Management.Policies.NamedPolicyData
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyData_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyData_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Management_Policies_INamedPolicyData[] = L"Windows.Management.Policies.INamedPolicyData";
/* [object, uuid("38DCB198-95AC-4077-A643-8078CAE26400"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyDataVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyData * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyData * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyData * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyData * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyData * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyData * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Area )(
        __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyData * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Name )(
        __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyData * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Kind )(
        __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyData * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CManagement_CPolicies_CNamedPolicyKind * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsManaged )(
        __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyData * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsUserPolicy )(
        __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyData * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_User )(
        __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyData * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSystem_CIUser * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetBoolean )(
        __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyData * This,
        /* [retval, out] */__RPC__out boolean * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetBinary )(
        __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyData * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetInt32 )(
        __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyData * This,
        /* [retval, out] */__RPC__out INT32 * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetInt64 )(
        __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyData * This,
        /* [retval, out] */__RPC__out INT64 * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetString )(
        __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyData * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * result
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_Changed )(
        __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyData * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CManagement__CPolicies__CNamedPolicyData_IInspectable * changedHandler,
        /* [retval, out] */__RPC__out EventRegistrationToken * cookie
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_Changed )(
        __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyData * This,
        /* [in] */EventRegistrationToken cookie
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyDataVtbl;

interface __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyData
{
    CONST_VTBL struct __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyDataVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyData_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyData_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyData_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyData_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyData_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyData_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyData_get_Area(This,value) \
    ( (This)->lpVtbl->get_Area(This,value) )

#define __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyData_get_Name(This,value) \
    ( (This)->lpVtbl->get_Name(This,value) )

#define __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyData_get_Kind(This,value) \
    ( (This)->lpVtbl->get_Kind(This,value) )

#define __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyData_get_IsManaged(This,value) \
    ( (This)->lpVtbl->get_IsManaged(This,value) )

#define __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyData_get_IsUserPolicy(This,value) \
    ( (This)->lpVtbl->get_IsUserPolicy(This,value) )

#define __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyData_get_User(This,value) \
    ( (This)->lpVtbl->get_User(This,value) )

#define __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyData_GetBoolean(This,result) \
    ( (This)->lpVtbl->GetBoolean(This,result) )

#define __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyData_GetBinary(This,result) \
    ( (This)->lpVtbl->GetBinary(This,result) )

#define __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyData_GetInt32(This,result) \
    ( (This)->lpVtbl->GetInt32(This,result) )

#define __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyData_GetInt64(This,result) \
    ( (This)->lpVtbl->GetInt64(This,result) )

#define __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyData_GetString(This,result) \
    ( (This)->lpVtbl->GetString(This,result) )

#define __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyData_add_Changed(This,changedHandler,cookie) \
    ( (This)->lpVtbl->add_Changed(This,changedHandler,cookie) )

#define __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyData_remove_Changed(This,cookie) \
    ( (This)->lpVtbl->remove_Changed(This,cookie) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyData;
#endif /* !defined(____x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyData_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Management.Policies.INamedPolicyStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Management.Policies.NamedPolicy
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Management_Policies_INamedPolicyStatics[] = L"Windows.Management.Policies.INamedPolicyStatics";
/* [object, uuid("7F793BE7-76C4-4058-8CAD-67662CD05F0D"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetPolicyFromPath )(
        __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyStatics * This,
        /* [in] */__RPC__in HSTRING area,
        /* [in] */__RPC__in HSTRING name,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyData * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetPolicyFromPathForUser )(
        __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSystem_CIUser * user,
        /* [in] */__RPC__in HSTRING area,
        /* [in] */__RPC__in HSTRING name,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyData * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyStaticsVtbl;

interface __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyStatics_GetPolicyFromPath(This,area,name,result) \
    ( (This)->lpVtbl->GetPolicyFromPath(This,area,name,result) )

#define __x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyStatics_GetPolicyFromPathForUser(This,user,area,name,result) \
    ( (This)->lpVtbl->GetPolicyFromPathForUser(This,user,area,name,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyStatics;
#endif /* !defined(____x_ABI_CWindows_CManagement_CPolicies_CINamedPolicyStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.Management.Policies.NamedPolicy
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Management.Policies.INamedPolicyStatics interface starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#ifndef RUNTIMECLASS_Windows_Management_Policies_NamedPolicy_DEFINED
#define RUNTIMECLASS_Windows_Management_Policies_NamedPolicy_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Management_Policies_NamedPolicy[] = L"Windows.Management.Policies.NamedPolicy";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.Management.Policies.NamedPolicyData
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Management.Policies.INamedPolicyData ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_Management_Policies_NamedPolicyData_DEFINED
#define RUNTIMECLASS_Windows_Management_Policies_NamedPolicyData_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Management_Policies_NamedPolicyData[] = L"Windows.Management.Policies.NamedPolicyData";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000




#endif // defined(__cplusplus)
#pragma pop_macro("MIDL_CONST_ID")
// Restore the original value of the 'DEPRECATED' macro
#pragma pop_macro("DEPRECATED")

#ifdef __clang__
#pragma clang diagnostic pop // deprecated-declarations
#else
#pragma warning(pop)
#endif
#endif // __windows2Emanagement2Epolicies_p_h__

#endif // __windows2Emanagement2Epolicies_h__
