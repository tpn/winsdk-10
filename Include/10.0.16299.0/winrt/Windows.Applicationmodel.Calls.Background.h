/* Header file automatically generated from windows.applicationmodel.calls.background.idl */
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
#ifndef __windows2Eapplicationmodel2Ecalls2Ebackground_h__
#define __windows2Eapplicationmodel2Ecalls2Ebackground_h__
#ifndef __windows2Eapplicationmodel2Ecalls2Ebackground_p_h__
#define __windows2Eapplicationmodel2Ecalls2Ebackground_p_h__


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
#include "Windows.ApplicationModel.Calls.h"

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneCallBlockedTriggerDetails_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneCallBlockedTriggerDetails_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Calls {
                namespace Background {
                    interface IPhoneCallBlockedTriggerDetails;
                } /* Windows */
            } /* ApplicationModel */
        } /* Calls */
    } /* Background */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneCallBlockedTriggerDetails ABI::Windows::ApplicationModel::Calls::Background::IPhoneCallBlockedTriggerDetails

#endif // ____x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneCallBlockedTriggerDetails_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneCallOriginDataRequestTriggerDetails_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneCallOriginDataRequestTriggerDetails_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Calls {
                namespace Background {
                    interface IPhoneCallOriginDataRequestTriggerDetails;
                } /* Windows */
            } /* ApplicationModel */
        } /* Calls */
    } /* Background */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneCallOriginDataRequestTriggerDetails ABI::Windows::ApplicationModel::Calls::Background::IPhoneCallOriginDataRequestTriggerDetails

#endif // ____x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneCallOriginDataRequestTriggerDetails_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneLineChangedTriggerDetails_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneLineChangedTriggerDetails_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Calls {
                namespace Background {
                    interface IPhoneLineChangedTriggerDetails;
                } /* Windows */
            } /* ApplicationModel */
        } /* Calls */
    } /* Background */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneLineChangedTriggerDetails ABI::Windows::ApplicationModel::Calls::Background::IPhoneLineChangedTriggerDetails

#endif // ____x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneLineChangedTriggerDetails_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneNewVoicemailMessageTriggerDetails_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneNewVoicemailMessageTriggerDetails_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Calls {
                namespace Background {
                    interface IPhoneNewVoicemailMessageTriggerDetails;
                } /* Windows */
            } /* ApplicationModel */
        } /* Calls */
    } /* Background */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneNewVoicemailMessageTriggerDetails ABI::Windows::ApplicationModel::Calls::Background::IPhoneNewVoicemailMessageTriggerDetails

#endif // ____x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneNewVoicemailMessageTriggerDetails_FWD_DEFINED__







namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Calls {
                namespace Background {
                    
                    typedef enum PhoneCallBlockedReason : int PhoneCallBlockedReason;
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* Calls */
    } /* Background */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Calls {
                namespace Background {
                    
                    typedef enum PhoneLineChangeKind : int PhoneLineChangeKind;
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* Calls */
    } /* Background */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Calls {
                namespace Background {
                    
                    typedef enum PhoneLineProperties : unsigned int PhoneLineProperties;
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* Calls */
    } /* Background */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Calls {
                namespace Background {
                    
                    typedef enum PhoneTriggerType : int PhoneTriggerType;
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* Calls */
    } /* Background */} /* ABI */





namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Calls {
                namespace Background {
                    class PhoneCallBlockedTriggerDetails;
                } /* Windows */
            } /* ApplicationModel */
        } /* Calls */
    } /* Background */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Calls {
                namespace Background {
                    class PhoneCallOriginDataRequestTriggerDetails;
                } /* Windows */
            } /* ApplicationModel */
        } /* Calls */
    } /* Background */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Calls {
                namespace Background {
                    class PhoneLineChangedTriggerDetails;
                } /* Windows */
            } /* ApplicationModel */
        } /* Calls */
    } /* Background */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Calls {
                namespace Background {
                    class PhoneNewVoicemailMessageTriggerDetails;
                } /* Windows */
            } /* ApplicationModel */
        } /* Calls */
    } /* Background */} /* ABI */








/*
 *
 * Struct Windows.ApplicationModel.Calls.Background.PhoneCallBlockedReason
 *
 * Introduced to Windows.ApplicationModel.Calls.Background.CallsBackgroundContract in version 1.0
 *
 *
 */

#if WINDOWS_APPLICATIONMODEL_CALLS_BACKGROUND_CALLSBACKGROUNDCONTRACT_VERSION >= 0x10000 || \
    WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION >= 0x10000 && WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION < 0x20000
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Calls {
                namespace Background {
                    /* [v1_enum, from_contract, contract] */
                    enum PhoneCallBlockedReason : int
                    {
                        PhoneCallBlockedReason_InCallBlockingList = 0,
                        PhoneCallBlockedReason_PrivateNumber = 1,
                        PhoneCallBlockedReason_UnknownNumber = 2,
                    };
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* Calls */
    } /* Background */} /* ABI */
#endif // WINDOWS_APPLICATIONMODEL_CALLS_BACKGROUND_CALLSBACKGROUNDCONTRACT_VERSION >= 0x10000 || \
//     WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION >= 0x10000 && WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION < 0x20000


/*
 *
 * Struct Windows.ApplicationModel.Calls.Background.PhoneLineChangeKind
 *
 * Introduced to Windows.ApplicationModel.Calls.Background.CallsBackgroundContract in version 1.0
 *
 *
 */

