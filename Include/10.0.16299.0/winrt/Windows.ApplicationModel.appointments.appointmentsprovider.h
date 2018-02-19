/* Header file automatically generated from windows.applicationmodel.appointments.appointmentsprovider.idl */
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
#ifndef __windows2Eapplicationmodel2Eappointments2Eappointmentsprovider_h__
#define __windows2Eapplicationmodel2Eappointments2Eappointmentsprovider_h__
#ifndef __windows2Eapplicationmodel2Eappointments2Eappointmentsprovider_p_h__
#define __windows2Eapplicationmodel2Eappointments2Eappointmentsprovider_p_h__


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
#include "Windows.ApplicationModel.Appointments.h"
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAddAppointmentOperation_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAddAppointmentOperation_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                namespace AppointmentsProvider {
                    interface IAddAppointmentOperation;
                } /* Windows */
            } /* ApplicationModel */
        } /* Appointments */
    } /* AppointmentsProvider */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAddAppointmentOperation ABI::Windows::ApplicationModel::Appointments::AppointmentsProvider::IAddAppointmentOperation

#endif // ____x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAddAppointmentOperation_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAppointmentsProviderLaunchActionVerbsStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAppointmentsProviderLaunchActionVerbsStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                namespace AppointmentsProvider {
                    interface IAppointmentsProviderLaunchActionVerbsStatics;
                } /* Windows */
            } /* ApplicationModel */
        } /* Appointments */
    } /* AppointmentsProvider */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAppointmentsProviderLaunchActionVerbsStatics ABI::Windows::ApplicationModel::Appointments::AppointmentsProvider::IAppointmentsProviderLaunchActionVerbsStatics

#endif // ____x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAppointmentsProviderLaunchActionVerbsStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAppointmentsProviderLaunchActionVerbsStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAppointmentsProviderLaunchActionVerbsStatics2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                namespace AppointmentsProvider {
                    interface IAppointmentsProviderLaunchActionVerbsStatics2;
                } /* Windows */
            } /* ApplicationModel */
        } /* Appointments */
    } /* AppointmentsProvider */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAppointmentsProviderLaunchActionVerbsStatics2 ABI::Windows::ApplicationModel::Appointments::AppointmentsProvider::IAppointmentsProviderLaunchActionVerbsStatics2

#endif // ____x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAppointmentsProviderLaunchActionVerbsStatics2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIRemoveAppointmentOperation_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIRemoveAppointmentOperation_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                namespace AppointmentsProvider {
                    interface IRemoveAppointmentOperation;
                } /* Windows */
            } /* ApplicationModel */
        } /* Appointments */
    } /* AppointmentsProvider */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIRemoveAppointmentOperation ABI::Windows::ApplicationModel::Appointments::AppointmentsProvider::IRemoveAppointmentOperation

#endif // ____x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIRemoveAppointmentOperation_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIReplaceAppointmentOperation_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIReplaceAppointmentOperation_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                namespace AppointmentsProvider {
                    interface IReplaceAppointmentOperation;
                } /* Windows */
            } /* ApplicationModel */
        } /* Appointments */
    } /* AppointmentsProvider */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIReplaceAppointmentOperation ABI::Windows::ApplicationModel::Appointments::AppointmentsProvider::IReplaceAppointmentOperation

#endif // ____x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIReplaceAppointmentOperation_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Windows {
        namespace Foundation {
            struct DateTime;
            
        } /* Windows */
    } /* Foundation */} /* ABI */


