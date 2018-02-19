/* Header file automatically generated from windows.phone.restricted.cellular.rcspresence.idl */
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
#ifndef __windows2Ephone2Erestricted2Ecellular2Ercspresence_h__
#define __windows2Ephone2Erestricted2Ecellular2Ercspresence_h__
#ifndef __windows2Ephone2Erestricted2Ecellular2Ercspresence_p_h__
#define __windows2Ephone2Erestricted2Ecellular2Ercspresence_p_h__


#pragma once

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

#if !defined(WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION)
#define WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION)

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
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsAddress_FWD_DEFINED__
#define ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsAddress_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Phone {
            namespace Restricted {
                namespace Cellular {
                    namespace RcsPresence {
                        interface IRcsAddress;
                    } /* Windows */
                } /* Phone */
            } /* Restricted */
        } /* Cellular */
    } /* RcsPresence */} /* ABI */
#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsAddress ABI::Windows::Phone::Restricted::Cellular::RcsPresence::IRcsAddress

#endif // ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsAddress_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsCapabilitiesReceivedArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsCapabilitiesReceivedArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Phone {
            namespace Restricted {
                namespace Cellular {
                    namespace RcsPresence {
                        interface IRcsCapabilitiesReceivedArgs;
                    } /* Windows */
                } /* Phone */
            } /* Restricted */
        } /* Cellular */
    } /* RcsPresence */} /* ABI */
#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsCapabilitiesReceivedArgs ABI::Windows::Phone::Restricted::Cellular::RcsPresence::IRcsCapabilitiesReceivedArgs

#endif // ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsCapabilitiesReceivedArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceService_FWD_DEFINED__
#define ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceService_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Phone {
            namespace Restricted {
                namespace Cellular {
                    namespace RcsPresence {
                        interface IRcsPresenceService;
                    } /* Windows */
                } /* Phone */
            } /* Restricted */
        } /* Cellular */
    } /* RcsPresence */} /* ABI */
#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceService ABI::Windows::Phone::Restricted::Cellular::RcsPresence::IRcsPresenceService

#endif // ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceService_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceSettings_FWD_DEFINED__
#define ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceSettings_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Phone {
            namespace Restricted {
                namespace Cellular {
                    namespace RcsPresence {
                        interface IRcsPresenceSettings;
                    } /* Windows */
                } /* Phone */
            } /* Restricted */
        } /* Cellular */
    } /* RcsPresence */} /* ABI */
#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceSettings ABI::Windows::Phone::Restricted::Cellular::RcsPresence::IRcsPresenceSettings

#endif // ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceSettings_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceSettings2_FWD_DEFINED__
#define ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceSettings2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Phone {
            namespace Restricted {
                namespace Cellular {
                    namespace RcsPresence {
                        interface IRcsPresenceSettings2;
                    } /* Windows */
                } /* Phone */
            } /* Restricted */
        } /* Cellular */
    } /* RcsPresence */} /* ABI */
#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceSettings2 ABI::Windows::Phone::Restricted::Cellular::RcsPresence::IRcsPresenceSettings2

#endif // ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceSettings2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPublishCapabilitiesRequestedArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPublishCapabilitiesRequestedArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Phone {
            namespace Restricted {
                namespace Cellular {
                    namespace RcsPresence {
                        interface IRcsPublishCapabilitiesRequestedArgs;
                    } /* Windows */
                } /* Phone */
            } /* Restricted */
        } /* Cellular */
    } /* RcsPresence */} /* ABI */
#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPublishCapabilitiesRequestedArgs ABI::Windows::Phone::Restricted::Cellular::RcsPresence::IRcsPublishCapabilitiesRequestedArgs

#endif // ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPublishCapabilitiesRequestedArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResource_FWD_DEFINED__
#define ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResource_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Phone {
            namespace Restricted {
                namespace Cellular {
                    namespace RcsPresence {
                        interface IRcsResource;
                    } /* Windows */
                } /* Phone */
            } /* Restricted */
        } /* Cellular */
    } /* RcsPresence */} /* ABI */
#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResource ABI::Windows::Phone::Restricted::Cellular::RcsPresence::IRcsResource

#endif // ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResource_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResourceInstance_FWD_DEFINED__
#define ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResourceInstance_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Phone {
            namespace Restricted {
                namespace Cellular {
                    namespace RcsPresence {
                        interface IRcsResourceInstance;
                    } /* Windows */
                } /* Phone */
            } /* Restricted */
        } /* Cellular */
    } /* RcsPresence */} /* ABI */
#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResourceInstance ABI::Windows::Phone::Restricted::Cellular::RcsPresence::IRcsResourceInstance

#endif // ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResourceInstance_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResourceList_FWD_DEFINED__
#define ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResourceList_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Phone {
            namespace Restricted {
                namespace Cellular {
                    namespace RcsPresence {
                        interface IRcsResourceList;
                    } /* Windows */
                } /* Phone */
            } /* Restricted */
        } /* Cellular */
    } /* RcsPresence */} /* ABI */
#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResourceList ABI::Windows::Phone::Restricted::Cellular::RcsPresence::IRcsResourceList

#endif // ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResourceList_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResponse_FWD_DEFINED__
#define ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResponse_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Phone {
            namespace Restricted {
                namespace Cellular {
                    namespace RcsPresence {
                        interface IRcsResponse;
                    } /* Windows */
                } /* Phone */
            } /* Restricted */
        } /* Cellular */
    } /* RcsPresence */} /* ABI */
#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResponse ABI::Windows::Phone::Restricted::Cellular::RcsPresence::IRcsResponse

#endif // ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResponse_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsService_FWD_DEFINED__
#define ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsService_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Phone {
            namespace Restricted {
                namespace Cellular {
                    namespace RcsPresence {
                        interface IRcsService;
                    } /* Windows */
                } /* Phone */
            } /* Restricted */
        } /* Cellular */
    } /* RcsPresence */} /* ABI */
#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsService ABI::Windows::Phone::Restricted::Cellular::RcsPresence::IRcsService

#endif // ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsService_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceAvailabilityChangedArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceAvailabilityChangedArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Phone {
            namespace Restricted {
                namespace Cellular {
                    namespace RcsPresence {
                        interface IRcsServiceAvailabilityChangedArgs;
                    } /* Windows */
                } /* Phone */
            } /* Restricted */
        } /* Cellular */
    } /* RcsPresence */} /* ABI */
#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceAvailabilityChangedArgs ABI::Windows::Phone::Restricted::Cellular::RcsPresence::IRcsServiceAvailabilityChangedArgs

#endif // ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceAvailabilityChangedArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceDescription_FWD_DEFINED__
#define ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceDescription_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Phone {
            namespace Restricted {
                namespace Cellular {
                    namespace RcsPresence {
                        interface IRcsServiceDescription;
                    } /* Windows */
                } /* Phone */
            } /* Restricted */
        } /* Cellular */
    } /* RcsPresence */} /* ABI */
#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceDescription ABI::Windows::Phone::Restricted::Cellular::RcsPresence::IRcsServiceDescription

#endif // ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceDescription_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceStatusChangedArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceStatusChangedArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Phone {
            namespace Restricted {
                namespace Cellular {
                    namespace RcsPresence {
                        interface IRcsServiceStatusChangedArgs;
                    } /* Windows */
                } /* Phone */
            } /* Restricted */
        } /* Cellular */
    } /* RcsPresence */} /* ABI */
#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceStatusChangedArgs ABI::Windows::Phone::Restricted::Cellular::RcsPresence::IRcsServiceStatusChangedArgs

#endif // ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceStatusChangedArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceTuple_FWD_DEFINED__
#define ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceTuple_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Phone {
            namespace Restricted {
                namespace Cellular {
                    namespace RcsPresence {
                        interface IRcsServiceTuple;
                    } /* Windows */
                } /* Phone */
            } /* Restricted */
        } /* Cellular */
    } /* RcsPresence */} /* ABI */
#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceTuple ABI::Windows::Phone::Restricted::Cellular::RcsPresence::IRcsServiceTuple

#endif // ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceTuple_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsSubscriptionReceivedArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsSubscriptionReceivedArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Phone {
            namespace Restricted {
                namespace Cellular {
                    namespace RcsPresence {
                        interface IRcsSubscriptionReceivedArgs;
                    } /* Windows */
                } /* Phone */
            } /* Restricted */
        } /* Cellular */
    } /* RcsPresence */} /* ABI */
#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsSubscriptionReceivedArgs ABI::Windows::Phone::Restricted::Cellular::RcsPresence::IRcsSubscriptionReceivedArgs

#endif // ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsSubscriptionReceivedArgs_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Windows {
        namespace Phone {
            namespace Restricted {
                namespace Cellular {
                    namespace RcsPresence {
                        class RcsServiceTuple;
                    } /* Windows */
                } /* Phone */
            } /* Restricted */
        } /* Cellular */
    } /* RcsPresence */} /* ABI */


#if WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTuple_USE
#define DEF___FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTuple_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("411afc44-9e33-55a0-9eba-9b45f60bd581"))
IIterator<ABI::Windows::Phone::Restricted::Cellular::RcsPresence::RcsServiceTuple*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Phone::Restricted::Cellular::RcsPresence::RcsServiceTuple*, ABI::Windows::Phone::Restricted::Cellular::RcsPresence::IRcsServiceTuple*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Phone.Restricted.Cellular.RcsPresence.RcsServiceTuple>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Phone::Restricted::Cellular::RcsPresence::RcsServiceTuple*> __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTuple_t;
#define __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTuple ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTuple_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTuple ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Phone::Restricted::Cellular::RcsPresence::IRcsServiceTuple*>
//#define __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTuple_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Phone::Restricted::Cellular::RcsPresence::IRcsServiceTuple*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTuple_USE */


#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000


#if WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTuple_USE
#define DEF___FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTuple_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("12988432-f2dc-51de-843d-9422cd780083"))
IIterable<ABI::Windows::Phone::Restricted::Cellular::RcsPresence::RcsServiceTuple*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Phone::Restricted::Cellular::RcsPresence::RcsServiceTuple*, ABI::Windows::Phone::Restricted::Cellular::RcsPresence::IRcsServiceTuple*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Phone.Restricted.Cellular.RcsPresence.RcsServiceTuple>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Phone::Restricted::Cellular::RcsPresence::RcsServiceTuple*> __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTuple_t;
#define __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTuple ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTuple_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTuple ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Phone::Restricted::Cellular::RcsPresence::IRcsServiceTuple*>
//#define __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTuple_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Phone::Restricted::Cellular::RcsPresence::IRcsServiceTuple*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTuple_USE */


#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000


#if WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTuple_USE
#define DEF___FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTuple_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("6b336388-e48d-53ba-b01d-285a80837073"))
IVectorView<ABI::Windows::Phone::Restricted::Cellular::RcsPresence::RcsServiceTuple*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Phone::Restricted::Cellular::RcsPresence::RcsServiceTuple*, ABI::Windows::Phone::Restricted::Cellular::RcsPresence::IRcsServiceTuple*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Phone.Restricted.Cellular.RcsPresence.RcsServiceTuple>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Phone::Restricted::Cellular::RcsPresence::RcsServiceTuple*> __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTuple_t;
#define __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTuple ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTuple_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTuple ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Phone::Restricted::Cellular::RcsPresence::IRcsServiceTuple*>
//#define __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTuple_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Phone::Restricted::Cellular::RcsPresence::IRcsServiceTuple*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTuple_USE */


#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Phone {
            namespace Restricted {
                namespace Cellular {
                    namespace RcsPresence {
                        class RcsServiceDescription;
                    } /* Windows */
                } /* Phone */
            } /* Restricted */
        } /* Cellular */
    } /* RcsPresence */} /* ABI */


#if WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceDescription_USE
#define DEF___FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceDescription_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("c54d38f1-ea0f-52da-ad36-9d11eb7f9d05"))
IIterator<ABI::Windows::Phone::Restricted::Cellular::RcsPresence::RcsServiceDescription*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Phone::Restricted::Cellular::RcsPresence::RcsServiceDescription*, ABI::Windows::Phone::Restricted::Cellular::RcsPresence::IRcsServiceDescription*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Phone.Restricted.Cellular.RcsPresence.RcsServiceDescription>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Phone::Restricted::Cellular::RcsPresence::RcsServiceDescription*> __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceDescription_t;
#define __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceDescription ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceDescription_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceDescription ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Phone::Restricted::Cellular::RcsPresence::IRcsServiceDescription*>
//#define __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceDescription_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Phone::Restricted::Cellular::RcsPresence::IRcsServiceDescription*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceDescription_USE */


#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000


#if WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceDescription_USE
#define DEF___FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceDescription_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("694dd1cf-0b7e-5899-8fa5-4f041da43fb3"))
IIterable<ABI::Windows::Phone::Restricted::Cellular::RcsPresence::RcsServiceDescription*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Phone::Restricted::Cellular::RcsPresence::RcsServiceDescription*, ABI::Windows::Phone::Restricted::Cellular::RcsPresence::IRcsServiceDescription*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Phone.Restricted.Cellular.RcsPresence.RcsServiceDescription>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Phone::Restricted::Cellular::RcsPresence::RcsServiceDescription*> __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceDescription_t;
#define __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceDescription ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceDescription_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceDescription ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Phone::Restricted::Cellular::RcsPresence::IRcsServiceDescription*>
//#define __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceDescription_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Phone::Restricted::Cellular::RcsPresence::IRcsServiceDescription*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceDescription_USE */


#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000


#if WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceDescription_USE
#define DEF___FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceDescription_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("b22d134f-5141-51ea-b022-131d14a8995d"))
IVectorView<ABI::Windows::Phone::Restricted::Cellular::RcsPresence::RcsServiceDescription*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Phone::Restricted::Cellular::RcsPresence::RcsServiceDescription*, ABI::Windows::Phone::Restricted::Cellular::RcsPresence::IRcsServiceDescription*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Phone.Restricted.Cellular.RcsPresence.RcsServiceDescription>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Phone::Restricted::Cellular::RcsPresence::RcsServiceDescription*> __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceDescription_t;
#define __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceDescription ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceDescription_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceDescription ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Phone::Restricted::Cellular::RcsPresence::IRcsServiceDescription*>
//#define __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceDescription_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Phone::Restricted::Cellular::RcsPresence::IRcsServiceDescription*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceDescription_USE */


#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Phone {
            namespace Restricted {
                namespace Cellular {
                    namespace RcsPresence {
                        class RcsResponse;
                    } /* Windows */
                } /* Phone */
            } /* Restricted */
        } /* Cellular */
    } /* RcsPresence */} /* ABI */


#if WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResponse_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResponse_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("591a4dbe-8f6d-5e03-ba9c-f319db8923cd"))
IAsyncOperationCompletedHandler<ABI::Windows::Phone::Restricted::Cellular::RcsPresence::RcsResponse*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Phone::Restricted::Cellular::RcsPresence::RcsResponse*, ABI::Windows::Phone::Restricted::Cellular::RcsPresence::IRcsResponse*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Phone.Restricted.Cellular.RcsPresence.RcsResponse>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::Phone::Restricted::Cellular::RcsPresence::RcsResponse*> __FIAsyncOperationCompletedHandler_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResponse_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResponse ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResponse_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResponse ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Phone::Restricted::Cellular::RcsPresence::IRcsResponse*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResponse_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Phone::Restricted::Cellular::RcsPresence::IRcsResponse*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResponse_USE */


#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000


#if WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResponse_USE
#define DEF___FIAsyncOperation_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResponse_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("9083be4a-2651-5131-868d-59f2c22779a5"))
IAsyncOperation<ABI::Windows::Phone::Restricted::Cellular::RcsPresence::RcsResponse*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Phone::Restricted::Cellular::RcsPresence::RcsResponse*, ABI::Windows::Phone::Restricted::Cellular::RcsPresence::IRcsResponse*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Phone.Restricted.Cellular.RcsPresence.RcsResponse>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::Phone::Restricted::Cellular::RcsPresence::RcsResponse*> __FIAsyncOperation_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResponse_t;
#define __FIAsyncOperation_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResponse ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResponse_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResponse ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Phone::Restricted::Cellular::RcsPresence::IRcsResponse*>
//#define __FIAsyncOperation_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResponse_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Phone::Restricted::Cellular::RcsPresence::IRcsResponse*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResponse_USE */


#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Phone {
            namespace Restricted {
                namespace Cellular {
                    namespace RcsPresence {
                        class RcsPresenceService;
                    } /* Windows */
                } /* Phone */
            } /* Restricted */
        } /* Cellular */
    } /* RcsPresence */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Phone {
            namespace Restricted {
                namespace Cellular {
                    namespace RcsPresence {
                        class RcsPublishCapabilitiesRequestedArgs;
                    } /* Windows */
                } /* Phone */
            } /* Restricted */
        } /* Cellular */
    } /* RcsPresence */} /* ABI */


#if WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsPresenceService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsPublishCapabilitiesRequestedArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsPresenceService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsPublishCapabilitiesRequestedArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("52b4d431-173c-5773-8401-228b591a5758"))
ITypedEventHandler<ABI::Windows::Phone::Restricted::Cellular::RcsPresence::RcsPresenceService*,ABI::Windows::Phone::Restricted::Cellular::RcsPresence::RcsPublishCapabilitiesRequestedArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Phone::Restricted::Cellular::RcsPresence::RcsPresenceService*, ABI::Windows::Phone::Restricted::Cellular::RcsPresence::IRcsPresenceService*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Phone::Restricted::Cellular::RcsPresence::RcsPublishCapabilitiesRequestedArgs*, ABI::Windows::Phone::Restricted::Cellular::RcsPresence::IRcsPublishCapabilitiesRequestedArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.Phone.Restricted.Cellular.RcsPresence.RcsPresenceService, Windows.Phone.Restricted.Cellular.RcsPresence.RcsPublishCapabilitiesRequestedArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::Phone::Restricted::Cellular::RcsPresence::RcsPresenceService*,ABI::Windows::Phone::Restricted::Cellular::RcsPresence::RcsPublishCapabilitiesRequestedArgs*> __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsPresenceService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsPublishCapabilitiesRequestedArgs_t;
#define __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsPresenceService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsPublishCapabilitiesRequestedArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsPresenceService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsPublishCapabilitiesRequestedArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsPresenceService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsPublishCapabilitiesRequestedArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Phone::Restricted::Cellular::RcsPresence::IRcsPresenceService*,ABI::Windows::Phone::Restricted::Cellular::RcsPresence::IRcsPublishCapabilitiesRequestedArgs*>
//#define __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsPresenceService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsPublishCapabilitiesRequestedArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Phone::Restricted::Cellular::RcsPresence::IRcsPresenceService*,ABI::Windows::Phone::Restricted::Cellular::RcsPresence::IRcsPublishCapabilitiesRequestedArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsPresenceService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsPublishCapabilitiesRequestedArgs_USE */


#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000


