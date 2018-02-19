/* Header file automatically generated from windows.applicationmodel.contacts.provider.idl */
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
#ifndef __windows2Eapplicationmodel2Econtacts2Eprovider_h__
#define __windows2Eapplicationmodel2Econtacts2Eprovider_h__
#ifndef __windows2Eapplicationmodel2Econtacts2Eprovider_p_h__
#define __windows2Eapplicationmodel2Econtacts2Eprovider_p_h__


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
#include "Windows.ApplicationModel.Contacts.h"
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CApplicationModel_CContacts_CProvider_CIContactPickerUI_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CContacts_CProvider_CIContactPickerUI_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Contacts {
                namespace Provider {
                    interface IContactPickerUI;
                } /* Windows */
            } /* ApplicationModel */
        } /* Contacts */
    } /* Provider */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CContacts_CProvider_CIContactPickerUI ABI::Windows::ApplicationModel::Contacts::Provider::IContactPickerUI

#endif // ____x_ABI_CWindows_CApplicationModel_CContacts_CProvider_CIContactPickerUI_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CContacts_CProvider_CIContactPickerUI2_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CContacts_CProvider_CIContactPickerUI2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Contacts {
                namespace Provider {
                    interface IContactPickerUI2;
                } /* Windows */
            } /* ApplicationModel */
        } /* Contacts */
    } /* Provider */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CContacts_CProvider_CIContactPickerUI2 ABI::Windows::ApplicationModel::Contacts::Provider::IContactPickerUI2

#endif // ____x_ABI_CWindows_CApplicationModel_CContacts_CProvider_CIContactPickerUI2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CContacts_CProvider_CIContactRemovedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CContacts_CProvider_CIContactRemovedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Contacts {
                namespace Provider {
                    interface IContactRemovedEventArgs;
                } /* Windows */
            } /* ApplicationModel */
        } /* Contacts */
    } /* Provider */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CContacts_CProvider_CIContactRemovedEventArgs ABI::Windows::ApplicationModel::Contacts::Provider::IContactRemovedEventArgs

#endif // ____x_ABI_CWindows_CApplicationModel_CContacts_CProvider_CIContactRemovedEventArgs_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Contacts {
                namespace Provider {
                    class ContactPickerUI;
                } /* Windows */
            } /* ApplicationModel */
        } /* Contacts */
    } /* Provider */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Contacts {
                namespace Provider {
                    class ContactRemovedEventArgs;
                } /* Windows */
            } /* ApplicationModel */
        } /* Contacts */
    } /* Provider */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CProvider__CContactPickerUI_Windows__CApplicationModel__CContacts__CProvider__CContactRemovedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CProvider__CContactPickerUI_Windows__CApplicationModel__CContacts__CProvider__CContactRemovedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("a39aeb7e-765c-5e83-b231-84bead98e9a0"))
ITypedEventHandler<ABI::Windows::ApplicationModel::Contacts::Provider::ContactPickerUI*,ABI::Windows::ApplicationModel::Contacts::Provider::ContactRemovedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Contacts::Provider::ContactPickerUI*, ABI::Windows::ApplicationModel::Contacts::Provider::IContactPickerUI*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Contacts::Provider::ContactRemovedEventArgs*, ABI::Windows::ApplicationModel::Contacts::Provider::IContactRemovedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.ApplicationModel.Contacts.Provider.ContactPickerUI, Windows.ApplicationModel.Contacts.Provider.ContactRemovedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::ApplicationModel::Contacts::Provider::ContactPickerUI*,ABI::Windows::ApplicationModel::Contacts::Provider::ContactRemovedEventArgs*> __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CProvider__CContactPickerUI_Windows__CApplicationModel__CContacts__CProvider__CContactRemovedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CProvider__CContactPickerUI_Windows__CApplicationModel__CContacts__CProvider__CContactRemovedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CProvider__CContactPickerUI_Windows__CApplicationModel__CContacts__CProvider__CContactRemovedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CProvider__CContactPickerUI_Windows__CApplicationModel__CContacts__CProvider__CContactRemovedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::ApplicationModel::Contacts::Provider::IContactPickerUI*,ABI::Windows::ApplicationModel::Contacts::Provider::IContactRemovedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CProvider__CContactPickerUI_Windows__CApplicationModel__CContacts__CProvider__CContactRemovedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::ApplicationModel::Contacts::Provider::IContactPickerUI*,ABI::Windows::ApplicationModel::Contacts::Provider::IContactRemovedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CProvider__CContactPickerUI_Windows__CApplicationModel__CContacts__CProvider__CContactRemovedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#ifndef DEF___FIIterator_1_HSTRING_USE
#define DEF___FIIterator_1_HSTRING_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("8c304ebb-6615-50a4-8829-879ecd443236"))
IIterator<HSTRING> : IIterator_impl<HSTRING> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<String>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<HSTRING> __FIIterator_1_HSTRING_t;
#define __FIIterator_1_HSTRING ABI::Windows::Foundation::Collections::__FIIterator_1_HSTRING_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_HSTRING ABI::Windows::Foundation::Collections::IIterator<HSTRING>
//#define __FIIterator_1_HSTRING_t ABI::Windows::Foundation::Collections::IIterator<HSTRING>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_HSTRING_USE */




