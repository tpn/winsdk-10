/* Header file automatically generated from windows.phone.restricted.cellular.videotelephony.idl */
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
#ifndef __windows2Ephone2Erestricted2Ecellular2Evideotelephony_h__
#define __windows2Ephone2Erestricted2Ecellular2Evideotelephony_h__
#ifndef __windows2Ephone2Erestricted2Ecellular2Evideotelephony_p_h__
#define __windows2Ephone2Erestricted2Ecellular2Evideotelephony_p_h__


#pragma once

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

#if !defined(WINDOWS_APPLICATIONMODEL_COMMUNICATIONBLOCKING_COMMUNICATIONBLOCKINGCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_COMMUNICATIONBLOCKING_COMMUNICATIONBLOCKINGCONTRACT_VERSION 0x20000
#endif // defined(WINDOWS_APPLICATIONMODEL_COMMUNICATIONBLOCKING_COMMUNICATIONBLOCKINGCONTRACT_VERSION)

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

#if !defined(WINDOWS_PHONE_RESTRICTED_CELLULAR_VIDEOTELEPHONY_INTERNALVIDEOTELEPHONYCONTRACT_VERSION)
#define WINDOWS_PHONE_RESTRICTED_CELLULAR_VIDEOTELEPHONY_INTERNALVIDEOTELEPHONYCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_PHONE_RESTRICTED_CELLULAR_VIDEOTELEPHONY_INTERNALVIDEOTELEPHONYCONTRACT_VERSION)

#if !defined(WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION)
#define WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION 0x50000
#endif // defined(WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION)

#if !defined(WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION)
#define WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION)

#if !defined(WINDOWS_SYSTEM_SYSTEMMANAGEMENTCONTRACT_VERSION)
#define WINDOWS_SYSTEM_SYSTEMMANAGEMENTCONTRACT_VERSION 0x40000
#endif // defined(WINDOWS_SYSTEM_SYSTEMMANAGEMENTCONTRACT_VERSION)

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
#include "Windows.Graphics.Display.h"
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CILocalVideoStream_FWD_DEFINED__
#define ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CILocalVideoStream_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Phone {
            namespace Restricted {
                namespace Cellular {
                    namespace VideoTelephony {
                        interface ILocalVideoStream;
                    } /* Windows */
                } /* Phone */
            } /* Restricted */
        } /* Cellular */
    } /* VideoTelephony */} /* ABI */
#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CILocalVideoStream ABI::Windows::Phone::Restricted::Cellular::VideoTelephony::ILocalVideoStream

#endif // ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CILocalVideoStream_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIRemoteVideoStream_FWD_DEFINED__
#define ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIRemoteVideoStream_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Phone {
            namespace Restricted {
                namespace Cellular {
                    namespace VideoTelephony {
                        interface IRemoteVideoStream;
                    } /* Windows */
                } /* Phone */
            } /* Restricted */
        } /* Cellular */
    } /* VideoTelephony */} /* ABI */
#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIRemoteVideoStream ABI::Windows::Phone::Restricted::Cellular::VideoTelephony::IRemoteVideoStream

#endif // ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIRemoteVideoStream_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIResolutionChangeEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIResolutionChangeEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Phone {
            namespace Restricted {
                namespace Cellular {
                    namespace VideoTelephony {
                        interface IResolutionChangeEventArgs;
                    } /* Windows */
                } /* Phone */
            } /* Restricted */
        } /* Cellular */
    } /* VideoTelephony */} /* ABI */
#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIResolutionChangeEventArgs ABI::Windows::Phone::Restricted::Cellular::VideoTelephony::IResolutionChangeEventArgs

#endif // ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIResolutionChangeEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIRotationChangeEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIRotationChangeEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Phone {
            namespace Restricted {
                namespace Cellular {
                    namespace VideoTelephony {
                        interface IRotationChangeEventArgs;
                    } /* Windows */
                } /* Phone */
            } /* Restricted */
        } /* Cellular */
    } /* VideoTelephony */} /* ABI */
#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIRotationChangeEventArgs ABI::Windows::Phone::Restricted::Cellular::VideoTelephony::IRotationChangeEventArgs

#endif // ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIRotationChangeEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCall_FWD_DEFINED__
#define ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCall_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Phone {
            namespace Restricted {
                namespace Cellular {
                    namespace VideoTelephony {
                        interface IVideoCall;
                    } /* Windows */
                } /* Phone */
            } /* Restricted */
        } /* Cellular */
    } /* VideoTelephony */} /* ABI */
#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCall ABI::Windows::Phone::Restricted::Cellular::VideoTelephony::IVideoCall

#endif // ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCall_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCallFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCallFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Phone {
            namespace Restricted {
                namespace Cellular {
                    namespace VideoTelephony {
                        interface IVideoCallFactory;
                    } /* Windows */
                } /* Phone */
            } /* Restricted */
        } /* Cellular */
    } /* VideoTelephony */} /* ABI */
#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCallFactory ABI::Windows::Phone::Restricted::Cellular::VideoTelephony::IVideoCallFactory

#endif // ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCallFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCallInitializationParameters_FWD_DEFINED__
#define ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCallInitializationParameters_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Phone {
            namespace Restricted {
                namespace Cellular {
                    namespace VideoTelephony {
                        interface IVideoCallInitializationParameters;
                    } /* Windows */
                } /* Phone */
            } /* Restricted */
        } /* Cellular */
    } /* VideoTelephony */} /* ABI */
#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCallInitializationParameters ABI::Windows::Phone::Restricted::Cellular::VideoTelephony::IVideoCallInitializationParameters

#endif // ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCallInitializationParameters_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoQualityChangeEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoQualityChangeEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Phone {
            namespace Restricted {
                namespace Cellular {
                    namespace VideoTelephony {
                        interface IVideoQualityChangeEventArgs;
                    } /* Windows */
                } /* Phone */
            } /* Restricted */
        } /* Cellular */
    } /* VideoTelephony */} /* ABI */
#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoQualityChangeEventArgs ABI::Windows::Phone::Restricted::Cellular::VideoTelephony::IVideoQualityChangeEventArgs

#endif // ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoQualityChangeEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStateChangeEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStateChangeEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Phone {
            namespace Restricted {
                namespace Cellular {
                    namespace VideoTelephony {
                        interface IVideoStateChangeEventArgs;
                    } /* Windows */
                } /* Phone */
            } /* Restricted */
        } /* Cellular */
    } /* VideoTelephony */} /* ABI */
#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStateChangeEventArgs ABI::Windows::Phone::Restricted::Cellular::VideoTelephony::IVideoStateChangeEventArgs

#endif // ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStateChangeEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStream_FWD_DEFINED__
#define ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStream_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Phone {
            namespace Restricted {
                namespace Cellular {
                    namespace VideoTelephony {
                        interface IVideoStream;
                    } /* Windows */
                } /* Phone */
            } /* Restricted */
        } /* Cellular */
    } /* VideoTelephony */} /* ABI */
#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStream ABI::Windows::Phone::Restricted::Cellular::VideoTelephony::IVideoStream

#endif // ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStream_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStreamExt_FWD_DEFINED__
#define ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStreamExt_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Phone {
            namespace Restricted {
                namespace Cellular {
                    namespace VideoTelephony {
                        interface IVideoStreamExt;
                    } /* Windows */
                } /* Phone */
            } /* Restricted */
        } /* Cellular */
    } /* VideoTelephony */} /* ABI */
#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStreamExt ABI::Windows::Phone::Restricted::Cellular::VideoTelephony::IVideoStreamExt

#endif // ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStreamExt_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Windows {
        namespace Phone {
            namespace Restricted {
                namespace Cellular {
                    namespace VideoTelephony {
                        class RemoteVideoStream;
                    } /* Windows */
                } /* Phone */
            } /* Restricted */
        } /* Cellular */
    } /* VideoTelephony */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Phone {
            namespace Restricted {
                namespace Cellular {
                    namespace VideoTelephony {
                        class RotationChangeEventArgs;
                    } /* Windows */
                } /* Phone */
            } /* Restricted */
        } /* Cellular */
    } /* VideoTelephony */} /* ABI */


#if WINDOWS_PHONE_RESTRICTED_CELLULAR_VIDEOTELEPHONY_INTERNALVIDEOTELEPHONYCONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CRemoteVideoStream_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CRotationChangeEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CRemoteVideoStream_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CRotationChangeEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("b4758f55-75f0-53c2-b199-5d9590f1be42"))
ITypedEventHandler<ABI::Windows::Phone::Restricted::Cellular::VideoTelephony::RemoteVideoStream*,ABI::Windows::Phone::Restricted::Cellular::VideoTelephony::RotationChangeEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Phone::Restricted::Cellular::VideoTelephony::RemoteVideoStream*, ABI::Windows::Phone::Restricted::Cellular::VideoTelephony::IRemoteVideoStream*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Phone::Restricted::Cellular::VideoTelephony::RotationChangeEventArgs*, ABI::Windows::Phone::Restricted::Cellular::VideoTelephony::IRotationChangeEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.Phone.Restricted.Cellular.VideoTelephony.RemoteVideoStream, Windows.Phone.Restricted.Cellular.VideoTelephony.RotationChangeEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::Phone::Restricted::Cellular::VideoTelephony::RemoteVideoStream*,ABI::Windows::Phone::Restricted::Cellular::VideoTelephony::RotationChangeEventArgs*> __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CRemoteVideoStream_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CRotationChangeEventArgs_t;
#define __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CRemoteVideoStream_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CRotationChangeEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CRemoteVideoStream_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CRotationChangeEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CRemoteVideoStream_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CRotationChangeEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Phone::Restricted::Cellular::VideoTelephony::IRemoteVideoStream*,ABI::Windows::Phone::Restricted::Cellular::VideoTelephony::IRotationChangeEventArgs*>
//#define __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CRemoteVideoStream_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CRotationChangeEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Phone::Restricted::Cellular::VideoTelephony::IRemoteVideoStream*,ABI::Windows::Phone::Restricted::Cellular::VideoTelephony::IRotationChangeEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CRemoteVideoStream_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CRotationChangeEventArgs_USE */


#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_VIDEOTELEPHONY_INTERNALVIDEOTELEPHONYCONTRACT_VERSION >= 0x10000


namespace ABI {
    namespace Windows {
        namespace Phone {
            namespace Restricted {
                namespace Cellular {
                    namespace VideoTelephony {
                        class VideoQualityChangeEventArgs;
                    } /* Windows */
                } /* Phone */
            } /* Restricted */
        } /* Cellular */
    } /* VideoTelephony */} /* ABI */


#if WINDOWS_PHONE_RESTRICTED_CELLULAR_VIDEOTELEPHONY_INTERNALVIDEOTELEPHONYCONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CRemoteVideoStream_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CVideoQualityChangeEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CRemoteVideoStream_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CVideoQualityChangeEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("ca109493-57a8-5118-9be5-b139acbfe98e"))
ITypedEventHandler<ABI::Windows::Phone::Restricted::Cellular::VideoTelephony::RemoteVideoStream*,ABI::Windows::Phone::Restricted::Cellular::VideoTelephony::VideoQualityChangeEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Phone::Restricted::Cellular::VideoTelephony::RemoteVideoStream*, ABI::Windows::Phone::Restricted::Cellular::VideoTelephony::IRemoteVideoStream*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Phone::Restricted::Cellular::VideoTelephony::VideoQualityChangeEventArgs*, ABI::Windows::Phone::Restricted::Cellular::VideoTelephony::IVideoQualityChangeEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.Phone.Restricted.Cellular.VideoTelephony.RemoteVideoStream, Windows.Phone.Restricted.Cellular.VideoTelephony.VideoQualityChangeEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::Phone::Restricted::Cellular::VideoTelephony::RemoteVideoStream*,ABI::Windows::Phone::Restricted::Cellular::VideoTelephony::VideoQualityChangeEventArgs*> __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CRemoteVideoStream_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CVideoQualityChangeEventArgs_t;
#define __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CRemoteVideoStream_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CVideoQualityChangeEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CRemoteVideoStream_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CVideoQualityChangeEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CRemoteVideoStream_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CVideoQualityChangeEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Phone::Restricted::Cellular::VideoTelephony::IRemoteVideoStream*,ABI::Windows::Phone::Restricted::Cellular::VideoTelephony::IVideoQualityChangeEventArgs*>
//#define __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CRemoteVideoStream_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CVideoQualityChangeEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Phone::Restricted::Cellular::VideoTelephony::IRemoteVideoStream*,ABI::Windows::Phone::Restricted::Cellular::VideoTelephony::IVideoQualityChangeEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CRemoteVideoStream_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CVideoQualityChangeEventArgs_USE */


