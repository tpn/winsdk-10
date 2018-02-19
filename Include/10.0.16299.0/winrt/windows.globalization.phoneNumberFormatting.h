/* Header file automatically generated from windows.globalization.phonenumberformatting.idl */
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
#ifndef __windows2Eglobalization2Ephonenumberformatting_h__
#define __windows2Eglobalization2Ephonenumberformatting_h__
#ifndef __windows2Eglobalization2Ephonenumberformatting_p_h__
#define __windows2Eglobalization2Ephonenumberformatting_p_h__


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

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatter_FWD_DEFINED__
#define ____x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatter_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Globalization {
            namespace PhoneNumberFormatting {
                interface IPhoneNumberFormatter;
            } /* Windows */
        } /* Globalization */
    } /* PhoneNumberFormatting */} /* ABI */
#define __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatter ABI::Windows::Globalization::PhoneNumberFormatting::IPhoneNumberFormatter

#endif // ____x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatter_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatterStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatterStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Globalization {
            namespace PhoneNumberFormatting {
                interface IPhoneNumberFormatterStatics;
            } /* Windows */
        } /* Globalization */
    } /* PhoneNumberFormatting */} /* ABI */
#define __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatterStatics ABI::Windows::Globalization::PhoneNumberFormatting::IPhoneNumberFormatterStatics

#endif // ____x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatterStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfo_FWD_DEFINED__
#define ____x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfo_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Globalization {
            namespace PhoneNumberFormatting {
                interface IPhoneNumberInfo;
            } /* Windows */
        } /* Globalization */
    } /* PhoneNumberFormatting */} /* ABI */
#define __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfo ABI::Windows::Globalization::PhoneNumberFormatting::IPhoneNumberInfo

#endif // ____x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfo_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfoFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfoFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Globalization {
            namespace PhoneNumberFormatting {
                interface IPhoneNumberInfoFactory;
            } /* Windows */
        } /* Globalization */
    } /* PhoneNumberFormatting */} /* ABI */
#define __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfoFactory ABI::Windows::Globalization::PhoneNumberFormatting::IPhoneNumberInfoFactory

#endif // ____x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfoFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfoStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfoStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Globalization {
            namespace PhoneNumberFormatting {
                interface IPhoneNumberInfoStatics;
            } /* Windows */
        } /* Globalization */
    } /* PhoneNumberFormatting */} /* ABI */
#define __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfoStatics ABI::Windows::Globalization::PhoneNumberFormatting::IPhoneNumberInfoStatics

#endif // ____x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfoStatics_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CFoundation_CIStringable_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIStringable_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Foundation {
            interface IStringable;
        } /* Windows */
    } /* Foundation */} /* ABI */
#define __x_ABI_CWindows_CFoundation_CIStringable ABI::Windows::Foundation::IStringable

#endif // ____x_ABI_CWindows_CFoundation_CIStringable_FWD_DEFINED__





namespace ABI {
    namespace Windows {
        namespace Globalization {
            namespace PhoneNumberFormatting {
                
                typedef enum PhoneNumberFormat : int PhoneNumberFormat;
                
            } /* Windows */
        } /* Globalization */
    } /* PhoneNumberFormatting */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Globalization {
            namespace PhoneNumberFormatting {
                
                typedef enum PhoneNumberMatchResult : int PhoneNumberMatchResult;
                
            } /* Windows */
        } /* Globalization */
    } /* PhoneNumberFormatting */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Globalization {
            namespace PhoneNumberFormatting {
                
                typedef enum PhoneNumberParseResult : int PhoneNumberParseResult;
                
            } /* Windows */
        } /* Globalization */
    } /* PhoneNumberFormatting */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Globalization {
            namespace PhoneNumberFormatting {
                
                typedef enum PredictedPhoneNumberKind : int PredictedPhoneNumberKind;
                
            } /* Windows */
        } /* Globalization */
    } /* PhoneNumberFormatting */} /* ABI */