#if WINDOWS_APPLICATIONMODEL_CALLS_BACKGROUND_CALLSBACKGROUNDCONTRACT_VERSION >= 0x10000 || \
    WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION >= 0x10000 && WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION < 0x20000
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Calls {
                namespace Background {
                    /* [v1_enum, from_contract, contract] */
                    enum PhoneLineChangeKind : int
                    {
                        PhoneLineChangeKind_Added = 0,
                        PhoneLineChangeKind_Removed = 1,
                        PhoneLineChangeKind_PropertiesChanged = 2,
                    };
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* Calls */
    } /* Background */} /* ABI */
#endif // WINDOWS_APPLICATIONMODEL_CALLS_BACKGROUND_CALLSBACKGROUNDCONTRACT_VERSION >= 0x10000 || \
//     WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION >= 0x10000 && WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION < 0x20000


/*
 *
 * Struct Windows.ApplicationModel.Calls.Background.PhoneLineProperties
 *
 * Introduced to Windows.ApplicationModel.Calls.Background.CallsBackgroundContract in version 1.0
 *
 *
 */

#if WINDOWS_APPLICATIONMODEL_CALLS_BACKGROUND_CALLSBACKGROUNDCONTRACT_VERSION >= 0x10000 || \
    WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION >= 0x10000 && WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION < 0x20000
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Calls {
                namespace Background {
                    /* [v1_enum, from_contract, flags, contract] */
                    enum PhoneLineProperties : unsigned int
                    {
                        PhoneLineProperties_None = 0,
                        PhoneLineProperties_BrandingOptions = 0x1,
                        PhoneLineProperties_CanDial = 0x2,
                        PhoneLineProperties_CellularDetails = 0x4,
                        PhoneLineProperties_DisplayColor = 0x8,
                        PhoneLineProperties_DisplayName = 0x10,
                        PhoneLineProperties_NetworkName = 0x20,
                        PhoneLineProperties_NetworkState = 0x40,
                        PhoneLineProperties_Transport = 0x80,
                        PhoneLineProperties_Voicemail = 0x100,
                    };
                    
                    DEFINE_ENUM_FLAG_OPERATORS(PhoneLineProperties)
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* Calls */
    } /* Background */} /* ABI */
#endif // WINDOWS_APPLICATIONMODEL_CALLS_BACKGROUND_CALLSBACKGROUNDCONTRACT_VERSION >= 0x10000 || \
//     WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION >= 0x10000 && WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION < 0x20000


/*
 *
 * Struct Windows.ApplicationModel.Calls.Background.PhoneTriggerType
 *
 * Introduced to Windows.ApplicationModel.Calls.Background.CallsBackgroundContract in version 1.0
 *
 *
 */

#if WINDOWS_APPLICATIONMODEL_CALLS_BACKGROUND_CALLSBACKGROUNDCONTRACT_VERSION >= 0x10000 || \
    WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION >= 0x10000 && WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION < 0x20000
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Calls {
                namespace Background {
                    /* [v1_enum, from_contract, contract] */
                    enum PhoneTriggerType : int
                    {
                        PhoneTriggerType_NewVoicemailMessage = 0,
                        PhoneTriggerType_CallHistoryChanged = 1,
                        PhoneTriggerType_LineChanged = 2,
                        PhoneTriggerType_AirplaneModeDisabledForEmergencyCall = 3,
                        PhoneTriggerType_CallOriginDataRequest = 4,
                        PhoneTriggerType_CallBlocked = 5,
                    };
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* Calls */
    } /* Background */} /* ABI */
#endif // WINDOWS_APPLICATIONMODEL_CALLS_BACKGROUND_CALLSBACKGROUNDCONTRACT_VERSION >= 0x10000 || \
//     WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION >= 0x10000 && WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION < 0x20000


/*
 *
 * Interface Windows.ApplicationModel.Calls.Background.IPhoneCallBlockedTriggerDetails
 *
 * Introduced to Windows.ApplicationModel.Calls.Background.CallsBackgroundContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Calls.Background.PhoneCallBlockedTriggerDetails
 *
 *
 */
#if WINDOWS_APPLICATIONMODEL_CALLS_BACKGROUND_CALLSBACKGROUNDCONTRACT_VERSION >= 0x10000 || \
    WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION >= 0x10000 && WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION < 0x20000
