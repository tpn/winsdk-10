/* Header file automatically generated from windows.globalization.collation.idl */
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
#ifndef __windows2Eglobalization2Ecollation_h__
#define __windows2Eglobalization2Ecollation_h__
#ifndef __windows2Eglobalization2Ecollation_p_h__
#define __windows2Eglobalization2Ecollation_p_h__


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
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CGlobalization_CCollation_CICharacterGrouping_FWD_DEFINED__
#define ____x_ABI_CWindows_CGlobalization_CCollation_CICharacterGrouping_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Globalization {
            namespace Collation {
                interface ICharacterGrouping;
            } /* Windows */
        } /* Globalization */
    } /* Collation */} /* ABI */
#define __x_ABI_CWindows_CGlobalization_CCollation_CICharacterGrouping ABI::Windows::Globalization::Collation::ICharacterGrouping

#endif // ____x_ABI_CWindows_CGlobalization_CCollation_CICharacterGrouping_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGlobalization_CCollation_CICharacterGroupings_FWD_DEFINED__
#define ____x_ABI_CWindows_CGlobalization_CCollation_CICharacterGroupings_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Globalization {
            namespace Collation {
                interface ICharacterGroupings;
            } /* Windows */
        } /* Globalization */
    } /* Collation */} /* ABI */
#define __x_ABI_CWindows_CGlobalization_CCollation_CICharacterGroupings ABI::Windows::Globalization::Collation::ICharacterGroupings

#endif // ____x_ABI_CWindows_CGlobalization_CCollation_CICharacterGroupings_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGlobalization_CCollation_CICharacterGroupingsFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CGlobalization_CCollation_CICharacterGroupingsFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Globalization {
            namespace Collation {
                interface ICharacterGroupingsFactory;
            } /* Windows */
        } /* Globalization */
    } /* Collation */} /* ABI */
#define __x_ABI_CWindows_CGlobalization_CCollation_CICharacterGroupingsFactory ABI::Windows::Globalization::Collation::ICharacterGroupingsFactory

#endif // ____x_ABI_CWindows_CGlobalization_CCollation_CICharacterGroupingsFactory_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Windows {
        namespace Globalization {
            namespace Collation {
                class CharacterGrouping;
            } /* Windows */
        } /* Globalization */
    } /* Collation */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CGlobalization__CCollation__CCharacterGrouping_USE
#define DEF___FIIterator_1_Windows__CGlobalization__CCollation__CCharacterGrouping_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("57e89bbc-9220-5df2-844b-ddfe6605db5f"))
IIterator<ABI::Windows::Globalization::Collation::CharacterGrouping*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Globalization::Collation::CharacterGrouping*, ABI::Windows::Globalization::Collation::ICharacterGrouping*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Globalization.Collation.CharacterGrouping>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Globalization::Collation::CharacterGrouping*> __FIIterator_1_Windows__CGlobalization__CCollation__CCharacterGrouping_t;
#define __FIIterator_1_Windows__CGlobalization__CCollation__CCharacterGrouping ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CGlobalization__CCollation__CCharacterGrouping_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CGlobalization__CCollation__CCharacterGrouping ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Globalization::Collation::ICharacterGrouping*>
//#define __FIIterator_1_Windows__CGlobalization__CCollation__CCharacterGrouping_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Globalization::Collation::ICharacterGrouping*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CGlobalization__CCollation__CCharacterGrouping_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CGlobalization__CCollation__CCharacterGrouping_USE
#define DEF___FIIterable_1_Windows__CGlobalization__CCollation__CCharacterGrouping_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("82e3abf0-06e3-5609-ba39-c51eb2f5fae6"))
IIterable<ABI::Windows::Globalization::Collation::CharacterGrouping*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Globalization::Collation::CharacterGrouping*, ABI::Windows::Globalization::Collation::ICharacterGrouping*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Globalization.Collation.CharacterGrouping>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Globalization::Collation::CharacterGrouping*> __FIIterable_1_Windows__CGlobalization__CCollation__CCharacterGrouping_t;
#define __FIIterable_1_Windows__CGlobalization__CCollation__CCharacterGrouping ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CGlobalization__CCollation__CCharacterGrouping_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CGlobalization__CCollation__CCharacterGrouping ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Globalization::Collation::ICharacterGrouping*>
//#define __FIIterable_1_Windows__CGlobalization__CCollation__CCharacterGrouping_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Globalization::Collation::ICharacterGrouping*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CGlobalization__CCollation__CCharacterGrouping_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CGlobalization__CCollation__CCharacterGrouping_USE
#define DEF___FIVectorView_1_Windows__CGlobalization__CCollation__CCharacterGrouping_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("f7cf5a4a-2b7a-5bc9-a0c4-9dce07ff61c9"))
IVectorView<ABI::Windows::Globalization::Collation::CharacterGrouping*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Globalization::Collation::CharacterGrouping*, ABI::Windows::Globalization::Collation::ICharacterGrouping*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Globalization.Collation.CharacterGrouping>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Globalization::Collation::CharacterGrouping*> __FIVectorView_1_Windows__CGlobalization__CCollation__CCharacterGrouping_t;
#define __FIVectorView_1_Windows__CGlobalization__CCollation__CCharacterGrouping ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CGlobalization__CCollation__CCharacterGrouping_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CGlobalization__CCollation__CCharacterGrouping ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Globalization::Collation::ICharacterGrouping*>
//#define __FIVectorView_1_Windows__CGlobalization__CCollation__CCharacterGrouping_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Globalization::Collation::ICharacterGrouping*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CGlobalization__CCollation__CCharacterGrouping_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000










