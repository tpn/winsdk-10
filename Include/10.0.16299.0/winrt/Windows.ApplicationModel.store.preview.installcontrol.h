/* Header file automatically generated from windows.applicationmodel.store.preview.installcontrol.idl */
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
#ifndef __windows2Eapplicationmodel2Estore2Epreview2Einstallcontrol_h__
#define __windows2Eapplicationmodel2Estore2Epreview2Einstallcontrol_h__
#ifndef __windows2Eapplicationmodel2Estore2Epreview2Einstallcontrol_p_h__
#define __windows2Eapplicationmodel2Estore2Epreview2Einstallcontrol_p_h__


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
#include "Windows.Management.Deployment.h"
#include "Windows.System.h"
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Store {
                namespace Preview {
                    namespace InstallControl {
                        interface IAppInstallItem;
                    } /* Windows */
                } /* ApplicationModel */
            } /* Store */
        } /* Preview */
    } /* InstallControl */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem ABI::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem

#endif // ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem2_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Store {
                namespace Preview {
                    namespace InstallControl {
                        interface IAppInstallItem2;
                    } /* Windows */
                } /* ApplicationModel */
            } /* Store */
        } /* Preview */
    } /* InstallControl */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem2 ABI::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem2

#endif // ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem3_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem3_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Store {
                namespace Preview {
                    namespace InstallControl {
                        interface IAppInstallItem3;
                    } /* Windows */
                } /* ApplicationModel */
            } /* Store */
        } /* Preview */
    } /* InstallControl */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem3 ABI::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem3

#endif // ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Store {
                namespace Preview {
                    namespace InstallControl {
                        interface IAppInstallManager;
                    } /* Windows */
                } /* ApplicationModel */
            } /* Store */
        } /* Preview */
    } /* InstallControl */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager ABI::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager

#endif // ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager2_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Store {
                namespace Preview {
                    namespace InstallControl {
                        interface IAppInstallManager2;
                    } /* Windows */
                } /* ApplicationModel */
            } /* Store */
        } /* Preview */
    } /* InstallControl */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager2 ABI::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager2

#endif // ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager3_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager3_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Store {
                namespace Preview {
                    namespace InstallControl {
                        interface IAppInstallManager3;
                    } /* Windows */
                } /* ApplicationModel */
            } /* Store */
        } /* Preview */
    } /* InstallControl */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager3 ABI::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager3

#endif // ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager4_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager4_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Store {
                namespace Preview {
                    namespace InstallControl {
                        interface IAppInstallManager4;
                    } /* Windows */
                } /* ApplicationModel */
            } /* Store */
        } /* Preview */
    } /* InstallControl */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager4 ABI::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager4

#endif // ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager4_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager5_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager5_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Store {
                namespace Preview {
                    namespace InstallControl {
                        interface IAppInstallManager5;
                    } /* Windows */
                } /* ApplicationModel */
            } /* Store */
        } /* Preview */
    } /* InstallControl */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager5 ABI::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager5

#endif // ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager5_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManagerItemEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManagerItemEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Store {
                namespace Preview {
                    namespace InstallControl {
                        interface IAppInstallManagerItemEventArgs;
                    } /* Windows */
                } /* ApplicationModel */
            } /* Store */
        } /* Preview */
    } /* InstallControl */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManagerItemEventArgs ABI::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManagerItemEventArgs

#endif // ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManagerItemEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallStatus_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallStatus_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Store {
                namespace Preview {
                    namespace InstallControl {
                        interface IAppInstallStatus;
                    } /* Windows */
                } /* ApplicationModel */
            } /* Store */
        } /* Preview */
    } /* InstallControl */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallStatus ABI::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallStatus

#endif // ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallStatus_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallStatus2_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallStatus2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Store {
                namespace Preview {
                    namespace InstallControl {
                        interface IAppInstallStatus2;
                    } /* Windows */
                } /* ApplicationModel */
            } /* Store */
        } /* Preview */
    } /* InstallControl */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallStatus2 ABI::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallStatus2

#endif // ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallStatus2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIGetEntitlementResult_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIGetEntitlementResult_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Store {
                namespace Preview {
                    namespace InstallControl {
                        interface IGetEntitlementResult;
                    } /* Windows */
                } /* ApplicationModel */
            } /* Store */
        } /* Preview */
    } /* InstallControl */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIGetEntitlementResult ABI::Windows::ApplicationModel::Store::Preview::InstallControl::IGetEntitlementResult

#endif // ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIGetEntitlementResult_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Store {
                namespace Preview {
                    namespace InstallControl {
                        class AppInstallItem;
                    } /* Windows */
                } /* ApplicationModel */
            } /* Store */
        } /* Preview */
    } /* InstallControl */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem_USE
#define DEF___FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("ccaca81b-6cf7-56f0-b7ff-8ac5191e79bf"))
IIterator<ABI::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem*, ABI::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.ApplicationModel.Store.Preview.InstallControl.AppInstallItem>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem*> __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem_t;
#define __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem*>
//#define __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem_USE
#define DEF___FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("93e1cdc8-503f-55b1-915b-c0dc7888ce31"))
IIterable<ABI::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem*, ABI::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.ApplicationModel.Store.Preview.InstallControl.AppInstallItem>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem*> __FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem_t;
#define __FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem*>
//#define __FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem_USE
#define DEF___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("48d7f874-a83c-55db-b2e6-940be9569869"))
IVectorView<ABI::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem*, ABI::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.ApplicationModel.Store.Preview.InstallControl.AppInstallItem>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem*> __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem_t;
#define __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem*>
//#define __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("a85c1ceb-0e8c-5422-b2ef-ad48ed338706"))
IAsyncOperationCompletedHandler<ABI::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem*, ABI::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.ApplicationModel.Store.Preview.InstallControl.AppInstallItem>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem*> __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem_USE
#define DEF___FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("83b51cbf-35e0-59ad-ab3e-ffb3f03704f9"))
IAsyncOperation<ABI::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem*, ABI::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.ApplicationModel.Store.Preview.InstallControl.AppInstallItem>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem*> __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem_t;
#define __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem*>
//#define __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Store {
                namespace Preview {
                    namespace InstallControl {
                        class GetEntitlementResult;
                    } /* Windows */
                } /* ApplicationModel */
            } /* Store */
        } /* Preview */
    } /* InstallControl */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CGetEntitlementResult_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CGetEntitlementResult_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("62559e90-1c0a-5708-9230-03a658652db3"))
IAsyncOperationCompletedHandler<ABI::Windows::ApplicationModel::Store::Preview::InstallControl::GetEntitlementResult*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Store::Preview::InstallControl::GetEntitlementResult*, ABI::Windows::ApplicationModel::Store::Preview::InstallControl::IGetEntitlementResult*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.ApplicationModel.Store.Preview.InstallControl.GetEntitlementResult>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::ApplicationModel::Store::Preview::InstallControl::GetEntitlementResult*> __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CGetEntitlementResult_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CGetEntitlementResult ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CGetEntitlementResult_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CGetEntitlementResult ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::ApplicationModel::Store::Preview::InstallControl::IGetEntitlementResult*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CGetEntitlementResult_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::ApplicationModel::Store::Preview::InstallControl::IGetEntitlementResult*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CGetEntitlementResult_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef DEF___FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CGetEntitlementResult_USE
#define DEF___FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CGetEntitlementResult_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("4c24d7ee-4b92-5cea-a4f4-7a5d6e919062"))
IAsyncOperation<ABI::Windows::ApplicationModel::Store::Preview::InstallControl::GetEntitlementResult*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Store::Preview::InstallControl::GetEntitlementResult*, ABI::Windows::ApplicationModel::Store::Preview::InstallControl::IGetEntitlementResult*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.ApplicationModel.Store.Preview.InstallControl.GetEntitlementResult>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::ApplicationModel::Store::Preview::InstallControl::GetEntitlementResult*> __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CGetEntitlementResult_t;
#define __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CGetEntitlementResult ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CGetEntitlementResult_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CGetEntitlementResult ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::ApplicationModel::Store::Preview::InstallControl::IGetEntitlementResult*>
//#define __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CGetEntitlementResult_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::ApplicationModel::Store::Preview::InstallControl::IGetEntitlementResult*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CGetEntitlementResult_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem_USE
#define DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("f92bfe4e-cf96-54cf-ab89-388ca004b5a9"))
IAsyncOperationCompletedHandler<__FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem*> : IAsyncOperationCompletedHandler_impl<__FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Foundation.Collections.IVectorView`1<Windows.ApplicationModel.Store.Preview.InstallControl.AppInstallItem>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<__FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem*> __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem_t;
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem*>*>
//#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem_USE
#define DEF___FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("9267e107-2ac6-5e0d-86e9-3154f616c68b"))
IAsyncOperation<__FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem*> : IAsyncOperation_impl<__FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Foundation.Collections.IVectorView`1<Windows.ApplicationModel.Store.Preview.InstallControl.AppInstallItem>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<__FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem*> __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem_t;
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem ABI::Windows::Foundation::__FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem*>*>
//#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem_IInspectable_USE
#define DEF___FITypedEventHandler_2_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("92730467-501e-5b05-8826-926f86925b03"))
ITypedEventHandler<ABI::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem*,IInspectable*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem*, ABI::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem*>,IInspectable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.ApplicationModel.Store.Preview.InstallControl.AppInstallItem, Object>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem*,IInspectable*> __FITypedEventHandler_2_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem_IInspectable_t;
#define __FITypedEventHandler_2_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem_IInspectable ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem_IInspectable_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem_IInspectable ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem*,IInspectable*>
//#define __FITypedEventHandler_2_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem_IInspectable_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem*,IInspectable*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem_IInspectable_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Store {
                namespace Preview {
                    namespace InstallControl {
                        class AppInstallManager;
                    } /* Windows */
                } /* ApplicationModel */
            } /* Store */
        } /* Preview */
    } /* InstallControl */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Store {
                namespace Preview {
                    namespace InstallControl {
                        class AppInstallManagerItemEventArgs;
                    } /* Windows */
                } /* ApplicationModel */
            } /* Store */
        } /* Preview */
    } /* InstallControl */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallManager_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallManagerItemEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallManager_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallManagerItemEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("abf1c837-dacd-5446-a032-3ee902880244"))
