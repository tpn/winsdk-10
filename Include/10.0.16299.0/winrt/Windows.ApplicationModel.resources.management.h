/* Header file automatically generated from windows.applicationmodel.resources.management.idl */
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
#ifndef __windows2Eapplicationmodel2Eresources2Emanagement_h__
#define __windows2Eapplicationmodel2Eresources2Emanagement_h__
#ifndef __windows2Eapplicationmodel2Eresources2Emanagement_p_h__
#define __windows2Eapplicationmodel2Eresources2Emanagement_p_h__


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

#if !defined(WINDOWS_APPLICATIONMODEL_RESOURCES_MANAGEMENT_RESOURCEINDEXERCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_RESOURCES_MANAGEMENT_RESOURCEINDEXERCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_APPLICATIONMODEL_RESOURCES_MANAGEMENT_RESOURCEINDEXERCONTRACT_VERSION)

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
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIIndexedResourceCandidate_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIIndexedResourceCandidate_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Resources {
                namespace Management {
                    interface IIndexedResourceCandidate;
                } /* Windows */
            } /* ApplicationModel */
        } /* Resources */
    } /* Management */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIIndexedResourceCandidate ABI::Windows::ApplicationModel::Resources::Management::IIndexedResourceCandidate

#endif // ____x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIIndexedResourceCandidate_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIIndexedResourceQualifier_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIIndexedResourceQualifier_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Resources {
                namespace Management {
                    interface IIndexedResourceQualifier;
                } /* Windows */
            } /* ApplicationModel */
        } /* Resources */
    } /* Management */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIIndexedResourceQualifier ABI::Windows::ApplicationModel::Resources::Management::IIndexedResourceQualifier

#endif // ____x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIIndexedResourceQualifier_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIResourceIndexer_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIResourceIndexer_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Resources {
                namespace Management {
                    interface IResourceIndexer;
                } /* Windows */
            } /* ApplicationModel */
        } /* Resources */
    } /* Management */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIResourceIndexer ABI::Windows::ApplicationModel::Resources::Management::IResourceIndexer

#endif // ____x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIResourceIndexer_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIResourceIndexerFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIResourceIndexerFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Resources {
                namespace Management {
                    interface IResourceIndexerFactory;
                } /* Windows */
            } /* ApplicationModel */
        } /* Resources */
    } /* Management */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIResourceIndexerFactory ABI::Windows::ApplicationModel::Resources::Management::IResourceIndexerFactory

#endif // ____x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIResourceIndexerFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIResourceIndexerFactory2_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIResourceIndexerFactory2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Resources {
                namespace Management {
                    interface IResourceIndexerFactory2;
                } /* Windows */
            } /* ApplicationModel */
        } /* Resources */
    } /* Management */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIResourceIndexerFactory2 ABI::Windows::ApplicationModel::Resources::Management::IResourceIndexerFactory2

#endif // ____x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIResourceIndexerFactory2_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Resources {
                namespace Management {
                    class IndexedResourceCandidate;
                } /* Windows */
            } /* ApplicationModel */
        } /* Resources */
    } /* Management */} /* ABI */


#if WINDOWS_APPLICATIONMODEL_RESOURCES_MANAGEMENT_RESOURCEINDEXERCONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate_USE
#define DEF___FIIterator_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("6b6f3ab9-1593-5852-b6bb-17a217e12f9f"))
IIterator<ABI::Windows::ApplicationModel::Resources::Management::IndexedResourceCandidate*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Resources::Management::IndexedResourceCandidate*, ABI::Windows::ApplicationModel::Resources::Management::IIndexedResourceCandidate*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.ApplicationModel.Resources.Management.IndexedResourceCandidate>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::ApplicationModel::Resources::Management::IndexedResourceCandidate*> __FIIterator_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate_t;
#define __FIIterator_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::ApplicationModel::Resources::Management::IIndexedResourceCandidate*>
//#define __FIIterator_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::ApplicationModel::Resources::Management::IIndexedResourceCandidate*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate_USE */


#endif // WINDOWS_APPLICATIONMODEL_RESOURCES_MANAGEMENT_RESOURCEINDEXERCONTRACT_VERSION >= 0x10000


#if WINDOWS_APPLICATIONMODEL_RESOURCES_MANAGEMENT_RESOURCEINDEXERCONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate_USE
#define DEF___FIIterable_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("0fcb4184-1489-5774-9910-bab326bb50f6"))
IIterable<ABI::Windows::ApplicationModel::Resources::Management::IndexedResourceCandidate*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Resources::Management::IndexedResourceCandidate*, ABI::Windows::ApplicationModel::Resources::Management::IIndexedResourceCandidate*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.ApplicationModel.Resources.Management.IndexedResourceCandidate>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::ApplicationModel::Resources::Management::IndexedResourceCandidate*> __FIIterable_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate_t;
#define __FIIterable_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::ApplicationModel::Resources::Management::IIndexedResourceCandidate*>
//#define __FIIterable_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::ApplicationModel::Resources::Management::IIndexedResourceCandidate*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate_USE */


#endif // WINDOWS_APPLICATIONMODEL_RESOURCES_MANAGEMENT_RESOURCEINDEXERCONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Resources {
                namespace Management {
                    class IndexedResourceQualifier;
                } /* Windows */
            } /* ApplicationModel */
        } /* Resources */
    } /* Management */} /* ABI */


#if WINDOWS_APPLICATIONMODEL_RESOURCES_MANAGEMENT_RESOURCEINDEXERCONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceQualifier_USE
#define DEF___FIIterator_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceQualifier_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("1a22ebee-7992-5198-972b-054580945741"))
IIterator<ABI::Windows::ApplicationModel::Resources::Management::IndexedResourceQualifier*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Resources::Management::IndexedResourceQualifier*, ABI::Windows::ApplicationModel::Resources::Management::IIndexedResourceQualifier*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.ApplicationModel.Resources.Management.IndexedResourceQualifier>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::ApplicationModel::Resources::Management::IndexedResourceQualifier*> __FIIterator_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceQualifier_t;
#define __FIIterator_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceQualifier ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceQualifier_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceQualifier ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::ApplicationModel::Resources::Management::IIndexedResourceQualifier*>
//#define __FIIterator_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceQualifier_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::ApplicationModel::Resources::Management::IIndexedResourceQualifier*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceQualifier_USE */