namespace ABI {
    namespace Windows {
        namespace Globalization {
            namespace Collation {
                class CharacterGroupings;
            } /* Windows */
        } /* Globalization */
    } /* Collation */} /* ABI */










/*
 *
 * Interface Windows.Globalization.Collation.ICharacterGrouping
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Globalization.Collation.CharacterGrouping
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGlobalization_CCollation_CICharacterGrouping_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGlobalization_CCollation_CICharacterGrouping_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Globalization_Collation_ICharacterGrouping[] = L"Windows.Globalization.Collation.ICharacterGrouping";
namespace ABI {
    namespace Windows {
        namespace Globalization {
            namespace Collation {
                /* [object, uuid("FAE761BB-805D-4BB0-95BB-C1F7C3E8EB8E"), exclusiveto, contract] */
                MIDL_INTERFACE("FAE761BB-805D-4BB0-95BB-C1F7C3E8EB8E")
                ICharacterGrouping : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_First(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Label(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ICharacterGrouping=_uuidof(ICharacterGrouping);
                
            } /* Windows */
        } /* Globalization */
    } /* Collation */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGlobalization_CCollation_CICharacterGrouping;
#endif /* !defined(____x_ABI_CWindows_CGlobalization_CCollation_CICharacterGrouping_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Globalization.Collation.ICharacterGroupings
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Globalization.Collation.CharacterGroupings
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.Collections.IVectorView_1_Windows.Globalization.Collation.CharacterGrouping
 *     Windows.Foundation.Collections.IIterable_1_Windows.Globalization.Collation.CharacterGrouping
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGlobalization_CCollation_CICharacterGroupings_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGlobalization_CCollation_CICharacterGroupings_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Globalization_Collation_ICharacterGroupings[] = L"Windows.Globalization.Collation.ICharacterGroupings";
namespace ABI {
    namespace Windows {
        namespace Globalization {
            namespace Collation {
                /* [object, uuid("B8D20A75-D4CF-4055-80E5-CE169C226496"), exclusiveto, contract] */
                MIDL_INTERFACE("B8D20A75-D4CF-4055-80E5-CE169C226496")
                ICharacterGroupings : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE Lookup(
                        /* [in] */__RPC__in HSTRING text,
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ICharacterGroupings=_uuidof(ICharacterGroupings);
                
            } /* Windows */
        } /* Globalization */
    } /* Collation */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGlobalization_CCollation_CICharacterGroupings;
#endif /* !defined(____x_ABI_CWindows_CGlobalization_CCollation_CICharacterGroupings_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Globalization.Collation.ICharacterGroupingsFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Globalization.Collation.CharacterGroupings
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CGlobalization_CCollation_CICharacterGroupingsFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGlobalization_CCollation_CICharacterGroupingsFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Globalization_Collation_ICharacterGroupingsFactory[] = L"Windows.Globalization.Collation.ICharacterGroupingsFactory";
namespace ABI {
    namespace Windows {
        namespace Globalization {
            namespace Collation {
                /* [object, uuid("99EA9FD9-886D-4401-9F98-69C82D4C2F78"), exclusiveto, contract] */
                MIDL_INTERFACE("99EA9FD9-886D-4401-9F98-69C82D4C2F78")
                ICharacterGroupingsFactory : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE Create(
                        /* [in] */__RPC__in HSTRING language,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Globalization::Collation::ICharacterGroupings * * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ICharacterGroupingsFactory=_uuidof(ICharacterGroupingsFactory);
                
            } /* Windows */
        } /* Globalization */
    } /* Collation */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGlobalization_CCollation_CICharacterGroupingsFactory;
#endif /* !defined(____x_ABI_CWindows_CGlobalization_CCollation_CICharacterGroupingsFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.Globalization.Collation.CharacterGrouping
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Globalization.Collation.ICharacterGrouping ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Globalization_Collation_CharacterGrouping_DEFINED
#define RUNTIMECLASS_Windows_Globalization_Collation_CharacterGrouping_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Globalization_Collation_CharacterGrouping[] = L"Windows.Globalization.Collation.CharacterGrouping";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Globalization.Collation.CharacterGroupings
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Globalization.Collation.ICharacterGroupingsFactory interface starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Globalization.Collation.ICharacterGroupings ** Default Interface **
 *    Windows.Foundation.Collections.IVectorView_1_Windows.Globalization.Collation.CharacterGrouping
 *    Windows.Foundation.Collections.IIterable_1_Windows.Globalization.Collation.CharacterGrouping
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Globalization_Collation_CharacterGroupings_DEFINED
#define RUNTIMECLASS_Windows_Globalization_Collation_CharacterGroupings_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Globalization_Collation_CharacterGroupings[] = L"Windows.Globalization.Collation.CharacterGroupings";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000




#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CGlobalization_CCollation_CICharacterGrouping_FWD_DEFINED__
#define ____x_ABI_CWindows_CGlobalization_CCollation_CICharacterGrouping_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGlobalization_CCollation_CICharacterGrouping __x_ABI_CWindows_CGlobalization_CCollation_CICharacterGrouping;

#endif // ____x_ABI_CWindows_CGlobalization_CCollation_CICharacterGrouping_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGlobalization_CCollation_CICharacterGroupings_FWD_DEFINED__
#define ____x_ABI_CWindows_CGlobalization_CCollation_CICharacterGroupings_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGlobalization_CCollation_CICharacterGroupings __x_ABI_CWindows_CGlobalization_CCollation_CICharacterGroupings;

#endif // ____x_ABI_CWindows_CGlobalization_CCollation_CICharacterGroupings_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGlobalization_CCollation_CICharacterGroupingsFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CGlobalization_CCollation_CICharacterGroupingsFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGlobalization_CCollation_CICharacterGroupingsFactory __x_ABI_CWindows_CGlobalization_CCollation_CICharacterGroupingsFactory;

#endif // ____x_ABI_CWindows_CGlobalization_CCollation_CICharacterGroupingsFactory_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CGlobalization__CCollation__CCharacterGrouping_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CGlobalization__CCollation__CCharacterGrouping_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CGlobalization__CCollation__CCharacterGrouping __FIIterator_1_Windows__CGlobalization__CCollation__CCharacterGrouping;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CGlobalization__CCollation__CCharacterGrouping;

typedef struct __FIIterator_1_Windows__CGlobalization__CCollation__CCharacterGroupingVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CGlobalization__CCollation__CCharacterGrouping * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CGlobalization__CCollation__CCharacterGrouping * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CGlobalization__CCollation__CCharacterGrouping * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CGlobalization__CCollation__CCharacterGrouping * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CGlobalization__CCollation__CCharacterGrouping * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CGlobalization__CCollation__CCharacterGrouping * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CGlobalization__CCollation__CCharacterGrouping * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CGlobalization_CCollation_CICharacterGrouping * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CGlobalization__CCollation__CCharacterGrouping * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CGlobalization__CCollation__CCharacterGrouping * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CGlobalization__CCollation__CCharacterGrouping * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CGlobalization_CCollation_CICharacterGrouping * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CGlobalization__CCollation__CCharacterGroupingVtbl;

interface __FIIterator_1_Windows__CGlobalization__CCollation__CCharacterGrouping
{
    CONST_VTBL struct __FIIterator_1_Windows__CGlobalization__CCollation__CCharacterGroupingVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CGlobalization__CCollation__CCharacterGrouping_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CGlobalization__CCollation__CCharacterGrouping_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CGlobalization__CCollation__CCharacterGrouping_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CGlobalization__CCollation__CCharacterGrouping_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CGlobalization__CCollation__CCharacterGrouping_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CGlobalization__CCollation__CCharacterGrouping_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CGlobalization__CCollation__CCharacterGrouping_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CGlobalization__CCollation__CCharacterGrouping_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CGlobalization__CCollation__CCharacterGrouping_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CGlobalization__CCollation__CCharacterGrouping_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CGlobalization__CCollation__CCharacterGrouping_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CGlobalization__CCollation__CCharacterGrouping_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CGlobalization__CCollation__CCharacterGrouping_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CGlobalization__CCollation__CCharacterGrouping __FIIterable_1_Windows__CGlobalization__CCollation__CCharacterGrouping;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CGlobalization__CCollation__CCharacterGrouping;

typedef  struct __FIIterable_1_Windows__CGlobalization__CCollation__CCharacterGroupingVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CGlobalization__CCollation__CCharacterGrouping * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CGlobalization__CCollation__CCharacterGrouping * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CGlobalization__CCollation__CCharacterGrouping * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CGlobalization__CCollation__CCharacterGrouping * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CGlobalization__CCollation__CCharacterGrouping * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CGlobalization__CCollation__CCharacterGrouping * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CGlobalization__CCollation__CCharacterGrouping * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CGlobalization__CCollation__CCharacterGrouping **first);