#ifndef DEF___FIReference_1_Windows__CFoundation__CDateTime_USE
#define DEF___FIReference_1_Windows__CFoundation__CDateTime_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("5541d8a7-497c-5aa4-86fc-7713adbf2a2c"))
IReference<struct ABI::Windows::Foundation::DateTime> : IReference_impl<struct ABI::Windows::Foundation::DateTime> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IReference`1<Windows.Foundation.DateTime>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IReference<struct ABI::Windows::Foundation::DateTime> __FIReference_1_Windows__CFoundation__CDateTime_t;
#define __FIReference_1_Windows__CFoundation__CDateTime ABI::Windows::Foundation::__FIReference_1_Windows__CFoundation__CDateTime_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIReference_1_Windows__CFoundation__CDateTime ABI::Windows::Foundation::IReference<ABI::Windows::Foundation::DateTime>
//#define __FIReference_1_Windows__CFoundation__CDateTime_t ABI::Windows::Foundation::IReference<ABI::Windows::Foundation::DateTime>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIReference_1_Windows__CFoundation__CDateTime_USE */





namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                class Appointment;
            } /* Windows */
        } /* ApplicationModel */
    } /* Appointments */} /* ABI */

#ifndef ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                interface IAppointment;
            } /* Windows */
        } /* ApplicationModel */
    } /* Appointments */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment ABI::Windows::ApplicationModel::Appointments::IAppointment

#endif // ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment_FWD_DEFINED__





namespace ABI {
    namespace Windows {
        namespace Foundation {
            
            typedef struct DateTime DateTime;
            
        } /* Windows */
    } /* Foundation */} /* ABI */









namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                namespace AppointmentsProvider {
                    class AddAppointmentOperation;
                } /* Windows */
            } /* ApplicationModel */
        } /* Appointments */
    } /* AppointmentsProvider */} /* ABI */



namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                namespace AppointmentsProvider {
                    class RemoveAppointmentOperation;
                } /* Windows */
            } /* ApplicationModel */
        } /* Appointments */
    } /* AppointmentsProvider */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                namespace AppointmentsProvider {
                    class ReplaceAppointmentOperation;
                } /* Windows */
            } /* ApplicationModel */
        } /* Appointments */
    } /* AppointmentsProvider */} /* ABI */







/*
 *
 * Interface Windows.ApplicationModel.Appointments.AppointmentsProvider.IAddAppointmentOperation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Appointments.AppointmentsProvider.AddAppointmentOperation
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAddAppointmentOperation_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAddAppointmentOperation_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Appointments_AppointmentsProvider_IAddAppointmentOperation[] = L"Windows.ApplicationModel.Appointments.AppointmentsProvider.IAddAppointmentOperation";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                namespace AppointmentsProvider {
                    /* [object, uuid("EC4A9AF3-620D-4C69-ADD7-9794E918081F"), exclusiveto, contract] */
                    MIDL_INTERFACE("EC4A9AF3-620D-4C69-ADD7-9794E918081F")
                    IAddAppointmentOperation : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AppointmentInformation(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::Appointments::IAppointment * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SourcePackageFamilyName(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE ReportCompleted(
                            /* [in] */__RPC__in HSTRING itemId
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE ReportCanceled(void) = 0;
                        virtual HRESULT STDMETHODCALLTYPE ReportError(
                            /* [in] */__RPC__in HSTRING value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE DismissUI(void) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IAddAppointmentOperation=_uuidof(IAddAppointmentOperation);
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* Appointments */
    } /* AppointmentsProvider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAddAppointmentOperation;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAddAppointmentOperation_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Appointments.AppointmentsProvider.IAppointmentsProviderLaunchActionVerbsStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Appointments.AppointmentsProvider.AppointmentsProviderLaunchActionVerbs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAppointmentsProviderLaunchActionVerbsStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAppointmentsProviderLaunchActionVerbsStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Appointments_AppointmentsProvider_IAppointmentsProviderLaunchActionVerbsStatics[] = L"Windows.ApplicationModel.Appointments.AppointmentsProvider.IAppointmentsProviderLaunchActionVerbsStatics";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                namespace AppointmentsProvider {
                    /* [object, uuid("36DBBA28-9E2E-49C6-8EF7-3AB7A5DCC8B8"), exclusiveto, contract] */
                    MIDL_INTERFACE("36DBBA28-9E2E-49C6-8EF7-3AB7A5DCC8B8")
                    IAppointmentsProviderLaunchActionVerbsStatics : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AddAppointment(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ReplaceAppointment(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RemoveAppointment(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ShowTimeFrame(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IAppointmentsProviderLaunchActionVerbsStatics=_uuidof(IAppointmentsProviderLaunchActionVerbsStatics);
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* Appointments */
    } /* AppointmentsProvider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAppointmentsProviderLaunchActionVerbsStatics;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAppointmentsProviderLaunchActionVerbsStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Appointments.AppointmentsProvider.IAppointmentsProviderLaunchActionVerbsStatics2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Appointments.AppointmentsProvider.AppointmentsProviderLaunchActionVerbs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAppointmentsProviderLaunchActionVerbsStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAppointmentsProviderLaunchActionVerbsStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Appointments_AppointmentsProvider_IAppointmentsProviderLaunchActionVerbsStatics2[] = L"Windows.ApplicationModel.Appointments.AppointmentsProvider.IAppointmentsProviderLaunchActionVerbsStatics2";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                namespace AppointmentsProvider {
                    /* [object, uuid("EF9049A4-AF21-473C-88DC-76CD89F60CA5"), exclusiveto, contract] */
                    MIDL_INTERFACE("EF9049A4-AF21-473C-88DC-76CD89F60CA5")
                    IAppointmentsProviderLaunchActionVerbsStatics2 : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ShowAppointmentDetails(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IAppointmentsProviderLaunchActionVerbsStatics2=_uuidof(IAppointmentsProviderLaunchActionVerbsStatics2);
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* Appointments */
    } /* AppointmentsProvider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAppointmentsProviderLaunchActionVerbsStatics2;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAppointmentsProviderLaunchActionVerbsStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Appointments.AppointmentsProvider.IRemoveAppointmentOperation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Appointments.AppointmentsProvider.RemoveAppointmentOperation
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIRemoveAppointmentOperation_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIRemoveAppointmentOperation_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Appointments_AppointmentsProvider_IRemoveAppointmentOperation[] = L"Windows.ApplicationModel.Appointments.AppointmentsProvider.IRemoveAppointmentOperation";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                namespace AppointmentsProvider {
                    /* [object, uuid("08B66ABA-FE33-46CD-A50C-A8FFB3260537"), exclusiveto, contract] */
                    MIDL_INTERFACE("08B66ABA-FE33-46CD-A50C-A8FFB3260537")
                    IRemoveAppointmentOperation : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AppointmentId(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_InstanceStartDate(
                            /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CDateTime * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SourcePackageFamilyName(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE ReportCompleted(void) = 0;
                        virtual HRESULT STDMETHODCALLTYPE ReportCanceled(void) = 0;
                        virtual HRESULT STDMETHODCALLTYPE ReportError(
                            /* [in] */__RPC__in HSTRING value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE DismissUI(void) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IRemoveAppointmentOperation=_uuidof(IRemoveAppointmentOperation);
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* Appointments */
    } /* AppointmentsProvider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIRemoveAppointmentOperation;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIRemoveAppointmentOperation_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Appointments.AppointmentsProvider.IReplaceAppointmentOperation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Appointments.AppointmentsProvider.ReplaceAppointmentOperation
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIReplaceAppointmentOperation_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIReplaceAppointmentOperation_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Appointments_AppointmentsProvider_IReplaceAppointmentOperation[] = L"Windows.ApplicationModel.Appointments.AppointmentsProvider.IReplaceAppointmentOperation";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                namespace AppointmentsProvider {
                    /* [object, uuid("F4903D9B-9E61-4DE2-A732-2687C07D1DE8"), exclusiveto, contract] */
                    MIDL_INTERFACE("F4903D9B-9E61-4DE2-A732-2687C07D1DE8")
                    IReplaceAppointmentOperation : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AppointmentId(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AppointmentInformation(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::Appointments::IAppointment * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_InstanceStartDate(
                            /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CDateTime * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SourcePackageFamilyName(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE ReportCompleted(
                            /* [in] */__RPC__in HSTRING itemId
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE ReportCanceled(void) = 0;
                        virtual HRESULT STDMETHODCALLTYPE ReportError(
                            /* [in] */__RPC__in HSTRING value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE DismissUI(void) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IReplaceAppointmentOperation=_uuidof(IReplaceAppointmentOperation);
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* Appointments */
    } /* AppointmentsProvider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIReplaceAppointmentOperation;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIReplaceAppointmentOperation_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Appointments.AppointmentsProvider.AddAppointmentOperation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Appointments.AppointmentsProvider.IAddAppointmentOperation ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Appointments_AppointmentsProvider_AddAppointmentOperation_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Appointments_AppointmentsProvider_AddAppointmentOperation_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Appointments_AppointmentsProvider_AddAppointmentOperation[] = L"Windows.ApplicationModel.Appointments.AppointmentsProvider.AddAppointmentOperation";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Appointments.AppointmentsProvider.AppointmentsProviderLaunchActionVerbs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.ApplicationModel.Appointments.AppointmentsProvider.IAppointmentsProviderLaunchActionVerbsStatics2 interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.ApplicationModel.Appointments.AppointmentsProvider.IAppointmentsProviderLaunchActionVerbsStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_ApplicationModel_Appointments_AppointmentsProvider_AppointmentsProviderLaunchActionVerbs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Appointments_AppointmentsProvider_AppointmentsProviderLaunchActionVerbs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Appointments_AppointmentsProvider_AppointmentsProviderLaunchActionVerbs[] = L"Windows.ApplicationModel.Appointments.AppointmentsProvider.AppointmentsProviderLaunchActionVerbs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Appointments.AppointmentsProvider.RemoveAppointmentOperation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Appointments.AppointmentsProvider.IRemoveAppointmentOperation ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Appointments_AppointmentsProvider_RemoveAppointmentOperation_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Appointments_AppointmentsProvider_RemoveAppointmentOperation_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Appointments_AppointmentsProvider_RemoveAppointmentOperation[] = L"Windows.ApplicationModel.Appointments.AppointmentsProvider.RemoveAppointmentOperation";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Appointments.AppointmentsProvider.ReplaceAppointmentOperation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Appointments.AppointmentsProvider.IReplaceAppointmentOperation ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Appointments_AppointmentsProvider_ReplaceAppointmentOperation_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Appointments_AppointmentsProvider_ReplaceAppointmentOperation_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Appointments_AppointmentsProvider_ReplaceAppointmentOperation[] = L"Windows.ApplicationModel.Appointments.AppointmentsProvider.ReplaceAppointmentOperation";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000





#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAddAppointmentOperation_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAddAppointmentOperation_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAddAppointmentOperation __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAddAppointmentOperation;

#endif // ____x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAddAppointmentOperation_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAppointmentsProviderLaunchActionVerbsStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAppointmentsProviderLaunchActionVerbsStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAppointmentsProviderLaunchActionVerbsStatics __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAppointmentsProviderLaunchActionVerbsStatics;

#endif // ____x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAppointmentsProviderLaunchActionVerbsStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAppointmentsProviderLaunchActionVerbsStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAppointmentsProviderLaunchActionVerbsStatics2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAppointmentsProviderLaunchActionVerbsStatics2 __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAppointmentsProviderLaunchActionVerbsStatics2;

#endif // ____x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAppointmentsProviderLaunchActionVerbsStatics2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIRemoveAppointmentOperation_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIRemoveAppointmentOperation_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIRemoveAppointmentOperation __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIRemoveAppointmentOperation;

#endif // ____x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIRemoveAppointmentOperation_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIReplaceAppointmentOperation_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIReplaceAppointmentOperation_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIReplaceAppointmentOperation __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIReplaceAppointmentOperation;

#endif // ____x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIReplaceAppointmentOperation_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions
struct __x_ABI_CWindows_CFoundation_CDateTime;

#if !defined(____FIReference_1_Windows__CFoundation__CDateTime_INTERFACE_DEFINED__)
#define ____FIReference_1_Windows__CFoundation__CDateTime_INTERFACE_DEFINED__

typedef interface __FIReference_1_Windows__CFoundation__CDateTime __FIReference_1_Windows__CFoundation__CDateTime;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIReference_1_Windows__CFoundation__CDateTime;

typedef struct __FIReference_1_Windows__CFoundation__CDateTimeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_Windows__CFoundation__CDateTime * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_Windows__CFoundation__CDateTime * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_Windows__CFoundation__CDateTime * This );

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_Windows__CFoundation__CDateTime * This, 
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_Windows__CFoundation__CDateTime * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_Windows__CFoundation__CDateTime * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_Windows__CFoundation__CDateTime * This, /* [retval][out] */ __RPC__out struct __x_ABI_CWindows_CFoundation_CDateTime *value);
    END_INTERFACE
} __FIReference_1_Windows__CFoundation__CDateTimeVtbl;

interface __FIReference_1_Windows__CFoundation__CDateTime
{
    CONST_VTBL struct __FIReference_1_Windows__CFoundation__CDateTimeVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIReference_1_Windows__CFoundation__CDateTime_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIReference_1_Windows__CFoundation__CDateTime_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIReference_1_Windows__CFoundation__CDateTime_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIReference_1_Windows__CFoundation__CDateTime_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIReference_1_Windows__CFoundation__CDateTime_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIReference_1_Windows__CFoundation__CDateTime_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIReference_1_Windows__CFoundation__CDateTime_get_Value(This,value)	\
    ( (This)->lpVtbl -> get_Value(This,value) ) 
#endif /* COBJMACROS */


#endif // ____FIReference_1_Windows__CFoundation__CDateTime_INTERFACE_DEFINED__



#ifndef ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment;

#endif // ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment_FWD_DEFINED__






typedef struct __x_ABI_CWindows_CFoundation_CDateTime __x_ABI_CWindows_CFoundation_CDateTime;


















/*
 *
 * Interface Windows.ApplicationModel.Appointments.AppointmentsProvider.IAddAppointmentOperation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Appointments.AppointmentsProvider.AddAppointmentOperation
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAddAppointmentOperation_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAddAppointmentOperation_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Appointments_AppointmentsProvider_IAddAppointmentOperation[] = L"Windows.ApplicationModel.Appointments.AppointmentsProvider.IAddAppointmentOperation";
/* [object, uuid("EC4A9AF3-620D-4C69-ADD7-9794E918081F"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAddAppointmentOperationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAddAppointmentOperation * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAddAppointmentOperation * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAddAppointmentOperation * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAddAppointmentOperation * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAddAppointmentOperation * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAddAppointmentOperation * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AppointmentInformation )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAddAppointmentOperation * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SourcePackageFamilyName )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAddAppointmentOperation * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *ReportCompleted )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAddAppointmentOperation * This,
        /* [in] */__RPC__in HSTRING itemId
        );
    HRESULT ( STDMETHODCALLTYPE *ReportCanceled )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAddAppointmentOperation * This
        );
    HRESULT ( STDMETHODCALLTYPE *ReportError )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAddAppointmentOperation * This,
        /* [in] */__RPC__in HSTRING value
        );
    HRESULT ( STDMETHODCALLTYPE *DismissUI )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAddAppointmentOperation * This
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAddAppointmentOperationVtbl;

interface __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAddAppointmentOperation
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAddAppointmentOperationVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAddAppointmentOperation_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAddAppointmentOperation_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAddAppointmentOperation_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAddAppointmentOperation_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAddAppointmentOperation_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAddAppointmentOperation_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAddAppointmentOperation_get_AppointmentInformation(This,value) \
    ( (This)->lpVtbl->get_AppointmentInformation(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAddAppointmentOperation_get_SourcePackageFamilyName(This,value) \
    ( (This)->lpVtbl->get_SourcePackageFamilyName(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAddAppointmentOperation_ReportCompleted(This,itemId) \
    ( (This)->lpVtbl->ReportCompleted(This,itemId) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAddAppointmentOperation_ReportCanceled(This) \
    ( (This)->lpVtbl->ReportCanceled(This) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAddAppointmentOperation_ReportError(This,value) \
    ( (This)->lpVtbl->ReportError(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAddAppointmentOperation_DismissUI(This) \
    ( (This)->lpVtbl->DismissUI(This) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAddAppointmentOperation;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAddAppointmentOperation_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Appointments.AppointmentsProvider.IAppointmentsProviderLaunchActionVerbsStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Appointments.AppointmentsProvider.AppointmentsProviderLaunchActionVerbs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAppointmentsProviderLaunchActionVerbsStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAppointmentsProviderLaunchActionVerbsStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Appointments_AppointmentsProvider_IAppointmentsProviderLaunchActionVerbsStatics[] = L"Windows.ApplicationModel.Appointments.AppointmentsProvider.IAppointmentsProviderLaunchActionVerbsStatics";
/* [object, uuid("36DBBA28-9E2E-49C6-8EF7-3AB7A5DCC8B8"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAppointmentsProviderLaunchActionVerbsStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAppointmentsProviderLaunchActionVerbsStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAppointmentsProviderLaunchActionVerbsStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAppointmentsProviderLaunchActionVerbsStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAppointmentsProviderLaunchActionVerbsStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAppointmentsProviderLaunchActionVerbsStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAppointmentsProviderLaunchActionVerbsStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AddAppointment )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAppointmentsProviderLaunchActionVerbsStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ReplaceAppointment )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAppointmentsProviderLaunchActionVerbsStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RemoveAppointment )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAppointmentsProviderLaunchActionVerbsStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ShowTimeFrame )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAppointmentsProviderLaunchActionVerbsStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAppointmentsProviderLaunchActionVerbsStaticsVtbl;

interface __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAppointmentsProviderLaunchActionVerbsStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAppointmentsProviderLaunchActionVerbsStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAppointmentsProviderLaunchActionVerbsStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAppointmentsProviderLaunchActionVerbsStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAppointmentsProviderLaunchActionVerbsStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAppointmentsProviderLaunchActionVerbsStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAppointmentsProviderLaunchActionVerbsStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAppointmentsProviderLaunchActionVerbsStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAppointmentsProviderLaunchActionVerbsStatics_get_AddAppointment(This,value) \
    ( (This)->lpVtbl->get_AddAppointment(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAppointmentsProviderLaunchActionVerbsStatics_get_ReplaceAppointment(This,value) \
    ( (This)->lpVtbl->get_ReplaceAppointment(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAppointmentsProviderLaunchActionVerbsStatics_get_RemoveAppointment(This,value) \
    ( (This)->lpVtbl->get_RemoveAppointment(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAppointmentsProviderLaunchActionVerbsStatics_get_ShowTimeFrame(This,value) \
    ( (This)->lpVtbl->get_ShowTimeFrame(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAppointmentsProviderLaunchActionVerbsStatics;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAppointmentsProviderLaunchActionVerbsStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Appointments.AppointmentsProvider.IAppointmentsProviderLaunchActionVerbsStatics2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Appointments.AppointmentsProvider.AppointmentsProviderLaunchActionVerbs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAppointmentsProviderLaunchActionVerbsStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAppointmentsProviderLaunchActionVerbsStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Appointments_AppointmentsProvider_IAppointmentsProviderLaunchActionVerbsStatics2[] = L"Windows.ApplicationModel.Appointments.AppointmentsProvider.IAppointmentsProviderLaunchActionVerbsStatics2";
/* [object, uuid("EF9049A4-AF21-473C-88DC-76CD89F60CA5"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAppointmentsProviderLaunchActionVerbsStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAppointmentsProviderLaunchActionVerbsStatics2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAppointmentsProviderLaunchActionVerbsStatics2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAppointmentsProviderLaunchActionVerbsStatics2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAppointmentsProviderLaunchActionVerbsStatics2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAppointmentsProviderLaunchActionVerbsStatics2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAppointmentsProviderLaunchActionVerbsStatics2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ShowAppointmentDetails )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAppointmentsProviderLaunchActionVerbsStatics2 * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAppointmentsProviderLaunchActionVerbsStatics2Vtbl;

interface __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAppointmentsProviderLaunchActionVerbsStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAppointmentsProviderLaunchActionVerbsStatics2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAppointmentsProviderLaunchActionVerbsStatics2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAppointmentsProviderLaunchActionVerbsStatics2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAppointmentsProviderLaunchActionVerbsStatics2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAppointmentsProviderLaunchActionVerbsStatics2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAppointmentsProviderLaunchActionVerbsStatics2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAppointmentsProviderLaunchActionVerbsStatics2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAppointmentsProviderLaunchActionVerbsStatics2_get_ShowAppointmentDetails(This,value) \
    ( (This)->lpVtbl->get_ShowAppointmentDetails(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAppointmentsProviderLaunchActionVerbsStatics2;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAppointmentsProviderLaunchActionVerbsStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Appointments.AppointmentsProvider.IRemoveAppointmentOperation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Appointments.AppointmentsProvider.RemoveAppointmentOperation
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIRemoveAppointmentOperation_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIRemoveAppointmentOperation_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Appointments_AppointmentsProvider_IRemoveAppointmentOperation[] = L"Windows.ApplicationModel.Appointments.AppointmentsProvider.IRemoveAppointmentOperation";
/* [object, uuid("08B66ABA-FE33-46CD-A50C-A8FFB3260537"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIRemoveAppointmentOperationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIRemoveAppointmentOperation * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIRemoveAppointmentOperation * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIRemoveAppointmentOperation * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIRemoveAppointmentOperation * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIRemoveAppointmentOperation * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIRemoveAppointmentOperation * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AppointmentId )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIRemoveAppointmentOperation * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_InstanceStartDate )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIRemoveAppointmentOperation * This,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CDateTime * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SourcePackageFamilyName )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIRemoveAppointmentOperation * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *ReportCompleted )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIRemoveAppointmentOperation * This
        );
    HRESULT ( STDMETHODCALLTYPE *ReportCanceled )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIRemoveAppointmentOperation * This
        );
    HRESULT ( STDMETHODCALLTYPE *ReportError )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIRemoveAppointmentOperation * This,
        /* [in] */__RPC__in HSTRING value
        );
    HRESULT ( STDMETHODCALLTYPE *DismissUI )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIRemoveAppointmentOperation * This
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIRemoveAppointmentOperationVtbl;

interface __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIRemoveAppointmentOperation
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIRemoveAppointmentOperationVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIRemoveAppointmentOperation_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIRemoveAppointmentOperation_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIRemoveAppointmentOperation_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIRemoveAppointmentOperation_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIRemoveAppointmentOperation_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIRemoveAppointmentOperation_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIRemoveAppointmentOperation_get_AppointmentId(This,value) \
    ( (This)->lpVtbl->get_AppointmentId(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIRemoveAppointmentOperation_get_InstanceStartDate(This,value) \
    ( (This)->lpVtbl->get_InstanceStartDate(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIRemoveAppointmentOperation_get_SourcePackageFamilyName(This,value) \
    ( (This)->lpVtbl->get_SourcePackageFamilyName(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIRemoveAppointmentOperation_ReportCompleted(This) \
    ( (This)->lpVtbl->ReportCompleted(This) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIRemoveAppointmentOperation_ReportCanceled(This) \
    ( (This)->lpVtbl->ReportCanceled(This) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIRemoveAppointmentOperation_ReportError(This,value) \
    ( (This)->lpVtbl->ReportError(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIRemoveAppointmentOperation_DismissUI(This) \
    ( (This)->lpVtbl->DismissUI(This) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIRemoveAppointmentOperation;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIRemoveAppointmentOperation_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Appointments.AppointmentsProvider.IReplaceAppointmentOperation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Appointments.AppointmentsProvider.ReplaceAppointmentOperation
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIReplaceAppointmentOperation_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIReplaceAppointmentOperation_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Appointments_AppointmentsProvider_IReplaceAppointmentOperation[] = L"Windows.ApplicationModel.Appointments.AppointmentsProvider.IReplaceAppointmentOperation";
/* [object, uuid("F4903D9B-9E61-4DE2-A732-2687C07D1DE8"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIReplaceAppointmentOperationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIReplaceAppointmentOperation * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIReplaceAppointmentOperation * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIReplaceAppointmentOperation * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIReplaceAppointmentOperation * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIReplaceAppointmentOperation * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIReplaceAppointmentOperation * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AppointmentId )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIReplaceAppointmentOperation * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AppointmentInformation )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIReplaceAppointmentOperation * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_InstanceStartDate )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIReplaceAppointmentOperation * This,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CDateTime * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SourcePackageFamilyName )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIReplaceAppointmentOperation * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *ReportCompleted )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIReplaceAppointmentOperation * This,
        /* [in] */__RPC__in HSTRING itemId
        );
    HRESULT ( STDMETHODCALLTYPE *ReportCanceled )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIReplaceAppointmentOperation * This
        );
    HRESULT ( STDMETHODCALLTYPE *ReportError )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIReplaceAppointmentOperation * This,
        /* [in] */__RPC__in HSTRING value
        );
    HRESULT ( STDMETHODCALLTYPE *DismissUI )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIReplaceAppointmentOperation * This
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIReplaceAppointmentOperationVtbl;

interface __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIReplaceAppointmentOperation
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIReplaceAppointmentOperationVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIReplaceAppointmentOperation_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIReplaceAppointmentOperation_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIReplaceAppointmentOperation_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIReplaceAppointmentOperation_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIReplaceAppointmentOperation_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIReplaceAppointmentOperation_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIReplaceAppointmentOperation_get_AppointmentId(This,value) \
    ( (This)->lpVtbl->get_AppointmentId(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIReplaceAppointmentOperation_get_AppointmentInformation(This,value) \
    ( (This)->lpVtbl->get_AppointmentInformation(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIReplaceAppointmentOperation_get_InstanceStartDate(This,value) \
    ( (This)->lpVtbl->get_InstanceStartDate(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIReplaceAppointmentOperation_get_SourcePackageFamilyName(This,value) \
    ( (This)->lpVtbl->get_SourcePackageFamilyName(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIReplaceAppointmentOperation_ReportCompleted(This,itemId) \
    ( (This)->lpVtbl->ReportCompleted(This,itemId) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIReplaceAppointmentOperation_ReportCanceled(This) \
    ( (This)->lpVtbl->ReportCanceled(This) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIReplaceAppointmentOperation_ReportError(This,value) \
    ( (This)->lpVtbl->ReportError(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIReplaceAppointmentOperation_DismissUI(This) \
    ( (This)->lpVtbl->DismissUI(This) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIReplaceAppointmentOperation;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIReplaceAppointmentOperation_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Appointments.AppointmentsProvider.AddAppointmentOperation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Appointments.AppointmentsProvider.IAddAppointmentOperation ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Appointments_AppointmentsProvider_AddAppointmentOperation_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Appointments_AppointmentsProvider_AddAppointmentOperation_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Appointments_AppointmentsProvider_AddAppointmentOperation[] = L"Windows.ApplicationModel.Appointments.AppointmentsProvider.AddAppointmentOperation";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Appointments.AppointmentsProvider.AppointmentsProviderLaunchActionVerbs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.ApplicationModel.Appointments.AppointmentsProvider.IAppointmentsProviderLaunchActionVerbsStatics2 interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.ApplicationModel.Appointments.AppointmentsProvider.IAppointmentsProviderLaunchActionVerbsStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_ApplicationModel_Appointments_AppointmentsProvider_AppointmentsProviderLaunchActionVerbs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Appointments_AppointmentsProvider_AppointmentsProviderLaunchActionVerbs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Appointments_AppointmentsProvider_AppointmentsProviderLaunchActionVerbs[] = L"Windows.ApplicationModel.Appointments.AppointmentsProvider.AppointmentsProviderLaunchActionVerbs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Appointments.AppointmentsProvider.RemoveAppointmentOperation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Appointments.AppointmentsProvider.IRemoveAppointmentOperation ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Appointments_AppointmentsProvider_RemoveAppointmentOperation_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Appointments_AppointmentsProvider_RemoveAppointmentOperation_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Appointments_AppointmentsProvider_RemoveAppointmentOperation[] = L"Windows.ApplicationModel.Appointments.AppointmentsProvider.RemoveAppointmentOperation";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Appointments.AppointmentsProvider.ReplaceAppointmentOperation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Appointments.AppointmentsProvider.IReplaceAppointmentOperation ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Appointments_AppointmentsProvider_ReplaceAppointmentOperation_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Appointments_AppointmentsProvider_ReplaceAppointmentOperation_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Appointments_AppointmentsProvider_ReplaceAppointmentOperation[] = L"Windows.ApplicationModel.Appointments.AppointmentsProvider.ReplaceAppointmentOperation";
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
#endif // __windows2Eapplicationmodel2Eappointments2Eappointmentsprovider_p_h__

#endif // __windows2Eapplicationmodel2Eappointments2Eappointmentsprovider_h__