#endif // WINDOWS_APPLICATIONMODEL_RESOURCES_MANAGEMENT_RESOURCEINDEXERCONTRACT_VERSION >= 0x10000


#if WINDOWS_APPLICATIONMODEL_RESOURCES_MANAGEMENT_RESOURCEINDEXERCONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceQualifier_USE
#define DEF___FIIterable_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceQualifier_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("e16e0455-7341-55c0-a024-26d9ad43c8cc"))
IIterable<ABI::Windows::ApplicationModel::Resources::Management::IndexedResourceQualifier*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Resources::Management::IndexedResourceQualifier*, ABI::Windows::ApplicationModel::Resources::Management::IIndexedResourceQualifier*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.ApplicationModel.Resources.Management.IndexedResourceQualifier>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::ApplicationModel::Resources::Management::IndexedResourceQualifier*> __FIIterable_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceQualifier_t;
#define __FIIterable_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceQualifier ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceQualifier_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceQualifier ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::ApplicationModel::Resources::Management::IIndexedResourceQualifier*>
//#define __FIIterable_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceQualifier_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::ApplicationModel::Resources::Management::IIndexedResourceQualifier*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceQualifier_USE */


#endif // WINDOWS_APPLICATIONMODEL_RESOURCES_MANAGEMENT_RESOURCEINDEXERCONTRACT_VERSION >= 0x10000


#if WINDOWS_APPLICATIONMODEL_RESOURCES_MANAGEMENT_RESOURCEINDEXERCONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate_USE
#define DEF___FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("1da243f1-bb95-543e-95c6-5fd196b34b6f"))
IVectorView<ABI::Windows::ApplicationModel::Resources::Management::IndexedResourceCandidate*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Resources::Management::IndexedResourceCandidate*, ABI::Windows::ApplicationModel::Resources::Management::IIndexedResourceCandidate*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.ApplicationModel.Resources.Management.IndexedResourceCandidate>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::ApplicationModel::Resources::Management::IndexedResourceCandidate*> __FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate_t;
#define __FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::ApplicationModel::Resources::Management::IIndexedResourceCandidate*>
//#define __FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::ApplicationModel::Resources::Management::IIndexedResourceCandidate*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate_USE */


#endif // WINDOWS_APPLICATIONMODEL_RESOURCES_MANAGEMENT_RESOURCEINDEXERCONTRACT_VERSION >= 0x10000


#if WINDOWS_APPLICATIONMODEL_RESOURCES_MANAGEMENT_RESOURCEINDEXERCONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceQualifier_USE
#define DEF___FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceQualifier_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("239ded48-ce04-51f2-b2c9-a5e5ab671b8d"))
IVectorView<ABI::Windows::ApplicationModel::Resources::Management::IndexedResourceQualifier*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Resources::Management::IndexedResourceQualifier*, ABI::Windows::ApplicationModel::Resources::Management::IIndexedResourceQualifier*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.ApplicationModel.Resources.Management.IndexedResourceQualifier>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::ApplicationModel::Resources::Management::IndexedResourceQualifier*> __FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceQualifier_t;
#define __FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceQualifier ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceQualifier_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceQualifier ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::ApplicationModel::Resources::Management::IIndexedResourceQualifier*>
//#define __FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceQualifier_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::ApplicationModel::Resources::Management::IIndexedResourceQualifier*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceQualifier_USE */


#endif // WINDOWS_APPLICATIONMODEL_RESOURCES_MANAGEMENT_RESOURCEINDEXERCONTRACT_VERSION >= 0x10000


#if WINDOWS_APPLICATIONMODEL_RESOURCES_MANAGEMENT_RESOURCEINDEXERCONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate_USE
#define DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("4f2b3869-d059-5739-906c-9eb2729c2fde"))
IAsyncOperationCompletedHandler<__FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate*> : IAsyncOperationCompletedHandler_impl<__FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Foundation.Collections.IVectorView`1<Windows.ApplicationModel.Resources.Management.IndexedResourceCandidate>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<__FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate*> __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate_t;
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::ApplicationModel::Resources::Management::IIndexedResourceCandidate*>*>
//#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::ApplicationModel::Resources::Management::IIndexedResourceCandidate*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate_USE */


#endif // WINDOWS_APPLICATIONMODEL_RESOURCES_MANAGEMENT_RESOURCEINDEXERCONTRACT_VERSION >= 0x10000


#if WINDOWS_APPLICATIONMODEL_RESOURCES_MANAGEMENT_RESOURCEINDEXERCONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate_USE
#define DEF___FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("d2d41b8a-6616-5de8-aaf9-32ae51f67fcb"))
IAsyncOperation<__FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate*> : IAsyncOperation_impl<__FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Foundation.Collections.IVectorView`1<Windows.ApplicationModel.Resources.Management.IndexedResourceCandidate>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<__FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate*> __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate_t;
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate ABI::Windows::Foundation::__FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::ApplicationModel::Resources::Management::IIndexedResourceCandidate*>*>
//#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::ApplicationModel::Resources::Management::IIndexedResourceCandidate*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate_USE */


#endif // WINDOWS_APPLICATIONMODEL_RESOURCES_MANAGEMENT_RESOURCEINDEXERCONTRACT_VERSION >= 0x10000


#ifndef DEF___FIKeyValuePair_2_HSTRING_HSTRING_USE
#define DEF___FIKeyValuePair_2_HSTRING_HSTRING_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("60310303-49c5-52e6-abc6-a9b36eccc716"))
IKeyValuePair<HSTRING,HSTRING> : IKeyValuePair_impl<HSTRING,HSTRING> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IKeyValuePair`2<String, String>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IKeyValuePair<HSTRING,HSTRING> __FIKeyValuePair_2_HSTRING_HSTRING_t;
#define __FIKeyValuePair_2_HSTRING_HSTRING ABI::Windows::Foundation::Collections::__FIKeyValuePair_2_HSTRING_HSTRING_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIKeyValuePair_2_HSTRING_HSTRING ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,HSTRING>
//#define __FIKeyValuePair_2_HSTRING_HSTRING_t ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,HSTRING>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIKeyValuePair_2_HSTRING_HSTRING_USE */





#ifndef DEF___FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_USE
#define DEF___FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("05eb86f1-7140-5517-b88d-cbaebe57e6b1"))
IIterator<__FIKeyValuePair_2_HSTRING_HSTRING*> : IIterator_impl<__FIKeyValuePair_2_HSTRING_HSTRING*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Foundation.Collections.IKeyValuePair`2<String, String>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<__FIKeyValuePair_2_HSTRING_HSTRING*> __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_t;
#define __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING ABI::Windows::Foundation::Collections::__FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,HSTRING>*>
//#define __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,HSTRING>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_USE */