    END_INTERFACE
} __FIIterable_1_Windows__CGlobalization__CCollation__CCharacterGroupingVtbl;

interface __FIIterable_1_Windows__CGlobalization__CCollation__CCharacterGrouping
{
    CONST_VTBL struct __FIIterable_1_Windows__CGlobalization__CCollation__CCharacterGroupingVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CGlobalization__CCollation__CCharacterGrouping_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CGlobalization__CCollation__CCharacterGrouping_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CGlobalization__CCollation__CCharacterGrouping_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CGlobalization__CCollation__CCharacterGrouping_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CGlobalization__CCollation__CCharacterGrouping_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CGlobalization__CCollation__CCharacterGrouping_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CGlobalization__CCollation__CCharacterGrouping_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CGlobalization__CCollation__CCharacterGrouping_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CGlobalization__CCollation__CCharacterGrouping_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CGlobalization__CCollation__CCharacterGrouping_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CGlobalization__CCollation__CCharacterGrouping __FIVectorView_1_Windows__CGlobalization__CCollation__CCharacterGrouping;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CGlobalization__CCollation__CCharacterGrouping;

typedef struct __FIVectorView_1_Windows__CGlobalization__CCollation__CCharacterGroupingVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CGlobalization__CCollation__CCharacterGrouping * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CGlobalization__CCollation__CCharacterGrouping * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CGlobalization__CCollation__CCharacterGrouping * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CGlobalization__CCollation__CCharacterGrouping * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CGlobalization__CCollation__CCharacterGrouping * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CGlobalization__CCollation__CCharacterGrouping * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CGlobalization__CCollation__CCharacterGrouping * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CGlobalization_CCollation_CICharacterGrouping * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CGlobalization__CCollation__CCharacterGrouping * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CGlobalization__CCollation__CCharacterGrouping * This,
            /* [in] */ __x_ABI_CWindows_CGlobalization_CCollation_CICharacterGrouping * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CGlobalization__CCollation__CCharacterGrouping * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CGlobalization_CCollation_CICharacterGrouping * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CGlobalization__CCollation__CCharacterGroupingVtbl;

interface __FIVectorView_1_Windows__CGlobalization__CCollation__CCharacterGrouping
{
    CONST_VTBL struct __FIVectorView_1_Windows__CGlobalization__CCollation__CCharacterGroupingVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CGlobalization__CCollation__CCharacterGrouping_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CGlobalization__CCollation__CCharacterGrouping_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CGlobalization__CCollation__CCharacterGrouping_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CGlobalization__CCollation__CCharacterGrouping_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CGlobalization__CCollation__CCharacterGrouping_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CGlobalization__CCollation__CCharacterGrouping_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CGlobalization__CCollation__CCharacterGrouping_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CGlobalization__CCollation__CCharacterGrouping_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CGlobalization__CCollation__CCharacterGrouping_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CGlobalization__CCollation__CCharacterGrouping_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CGlobalization__CCollation__CCharacterGrouping_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


















/*
 *
 * Interface Windows.Globalization.Collation.ICharacterGrouping
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Globalization.Collation.CharacterGrouping
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGlobalization_CCollation_CICharacterGrouping_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGlobalization_CCollation_CICharacterGrouping_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Globalization_Collation_ICharacterGrouping[] = L"Windows.Globalization.Collation.ICharacterGrouping";
/* [object, uuid("FAE761BB-805D-4BB0-95BB-C1F7C3E8EB8E"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CGlobalization_CCollation_CICharacterGroupingVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGlobalization_CCollation_CICharacterGrouping * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CCollation_CICharacterGrouping * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CCollation_CICharacterGrouping * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CCollation_CICharacterGrouping * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CCollation_CICharacterGrouping * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CCollation_CICharacterGrouping * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_First )(
        __x_ABI_CWindows_CGlobalization_CCollation_CICharacterGrouping * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Label )(
        __x_ABI_CWindows_CGlobalization_CCollation_CICharacterGrouping * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGlobalization_CCollation_CICharacterGroupingVtbl;

interface __x_ABI_CWindows_CGlobalization_CCollation_CICharacterGrouping
{
    CONST_VTBL struct __x_ABI_CWindows_CGlobalization_CCollation_CICharacterGroupingVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGlobalization_CCollation_CICharacterGrouping_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGlobalization_CCollation_CICharacterGrouping_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGlobalization_CCollation_CICharacterGrouping_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGlobalization_CCollation_CICharacterGrouping_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGlobalization_CCollation_CICharacterGrouping_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGlobalization_CCollation_CICharacterGrouping_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGlobalization_CCollation_CICharacterGrouping_get_First(This,value) \
    ( (This)->lpVtbl->get_First(This,value) )

#define __x_ABI_CWindows_CGlobalization_CCollation_CICharacterGrouping_get_Label(This,value) \
    ( (This)->lpVtbl->get_Label(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGlobalization_CCollation_CICharacterGrouping;
#endif /* !defined(____x_ABI_CWindows_CGlobalization_CCollation_CICharacterGrouping_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Globalization.Collation.ICharacterGroupings
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Globalization.Collation.CharacterGroupings
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.Collections.IVectorView_1_Windows.Globalization.Collation.CharacterGrouping
 *     Windows.Foundation.Collections.IIterable_1_Windows.Globalization.Collation.CharacterGrouping
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGlobalization_CCollation_CICharacterGroupings_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGlobalization_CCollation_CICharacterGroupings_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Globalization_Collation_ICharacterGroupings[] = L"Windows.Globalization.Collation.ICharacterGroupings";
/* [object, uuid("B8D20A75-D4CF-4055-80E5-CE169C226496"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CGlobalization_CCollation_CICharacterGroupingsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGlobalization_CCollation_CICharacterGroupings * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CCollation_CICharacterGroupings * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CCollation_CICharacterGroupings * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CCollation_CICharacterGroupings * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CCollation_CICharacterGroupings * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CCollation_CICharacterGroupings * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Lookup )(
        __x_ABI_CWindows_CGlobalization_CCollation_CICharacterGroupings * This,
        /* [in] */__RPC__in HSTRING text,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGlobalization_CCollation_CICharacterGroupingsVtbl;

interface __x_ABI_CWindows_CGlobalization_CCollation_CICharacterGroupings
{
    CONST_VTBL struct __x_ABI_CWindows_CGlobalization_CCollation_CICharacterGroupingsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGlobalization_CCollation_CICharacterGroupings_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGlobalization_CCollation_CICharacterGroupings_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGlobalization_CCollation_CICharacterGroupings_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGlobalization_CCollation_CICharacterGroupings_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGlobalization_CCollation_CICharacterGroupings_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGlobalization_CCollation_CICharacterGroupings_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGlobalization_CCollation_CICharacterGroupings_Lookup(This,text,result) \
    ( (This)->lpVtbl->Lookup(This,text,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGlobalization_CCollation_CICharacterGroupings;
#endif /* !defined(____x_ABI_CWindows_CGlobalization_CCollation_CICharacterGroupings_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Globalization.Collation.ICharacterGroupingsFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Globalization.Collation.CharacterGroupings
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CGlobalization_CCollation_CICharacterGroupingsFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGlobalization_CCollation_CICharacterGroupingsFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Globalization_Collation_ICharacterGroupingsFactory[] = L"Windows.Globalization.Collation.ICharacterGroupingsFactory";
/* [object, uuid("99EA9FD9-886D-4401-9F98-69C82D4C2F78"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CGlobalization_CCollation_CICharacterGroupingsFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGlobalization_CCollation_CICharacterGroupingsFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CCollation_CICharacterGroupingsFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CCollation_CICharacterGroupingsFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CCollation_CICharacterGroupingsFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CCollation_CICharacterGroupingsFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CCollation_CICharacterGroupingsFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CGlobalization_CCollation_CICharacterGroupingsFactory * This,
        /* [in] */__RPC__in HSTRING language,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CGlobalization_CCollation_CICharacterGroupings * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGlobalization_CCollation_CICharacterGroupingsFactoryVtbl;

interface __x_ABI_CWindows_CGlobalization_CCollation_CICharacterGroupingsFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CGlobalization_CCollation_CICharacterGroupingsFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGlobalization_CCollation_CICharacterGroupingsFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGlobalization_CCollation_CICharacterGroupingsFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGlobalization_CCollation_CICharacterGroupingsFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGlobalization_CCollation_CICharacterGroupingsFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGlobalization_CCollation_CICharacterGroupingsFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGlobalization_CCollation_CICharacterGroupingsFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGlobalization_CCollation_CICharacterGroupingsFactory_Create(This,language,result) \
    ( (This)->lpVtbl->Create(This,language,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGlobalization_CCollation_CICharacterGroupingsFactory;
#endif /* !defined(____x_ABI_CWindows_CGlobalization_CCollation_CICharacterGroupingsFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.Globalization.Collation.CharacterGrouping
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Globalization.Collation.ICharacterGrouping ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Globalization_Collation_CharacterGrouping_DEFINED
#define RUNTIMECLASS_Windows_Globalization_Collation_CharacterGrouping_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Globalization_Collation_CharacterGrouping[] = L"Windows.Globalization.Collation.CharacterGrouping";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Globalization.Collation.CharacterGroupings
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Globalization.Collation.ICharacterGroupingsFactory interface starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Globalization.Collation.ICharacterGroupings ** Default Interface **
 *    Windows.Foundation.Collections.IVectorView_1_Windows.Globalization.Collation.CharacterGrouping
 *    Windows.Foundation.Collections.IIterable_1_Windows.Globalization.Collation.CharacterGrouping
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Globalization_Collation_CharacterGroupings_DEFINED
#define RUNTIMECLASS_Windows_Globalization_Collation_CharacterGroupings_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Globalization_Collation_CharacterGroupings[] = L"Windows.Globalization.Collation.CharacterGroupings";
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
#endif // __windows2Eglobalization2Ecollation_p_h__

#endif // __windows2Eglobalization2Ecollation_h__