namespace ABI {
    namespace Windows {
        namespace Phone {
            namespace Restricted {
                namespace Cellular {
                    namespace RcsPresence {
                        class RcsCapabilitiesReceivedArgs;
                    } /* Windows */
                } /* Phone */
            } /* Restricted */
        } /* Cellular */
    } /* RcsPresence */} /* ABI */


#if WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsPresenceService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsCapabilitiesReceivedArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsPresenceService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsCapabilitiesReceivedArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("2cd44b00-b4a5-5383-b4f8-4bbd096d5f63"))
ITypedEventHandler<ABI::Windows::Phone::Restricted::Cellular::RcsPresence::RcsPresenceService*,ABI::Windows::Phone::Restricted::Cellular::RcsPresence::RcsCapabilitiesReceivedArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Phone::Restricted::Cellular::RcsPresence::RcsPresenceService*, ABI::Windows::Phone::Restricted::Cellular::RcsPresence::IRcsPresenceService*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Phone::Restricted::Cellular::RcsPresence::RcsCapabilitiesReceivedArgs*, ABI::Windows::Phone::Restricted::Cellular::RcsPresence::IRcsCapabilitiesReceivedArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.Phone.Restricted.Cellular.RcsPresence.RcsPresenceService, Windows.Phone.Restricted.Cellular.RcsPresence.RcsCapabilitiesReceivedArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::Phone::Restricted::Cellular::RcsPresence::RcsPresenceService*,ABI::Windows::Phone::Restricted::Cellular::RcsPresence::RcsCapabilitiesReceivedArgs*> __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsPresenceService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsCapabilitiesReceivedArgs_t;
#define __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsPresenceService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsCapabilitiesReceivedArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsPresenceService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsCapabilitiesReceivedArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsPresenceService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsCapabilitiesReceivedArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Phone::Restricted::Cellular::RcsPresence::IRcsPresenceService*,ABI::Windows::Phone::Restricted::Cellular::RcsPresence::IRcsCapabilitiesReceivedArgs*>
//#define __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsPresenceService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsCapabilitiesReceivedArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Phone::Restricted::Cellular::RcsPresence::IRcsPresenceService*,ABI::Windows::Phone::Restricted::Cellular::RcsPresence::IRcsCapabilitiesReceivedArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsPresenceService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsCapabilitiesReceivedArgs_USE */


#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Phone {
            namespace Restricted {
                namespace Cellular {
                    namespace RcsPresence {
                        class RcsAddress;
                    } /* Windows */
                } /* Phone */
            } /* Restricted */
        } /* Cellular */
    } /* RcsPresence */} /* ABI */


#if WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsAddress_USE
#define DEF___FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsAddress_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("1837aba2-84fe-5925-b7a9-0a1e5dce599a"))
IIterator<ABI::Windows::Phone::Restricted::Cellular::RcsPresence::RcsAddress*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Phone::Restricted::Cellular::RcsPresence::RcsAddress*, ABI::Windows::Phone::Restricted::Cellular::RcsPresence::IRcsAddress*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Phone.Restricted.Cellular.RcsPresence.RcsAddress>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Phone::Restricted::Cellular::RcsPresence::RcsAddress*> __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsAddress_t;
#define __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsAddress ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsAddress_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsAddress ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Phone::Restricted::Cellular::RcsPresence::IRcsAddress*>
//#define __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsAddress_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Phone::Restricted::Cellular::RcsPresence::IRcsAddress*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsAddress_USE */


#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000


#if WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsAddress_USE
#define DEF___FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsAddress_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("3b73f575-ea78-5ade-abc5-93236608703d"))
IIterable<ABI::Windows::Phone::Restricted::Cellular::RcsPresence::RcsAddress*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Phone::Restricted::Cellular::RcsPresence::RcsAddress*, ABI::Windows::Phone::Restricted::Cellular::RcsPresence::IRcsAddress*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Phone.Restricted.Cellular.RcsPresence.RcsAddress>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Phone::Restricted::Cellular::RcsPresence::RcsAddress*> __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsAddress_t;
#define __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsAddress ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsAddress_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsAddress ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Phone::Restricted::Cellular::RcsPresence::IRcsAddress*>
//#define __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsAddress_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Phone::Restricted::Cellular::RcsPresence::IRcsAddress*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsAddress_USE */


#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000


#if WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsAddress_USE
#define DEF___FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsAddress_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("d9ce6de2-3e28-5eb0-b6e1-2772141d62bf"))
IVectorView<ABI::Windows::Phone::Restricted::Cellular::RcsPresence::RcsAddress*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Phone::Restricted::Cellular::RcsPresence::RcsAddress*, ABI::Windows::Phone::Restricted::Cellular::RcsPresence::IRcsAddress*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Phone.Restricted.Cellular.RcsPresence.RcsAddress>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Phone::Restricted::Cellular::RcsPresence::RcsAddress*> __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsAddress_t;
#define __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsAddress ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsAddress_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsAddress ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Phone::Restricted::Cellular::RcsPresence::IRcsAddress*>
//#define __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsAddress_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Phone::Restricted::Cellular::RcsPresence::IRcsAddress*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsAddress_USE */


#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000


namespace ABI {
    namespace Windows {
        namespace Phone {
            namespace Restricted {
                namespace Cellular {
                    namespace RcsPresence {
                        class RcsSubscriptionReceivedArgs;
                    } /* Windows */
                } /* Phone */
            } /* Restricted */
        } /* Cellular */
    } /* RcsPresence */} /* ABI */


#if WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsPresenceService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsSubscriptionReceivedArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsPresenceService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsSubscriptionReceivedArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("4f4fc6b0-e5d1-5df7-a142-491daed647f7"))
ITypedEventHandler<ABI::Windows::Phone::Restricted::Cellular::RcsPresence::RcsPresenceService*,ABI::Windows::Phone::Restricted::Cellular::RcsPresence::RcsSubscriptionReceivedArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Phone::Restricted::Cellular::RcsPresence::RcsPresenceService*, ABI::Windows::Phone::Restricted::Cellular::RcsPresence::IRcsPresenceService*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Phone::Restricted::Cellular::RcsPresence::RcsSubscriptionReceivedArgs*, ABI::Windows::Phone::Restricted::Cellular::RcsPresence::IRcsSubscriptionReceivedArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.Phone.Restricted.Cellular.RcsPresence.RcsPresenceService, Windows.Phone.Restricted.Cellular.RcsPresence.RcsSubscriptionReceivedArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::Phone::Restricted::Cellular::RcsPresence::RcsPresenceService*,ABI::Windows::Phone::Restricted::Cellular::RcsPresence::RcsSubscriptionReceivedArgs*> __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsPresenceService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsSubscriptionReceivedArgs_t;
#define __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsPresenceService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsSubscriptionReceivedArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsPresenceService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsSubscriptionReceivedArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsPresenceService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsSubscriptionReceivedArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Phone::Restricted::Cellular::RcsPresence::IRcsPresenceService*,ABI::Windows::Phone::Restricted::Cellular::RcsPresence::IRcsSubscriptionReceivedArgs*>
//#define __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsPresenceService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsSubscriptionReceivedArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Phone::Restricted::Cellular::RcsPresence::IRcsPresenceService*,ABI::Windows::Phone::Restricted::Cellular::RcsPresence::IRcsSubscriptionReceivedArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsPresenceService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsSubscriptionReceivedArgs_USE */


#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Phone {
            namespace Restricted {
                namespace Cellular {
                    namespace RcsPresence {
                        class RcsResourceInstance;
                    } /* Windows */
                } /* Phone */
            } /* Restricted */
        } /* Cellular */
    } /* RcsPresence */} /* ABI */


#if WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceInstance_USE
#define DEF___FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceInstance_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("c50dcb54-97ec-58a5-a6c7-51315f876a68"))
IIterator<ABI::Windows::Phone::Restricted::Cellular::RcsPresence::RcsResourceInstance*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Phone::Restricted::Cellular::RcsPresence::RcsResourceInstance*, ABI::Windows::Phone::Restricted::Cellular::RcsPresence::IRcsResourceInstance*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Phone.Restricted.Cellular.RcsPresence.RcsResourceInstance>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Phone::Restricted::Cellular::RcsPresence::RcsResourceInstance*> __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceInstance_t;
#define __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceInstance ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceInstance_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceInstance ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Phone::Restricted::Cellular::RcsPresence::IRcsResourceInstance*>
//#define __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceInstance_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Phone::Restricted::Cellular::RcsPresence::IRcsResourceInstance*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceInstance_USE */


#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000


#if WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceInstance_USE
#define DEF___FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceInstance_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("8e1df4ca-5c9f-58f4-af6e-ef84f35faff7"))
IIterable<ABI::Windows::Phone::Restricted::Cellular::RcsPresence::RcsResourceInstance*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Phone::Restricted::Cellular::RcsPresence::RcsResourceInstance*, ABI::Windows::Phone::Restricted::Cellular::RcsPresence::IRcsResourceInstance*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Phone.Restricted.Cellular.RcsPresence.RcsResourceInstance>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Phone::Restricted::Cellular::RcsPresence::RcsResourceInstance*> __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceInstance_t;
#define __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceInstance ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceInstance_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceInstance ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Phone::Restricted::Cellular::RcsPresence::IRcsResourceInstance*>
//#define __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceInstance_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Phone::Restricted::Cellular::RcsPresence::IRcsResourceInstance*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceInstance_USE */


#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000


#if WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceInstance_USE
#define DEF___FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceInstance_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("999d7269-f769-5bfe-8b8d-536cb5f0d1b0"))
IVectorView<ABI::Windows::Phone::Restricted::Cellular::RcsPresence::RcsResourceInstance*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Phone::Restricted::Cellular::RcsPresence::RcsResourceInstance*, ABI::Windows::Phone::Restricted::Cellular::RcsPresence::IRcsResourceInstance*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Phone.Restricted.Cellular.RcsPresence.RcsResourceInstance>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Phone::Restricted::Cellular::RcsPresence::RcsResourceInstance*> __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceInstance_t;
#define __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceInstance ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceInstance_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceInstance ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Phone::Restricted::Cellular::RcsPresence::IRcsResourceInstance*>
//#define __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceInstance_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Phone::Restricted::Cellular::RcsPresence::IRcsResourceInstance*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceInstance_USE */


#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Phone {
            namespace Restricted {
                namespace Cellular {
                    namespace RcsPresence {
                        class RcsResource;
                    } /* Windows */
                } /* Phone */
            } /* Restricted */
        } /* Cellular */
    } /* RcsPresence */} /* ABI */


#if WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResource_USE
#define DEF___FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResource_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("5ef841cc-b71b-5d0b-97b0-1dd3c8d414b7"))
IIterator<ABI::Windows::Phone::Restricted::Cellular::RcsPresence::RcsResource*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Phone::Restricted::Cellular::RcsPresence::RcsResource*, ABI::Windows::Phone::Restricted::Cellular::RcsPresence::IRcsResource*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Phone.Restricted.Cellular.RcsPresence.RcsResource>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Phone::Restricted::Cellular::RcsPresence::RcsResource*> __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResource_t;
#define __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResource ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResource_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResource ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Phone::Restricted::Cellular::RcsPresence::IRcsResource*>
//#define __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResource_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Phone::Restricted::Cellular::RcsPresence::IRcsResource*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResource_USE */


#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000


#if WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResource_USE
#define DEF___FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResource_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("51b4c838-ca89-5a93-baee-9fb3fce8ff27"))
IIterable<ABI::Windows::Phone::Restricted::Cellular::RcsPresence::RcsResource*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Phone::Restricted::Cellular::RcsPresence::RcsResource*, ABI::Windows::Phone::Restricted::Cellular::RcsPresence::IRcsResource*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Phone.Restricted.Cellular.RcsPresence.RcsResource>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Phone::Restricted::Cellular::RcsPresence::RcsResource*> __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResource_t;
#define __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResource ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResource_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResource ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Phone::Restricted::Cellular::RcsPresence::IRcsResource*>
//#define __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResource_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Phone::Restricted::Cellular::RcsPresence::IRcsResource*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResource_USE */


#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000


#if WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResource_USE
#define DEF___FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResource_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("96806675-996d-571b-8daa-c6193aa6afc2"))
IVectorView<ABI::Windows::Phone::Restricted::Cellular::RcsPresence::RcsResource*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Phone::Restricted::Cellular::RcsPresence::RcsResource*, ABI::Windows::Phone::Restricted::Cellular::RcsPresence::IRcsResource*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Phone.Restricted.Cellular.RcsPresence.RcsResource>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Phone::Restricted::Cellular::RcsPresence::RcsResource*> __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResource_t;
#define __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResource ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResource_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResource ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Phone::Restricted::Cellular::RcsPresence::IRcsResource*>
//#define __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResource_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Phone::Restricted::Cellular::RcsPresence::IRcsResource*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResource_USE */


#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Phone {
            namespace Restricted {
                namespace Cellular {
                    namespace RcsPresence {
                        enum RcsServiceStatus : int;
                    } /* Windows */
                } /* Phone */
            } /* Restricted */
        } /* Cellular */
    } /* RcsPresence */} /* ABI */


#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceStatus_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceStatus_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("eb9e7be6-7508-50f6-ad32-243dc2a650e8"))
IAsyncOperationCompletedHandler<enum ABI::Windows::Phone::Restricted::Cellular::RcsPresence::RcsServiceStatus> : IAsyncOperationCompletedHandler_impl<enum ABI::Windows::Phone::Restricted::Cellular::RcsPresence::RcsServiceStatus> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Phone.Restricted.Cellular.RcsPresence.RcsServiceStatus>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<enum ABI::Windows::Phone::Restricted::Cellular::RcsPresence::RcsServiceStatus> __FIAsyncOperationCompletedHandler_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceStatus_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceStatus ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceStatus_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceStatus ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Phone::Restricted::Cellular::RcsPresence::RcsServiceStatus>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceStatus_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Phone::Restricted::Cellular::RcsPresence::RcsServiceStatus>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceStatus_USE */





#ifndef DEF___FIAsyncOperation_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceStatus_USE
#define DEF___FIAsyncOperation_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceStatus_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("e1b03034-e032-5f2a-b6f0-ef0550149ba3"))
IAsyncOperation<enum ABI::Windows::Phone::Restricted::Cellular::RcsPresence::RcsServiceStatus> : IAsyncOperation_impl<enum ABI::Windows::Phone::Restricted::Cellular::RcsPresence::RcsServiceStatus> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Phone.Restricted.Cellular.RcsPresence.RcsServiceStatus>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<enum ABI::Windows::Phone::Restricted::Cellular::RcsPresence::RcsServiceStatus> __FIAsyncOperation_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceStatus_t;
#define __FIAsyncOperation_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceStatus ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceStatus_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceStatus ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Phone::Restricted::Cellular::RcsPresence::RcsServiceStatus>
//#define __FIAsyncOperation_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceStatus_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Phone::Restricted::Cellular::RcsPresence::RcsServiceStatus>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceStatus_USE */




namespace ABI {
    namespace Windows {
        namespace Phone {
            namespace Restricted {
                namespace Cellular {
                    namespace RcsPresence {
                        class RcsServiceStatusChangedArgs;
                    } /* Windows */
                } /* Phone */
            } /* Restricted */
        } /* Cellular */
    } /* RcsPresence */} /* ABI */


#if WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CIRcsService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceStatusChangedArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CIRcsService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceStatusChangedArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("37f6d1f6-955f-5763-a302-c52902627206"))
ITypedEventHandler<ABI::Windows::Phone::Restricted::Cellular::RcsPresence::IRcsService*,ABI::Windows::Phone::Restricted::Cellular::RcsPresence::RcsServiceStatusChangedArgs*> : ITypedEventHandler_impl<ABI::Windows::Phone::Restricted::Cellular::RcsPresence::IRcsService*,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Phone::Restricted::Cellular::RcsPresence::RcsServiceStatusChangedArgs*, ABI::Windows::Phone::Restricted::Cellular::RcsPresence::IRcsServiceStatusChangedArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.Phone.Restricted.Cellular.RcsPresence.IRcsService, Windows.Phone.Restricted.Cellular.RcsPresence.RcsServiceStatusChangedArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::Phone::Restricted::Cellular::RcsPresence::IRcsService*,ABI::Windows::Phone::Restricted::Cellular::RcsPresence::RcsServiceStatusChangedArgs*> __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CIRcsService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceStatusChangedArgs_t;
#define __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CIRcsService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceStatusChangedArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CIRcsService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceStatusChangedArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CIRcsService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceStatusChangedArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Phone::Restricted::Cellular::RcsPresence::IRcsService*,ABI::Windows::Phone::Restricted::Cellular::RcsPresence::IRcsServiceStatusChangedArgs*>
//#define __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CIRcsService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceStatusChangedArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Phone::Restricted::Cellular::RcsPresence::IRcsService*,ABI::Windows::Phone::Restricted::Cellular::RcsPresence::IRcsServiceStatusChangedArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CIRcsService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceStatusChangedArgs_USE */


#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000


namespace ABI {
    namespace Windows {
        namespace Phone {
            namespace Restricted {
                namespace Cellular {
                    namespace RcsPresence {
                        class RcsServiceAvailabilityChangedArgs;
                    } /* Windows */
                } /* Phone */
            } /* Restricted */
        } /* Cellular */
    } /* RcsPresence */} /* ABI */


#if WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CIRcsService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceAvailabilityChangedArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CIRcsService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceAvailabilityChangedArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("7963b191-66f9-5c3c-9c66-9b3e1b447202"))
ITypedEventHandler<ABI::Windows::Phone::Restricted::Cellular::RcsPresence::IRcsService*,ABI::Windows::Phone::Restricted::Cellular::RcsPresence::RcsServiceAvailabilityChangedArgs*> : ITypedEventHandler_impl<ABI::Windows::Phone::Restricted::Cellular::RcsPresence::IRcsService*,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Phone::Restricted::Cellular::RcsPresence::RcsServiceAvailabilityChangedArgs*, ABI::Windows::Phone::Restricted::Cellular::RcsPresence::IRcsServiceAvailabilityChangedArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.Phone.Restricted.Cellular.RcsPresence.IRcsService, Windows.Phone.Restricted.Cellular.RcsPresence.RcsServiceAvailabilityChangedArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::Phone::Restricted::Cellular::RcsPresence::IRcsService*,ABI::Windows::Phone::Restricted::Cellular::RcsPresence::RcsServiceAvailabilityChangedArgs*> __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CIRcsService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceAvailabilityChangedArgs_t;
#define __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CIRcsService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceAvailabilityChangedArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CIRcsService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceAvailabilityChangedArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CIRcsService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceAvailabilityChangedArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Phone::Restricted::Cellular::RcsPresence::IRcsService*,ABI::Windows::Phone::Restricted::Cellular::RcsPresence::IRcsServiceAvailabilityChangedArgs*>
//#define __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CIRcsService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceAvailabilityChangedArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Phone::Restricted::Cellular::RcsPresence::IRcsService*,ABI::Windows::Phone::Restricted::Cellular::RcsPresence::IRcsServiceAvailabilityChangedArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CIRcsService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceAvailabilityChangedArgs_USE */


