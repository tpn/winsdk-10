/* Header file automatically generated from windows.devices.i2c.provider.idl */
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
#ifndef __windows2Edevices2Ei2c2Eprovider_h__
#define __windows2Edevices2Ei2c2Eprovider_h__
#ifndef __windows2Edevices2Ei2c2Eprovider_p_h__
#define __windows2Edevices2Ei2c2Eprovider_p_h__


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
#ifndef ____x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cControllerProvider_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cControllerProvider_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace I2c {
                namespace Provider {
                    interface II2cControllerProvider;
                } /* Windows */
            } /* Devices */
        } /* I2c */
    } /* Provider */} /* ABI */
#define __x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cControllerProvider ABI::Windows::Devices::I2c::Provider::II2cControllerProvider

#endif // ____x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cControllerProvider_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cDeviceProvider_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cDeviceProvider_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace I2c {
                namespace Provider {
                    interface II2cDeviceProvider;
                } /* Windows */
            } /* Devices */
        } /* I2c */
    } /* Provider */} /* ABI */
#define __x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cDeviceProvider ABI::Windows::Devices::I2c::Provider::II2cDeviceProvider

#endif // ____x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cDeviceProvider_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cProvider_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cProvider_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace I2c {
                namespace Provider {
                    interface II2cProvider;
                } /* Windows */
            } /* Devices */
        } /* I2c */
    } /* Provider */} /* ABI */
#define __x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cProvider ABI::Windows::Devices::I2c::Provider::II2cProvider

#endif // ____x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cProvider_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CI2c_CProvider_CIProviderI2cConnectionSettings_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CI2c_CProvider_CIProviderI2cConnectionSettings_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace I2c {
                namespace Provider {
                    interface IProviderI2cConnectionSettings;
                } /* Windows */
            } /* Devices */
        } /* I2c */
    } /* Provider */} /* ABI */
#define __x_ABI_CWindows_CDevices_CI2c_CProvider_CIProviderI2cConnectionSettings ABI::Windows::Devices::I2c::Provider::IProviderI2cConnectionSettings

#endif // ____x_ABI_CWindows_CDevices_CI2c_CProvider_CIProviderI2cConnectionSettings_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions

#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000

#ifndef DEF___FIIterator_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider_USE
#define DEF___FIIterator_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("f6232961-c660-50a1-82e8-12892fcd91f7"))
IIterator<ABI::Windows::Devices::I2c::Provider::II2cControllerProvider*> : IIterator_impl<ABI::Windows::Devices::I2c::Provider::II2cControllerProvider*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Devices.I2c.Provider.II2cControllerProvider>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Devices::I2c::Provider::II2cControllerProvider*> __FIIterator_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider_t;
#define __FIIterator_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Devices::I2c::Provider::II2cControllerProvider*>
//#define __FIIterator_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Devices::I2c::Provider::II2cControllerProvider*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider_USE */


#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000


#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000

#ifndef DEF___FIIterable_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider_USE
#define DEF___FIIterable_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("11341a6c-3a02-5f73-9db8-c3ec5823e35d"))
IIterable<ABI::Windows::Devices::I2c::Provider::II2cControllerProvider*> : IIterable_impl<ABI::Windows::Devices::I2c::Provider::II2cControllerProvider*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Devices.I2c.Provider.II2cControllerProvider>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Devices::I2c::Provider::II2cControllerProvider*> __FIIterable_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider_t;
#define __FIIterable_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Devices::I2c::Provider::II2cControllerProvider*>
//#define __FIIterable_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Devices::I2c::Provider::II2cControllerProvider*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider_USE */


#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000


#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000

#ifndef DEF___FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider_USE
#define DEF___FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("511f8a39-98ca-550d-af25-1df2c1193c01"))
IVectorView<ABI::Windows::Devices::I2c::Provider::II2cControllerProvider*> : IVectorView_impl<ABI::Windows::Devices::I2c::Provider::II2cControllerProvider*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Devices.I2c.Provider.II2cControllerProvider>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Devices::I2c::Provider::II2cControllerProvider*> __FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider_t;
#define __FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Devices::I2c::Provider::II2cControllerProvider*>
//#define __FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Devices::I2c::Provider::II2cControllerProvider*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider_USE */


#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000


#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000