ITypedEventHandler<ABI::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallManager*,ABI::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallManagerItemEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallManager*, ABI::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallManagerItemEventArgs*, ABI::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManagerItemEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.ApplicationModel.Store.Preview.InstallControl.AppInstallManager, Windows.ApplicationModel.Store.Preview.InstallControl.AppInstallManagerItemEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallManager*,ABI::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallManagerItemEventArgs*> __FITypedEventHandler_2_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallManager_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallManagerItemEventArgs_t;
#define __FITypedEventHandler_2_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallManager_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallManagerItemEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallManager_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallManagerItemEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallManager_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallManagerItemEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager*,ABI::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManagerItemEventArgs*>
//#define __FITypedEventHandler_2_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallManager_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallManagerItemEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager*,ABI::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManagerItemEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallManager_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallManagerItemEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#ifndef DEF___FIAsyncOperationCompletedHandler_1_boolean_USE
#define DEF___FIAsyncOperationCompletedHandler_1_boolean_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("c1d3d1a2-ae17-5a5f-b5a2-bdcc8844889a"))
IAsyncOperationCompletedHandler<bool> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<bool, boolean>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Boolean>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<bool> __FIAsyncOperationCompletedHandler_1_boolean_t;
#define __FIAsyncOperationCompletedHandler_1_boolean ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_boolean_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_boolean ABI::Windows::Foundation::IAsyncOperationCompletedHandler<boolean>
//#define __FIAsyncOperationCompletedHandler_1_boolean_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<boolean>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_boolean_USE */




#ifndef DEF___FIAsyncOperation_1_boolean_USE
#define DEF___FIAsyncOperation_1_boolean_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("cdb5efb3-5788-509d-9be1-71ccb8a3362a"))
IAsyncOperation<bool> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<bool, boolean>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Boolean>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<bool> __FIAsyncOperation_1_boolean_t;
#define __FIAsyncOperation_1_boolean ABI::Windows::Foundation::__FIAsyncOperation_1_boolean_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_boolean ABI::Windows::Foundation::IAsyncOperation<boolean>
//#define __FIAsyncOperation_1_boolean_t ABI::Windows::Foundation::IAsyncOperation<boolean>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_boolean_USE */








namespace ABI {
    namespace Windows {
        namespace Management {
            namespace Deployment {
                class PackageVolume;
            } /* Windows */
        } /* Management */
    } /* Deployment */} /* ABI */

#ifndef ____x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume_FWD_DEFINED__
#define ____x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Management {
            namespace Deployment {
                interface IPackageVolume;
            } /* Windows */
        } /* Management */
    } /* Deployment */} /* ABI */
#define __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume ABI::Windows::Management::Deployment::IPackageVolume

#endif // ____x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume_FWD_DEFINED__





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
        namespace ApplicationModel {
            namespace Store {
                namespace Preview {
                    namespace InstallControl {
                        
                        typedef enum AppInstallState : int AppInstallState;
                        
                    } /* Windows */
                } /* ApplicationModel */
            } /* Store */
        } /* Preview */
    } /* InstallControl */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Store {
                namespace Preview {
                    namespace InstallControl {
                        
                        typedef enum AppInstallType : int AppInstallType;
                        
                    } /* Windows */
                } /* ApplicationModel */
            } /* Store */
        } /* Preview */
    } /* InstallControl */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Store {
                namespace Preview {
                    namespace InstallControl {
                        
                        typedef enum AutoUpdateSetting : int AutoUpdateSetting;
                        
                    } /* Windows */
                } /* ApplicationModel */
            } /* Store */
        } /* Preview */
    } /* InstallControl */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Store {
                namespace Preview {
                    namespace InstallControl {
                        
                        typedef enum GetEntitlementStatus : int GetEntitlementStatus;
                        
                    } /* Windows */
                } /* ApplicationModel */
            } /* Store */
        } /* Preview */
    } /* InstallControl */} /* ABI */
















namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Store {
                namespace Preview {
                    namespace InstallControl {
                        class AppInstallStatus;
                    } /* Windows */
                } /* ApplicationModel */
            } /* Store */
        } /* Preview */
    } /* InstallControl */} /* ABI */