#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000



namespace ABI {
    namespace Windows {
        namespace Foundation {
            
            typedef struct DateTime DateTime;
            
        } /* Windows */
    } /* Foundation */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Foundation {
            
            typedef struct TimeSpan TimeSpan;
            
        } /* Windows */
    } /* Foundation */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Foundation {
            class Uri;
        } /* Windows */
    } /* Foundation */} /* ABI */

#ifndef ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Foundation {
            interface IUriRuntimeClass;
        } /* Windows */
    } /* Foundation */} /* ABI */
#define __x_ABI_CWindows_CFoundation_CIUriRuntimeClass ABI::Windows::Foundation::IUriRuntimeClass

#endif // ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__





namespace ABI {
    namespace Windows {
        namespace Phone {
            namespace Restricted {
                namespace Cellular {
                    namespace RcsPresence {
                        
                        typedef enum RcsMediaType : int RcsMediaType;
                        
                    } /* Windows */
                } /* Phone */
            } /* Restricted */
        } /* Cellular */
    } /* RcsPresence */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Phone {
            namespace Restricted {
                namespace Cellular {
                    namespace RcsPresence {
                        
                        typedef enum RcsNetworkType : int RcsNetworkType;
                        
                    } /* Windows */
                } /* Phone */
            } /* Restricted */
        } /* Cellular */
    } /* RcsPresence */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Phone {
            namespace Restricted {
                namespace Cellular {
                    namespace RcsPresence {
                        
                        typedef enum RcsPublishRequestReason : int RcsPublishRequestReason;
                        
                    } /* Windows */
                } /* Phone */
            } /* Restricted */
        } /* Cellular */
    } /* RcsPresence */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Phone {
            namespace Restricted {
                namespace Cellular {
                    namespace RcsPresence {
                        
                        typedef enum RcsResourceState : int RcsResourceState;
                        
                    } /* Windows */
                } /* Phone */
            } /* Restricted */
        } /* Cellular */
    } /* RcsPresence */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Phone {
            namespace Restricted {
                namespace Cellular {
                    namespace RcsPresence {
                        
                        typedef enum RcsServiceAvailability : int RcsServiceAvailability;
                        
                    } /* Windows */
                } /* Phone */
            } /* Restricted */
        } /* Cellular */
    } /* RcsPresence */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Phone {
            namespace Restricted {
                namespace Cellular {
                    namespace RcsPresence {
                        
                        typedef enum RcsServiceStatus : int RcsServiceStatus;
                        
                    } /* Windows */
                } /* Phone */
            } /* Restricted */
        } /* Cellular */
    } /* RcsPresence */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Phone {
            namespace Restricted {
                namespace Cellular {
                    namespace RcsPresence {
                        
                        typedef enum RcsSubscribeReason : int RcsSubscribeReason;
                        
                    } /* Windows */
                } /* Phone */
            } /* Restricted */
        } /* Cellular */
    } /* RcsPresence */} /* ABI */




















namespace ABI {
    namespace Windows {
        namespace Phone {
            namespace Restricted {
                namespace Cellular {
                    namespace RcsPresence {
                        class RcsPresenceSettings;
                    } /* Windows */
                } /* Phone */
            } /* Restricted */
        } /* Cellular */
    } /* RcsPresence */} /* ABI */





namespace ABI {
    namespace Windows {
        namespace Phone {
            namespace Restricted {
                namespace Cellular {
                    namespace RcsPresence {
                        class RcsResourceList;
                    } /* Windows */
                } /* Phone */
            } /* Restricted */
        } /* Cellular */
    } /* RcsPresence */} /* ABI */















/*
 *
 * Struct Windows.Phone.Restricted.Cellular.RcsPresence.RcsMediaType
 *
 * Introduced to Windows.Phone.Restricted.Cellular.RcsPresence.InternalRcsPresenceContract in version 1.0
 *
 *
 */

#if WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Phone {
            namespace Restricted {
                namespace Cellular {
                    namespace RcsPresence {
                        /* [v1_enum, contract] */
                        enum RcsMediaType : int
                        {
                            RcsMediaType_None = 0,
                            RcsMediaType_AudioOnly = 1,
                            RcsMediaType_AudioVideo = 2,
                        };
                        
                    } /* Windows */
                } /* Phone */
            } /* Restricted */
        } /* Cellular */
    } /* RcsPresence */} /* ABI */
#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Phone.Restricted.Cellular.RcsPresence.RcsNetworkType
 *
 * Introduced to Windows.Phone.Restricted.Cellular.RcsPresence.InternalRcsPresenceContract in version 1.0
 *
 *
 */

#if WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Phone {
            namespace Restricted {
                namespace Cellular {
                    namespace RcsPresence {
                        /* [v1_enum, contract] */
                        enum RcsNetworkType : int
                        {
                            RcsNetworkType_Unknown = 0,
                            RcsNetworkType_Lte = 1,
                            RcsNetworkType_LteNoVoPS = 2,
                            RcsNetworkType_Ehrpd = 3,
                            RcsNetworkType_HspaPlus = 4,
                            RcsNetworkType__3g = 5,
                            RcsNetworkType__2g = 6,
                            RcsNetworkType__WLAN = 7,
                            RcsNetworkType__IWLAN = 8,
                        };
                        
                    } /* Windows */
                } /* Phone */
            } /* Restricted */
        } /* Cellular */
    } /* RcsPresence */} /* ABI */
#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Phone.Restricted.Cellular.RcsPresence.RcsPublishRequestReason
 *
 * Introduced to Windows.Phone.Restricted.Cellular.RcsPresence.InternalRcsPresenceContract in version 1.0
 *
 *
 */

#if WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Phone {
            namespace Restricted {
                namespace Cellular {
                    namespace RcsPresence {
                        /* [v1_enum, contract] */
                        enum RcsPublishRequestReason : int
                        {
                            RcsPublishRequestReason_Expired = 0,
                            RcsPublishRequestReason_NetworkChange = 1,
                        };
                        
                    } /* Windows */
                } /* Phone */
            } /* Restricted */
        } /* Cellular */
    } /* RcsPresence */} /* ABI */
#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Phone.Restricted.Cellular.RcsPresence.RcsResourceState
 *
 * Introduced to Windows.Phone.Restricted.Cellular.RcsPresence.InternalRcsPresenceContract in version 1.0
 *
 *
 */

#if WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Phone {
            namespace Restricted {
                namespace Cellular {
                    namespace RcsPresence {
                        /* [v1_enum, contract] */
                        enum RcsResourceState : int
                        {
                            RcsResourceState_Unknown = 0,
                            RcsResourceState_Pending = 1,
                            RcsResourceState_Active = 2,
                            RcsResourceState_Terminated = 3,
                        };
                        
                    } /* Windows */
                } /* Phone */
            } /* Restricted */
        } /* Cellular */
    } /* RcsPresence */} /* ABI */
#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Phone.Restricted.Cellular.RcsPresence.RcsServiceAvailability
 *
 * Introduced to Windows.Phone.Restricted.Cellular.RcsPresence.InternalRcsPresenceContract in version 1.0
 *
 *
 */

#if WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Phone {
            namespace Restricted {
                namespace Cellular {
                    namespace RcsPresence {
                        /* [v1_enum, contract] */
                        enum RcsServiceAvailability : int
                        {
                            RcsServiceAvailability_Unavailable = 0,
                            RcsServiceAvailability_Available = 1,
                        };
                        
                    } /* Windows */
                } /* Phone */
            } /* Restricted */
        } /* Cellular */
    } /* RcsPresence */} /* ABI */
#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Phone.Restricted.Cellular.RcsPresence.RcsServiceStatus
 *
 * Introduced to Windows.Phone.Restricted.Cellular.RcsPresence.InternalRcsPresenceContract in version 1.0
 *
 *
 */

#if WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Phone {
            namespace Restricted {
                namespace Cellular {
                    namespace RcsPresence {
                        /* [v1_enum, contract] */
                        enum RcsServiceStatus : int
                        {
                            RcsServiceStatus_Stopped = 0,
                            RcsServiceStatus_Started = 1,
                            RcsServiceStatus_Stopping = 2,
                            RcsServiceStatus_Starting = 3,
                        };
                        
                    } /* Windows */
                } /* Phone */
            } /* Restricted */
        } /* Cellular */
    } /* RcsPresence */} /* ABI */
#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Phone.Restricted.Cellular.RcsPresence.RcsSubscribeReason
 *
 * Introduced to Windows.Phone.Restricted.Cellular.RcsPresence.InternalRcsPresenceContract in version 1.0
 *
 *
 */

#if WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Phone {
            namespace Restricted {
                namespace Cellular {
                    namespace RcsPresence {
                        /* [v1_enum, contract] */
                        enum RcsSubscribeReason : int
                        {
                            RcsSubscribeReason_Default = 0,
                            RcsSubscribeReason_Expired = 1,
                            RcsSubscribeReason_ContactModified = 2,
                        };
                        
                    } /* Windows */
                } /* Phone */
            } /* Restricted */
        } /* Cellular */
    } /* RcsPresence */} /* ABI */
#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Phone.Restricted.Cellular.RcsPresence.IRcsAddress
 *
 * Introduced to Windows.Phone.Restricted.Cellular.RcsPresence.InternalRcsPresenceContract in version 1.0
 *
 *
 */