#ifndef DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider_USE
#define DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("771e22ed-da9e-50be-b730-a3bada6bfb25"))
IAsyncOperationCompletedHandler<__FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider*> : IAsyncOperationCompletedHandler_impl<__FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Foundation.Collections.IVectorView`1<Windows.Devices.I2c.Provider.II2cControllerProvider>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<__FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider*> __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider_t;
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Devices::I2c::Provider::II2cControllerProvider*>*>
//#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Devices::I2c::Provider::II2cControllerProvider*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider_USE */


#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000


#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000

#ifndef DEF___FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider_USE
#define DEF___FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("5fe77838-1125-5b2c-a281-e06a3dfbb76e"))
IAsyncOperation<__FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider*> : IAsyncOperation_impl<__FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Foundation.Collections.IVectorView`1<Windows.Devices.I2c.Provider.II2cControllerProvider>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<__FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider*> __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider_t;
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider ABI::Windows::Foundation::__FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Devices::I2c::Provider::II2cControllerProvider*>*>
//#define __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Devices::I2c::Provider::II2cControllerProvider*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider_USE */


#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000






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
        namespace Devices {
            namespace I2c {
                namespace Provider {
                    
                    typedef enum ProviderI2cBusSpeed : int ProviderI2cBusSpeed;
                    
                } /* Windows */
            } /* Devices */
        } /* I2c */
    } /* Provider */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace I2c {
                namespace Provider {
                    
                    typedef enum ProviderI2cSharingMode : int ProviderI2cSharingMode;
                    
                } /* Windows */
            } /* Devices */
        } /* I2c */
    } /* Provider */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace I2c {
                namespace Provider {
                    
                    typedef enum ProviderI2cTransferStatus : int ProviderI2cTransferStatus;
                    
                } /* Windows */
            } /* Devices */
        } /* I2c */
    } /* Provider */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace I2c {
                namespace Provider {
                    
                    typedef struct ProviderI2cTransferResult ProviderI2cTransferResult;
                    
                } /* Windows */
            } /* Devices */
        } /* I2c */
    } /* Provider */} /* ABI */





namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace I2c {
                namespace Provider {
                    class ProviderI2cConnectionSettings;
                } /* Windows */
            } /* Devices */
        } /* I2c */
    } /* Provider */} /* ABI */












/*
 *
 * Struct Windows.Devices.I2c.Provider.ProviderI2cBusSpeed
 *
 * Introduced to Windows.Devices.DevicesLowLevelContract in version 2.0
 *
 *
 */

#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace I2c {
                namespace Provider {
                    /* [v1_enum, contract] */
                    enum ProviderI2cBusSpeed : int
                    {
                        ProviderI2cBusSpeed_StandardMode = 0,
                        ProviderI2cBusSpeed_FastMode = 1,
                    };
                    
                } /* Windows */
            } /* Devices */
        } /* I2c */
    } /* Provider */} /* ABI */
#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000


/*
 *
 * Struct Windows.Devices.I2c.Provider.ProviderI2cSharingMode
 *
 * Introduced to Windows.Devices.DevicesLowLevelContract in version 2.0
 *
 *
 */

#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace I2c {
                namespace Provider {
                    /* [v1_enum, contract] */
                    enum ProviderI2cSharingMode : int
                    {
                        ProviderI2cSharingMode_Exclusive = 0,
                        ProviderI2cSharingMode_Shared = 1,
                    };
                    
                } /* Windows */
            } /* Devices */
        } /* I2c */
    } /* Provider */} /* ABI */
#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000


/*
 *
 * Struct Windows.Devices.I2c.Provider.ProviderI2cTransferStatus
 *
 * Introduced to Windows.Devices.DevicesLowLevelContract in version 2.0
 *
 *
 */

#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace I2c {
                namespace Provider {
                    /* [v1_enum, contract] */
                    enum ProviderI2cTransferStatus : int
                    {
                        ProviderI2cTransferStatus_FullTransfer = 0,
                        ProviderI2cTransferStatus_PartialTransfer = 1,
                        ProviderI2cTransferStatus_SlaveAddressNotAcknowledged = 2,
                    };
                    
                } /* Windows */
            } /* Devices */
        } /* I2c */
    } /* Provider */} /* ABI */
#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000


/*
 *
 * Struct Windows.Devices.I2c.Provider.ProviderI2cTransferResult
 *
 * Introduced to Windows.Devices.DevicesLowLevelContract in version 2.0
 *
 *
 */