/*
 *
 * Struct Windows.ApplicationModel.Store.Preview.InstallControl.AppInstallState
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Store {
                namespace Preview {
                    namespace InstallControl {
                        /* [v1_enum, contract] */
                        enum AppInstallState : int
                        {
                            AppInstallState_Pending = 0,
                            AppInstallState_Starting = 1,
                            AppInstallState_AcquiringLicense = 2,
                            AppInstallState_Downloading = 3,
                            AppInstallState_RestoringData = 4,
                            AppInstallState_Installing = 5,
                            AppInstallState_Completed = 6,
                            AppInstallState_Canceled = 7,
                            AppInstallState_Paused = 8,
                            AppInstallState_Error = 9,
                            AppInstallState_PausedLowBattery = 10,
                            AppInstallState_PausedWiFiRecommended = 11,
                            AppInstallState_PausedWiFiRequired = 12,
                            AppInstallState_ReadyToDownload = 13,
                        };
                        
                    } /* Windows */
                } /* ApplicationModel */
            } /* Store */
        } /* Preview */
    } /* InstallControl */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.ApplicationModel.Store.Preview.InstallControl.AppInstallType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Store {
                namespace Preview {
                    namespace InstallControl {
                        /* [v1_enum, contract] */
                        enum AppInstallType : int
                        {
                            AppInstallType_Install = 0,
                            AppInstallType_Update = 1,
                            AppInstallType_Repair = 2,
                        };
                        
                    } /* Windows */
                } /* ApplicationModel */
            } /* Store */
        } /* Preview */
    } /* InstallControl */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.ApplicationModel.Store.Preview.InstallControl.AutoUpdateSetting
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Store {
                namespace Preview {
                    namespace InstallControl {
                        /* [v1_enum, contract] */
                        enum AutoUpdateSetting : int
                        {
                            AutoUpdateSetting_Disabled = 0,
                            AutoUpdateSetting_Enabled = 1,
                            AutoUpdateSetting_DisabledByPolicy = 2,
                            AutoUpdateSetting_EnabledByPolicy = 3,
                        };
                        
                    } /* Windows */
                } /* ApplicationModel */
            } /* Store */
        } /* Preview */
    } /* InstallControl */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.ApplicationModel.Store.Preview.InstallControl.GetEntitlementStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Store {
                namespace Preview {
                    namespace InstallControl {
                        /* [v1_enum, contract] */
                        enum GetEntitlementStatus : int
                        {
                            GetEntitlementStatus_Succeeded = 0,
                            GetEntitlementStatus_NoStoreAccount = 1,
                            GetEntitlementStatus_NetworkError = 2,
                            GetEntitlementStatus_ServerError = 3,
                        };
                        
                    } /* Windows */
                } /* ApplicationModel */
            } /* Store */
        } /* Preview */
    } /* InstallControl */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.ApplicationModel.Store.Preview.InstallControl.IAppInstallItem
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Store.Preview.InstallControl.AppInstallItem
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallItem[] = L"Windows.ApplicationModel.Store.Preview.InstallControl.IAppInstallItem";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Store {
                namespace Preview {
                    namespace InstallControl {
                        /* [object, uuid("49D3DFAB-168A-4CBF-A93A-9E448C82737D"), exclusiveto, contract] */
                        MIDL_INTERFACE("49D3DFAB-168A-4CBF-A93A-9E448C82737D")
                        IAppInstallItem : IInspectable
                        {
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ProductId(
                                /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PackageFamilyName(
                                /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_InstallType(
                                /* [retval, out] */__RPC__out ABI::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallType * value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsUserInitiated(
                                /* [retval, out] */__RPC__out boolean * value
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE GetCurrentStatus(
                                /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallStatus * * result
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE Cancel(void) = 0;
                            virtual HRESULT STDMETHODCALLTYPE Pause(void) = 0;
                            virtual HRESULT STDMETHODCALLTYPE Restart(void) = 0;
                            /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_Completed(
                                /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem_IInspectable * handler,
                                /* [retval, out] */__RPC__out EventRegistrationToken * token
                                ) = 0;
                            /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_Completed(
                                /* [in] */EventRegistrationToken token
                                ) = 0;
                            /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_StatusChanged(
                                /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem_IInspectable * handler,
                                /* [retval, out] */__RPC__out EventRegistrationToken * token
                                ) = 0;
                            /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_StatusChanged(
                                /* [in] */EventRegistrationToken token
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_IAppInstallItem=_uuidof(IAppInstallItem);
                        
                    } /* Windows */
                } /* ApplicationModel */
            } /* Store */
        } /* Preview */
    } /* InstallControl */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Store.Preview.InstallControl.IAppInstallItem2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Store.Preview.InstallControl.AppInstallItem
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallItem2[] = L"Windows.ApplicationModel.Store.Preview.InstallControl.IAppInstallItem2";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Store {
                namespace Preview {
                    namespace InstallControl {
                        /* [object, uuid("D3972AF8-40C0-4FD7-AA6C-0AA13CA6188C"), exclusiveto, contract] */
                        MIDL_INTERFACE("D3972AF8-40C0-4FD7-AA6C-0AA13CA6188C")
                        IAppInstallItem2 : IInspectable
                        {
                            /* [overload] */virtual HRESULT STDMETHODCALLTYPE CancelWithTelemetry(
                                /* [in] */__RPC__in HSTRING correlationVector
                                ) = 0;
                            /* [overload] */virtual HRESULT STDMETHODCALLTYPE PauseWithTelemetry(
                                /* [in] */__RPC__in HSTRING correlationVector
                                ) = 0;
                            /* [overload] */virtual HRESULT STDMETHODCALLTYPE RestartWithTelemetry(
                                /* [in] */__RPC__in HSTRING correlationVector
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_IAppInstallItem2=_uuidof(IAppInstallItem2);
                        
                    } /* Windows */
                } /* ApplicationModel */
            } /* Store */
        } /* Preview */
    } /* InstallControl */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem2;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.ApplicationModel.Store.Preview.InstallControl.IAppInstallItem3
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Store.Preview.InstallControl.AppInstallItem
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallItem3[] = L"Windows.ApplicationModel.Store.Preview.InstallControl.IAppInstallItem3";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Store {
                namespace Preview {
                    namespace InstallControl {
                        /* [object, uuid("6F3DC998-DD47-433C-9234-560172D67A45"), exclusiveto, contract] */
                        MIDL_INTERFACE("6F3DC998-DD47-433C-9234-560172D67A45")
                        IAppInstallItem3 : IInspectable
                        {
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Children(
                                /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem * * value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ItemOperationsMightAffectOtherItems(
                                /* [retval, out] */__RPC__out boolean * value
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_IAppInstallItem3=_uuidof(IAppInstallItem3);
                        
                    } /* Windows */
                } /* ApplicationModel */
            } /* Store */
        } /* Preview */
    } /* InstallControl */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem3;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem3_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.ApplicationModel.Store.Preview.InstallControl.IAppInstallManager
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Store.Preview.InstallControl.AppInstallManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallManager[] = L"Windows.ApplicationModel.Store.Preview.InstallControl.IAppInstallManager";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Store {
                namespace Preview {
                    namespace InstallControl {
                        /* [object, uuid("9353E170-8441-4B45-BD72-7C2FA925BEEE"), exclusiveto, contract] */
                        MIDL_INTERFACE("9353E170-8441-4B45-BD72-7C2FA925BEEE")
                        IAppInstallManager : IInspectable
                        {
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AppInstallItems(
                                /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem * * value
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE Cancel(
                                /* [in] */__RPC__in HSTRING productId
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE Pause(
                                /* [in] */__RPC__in HSTRING productId
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE Restart(
                                /* [in] */__RPC__in HSTRING productId
                                ) = 0;
                            /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_ItemCompleted(
                                /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallManager_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallManagerItemEventArgs * handler,
                                /* [retval, out] */__RPC__out EventRegistrationToken * token
                                ) = 0;
                            /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_ItemCompleted(
                                /* [in] */EventRegistrationToken token
                                ) = 0;
                            /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_ItemStatusChanged(
                                /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallManager_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallManagerItemEventArgs * handler,
                                /* [retval, out] */__RPC__out EventRegistrationToken * token
                                ) = 0;
                            /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_ItemStatusChanged(
                                /* [in] */EventRegistrationToken token
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AutoUpdateSetting(
                                /* [retval, out] */__RPC__out ABI::Windows::ApplicationModel::Store::Preview::InstallControl::AutoUpdateSetting * value
                                ) = 0;
                            /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_AutoUpdateSetting(
                                /* [in] */ABI::Windows::ApplicationModel::Store::Preview::InstallControl::AutoUpdateSetting value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AcquisitionIdentity(
                                /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                                ) = 0;
                            /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_AcquisitionIdentity(
                                /* [in] */__RPC__in HSTRING value
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE GetIsApplicableAsync(
                                /* [in] */__RPC__in HSTRING productId,
                                /* [in] */__RPC__in HSTRING skuId,
                                /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE StartAppInstallAsync(
                                /* [in] */__RPC__in HSTRING productId,
                                /* [in] */__RPC__in HSTRING skuId,
                                /* [in] */boolean repair,
                                /* [in] */boolean forceUseOfNonRemovableStorage,
                                /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem * * operation
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE UpdateAppByPackageFamilyNameAsync(
                                /* [in] */__RPC__in HSTRING packageFamilyName,
                                /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem * * operation
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE SearchForUpdatesAsync(
                                /* [in] */__RPC__in HSTRING productId,
                                /* [in] */__RPC__in HSTRING skuId,
                                /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem * * operation
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE SearchForAllUpdatesAsync(
                                /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem * * operation
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE IsStoreBlockedByPolicyAsync(
                                /* [in] */__RPC__in HSTRING storeClientName,
                                /* [in] */__RPC__in HSTRING storeClientPublisher,
                                /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE GetIsAppAllowedToInstallAsync(
                                /* [in] */__RPC__in HSTRING productId,
                                /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_IAppInstallManager=_uuidof(IAppInstallManager);
                        
                    } /* Windows */
                } /* ApplicationModel */
            } /* Store */
        } /* Preview */
    } /* InstallControl */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Store.Preview.InstallControl.IAppInstallManager2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Store.Preview.InstallControl.AppInstallManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallManager2[] = L"Windows.ApplicationModel.Store.Preview.InstallControl.IAppInstallManager2";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Store {
                namespace Preview {
                    namespace InstallControl {
                        /* [object, uuid("16937851-ED37-480D-8314-52E27C03F04A"), exclusiveto, contract] */
                        MIDL_INTERFACE("16937851-ED37-480D-8314-52E27C03F04A")
                        IAppInstallManager2 : IInspectable
                        {
                            /* [overload] */virtual HRESULT STDMETHODCALLTYPE StartAppInstallWithTelemetryAsync(
                                /* [in] */__RPC__in HSTRING productId,
                                /* [in] */__RPC__in HSTRING skuId,
                                /* [in] */boolean repair,
                                /* [in] */boolean forceUseOfNonRemovableStorage,
                                /* [in] */__RPC__in HSTRING catalogId,
                                /* [in] */__RPC__in HSTRING bundleId,
                                /* [in] */__RPC__in HSTRING correlationVector,
                                /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem * * operation
                                ) = 0;
                            /* [overload] */virtual HRESULT STDMETHODCALLTYPE UpdateAppByPackageFamilyNameWithTelemetryAsync(
                                /* [in] */__RPC__in HSTRING packageFamilyName,
                                /* [in] */__RPC__in HSTRING correlationVector,
                                /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem * * operation
                                ) = 0;
                            /* [overload] */virtual HRESULT STDMETHODCALLTYPE SearchForUpdatesWithTelemetryAsync(
                                /* [in] */__RPC__in HSTRING productId,
                                /* [in] */__RPC__in HSTRING skuId,
                                /* [in] */__RPC__in HSTRING catalogId,
                                /* [in] */__RPC__in HSTRING correlationVector,
                                /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem * * operation
                                ) = 0;
                            /* [overload] */virtual HRESULT STDMETHODCALLTYPE SearchForAllUpdatesWithTelemetryAsync(
                                /* [in] */__RPC__in HSTRING correlationVector,
                                /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem * * operation
                                ) = 0;
                            /* [overload] */virtual HRESULT STDMETHODCALLTYPE GetIsAppAllowedToInstallWithTelemetryAsync(
                                /* [in] */__RPC__in HSTRING productId,
                                /* [in] */__RPC__in HSTRING skuId,
                                /* [in] */__RPC__in HSTRING catalogId,
                                /* [in] */__RPC__in HSTRING correlationVector,
                                /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
                                ) = 0;
                            /* [overload] */virtual HRESULT STDMETHODCALLTYPE CancelWithTelemetry(
                                /* [in] */__RPC__in HSTRING productId,
                                /* [in] */__RPC__in HSTRING correlationVector
                                ) = 0;
                            /* [overload] */virtual HRESULT STDMETHODCALLTYPE PauseWithTelemetry(
                                /* [in] */__RPC__in HSTRING productId,
                                /* [in] */__RPC__in HSTRING correlationVector
                                ) = 0;
                            /* [overload] */virtual HRESULT STDMETHODCALLTYPE RestartWithTelemetry(
                                /* [in] */__RPC__in HSTRING productId,
                                /* [in] */__RPC__in HSTRING correlationVector
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_IAppInstallManager2=_uuidof(IAppInstallManager2);
                        
                    } /* Windows */
                } /* ApplicationModel */
            } /* Store */
        } /* Preview */
    } /* InstallControl */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager2;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.ApplicationModel.Store.Preview.InstallControl.IAppInstallManager3
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Store.Preview.InstallControl.AppInstallManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallManager3[] = L"Windows.ApplicationModel.Store.Preview.InstallControl.IAppInstallManager3";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Store {
                namespace Preview {
                    namespace InstallControl {
                        /* [object, uuid("95B24B17-E96A-4D0E-84E1-C8CB417A0178"), exclusiveto, contract] */
                        MIDL_INTERFACE("95B24B17-E96A-4D0E-84E1-C8CB417A0178")
                        IAppInstallManager3 : IInspectable
                        {
                            virtual HRESULT STDMETHODCALLTYPE StartProductInstallAsync(
                                /* [in] */__RPC__in HSTRING productId,
                                /* [in] */__RPC__in HSTRING catalogId,
                                /* [in] */__RPC__in HSTRING flightId,
                                /* [in] */__RPC__in HSTRING clientId,
                                /* [in] */boolean repair,
                                /* [in] */boolean forceUseOfNonRemovableStorage,
                                /* [in] */__RPC__in HSTRING correlationVector,
                                /* [in] */__RPC__in_opt ABI::Windows::Management::Deployment::IPackageVolume * targetVolume,
                                /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem * * operation
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE StartProductInstallForUserAsync(
                                /* [in] */__RPC__in_opt ABI::Windows::System::IUser * user,
                                /* [in] */__RPC__in HSTRING productId,
                                /* [in] */__RPC__in HSTRING catalogId,
                                /* [in] */__RPC__in HSTRING flightId,
                                /* [in] */__RPC__in HSTRING clientId,
                                /* [in] */boolean repair,
                                /* [in] */boolean forceUseOfNonRemovableStorage,
                                /* [in] */__RPC__in HSTRING correlationVector,
                                /* [in] */__RPC__in_opt ABI::Windows::Management::Deployment::IPackageVolume * targetVolume,
                                /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem * * operation
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE UpdateAppByPackageFamilyNameForUserAsync(
                                /* [in] */__RPC__in_opt ABI::Windows::System::IUser * user,
                                /* [in] */__RPC__in HSTRING packageFamilyName,
                                /* [in] */__RPC__in HSTRING correlationVector,
                                /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem * * operation
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE SearchForUpdatesForUserAsync(
                                /* [in] */__RPC__in_opt ABI::Windows::System::IUser * user,
                                /* [in] */__RPC__in HSTRING productId,
                                /* [in] */__RPC__in HSTRING skuId,
                                /* [in] */__RPC__in HSTRING catalogId,
                                /* [in] */__RPC__in HSTRING correlationVector,
                                /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem * * operation
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE SearchForAllUpdatesForUserAsync(
                                /* [in] */__RPC__in_opt ABI::Windows::System::IUser * user,
                                /* [in] */__RPC__in HSTRING correlationVector,
                                /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem * * operation
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE GetIsAppAllowedToInstallForUserAsync(
                                /* [in] */__RPC__in_opt ABI::Windows::System::IUser * user,
                                /* [in] */__RPC__in HSTRING productId,
                                /* [in] */__RPC__in HSTRING skuId,
                                /* [in] */__RPC__in HSTRING catalogId,
                                /* [in] */__RPC__in HSTRING correlationVector,
                                /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE GetIsApplicableForUserAsync(
                                /* [in] */__RPC__in_opt ABI::Windows::System::IUser * user,
                                /* [in] */__RPC__in HSTRING productId,
                                /* [in] */__RPC__in HSTRING skuId,
                                /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE MoveToFrontOfDownloadQueue(
                                /* [in] */__RPC__in HSTRING productId,
                                /* [in] */__RPC__in HSTRING correlationVector
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_IAppInstallManager3=_uuidof(IAppInstallManager3);
                        
                    } /* Windows */
                } /* ApplicationModel */
            } /* Store */
        } /* Preview */
    } /* InstallControl */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager3;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager3_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.Store.Preview.InstallControl.IAppInstallManager4
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Store.Preview.InstallControl.AppInstallManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager4_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager4_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallManager4[] = L"Windows.ApplicationModel.Store.Preview.InstallControl.IAppInstallManager4";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Store {
                namespace Preview {
                    namespace InstallControl {
                        /* [object, uuid("260A2A16-5A9E-4EBD-B944-F2BA75C31159"), exclusiveto, contract] */
                        MIDL_INTERFACE("260A2A16-5A9E-4EBD-B944-F2BA75C31159")
                        IAppInstallManager4 : IInspectable
                        {
                            virtual HRESULT STDMETHODCALLTYPE GetFreeUserEntitlementAsync(
                                /* [in] */__RPC__in HSTRING storeId,
                                /* [in] */__RPC__in HSTRING campaignId,
                                /* [in] */__RPC__in HSTRING correlationVector,
                                /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CGetEntitlementResult * * ppAsyncOperation
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE GetFreeUserEntitlementForUserAsync(
                                /* [in] */__RPC__in_opt ABI::Windows::System::IUser * user,
                                /* [in] */__RPC__in HSTRING storeId,
                                /* [in] */__RPC__in HSTRING campaignId,
                                /* [in] */__RPC__in HSTRING correlationVector,
                                /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CGetEntitlementResult * * ppAsyncOperation
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE GetFreeDeviceEntitlementAsync(
                                /* [in] */__RPC__in HSTRING storeId,
                                /* [in] */__RPC__in HSTRING campaignId,
                                /* [in] */__RPC__in HSTRING correlationVector,
                                /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CGetEntitlementResult * * ppAsyncOperation
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_IAppInstallManager4=_uuidof(IAppInstallManager4);
                        
                    } /* Windows */
                } /* ApplicationModel */
            } /* Store */
        } /* Preview */
    } /* InstallControl */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager4;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager4_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.ApplicationModel.Store.Preview.InstallControl.IAppInstallManager5
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Store.Preview.InstallControl.AppInstallManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager5_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager5_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallManager5[] = L"Windows.ApplicationModel.Store.Preview.InstallControl.IAppInstallManager5";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Store {
                namespace Preview {
                    namespace InstallControl {
                        /* [object, uuid("3CD7BE4C-1BE9-4F7F-B675-AA1D64A529B2"), exclusiveto, contract] */
                        MIDL_INTERFACE("3CD7BE4C-1BE9-4F7F-B675-AA1D64A529B2")
                        IAppInstallManager5 : IInspectable
                        {
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AppInstallItemsWithGroupSupport(
                                /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem * * value
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_IAppInstallManager5=_uuidof(IAppInstallManager5);
                        
                    } /* Windows */
                } /* ApplicationModel */
            } /* Store */
        } /* Preview */
    } /* InstallControl */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager5;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager5_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.ApplicationModel.Store.Preview.InstallControl.IAppInstallManagerItemEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Store.Preview.InstallControl.AppInstallManagerItemEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManagerItemEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManagerItemEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallManagerItemEventArgs[] = L"Windows.ApplicationModel.Store.Preview.InstallControl.IAppInstallManagerItemEventArgs";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Store {
                namespace Preview {
                    namespace InstallControl {
                        /* [object, uuid("BC505743-4674-4DD1-957E-C25682086A14"), exclusiveto, contract] */
                        MIDL_INTERFACE("BC505743-4674-4DD1-957E-C25682086A14")
                        IAppInstallManagerItemEventArgs : IInspectable
                        {
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Item(
                                /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem * * value
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_IAppInstallManagerItemEventArgs=_uuidof(IAppInstallManagerItemEventArgs);
                        
                    } /* Windows */
                } /* ApplicationModel */
            } /* Store */
        } /* Preview */
    } /* InstallControl */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManagerItemEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManagerItemEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Store.Preview.InstallControl.IAppInstallStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Store.Preview.InstallControl.AppInstallStatus
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallStatus_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallStatus_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallStatus[] = L"Windows.ApplicationModel.Store.Preview.InstallControl.IAppInstallStatus";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Store {
                namespace Preview {
                    namespace InstallControl {
                        /* [object, uuid("936DCCFA-2450-4126-88B1-6127A644DD5C"), exclusiveto, contract] */
                        MIDL_INTERFACE("936DCCFA-2450-4126-88B1-6127A644DD5C")
                        IAppInstallStatus : IInspectable
                        {
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_InstallState(
                                /* [retval, out] */__RPC__out ABI::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallState * value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DownloadSizeInBytes(
                                /* [retval, out] */__RPC__out UINT64 * value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_BytesDownloaded(
                                /* [retval, out] */__RPC__out UINT64 * value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PercentComplete(
                                /* [retval, out] */__RPC__out DOUBLE * value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ErrorCode(
                                /* [retval, out] */__RPC__out HRESULT * value
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_IAppInstallStatus=_uuidof(IAppInstallStatus);
                        
                    } /* Windows */
                } /* ApplicationModel */
            } /* Store */
        } /* Preview */
    } /* InstallControl */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallStatus;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallStatus_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Store.Preview.InstallControl.IAppInstallStatus2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Store.Preview.InstallControl.AppInstallStatus
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallStatus2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallStatus2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallStatus2[] = L"Windows.ApplicationModel.Store.Preview.InstallControl.IAppInstallStatus2";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Store {
                namespace Preview {
                    namespace InstallControl {
                        /* [object, uuid("96E7818A-5E92-4AA9-8EDC-58FED4B87E00"), exclusiveto, contract] */
                        MIDL_INTERFACE("96E7818A-5E92-4AA9-8EDC-58FED4B87E00")
                        IAppInstallStatus2 : IInspectable
                        {
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_User(
                                /* [retval, out] */__RPC__deref_out_opt ABI::Windows::System::IUser * * value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ReadyForLaunch(
                                /* [retval, out] */__RPC__out boolean * value
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_IAppInstallStatus2=_uuidof(IAppInstallStatus2);
                        
                    } /* Windows */
                } /* ApplicationModel */
            } /* Store */
        } /* Preview */
    } /* InstallControl */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallStatus2;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallStatus2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.Store.Preview.InstallControl.IGetEntitlementResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Store.Preview.InstallControl.GetEntitlementResult
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIGetEntitlementResult_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIGetEntitlementResult_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Store_Preview_InstallControl_IGetEntitlementResult[] = L"Windows.ApplicationModel.Store.Preview.InstallControl.IGetEntitlementResult";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Store {
                namespace Preview {
                    namespace InstallControl {
                        /* [object, uuid("74FC843F-1A9E-4609-8E4D-819086D08A3D"), exclusiveto, contract] */
                        MIDL_INTERFACE("74FC843F-1A9E-4609-8E4D-819086D08A3D")
                        IGetEntitlementResult : IInspectable
                        {
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Status(
                                /* [retval, out] */__RPC__out ABI::Windows::ApplicationModel::Store::Preview::InstallControl::GetEntitlementStatus * value
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_IGetEntitlementResult=_uuidof(IGetEntitlementResult);
                        
                    } /* Windows */
                } /* ApplicationModel */
            } /* Store */
        } /* Preview */
    } /* InstallControl */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIGetEntitlementResult;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIGetEntitlementResult_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.ApplicationModel.Store.Preview.InstallControl.AppInstallItem
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Store.Preview.InstallControl.IAppInstallItem ** Default Interface **
 *    Windows.ApplicationModel.Store.Preview.InstallControl.IAppInstallItem2
 *    Windows.ApplicationModel.Store.Preview.InstallControl.IAppInstallItem3
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Store_Preview_InstallControl_AppInstallItem_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Store_Preview_InstallControl_AppInstallItem_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Store_Preview_InstallControl_AppInstallItem[] = L"Windows.ApplicationModel.Store.Preview.InstallControl.AppInstallItem";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Store.Preview.InstallControl.AppInstallManager
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Store.Preview.InstallControl.IAppInstallManager ** Default Interface **
 *    Windows.ApplicationModel.Store.Preview.InstallControl.IAppInstallManager2
 *    Windows.ApplicationModel.Store.Preview.InstallControl.IAppInstallManager3
 *    Windows.ApplicationModel.Store.Preview.InstallControl.IAppInstallManager4
 *    Windows.ApplicationModel.Store.Preview.InstallControl.IAppInstallManager5
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Store_Preview_InstallControl_AppInstallManager_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Store_Preview_InstallControl_AppInstallManager_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Store_Preview_InstallControl_AppInstallManager[] = L"Windows.ApplicationModel.Store.Preview.InstallControl.AppInstallManager";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Store.Preview.InstallControl.AppInstallManagerItemEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Store.Preview.InstallControl.IAppInstallManagerItemEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Store_Preview_InstallControl_AppInstallManagerItemEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Store_Preview_InstallControl_AppInstallManagerItemEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Store_Preview_InstallControl_AppInstallManagerItemEventArgs[] = L"Windows.ApplicationModel.Store.Preview.InstallControl.AppInstallManagerItemEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Store.Preview.InstallControl.AppInstallStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Store.Preview.InstallControl.IAppInstallStatus ** Default Interface **
 *    Windows.ApplicationModel.Store.Preview.InstallControl.IAppInstallStatus2
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Store_Preview_InstallControl_AppInstallStatus_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Store_Preview_InstallControl_AppInstallStatus_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Store_Preview_InstallControl_AppInstallStatus[] = L"Windows.ApplicationModel.Store.Preview.InstallControl.AppInstallStatus";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Store.Preview.InstallControl.GetEntitlementResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Store.Preview.InstallControl.IGetEntitlementResult ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Store_Preview_InstallControl_GetEntitlementResult_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Store_Preview_InstallControl_GetEntitlementResult_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Store_Preview_InstallControl_GetEntitlementResult[] = L"Windows.ApplicationModel.Store.Preview.InstallControl.GetEntitlementResult";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000






#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem;

#endif // ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem2_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem2 __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem2;

#endif // ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem3_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem3_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem3 __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem3;

#endif // ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager;

#endif // ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager2_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager2 __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager2;

#endif // ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager3_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager3_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager3 __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager3;

#endif // ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager4_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager4_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager4 __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager4;

#endif // ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager4_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager5_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager5_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager5 __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager5;

#endif // ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager5_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManagerItemEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManagerItemEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManagerItemEventArgs __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManagerItemEventArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManagerItemEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallStatus_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallStatus_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallStatus __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallStatus;

#endif // ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallStatus_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallStatus2_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallStatus2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallStatus2 __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallStatus2;

#endif // ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallStatus2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIGetEntitlementResult_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIGetEntitlementResult_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIGetEntitlementResult __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIGetEntitlementResult;

#endif // ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIGetEntitlementResult_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem;

typedef struct __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItemVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItemVtbl;

interface __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem
{
    CONST_VTBL struct __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItemVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem __FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem;

typedef  struct __FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItemVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem **first);

    END_INTERFACE
} __FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItemVtbl;

interface __FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem
{
    CONST_VTBL struct __FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItemVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem;

typedef struct __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItemVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem * This,
            /* [in] */ __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItemVtbl;

interface __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem
{
    CONST_VTBL struct __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItemVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItemVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItemVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItemVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem;

typedef struct __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItemVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItemVtbl;

interface __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItemVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CGetEntitlementResult_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CGetEntitlementResult_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CGetEntitlementResult __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CGetEntitlementResult;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CGetEntitlementResult;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CGetEntitlementResult __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CGetEntitlementResult;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CGetEntitlementResultVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CGetEntitlementResult * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CGetEntitlementResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CGetEntitlementResult * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CGetEntitlementResult * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CGetEntitlementResult *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CGetEntitlementResultVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CGetEntitlementResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CGetEntitlementResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CGetEntitlementResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CGetEntitlementResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CGetEntitlementResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CGetEntitlementResult_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CGetEntitlementResult_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CGetEntitlementResult_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CGetEntitlementResult_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CGetEntitlementResult __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CGetEntitlementResult;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CGetEntitlementResult;

typedef struct __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CGetEntitlementResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CGetEntitlementResult * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CGetEntitlementResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CGetEntitlementResult * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CGetEntitlementResult * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CGetEntitlementResult * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CGetEntitlementResult * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CGetEntitlementResult * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CGetEntitlementResult *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CGetEntitlementResult * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CGetEntitlementResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CGetEntitlementResult * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIGetEntitlementResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CGetEntitlementResultVtbl;

interface __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CGetEntitlementResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CGetEntitlementResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CGetEntitlementResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CGetEntitlementResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CGetEntitlementResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CGetEntitlementResult_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CGetEntitlementResult_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CGetEntitlementResult_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CGetEntitlementResult_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CGetEntitlementResult_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CGetEntitlementResult_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CGetEntitlementResult_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem;

typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItemVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItemVtbl;

interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItemVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem;

typedef struct __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItemVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem * This, /* [retval][out] */ __RPC__out __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItemVtbl;

interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItemVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem_IInspectable_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem_IInspectable_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem_IInspectable __FITypedEventHandler_2_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem_IInspectable;

typedef struct __FITypedEventHandler_2_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem_IInspectable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem_IInspectable * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem_IInspectable * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem * sender,/* [in] */ __RPC__in_opt IInspectable * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem_IInspectableVtbl;

interface __FITypedEventHandler_2_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem_IInspectableVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem_IInspectable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem_IInspectable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem_IInspectable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem_IInspectable_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem_IInspectable_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallManager_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallManagerItemEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallManager_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallManagerItemEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallManager_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallManagerItemEventArgs __FITypedEventHandler_2_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallManager_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallManagerItemEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallManager_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallManagerItemEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallManager_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallManagerItemEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallManager_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallManagerItemEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallManager_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallManagerItemEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallManager_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallManagerItemEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallManager_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallManagerItemEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManagerItemEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallManager_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallManagerItemEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallManager_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallManagerItemEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallManager_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallManagerItemEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallManager_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallManagerItemEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallManager_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallManagerItemEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallManager_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallManagerItemEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallManager_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallManagerItemEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallManager_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallManagerItemEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#if !defined(____FIAsyncOperationCompletedHandler_1_boolean_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_boolean_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_boolean __FIAsyncOperationCompletedHandler_1_boolean;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_boolean;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_boolean __FIAsyncOperation_1_boolean;

typedef struct __FIAsyncOperationCompletedHandler_1_booleanVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_boolean * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_boolean * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_boolean * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_boolean * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_boolean *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_booleanVtbl;

interface __FIAsyncOperationCompletedHandler_1_boolean
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_booleanVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_boolean_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_boolean_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_boolean_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_boolean_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_boolean_INTERFACE_DEFINED__


#if !defined(____FIAsyncOperation_1_boolean_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_boolean_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_boolean __FIAsyncOperation_1_boolean;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_boolean;

typedef struct __FIAsyncOperation_1_booleanVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_boolean * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_boolean * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_boolean * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_boolean * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_boolean * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_boolean * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_boolean * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_boolean *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_boolean * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_boolean **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_boolean * This, /* [retval][out] */ __RPC__out boolean *results);
    END_INTERFACE
} __FIAsyncOperation_1_booleanVtbl;

interface __FIAsyncOperation_1_boolean
{
    CONST_VTBL struct __FIAsyncOperation_1_booleanVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_boolean_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_boolean_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_boolean_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_boolean_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_boolean_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_boolean_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_boolean_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_boolean_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_boolean_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_boolean_INTERFACE_DEFINED__






#ifndef ____x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume_FWD_DEFINED__
#define ____x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume;

#endif // ____x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume_FWD_DEFINED__





#ifndef ____x_ABI_CWindows_CSystem_CIUser_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CIUser_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CIUser __x_ABI_CWindows_CSystem_CIUser;

#endif // ____x_ABI_CWindows_CSystem_CIUser_FWD_DEFINED__





typedef enum __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CAppInstallState __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CAppInstallState;


typedef enum __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CAppInstallType __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CAppInstallType;


typedef enum __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CAutoUpdateSetting __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CAutoUpdateSetting;


typedef enum __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CGetEntitlementStatus __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CGetEntitlementStatus;






























/*
 *
 * Struct Windows.ApplicationModel.Store.Preview.InstallControl.AppInstallState
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CAppInstallState
{
    AppInstallState_Pending = 0,
    AppInstallState_Starting = 1,
    AppInstallState_AcquiringLicense = 2,
    AppInstallState_Downloading = 3,
    AppInstallState_RestoringData = 4,
    AppInstallState_Installing = 5,
    AppInstallState_Completed = 6,
    AppInstallState_Canceled = 7,
    AppInstallState_Paused = 8,
    AppInstallState_Error = 9,
    AppInstallState_PausedLowBattery = 10,
    AppInstallState_PausedWiFiRecommended = 11,
    AppInstallState_PausedWiFiRequired = 12,
    AppInstallState_ReadyToDownload = 13,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.ApplicationModel.Store.Preview.InstallControl.AppInstallType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CAppInstallType
{
    AppInstallType_Install = 0,
    AppInstallType_Update = 1,
    AppInstallType_Repair = 2,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.ApplicationModel.Store.Preview.InstallControl.AutoUpdateSetting
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CAutoUpdateSetting
{
    AutoUpdateSetting_Disabled = 0,
    AutoUpdateSetting_Enabled = 1,
    AutoUpdateSetting_DisabledByPolicy = 2,
    AutoUpdateSetting_EnabledByPolicy = 3,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.ApplicationModel.Store.Preview.InstallControl.GetEntitlementStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CGetEntitlementStatus
{
    GetEntitlementStatus_Succeeded = 0,
    GetEntitlementStatus_NoStoreAccount = 1,
    GetEntitlementStatus_NetworkError = 2,
    GetEntitlementStatus_ServerError = 3,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.ApplicationModel.Store.Preview.InstallControl.IAppInstallItem
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Store.Preview.InstallControl.AppInstallItem
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallItem[] = L"Windows.ApplicationModel.Store.Preview.InstallControl.IAppInstallItem";
/* [object, uuid("49D3DFAB-168A-4CBF-A93A-9E448C82737D"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItemVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ProductId )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PackageFamilyName )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_InstallType )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CAppInstallType * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsUserInitiated )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetCurrentStatus )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallStatus * * result
        );
    HRESULT ( STDMETHODCALLTYPE *Cancel )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem * This
        );
    HRESULT ( STDMETHODCALLTYPE *Pause )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem * This
        );
    HRESULT ( STDMETHODCALLTYPE *Restart )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem * This
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_Completed )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem_IInspectable * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_Completed )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_StatusChanged )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem_IInspectable * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_StatusChanged )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem * This,
        /* [in] */EventRegistrationToken token
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItemVtbl;

interface __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItemVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem_get_ProductId(This,value) \
    ( (This)->lpVtbl->get_ProductId(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem_get_PackageFamilyName(This,value) \
    ( (This)->lpVtbl->get_PackageFamilyName(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem_get_InstallType(This,value) \
    ( (This)->lpVtbl->get_InstallType(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem_get_IsUserInitiated(This,value) \
    ( (This)->lpVtbl->get_IsUserInitiated(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem_GetCurrentStatus(This,result) \
    ( (This)->lpVtbl->GetCurrentStatus(This,result) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem_Cancel(This) \
    ( (This)->lpVtbl->Cancel(This) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem_Pause(This) \
    ( (This)->lpVtbl->Pause(This) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem_Restart(This) \
    ( (This)->lpVtbl->Restart(This) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem_add_Completed(This,handler,token) \
    ( (This)->lpVtbl->add_Completed(This,handler,token) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem_remove_Completed(This,token) \
    ( (This)->lpVtbl->remove_Completed(This,token) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem_add_StatusChanged(This,handler,token) \
    ( (This)->lpVtbl->add_StatusChanged(This,handler,token) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem_remove_StatusChanged(This,token) \
    ( (This)->lpVtbl->remove_StatusChanged(This,token) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Store.Preview.InstallControl.IAppInstallItem2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Store.Preview.InstallControl.AppInstallItem
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallItem2[] = L"Windows.ApplicationModel.Store.Preview.InstallControl.IAppInstallItem2";
/* [object, uuid("D3972AF8-40C0-4FD7-AA6C-0AA13CA6188C"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [overload] */HRESULT ( STDMETHODCALLTYPE *CancelWithTelemetry )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem2 * This,
        /* [in] */__RPC__in HSTRING correlationVector
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *PauseWithTelemetry )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem2 * This,
        /* [in] */__RPC__in HSTRING correlationVector
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *RestartWithTelemetry )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem2 * This,
        /* [in] */__RPC__in HSTRING correlationVector
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem2Vtbl;

interface __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem2
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem2_CancelWithTelemetry(This,correlationVector) \
    ( (This)->lpVtbl->CancelWithTelemetry(This,correlationVector) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem2_PauseWithTelemetry(This,correlationVector) \
    ( (This)->lpVtbl->PauseWithTelemetry(This,correlationVector) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem2_RestartWithTelemetry(This,correlationVector) \
    ( (This)->lpVtbl->RestartWithTelemetry(This,correlationVector) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem2;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.ApplicationModel.Store.Preview.InstallControl.IAppInstallItem3
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Store.Preview.InstallControl.AppInstallItem
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallItem3[] = L"Windows.ApplicationModel.Store.Preview.InstallControl.IAppInstallItem3";
/* [object, uuid("6F3DC998-DD47-433C-9234-560172D67A45"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem3 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem3 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem3 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem3 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem3 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem3 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Children )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem3 * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ItemOperationsMightAffectOtherItems )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem3 * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem3Vtbl;

interface __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem3
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem3Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem3_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem3_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem3_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem3_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem3_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem3_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem3_get_Children(This,value) \
    ( (This)->lpVtbl->get_Children(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem3_get_ItemOperationsMightAffectOtherItems(This,value) \
    ( (This)->lpVtbl->get_ItemOperationsMightAffectOtherItems(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem3;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem3_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.ApplicationModel.Store.Preview.InstallControl.IAppInstallManager
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Store.Preview.InstallControl.AppInstallManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallManager[] = L"Windows.ApplicationModel.Store.Preview.InstallControl.IAppInstallManager";
/* [object, uuid("9353E170-8441-4B45-BD72-7C2FA925BEEE"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManagerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AppInstallItems )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem * * value
        );
    HRESULT ( STDMETHODCALLTYPE *Cancel )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager * This,
        /* [in] */__RPC__in HSTRING productId
        );
    HRESULT ( STDMETHODCALLTYPE *Pause )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager * This,
        /* [in] */__RPC__in HSTRING productId
        );
    HRESULT ( STDMETHODCALLTYPE *Restart )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager * This,
        /* [in] */__RPC__in HSTRING productId
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_ItemCompleted )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallManager_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallManagerItemEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_ItemCompleted )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_ItemStatusChanged )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallManager_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallManagerItemEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_ItemStatusChanged )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager * This,
        /* [in] */EventRegistrationToken token
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AutoUpdateSetting )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CAutoUpdateSetting * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_AutoUpdateSetting )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager * This,
        /* [in] */__x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CAutoUpdateSetting value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AcquisitionIdentity )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_AcquisitionIdentity )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager * This,
        /* [in] */__RPC__in HSTRING value
        );
    HRESULT ( STDMETHODCALLTYPE *GetIsApplicableAsync )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager * This,
        /* [in] */__RPC__in HSTRING productId,
        /* [in] */__RPC__in HSTRING skuId,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *StartAppInstallAsync )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager * This,
        /* [in] */__RPC__in HSTRING productId,
        /* [in] */__RPC__in HSTRING skuId,
        /* [in] */boolean repair,
        /* [in] */boolean forceUseOfNonRemovableStorage,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *UpdateAppByPackageFamilyNameAsync )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager * This,
        /* [in] */__RPC__in HSTRING packageFamilyName,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *SearchForUpdatesAsync )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager * This,
        /* [in] */__RPC__in HSTRING productId,
        /* [in] */__RPC__in HSTRING skuId,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *SearchForAllUpdatesAsync )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *IsStoreBlockedByPolicyAsync )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager * This,
        /* [in] */__RPC__in HSTRING storeClientName,
        /* [in] */__RPC__in HSTRING storeClientPublisher,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *GetIsAppAllowedToInstallAsync )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager * This,
        /* [in] */__RPC__in HSTRING productId,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManagerVtbl;

interface __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManagerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager_get_AppInstallItems(This,value) \
    ( (This)->lpVtbl->get_AppInstallItems(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager_Cancel(This,productId) \
    ( (This)->lpVtbl->Cancel(This,productId) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager_Pause(This,productId) \
    ( (This)->lpVtbl->Pause(This,productId) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager_Restart(This,productId) \
    ( (This)->lpVtbl->Restart(This,productId) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager_add_ItemCompleted(This,handler,token) \
    ( (This)->lpVtbl->add_ItemCompleted(This,handler,token) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager_remove_ItemCompleted(This,token) \
    ( (This)->lpVtbl->remove_ItemCompleted(This,token) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager_add_ItemStatusChanged(This,handler,token) \
    ( (This)->lpVtbl->add_ItemStatusChanged(This,handler,token) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager_remove_ItemStatusChanged(This,token) \
    ( (This)->lpVtbl->remove_ItemStatusChanged(This,token) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager_get_AutoUpdateSetting(This,value) \
    ( (This)->lpVtbl->get_AutoUpdateSetting(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager_put_AutoUpdateSetting(This,value) \
    ( (This)->lpVtbl->put_AutoUpdateSetting(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager_get_AcquisitionIdentity(This,value) \
    ( (This)->lpVtbl->get_AcquisitionIdentity(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager_put_AcquisitionIdentity(This,value) \
    ( (This)->lpVtbl->put_AcquisitionIdentity(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager_GetIsApplicableAsync(This,productId,skuId,operation) \
    ( (This)->lpVtbl->GetIsApplicableAsync(This,productId,skuId,operation) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager_StartAppInstallAsync(This,productId,skuId,repair,forceUseOfNonRemovableStorage,operation) \
    ( (This)->lpVtbl->StartAppInstallAsync(This,productId,skuId,repair,forceUseOfNonRemovableStorage,operation) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager_UpdateAppByPackageFamilyNameAsync(This,packageFamilyName,operation) \
    ( (This)->lpVtbl->UpdateAppByPackageFamilyNameAsync(This,packageFamilyName,operation) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager_SearchForUpdatesAsync(This,productId,skuId,operation) \
    ( (This)->lpVtbl->SearchForUpdatesAsync(This,productId,skuId,operation) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager_SearchForAllUpdatesAsync(This,operation) \
    ( (This)->lpVtbl->SearchForAllUpdatesAsync(This,operation) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager_IsStoreBlockedByPolicyAsync(This,storeClientName,storeClientPublisher,operation) \
    ( (This)->lpVtbl->IsStoreBlockedByPolicyAsync(This,storeClientName,storeClientPublisher,operation) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager_GetIsAppAllowedToInstallAsync(This,productId,operation) \
    ( (This)->lpVtbl->GetIsAppAllowedToInstallAsync(This,productId,operation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Store.Preview.InstallControl.IAppInstallManager2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Store.Preview.InstallControl.AppInstallManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallManager2[] = L"Windows.ApplicationModel.Store.Preview.InstallControl.IAppInstallManager2";
/* [object, uuid("16937851-ED37-480D-8314-52E27C03F04A"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [overload] */HRESULT ( STDMETHODCALLTYPE *StartAppInstallWithTelemetryAsync )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager2 * This,
        /* [in] */__RPC__in HSTRING productId,
        /* [in] */__RPC__in HSTRING skuId,
        /* [in] */boolean repair,
        /* [in] */boolean forceUseOfNonRemovableStorage,
        /* [in] */__RPC__in HSTRING catalogId,
        /* [in] */__RPC__in HSTRING bundleId,
        /* [in] */__RPC__in HSTRING correlationVector,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem * * operation
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *UpdateAppByPackageFamilyNameWithTelemetryAsync )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager2 * This,
        /* [in] */__RPC__in HSTRING packageFamilyName,
        /* [in] */__RPC__in HSTRING correlationVector,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem * * operation
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *SearchForUpdatesWithTelemetryAsync )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager2 * This,
        /* [in] */__RPC__in HSTRING productId,
        /* [in] */__RPC__in HSTRING skuId,
        /* [in] */__RPC__in HSTRING catalogId,
        /* [in] */__RPC__in HSTRING correlationVector,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem * * operation
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *SearchForAllUpdatesWithTelemetryAsync )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager2 * This,
        /* [in] */__RPC__in HSTRING correlationVector,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem * * operation
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *GetIsAppAllowedToInstallWithTelemetryAsync )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager2 * This,
        /* [in] */__RPC__in HSTRING productId,
        /* [in] */__RPC__in HSTRING skuId,
        /* [in] */__RPC__in HSTRING catalogId,
        /* [in] */__RPC__in HSTRING correlationVector,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *CancelWithTelemetry )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager2 * This,
        /* [in] */__RPC__in HSTRING productId,
        /* [in] */__RPC__in HSTRING correlationVector
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *PauseWithTelemetry )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager2 * This,
        /* [in] */__RPC__in HSTRING productId,
        /* [in] */__RPC__in HSTRING correlationVector
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *RestartWithTelemetry )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager2 * This,
        /* [in] */__RPC__in HSTRING productId,
        /* [in] */__RPC__in HSTRING correlationVector
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager2Vtbl;

interface __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager2
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager2_StartAppInstallWithTelemetryAsync(This,productId,skuId,repair,forceUseOfNonRemovableStorage,catalogId,bundleId,correlationVector,operation) \
    ( (This)->lpVtbl->StartAppInstallWithTelemetryAsync(This,productId,skuId,repair,forceUseOfNonRemovableStorage,catalogId,bundleId,correlationVector,operation) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager2_UpdateAppByPackageFamilyNameWithTelemetryAsync(This,packageFamilyName,correlationVector,operation) \
    ( (This)->lpVtbl->UpdateAppByPackageFamilyNameWithTelemetryAsync(This,packageFamilyName,correlationVector,operation) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager2_SearchForUpdatesWithTelemetryAsync(This,productId,skuId,catalogId,correlationVector,operation) \
    ( (This)->lpVtbl->SearchForUpdatesWithTelemetryAsync(This,productId,skuId,catalogId,correlationVector,operation) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager2_SearchForAllUpdatesWithTelemetryAsync(This,correlationVector,operation) \
    ( (This)->lpVtbl->SearchForAllUpdatesWithTelemetryAsync(This,correlationVector,operation) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager2_GetIsAppAllowedToInstallWithTelemetryAsync(This,productId,skuId,catalogId,correlationVector,operation) \
    ( (This)->lpVtbl->GetIsAppAllowedToInstallWithTelemetryAsync(This,productId,skuId,catalogId,correlationVector,operation) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager2_CancelWithTelemetry(This,productId,correlationVector) \
    ( (This)->lpVtbl->CancelWithTelemetry(This,productId,correlationVector) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager2_PauseWithTelemetry(This,productId,correlationVector) \
    ( (This)->lpVtbl->PauseWithTelemetry(This,productId,correlationVector) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager2_RestartWithTelemetry(This,productId,correlationVector) \
    ( (This)->lpVtbl->RestartWithTelemetry(This,productId,correlationVector) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager2;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.ApplicationModel.Store.Preview.InstallControl.IAppInstallManager3
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Store.Preview.InstallControl.AppInstallManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallManager3[] = L"Windows.ApplicationModel.Store.Preview.InstallControl.IAppInstallManager3";
/* [object, uuid("95B24B17-E96A-4D0E-84E1-C8CB417A0178"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager3 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager3 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager3 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager3 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager3 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager3 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *StartProductInstallAsync )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager3 * This,
        /* [in] */__RPC__in HSTRING productId,
        /* [in] */__RPC__in HSTRING catalogId,
        /* [in] */__RPC__in HSTRING flightId,
        /* [in] */__RPC__in HSTRING clientId,
        /* [in] */boolean repair,
        /* [in] */boolean forceUseOfNonRemovableStorage,
        /* [in] */__RPC__in HSTRING correlationVector,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume * targetVolume,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *StartProductInstallForUserAsync )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager3 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSystem_CIUser * user,
        /* [in] */__RPC__in HSTRING productId,
        /* [in] */__RPC__in HSTRING catalogId,
        /* [in] */__RPC__in HSTRING flightId,
        /* [in] */__RPC__in HSTRING clientId,
        /* [in] */boolean repair,
        /* [in] */boolean forceUseOfNonRemovableStorage,
        /* [in] */__RPC__in HSTRING correlationVector,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume * targetVolume,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *UpdateAppByPackageFamilyNameForUserAsync )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager3 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSystem_CIUser * user,
        /* [in] */__RPC__in HSTRING packageFamilyName,
        /* [in] */__RPC__in HSTRING correlationVector,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *SearchForUpdatesForUserAsync )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager3 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSystem_CIUser * user,
        /* [in] */__RPC__in HSTRING productId,
        /* [in] */__RPC__in HSTRING skuId,
        /* [in] */__RPC__in HSTRING catalogId,
        /* [in] */__RPC__in HSTRING correlationVector,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *SearchForAllUpdatesForUserAsync )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager3 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSystem_CIUser * user,
        /* [in] */__RPC__in HSTRING correlationVector,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *GetIsAppAllowedToInstallForUserAsync )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager3 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSystem_CIUser * user,
        /* [in] */__RPC__in HSTRING productId,
        /* [in] */__RPC__in HSTRING skuId,
        /* [in] */__RPC__in HSTRING catalogId,
        /* [in] */__RPC__in HSTRING correlationVector,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *GetIsApplicableForUserAsync )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager3 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSystem_CIUser * user,
        /* [in] */__RPC__in HSTRING productId,
        /* [in] */__RPC__in HSTRING skuId,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *MoveToFrontOfDownloadQueue )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager3 * This,
        /* [in] */__RPC__in HSTRING productId,
        /* [in] */__RPC__in HSTRING correlationVector
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager3Vtbl;

interface __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager3
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager3Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager3_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager3_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager3_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager3_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager3_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager3_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager3_StartProductInstallAsync(This,productId,catalogId,flightId,clientId,repair,forceUseOfNonRemovableStorage,correlationVector,targetVolume,operation) \
    ( (This)->lpVtbl->StartProductInstallAsync(This,productId,catalogId,flightId,clientId,repair,forceUseOfNonRemovableStorage,correlationVector,targetVolume,operation) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager3_StartProductInstallForUserAsync(This,user,productId,catalogId,flightId,clientId,repair,forceUseOfNonRemovableStorage,correlationVector,targetVolume,operation) \
    ( (This)->lpVtbl->StartProductInstallForUserAsync(This,user,productId,catalogId,flightId,clientId,repair,forceUseOfNonRemovableStorage,correlationVector,targetVolume,operation) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager3_UpdateAppByPackageFamilyNameForUserAsync(This,user,packageFamilyName,correlationVector,operation) \
    ( (This)->lpVtbl->UpdateAppByPackageFamilyNameForUserAsync(This,user,packageFamilyName,correlationVector,operation) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager3_SearchForUpdatesForUserAsync(This,user,productId,skuId,catalogId,correlationVector,operation) \
    ( (This)->lpVtbl->SearchForUpdatesForUserAsync(This,user,productId,skuId,catalogId,correlationVector,operation) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager3_SearchForAllUpdatesForUserAsync(This,user,correlationVector,operation) \
    ( (This)->lpVtbl->SearchForAllUpdatesForUserAsync(This,user,correlationVector,operation) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager3_GetIsAppAllowedToInstallForUserAsync(This,user,productId,skuId,catalogId,correlationVector,operation) \
    ( (This)->lpVtbl->GetIsAppAllowedToInstallForUserAsync(This,user,productId,skuId,catalogId,correlationVector,operation) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager3_GetIsApplicableForUserAsync(This,user,productId,skuId,operation) \
    ( (This)->lpVtbl->GetIsApplicableForUserAsync(This,user,productId,skuId,operation) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager3_MoveToFrontOfDownloadQueue(This,productId,correlationVector) \
    ( (This)->lpVtbl->MoveToFrontOfDownloadQueue(This,productId,correlationVector) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager3;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager3_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.Store.Preview.InstallControl.IAppInstallManager4
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Store.Preview.InstallControl.AppInstallManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager4_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager4_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallManager4[] = L"Windows.ApplicationModel.Store.Preview.InstallControl.IAppInstallManager4";
/* [object, uuid("260A2A16-5A9E-4EBD-B944-F2BA75C31159"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager4Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager4 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager4 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager4 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager4 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager4 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager4 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetFreeUserEntitlementAsync )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager4 * This,
        /* [in] */__RPC__in HSTRING storeId,
        /* [in] */__RPC__in HSTRING campaignId,
        /* [in] */__RPC__in HSTRING correlationVector,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CGetEntitlementResult * * ppAsyncOperation
        );
    HRESULT ( STDMETHODCALLTYPE *GetFreeUserEntitlementForUserAsync )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager4 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSystem_CIUser * user,
        /* [in] */__RPC__in HSTRING storeId,
        /* [in] */__RPC__in HSTRING campaignId,
        /* [in] */__RPC__in HSTRING correlationVector,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CGetEntitlementResult * * ppAsyncOperation
        );
    HRESULT ( STDMETHODCALLTYPE *GetFreeDeviceEntitlementAsync )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager4 * This,
        /* [in] */__RPC__in HSTRING storeId,
        /* [in] */__RPC__in HSTRING campaignId,
        /* [in] */__RPC__in HSTRING correlationVector,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CGetEntitlementResult * * ppAsyncOperation
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager4Vtbl;

interface __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager4
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager4Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager4_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager4_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager4_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager4_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager4_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager4_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager4_GetFreeUserEntitlementAsync(This,storeId,campaignId,correlationVector,ppAsyncOperation) \
    ( (This)->lpVtbl->GetFreeUserEntitlementAsync(This,storeId,campaignId,correlationVector,ppAsyncOperation) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager4_GetFreeUserEntitlementForUserAsync(This,user,storeId,campaignId,correlationVector,ppAsyncOperation) \
    ( (This)->lpVtbl->GetFreeUserEntitlementForUserAsync(This,user,storeId,campaignId,correlationVector,ppAsyncOperation) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager4_GetFreeDeviceEntitlementAsync(This,storeId,campaignId,correlationVector,ppAsyncOperation) \
    ( (This)->lpVtbl->GetFreeDeviceEntitlementAsync(This,storeId,campaignId,correlationVector,ppAsyncOperation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager4;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager4_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.ApplicationModel.Store.Preview.InstallControl.IAppInstallManager5
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Store.Preview.InstallControl.AppInstallManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager5_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager5_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallManager5[] = L"Windows.ApplicationModel.Store.Preview.InstallControl.IAppInstallManager5";
/* [object, uuid("3CD7BE4C-1BE9-4F7F-B675-AA1D64A529B2"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager5Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager5 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager5 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager5 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager5 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager5 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager5 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AppInstallItemsWithGroupSupport )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager5 * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CInstallControl__CAppInstallItem * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager5Vtbl;

interface __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager5
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager5Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager5_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager5_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager5_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager5_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager5_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager5_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager5_get_AppInstallItemsWithGroupSupport(This,value) \
    ( (This)->lpVtbl->get_AppInstallItemsWithGroupSupport(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager5;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManager5_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.ApplicationModel.Store.Preview.InstallControl.IAppInstallManagerItemEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Store.Preview.InstallControl.AppInstallManagerItemEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManagerItemEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManagerItemEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallManagerItemEventArgs[] = L"Windows.ApplicationModel.Store.Preview.InstallControl.IAppInstallManagerItemEventArgs";
/* [object, uuid("BC505743-4674-4DD1-957E-C25682086A14"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManagerItemEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManagerItemEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManagerItemEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManagerItemEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManagerItemEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManagerItemEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManagerItemEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Item )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManagerItemEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallItem * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManagerItemEventArgsVtbl;

interface __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManagerItemEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManagerItemEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManagerItemEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManagerItemEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManagerItemEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManagerItemEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManagerItemEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManagerItemEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManagerItemEventArgs_get_Item(This,value) \
    ( (This)->lpVtbl->get_Item(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManagerItemEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallManagerItemEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Store.Preview.InstallControl.IAppInstallStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Store.Preview.InstallControl.AppInstallStatus
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallStatus_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallStatus_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallStatus[] = L"Windows.ApplicationModel.Store.Preview.InstallControl.IAppInstallStatus";
/* [object, uuid("936DCCFA-2450-4126-88B1-6127A644DD5C"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallStatusVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallStatus * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallStatus * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallStatus * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallStatus * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallStatus * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallStatus * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_InstallState )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallStatus * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CAppInstallState * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DownloadSizeInBytes )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallStatus * This,
        /* [retval, out] */__RPC__out UINT64 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_BytesDownloaded )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallStatus * This,
        /* [retval, out] */__RPC__out UINT64 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PercentComplete )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallStatus * This,
        /* [retval, out] */__RPC__out DOUBLE * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ErrorCode )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallStatus * This,
        /* [retval, out] */__RPC__out HRESULT * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallStatusVtbl;

interface __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallStatus
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallStatusVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallStatus_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallStatus_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallStatus_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallStatus_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallStatus_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallStatus_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallStatus_get_InstallState(This,value) \
    ( (This)->lpVtbl->get_InstallState(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallStatus_get_DownloadSizeInBytes(This,value) \
    ( (This)->lpVtbl->get_DownloadSizeInBytes(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallStatus_get_BytesDownloaded(This,value) \
    ( (This)->lpVtbl->get_BytesDownloaded(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallStatus_get_PercentComplete(This,value) \
    ( (This)->lpVtbl->get_PercentComplete(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallStatus_get_ErrorCode(This,value) \
    ( (This)->lpVtbl->get_ErrorCode(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallStatus;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallStatus_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Store.Preview.InstallControl.IAppInstallStatus2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Store.Preview.InstallControl.AppInstallStatus
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallStatus2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallStatus2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallStatus2[] = L"Windows.ApplicationModel.Store.Preview.InstallControl.IAppInstallStatus2";
/* [object, uuid("96E7818A-5E92-4AA9-8EDC-58FED4B87E00"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallStatus2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallStatus2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallStatus2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallStatus2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallStatus2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallStatus2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallStatus2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_User )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallStatus2 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSystem_CIUser * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ReadyForLaunch )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallStatus2 * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallStatus2Vtbl;

interface __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallStatus2
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallStatus2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallStatus2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallStatus2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallStatus2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallStatus2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallStatus2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallStatus2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallStatus2_get_User(This,value) \
    ( (This)->lpVtbl->get_User(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallStatus2_get_ReadyForLaunch(This,value) \
    ( (This)->lpVtbl->get_ReadyForLaunch(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallStatus2;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIAppInstallStatus2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.Store.Preview.InstallControl.IGetEntitlementResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Store.Preview.InstallControl.GetEntitlementResult
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIGetEntitlementResult_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIGetEntitlementResult_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Store_Preview_InstallControl_IGetEntitlementResult[] = L"Windows.ApplicationModel.Store.Preview.InstallControl.IGetEntitlementResult";
/* [object, uuid("74FC843F-1A9E-4609-8E4D-819086D08A3D"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIGetEntitlementResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIGetEntitlementResult * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIGetEntitlementResult * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIGetEntitlementResult * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIGetEntitlementResult * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIGetEntitlementResult * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIGetEntitlementResult * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIGetEntitlementResult * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CGetEntitlementStatus * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIGetEntitlementResultVtbl;

interface __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIGetEntitlementResult
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIGetEntitlementResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIGetEntitlementResult_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIGetEntitlementResult_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIGetEntitlementResult_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIGetEntitlementResult_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIGetEntitlementResult_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIGetEntitlementResult_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIGetEntitlementResult_get_Status(This,value) \
    ( (This)->lpVtbl->get_Status(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIGetEntitlementResult;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CInstallControl_CIGetEntitlementResult_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.ApplicationModel.Store.Preview.InstallControl.AppInstallItem
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Store.Preview.InstallControl.IAppInstallItem ** Default Interface **
 *    Windows.ApplicationModel.Store.Preview.InstallControl.IAppInstallItem2
 *    Windows.ApplicationModel.Store.Preview.InstallControl.IAppInstallItem3
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Store_Preview_InstallControl_AppInstallItem_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Store_Preview_InstallControl_AppInstallItem_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Store_Preview_InstallControl_AppInstallItem[] = L"Windows.ApplicationModel.Store.Preview.InstallControl.AppInstallItem";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Store.Preview.InstallControl.AppInstallManager
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Store.Preview.InstallControl.IAppInstallManager ** Default Interface **
 *    Windows.ApplicationModel.Store.Preview.InstallControl.IAppInstallManager2
 *    Windows.ApplicationModel.Store.Preview.InstallControl.IAppInstallManager3
 *    Windows.ApplicationModel.Store.Preview.InstallControl.IAppInstallManager4
 *    Windows.ApplicationModel.Store.Preview.InstallControl.IAppInstallManager5
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Store_Preview_InstallControl_AppInstallManager_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Store_Preview_InstallControl_AppInstallManager_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Store_Preview_InstallControl_AppInstallManager[] = L"Windows.ApplicationModel.Store.Preview.InstallControl.AppInstallManager";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Store.Preview.InstallControl.AppInstallManagerItemEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Store.Preview.InstallControl.IAppInstallManagerItemEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Store_Preview_InstallControl_AppInstallManagerItemEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Store_Preview_InstallControl_AppInstallManagerItemEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Store_Preview_InstallControl_AppInstallManagerItemEventArgs[] = L"Windows.ApplicationModel.Store.Preview.InstallControl.AppInstallManagerItemEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Store.Preview.InstallControl.AppInstallStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Store.Preview.InstallControl.IAppInstallStatus ** Default Interface **
 *    Windows.ApplicationModel.Store.Preview.InstallControl.IAppInstallStatus2
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Store_Preview_InstallControl_AppInstallStatus_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Store_Preview_InstallControl_AppInstallStatus_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Store_Preview_InstallControl_AppInstallStatus[] = L"Windows.ApplicationModel.Store.Preview.InstallControl.AppInstallStatus";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Store.Preview.InstallControl.GetEntitlementResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Store.Preview.InstallControl.IGetEntitlementResult ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Store_Preview_InstallControl_GetEntitlementResult_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Store_Preview_InstallControl_GetEntitlementResult_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Store_Preview_InstallControl_GetEntitlementResult[] = L"Windows.ApplicationModel.Store.Preview.InstallControl.GetEntitlementResult";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000






#endif // defined(__cplusplus)
#pragma pop_macro("MIDL_CONST_ID")
#endif // __windows2Eapplicationmodel2Estore2Epreview2Einstallcontrol_p_h__

#endif // __windows2Eapplicationmodel2Estore2Epreview2Einstallcontrol_h__