#ifndef DEF___FIIterable_1_HSTRING_USE
#define DEF___FIIterable_1_HSTRING_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("e2fcc7c1-3bfc-5a0b-b2b0-72e769d1cb7e"))
IIterable<HSTRING> : IIterable_impl<HSTRING> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<String>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<HSTRING> __FIIterable_1_HSTRING_t;
#define __FIIterable_1_HSTRING ABI::Windows::Foundation::Collections::__FIIterable_1_HSTRING_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_HSTRING ABI::Windows::Foundation::Collections::IIterable<HSTRING>
//#define __FIIterable_1_HSTRING_t ABI::Windows::Foundation::Collections::IIterable<HSTRING>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_HSTRING_USE */




#ifndef DEF___FIVectorView_1_HSTRING_USE
#define DEF___FIVectorView_1_HSTRING_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("2f13c006-a03a-5f69-b090-75a43e33423e"))
IVectorView<HSTRING> : IVectorView_impl<HSTRING> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<String>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<HSTRING> __FIVectorView_1_HSTRING_t;
#define __FIVectorView_1_HSTRING ABI::Windows::Foundation::Collections::__FIVectorView_1_HSTRING_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_HSTRING ABI::Windows::Foundation::Collections::IVectorView<HSTRING>
//#define __FIVectorView_1_HSTRING_t ABI::Windows::Foundation::Collections::IVectorView<HSTRING>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_HSTRING_USE */



namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Contacts {
                enum ContactFieldType : int;
            } /* Windows */
        } /* ApplicationModel */
    } /* Contacts */} /* ABI */


#ifndef DEF___FIIterator_1_Windows__CApplicationModel__CContacts__CContactFieldType_USE
#define DEF___FIIterator_1_Windows__CApplicationModel__CContacts__CContactFieldType_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("2f6d856a-50d4-5173-abea-db6c6b8fc530"))
IIterator<enum ABI::Windows::ApplicationModel::Contacts::ContactFieldType> : IIterator_impl<enum ABI::Windows::ApplicationModel::Contacts::ContactFieldType> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.ApplicationModel.Contacts.ContactFieldType>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<enum ABI::Windows::ApplicationModel::Contacts::ContactFieldType> __FIIterator_1_Windows__CApplicationModel__CContacts__CContactFieldType_t;
#define __FIIterator_1_Windows__CApplicationModel__CContacts__CContactFieldType ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CApplicationModel__CContacts__CContactFieldType_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CApplicationModel__CContacts__CContactFieldType ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::ApplicationModel::Contacts::ContactFieldType>
//#define __FIIterator_1_Windows__CApplicationModel__CContacts__CContactFieldType_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::ApplicationModel::Contacts::ContactFieldType>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CApplicationModel__CContacts__CContactFieldType_USE */





#ifndef DEF___FIIterable_1_Windows__CApplicationModel__CContacts__CContactFieldType_USE
#define DEF___FIIterable_1_Windows__CApplicationModel__CContacts__CContactFieldType_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("384b8b1b-ce8e-5781-b3dc-0776d684f658"))
IIterable<enum ABI::Windows::ApplicationModel::Contacts::ContactFieldType> : IIterable_impl<enum ABI::Windows::ApplicationModel::Contacts::ContactFieldType> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.ApplicationModel.Contacts.ContactFieldType>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<enum ABI::Windows::ApplicationModel::Contacts::ContactFieldType> __FIIterable_1_Windows__CApplicationModel__CContacts__CContactFieldType_t;
#define __FIIterable_1_Windows__CApplicationModel__CContacts__CContactFieldType ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CApplicationModel__CContacts__CContactFieldType_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CApplicationModel__CContacts__CContactFieldType ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::ApplicationModel::Contacts::ContactFieldType>
//#define __FIIterable_1_Windows__CApplicationModel__CContacts__CContactFieldType_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::ApplicationModel::Contacts::ContactFieldType>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CApplicationModel__CContacts__CContactFieldType_USE */





#ifndef DEF___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactFieldType_USE
#define DEF___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactFieldType_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("39d6abda-a00a-5777-8611-82d7c326c18d"))
IVectorView<enum ABI::Windows::ApplicationModel::Contacts::ContactFieldType> : IVectorView_impl<enum ABI::Windows::ApplicationModel::Contacts::ContactFieldType> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.ApplicationModel.Contacts.ContactFieldType>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<enum ABI::Windows::ApplicationModel::Contacts::ContactFieldType> __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactFieldType_t;
#define __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactFieldType ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CApplicationModel__CContacts__CContactFieldType_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactFieldType ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::ApplicationModel::Contacts::ContactFieldType>
//#define __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactFieldType_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::ApplicationModel::Contacts::ContactFieldType>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactFieldType_USE */