#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace I2c {
                namespace Provider {
                    /* [contract] */
                    struct ProviderI2cTransferResult
                    {
                        ABI::Windows::Devices::I2c::Provider::ProviderI2cTransferStatus Status;
                        UINT32 BytesTransferred;
                    };
                    
                } /* Windows */
            } /* Devices */
        } /* I2c */
    } /* Provider */} /* ABI */
#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Devices.I2c.Provider.II2cControllerProvider
 *
 * Introduced to Windows.Devices.DevicesLowLevelContract in version 2.0
 *
 *
 */
#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cControllerProvider_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cControllerProvider_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_I2c_Provider_II2cControllerProvider[] = L"Windows.Devices.I2c.Provider.II2cControllerProvider";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace I2c {
                namespace Provider {
                    /* [object, uuid("61C2BB82-4510-4163-A87C-4E15A9558980"), contract] */
                    MIDL_INTERFACE("61C2BB82-4510-4163-A87C-4E15A9558980")
                    II2cControllerProvider : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE GetDeviceProvider(
                            /* [in] */__RPC__in_opt ABI::Windows::Devices::I2c::Provider::IProviderI2cConnectionSettings * settings,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::I2c::Provider::II2cDeviceProvider * * device
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_II2cControllerProvider=_uuidof(II2cControllerProvider);
                    
                } /* Windows */
            } /* Devices */
        } /* I2c */
    } /* Provider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cControllerProvider;
#endif /* !defined(____x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cControllerProvider_INTERFACE_DEFINED__) */
#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Devices.I2c.Provider.II2cDeviceProvider
 *
 * Introduced to Windows.Devices.DevicesLowLevelContract in version 2.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *
 *
 */