#ifndef DEF___FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_USE
#define DEF___FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("e9bdaaf0-cbf6-5c72-be90-29cbf3a1319b"))
IIterable<__FIKeyValuePair_2_HSTRING_HSTRING*> : IIterable_impl<__FIKeyValuePair_2_HSTRING_HSTRING*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Foundation.Collections.IKeyValuePair`2<String, String>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<__FIKeyValuePair_2_HSTRING_HSTRING*> __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_t;
#define __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING ABI::Windows::Foundation::Collections::__FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,HSTRING>*>
//#define __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,HSTRING>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_USE */




#ifndef DEF___FIMapView_2_HSTRING_HSTRING_USE
#define DEF___FIMapView_2_HSTRING_HSTRING_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("ac7f26f2-feb7-5b2a-8ac4-345bc62caede"))
IMapView<HSTRING,HSTRING> : IMapView_impl<HSTRING,HSTRING> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IMapView`2<String, String>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IMapView<HSTRING,HSTRING> __FIMapView_2_HSTRING_HSTRING_t;
#define __FIMapView_2_HSTRING_HSTRING ABI::Windows::Foundation::Collections::__FIMapView_2_HSTRING_HSTRING_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIMapView_2_HSTRING_HSTRING ABI::Windows::Foundation::Collections::IMapView<HSTRING,HSTRING>
//#define __FIMapView_2_HSTRING_HSTRING_t ABI::Windows::Foundation::Collections::IMapView<HSTRING,HSTRING>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIMapView_2_HSTRING_HSTRING_USE */





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
        namespace ApplicationModel {
            namespace Resources {
                namespace Management {
                    
                    typedef enum IndexedResourceType : int IndexedResourceType;
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* Resources */
    } /* Management */} /* ABI */








namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Resources {
                namespace Management {
                    class ResourceIndexer;
                } /* Windows */
            } /* ApplicationModel */
        } /* Resources */
    } /* Management */} /* ABI */













/*
 *
 * Struct Windows.ApplicationModel.Resources.Management.IndexedResourceType
 *
 * Introduced to Windows.ApplicationModel.Resources.Management.ResourceIndexerContract in version 1.0
 *
 *
 */

#if WINDOWS_APPLICATIONMODEL_RESOURCES_MANAGEMENT_RESOURCEINDEXERCONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Resources {
                namespace Management {
                    /* [v1_enum, contract] */
                    enum IndexedResourceType : int
                    {
                        IndexedResourceType_String = 0,
                        IndexedResourceType_Path = 1,
#if WINDOWS_APPLICATIONMODEL_RESOURCES_MANAGEMENT_RESOURCEINDEXERCONTRACT_VERSION >= 0x10000
                        
                        IndexedResourceType_EmbeddedData = 2,
#endif // WINDOWS_APPLICATIONMODEL_RESOURCES_MANAGEMENT_RESOURCEINDEXERCONTRACT_VERSION >= 0x10000
                        
                    };
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* Resources */
    } /* Management */} /* ABI */
#endif // WINDOWS_APPLICATIONMODEL_RESOURCES_MANAGEMENT_RESOURCEINDEXERCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Resources.Management.IIndexedResourceCandidate
 *
 * Introduced to Windows.ApplicationModel.Resources.Management.ResourceIndexerContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Resources.Management.IndexedResourceCandidate
 *
 *
 */