namespace ABI {
    namespace Windows {
        namespace Globalization {
            namespace PhoneNumberFormatting {
                class PhoneNumberFormatter;
            } /* Windows */
        } /* Globalization */
    } /* PhoneNumberFormatting */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Globalization {
            namespace PhoneNumberFormatting {
                class PhoneNumberInfo;
            } /* Windows */
        } /* Globalization */
    } /* PhoneNumberFormatting */} /* ABI */






/*
 *
 * Struct Windows.Globalization.PhoneNumberFormatting.PhoneNumberFormat
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
namespace ABI {
    namespace Windows {
        namespace Globalization {
            namespace PhoneNumberFormatting {
                /* [v1_enum, contract] */
                enum PhoneNumberFormat : int
                {
                    PhoneNumberFormat_E164 = 0,
                    PhoneNumberFormat_International = 1,
                    PhoneNumberFormat_National = 2,
                    PhoneNumberFormat_Rfc3966 = 3,
                };
                
            } /* Windows */
        } /* Globalization */
    } /* PhoneNumberFormatting */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Struct Windows.Globalization.PhoneNumberFormatting.PhoneNumberMatchResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
namespace ABI {
    namespace Windows {
        namespace Globalization {
            namespace PhoneNumberFormatting {
                /* [v1_enum, contract] */
                enum PhoneNumberMatchResult : int
                {
                    PhoneNumberMatchResult_NoMatch = 0,
                    PhoneNumberMatchResult_ShortNationalSignificantNumberMatch = 1,
                    PhoneNumberMatchResult_NationalSignificantNumberMatch = 2,
                    PhoneNumberMatchResult_ExactMatch = 3,
                };
                
            } /* Windows */
        } /* Globalization */
    } /* PhoneNumberFormatting */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Struct Windows.Globalization.PhoneNumberFormatting.PhoneNumberParseResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
namespace ABI {
    namespace Windows {
        namespace Globalization {
            namespace PhoneNumberFormatting {
                /* [v1_enum, contract] */
                enum PhoneNumberParseResult : int
                {
                    PhoneNumberParseResult_Valid = 0,
                    PhoneNumberParseResult_NotANumber = 1,
                    PhoneNumberParseResult_InvalidCountryCode = 2,
                    PhoneNumberParseResult_TooShort = 3,
                    PhoneNumberParseResult_TooLong = 4,
                };
                
            } /* Windows */
        } /* Globalization */
    } /* PhoneNumberFormatting */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Struct Windows.Globalization.PhoneNumberFormatting.PredictedPhoneNumberKind
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
namespace ABI {
    namespace Windows {
        namespace Globalization {
            namespace PhoneNumberFormatting {
                /* [v1_enum, contract] */
                enum PredictedPhoneNumberKind : int
                {
                    PredictedPhoneNumberKind_FixedLine = 0,
                    PredictedPhoneNumberKind_Mobile = 1,
                    PredictedPhoneNumberKind_FixedLineOrMobile = 2,
                    PredictedPhoneNumberKind_TollFree = 3,
                    PredictedPhoneNumberKind_PremiumRate = 4,
                    PredictedPhoneNumberKind_SharedCost = 5,
                    PredictedPhoneNumberKind_Voip = 6,
                    PredictedPhoneNumberKind_PersonalNumber = 7,
                    PredictedPhoneNumberKind_Pager = 8,
                    PredictedPhoneNumberKind_UniversalAccountNumber = 9,
                    PredictedPhoneNumberKind_Voicemail = 10,
                    PredictedPhoneNumberKind_Unknown = 11,
                };
                
            } /* Windows */
        } /* Globalization */
    } /* PhoneNumberFormatting */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Globalization.PhoneNumberFormatting.IPhoneNumberFormatter
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Globalization.PhoneNumberFormatting.PhoneNumberFormatter
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatter_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatter_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Globalization_PhoneNumberFormatting_IPhoneNumberFormatter[] = L"Windows.Globalization.PhoneNumberFormatting.IPhoneNumberFormatter";
namespace ABI {
    namespace Windows {
        namespace Globalization {
            namespace PhoneNumberFormatting {
                /* [object, uuid("1556B49E-BAD4-4B4A-900D-4407ADB7C981"), exclusiveto, contract] */
                MIDL_INTERFACE("1556B49E-BAD4-4B4A-900D-4407ADB7C981")
                IPhoneNumberFormatter : IInspectable
                {
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE Format(
                        /* [in] */__RPC__in_opt ABI::Windows::Globalization::PhoneNumberFormatting::IPhoneNumberInfo * number,
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * result
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE FormatWithOutputFormat(
                        /* [in] */__RPC__in_opt ABI::Windows::Globalization::PhoneNumberFormatting::IPhoneNumberInfo * number,
                        /* [in] */ABI::Windows::Globalization::PhoneNumberFormatting::PhoneNumberFormat numberFormat,
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE FormatPartialString(
                        /* [in] */__RPC__in HSTRING number,
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE FormatString(
                        /* [in] */__RPC__in HSTRING number,
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE FormatStringWithLeftToRightMarkers(
                        /* [in] */__RPC__in HSTRING number,
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IPhoneNumberFormatter=_uuidof(IPhoneNumberFormatter);
                
            } /* Windows */
        } /* Globalization */
    } /* PhoneNumberFormatting */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatter;
#endif /* !defined(____x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatter_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Globalization.PhoneNumberFormatting.IPhoneNumberFormatterStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Globalization.PhoneNumberFormatting.PhoneNumberFormatter
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatterStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatterStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Globalization_PhoneNumberFormatting_IPhoneNumberFormatterStatics[] = L"Windows.Globalization.PhoneNumberFormatting.IPhoneNumberFormatterStatics";
namespace ABI {
    namespace Windows {
        namespace Globalization {
            namespace PhoneNumberFormatting {
                /* [object, uuid("5CA6F931-84D9-414B-AB4E-A0552C878602"), exclusiveto, contract] */
                MIDL_INTERFACE("5CA6F931-84D9-414B-AB4E-A0552C878602")
                IPhoneNumberFormatterStatics : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE TryCreate(
                        /* [in] */__RPC__in HSTRING regionCode,
                        /* [out] */__RPC__deref_out_opt ABI::Windows::Globalization::PhoneNumberFormatting::IPhoneNumberFormatter * * phoneNumber
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetCountryCodeForRegion(
                        /* [in] */__RPC__in HSTRING regionCode,
                        /* [retval, out] */__RPC__out INT32 * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetNationalDirectDialingPrefixForRegion(
                        /* [in] */__RPC__in HSTRING regionCode,
                        /* [in] */boolean stripNonDigit,
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE WrapWithLeftToRightMarkers(
                        /* [in] */__RPC__in HSTRING number,
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IPhoneNumberFormatterStatics=_uuidof(IPhoneNumberFormatterStatics);
                
            } /* Windows */
        } /* Globalization */
    } /* PhoneNumberFormatting */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatterStatics;
#endif /* !defined(____x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatterStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Globalization.PhoneNumberFormatting.IPhoneNumberInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Globalization.PhoneNumberFormatting.PhoneNumberInfo
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfo_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfo_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Globalization_PhoneNumberFormatting_IPhoneNumberInfo[] = L"Windows.Globalization.PhoneNumberFormatting.IPhoneNumberInfo";
namespace ABI {
    namespace Windows {
        namespace Globalization {
            namespace PhoneNumberFormatting {
                /* [object, uuid("1C7CE4DD-C8B4-4EA3-9AEF-B342E2C5B417"), exclusiveto, contract] */
                MIDL_INTERFACE("1C7CE4DD-C8B4-4EA3-9AEF-B342E2C5B417")
                IPhoneNumberInfo : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CountryCode(
                        /* [retval, out] */__RPC__out INT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PhoneNumber(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetLengthOfGeographicalAreaCode(
                        /* [retval, out] */__RPC__out INT32 * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetNationalSignificantNumber(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetLengthOfNationalDestinationCode(
                        /* [retval, out] */__RPC__out INT32 * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE PredictNumberKind(
                        /* [retval, out] */__RPC__out ABI::Windows::Globalization::PhoneNumberFormatting::PredictedPhoneNumberKind * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetGeographicRegionCode(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CheckNumberMatch(
                        /* [in] */__RPC__in_opt ABI::Windows::Globalization::PhoneNumberFormatting::IPhoneNumberInfo * otherNumber,
                        /* [retval, out] */__RPC__out ABI::Windows::Globalization::PhoneNumberFormatting::PhoneNumberMatchResult * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IPhoneNumberInfo=_uuidof(IPhoneNumberInfo);
                
            } /* Windows */
        } /* Globalization */
    } /* PhoneNumberFormatting */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfo;
#endif /* !defined(____x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfo_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Globalization.PhoneNumberFormatting.IPhoneNumberInfoFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Globalization.PhoneNumberFormatting.PhoneNumberInfo
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfoFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfoFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Globalization_PhoneNumberFormatting_IPhoneNumberInfoFactory[] = L"Windows.Globalization.PhoneNumberFormatting.IPhoneNumberInfoFactory";
namespace ABI {
    namespace Windows {
        namespace Globalization {
            namespace PhoneNumberFormatting {
                /* [object, uuid("8202B964-ADAA-4CFF-8FCF-17E7516A28FF"), exclusiveto, contract] */
                MIDL_INTERFACE("8202B964-ADAA-4CFF-8FCF-17E7516A28FF")
                IPhoneNumberInfoFactory : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE Create(
                        /* [in] */__RPC__in HSTRING number,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Globalization::PhoneNumberFormatting::IPhoneNumberInfo * * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IPhoneNumberInfoFactory=_uuidof(IPhoneNumberInfoFactory);
                
            } /* Windows */
        } /* Globalization */
    } /* PhoneNumberFormatting */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfoFactory;
#endif /* !defined(____x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfoFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Globalization.PhoneNumberFormatting.IPhoneNumberInfoStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Globalization.PhoneNumberFormatting.PhoneNumberInfo
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfoStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfoStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Globalization_PhoneNumberFormatting_IPhoneNumberInfoStatics[] = L"Windows.Globalization.PhoneNumberFormatting.IPhoneNumberInfoStatics";
namespace ABI {
    namespace Windows {
        namespace Globalization {
            namespace PhoneNumberFormatting {
                /* [object, uuid("5B3F4F6A-86A9-40E9-8649-6D61161928D4"), exclusiveto, contract] */
                MIDL_INTERFACE("5B3F4F6A-86A9-40E9-8649-6D61161928D4")
                IPhoneNumberInfoStatics : IInspectable
                {
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE TryParse(
                        /* [in] */__RPC__in HSTRING input,
                        /* [out] */__RPC__deref_out_opt ABI::Windows::Globalization::PhoneNumberFormatting::IPhoneNumberInfo * * phoneNumber,
                        /* [retval, out] */__RPC__out ABI::Windows::Globalization::PhoneNumberFormatting::PhoneNumberParseResult * result
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE TryParseWithRegion(
                        /* [in] */__RPC__in HSTRING input,
                        /* [in] */__RPC__in HSTRING regionCode,
                        /* [out] */__RPC__deref_out_opt ABI::Windows::Globalization::PhoneNumberFormatting::IPhoneNumberInfo * * phoneNumber,
                        /* [retval, out] */__RPC__out ABI::Windows::Globalization::PhoneNumberFormatting::PhoneNumberParseResult * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IPhoneNumberInfoStatics=_uuidof(IPhoneNumberInfoStatics);
                
            } /* Windows */
        } /* Globalization */
    } /* PhoneNumberFormatting */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfoStatics;
#endif /* !defined(____x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfoStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.Globalization.PhoneNumberFormatting.PhoneNumberFormatter
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Globalization.PhoneNumberFormatting.IPhoneNumberFormatterStatics interface starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Globalization.PhoneNumberFormatting.IPhoneNumberFormatter ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_Globalization_PhoneNumberFormatting_PhoneNumberFormatter_DEFINED
#define RUNTIMECLASS_Windows_Globalization_PhoneNumberFormatting_PhoneNumberFormatter_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Globalization_PhoneNumberFormatting_PhoneNumberFormatter[] = L"Windows.Globalization.PhoneNumberFormatting.PhoneNumberFormatter";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.Globalization.PhoneNumberFormatting.PhoneNumberInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Globalization.PhoneNumberFormatting.IPhoneNumberInfoFactory interface starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Globalization.PhoneNumberFormatting.IPhoneNumberInfoStatics interface starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Globalization.PhoneNumberFormatting.IPhoneNumberInfo ** Default Interface **
 *    Windows.Foundation.IStringable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_Globalization_PhoneNumberFormatting_PhoneNumberInfo_DEFINED
#define RUNTIMECLASS_Windows_Globalization_PhoneNumberFormatting_PhoneNumberInfo_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Globalization_PhoneNumberFormatting_PhoneNumberInfo[] = L"Windows.Globalization.PhoneNumberFormatting.PhoneNumberInfo";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000




#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatter_FWD_DEFINED__
#define ____x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatter_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatter __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatter;

#endif // ____x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatter_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatterStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatterStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatterStatics __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatterStatics;

#endif // ____x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatterStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfo_FWD_DEFINED__
#define ____x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfo_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfo __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfo;

#endif // ____x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfo_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfoFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfoFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfoFactory __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfoFactory;

#endif // ____x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfoFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfoStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfoStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfoStatics __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfoStatics;

#endif // ____x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfoStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CFoundation_CIStringable_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIStringable_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIStringable __x_ABI_CWindows_CFoundation_CIStringable;

#endif // ____x_ABI_CWindows_CFoundation_CIStringable_FWD_DEFINED__






typedef enum __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CPhoneNumberFormat __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CPhoneNumberFormat;


typedef enum __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CPhoneNumberMatchResult __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CPhoneNumberMatchResult;


typedef enum __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CPhoneNumberParseResult __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CPhoneNumberParseResult;


typedef enum __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CPredictedPhoneNumberKind __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CPredictedPhoneNumberKind;












/*
 *
 * Struct Windows.Globalization.PhoneNumberFormatting.PhoneNumberFormat
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CPhoneNumberFormat
{
    PhoneNumberFormat_E164 = 0,
    PhoneNumberFormat_International = 1,
    PhoneNumberFormat_National = 2,
    PhoneNumberFormat_Rfc3966 = 3,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Struct Windows.Globalization.PhoneNumberFormatting.PhoneNumberMatchResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CPhoneNumberMatchResult
{
    PhoneNumberMatchResult_NoMatch = 0,
    PhoneNumberMatchResult_ShortNationalSignificantNumberMatch = 1,
    PhoneNumberMatchResult_NationalSignificantNumberMatch = 2,
    PhoneNumberMatchResult_ExactMatch = 3,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Struct Windows.Globalization.PhoneNumberFormatting.PhoneNumberParseResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CPhoneNumberParseResult
{
    PhoneNumberParseResult_Valid = 0,
    PhoneNumberParseResult_NotANumber = 1,
    PhoneNumberParseResult_InvalidCountryCode = 2,
    PhoneNumberParseResult_TooShort = 3,
    PhoneNumberParseResult_TooLong = 4,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Struct Windows.Globalization.PhoneNumberFormatting.PredictedPhoneNumberKind
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CPredictedPhoneNumberKind
{
    PredictedPhoneNumberKind_FixedLine = 0,
    PredictedPhoneNumberKind_Mobile = 1,
    PredictedPhoneNumberKind_FixedLineOrMobile = 2,
    PredictedPhoneNumberKind_TollFree = 3,
    PredictedPhoneNumberKind_PremiumRate = 4,
    PredictedPhoneNumberKind_SharedCost = 5,
    PredictedPhoneNumberKind_Voip = 6,
    PredictedPhoneNumberKind_PersonalNumber = 7,
    PredictedPhoneNumberKind_Pager = 8,
    PredictedPhoneNumberKind_UniversalAccountNumber = 9,
    PredictedPhoneNumberKind_Voicemail = 10,
    PredictedPhoneNumberKind_Unknown = 11,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Globalization.PhoneNumberFormatting.IPhoneNumberFormatter
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Globalization.PhoneNumberFormatting.PhoneNumberFormatter
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatter_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatter_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Globalization_PhoneNumberFormatting_IPhoneNumberFormatter[] = L"Windows.Globalization.PhoneNumberFormatting.IPhoneNumberFormatter";
/* [object, uuid("1556B49E-BAD4-4B4A-900D-4407ADB7C981"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatterVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatter * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatter * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatter * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatter * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatter * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatter * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [overload] */HRESULT ( STDMETHODCALLTYPE *Format )(
        __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatter * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfo * number,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * result
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *FormatWithOutputFormat )(
        __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatter * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfo * number,
        /* [in] */__x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CPhoneNumberFormat numberFormat,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * result
        );
    HRESULT ( STDMETHODCALLTYPE *FormatPartialString )(
        __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatter * This,
        /* [in] */__RPC__in HSTRING number,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * result
        );
    HRESULT ( STDMETHODCALLTYPE *FormatString )(
        __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatter * This,
        /* [in] */__RPC__in HSTRING number,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * result
        );
    HRESULT ( STDMETHODCALLTYPE *FormatStringWithLeftToRightMarkers )(
        __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatter * This,
        /* [in] */__RPC__in HSTRING number,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatterVtbl;

interface __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatter
{
    CONST_VTBL struct __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatterVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatter_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatter_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatter_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatter_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatter_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatter_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatter_Format(This,number,result) \
    ( (This)->lpVtbl->Format(This,number,result) )

#define __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatter_FormatWithOutputFormat(This,number,numberFormat,result) \
    ( (This)->lpVtbl->FormatWithOutputFormat(This,number,numberFormat,result) )

#define __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatter_FormatPartialString(This,number,result) \
    ( (This)->lpVtbl->FormatPartialString(This,number,result) )

#define __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatter_FormatString(This,number,result) \
    ( (This)->lpVtbl->FormatString(This,number,result) )

#define __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatter_FormatStringWithLeftToRightMarkers(This,number,result) \
    ( (This)->lpVtbl->FormatStringWithLeftToRightMarkers(This,number,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatter;
#endif /* !defined(____x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatter_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Globalization.PhoneNumberFormatting.IPhoneNumberFormatterStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Globalization.PhoneNumberFormatting.PhoneNumberFormatter
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatterStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatterStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Globalization_PhoneNumberFormatting_IPhoneNumberFormatterStatics[] = L"Windows.Globalization.PhoneNumberFormatting.IPhoneNumberFormatterStatics";
/* [object, uuid("5CA6F931-84D9-414B-AB4E-A0552C878602"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatterStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatterStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatterStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatterStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatterStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatterStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatterStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *TryCreate )(
        __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatterStatics * This,
        /* [in] */__RPC__in HSTRING regionCode,
        /* [out] */__RPC__deref_out_opt __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatter * * phoneNumber
        );
    HRESULT ( STDMETHODCALLTYPE *GetCountryCodeForRegion )(
        __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatterStatics * This,
        /* [in] */__RPC__in HSTRING regionCode,
        /* [retval, out] */__RPC__out INT32 * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetNationalDirectDialingPrefixForRegion )(
        __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatterStatics * This,
        /* [in] */__RPC__in HSTRING regionCode,
        /* [in] */boolean stripNonDigit,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * result
        );
    HRESULT ( STDMETHODCALLTYPE *WrapWithLeftToRightMarkers )(
        __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatterStatics * This,
        /* [in] */__RPC__in HSTRING number,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatterStaticsVtbl;

interface __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatterStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatterStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatterStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatterStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatterStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatterStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatterStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatterStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatterStatics_TryCreate(This,regionCode,phoneNumber) \
    ( (This)->lpVtbl->TryCreate(This,regionCode,phoneNumber) )

#define __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatterStatics_GetCountryCodeForRegion(This,regionCode,result) \
    ( (This)->lpVtbl->GetCountryCodeForRegion(This,regionCode,result) )

#define __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatterStatics_GetNationalDirectDialingPrefixForRegion(This,regionCode,stripNonDigit,result) \
    ( (This)->lpVtbl->GetNationalDirectDialingPrefixForRegion(This,regionCode,stripNonDigit,result) )

#define __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatterStatics_WrapWithLeftToRightMarkers(This,number,result) \
    ( (This)->lpVtbl->WrapWithLeftToRightMarkers(This,number,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatterStatics;
#endif /* !defined(____x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatterStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Globalization.PhoneNumberFormatting.IPhoneNumberInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Globalization.PhoneNumberFormatting.PhoneNumberInfo
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfo_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfo_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Globalization_PhoneNumberFormatting_IPhoneNumberInfo[] = L"Windows.Globalization.PhoneNumberFormatting.IPhoneNumberInfo";
/* [object, uuid("1C7CE4DD-C8B4-4EA3-9AEF-B342E2C5B417"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfo * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfo * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfo * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfo * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfo * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfo * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CountryCode )(
        __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfo * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PhoneNumber )(
        __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfo * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetLengthOfGeographicalAreaCode )(
        __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfo * This,
        /* [retval, out] */__RPC__out INT32 * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetNationalSignificantNumber )(
        __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfo * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetLengthOfNationalDestinationCode )(
        __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfo * This,
        /* [retval, out] */__RPC__out INT32 * result
        );
    HRESULT ( STDMETHODCALLTYPE *PredictNumberKind )(
        __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfo * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CPredictedPhoneNumberKind * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetGeographicRegionCode )(
        __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfo * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * result
        );
    HRESULT ( STDMETHODCALLTYPE *CheckNumberMatch )(
        __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfo * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfo * otherNumber,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CPhoneNumberMatchResult * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfoVtbl;

interface __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfo
{
    CONST_VTBL struct __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfoVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfo_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfo_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfo_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfo_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfo_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfo_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfo_get_CountryCode(This,value) \
    ( (This)->lpVtbl->get_CountryCode(This,value) )

#define __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfo_get_PhoneNumber(This,value) \
    ( (This)->lpVtbl->get_PhoneNumber(This,value) )

#define __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfo_GetLengthOfGeographicalAreaCode(This,result) \
    ( (This)->lpVtbl->GetLengthOfGeographicalAreaCode(This,result) )

#define __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfo_GetNationalSignificantNumber(This,result) \
    ( (This)->lpVtbl->GetNationalSignificantNumber(This,result) )

#define __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfo_GetLengthOfNationalDestinationCode(This,result) \
    ( (This)->lpVtbl->GetLengthOfNationalDestinationCode(This,result) )

#define __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfo_PredictNumberKind(This,result) \
    ( (This)->lpVtbl->PredictNumberKind(This,result) )

#define __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfo_GetGeographicRegionCode(This,result) \
    ( (This)->lpVtbl->GetGeographicRegionCode(This,result) )

#define __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfo_CheckNumberMatch(This,otherNumber,result) \
    ( (This)->lpVtbl->CheckNumberMatch(This,otherNumber,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfo;
#endif /* !defined(____x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfo_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Globalization.PhoneNumberFormatting.IPhoneNumberInfoFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Globalization.PhoneNumberFormatting.PhoneNumberInfo
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfoFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfoFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Globalization_PhoneNumberFormatting_IPhoneNumberInfoFactory[] = L"Windows.Globalization.PhoneNumberFormatting.IPhoneNumberInfoFactory";
/* [object, uuid("8202B964-ADAA-4CFF-8FCF-17E7516A28FF"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfoFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfoFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfoFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfoFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfoFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfoFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfoFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfoFactory * This,
        /* [in] */__RPC__in HSTRING number,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfo * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfoFactoryVtbl;

interface __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfoFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfoFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfoFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfoFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfoFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfoFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfoFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfoFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfoFactory_Create(This,number,result) \
    ( (This)->lpVtbl->Create(This,number,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfoFactory;
#endif /* !defined(____x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfoFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Globalization.PhoneNumberFormatting.IPhoneNumberInfoStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Globalization.PhoneNumberFormatting.PhoneNumberInfo
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfoStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfoStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Globalization_PhoneNumberFormatting_IPhoneNumberInfoStatics[] = L"Windows.Globalization.PhoneNumberFormatting.IPhoneNumberInfoStatics";
/* [object, uuid("5B3F4F6A-86A9-40E9-8649-6D61161928D4"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfoStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfoStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfoStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfoStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfoStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfoStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfoStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [overload] */HRESULT ( STDMETHODCALLTYPE *TryParse )(
        __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfoStatics * This,
        /* [in] */__RPC__in HSTRING input,
        /* [out] */__RPC__deref_out_opt __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfo * * phoneNumber,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CPhoneNumberParseResult * result
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *TryParseWithRegion )(
        __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfoStatics * This,
        /* [in] */__RPC__in HSTRING input,
        /* [in] */__RPC__in HSTRING regionCode,
        /* [out] */__RPC__deref_out_opt __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfo * * phoneNumber,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CPhoneNumberParseResult * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfoStaticsVtbl;

interface __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfoStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfoStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfoStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfoStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfoStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfoStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfoStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfoStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfoStatics_TryParse(This,input,phoneNumber,result) \
    ( (This)->lpVtbl->TryParse(This,input,phoneNumber,result) )

#define __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfoStatics_TryParseWithRegion(This,input,regionCode,phoneNumber,result) \
    ( (This)->lpVtbl->TryParseWithRegion(This,input,regionCode,phoneNumber,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfoStatics;
#endif /* !defined(____x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfoStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.Globalization.PhoneNumberFormatting.PhoneNumberFormatter
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Globalization.PhoneNumberFormatting.IPhoneNumberFormatterStatics interface starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Globalization.PhoneNumberFormatting.IPhoneNumberFormatter ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_Globalization_PhoneNumberFormatting_PhoneNumberFormatter_DEFINED
#define RUNTIMECLASS_Windows_Globalization_PhoneNumberFormatting_PhoneNumberFormatter_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Globalization_PhoneNumberFormatting_PhoneNumberFormatter[] = L"Windows.Globalization.PhoneNumberFormatting.PhoneNumberFormatter";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.Globalization.PhoneNumberFormatting.PhoneNumberInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Globalization.PhoneNumberFormatting.IPhoneNumberInfoFactory interface starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Globalization.PhoneNumberFormatting.IPhoneNumberInfoStatics interface starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Globalization.PhoneNumberFormatting.IPhoneNumberInfo ** Default Interface **
 *    Windows.Foundation.IStringable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_Globalization_PhoneNumberFormatting_PhoneNumberInfo_DEFINED
#define RUNTIMECLASS_Windows_Globalization_PhoneNumberFormatting_PhoneNumberInfo_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Globalization_PhoneNumberFormatting_PhoneNumberInfo[] = L"Windows.Globalization.PhoneNumberFormatting.PhoneNumberInfo";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000




#endif // defined(__cplusplus)
#pragma pop_macro("MIDL_CONST_ID")
// Restore the original value of the 'DEPRECATED' macro
#pragma pop_macro("DEPRECATED")

#ifdef __clang__
#pragma clang diagnostic pop // deprecated-declarations
#else
#pragma warning(pop)
#endif
#endif // __windows2Eglobalization2Ephonenumberformatting_p_h__

#endif // __windows2Eglobalization2Ephonenumberformatting_h__