#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cDeviceProvider_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cDeviceProvider_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_I2c_Provider_II2cDeviceProvider[] = L"Windows.Devices.I2c.Provider.II2cDeviceProvider";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace I2c {
                namespace Provider {
                    /* [object, uuid("AD342654-57E8-453E-8329-D1E447D103A9"), contract] */
                    MIDL_INTERFACE("AD342654-57E8-453E-8329-D1E447D103A9")
                    II2cDeviceProvider : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DeviceId(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE Write(
                            /* [in] */UINT32 __bufferSize,
                            /* [size_is(__bufferSize), in] */__RPC__in_ecount_full(__bufferSize) BYTE * buffer
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE WritePartial(
                            /* [in] */UINT32 __bufferSize,
                            /* [size_is(__bufferSize), in] */__RPC__in_ecount_full(__bufferSize) BYTE * buffer,
                            /* [retval, out] */__RPC__out ABI::Windows::Devices::I2c::Provider::ProviderI2cTransferResult * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE Read(
                            /* [in, range(0, 2147483647)] */__RPC__in_range(0,0x7fffffff) UINT32 __bufferSize,
                            /* [size_is(__bufferSize), out] */__RPC__out_ecount_full(__bufferSize) BYTE * buffer
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE ReadPartial(
                            /* [in, range(0, 2147483647)] */__RPC__in_range(0,0x7fffffff) UINT32 __bufferSize,
                            /* [size_is(__bufferSize), out] */__RPC__out_ecount_full(__bufferSize) BYTE * buffer,
                            /* [retval, out] */__RPC__out ABI::Windows::Devices::I2c::Provider::ProviderI2cTransferResult * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE WriteRead(
                            /* [in] */UINT32 __writeBufferSize,
                            /* [size_is(__writeBufferSize), in] */__RPC__in_ecount_full(__writeBufferSize) BYTE * writeBuffer,
                            /* [in, range(0, 2147483647)] */__RPC__in_range(0,0x7fffffff) UINT32 __readBufferSize,
                            /* [size_is(__readBufferSize), out] */__RPC__out_ecount_full(__readBufferSize) BYTE * readBuffer
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE WriteReadPartial(
                            /* [in] */UINT32 __writeBufferSize,
                            /* [size_is(__writeBufferSize), in] */__RPC__in_ecount_full(__writeBufferSize) BYTE * writeBuffer,
                            /* [in, range(0, 2147483647)] */__RPC__in_range(0,0x7fffffff) UINT32 __readBufferSize,
                            /* [size_is(__readBufferSize), out] */__RPC__out_ecount_full(__readBufferSize) BYTE * readBuffer,
                            /* [retval, out] */__RPC__out ABI::Windows::Devices::I2c::Provider::ProviderI2cTransferResult * result
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_II2cDeviceProvider=_uuidof(II2cDeviceProvider);
                    
                } /* Windows */
            } /* Devices */
        } /* I2c */
    } /* Provider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cDeviceProvider;
#endif /* !defined(____x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cDeviceProvider_INTERFACE_DEFINED__) */
#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Devices.I2c.Provider.II2cProvider
 *
 * Introduced to Windows.Devices.DevicesLowLevelContract in version 2.0
 *
 *
 */
#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cProvider_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cProvider_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_I2c_Provider_II2cProvider[] = L"Windows.Devices.I2c.Provider.II2cProvider";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace I2c {
                namespace Provider {
                    /* [object, uuid("6F13083E-BF62-4FE2-A95A-F08999669818"), contract] */
                    MIDL_INTERFACE("6F13083E-BF62-4FE2-A95A-F08999669818")
                    II2cProvider : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE GetControllersAsync(
                            /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider * * operation
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_II2cProvider=_uuidof(II2cProvider);
                    
                } /* Windows */
            } /* Devices */
        } /* I2c */
    } /* Provider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cProvider;
#endif /* !defined(____x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cProvider_INTERFACE_DEFINED__) */
#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Devices.I2c.Provider.IProviderI2cConnectionSettings
 *
 * Introduced to Windows.Devices.DevicesLowLevelContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.I2c.Provider.ProviderI2cConnectionSettings
 *
 *
 */
#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CDevices_CI2c_CProvider_CIProviderI2cConnectionSettings_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CI2c_CProvider_CIProviderI2cConnectionSettings_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_I2c_Provider_IProviderI2cConnectionSettings[] = L"Windows.Devices.I2c.Provider.IProviderI2cConnectionSettings";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace I2c {
                namespace Provider {
                    /* [object, uuid("E9DB4E34-E510-44B7-809D-F2F85B555339"), exclusiveto, contract] */
                    MIDL_INTERFACE("E9DB4E34-E510-44B7-809D-F2F85B555339")
                    IProviderI2cConnectionSettings : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SlaveAddress(
                            /* [retval, out] */__RPC__out INT32 * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_SlaveAddress(
                            /* [in] */INT32 value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_BusSpeed(
                            /* [retval, out] */__RPC__out ABI::Windows::Devices::I2c::Provider::ProviderI2cBusSpeed * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_BusSpeed(
                            /* [in] */ABI::Windows::Devices::I2c::Provider::ProviderI2cBusSpeed value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SharingMode(
                            /* [retval, out] */__RPC__out ABI::Windows::Devices::I2c::Provider::ProviderI2cSharingMode * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_SharingMode(
                            /* [in] */ABI::Windows::Devices::I2c::Provider::ProviderI2cSharingMode value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IProviderI2cConnectionSettings=_uuidof(IProviderI2cConnectionSettings);
                    
                } /* Windows */
            } /* Devices */
        } /* I2c */
    } /* Provider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CI2c_CProvider_CIProviderI2cConnectionSettings;
#endif /* !defined(____x_ABI_CWindows_CDevices_CI2c_CProvider_CIProviderI2cConnectionSettings_INTERFACE_DEFINED__) */
#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000


/*
 *
 * Class Windows.Devices.I2c.Provider.ProviderI2cConnectionSettings
 *
 * Introduced to Windows.Devices.DevicesLowLevelContract in version 2.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.I2c.Provider.IProviderI2cConnectionSettings ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000

#ifndef RUNTIMECLASS_Windows_Devices_I2c_Provider_ProviderI2cConnectionSettings_DEFINED
#define RUNTIMECLASS_Windows_Devices_I2c_Provider_ProviderI2cConnectionSettings_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_I2c_Provider_ProviderI2cConnectionSettings[] = L"Windows.Devices.I2c.Provider.ProviderI2cConnectionSettings";
#endif
#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000





#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cControllerProvider_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cControllerProvider_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cControllerProvider __x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cControllerProvider;

#endif // ____x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cControllerProvider_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cDeviceProvider_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cDeviceProvider_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cDeviceProvider __x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cDeviceProvider;

#endif // ____x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cDeviceProvider_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cProvider_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cProvider_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cProvider __x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cProvider;

#endif // ____x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cProvider_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CI2c_CProvider_CIProviderI2cConnectionSettings_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CI2c_CProvider_CIProviderI2cConnectionSettings_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CI2c_CProvider_CIProviderI2cConnectionSettings __x_ABI_CWindows_CDevices_CI2c_CProvider_CIProviderI2cConnectionSettings;

#endif // ____x_ABI_CWindows_CDevices_CI2c_CProvider_CIProviderI2cConnectionSettings_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000
#if !defined(____FIIterator_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider __FIIterator_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider;

typedef struct __FIIterator_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProviderVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cControllerProvider * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cControllerProvider * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProviderVtbl;

interface __FIIterator_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider
{
    CONST_VTBL struct __FIIterator_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProviderVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider_INTERFACE_DEFINED__

#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000


#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000
#if !defined(____FIIterable_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider __FIIterable_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider;

typedef  struct __FIIterable_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProviderVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider **first);

    END_INTERFACE
} __FIIterable_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProviderVtbl;

interface __FIIterable_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider
{
    CONST_VTBL struct __FIIterable_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProviderVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider_INTERFACE_DEFINED__

#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000


#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000
#if !defined(____FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider __FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider;

typedef struct __FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProviderVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cControllerProvider * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider * This,
            /* [in] */ __x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cControllerProvider * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cControllerProvider * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProviderVtbl;

interface __FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider
{
    CONST_VTBL struct __FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProviderVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider_INTERFACE_DEFINED__

#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000


#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000
#if !defined(____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider;

typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProviderVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProviderVtbl;

interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProviderVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider_INTERFACE_DEFINED__

#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000


#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000
#if !defined(____FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider;

typedef struct __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider * This, /* [retval][out] */ __RPC__out __FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProviderVtbl;

interface __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProviderVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider_INTERFACE_DEFINED__

#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000





#ifndef ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIClosable __x_ABI_CWindows_CFoundation_CIClosable;

#endif // ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__





typedef enum __x_ABI_CWindows_CDevices_CI2c_CProvider_CProviderI2cBusSpeed __x_ABI_CWindows_CDevices_CI2c_CProvider_CProviderI2cBusSpeed;


typedef enum __x_ABI_CWindows_CDevices_CI2c_CProvider_CProviderI2cSharingMode __x_ABI_CWindows_CDevices_CI2c_CProvider_CProviderI2cSharingMode;


typedef enum __x_ABI_CWindows_CDevices_CI2c_CProvider_CProviderI2cTransferStatus __x_ABI_CWindows_CDevices_CI2c_CProvider_CProviderI2cTransferStatus;


typedef struct __x_ABI_CWindows_CDevices_CI2c_CProvider_CProviderI2cTransferResult __x_ABI_CWindows_CDevices_CI2c_CProvider_CProviderI2cTransferResult;
















/*
 *
 * Struct Windows.Devices.I2c.Provider.ProviderI2cBusSpeed
 *
 * Introduced to Windows.Devices.DevicesLowLevelContract in version 2.0
 *
 *
 */

#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CDevices_CI2c_CProvider_CProviderI2cBusSpeed
{
    ProviderI2cBusSpeed_StandardMode = 0,
    ProviderI2cBusSpeed_FastMode = 1,
};
#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000


/*
 *
 * Struct Windows.Devices.I2c.Provider.ProviderI2cSharingMode
 *
 * Introduced to Windows.Devices.DevicesLowLevelContract in version 2.0
 *
 *
 */

#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CDevices_CI2c_CProvider_CProviderI2cSharingMode
{
    ProviderI2cSharingMode_Exclusive = 0,
    ProviderI2cSharingMode_Shared = 1,
};
#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000


/*
 *
 * Struct Windows.Devices.I2c.Provider.ProviderI2cTransferStatus
 *
 * Introduced to Windows.Devices.DevicesLowLevelContract in version 2.0
 *
 *
 */

#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CDevices_CI2c_CProvider_CProviderI2cTransferStatus
{
    ProviderI2cTransferStatus_FullTransfer = 0,
    ProviderI2cTransferStatus_PartialTransfer = 1,
    ProviderI2cTransferStatus_SlaveAddressNotAcknowledged = 2,
};
#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000


/*
 *
 * Struct Windows.Devices.I2c.Provider.ProviderI2cTransferResult
 *
 * Introduced to Windows.Devices.DevicesLowLevelContract in version 2.0
 *
 *
 */
#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000

/* [contract] */
struct __x_ABI_CWindows_CDevices_CI2c_CProvider_CProviderI2cTransferResult
{
    __x_ABI_CWindows_CDevices_CI2c_CProvider_CProviderI2cTransferStatus Status;
    UINT32 BytesTransferred;
};
#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Devices.I2c.Provider.II2cControllerProvider
 *
 * Introduced to Windows.Devices.DevicesLowLevelContract in version 2.0
 *
 *
 */
#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cControllerProvider_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cControllerProvider_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_I2c_Provider_II2cControllerProvider[] = L"Windows.Devices.I2c.Provider.II2cControllerProvider";
/* [object, uuid("61C2BB82-4510-4163-A87C-4E15A9558980"), contract] */
typedef struct __x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cControllerProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cControllerProvider * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cControllerProvider * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cControllerProvider * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cControllerProvider * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cControllerProvider * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cControllerProvider * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetDeviceProvider )(
        __x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cControllerProvider * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CDevices_CI2c_CProvider_CIProviderI2cConnectionSettings * settings,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cDeviceProvider * * device
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cControllerProviderVtbl;

interface __x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cControllerProvider
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cControllerProviderVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cControllerProvider_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cControllerProvider_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cControllerProvider_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cControllerProvider_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cControllerProvider_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cControllerProvider_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cControllerProvider_GetDeviceProvider(This,settings,device) \
    ( (This)->lpVtbl->GetDeviceProvider(This,settings,device) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cControllerProvider;
#endif /* !defined(____x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cControllerProvider_INTERFACE_DEFINED__) */
#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Devices.I2c.Provider.II2cDeviceProvider
 *
 * Introduced to Windows.Devices.DevicesLowLevelContract in version 2.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *
 *
 */
#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cDeviceProvider_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cDeviceProvider_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_I2c_Provider_II2cDeviceProvider[] = L"Windows.Devices.I2c.Provider.II2cDeviceProvider";
/* [object, uuid("AD342654-57E8-453E-8329-D1E447D103A9"), contract] */
typedef struct __x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cDeviceProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cDeviceProvider * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cDeviceProvider * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cDeviceProvider * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cDeviceProvider * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cDeviceProvider * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cDeviceProvider * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DeviceId )(
        __x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cDeviceProvider * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *Write )(
        __x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cDeviceProvider * This,
        /* [in] */UINT32 __bufferSize,
        /* [size_is(__bufferSize), in] */__RPC__in_ecount_full(__bufferSize) BYTE * buffer
        );
    HRESULT ( STDMETHODCALLTYPE *WritePartial )(
        __x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cDeviceProvider * This,
        /* [in] */UINT32 __bufferSize,
        /* [size_is(__bufferSize), in] */__RPC__in_ecount_full(__bufferSize) BYTE * buffer,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CDevices_CI2c_CProvider_CProviderI2cTransferResult * result
        );
    HRESULT ( STDMETHODCALLTYPE *Read )(
        __x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cDeviceProvider * This,
        /* [in, range(0, 2147483647)] */__RPC__in_range(0,0x7fffffff) UINT32 __bufferSize,
        /* [size_is(__bufferSize), out] */__RPC__out_ecount_full(__bufferSize) BYTE * buffer
        );
    HRESULT ( STDMETHODCALLTYPE *ReadPartial )(
        __x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cDeviceProvider * This,
        /* [in, range(0, 2147483647)] */__RPC__in_range(0,0x7fffffff) UINT32 __bufferSize,
        /* [size_is(__bufferSize), out] */__RPC__out_ecount_full(__bufferSize) BYTE * buffer,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CDevices_CI2c_CProvider_CProviderI2cTransferResult * result
        );
    HRESULT ( STDMETHODCALLTYPE *WriteRead )(
        __x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cDeviceProvider * This,
        /* [in] */UINT32 __writeBufferSize,
        /* [size_is(__writeBufferSize), in] */__RPC__in_ecount_full(__writeBufferSize) BYTE * writeBuffer,
        /* [in, range(0, 2147483647)] */__RPC__in_range(0,0x7fffffff) UINT32 __readBufferSize,
        /* [size_is(__readBufferSize), out] */__RPC__out_ecount_full(__readBufferSize) BYTE * readBuffer
        );
    HRESULT ( STDMETHODCALLTYPE *WriteReadPartial )(
        __x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cDeviceProvider * This,
        /* [in] */UINT32 __writeBufferSize,
        /* [size_is(__writeBufferSize), in] */__RPC__in_ecount_full(__writeBufferSize) BYTE * writeBuffer,
        /* [in, range(0, 2147483647)] */__RPC__in_range(0,0x7fffffff) UINT32 __readBufferSize,
        /* [size_is(__readBufferSize), out] */__RPC__out_ecount_full(__readBufferSize) BYTE * readBuffer,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CDevices_CI2c_CProvider_CProviderI2cTransferResult * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cDeviceProviderVtbl;

interface __x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cDeviceProvider
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cDeviceProviderVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cDeviceProvider_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cDeviceProvider_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cDeviceProvider_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cDeviceProvider_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cDeviceProvider_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cDeviceProvider_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cDeviceProvider_get_DeviceId(This,value) \
    ( (This)->lpVtbl->get_DeviceId(This,value) )

#define __x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cDeviceProvider_Write(This,__bufferSize,buffer) \
    ( (This)->lpVtbl->Write(This,__bufferSize,buffer) )

#define __x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cDeviceProvider_WritePartial(This,__bufferSize,buffer,result) \
    ( (This)->lpVtbl->WritePartial(This,__bufferSize,buffer,result) )

#define __x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cDeviceProvider_Read(This,__bufferSize,buffer) \
    ( (This)->lpVtbl->Read(This,__bufferSize,buffer) )

#define __x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cDeviceProvider_ReadPartial(This,__bufferSize,buffer,result) \
    ( (This)->lpVtbl->ReadPartial(This,__bufferSize,buffer,result) )

#define __x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cDeviceProvider_WriteRead(This,__writeBufferSize,writeBuffer,__readBufferSize,readBuffer) \
    ( (This)->lpVtbl->WriteRead(This,__writeBufferSize,writeBuffer,__readBufferSize,readBuffer) )

#define __x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cDeviceProvider_WriteReadPartial(This,__writeBufferSize,writeBuffer,__readBufferSize,readBuffer,result) \
    ( (This)->lpVtbl->WriteReadPartial(This,__writeBufferSize,writeBuffer,__readBufferSize,readBuffer,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cDeviceProvider;
#endif /* !defined(____x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cDeviceProvider_INTERFACE_DEFINED__) */
#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Devices.I2c.Provider.II2cProvider
 *
 * Introduced to Windows.Devices.DevicesLowLevelContract in version 2.0
 *
 *
 */
#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cProvider_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cProvider_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_I2c_Provider_II2cProvider[] = L"Windows.Devices.I2c.Provider.II2cProvider";
/* [object, uuid("6F13083E-BF62-4FE2-A95A-F08999669818"), contract] */
typedef struct __x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cProvider * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cProvider * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cProvider * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cProvider * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cProvider * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cProvider * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetControllersAsync )(
        __x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cProvider * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CI2c__CProvider__CII2cControllerProvider * * operation
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cProviderVtbl;

interface __x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cProvider
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cProviderVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cProvider_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cProvider_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cProvider_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cProvider_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cProvider_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cProvider_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cProvider_GetControllersAsync(This,operation) \
    ( (This)->lpVtbl->GetControllersAsync(This,operation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cProvider;
#endif /* !defined(____x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cProvider_INTERFACE_DEFINED__) */
#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Devices.I2c.Provider.IProviderI2cConnectionSettings
 *
 * Introduced to Windows.Devices.DevicesLowLevelContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.I2c.Provider.ProviderI2cConnectionSettings
 *
 *
 */
#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CDevices_CI2c_CProvider_CIProviderI2cConnectionSettings_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CI2c_CProvider_CIProviderI2cConnectionSettings_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_I2c_Provider_IProviderI2cConnectionSettings[] = L"Windows.Devices.I2c.Provider.IProviderI2cConnectionSettings";
/* [object, uuid("E9DB4E34-E510-44B7-809D-F2F85B555339"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CI2c_CProvider_CIProviderI2cConnectionSettingsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CI2c_CProvider_CIProviderI2cConnectionSettings * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CI2c_CProvider_CIProviderI2cConnectionSettings * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CI2c_CProvider_CIProviderI2cConnectionSettings * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CI2c_CProvider_CIProviderI2cConnectionSettings * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CI2c_CProvider_CIProviderI2cConnectionSettings * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CI2c_CProvider_CIProviderI2cConnectionSettings * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SlaveAddress )(
        __x_ABI_CWindows_CDevices_CI2c_CProvider_CIProviderI2cConnectionSettings * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_SlaveAddress )(
        __x_ABI_CWindows_CDevices_CI2c_CProvider_CIProviderI2cConnectionSettings * This,
        /* [in] */INT32 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_BusSpeed )(
        __x_ABI_CWindows_CDevices_CI2c_CProvider_CIProviderI2cConnectionSettings * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CDevices_CI2c_CProvider_CProviderI2cBusSpeed * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_BusSpeed )(
        __x_ABI_CWindows_CDevices_CI2c_CProvider_CIProviderI2cConnectionSettings * This,
        /* [in] */__x_ABI_CWindows_CDevices_CI2c_CProvider_CProviderI2cBusSpeed value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SharingMode )(
        __x_ABI_CWindows_CDevices_CI2c_CProvider_CIProviderI2cConnectionSettings * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CDevices_CI2c_CProvider_CProviderI2cSharingMode * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_SharingMode )(
        __x_ABI_CWindows_CDevices_CI2c_CProvider_CIProviderI2cConnectionSettings * This,
        /* [in] */__x_ABI_CWindows_CDevices_CI2c_CProvider_CProviderI2cSharingMode value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CI2c_CProvider_CIProviderI2cConnectionSettingsVtbl;

interface __x_ABI_CWindows_CDevices_CI2c_CProvider_CIProviderI2cConnectionSettings
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CI2c_CProvider_CIProviderI2cConnectionSettingsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CI2c_CProvider_CIProviderI2cConnectionSettings_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CI2c_CProvider_CIProviderI2cConnectionSettings_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CI2c_CProvider_CIProviderI2cConnectionSettings_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CI2c_CProvider_CIProviderI2cConnectionSettings_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CI2c_CProvider_CIProviderI2cConnectionSettings_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CI2c_CProvider_CIProviderI2cConnectionSettings_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CI2c_CProvider_CIProviderI2cConnectionSettings_get_SlaveAddress(This,value) \
    ( (This)->lpVtbl->get_SlaveAddress(This,value) )

#define __x_ABI_CWindows_CDevices_CI2c_CProvider_CIProviderI2cConnectionSettings_put_SlaveAddress(This,value) \
    ( (This)->lpVtbl->put_SlaveAddress(This,value) )

#define __x_ABI_CWindows_CDevices_CI2c_CProvider_CIProviderI2cConnectionSettings_get_BusSpeed(This,value) \
    ( (This)->lpVtbl->get_BusSpeed(This,value) )

#define __x_ABI_CWindows_CDevices_CI2c_CProvider_CIProviderI2cConnectionSettings_put_BusSpeed(This,value) \
    ( (This)->lpVtbl->put_BusSpeed(This,value) )

#define __x_ABI_CWindows_CDevices_CI2c_CProvider_CIProviderI2cConnectionSettings_get_SharingMode(This,value) \
    ( (This)->lpVtbl->get_SharingMode(This,value) )

#define __x_ABI_CWindows_CDevices_CI2c_CProvider_CIProviderI2cConnectionSettings_put_SharingMode(This,value) \
    ( (This)->lpVtbl->put_SharingMode(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CI2c_CProvider_CIProviderI2cConnectionSettings;
#endif /* !defined(____x_ABI_CWindows_CDevices_CI2c_CProvider_CIProviderI2cConnectionSettings_INTERFACE_DEFINED__) */
#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000


/*
 *
 * Class Windows.Devices.I2c.Provider.ProviderI2cConnectionSettings
 *
 * Introduced to Windows.Devices.DevicesLowLevelContract in version 2.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.I2c.Provider.IProviderI2cConnectionSettings ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000

#ifndef RUNTIMECLASS_Windows_Devices_I2c_Provider_ProviderI2cConnectionSettings_DEFINED
#define RUNTIMECLASS_Windows_Devices_I2c_Provider_ProviderI2cConnectionSettings_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_I2c_Provider_ProviderI2cConnectionSettings[] = L"Windows.Devices.I2c.Provider.ProviderI2cConnectionSettings";
#endif
#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000





#endif // defined(__cplusplus)
#pragma pop_macro("MIDL_CONST_ID")
// Restore the original value of the 'DEPRECATED' macro
#pragma pop_macro("DEPRECATED")

#ifdef __clang__
#pragma clang diagnostic pop // deprecated-declarations
#else
#pragma warning(pop)
#endif
#endif // __windows2Edevices2Ei2c2Eprovider_p_h__

#endif // __windows2Edevices2Ei2c2Eprovider_h__