#if WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsAddress_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsAddress_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Phone_Restricted_Cellular_RcsPresence_IRcsAddress[] = L"Windows.Phone.Restricted.Cellular.RcsPresence.IRcsAddress";
namespace ABI {
    namespace Windows {
        namespace Phone {
            namespace Restricted {
                namespace Cellular {
                    namespace RcsPresence {
                        /* [object, uuid("ECE4FA8C-C015-42D1-A77C-35171F4684E1"), contract] */
                        MIDL_INTERFACE("ECE4FA8C-C015-42D1-A77C-35171F4684E1")
                        IRcsAddress : IInspectable
                        {
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Uri(
                                /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IUriRuntimeClass * * value
                                ) = 0;
                            /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Uri(
                                /* [in] */__RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass * value
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_IRcsAddress=_uuidof(IRcsAddress);
                        
                    } /* Windows */
                } /* Phone */
            } /* Restricted */
        } /* Cellular */
    } /* RcsPresence */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsAddress;
#endif /* !defined(____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsAddress_INTERFACE_DEFINED__) */
#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Phone.Restricted.Cellular.RcsPresence.IRcsCapabilitiesReceivedArgs
 *
 * Introduced to Windows.Phone.Restricted.Cellular.RcsPresence.InternalRcsPresenceContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Phone.Restricted.Cellular.RcsPresence.RcsCapabilitiesReceivedArgs
 *
 *
 */
#if WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsCapabilitiesReceivedArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsCapabilitiesReceivedArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Phone_Restricted_Cellular_RcsPresence_IRcsCapabilitiesReceivedArgs[] = L"Windows.Phone.Restricted.Cellular.RcsPresence.IRcsCapabilitiesReceivedArgs";
namespace ABI {
    namespace Windows {
        namespace Phone {
            namespace Restricted {
                namespace Cellular {
                    namespace RcsPresence {
                        /* [object, uuid("024FD9E5-C187-4A69-9225-5774404EA1F3"), exclusiveto, contract] */
                        MIDL_INTERFACE("024FD9E5-C187-4A69-9225-5774404EA1F3")
                        IRcsCapabilitiesReceivedArgs : IInspectable
                        {
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ResourceUri(
                                /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IUriRuntimeClass * * value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Capabilities(
                                /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTuple * * value
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_IRcsCapabilitiesReceivedArgs=_uuidof(IRcsCapabilitiesReceivedArgs);
                        
                    } /* Windows */
                } /* Phone */
            } /* Restricted */
        } /* Cellular */
    } /* RcsPresence */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsCapabilitiesReceivedArgs;
#endif /* !defined(____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsCapabilitiesReceivedArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Phone.Restricted.Cellular.RcsPresence.IRcsPresenceService
 *
 * Introduced to Windows.Phone.Restricted.Cellular.RcsPresence.InternalRcsPresenceContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Phone.Restricted.Cellular.RcsPresence.RcsPresenceService
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Phone.Restricted.Cellular.RcsPresence.IRcsService
 *
 *
 */
#if WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceService_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceService_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Phone_Restricted_Cellular_RcsPresence_IRcsPresenceService[] = L"Windows.Phone.Restricted.Cellular.RcsPresence.IRcsPresenceService";
namespace ABI {
    namespace Windows {
        namespace Phone {
            namespace Restricted {
                namespace Cellular {
                    namespace RcsPresence {
                        /* [object, uuid("9394D478-7C0B-4493-9B99-3A1D9244981D"), exclusiveto, contract] */
                        MIDL_INTERFACE("9394D478-7C0B-4493-9B99-3A1D9244981D")
                        IRcsPresenceService : IInspectable
                        {
                            virtual HRESULT STDMETHODCALLTYPE PublishCapabilitiesAsync(
                                /* [in] */__RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass * contactUri,
                                /* [in] */__RPC__in_opt __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceDescription * serviceDescriptions,
                                /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResponse * * operation
                                ) = 0;
                            /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_PublishCapabilitiesRequested(
                                /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsPresenceService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsPublishCapabilitiesRequestedArgs * handler,
                                /* [retval, out] */__RPC__out EventRegistrationToken * token
                                ) = 0;
                            /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_PublishCapabilitiesRequested(
                                /* [in] */EventRegistrationToken token
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE RequestCapabilitiesAsync(
                                /* [in] */__RPC__in_opt ABI::Windows::Phone::Restricted::Cellular::RcsPresence::IRcsAddress * address,
                                /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResponse * * operation
                                ) = 0;
                            /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_CapabilitiesReceived(
                                /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsPresenceService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsCapabilitiesReceivedArgs * handler,
                                /* [retval, out] */__RPC__out EventRegistrationToken * token
                                ) = 0;
                            /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_CapabilitiesReceived(
                                /* [in] */EventRegistrationToken token
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE SubscribeForCapabilitiesAsync(
                                /* [in] */ABI::Windows::Phone::Restricted::Cellular::RcsPresence::RcsSubscribeReason reason,
                                /* [in] */__RPC__in_opt __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsAddress * addresses,
                                /* [in] */ABI::Windows::Foundation::TimeSpan expiration,
                                /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResponse * * operation
                                ) = 0;
                            /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_SubscriptionReceived(
                                /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsPresenceService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsSubscriptionReceivedArgs * handler,
                                /* [retval, out] */__RPC__out EventRegistrationToken * token
                                ) = 0;
                            /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_SubscriptionReceived(
                                /* [in] */EventRegistrationToken token
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_IRcsPresenceService=_uuidof(IRcsPresenceService);
                        
                    } /* Windows */
                } /* Phone */
            } /* Restricted */
        } /* Cellular */
    } /* RcsPresence */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceService;
#endif /* !defined(____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceService_INTERFACE_DEFINED__) */
#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Phone.Restricted.Cellular.RcsPresence.IRcsPresenceSettings
 *
 * Introduced to Windows.Phone.Restricted.Cellular.RcsPresence.InternalRcsPresenceContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Phone.Restricted.Cellular.RcsPresence.RcsPresenceSettings
 *
 *
 */
#if WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceSettings_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceSettings_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Phone_Restricted_Cellular_RcsPresence_IRcsPresenceSettings[] = L"Windows.Phone.Restricted.Cellular.RcsPresence.IRcsPresenceSettings";
namespace ABI {
    namespace Windows {
        namespace Phone {
            namespace Restricted {
                namespace Cellular {
                    namespace RcsPresence {
                        /* [object, uuid("DD7B70D0-8C2C-41D9-92D9-8FF63499342A"), exclusiveto, contract] */
                        MIDL_INTERFACE("DD7B70D0-8C2C-41D9-92D9-8FF63499342A")
                        IRcsPresenceSettings : IInspectable
                        {
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PublishEnabled(
                                /* [retval, out] */__RPC__out boolean * value
                                ) = 0;
                            /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_PublishEnabled(
                                /* [in] */boolean value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PublishTimerInterval(
                                /* [retval, out] */__RPC__out ABI::Windows::Foundation::TimeSpan * value
                                ) = 0;
                            /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_PublishTimerInterval(
                                /* [in] */ABI::Windows::Foundation::TimeSpan value
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_IRcsPresenceSettings=_uuidof(IRcsPresenceSettings);
                        
                    } /* Windows */
                } /* Phone */
            } /* Restricted */
        } /* Cellular */
    } /* RcsPresence */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceSettings;
#endif /* !defined(____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceSettings_INTERFACE_DEFINED__) */
#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Phone.Restricted.Cellular.RcsPresence.IRcsPresenceSettings2
 *
 * Introduced to Windows.Phone.Restricted.Cellular.RcsPresence.InternalRcsPresenceContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Phone.Restricted.Cellular.RcsPresence.RcsPresenceSettings
 *
 *
 */
#if WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceSettings2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceSettings2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Phone_Restricted_Cellular_RcsPresence_IRcsPresenceSettings2[] = L"Windows.Phone.Restricted.Cellular.RcsPresence.IRcsPresenceSettings2";
namespace ABI {
    namespace Windows {
        namespace Phone {
            namespace Restricted {
                namespace Cellular {
                    namespace RcsPresence {
                        /* [object, uuid("D38BAC8A-4AF0-4B59-B6BE-08FD640AB9B9"), exclusiveto, contract] */
                        MIDL_INTERFACE("D38BAC8A-4AF0-4B59-B6BE-08FD640AB9B9")
                        IRcsPresenceSettings2 : IInspectable
                        {
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsCapabilityDiscoveryEnabled(
                                /* [retval, out] */__RPC__out boolean * value
                                ) = 0;
                            /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_IsCapabilityDiscoveryEnabled(
                                /* [in] */boolean value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CapabilityCacheExpiration(
                                /* [retval, out] */__RPC__out ABI::Windows::Foundation::TimeSpan * value
                                ) = 0;
                            /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_CapabilityCacheExpiration(
                                /* [in] */ABI::Windows::Foundation::TimeSpan value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AvailabilityCacheExpiration(
                                /* [retval, out] */__RPC__out ABI::Windows::Foundation::TimeSpan * value
                                ) = 0;
                            /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_AvailabilityCacheExpiration(
                                /* [in] */ABI::Windows::Foundation::TimeSpan value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CapabilityPollInterval(
                                /* [retval, out] */__RPC__out ABI::Windows::Foundation::TimeSpan * value
                                ) = 0;
                            /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_CapabilityPollInterval(
                                /* [in] */ABI::Windows::Foundation::TimeSpan value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MaxNumberOfEntriesInRequest(
                                /* [retval, out] */__RPC__out UINT32 * value
                                ) = 0;
                            /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_MaxNumberOfEntriesInRequest(
                                /* [in] */UINT32 value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsPresenceGzipEnabled(
                                /* [retval, out] */__RPC__out boolean * value
                                ) = 0;
                            /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_IsPresenceGzipEnabled(
                                /* [in] */boolean value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PresenceNotifyDuration(
                                /* [retval, out] */__RPC__out ABI::Windows::Foundation::TimeSpan * value
                                ) = 0;
                            /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_PresenceNotifyDuration(
                                /* [in] */ABI::Windows::Foundation::TimeSpan value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_VoLTEProvisioningStatus(
                                /* [retval, out] */__RPC__out boolean * value
                                ) = 0;
                            /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_VoLTEProvisioningStatus(
                                /* [in] */boolean value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PublishErrorRecoveryTimer(
                                /* [retval, out] */__RPC__out ABI::Windows::Foundation::TimeSpan * value
                                ) = 0;
                            /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_PublishErrorRecoveryTimer(
                                /* [in] */ABI::Windows::Foundation::TimeSpan value
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_IRcsPresenceSettings2=_uuidof(IRcsPresenceSettings2);
                        
                    } /* Windows */
                } /* Phone */
            } /* Restricted */
        } /* Cellular */
    } /* RcsPresence */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceSettings2;
#endif /* !defined(____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceSettings2_INTERFACE_DEFINED__) */
#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Phone.Restricted.Cellular.RcsPresence.IRcsPublishCapabilitiesRequestedArgs
 *
 * Introduced to Windows.Phone.Restricted.Cellular.RcsPresence.InternalRcsPresenceContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Phone.Restricted.Cellular.RcsPresence.RcsPublishCapabilitiesRequestedArgs
 *
 *
 */
#if WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPublishCapabilitiesRequestedArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPublishCapabilitiesRequestedArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Phone_Restricted_Cellular_RcsPresence_IRcsPublishCapabilitiesRequestedArgs[] = L"Windows.Phone.Restricted.Cellular.RcsPresence.IRcsPublishCapabilitiesRequestedArgs";
namespace ABI {
    namespace Windows {
        namespace Phone {
            namespace Restricted {
                namespace Cellular {
                    namespace RcsPresence {
                        /* [object, uuid("1F062F50-8973-4CB9-BE29-DFA18AD1CAC4"), exclusiveto, contract] */
                        MIDL_INTERFACE("1F062F50-8973-4CB9-BE29-DFA18AD1CAC4")
                        IRcsPublishCapabilitiesRequestedArgs : IInspectable
                        {
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Reason(
                                /* [retval, out] */__RPC__out ABI::Windows::Phone::Restricted::Cellular::RcsPresence::RcsPublishRequestReason * value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_NetworkType(
                                /* [retval, out] */__RPC__out ABI::Windows::Phone::Restricted::Cellular::RcsPresence::RcsNetworkType * value
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_IRcsPublishCapabilitiesRequestedArgs=_uuidof(IRcsPublishCapabilitiesRequestedArgs);
                        
                    } /* Windows */
                } /* Phone */
            } /* Restricted */
        } /* Cellular */
    } /* RcsPresence */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPublishCapabilitiesRequestedArgs;
#endif /* !defined(____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPublishCapabilitiesRequestedArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Phone.Restricted.Cellular.RcsPresence.IRcsResource
 *
 * Introduced to Windows.Phone.Restricted.Cellular.RcsPresence.InternalRcsPresenceContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Phone.Restricted.Cellular.RcsPresence.RcsResource
 *
 *
 */
#if WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResource_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResource_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Phone_Restricted_Cellular_RcsPresence_IRcsResource[] = L"Windows.Phone.Restricted.Cellular.RcsPresence.IRcsResource";
namespace ABI {
    namespace Windows {
        namespace Phone {
            namespace Restricted {
                namespace Cellular {
                    namespace RcsPresence {
                        /* [object, uuid("C37FA519-AB14-462D-91C9-3242D174FC72"), exclusiveto, contract] */
                        MIDL_INTERFACE("C37FA519-AB14-462D-91C9-3242D174FC72")
                        IRcsResource : IInspectable
                        {
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Uri(
                                /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IUriRuntimeClass * * value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Name(
                                /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Instances(
                                /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceInstance * * value
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_IRcsResource=_uuidof(IRcsResource);
                        
                    } /* Windows */
                } /* Phone */
            } /* Restricted */
        } /* Cellular */
    } /* RcsPresence */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResource;
#endif /* !defined(____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResource_INTERFACE_DEFINED__) */
#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Phone.Restricted.Cellular.RcsPresence.IRcsResourceInstance
 *
 * Introduced to Windows.Phone.Restricted.Cellular.RcsPresence.InternalRcsPresenceContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Phone.Restricted.Cellular.RcsPresence.RcsResourceInstance
 *
 *
 */
#if WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResourceInstance_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResourceInstance_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Phone_Restricted_Cellular_RcsPresence_IRcsResourceInstance[] = L"Windows.Phone.Restricted.Cellular.RcsPresence.IRcsResourceInstance";
namespace ABI {
    namespace Windows {
        namespace Phone {
            namespace Restricted {
                namespace Cellular {
                    namespace RcsPresence {
                        /* [object, uuid("71381418-C4D2-424C-B35C-340E6306785E"), exclusiveto, contract] */
                        MIDL_INTERFACE("71381418-C4D2-424C-B35C-340E6306785E")
                        IRcsResourceInstance : IInspectable
                        {
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Uri(
                                /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IUriRuntimeClass * * value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Identifier(
                                /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_State(
                                /* [retval, out] */__RPC__out ABI::Windows::Phone::Restricted::Cellular::RcsPresence::RcsResourceState * value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Reason(
                                /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Capabilities(
                                /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTuple * * value
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_IRcsResourceInstance=_uuidof(IRcsResourceInstance);
                        
                    } /* Windows */
                } /* Phone */
            } /* Restricted */
        } /* Cellular */
    } /* RcsPresence */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResourceInstance;
#endif /* !defined(____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResourceInstance_INTERFACE_DEFINED__) */
#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Phone.Restricted.Cellular.RcsPresence.IRcsResourceList
 *
 * Introduced to Windows.Phone.Restricted.Cellular.RcsPresence.InternalRcsPresenceContract in version 1.0
 *
 *
 */
#if WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResourceList_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResourceList_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Phone_Restricted_Cellular_RcsPresence_IRcsResourceList[] = L"Windows.Phone.Restricted.Cellular.RcsPresence.IRcsResourceList";
namespace ABI {
    namespace Windows {
        namespace Phone {
            namespace Restricted {
                namespace Cellular {
                    namespace RcsPresence {
                        /* [object, uuid("79F2A52B-0C12-483A-A06B-5D88F2EDFD4B"), contract] */
                        MIDL_INTERFACE("79F2A52B-0C12-483A-A06B-5D88F2EDFD4B")
                        IRcsResourceList : IInspectable
                        {
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Uri(
                                /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IUriRuntimeClass * * value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Name(
                                /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Version(
                                /* [retval, out] */__RPC__out UINT32 * value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_FullState(
                                /* [retval, out] */__RPC__out boolean * value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Resources(
                                /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResource * * value
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_IRcsResourceList=_uuidof(IRcsResourceList);
                        
                    } /* Windows */
                } /* Phone */
            } /* Restricted */
        } /* Cellular */
    } /* RcsPresence */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResourceList;
#endif /* !defined(____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResourceList_INTERFACE_DEFINED__) */
#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Phone.Restricted.Cellular.RcsPresence.IRcsResponse
 *
 * Introduced to Windows.Phone.Restricted.Cellular.RcsPresence.InternalRcsPresenceContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Phone.Restricted.Cellular.RcsPresence.RcsResponse
 *
 *
 */
#if WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResponse_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResponse_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Phone_Restricted_Cellular_RcsPresence_IRcsResponse[] = L"Windows.Phone.Restricted.Cellular.RcsPresence.IRcsResponse";
namespace ABI {
    namespace Windows {
        namespace Phone {
            namespace Restricted {
                namespace Cellular {
                    namespace RcsPresence {
                        /* [object, uuid("B7EBCF86-6640-4BB4-8192-FEB1BAA17872"), exclusiveto, contract] */
                        MIDL_INTERFACE("B7EBCF86-6640-4BB4-8192-FEB1BAA17872")
                        IRcsResponse : IInspectable
                        {
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ResponseCode(
                                /* [retval, out] */__RPC__out UINT32 * value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ResponseReason(
                                /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_IRcsResponse=_uuidof(IRcsResponse);
                        
                    } /* Windows */
                } /* Phone */
            } /* Restricted */
        } /* Cellular */
    } /* RcsPresence */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResponse;
#endif /* !defined(____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResponse_INTERFACE_DEFINED__) */
#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Phone.Restricted.Cellular.RcsPresence.IRcsService
 *
 * Introduced to Windows.Phone.Restricted.Cellular.RcsPresence.InternalRcsPresenceContract in version 1.0
 *
 *
 */
#if WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsService_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsService_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Phone_Restricted_Cellular_RcsPresence_IRcsService[] = L"Windows.Phone.Restricted.Cellular.RcsPresence.IRcsService";
namespace ABI {
    namespace Windows {
        namespace Phone {
            namespace Restricted {
                namespace Cellular {
                    namespace RcsPresence {
                        /* [object, uuid("B57094FD-74DA-4273-9039-F489ABC6FF8D"), contract] */
                        MIDL_INTERFACE("B57094FD-74DA-4273-9039-F489ABC6FF8D")
                        IRcsService : IInspectable
                        {
                            virtual HRESULT STDMETHODCALLTYPE StartServiceAsync(
                                /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceStatus * * operation
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE StopServiceAsync(
                                /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceStatus * * operation
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ServiceStatus(
                                /* [retval, out] */__RPC__out ABI::Windows::Phone::Restricted::Cellular::RcsPresence::RcsServiceStatus * value
                                ) = 0;
                            /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_ServiceStatusChanged(
                                /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CIRcsService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceStatusChangedArgs * handler,
                                /* [retval, out] */__RPC__out EventRegistrationToken * token
                                ) = 0;
                            /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_ServiceStatusChanged(
                                /* [in] */EventRegistrationToken token
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ServiceAvailability(
                                /* [retval, out] */__RPC__out ABI::Windows::Phone::Restricted::Cellular::RcsPresence::RcsServiceAvailability * value
                                ) = 0;
                            /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_ServiceAvailabilityChanged(
                                /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CIRcsService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceAvailabilityChangedArgs * handler,
                                /* [retval, out] */__RPC__out EventRegistrationToken * token
                                ) = 0;
                            /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_ServiceAvailabilityChanged(
                                /* [in] */EventRegistrationToken token
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ServiceVersion(
                                /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_IRcsService=_uuidof(IRcsService);
                        
                    } /* Windows */
                } /* Phone */
            } /* Restricted */
        } /* Cellular */
    } /* RcsPresence */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsService;
#endif /* !defined(____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsService_INTERFACE_DEFINED__) */
#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Phone.Restricted.Cellular.RcsPresence.IRcsServiceAvailabilityChangedArgs
 *
 * Introduced to Windows.Phone.Restricted.Cellular.RcsPresence.InternalRcsPresenceContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Phone.Restricted.Cellular.RcsPresence.RcsServiceAvailabilityChangedArgs
 *
 *
 */
#if WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceAvailabilityChangedArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceAvailabilityChangedArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Phone_Restricted_Cellular_RcsPresence_IRcsServiceAvailabilityChangedArgs[] = L"Windows.Phone.Restricted.Cellular.RcsPresence.IRcsServiceAvailabilityChangedArgs";
namespace ABI {
    namespace Windows {
        namespace Phone {
            namespace Restricted {
                namespace Cellular {
                    namespace RcsPresence {
                        /* [object, uuid("433108B4-1B3F-4033-8D0B-768D78F658A7"), exclusiveto, contract] */
                        MIDL_INTERFACE("433108B4-1B3F-4033-8D0B-768D78F658A7")
                        IRcsServiceAvailabilityChangedArgs : IInspectable
                        {
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ServiceAvailability(
                                /* [retval, out] */__RPC__out ABI::Windows::Phone::Restricted::Cellular::RcsPresence::RcsServiceAvailability * value
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_IRcsServiceAvailabilityChangedArgs=_uuidof(IRcsServiceAvailabilityChangedArgs);
                        
                    } /* Windows */
                } /* Phone */
            } /* Restricted */
        } /* Cellular */
    } /* RcsPresence */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceAvailabilityChangedArgs;
#endif /* !defined(____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceAvailabilityChangedArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Phone.Restricted.Cellular.RcsPresence.IRcsServiceDescription
 *
 * Introduced to Windows.Phone.Restricted.Cellular.RcsPresence.InternalRcsPresenceContract in version 1.0
 *
 *
 */
#if WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceDescription_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceDescription_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Phone_Restricted_Cellular_RcsPresence_IRcsServiceDescription[] = L"Windows.Phone.Restricted.Cellular.RcsPresence.IRcsServiceDescription";
namespace ABI {
    namespace Windows {
        namespace Phone {
            namespace Restricted {
                namespace Cellular {
                    namespace RcsPresence {
                        /* [object, uuid("416437DE-E78B-44C9-990F-7EDE1F2A0C91"), contract] */
                        MIDL_INTERFACE("416437DE-E78B-44C9-990F-7EDE1F2A0C91")
                        IRcsServiceDescription : IInspectable
                        {
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ServiceIdentifier(
                                /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                                ) = 0;
                            /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ServiceIdentifier(
                                /* [in] */__RPC__in HSTRING value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ServiceDescription(
                                /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                                ) = 0;
                            /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ServiceDescription(
                                /* [in] */__RPC__in HSTRING value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ServiceVersion(
                                /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                                ) = 0;
                            /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ServiceVersion(
                                /* [in] */__RPC__in HSTRING value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MediaType(
                                /* [retval, out] */__RPC__out ABI::Windows::Phone::Restricted::Cellular::RcsPresence::RcsMediaType * value
                                ) = 0;
                            /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_MediaType(
                                /* [in] */ABI::Windows::Phone::Restricted::Cellular::RcsPresence::RcsMediaType value
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_IRcsServiceDescription=_uuidof(IRcsServiceDescription);
                        
                    } /* Windows */
                } /* Phone */
            } /* Restricted */
        } /* Cellular */
    } /* RcsPresence */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceDescription;
#endif /* !defined(____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceDescription_INTERFACE_DEFINED__) */
#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Phone.Restricted.Cellular.RcsPresence.IRcsServiceStatusChangedArgs
 *
 * Introduced to Windows.Phone.Restricted.Cellular.RcsPresence.InternalRcsPresenceContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Phone.Restricted.Cellular.RcsPresence.RcsServiceStatusChangedArgs
 *
 *
 */
#if WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceStatusChangedArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceStatusChangedArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Phone_Restricted_Cellular_RcsPresence_IRcsServiceStatusChangedArgs[] = L"Windows.Phone.Restricted.Cellular.RcsPresence.IRcsServiceStatusChangedArgs";
namespace ABI {
    namespace Windows {
        namespace Phone {
            namespace Restricted {
                namespace Cellular {
                    namespace RcsPresence {
                        /* [object, uuid("661AE45A-412A-460D-BDD4-DD8EA3C15583"), exclusiveto, contract] */
                        MIDL_INTERFACE("661AE45A-412A-460D-BDD4-DD8EA3C15583")
                        IRcsServiceStatusChangedArgs : IInspectable
                        {
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ServiceStatus(
                                /* [retval, out] */__RPC__out ABI::Windows::Phone::Restricted::Cellular::RcsPresence::RcsServiceStatus * value
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_IRcsServiceStatusChangedArgs=_uuidof(IRcsServiceStatusChangedArgs);
                        
                    } /* Windows */
                } /* Phone */
            } /* Restricted */
        } /* Cellular */
    } /* RcsPresence */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceStatusChangedArgs;
#endif /* !defined(____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceStatusChangedArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Phone.Restricted.Cellular.RcsPresence.IRcsServiceTuple
 *
 * Introduced to Windows.Phone.Restricted.Cellular.RcsPresence.InternalRcsPresenceContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Phone.Restricted.Cellular.RcsPresence.RcsServiceTuple
 *
 *
 */
#if WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceTuple_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceTuple_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Phone_Restricted_Cellular_RcsPresence_IRcsServiceTuple[] = L"Windows.Phone.Restricted.Cellular.RcsPresence.IRcsServiceTuple";
namespace ABI {
    namespace Windows {
        namespace Phone {
            namespace Restricted {
                namespace Cellular {
                    namespace RcsPresence {
                        /* [object, uuid("CE17A39B-2E8B-41AF-B5A9-5CB072CC373C"), exclusiveto, contract] */
                        MIDL_INTERFACE("CE17A39B-2E8B-41AF-B5A9-5CB072CC373C")
                        IRcsServiceTuple : IInspectable
                        {
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ServiceDescription(
                                /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Phone::Restricted::Cellular::RcsPresence::IRcsServiceDescription * * value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ContactUri(
                                /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IUriRuntimeClass * * value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PublishedTime(
                                /* [retval, out] */__RPC__out ABI::Windows::Foundation::DateTime * value
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_IRcsServiceTuple=_uuidof(IRcsServiceTuple);
                        
                    } /* Windows */
                } /* Phone */
            } /* Restricted */
        } /* Cellular */
    } /* RcsPresence */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceTuple;
#endif /* !defined(____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceTuple_INTERFACE_DEFINED__) */
#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Phone.Restricted.Cellular.RcsPresence.IRcsSubscriptionReceivedArgs
 *
 * Introduced to Windows.Phone.Restricted.Cellular.RcsPresence.InternalRcsPresenceContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Phone.Restricted.Cellular.RcsPresence.RcsSubscriptionReceivedArgs
 *
 *
 */
#if WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsSubscriptionReceivedArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsSubscriptionReceivedArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Phone_Restricted_Cellular_RcsPresence_IRcsSubscriptionReceivedArgs[] = L"Windows.Phone.Restricted.Cellular.RcsPresence.IRcsSubscriptionReceivedArgs";
namespace ABI {
    namespace Windows {
        namespace Phone {
            namespace Restricted {
                namespace Cellular {
                    namespace RcsPresence {
                        /* [object, uuid("04EAF06D-42BC-46CC-A637-EEB3A8723FE4"), exclusiveto, contract] */
                        MIDL_INTERFACE("04EAF06D-42BC-46CC-A637-EEB3A8723FE4")
                        IRcsSubscriptionReceivedArgs : IInspectable
                        {
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ResourceList(
                                /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Phone::Restricted::Cellular::RcsPresence::IRcsResourceList * * value
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_IRcsSubscriptionReceivedArgs=_uuidof(IRcsSubscriptionReceivedArgs);
                        
                    } /* Windows */
                } /* Phone */
            } /* Restricted */
        } /* Cellular */
    } /* RcsPresence */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsSubscriptionReceivedArgs;
#endif /* !defined(____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsSubscriptionReceivedArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Phone.Restricted.Cellular.RcsPresence.RcsAddress
 *
 * Introduced to Windows.Phone.Restricted.Cellular.RcsPresence.InternalRcsPresenceContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Phone.Restricted.Cellular.RcsPresence.IRcsAddress ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Phone_Restricted_Cellular_RcsPresence_RcsAddress_DEFINED
#define RUNTIMECLASS_Windows_Phone_Restricted_Cellular_RcsPresence_RcsAddress_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Phone_Restricted_Cellular_RcsPresence_RcsAddress[] = L"Windows.Phone.Restricted.Cellular.RcsPresence.RcsAddress";
#endif
#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Phone.Restricted.Cellular.RcsPresence.RcsCapabilitiesReceivedArgs
 *
 * Introduced to Windows.Phone.Restricted.Cellular.RcsPresence.InternalRcsPresenceContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Phone.Restricted.Cellular.RcsPresence.IRcsCapabilitiesReceivedArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Phone_Restricted_Cellular_RcsPresence_RcsCapabilitiesReceivedArgs_DEFINED
#define RUNTIMECLASS_Windows_Phone_Restricted_Cellular_RcsPresence_RcsCapabilitiesReceivedArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Phone_Restricted_Cellular_RcsPresence_RcsCapabilitiesReceivedArgs[] = L"Windows.Phone.Restricted.Cellular.RcsPresence.RcsCapabilitiesReceivedArgs";
#endif
#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Phone.Restricted.Cellular.RcsPresence.RcsPresenceService
 *
 * Introduced to Windows.Phone.Restricted.Cellular.RcsPresence.InternalRcsPresenceContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Phone.Restricted.Cellular.RcsPresence.IRcsService
 *    Windows.Phone.Restricted.Cellular.RcsPresence.IRcsPresenceService ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Phone_Restricted_Cellular_RcsPresence_RcsPresenceService_DEFINED
#define RUNTIMECLASS_Windows_Phone_Restricted_Cellular_RcsPresence_RcsPresenceService_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Phone_Restricted_Cellular_RcsPresence_RcsPresenceService[] = L"Windows.Phone.Restricted.Cellular.RcsPresence.RcsPresenceService";
#endif
#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Phone.Restricted.Cellular.RcsPresence.RcsPresenceSettings
 *
 * Introduced to Windows.Phone.Restricted.Cellular.RcsPresence.InternalRcsPresenceContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Phone.Restricted.Cellular.RcsPresence.IRcsPresenceSettings ** Default Interface **
 *    Windows.Phone.Restricted.Cellular.RcsPresence.IRcsPresenceSettings2
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Phone_Restricted_Cellular_RcsPresence_RcsPresenceSettings_DEFINED
#define RUNTIMECLASS_Windows_Phone_Restricted_Cellular_RcsPresence_RcsPresenceSettings_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Phone_Restricted_Cellular_RcsPresence_RcsPresenceSettings[] = L"Windows.Phone.Restricted.Cellular.RcsPresence.RcsPresenceSettings";
#endif
#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Phone.Restricted.Cellular.RcsPresence.RcsPublishCapabilitiesRequestedArgs
 *
 * Introduced to Windows.Phone.Restricted.Cellular.RcsPresence.InternalRcsPresenceContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Phone.Restricted.Cellular.RcsPresence.IRcsPublishCapabilitiesRequestedArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Phone_Restricted_Cellular_RcsPresence_RcsPublishCapabilitiesRequestedArgs_DEFINED
#define RUNTIMECLASS_Windows_Phone_Restricted_Cellular_RcsPresence_RcsPublishCapabilitiesRequestedArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Phone_Restricted_Cellular_RcsPresence_RcsPublishCapabilitiesRequestedArgs[] = L"Windows.Phone.Restricted.Cellular.RcsPresence.RcsPublishCapabilitiesRequestedArgs";
#endif
#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Phone.Restricted.Cellular.RcsPresence.RcsResource
 *
 * Introduced to Windows.Phone.Restricted.Cellular.RcsPresence.InternalRcsPresenceContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Phone.Restricted.Cellular.RcsPresence.IRcsResource ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Phone_Restricted_Cellular_RcsPresence_RcsResource_DEFINED
#define RUNTIMECLASS_Windows_Phone_Restricted_Cellular_RcsPresence_RcsResource_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Phone_Restricted_Cellular_RcsPresence_RcsResource[] = L"Windows.Phone.Restricted.Cellular.RcsPresence.RcsResource";
#endif
#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Phone.Restricted.Cellular.RcsPresence.RcsResourceInstance
 *
 * Introduced to Windows.Phone.Restricted.Cellular.RcsPresence.InternalRcsPresenceContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Phone.Restricted.Cellular.RcsPresence.IRcsResourceInstance ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Phone_Restricted_Cellular_RcsPresence_RcsResourceInstance_DEFINED
#define RUNTIMECLASS_Windows_Phone_Restricted_Cellular_RcsPresence_RcsResourceInstance_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Phone_Restricted_Cellular_RcsPresence_RcsResourceInstance[] = L"Windows.Phone.Restricted.Cellular.RcsPresence.RcsResourceInstance";
#endif
#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Phone.Restricted.Cellular.RcsPresence.RcsResourceList
 *
 * Introduced to Windows.Phone.Restricted.Cellular.RcsPresence.InternalRcsPresenceContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Phone.Restricted.Cellular.RcsPresence.IRcsResourceList ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Phone_Restricted_Cellular_RcsPresence_RcsResourceList_DEFINED
#define RUNTIMECLASS_Windows_Phone_Restricted_Cellular_RcsPresence_RcsResourceList_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Phone_Restricted_Cellular_RcsPresence_RcsResourceList[] = L"Windows.Phone.Restricted.Cellular.RcsPresence.RcsResourceList";
#endif
#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Phone.Restricted.Cellular.RcsPresence.RcsResponse
 *
 * Introduced to Windows.Phone.Restricted.Cellular.RcsPresence.InternalRcsPresenceContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Phone.Restricted.Cellular.RcsPresence.IRcsResponse ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Phone_Restricted_Cellular_RcsPresence_RcsResponse_DEFINED
#define RUNTIMECLASS_Windows_Phone_Restricted_Cellular_RcsPresence_RcsResponse_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Phone_Restricted_Cellular_RcsPresence_RcsResponse[] = L"Windows.Phone.Restricted.Cellular.RcsPresence.RcsResponse";
#endif
#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Phone.Restricted.Cellular.RcsPresence.RcsServiceAvailabilityChangedArgs
 *
 * Introduced to Windows.Phone.Restricted.Cellular.RcsPresence.InternalRcsPresenceContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Phone.Restricted.Cellular.RcsPresence.IRcsServiceAvailabilityChangedArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Phone_Restricted_Cellular_RcsPresence_RcsServiceAvailabilityChangedArgs_DEFINED
#define RUNTIMECLASS_Windows_Phone_Restricted_Cellular_RcsPresence_RcsServiceAvailabilityChangedArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Phone_Restricted_Cellular_RcsPresence_RcsServiceAvailabilityChangedArgs[] = L"Windows.Phone.Restricted.Cellular.RcsPresence.RcsServiceAvailabilityChangedArgs";
#endif
#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Phone.Restricted.Cellular.RcsPresence.RcsServiceDescription
 *
 * Introduced to Windows.Phone.Restricted.Cellular.RcsPresence.InternalRcsPresenceContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Phone.Restricted.Cellular.RcsPresence.IRcsServiceDescription ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Phone_Restricted_Cellular_RcsPresence_RcsServiceDescription_DEFINED
#define RUNTIMECLASS_Windows_Phone_Restricted_Cellular_RcsPresence_RcsServiceDescription_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Phone_Restricted_Cellular_RcsPresence_RcsServiceDescription[] = L"Windows.Phone.Restricted.Cellular.RcsPresence.RcsServiceDescription";
#endif
#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Phone.Restricted.Cellular.RcsPresence.RcsServiceStatusChangedArgs
 *
 * Introduced to Windows.Phone.Restricted.Cellular.RcsPresence.InternalRcsPresenceContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Phone.Restricted.Cellular.RcsPresence.IRcsServiceStatusChangedArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Phone_Restricted_Cellular_RcsPresence_RcsServiceStatusChangedArgs_DEFINED
#define RUNTIMECLASS_Windows_Phone_Restricted_Cellular_RcsPresence_RcsServiceStatusChangedArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Phone_Restricted_Cellular_RcsPresence_RcsServiceStatusChangedArgs[] = L"Windows.Phone.Restricted.Cellular.RcsPresence.RcsServiceStatusChangedArgs";
#endif
#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Phone.Restricted.Cellular.RcsPresence.RcsServiceTuple
 *
 * Introduced to Windows.Phone.Restricted.Cellular.RcsPresence.InternalRcsPresenceContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Phone.Restricted.Cellular.RcsPresence.IRcsServiceTuple ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Phone_Restricted_Cellular_RcsPresence_RcsServiceTuple_DEFINED
#define RUNTIMECLASS_Windows_Phone_Restricted_Cellular_RcsPresence_RcsServiceTuple_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Phone_Restricted_Cellular_RcsPresence_RcsServiceTuple[] = L"Windows.Phone.Restricted.Cellular.RcsPresence.RcsServiceTuple";
#endif
#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Phone.Restricted.Cellular.RcsPresence.RcsSubscriptionReceivedArgs
 *
 * Introduced to Windows.Phone.Restricted.Cellular.RcsPresence.InternalRcsPresenceContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Phone.Restricted.Cellular.RcsPresence.IRcsSubscriptionReceivedArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Phone_Restricted_Cellular_RcsPresence_RcsSubscriptionReceivedArgs_DEFINED
#define RUNTIMECLASS_Windows_Phone_Restricted_Cellular_RcsPresence_RcsSubscriptionReceivedArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Phone_Restricted_Cellular_RcsPresence_RcsSubscriptionReceivedArgs[] = L"Windows.Phone.Restricted.Cellular.RcsPresence.RcsSubscriptionReceivedArgs";
#endif
#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000






#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsAddress_FWD_DEFINED__
#define ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsAddress_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsAddress __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsAddress;

#endif // ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsAddress_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsCapabilitiesReceivedArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsCapabilitiesReceivedArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsCapabilitiesReceivedArgs __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsCapabilitiesReceivedArgs;

#endif // ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsCapabilitiesReceivedArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceService_FWD_DEFINED__
#define ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceService_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceService __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceService;

#endif // ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceService_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceSettings_FWD_DEFINED__
#define ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceSettings_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceSettings __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceSettings;

#endif // ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceSettings_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceSettings2_FWD_DEFINED__
#define ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceSettings2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceSettings2 __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceSettings2;

#endif // ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceSettings2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPublishCapabilitiesRequestedArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPublishCapabilitiesRequestedArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPublishCapabilitiesRequestedArgs __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPublishCapabilitiesRequestedArgs;

#endif // ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPublishCapabilitiesRequestedArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResource_FWD_DEFINED__
#define ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResource_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResource __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResource;

#endif // ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResource_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResourceInstance_FWD_DEFINED__
#define ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResourceInstance_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResourceInstance __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResourceInstance;

#endif // ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResourceInstance_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResourceList_FWD_DEFINED__
#define ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResourceList_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResourceList __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResourceList;

#endif // ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResourceList_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResponse_FWD_DEFINED__
#define ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResponse_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResponse __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResponse;

#endif // ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResponse_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsService_FWD_DEFINED__
#define ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsService_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsService __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsService;

#endif // ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsService_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceAvailabilityChangedArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceAvailabilityChangedArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceAvailabilityChangedArgs __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceAvailabilityChangedArgs;

#endif // ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceAvailabilityChangedArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceDescription_FWD_DEFINED__
#define ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceDescription_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceDescription __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceDescription;

#endif // ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceDescription_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceStatusChangedArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceStatusChangedArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceStatusChangedArgs __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceStatusChangedArgs;

#endif // ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceStatusChangedArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceTuple_FWD_DEFINED__
#define ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceTuple_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceTuple __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceTuple;

#endif // ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceTuple_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsSubscriptionReceivedArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsSubscriptionReceivedArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsSubscriptionReceivedArgs __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsSubscriptionReceivedArgs;

#endif // ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsSubscriptionReceivedArgs_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#if WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTuple_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTuple_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTuple __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTuple;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTuple;

typedef struct __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTupleVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTuple * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTuple * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTuple * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTuple * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTuple * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTuple * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTuple * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceTuple * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTuple * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTuple * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTuple * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceTuple * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTupleVtbl;

interface __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTuple
{
    CONST_VTBL struct __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTupleVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTuple_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTuple_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTuple_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTuple_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTuple_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTuple_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTuple_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTuple_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTuple_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTuple_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTuple_INTERFACE_DEFINED__

#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000


#if WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTuple_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTuple_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTuple __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTuple;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTuple;

typedef  struct __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTupleVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTuple * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTuple * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTuple * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTuple * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTuple * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTuple * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTuple * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTuple **first);

    END_INTERFACE
} __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTupleVtbl;

interface __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTuple
{
    CONST_VTBL struct __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTupleVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTuple_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTuple_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTuple_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTuple_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTuple_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTuple_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTuple_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTuple_INTERFACE_DEFINED__

#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000


#if WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTuple_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTuple_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTuple __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTuple;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTuple;

typedef struct __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTupleVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTuple * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTuple * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTuple * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTuple * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTuple * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTuple * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTuple * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceTuple * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTuple * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTuple * This,
            /* [in] */ __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceTuple * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTuple * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceTuple * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTupleVtbl;

interface __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTuple
{
    CONST_VTBL struct __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTupleVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTuple_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTuple_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTuple_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTuple_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTuple_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTuple_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTuple_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTuple_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTuple_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTuple_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTuple_INTERFACE_DEFINED__

#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000


#if WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceDescription_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceDescription_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceDescription __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceDescription;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceDescription;

typedef struct __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceDescriptionVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceDescription * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceDescription * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceDescription * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceDescription * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceDescription * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceDescription * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceDescription * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceDescription * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceDescription * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceDescription * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceDescription * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceDescription * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceDescriptionVtbl;

interface __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceDescription
{
    CONST_VTBL struct __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceDescriptionVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceDescription_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceDescription_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceDescription_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceDescription_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceDescription_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceDescription_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceDescription_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceDescription_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceDescription_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceDescription_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceDescription_INTERFACE_DEFINED__

#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000


#if WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceDescription_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceDescription_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceDescription __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceDescription;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceDescription;

typedef  struct __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceDescriptionVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceDescription * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceDescription * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceDescription * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceDescription * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceDescription * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceDescription * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceDescription * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceDescription **first);

    END_INTERFACE
} __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceDescriptionVtbl;

interface __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceDescription
{
    CONST_VTBL struct __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceDescriptionVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceDescription_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceDescription_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceDescription_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceDescription_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceDescription_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceDescription_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceDescription_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceDescription_INTERFACE_DEFINED__

#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000


#if WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceDescription_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceDescription_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceDescription __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceDescription;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceDescription;

typedef struct __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceDescriptionVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceDescription * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceDescription * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceDescription * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceDescription * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceDescription * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceDescription * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceDescription * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceDescription * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceDescription * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceDescription * This,
            /* [in] */ __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceDescription * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceDescription * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceDescription * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceDescriptionVtbl;

interface __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceDescription
{
    CONST_VTBL struct __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceDescriptionVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceDescription_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceDescription_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceDescription_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceDescription_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceDescription_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceDescription_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceDescription_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceDescription_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceDescription_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceDescription_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceDescription_INTERFACE_DEFINED__

#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000


#if WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResponse_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResponse_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResponse __FIAsyncOperationCompletedHandler_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResponse;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResponse;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResponse __FIAsyncOperation_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResponse;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResponseVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResponse * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResponse * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResponse * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResponse * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResponse *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResponseVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResponse
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResponseVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResponse_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResponse_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResponse_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResponse_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResponse_INTERFACE_DEFINED__

#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000


#if WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResponse_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResponse_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResponse __FIAsyncOperation_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResponse;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResponse;

typedef struct __FIAsyncOperation_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResponseVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResponse * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResponse * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResponse * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResponse * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResponse * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResponse * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResponse * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResponse *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResponse * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResponse **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResponse * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResponse * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResponseVtbl;

interface __FIAsyncOperation_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResponse
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResponseVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResponse_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResponse_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResponse_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResponse_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResponse_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResponse_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResponse_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResponse_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResponse_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResponse_INTERFACE_DEFINED__

#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000



#if WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsPresenceService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsPublishCapabilitiesRequestedArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsPresenceService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsPublishCapabilitiesRequestedArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsPresenceService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsPublishCapabilitiesRequestedArgs __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsPresenceService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsPublishCapabilitiesRequestedArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsPresenceService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsPublishCapabilitiesRequestedArgs;

typedef struct __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsPresenceService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsPublishCapabilitiesRequestedArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsPresenceService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsPublishCapabilitiesRequestedArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsPresenceService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsPublishCapabilitiesRequestedArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsPresenceService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsPublishCapabilitiesRequestedArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsPresenceService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsPublishCapabilitiesRequestedArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceService * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPublishCapabilitiesRequestedArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsPresenceService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsPublishCapabilitiesRequestedArgsVtbl;

interface __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsPresenceService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsPublishCapabilitiesRequestedArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsPresenceService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsPublishCapabilitiesRequestedArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsPresenceService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsPublishCapabilitiesRequestedArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsPresenceService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsPublishCapabilitiesRequestedArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsPresenceService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsPublishCapabilitiesRequestedArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsPresenceService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsPublishCapabilitiesRequestedArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsPresenceService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsPublishCapabilitiesRequestedArgs_INTERFACE_DEFINED__

#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000



#if WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsPresenceService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsCapabilitiesReceivedArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsPresenceService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsCapabilitiesReceivedArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsPresenceService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsCapabilitiesReceivedArgs __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsPresenceService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsCapabilitiesReceivedArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsPresenceService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsCapabilitiesReceivedArgs;

typedef struct __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsPresenceService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsCapabilitiesReceivedArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsPresenceService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsCapabilitiesReceivedArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsPresenceService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsCapabilitiesReceivedArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsPresenceService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsCapabilitiesReceivedArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsPresenceService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsCapabilitiesReceivedArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceService * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsCapabilitiesReceivedArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsPresenceService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsCapabilitiesReceivedArgsVtbl;

interface __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsPresenceService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsCapabilitiesReceivedArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsPresenceService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsCapabilitiesReceivedArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsPresenceService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsCapabilitiesReceivedArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsPresenceService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsCapabilitiesReceivedArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsPresenceService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsCapabilitiesReceivedArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsPresenceService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsCapabilitiesReceivedArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsPresenceService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsCapabilitiesReceivedArgs_INTERFACE_DEFINED__

#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000


#if WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsAddress_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsAddress_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsAddress __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsAddress;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsAddress;

typedef struct __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsAddressVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsAddress * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsAddress * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsAddress * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsAddress * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsAddress * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsAddress * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsAddress * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsAddress * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsAddress * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsAddress * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsAddress * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsAddress * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsAddressVtbl;

interface __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsAddress
{
    CONST_VTBL struct __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsAddressVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsAddress_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsAddress_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsAddress_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsAddress_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsAddress_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsAddress_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsAddress_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsAddress_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsAddress_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsAddress_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsAddress_INTERFACE_DEFINED__

#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000


#if WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsAddress_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsAddress_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsAddress __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsAddress;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsAddress;

typedef  struct __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsAddressVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsAddress * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsAddress * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsAddress * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsAddress * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsAddress * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsAddress * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsAddress * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsAddress **first);

    END_INTERFACE
} __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsAddressVtbl;

interface __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsAddress
{
    CONST_VTBL struct __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsAddressVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsAddress_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsAddress_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsAddress_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsAddress_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsAddress_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsAddress_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsAddress_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsAddress_INTERFACE_DEFINED__

#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000


#if WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsAddress_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsAddress_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsAddress __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsAddress;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsAddress;

typedef struct __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsAddressVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsAddress * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsAddress * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsAddress * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsAddress * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsAddress * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsAddress * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsAddress * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsAddress * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsAddress * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsAddress * This,
            /* [in] */ __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsAddress * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsAddress * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsAddress * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsAddressVtbl;

interface __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsAddress
{
    CONST_VTBL struct __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsAddressVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsAddress_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsAddress_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsAddress_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsAddress_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsAddress_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsAddress_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsAddress_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsAddress_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsAddress_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsAddress_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsAddress_INTERFACE_DEFINED__

#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000



#if WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsPresenceService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsSubscriptionReceivedArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsPresenceService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsSubscriptionReceivedArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsPresenceService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsSubscriptionReceivedArgs __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsPresenceService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsSubscriptionReceivedArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsPresenceService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsSubscriptionReceivedArgs;

typedef struct __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsPresenceService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsSubscriptionReceivedArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsPresenceService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsSubscriptionReceivedArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsPresenceService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsSubscriptionReceivedArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsPresenceService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsSubscriptionReceivedArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsPresenceService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsSubscriptionReceivedArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceService * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsSubscriptionReceivedArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsPresenceService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsSubscriptionReceivedArgsVtbl;

interface __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsPresenceService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsSubscriptionReceivedArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsPresenceService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsSubscriptionReceivedArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsPresenceService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsSubscriptionReceivedArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsPresenceService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsSubscriptionReceivedArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsPresenceService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsSubscriptionReceivedArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsPresenceService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsSubscriptionReceivedArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsPresenceService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsSubscriptionReceivedArgs_INTERFACE_DEFINED__

#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000


#if WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceInstance_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceInstance_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceInstance __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceInstance;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceInstance;

typedef struct __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceInstanceVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceInstance * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceInstance * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceInstance * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceInstance * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceInstance * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceInstance * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceInstance * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResourceInstance * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceInstance * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceInstance * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceInstance * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResourceInstance * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceInstanceVtbl;

interface __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceInstance
{
    CONST_VTBL struct __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceInstanceVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceInstance_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceInstance_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceInstance_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceInstance_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceInstance_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceInstance_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceInstance_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceInstance_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceInstance_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceInstance_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceInstance_INTERFACE_DEFINED__

#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000


#if WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceInstance_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceInstance_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceInstance __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceInstance;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceInstance;

typedef  struct __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceInstanceVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceInstance * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceInstance * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceInstance * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceInstance * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceInstance * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceInstance * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceInstance * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceInstance **first);

    END_INTERFACE
} __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceInstanceVtbl;

interface __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceInstance
{
    CONST_VTBL struct __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceInstanceVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceInstance_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceInstance_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceInstance_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceInstance_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceInstance_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceInstance_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceInstance_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceInstance_INTERFACE_DEFINED__

#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000


#if WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceInstance_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceInstance_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceInstance __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceInstance;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceInstance;

typedef struct __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceInstanceVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceInstance * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceInstance * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceInstance * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceInstance * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceInstance * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceInstance * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceInstance * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResourceInstance * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceInstance * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceInstance * This,
            /* [in] */ __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResourceInstance * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceInstance * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResourceInstance * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceInstanceVtbl;

interface __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceInstance
{
    CONST_VTBL struct __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceInstanceVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceInstance_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceInstance_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceInstance_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceInstance_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceInstance_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceInstance_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceInstance_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceInstance_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceInstance_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceInstance_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceInstance_INTERFACE_DEFINED__

#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000


#if WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResource_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResource_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResource __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResource;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResource;

typedef struct __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResource * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResource * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResource * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResource * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResource * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResource * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResource * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResource * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResource * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResource * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResource * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResource * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceVtbl;

interface __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResource
{
    CONST_VTBL struct __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResource_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResource_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResource_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResource_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResource_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResource_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResource_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResource_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResource_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResource_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResource_INTERFACE_DEFINED__

#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000


#if WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResource_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResource_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResource __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResource;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResource;

typedef  struct __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResource * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResource * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResource * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResource * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResource * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResource * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResource * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResource **first);

    END_INTERFACE
} __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceVtbl;

interface __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResource
{
    CONST_VTBL struct __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResource_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResource_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResource_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResource_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResource_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResource_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResource_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResource_INTERFACE_DEFINED__

#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000


#if WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResource_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResource_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResource __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResource;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResource;

typedef struct __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResource * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResource * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResource * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResource * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResource * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResource * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResource * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResource * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResource * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResource * This,
            /* [in] */ __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResource * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResource * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResource * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceVtbl;

interface __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResource
{
    CONST_VTBL struct __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResource_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResource_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResource_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResource_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResource_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResource_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResource_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResource_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResource_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResource_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResource_INTERFACE_DEFINED__

#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000

enum __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CRcsServiceStatus;
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceStatus_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceStatus_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceStatus __FIAsyncOperationCompletedHandler_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceStatus;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceStatus;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceStatus __FIAsyncOperation_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceStatus;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceStatusVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceStatus * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceStatus * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceStatus * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceStatus * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceStatus *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceStatusVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceStatus
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceStatusVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceStatus_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceStatus_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceStatus_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceStatus_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceStatus_INTERFACE_DEFINED__



#if !defined(____FIAsyncOperation_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceStatus_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceStatus_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceStatus __FIAsyncOperation_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceStatus;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceStatus;

typedef struct __FIAsyncOperation_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceStatusVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceStatus * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceStatus * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceStatus * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceStatus * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceStatus * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceStatus * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceStatus * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceStatus *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceStatus * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceStatus **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceStatus * This, /* [retval][out] */ __RPC__out enum __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CRcsServiceStatus *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceStatusVtbl;

interface __FIAsyncOperation_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceStatus
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceStatusVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceStatus_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceStatus_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceStatus_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceStatus_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceStatus_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceStatus_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceStatus_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceStatus_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceStatus_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceStatus_INTERFACE_DEFINED__




#if WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CIRcsService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceStatusChangedArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CIRcsService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceStatusChangedArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CIRcsService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceStatusChangedArgs __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CIRcsService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceStatusChangedArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CIRcsService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceStatusChangedArgs;

typedef struct __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CIRcsService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceStatusChangedArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CIRcsService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceStatusChangedArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CIRcsService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceStatusChangedArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CIRcsService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceStatusChangedArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CIRcsService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceStatusChangedArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsService * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceStatusChangedArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CIRcsService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceStatusChangedArgsVtbl;

interface __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CIRcsService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceStatusChangedArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CIRcsService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceStatusChangedArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CIRcsService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceStatusChangedArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CIRcsService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceStatusChangedArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CIRcsService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceStatusChangedArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CIRcsService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceStatusChangedArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CIRcsService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceStatusChangedArgs_INTERFACE_DEFINED__

#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000



#if WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CIRcsService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceAvailabilityChangedArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CIRcsService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceAvailabilityChangedArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CIRcsService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceAvailabilityChangedArgs __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CIRcsService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceAvailabilityChangedArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CIRcsService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceAvailabilityChangedArgs;

typedef struct __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CIRcsService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceAvailabilityChangedArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CIRcsService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceAvailabilityChangedArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CIRcsService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceAvailabilityChangedArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CIRcsService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceAvailabilityChangedArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CIRcsService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceAvailabilityChangedArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsService * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceAvailabilityChangedArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CIRcsService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceAvailabilityChangedArgsVtbl;

interface __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CIRcsService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceAvailabilityChangedArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CIRcsService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceAvailabilityChangedArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CIRcsService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceAvailabilityChangedArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CIRcsService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceAvailabilityChangedArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CIRcsService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceAvailabilityChangedArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CIRcsService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceAvailabilityChangedArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CIRcsService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceAvailabilityChangedArgs_INTERFACE_DEFINED__

#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000



typedef struct __x_ABI_CWindows_CFoundation_CDateTime __x_ABI_CWindows_CFoundation_CDateTime;


typedef struct __x_ABI_CWindows_CFoundation_CTimeSpan __x_ABI_CWindows_CFoundation_CTimeSpan;

#ifndef ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIUriRuntimeClass __x_ABI_CWindows_CFoundation_CIUriRuntimeClass;

#endif // ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__






typedef enum __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CRcsMediaType __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CRcsMediaType;


typedef enum __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CRcsNetworkType __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CRcsNetworkType;


typedef enum __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CRcsPublishRequestReason __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CRcsPublishRequestReason;


typedef enum __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CRcsResourceState __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CRcsResourceState;


typedef enum __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CRcsServiceAvailability __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CRcsServiceAvailability;


typedef enum __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CRcsServiceStatus __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CRcsServiceStatus;


typedef enum __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CRcsSubscribeReason __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CRcsSubscribeReason;






































/*
 *
 * Struct Windows.Phone.Restricted.Cellular.RcsPresence.RcsMediaType
 *
 * Introduced to Windows.Phone.Restricted.Cellular.RcsPresence.InternalRcsPresenceContract in version 1.0
 *
 *
 */

#if WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CRcsMediaType
{
    RcsMediaType_None = 0,
    RcsMediaType_AudioOnly = 1,
    RcsMediaType_AudioVideo = 2,
};
#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Phone.Restricted.Cellular.RcsPresence.RcsNetworkType
 *
 * Introduced to Windows.Phone.Restricted.Cellular.RcsPresence.InternalRcsPresenceContract in version 1.0
 *
 *
 */

#if WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CRcsNetworkType
{
    RcsNetworkType_Unknown = 0,
    RcsNetworkType_Lte = 1,
    RcsNetworkType_LteNoVoPS = 2,
    RcsNetworkType_Ehrpd = 3,
    RcsNetworkType_HspaPlus = 4,
    RcsNetworkType__3g = 5,
    RcsNetworkType__2g = 6,
    RcsNetworkType__WLAN = 7,
    RcsNetworkType__IWLAN = 8,
};
#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Phone.Restricted.Cellular.RcsPresence.RcsPublishRequestReason
 *
 * Introduced to Windows.Phone.Restricted.Cellular.RcsPresence.InternalRcsPresenceContract in version 1.0
 *
 *
 */

#if WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CRcsPublishRequestReason
{
    RcsPublishRequestReason_Expired = 0,
    RcsPublishRequestReason_NetworkChange = 1,
};
#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Phone.Restricted.Cellular.RcsPresence.RcsResourceState
 *
 * Introduced to Windows.Phone.Restricted.Cellular.RcsPresence.InternalRcsPresenceContract in version 1.0
 *
 *
 */

#if WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CRcsResourceState
{
    RcsResourceState_Unknown = 0,
    RcsResourceState_Pending = 1,
    RcsResourceState_Active = 2,
    RcsResourceState_Terminated = 3,
};
#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Phone.Restricted.Cellular.RcsPresence.RcsServiceAvailability
 *
 * Introduced to Windows.Phone.Restricted.Cellular.RcsPresence.InternalRcsPresenceContract in version 1.0
 *
 *
 */

#if WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CRcsServiceAvailability
{
    RcsServiceAvailability_Unavailable = 0,
    RcsServiceAvailability_Available = 1,
};
#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Phone.Restricted.Cellular.RcsPresence.RcsServiceStatus
 *
 * Introduced to Windows.Phone.Restricted.Cellular.RcsPresence.InternalRcsPresenceContract in version 1.0
 *
 *
 */

#if WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CRcsServiceStatus
{
    RcsServiceStatus_Stopped = 0,
    RcsServiceStatus_Started = 1,
    RcsServiceStatus_Stopping = 2,
    RcsServiceStatus_Starting = 3,
};
#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Phone.Restricted.Cellular.RcsPresence.RcsSubscribeReason
 *
 * Introduced to Windows.Phone.Restricted.Cellular.RcsPresence.InternalRcsPresenceContract in version 1.0
 *
 *
 */

#if WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CRcsSubscribeReason
{
    RcsSubscribeReason_Default = 0,
    RcsSubscribeReason_Expired = 1,
    RcsSubscribeReason_ContactModified = 2,
};
#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Phone.Restricted.Cellular.RcsPresence.IRcsAddress
 *
 * Introduced to Windows.Phone.Restricted.Cellular.RcsPresence.InternalRcsPresenceContract in version 1.0
 *
 *
 */
#if WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsAddress_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsAddress_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Phone_Restricted_Cellular_RcsPresence_IRcsAddress[] = L"Windows.Phone.Restricted.Cellular.RcsPresence.IRcsAddress";
/* [object, uuid("ECE4FA8C-C015-42D1-A77C-35171F4684E1"), contract] */
typedef struct __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsAddressVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsAddress * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsAddress * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsAddress * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsAddress * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsAddress * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsAddress * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Uri )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsAddress * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Uri )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsAddress * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsAddressVtbl;

interface __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsAddress
{
    CONST_VTBL struct __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsAddressVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsAddress_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsAddress_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsAddress_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsAddress_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsAddress_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsAddress_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsAddress_get_Uri(This,value) \
    ( (This)->lpVtbl->get_Uri(This,value) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsAddress_put_Uri(This,value) \
    ( (This)->lpVtbl->put_Uri(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsAddress;
#endif /* !defined(____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsAddress_INTERFACE_DEFINED__) */
#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Phone.Restricted.Cellular.RcsPresence.IRcsCapabilitiesReceivedArgs
 *
 * Introduced to Windows.Phone.Restricted.Cellular.RcsPresence.InternalRcsPresenceContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Phone.Restricted.Cellular.RcsPresence.RcsCapabilitiesReceivedArgs
 *
 *
 */
#if WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsCapabilitiesReceivedArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsCapabilitiesReceivedArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Phone_Restricted_Cellular_RcsPresence_IRcsCapabilitiesReceivedArgs[] = L"Windows.Phone.Restricted.Cellular.RcsPresence.IRcsCapabilitiesReceivedArgs";
/* [object, uuid("024FD9E5-C187-4A69-9225-5774404EA1F3"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsCapabilitiesReceivedArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsCapabilitiesReceivedArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsCapabilitiesReceivedArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsCapabilitiesReceivedArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsCapabilitiesReceivedArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsCapabilitiesReceivedArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsCapabilitiesReceivedArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ResourceUri )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsCapabilitiesReceivedArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Capabilities )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsCapabilitiesReceivedArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTuple * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsCapabilitiesReceivedArgsVtbl;

interface __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsCapabilitiesReceivedArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsCapabilitiesReceivedArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsCapabilitiesReceivedArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsCapabilitiesReceivedArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsCapabilitiesReceivedArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsCapabilitiesReceivedArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsCapabilitiesReceivedArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsCapabilitiesReceivedArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsCapabilitiesReceivedArgs_get_ResourceUri(This,value) \
    ( (This)->lpVtbl->get_ResourceUri(This,value) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsCapabilitiesReceivedArgs_get_Capabilities(This,value) \
    ( (This)->lpVtbl->get_Capabilities(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsCapabilitiesReceivedArgs;
#endif /* !defined(____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsCapabilitiesReceivedArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Phone.Restricted.Cellular.RcsPresence.IRcsPresenceService
 *
 * Introduced to Windows.Phone.Restricted.Cellular.RcsPresence.InternalRcsPresenceContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Phone.Restricted.Cellular.RcsPresence.RcsPresenceService
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Phone.Restricted.Cellular.RcsPresence.IRcsService
 *
 *
 */
#if WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceService_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceService_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Phone_Restricted_Cellular_RcsPresence_IRcsPresenceService[] = L"Windows.Phone.Restricted.Cellular.RcsPresence.IRcsPresenceService";
/* [object, uuid("9394D478-7C0B-4493-9B99-3A1D9244981D"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceServiceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceService * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceService * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceService * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceService * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceService * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceService * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *PublishCapabilitiesAsync )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceService * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * contactUri,
        /* [in] */__RPC__in_opt __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceDescription * serviceDescriptions,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResponse * * operation
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_PublishCapabilitiesRequested )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceService * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsPresenceService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsPublishCapabilitiesRequestedArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_PublishCapabilitiesRequested )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceService * This,
        /* [in] */EventRegistrationToken token
        );
    HRESULT ( STDMETHODCALLTYPE *RequestCapabilitiesAsync )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceService * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsAddress * address,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResponse * * operation
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_CapabilitiesReceived )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceService * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsPresenceService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsCapabilitiesReceivedArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_CapabilitiesReceived )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceService * This,
        /* [in] */EventRegistrationToken token
        );
    HRESULT ( STDMETHODCALLTYPE *SubscribeForCapabilitiesAsync )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceService * This,
        /* [in] */__x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CRcsSubscribeReason reason,
        /* [in] */__RPC__in_opt __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsAddress * addresses,
        /* [in] */__x_ABI_CWindows_CFoundation_CTimeSpan expiration,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResponse * * operation
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_SubscriptionReceived )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceService * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsPresenceService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsSubscriptionReceivedArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_SubscriptionReceived )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceService * This,
        /* [in] */EventRegistrationToken token
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceServiceVtbl;

interface __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceService
{
    CONST_VTBL struct __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceServiceVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceService_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceService_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceService_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceService_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceService_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceService_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceService_PublishCapabilitiesAsync(This,contactUri,serviceDescriptions,operation) \
    ( (This)->lpVtbl->PublishCapabilitiesAsync(This,contactUri,serviceDescriptions,operation) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceService_add_PublishCapabilitiesRequested(This,handler,token) \
    ( (This)->lpVtbl->add_PublishCapabilitiesRequested(This,handler,token) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceService_remove_PublishCapabilitiesRequested(This,token) \
    ( (This)->lpVtbl->remove_PublishCapabilitiesRequested(This,token) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceService_RequestCapabilitiesAsync(This,address,operation) \
    ( (This)->lpVtbl->RequestCapabilitiesAsync(This,address,operation) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceService_add_CapabilitiesReceived(This,handler,token) \
    ( (This)->lpVtbl->add_CapabilitiesReceived(This,handler,token) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceService_remove_CapabilitiesReceived(This,token) \
    ( (This)->lpVtbl->remove_CapabilitiesReceived(This,token) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceService_SubscribeForCapabilitiesAsync(This,reason,addresses,expiration,operation) \
    ( (This)->lpVtbl->SubscribeForCapabilitiesAsync(This,reason,addresses,expiration,operation) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceService_add_SubscriptionReceived(This,handler,token) \
    ( (This)->lpVtbl->add_SubscriptionReceived(This,handler,token) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceService_remove_SubscriptionReceived(This,token) \
    ( (This)->lpVtbl->remove_SubscriptionReceived(This,token) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceService;
#endif /* !defined(____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceService_INTERFACE_DEFINED__) */
#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Phone.Restricted.Cellular.RcsPresence.IRcsPresenceSettings
 *
 * Introduced to Windows.Phone.Restricted.Cellular.RcsPresence.InternalRcsPresenceContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Phone.Restricted.Cellular.RcsPresence.RcsPresenceSettings
 *
 *
 */
#if WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceSettings_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceSettings_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Phone_Restricted_Cellular_RcsPresence_IRcsPresenceSettings[] = L"Windows.Phone.Restricted.Cellular.RcsPresence.IRcsPresenceSettings";
/* [object, uuid("DD7B70D0-8C2C-41D9-92D9-8FF63499342A"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceSettingsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceSettings * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceSettings * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceSettings * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceSettings * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceSettings * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceSettings * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PublishEnabled )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceSettings * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_PublishEnabled )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceSettings * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PublishTimerInterval )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceSettings * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_PublishTimerInterval )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceSettings * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CTimeSpan value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceSettingsVtbl;

interface __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceSettings
{
    CONST_VTBL struct __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceSettingsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceSettings_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceSettings_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceSettings_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceSettings_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceSettings_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceSettings_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceSettings_get_PublishEnabled(This,value) \
    ( (This)->lpVtbl->get_PublishEnabled(This,value) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceSettings_put_PublishEnabled(This,value) \
    ( (This)->lpVtbl->put_PublishEnabled(This,value) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceSettings_get_PublishTimerInterval(This,value) \
    ( (This)->lpVtbl->get_PublishTimerInterval(This,value) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceSettings_put_PublishTimerInterval(This,value) \
    ( (This)->lpVtbl->put_PublishTimerInterval(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceSettings;
#endif /* !defined(____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceSettings_INTERFACE_DEFINED__) */
#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Phone.Restricted.Cellular.RcsPresence.IRcsPresenceSettings2
 *
 * Introduced to Windows.Phone.Restricted.Cellular.RcsPresence.InternalRcsPresenceContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Phone.Restricted.Cellular.RcsPresence.RcsPresenceSettings
 *
 *
 */
#if WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceSettings2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceSettings2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Phone_Restricted_Cellular_RcsPresence_IRcsPresenceSettings2[] = L"Windows.Phone.Restricted.Cellular.RcsPresence.IRcsPresenceSettings2";
/* [object, uuid("D38BAC8A-4AF0-4B59-B6BE-08FD640AB9B9"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceSettings2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceSettings2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceSettings2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceSettings2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceSettings2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceSettings2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceSettings2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsCapabilityDiscoveryEnabled )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceSettings2 * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_IsCapabilityDiscoveryEnabled )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceSettings2 * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CapabilityCacheExpiration )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceSettings2 * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_CapabilityCacheExpiration )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceSettings2 * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CTimeSpan value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AvailabilityCacheExpiration )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceSettings2 * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_AvailabilityCacheExpiration )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceSettings2 * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CTimeSpan value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CapabilityPollInterval )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceSettings2 * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_CapabilityPollInterval )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceSettings2 * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CTimeSpan value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MaxNumberOfEntriesInRequest )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceSettings2 * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_MaxNumberOfEntriesInRequest )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceSettings2 * This,
        /* [in] */UINT32 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsPresenceGzipEnabled )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceSettings2 * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_IsPresenceGzipEnabled )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceSettings2 * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PresenceNotifyDuration )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceSettings2 * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_PresenceNotifyDuration )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceSettings2 * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CTimeSpan value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_VoLTEProvisioningStatus )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceSettings2 * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_VoLTEProvisioningStatus )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceSettings2 * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PublishErrorRecoveryTimer )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceSettings2 * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_PublishErrorRecoveryTimer )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceSettings2 * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CTimeSpan value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceSettings2Vtbl;

interface __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceSettings2
{
    CONST_VTBL struct __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceSettings2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceSettings2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceSettings2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceSettings2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceSettings2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceSettings2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceSettings2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceSettings2_get_IsCapabilityDiscoveryEnabled(This,value) \
    ( (This)->lpVtbl->get_IsCapabilityDiscoveryEnabled(This,value) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceSettings2_put_IsCapabilityDiscoveryEnabled(This,value) \
    ( (This)->lpVtbl->put_IsCapabilityDiscoveryEnabled(This,value) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceSettings2_get_CapabilityCacheExpiration(This,value) \
    ( (This)->lpVtbl->get_CapabilityCacheExpiration(This,value) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceSettings2_put_CapabilityCacheExpiration(This,value) \
    ( (This)->lpVtbl->put_CapabilityCacheExpiration(This,value) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceSettings2_get_AvailabilityCacheExpiration(This,value) \
    ( (This)->lpVtbl->get_AvailabilityCacheExpiration(This,value) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceSettings2_put_AvailabilityCacheExpiration(This,value) \
    ( (This)->lpVtbl->put_AvailabilityCacheExpiration(This,value) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceSettings2_get_CapabilityPollInterval(This,value) \
    ( (This)->lpVtbl->get_CapabilityPollInterval(This,value) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceSettings2_put_CapabilityPollInterval(This,value) \
    ( (This)->lpVtbl->put_CapabilityPollInterval(This,value) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceSettings2_get_MaxNumberOfEntriesInRequest(This,value) \
    ( (This)->lpVtbl->get_MaxNumberOfEntriesInRequest(This,value) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceSettings2_put_MaxNumberOfEntriesInRequest(This,value) \
    ( (This)->lpVtbl->put_MaxNumberOfEntriesInRequest(This,value) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceSettings2_get_IsPresenceGzipEnabled(This,value) \
    ( (This)->lpVtbl->get_IsPresenceGzipEnabled(This,value) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceSettings2_put_IsPresenceGzipEnabled(This,value) \
    ( (This)->lpVtbl->put_IsPresenceGzipEnabled(This,value) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceSettings2_get_PresenceNotifyDuration(This,value) \
    ( (This)->lpVtbl->get_PresenceNotifyDuration(This,value) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceSettings2_put_PresenceNotifyDuration(This,value) \
    ( (This)->lpVtbl->put_PresenceNotifyDuration(This,value) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceSettings2_get_VoLTEProvisioningStatus(This,value) \
    ( (This)->lpVtbl->get_VoLTEProvisioningStatus(This,value) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceSettings2_put_VoLTEProvisioningStatus(This,value) \
    ( (This)->lpVtbl->put_VoLTEProvisioningStatus(This,value) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceSettings2_get_PublishErrorRecoveryTimer(This,value) \
    ( (This)->lpVtbl->get_PublishErrorRecoveryTimer(This,value) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceSettings2_put_PublishErrorRecoveryTimer(This,value) \
    ( (This)->lpVtbl->put_PublishErrorRecoveryTimer(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceSettings2;
#endif /* !defined(____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPresenceSettings2_INTERFACE_DEFINED__) */
#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Phone.Restricted.Cellular.RcsPresence.IRcsPublishCapabilitiesRequestedArgs
 *
 * Introduced to Windows.Phone.Restricted.Cellular.RcsPresence.InternalRcsPresenceContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Phone.Restricted.Cellular.RcsPresence.RcsPublishCapabilitiesRequestedArgs
 *
 *
 */
#if WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPublishCapabilitiesRequestedArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPublishCapabilitiesRequestedArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Phone_Restricted_Cellular_RcsPresence_IRcsPublishCapabilitiesRequestedArgs[] = L"Windows.Phone.Restricted.Cellular.RcsPresence.IRcsPublishCapabilitiesRequestedArgs";
/* [object, uuid("1F062F50-8973-4CB9-BE29-DFA18AD1CAC4"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPublishCapabilitiesRequestedArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPublishCapabilitiesRequestedArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPublishCapabilitiesRequestedArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPublishCapabilitiesRequestedArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPublishCapabilitiesRequestedArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPublishCapabilitiesRequestedArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPublishCapabilitiesRequestedArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Reason )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPublishCapabilitiesRequestedArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CRcsPublishRequestReason * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_NetworkType )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPublishCapabilitiesRequestedArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CRcsNetworkType * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPublishCapabilitiesRequestedArgsVtbl;

interface __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPublishCapabilitiesRequestedArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPublishCapabilitiesRequestedArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPublishCapabilitiesRequestedArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPublishCapabilitiesRequestedArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPublishCapabilitiesRequestedArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPublishCapabilitiesRequestedArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPublishCapabilitiesRequestedArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPublishCapabilitiesRequestedArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPublishCapabilitiesRequestedArgs_get_Reason(This,value) \
    ( (This)->lpVtbl->get_Reason(This,value) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPublishCapabilitiesRequestedArgs_get_NetworkType(This,value) \
    ( (This)->lpVtbl->get_NetworkType(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPublishCapabilitiesRequestedArgs;
#endif /* !defined(____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsPublishCapabilitiesRequestedArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Phone.Restricted.Cellular.RcsPresence.IRcsResource
 *
 * Introduced to Windows.Phone.Restricted.Cellular.RcsPresence.InternalRcsPresenceContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Phone.Restricted.Cellular.RcsPresence.RcsResource
 *
 *
 */
#if WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResource_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResource_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Phone_Restricted_Cellular_RcsPresence_IRcsResource[] = L"Windows.Phone.Restricted.Cellular.RcsPresence.IRcsResource";
/* [object, uuid("C37FA519-AB14-462D-91C9-3242D174FC72"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResourceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResource * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResource * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResource * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResource * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResource * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResource * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Uri )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResource * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Name )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResource * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Instances )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResource * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResourceInstance * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResourceVtbl;

interface __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResource
{
    CONST_VTBL struct __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResourceVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResource_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResource_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResource_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResource_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResource_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResource_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResource_get_Uri(This,value) \
    ( (This)->lpVtbl->get_Uri(This,value) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResource_get_Name(This,value) \
    ( (This)->lpVtbl->get_Name(This,value) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResource_get_Instances(This,value) \
    ( (This)->lpVtbl->get_Instances(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResource;
#endif /* !defined(____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResource_INTERFACE_DEFINED__) */
#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Phone.Restricted.Cellular.RcsPresence.IRcsResourceInstance
 *
 * Introduced to Windows.Phone.Restricted.Cellular.RcsPresence.InternalRcsPresenceContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Phone.Restricted.Cellular.RcsPresence.RcsResourceInstance
 *
 *
 */
#if WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResourceInstance_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResourceInstance_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Phone_Restricted_Cellular_RcsPresence_IRcsResourceInstance[] = L"Windows.Phone.Restricted.Cellular.RcsPresence.IRcsResourceInstance";
/* [object, uuid("71381418-C4D2-424C-B35C-340E6306785E"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResourceInstanceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResourceInstance * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResourceInstance * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResourceInstance * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResourceInstance * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResourceInstance * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResourceInstance * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Uri )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResourceInstance * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Identifier )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResourceInstance * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_State )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResourceInstance * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CRcsResourceState * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Reason )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResourceInstance * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Capabilities )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResourceInstance * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceTuple * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResourceInstanceVtbl;

interface __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResourceInstance
{
    CONST_VTBL struct __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResourceInstanceVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResourceInstance_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResourceInstance_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResourceInstance_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResourceInstance_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResourceInstance_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResourceInstance_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResourceInstance_get_Uri(This,value) \
    ( (This)->lpVtbl->get_Uri(This,value) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResourceInstance_get_Identifier(This,value) \
    ( (This)->lpVtbl->get_Identifier(This,value) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResourceInstance_get_State(This,value) \
    ( (This)->lpVtbl->get_State(This,value) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResourceInstance_get_Reason(This,value) \
    ( (This)->lpVtbl->get_Reason(This,value) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResourceInstance_get_Capabilities(This,value) \
    ( (This)->lpVtbl->get_Capabilities(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResourceInstance;
#endif /* !defined(____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResourceInstance_INTERFACE_DEFINED__) */
#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Phone.Restricted.Cellular.RcsPresence.IRcsResourceList
 *
 * Introduced to Windows.Phone.Restricted.Cellular.RcsPresence.InternalRcsPresenceContract in version 1.0
 *
 *
 */
#if WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResourceList_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResourceList_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Phone_Restricted_Cellular_RcsPresence_IRcsResourceList[] = L"Windows.Phone.Restricted.Cellular.RcsPresence.IRcsResourceList";
/* [object, uuid("79F2A52B-0C12-483A-A06B-5D88F2EDFD4B"), contract] */
typedef struct __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResourceListVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResourceList * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResourceList * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResourceList * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResourceList * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResourceList * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResourceList * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Uri )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResourceList * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Name )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResourceList * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Version )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResourceList * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_FullState )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResourceList * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Resources )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResourceList * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsResource * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResourceListVtbl;

interface __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResourceList
{
    CONST_VTBL struct __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResourceListVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResourceList_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResourceList_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResourceList_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResourceList_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResourceList_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResourceList_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResourceList_get_Uri(This,value) \
    ( (This)->lpVtbl->get_Uri(This,value) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResourceList_get_Name(This,value) \
    ( (This)->lpVtbl->get_Name(This,value) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResourceList_get_Version(This,value) \
    ( (This)->lpVtbl->get_Version(This,value) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResourceList_get_FullState(This,value) \
    ( (This)->lpVtbl->get_FullState(This,value) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResourceList_get_Resources(This,value) \
    ( (This)->lpVtbl->get_Resources(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResourceList;
#endif /* !defined(____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResourceList_INTERFACE_DEFINED__) */
#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Phone.Restricted.Cellular.RcsPresence.IRcsResponse
 *
 * Introduced to Windows.Phone.Restricted.Cellular.RcsPresence.InternalRcsPresenceContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Phone.Restricted.Cellular.RcsPresence.RcsResponse
 *
 *
 */
#if WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResponse_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResponse_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Phone_Restricted_Cellular_RcsPresence_IRcsResponse[] = L"Windows.Phone.Restricted.Cellular.RcsPresence.IRcsResponse";
/* [object, uuid("B7EBCF86-6640-4BB4-8192-FEB1BAA17872"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResponseVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResponse * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResponse * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResponse * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResponse * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResponse * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResponse * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ResponseCode )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResponse * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ResponseReason )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResponse * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResponseVtbl;

interface __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResponse
{
    CONST_VTBL struct __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResponseVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResponse_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResponse_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResponse_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResponse_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResponse_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResponse_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResponse_get_ResponseCode(This,value) \
    ( (This)->lpVtbl->get_ResponseCode(This,value) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResponse_get_ResponseReason(This,value) \
    ( (This)->lpVtbl->get_ResponseReason(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResponse;
#endif /* !defined(____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResponse_INTERFACE_DEFINED__) */
#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Phone.Restricted.Cellular.RcsPresence.IRcsService
 *
 * Introduced to Windows.Phone.Restricted.Cellular.RcsPresence.InternalRcsPresenceContract in version 1.0
 *
 *
 */
#if WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsService_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsService_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Phone_Restricted_Cellular_RcsPresence_IRcsService[] = L"Windows.Phone.Restricted.Cellular.RcsPresence.IRcsService";
/* [object, uuid("B57094FD-74DA-4273-9039-F489ABC6FF8D"), contract] */
typedef struct __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsService * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsService * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsService * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsService * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsService * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsService * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *StartServiceAsync )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsService * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceStatus * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *StopServiceAsync )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsService * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceStatus * * operation
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ServiceStatus )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsService * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CRcsServiceStatus * value
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_ServiceStatusChanged )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsService * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CIRcsService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceStatusChangedArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_ServiceStatusChanged )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsService * This,
        /* [in] */EventRegistrationToken token
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ServiceAvailability )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsService * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CRcsServiceAvailability * value
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_ServiceAvailabilityChanged )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsService * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CIRcsService_Windows__CPhone__CRestricted__CCellular__CRcsPresence__CRcsServiceAvailabilityChangedArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_ServiceAvailabilityChanged )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsService * This,
        /* [in] */EventRegistrationToken token
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ServiceVersion )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsService * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceVtbl;

interface __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsService
{
    CONST_VTBL struct __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsService_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsService_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsService_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsService_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsService_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsService_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsService_StartServiceAsync(This,operation) \
    ( (This)->lpVtbl->StartServiceAsync(This,operation) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsService_StopServiceAsync(This,operation) \
    ( (This)->lpVtbl->StopServiceAsync(This,operation) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsService_get_ServiceStatus(This,value) \
    ( (This)->lpVtbl->get_ServiceStatus(This,value) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsService_add_ServiceStatusChanged(This,handler,token) \
    ( (This)->lpVtbl->add_ServiceStatusChanged(This,handler,token) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsService_remove_ServiceStatusChanged(This,token) \
    ( (This)->lpVtbl->remove_ServiceStatusChanged(This,token) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsService_get_ServiceAvailability(This,value) \
    ( (This)->lpVtbl->get_ServiceAvailability(This,value) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsService_add_ServiceAvailabilityChanged(This,handler,token) \
    ( (This)->lpVtbl->add_ServiceAvailabilityChanged(This,handler,token) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsService_remove_ServiceAvailabilityChanged(This,token) \
    ( (This)->lpVtbl->remove_ServiceAvailabilityChanged(This,token) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsService_get_ServiceVersion(This,value) \
    ( (This)->lpVtbl->get_ServiceVersion(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsService;
#endif /* !defined(____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsService_INTERFACE_DEFINED__) */
#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Phone.Restricted.Cellular.RcsPresence.IRcsServiceAvailabilityChangedArgs
 *
 * Introduced to Windows.Phone.Restricted.Cellular.RcsPresence.InternalRcsPresenceContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Phone.Restricted.Cellular.RcsPresence.RcsServiceAvailabilityChangedArgs
 *
 *
 */
#if WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceAvailabilityChangedArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceAvailabilityChangedArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Phone_Restricted_Cellular_RcsPresence_IRcsServiceAvailabilityChangedArgs[] = L"Windows.Phone.Restricted.Cellular.RcsPresence.IRcsServiceAvailabilityChangedArgs";
/* [object, uuid("433108B4-1B3F-4033-8D0B-768D78F658A7"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceAvailabilityChangedArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceAvailabilityChangedArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceAvailabilityChangedArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceAvailabilityChangedArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceAvailabilityChangedArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceAvailabilityChangedArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceAvailabilityChangedArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ServiceAvailability )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceAvailabilityChangedArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CRcsServiceAvailability * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceAvailabilityChangedArgsVtbl;

interface __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceAvailabilityChangedArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceAvailabilityChangedArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceAvailabilityChangedArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceAvailabilityChangedArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceAvailabilityChangedArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceAvailabilityChangedArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceAvailabilityChangedArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceAvailabilityChangedArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceAvailabilityChangedArgs_get_ServiceAvailability(This,value) \
    ( (This)->lpVtbl->get_ServiceAvailability(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceAvailabilityChangedArgs;
#endif /* !defined(____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceAvailabilityChangedArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Phone.Restricted.Cellular.RcsPresence.IRcsServiceDescription
 *
 * Introduced to Windows.Phone.Restricted.Cellular.RcsPresence.InternalRcsPresenceContract in version 1.0
 *
 *
 */
#if WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceDescription_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceDescription_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Phone_Restricted_Cellular_RcsPresence_IRcsServiceDescription[] = L"Windows.Phone.Restricted.Cellular.RcsPresence.IRcsServiceDescription";
/* [object, uuid("416437DE-E78B-44C9-990F-7EDE1F2A0C91"), contract] */
typedef struct __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceDescriptionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceDescription * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceDescription * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceDescription * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceDescription * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceDescription * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceDescription * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ServiceIdentifier )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceDescription * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ServiceIdentifier )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceDescription * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ServiceDescription )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceDescription * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ServiceDescription )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceDescription * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ServiceVersion )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceDescription * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ServiceVersion )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceDescription * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MediaType )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceDescription * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CRcsMediaType * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_MediaType )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceDescription * This,
        /* [in] */__x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CRcsMediaType value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceDescriptionVtbl;

interface __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceDescription
{
    CONST_VTBL struct __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceDescriptionVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceDescription_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceDescription_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceDescription_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceDescription_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceDescription_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceDescription_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceDescription_get_ServiceIdentifier(This,value) \
    ( (This)->lpVtbl->get_ServiceIdentifier(This,value) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceDescription_put_ServiceIdentifier(This,value) \
    ( (This)->lpVtbl->put_ServiceIdentifier(This,value) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceDescription_get_ServiceDescription(This,value) \
    ( (This)->lpVtbl->get_ServiceDescription(This,value) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceDescription_put_ServiceDescription(This,value) \
    ( (This)->lpVtbl->put_ServiceDescription(This,value) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceDescription_get_ServiceVersion(This,value) \
    ( (This)->lpVtbl->get_ServiceVersion(This,value) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceDescription_put_ServiceVersion(This,value) \
    ( (This)->lpVtbl->put_ServiceVersion(This,value) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceDescription_get_MediaType(This,value) \
    ( (This)->lpVtbl->get_MediaType(This,value) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceDescription_put_MediaType(This,value) \
    ( (This)->lpVtbl->put_MediaType(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceDescription;
#endif /* !defined(____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceDescription_INTERFACE_DEFINED__) */
#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Phone.Restricted.Cellular.RcsPresence.IRcsServiceStatusChangedArgs
 *
 * Introduced to Windows.Phone.Restricted.Cellular.RcsPresence.InternalRcsPresenceContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Phone.Restricted.Cellular.RcsPresence.RcsServiceStatusChangedArgs
 *
 *
 */
#if WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceStatusChangedArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceStatusChangedArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Phone_Restricted_Cellular_RcsPresence_IRcsServiceStatusChangedArgs[] = L"Windows.Phone.Restricted.Cellular.RcsPresence.IRcsServiceStatusChangedArgs";
/* [object, uuid("661AE45A-412A-460D-BDD4-DD8EA3C15583"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceStatusChangedArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceStatusChangedArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceStatusChangedArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceStatusChangedArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceStatusChangedArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceStatusChangedArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceStatusChangedArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ServiceStatus )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceStatusChangedArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CRcsServiceStatus * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceStatusChangedArgsVtbl;

interface __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceStatusChangedArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceStatusChangedArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceStatusChangedArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceStatusChangedArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceStatusChangedArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceStatusChangedArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceStatusChangedArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceStatusChangedArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceStatusChangedArgs_get_ServiceStatus(This,value) \
    ( (This)->lpVtbl->get_ServiceStatus(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceStatusChangedArgs;
#endif /* !defined(____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceStatusChangedArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Phone.Restricted.Cellular.RcsPresence.IRcsServiceTuple
 *
 * Introduced to Windows.Phone.Restricted.Cellular.RcsPresence.InternalRcsPresenceContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Phone.Restricted.Cellular.RcsPresence.RcsServiceTuple
 *
 *
 */
#if WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceTuple_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceTuple_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Phone_Restricted_Cellular_RcsPresence_IRcsServiceTuple[] = L"Windows.Phone.Restricted.Cellular.RcsPresence.IRcsServiceTuple";
/* [object, uuid("CE17A39B-2E8B-41AF-B5A9-5CB072CC373C"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceTupleVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceTuple * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceTuple * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceTuple * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceTuple * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceTuple * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceTuple * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ServiceDescription )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceTuple * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceDescription * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ContactUri )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceTuple * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PublishedTime )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceTuple * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceTupleVtbl;

interface __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceTuple
{
    CONST_VTBL struct __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceTupleVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceTuple_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceTuple_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceTuple_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceTuple_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceTuple_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceTuple_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceTuple_get_ServiceDescription(This,value) \
    ( (This)->lpVtbl->get_ServiceDescription(This,value) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceTuple_get_ContactUri(This,value) \
    ( (This)->lpVtbl->get_ContactUri(This,value) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceTuple_get_PublishedTime(This,value) \
    ( (This)->lpVtbl->get_PublishedTime(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceTuple;
#endif /* !defined(____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsServiceTuple_INTERFACE_DEFINED__) */
#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Phone.Restricted.Cellular.RcsPresence.IRcsSubscriptionReceivedArgs
 *
 * Introduced to Windows.Phone.Restricted.Cellular.RcsPresence.InternalRcsPresenceContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Phone.Restricted.Cellular.RcsPresence.RcsSubscriptionReceivedArgs
 *
 *
 */
#if WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsSubscriptionReceivedArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsSubscriptionReceivedArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Phone_Restricted_Cellular_RcsPresence_IRcsSubscriptionReceivedArgs[] = L"Windows.Phone.Restricted.Cellular.RcsPresence.IRcsSubscriptionReceivedArgs";
/* [object, uuid("04EAF06D-42BC-46CC-A637-EEB3A8723FE4"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsSubscriptionReceivedArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsSubscriptionReceivedArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsSubscriptionReceivedArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsSubscriptionReceivedArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsSubscriptionReceivedArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsSubscriptionReceivedArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsSubscriptionReceivedArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ResourceList )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsSubscriptionReceivedArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsResourceList * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsSubscriptionReceivedArgsVtbl;

interface __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsSubscriptionReceivedArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsSubscriptionReceivedArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsSubscriptionReceivedArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsSubscriptionReceivedArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsSubscriptionReceivedArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsSubscriptionReceivedArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsSubscriptionReceivedArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsSubscriptionReceivedArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsSubscriptionReceivedArgs_get_ResourceList(This,value) \
    ( (This)->lpVtbl->get_ResourceList(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsSubscriptionReceivedArgs;
#endif /* !defined(____x_ABI_CWindows_CPhone_CRestricted_CCellular_CRcsPresence_CIRcsSubscriptionReceivedArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Phone.Restricted.Cellular.RcsPresence.RcsAddress
 *
 * Introduced to Windows.Phone.Restricted.Cellular.RcsPresence.InternalRcsPresenceContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Phone.Restricted.Cellular.RcsPresence.IRcsAddress ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Phone_Restricted_Cellular_RcsPresence_RcsAddress_DEFINED
#define RUNTIMECLASS_Windows_Phone_Restricted_Cellular_RcsPresence_RcsAddress_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Phone_Restricted_Cellular_RcsPresence_RcsAddress[] = L"Windows.Phone.Restricted.Cellular.RcsPresence.RcsAddress";
#endif
#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Phone.Restricted.Cellular.RcsPresence.RcsCapabilitiesReceivedArgs
 *
 * Introduced to Windows.Phone.Restricted.Cellular.RcsPresence.InternalRcsPresenceContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Phone.Restricted.Cellular.RcsPresence.IRcsCapabilitiesReceivedArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Phone_Restricted_Cellular_RcsPresence_RcsCapabilitiesReceivedArgs_DEFINED
#define RUNTIMECLASS_Windows_Phone_Restricted_Cellular_RcsPresence_RcsCapabilitiesReceivedArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Phone_Restricted_Cellular_RcsPresence_RcsCapabilitiesReceivedArgs[] = L"Windows.Phone.Restricted.Cellular.RcsPresence.RcsCapabilitiesReceivedArgs";
#endif
#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Phone.Restricted.Cellular.RcsPresence.RcsPresenceService
 *
 * Introduced to Windows.Phone.Restricted.Cellular.RcsPresence.InternalRcsPresenceContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Phone.Restricted.Cellular.RcsPresence.IRcsService
 *    Windows.Phone.Restricted.Cellular.RcsPresence.IRcsPresenceService ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Phone_Restricted_Cellular_RcsPresence_RcsPresenceService_DEFINED
#define RUNTIMECLASS_Windows_Phone_Restricted_Cellular_RcsPresence_RcsPresenceService_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Phone_Restricted_Cellular_RcsPresence_RcsPresenceService[] = L"Windows.Phone.Restricted.Cellular.RcsPresence.RcsPresenceService";
#endif
#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Phone.Restricted.Cellular.RcsPresence.RcsPresenceSettings
 *
 * Introduced to Windows.Phone.Restricted.Cellular.RcsPresence.InternalRcsPresenceContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Phone.Restricted.Cellular.RcsPresence.IRcsPresenceSettings ** Default Interface **
 *    Windows.Phone.Restricted.Cellular.RcsPresence.IRcsPresenceSettings2
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Phone_Restricted_Cellular_RcsPresence_RcsPresenceSettings_DEFINED
#define RUNTIMECLASS_Windows_Phone_Restricted_Cellular_RcsPresence_RcsPresenceSettings_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Phone_Restricted_Cellular_RcsPresence_RcsPresenceSettings[] = L"Windows.Phone.Restricted.Cellular.RcsPresence.RcsPresenceSettings";
#endif
#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Phone.Restricted.Cellular.RcsPresence.RcsPublishCapabilitiesRequestedArgs
 *
 * Introduced to Windows.Phone.Restricted.Cellular.RcsPresence.InternalRcsPresenceContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Phone.Restricted.Cellular.RcsPresence.IRcsPublishCapabilitiesRequestedArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Phone_Restricted_Cellular_RcsPresence_RcsPublishCapabilitiesRequestedArgs_DEFINED
#define RUNTIMECLASS_Windows_Phone_Restricted_Cellular_RcsPresence_RcsPublishCapabilitiesRequestedArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Phone_Restricted_Cellular_RcsPresence_RcsPublishCapabilitiesRequestedArgs[] = L"Windows.Phone.Restricted.Cellular.RcsPresence.RcsPublishCapabilitiesRequestedArgs";
#endif
#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Phone.Restricted.Cellular.RcsPresence.RcsResource
 *
 * Introduced to Windows.Phone.Restricted.Cellular.RcsPresence.InternalRcsPresenceContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Phone.Restricted.Cellular.RcsPresence.IRcsResource ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Phone_Restricted_Cellular_RcsPresence_RcsResource_DEFINED
#define RUNTIMECLASS_Windows_Phone_Restricted_Cellular_RcsPresence_RcsResource_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Phone_Restricted_Cellular_RcsPresence_RcsResource[] = L"Windows.Phone.Restricted.Cellular.RcsPresence.RcsResource";
#endif
#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Phone.Restricted.Cellular.RcsPresence.RcsResourceInstance
 *
 * Introduced to Windows.Phone.Restricted.Cellular.RcsPresence.InternalRcsPresenceContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Phone.Restricted.Cellular.RcsPresence.IRcsResourceInstance ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Phone_Restricted_Cellular_RcsPresence_RcsResourceInstance_DEFINED
#define RUNTIMECLASS_Windows_Phone_Restricted_Cellular_RcsPresence_RcsResourceInstance_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Phone_Restricted_Cellular_RcsPresence_RcsResourceInstance[] = L"Windows.Phone.Restricted.Cellular.RcsPresence.RcsResourceInstance";
#endif
#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Phone.Restricted.Cellular.RcsPresence.RcsResourceList
 *
 * Introduced to Windows.Phone.Restricted.Cellular.RcsPresence.InternalRcsPresenceContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Phone.Restricted.Cellular.RcsPresence.IRcsResourceList ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Phone_Restricted_Cellular_RcsPresence_RcsResourceList_DEFINED
#define RUNTIMECLASS_Windows_Phone_Restricted_Cellular_RcsPresence_RcsResourceList_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Phone_Restricted_Cellular_RcsPresence_RcsResourceList[] = L"Windows.Phone.Restricted.Cellular.RcsPresence.RcsResourceList";
#endif
#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Phone.Restricted.Cellular.RcsPresence.RcsResponse
 *
 * Introduced to Windows.Phone.Restricted.Cellular.RcsPresence.InternalRcsPresenceContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Phone.Restricted.Cellular.RcsPresence.IRcsResponse ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Phone_Restricted_Cellular_RcsPresence_RcsResponse_DEFINED
#define RUNTIMECLASS_Windows_Phone_Restricted_Cellular_RcsPresence_RcsResponse_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Phone_Restricted_Cellular_RcsPresence_RcsResponse[] = L"Windows.Phone.Restricted.Cellular.RcsPresence.RcsResponse";
#endif
#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Phone.Restricted.Cellular.RcsPresence.RcsServiceAvailabilityChangedArgs
 *
 * Introduced to Windows.Phone.Restricted.Cellular.RcsPresence.InternalRcsPresenceContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Phone.Restricted.Cellular.RcsPresence.IRcsServiceAvailabilityChangedArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Phone_Restricted_Cellular_RcsPresence_RcsServiceAvailabilityChangedArgs_DEFINED
#define RUNTIMECLASS_Windows_Phone_Restricted_Cellular_RcsPresence_RcsServiceAvailabilityChangedArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Phone_Restricted_Cellular_RcsPresence_RcsServiceAvailabilityChangedArgs[] = L"Windows.Phone.Restricted.Cellular.RcsPresence.RcsServiceAvailabilityChangedArgs";
#endif
#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Phone.Restricted.Cellular.RcsPresence.RcsServiceDescription
 *
 * Introduced to Windows.Phone.Restricted.Cellular.RcsPresence.InternalRcsPresenceContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Phone.Restricted.Cellular.RcsPresence.IRcsServiceDescription ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Phone_Restricted_Cellular_RcsPresence_RcsServiceDescription_DEFINED
#define RUNTIMECLASS_Windows_Phone_Restricted_Cellular_RcsPresence_RcsServiceDescription_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Phone_Restricted_Cellular_RcsPresence_RcsServiceDescription[] = L"Windows.Phone.Restricted.Cellular.RcsPresence.RcsServiceDescription";
#endif
#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Phone.Restricted.Cellular.RcsPresence.RcsServiceStatusChangedArgs
 *
 * Introduced to Windows.Phone.Restricted.Cellular.RcsPresence.InternalRcsPresenceContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Phone.Restricted.Cellular.RcsPresence.IRcsServiceStatusChangedArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Phone_Restricted_Cellular_RcsPresence_RcsServiceStatusChangedArgs_DEFINED
#define RUNTIMECLASS_Windows_Phone_Restricted_Cellular_RcsPresence_RcsServiceStatusChangedArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Phone_Restricted_Cellular_RcsPresence_RcsServiceStatusChangedArgs[] = L"Windows.Phone.Restricted.Cellular.RcsPresence.RcsServiceStatusChangedArgs";
#endif
#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Phone.Restricted.Cellular.RcsPresence.RcsServiceTuple
 *
 * Introduced to Windows.Phone.Restricted.Cellular.RcsPresence.InternalRcsPresenceContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Phone.Restricted.Cellular.RcsPresence.IRcsServiceTuple ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Phone_Restricted_Cellular_RcsPresence_RcsServiceTuple_DEFINED
#define RUNTIMECLASS_Windows_Phone_Restricted_Cellular_RcsPresence_RcsServiceTuple_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Phone_Restricted_Cellular_RcsPresence_RcsServiceTuple[] = L"Windows.Phone.Restricted.Cellular.RcsPresence.RcsServiceTuple";
#endif
#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Phone.Restricted.Cellular.RcsPresence.RcsSubscriptionReceivedArgs
 *
 * Introduced to Windows.Phone.Restricted.Cellular.RcsPresence.InternalRcsPresenceContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Phone.Restricted.Cellular.RcsPresence.IRcsSubscriptionReceivedArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Phone_Restricted_Cellular_RcsPresence_RcsSubscriptionReceivedArgs_DEFINED
#define RUNTIMECLASS_Windows_Phone_Restricted_Cellular_RcsPresence_RcsSubscriptionReceivedArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Phone_Restricted_Cellular_RcsPresence_RcsSubscriptionReceivedArgs[] = L"Windows.Phone.Restricted.Cellular.RcsPresence.RcsSubscriptionReceivedArgs";
#endif
#endif // WINDOWS_PHONE_RESTRICTED_CELLULAR_RCSPRESENCE_INTERNALRCSPRESENCECONTRACT_VERSION >= 0x10000






#endif // defined(__cplusplus)
#pragma pop_macro("MIDL_CONST_ID")
#endif // __windows2Ephone2Erestricted2Ecellular2Ercspresence_p_h__

#endif // __windows2Ephone2Erestricted2Ecellular2Ercspresence_h__