#if !defined(____x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneCallBlockedTriggerDetails_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneCallBlockedTriggerDetails_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Calls_Background_IPhoneCallBlockedTriggerDetails[] = L"Windows.ApplicationModel.Calls.Background.IPhoneCallBlockedTriggerDetails";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Calls {
                namespace Background {
                    /* [object, uuid("A4A690A2-E4C1-427F-864E-E470477DDB67"), from_contract, exclusiveto, contract] */
                    MIDL_INTERFACE("A4A690A2-E4C1-427F-864E-E470477DDB67")
                    IPhoneCallBlockedTriggerDetails : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PhoneNumber(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LineId(
                            /* [retval, out] */__RPC__out GUID * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CallBlockedReason(
                            /* [retval, out] */__RPC__out ABI::Windows::ApplicationModel::Calls::Background::PhoneCallBlockedReason * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IPhoneCallBlockedTriggerDetails=_uuidof(IPhoneCallBlockedTriggerDetails);
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* Calls */
    } /* Background */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneCallBlockedTriggerDetails;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneCallBlockedTriggerDetails_INTERFACE_DEFINED__) */
#endif // WINDOWS_APPLICATIONMODEL_CALLS_BACKGROUND_CALLSBACKGROUNDCONTRACT_VERSION >= 0x10000 || \
//     WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION >= 0x10000 && WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION < 0x20000


/*
 *
 * Interface Windows.ApplicationModel.Calls.Background.IPhoneCallOriginDataRequestTriggerDetails
 *
 * Introduced to Windows.ApplicationModel.Calls.Background.CallsBackgroundContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Calls.Background.PhoneCallOriginDataRequestTriggerDetails
 *
 *
 */
#if WINDOWS_APPLICATIONMODEL_CALLS_BACKGROUND_CALLSBACKGROUNDCONTRACT_VERSION >= 0x10000 || \
    WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION >= 0x10000 && WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION < 0x20000
#if !defined(____x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneCallOriginDataRequestTriggerDetails_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneCallOriginDataRequestTriggerDetails_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Calls_Background_IPhoneCallOriginDataRequestTriggerDetails[] = L"Windows.ApplicationModel.Calls.Background.IPhoneCallOriginDataRequestTriggerDetails";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Calls {
                namespace Background {
                    /* [object, uuid("6E9B5B3F-C54B-4E82-4CC9-E329A4184592"), from_contract, exclusiveto, contract] */
                    MIDL_INTERFACE("6E9B5B3F-C54B-4E82-4CC9-E329A4184592")
                    IPhoneCallOriginDataRequestTriggerDetails : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RequestId(
                            /* [retval, out] */__RPC__out GUID * result
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PhoneNumber(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * result
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IPhoneCallOriginDataRequestTriggerDetails=_uuidof(IPhoneCallOriginDataRequestTriggerDetails);
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* Calls */
    } /* Background */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneCallOriginDataRequestTriggerDetails;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneCallOriginDataRequestTriggerDetails_INTERFACE_DEFINED__) */
#endif // WINDOWS_APPLICATIONMODEL_CALLS_BACKGROUND_CALLSBACKGROUNDCONTRACT_VERSION >= 0x10000 || \
//     WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION >= 0x10000 && WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION < 0x20000


/*
 *
 * Interface Windows.ApplicationModel.Calls.Background.IPhoneLineChangedTriggerDetails
 *
 * Introduced to Windows.ApplicationModel.Calls.Background.CallsBackgroundContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Calls.Background.PhoneLineChangedTriggerDetails
 *
 *
 */
#if WINDOWS_APPLICATIONMODEL_CALLS_BACKGROUND_CALLSBACKGROUNDCONTRACT_VERSION >= 0x10000 || \
    WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION >= 0x10000 && WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION < 0x20000
#if !defined(____x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneLineChangedTriggerDetails_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneLineChangedTriggerDetails_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Calls_Background_IPhoneLineChangedTriggerDetails[] = L"Windows.ApplicationModel.Calls.Background.IPhoneLineChangedTriggerDetails";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Calls {
                namespace Background {
                    /* [object, uuid("C6D321E7-D11D-40D8-B2B7-E40A01D66249"), from_contract, exclusiveto, contract] */
                    MIDL_INTERFACE("C6D321E7-D11D-40D8-B2B7-E40A01D66249")
                    IPhoneLineChangedTriggerDetails : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LineId(
                            /* [retval, out] */__RPC__out GUID * result
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ChangeType(
                            /* [retval, out] */__RPC__out ABI::Windows::ApplicationModel::Calls::Background::PhoneLineChangeKind * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE HasLinePropertyChanged(
                            /* [in] */ABI::Windows::ApplicationModel::Calls::Background::PhoneLineProperties lineProperty,
                            /* [retval, out] */__RPC__out boolean * result
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IPhoneLineChangedTriggerDetails=_uuidof(IPhoneLineChangedTriggerDetails);
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* Calls */
    } /* Background */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneLineChangedTriggerDetails;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneLineChangedTriggerDetails_INTERFACE_DEFINED__) */
#endif // WINDOWS_APPLICATIONMODEL_CALLS_BACKGROUND_CALLSBACKGROUNDCONTRACT_VERSION >= 0x10000 || \
//     WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION >= 0x10000 && WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION < 0x20000


/*
 *
 * Interface Windows.ApplicationModel.Calls.Background.IPhoneNewVoicemailMessageTriggerDetails
 *
 * Introduced to Windows.ApplicationModel.Calls.Background.CallsBackgroundContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Calls.Background.PhoneNewVoicemailMessageTriggerDetails
 *
 *
 */
#if WINDOWS_APPLICATIONMODEL_CALLS_BACKGROUND_CALLSBACKGROUNDCONTRACT_VERSION >= 0x10000 || \
    WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION >= 0x10000 && WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION < 0x20000
#if !defined(____x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneNewVoicemailMessageTriggerDetails_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneNewVoicemailMessageTriggerDetails_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Calls_Background_IPhoneNewVoicemailMessageTriggerDetails[] = L"Windows.ApplicationModel.Calls.Background.IPhoneNewVoicemailMessageTriggerDetails";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Calls {
                namespace Background {
                    /* [object, uuid("13A8C01B-B831-48D3-8BA9-8D22A6580DCF"), from_contract, exclusiveto, contract] */
                    MIDL_INTERFACE("13A8C01B-B831-48D3-8BA9-8D22A6580DCF")
                    IPhoneNewVoicemailMessageTriggerDetails : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LineId(
                            /* [retval, out] */__RPC__out GUID * result
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_VoicemailCount(
                            /* [retval, out] */__RPC__out INT32 * result
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_OperatorMessage(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * result
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IPhoneNewVoicemailMessageTriggerDetails=_uuidof(IPhoneNewVoicemailMessageTriggerDetails);
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* Calls */
    } /* Background */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneNewVoicemailMessageTriggerDetails;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneNewVoicemailMessageTriggerDetails_INTERFACE_DEFINED__) */
#endif // WINDOWS_APPLICATIONMODEL_CALLS_BACKGROUND_CALLSBACKGROUNDCONTRACT_VERSION >= 0x10000 || \
//     WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION >= 0x10000 && WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION < 0x20000


/*
 *
 * Class Windows.ApplicationModel.Calls.Background.PhoneCallBlockedTriggerDetails
 *
 * Introduced to Windows.ApplicationModel.Calls.Background.CallsBackgroundContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Calls.Background.IPhoneCallBlockedTriggerDetails ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_APPLICATIONMODEL_CALLS_BACKGROUND_CALLSBACKGROUNDCONTRACT_VERSION >= 0x10000 || \
    WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION >= 0x10000 && WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION < 0x20000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Calls_Background_PhoneCallBlockedTriggerDetails_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Calls_Background_PhoneCallBlockedTriggerDetails_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Calls_Background_PhoneCallBlockedTriggerDetails[] = L"Windows.ApplicationModel.Calls.Background.PhoneCallBlockedTriggerDetails";
#endif
#endif // WINDOWS_APPLICATIONMODEL_CALLS_BACKGROUND_CALLSBACKGROUNDCONTRACT_VERSION >= 0x10000 || \
//     WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION >= 0x10000 && WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION < 0x20000


/*
 *
 * Class Windows.ApplicationModel.Calls.Background.PhoneCallOriginDataRequestTriggerDetails
 *
 * Introduced to Windows.ApplicationModel.Calls.Background.CallsBackgroundContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Calls.Background.IPhoneCallOriginDataRequestTriggerDetails ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_APPLICATIONMODEL_CALLS_BACKGROUND_CALLSBACKGROUNDCONTRACT_VERSION >= 0x10000 || \
    WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION >= 0x10000 && WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION < 0x20000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Calls_Background_PhoneCallOriginDataRequestTriggerDetails_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Calls_Background_PhoneCallOriginDataRequestTriggerDetails_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Calls_Background_PhoneCallOriginDataRequestTriggerDetails[] = L"Windows.ApplicationModel.Calls.Background.PhoneCallOriginDataRequestTriggerDetails";
#endif
#endif // WINDOWS_APPLICATIONMODEL_CALLS_BACKGROUND_CALLSBACKGROUNDCONTRACT_VERSION >= 0x10000 || \
//     WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION >= 0x10000 && WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION < 0x20000


/*
 *
 * Class Windows.ApplicationModel.Calls.Background.PhoneLineChangedTriggerDetails
 *
 * Introduced to Windows.ApplicationModel.Calls.Background.CallsBackgroundContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Calls.Background.IPhoneLineChangedTriggerDetails ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_APPLICATIONMODEL_CALLS_BACKGROUND_CALLSBACKGROUNDCONTRACT_VERSION >= 0x10000 || \
    WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION >= 0x10000 && WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION < 0x20000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Calls_Background_PhoneLineChangedTriggerDetails_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Calls_Background_PhoneLineChangedTriggerDetails_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Calls_Background_PhoneLineChangedTriggerDetails[] = L"Windows.ApplicationModel.Calls.Background.PhoneLineChangedTriggerDetails";
#endif
#endif // WINDOWS_APPLICATIONMODEL_CALLS_BACKGROUND_CALLSBACKGROUNDCONTRACT_VERSION >= 0x10000 || \
//     WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION >= 0x10000 && WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION < 0x20000


/*
 *
 * Class Windows.ApplicationModel.Calls.Background.PhoneNewVoicemailMessageTriggerDetails
 *
 * Introduced to Windows.ApplicationModel.Calls.Background.CallsBackgroundContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Calls.Background.IPhoneNewVoicemailMessageTriggerDetails ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_APPLICATIONMODEL_CALLS_BACKGROUND_CALLSBACKGROUNDCONTRACT_VERSION >= 0x10000 || \
    WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION >= 0x10000 && WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION < 0x20000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Calls_Background_PhoneNewVoicemailMessageTriggerDetails_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Calls_Background_PhoneNewVoicemailMessageTriggerDetails_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Calls_Background_PhoneNewVoicemailMessageTriggerDetails[] = L"Windows.ApplicationModel.Calls.Background.PhoneNewVoicemailMessageTriggerDetails";
#endif
#endif // WINDOWS_APPLICATIONMODEL_CALLS_BACKGROUND_CALLSBACKGROUNDCONTRACT_VERSION >= 0x10000 || \
//     WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION >= 0x10000 && WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION < 0x20000





#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneCallBlockedTriggerDetails_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneCallBlockedTriggerDetails_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneCallBlockedTriggerDetails __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneCallBlockedTriggerDetails;

#endif // ____x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneCallBlockedTriggerDetails_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneCallOriginDataRequestTriggerDetails_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneCallOriginDataRequestTriggerDetails_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneCallOriginDataRequestTriggerDetails __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneCallOriginDataRequestTriggerDetails;

#endif // ____x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneCallOriginDataRequestTriggerDetails_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneLineChangedTriggerDetails_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneLineChangedTriggerDetails_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneLineChangedTriggerDetails __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneLineChangedTriggerDetails;

#endif // ____x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneLineChangedTriggerDetails_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneNewVoicemailMessageTriggerDetails_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneNewVoicemailMessageTriggerDetails_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneNewVoicemailMessageTriggerDetails __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneNewVoicemailMessageTriggerDetails;

#endif // ____x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneNewVoicemailMessageTriggerDetails_FWD_DEFINED__







typedef enum __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CPhoneCallBlockedReason __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CPhoneCallBlockedReason;


typedef enum __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CPhoneLineChangeKind __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CPhoneLineChangeKind;


typedef enum __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CPhoneLineProperties __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CPhoneLineProperties;


typedef enum __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CPhoneTriggerType __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CPhoneTriggerType;















/*
 *
 * Struct Windows.ApplicationModel.Calls.Background.PhoneCallBlockedReason
 *
 * Introduced to Windows.ApplicationModel.Calls.Background.CallsBackgroundContract in version 1.0
 *
 *
 */

#if WINDOWS_APPLICATIONMODEL_CALLS_BACKGROUND_CALLSBACKGROUNDCONTRACT_VERSION >= 0x10000 || \
    WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION >= 0x10000 && WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION < 0x20000
/* [v1_enum, from_contract, contract] */
enum __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CPhoneCallBlockedReason
{
    PhoneCallBlockedReason_InCallBlockingList = 0,
    PhoneCallBlockedReason_PrivateNumber = 1,
    PhoneCallBlockedReason_UnknownNumber = 2,
};
#endif // WINDOWS_APPLICATIONMODEL_CALLS_BACKGROUND_CALLSBACKGROUNDCONTRACT_VERSION >= 0x10000 || \
//     WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION >= 0x10000 && WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION < 0x20000


/*
 *
 * Struct Windows.ApplicationModel.Calls.Background.PhoneLineChangeKind
 *
 * Introduced to Windows.ApplicationModel.Calls.Background.CallsBackgroundContract in version 1.0
 *
 *
 */

#if WINDOWS_APPLICATIONMODEL_CALLS_BACKGROUND_CALLSBACKGROUNDCONTRACT_VERSION >= 0x10000 || \
    WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION >= 0x10000 && WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION < 0x20000
/* [v1_enum, from_contract, contract] */
enum __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CPhoneLineChangeKind
{
    PhoneLineChangeKind_Added = 0,
    PhoneLineChangeKind_Removed = 1,
    PhoneLineChangeKind_PropertiesChanged = 2,
};
#endif // WINDOWS_APPLICATIONMODEL_CALLS_BACKGROUND_CALLSBACKGROUNDCONTRACT_VERSION >= 0x10000 || \
//     WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION >= 0x10000 && WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION < 0x20000


/*
 *
 * Struct Windows.ApplicationModel.Calls.Background.PhoneLineProperties
 *
 * Introduced to Windows.ApplicationModel.Calls.Background.CallsBackgroundContract in version 1.0
 *
 *
 */

#if WINDOWS_APPLICATIONMODEL_CALLS_BACKGROUND_CALLSBACKGROUNDCONTRACT_VERSION >= 0x10000 || \
    WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION >= 0x10000 && WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION < 0x20000
/* [v1_enum, from_contract, flags, contract] */
enum __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CPhoneLineProperties
{
    PhoneLineProperties_None = 0,
    PhoneLineProperties_BrandingOptions = 0x1,
    PhoneLineProperties_CanDial = 0x2,
    PhoneLineProperties_CellularDetails = 0x4,
    PhoneLineProperties_DisplayColor = 0x8,
    PhoneLineProperties_DisplayName = 0x10,
    PhoneLineProperties_NetworkName = 0x20,
    PhoneLineProperties_NetworkState = 0x40,
    PhoneLineProperties_Transport = 0x80,
    PhoneLineProperties_Voicemail = 0x100,
};
#endif // WINDOWS_APPLICATIONMODEL_CALLS_BACKGROUND_CALLSBACKGROUNDCONTRACT_VERSION >= 0x10000 || \
//     WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION >= 0x10000 && WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION < 0x20000


/*
 *
 * Struct Windows.ApplicationModel.Calls.Background.PhoneTriggerType
 *
 * Introduced to Windows.ApplicationModel.Calls.Background.CallsBackgroundContract in version 1.0
 *
 *
 */

#if WINDOWS_APPLICATIONMODEL_CALLS_BACKGROUND_CALLSBACKGROUNDCONTRACT_VERSION >= 0x10000 || \
    WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION >= 0x10000 && WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION < 0x20000
/* [v1_enum, from_contract, contract] */
enum __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CPhoneTriggerType
{
    PhoneTriggerType_NewVoicemailMessage = 0,
    PhoneTriggerType_CallHistoryChanged = 1,
    PhoneTriggerType_LineChanged = 2,
    PhoneTriggerType_AirplaneModeDisabledForEmergencyCall = 3,
    PhoneTriggerType_CallOriginDataRequest = 4,
    PhoneTriggerType_CallBlocked = 5,
};
#endif // WINDOWS_APPLICATIONMODEL_CALLS_BACKGROUND_CALLSBACKGROUNDCONTRACT_VERSION >= 0x10000 || \
//     WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION >= 0x10000 && WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION < 0x20000


/*
 *
 * Interface Windows.ApplicationModel.Calls.Background.IPhoneCallBlockedTriggerDetails
 *
 * Introduced to Windows.ApplicationModel.Calls.Background.CallsBackgroundContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Calls.Background.PhoneCallBlockedTriggerDetails
 *
 *
 */
#if WINDOWS_APPLICATIONMODEL_CALLS_BACKGROUND_CALLSBACKGROUNDCONTRACT_VERSION >= 0x10000 || \
    WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION >= 0x10000 && WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION < 0x20000
#if !defined(____x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneCallBlockedTriggerDetails_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneCallBlockedTriggerDetails_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Calls_Background_IPhoneCallBlockedTriggerDetails[] = L"Windows.ApplicationModel.Calls.Background.IPhoneCallBlockedTriggerDetails";
/* [object, uuid("A4A690A2-E4C1-427F-864E-E470477DDB67"), from_contract, exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneCallBlockedTriggerDetailsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneCallBlockedTriggerDetails * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneCallBlockedTriggerDetails * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneCallBlockedTriggerDetails * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneCallBlockedTriggerDetails * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneCallBlockedTriggerDetails * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneCallBlockedTriggerDetails * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PhoneNumber )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneCallBlockedTriggerDetails * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LineId )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneCallBlockedTriggerDetails * This,
        /* [retval, out] */__RPC__out GUID * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CallBlockedReason )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneCallBlockedTriggerDetails * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CPhoneCallBlockedReason * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneCallBlockedTriggerDetailsVtbl;

interface __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneCallBlockedTriggerDetails
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneCallBlockedTriggerDetailsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneCallBlockedTriggerDetails_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneCallBlockedTriggerDetails_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneCallBlockedTriggerDetails_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneCallBlockedTriggerDetails_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneCallBlockedTriggerDetails_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneCallBlockedTriggerDetails_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneCallBlockedTriggerDetails_get_PhoneNumber(This,value) \
    ( (This)->lpVtbl->get_PhoneNumber(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneCallBlockedTriggerDetails_get_LineId(This,value) \
    ( (This)->lpVtbl->get_LineId(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneCallBlockedTriggerDetails_get_CallBlockedReason(This,value) \
    ( (This)->lpVtbl->get_CallBlockedReason(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneCallBlockedTriggerDetails;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneCallBlockedTriggerDetails_INTERFACE_DEFINED__) */
#endif // WINDOWS_APPLICATIONMODEL_CALLS_BACKGROUND_CALLSBACKGROUNDCONTRACT_VERSION >= 0x10000 || \
//     WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION >= 0x10000 && WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION < 0x20000


/*
 *
 * Interface Windows.ApplicationModel.Calls.Background.IPhoneCallOriginDataRequestTriggerDetails
 *
 * Introduced to Windows.ApplicationModel.Calls.Background.CallsBackgroundContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Calls.Background.PhoneCallOriginDataRequestTriggerDetails
 *
 *
 */
#if WINDOWS_APPLICATIONMODEL_CALLS_BACKGROUND_CALLSBACKGROUNDCONTRACT_VERSION >= 0x10000 || \
    WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION >= 0x10000 && WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION < 0x20000
#if !defined(____x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneCallOriginDataRequestTriggerDetails_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneCallOriginDataRequestTriggerDetails_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Calls_Background_IPhoneCallOriginDataRequestTriggerDetails[] = L"Windows.ApplicationModel.Calls.Background.IPhoneCallOriginDataRequestTriggerDetails";
/* [object, uuid("6E9B5B3F-C54B-4E82-4CC9-E329A4184592"), from_contract, exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneCallOriginDataRequestTriggerDetailsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneCallOriginDataRequestTriggerDetails * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneCallOriginDataRequestTriggerDetails * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneCallOriginDataRequestTriggerDetails * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneCallOriginDataRequestTriggerDetails * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneCallOriginDataRequestTriggerDetails * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneCallOriginDataRequestTriggerDetails * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RequestId )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneCallOriginDataRequestTriggerDetails * This,
        /* [retval, out] */__RPC__out GUID * result
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PhoneNumber )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneCallOriginDataRequestTriggerDetails * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneCallOriginDataRequestTriggerDetailsVtbl;

interface __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneCallOriginDataRequestTriggerDetails
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneCallOriginDataRequestTriggerDetailsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneCallOriginDataRequestTriggerDetails_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneCallOriginDataRequestTriggerDetails_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneCallOriginDataRequestTriggerDetails_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneCallOriginDataRequestTriggerDetails_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneCallOriginDataRequestTriggerDetails_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneCallOriginDataRequestTriggerDetails_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneCallOriginDataRequestTriggerDetails_get_RequestId(This,result) \
    ( (This)->lpVtbl->get_RequestId(This,result) )

#define __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneCallOriginDataRequestTriggerDetails_get_PhoneNumber(This,result) \
    ( (This)->lpVtbl->get_PhoneNumber(This,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneCallOriginDataRequestTriggerDetails;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneCallOriginDataRequestTriggerDetails_INTERFACE_DEFINED__) */
#endif // WINDOWS_APPLICATIONMODEL_CALLS_BACKGROUND_CALLSBACKGROUNDCONTRACT_VERSION >= 0x10000 || \
//     WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION >= 0x10000 && WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION < 0x20000


/*
 *
 * Interface Windows.ApplicationModel.Calls.Background.IPhoneLineChangedTriggerDetails
 *
 * Introduced to Windows.ApplicationModel.Calls.Background.CallsBackgroundContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Calls.Background.PhoneLineChangedTriggerDetails
 *
 *
 */
#if WINDOWS_APPLICATIONMODEL_CALLS_BACKGROUND_CALLSBACKGROUNDCONTRACT_VERSION >= 0x10000 || \
    WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION >= 0x10000 && WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION < 0x20000
#if !defined(____x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneLineChangedTriggerDetails_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneLineChangedTriggerDetails_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Calls_Background_IPhoneLineChangedTriggerDetails[] = L"Windows.ApplicationModel.Calls.Background.IPhoneLineChangedTriggerDetails";
/* [object, uuid("C6D321E7-D11D-40D8-B2B7-E40A01D66249"), from_contract, exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneLineChangedTriggerDetailsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneLineChangedTriggerDetails * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneLineChangedTriggerDetails * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneLineChangedTriggerDetails * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneLineChangedTriggerDetails * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneLineChangedTriggerDetails * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneLineChangedTriggerDetails * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LineId )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneLineChangedTriggerDetails * This,
        /* [retval, out] */__RPC__out GUID * result
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ChangeType )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneLineChangedTriggerDetails * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CPhoneLineChangeKind * result
        );
    HRESULT ( STDMETHODCALLTYPE *HasLinePropertyChanged )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneLineChangedTriggerDetails * This,
        /* [in] */__x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CPhoneLineProperties lineProperty,
        /* [retval, out] */__RPC__out boolean * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneLineChangedTriggerDetailsVtbl;

interface __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneLineChangedTriggerDetails
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneLineChangedTriggerDetailsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneLineChangedTriggerDetails_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneLineChangedTriggerDetails_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneLineChangedTriggerDetails_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneLineChangedTriggerDetails_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneLineChangedTriggerDetails_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneLineChangedTriggerDetails_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneLineChangedTriggerDetails_get_LineId(This,result) \
    ( (This)->lpVtbl->get_LineId(This,result) )

#define __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneLineChangedTriggerDetails_get_ChangeType(This,result) \
    ( (This)->lpVtbl->get_ChangeType(This,result) )

#define __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneLineChangedTriggerDetails_HasLinePropertyChanged(This,lineProperty,result) \
    ( (This)->lpVtbl->HasLinePropertyChanged(This,lineProperty,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneLineChangedTriggerDetails;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneLineChangedTriggerDetails_INTERFACE_DEFINED__) */
#endif // WINDOWS_APPLICATIONMODEL_CALLS_BACKGROUND_CALLSBACKGROUNDCONTRACT_VERSION >= 0x10000 || \
//     WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION >= 0x10000 && WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION < 0x20000


/*
 *
 * Interface Windows.ApplicationModel.Calls.Background.IPhoneNewVoicemailMessageTriggerDetails
 *
 * Introduced to Windows.ApplicationModel.Calls.Background.CallsBackgroundContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Calls.Background.PhoneNewVoicemailMessageTriggerDetails
 *
 *
 */
#if WINDOWS_APPLICATIONMODEL_CALLS_BACKGROUND_CALLSBACKGROUNDCONTRACT_VERSION >= 0x10000 || \
    WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION >= 0x10000 && WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION < 0x20000
#if !defined(____x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneNewVoicemailMessageTriggerDetails_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneNewVoicemailMessageTriggerDetails_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Calls_Background_IPhoneNewVoicemailMessageTriggerDetails[] = L"Windows.ApplicationModel.Calls.Background.IPhoneNewVoicemailMessageTriggerDetails";
/* [object, uuid("13A8C01B-B831-48D3-8BA9-8D22A6580DCF"), from_contract, exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneNewVoicemailMessageTriggerDetailsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneNewVoicemailMessageTriggerDetails * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneNewVoicemailMessageTriggerDetails * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneNewVoicemailMessageTriggerDetails * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneNewVoicemailMessageTriggerDetails * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneNewVoicemailMessageTriggerDetails * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneNewVoicemailMessageTriggerDetails * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LineId )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneNewVoicemailMessageTriggerDetails * This,
        /* [retval, out] */__RPC__out GUID * result
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_VoicemailCount )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneNewVoicemailMessageTriggerDetails * This,
        /* [retval, out] */__RPC__out INT32 * result
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_OperatorMessage )(
        __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneNewVoicemailMessageTriggerDetails * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneNewVoicemailMessageTriggerDetailsVtbl;

interface __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneNewVoicemailMessageTriggerDetails
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneNewVoicemailMessageTriggerDetailsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneNewVoicemailMessageTriggerDetails_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneNewVoicemailMessageTriggerDetails_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneNewVoicemailMessageTriggerDetails_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneNewVoicemailMessageTriggerDetails_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneNewVoicemailMessageTriggerDetails_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneNewVoicemailMessageTriggerDetails_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneNewVoicemailMessageTriggerDetails_get_LineId(This,result) \
    ( (This)->lpVtbl->get_LineId(This,result) )

#define __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneNewVoicemailMessageTriggerDetails_get_VoicemailCount(This,result) \
    ( (This)->lpVtbl->get_VoicemailCount(This,result) )

#define __x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneNewVoicemailMessageTriggerDetails_get_OperatorMessage(This,result) \
    ( (This)->lpVtbl->get_OperatorMessage(This,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneNewVoicemailMessageTriggerDetails;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CCalls_CBackground_CIPhoneNewVoicemailMessageTriggerDetails_INTERFACE_DEFINED__) */
#endif // WINDOWS_APPLICATIONMODEL_CALLS_BACKGROUND_CALLSBACKGROUNDCONTRACT_VERSION >= 0x10000 || \
//     WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION >= 0x10000 && WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION < 0x20000


/*
 *
 * Class Windows.ApplicationModel.Calls.Background.PhoneCallBlockedTriggerDetails
 *
 * Introduced to Windows.ApplicationModel.Calls.Background.CallsBackgroundContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Calls.Background.IPhoneCallBlockedTriggerDetails ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_APPLICATIONMODEL_CALLS_BACKGROUND_CALLSBACKGROUNDCONTRACT_VERSION >= 0x10000 || \
    WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION >= 0x10000 && WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION < 0x20000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Calls_Background_PhoneCallBlockedTriggerDetails_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Calls_Background_PhoneCallBlockedTriggerDetails_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Calls_Background_PhoneCallBlockedTriggerDetails[] = L"Windows.ApplicationModel.Calls.Background.PhoneCallBlockedTriggerDetails";
#endif
#endif // WINDOWS_APPLICATIONMODEL_CALLS_BACKGROUND_CALLSBACKGROUNDCONTRACT_VERSION >= 0x10000 || \
//     WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION >= 0x10000 && WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION < 0x20000


/*
 *
 * Class Windows.ApplicationModel.Calls.Background.PhoneCallOriginDataRequestTriggerDetails
 *
 * Introduced to Windows.ApplicationModel.Calls.Background.CallsBackgroundContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Calls.Background.IPhoneCallOriginDataRequestTriggerDetails ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_APPLICATIONMODEL_CALLS_BACKGROUND_CALLSBACKGROUNDCONTRACT_VERSION >= 0x10000 || \
    WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION >= 0x10000 && WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION < 0x20000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Calls_Background_PhoneCallOriginDataRequestTriggerDetails_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Calls_Background_PhoneCallOriginDataRequestTriggerDetails_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Calls_Background_PhoneCallOriginDataRequestTriggerDetails[] = L"Windows.ApplicationModel.Calls.Background.PhoneCallOriginDataRequestTriggerDetails";
#endif
#endif // WINDOWS_APPLICATIONMODEL_CALLS_BACKGROUND_CALLSBACKGROUNDCONTRACT_VERSION >= 0x10000 || \
//     WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION >= 0x10000 && WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION < 0x20000


/*
 *
 * Class Windows.ApplicationModel.Calls.Background.PhoneLineChangedTriggerDetails
 *
 * Introduced to Windows.ApplicationModel.Calls.Background.CallsBackgroundContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Calls.Background.IPhoneLineChangedTriggerDetails ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_APPLICATIONMODEL_CALLS_BACKGROUND_CALLSBACKGROUNDCONTRACT_VERSION >= 0x10000 || \
    WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION >= 0x10000 && WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION < 0x20000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Calls_Background_PhoneLineChangedTriggerDetails_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Calls_Background_PhoneLineChangedTriggerDetails_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Calls_Background_PhoneLineChangedTriggerDetails[] = L"Windows.ApplicationModel.Calls.Background.PhoneLineChangedTriggerDetails";
#endif
#endif // WINDOWS_APPLICATIONMODEL_CALLS_BACKGROUND_CALLSBACKGROUNDCONTRACT_VERSION >= 0x10000 || \
//     WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION >= 0x10000 && WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION < 0x20000


/*
 *
 * Class Windows.ApplicationModel.Calls.Background.PhoneNewVoicemailMessageTriggerDetails
 *
 * Introduced to Windows.ApplicationModel.Calls.Background.CallsBackgroundContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Calls.Background.IPhoneNewVoicemailMessageTriggerDetails ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_APPLICATIONMODEL_CALLS_BACKGROUND_CALLSBACKGROUNDCONTRACT_VERSION >= 0x10000 || \
    WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION >= 0x10000 && WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION < 0x20000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Calls_Background_PhoneNewVoicemailMessageTriggerDetails_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Calls_Background_PhoneNewVoicemailMessageTriggerDetails_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Calls_Background_PhoneNewVoicemailMessageTriggerDetails[] = L"Windows.ApplicationModel.Calls.Background.PhoneNewVoicemailMessageTriggerDetails";
#endif
#endif // WINDOWS_APPLICATIONMODEL_CALLS_BACKGROUND_CALLSBACKGROUNDCONTRACT_VERSION >= 0x10000 || \
//     WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION >= 0x10000 && WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION < 0x20000





#endif // defined(__cplusplus)
#pragma pop_macro("MIDL_CONST_ID")
// Restore the original value of the 'DEPRECATED' macro
#pragma pop_macro("DEPRECATED")

#ifdef __clang__
#pragma clang diagnostic pop // deprecated-declarations
#else
#pragma warning(pop)
#endif
#endif // __windows2Eapplicationmodel2Ecalls2Ebackground_p_h__

#endif // __windows2Eapplicationmodel2Ecalls2Ebackground_h__