#if WINDOWS_APPLICATIONMODEL_RESOURCES_MANAGEMENT_RESOURCEINDEXERCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIIndexedResourceCandidate_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIIndexedResourceCandidate_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Resources_Management_IIndexedResourceCandidate[] = L"Windows.ApplicationModel.Resources.Management.IIndexedResourceCandidate";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Resources {
                namespace Management {
                    /* [object, uuid("0E619EF3-FAEC-4414-A9D7-54ACD5953F29"), exclusiveto, contract] */
                    MIDL_INTERFACE("0E619EF3-FAEC-4414-A9D7-54ACD5953F29")
                    IIndexedResourceCandidate : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Type(
                            /* [retval, out] */__RPC__out ABI::Windows::ApplicationModel::Resources::Management::IndexedResourceType * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Uri(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IUriRuntimeClass * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Metadata(
                            /* [retval, out] */__RPC__deref_out_opt __FIMapView_2_HSTRING_HSTRING * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Qualifiers(
                            /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceQualifier * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ValueAsString(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetQualifierValue(
                            /* [in] */__RPC__in HSTRING qualifierName,
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * qualifierValue
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IIndexedResourceCandidate=_uuidof(IIndexedResourceCandidate);
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* Resources */
    } /* Management */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIIndexedResourceCandidate;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIIndexedResourceCandidate_INTERFACE_DEFINED__) */
#endif // WINDOWS_APPLICATIONMODEL_RESOURCES_MANAGEMENT_RESOURCEINDEXERCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Resources.Management.IIndexedResourceQualifier
 *
 * Introduced to Windows.ApplicationModel.Resources.Management.ResourceIndexerContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Resources.Management.IndexedResourceQualifier
 *
 *
 */
#if WINDOWS_APPLICATIONMODEL_RESOURCES_MANAGEMENT_RESOURCEINDEXERCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIIndexedResourceQualifier_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIIndexedResourceQualifier_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Resources_Management_IIndexedResourceQualifier[] = L"Windows.ApplicationModel.Resources.Management.IIndexedResourceQualifier";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Resources {
                namespace Management {
                    /* [object, uuid("DAE3BB9B-D304-497F-A168-A340042C8ADB"), exclusiveto, contract] */
                    MIDL_INTERFACE("DAE3BB9B-D304-497F-A168-A340042C8ADB")
                    IIndexedResourceQualifier : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_QualifierName(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_QualifierValue(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IIndexedResourceQualifier=_uuidof(IIndexedResourceQualifier);
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* Resources */
    } /* Management */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIIndexedResourceQualifier;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIIndexedResourceQualifier_INTERFACE_DEFINED__) */
#endif // WINDOWS_APPLICATIONMODEL_RESOURCES_MANAGEMENT_RESOURCEINDEXERCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Resources.Management.IResourceIndexer
 *
 * Introduced to Windows.ApplicationModel.Resources.Management.ResourceIndexerContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Resources.Management.ResourceIndexer
 *
 *
 */
#if WINDOWS_APPLICATIONMODEL_RESOURCES_MANAGEMENT_RESOURCEINDEXERCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIResourceIndexer_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIResourceIndexer_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Resources_Management_IResourceIndexer[] = L"Windows.ApplicationModel.Resources.Management.IResourceIndexer";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Resources {
                namespace Management {
                    /* [object, uuid("2D4CF9A5-E32F-4AB2-8748-96350A016DA3"), exclusiveto, contract] */
                    MIDL_INTERFACE("2D4CF9A5-E32F-4AB2-8748-96350A016DA3")
                    IResourceIndexer : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE IndexFilePath(
                            /* [in] */__RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass * filePath,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::Resources::Management::IIndexedResourceCandidate * * candidate
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE IndexFileContentsAsync(
                            /* [in] */__RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass * file,
                            /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate * * operation
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IResourceIndexer=_uuidof(IResourceIndexer);
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* Resources */
    } /* Management */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIResourceIndexer;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIResourceIndexer_INTERFACE_DEFINED__) */
#endif // WINDOWS_APPLICATIONMODEL_RESOURCES_MANAGEMENT_RESOURCEINDEXERCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Resources.Management.IResourceIndexerFactory
 *
 * Introduced to Windows.ApplicationModel.Resources.Management.ResourceIndexerContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Resources.Management.ResourceIndexer
 *
 *
 */
#if WINDOWS_APPLICATIONMODEL_RESOURCES_MANAGEMENT_RESOURCEINDEXERCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIResourceIndexerFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIResourceIndexerFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Resources_Management_IResourceIndexerFactory[] = L"Windows.ApplicationModel.Resources.Management.IResourceIndexerFactory";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Resources {
                namespace Management {
                    /* [object, uuid("B8DE3F09-31CD-4D97-BD30-8D39F742BC61"), exclusiveto, contract] */
                    MIDL_INTERFACE("B8DE3F09-31CD-4D97-BD30-8D39F742BC61")
                    IResourceIndexerFactory : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE CreateResourceIndexer(
                            /* [in] */__RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass * projectRoot,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::Resources::Management::IResourceIndexer * * indexer
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IResourceIndexerFactory=_uuidof(IResourceIndexerFactory);
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* Resources */
    } /* Management */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIResourceIndexerFactory;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIResourceIndexerFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_APPLICATIONMODEL_RESOURCES_MANAGEMENT_RESOURCEINDEXERCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Resources.Management.IResourceIndexerFactory2
 *
 * Introduced to Windows.ApplicationModel.Resources.Management.ResourceIndexerContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Resources.Management.ResourceIndexer
 *
 *
 */
#if WINDOWS_APPLICATIONMODEL_RESOURCES_MANAGEMENT_RESOURCEINDEXERCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIResourceIndexerFactory2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIResourceIndexerFactory2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Resources_Management_IResourceIndexerFactory2[] = L"Windows.ApplicationModel.Resources.Management.IResourceIndexerFactory2";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Resources {
                namespace Management {
                    /* [object, uuid("6040F18D-D5E5-4B60-9201-CD279CBCFED9"), exclusiveto, contract] */
                    MIDL_INTERFACE("6040F18D-D5E5-4B60-9201-CD279CBCFED9")
                    IResourceIndexerFactory2 : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE CreateResourceIndexerWithExtension(
                            /* [in] */__RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass * projectRoot,
                            /* [in] */__RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass * extensionDllPath,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::Resources::Management::IResourceIndexer * * indexer
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IResourceIndexerFactory2=_uuidof(IResourceIndexerFactory2);
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* Resources */
    } /* Management */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIResourceIndexerFactory2;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIResourceIndexerFactory2_INTERFACE_DEFINED__) */
#endif // WINDOWS_APPLICATIONMODEL_RESOURCES_MANAGEMENT_RESOURCEINDEXERCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Resources.Management.IndexedResourceCandidate
 *
 * Introduced to Windows.ApplicationModel.Resources.Management.ResourceIndexerContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Resources.Management.IIndexedResourceCandidate ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_APPLICATIONMODEL_RESOURCES_MANAGEMENT_RESOURCEINDEXERCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Resources_Management_IndexedResourceCandidate_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Resources_Management_IndexedResourceCandidate_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Resources_Management_IndexedResourceCandidate[] = L"Windows.ApplicationModel.Resources.Management.IndexedResourceCandidate";
#endif
#endif // WINDOWS_APPLICATIONMODEL_RESOURCES_MANAGEMENT_RESOURCEINDEXERCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Resources.Management.IndexedResourceQualifier
 *
 * Introduced to Windows.ApplicationModel.Resources.Management.ResourceIndexerContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Resources.Management.IIndexedResourceQualifier ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_APPLICATIONMODEL_RESOURCES_MANAGEMENT_RESOURCEINDEXERCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Resources_Management_IndexedResourceQualifier_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Resources_Management_IndexedResourceQualifier_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Resources_Management_IndexedResourceQualifier[] = L"Windows.ApplicationModel.Resources.Management.IndexedResourceQualifier";
#endif
#endif // WINDOWS_APPLICATIONMODEL_RESOURCES_MANAGEMENT_RESOURCEINDEXERCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Resources.Management.ResourceIndexer
 *
 * Introduced to Windows.ApplicationModel.Resources.Management.ResourceIndexerContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.ApplicationModel.Resources.Management.IResourceIndexerFactory2 interface starting with version 1.0 of the Windows.ApplicationModel.Resources.Management.ResourceIndexerContract API contract
 *   Type can be activated via the Windows.ApplicationModel.Resources.Management.IResourceIndexerFactory interface starting with version 1.0 of the Windows.ApplicationModel.Resources.Management.ResourceIndexerContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Resources.Management.IResourceIndexer ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_APPLICATIONMODEL_RESOURCES_MANAGEMENT_RESOURCEINDEXERCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Resources_Management_ResourceIndexer_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Resources_Management_ResourceIndexer_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Resources_Management_ResourceIndexer[] = L"Windows.ApplicationModel.Resources.Management.ResourceIndexer";
#endif
#endif // WINDOWS_APPLICATIONMODEL_RESOURCES_MANAGEMENT_RESOURCEINDEXERCONTRACT_VERSION >= 0x10000





#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIIndexedResourceCandidate_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIIndexedResourceCandidate_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIIndexedResourceCandidate __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIIndexedResourceCandidate;

#endif // ____x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIIndexedResourceCandidate_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIIndexedResourceQualifier_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIIndexedResourceQualifier_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIIndexedResourceQualifier __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIIndexedResourceQualifier;

#endif // ____x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIIndexedResourceQualifier_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIResourceIndexer_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIResourceIndexer_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIResourceIndexer __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIResourceIndexer;

#endif // ____x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIResourceIndexer_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIResourceIndexerFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIResourceIndexerFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIResourceIndexerFactory __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIResourceIndexerFactory;

#endif // ____x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIResourceIndexerFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIResourceIndexerFactory2_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIResourceIndexerFactory2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIResourceIndexerFactory2 __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIResourceIndexerFactory2;

#endif // ____x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIResourceIndexerFactory2_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#if WINDOWS_APPLICATIONMODEL_RESOURCES_MANAGEMENT_RESOURCEINDEXERCONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate __FIIterator_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate;

typedef struct __FIIterator_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidateVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIIndexedResourceCandidate * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIIndexedResourceCandidate * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidateVtbl;

interface __FIIterator_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate
{
    CONST_VTBL struct __FIIterator_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidateVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate_INTERFACE_DEFINED__

#endif // WINDOWS_APPLICATIONMODEL_RESOURCES_MANAGEMENT_RESOURCEINDEXERCONTRACT_VERSION >= 0x10000


#if WINDOWS_APPLICATIONMODEL_RESOURCES_MANAGEMENT_RESOURCEINDEXERCONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate __FIIterable_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate;

typedef  struct __FIIterable_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidateVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate **first);

    END_INTERFACE
} __FIIterable_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidateVtbl;

interface __FIIterable_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate
{
    CONST_VTBL struct __FIIterable_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidateVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate_INTERFACE_DEFINED__

#endif // WINDOWS_APPLICATIONMODEL_RESOURCES_MANAGEMENT_RESOURCEINDEXERCONTRACT_VERSION >= 0x10000


#if WINDOWS_APPLICATIONMODEL_RESOURCES_MANAGEMENT_RESOURCEINDEXERCONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceQualifier_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceQualifier_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceQualifier __FIIterator_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceQualifier;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceQualifier;

typedef struct __FIIterator_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceQualifierVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceQualifier * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceQualifier * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceQualifier * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceQualifier * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceQualifier * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceQualifier * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceQualifier * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIIndexedResourceQualifier * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceQualifier * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceQualifier * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceQualifier * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIIndexedResourceQualifier * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceQualifierVtbl;

interface __FIIterator_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceQualifier
{
    CONST_VTBL struct __FIIterator_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceQualifierVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceQualifier_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceQualifier_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceQualifier_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceQualifier_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceQualifier_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceQualifier_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceQualifier_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceQualifier_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceQualifier_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceQualifier_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceQualifier_INTERFACE_DEFINED__

#endif // WINDOWS_APPLICATIONMODEL_RESOURCES_MANAGEMENT_RESOURCEINDEXERCONTRACT_VERSION >= 0x10000


#if WINDOWS_APPLICATIONMODEL_RESOURCES_MANAGEMENT_RESOURCEINDEXERCONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceQualifier_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceQualifier_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceQualifier __FIIterable_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceQualifier;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceQualifier;

typedef  struct __FIIterable_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceQualifierVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceQualifier * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceQualifier * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceQualifier * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceQualifier * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceQualifier * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceQualifier * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceQualifier * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceQualifier **first);

    END_INTERFACE
} __FIIterable_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceQualifierVtbl;

interface __FIIterable_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceQualifier
{
    CONST_VTBL struct __FIIterable_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceQualifierVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceQualifier_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceQualifier_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceQualifier_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceQualifier_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceQualifier_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceQualifier_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceQualifier_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceQualifier_INTERFACE_DEFINED__

#endif // WINDOWS_APPLICATIONMODEL_RESOURCES_MANAGEMENT_RESOURCEINDEXERCONTRACT_VERSION >= 0x10000


#if WINDOWS_APPLICATIONMODEL_RESOURCES_MANAGEMENT_RESOURCEINDEXERCONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate __FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate;

typedef struct __FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidateVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIIndexedResourceCandidate * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate * This,
            /* [in] */ __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIIndexedResourceCandidate * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIIndexedResourceCandidate * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidateVtbl;

interface __FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate
{
    CONST_VTBL struct __FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidateVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate_INTERFACE_DEFINED__

#endif // WINDOWS_APPLICATIONMODEL_RESOURCES_MANAGEMENT_RESOURCEINDEXERCONTRACT_VERSION >= 0x10000


#if WINDOWS_APPLICATIONMODEL_RESOURCES_MANAGEMENT_RESOURCEINDEXERCONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceQualifier_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceQualifier_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceQualifier __FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceQualifier;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceQualifier;

typedef struct __FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceQualifierVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceQualifier * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceQualifier * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceQualifier * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceQualifier * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceQualifier * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceQualifier * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceQualifier * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIIndexedResourceQualifier * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceQualifier * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceQualifier * This,
            /* [in] */ __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIIndexedResourceQualifier * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceQualifier * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIIndexedResourceQualifier * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceQualifierVtbl;

interface __FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceQualifier
{
    CONST_VTBL struct __FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceQualifierVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceQualifier_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceQualifier_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceQualifier_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceQualifier_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceQualifier_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceQualifier_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceQualifier_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceQualifier_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceQualifier_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceQualifier_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceQualifier_INTERFACE_DEFINED__

#endif // WINDOWS_APPLICATIONMODEL_RESOURCES_MANAGEMENT_RESOURCEINDEXERCONTRACT_VERSION >= 0x10000


#if WINDOWS_APPLICATIONMODEL_RESOURCES_MANAGEMENT_RESOURCEINDEXERCONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate;

typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidateVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidateVtbl;

interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidateVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate_INTERFACE_DEFINED__

#endif // WINDOWS_APPLICATIONMODEL_RESOURCES_MANAGEMENT_RESOURCEINDEXERCONTRACT_VERSION >= 0x10000


#if WINDOWS_APPLICATIONMODEL_RESOURCES_MANAGEMENT_RESOURCEINDEXERCONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate;

typedef struct __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidateVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate * This, /* [retval][out] */ __RPC__out __FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidateVtbl;

interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidateVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate_INTERFACE_DEFINED__

#endif // WINDOWS_APPLICATIONMODEL_RESOURCES_MANAGEMENT_RESOURCEINDEXERCONTRACT_VERSION >= 0x10000

#if !defined(____FIKeyValuePair_2_HSTRING_HSTRING_INTERFACE_DEFINED__)
#define ____FIKeyValuePair_2_HSTRING_HSTRING_INTERFACE_DEFINED__

typedef interface __FIKeyValuePair_2_HSTRING_HSTRING __FIKeyValuePair_2_HSTRING_HSTRING;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIKeyValuePair_2_HSTRING_HSTRING;

typedef struct __FIKeyValuePair_2_HSTRING_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Key )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This, /* [retval][out] */ __RPC__out HSTRING *key);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This, /* [retval][out] */ __RPC__deref_out_opt HSTRING *value);
    END_INTERFACE
} __FIKeyValuePair_2_HSTRING_HSTRINGVtbl;

interface __FIKeyValuePair_2_HSTRING_HSTRING
{
    CONST_VTBL struct __FIKeyValuePair_2_HSTRING_HSTRINGVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIKeyValuePair_2_HSTRING_HSTRING_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIKeyValuePair_2_HSTRING_HSTRING_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIKeyValuePair_2_HSTRING_HSTRING_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIKeyValuePair_2_HSTRING_HSTRING_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIKeyValuePair_2_HSTRING_HSTRING_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIKeyValuePair_2_HSTRING_HSTRING_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIKeyValuePair_2_HSTRING_HSTRING_get_Key(This,key)	\
    ( (This)->lpVtbl -> get_Key(This,key) ) 

#define __FIKeyValuePair_2_HSTRING_HSTRING_get_Value(This,value)	\
    ( (This)->lpVtbl -> get_Value(This,value) ) 
#endif /* COBJMACROS */


#endif // ____FIKeyValuePair_2_HSTRING_HSTRING_INTERFACE_DEFINED__



#if !defined(____FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_INTERFACE_DEFINED__)
#define ____FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_INTERFACE_DEFINED__

typedef interface __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING;

typedef struct __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRINGVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This, /* [retval][out] */ __RPC__out __FIKeyValuePair_2_HSTRING_HSTRING * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __FIKeyValuePair_2_HSTRING_HSTRING * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRINGVtbl;

interface __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING
{
    CONST_VTBL struct __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRINGVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_INTERFACE_DEFINED__



#if !defined(____FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_INTERFACE_DEFINED__)
#define ____FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_INTERFACE_DEFINED__

typedef interface __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING;

typedef  struct __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRINGVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING **first);

    END_INTERFACE
} __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRINGVtbl;

interface __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING
{
    CONST_VTBL struct __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRINGVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_INTERFACE_DEFINED__


#if !defined(____FIMapView_2_HSTRING_HSTRING_INTERFACE_DEFINED__)
#define ____FIMapView_2_HSTRING_HSTRING_INTERFACE_DEFINED__

typedef interface __FIMapView_2_HSTRING_HSTRING __FIMapView_2_HSTRING_HSTRING;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIMapView_2_HSTRING_HSTRING;

typedef struct __FIMapView_2_HSTRING_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This,/* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *Lookup )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This,
        /* [in] */ __RPC__in HSTRING key,
        /* [retval][out] */ __RPC__deref_out_opt HSTRING *value);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This, /* [retval][out] */ __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *HasKey )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This, /* [in] */ __RPC__in HSTRING key, /* [retval][out] */ __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *Split )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This,/* [out] */ __RPC__deref_out_opt __FIMapView_2_HSTRING_HSTRING **firstPartition,
        /* [out] */ __RPC__deref_out_opt __FIMapView_2_HSTRING_HSTRING **secondPartition);
    END_INTERFACE
} __FIMapView_2_HSTRING_HSTRINGVtbl;

interface __FIMapView_2_HSTRING_HSTRING
{
    CONST_VTBL struct __FIMapView_2_HSTRING_HSTRINGVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIMapView_2_HSTRING_HSTRING_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIMapView_2_HSTRING_HSTRING_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIMapView_2_HSTRING_HSTRING_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIMapView_2_HSTRING_HSTRING_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIMapView_2_HSTRING_HSTRING_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIMapView_2_HSTRING_HSTRING_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIMapView_2_HSTRING_HSTRING_Lookup(This,key,value)	\
    ( (This)->lpVtbl -> Lookup(This,key,value) ) 
#define __FIMapView_2_HSTRING_HSTRING_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 
#define __FIMapView_2_HSTRING_HSTRING_HasKey(This,key,found)	\
    ( (This)->lpVtbl -> HasKey(This,key,found) ) 
#define __FIMapView_2_HSTRING_HSTRING_Split(This,firstPartition,secondPartition)	\
    ( (This)->lpVtbl -> Split(This,firstPartition,secondPartition) ) 
#endif /* COBJMACROS */


#endif // ____FIMapView_2_HSTRING_HSTRING_INTERFACE_DEFINED__



#ifndef ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIUriRuntimeClass __x_ABI_CWindows_CFoundation_CIUriRuntimeClass;

#endif // ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__






typedef enum __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIndexedResourceType __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIndexedResourceType;




















/*
 *
 * Struct Windows.ApplicationModel.Resources.Management.IndexedResourceType
 *
 * Introduced to Windows.ApplicationModel.Resources.Management.ResourceIndexerContract in version 1.0
 *
 *
 */

#if WINDOWS_APPLICATIONMODEL_RESOURCES_MANAGEMENT_RESOURCEINDEXERCONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIndexedResourceType
{
    IndexedResourceType_String = 0,
    IndexedResourceType_Path = 1,
#if WINDOWS_APPLICATIONMODEL_RESOURCES_MANAGEMENT_RESOURCEINDEXERCONTRACT_VERSION >= 0x10000
    
    IndexedResourceType_EmbeddedData = 2,
#endif // WINDOWS_APPLICATIONMODEL_RESOURCES_MANAGEMENT_RESOURCEINDEXERCONTRACT_VERSION >= 0x10000
    
};
#endif // WINDOWS_APPLICATIONMODEL_RESOURCES_MANAGEMENT_RESOURCEINDEXERCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Resources.Management.IIndexedResourceCandidate
 *
 * Introduced to Windows.ApplicationModel.Resources.Management.ResourceIndexerContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Resources.Management.IndexedResourceCandidate
 *
 *
 */
#if WINDOWS_APPLICATIONMODEL_RESOURCES_MANAGEMENT_RESOURCEINDEXERCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIIndexedResourceCandidate_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIIndexedResourceCandidate_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Resources_Management_IIndexedResourceCandidate[] = L"Windows.ApplicationModel.Resources.Management.IIndexedResourceCandidate";
/* [object, uuid("0E619EF3-FAEC-4414-A9D7-54ACD5953F29"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIIndexedResourceCandidateVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIIndexedResourceCandidate * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIIndexedResourceCandidate * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIIndexedResourceCandidate * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIIndexedResourceCandidate * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIIndexedResourceCandidate * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIIndexedResourceCandidate * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Type )(
        __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIIndexedResourceCandidate * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIndexedResourceType * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Uri )(
        __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIIndexedResourceCandidate * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Metadata )(
        __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIIndexedResourceCandidate * This,
        /* [retval, out] */__RPC__deref_out_opt __FIMapView_2_HSTRING_HSTRING * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Qualifiers )(
        __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIIndexedResourceCandidate * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceQualifier * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ValueAsString )(
        __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIIndexedResourceCandidate * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetQualifierValue )(
        __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIIndexedResourceCandidate * This,
        /* [in] */__RPC__in HSTRING qualifierName,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * qualifierValue
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIIndexedResourceCandidateVtbl;

interface __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIIndexedResourceCandidate
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIIndexedResourceCandidateVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIIndexedResourceCandidate_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIIndexedResourceCandidate_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIIndexedResourceCandidate_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIIndexedResourceCandidate_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIIndexedResourceCandidate_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIIndexedResourceCandidate_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIIndexedResourceCandidate_get_Type(This,value) \
    ( (This)->lpVtbl->get_Type(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIIndexedResourceCandidate_get_Uri(This,value) \
    ( (This)->lpVtbl->get_Uri(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIIndexedResourceCandidate_get_Metadata(This,value) \
    ( (This)->lpVtbl->get_Metadata(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIIndexedResourceCandidate_get_Qualifiers(This,value) \
    ( (This)->lpVtbl->get_Qualifiers(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIIndexedResourceCandidate_get_ValueAsString(This,value) \
    ( (This)->lpVtbl->get_ValueAsString(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIIndexedResourceCandidate_GetQualifierValue(This,qualifierName,qualifierValue) \
    ( (This)->lpVtbl->GetQualifierValue(This,qualifierName,qualifierValue) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIIndexedResourceCandidate;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIIndexedResourceCandidate_INTERFACE_DEFINED__) */
#endif // WINDOWS_APPLICATIONMODEL_RESOURCES_MANAGEMENT_RESOURCEINDEXERCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Resources.Management.IIndexedResourceQualifier
 *
 * Introduced to Windows.ApplicationModel.Resources.Management.ResourceIndexerContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Resources.Management.IndexedResourceQualifier
 *
 *
 */
#if WINDOWS_APPLICATIONMODEL_RESOURCES_MANAGEMENT_RESOURCEINDEXERCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIIndexedResourceQualifier_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIIndexedResourceQualifier_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Resources_Management_IIndexedResourceQualifier[] = L"Windows.ApplicationModel.Resources.Management.IIndexedResourceQualifier";
/* [object, uuid("DAE3BB9B-D304-497F-A168-A340042C8ADB"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIIndexedResourceQualifierVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIIndexedResourceQualifier * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIIndexedResourceQualifier * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIIndexedResourceQualifier * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIIndexedResourceQualifier * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIIndexedResourceQualifier * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIIndexedResourceQualifier * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_QualifierName )(
        __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIIndexedResourceQualifier * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_QualifierValue )(
        __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIIndexedResourceQualifier * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIIndexedResourceQualifierVtbl;

interface __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIIndexedResourceQualifier
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIIndexedResourceQualifierVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIIndexedResourceQualifier_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIIndexedResourceQualifier_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIIndexedResourceQualifier_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIIndexedResourceQualifier_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIIndexedResourceQualifier_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIIndexedResourceQualifier_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIIndexedResourceQualifier_get_QualifierName(This,value) \
    ( (This)->lpVtbl->get_QualifierName(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIIndexedResourceQualifier_get_QualifierValue(This,value) \
    ( (This)->lpVtbl->get_QualifierValue(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIIndexedResourceQualifier;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIIndexedResourceQualifier_INTERFACE_DEFINED__) */
#endif // WINDOWS_APPLICATIONMODEL_RESOURCES_MANAGEMENT_RESOURCEINDEXERCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Resources.Management.IResourceIndexer
 *
 * Introduced to Windows.ApplicationModel.Resources.Management.ResourceIndexerContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Resources.Management.ResourceIndexer
 *
 *
 */
#if WINDOWS_APPLICATIONMODEL_RESOURCES_MANAGEMENT_RESOURCEINDEXERCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIResourceIndexer_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIResourceIndexer_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Resources_Management_IResourceIndexer[] = L"Windows.ApplicationModel.Resources.Management.IResourceIndexer";
/* [object, uuid("2D4CF9A5-E32F-4AB2-8748-96350A016DA3"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIResourceIndexerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIResourceIndexer * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIResourceIndexer * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIResourceIndexer * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIResourceIndexer * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIResourceIndexer * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIResourceIndexer * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *IndexFilePath )(
        __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIResourceIndexer * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * filePath,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIIndexedResourceCandidate * * candidate
        );
    HRESULT ( STDMETHODCALLTYPE *IndexFileContentsAsync )(
        __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIResourceIndexer * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * file,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate * * operation
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIResourceIndexerVtbl;

interface __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIResourceIndexer
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIResourceIndexerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIResourceIndexer_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIResourceIndexer_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIResourceIndexer_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIResourceIndexer_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIResourceIndexer_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIResourceIndexer_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIResourceIndexer_IndexFilePath(This,filePath,candidate) \
    ( (This)->lpVtbl->IndexFilePath(This,filePath,candidate) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIResourceIndexer_IndexFileContentsAsync(This,file,operation) \
    ( (This)->lpVtbl->IndexFileContentsAsync(This,file,operation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIResourceIndexer;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIResourceIndexer_INTERFACE_DEFINED__) */
#endif // WINDOWS_APPLICATIONMODEL_RESOURCES_MANAGEMENT_RESOURCEINDEXERCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Resources.Management.IResourceIndexerFactory
 *
 * Introduced to Windows.ApplicationModel.Resources.Management.ResourceIndexerContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Resources.Management.ResourceIndexer
 *
 *
 */
#if WINDOWS_APPLICATIONMODEL_RESOURCES_MANAGEMENT_RESOURCEINDEXERCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIResourceIndexerFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIResourceIndexerFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Resources_Management_IResourceIndexerFactory[] = L"Windows.ApplicationModel.Resources.Management.IResourceIndexerFactory";
/* [object, uuid("B8DE3F09-31CD-4D97-BD30-8D39F742BC61"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIResourceIndexerFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIResourceIndexerFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIResourceIndexerFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIResourceIndexerFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIResourceIndexerFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIResourceIndexerFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIResourceIndexerFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateResourceIndexer )(
        __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIResourceIndexerFactory * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * projectRoot,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIResourceIndexer * * indexer
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIResourceIndexerFactoryVtbl;

interface __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIResourceIndexerFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIResourceIndexerFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIResourceIndexerFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIResourceIndexerFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIResourceIndexerFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIResourceIndexerFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIResourceIndexerFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIResourceIndexerFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIResourceIndexerFactory_CreateResourceIndexer(This,projectRoot,indexer) \
    ( (This)->lpVtbl->CreateResourceIndexer(This,projectRoot,indexer) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIResourceIndexerFactory;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIResourceIndexerFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_APPLICATIONMODEL_RESOURCES_MANAGEMENT_RESOURCEINDEXERCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Resources.Management.IResourceIndexerFactory2
 *
 * Introduced to Windows.ApplicationModel.Resources.Management.ResourceIndexerContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Resources.Management.ResourceIndexer
 *
 *
 */
#if WINDOWS_APPLICATIONMODEL_RESOURCES_MANAGEMENT_RESOURCEINDEXERCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIResourceIndexerFactory2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIResourceIndexerFactory2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Resources_Management_IResourceIndexerFactory2[] = L"Windows.ApplicationModel.Resources.Management.IResourceIndexerFactory2";
/* [object, uuid("6040F18D-D5E5-4B60-9201-CD279CBCFED9"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIResourceIndexerFactory2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIResourceIndexerFactory2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIResourceIndexerFactory2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIResourceIndexerFactory2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIResourceIndexerFactory2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIResourceIndexerFactory2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIResourceIndexerFactory2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateResourceIndexerWithExtension )(
        __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIResourceIndexerFactory2 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * projectRoot,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * extensionDllPath,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIResourceIndexer * * indexer
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIResourceIndexerFactory2Vtbl;

interface __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIResourceIndexerFactory2
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIResourceIndexerFactory2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIResourceIndexerFactory2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIResourceIndexerFactory2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIResourceIndexerFactory2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIResourceIndexerFactory2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIResourceIndexerFactory2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIResourceIndexerFactory2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIResourceIndexerFactory2_CreateResourceIndexerWithExtension(This,projectRoot,extensionDllPath,indexer) \
    ( (This)->lpVtbl->CreateResourceIndexerWithExtension(This,projectRoot,extensionDllPath,indexer) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIResourceIndexerFactory2;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIResourceIndexerFactory2_INTERFACE_DEFINED__) */
#endif // WINDOWS_APPLICATIONMODEL_RESOURCES_MANAGEMENT_RESOURCEINDEXERCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Resources.Management.IndexedResourceCandidate
 *
 * Introduced to Windows.ApplicationModel.Resources.Management.ResourceIndexerContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Resources.Management.IIndexedResourceCandidate ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_APPLICATIONMODEL_RESOURCES_MANAGEMENT_RESOURCEINDEXERCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Resources_Management_IndexedResourceCandidate_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Resources_Management_IndexedResourceCandidate_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Resources_Management_IndexedResourceCandidate[] = L"Windows.ApplicationModel.Resources.Management.IndexedResourceCandidate";
#endif
#endif // WINDOWS_APPLICATIONMODEL_RESOURCES_MANAGEMENT_RESOURCEINDEXERCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Resources.Management.IndexedResourceQualifier
 *
 * Introduced to Windows.ApplicationModel.Resources.Management.ResourceIndexerContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Resources.Management.IIndexedResourceQualifier ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_APPLICATIONMODEL_RESOURCES_MANAGEMENT_RESOURCEINDEXERCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Resources_Management_IndexedResourceQualifier_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Resources_Management_IndexedResourceQualifier_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Resources_Management_IndexedResourceQualifier[] = L"Windows.ApplicationModel.Resources.Management.IndexedResourceQualifier";
#endif
#endif // WINDOWS_APPLICATIONMODEL_RESOURCES_MANAGEMENT_RESOURCEINDEXERCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Resources.Management.ResourceIndexer
 *
 * Introduced to Windows.ApplicationModel.Resources.Management.ResourceIndexerContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.ApplicationModel.Resources.Management.IResourceIndexerFactory2 interface starting with version 1.0 of the Windows.ApplicationModel.Resources.Management.ResourceIndexerContract API contract
 *   Type can be activated via the Windows.ApplicationModel.Resources.Management.IResourceIndexerFactory interface starting with version 1.0 of the Windows.ApplicationModel.Resources.Management.ResourceIndexerContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Resources.Management.IResourceIndexer ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_APPLICATIONMODEL_RESOURCES_MANAGEMENT_RESOURCEINDEXERCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Resources_Management_ResourceIndexer_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Resources_Management_ResourceIndexer_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Resources_Management_ResourceIndexer[] = L"Windows.ApplicationModel.Resources.Management.ResourceIndexer";
#endif
#endif // WINDOWS_APPLICATIONMODEL_RESOURCES_MANAGEMENT_RESOURCEINDEXERCONTRACT_VERSION >= 0x10000





#endif // defined(__cplusplus)
#pragma pop_macro("MIDL_CONST_ID")
// Restore the original value of the 'DEPRECATED' macro
#pragma pop_macro("DEPRECATED")

#ifdef __clang__
#pragma clang diagnostic pop // deprecated-declarations
#else
#pragma warning(pop)
#endif
#endif // __windows2Eapplicationmodel2Eresources2Emanagement_p_h__

#endif // __windows2Eapplicationmodel2Eresources2Emanagement_h__