#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_VIDEOTELEPHONY_INTERNALVIDEOTELEPHONYCONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Phone {
            namespace Restricted {
                namespace Cellular {
                    namespace VideoTelephony {
                        class VideoStream;
                    } /* Windows */
                } /* Phone */
            } /* Restricted */
        } /* Cellular */
    } /* VideoTelephony */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Phone {
            namespace Restricted {
                namespace Cellular {
                    namespace VideoTelephony {
                        class ResolutionChangeEventArgs;
                    } /* Windows */
                } /* Phone */
            } /* Restricted */
        } /* Cellular */
    } /* VideoTelephony */} /* ABI */


#if WINDOWS_PHONE_RESTRICTED_CELLULAR_VIDEOTELEPHONY_INTERNALVIDEOTELEPHONYCONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CVideoStream_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CResolutionChangeEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CVideoStream_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CResolutionChangeEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("89be92a7-be21-5f45-a03f-6ecd7fd37d2e"))
ITypedEventHandler<ABI::Windows::Phone::Restricted::Cellular::VideoTelephony::VideoStream*,ABI::Windows::Phone::Restricted::Cellular::VideoTelephony::ResolutionChangeEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Phone::Restricted::Cellular::VideoTelephony::VideoStream*, ABI::Windows::Phone::Restricted::Cellular::VideoTelephony::IVideoStream*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Phone::Restricted::Cellular::VideoTelephony::ResolutionChangeEventArgs*, ABI::Windows::Phone::Restricted::Cellular::VideoTelephony::IResolutionChangeEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.Phone.Restricted.Cellular.VideoTelephony.VideoStream, Windows.Phone.Restricted.Cellular.VideoTelephony.ResolutionChangeEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::Phone::Restricted::Cellular::VideoTelephony::VideoStream*,ABI::Windows::Phone::Restricted::Cellular::VideoTelephony::ResolutionChangeEventArgs*> __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CVideoStream_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CResolutionChangeEventArgs_t;
#define __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CVideoStream_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CResolutionChangeEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CVideoStream_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CResolutionChangeEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CVideoStream_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CResolutionChangeEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Phone::Restricted::Cellular::VideoTelephony::IVideoStream*,ABI::Windows::Phone::Restricted::Cellular::VideoTelephony::IResolutionChangeEventArgs*>
//#define __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CVideoStream_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CResolutionChangeEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Phone::Restricted::Cellular::VideoTelephony::IVideoStream*,ABI::Windows::Phone::Restricted::Cellular::VideoTelephony::IResolutionChangeEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CVideoStream_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CResolutionChangeEventArgs_USE */


#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_VIDEOTELEPHONY_INTERNALVIDEOTELEPHONYCONTRACT_VERSION >= 0x10000


namespace ABI {
    namespace Windows {
        namespace Phone {
            namespace Restricted {
                namespace Cellular {
                    namespace VideoTelephony {
                        class VideoStateChangeEventArgs;
                    } /* Windows */
                } /* Phone */
            } /* Restricted */
        } /* Cellular */
    } /* VideoTelephony */} /* ABI */


#if WINDOWS_PHONE_RESTRICTED_CELLULAR_VIDEOTELEPHONY_INTERNALVIDEOTELEPHONYCONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CVideoStream_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CVideoStateChangeEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CVideoStream_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CVideoStateChangeEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("8957cc9a-a959-5706-8d1f-aa2281b7fd2e"))
ITypedEventHandler<ABI::Windows::Phone::Restricted::Cellular::VideoTelephony::VideoStream*,ABI::Windows::Phone::Restricted::Cellular::VideoTelephony::VideoStateChangeEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Phone::Restricted::Cellular::VideoTelephony::VideoStream*, ABI::Windows::Phone::Restricted::Cellular::VideoTelephony::IVideoStream*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Phone::Restricted::Cellular::VideoTelephony::VideoStateChangeEventArgs*, ABI::Windows::Phone::Restricted::Cellular::VideoTelephony::IVideoStateChangeEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.Phone.Restricted.Cellular.VideoTelephony.VideoStream, Windows.Phone.Restricted.Cellular.VideoTelephony.VideoStateChangeEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::Phone::Restricted::Cellular::VideoTelephony::VideoStream*,ABI::Windows::Phone::Restricted::Cellular::VideoTelephony::VideoStateChangeEventArgs*> __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CVideoStream_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CVideoStateChangeEventArgs_t;
#define __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CVideoStream_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CVideoStateChangeEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CVideoStream_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CVideoStateChangeEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CVideoStream_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CVideoStateChangeEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Phone::Restricted::Cellular::VideoTelephony::IVideoStream*,ABI::Windows::Phone::Restricted::Cellular::VideoTelephony::IVideoStateChangeEventArgs*>
//#define __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CVideoStream_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CVideoStateChangeEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Phone::Restricted::Cellular::VideoTelephony::IVideoStream*,ABI::Windows::Phone::Restricted::Cellular::VideoTelephony::IVideoStateChangeEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CVideoStream_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CVideoStateChangeEventArgs_USE */


#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_VIDEOTELEPHONY_INTERNALVIDEOTELEPHONYCONTRACT_VERSION >= 0x10000



#ifndef ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Foundation {
            interface IAsyncAction;
        } /* Windows */
    } /* Foundation */} /* ABI */
#define __x_ABI_CWindows_CFoundation_CIAsyncAction ABI::Windows::Foundation::IAsyncAction

#endif // ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Foundation {
            interface IClosable;
        } /* Windows */
    } /* Foundation */} /* ABI */
#define __x_ABI_CWindows_CFoundation_CIClosable ABI::Windows::Foundation::IClosable

#endif // ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__


namespace ABI {
    namespace Windows {
        namespace Foundation {
            
            typedef struct Size Size;
            
        } /* Windows */
    } /* Foundation */} /* ABI */



namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Display {
                
                typedef enum DisplayOrientations : unsigned int DisplayOrientations;
                
            } /* Windows */
        } /* Graphics */
    } /* Display */} /* ABI */





namespace ABI {
    namespace Windows {
        namespace Phone {
            namespace Restricted {
                namespace Cellular {
                    namespace VideoTelephony {
                        
                        typedef enum CameraLocation : int CameraLocation;
                        
                    } /* Windows */
                } /* Phone */
            } /* Restricted */
        } /* Cellular */
    } /* VideoTelephony */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Phone {
            namespace Restricted {
                namespace Cellular {
                    namespace VideoTelephony {
                        
                        typedef enum StreamIdentifier : int StreamIdentifier;
                        
                    } /* Windows */
                } /* Phone */
            } /* Restricted */
        } /* Cellular */
    } /* VideoTelephony */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Phone {
            namespace Restricted {
                namespace Cellular {
                    namespace VideoTelephony {
                        
                        typedef enum VideoQuality : int VideoQuality;
                        
                    } /* Windows */
                } /* Phone */
            } /* Restricted */
        } /* Cellular */
    } /* VideoTelephony */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Phone {
            namespace Restricted {
                namespace Cellular {
                    namespace VideoTelephony {
                        
                        typedef enum VideoStreamState : int VideoStreamState;
                        
                    } /* Windows */
                } /* Phone */
            } /* Restricted */
        } /* Cellular */
    } /* VideoTelephony */} /* ABI */












namespace ABI {
    namespace Windows {
        namespace Phone {
            namespace Restricted {
                namespace Cellular {
                    namespace VideoTelephony {
                        class LocalVideoStream;
                    } /* Windows */
                } /* Phone */
            } /* Restricted */
        } /* Cellular */
    } /* VideoTelephony */} /* ABI */





namespace ABI {
    namespace Windows {
        namespace Phone {
            namespace Restricted {
                namespace Cellular {
                    namespace VideoTelephony {
                        class VideoCall;
                    } /* Windows */
                } /* Phone */
            } /* Restricted */
        } /* Cellular */
    } /* VideoTelephony */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Phone {
            namespace Restricted {
                namespace Cellular {
                    namespace VideoTelephony {
                        class VideoCallInitializationParameters;
                    } /* Windows */
                } /* Phone */
            } /* Restricted */
        } /* Cellular */
    } /* VideoTelephony */} /* ABI */












/*
 *
 * Struct Windows.Phone.Restricted.Cellular.VideoTelephony.CameraLocation
 *
 * Introduced to Windows.Phone.Restricted.Cellular.VideoTelephony.InternalVideoTelephonyContract in version 1.0
 *
 *
 */

#if WINDOWS_PHONE_RESTRICTED_CELLULAR_VIDEOTELEPHONY_INTERNALVIDEOTELEPHONYCONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Phone {
            namespace Restricted {
                namespace Cellular {
                    namespace VideoTelephony {
                        /* [v1_enum, contract] */
                        enum CameraLocation : int
                        {
                            CameraLocation_Front = 0,
                            CameraLocation_Back = 1,
                        };
                        
                    } /* Windows */
                } /* Phone */
            } /* Restricted */
        } /* Cellular */
    } /* VideoTelephony */} /* ABI */
#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_VIDEOTELEPHONY_INTERNALVIDEOTELEPHONYCONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Phone.Restricted.Cellular.VideoTelephony.StreamIdentifier
 *
 * Introduced to Windows.Phone.Restricted.Cellular.VideoTelephony.InternalVideoTelephonyContract in version 1.0
 *
 *
 */

#if WINDOWS_PHONE_RESTRICTED_CELLULAR_VIDEOTELEPHONY_INTERNALVIDEOTELEPHONYCONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Phone {
            namespace Restricted {
                namespace Cellular {
                    namespace VideoTelephony {
                        /* [v1_enum, contract] */
                        enum StreamIdentifier : int
                        {
                            StreamIdentifier_LocalPreview = 0,
                            StreamIdentifier_RemoteView = 1,
                        };
                        
                    } /* Windows */
                } /* Phone */
            } /* Restricted */
        } /* Cellular */
    } /* VideoTelephony */} /* ABI */
#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_VIDEOTELEPHONY_INTERNALVIDEOTELEPHONYCONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Phone.Restricted.Cellular.VideoTelephony.VideoQuality
 *
 * Introduced to Windows.Phone.Restricted.Cellular.VideoTelephony.InternalVideoTelephonyContract in version 1.0
 *
 *
 */

#if WINDOWS_PHONE_RESTRICTED_CELLULAR_VIDEOTELEPHONY_INTERNALVIDEOTELEPHONYCONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Phone {
            namespace Restricted {
                namespace Cellular {
                    namespace VideoTelephony {
                        /* [v1_enum, contract] */
                        enum VideoQuality : int
                        {
                            VideoQuality_Low = 0,
                            VideoQuality_Average = 1,
                            VideoQuality_High = 2,
                        };
                        
                    } /* Windows */
                } /* Phone */
            } /* Restricted */
        } /* Cellular */
    } /* VideoTelephony */} /* ABI */
#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_VIDEOTELEPHONY_INTERNALVIDEOTELEPHONYCONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Phone.Restricted.Cellular.VideoTelephony.VideoStreamState
 *
 * Introduced to Windows.Phone.Restricted.Cellular.VideoTelephony.InternalVideoTelephonyContract in version 1.0
 *
 *
 */

#if WINDOWS_PHONE_RESTRICTED_CELLULAR_VIDEOTELEPHONY_INTERNALVIDEOTELEPHONYCONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Phone {
            namespace Restricted {
                namespace Cellular {
                    namespace VideoTelephony {
                        /* [v1_enum, contract] */
                        enum VideoStreamState : int
                        {
                            VideoStreamState_Initialized = 0,
                            VideoStreamState_ResourcesAcquired = 1,
                            VideoStreamState_Playing = 2,
                            VideoStreamState_Paused = 3,
                            VideoStreamState_Destroyed = 4,
                        };
                        
                    } /* Windows */
                } /* Phone */
            } /* Restricted */
        } /* Cellular */
    } /* VideoTelephony */} /* ABI */
#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_VIDEOTELEPHONY_INTERNALVIDEOTELEPHONYCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Phone.Restricted.Cellular.VideoTelephony.ILocalVideoStream
 *
 * Introduced to Windows.Phone.Restricted.Cellular.VideoTelephony.InternalVideoTelephonyContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Phone.Restricted.Cellular.VideoTelephony.LocalVideoStream
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Phone.Restricted.Cellular.VideoTelephony.IVideoStream
 *
 *
 */