#ifndef DEF___FIVector_1_Windows__CApplicationModel__CContacts__CContactFieldType_USE
#define DEF___FIVector_1_Windows__CApplicationModel__CContacts__CContactFieldType_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("6fdc2115-1649-54a4-8faa-3049cefb05a4"))
IVector<enum ABI::Windows::ApplicationModel::Contacts::ContactFieldType> : IVector_impl<enum ABI::Windows::ApplicationModel::Contacts::ContactFieldType> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVector`1<Windows.ApplicationModel.Contacts.ContactFieldType>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVector<enum ABI::Windows::ApplicationModel::Contacts::ContactFieldType> __FIVector_1_Windows__CApplicationModel__CContacts__CContactFieldType_t;
#define __FIVector_1_Windows__CApplicationModel__CContacts__CContactFieldType ABI::Windows::Foundation::Collections::__FIVector_1_Windows__CApplicationModel__CContacts__CContactFieldType_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVector_1_Windows__CApplicationModel__CContacts__CContactFieldType ABI::Windows::Foundation::Collections::IVector<ABI::Windows::ApplicationModel::Contacts::ContactFieldType>
//#define __FIVector_1_Windows__CApplicationModel__CContacts__CContactFieldType_t ABI::Windows::Foundation::Collections::IVector<ABI::Windows::ApplicationModel::Contacts::ContactFieldType>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVector_1_Windows__CApplicationModel__CContacts__CContactFieldType_USE */





namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Contacts {
                class Contact;
            } /* Windows */
        } /* ApplicationModel */
    } /* Contacts */} /* ABI */

#ifndef ____x_ABI_CWindows_CApplicationModel_CContacts_CIContact_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CContacts_CIContact_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Contacts {
                interface IContact;
            } /* Windows */
        } /* ApplicationModel */
    } /* Contacts */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CContacts_CIContact ABI::Windows::ApplicationModel::Contacts::IContact

#endif // ____x_ABI_CWindows_CApplicationModel_CContacts_CIContact_FWD_DEFINED__


namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Contacts {
                
                typedef enum ContactFieldType : int ContactFieldType;
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Contacts */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Contacts {
                
                typedef enum ContactSelectionMode : int ContactSelectionMode;
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Contacts */} /* ABI */







namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Contacts {
                namespace Provider {
                    
                    typedef enum AddContactResult : int AddContactResult;
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* Contacts */
    } /* Provider */} /* ABI */
















/*
 *
 * Struct Windows.ApplicationModel.Contacts.Provider.AddContactResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Contacts {
                namespace Provider {
                    /* [v1_enum, contract] */
                    enum AddContactResult : int
                    {
                        AddContactResult_Added = 0,
                        AddContactResult_AlreadyAdded = 1,
                        AddContactResult_Unavailable = 2,
                    };
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* Contacts */
    } /* Provider */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Contacts.Provider.IContactPickerUI
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Contacts.Provider.ContactPickerUI
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CContacts_CProvider_CIContactPickerUI_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CContacts_CProvider_CIContactPickerUI_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Contacts_Provider_IContactPickerUI[] = L"Windows.ApplicationModel.Contacts.Provider.IContactPickerUI";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Contacts {
                namespace Provider {
                    /* [object, uuid("E2CC1366-CF66-43C4-A96A-A5A112DB4746"), exclusiveto, contract] */
                    MIDL_INTERFACE("E2CC1366-CF66-43C4-A96A-A5A112DB4746")
                    IContactPickerUI : IInspectable
                    {
                        
                        #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                        DEPRECATED("AddContact may be altered or unavailable for releases after Windows 8.1. Instead, use AddContact without the ID.")
                        #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                        /* [deprecated] */virtual HRESULT STDMETHODCALLTYPE AddContact(
                            /* [in] */__RPC__in HSTRING id,
                            /* [in] */__RPC__in_opt ABI::Windows::ApplicationModel::Contacts::IContact * contact,
                            /* [retval, out] */__RPC__out ABI::Windows::ApplicationModel::Contacts::Provider::AddContactResult * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE RemoveContact(
                            /* [in] */__RPC__in HSTRING id
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE ContainsContact(
                            /* [in] */__RPC__in HSTRING id,
                            /* [retval, out] */__RPC__out boolean * isContained
                            ) = 0;
                        
                        #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                        DEPRECATED("DesiredFields may be altered or unavailable for releases after Windows 8.1. Instead, use DesiredFieldsWithContactFieldType.")
                        #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                        /* [propget, deprecated] */virtual HRESULT STDMETHODCALLTYPE get_DesiredFields(
                            /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_HSTRING * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SelectionMode(
                            /* [retval, out] */__RPC__out ABI::Windows::ApplicationModel::Contacts::ContactSelectionMode * value
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_ContactRemoved(
                            /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CProvider__CContactPickerUI_Windows__CApplicationModel__CContacts__CProvider__CContactRemovedEventArgs * handler,
                            /* [retval, out] */__RPC__out EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_ContactRemoved(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IContactPickerUI=_uuidof(IContactPickerUI);
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* Contacts */
    } /* Provider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CContacts_CProvider_CIContactPickerUI;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CContacts_CProvider_CIContactPickerUI_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Contacts.Provider.IContactPickerUI2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Contacts.Provider.ContactPickerUI
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CContacts_CProvider_CIContactPickerUI2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CContacts_CProvider_CIContactPickerUI2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Contacts_Provider_IContactPickerUI2[] = L"Windows.ApplicationModel.Contacts.Provider.IContactPickerUI2";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Contacts {
                namespace Provider {
                    /* [object, uuid("6E449E28-7B25-4999-9B0B-875400A1E8C8"), exclusiveto, contract] */
                    MIDL_INTERFACE("6E449E28-7B25-4999-9B0B-875400A1E8C8")
                    IContactPickerUI2 : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE AddContact(
                            /* [in] */__RPC__in_opt ABI::Windows::ApplicationModel::Contacts::IContact * contact,
                            /* [retval, out] */__RPC__out ABI::Windows::ApplicationModel::Contacts::Provider::AddContactResult * result
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DesiredFieldsWithContactFieldType(
                            /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CApplicationModel__CContacts__CContactFieldType * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IContactPickerUI2=_uuidof(IContactPickerUI2);
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* Contacts */
    } /* Provider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CContacts_CProvider_CIContactPickerUI2;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CContacts_CProvider_CIContactPickerUI2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Contacts.Provider.IContactRemovedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Contacts.Provider.ContactRemovedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CContacts_CProvider_CIContactRemovedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CContacts_CProvider_CIContactRemovedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Contacts_Provider_IContactRemovedEventArgs[] = L"Windows.ApplicationModel.Contacts.Provider.IContactRemovedEventArgs";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Contacts {
                namespace Provider {
                    /* [object, uuid("6F354338-3302-4D13-AD8D-ADCC0FF9E47C"), exclusiveto, contract] */
                    MIDL_INTERFACE("6F354338-3302-4D13-AD8D-ADCC0FF9E47C")
                    IContactRemovedEventArgs : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Id(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IContactRemovedEventArgs=_uuidof(IContactRemovedEventArgs);
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* Contacts */
    } /* Provider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CContacts_CProvider_CIContactRemovedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CContacts_CProvider_CIContactRemovedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Contacts.Provider.ContactPickerUI
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Contacts.Provider.IContactPickerUI ** Default Interface **
 *    Windows.ApplicationModel.Contacts.Provider.IContactPickerUI2
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Contacts_Provider_ContactPickerUI_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Contacts_Provider_ContactPickerUI_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Contacts_Provider_ContactPickerUI[] = L"Windows.ApplicationModel.Contacts.Provider.ContactPickerUI";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Contacts.Provider.ContactRemovedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Contacts.Provider.IContactRemovedEventArgs ** Default Interface **
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Contacts_Provider_ContactRemovedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Contacts_Provider_ContactRemovedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Contacts_Provider_ContactRemovedEventArgs[] = L"Windows.ApplicationModel.Contacts.Provider.ContactRemovedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000





#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CApplicationModel_CContacts_CProvider_CIContactPickerUI_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CContacts_CProvider_CIContactPickerUI_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CContacts_CProvider_CIContactPickerUI __x_ABI_CWindows_CApplicationModel_CContacts_CProvider_CIContactPickerUI;

#endif // ____x_ABI_CWindows_CApplicationModel_CContacts_CProvider_CIContactPickerUI_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CContacts_CProvider_CIContactPickerUI2_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CContacts_CProvider_CIContactPickerUI2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CContacts_CProvider_CIContactPickerUI2 __x_ABI_CWindows_CApplicationModel_CContacts_CProvider_CIContactPickerUI2;

#endif // ____x_ABI_CWindows_CApplicationModel_CContacts_CProvider_CIContactPickerUI2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CContacts_CProvider_CIContactRemovedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CContacts_CProvider_CIContactRemovedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CContacts_CProvider_CIContactRemovedEventArgs __x_ABI_CWindows_CApplicationModel_CContacts_CProvider_CIContactRemovedEventArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_CContacts_CProvider_CIContactRemovedEventArgs_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CProvider__CContactPickerUI_Windows__CApplicationModel__CContacts__CProvider__CContactRemovedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CProvider__CContactPickerUI_Windows__CApplicationModel__CContacts__CProvider__CContactRemovedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CProvider__CContactPickerUI_Windows__CApplicationModel__CContacts__CProvider__CContactRemovedEventArgs __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CProvider__CContactPickerUI_Windows__CApplicationModel__CContacts__CProvider__CContactRemovedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CProvider__CContactPickerUI_Windows__CApplicationModel__CContacts__CProvider__CContactRemovedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CProvider__CContactPickerUI_Windows__CApplicationModel__CContacts__CProvider__CContactRemovedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CProvider__CContactPickerUI_Windows__CApplicationModel__CContacts__CProvider__CContactRemovedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CProvider__CContactPickerUI_Windows__CApplicationModel__CContacts__CProvider__CContactRemovedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CProvider__CContactPickerUI_Windows__CApplicationModel__CContacts__CProvider__CContactRemovedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CProvider__CContactPickerUI_Windows__CApplicationModel__CContacts__CProvider__CContactRemovedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CContacts_CProvider_CIContactPickerUI * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CContacts_CProvider_CIContactRemovedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CProvider__CContactPickerUI_Windows__CApplicationModel__CContacts__CProvider__CContactRemovedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CProvider__CContactPickerUI_Windows__CApplicationModel__CContacts__CProvider__CContactRemovedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CProvider__CContactPickerUI_Windows__CApplicationModel__CContacts__CProvider__CContactRemovedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CProvider__CContactPickerUI_Windows__CApplicationModel__CContacts__CProvider__CContactRemovedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CProvider__CContactPickerUI_Windows__CApplicationModel__CContacts__CProvider__CContactRemovedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CProvider__CContactPickerUI_Windows__CApplicationModel__CContacts__CProvider__CContactRemovedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CProvider__CContactPickerUI_Windows__CApplicationModel__CContacts__CProvider__CContactRemovedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CProvider__CContactPickerUI_Windows__CApplicationModel__CContacts__CProvider__CContactRemovedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#if !defined(____FIIterator_1_HSTRING_INTERFACE_DEFINED__)
#define ____FIIterator_1_HSTRING_INTERFACE_DEFINED__

typedef interface __FIIterator_1_HSTRING __FIIterator_1_HSTRING;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_HSTRING;

typedef struct __FIIterator_1_HSTRINGVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_HSTRING * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_HSTRING * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_HSTRING * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_HSTRING * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_HSTRING * This, /* [retval][out] */ __RPC__out HSTRING *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_HSTRING * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_HSTRING * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_HSTRING * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) HSTRING *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_HSTRINGVtbl;

interface __FIIterator_1_HSTRING
{
    CONST_VTBL struct __FIIterator_1_HSTRINGVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_HSTRING_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_HSTRING_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_HSTRING_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_HSTRING_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_HSTRING_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_HSTRING_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_HSTRING_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_HSTRING_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_HSTRING_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_HSTRING_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_HSTRING_INTERFACE_DEFINED__


#if !defined(____FIIterable_1_HSTRING_INTERFACE_DEFINED__)
#define ____FIIterable_1_HSTRING_INTERFACE_DEFINED__

typedef interface __FIIterable_1_HSTRING __FIIterable_1_HSTRING;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_HSTRING;

typedef  struct __FIIterable_1_HSTRINGVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_HSTRING * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_HSTRING * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_HSTRING * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_HSTRING * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_HSTRING * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_HSTRING * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_HSTRING * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_HSTRING **first);

    END_INTERFACE
} __FIIterable_1_HSTRINGVtbl;

interface __FIIterable_1_HSTRING
{
    CONST_VTBL struct __FIIterable_1_HSTRINGVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_HSTRING_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_HSTRING_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_HSTRING_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_HSTRING_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_HSTRING_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_HSTRING_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_HSTRING_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_HSTRING_INTERFACE_DEFINED__


#if !defined(____FIVectorView_1_HSTRING_INTERFACE_DEFINED__)
#define ____FIVectorView_1_HSTRING_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_HSTRING __FIVectorView_1_HSTRING;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_HSTRING;

typedef struct __FIVectorView_1_HSTRINGVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_HSTRING * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_HSTRING * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_HSTRING * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_HSTRING * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_HSTRING * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_HSTRING * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_HSTRING * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out HSTRING *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_HSTRING * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_HSTRING * This,
            /* [in] */ HSTRING item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_HSTRING * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) HSTRING *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_HSTRINGVtbl;

interface __FIVectorView_1_HSTRING
{
    CONST_VTBL struct __FIVectorView_1_HSTRINGVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_HSTRING_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_HSTRING_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_HSTRING_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_HSTRING_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_HSTRING_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_HSTRING_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_HSTRING_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_HSTRING_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_HSTRING_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_HSTRING_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_HSTRING_INTERFACE_DEFINED__


enum __x_ABI_CWindows_CApplicationModel_CContacts_CContactFieldType;
#if !defined(____FIIterator_1_Windows__CApplicationModel__CContacts__CContactFieldType_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CApplicationModel__CContacts__CContactFieldType_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CApplicationModel__CContacts__CContactFieldType __FIIterator_1_Windows__CApplicationModel__CContacts__CContactFieldType;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CApplicationModel__CContacts__CContactFieldType;

typedef struct __FIIterator_1_Windows__CApplicationModel__CContacts__CContactFieldTypeVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactFieldType * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactFieldType * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactFieldType * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactFieldType * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactFieldType * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactFieldType * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactFieldType * This, /* [retval][out] */ __RPC__out enum __x_ABI_CWindows_CApplicationModel_CContacts_CContactFieldType *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactFieldType * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactFieldType * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactFieldType * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) enum __x_ABI_CWindows_CApplicationModel_CContacts_CContactFieldType *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CApplicationModel__CContacts__CContactFieldTypeVtbl;

interface __FIIterator_1_Windows__CApplicationModel__CContacts__CContactFieldType
{
    CONST_VTBL struct __FIIterator_1_Windows__CApplicationModel__CContacts__CContactFieldTypeVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CApplicationModel__CContacts__CContactFieldType_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CApplicationModel__CContacts__CContactFieldType_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CApplicationModel__CContacts__CContactFieldType_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CApplicationModel__CContacts__CContactFieldType_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CApplicationModel__CContacts__CContactFieldType_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CApplicationModel__CContacts__CContactFieldType_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CApplicationModel__CContacts__CContactFieldType_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CApplicationModel__CContacts__CContactFieldType_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CApplicationModel__CContacts__CContactFieldType_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CApplicationModel__CContacts__CContactFieldType_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CApplicationModel__CContacts__CContactFieldType_INTERFACE_DEFINED__



#if !defined(____FIIterable_1_Windows__CApplicationModel__CContacts__CContactFieldType_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CApplicationModel__CContacts__CContactFieldType_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CApplicationModel__CContacts__CContactFieldType __FIIterable_1_Windows__CApplicationModel__CContacts__CContactFieldType;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CApplicationModel__CContacts__CContactFieldType;

typedef  struct __FIIterable_1_Windows__CApplicationModel__CContacts__CContactFieldTypeVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContactFieldType * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContactFieldType * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContactFieldType * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContactFieldType * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContactFieldType * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContactFieldType * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContactFieldType * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CApplicationModel__CContacts__CContactFieldType **first);

    END_INTERFACE
} __FIIterable_1_Windows__CApplicationModel__CContacts__CContactFieldTypeVtbl;

interface __FIIterable_1_Windows__CApplicationModel__CContacts__CContactFieldType
{
    CONST_VTBL struct __FIIterable_1_Windows__CApplicationModel__CContacts__CContactFieldTypeVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CApplicationModel__CContacts__CContactFieldType_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CApplicationModel__CContacts__CContactFieldType_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CApplicationModel__CContacts__CContactFieldType_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CApplicationModel__CContacts__CContactFieldType_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CApplicationModel__CContacts__CContactFieldType_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CApplicationModel__CContacts__CContactFieldType_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CApplicationModel__CContacts__CContactFieldType_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CApplicationModel__CContacts__CContactFieldType_INTERFACE_DEFINED__



#if !defined(____FIVectorView_1_Windows__CApplicationModel__CContacts__CContactFieldType_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CApplicationModel__CContacts__CContactFieldType_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactFieldType __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactFieldType;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactFieldType;

typedef struct __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactFieldTypeVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactFieldType * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactFieldType * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactFieldType * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactFieldType * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactFieldType * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactFieldType * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactFieldType * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out enum __x_ABI_CWindows_CApplicationModel_CContacts_CContactFieldType *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactFieldType * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactFieldType * This,
            /* [in] */ enum __x_ABI_CWindows_CApplicationModel_CContacts_CContactFieldType item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactFieldType * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) enum __x_ABI_CWindows_CApplicationModel_CContacts_CContactFieldType *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactFieldTypeVtbl;

interface __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactFieldType
{
    CONST_VTBL struct __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactFieldTypeVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactFieldType_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactFieldType_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactFieldType_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactFieldType_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactFieldType_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactFieldType_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactFieldType_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactFieldType_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactFieldType_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactFieldType_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CApplicationModel__CContacts__CContactFieldType_INTERFACE_DEFINED__



#if !defined(____FIVector_1_Windows__CApplicationModel__CContacts__CContactFieldType_INTERFACE_DEFINED__)
#define ____FIVector_1_Windows__CApplicationModel__CContacts__CContactFieldType_INTERFACE_DEFINED__

typedef interface __FIVector_1_Windows__CApplicationModel__CContacts__CContactFieldType __FIVector_1_Windows__CApplicationModel__CContacts__CContactFieldType;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVector_1_Windows__CApplicationModel__CContacts__CContactFieldType;

typedef struct __FIVector_1_Windows__CApplicationModel__CContacts__CContactFieldTypeVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactFieldType * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactFieldType * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactFieldType * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactFieldType * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactFieldType * This, /* [out] */ __RPC__deref_out_opt enum __x_ABI_CWindows_CApplicationModel_CContacts_CContactFieldType *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactFieldType * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactFieldType * This,
        /* [in] */ unsigned int index,
        /* [retval][out] */ __RPC__deref_out_opt enum __x_ABI_CWindows_CApplicationModel_CContacts_CContactFieldType *item);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
        __RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactFieldType * This,
        /* [retval][out] */ __RPC__out unsigned int *size);

    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactFieldType * This, /* [retval][out] */ __RPC__deref_out_opt __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactFieldType **view);

    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactFieldType * This,
        /* [in] */ __RPC__in enum __x_ABI_CWindows_CApplicationModel_CContacts_CContactFieldType item,
        /* [out] */ __RPC__out unsigned int *index,
        /* [retval][out] */ __RPC__out boolean *found);

    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactFieldType * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in enum __x_ABI_CWindows_CApplicationModel_CContacts_CContactFieldType item);

    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactFieldType * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in enum __x_ABI_CWindows_CApplicationModel_CContacts_CContactFieldType item);

    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactFieldType * This, /* [in] */ unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactFieldType * This, /* [in] */ __RPC__in enum __x_ABI_CWindows_CApplicationModel_CContacts_CContactFieldType item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactFieldType * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactFieldType * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactFieldType * This,
        /* [in] */ unsigned int startIndex,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) enum __x_ABI_CWindows_CApplicationModel_CContacts_CContactFieldType *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactFieldType * This,
        /* [in] */ unsigned int count,
        /* [size_is][in] */ __RPC__in_ecount_full(count) enum __x_ABI_CWindows_CApplicationModel_CContacts_CContactFieldType *value);

    END_INTERFACE
} __FIVector_1_Windows__CApplicationModel__CContacts__CContactFieldTypeVtbl;

interface __FIVector_1_Windows__CApplicationModel__CContacts__CContactFieldType
{
    CONST_VTBL struct __FIVector_1_Windows__CApplicationModel__CContacts__CContactFieldTypeVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVector_1_Windows__CApplicationModel__CContacts__CContactFieldType_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVector_1_Windows__CApplicationModel__CContacts__CContactFieldType_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVector_1_Windows__CApplicationModel__CContacts__CContactFieldType_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVector_1_Windows__CApplicationModel__CContacts__CContactFieldType_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVector_1_Windows__CApplicationModel__CContacts__CContactFieldType_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVector_1_Windows__CApplicationModel__CContacts__CContactFieldType_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVector_1_Windows__CApplicationModel__CContacts__CContactFieldType_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVector_1_Windows__CApplicationModel__CContacts__CContactFieldType_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVector_1_Windows__CApplicationModel__CContacts__CContactFieldType_GetView(This,view)	\
    ( (This)->lpVtbl -> GetView(This,view) ) 

#define __FIVector_1_Windows__CApplicationModel__CContacts__CContactFieldType_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVector_1_Windows__CApplicationModel__CContacts__CContactFieldType_SetAt(This,index,item)	\
    ( (This)->lpVtbl -> SetAt(This,index,item) ) 

#define __FIVector_1_Windows__CApplicationModel__CContacts__CContactFieldType_InsertAt(This,index,item)	\
    ( (This)->lpVtbl -> InsertAt(This,index,item) ) 

#define __FIVector_1_Windows__CApplicationModel__CContacts__CContactFieldType_RemoveAt(This,index)	\
    ( (This)->lpVtbl -> RemoveAt(This,index) ) 

#define __FIVector_1_Windows__CApplicationModel__CContacts__CContactFieldType_Append(This,item)	\
    ( (This)->lpVtbl -> Append(This,item) ) 

#define __FIVector_1_Windows__CApplicationModel__CContacts__CContactFieldType_RemoveAtEnd(This)	\
    ( (This)->lpVtbl -> RemoveAtEnd(This) ) 

#define __FIVector_1_Windows__CApplicationModel__CContacts__CContactFieldType_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define __FIVector_1_Windows__CApplicationModel__CContacts__CContactFieldType_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#define __FIVector_1_Windows__CApplicationModel__CContacts__CContactFieldType_ReplaceAll(This,count,value)	\
    ( (This)->lpVtbl -> ReplaceAll(This,count,value) ) 

#endif /* COBJMACROS */



#endif // ____FIVector_1_Windows__CApplicationModel__CContacts__CContactFieldType_INTERFACE_DEFINED__



#ifndef ____x_ABI_CWindows_CApplicationModel_CContacts_CIContact_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CContacts_CIContact_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CContacts_CIContact __x_ABI_CWindows_CApplicationModel_CContacts_CIContact;

#endif // ____x_ABI_CWindows_CApplicationModel_CContacts_CIContact_FWD_DEFINED__



typedef enum __x_ABI_CWindows_CApplicationModel_CContacts_CContactFieldType __x_ABI_CWindows_CApplicationModel_CContacts_CContactFieldType;


typedef enum __x_ABI_CWindows_CApplicationModel_CContacts_CContactSelectionMode __x_ABI_CWindows_CApplicationModel_CContacts_CContactSelectionMode;








typedef enum __x_ABI_CWindows_CApplicationModel_CContacts_CProvider_CAddContactResult __x_ABI_CWindows_CApplicationModel_CContacts_CProvider_CAddContactResult;
















/*
 *
 * Struct Windows.ApplicationModel.Contacts.Provider.AddContactResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CApplicationModel_CContacts_CProvider_CAddContactResult
{
    AddContactResult_Added = 0,
    AddContactResult_AlreadyAdded = 1,
    AddContactResult_Unavailable = 2,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Contacts.Provider.IContactPickerUI
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Contacts.Provider.ContactPickerUI
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CContacts_CProvider_CIContactPickerUI_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CContacts_CProvider_CIContactPickerUI_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Contacts_Provider_IContactPickerUI[] = L"Windows.ApplicationModel.Contacts.Provider.IContactPickerUI";
/* [object, uuid("E2CC1366-CF66-43C4-A96A-A5A112DB4746"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CContacts_CProvider_CIContactPickerUIVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CProvider_CIContactPickerUI * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CProvider_CIContactPickerUI * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CProvider_CIContactPickerUI * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CProvider_CIContactPickerUI * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CProvider_CIContactPickerUI * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CProvider_CIContactPickerUI * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );

    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    DEPRECATED("AddContact may be altered or unavailable for releases after Windows 8.1. Instead, use AddContact without the ID.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    /* [deprecated] */HRESULT ( STDMETHODCALLTYPE *AddContact )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CProvider_CIContactPickerUI * This,
        /* [in] */__RPC__in HSTRING id,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CApplicationModel_CContacts_CIContact * contact,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CApplicationModel_CContacts_CProvider_CAddContactResult * result
        );
    HRESULT ( STDMETHODCALLTYPE *RemoveContact )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CProvider_CIContactPickerUI * This,
        /* [in] */__RPC__in HSTRING id
        );
    HRESULT ( STDMETHODCALLTYPE *ContainsContact )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CProvider_CIContactPickerUI * This,
        /* [in] */__RPC__in HSTRING id,
        /* [retval, out] */__RPC__out boolean * isContained
        );
    
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    DEPRECATED("DesiredFields may be altered or unavailable for releases after Windows 8.1. Instead, use DesiredFieldsWithContactFieldType.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    /* [propget, deprecated] */HRESULT ( STDMETHODCALLTYPE *get_DesiredFields )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CProvider_CIContactPickerUI * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_HSTRING * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SelectionMode )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CProvider_CIContactPickerUI * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CApplicationModel_CContacts_CContactSelectionMode * value
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_ContactRemoved )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CProvider_CIContactPickerUI * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CProvider__CContactPickerUI_Windows__CApplicationModel__CContacts__CProvider__CContactRemovedEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_ContactRemoved )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CProvider_CIContactPickerUI * This,
        /* [in] */EventRegistrationToken token
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CContacts_CProvider_CIContactPickerUIVtbl;

interface __x_ABI_CWindows_CApplicationModel_CContacts_CProvider_CIContactPickerUI
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CContacts_CProvider_CIContactPickerUIVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CContacts_CProvider_CIContactPickerUI_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CContacts_CProvider_CIContactPickerUI_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CContacts_CProvider_CIContactPickerUI_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CContacts_CProvider_CIContactPickerUI_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CContacts_CProvider_CIContactPickerUI_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CContacts_CProvider_CIContactPickerUI_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
DEPRECATED("AddContact may be altered or unavailable for releases after Windows 8.1. Instead, use AddContact without the ID.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#define __x_ABI_CWindows_CApplicationModel_CContacts_CProvider_CIContactPickerUI_AddContact(This,id,contact,result) \
    ( (This)->lpVtbl->AddContact(This,id,contact,result) )

#define __x_ABI_CWindows_CApplicationModel_CContacts_CProvider_CIContactPickerUI_RemoveContact(This,id) \
    ( (This)->lpVtbl->RemoveContact(This,id) )

#define __x_ABI_CWindows_CApplicationModel_CContacts_CProvider_CIContactPickerUI_ContainsContact(This,id,isContained) \
    ( (This)->lpVtbl->ContainsContact(This,id,isContained) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
DEPRECATED("DesiredFields may be altered or unavailable for releases after Windows 8.1. Instead, use DesiredFieldsWithContactFieldType.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#define __x_ABI_CWindows_CApplicationModel_CContacts_CProvider_CIContactPickerUI_get_DesiredFields(This,value) \
    ( (This)->lpVtbl->get_DesiredFields(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CContacts_CProvider_CIContactPickerUI_get_SelectionMode(This,value) \
    ( (This)->lpVtbl->get_SelectionMode(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CContacts_CProvider_CIContactPickerUI_add_ContactRemoved(This,handler,token) \
    ( (This)->lpVtbl->add_ContactRemoved(This,handler,token) )

#define __x_ABI_CWindows_CApplicationModel_CContacts_CProvider_CIContactPickerUI_remove_ContactRemoved(This,token) \
    ( (This)->lpVtbl->remove_ContactRemoved(This,token) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CContacts_CProvider_CIContactPickerUI;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CContacts_CProvider_CIContactPickerUI_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Contacts.Provider.IContactPickerUI2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Contacts.Provider.ContactPickerUI
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CContacts_CProvider_CIContactPickerUI2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CContacts_CProvider_CIContactPickerUI2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Contacts_Provider_IContactPickerUI2[] = L"Windows.ApplicationModel.Contacts.Provider.IContactPickerUI2";
/* [object, uuid("6E449E28-7B25-4999-9B0B-875400A1E8C8"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CContacts_CProvider_CIContactPickerUI2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CProvider_CIContactPickerUI2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CProvider_CIContactPickerUI2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CProvider_CIContactPickerUI2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CProvider_CIContactPickerUI2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CProvider_CIContactPickerUI2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CProvider_CIContactPickerUI2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *AddContact )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CProvider_CIContactPickerUI2 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CApplicationModel_CContacts_CIContact * contact,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CApplicationModel_CContacts_CProvider_CAddContactResult * result
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DesiredFieldsWithContactFieldType )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CProvider_CIContactPickerUI2 * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CApplicationModel__CContacts__CContactFieldType * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CContacts_CProvider_CIContactPickerUI2Vtbl;

interface __x_ABI_CWindows_CApplicationModel_CContacts_CProvider_CIContactPickerUI2
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CContacts_CProvider_CIContactPickerUI2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CContacts_CProvider_CIContactPickerUI2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CContacts_CProvider_CIContactPickerUI2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CContacts_CProvider_CIContactPickerUI2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CContacts_CProvider_CIContactPickerUI2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CContacts_CProvider_CIContactPickerUI2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CContacts_CProvider_CIContactPickerUI2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CContacts_CProvider_CIContactPickerUI2_AddContact(This,contact,result) \
    ( (This)->lpVtbl->AddContact(This,contact,result) )

#define __x_ABI_CWindows_CApplicationModel_CContacts_CProvider_CIContactPickerUI2_get_DesiredFieldsWithContactFieldType(This,value) \
    ( (This)->lpVtbl->get_DesiredFieldsWithContactFieldType(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CContacts_CProvider_CIContactPickerUI2;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CContacts_CProvider_CIContactPickerUI2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Contacts.Provider.IContactRemovedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Contacts.Provider.ContactRemovedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CContacts_CProvider_CIContactRemovedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CContacts_CProvider_CIContactRemovedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Contacts_Provider_IContactRemovedEventArgs[] = L"Windows.ApplicationModel.Contacts.Provider.IContactRemovedEventArgs";
/* [object, uuid("6F354338-3302-4D13-AD8D-ADCC0FF9E47C"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CContacts_CProvider_CIContactRemovedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CProvider_CIContactRemovedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CProvider_CIContactRemovedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CProvider_CIContactRemovedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CProvider_CIContactRemovedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CProvider_CIContactRemovedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CProvider_CIContactRemovedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CProvider_CIContactRemovedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CContacts_CProvider_CIContactRemovedEventArgsVtbl;

interface __x_ABI_CWindows_CApplicationModel_CContacts_CProvider_CIContactRemovedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CContacts_CProvider_CIContactRemovedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CContacts_CProvider_CIContactRemovedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CContacts_CProvider_CIContactRemovedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CContacts_CProvider_CIContactRemovedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CContacts_CProvider_CIContactRemovedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CContacts_CProvider_CIContactRemovedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CContacts_CProvider_CIContactRemovedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CContacts_CProvider_CIContactRemovedEventArgs_get_Id(This,value) \
    ( (This)->lpVtbl->get_Id(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CContacts_CProvider_CIContactRemovedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CContacts_CProvider_CIContactRemovedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Contacts.Provider.ContactPickerUI
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Contacts.Provider.IContactPickerUI ** Default Interface **
 *    Windows.ApplicationModel.Contacts.Provider.IContactPickerUI2
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Contacts_Provider_ContactPickerUI_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Contacts_Provider_ContactPickerUI_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Contacts_Provider_ContactPickerUI[] = L"Windows.ApplicationModel.Contacts.Provider.ContactPickerUI";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Contacts.Provider.ContactRemovedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Contacts.Provider.IContactRemovedEventArgs ** Default Interface **
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Contacts_Provider_ContactRemovedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Contacts_Provider_ContactRemovedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Contacts_Provider_ContactRemovedEventArgs[] = L"Windows.ApplicationModel.Contacts.Provider.ContactRemovedEventArgs";
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
#endif // __windows2Eapplicationmodel2Econtacts2Eprovider_p_h__

#endif // __windows2Eapplicationmodel2Econtacts2Eprovider_h__