#if WINDOWS_PHONE_RESTRICTED_CELLULAR_VIDEOTELEPHONY_INTERNALVIDEOTELEPHONYCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CILocalVideoStream_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CILocalVideoStream_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Phone_Restricted_Cellular_VideoTelephony_ILocalVideoStream[] = L"Windows.Phone.Restricted.Cellular.VideoTelephony.ILocalVideoStream";
namespace ABI {
    namespace Windows {
        namespace Phone {
            namespace Restricted {
                namespace Cellular {
                    namespace VideoTelephony {
                        /* [object, uuid("54024241-6C0B-49BB-B200-E4A6EC2BDEED"), exclusiveto, contract] */
                        MIDL_INTERFACE("54024241-6C0B-49BB-B200-E4A6EC2BDEED")
                        ILocalVideoStream : IInspectable
                        {
                            virtual HRESULT STDMETHODCALLTYPE SetDeviceOrientation(
                                /* [in] */ABI::Windows::Graphics::Display::DisplayOrientations orientation
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_ILocalVideoStream=_uuidof(ILocalVideoStream);
                        
                    } /* Windows */
                } /* Phone */
            } /* Restricted */
        } /* Cellular */
    } /* VideoTelephony */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CILocalVideoStream;
#endif /* !defined(____x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CILocalVideoStream_INTERFACE_DEFINED__) */
#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_VIDEOTELEPHONY_INTERNALVIDEOTELEPHONYCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Phone.Restricted.Cellular.VideoTelephony.IRemoteVideoStream
 *
 * Introduced to Windows.Phone.Restricted.Cellular.VideoTelephony.InternalVideoTelephonyContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Phone.Restricted.Cellular.VideoTelephony.RemoteVideoStream
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Phone.Restricted.Cellular.VideoTelephony.IVideoStream
 *
 *
 */
#if WINDOWS_PHONE_RESTRICTED_CELLULAR_VIDEOTELEPHONY_INTERNALVIDEOTELEPHONYCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIRemoteVideoStream_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIRemoteVideoStream_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Phone_Restricted_Cellular_VideoTelephony_IRemoteVideoStream[] = L"Windows.Phone.Restricted.Cellular.VideoTelephony.IRemoteVideoStream";
namespace ABI {
    namespace Windows {
        namespace Phone {
            namespace Restricted {
                namespace Cellular {
                    namespace VideoTelephony {
                        /* [object, uuid("71EC305F-7CAD-4BBF-953A-810DB7D68D4C"), exclusiveto, contract] */
                        MIDL_INTERFACE("71EC305F-7CAD-4BBF-953A-810DB7D68D4C")
                        IRemoteVideoStream : IInspectable
                        {
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Rotation(
                                /* [retval, out] */__RPC__out INT32 * degreesCw
                                ) = 0;
                            /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_RotationChanged(
                                /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CRemoteVideoStream_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CRotationChangeEventArgs * handler,
                                /* [retval, out] */__RPC__out EventRegistrationToken * registrationToken
                                ) = 0;
                            /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_RotationChanged(
                                /* [in] */EventRegistrationToken registrationToken
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Quality(
                                /* [retval, out] */__RPC__out ABI::Windows::Phone::Restricted::Cellular::VideoTelephony::VideoQuality * quality
                                ) = 0;
                            /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_QualityChanged(
                                /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CRemoteVideoStream_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CVideoQualityChangeEventArgs * handler,
                                /* [retval, out] */__RPC__out EventRegistrationToken * registrationToken
                                ) = 0;
                            /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_QualityChanged(
                                /* [in] */EventRegistrationToken registrationToken
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_IRemoteVideoStream=_uuidof(IRemoteVideoStream);
                        
                    } /* Windows */
                } /* Phone */
            } /* Restricted */
        } /* Cellular */
    } /* VideoTelephony */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIRemoteVideoStream;
#endif /* !defined(____x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIRemoteVideoStream_INTERFACE_DEFINED__) */
#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_VIDEOTELEPHONY_INTERNALVIDEOTELEPHONYCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Phone.Restricted.Cellular.VideoTelephony.IResolutionChangeEventArgs
 *
 * Introduced to Windows.Phone.Restricted.Cellular.VideoTelephony.InternalVideoTelephonyContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Phone.Restricted.Cellular.VideoTelephony.ResolutionChangeEventArgs
 *
 *
 */
#if WINDOWS_PHONE_RESTRICTED_CELLULAR_VIDEOTELEPHONY_INTERNALVIDEOTELEPHONYCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIResolutionChangeEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIResolutionChangeEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Phone_Restricted_Cellular_VideoTelephony_IResolutionChangeEventArgs[] = L"Windows.Phone.Restricted.Cellular.VideoTelephony.IResolutionChangeEventArgs";
namespace ABI {
    namespace Windows {
        namespace Phone {
            namespace Restricted {
                namespace Cellular {
                    namespace VideoTelephony {
                        /* [object, uuid("01F51655-5E82-4D53-BED4-EE2551467495"), exclusiveto, contract] */
                        MIDL_INTERFACE("01F51655-5E82-4D53-BED4-EE2551467495")
                        IResolutionChangeEventArgs : IInspectable
                        {
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Resolution(
                                /* [retval, out] */__RPC__out ABI::Windows::Foundation::Size * value
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_IResolutionChangeEventArgs=_uuidof(IResolutionChangeEventArgs);
                        
                    } /* Windows */
                } /* Phone */
            } /* Restricted */
        } /* Cellular */
    } /* VideoTelephony */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIResolutionChangeEventArgs;
#endif /* !defined(____x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIResolutionChangeEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_VIDEOTELEPHONY_INTERNALVIDEOTELEPHONYCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Phone.Restricted.Cellular.VideoTelephony.IRotationChangeEventArgs
 *
 * Introduced to Windows.Phone.Restricted.Cellular.VideoTelephony.InternalVideoTelephonyContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Phone.Restricted.Cellular.VideoTelephony.RotationChangeEventArgs
 *
 *
 */
#if WINDOWS_PHONE_RESTRICTED_CELLULAR_VIDEOTELEPHONY_INTERNALVIDEOTELEPHONYCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIRotationChangeEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIRotationChangeEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Phone_Restricted_Cellular_VideoTelephony_IRotationChangeEventArgs[] = L"Windows.Phone.Restricted.Cellular.VideoTelephony.IRotationChangeEventArgs";
namespace ABI {
    namespace Windows {
        namespace Phone {
            namespace Restricted {
                namespace Cellular {
                    namespace VideoTelephony {
                        /* [object, uuid("16DF4E9D-FB47-40B7-B8B8-55CFFAEA4251"), exclusiveto, contract] */
                        MIDL_INTERFACE("16DF4E9D-FB47-40B7-B8B8-55CFFAEA4251")
                        IRotationChangeEventArgs : IInspectable
                        {
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Rotation(
                                /* [retval, out] */__RPC__out INT32 * degreesCw
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_IRotationChangeEventArgs=_uuidof(IRotationChangeEventArgs);
                        
                    } /* Windows */
                } /* Phone */
            } /* Restricted */
        } /* Cellular */
    } /* VideoTelephony */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIRotationChangeEventArgs;
#endif /* !defined(____x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIRotationChangeEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_VIDEOTELEPHONY_INTERNALVIDEOTELEPHONYCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Phone.Restricted.Cellular.VideoTelephony.IVideoCall
 *
 * Introduced to Windows.Phone.Restricted.Cellular.VideoTelephony.InternalVideoTelephonyContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Phone.Restricted.Cellular.VideoTelephony.VideoCall
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *
 *
 */
#if WINDOWS_PHONE_RESTRICTED_CELLULAR_VIDEOTELEPHONY_INTERNALVIDEOTELEPHONYCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCall_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCall_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Phone_Restricted_Cellular_VideoTelephony_IVideoCall[] = L"Windows.Phone.Restricted.Cellular.VideoTelephony.IVideoCall";
namespace ABI {
    namespace Windows {
        namespace Phone {
            namespace Restricted {
                namespace Cellular {
                    namespace VideoTelephony {
                        /* [object, uuid("5EF23627-E34A-4CB3-8C41-5A5E8265A9DA"), exclusiveto, contract] */
                        MIDL_INTERFACE("5EF23627-E34A-4CB3-8C41-5A5E8265A9DA")
                        IVideoCall : IInspectable
                        {
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Id(
                                /* [retval, out] */__RPC__out INT32 * callId
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CameraLocation(
                                /* [retval, out] */__RPC__out ABI::Windows::Phone::Restricted::Cellular::VideoTelephony::CameraLocation * cameraLocation
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RemoteStream(
                                /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Phone::Restricted::Cellular::VideoTelephony::IRemoteVideoStream * * remoteStream
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LocalStream(
                                /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Phone::Restricted::Cellular::VideoTelephony::ILocalVideoStream * * localStream
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Visibility(
                                /* [retval, out] */__RPC__out boolean * visible
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE SetVisibilityChangeAsync(
                                /* [in] */boolean visible,
                                /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * asyncAction
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE SetCameraLocationAsync(
                                /* [in] */ABI::Windows::Phone::Restricted::Cellular::VideoTelephony::CameraLocation cameraLocation,
                                /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * asyncAction
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_IVideoCall=_uuidof(IVideoCall);
                        
                    } /* Windows */
                } /* Phone */
            } /* Restricted */
        } /* Cellular */
    } /* VideoTelephony */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCall;
#endif /* !defined(____x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCall_INTERFACE_DEFINED__) */
#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_VIDEOTELEPHONY_INTERNALVIDEOTELEPHONYCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Phone.Restricted.Cellular.VideoTelephony.IVideoCallFactory
 *
 * Introduced to Windows.Phone.Restricted.Cellular.VideoTelephony.InternalVideoTelephonyContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Phone.Restricted.Cellular.VideoTelephony.VideoCall
 *
 *
 */
#if WINDOWS_PHONE_RESTRICTED_CELLULAR_VIDEOTELEPHONY_INTERNALVIDEOTELEPHONYCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCallFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCallFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Phone_Restricted_Cellular_VideoTelephony_IVideoCallFactory[] = L"Windows.Phone.Restricted.Cellular.VideoTelephony.IVideoCallFactory";
namespace ABI {
    namespace Windows {
        namespace Phone {
            namespace Restricted {
                namespace Cellular {
                    namespace VideoTelephony {
                        /* [object, uuid("8E7C1701-821A-4CCC-9CB8-889BC3CC8468"), exclusiveto, contract] */
                        MIDL_INTERFACE("8E7C1701-821A-4CCC-9CB8-889BC3CC8468")
                        IVideoCallFactory : IInspectable
                        {
                            virtual HRESULT STDMETHODCALLTYPE CreateVideoCall(
                                /* [in] */__RPC__in_opt ABI::Windows::Phone::Restricted::Cellular::VideoTelephony::IVideoCallInitializationParameters * parameters,
                                /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Phone::Restricted::Cellular::VideoTelephony::IVideoCall * * videoCall
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_IVideoCallFactory=_uuidof(IVideoCallFactory);
                        
                    } /* Windows */
                } /* Phone */
            } /* Restricted */
        } /* Cellular */
    } /* VideoTelephony */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCallFactory;
#endif /* !defined(____x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCallFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_VIDEOTELEPHONY_INTERNALVIDEOTELEPHONYCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Phone.Restricted.Cellular.VideoTelephony.IVideoCallInitializationParameters
 *
 * Introduced to Windows.Phone.Restricted.Cellular.VideoTelephony.InternalVideoTelephonyContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Phone.Restricted.Cellular.VideoTelephony.VideoCallInitializationParameters
 *
 *
 */
#if WINDOWS_PHONE_RESTRICTED_CELLULAR_VIDEOTELEPHONY_INTERNALVIDEOTELEPHONYCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCallInitializationParameters_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCallInitializationParameters_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Phone_Restricted_Cellular_VideoTelephony_IVideoCallInitializationParameters[] = L"Windows.Phone.Restricted.Cellular.VideoTelephony.IVideoCallInitializationParameters";
namespace ABI {
    namespace Windows {
        namespace Phone {
            namespace Restricted {
                namespace Cellular {
                    namespace VideoTelephony {
                        /* [object, uuid("A166B7F6-A433-4326-85B1-0F532180E6D4"), exclusiveto, contract] */
                        MIDL_INTERFACE("A166B7F6-A433-4326-85B1-0F532180E6D4")
                        IVideoCallInitializationParameters : IInspectable
                        {
                            /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_CallId(
                                /* [in] */INT32 callId
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CallId(
                                /* [retval, out] */__RPC__out INT32 * callId
                                ) = 0;
                            /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_LocalOrientation(
                                /* [in] */ABI::Windows::Graphics::Display::DisplayOrientations value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LocalOrientation(
                                /* [retval, out] */__RPC__out ABI::Windows::Graphics::Display::DisplayOrientations * value
                                ) = 0;
                            /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_CameraLocation(
                                /* [in] */ABI::Windows::Phone::Restricted::Cellular::VideoTelephony::CameraLocation cameraLocation
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CameraLocation(
                                /* [retval, out] */__RPC__out ABI::Windows::Phone::Restricted::Cellular::VideoTelephony::CameraLocation * cameraLocation
                                ) = 0;
                            /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_LocalSurface(
                                /* [in] */__RPC__in HSTRING localSurface
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LocalSurface(
                                /* [retval, out] */__RPC__deref_out_opt HSTRING * localSurface
                                ) = 0;
                            /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_RemoteSurface(
                                /* [in] */__RPC__in HSTRING remoteSurface
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RemoteSurface(
                                /* [retval, out] */__RPC__deref_out_opt HSTRING * remoteSurface
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_IVideoCallInitializationParameters=_uuidof(IVideoCallInitializationParameters);
                        
                    } /* Windows */
                } /* Phone */
            } /* Restricted */
        } /* Cellular */
    } /* VideoTelephony */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCallInitializationParameters;
#endif /* !defined(____x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCallInitializationParameters_INTERFACE_DEFINED__) */
#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_VIDEOTELEPHONY_INTERNALVIDEOTELEPHONYCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Phone.Restricted.Cellular.VideoTelephony.IVideoQualityChangeEventArgs
 *
 * Introduced to Windows.Phone.Restricted.Cellular.VideoTelephony.InternalVideoTelephonyContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Phone.Restricted.Cellular.VideoTelephony.VideoQualityChangeEventArgs
 *
 *
 */
#if WINDOWS_PHONE_RESTRICTED_CELLULAR_VIDEOTELEPHONY_INTERNALVIDEOTELEPHONYCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoQualityChangeEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoQualityChangeEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Phone_Restricted_Cellular_VideoTelephony_IVideoQualityChangeEventArgs[] = L"Windows.Phone.Restricted.Cellular.VideoTelephony.IVideoQualityChangeEventArgs";
namespace ABI {
    namespace Windows {
        namespace Phone {
            namespace Restricted {
                namespace Cellular {
                    namespace VideoTelephony {
                        /* [object, uuid("69646776-1DFB-4DB4-9EDB-8D15AF3C00C4"), exclusiveto, contract] */
                        MIDL_INTERFACE("69646776-1DFB-4DB4-9EDB-8D15AF3C00C4")
                        IVideoQualityChangeEventArgs : IInspectable
                        {
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Quality(
                                /* [retval, out] */__RPC__out ABI::Windows::Phone::Restricted::Cellular::VideoTelephony::VideoQuality * value
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_IVideoQualityChangeEventArgs=_uuidof(IVideoQualityChangeEventArgs);
                        
                    } /* Windows */
                } /* Phone */
            } /* Restricted */
        } /* Cellular */
    } /* VideoTelephony */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoQualityChangeEventArgs;
#endif /* !defined(____x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoQualityChangeEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_VIDEOTELEPHONY_INTERNALVIDEOTELEPHONYCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Phone.Restricted.Cellular.VideoTelephony.IVideoStateChangeEventArgs
 *
 * Introduced to Windows.Phone.Restricted.Cellular.VideoTelephony.InternalVideoTelephonyContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Phone.Restricted.Cellular.VideoTelephony.VideoStateChangeEventArgs
 *
 *
 */
#if WINDOWS_PHONE_RESTRICTED_CELLULAR_VIDEOTELEPHONY_INTERNALVIDEOTELEPHONYCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStateChangeEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStateChangeEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Phone_Restricted_Cellular_VideoTelephony_IVideoStateChangeEventArgs[] = L"Windows.Phone.Restricted.Cellular.VideoTelephony.IVideoStateChangeEventArgs";
namespace ABI {
    namespace Windows {
        namespace Phone {
            namespace Restricted {
                namespace Cellular {
                    namespace VideoTelephony {
                        /* [object, uuid("5E77A448-094D-4DCE-95AC-CDD849826FED"), exclusiveto, contract] */
                        MIDL_INTERFACE("5E77A448-094D-4DCE-95AC-CDD849826FED")
                        IVideoStateChangeEventArgs : IInspectable
                        {
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_State(
                                /* [retval, out] */__RPC__out ABI::Windows::Phone::Restricted::Cellular::VideoTelephony::VideoStreamState * value
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_IVideoStateChangeEventArgs=_uuidof(IVideoStateChangeEventArgs);
                        
                    } /* Windows */
                } /* Phone */
            } /* Restricted */
        } /* Cellular */
    } /* VideoTelephony */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStateChangeEventArgs;
#endif /* !defined(____x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStateChangeEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_VIDEOTELEPHONY_INTERNALVIDEOTELEPHONYCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Phone.Restricted.Cellular.VideoTelephony.IVideoStream
 *
 * Introduced to Windows.Phone.Restricted.Cellular.VideoTelephony.InternalVideoTelephonyContract in version 1.0
 *
 *
 */
#if WINDOWS_PHONE_RESTRICTED_CELLULAR_VIDEOTELEPHONY_INTERNALVIDEOTELEPHONYCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStream_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStream_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Phone_Restricted_Cellular_VideoTelephony_IVideoStream[] = L"Windows.Phone.Restricted.Cellular.VideoTelephony.IVideoStream";
namespace ABI {
    namespace Windows {
        namespace Phone {
            namespace Restricted {
                namespace Cellular {
                    namespace VideoTelephony {
                        /* [object, uuid("71867226-5936-4D2F-837E-A902EA3B4213"), contract] */
                        MIDL_INTERFACE("71867226-5936-4D2F-837E-A902EA3B4213")
                        IVideoStream : IInspectable
                        {
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Id(
                                /* [retval, out] */__RPC__out ABI::Windows::Phone::Restricted::Cellular::VideoTelephony::StreamIdentifier * streamId
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CallId(
                                /* [retval, out] */__RPC__out INT32 * callId
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_State(
                                /* [retval, out] */__RPC__out ABI::Windows::Phone::Restricted::Cellular::VideoTelephony::VideoStreamState * state
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Resolution(
                                /* [retval, out] */__RPC__out ABI::Windows::Foundation::Size * resolution
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_BroadcastingPort(
                                /* [retval, out] */__RPC__deref_out_opt HSTRING * port
                                ) = 0;
                            /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_ResolutionChanged(
                                /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CVideoStream_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CResolutionChangeEventArgs * handler,
                                /* [retval, out] */__RPC__out EventRegistrationToken * registrationToken
                                ) = 0;
                            /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_ResolutionChanged(
                                /* [in] */EventRegistrationToken registrationToken
                                ) = 0;
                            /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_StateChanged(
                                /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CVideoStream_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CVideoStateChangeEventArgs * handler,
                                /* [retval, out] */__RPC__out EventRegistrationToken * registrationToken
                                ) = 0;
                            /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_StateChanged(
                                /* [in] */EventRegistrationToken registrationToken
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_IVideoStream=_uuidof(IVideoStream);
                        
                    } /* Windows */
                } /* Phone */
            } /* Restricted */
        } /* Cellular */
    } /* VideoTelephony */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStream;
#endif /* !defined(____x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStream_INTERFACE_DEFINED__) */
#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_VIDEOTELEPHONY_INTERNALVIDEOTELEPHONYCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Phone.Restricted.Cellular.VideoTelephony.IVideoStreamExt
 *
 * Introduced to Windows.Phone.Restricted.Cellular.VideoTelephony.InternalVideoTelephonyContract in version 1.0
 *
 *
 */
#if WINDOWS_PHONE_RESTRICTED_CELLULAR_VIDEOTELEPHONY_INTERNALVIDEOTELEPHONYCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStreamExt_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStreamExt_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Phone_Restricted_Cellular_VideoTelephony_IVideoStreamExt[] = L"Windows.Phone.Restricted.Cellular.VideoTelephony.IVideoStreamExt";
namespace ABI {
    namespace Windows {
        namespace Phone {
            namespace Restricted {
                namespace Cellular {
                    namespace VideoTelephony {
                        /* [object, uuid("9010592C-61F3-48C7-8F2D-33944E7A5DA3"), contract] */
                        MIDL_INTERFACE("9010592C-61F3-48C7-8F2D-33944E7A5DA3")
                        IVideoStreamExt : IInspectable
                        {
                            virtual HRESULT STDMETHODCALLTYPE SetResolution(
                                /* [in] */ABI::Windows::Foundation::Size resolution
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE GetSwapChainHandleForProcess(
                                /* [in] */UINT32 targetProcessId,
                                /* [retval, out] */__RPC__out UINT64 * phSwapChain
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_IVideoStreamExt=_uuidof(IVideoStreamExt);
                        
                    } /* Windows */
                } /* Phone */
            } /* Restricted */
        } /* Cellular */
    } /* VideoTelephony */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStreamExt;
#endif /* !defined(____x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStreamExt_INTERFACE_DEFINED__) */
#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_VIDEOTELEPHONY_INTERNALVIDEOTELEPHONYCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Phone.Restricted.Cellular.VideoTelephony.LocalVideoStream
 *
 * Introduced to Windows.Phone.Restricted.Cellular.VideoTelephony.InternalVideoTelephonyContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Phone.Restricted.Cellular.VideoTelephony.ILocalVideoStream ** Default Interface **
 *    Windows.Phone.Restricted.Cellular.VideoTelephony.IVideoStream
 *    Windows.Phone.Restricted.Cellular.VideoTelephony.IVideoStreamExt
 *
 */
#if WINDOWS_PHONE_RESTRICTED_CELLULAR_VIDEOTELEPHONY_INTERNALVIDEOTELEPHONYCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Phone_Restricted_Cellular_VideoTelephony_LocalVideoStream_DEFINED
#define RUNTIMECLASS_Windows_Phone_Restricted_Cellular_VideoTelephony_LocalVideoStream_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Phone_Restricted_Cellular_VideoTelephony_LocalVideoStream[] = L"Windows.Phone.Restricted.Cellular.VideoTelephony.LocalVideoStream";
#endif
#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_VIDEOTELEPHONY_INTERNALVIDEOTELEPHONYCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Phone.Restricted.Cellular.VideoTelephony.RemoteVideoStream
 *
 * Introduced to Windows.Phone.Restricted.Cellular.VideoTelephony.InternalVideoTelephonyContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Phone.Restricted.Cellular.VideoTelephony.IRemoteVideoStream ** Default Interface **
 *    Windows.Phone.Restricted.Cellular.VideoTelephony.IVideoStream
 *    Windows.Phone.Restricted.Cellular.VideoTelephony.IVideoStreamExt
 *
 */
#if WINDOWS_PHONE_RESTRICTED_CELLULAR_VIDEOTELEPHONY_INTERNALVIDEOTELEPHONYCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Phone_Restricted_Cellular_VideoTelephony_RemoteVideoStream_DEFINED
#define RUNTIMECLASS_Windows_Phone_Restricted_Cellular_VideoTelephony_RemoteVideoStream_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Phone_Restricted_Cellular_VideoTelephony_RemoteVideoStream[] = L"Windows.Phone.Restricted.Cellular.VideoTelephony.RemoteVideoStream";
#endif
#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_VIDEOTELEPHONY_INTERNALVIDEOTELEPHONYCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Phone.Restricted.Cellular.VideoTelephony.ResolutionChangeEventArgs
 *
 * Introduced to Windows.Phone.Restricted.Cellular.VideoTelephony.InternalVideoTelephonyContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Phone.Restricted.Cellular.VideoTelephony.IResolutionChangeEventArgs ** Default Interface **
 *
 */
#if WINDOWS_PHONE_RESTRICTED_CELLULAR_VIDEOTELEPHONY_INTERNALVIDEOTELEPHONYCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Phone_Restricted_Cellular_VideoTelephony_ResolutionChangeEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Phone_Restricted_Cellular_VideoTelephony_ResolutionChangeEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Phone_Restricted_Cellular_VideoTelephony_ResolutionChangeEventArgs[] = L"Windows.Phone.Restricted.Cellular.VideoTelephony.ResolutionChangeEventArgs";
#endif
#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_VIDEOTELEPHONY_INTERNALVIDEOTELEPHONYCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Phone.Restricted.Cellular.VideoTelephony.RotationChangeEventArgs
 *
 * Introduced to Windows.Phone.Restricted.Cellular.VideoTelephony.InternalVideoTelephonyContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Phone.Restricted.Cellular.VideoTelephony.IRotationChangeEventArgs ** Default Interface **
 *
 */
#if WINDOWS_PHONE_RESTRICTED_CELLULAR_VIDEOTELEPHONY_INTERNALVIDEOTELEPHONYCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Phone_Restricted_Cellular_VideoTelephony_RotationChangeEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Phone_Restricted_Cellular_VideoTelephony_RotationChangeEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Phone_Restricted_Cellular_VideoTelephony_RotationChangeEventArgs[] = L"Windows.Phone.Restricted.Cellular.VideoTelephony.RotationChangeEventArgs";
#endif
#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_VIDEOTELEPHONY_INTERNALVIDEOTELEPHONYCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Phone.Restricted.Cellular.VideoTelephony.VideoCall
 *
 * Introduced to Windows.Phone.Restricted.Cellular.VideoTelephony.InternalVideoTelephonyContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Phone.Restricted.Cellular.VideoTelephony.IVideoCall ** Default Interface **
 *    Windows.Foundation.IClosable
 *
 */
#if WINDOWS_PHONE_RESTRICTED_CELLULAR_VIDEOTELEPHONY_INTERNALVIDEOTELEPHONYCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Phone_Restricted_Cellular_VideoTelephony_VideoCall_DEFINED
#define RUNTIMECLASS_Windows_Phone_Restricted_Cellular_VideoTelephony_VideoCall_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Phone_Restricted_Cellular_VideoTelephony_VideoCall[] = L"Windows.Phone.Restricted.Cellular.VideoTelephony.VideoCall";
#endif
#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_VIDEOTELEPHONY_INTERNALVIDEOTELEPHONYCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Phone.Restricted.Cellular.VideoTelephony.VideoCallInitializationParameters
 *
 * Introduced to Windows.Phone.Restricted.Cellular.VideoTelephony.InternalVideoTelephonyContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Phone.Restricted.Cellular.VideoTelephony.IVideoCallInitializationParameters ** Default Interface **
 *
 */
#if WINDOWS_PHONE_RESTRICTED_CELLULAR_VIDEOTELEPHONY_INTERNALVIDEOTELEPHONYCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Phone_Restricted_Cellular_VideoTelephony_VideoCallInitializationParameters_DEFINED
#define RUNTIMECLASS_Windows_Phone_Restricted_Cellular_VideoTelephony_VideoCallInitializationParameters_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Phone_Restricted_Cellular_VideoTelephony_VideoCallInitializationParameters[] = L"Windows.Phone.Restricted.Cellular.VideoTelephony.VideoCallInitializationParameters";
#endif
#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_VIDEOTELEPHONY_INTERNALVIDEOTELEPHONYCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Phone.Restricted.Cellular.VideoTelephony.VideoQualityChangeEventArgs
 *
 * Introduced to Windows.Phone.Restricted.Cellular.VideoTelephony.InternalVideoTelephonyContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Phone.Restricted.Cellular.VideoTelephony.IVideoQualityChangeEventArgs ** Default Interface **
 *
 */
#if WINDOWS_PHONE_RESTRICTED_CELLULAR_VIDEOTELEPHONY_INTERNALVIDEOTELEPHONYCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Phone_Restricted_Cellular_VideoTelephony_VideoQualityChangeEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Phone_Restricted_Cellular_VideoTelephony_VideoQualityChangeEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Phone_Restricted_Cellular_VideoTelephony_VideoQualityChangeEventArgs[] = L"Windows.Phone.Restricted.Cellular.VideoTelephony.VideoQualityChangeEventArgs";
#endif
#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_VIDEOTELEPHONY_INTERNALVIDEOTELEPHONYCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Phone.Restricted.Cellular.VideoTelephony.VideoStateChangeEventArgs
 *
 * Introduced to Windows.Phone.Restricted.Cellular.VideoTelephony.InternalVideoTelephonyContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Phone.Restricted.Cellular.VideoTelephony.IVideoStateChangeEventArgs ** Default Interface **
 *
 */
#if WINDOWS_PHONE_RESTRICTED_CELLULAR_VIDEOTELEPHONY_INTERNALVIDEOTELEPHONYCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Phone_Restricted_Cellular_VideoTelephony_VideoStateChangeEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Phone_Restricted_Cellular_VideoTelephony_VideoStateChangeEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Phone_Restricted_Cellular_VideoTelephony_VideoStateChangeEventArgs[] = L"Windows.Phone.Restricted.Cellular.VideoTelephony.VideoStateChangeEventArgs";
#endif
#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_VIDEOTELEPHONY_INTERNALVIDEOTELEPHONYCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Phone.Restricted.Cellular.VideoTelephony.VideoStream
 *
 * Introduced to Windows.Phone.Restricted.Cellular.VideoTelephony.InternalVideoTelephonyContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Phone.Restricted.Cellular.VideoTelephony.IVideoStream ** Default Interface **
 *    Windows.Phone.Restricted.Cellular.VideoTelephony.IVideoStreamExt
 *
 */
#if WINDOWS_PHONE_RESTRICTED_CELLULAR_VIDEOTELEPHONY_INTERNALVIDEOTELEPHONYCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Phone_Restricted_Cellular_VideoTelephony_VideoStream_DEFINED
#define RUNTIMECLASS_Windows_Phone_Restricted_Cellular_VideoTelephony_VideoStream_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Phone_Restricted_Cellular_VideoTelephony_VideoStream[] = L"Windows.Phone.Restricted.Cellular.VideoTelephony.VideoStream";
#endif
#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_VIDEOTELEPHONY_INTERNALVIDEOTELEPHONYCONTRACT_VERSION >= 0x10000






#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CILocalVideoStream_FWD_DEFINED__
#define ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CILocalVideoStream_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CILocalVideoStream __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CILocalVideoStream;

#endif // ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CILocalVideoStream_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIRemoteVideoStream_FWD_DEFINED__
#define ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIRemoteVideoStream_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIRemoteVideoStream __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIRemoteVideoStream;

#endif // ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIRemoteVideoStream_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIResolutionChangeEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIResolutionChangeEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIResolutionChangeEventArgs __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIResolutionChangeEventArgs;

#endif // ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIResolutionChangeEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIRotationChangeEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIRotationChangeEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIRotationChangeEventArgs __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIRotationChangeEventArgs;

#endif // ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIRotationChangeEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCall_FWD_DEFINED__
#define ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCall_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCall __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCall;

#endif // ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCall_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCallFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCallFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCallFactory __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCallFactory;

#endif // ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCallFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCallInitializationParameters_FWD_DEFINED__
#define ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCallInitializationParameters_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCallInitializationParameters __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCallInitializationParameters;

#endif // ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCallInitializationParameters_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoQualityChangeEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoQualityChangeEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoQualityChangeEventArgs __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoQualityChangeEventArgs;

#endif // ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoQualityChangeEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStateChangeEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStateChangeEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStateChangeEventArgs __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStateChangeEventArgs;

#endif // ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStateChangeEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStream_FWD_DEFINED__
#define ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStream_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStream __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStream;

#endif // ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStream_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStreamExt_FWD_DEFINED__
#define ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStreamExt_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStreamExt __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStreamExt;

#endif // ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStreamExt_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions


#if WINDOWS_PHONE_RESTRICTED_CELLULAR_VIDEOTELEPHONY_INTERNALVIDEOTELEPHONYCONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CRemoteVideoStream_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CRotationChangeEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CRemoteVideoStream_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CRotationChangeEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CRemoteVideoStream_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CRotationChangeEventArgs __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CRemoteVideoStream_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CRotationChangeEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CRemoteVideoStream_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CRotationChangeEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CRemoteVideoStream_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CRotationChangeEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CRemoteVideoStream_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CRotationChangeEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CRemoteVideoStream_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CRotationChangeEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CRemoteVideoStream_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CRotationChangeEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CRemoteVideoStream_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CRotationChangeEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIRemoteVideoStream * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIRotationChangeEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CRemoteVideoStream_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CRotationChangeEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CRemoteVideoStream_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CRotationChangeEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CRemoteVideoStream_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CRotationChangeEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CRemoteVideoStream_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CRotationChangeEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CRemoteVideoStream_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CRotationChangeEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CRemoteVideoStream_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CRotationChangeEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CRemoteVideoStream_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CRotationChangeEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CRemoteVideoStream_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CRotationChangeEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_VIDEOTELEPHONY_INTERNALVIDEOTELEPHONYCONTRACT_VERSION >= 0x10000



#if WINDOWS_PHONE_RESTRICTED_CELLULAR_VIDEOTELEPHONY_INTERNALVIDEOTELEPHONYCONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CRemoteVideoStream_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CVideoQualityChangeEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CRemoteVideoStream_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CVideoQualityChangeEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CRemoteVideoStream_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CVideoQualityChangeEventArgs __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CRemoteVideoStream_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CVideoQualityChangeEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CRemoteVideoStream_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CVideoQualityChangeEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CRemoteVideoStream_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CVideoQualityChangeEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CRemoteVideoStream_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CVideoQualityChangeEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CRemoteVideoStream_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CVideoQualityChangeEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CRemoteVideoStream_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CVideoQualityChangeEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CRemoteVideoStream_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CVideoQualityChangeEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIRemoteVideoStream * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoQualityChangeEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CRemoteVideoStream_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CVideoQualityChangeEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CRemoteVideoStream_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CVideoQualityChangeEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CRemoteVideoStream_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CVideoQualityChangeEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CRemoteVideoStream_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CVideoQualityChangeEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CRemoteVideoStream_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CVideoQualityChangeEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CRemoteVideoStream_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CVideoQualityChangeEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CRemoteVideoStream_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CVideoQualityChangeEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CRemoteVideoStream_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CVideoQualityChangeEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_VIDEOTELEPHONY_INTERNALVIDEOTELEPHONYCONTRACT_VERSION >= 0x10000



#if WINDOWS_PHONE_RESTRICTED_CELLULAR_VIDEOTELEPHONY_INTERNALVIDEOTELEPHONYCONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CVideoStream_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CResolutionChangeEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CVideoStream_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CResolutionChangeEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CVideoStream_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CResolutionChangeEventArgs __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CVideoStream_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CResolutionChangeEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CVideoStream_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CResolutionChangeEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CVideoStream_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CResolutionChangeEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CVideoStream_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CResolutionChangeEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CVideoStream_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CResolutionChangeEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CVideoStream_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CResolutionChangeEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CVideoStream_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CResolutionChangeEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStream * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIResolutionChangeEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CVideoStream_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CResolutionChangeEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CVideoStream_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CResolutionChangeEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CVideoStream_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CResolutionChangeEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CVideoStream_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CResolutionChangeEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CVideoStream_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CResolutionChangeEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CVideoStream_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CResolutionChangeEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CVideoStream_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CResolutionChangeEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CVideoStream_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CResolutionChangeEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_VIDEOTELEPHONY_INTERNALVIDEOTELEPHONYCONTRACT_VERSION >= 0x10000



#if WINDOWS_PHONE_RESTRICTED_CELLULAR_VIDEOTELEPHONY_INTERNALVIDEOTELEPHONYCONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CVideoStream_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CVideoStateChangeEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CVideoStream_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CVideoStateChangeEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CVideoStream_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CVideoStateChangeEventArgs __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CVideoStream_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CVideoStateChangeEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CVideoStream_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CVideoStateChangeEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CVideoStream_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CVideoStateChangeEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CVideoStream_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CVideoStateChangeEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CVideoStream_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CVideoStateChangeEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CVideoStream_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CVideoStateChangeEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CVideoStream_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CVideoStateChangeEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStream * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStateChangeEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CVideoStream_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CVideoStateChangeEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CVideoStream_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CVideoStateChangeEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CVideoStream_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CVideoStateChangeEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CVideoStream_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CVideoStateChangeEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CVideoStream_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CVideoStateChangeEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CVideoStream_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CVideoStateChangeEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CVideoStream_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CVideoStateChangeEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CVideoStream_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CVideoStateChangeEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_VIDEOTELEPHONY_INTERNALVIDEOTELEPHONYCONTRACT_VERSION >= 0x10000


#ifndef ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIAsyncAction __x_ABI_CWindows_CFoundation_CIAsyncAction;

#endif // ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIClosable __x_ABI_CWindows_CFoundation_CIClosable;

#endif // ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__



typedef struct __x_ABI_CWindows_CFoundation_CSize __x_ABI_CWindows_CFoundation_CSize;




typedef enum __x_ABI_CWindows_CGraphics_CDisplay_CDisplayOrientations __x_ABI_CWindows_CGraphics_CDisplay_CDisplayOrientations;






typedef enum __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CCameraLocation __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CCameraLocation;


typedef enum __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CStreamIdentifier __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CStreamIdentifier;


typedef enum __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CVideoQuality __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CVideoQuality;


typedef enum __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CVideoStreamState __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CVideoStreamState;




























/*
 *
 * Struct Windows.Phone.Restricted.Cellular.VideoTelephony.CameraLocation
 *
 * Introduced to Windows.Phone.Restricted.Cellular.VideoTelephony.InternalVideoTelephonyContract in version 1.0
 *
 *
 */

#if WINDOWS_PHONE_RESTRICTED_CELLULAR_VIDEOTELEPHONY_INTERNALVIDEOTELEPHONYCONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CCameraLocation
{
    CameraLocation_Front = 0,
    CameraLocation_Back = 1,
};
#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_VIDEOTELEPHONY_INTERNALVIDEOTELEPHONYCONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Phone.Restricted.Cellular.VideoTelephony.StreamIdentifier
 *
 * Introduced to Windows.Phone.Restricted.Cellular.VideoTelephony.InternalVideoTelephonyContract in version 1.0
 *
 *
 */

#if WINDOWS_PHONE_RESTRICTED_CELLULAR_VIDEOTELEPHONY_INTERNALVIDEOTELEPHONYCONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CStreamIdentifier
{
    StreamIdentifier_LocalPreview = 0,
    StreamIdentifier_RemoteView = 1,
};
#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_VIDEOTELEPHONY_INTERNALVIDEOTELEPHONYCONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Phone.Restricted.Cellular.VideoTelephony.VideoQuality
 *
 * Introduced to Windows.Phone.Restricted.Cellular.VideoTelephony.InternalVideoTelephonyContract in version 1.0
 *
 *
 */

#if WINDOWS_PHONE_RESTRICTED_CELLULAR_VIDEOTELEPHONY_INTERNALVIDEOTELEPHONYCONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CVideoQuality
{
    VideoQuality_Low = 0,
    VideoQuality_Average = 1,
    VideoQuality_High = 2,
};
#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_VIDEOTELEPHONY_INTERNALVIDEOTELEPHONYCONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Phone.Restricted.Cellular.VideoTelephony.VideoStreamState
 *
 * Introduced to Windows.Phone.Restricted.Cellular.VideoTelephony.InternalVideoTelephonyContract in version 1.0
 *
 *
 */

#if WINDOWS_PHONE_RESTRICTED_CELLULAR_VIDEOTELEPHONY_INTERNALVIDEOTELEPHONYCONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CVideoStreamState
{
    VideoStreamState_Initialized = 0,
    VideoStreamState_ResourcesAcquired = 1,
    VideoStreamState_Playing = 2,
    VideoStreamState_Paused = 3,
    VideoStreamState_Destroyed = 4,
};
#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_VIDEOTELEPHONY_INTERNALVIDEOTELEPHONYCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Phone.Restricted.Cellular.VideoTelephony.ILocalVideoStream
 *
 * Introduced to Windows.Phone.Restricted.Cellular.VideoTelephony.InternalVideoTelephonyContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Phone.Restricted.Cellular.VideoTelephony.LocalVideoStream
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Phone.Restricted.Cellular.VideoTelephony.IVideoStream
 *
 *
 */
#if WINDOWS_PHONE_RESTRICTED_CELLULAR_VIDEOTELEPHONY_INTERNALVIDEOTELEPHONYCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CILocalVideoStream_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CILocalVideoStream_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Phone_Restricted_Cellular_VideoTelephony_ILocalVideoStream[] = L"Windows.Phone.Restricted.Cellular.VideoTelephony.ILocalVideoStream";
/* [object, uuid("54024241-6C0B-49BB-B200-E4A6EC2BDEED"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CILocalVideoStreamVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CILocalVideoStream * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CILocalVideoStream * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CILocalVideoStream * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CILocalVideoStream * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CILocalVideoStream * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CILocalVideoStream * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *SetDeviceOrientation )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CILocalVideoStream * This,
        /* [in] */__x_ABI_CWindows_CGraphics_CDisplay_CDisplayOrientations orientation
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CILocalVideoStreamVtbl;

interface __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CILocalVideoStream
{
    CONST_VTBL struct __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CILocalVideoStreamVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CILocalVideoStream_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CILocalVideoStream_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CILocalVideoStream_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CILocalVideoStream_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CILocalVideoStream_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CILocalVideoStream_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CILocalVideoStream_SetDeviceOrientation(This,orientation) \
    ( (This)->lpVtbl->SetDeviceOrientation(This,orientation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CILocalVideoStream;
#endif /* !defined(____x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CILocalVideoStream_INTERFACE_DEFINED__) */
#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_VIDEOTELEPHONY_INTERNALVIDEOTELEPHONYCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Phone.Restricted.Cellular.VideoTelephony.IRemoteVideoStream
 *
 * Introduced to Windows.Phone.Restricted.Cellular.VideoTelephony.InternalVideoTelephonyContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Phone.Restricted.Cellular.VideoTelephony.RemoteVideoStream
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Phone.Restricted.Cellular.VideoTelephony.IVideoStream
 *
 *
 */
#if WINDOWS_PHONE_RESTRICTED_CELLULAR_VIDEOTELEPHONY_INTERNALVIDEOTELEPHONYCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIRemoteVideoStream_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIRemoteVideoStream_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Phone_Restricted_Cellular_VideoTelephony_IRemoteVideoStream[] = L"Windows.Phone.Restricted.Cellular.VideoTelephony.IRemoteVideoStream";
/* [object, uuid("71EC305F-7CAD-4BBF-953A-810DB7D68D4C"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIRemoteVideoStreamVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIRemoteVideoStream * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIRemoteVideoStream * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIRemoteVideoStream * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIRemoteVideoStream * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIRemoteVideoStream * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIRemoteVideoStream * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Rotation )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIRemoteVideoStream * This,
        /* [retval, out] */__RPC__out INT32 * degreesCw
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_RotationChanged )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIRemoteVideoStream * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CRemoteVideoStream_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CRotationChangeEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * registrationToken
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_RotationChanged )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIRemoteVideoStream * This,
        /* [in] */EventRegistrationToken registrationToken
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Quality )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIRemoteVideoStream * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CVideoQuality * quality
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_QualityChanged )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIRemoteVideoStream * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CRemoteVideoStream_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CVideoQualityChangeEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * registrationToken
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_QualityChanged )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIRemoteVideoStream * This,
        /* [in] */EventRegistrationToken registrationToken
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIRemoteVideoStreamVtbl;

interface __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIRemoteVideoStream
{
    CONST_VTBL struct __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIRemoteVideoStreamVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIRemoteVideoStream_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIRemoteVideoStream_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIRemoteVideoStream_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIRemoteVideoStream_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIRemoteVideoStream_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIRemoteVideoStream_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIRemoteVideoStream_get_Rotation(This,degreesCw) \
    ( (This)->lpVtbl->get_Rotation(This,degreesCw) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIRemoteVideoStream_add_RotationChanged(This,handler,registrationToken) \
    ( (This)->lpVtbl->add_RotationChanged(This,handler,registrationToken) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIRemoteVideoStream_remove_RotationChanged(This,registrationToken) \
    ( (This)->lpVtbl->remove_RotationChanged(This,registrationToken) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIRemoteVideoStream_get_Quality(This,quality) \
    ( (This)->lpVtbl->get_Quality(This,quality) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIRemoteVideoStream_add_QualityChanged(This,handler,registrationToken) \
    ( (This)->lpVtbl->add_QualityChanged(This,handler,registrationToken) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIRemoteVideoStream_remove_QualityChanged(This,registrationToken) \
    ( (This)->lpVtbl->remove_QualityChanged(This,registrationToken) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIRemoteVideoStream;
#endif /* !defined(____x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIRemoteVideoStream_INTERFACE_DEFINED__) */
#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_VIDEOTELEPHONY_INTERNALVIDEOTELEPHONYCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Phone.Restricted.Cellular.VideoTelephony.IResolutionChangeEventArgs
 *
 * Introduced to Windows.Phone.Restricted.Cellular.VideoTelephony.InternalVideoTelephonyContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Phone.Restricted.Cellular.VideoTelephony.ResolutionChangeEventArgs
 *
 *
 */
#if WINDOWS_PHONE_RESTRICTED_CELLULAR_VIDEOTELEPHONY_INTERNALVIDEOTELEPHONYCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIResolutionChangeEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIResolutionChangeEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Phone_Restricted_Cellular_VideoTelephony_IResolutionChangeEventArgs[] = L"Windows.Phone.Restricted.Cellular.VideoTelephony.IResolutionChangeEventArgs";
/* [object, uuid("01F51655-5E82-4D53-BED4-EE2551467495"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIResolutionChangeEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIResolutionChangeEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIResolutionChangeEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIResolutionChangeEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIResolutionChangeEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIResolutionChangeEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIResolutionChangeEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Resolution )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIResolutionChangeEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CSize * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIResolutionChangeEventArgsVtbl;

interface __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIResolutionChangeEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIResolutionChangeEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIResolutionChangeEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIResolutionChangeEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIResolutionChangeEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIResolutionChangeEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIResolutionChangeEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIResolutionChangeEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIResolutionChangeEventArgs_get_Resolution(This,value) \
    ( (This)->lpVtbl->get_Resolution(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIResolutionChangeEventArgs;
#endif /* !defined(____x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIResolutionChangeEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_VIDEOTELEPHONY_INTERNALVIDEOTELEPHONYCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Phone.Restricted.Cellular.VideoTelephony.IRotationChangeEventArgs
 *
 * Introduced to Windows.Phone.Restricted.Cellular.VideoTelephony.InternalVideoTelephonyContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Phone.Restricted.Cellular.VideoTelephony.RotationChangeEventArgs
 *
 *
 */
#if WINDOWS_PHONE_RESTRICTED_CELLULAR_VIDEOTELEPHONY_INTERNALVIDEOTELEPHONYCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIRotationChangeEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIRotationChangeEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Phone_Restricted_Cellular_VideoTelephony_IRotationChangeEventArgs[] = L"Windows.Phone.Restricted.Cellular.VideoTelephony.IRotationChangeEventArgs";
/* [object, uuid("16DF4E9D-FB47-40B7-B8B8-55CFFAEA4251"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIRotationChangeEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIRotationChangeEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIRotationChangeEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIRotationChangeEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIRotationChangeEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIRotationChangeEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIRotationChangeEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Rotation )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIRotationChangeEventArgs * This,
        /* [retval, out] */__RPC__out INT32 * degreesCw
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIRotationChangeEventArgsVtbl;

interface __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIRotationChangeEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIRotationChangeEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIRotationChangeEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIRotationChangeEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIRotationChangeEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIRotationChangeEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIRotationChangeEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIRotationChangeEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIRotationChangeEventArgs_get_Rotation(This,degreesCw) \
    ( (This)->lpVtbl->get_Rotation(This,degreesCw) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIRotationChangeEventArgs;
#endif /* !defined(____x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIRotationChangeEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_VIDEOTELEPHONY_INTERNALVIDEOTELEPHONYCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Phone.Restricted.Cellular.VideoTelephony.IVideoCall
 *
 * Introduced to Windows.Phone.Restricted.Cellular.VideoTelephony.InternalVideoTelephonyContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Phone.Restricted.Cellular.VideoTelephony.VideoCall
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *
 *
 */
#if WINDOWS_PHONE_RESTRICTED_CELLULAR_VIDEOTELEPHONY_INTERNALVIDEOTELEPHONYCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCall_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCall_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Phone_Restricted_Cellular_VideoTelephony_IVideoCall[] = L"Windows.Phone.Restricted.Cellular.VideoTelephony.IVideoCall";
/* [object, uuid("5EF23627-E34A-4CB3-8C41-5A5E8265A9DA"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCallVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCall * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCall * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCall * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCall * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCall * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCall * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCall * This,
        /* [retval, out] */__RPC__out INT32 * callId
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CameraLocation )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCall * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CCameraLocation * cameraLocation
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RemoteStream )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCall * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIRemoteVideoStream * * remoteStream
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LocalStream )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCall * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CILocalVideoStream * * localStream
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Visibility )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCall * This,
        /* [retval, out] */__RPC__out boolean * visible
        );
    HRESULT ( STDMETHODCALLTYPE *SetVisibilityChangeAsync )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCall * This,
        /* [in] */boolean visible,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * asyncAction
        );
    HRESULT ( STDMETHODCALLTYPE *SetCameraLocationAsync )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCall * This,
        /* [in] */__x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CCameraLocation cameraLocation,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * asyncAction
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCallVtbl;

interface __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCall
{
    CONST_VTBL struct __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCallVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCall_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCall_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCall_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCall_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCall_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCall_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCall_get_Id(This,callId) \
    ( (This)->lpVtbl->get_Id(This,callId) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCall_get_CameraLocation(This,cameraLocation) \
    ( (This)->lpVtbl->get_CameraLocation(This,cameraLocation) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCall_get_RemoteStream(This,remoteStream) \
    ( (This)->lpVtbl->get_RemoteStream(This,remoteStream) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCall_get_LocalStream(This,localStream) \
    ( (This)->lpVtbl->get_LocalStream(This,localStream) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCall_get_Visibility(This,visible) \
    ( (This)->lpVtbl->get_Visibility(This,visible) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCall_SetVisibilityChangeAsync(This,visible,asyncAction) \
    ( (This)->lpVtbl->SetVisibilityChangeAsync(This,visible,asyncAction) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCall_SetCameraLocationAsync(This,cameraLocation,asyncAction) \
    ( (This)->lpVtbl->SetCameraLocationAsync(This,cameraLocation,asyncAction) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCall;
#endif /* !defined(____x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCall_INTERFACE_DEFINED__) */
#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_VIDEOTELEPHONY_INTERNALVIDEOTELEPHONYCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Phone.Restricted.Cellular.VideoTelephony.IVideoCallFactory
 *
 * Introduced to Windows.Phone.Restricted.Cellular.VideoTelephony.InternalVideoTelephonyContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Phone.Restricted.Cellular.VideoTelephony.VideoCall
 *
 *
 */
#if WINDOWS_PHONE_RESTRICTED_CELLULAR_VIDEOTELEPHONY_INTERNALVIDEOTELEPHONYCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCallFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCallFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Phone_Restricted_Cellular_VideoTelephony_IVideoCallFactory[] = L"Windows.Phone.Restricted.Cellular.VideoTelephony.IVideoCallFactory";
/* [object, uuid("8E7C1701-821A-4CCC-9CB8-889BC3CC8468"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCallFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCallFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCallFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCallFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCallFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCallFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCallFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateVideoCall )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCallFactory * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCallInitializationParameters * parameters,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCall * * videoCall
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCallFactoryVtbl;

interface __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCallFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCallFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCallFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCallFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCallFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCallFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCallFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCallFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCallFactory_CreateVideoCall(This,parameters,videoCall) \
    ( (This)->lpVtbl->CreateVideoCall(This,parameters,videoCall) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCallFactory;
#endif /* !defined(____x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCallFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_VIDEOTELEPHONY_INTERNALVIDEOTELEPHONYCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Phone.Restricted.Cellular.VideoTelephony.IVideoCallInitializationParameters
 *
 * Introduced to Windows.Phone.Restricted.Cellular.VideoTelephony.InternalVideoTelephonyContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Phone.Restricted.Cellular.VideoTelephony.VideoCallInitializationParameters
 *
 *
 */
#if WINDOWS_PHONE_RESTRICTED_CELLULAR_VIDEOTELEPHONY_INTERNALVIDEOTELEPHONYCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCallInitializationParameters_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCallInitializationParameters_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Phone_Restricted_Cellular_VideoTelephony_IVideoCallInitializationParameters[] = L"Windows.Phone.Restricted.Cellular.VideoTelephony.IVideoCallInitializationParameters";
/* [object, uuid("A166B7F6-A433-4326-85B1-0F532180E6D4"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCallInitializationParametersVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCallInitializationParameters * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCallInitializationParameters * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCallInitializationParameters * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCallInitializationParameters * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCallInitializationParameters * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCallInitializationParameters * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propput] */HRESULT ( STDMETHODCALLTYPE *put_CallId )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCallInitializationParameters * This,
        /* [in] */INT32 callId
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CallId )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCallInitializationParameters * This,
        /* [retval, out] */__RPC__out INT32 * callId
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_LocalOrientation )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCallInitializationParameters * This,
        /* [in] */__x_ABI_CWindows_CGraphics_CDisplay_CDisplayOrientations value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LocalOrientation )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCallInitializationParameters * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CGraphics_CDisplay_CDisplayOrientations * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_CameraLocation )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCallInitializationParameters * This,
        /* [in] */__x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CCameraLocation cameraLocation
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CameraLocation )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCallInitializationParameters * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CCameraLocation * cameraLocation
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_LocalSurface )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCallInitializationParameters * This,
        /* [in] */__RPC__in HSTRING localSurface
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LocalSurface )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCallInitializationParameters * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * localSurface
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_RemoteSurface )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCallInitializationParameters * This,
        /* [in] */__RPC__in HSTRING remoteSurface
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RemoteSurface )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCallInitializationParameters * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * remoteSurface
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCallInitializationParametersVtbl;

interface __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCallInitializationParameters
{
    CONST_VTBL struct __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCallInitializationParametersVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCallInitializationParameters_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCallInitializationParameters_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCallInitializationParameters_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCallInitializationParameters_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCallInitializationParameters_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCallInitializationParameters_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCallInitializationParameters_put_CallId(This,callId) \
    ( (This)->lpVtbl->put_CallId(This,callId) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCallInitializationParameters_get_CallId(This,callId) \
    ( (This)->lpVtbl->get_CallId(This,callId) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCallInitializationParameters_put_LocalOrientation(This,value) \
    ( (This)->lpVtbl->put_LocalOrientation(This,value) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCallInitializationParameters_get_LocalOrientation(This,value) \
    ( (This)->lpVtbl->get_LocalOrientation(This,value) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCallInitializationParameters_put_CameraLocation(This,cameraLocation) \
    ( (This)->lpVtbl->put_CameraLocation(This,cameraLocation) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCallInitializationParameters_get_CameraLocation(This,cameraLocation) \
    ( (This)->lpVtbl->get_CameraLocation(This,cameraLocation) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCallInitializationParameters_put_LocalSurface(This,localSurface) \
    ( (This)->lpVtbl->put_LocalSurface(This,localSurface) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCallInitializationParameters_get_LocalSurface(This,localSurface) \
    ( (This)->lpVtbl->get_LocalSurface(This,localSurface) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCallInitializationParameters_put_RemoteSurface(This,remoteSurface) \
    ( (This)->lpVtbl->put_RemoteSurface(This,remoteSurface) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCallInitializationParameters_get_RemoteSurface(This,remoteSurface) \
    ( (This)->lpVtbl->get_RemoteSurface(This,remoteSurface) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCallInitializationParameters;
#endif /* !defined(____x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCallInitializationParameters_INTERFACE_DEFINED__) */
#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_VIDEOTELEPHONY_INTERNALVIDEOTELEPHONYCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Phone.Restricted.Cellular.VideoTelephony.IVideoQualityChangeEventArgs
 *
 * Introduced to Windows.Phone.Restricted.Cellular.VideoTelephony.InternalVideoTelephonyContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Phone.Restricted.Cellular.VideoTelephony.VideoQualityChangeEventArgs
 *
 *
 */
#if WINDOWS_PHONE_RESTRICTED_CELLULAR_VIDEOTELEPHONY_INTERNALVIDEOTELEPHONYCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoQualityChangeEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoQualityChangeEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Phone_Restricted_Cellular_VideoTelephony_IVideoQualityChangeEventArgs[] = L"Windows.Phone.Restricted.Cellular.VideoTelephony.IVideoQualityChangeEventArgs";
/* [object, uuid("69646776-1DFB-4DB4-9EDB-8D15AF3C00C4"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoQualityChangeEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoQualityChangeEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoQualityChangeEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoQualityChangeEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoQualityChangeEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoQualityChangeEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoQualityChangeEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Quality )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoQualityChangeEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CVideoQuality * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoQualityChangeEventArgsVtbl;

interface __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoQualityChangeEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoQualityChangeEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoQualityChangeEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoQualityChangeEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoQualityChangeEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoQualityChangeEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoQualityChangeEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoQualityChangeEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoQualityChangeEventArgs_get_Quality(This,value) \
    ( (This)->lpVtbl->get_Quality(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoQualityChangeEventArgs;
#endif /* !defined(____x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoQualityChangeEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_VIDEOTELEPHONY_INTERNALVIDEOTELEPHONYCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Phone.Restricted.Cellular.VideoTelephony.IVideoStateChangeEventArgs
 *
 * Introduced to Windows.Phone.Restricted.Cellular.VideoTelephony.InternalVideoTelephonyContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Phone.Restricted.Cellular.VideoTelephony.VideoStateChangeEventArgs
 *
 *
 */
#if WINDOWS_PHONE_RESTRICTED_CELLULAR_VIDEOTELEPHONY_INTERNALVIDEOTELEPHONYCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStateChangeEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStateChangeEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Phone_Restricted_Cellular_VideoTelephony_IVideoStateChangeEventArgs[] = L"Windows.Phone.Restricted.Cellular.VideoTelephony.IVideoStateChangeEventArgs";
/* [object, uuid("5E77A448-094D-4DCE-95AC-CDD849826FED"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStateChangeEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStateChangeEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStateChangeEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStateChangeEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStateChangeEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStateChangeEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStateChangeEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_State )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStateChangeEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CVideoStreamState * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStateChangeEventArgsVtbl;

interface __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStateChangeEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStateChangeEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStateChangeEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStateChangeEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStateChangeEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStateChangeEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStateChangeEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStateChangeEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStateChangeEventArgs_get_State(This,value) \
    ( (This)->lpVtbl->get_State(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStateChangeEventArgs;
#endif /* !defined(____x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStateChangeEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_VIDEOTELEPHONY_INTERNALVIDEOTELEPHONYCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Phone.Restricted.Cellular.VideoTelephony.IVideoStream
 *
 * Introduced to Windows.Phone.Restricted.Cellular.VideoTelephony.InternalVideoTelephonyContract in version 1.0
 *
 *
 */
#if WINDOWS_PHONE_RESTRICTED_CELLULAR_VIDEOTELEPHONY_INTERNALVIDEOTELEPHONYCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStream_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStream_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Phone_Restricted_Cellular_VideoTelephony_IVideoStream[] = L"Windows.Phone.Restricted.Cellular.VideoTelephony.IVideoStream";
/* [object, uuid("71867226-5936-4D2F-837E-A902EA3B4213"), contract] */
typedef struct __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStreamVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStream * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStream * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStream * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStream * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStream * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStream * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStream * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CStreamIdentifier * streamId
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CallId )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStream * This,
        /* [retval, out] */__RPC__out INT32 * callId
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_State )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStream * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CVideoStreamState * state
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Resolution )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStream * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CSize * resolution
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_BroadcastingPort )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStream * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * port
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_ResolutionChanged )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStream * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CVideoStream_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CResolutionChangeEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * registrationToken
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_ResolutionChanged )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStream * This,
        /* [in] */EventRegistrationToken registrationToken
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_StateChanged )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStream * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CVideoStream_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CVideoStateChangeEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * registrationToken
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_StateChanged )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStream * This,
        /* [in] */EventRegistrationToken registrationToken
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStreamVtbl;

interface __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStream
{
    CONST_VTBL struct __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStreamVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStream_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStream_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStream_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStream_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStream_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStream_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStream_get_Id(This,streamId) \
    ( (This)->lpVtbl->get_Id(This,streamId) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStream_get_CallId(This,callId) \
    ( (This)->lpVtbl->get_CallId(This,callId) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStream_get_State(This,state) \
    ( (This)->lpVtbl->get_State(This,state) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStream_get_Resolution(This,resolution) \
    ( (This)->lpVtbl->get_Resolution(This,resolution) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStream_get_BroadcastingPort(This,port) \
    ( (This)->lpVtbl->get_BroadcastingPort(This,port) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStream_add_ResolutionChanged(This,handler,registrationToken) \
    ( (This)->lpVtbl->add_ResolutionChanged(This,handler,registrationToken) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStream_remove_ResolutionChanged(This,registrationToken) \
    ( (This)->lpVtbl->remove_ResolutionChanged(This,registrationToken) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStream_add_StateChanged(This,handler,registrationToken) \
    ( (This)->lpVtbl->add_StateChanged(This,handler,registrationToken) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStream_remove_StateChanged(This,registrationToken) \
    ( (This)->lpVtbl->remove_StateChanged(This,registrationToken) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStream;
#endif /* !defined(____x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStream_INTERFACE_DEFINED__) */
#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_VIDEOTELEPHONY_INTERNALVIDEOTELEPHONYCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Phone.Restricted.Cellular.VideoTelephony.IVideoStreamExt
 *
 * Introduced to Windows.Phone.Restricted.Cellular.VideoTelephony.InternalVideoTelephonyContract in version 1.0
 *
 *
 */
#if WINDOWS_PHONE_RESTRICTED_CELLULAR_VIDEOTELEPHONY_INTERNALVIDEOTELEPHONYCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStreamExt_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStreamExt_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Phone_Restricted_Cellular_VideoTelephony_IVideoStreamExt[] = L"Windows.Phone.Restricted.Cellular.VideoTelephony.IVideoStreamExt";
/* [object, uuid("9010592C-61F3-48C7-8F2D-33944E7A5DA3"), contract] */
typedef struct __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStreamExtVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStreamExt * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStreamExt * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStreamExt * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStreamExt * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStreamExt * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStreamExt * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *SetResolution )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStreamExt * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CSize resolution
        );
    HRESULT ( STDMETHODCALLTYPE *GetSwapChainHandleForProcess )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStreamExt * This,
        /* [in] */UINT32 targetProcessId,
        /* [retval, out] */__RPC__out UINT64 * phSwapChain
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStreamExtVtbl;

interface __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStreamExt
{
    CONST_VTBL struct __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStreamExtVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStreamExt_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStreamExt_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStreamExt_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStreamExt_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStreamExt_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStreamExt_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStreamExt_SetResolution(This,resolution) \
    ( (This)->lpVtbl->SetResolution(This,resolution) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStreamExt_GetSwapChainHandleForProcess(This,targetProcessId,phSwapChain) \
    ( (This)->lpVtbl->GetSwapChainHandleForProcess(This,targetProcessId,phSwapChain) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStreamExt;
#endif /* !defined(____x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStreamExt_INTERFACE_DEFINED__) */
#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_VIDEOTELEPHONY_INTERNALVIDEOTELEPHONYCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Phone.Restricted.Cellular.VideoTelephony.LocalVideoStream
 *
 * Introduced to Windows.Phone.Restricted.Cellular.VideoTelephony.InternalVideoTelephonyContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Phone.Restricted.Cellular.VideoTelephony.ILocalVideoStream ** Default Interface **
 *    Windows.Phone.Restricted.Cellular.VideoTelephony.IVideoStream
 *    Windows.Phone.Restricted.Cellular.VideoTelephony.IVideoStreamExt
 *
 */
#if WINDOWS_PHONE_RESTRICTED_CELLULAR_VIDEOTELEPHONY_INTERNALVIDEOTELEPHONYCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Phone_Restricted_Cellular_VideoTelephony_LocalVideoStream_DEFINED
#define RUNTIMECLASS_Windows_Phone_Restricted_Cellular_VideoTelephony_LocalVideoStream_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Phone_Restricted_Cellular_VideoTelephony_LocalVideoStream[] = L"Windows.Phone.Restricted.Cellular.VideoTelephony.LocalVideoStream";
#endif
#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_VIDEOTELEPHONY_INTERNALVIDEOTELEPHONYCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Phone.Restricted.Cellular.VideoTelephony.RemoteVideoStream
 *
 * Introduced to Windows.Phone.Restricted.Cellular.VideoTelephony.InternalVideoTelephonyContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Phone.Restricted.Cellular.VideoTelephony.IRemoteVideoStream ** Default Interface **
 *    Windows.Phone.Restricted.Cellular.VideoTelephony.IVideoStream
 *    Windows.Phone.Restricted.Cellular.VideoTelephony.IVideoStreamExt
 *
 */
#if WINDOWS_PHONE_RESTRICTED_CELLULAR_VIDEOTELEPHONY_INTERNALVIDEOTELEPHONYCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Phone_Restricted_Cellular_VideoTelephony_RemoteVideoStream_DEFINED
#define RUNTIMECLASS_Windows_Phone_Restricted_Cellular_VideoTelephony_RemoteVideoStream_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Phone_Restricted_Cellular_VideoTelephony_RemoteVideoStream[] = L"Windows.Phone.Restricted.Cellular.VideoTelephony.RemoteVideoStream";
#endif
#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_VIDEOTELEPHONY_INTERNALVIDEOTELEPHONYCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Phone.Restricted.Cellular.VideoTelephony.ResolutionChangeEventArgs
 *
 * Introduced to Windows.Phone.Restricted.Cellular.VideoTelephony.InternalVideoTelephonyContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Phone.Restricted.Cellular.VideoTelephony.IResolutionChangeEventArgs ** Default Interface **
 *
 */
#if WINDOWS_PHONE_RESTRICTED_CELLULAR_VIDEOTELEPHONY_INTERNALVIDEOTELEPHONYCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Phone_Restricted_Cellular_VideoTelephony_ResolutionChangeEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Phone_Restricted_Cellular_VideoTelephony_ResolutionChangeEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Phone_Restricted_Cellular_VideoTelephony_ResolutionChangeEventArgs[] = L"Windows.Phone.Restricted.Cellular.VideoTelephony.ResolutionChangeEventArgs";
#endif
#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_VIDEOTELEPHONY_INTERNALVIDEOTELEPHONYCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Phone.Restricted.Cellular.VideoTelephony.RotationChangeEventArgs
 *
 * Introduced to Windows.Phone.Restricted.Cellular.VideoTelephony.InternalVideoTelephonyContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Phone.Restricted.Cellular.VideoTelephony.IRotationChangeEventArgs ** Default Interface **
 *
 */
#if WINDOWS_PHONE_RESTRICTED_CELLULAR_VIDEOTELEPHONY_INTERNALVIDEOTELEPHONYCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Phone_Restricted_Cellular_VideoTelephony_RotationChangeEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Phone_Restricted_Cellular_VideoTelephony_RotationChangeEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Phone_Restricted_Cellular_VideoTelephony_RotationChangeEventArgs[] = L"Windows.Phone.Restricted.Cellular.VideoTelephony.RotationChangeEventArgs";
#endif
#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_VIDEOTELEPHONY_INTERNALVIDEOTELEPHONYCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Phone.Restricted.Cellular.VideoTelephony.VideoCall
 *
 * Introduced to Windows.Phone.Restricted.Cellular.VideoTelephony.InternalVideoTelephonyContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Phone.Restricted.Cellular.VideoTelephony.IVideoCall ** Default Interface **
 *    Windows.Foundation.IClosable
 *
 */
#if WINDOWS_PHONE_RESTRICTED_CELLULAR_VIDEOTELEPHONY_INTERNALVIDEOTELEPHONYCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Phone_Restricted_Cellular_VideoTelephony_VideoCall_DEFINED
#define RUNTIMECLASS_Windows_Phone_Restricted_Cellular_VideoTelephony_VideoCall_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Phone_Restricted_Cellular_VideoTelephony_VideoCall[] = L"Windows.Phone.Restricted.Cellular.VideoTelephony.VideoCall";
#endif
#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_VIDEOTELEPHONY_INTERNALVIDEOTELEPHONYCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Phone.Restricted.Cellular.VideoTelephony.VideoCallInitializationParameters
 *
 * Introduced to Windows.Phone.Restricted.Cellular.VideoTelephony.InternalVideoTelephonyContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Phone.Restricted.Cellular.VideoTelephony.IVideoCallInitializationParameters ** Default Interface **
 *
 */
#if WINDOWS_PHONE_RESTRICTED_CELLULAR_VIDEOTELEPHONY_INTERNALVIDEOTELEPHONYCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Phone_Restricted_Cellular_VideoTelephony_VideoCallInitializationParameters_DEFINED
#define RUNTIMECLASS_Windows_Phone_Restricted_Cellular_VideoTelephony_VideoCallInitializationParameters_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Phone_Restricted_Cellular_VideoTelephony_VideoCallInitializationParameters[] = L"Windows.Phone.Restricted.Cellular.VideoTelephony.VideoCallInitializationParameters";
#endif
#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_VIDEOTELEPHONY_INTERNALVIDEOTELEPHONYCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Phone.Restricted.Cellular.VideoTelephony.VideoQualityChangeEventArgs
 *
 * Introduced to Windows.Phone.Restricted.Cellular.VideoTelephony.InternalVideoTelephonyContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Phone.Restricted.Cellular.VideoTelephony.IVideoQualityChangeEventArgs ** Default Interface **
 *
 */
#if WINDOWS_PHONE_RESTRICTED_CELLULAR_VIDEOTELEPHONY_INTERNALVIDEOTELEPHONYCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Phone_Restricted_Cellular_VideoTelephony_VideoQualityChangeEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Phone_Restricted_Cellular_VideoTelephony_VideoQualityChangeEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Phone_Restricted_Cellular_VideoTelephony_VideoQualityChangeEventArgs[] = L"Windows.Phone.Restricted.Cellular.VideoTelephony.VideoQualityChangeEventArgs";
#endif
#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_VIDEOTELEPHONY_INTERNALVIDEOTELEPHONYCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Phone.Restricted.Cellular.VideoTelephony.VideoStateChangeEventArgs
 *
 * Introduced to Windows.Phone.Restricted.Cellular.VideoTelephony.InternalVideoTelephonyContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Phone.Restricted.Cellular.VideoTelephony.IVideoStateChangeEventArgs ** Default Interface **
 *
 */
#if WINDOWS_PHONE_RESTRICTED_CELLULAR_VIDEOTELEPHONY_INTERNALVIDEOTELEPHONYCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Phone_Restricted_Cellular_VideoTelephony_VideoStateChangeEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Phone_Restricted_Cellular_VideoTelephony_VideoStateChangeEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Phone_Restricted_Cellular_VideoTelephony_VideoStateChangeEventArgs[] = L"Windows.Phone.Restricted.Cellular.VideoTelephony.VideoStateChangeEventArgs";
#endif
#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_VIDEOTELEPHONY_INTERNALVIDEOTELEPHONYCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Phone.Restricted.Cellular.VideoTelephony.VideoStream
 *
 * Introduced to Windows.Phone.Restricted.Cellular.VideoTelephony.InternalVideoTelephonyContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Phone.Restricted.Cellular.VideoTelephony.IVideoStream ** Default Interface **
 *    Windows.Phone.Restricted.Cellular.VideoTelephony.IVideoStreamExt
 *
 */
#if WINDOWS_PHONE_RESTRICTED_CELLULAR_VIDEOTELEPHONY_INTERNALVIDEOTELEPHONYCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Phone_Restricted_Cellular_VideoTelephony_VideoStream_DEFINED
#define RUNTIMECLASS_Windows_Phone_Restricted_Cellular_VideoTelephony_VideoStream_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Phone_Restricted_Cellular_VideoTelephony_VideoStream[] = L"Windows.Phone.Restricted.Cellular.VideoTelephony.VideoStream";
#endif
#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_VIDEOTELEPHONY_INTERNALVIDEOTELEPHONYCONTRACT_VERSION >= 0x10000






#endif // defined(__cplusplus)
#pragma pop_macro("MIDL_CONST_ID")
#endif // __windows2Ephone2Erestricted2Ecellular2Evideotelephony_p_h__

#endif // __windows2Ephone2Erestricted2Ecellular2Evideotelephony_h__
