/*++

Copyright (c) Microsoft Corporation. All rights reserved.

Module Name:

    miniport.h

Abstract:

    Type definitions for miniport drivers.

Revision History:

--*/

#ifndef _MINIPORT_
#define _MINIPORT_

#include "stddef.h"

#define ASSERT( exp )

#ifndef FAR
#define FAR
#endif

#if defined(_MSC_VER)
#if (_MSC_VER >= 1200)
#pragma warning(push)
#pragma warning(disable:4201) // nameless struct/union
#pragma warning(disable:4214) // bit field other than int
#pragma warning(disable:4668) // #if not_defined treated as #if 0
#endif
#endif

// begin_ntoshvp

#ifndef IN
#define IN
#endif

#ifndef OUT
#define OUT
#endif

#ifndef OPTIONAL
#define OPTIONAL
#endif

#ifndef NOTHING
#define NOTHING
#endif

#ifndef CRITICAL
#define CRITICAL
#endif

#ifndef ANYSIZE_ARRAY
#define ANYSIZE_ARRAY 1       // winnt
#endif

// begin_winnt

//
// For compilers that don't support nameless unions/structs
//
#ifndef DUMMYUNIONNAME
#if defined(NONAMELESSUNION) || !defined(_MSC_EXTENSIONS)
#define DUMMYUNIONNAME   u
#define DUMMYUNIONNAME2  u2
#define DUMMYUNIONNAME3  u3
#define DUMMYUNIONNAME4  u4
#define DUMMYUNIONNAME5  u5
#define DUMMYUNIONNAME6  u6
#define DUMMYUNIONNAME7  u7
#define DUMMYUNIONNAME8  u8
#define DUMMYUNIONNAME9  u9
#else
#define DUMMYUNIONNAME
#define DUMMYUNIONNAME2
#define DUMMYUNIONNAME3
#define DUMMYUNIONNAME4
#define DUMMYUNIONNAME5
#define DUMMYUNIONNAME6
#define DUMMYUNIONNAME7
#define DUMMYUNIONNAME8
#define DUMMYUNIONNAME9
#endif
#endif // DUMMYUNIONNAME

#ifndef DUMMYSTRUCTNAME
#if defined(NONAMELESSUNION) || !defined(_MSC_EXTENSIONS)
#define DUMMYSTRUCTNAME  s
#define DUMMYSTRUCTNAME2 s2
#define DUMMYSTRUCTNAME3 s3
#define DUMMYSTRUCTNAME4 s4
#define DUMMYSTRUCTNAME5 s5
#define DUMMYSTRUCTNAME6 s6
#else
#define DUMMYSTRUCTNAME
#define DUMMYSTRUCTNAME2
#define DUMMYSTRUCTNAME3
#define DUMMYSTRUCTNAME4
#define DUMMYSTRUCTNAME5
#define DUMMYSTRUCTNAME6
#endif
#endif // DUMMYSTRUCTNAME

// end_ntoshvp

#include <specstrings.h>
#include <kernelspecs.h>

#if defined(STRICT_GS_ENABLED)
#pragma strict_gs_check(push, on)
#endif

// begin_ntoshvp

#if defined(_M_MRX000) && !(defined(MIDL_PASS) || defined(RC_INVOKED)) && defined(ENABLE_RESTRICTED)
#define RESTRICTED_POINTER __restrict
#else
#define RESTRICTED_POINTER
#endif

#if defined(_M_MRX000) || defined(_M_ALPHA) || defined(_M_PPC) || defined(_M_IA64) || defined(_M_AMD64) || defined(_M_ARM) || defined(_M_ARM64)
#define ALIGNMENT_MACHINE
#define UNALIGNED __unaligned
#if defined(_WIN64)
#define UNALIGNED64 __unaligned
#else
#define UNALIGNED64
#endif
#else
#undef ALIGNMENT_MACHINE
#define UNALIGNED
#define UNALIGNED64
#endif

// end_ntoshvp


#if defined(_WIN64) || defined(_M_ALPHA)
#define MAX_NATURAL_ALIGNMENT sizeof(ULONGLONG)
#define MEMORY_ALLOCATION_ALIGNMENT 16
#else
#define MAX_NATURAL_ALIGNMENT sizeof(ULONG)
#define MEMORY_ALLOCATION_ALIGNMENT 8
#endif

//
// TYPE_ALIGNMENT will return the alignment requirements of a given type for
// the current platform.
//

#ifdef __cplusplus
#if _MSC_VER >= 1300
#define TYPE_ALIGNMENT( t ) __alignof(t)
#endif
#else
#define TYPE_ALIGNMENT( t ) \
    FIELD_OFFSET( struct { char x; t test; }, test )
#endif

//
// Note: RC_INVOKED is checked in PROBE_ALIGNMENT to maintain compatibility with previous
//       versions of the SDK which did not block inclusion in an .RC file.
//

#if defined(_AMD64_) || defined(_X86_)
#define PROBE_ALIGNMENT( _s ) TYPE_ALIGNMENT( ULONG )
#elif defined(_IA64_) || defined(_ARM_) || defined(_ARM64_)

//
// TODO: WOWXX - Unblock ARM. Make all alignment checks ULONG for now.
//

#define PROBE_ALIGNMENT( _s ) TYPE_ALIGNMENT( ULONG )
#elif !defined(RC_INVOKED)
#error "No Target Architecture"
#endif

//
// Define PROBE_ALIGNMENT32 to be the same as PROBE_ALIGNMENT on x86, so that
// code hosting x86 under WoW can handle x86's maximum guaranteed alignment.
//

#define PROBE_ALIGNMENT32( _s ) TYPE_ALIGNMENT( ULONG )

// begin_ntoshvp

//
// C_ASSERT() can be used to perform many compile-time assertions:
//            type sizes, field offsets, etc.
//
// An assertion failure results in error C2118: negative subscript.
//

#ifndef SORTPP_PASS
#define C_ASSERT(e) typedef char __C_ASSERT__[(e)?1:-1]
#else
#define C_ASSERT(e) /* nothing */
#endif

#include <basetsd.h>

// end_winnt

#ifndef CONST
#define CONST               const
#endif

// begin_winnt

#ifndef DECLSPEC_IMPORT
#if (defined(_M_IX86) || defined(_M_IA64) || defined(_M_AMD64) || defined(_M_ARM) || defined(_M_ARM64)) && !defined(MIDL_PASS)
#define DECLSPEC_IMPORT __declspec(dllimport)
#else
#define DECLSPEC_IMPORT
#endif
#endif

#ifndef DECLSPEC_NORETURN
#if (_MSC_VER >= 1200) && !defined(MIDL_PASS)
#define DECLSPEC_NORETURN   __declspec(noreturn)
#else
#define DECLSPEC_NORETURN
#endif
#endif

#ifndef DECLSPEC_NOTHROW
#if (_MSC_VER >= 1200) && !defined(MIDL_PASS)
#define DECLSPEC_NOTHROW   __declspec(nothrow)
#else
#define DECLSPEC_NOTHROW
#endif
#endif

#ifndef DECLSPEC_ALIGN
#if (_MSC_VER >= 1300) && !defined(MIDL_PASS)
#define DECLSPEC_ALIGN(x)   __declspec(align(x))
#else
#define DECLSPEC_ALIGN(x)
#endif
#endif

// end_ntoshvp

#ifndef SYSTEM_CACHE_ALIGNMENT_SIZE
#if defined(_AMD64_) || defined(_X86_)
#define SYSTEM_CACHE_ALIGNMENT_SIZE 64
#else
#define SYSTEM_CACHE_ALIGNMENT_SIZE 128
#endif
#endif

#ifndef DECLSPEC_CACHEALIGN
#define DECLSPEC_CACHEALIGN DECLSPEC_ALIGN(SYSTEM_CACHE_ALIGNMENT_SIZE)
#endif

#ifndef DECLSPEC_UUID
#if (_MSC_VER >= 1100) && defined (__cplusplus)
#define DECLSPEC_UUID(x)    __declspec(uuid(x))
#else
#define DECLSPEC_UUID(x)
#endif
#endif

#ifndef DECLSPEC_NOVTABLE
#if (_MSC_VER >= 1100) && defined(__cplusplus)
#define DECLSPEC_NOVTABLE   __declspec(novtable)
#else
#define DECLSPEC_NOVTABLE
#endif
#endif

#ifndef DECLSPEC_SELECTANY
#if (_MSC_VER >= 1100)
#define DECLSPEC_SELECTANY  __declspec(selectany)
#else
#define DECLSPEC_SELECTANY
#endif
#endif

#ifndef NOP_FUNCTION
#if (_MSC_VER >= 1210)
#define NOP_FUNCTION __noop
#else
#define NOP_FUNCTION (void)0
#endif
#endif

#ifndef DECLSPEC_ADDRSAFE
#if (_MSC_VER >= 1200) && (defined(_M_ALPHA) || defined(_M_AXP64))
#define DECLSPEC_ADDRSAFE  __declspec(address_safe)
#else
#define DECLSPEC_ADDRSAFE
#endif
#endif

#ifndef DECLSPEC_SAFEBUFFERS
#if (_MSC_VER >= 1600)
#define DECLSPEC_SAFEBUFFERS  __declspec(safebuffers)
#else
#define DECLSPEC_SAFEBUFFERS
#endif
#endif

#ifndef DECLSPEC_NOINLINE
#if (_MSC_VER >= 1300)
#define DECLSPEC_NOINLINE  __declspec(noinline)
#else
#define DECLSPEC_NOINLINE
#endif
#endif

#ifndef DECLSPEC_SAFEBUFFERS
#if (_MSC_VER >= 1300)
#define DECLSPEC_SAFEBUFFERS  __declspec(safebuffers)
#else
#define DECLSPEC_SAFEBUFFERS
#endif
#endif


#ifndef DECLSPEC_GUARDNOCF
#if (_MSC_FULL_VER >= 170065501) || defined(_D1VERSIONLKG171_)
#define DECLSPEC_GUARDNOCF  __declspec(guard(nocf))
#else
#define DECLSPEC_GUARDNOCF
#endif
#endif

#ifndef DECLSPEC_GUARD_SUPPRESS
#if (_MSC_FULL_VER >= 181040116) || defined(_D1VERSIONLKG171_)
#define DECLSPEC_GUARD_SUPPRESS  __declspec(guard(suppress))
#else
#define DECLSPEC_GUARD_SUPPRESS
#endif
#endif

#ifndef DECLSPEC_CHPE_GUEST
#if _M_HYBRID
#define DECLSPEC_CHPE_GUEST  __declspec(hybrid_guest)
#else
#define DECLSPEC_CHPE_GUEST
#endif
#endif

#ifndef DECLSPEC_CHPE_PATCHABLE
#if _M_HYBRID
#define DECLSPEC_CHPE_PATCHABLE  __declspec(hybrid_patchable)
#else
#define DECLSPEC_CHPE_PATCHABLE
#endif
#endif

// begin_ntoshvp

#ifndef FORCEINLINE
#if (_MSC_VER >= 1200)
#define FORCEINLINE __forceinline
#else
#define FORCEINLINE __inline
#endif
#endif

//
// CFORCEINLINE: __forceinline required for correctness.
//

#define CFORCEINLINE FORCEINLINE

//
// STKFORCEINLINE: __forceinline required for correctness due to counting stack
//                 frames for a stack trace being captured.
//

#define STKFORCEINLINE FORCEINLINE

//
// PFORCEINLINE: __forceinline required for performance.
//

#ifndef PFORCEINLINE
#define PFORCEINLINE FORCEINLINE
#endif

// end_ntoshvp

#ifndef DECLSPEC_DEPRECATED
#if (_MSC_VER >= 1300) && !defined(MIDL_PASS)
#define DECLSPEC_DEPRECATED   __declspec(deprecated)
#define DEPRECATE_SUPPORTED
#else
#define DECLSPEC_DEPRECATED
#undef  DEPRECATE_SUPPORTED
#endif
#endif

#ifdef DEPRECATE_DDK_FUNCTIONS
#ifdef _NTDDK_
#define DECLSPEC_DEPRECATED_DDK DECLSPEC_DEPRECATED
#ifdef DEPRECATE_SUPPORTED
#define PRAGMA_DEPRECATED_DDK 1
#endif
#else
#define DECLSPEC_DEPRECATED_DDK
#define PRAGMA_DEPRECATED_DDK 1
#endif
#else
#define DECLSPEC_DEPRECATED_DDK
#define PRAGMA_DEPRECATED_DDK 0
#endif

// begin_ntoshvp

//
// Void
//

typedef void *PVOID;
typedef void * POINTER_64 PVOID64;

// end_winnt
// begin_wudfwdm

#ifndef _MANAGED
#if defined(_M_IX86)
#define FASTCALL __fastcall
#else
#define FASTCALL
#endif
#else
#define FASTCALL NTAPI
#endif

// end_wudfwdm

//
// Basics
//

#ifndef VOID
#define VOID void
typedef char CHAR;
typedef short SHORT;
typedef long LONG;
#if !defined(MIDL_PASS)
typedef int INT;
#endif
#endif

//
// UNICODE (Wide Character) types
//

#ifndef _MAC
typedef wchar_t WCHAR;    // wc,   16-bit UNICODE character
#else
// some Macintosh compilers don't define wchar_t in a convenient location, or define it as a char
typedef unsigned short WCHAR;    // wc,   16-bit UNICODE character
#endif

typedef WCHAR *PWCHAR, *LPWCH, *PWCH;
typedef CONST WCHAR *LPCWCH, *PCWCH;

typedef _Null_terminated_ WCHAR *NWPSTR, *LPWSTR, *PWSTR;
typedef _Null_terminated_ PWSTR *PZPWSTR;
typedef _Null_terminated_ CONST PWSTR *PCZPWSTR;
typedef _Null_terminated_ WCHAR UNALIGNED *LPUWSTR, *PUWSTR;
typedef _Null_terminated_ CONST WCHAR *LPCWSTR, *PCWSTR;
typedef _Null_terminated_ PCWSTR *PZPCWSTR;
typedef _Null_terminated_ CONST PCWSTR *PCZPCWSTR;
typedef _Null_terminated_ CONST WCHAR UNALIGNED *LPCUWSTR, *PCUWSTR;

typedef _NullNull_terminated_ WCHAR *PZZWSTR;
typedef _NullNull_terminated_ CONST WCHAR *PCZZWSTR;
typedef _NullNull_terminated_ WCHAR UNALIGNED *PUZZWSTR;
typedef _NullNull_terminated_ CONST WCHAR UNALIGNED *PCUZZWSTR;

typedef  WCHAR *PNZWCH;
typedef  CONST WCHAR *PCNZWCH;
typedef  WCHAR UNALIGNED *PUNZWCH;
typedef  CONST WCHAR UNALIGNED *PCUNZWCH;

#if _WIN32_WINNT >= 0x0600 || (defined(__cplusplus) && defined(WINDOWS_ENABLE_CPLUSPLUS))

typedef CONST WCHAR *LPCWCHAR, *PCWCHAR;
typedef CONST WCHAR UNALIGNED *LPCUWCHAR, *PCUWCHAR;

//
//  UCS (Universal Character Set) types
//

typedef unsigned long UCSCHAR;

//
//  Even pre-Unicode agreement, UCS values are always in the
//  range U+00000000 to U+7FFFFFFF, so we'll pick an obvious
//  value.

#define UCSCHAR_INVALID_CHARACTER (0xffffffff)

#define MIN_UCSCHAR (0)

//
//  We'll assume here that the ISO-10646 / Unicode agreement
//  not to assign code points after U+0010FFFF holds so that
//  we do not have to have separate "UCSCHAR" and "UNICODECHAR"
//  types.
//

#define MAX_UCSCHAR (0x0010FFFF)

typedef UCSCHAR *PUCSCHAR;
typedef const UCSCHAR *PCUCSCHAR;

typedef UCSCHAR *PUCSSTR;
typedef UCSCHAR UNALIGNED *PUUCSSTR;

typedef const UCSCHAR *PCUCSSTR;
typedef const UCSCHAR UNALIGNED *PCUUCSSTR;

typedef UCSCHAR UNALIGNED *PUUCSCHAR;
typedef const UCSCHAR UNALIGNED *PCUUCSCHAR;

#endif // _WIN32_WINNT >= 0x0600


//
// ANSI (Multi-byte Character) types
//
typedef CHAR *PCHAR, *LPCH, *PCH;
typedef CONST CHAR *LPCCH, *PCCH;

typedef _Null_terminated_ CHAR *NPSTR, *LPSTR, *PSTR;
typedef _Null_terminated_ PSTR *PZPSTR;
typedef _Null_terminated_ CONST PSTR *PCZPSTR;
typedef _Null_terminated_ CONST CHAR *LPCSTR, *PCSTR;
typedef _Null_terminated_ PCSTR *PZPCSTR;
typedef _Null_terminated_ CONST PCSTR *PCZPCSTR;

typedef _NullNull_terminated_ CHAR *PZZSTR;
typedef _NullNull_terminated_ CONST CHAR *PCZZSTR;

typedef  CHAR *PNZCH;
typedef  CONST CHAR *PCNZCH;

//
// Neutral ANSI/UNICODE types and macros
//
#ifdef  UNICODE                     // r_winnt

#ifndef _TCHAR_DEFINED
typedef WCHAR TCHAR, *PTCHAR;
typedef WCHAR TUCHAR, *PTUCHAR;
#define _TCHAR_DEFINED
#endif /* !_TCHAR_DEFINED */

typedef LPWCH LPTCH, PTCH;
typedef LPCWCH LPCTCH, PCTCH;
typedef LPWSTR PTSTR, LPTSTR;
typedef LPCWSTR PCTSTR, LPCTSTR;
typedef LPUWSTR PUTSTR, LPUTSTR;
typedef LPCUWSTR PCUTSTR, LPCUTSTR;
typedef LPWSTR LP;
typedef PZZWSTR PZZTSTR;
typedef PCZZWSTR PCZZTSTR;
typedef PUZZWSTR PUZZTSTR;
typedef PCUZZWSTR PCUZZTSTR;
typedef PZPWSTR PZPTSTR;
typedef PNZWCH PNZTCH;
typedef PCNZWCH PCNZTCH;
typedef PUNZWCH PUNZTCH;
typedef PCUNZWCH PCUNZTCH;
#define __TEXT(quote) L##quote      // r_winnt

#else   /* UNICODE */               // r_winnt

#ifndef _TCHAR_DEFINED
typedef char TCHAR, *PTCHAR;
typedef unsigned char TUCHAR, *PTUCHAR;
#define _TCHAR_DEFINED
#endif /* !_TCHAR_DEFINED */

typedef LPCH LPTCH, PTCH;
typedef LPCCH LPCTCH, PCTCH;
typedef LPSTR PTSTR, LPTSTR, PUTSTR, LPUTSTR;
typedef LPCSTR PCTSTR, LPCTSTR, PCUTSTR, LPCUTSTR;
typedef PZZSTR PZZTSTR, PUZZTSTR;
typedef PCZZSTR PCZZTSTR, PCUZZTSTR;
typedef PZPSTR PZPTSTR;
typedef PNZCH PNZTCH, PUNZTCH;
typedef PCNZCH PCNZTCH, PCUNZTCH;
#define __TEXT(quote) quote         // r_winnt

#endif /* UNICODE */                // r_winnt
#define TEXT(quote) __TEXT(quote)   // r_winnt


// end_winnt

//
// The type QUAD and UQUAD are intended to use when a 8 byte aligned structure
// is required, but it is not a floating point number.
//

typedef double DOUBLE;

typedef struct _QUAD {
    union {
        __int64 UseThisFieldToCopy;
        double  DoNotUseThisField;
    } DUMMYUNIONNAME;

} QUAD;

//
// Pointer to Basics
//

typedef SHORT *PSHORT;  // winnt
typedef LONG *PLONG;    // winnt
typedef QUAD *PQUAD;

//
// Unsigned Basics
//

// Tell windef.h that some types are already defined.
#define BASETYPES

typedef unsigned char UCHAR;
typedef unsigned short USHORT;
typedef unsigned long ULONG;
typedef QUAD UQUAD;

//
// Pointer to Unsigned Basics
//

typedef UCHAR *PUCHAR;
typedef USHORT *PUSHORT;
typedef ULONG *PULONG;
typedef UQUAD *PUQUAD;

// end_ntoshvp

#if _WIN32_WINNT >= 0x0600 || (defined(__cplusplus) && defined(WINDOWS_ENABLE_CPLUSPLUS))

//
// Pointer to Const Unsigned Basics
//

typedef CONST UCHAR *PCUCHAR;
typedef CONST USHORT *PCUSHORT;
typedef CONST ULONG *PCULONG;
typedef CONST UQUAD *PCUQUAD;

#endif // _WIN32_WINNT >= 0x0600

//
// Signed characters
//

typedef signed char SCHAR;
typedef SCHAR *PSCHAR;

#if _WIN32_WINNT >= 0x0600 || (defined(__cplusplus) && defined(WINDOWS_ENABLE_CPLUSPLUS))

typedef CONST SCHAR *PCSCHAR;

#endif // _WIN32_WINNT >= 0x0600

#ifndef NO_STRICT
#ifndef STRICT
#define STRICT 1
#endif
#endif

// begin_winnt

#define ALL_PROCESSOR_GROUPS        0xffff

//
// Structure to represent a system wide processor number. It contains a
// group number and relative processor number within the group.
//

typedef struct _PROCESSOR_NUMBER {
    USHORT Group;
    UCHAR Number;
    UCHAR Reserved;
} PROCESSOR_NUMBER, *PPROCESSOR_NUMBER;

//
// Structure to represent a group-specific affinity, such as that of a
// thread.  Specifies the group number and the affinity within that group.
//

typedef struct _GROUP_AFFINITY {
    KAFFINITY Mask;
    USHORT Group;
    USHORT Reserved[3];
} GROUP_AFFINITY, *PGROUP_AFFINITY;

#if defined(_WIN64)

#define MAXIMUM_PROC_PER_GROUP 64

#else

#define MAXIMUM_PROC_PER_GROUP 32

#endif

#define MAXIMUM_PROCESSORS          MAXIMUM_PROC_PER_GROUP

// begin_ntoshvp

//
// Handle to an Object
//

#ifdef STRICT
typedef void *HANDLE;
#if 0 && (_MSC_VER > 1000)
#define DECLARE_HANDLE(name) struct name##__; typedef struct name##__ *name
#else
#define DECLARE_HANDLE(name) struct name##__{int unused;}; typedef struct name##__ *name
#endif
#else
typedef PVOID HANDLE;
#define DECLARE_HANDLE(name) typedef HANDLE name
#endif
typedef HANDLE *PHANDLE;

// end_ntoshvp

//
// Flag (bit) fields
//

typedef UCHAR  FCHAR;
typedef USHORT FSHORT;
typedef ULONG  FLONG;

// begin_ntoshvp

// Component Object Model defines, and macros

#ifndef _HRESULT_DEFINED
#define _HRESULT_DEFINED
#ifdef __midl
typedef LONG HRESULT;
#else
typedef _Return_type_success_(return >= 0) long HRESULT;
#endif // __midl
#endif // !_HRESULT_DEFINED

// end_ntoshvp

#ifdef __cplusplus
    #define EXTERN_C       extern "C"
    #define EXTERN_C_START extern "C" {
    #define EXTERN_C_END   }
#else
    #define EXTERN_C       extern
    #define EXTERN_C_START
    #define EXTERN_C_END
#endif

#if defined(_WIN32) || defined(_MPPC_)

// Win32 doesn't support __export

#ifdef _68K_
#define STDMETHODCALLTYPE       __cdecl
#else
#define STDMETHODCALLTYPE       __stdcall
#endif
#define STDMETHODVCALLTYPE      __cdecl

#define STDAPICALLTYPE          __stdcall
#define STDAPIVCALLTYPE         __cdecl

#else

#define STDMETHODCALLTYPE       __export __stdcall
#define STDMETHODVCALLTYPE      __export __cdecl

#define STDAPICALLTYPE          __export __stdcall
#define STDAPIVCALLTYPE         __export __cdecl

#endif


#define STDAPI                  EXTERN_C HRESULT STDAPICALLTYPE
#define STDAPI_(type)           EXTERN_C type STDAPICALLTYPE

#define STDMETHODIMP            HRESULT STDMETHODCALLTYPE
#define STDMETHODIMP_(type)     type STDMETHODCALLTYPE

#define STDOVERRIDEMETHODIMP        __override STDMETHODIMP
#define STDOVERRIDEMETHODIMP_(type) __override STDMETHODIMP_(type)

#define IFACEMETHODIMP          __override STDMETHODIMP
#define IFACEMETHODIMP_(type)   __override STDMETHODIMP_(type)

// The 'V' versions allow Variable Argument lists.

#define STDAPIV                 EXTERN_C HRESULT STDAPIVCALLTYPE
#define STDAPIV_(type)          EXTERN_C type STDAPIVCALLTYPE

#define STDMETHODIMPV           HRESULT STDMETHODVCALLTYPE
#define STDMETHODIMPV_(type)    type STDMETHODVCALLTYPE

#define STDOVERRIDEMETHODIMPV        __override STDMETHODIMPV
#define STDOVERRIDEMETHODIMPV_(type) __override STDMETHODIMPV_(type)

#define IFACEMETHODIMPV          __override STDMETHODIMPV
#define IFACEMETHODIMPV_(type)   __override STDMETHODIMPV_(type)

// end_winnt


//
// Low order two bits of a handle are ignored by the system and available
// for use by application code as tag bits.  The remaining bits are opaque
// and used to store a serial number and table index.
//

#define OBJ_HANDLE_TAGBITS  0x00000003L

// begin_ntoshvp
// begin_wudfpwdm

//
// Cardinal Data Types [0 - 2**N-2)
//

typedef char CCHAR;          // winnt
typedef short CSHORT;
typedef ULONG CLONG;

typedef CCHAR *PCCHAR;
typedef CSHORT *PCSHORT;
typedef CLONG *PCLONG;

// end_wudfpwdm
// end_ntoshvp

//
// __int64 is only supported by 2.0 and later midl.
// __midl is set by the 2.0 midl and not by 1.0 midl.
//

#define _ULONGLONG_
#if (!defined (_MAC) && (!defined(MIDL_PASS) || defined(__midl)) && (!defined(_M_IX86) || (defined(_INTEGRAL_MAX_BITS) && _INTEGRAL_MAX_BITS >= 64)))
typedef __int64 LONGLONG;
typedef unsigned __int64 ULONGLONG;

#define MAXLONGLONG                         (0x7fffffffffffffff)


#else

#if defined(_MAC) && defined(_MAC_INT_64)
typedef __int64 LONGLONG;
typedef unsigned __int64 ULONGLONG;

#define MAXLONGLONG                      (0x7fffffffffffffff)


#else
typedef double LONGLONG;
typedef double ULONGLONG;
#endif //_MAC and int64

#endif

typedef LONGLONG *PLONGLONG;
typedef ULONGLONG *PULONGLONG;

// Update Sequence Number

typedef LONGLONG USN;

#if defined(MIDL_PASS)
typedef struct _LARGE_INTEGER {
    LONGLONG QuadPart;
} LARGE_INTEGER;
#else // MIDL_PASS
typedef union _LARGE_INTEGER {
    struct {
        ULONG LowPart;
        LONG HighPart;
    } DUMMYSTRUCTNAME;
    struct {
        ULONG LowPart;
        LONG HighPart;
    } u;
    LONGLONG QuadPart;
} LARGE_INTEGER;
#endif //MIDL_PASS

typedef LARGE_INTEGER *PLARGE_INTEGER;

#if defined(MIDL_PASS)
typedef struct _ULARGE_INTEGER {
    ULONGLONG QuadPart;
} ULARGE_INTEGER;
#else // MIDL_PASS
typedef union _ULARGE_INTEGER {
    struct {
        ULONG LowPart;
        ULONG HighPart;
    } DUMMYSTRUCTNAME;
    struct {
        ULONG LowPart;
        ULONG HighPart;
    } u;
    ULONGLONG QuadPart;
} ULARGE_INTEGER;
#endif //MIDL_PASS

typedef ULARGE_INTEGER *PULARGE_INTEGER;

//
// Reference count.
//

typedef LONG_PTR RTL_REFERENCE_COUNT, *PRTL_REFERENCE_COUNT;
typedef LONG RTL_REFERENCE_COUNT32, *PRTL_REFERENCE_COUNT32;

// begin_wudfwdm
// begin_ntoshvp

//
// Physical address.
//

typedef LARGE_INTEGER PHYSICAL_ADDRESS, *PPHYSICAL_ADDRESS;

// end_ntoshvp
// end_wudfwdm

//
// Boolean
//

typedef UCHAR BOOLEAN;           // winnt
typedef BOOLEAN *PBOOLEAN;       // winnt


//
// Constants
//

#define FALSE   0
#define TRUE    1

#ifndef NULL
#ifdef __cplusplus
#define NULL    0
#define NULL64  0
#else
#define NULL    ((void *)0)
#define NULL64  ((void * POINTER_64)0)
#endif
#endif // NULL

// end_ntoshvp
// begin_ntoshvp
//
// Calculate the byte offset of a field in a structure of type type.
//

#define FIELD_OFFSET(type, field)    ((LONG)(LONG_PTR)&(((type *)0)->field))
#define UFIELD_OFFSET(type, field)    ((ULONG)(LONG_PTR)&(((type *)0)->field))

//
// Calculate the size of a field in a structure of type type, without
// knowing or stating the type of the field.
//
#define RTL_FIELD_SIZE(type, field) (sizeof(((type *)0)->field))

//
// Calculate the size of a structure of type type up through and
// including a field.
//
#define RTL_SIZEOF_THROUGH_FIELD(type, field) \
    (FIELD_OFFSET(type, field) + RTL_FIELD_SIZE(type, field))

// end_ntoshvp

//
//  RTL_CONTAINS_FIELD usage:
//
//      if (RTL_CONTAINS_FIELD(pBlock, pBlock->cbSize, dwMumble))
//          // safe to use pBlock->dwMumble
//
#define RTL_CONTAINS_FIELD(Struct, Size, Field) \
    ( (((PCHAR)(&(Struct)->Field)) + sizeof((Struct)->Field)) <= (((PCHAR)(Struct))+(Size)) )

//
// Return the number of elements in a statically sized array.
//   ULONG Buffer[100];
//   RTL_NUMBER_OF(Buffer) == 100
// This is also popularly known as: NUMBER_OF, ARRSIZE, _countof, NELEM, etc.
//
#define RTL_NUMBER_OF_V1(A) (sizeof(A)/sizeof((A)[0]))

#if defined(__cplusplus) && \
    !defined(MIDL_PASS) && \
    !defined(RC_INVOKED) && \
    !defined(_PREFAST_) && \
    (_MSC_FULL_VER >= 13009466) && \
    !defined(SORTPP_PASS)
//
// RtlpNumberOf is a function that takes a reference to an array of N Ts.
//
// typedef T array_of_T[N];
// typedef array_of_T &reference_to_array_of_T;
//
// RtlpNumberOf returns a pointer to an array of N chars.
// We could return a reference instead of a pointer but older compilers do not accept that.
//
// typedef char array_of_char[N];
// typedef array_of_char *pointer_to_array_of_char;
//
// sizeof(array_of_char) == N
// sizeof(*pointer_to_array_of_char) == N
//
// pointer_to_array_of_char RtlpNumberOf(reference_to_array_of_T);
//
// We never even call RtlpNumberOf, we just take the size of dereferencing its return type.
// We do not even implement RtlpNumberOf, we just declare it.
//
// Attempts to pass pointers instead of arrays to this macro result in compile time errors.
// That is the point.
//


extern "C++" // templates cannot be declared to have 'C' linkage
template <typename T, size_t N>
char (*RtlpNumberOf( UNALIGNED T (&)[N] ))[N];


#define RTL_NUMBER_OF_V2(A) (sizeof(*RtlpNumberOf(A)))

//
// This does not work with:
//
// void Foo()
// {
//    struct { int x; } y[2];
//    RTL_NUMBER_OF_V2(y); // illegal use of anonymous local type in template instantiation
// }
//
// You must instead do:
//
// struct Foo1 { int x; };
//
// void Foo()
// {
//    Foo1 y[2];
//    RTL_NUMBER_OF_V2(y); // ok
// }
//
// OR
//
// void Foo()
// {
//    struct { int x; } y[2];
//    RTL_NUMBER_OF_V1(y); // ok
// }
//
// OR
//
// void Foo()
// {
//    struct { int x; } y[2];
//    _ARRAYSIZE(y); // ok
// }
//

#else
#define RTL_NUMBER_OF_V2(A) RTL_NUMBER_OF_V1(A)
#endif

#ifdef ENABLE_RTL_NUMBER_OF_V2
#define RTL_NUMBER_OF(A) RTL_NUMBER_OF_V2(A)
#else
#define RTL_NUMBER_OF(A) RTL_NUMBER_OF_V1(A)
#endif

//
// ARRAYSIZE is more readable version of RTL_NUMBER_OF_V2, and uses
// it regardless of ENABLE_RTL_NUMBER_OF_V2
//
// _ARRAYSIZE is a version useful for anonymous types
//
#define ARRAYSIZE(A)    RTL_NUMBER_OF_V2(A)
#define _ARRAYSIZE(A)   RTL_NUMBER_OF_V1(A)

//
// An expression that yields the type of a field in a struct.
//
#define RTL_FIELD_TYPE(type, field) (((type*)0)->field)

// RTL_ to avoid collisions in the global namespace.
//
// Given typedef struct _FOO { BYTE Bar[123]; } FOO;
// RTL_NUMBER_OF_FIELD(FOO, Bar) == 123
//
#define RTL_NUMBER_OF_FIELD(type, field) (RTL_NUMBER_OF(RTL_FIELD_TYPE(type, field)))

//
// eg:
// typedef struct FOO {
//   ULONG Integer;
//   PVOID Pointer;
// } FOO;
//
// RTL_PADDING_BETWEEN_FIELDS(FOO, Integer, Pointer) == 0 for Win32, 4 for Win64
//
#define RTL_PADDING_BETWEEN_FIELDS(T, F1, F2) \
    ((FIELD_OFFSET(T, F2) > FIELD_OFFSET(T, F1)) \
        ? (FIELD_OFFSET(T, F2) - FIELD_OFFSET(T, F1) - RTL_FIELD_SIZE(T, F1)) \
        : (FIELD_OFFSET(T, F1) - FIELD_OFFSET(T, F2) - RTL_FIELD_SIZE(T, F2)))

// RTL_ to avoid collisions in the global namespace.
#if defined(__cplusplus)
#define RTL_CONST_CAST(type) const_cast<type>
#else
#define RTL_CONST_CAST(type) (type)
#endif

// end_winnt
//
// This works "generically" for Unicode and Ansi/Oem strings.
// Usage:
//   const static UNICODE_STRING FooU = RTL_CONSTANT_STRING(L"Foo");
//   const static         STRING Foo  = RTL_CONSTANT_STRING( "Foo");
// instead of the slower:
//   UNICODE_STRING FooU;
//           STRING Foo;
//   RtlInitUnicodeString(&FooU, L"Foo");
//          RtlInitString(&Foo ,  "Foo");
//
// Or:
//   const static char szFoo[] = "Foo";
//   const static STRING sFoo = RTL_CONSTANT_STRING(szFoo);
//
// This will compile without error or warning in C++. C will get a warning.
//
#ifdef __cplusplus
extern "C++"
{
char _RTL_CONSTANT_STRING_type_check(const char *s);
char _RTL_CONSTANT_STRING_type_check(const WCHAR *s);
// __typeof would be desirable here instead of sizeof.
template <size_t N> class _RTL_CONSTANT_STRING_remove_const_template_class;
template <> class _RTL_CONSTANT_STRING_remove_const_template_class<sizeof(char)>  {public: typedef  char T; };
template <> class _RTL_CONSTANT_STRING_remove_const_template_class<sizeof(WCHAR)> {public: typedef WCHAR T; };
#define _RTL_CONSTANT_STRING_remove_const_macro(s) \
    (const_cast<_RTL_CONSTANT_STRING_remove_const_template_class<sizeof((s)[0])>::T*>(s))
}
#else
char _RTL_CONSTANT_STRING_type_check(const void *s);
#define _RTL_CONSTANT_STRING_remove_const_macro(s) (s)
#endif
#define RTL_CONSTANT_STRING(s) \
{ \
    sizeof( s ) - sizeof( (s)[0] ), \
    sizeof( s ) / sizeof(_RTL_CONSTANT_STRING_type_check(s)), \
    _RTL_CONSTANT_STRING_remove_const_macro(s) \
}
// begin_winnt

// like sizeof
// usually this would be * CHAR_BIT, but we don't necessarily have #include <limits.h>
#define RTL_BITS_OF(sizeOfArg) (sizeof(sizeOfArg) * 8)

#define RTL_BITS_OF_FIELD(type, field) (RTL_BITS_OF(RTL_FIELD_TYPE(type, field)))

// begin_ntoshvp

//
// Calculate the address of the base of the structure given its type, and an
// address of a field within the structure.
//

#define CONTAINING_RECORD(address, type, field) ((type *)( \
                                                  (PCHAR)(address) - \
                                                  (ULONG_PTR)(&((type *)0)->field)))

// end_ntoshvp
// begin_wudfwdm
// begin_ntoshvp

//
// Interrupt Request Level (IRQL)
//

typedef UCHAR KIRQL;

typedef KIRQL *PKIRQL;

// end_ntoshvp
// end_wudfwdm
#include <sdkddkver.h>

//
// Macros used to eliminate compiler warning generated when formal
// parameters or local variables are not declared.
//
// Use DBG_UNREFERENCED_PARAMETER() when a parameter is not yet
// referenced but will be once the module is completely developed.
//
// Use DBG_UNREFERENCED_LOCAL_VARIABLE() when a local variable is not yet
// referenced but will be once the module is completely developed.
//
// Use UNREFERENCED_PARAMETER() if a parameter will never be referenced.
//
// DBG_UNREFERENCED_PARAMETER and DBG_UNREFERENCED_LOCAL_VARIABLE will
// eventually be made into a null macro to help determine whether there
// is unfinished work.
//

// begin_ntoshvp

#if ! defined(lint)

#ifdef _PREFAST_

void _Prefast_unreferenced_parameter_impl_(const char*, ...);
#define UNREFERENCED_PARAMETER(P)          _Prefast_unreferenced_parameter_impl_("PREfast", ((void) (P), 0))
#define DBG_UNREFERENCED_PARAMETER(P)      _Prefast_unreferenced_parameter_impl_("PREfast", ((void) (P), 0))
#define DBG_UNREFERENCED_LOCAL_VARIABLE(V) _Prefast_unreferenced_parameter_impl_("PREfast", ((void) (V), 0))

#else // _PREFAST_

#define UNREFERENCED_PARAMETER(P)          (P)
#define DBG_UNREFERENCED_PARAMETER(P)      (P)
#define DBG_UNREFERENCED_LOCAL_VARIABLE(V) (V)

#endif // _PREFAST_

#else // lint

// Note: lint -e530 says don't complain about uninitialized variables for
// this variable.  Error 527 has to do with unreachable code.
// -restore restores checking to the -save state

#define UNREFERENCED_PARAMETER(P)          \
    /*lint -save -e527 -e530 */ \
    { \
        (P) = (P); \
    } \
    /*lint -restore */
#define DBG_UNREFERENCED_PARAMETER(P)      \
    /*lint -save -e527 -e530 */ \
    { \
        (P) = (P); \
    } \
    /*lint -restore */
#define DBG_UNREFERENCED_LOCAL_VARIABLE(V) \
    /*lint -save -e527 -e530 */ \
    { \
        (V) = (V); \
    } \
    /*lint -restore */

#endif // lint

// end_ntoshvp

//
// Macro used to eliminate compiler warning 4715 within a switch statement
// when all possible cases have already been accounted for.
//
// switch (a & 3) {
//     case 0: return 1;
//     case 1: return Foo();
//     case 2: return Bar();
//     case 3: return 1;
//     DEFAULT_UNREACHABLE;
//

#if (_MSC_VER > 1200)
#define DEFAULT_UNREACHABLE default: __assume(0)
#else

//
// Older compilers do not support __assume(), and there is no other free
// method of eliminating the warning.
//

#define DEFAULT_UNREACHABLE

#endif

#ifdef __cplusplus

// Define operator overloads to enable bit operations on enum values that are
// used to define flags. Use DEFINE_ENUM_FLAG_OPERATORS(YOUR_TYPE) to enable these
// operators on YOUR_TYPE.

// Moved here from objbase.w.

// Templates are defined here in order to avoid a dependency on C++ <type_traits> header file,
// or on compiler-specific constructs.
extern "C++" {

    template <size_t S>
    struct _ENUM_FLAG_INTEGER_FOR_SIZE;

    template <>
    struct _ENUM_FLAG_INTEGER_FOR_SIZE<1>
    {
        typedef INT8 type;
    };

    template <>
    struct _ENUM_FLAG_INTEGER_FOR_SIZE<2>
    {
        typedef INT16 type;
    };

    template <>
    struct _ENUM_FLAG_INTEGER_FOR_SIZE<4>
    {
        typedef INT32 type;
    };

    template <>
    struct _ENUM_FLAG_INTEGER_FOR_SIZE<8>
    {
        typedef INT64 type;
    };

    // used as an approximation of std::underlying_type<T>
    template <class T>
    struct _ENUM_FLAG_SIZED_INTEGER
    {
        typedef typename _ENUM_FLAG_INTEGER_FOR_SIZE<sizeof(T)>::type type;
    };

}

#if _MSC_VER >= 1900
#define _ENUM_FLAG_CONSTEXPR constexpr
#else
#define _ENUM_FLAG_CONSTEXPR
#endif

#define DEFINE_ENUM_FLAG_OPERATORS(ENUMTYPE) \
extern "C++" { \
inline _ENUM_FLAG_CONSTEXPR ENUMTYPE operator | (ENUMTYPE a, ENUMTYPE b) throw() { return ENUMTYPE(((_ENUM_FLAG_SIZED_INTEGER<ENUMTYPE>::type)a) | ((_ENUM_FLAG_SIZED_INTEGER<ENUMTYPE>::type)b)); } \
inline ENUMTYPE &operator |= (ENUMTYPE &a, ENUMTYPE b) throw() { return (ENUMTYPE &)(((_ENUM_FLAG_SIZED_INTEGER<ENUMTYPE>::type &)a) |= ((_ENUM_FLAG_SIZED_INTEGER<ENUMTYPE>::type)b)); } \
inline _ENUM_FLAG_CONSTEXPR ENUMTYPE operator & (ENUMTYPE a, ENUMTYPE b) throw() { return ENUMTYPE(((_ENUM_FLAG_SIZED_INTEGER<ENUMTYPE>::type)a) & ((_ENUM_FLAG_SIZED_INTEGER<ENUMTYPE>::type)b)); } \
inline ENUMTYPE &operator &= (ENUMTYPE &a, ENUMTYPE b) throw() { return (ENUMTYPE &)(((_ENUM_FLAG_SIZED_INTEGER<ENUMTYPE>::type &)a) &= ((_ENUM_FLAG_SIZED_INTEGER<ENUMTYPE>::type)b)); } \
inline _ENUM_FLAG_CONSTEXPR ENUMTYPE operator ~ (ENUMTYPE a) throw() { return ENUMTYPE(~((_ENUM_FLAG_SIZED_INTEGER<ENUMTYPE>::type)a)); } \
inline _ENUM_FLAG_CONSTEXPR ENUMTYPE operator ^ (ENUMTYPE a, ENUMTYPE b) throw() { return ENUMTYPE(((_ENUM_FLAG_SIZED_INTEGER<ENUMTYPE>::type)a) ^ ((_ENUM_FLAG_SIZED_INTEGER<ENUMTYPE>::type)b)); } \
inline ENUMTYPE &operator ^= (ENUMTYPE &a, ENUMTYPE b) throw() { return (ENUMTYPE &)(((_ENUM_FLAG_SIZED_INTEGER<ENUMTYPE>::type &)a) ^= ((_ENUM_FLAG_SIZED_INTEGER<ENUMTYPE>::type)b)); } \
}
#else
#define DEFINE_ENUM_FLAG_OPERATORS(ENUMTYPE) // NOP, C allows these operators.
#endif

// Compile-time macros for initializing flag values in const data.
//
// When using DEFINE_ENUM_FLAG_OPERATORS for enum values you should use the macros below
// when you need to initialize global const data.  Without these macros the inline operators
// from DEFINE_ENUM_FLAG_OPERATORS force a runtime initialization rather than a
// compile time initialization.  This applies even if you have declared the data as const.
//
// This is no longer necessary for compilers that support constexpr.
#define COMPILETIME_OR_2FLAGS(a,b)          ((UINT)(a)|(UINT)(b))
#define COMPILETIME_OR_3FLAGS(a,b,c)        ((UINT)(a)|(UINT)(b)|(UINT)(c))
#define COMPILETIME_OR_4FLAGS(a,b,c,d)      ((UINT)(a)|(UINT)(b)|(UINT)(c)|(UINT)(d))
#define COMPILETIME_OR_5FLAGS(a,b,c,d,e)    ((UINT)(a)|(UINT)(b)|(UINT)(c)|(UINT)(d)|(UINT)(e))
#define COMPILETIME_OR_6FLAGS(a,b,c,d,e,f)  ((UINT)(a)|(UINT)(b)|(UINT)(c)|(UINT)(d)|(UINT)(e)|(UINT)(f))

// end_winnt

//
//  Define standard min and max macros
//

#ifndef NOMINMAX

#ifndef min
#define min(a,b) (((a) < (b)) ? (a) : (b))
#endif

#ifndef max
#define max(a,b) (((a) > (b)) ? (a) : (b))
#endif

#endif  // NOMINMAX

// begin_ntoshvp

#ifdef _AMD64_


#if defined(_M_AMD64) && !defined(RC_INVOKED) && !defined(MIDL_PASS)

//
// Define bit test intrinsics.
//

#ifdef __cplusplus
extern "C" {
#endif

#define BitTest _bittest
#define BitTestAndComplement _bittestandcomplement
#define BitTestAndSet _bittestandset
#define BitTestAndReset _bittestandreset
#define InterlockedBitTestAndSet _interlockedbittestandset
#define InterlockedBitTestAndSetAcquire _interlockedbittestandset
#define InterlockedBitTestAndSetRelease _interlockedbittestandset
#define InterlockedBitTestAndSetNoFence _interlockedbittestandset
#define InterlockedBitTestAndReset _interlockedbittestandreset
#define InterlockedBitTestAndResetAcquire _interlockedbittestandreset
#define InterlockedBitTestAndResetRelease _interlockedbittestandreset
#define InterlockedBitTestAndResetNoFence _interlockedbittestandreset

#define BitTest64 _bittest64
#define BitTestAndComplement64 _bittestandcomplement64
#define BitTestAndSet64 _bittestandset64
#define BitTestAndReset64 _bittestandreset64
#define InterlockedBitTestAndSet64 _interlockedbittestandset64
#define InterlockedBitTestAndSet64Acquire _interlockedbittestandset64
#define InterlockedBitTestAndSet64Release _interlockedbittestandset64
#define InterlockedBitTestAndSet64NoFence _interlockedbittestandset64
#define InterlockedBitTestAndReset64 _interlockedbittestandreset64
#define InterlockedBitTestAndReset64Acquire _interlockedbittestandreset64
#define InterlockedBitTestAndReset64Release _interlockedbittestandreset64
#define InterlockedBitTestAndReset64NoFence _interlockedbittestandreset64

_Must_inspect_result_
BOOLEAN
_bittest (
    _In_reads_bytes_((Offset/8)+1) LONG const *Base,
    _In_range_(>=,0) LONG Offset
    );

BOOLEAN
_bittestandcomplement (
    _Inout_updates_bytes_((Offset/8)+1) LONG *Base,
    _In_range_(>=,0) LONG Offset
    );

BOOLEAN
_bittestandset (
    _Inout_updates_bytes_((Offset/8)+1) LONG *Base,
    _In_range_(>=,0) LONG Offset
    );

BOOLEAN
_bittestandreset (
    _Inout_updates_bytes_((Offset/8)+1) LONG *Base,
    _In_range_(>=,0) LONG Offset
    );

BOOLEAN
_interlockedbittestandset (
    _Inout_updates_bytes_((Offset/8)+1) _Interlocked_operand_ LONG volatile *Base,
    _In_range_(>=,0) LONG Offset
    );

BOOLEAN
_interlockedbittestandreset (
    _Inout_updates_bytes_((Offset/8)+1) _Interlocked_operand_ LONG volatile *Base,
    _In_range_(>=,0) LONG Offset
    );

BOOLEAN
_bittest64 (
    _In_reads_bytes_((Offset/8)+1) LONG64 const *Base,
    _In_range_(>=,0) LONG64 Offset
    );

BOOLEAN
_bittestandcomplement64 (
    _Inout_updates_bytes_((Offset/8)+1) LONG64 *Base,
    _In_range_(>=,0) LONG64 Offset
    );

BOOLEAN
_bittestandset64 (
    _Inout_updates_bytes_((Offset/8)+1) LONG64 *Base,
    _In_range_(>=,0) LONG64 Offset
    );

BOOLEAN
_bittestandreset64 (
    _Inout_updates_bytes_((Offset/8)+1) LONG64 *Base,
    _In_range_(>=,0) LONG64 Offset
    );

BOOLEAN
_interlockedbittestandset64 (
    _Inout_updates_bytes_((Offset/8)+1) _Interlocked_operand_ LONG64 volatile *Base,
    _In_range_(>=,0) LONG64 Offset
    );

BOOLEAN
_interlockedbittestandreset64 (
    _Inout_updates_bytes_((Offset/8)+1) _Interlocked_operand_ LONG64 volatile *Base,
    _In_range_(>=,0) LONG64 Offset
    );

#pragma intrinsic(_bittest)
#pragma intrinsic(_bittestandcomplement)
#pragma intrinsic(_bittestandset)
#pragma intrinsic(_bittestandreset)
#pragma intrinsic(_interlockedbittestandset)
#pragma intrinsic(_interlockedbittestandreset)

#pragma intrinsic(_bittest64)
#pragma intrinsic(_bittestandcomplement64)
#pragma intrinsic(_bittestandset64)
#pragma intrinsic(_bittestandreset64)
#pragma intrinsic(_interlockedbittestandset64)
#pragma intrinsic(_interlockedbittestandreset64)

//
// Define bit scan intrinsics.
//

#define BitScanForward _BitScanForward
#define BitScanReverse _BitScanReverse
#define BitScanForward64 _BitScanForward64
#define BitScanReverse64 _BitScanReverse64

_Success_(return!=0)
BOOLEAN
_BitScanForward (
    _Out_ ULONG *Index,
    _In_ ULONG Mask
    );

_Success_(return!=0)
BOOLEAN
_BitScanReverse (
    _Out_ ULONG *Index,
    _In_ ULONG Mask
    );

_Success_(return!=0)
BOOLEAN
_BitScanForward64 (
    _Out_ ULONG *Index,
    _In_ ULONG64 Mask
    );

_Success_(return!=0)
BOOLEAN
_BitScanReverse64 (
    _Out_ ULONG *Index,
    _In_ ULONG64 Mask
    );

#pragma intrinsic(_BitScanForward)
#pragma intrinsic(_BitScanReverse)
#pragma intrinsic(_BitScanForward64)
#pragma intrinsic(_BitScanReverse64)

//
// Interlocked intrinsic functions.
//

#define InterlockedIncrement16 _InterlockedIncrement16
#define InterlockedIncrementAcquire16 _InterlockedIncrement16
#define InterlockedIncrementRelease16 _InterlockedIncrement16
#define InterlockedIncrementNoFence16 _InterlockedIncrement16
#define InterlockedDecrement16 _InterlockedDecrement16
#define InterlockedDecrementAcquire16 _InterlockedDecrement16
#define InterlockedDecrementRelease16 _InterlockedDecrement16
#define InterlockedDecrementNoFence16 _InterlockedDecrement16
#define InterlockedCompareExchange16 _InterlockedCompareExchange16
#define InterlockedCompareExchangeAcquire16 _InterlockedCompareExchange16
#define InterlockedCompareExchangeRelease16 _InterlockedCompareExchange16
#define InterlockedCompareExchangeNoFence16 _InterlockedCompareExchange16

#define InterlockedAnd _InterlockedAnd
#define InterlockedAndAcquire _InterlockedAnd
#define InterlockedAndRelease _InterlockedAnd
#define InterlockedAndNoFence _InterlockedAnd
#define InterlockedOr _InterlockedOr
#define InterlockedOrAcquire _InterlockedOr
#define InterlockedOrRelease _InterlockedOr
#define InterlockedOrNoFence _InterlockedOr
#define InterlockedXor _InterlockedXor
#define InterlockedXorAcquire _InterlockedXor
#define InterlockedXorRelease _InterlockedXor
#define InterlockedXorNoFence _InterlockedXor
#define InterlockedIncrement _InterlockedIncrement
#define InterlockedIncrementAcquire _InterlockedIncrement
#define InterlockedIncrementRelease _InterlockedIncrement
#define InterlockedIncrementNoFence _InterlockedIncrement
#define InterlockedDecrement _InterlockedDecrement
#define InterlockedDecrementAcquire _InterlockedDecrement
#define InterlockedDecrementRelease _InterlockedDecrement
#define InterlockedDecrementNoFence _InterlockedDecrement
#define InterlockedAdd _InlineInterlockedAdd
#define InterlockedAddAcquire _InlineInterlockedAdd
#define InterlockedAddRelease _InlineInterlockedAdd
#define InterlockedAddNoFence _InlineInterlockedAdd
#define InterlockedExchange _InterlockedExchange
#define InterlockedExchangeAcquire _InterlockedExchange
#define InterlockedExchangeNoFence _InterlockedExchange
#define InterlockedExchangeAdd _InterlockedExchangeAdd
#define InterlockedExchangeAddAcquire _InterlockedExchangeAdd
#define InterlockedExchangeAddRelease _InterlockedExchangeAdd
#define InterlockedExchangeAddNoFence _InterlockedExchangeAdd
#define InterlockedCompareExchange _InterlockedCompareExchange
#define InterlockedCompareExchangeAcquire _InterlockedCompareExchange
#define InterlockedCompareExchangeRelease _InterlockedCompareExchange
#define InterlockedCompareExchangeNoFence _InterlockedCompareExchange

#define InterlockedAnd64 _InterlockedAnd64
#define InterlockedAnd64Acquire _InterlockedAnd64
#define InterlockedAnd64Release _InterlockedAnd64
#define InterlockedAnd64NoFence _InterlockedAnd64
#define InterlockedAndAffinity InterlockedAnd64
#define InterlockedOr64 _InterlockedOr64
#define InterlockedOr64Acquire _InterlockedOr64
#define InterlockedOr64Release _InterlockedOr64
#define InterlockedOr64NoFence _InterlockedOr64
#define InterlockedOrAffinity InterlockedOr64
#define InterlockedXor64 _InterlockedXor64
#define InterlockedXor64Acquire _InterlockedXor64
#define InterlockedXor64Release _InterlockedXor64
#define InterlockedXor64NoFence _InterlockedXor64
#define InterlockedIncrement64 _InterlockedIncrement64
#define InterlockedIncrementAcquire64 _InterlockedIncrement64
#define InterlockedIncrementRelease64 _InterlockedIncrement64
#define InterlockedIncrementNoFence64 _InterlockedIncrement64
#define InterlockedDecrement64 _InterlockedDecrement64
#define InterlockedDecrementAcquire64 _InterlockedDecrement64
#define InterlockedDecrementRelease64 _InterlockedDecrement64
#define InterlockedDecrementNoFence64 _InterlockedDecrement64
#define InterlockedAdd64 _InlineInterlockedAdd64
#define InterlockedAddAcquire64 _InlineInterlockedAdd64
#define InterlockedAddRelease64 _InlineInterlockedAdd64
#define InterlockedAddNoFence64 _InlineInterlockedAdd64
#define InterlockedExchange64 _InterlockedExchange64
#define InterlockedExchangeAcquire64 InterlockedExchange64
#define InterlockedExchangeNoFence64 InterlockedExchange64
#define InterlockedExchangeAdd64 _InterlockedExchangeAdd64
#define InterlockedExchangeAddAcquire64 _InterlockedExchangeAdd64
#define InterlockedExchangeAddRelease64 _InterlockedExchangeAdd64
#define InterlockedExchangeAddNoFence64 _InterlockedExchangeAdd64
#define InterlockedCompareExchange64 _InterlockedCompareExchange64
#define InterlockedCompareExchangeAcquire64 InterlockedCompareExchange64
#define InterlockedCompareExchangeRelease64 InterlockedCompareExchange64
#define InterlockedCompareExchangeNoFence64 InterlockedCompareExchange64
#define InterlockedCompareExchange128 _InterlockedCompareExchange128

#define InterlockedExchangePointer _InterlockedExchangePointer
#define InterlockedExchangePointerNoFence _InterlockedExchangePointer
#define InterlockedExchangePointerAcquire _InterlockedExchangePointer
#define InterlockedCompareExchangePointer _InterlockedCompareExchangePointer
#define InterlockedCompareExchangePointerAcquire _InterlockedCompareExchangePointer
#define InterlockedCompareExchangePointerRelease _InterlockedCompareExchangePointer
#define InterlockedCompareExchangePointerNoFence _InterlockedCompareExchangePointer

#define InterlockedExchangeAddSizeT(a, b) InterlockedExchangeAdd64((LONG64 *)a, b)
#define InterlockedExchangeAddSizeTAcquire(a, b) InterlockedExchangeAdd64((LONG64 *)a, b)
#define InterlockedExchangeAddSizeTNoFence(a, b) InterlockedExchangeAdd64((LONG64 *)a, b)
#define InterlockedIncrementSizeT(a) InterlockedIncrement64((LONG64 *)a)
#define InterlockedIncrementSizeTNoFence(a) InterlockedIncrement64((LONG64 *)a)
#define InterlockedDecrementSizeT(a) InterlockedDecrement64((LONG64 *)a)
#define InterlockedDecrementSizeTNoFence(a) InterlockedDecrement64((LONG64 *)a)

SHORT
InterlockedIncrement16 (
    _Inout_ _Interlocked_operand_ SHORT volatile *Addend
    );

SHORT
InterlockedDecrement16 (
    _Inout_ _Interlocked_operand_ SHORT volatile *Addend
    );

SHORT
InterlockedCompareExchange16 (
    _Inout_ _Interlocked_operand_ SHORT volatile *Destination,
    _In_ SHORT ExChange,
    _In_ SHORT Comperand
    );

LONG
InterlockedAnd (
    _Inout_ _Interlocked_operand_ LONG volatile *Destination,
    _In_ LONG Value
    );

LONG
InterlockedOr (
    _Inout_ _Interlocked_operand_ LONG volatile *Destination,
    _In_ LONG Value
    );

LONG
InterlockedXor (
    _Inout_ _Interlocked_operand_ LONG volatile *Destination,
    _In_ LONG Value
    );

LONG64
InterlockedAnd64 (
    _Inout_ _Interlocked_operand_ LONG64 volatile *Destination,
    _In_ LONG64 Value
    );

LONG64
InterlockedOr64 (
    _Inout_ _Interlocked_operand_ LONG64 volatile *Destination,
    _In_ LONG64 Value
    );

LONG64
InterlockedXor64 (
    _Inout_ _Interlocked_operand_ LONG64 volatile *Destination,
    _In_ LONG64 Value
    );

LONG
InterlockedIncrement (
    _Inout_ _Interlocked_operand_ LONG volatile *Addend
    );

LONG
InterlockedDecrement (
    _Inout_ _Interlocked_operand_ LONG volatile *Addend
    );

LONG
InterlockedExchange (
    _Inout_ _Interlocked_operand_ LONG volatile *Target,
    _In_ LONG Value
    );

LONG
InterlockedExchangeAdd (
    _Inout_ _Interlocked_operand_ LONG volatile *Addend,
    _In_ LONG Value
    );

#if !defined(_X86AMD64_)

__forceinline
LONG
InterlockedAdd (
    _Inout_ _Interlocked_operand_ LONG volatile *Addend,
    _In_ LONG Value
    )

{
    return InterlockedExchangeAdd(Addend, Value) + Value;
}

#endif

LONG
InterlockedCompareExchange (
    _Inout_ _Interlocked_operand_ LONG volatile *Destination,
    _In_ LONG ExChange,
    _In_ LONG Comperand
    );

LONG64
InterlockedIncrement64 (
    _Inout_ _Interlocked_operand_ LONG64 volatile *Addend
    );

LONG64
InterlockedDecrement64 (
    _Inout_ _Interlocked_operand_ LONG64 volatile *Addend
    );

LONG64
InterlockedExchange64 (
    _Inout_ _Interlocked_operand_ LONG64 volatile *Target,
    _In_ LONG64 Value
    );

LONG64
InterlockedExchangeAdd64 (
    _Inout_ _Interlocked_operand_ LONG64 volatile *Addend,
    _In_ LONG64 Value
    );

#if !defined(_X86AMD64_)

__forceinline
LONG64
_InlineInterlockedAdd64 (
    _Inout_ _Interlocked_operand_ LONG64 volatile *Addend,
    _In_ LONG64 Value
    )

{
    return InterlockedExchangeAdd64(Addend, Value) + Value;
}

#endif

LONG64
InterlockedCompareExchange64 (
    _Inout_ _Interlocked_operand_ LONG64 volatile *Destination,
    _In_ LONG64 ExChange,
    _In_ LONG64 Comperand
    );

BOOLEAN
InterlockedCompareExchange128 (
    _Inout_ _Interlocked_operand_ LONG64 volatile *Destination,
    _In_ LONG64 ExchangeHigh,
    _In_ LONG64 ExchangeLow,
    _Inout_ LONG64 *ComparandResult
    );

_Ret_writes_(_Inexpressible_(Unknown)) PVOID
InterlockedCompareExchangePointer (
    _Inout_ _At_(*Destination,
        _Pre_writable_byte_size_(_Inexpressible_(Unknown))
        _Post_writable_byte_size_(_Inexpressible_(Unknown)))
    _Interlocked_operand_ PVOID volatile *Destination,
    _In_opt_ PVOID Exchange,
    _In_opt_ PVOID Comperand
    );

_Ret_writes_(_Inexpressible_(Unknown)) PVOID
InterlockedExchangePointer(
    _Inout_ _At_(*Target,
        _Pre_writable_byte_size_(_Inexpressible_(Unknown))
        _Post_writable_byte_size_(_Inexpressible_(Unknown)))
    _Interlocked_operand_ PVOID volatile *Target,
    _In_opt_ PVOID Value
    );

#pragma intrinsic(_InterlockedIncrement16)
#pragma intrinsic(_InterlockedDecrement16)
#pragma intrinsic(_InterlockedCompareExchange16)
#pragma intrinsic(_InterlockedAnd)
#pragma intrinsic(_InterlockedOr)
#pragma intrinsic(_InterlockedXor)
#pragma intrinsic(_InterlockedIncrement)
#pragma intrinsic(_InterlockedDecrement)
#pragma intrinsic(_InterlockedExchange)
#pragma intrinsic(_InterlockedExchangeAdd)
#pragma intrinsic(_InterlockedCompareExchange)
#pragma intrinsic(_InterlockedAnd64)
#pragma intrinsic(_InterlockedOr64)
#pragma intrinsic(_InterlockedXor64)
#pragma intrinsic(_InterlockedIncrement64)
#pragma intrinsic(_InterlockedDecrement64)
#pragma intrinsic(_InterlockedExchange64)
#pragma intrinsic(_InterlockedExchangeAdd64)
#pragma intrinsic(_InterlockedCompareExchange64)

#if _MSC_VER >= 1500

#pragma intrinsic(_InterlockedCompareExchange128)

#endif

#pragma intrinsic(_InterlockedExchangePointer)
#pragma intrinsic(_InterlockedCompareExchangePointer)

#if (_MSC_VER >= 1600)

#define InterlockedExchange8 _InterlockedExchange8
#define InterlockedExchange16 _InterlockedExchange16

CHAR
InterlockedExchange8 (
    _Inout_ _Interlocked_operand_ CHAR volatile *Target,
    _In_ CHAR Value
    );

SHORT
InterlockedExchange16 (
    _Inout_ _Interlocked_operand_ SHORT volatile *Destination,
    _In_ SHORT ExChange
    );

#pragma intrinsic(_InterlockedExchange8)
#pragma intrinsic(_InterlockedExchange16)

#endif /* _MSC_VER >= 1600 */

#if _MSC_FULL_VER >= 140041204

#define InterlockedExchangeAdd8 _InterlockedExchangeAdd8
#define InterlockedAnd8 _InterlockedAnd8
#define InterlockedOr8 _InterlockedOr8
#define InterlockedXor8 _InterlockedXor8
#define InterlockedAnd16 _InterlockedAnd16
#define InterlockedOr16 _InterlockedOr16
#define InterlockedXor16 _InterlockedXor16

char
InterlockedExchangeAdd8 (
    _Inout_ _Interlocked_operand_ char volatile * _Addend,
    _In_ char _Value
    );

char
InterlockedAnd8 (
    _Inout_ _Interlocked_operand_ char volatile *Destination,
    _In_ char Value
    );

char
InterlockedOr8 (
    _Inout_ _Interlocked_operand_ char volatile *Destination,
    _In_ char Value
    );

char
InterlockedXor8 (
    _Inout_ _Interlocked_operand_ char volatile *Destination,
    _In_ char Value
    );

SHORT
InterlockedAnd16(
    _Inout_ _Interlocked_operand_ SHORT volatile *Destination,
    _In_ SHORT Value
    );

SHORT
InterlockedOr16(
    _Inout_ _Interlocked_operand_ SHORT volatile *Destination,
    _In_ SHORT Value
    );

SHORT
InterlockedXor16(
    _Inout_ _Interlocked_operand_ SHORT volatile *Destination,
    _In_ SHORT Value
    );

#pragma intrinsic (_InterlockedExchangeAdd8)
#pragma intrinsic (_InterlockedAnd8)
#pragma intrinsic (_InterlockedOr8)
#pragma intrinsic (_InterlockedXor8)
#pragma intrinsic (_InterlockedAnd16)
#pragma intrinsic (_InterlockedOr16)
#pragma intrinsic (_InterlockedXor16)

#endif

// end_ntoshvp

//
// Define extended CPUID intrinsic.
//

#define CpuIdEx __cpuidex

VOID
__cpuidex (
    int CPUInfo[4],
    int Function,
    int SubLeaf
    );

#pragma intrinsic(__cpuidex)

// begin_ntoshvp

//
// Define function to flush a cache line.
//

#define CacheLineFlush(Address) _mm_clflush(Address)

VOID
_mm_clflush (
    _In_ VOID const *Address
    );

#pragma intrinsic(_mm_clflush)

// begin_sdfwdm
// begin_wudfpwdm

VOID
_ReadWriteBarrier (
    VOID
    );

#pragma intrinsic(_ReadWriteBarrier)

//
// Define memory fence intrinsics
//

#define FastFence __faststorefence

// end_wudfpwdm
// end_sdfwdm

#define LoadFence _mm_lfence
#define MemoryFence _mm_mfence
#define StoreFence _mm_sfence

// begin_sdfwdm
// begin_wudfpwdm

VOID
__faststorefence (
    VOID
    );

// end_wudfpwdm
// end_sdfwdm

VOID
_mm_lfence (
    VOID
    );

VOID
_mm_mfence (
    VOID
    );

VOID
_mm_sfence (
    VOID
    );

VOID
_mm_pause (
    VOID
    );

VOID
_mm_prefetch (
    _In_ CHAR CONST *a,
    _In_ int sel
    );

VOID
_m_prefetchw (
    _In_ volatile CONST VOID *Source
    );

//
// Define constants for use with _mm_prefetch.
//

#define _MM_HINT_T0     1
#define _MM_HINT_T1     2
#define _MM_HINT_T2     3
#define _MM_HINT_NTA    0

// begin_sdfwdm
// begin_wudfpwdm

#pragma intrinsic(__faststorefence)

// end_wudfpwdm
// end_sdfwdm

#pragma intrinsic(_mm_pause)
#pragma intrinsic(_mm_prefetch)
#pragma intrinsic(_mm_lfence)
#pragma intrinsic(_mm_mfence)
#pragma intrinsic(_mm_sfence)
#pragma intrinsic(_m_prefetchw)

#define YieldProcessor _mm_pause
#define MemoryBarrier __faststorefence
#define PreFetchCacheLine(l, a)  _mm_prefetch((CHAR CONST *) a, l)
#define PrefetchForWrite(p) _m_prefetchw(p)
#define ReadForWriteAccess(p) (_m_prefetchw(p), *(p))

//
// PreFetchCacheLine level defines.
//

#define PF_TEMPORAL_LEVEL_1 _MM_HINT_T0
#define PF_TEMPORAL_LEVEL_2 _MM_HINT_T1
#define PF_TEMPORAL_LEVEL_3 _MM_HINT_T2
#define PF_NON_TEMPORAL_LEVEL_ALL _MM_HINT_NTA

//
// Define get/set MXCSR intrinsics.
//

#define ReadMxCsr _mm_getcsr
#define WriteMxCsr _mm_setcsr

unsigned int
_mm_getcsr (
    VOID
    );

VOID
_mm_setcsr (
    _In_ unsigned int MxCsr
    );

#pragma intrinsic(_mm_getcsr)
#pragma intrinsic(_mm_setcsr)

//
// Define function to get the caller's EFLAGs value.
//

#define GetCallersEflags() __getcallerseflags()

unsigned __int32
__getcallerseflags (
    VOID
    );

#pragma intrinsic(__getcallerseflags)

//
// Define function to get segment limit.
//

#define GetSegmentLimit __segmentlimit

ULONG
__segmentlimit (
    _In_ ULONG Selector
    );

#pragma intrinsic(__segmentlimit)

//
// Define function to read the value of a performance counter.
//

#define ReadPMC __readpmc

ULONG64
__readpmc (
    _In_ ULONG Counter
    );

#pragma intrinsic(__readpmc)

//
// Define function to read the value of the time stamp counter
//

#define ReadTimeStampCounter() __rdtsc()

ULONG64
__rdtsc (
    VOID
    );

#pragma intrinsic(__rdtsc)

//
// Define functions to move strings as bytes, words, dwords, and qwords.
//

VOID
__movsb (
    _Out_writes_all_(Count) PUCHAR Destination,
    _In_reads_(Count) UCHAR const *Source,
    _In_ SIZE_T Count
    );

VOID
__movsw (
    _Out_writes_all_(Count) PUSHORT Destination,
    _In_reads_(Count) USHORT const *Source,
    _In_ SIZE_T Count
    );

VOID
__movsd (
    _Out_writes_all_(Count) PULONG Destination,
    _In_reads_(Count) ULONG const *Source,
    _In_ SIZE_T Count
    );

VOID
__movsq (
    _Out_writes_all_(Count) PULONG64 Destination,
    _In_reads_(Count) ULONG64 const *Source,
    _In_ SIZE_T Count
    );

#pragma intrinsic(__movsb)
#pragma intrinsic(__movsw)
#pragma intrinsic(__movsd)
#pragma intrinsic(__movsq)

//
// Define functions to store strings as bytes, words, dwords, and qwords.
//

VOID
__stosb (
    _Out_writes_all_(Count) PUCHAR Destination,
    _In_ UCHAR Value,
    _In_ SIZE_T Count
    );

VOID
__stosw (
    _Out_writes_all_(Count) PUSHORT Destination,
    _In_ USHORT Value,
    _In_ SIZE_T Count
    );

VOID
__stosd (
    _Out_writes_all_(Count) PULONG Destination,
    _In_ ULONG Value,
    _In_ SIZE_T Count
    );

VOID
__stosq (
    _Out_writes_all_(Count) PULONG64 Destination,
    _In_ ULONG64 Value,
    _In_ SIZE_T Count
    );

#pragma intrinsic(__stosb)
#pragma intrinsic(__stosw)
#pragma intrinsic(__stosd)
#pragma intrinsic(__stosq)

//
// Define functions to capture the high 64-bits of a 128-bit multiply.
//

#define MultiplyHigh __mulh
#define UnsignedMultiplyHigh __umulh

LONGLONG
MultiplyHigh (
    _In_ LONG64 Multiplier,
    _In_ LONG64 Multiplicand
    );

ULONGLONG
UnsignedMultiplyHigh (
    _In_ ULONG64 Multiplier,
    _In_ ULONG64 Multiplicand
    );

#pragma intrinsic(__mulh)
#pragma intrinsic(__umulh)

//
// Define population count intrinsic.
//

#define PopulationCount64 __popcnt64

ULONG64
PopulationCount64 (
    _In_ ULONG64 operand
    );

#if _MSC_VER >= 1500

#pragma intrinsic(__popcnt64)

#endif

//
// Define functions to perform 128-bit shifts
//

#define ShiftLeft128 __shiftleft128
#define ShiftRight128 __shiftright128

ULONG64
ShiftLeft128 (
    _In_ ULONG64 LowPart,
    _In_ ULONG64 HighPart,
    _In_ UCHAR Shift
    );

ULONG64
ShiftRight128 (
    _In_ ULONG64 LowPart,
    _In_ ULONG64 HighPart,
    _In_ UCHAR Shift
    );

#pragma intrinsic(__shiftleft128)
#pragma intrinsic(__shiftright128)

//
// Define functions to perform 128-bit multiplies.
//

#define Multiply128 _mul128

LONG64
Multiply128 (
    _In_ LONG64 Multiplier,
    _In_ LONG64 Multiplicand,
    _Out_ LONG64 *HighProduct
    );

#pragma intrinsic(_mul128)

#ifndef UnsignedMultiply128

#define UnsignedMultiply128 _umul128

ULONG64
UnsignedMultiply128 (
    _In_ ULONG64 Multiplier,
    _In_ ULONG64 Multiplicand,
    _Out_ ULONG64 *HighProduct
    );

#pragma intrinsic(_umul128)

#endif

__forceinline
LONG64
MultiplyExtract128 (
    _In_ LONG64 Multiplier,
    _In_ LONG64 Multiplicand,
    _In_ UCHAR Shift
    )

{

    LONG64 extractedProduct;
    LONG64 highProduct;
    LONG64 lowProduct;
    BOOLEAN negate;
    ULONG64 uhighProduct;
    ULONG64 ulowProduct;

    lowProduct = Multiply128(Multiplier, Multiplicand, &highProduct);
    negate = FALSE;
    uhighProduct = (ULONG64)highProduct;
    ulowProduct = (ULONG64)lowProduct;
    if (highProduct < 0) {
        negate = TRUE;
        uhighProduct = (ULONG64)(-highProduct);
        ulowProduct = (ULONG64)(-lowProduct);
        if (ulowProduct != 0) {
            uhighProduct -= 1;
        }
    }

    extractedProduct = (LONG64)ShiftRight128(ulowProduct, uhighProduct, Shift);
    if (negate != FALSE) {
        extractedProduct = -extractedProduct;
    }

    return extractedProduct;
}

__forceinline
ULONG64
UnsignedMultiplyExtract128 (
    _In_ ULONG64 Multiplier,
    _In_ ULONG64 Multiplicand,
    _In_ UCHAR Shift
    )

{

    ULONG64 extractedProduct;
    ULONG64 highProduct;
    ULONG64 lowProduct;

    lowProduct = UnsignedMultiply128(Multiplier, Multiplicand, &highProduct);
    extractedProduct = ShiftRight128(lowProduct, highProduct, Shift);
    return extractedProduct;
}

//
// Define functions to read and write the uer TEB and the system PCR/PRCB.
//

UCHAR
__readgsbyte (
    _In_ ULONG Offset
    );

USHORT
__readgsword (
    _In_ ULONG Offset
    );

ULONG
__readgsdword (
    _In_ ULONG Offset
    );

ULONG64
__readgsqword (
    _In_ ULONG Offset
    );

VOID
__writegsbyte (
    _In_ ULONG Offset,
    _In_ UCHAR Data
    );

VOID
__writegsword (
    _In_ ULONG Offset,
    _In_ USHORT Data
    );

VOID
__writegsdword (
    _In_ ULONG Offset,
    _In_ ULONG Data
    );

VOID
__writegsqword (
    _In_ ULONG Offset,
    _In_ ULONG64 Data
    );

#pragma intrinsic(__readgsbyte)
#pragma intrinsic(__readgsword)
#pragma intrinsic(__readgsdword)
#pragma intrinsic(__readgsqword)
#pragma intrinsic(__writegsbyte)
#pragma intrinsic(__writegsword)
#pragma intrinsic(__writegsdword)
#pragma intrinsic(__writegsqword)

#if !defined(_MANAGED)

VOID
__incgsbyte (
    _In_ ULONG Offset
    );

VOID
__addgsbyte (
    _In_ ULONG Offset,
    _In_ UCHAR Value
    );

VOID
__incgsword (
    _In_ ULONG Offset
    );

VOID
__addgsword (
    _In_ ULONG Offset,
    _In_ USHORT Value
    );

VOID
__incgsdword (
    _In_ ULONG Offset
    );

VOID
__addgsdword (
    _In_ ULONG Offset,
    _In_ ULONG Value
    );

VOID
__incgsqword (
    _In_ ULONG Offset
    );

VOID
__addgsqword (
    _In_ ULONG Offset,
    _In_ ULONG64 Value
    );

#if 0
#pragma intrinsic(__incgsbyte)
#pragma intrinsic(__addgsbyte)
#pragma intrinsic(__incgsword)
#pragma intrinsic(__addgsword)
#pragma intrinsic(__incgsdword)
#pragma intrinsic(__addgsdword)
#pragma intrinsic(__incgsqword)
#pragma intrinsic(__addgsqword)
#endif

#endif // !defined(_MANAGED)


#ifdef __cplusplus
}
#endif

#endif // defined(_M_AMD64) && !defined(RC_INVOKED) && !defined(MIDL_PASS)

// end_ntoshvp
// begin_ntoshvp
// begin_sdfwdm

#endif // _AMD64_

// end_sdfwdm
// end_ntoshvp

#ifdef _ARM_


#if defined(_M_ARM) && !defined(RC_INVOKED) && !defined(MIDL_PASS)

#include <intrin.h>

#if !defined(_M_CEE_PURE)

#ifdef __cplusplus
extern "C" {
#endif

//
// Memory barriers and prefetch intrinsics.
//

#pragma intrinsic(__yield)
#pragma intrinsic(__prefetch)

#if (_MSC_FULL_VER >= 170040825)
#pragma intrinsic(__dmb)
#pragma intrinsic(__dsb)
#pragma intrinsic(__isb)
#else
#define __dmb(x) { __emit(0xF3BF); __emit(0x8F5F); }
#define __dsb(x) { __emit(0xF3BF); __emit(0x8F4F); }
#define __isb(x) { __emit(0xF3BF); __emit(0x8F6F); }
#endif

#pragma intrinsic(_ReadWriteBarrier)
#pragma intrinsic(_WriteBarrier)

FORCEINLINE
VOID
YieldProcessor (
    VOID
    )
{
    __dmb(_ARM_BARRIER_ISHST);
    __yield();
}

#define MemoryBarrier()             __dmb(_ARM_BARRIER_SY)
#define PreFetchCacheLine(l,a)      __prefetch((const void *) (a))
#define PrefetchForWrite(p)         __prefetch((const void *) (p))
#define ReadForWriteAccess(p)       (*(p))

#define _DataSynchronizationBarrier()        __dsb(_ARM_BARRIER_SY)
#define _InstructionSynchronizationBarrier() __isb(_ARM_BARRIER_SY)

//
// Define bit test intrinsics.
//

#define BitTest _bittest
#define BitTestAndComplement _bittestandcomplement
#define BitTestAndSet _bittestandset
#define BitTestAndReset _bittestandreset
#define InterlockedBitTestAndSet _interlockedbittestandset
#define InterlockedBitTestAndSetAcquire _interlockedbittestandset_acq
#define InterlockedBitTestAndSetRelease _interlockedbittestandset_rel
#define InterlockedBitTestAndSetNoFence _interlockedbittestandset_nf
#define InterlockedBitTestAndReset _interlockedbittestandreset
#define InterlockedBitTestAndResetAcquire _interlockedbittestandreset_acq
#define InterlockedBitTestAndResetRelease _interlockedbittestandreset_rel
#define InterlockedBitTestAndResetNoFence _interlockedbittestandreset_nf

#pragma intrinsic(_bittest)
#pragma intrinsic(_bittestandcomplement)
#pragma intrinsic(_bittestandset)
#pragma intrinsic(_bittestandreset)
#pragma intrinsic(_interlockedbittestandset)
#pragma intrinsic(_interlockedbittestandset_acq)
#pragma intrinsic(_interlockedbittestandset_rel)
#pragma intrinsic(_interlockedbittestandset_nf)
#pragma intrinsic(_interlockedbittestandreset)
#pragma intrinsic(_interlockedbittestandreset_acq)
#pragma intrinsic(_interlockedbittestandreset_rel)
#pragma intrinsic(_interlockedbittestandreset_nf)

//
// Define bit scan functions
//

#define BitScanForward _BitScanForward
#define BitScanReverse _BitScanReverse

#pragma intrinsic(_BitScanForward)
#pragma intrinsic(_BitScanReverse)

//
// Interlocked intrinsic functions.
//

#pragma intrinsic(_InterlockedAnd8)
#pragma intrinsic(_InterlockedOr8)
#pragma intrinsic(_InterlockedXor8)
#pragma intrinsic(_InterlockedExchangeAdd8)

#pragma intrinsic(_InterlockedAnd16)
#pragma intrinsic(_InterlockedOr16)
#pragma intrinsic(_InterlockedXor16)
#pragma intrinsic(_InterlockedIncrement16)
#pragma intrinsic(_InterlockedDecrement16)
#pragma intrinsic(_InterlockedCompareExchange16)

#pragma intrinsic(_InterlockedAnd)
#pragma intrinsic(_InterlockedOr)
#pragma intrinsic(_InterlockedXor)
#pragma intrinsic(_InterlockedIncrement)
#pragma intrinsic(_InterlockedDecrement)
#pragma intrinsic(_InterlockedExchange)
#pragma intrinsic(_InterlockedExchangeAdd)
#pragma intrinsic(_InterlockedCompareExchange)

#pragma intrinsic(_InterlockedAnd64)
#pragma intrinsic(_InterlockedOr64)
#pragma intrinsic(_InterlockedXor64)
#pragma intrinsic(_InterlockedIncrement64)
#pragma intrinsic(_InterlockedDecrement64)
#pragma intrinsic(_InterlockedExchange64)
#pragma intrinsic(_InterlockedCompareExchange64)

#pragma intrinsic(_InterlockedExchangePointer)
#pragma intrinsic(_InterlockedCompareExchangePointer)

#define InterlockedAnd8 _InterlockedAnd8
#define InterlockedOr8 _InterlockedOr8
#define InterlockedXor8 _InterlockedXor8
#define InterlockedExchangeAdd8 _InterlockedExchangeAdd8

#define InterlockedAnd16 _InterlockedAnd16
#define InterlockedOr16 _InterlockedOr16
#define InterlockedXor16 _InterlockedXor16
#define InterlockedIncrement16 _InterlockedIncrement16
#define InterlockedDecrement16 _InterlockedDecrement16
#define InterlockedCompareExchange16 _InterlockedCompareExchange16

#define InterlockedAnd _InterlockedAnd
#define InterlockedOr _InterlockedOr
#define InterlockedXor _InterlockedXor
#define InterlockedIncrement _InterlockedIncrement
#define InterlockedDecrement _InterlockedDecrement
#define InterlockedAdd _InterlockedAdd
#define InterlockedExchange _InterlockedExchange
#define InterlockedExchangeAdd _InterlockedExchangeAdd
#define InterlockedCompareExchange _InterlockedCompareExchange

#define InterlockedAnd64 _InterlockedAnd64
#define InterlockedAndAffinity InterlockedAnd64
#define InterlockedOr64 _InterlockedOr64
#define InterlockedOrAffinity InterlockedOr64
#define InterlockedXor64 _InterlockedXor64
#define InterlockedIncrement64 _InterlockedIncrement64
#define InterlockedDecrement64 _InterlockedDecrement64
#define InterlockedAdd64 _InterlockedAdd64
#define InterlockedExchange64 _InterlockedExchange64
#define InterlockedExchangeAdd64 _InterlockedExchangeAdd64
#define InterlockedCompareExchange64 _InterlockedCompareExchange64

#define InterlockedExchangePointer _InterlockedExchangePointer
#define InterlockedCompareExchangePointer _InterlockedCompareExchangePointer

#pragma intrinsic(_InterlockedExchange16)
#define InterlockedExchange16 _InterlockedExchange16

#pragma intrinsic(_InterlockedAnd8_acq)
#pragma intrinsic(_InterlockedAnd8_rel)
#pragma intrinsic(_InterlockedAnd8_nf)
#pragma intrinsic(_InterlockedOr8_acq)
#pragma intrinsic(_InterlockedOr8_rel)
#pragma intrinsic(_InterlockedOr8_nf)
#pragma intrinsic(_InterlockedXor8_acq)
#pragma intrinsic(_InterlockedXor8_rel)
#pragma intrinsic(_InterlockedXor8_nf)

#pragma intrinsic(_InterlockedAnd16_acq)
#pragma intrinsic(_InterlockedAnd16_rel)
#pragma intrinsic(_InterlockedAnd16_nf)
#pragma intrinsic(_InterlockedOr16_acq)
#pragma intrinsic(_InterlockedOr16_rel)
#pragma intrinsic(_InterlockedOr16_nf)
#pragma intrinsic(_InterlockedXor16_acq)
#pragma intrinsic(_InterlockedXor16_rel)
#pragma intrinsic(_InterlockedXor16_nf)
#pragma intrinsic(_InterlockedIncrement16_acq)
#pragma intrinsic(_InterlockedIncrement16_rel)
#pragma intrinsic(_InterlockedIncrement16_nf)
#pragma intrinsic(_InterlockedDecrement16_acq)
#pragma intrinsic(_InterlockedDecrement16_rel)
#pragma intrinsic(_InterlockedDecrement16_nf)
#pragma intrinsic(_InterlockedExchange16_acq)
#pragma intrinsic(_InterlockedExchange16_nf)
#pragma intrinsic(_InterlockedCompareExchange16_acq)
#pragma intrinsic(_InterlockedCompareExchange16_rel)
#pragma intrinsic(_InterlockedCompareExchange16_nf)

#pragma intrinsic(_InterlockedAnd_acq)
#pragma intrinsic(_InterlockedAnd_rel)
#pragma intrinsic(_InterlockedAnd_nf)
#pragma intrinsic(_InterlockedOr_acq)
#pragma intrinsic(_InterlockedOr_rel)
#pragma intrinsic(_InterlockedOr_nf)
#pragma intrinsic(_InterlockedXor_acq)
#pragma intrinsic(_InterlockedXor_rel)
#pragma intrinsic(_InterlockedXor_nf)
#pragma intrinsic(_InterlockedIncrement_acq)
#pragma intrinsic(_InterlockedIncrement_rel)
#pragma intrinsic(_InterlockedIncrement_nf)
#pragma intrinsic(_InterlockedDecrement_acq)
#pragma intrinsic(_InterlockedDecrement_rel)
#pragma intrinsic(_InterlockedDecrement_nf)
#pragma intrinsic(_InterlockedExchange_acq)
#pragma intrinsic(_InterlockedExchange_nf)
#pragma intrinsic(_InterlockedExchangeAdd_acq)
#pragma intrinsic(_InterlockedExchangeAdd_rel)
#pragma intrinsic(_InterlockedExchangeAdd_nf)
#pragma intrinsic(_InterlockedCompareExchange_acq)
#pragma intrinsic(_InterlockedCompareExchange_rel)
#pragma intrinsic(_InterlockedCompareExchange_nf)

#pragma intrinsic(_InterlockedAnd64_acq)
#pragma intrinsic(_InterlockedAnd64_rel)
#pragma intrinsic(_InterlockedAnd64_nf)
#pragma intrinsic(_InterlockedOr64_acq)
#pragma intrinsic(_InterlockedOr64_rel)
#pragma intrinsic(_InterlockedOr64_nf)
#pragma intrinsic(_InterlockedXor64_acq)
#pragma intrinsic(_InterlockedXor64_rel)
#pragma intrinsic(_InterlockedXor64_nf)
#pragma intrinsic(_InterlockedIncrement64_acq)
#pragma intrinsic(_InterlockedIncrement64_rel)
#pragma intrinsic(_InterlockedIncrement64_nf)
#pragma intrinsic(_InterlockedDecrement64_acq)
#pragma intrinsic(_InterlockedDecrement64_rel)
#pragma intrinsic(_InterlockedDecrement64_nf)
#pragma intrinsic(_InterlockedExchange64_acq)
#pragma intrinsic(_InterlockedExchange64_nf)
#pragma intrinsic(_InterlockedCompareExchange64_acq)
#pragma intrinsic(_InterlockedCompareExchange64_rel)
#pragma intrinsic(_InterlockedCompareExchange64_nf)

#pragma intrinsic(_InterlockedExchangePointer_acq)
#pragma intrinsic(_InterlockedExchangePointer_nf)
#pragma intrinsic(_InterlockedCompareExchangePointer_acq)
#pragma intrinsic(_InterlockedCompareExchangePointer_rel)
#pragma intrinsic(_InterlockedCompareExchangePointer_nf)

#define InterlockedAndAcquire8 _InterlockedAnd8_acq
#define InterlockedAndRelease8 _InterlockedAnd8_rel
#define InterlockedAndNoFence8 _InterlockedAnd8_nf
#define InterlockedOrAcquire8 _InterlockedOr8_acq
#define InterlockedOrRelease8 _InterlockedOr8_rel
#define InterlockedOrNoFence8 _InterlockedOr8_nf
#define InterlockedXorAcquire8 _InterlockedXor8_acq
#define InterlockedXorRelease8 _InterlockedXor8_rel
#define InterlockedXorNoFence8 _InterlockedXor8_nf

#define InterlockedAndAcquire16 _InterlockedAnd16_acq
#define InterlockedAndRelease16 _InterlockedAnd16_rel
#define InterlockedAndNoFence16 _InterlockedAnd16_nf
#define InterlockedOrAcquire16 _InterlockedOr16_acq
#define InterlockedOrRelease16 _InterlockedOr16_rel
#define InterlockedOrNoFence16 _InterlockedOr16_nf
#define InterlockedXorAcquire16 _InterlockedXor16_acq
#define InterlockedXorRelease16 _InterlockedXor16_rel
#define InterlockedXorNoFence16 _InterlockedXor16_nf
#define InterlockedIncrementAcquire16 _InterlockedIncrement16_acq
#define InterlockedIncrementRelease16 _InterlockedIncrement16_rel
#define InterlockedIncrementNoFence16 _InterlockedIncrement16_nf
#define InterlockedDecrementAcquire16 _InterlockedDecrement16_acq
#define InterlockedDecrementRelease16 _InterlockedDecrement16_rel
#define InterlockedDecrementNoFence16 _InterlockedDecrement16_nf
#define InterlockedExchangeAcquire16 _InterlockedExchange16_acq
#define InterlockedExchangeNoFence16 _InterlockedExchange16_nf
#define InterlockedCompareExchangeAcquire16 _InterlockedCompareExchange16_acq
#define InterlockedCompareExchangeRelease16 _InterlockedCompareExchange16_rel
#define InterlockedCompareExchangeNoFence16 _InterlockedCompareExchange16_nf

#define InterlockedAndAcquire _InterlockedAnd_acq
#define InterlockedAndRelease _InterlockedAnd_rel
#define InterlockedAndNoFence _InterlockedAnd_nf
#define InterlockedOrAcquire _InterlockedOr_acq
#define InterlockedOrRelease _InterlockedOr_rel
#define InterlockedOrNoFence _InterlockedOr_nf
#define InterlockedXorAcquire _InterlockedXor_acq
#define InterlockedXorRelease _InterlockedXor_rel
#define InterlockedXorNoFence _InterlockedXor_nf
#define InterlockedIncrementAcquire _InterlockedIncrement_acq
#define InterlockedIncrementRelease _InterlockedIncrement_rel
#define InterlockedIncrementNoFence _InterlockedIncrement_nf
#define InterlockedDecrementAcquire _InterlockedDecrement_acq
#define InterlockedDecrementRelease _InterlockedDecrement_rel
#define InterlockedDecrementNoFence _InterlockedDecrement_nf
#define InterlockedAddAcquire _InterlockedAdd_acq
#define InterlockedAddRelease _InterlockedAdd_rel
#define InterlockedAddNoFence _InterlockedAdd_nf
#define InterlockedExchangeAcquire _InterlockedExchange_acq
#define InterlockedExchangeNoFence _InterlockedExchange_nf
#define InterlockedExchangeAddAcquire _InterlockedExchangeAdd_acq
#define InterlockedExchangeAddRelease _InterlockedExchangeAdd_rel
#define InterlockedExchangeAddNoFence _InterlockedExchangeAdd_nf
#define InterlockedCompareExchangeAcquire _InterlockedCompareExchange_acq
#define InterlockedCompareExchangeRelease _InterlockedCompareExchange_rel
#define InterlockedCompareExchangeNoFence _InterlockedCompareExchange_nf

#define InterlockedAndAcquire64 _InterlockedAnd64_acq
#define InterlockedAndRelease64 _InterlockedAnd64_rel
#define InterlockedAndNoFence64 _InterlockedAnd64_nf
#define InterlockedOrAcquire64 _InterlockedOr64_acq
#define InterlockedOrRelease64 _InterlockedOr64_rel
#define InterlockedOrNoFence64 _InterlockedOr64_nf
#define InterlockedXorAcquire64 _InterlockedXor64_acq
#define InterlockedXorRelease64 _InterlockedXor64_rel
#define InterlockedXorNoFence64 _InterlockedXor64_nf
#define InterlockedIncrementAcquire64 _InterlockedIncrement64_acq
#define InterlockedIncrementRelease64 _InterlockedIncrement64_rel
#define InterlockedIncrementNoFence64 _InterlockedIncrement64_nf
#define InterlockedDecrementAcquire64 _InterlockedDecrement64_acq
#define InterlockedDecrementRelease64 _InterlockedDecrement64_rel
#define InterlockedDecrementNoFence64 _InterlockedDecrement64_nf
#define InterlockedAddAcquire64 _InterlockedAdd64_acq
#define InterlockedAddRelease64 _InterlockedAdd64_rel
#define InterlockedAddNoFence64 _InterlockedAdd64_nf
#define InterlockedExchangeAcquire64 _InterlockedExchange64_acq
#define InterlockedExchangeNoFence64 _InterlockedExchange64_nf
#define InterlockedExchangeAddAcquire64 _InterlockedExchangeAdd64_acq
#define InterlockedExchangeAddRelease64 _InterlockedExchangeAdd64_rel
#define InterlockedExchangeAddNoFence64 _InterlockedExchangeAdd64_nf
#define InterlockedCompareExchangeAcquire64 _InterlockedCompareExchange64_acq
#define InterlockedCompareExchangeRelease64 _InterlockedCompareExchange64_rel
#define InterlockedCompareExchangeNoFence64 _InterlockedCompareExchange64_nf

#define InterlockedExchangePointerAcquire _InterlockedExchangePointer_acq
#define InterlockedExchangePointerNoFence _InterlockedExchangePointer_nf
#define InterlockedCompareExchangePointerAcquire _InterlockedCompareExchangePointer_acq
#define InterlockedCompareExchangePointerRelease _InterlockedCompareExchangePointer_rel
#define InterlockedCompareExchangePointerNoFence _InterlockedCompareExchangePointer_nf

#define InterlockedExchangeAddSizeT(a, b) InterlockedExchangeAdd((LONG *)a, b)
#define InterlockedExchangeAddSizeTAcquire(a, b) InterlockedExchangeAddAcquire((LONG *)a, b)
#define InterlockedExchangeAddSizeTNoFence(a, b) InterlockedExchangeAddNoFence((LONG *)a, b)
#define InterlockedIncrementSizeT(a) InterlockedIncrement((LONG *)a)
#define InterlockedIncrementSizeTNoFence(a) InterlockedIncrementNoFence((LONG *)a)
#define InterlockedDecrementSizeT(a) InterlockedDecrement((LONG *)a)
#define InterlockedDecrementSizeTNoFence(a) InterlockedDecrementNoFence((LONG *)a)

//
// Define accessors for volatile loads and stores.
//

#pragma intrinsic(__iso_volatile_load8)
#pragma intrinsic(__iso_volatile_load16)
#pragma intrinsic(__iso_volatile_load32)
#pragma intrinsic(__iso_volatile_load64)
#pragma intrinsic(__iso_volatile_store8)
#pragma intrinsic(__iso_volatile_store16)
#pragma intrinsic(__iso_volatile_store32)
#pragma intrinsic(__iso_volatile_store64)


FORCEINLINE
CHAR
ReadAcquire8 (
    _In_ _Interlocked_operand_ CHAR const volatile *Source
    )

{

    CHAR Value;

    Value = __iso_volatile_load8(Source);
    __dmb(_ARM_BARRIER_ISH);
    return Value;
}

FORCEINLINE
CHAR
ReadNoFence8 (
    _In_ _Interlocked_operand_ CHAR const volatile *Source
    )

{

    CHAR Value;

    Value = __iso_volatile_load8(Source);
    return Value;
}

FORCEINLINE
VOID
WriteRelease8 (
    _Out_ _Interlocked_operand_ CHAR volatile *Destination,
    _In_ CHAR Value
    )

{

    __dmb(_ARM_BARRIER_ISH);
    __iso_volatile_store8(Destination, Value);
    return;
}

FORCEINLINE
VOID
WriteNoFence8 (
    _Out_ _Interlocked_operand_ CHAR volatile *Destination,
    _In_ CHAR Value
    )

{

    __iso_volatile_store8(Destination, Value);
    return;
}

FORCEINLINE
SHORT
ReadAcquire16 (
    _In_ _Interlocked_operand_ SHORT const volatile *Source
    )

{

    SHORT Value;

    Value = __iso_volatile_load16(Source);
    __dmb(_ARM_BARRIER_ISH);
    return Value;
}

FORCEINLINE
SHORT
ReadNoFence16 (
    _In_ _Interlocked_operand_ SHORT const volatile *Source
    )

{

    SHORT Value;

    Value = __iso_volatile_load16(Source);
    return Value;
}

FORCEINLINE
VOID
WriteRelease16 (
    _Out_ _Interlocked_operand_ SHORT volatile *Destination,
    _In_ SHORT Value
    )

{

    __dmb(_ARM_BARRIER_ISH);
    __iso_volatile_store16(Destination, Value);
    return;
}

FORCEINLINE
VOID
WriteNoFence16 (
    _Out_ _Interlocked_operand_ SHORT volatile *Destination,
    _In_ SHORT Value
    )

{

    __iso_volatile_store16(Destination, Value);
    return;
}

FORCEINLINE
LONG
ReadAcquire (
    _In_ _Interlocked_operand_ LONG const volatile *Source
    )

{

    LONG Value;

    Value = __iso_volatile_load32((int *)Source);
    __dmb(_ARM_BARRIER_ISH);
    return Value;
}

FORCEINLINE
LONG
ReadNoFence (
    _In_ _Interlocked_operand_ LONG const volatile *Source
    )

{

    LONG Value;

    Value = __iso_volatile_load32((int *)Source);
    return Value;
}

CFORCEINLINE
VOID
WriteRelease (
    _Out_ _Interlocked_operand_ LONG volatile *Destination,
    _In_ LONG Value
    )

{

    __dmb(_ARM_BARRIER_ISH);
    __iso_volatile_store32((int *)Destination, Value);
    return;
}

FORCEINLINE
VOID
WriteNoFence (
    _Out_ _Interlocked_operand_ LONG volatile *Destination,
    _In_ LONG Value
    )

{

    __iso_volatile_store32((int *)Destination, Value);
    return;
}

FORCEINLINE
LONG64
ReadAcquire64 (
    _In_ _Interlocked_operand_ LONG64 const volatile *Source
    )

{

    LONG64 Value;

    Value = __iso_volatile_load64(Source);
    __dmb(_ARM_BARRIER_ISH);
    return Value;
}

FORCEINLINE
LONG64
ReadNoFence64 (
    _In_ _Interlocked_operand_ LONG64 const volatile *Source
    )

{

    LONG64 Value;

    Value = __iso_volatile_load64(Source);
    return Value;
}

CFORCEINLINE
VOID
WriteRelease64 (
    _Out_ _Interlocked_operand_ LONG64 volatile *Destination,
    _In_ LONG64 Value
    )

{

    __dmb(_ARM_BARRIER_ISH);
    __iso_volatile_store64(Destination, Value);
    return;
}

FORCEINLINE
VOID
WriteNoFence64 (
    _Out_ _Interlocked_operand_ LONG64 volatile *Destination,
    _In_ LONG64 Value
    )

{

    __iso_volatile_store64(Destination, Value);
    return;
}


//
// Define coprocessor access intrinsics.  Coprocessor 15 contains
// registers for the MMU, cache, TLB, feature bits, core
// identification and performance counters.
//

#define CP15_PMSELR            15, 0,  9, 12, 5         // Event Counter Selection Register
#define CP15_PMXEVCNTR         15, 0,  9, 13, 2         // Event Count Register
#define CP15_TPIDRURW          15, 0, 13,  0, 2         // Software Thread ID Register, User Read/Write
#define CP15_TPIDRURO          15, 0, 13,  0, 3         // Software Thread ID Register, User Read Only
#define CP15_TPIDRPRW          15, 0, 13,  0, 4         // Software Thread ID Register, Privileged Only

#pragma intrinsic(_MoveToCoprocessor)
#pragma intrinsic(_MoveFromCoprocessor)

//
// Coprocessor registers for synchronization
//

#define _InvalidateBTAC() _MoveToCoprocessor(0, CP15_BPIALL)

//
// PreFetchCacheLine level defines.
//

#define PF_TEMPORAL_LEVEL_1         0
#define PF_TEMPORAL_LEVEL_2         1
#define PF_TEMPORAL_LEVEL_3         2
#define PF_NON_TEMPORAL_LEVEL_ALL   3

//
// Define function to read the value of the time stamp counter which
// ARM doesn't have.
//

ULONG64
ReadTimeStampCounter(
    VOID
    );

FORCEINLINE
ULONG64
ReadPMC (
    _In_ ULONG Counter
    )
{

    _MoveToCoprocessor(Counter, CP15_PMSELR);
    return (ULONG64)_MoveFromCoprocessor(CP15_PMXEVCNTR);
}

#ifdef __cplusplus
}
#endif

#endif // !defined(_M_CEE_PURE)

#endif // defined(_M_ARM) && !defined(RC_INVOKED) && !defined(MIDL_PASS) && !defined(_M_CEE_PURE)

#if defined(_M_CEE_PURE)
FORCEINLINE
VOID
YieldProcessor (
    VOID
    )
{
}
#endif


#endif // _ARM_


#if defined(_ARM64_) || defined(_CHPE_X86_ARM64_)


#if !defined(_M_CEE_PURE)
#if !defined(RC_INVOKED) && !defined(MIDL_PASS)

#include <intrin.h>

#if defined(_M_ARM64)

#pragma intrinsic(__readx18byte)
#pragma intrinsic(__readx18word)
#pragma intrinsic(__readx18dword)
#pragma intrinsic(__readx18qword)

#pragma intrinsic(__writex18byte)
#pragma intrinsic(__writex18word)
#pragma intrinsic(__writex18dword)
#pragma intrinsic(__writex18qword)

#pragma intrinsic(__addx18byte)
#pragma intrinsic(__addx18word)
#pragma intrinsic(__addx18dword)
#pragma intrinsic(__addx18qword)

#pragma intrinsic(__incx18byte)
#pragma intrinsic(__incx18word)
#pragma intrinsic(__incx18dword)
#pragma intrinsic(__incx18qword)

//
// Define bit test intrinsics.
//

#define BitTest _bittest
#define BitTestAndComplement _bittestandcomplement
#define BitTestAndSet _bittestandset
#define BitTestAndReset _bittestandreset
#define InterlockedBitTestAndSet _interlockedbittestandset
#define InterlockedBitTestAndSetAcquire _interlockedbittestandset_acq
#define InterlockedBitTestAndSetRelease _interlockedbittestandset_rel
#define InterlockedBitTestAndSetNoFence _interlockedbittestandset_nf
#define InterlockedBitTestAndReset _interlockedbittestandreset
#define InterlockedBitTestAndResetAcquire _interlockedbittestandreset_acq
#define InterlockedBitTestAndResetRelease _interlockedbittestandreset_rel
#define InterlockedBitTestAndResetNoFence _interlockedbittestandreset_nf

#define BitTest64 _bittest64
#define BitTestAndComplement64 _bittestandcomplement64
#define BitTestAndSet64 _bittestandset64
#define BitTestAndReset64 _bittestandreset64
#define InterlockedBitTestAndSet64 _interlockedbittestandset64
#define InterlockedBitTestAndSet64Acquire _interlockedbittestandset64
#define InterlockedBitTestAndSet64Release _interlockedbittestandset64
#define InterlockedBitTestAndReset64 _interlockedbittestandreset64
#define InterlockedBitTestAndReset64Acquire _interlockedbittestandreset64
#define InterlockedBitTestAndReset64Release _interlockedbittestandreset64

#pragma intrinsic(_bittest)
#pragma intrinsic(_bittestandcomplement)
#pragma intrinsic(_bittestandset)
#pragma intrinsic(_bittestandreset)
#pragma intrinsic(_interlockedbittestandset)
#pragma intrinsic(_interlockedbittestandset_acq)
#pragma intrinsic(_interlockedbittestandset_rel)
#pragma intrinsic(_interlockedbittestandreset)
#pragma intrinsic(_interlockedbittestandreset_acq)
#pragma intrinsic(_interlockedbittestandreset_rel)

#pragma intrinsic(_bittest64)
#pragma intrinsic(_bittestandcomplement64)
#pragma intrinsic(_bittestandset64)
#pragma intrinsic(_bittestandreset64)

#pragma intrinsic(_interlockedbittestandset64)
#pragma intrinsic(_interlockedbittestandset64_acq)
#pragma intrinsic(_interlockedbittestandset64_rel)
#pragma intrinsic(_interlockedbittestandreset64)
#pragma intrinsic(_interlockedbittestandreset64_acq)
#pragma intrinsic(_interlockedbittestandreset64_rel)

//
// Define bit scan functions
//

#define BitScanForward _BitScanForward
#define BitScanReverse _BitScanReverse
#define BitScanForward64 _BitScanForward64
#define BitScanReverse64 _BitScanReverse64

#pragma intrinsic(_BitScanForward)
#pragma intrinsic(_BitScanReverse)
#pragma intrinsic(_BitScanForward64)
#pragma intrinsic(_BitScanReverse64)

//
// Interlocked intrinsic functions.
//

#pragma intrinsic(_InterlockedAnd8)
#pragma intrinsic(_InterlockedOr8)
#pragma intrinsic(_InterlockedXor8)
#pragma intrinsic(_InterlockedExchangeAdd8)

#pragma intrinsic(_InterlockedAnd16)
#pragma intrinsic(_InterlockedOr16)
#pragma intrinsic(_InterlockedXor16)
#pragma intrinsic(_InterlockedIncrement16)
#pragma intrinsic(_InterlockedDecrement16)
#pragma intrinsic(_InterlockedCompareExchange16)

#pragma intrinsic(_InterlockedAnd)
#pragma intrinsic(_InterlockedOr)
#pragma intrinsic(_InterlockedXor)
#pragma intrinsic(_InterlockedIncrement)
#pragma intrinsic(_InterlockedDecrement)
#pragma intrinsic(_InterlockedExchange)
#pragma intrinsic(_InterlockedExchangeAdd)
#pragma intrinsic(_InterlockedCompareExchange)

#pragma intrinsic(_InterlockedAnd64)
#pragma intrinsic(_InterlockedOr64)
#pragma intrinsic(_InterlockedXor64)
#pragma intrinsic(_InterlockedIncrement64)
#pragma intrinsic(_InterlockedDecrement64)
#pragma intrinsic(_InterlockedExchange64)
#pragma intrinsic(_InterlockedCompareExchange64)

#pragma intrinsic(_InterlockedCompareExchange128)
#pragma intrinsic(_InterlockedExchangePointer)
#pragma intrinsic(_InterlockedCompareExchangePointer)

#define InterlockedAnd8 _InterlockedAnd8
#define InterlockedOr8 _InterlockedOr8
#define InterlockedXor8 _InterlockedXor8
#define InterlockedExchangeAdd8 _InterlockedExchangeAdd8

#define InterlockedAnd16 _InterlockedAnd16
#define InterlockedOr16 _InterlockedOr16
#define InterlockedXor16 _InterlockedXor16
#define InterlockedIncrement16 _InterlockedIncrement16
#define InterlockedDecrement16 _InterlockedDecrement16
#define InterlockedCompareExchange16 _InterlockedCompareExchange16

#define InterlockedAnd _InterlockedAnd
#define InterlockedOr _InterlockedOr
#define InterlockedXor _InterlockedXor
#define InterlockedIncrement _InterlockedIncrement
#define InterlockedDecrement _InterlockedDecrement
#define InterlockedAdd _InterlockedAdd
#define InterlockedExchange _InterlockedExchange
#define InterlockedExchangeAdd _InterlockedExchangeAdd
#define InterlockedCompareExchange _InterlockedCompareExchange

#define InterlockedAnd64 _InterlockedAnd64
#define InterlockedAndAffinity InterlockedAnd64
#define InterlockedOr64 _InterlockedOr64
#define InterlockedOrAffinity InterlockedOr64
#define InterlockedXor64 _InterlockedXor64
#define InterlockedIncrement64 _InterlockedIncrement64
#define InterlockedDecrement64 _InterlockedDecrement64
#define InterlockedAdd64 _InterlockedAdd64
#define InterlockedExchange64 _InterlockedExchange64
#define InterlockedExchangeAdd64 _InterlockedExchangeAdd64
#define InterlockedCompareExchange64 _InterlockedCompareExchange64

#define InterlockedExchangePointer _InterlockedExchangePointer
#define InterlockedCompareExchangePointer _InterlockedCompareExchangePointer

#pragma intrinsic(_InterlockedExchange16)
#define InterlockedExchange16 _InterlockedExchange16

#pragma intrinsic(_InterlockedAnd8_acq)
#pragma intrinsic(_InterlockedAnd8_rel)
#pragma intrinsic(_InterlockedAnd8_nf)
#pragma intrinsic(_InterlockedOr8_acq)
#pragma intrinsic(_InterlockedOr8_rel)
#pragma intrinsic(_InterlockedOr8_nf)
#pragma intrinsic(_InterlockedXor8_acq)
#pragma intrinsic(_InterlockedXor8_rel)
#pragma intrinsic(_InterlockedXor8_nf)

#pragma intrinsic(_InterlockedAnd16_acq)
#pragma intrinsic(_InterlockedAnd16_rel)
#pragma intrinsic(_InterlockedAnd16_nf)
#pragma intrinsic(_InterlockedOr16_acq)
#pragma intrinsic(_InterlockedOr16_rel)
#pragma intrinsic(_InterlockedOr16_nf)
#pragma intrinsic(_InterlockedXor16_acq)
#pragma intrinsic(_InterlockedXor16_rel)
#pragma intrinsic(_InterlockedXor16_nf)
#pragma intrinsic(_InterlockedIncrement16_acq)
#pragma intrinsic(_InterlockedIncrement16_rel)
#pragma intrinsic(_InterlockedIncrement16_nf)
#pragma intrinsic(_InterlockedDecrement16_acq)
#pragma intrinsic(_InterlockedDecrement16_rel)
#pragma intrinsic(_InterlockedDecrement16_nf)
#pragma intrinsic(_InterlockedExchange16_acq)
#pragma intrinsic(_InterlockedExchange16_nf)
#pragma intrinsic(_InterlockedCompareExchange16_acq)
#pragma intrinsic(_InterlockedCompareExchange16_rel)
#pragma intrinsic(_InterlockedCompareExchange16_nf)

#pragma intrinsic(_InterlockedAnd_acq)
#pragma intrinsic(_InterlockedAnd_rel)
#pragma intrinsic(_InterlockedAnd_nf)
#pragma intrinsic(_InterlockedOr_acq)
#pragma intrinsic(_InterlockedOr_rel)
#pragma intrinsic(_InterlockedOr_nf)
#pragma intrinsic(_InterlockedXor_acq)
#pragma intrinsic(_InterlockedXor_rel)
#pragma intrinsic(_InterlockedXor_nf)
#pragma intrinsic(_InterlockedIncrement_acq)
#pragma intrinsic(_InterlockedIncrement_rel)
#pragma intrinsic(_InterlockedIncrement_nf)
#pragma intrinsic(_InterlockedDecrement_acq)
#pragma intrinsic(_InterlockedDecrement_rel)
#pragma intrinsic(_InterlockedDecrement_nf)
#pragma intrinsic(_InterlockedExchange_acq)
#pragma intrinsic(_InterlockedExchange_nf)
#pragma intrinsic(_InterlockedExchangeAdd_acq)
#pragma intrinsic(_InterlockedExchangeAdd_rel)
#pragma intrinsic(_InterlockedExchangeAdd_nf)
#pragma intrinsic(_InterlockedCompareExchange_rel)
#pragma intrinsic(_InterlockedCompareExchange_nf)

#pragma intrinsic(_InterlockedAnd64_acq)
#pragma intrinsic(_InterlockedAnd64_rel)
#pragma intrinsic(_InterlockedAnd64_nf)
#pragma intrinsic(_InterlockedOr64_acq)
#pragma intrinsic(_InterlockedOr64_rel)
#pragma intrinsic(_InterlockedOr64_nf)
#pragma intrinsic(_InterlockedXor64_acq)
#pragma intrinsic(_InterlockedXor64_rel)
#pragma intrinsic(_InterlockedXor64_nf)
#pragma intrinsic(_InterlockedIncrement64_acq)
#pragma intrinsic(_InterlockedIncrement64_rel)
#pragma intrinsic(_InterlockedIncrement64_nf)
#pragma intrinsic(_InterlockedDecrement64_acq)
#pragma intrinsic(_InterlockedDecrement64_rel)
#pragma intrinsic(_InterlockedDecrement64_nf)
#pragma intrinsic(_InterlockedExchange64_acq)
#pragma intrinsic(_InterlockedExchange64_nf)
#pragma intrinsic(_InterlockedCompareExchange64_acq)
#pragma intrinsic(_InterlockedCompareExchange64_rel)
#pragma intrinsic(_InterlockedCompareExchange64_nf)

#pragma intrinsic(_InterlockedExchangePointer_acq)
#pragma intrinsic(_InterlockedExchangePointer_nf)
#pragma intrinsic(_InterlockedCompareExchangePointer_acq)
#pragma intrinsic(_InterlockedCompareExchangePointer_rel)
#pragma intrinsic(_InterlockedCompareExchangePointer_nf)

#define InterlockedAndAcquire8 _InterlockedAnd8_acq
#define InterlockedAndRelease8 _InterlockedAnd8_rel
#define InterlockedAndNoFence8 _InterlockedAnd8_nf
#define InterlockedOrAcquire8 _InterlockedOr8_acq
#define InterlockedOrRelease8 _InterlockedOr8_rel
#define InterlockedOrNoFence8 _InterlockedOr8_nf
#define InterlockedXorAcquire8 _InterlockedXor8_acq
#define InterlockedXorRelease8 _InterlockedXor8_rel
#define InterlockedXorNoFence8 _InterlockedXor8_nf

#define InterlockedAndAcquire16 _InterlockedAnd16_acq
#define InterlockedAndRelease16 _InterlockedAnd16_rel
#define InterlockedAndNoFence16 _InterlockedAnd16_nf
#define InterlockedOrAcquire16 _InterlockedOr16_acq
#define InterlockedOrRelease16 _InterlockedOr16_rel
#define InterlockedOrNoFence16 _InterlockedOr16_nf
#define InterlockedXorAcquire16 _InterlockedXor16_acq
#define InterlockedXorRelease16 _InterlockedXor16_rel
#define InterlockedXorNoFence16 _InterlockedXor16_nf
#define InterlockedIncrementAcquire16 _InterlockedIncrement16_acq
#define InterlockedIncrementRelease16 _InterlockedIncrement16_rel
#define InterlockedIncrementNoFence16 _InterlockedIncrement16_nf
#define InterlockedDecrementAcquire16 _InterlockedDecrement16_acq
#define InterlockedDecrementRelease16 _InterlockedDecrement16_rel
#define InterlockedDecrementNoFence16 _InterlockedDecrement16_nf
#define InterlockedExchangeAcquire16 _InterlockedExchange16_acq
#define InterlockedExchangeNoFence16 _InterlockedExchange16_nf
#define InterlockedCompareExchangeAcquire16 _InterlockedCompareExchange16_acq
#define InterlockedCompareExchangeRelease16 _InterlockedCompareExchange16_rel
#define InterlockedCompareExchangeNoFence16 _InterlockedCompareExchange16_nf

#define InterlockedAndAcquire _InterlockedAnd_acq
#define InterlockedAndRelease _InterlockedAnd_rel
#define InterlockedAndNoFence _InterlockedAnd_nf
#define InterlockedOrAcquire _InterlockedOr_acq
#define InterlockedOrRelease _InterlockedOr_rel
#define InterlockedOrNoFence _InterlockedOr_nf
#define InterlockedXorAcquire _InterlockedXor_acq
#define InterlockedXorRelease _InterlockedXor_rel
#define InterlockedXorNoFence _InterlockedXor_nf
#define InterlockedIncrementAcquire _InterlockedIncrement_acq
#define InterlockedIncrementRelease _InterlockedIncrement_rel
#define InterlockedIncrementNoFence _InterlockedIncrement_nf
#define InterlockedDecrementAcquire _InterlockedDecrement_acq
#define InterlockedDecrementRelease _InterlockedDecrement_rel
#define InterlockedDecrementNoFence _InterlockedDecrement_nf
#define InterlockedAddAcquire _InterlockedAdd_acq
#define InterlockedAddRelease _InterlockedAdd_rel
#define InterlockedAddNoFence _InterlockedAdd_nf
#define InterlockedExchangeAcquire _InterlockedExchange_acq
#define InterlockedExchangeNoFence _InterlockedExchange_nf
#define InterlockedExchangeAddAcquire _InterlockedExchangeAdd_acq
#define InterlockedExchangeAddRelease _InterlockedExchangeAdd_rel
#define InterlockedExchangeAddNoFence _InterlockedExchangeAdd_nf
#define InterlockedCompareExchangeAcquire _InterlockedCompareExchange_acq
#define InterlockedCompareExchangeRelease _InterlockedCompareExchange_rel
#define InterlockedCompareExchangeNoFence _InterlockedCompareExchange_nf

#define InterlockedAndAcquire64 _InterlockedAnd64_acq
#define InterlockedAndRelease64 _InterlockedAnd64_rel
#define InterlockedAndNoFence64 _InterlockedAnd64_nf
#define InterlockedOrAcquire64 _InterlockedOr64_acq
#define InterlockedOrRelease64 _InterlockedOr64_rel
#define InterlockedOrNoFence64 _InterlockedOr64_nf
#define InterlockedXorAcquire64 _InterlockedXor64_acq
#define InterlockedXorRelease64 _InterlockedXor64_rel
#define InterlockedXorNoFence64 _InterlockedXor64_nf
#define InterlockedIncrementAcquire64 _InterlockedIncrement64_acq
#define InterlockedIncrementRelease64 _InterlockedIncrement64_rel
#define InterlockedIncrementNoFence64 _InterlockedIncrement64_nf
#define InterlockedDecrementAcquire64 _InterlockedDecrement64_acq
#define InterlockedDecrementRelease64 _InterlockedDecrement64_rel
#define InterlockedDecrementNoFence64 _InterlockedDecrement64_nf
#define InterlockedAddAcquire64 _InterlockedAdd64_acq
#define InterlockedAddRelease64 _InterlockedAdd64_rel
#define InterlockedAddNoFence64 _InterlockedAdd64_nf
#define InterlockedExchangeAcquire64 _InterlockedExchange64_acq
#define InterlockedExchangeNoFence64 _InterlockedExchange64_nf
#define InterlockedExchangeAddAcquire64 _InterlockedExchangeAdd64_acq
#define InterlockedExchangeAddRelease64 _InterlockedExchangeAdd64_rel
#define InterlockedExchangeAddNoFence64 _InterlockedExchangeAdd64_nf
#define InterlockedCompareExchangeAcquire64 _InterlockedCompareExchange64_acq
#define InterlockedCompareExchangeRelease64 _InterlockedCompareExchange64_rel
#define InterlockedCompareExchangeNoFence64 _InterlockedCompareExchange64_nf
#define InterlockedCompareExchange128 _InterlockedCompareExchange128

// AMD64_WORKITEM : these are redundant but necessary for AMD64 compatibility
#define InterlockedAnd64Acquire _InterlockedAnd64_acq
#define InterlockedAnd64Release _InterlockedAnd64_rel
#define InterlockedAnd64NoFence _InterlockedAnd64_nf
#define InterlockedOr64Acquire _InterlockedOr64_acq
#define InterlockedOr64Release _InterlockedOr64_rel
#define InterlockedOr64NoFence _InterlockedOr64_nf
#define InterlockedXor64Acquire _InterlockedXor64_acq
#define InterlockedXor64Release _InterlockedXor64_rel
#define InterlockedXor64NoFence _InterlockedXor64_nf

#define InterlockedExchangePointerAcquire _InterlockedExchangePointer_acq
#define InterlockedExchangePointerNoFence _InterlockedExchangePointer_nf
#define InterlockedCompareExchangePointerAcquire _InterlockedCompareExchangePointer_acq
#define InterlockedCompareExchangePointerRelease _InterlockedCompareExchangePointer_rel
#define InterlockedCompareExchangePointerNoFence _InterlockedCompareExchangePointer_nf

#define InterlockedExchangeAddSizeT(a, b) InterlockedExchangeAdd64((LONG64 *)a, b)
#define InterlockedExchangeAddSizeTAcquire(a, b) InterlockedExchangeAddAcquire64((LONG64 *)a, b)
#define InterlockedExchangeAddSizeTNoFence(a, b) InterlockedExchangeAddNoFence64((LONG64 *)a, b)
#define InterlockedIncrementSizeT(a) InterlockedIncrement64((LONG64 *)a)
#define InterlockedIncrementSizeTNoFence(a) InterlockedIncrementNoFence64((LONG64 *)a)
#define InterlockedDecrementSizeT(a) InterlockedDecrement64((LONG64 *)a)
#define InterlockedDecrementSizeTNoFence(a) InterlockedDecrementNoFence64((LONG64 *)a)

#endif // defined(_M_ARM64)

#if defined(_M_ARM64) || defined(_M_HYBRID_X86_ARM64)

#pragma intrinsic(__getReg)
#pragma intrinsic(__getCallerReg)
#pragma intrinsic(__getRegFp)
#pragma intrinsic(__getCallerRegFp)

#pragma intrinsic(__setReg)
#pragma intrinsic(__setCallerReg)
#pragma intrinsic(__setRegFp)
#pragma intrinsic(__setCallerRegFp)

//
// Memory barriers and prefetch intrinsics.
//

#pragma intrinsic(__yield)
#pragma intrinsic(__prefetch)

#pragma intrinsic(__dmb)
#pragma intrinsic(__dsb)
#pragma intrinsic(__isb)

#pragma intrinsic(_ReadWriteBarrier)
#pragma intrinsic(_WriteBarrier)

#define MemoryBarrier()             __dmb(_ARM64_BARRIER_SY)
#define PreFetchCacheLine(l,a)      __prefetch((const void *) (a))
#define PrefetchForWrite(p)         __prefetch((const void *) (p))
#define ReadForWriteAccess(p)       (*(p))

#define _DataSynchronizationBarrier()        __dsb(_ARM64_BARRIER_SY)
#define _InstructionSynchronizationBarrier() __isb(_ARM64_BARRIER_SY)

FORCEINLINE
VOID
YieldProcessor (
    VOID
    )
{
    __dmb(_ARM64_BARRIER_ISHST);
    __yield();
}

//
// Define accessors for volatile loads and stores.
//

#pragma intrinsic(__iso_volatile_load8)
#pragma intrinsic(__iso_volatile_load16)
#pragma intrinsic(__iso_volatile_load32)
#pragma intrinsic(__iso_volatile_load64)
#pragma intrinsic(__iso_volatile_store8)
#pragma intrinsic(__iso_volatile_store16)
#pragma intrinsic(__iso_volatile_store32)
#pragma intrinsic(__iso_volatile_store64)


FORCEINLINE
CHAR
ReadAcquire8 (
    _In_ _Interlocked_operand_ CHAR const volatile *Source
    )

{

    CHAR Value;

    Value = __iso_volatile_load8(Source);
    __dmb(_ARM64_BARRIER_ISH);
    return Value;
}

FORCEINLINE
CHAR
ReadNoFence8 (
    _In_ _Interlocked_operand_ CHAR const volatile *Source
    )

{

    CHAR Value;

    Value = __iso_volatile_load8(Source);
    return Value;
}

FORCEINLINE
VOID
WriteRelease8 (
    _Out_ _Interlocked_operand_ CHAR volatile *Destination,
    _In_ CHAR Value
    )

{

    __dmb(_ARM64_BARRIER_ISH);
    __iso_volatile_store8(Destination, Value);
    return;
}

FORCEINLINE
VOID
WriteNoFence8 (
    _Out_ _Interlocked_operand_ CHAR volatile *Destination,
    _In_ CHAR Value
    )

{

    __iso_volatile_store8(Destination, Value);
    return;
}

FORCEINLINE
SHORT
ReadAcquire16 (
    _In_ _Interlocked_operand_ SHORT const volatile *Source
    )

{

    SHORT Value;

    Value = __iso_volatile_load16(Source);
    __dmb(_ARM64_BARRIER_ISH);
    return Value;
}

FORCEINLINE
SHORT
ReadNoFence16 (
    _In_ _Interlocked_operand_ SHORT const volatile *Source
    )

{

    SHORT Value;

    Value = __iso_volatile_load16(Source);
    return Value;
}

FORCEINLINE
VOID
WriteRelease16 (
    _Out_ _Interlocked_operand_ SHORT volatile *Destination,
    _In_ SHORT Value
    )

{

    __dmb(_ARM64_BARRIER_ISH);
    __iso_volatile_store16(Destination, Value);
    return;
}

FORCEINLINE
VOID
WriteNoFence16 (
    _Out_ _Interlocked_operand_ SHORT volatile *Destination,
    _In_ SHORT Value
    )

{

    __iso_volatile_store16(Destination, Value);
    return;
}

FORCEINLINE
LONG
ReadAcquire (
    _In_ _Interlocked_operand_ LONG const volatile *Source
    )

{

    LONG Value;

    Value = __iso_volatile_load32((int *)Source);
    __dmb(_ARM64_BARRIER_ISH);
    return Value;
}

FORCEINLINE
LONG
ReadNoFence (
    _In_ _Interlocked_operand_ LONG const volatile *Source
    )

{

    LONG Value;

    Value = __iso_volatile_load32((int *)Source);
    return Value;
}

FORCEINLINE
VOID
WriteRelease (
    _Out_ _Interlocked_operand_ LONG volatile *Destination,
    _In_ LONG Value
    )

{

    __dmb(_ARM64_BARRIER_ISH);
    __iso_volatile_store32((int *)Destination, Value);
    return;
}

FORCEINLINE
VOID
WriteNoFence (
    _Out_ _Interlocked_operand_ LONG volatile *Destination,
    _In_ LONG Value
    )

{

    __iso_volatile_store32((int *)Destination, Value);
    return;
}

FORCEINLINE
LONG64
ReadAcquire64 (
    _In_ _Interlocked_operand_ LONG64 const volatile *Source
    )

{

    LONG64 Value;

    Value = __iso_volatile_load64(Source);
    __dmb(_ARM64_BARRIER_ISH);
    return Value;
}

FORCEINLINE
LONG64
ReadNoFence64 (
    _In_ _Interlocked_operand_ LONG64 const volatile *Source
    )

{

    LONG64 Value;

    Value = __iso_volatile_load64(Source);
    return Value;
}

FORCEINLINE
VOID
WriteRelease64 (
    _Out_ _Interlocked_operand_ LONG64 volatile *Destination,
    _In_ LONG64 Value
    )

{

    __dmb(_ARM64_BARRIER_ISH);
    __iso_volatile_store64(Destination, Value);
    return;
}

FORCEINLINE
VOID
WriteNoFence64 (
    _Out_ _Interlocked_operand_ LONG64 volatile *Destination,
    _In_ LONG64 Value
    )

{

    __iso_volatile_store64(Destination, Value);
    return;
}


//
// Define coprocessor access intrinsics.  Coprocessor 15 contains
// registers for the MMU, cache, TLB, feature bits, core
// identification and performance counters.
//

// op0=2/3 encodings, use with _Read/WriteStatusReg
#define ARM64_SYSREG(op0, op1, crn, crm, op2) \
        ( ((op0 & 1) << 14) | \
          ((op1 & 7) << 11) | \
          ((crn & 15) << 7) | \
          ((crm & 15) << 3) | \
          ((op2 & 7) << 0) )

// op0=1 encodings, use with __sys
#define ARM64_SYSINSTR(op0, op1, crn, crm, op2) \
        ( ((op1 & 7) << 11) | \
          ((crn & 15) << 7) | \
          ((crm & 15) << 3) | \
          ((op2 & 7) << 0) )

#define ARM64_CNTVCT            ARM64_SYSREG(3,3,14, 0,2)  // Generic Timer counter register
#define ARM64_PMCCNTR_EL0       ARM64_SYSREG(3,3, 9,13,0)  // Cycle Count Register [CP15_PMCCNTR]
#define ARM64_PMSELR_EL0        ARM64_SYSREG(3,3, 9,12,5)  // Event Counter Selection Register [CP15_PMSELR]
#define ARM64_PMXEVCNTR_EL0     ARM64_SYSREG(3,3, 9,13,2)  // Event Count Register [CP15_PMXEVCNTR]
#define ARM64_PMXEVCNTRn_EL0(n) ARM64_SYSREG(3,3,14, 8+((n)/8), (n)%8)    // Direct Event Count Register [n/a]
#define ARM64_TPIDR_EL0         ARM64_SYSREG(3,3,13, 0,2)  // Thread ID Register, User Read/Write [CP15_TPIDRURW]
#define ARM64_TPIDRRO_EL0       ARM64_SYSREG(3,3,13, 0,3)  // Thread ID Register, User Read Only [CP15_TPIDRURO]
#define ARM64_TPIDR_EL1         ARM64_SYSREG(3,0,13, 0,4)  // Thread ID Register, Privileged Only [CP15_TPIDRPRW]



#pragma intrinsic(_WriteStatusReg)
#pragma intrinsic(_ReadStatusReg)

//
// PreFetchCacheLine level defines.
//

#define PF_TEMPORAL_LEVEL_1         0
#define PF_TEMPORAL_LEVEL_2         1
#define PF_TEMPORAL_LEVEL_3         2
#define PF_NON_TEMPORAL_LEVEL_ALL   3

#if defined(_M_HYBRID_X86_ARM64)

extern ULONG64 (*_os_wowa64_rdtsc) (VOID);

#endif

//
// Define function to read the value of the time stamp counter.
//

#if defined(_M_HYBRID_X86_ARM64)

DECLSPEC_GUARDNOCF 

#endif

FORCEINLINE
ULONG64
ReadTimeStampCounter(
    VOID
    )
{

#if defined(_M_HYBRID_X86_ARM64)

    //
    // Call into the emulator to return the same value as the x86 RDTSC
    // instruction.
    //

    return (*_os_wowa64_rdtsc)();

#else

    return (ULONG64)_ReadStatusReg(ARM64_PMCCNTR_EL0);

#endif

}

FORCEINLINE
ULONG64
ReadPMC (
    _In_ ULONG Counter
    )
{
    // ARM64_WORKITEM: These can be directly accessed, but
    // given our usage, it that any benefit? We need to know
    // the register index at compile time, though atomicity
    // benefits would still be good if needed, even if we
    // went with a big switch statement.
    _WriteStatusReg(ARM64_PMSELR_EL0, Counter);
    return (ULONG64)_ReadStatusReg(ARM64_PMXEVCNTR_EL0);
}

//
// Define functions to capture the high 64-bits of a 128-bit multiply.
//

#define MultiplyHigh __mulh
#define UnsignedMultiplyHigh __umulh

#pragma intrinsic(__mulh)
#pragma intrinsic(__umulh)

#endif // defined(_M_ARM64) || defined(_M_HYBRID_X86_ARM64)

#endif // !defined(RC_INVOKED) && !defined(MIDL_PASS)

#else // defined(_M_CEE_PURE)

#include <intrin.h>

#endif // !defined(_M_CEE_PURE)

#if defined(_M_CEE_PURE)
FORCEINLINE
VOID
YieldProcessor (
    VOID
    )
{
}
#endif


#endif // defined(_ARM64_) || defined(_CHPE_X86_ARM64_)

// begin_ntoshvp

#ifdef _X86_

//
// Some intrinsics have a redundant __cdecl calling-convention specifier when
// not compiled with /clr:pure.
//

#if defined(_M_CEE_PURE)

#define CDECL_NON_WVMPURE

#else

#define CDECL_NON_WVMPURE __cdecl

#endif

// end_ntoshvp
//
// Disable these two pragmas that evaluate to "sti" "cli" on x86 so that driver
// writers to not leave them inadvertantly in their code.
//

#if !defined(MIDL_PASS)
#if !defined(RC_INVOKED)

#if _MSC_VER >= 1200
#pragma warning(push)
#endif // _MSC_VER >= 1200
//#pragma warning(disable:4164)   // disable C4164 warning so that apps that
                                // build with /Od don't get weird errors !

#if _MSC_VER >= 1200
#pragma warning( pop )
#else
#pragma warning( default:4164 ) // reenable C4164 warning
#endif // _MSC_VER >= 1200

#endif // !defined(MIDL_PASS)
#endif // !defined(RC_INVOKED)



// end_ntddk end_nthal
// begin_ntoshvp
#if defined(_M_IX86) && !defined(RC_INVOKED) && !defined(MIDL_PASS)

#ifdef __cplusplus
extern "C" {
#endif

#if !defined(_MANAGED)

//
// Define bit test intrinsics.
//

#define BitTest _bittest
#define BitTestAndComplement _bittestandcomplement
#define BitTestAndSet _bittestandset
#define BitTestAndReset _bittestandreset
#define InterlockedBitTestAndSet _interlockedbittestandset
#define InterlockedBitTestAndSetAcquire _interlockedbittestandset
#define InterlockedBitTestAndSetRelease _interlockedbittestandset
#define InterlockedBitTestAndSetNoFence _interlockedbittestandset
#define InterlockedBitTestAndReset _interlockedbittestandreset
#define InterlockedBitTestAndResetAcquire _interlockedbittestandreset
#define InterlockedBitTestAndResetRelease _interlockedbittestandreset
#define InterlockedBitTestAndResetNoFence _interlockedbittestandreset

_Must_inspect_result_
BOOLEAN
_bittest (
    _In_reads_bytes_((Offset/8)+1) LONG const *Base,
    _In_range_(>=,0) LONG Offset
    );

BOOLEAN
_bittestandcomplement (
    _Inout_updates_bytes_((Offset/8)+1) LONG *Base,
    _In_range_(>=,0) LONG Offset
    );

BOOLEAN
_bittestandset (
    _Inout_updates_bytes_((Offset/8)+1) LONG *Base,
    _In_range_(>=,0) LONG Offset
    );

BOOLEAN
_bittestandreset (
    _Inout_updates_bytes_((Offset/8)+1) LONG *Base,
    _In_range_(>=,0) LONG Offset
    );

BOOLEAN
_interlockedbittestandset (
    _Inout_updates_bytes_((Offset/8)+1) _Interlocked_operand_ LONG volatile *Base,
    _In_range_(>=,0) LONG Offset
    );

BOOLEAN
_interlockedbittestandreset (
    _Inout_updates_bytes_((Offset/8)+1) _Interlocked_operand_ LONG volatile *Base,
    _In_range_(>=,0) LONG Offset
    );

#pragma intrinsic(_bittest)
#pragma intrinsic(_bittestandcomplement)
#pragma intrinsic(_bittestandset)
#pragma intrinsic(_bittestandreset)
#pragma intrinsic(_interlockedbittestandset)
#pragma intrinsic(_interlockedbittestandreset)

//
// Define bit scan intrinsics.
//

#define BitScanForward _BitScanForward
#define BitScanReverse _BitScanReverse

_Success_(return != 0)
BOOLEAN
_BitScanForward (
    _Out_ ULONG *Index,
    _In_ ULONG Mask
    );

_Success_(return != 0)
BOOLEAN
_BitScanReverse (
    _Out_ ULONG *Index,
    _In_ ULONG Mask
    );

#pragma intrinsic(_BitScanForward)
#pragma intrinsic(_BitScanReverse)

_Success_(return != 0)
FORCEINLINE
BOOLEAN
_InlineBitScanForward64 (
    _Out_ ULONG *Index,
    _In_ ULONG64 Mask
    )
{
    if (_BitScanForward(Index, (ULONG)Mask)) {
        return 1;
    }

    if (_BitScanForward(Index, (ULONG)(Mask >> 32))) {
        *Index += 32;
        return 1;
    }

    return 0;
}

#define BitScanForward64 _InlineBitScanForward64

_Success_(return != 0)
FORCEINLINE
BOOLEAN
_InlineBitScanReverse64 (
    _Out_ ULONG *Index,
    _In_ ULONG64 Mask
    )
{
    if (_BitScanReverse(Index, (ULONG)(Mask >> 32))) {
        *Index += 32;
        return 1;
    }

    if (_BitScanReverse(Index, (ULONG)Mask)) {
        return 1;
    }

    return 0;
}

#define BitScanReverse64 _InlineBitScanReverse64

#endif // !defined(_MANAGED)

//
// Interlocked intrinsic functions.
//

#if !defined(_MANAGED)

#define InterlockedIncrement16 _InterlockedIncrement16
#define InterlockedIncrementAcquire16 _InterlockedIncrement16
#define InterlockedIncrementRelease16 _InterlockedIncrement16
#define InterlockedIncrementNoFence16 _InterlockedIncrement16

#define InterlockedDecrement16 _InterlockedDecrement16
#define InterlockedDecrementAcquire16 _InterlockedDecrement16
#define InterlockedDecrementRelease16 _InterlockedDecrement16
#define InterlockedDecrementNoFence16 _InterlockedDecrement16

#define InterlockedCompareExchange16 _InterlockedCompareExchange16
#define InterlockedCompareExchangeAcquire16 _InterlockedCompareExchange16
#define InterlockedCompareExchangeRelease16 _InterlockedCompareExchange16
#define InterlockedCompareExchangeNoFence16 _InterlockedCompareExchange16

#define InterlockedCompareExchange64 _InterlockedCompareExchange64
#define InterlockedCompareExchangeAcquire64 _InterlockedCompareExchange64
#define InterlockedCompareExchangeRelease64 _InterlockedCompareExchange64
#define InterlockedCompareExchangeNoFence64 _InterlockedCompareExchange64

SHORT
InterlockedIncrement16 (
    _Inout_ _Interlocked_operand_ SHORT volatile *Addend
    );

SHORT
InterlockedDecrement16 (
    _Inout_ _Interlocked_operand_ SHORT volatile *Addend
    );

SHORT
InterlockedCompareExchange16 (
    _Inout_ _Interlocked_operand_ SHORT volatile *Destination,
    _In_ SHORT ExChange,
    _In_ SHORT Comperand
    );

LONG64
InterlockedCompareExchange64 (
    _Inout_ _Interlocked_operand_ LONG64 volatile *Destination,
    _In_ LONG64 ExChange,
    _In_ LONG64 Comperand
    );

#pragma intrinsic(_InterlockedIncrement16)
#pragma intrinsic(_InterlockedDecrement16)
#pragma intrinsic(_InterlockedCompareExchange16)
#pragma intrinsic(_InterlockedCompareExchange64)

#endif // !defined(_MANAGED)

#define InterlockedAnd _InterlockedAnd
#define InterlockedAndAcquire _InterlockedAnd
#define InterlockedAndRelease _InterlockedAnd
#define InterlockedAndNoFence _InterlockedAnd

#define InterlockedOr _InterlockedOr
#define InterlockedOrAcquire _InterlockedOr
#define InterlockedOrRelease _InterlockedOr
#define InterlockedOrNoFence _InterlockedOr

#define InterlockedXor _InterlockedXor
#define InterlockedXorAcquire _InterlockedXor
#define InterlockedXorRelease _InterlockedXor
#define InterlockedXorNoFence _InterlockedXor

#define InterlockedIncrement _InterlockedIncrement
#define InterlockedIncrementAcquire _InterlockedIncrement
#define InterlockedIncrementRelease _InterlockedIncrement
#define InterlockedIncrementNoFence _InterlockedIncrement

#define InterlockedDecrement _InterlockedDecrement
#define InterlockedDecrementAcquire _InterlockedDecrement
#define InterlockedDecrementRelease _InterlockedDecrement
#define InterlockedDecrementNoFence _InterlockedDecrement

#define InterlockedAdd _InlineInterlockedAdd
#define InterlockedAddAcquire _InlineInterlockedAdd
#define InterlockedAddRelease _InlineInterlockedAdd
#define InterlockedAddNoFence _InlineInterlockedAdd
#define InterlockedAddNoFence64 _InlineInterlockedAdd64

#define InterlockedExchange _InterlockedExchange
#define InterlockedExchangeAcquire _InterlockedExchange
#define InterlockedExchangeNoFence _InterlockedExchange

#define InterlockedExchangeAdd _InterlockedExchangeAdd
#define InterlockedExchangeAddAcquire _InterlockedExchangeAdd
#define InterlockedExchangeAddRelease _InterlockedExchangeAdd
#define InterlockedExchangeAddNoFence _InterlockedExchangeAdd

#define InterlockedCompareExchange _InterlockedCompareExchange
#define InterlockedCompareExchangeAcquire _InterlockedCompareExchange
#define InterlockedCompareExchangeRelease _InterlockedCompareExchange
#define InterlockedCompareExchangeNoFence _InterlockedCompareExchange

#define InterlockedExchange16 _InterlockedExchange16

LONG
InterlockedAnd (
    _Inout_ _Interlocked_operand_ LONG volatile *Destination,
    _In_ LONG Value
    );

LONG
InterlockedOr (
    _Inout_ _Interlocked_operand_ LONG volatile *Destination,
    _In_ LONG Value
    );

LONG
InterlockedXor (
    _Inout_ _Interlocked_operand_ LONG volatile *Destination,
    _In_ LONG Value
    );

LONG
CDECL_NON_WVMPURE
InterlockedIncrement (
    _Inout_ _Interlocked_operand_ LONG volatile *Addend
    );

LONG
CDECL_NON_WVMPURE
InterlockedDecrement (
    _Inout_ _Interlocked_operand_ LONG volatile *Addend
    );

LONG
__cdecl
InterlockedExchange (
    _Inout_ _Interlocked_operand_ LONG volatile *Target,
    _In_ LONG Value
    );

LONG
__cdecl
InterlockedExchangeAdd (
    _Inout_ _Interlocked_operand_ LONG volatile *Addend,
    _In_ LONG Value
    );

FORCEINLINE
LONG
_InlineInterlockedAdd (
    _Inout_ _Interlocked_operand_ LONG volatile *Addend,
    _In_ LONG Value
    )

{

    return InterlockedExchangeAdd(Addend, Value) + Value;
}

LONG
CDECL_NON_WVMPURE
InterlockedCompareExchange (
    _Inout_ _Interlocked_operand_ LONG volatile * Destination,
    _In_ LONG ExChange,
    _In_ LONG Comperand
    );

#undef _InterlockedExchangePointer

FORCEINLINE
_Ret_writes_(_Inexpressible_(Unknown))
PVOID
_InlineInterlockedExchangePointer(
    _Inout_ _At_(*Destination,
        _Pre_writable_byte_size_(_Inexpressible_(Unknown))
        _Post_writable_byte_size_(_Inexpressible_(Unknown)))
    _Interlocked_operand_ PVOID volatile * Destination,
    _In_opt_ PVOID Value
    )
{
    return (PVOID)InterlockedExchange((LONG volatile *) Destination,
                                      (LONG) Value);
}

#define InterlockedExchangePointer _InlineInterlockedExchangePointer
#define InterlockedExchangePointerAcquire _InlineInterlockedExchangePointer
#define InterlockedExchangePointerRelease _InlineInterlockedExchangePointer
#define InterlockedExchangePointerNoFence _InlineInterlockedExchangePointer

FORCEINLINE
_Ret_writes_(_Inexpressible_(Unknown))
PVOID
_InlineInterlockedCompareExchangePointer (
    _Inout_ _At_(*Destination,
        _Pre_writable_byte_size_(_Inexpressible_(Unknown))
        _Post_writable_byte_size_(_Inexpressible_(Unknown)))
    _Interlocked_operand_ PVOID volatile * Destination,
    _In_opt_ PVOID ExChange,
    _In_opt_ PVOID Comperand
    )
{
    return (PVOID)InterlockedCompareExchange((LONG volatile *) Destination,
                                             (LONG) ExChange,
                                             (LONG) Comperand);
}

#define InterlockedCompareExchangePointer \
    _InlineInterlockedCompareExchangePointer
#define InterlockedCompareExchangePointerAcquire \
    _InlineInterlockedCompareExchangePointer
#define InterlockedCompareExchangePointerRelease \
    _InlineInterlockedCompareExchangePointer
#define InterlockedCompareExchangePointerNoFence \
    _InlineInterlockedCompareExchangePointer

#pragma intrinsic(_InterlockedAnd)
#pragma intrinsic(_InterlockedOr)
#pragma intrinsic(_InterlockedXor)
#pragma intrinsic(_InterlockedIncrement)
#pragma intrinsic(_InterlockedDecrement)
#pragma intrinsic(_InterlockedExchange)
#pragma intrinsic(_InterlockedExchangeAdd)
#pragma intrinsic(_InterlockedCompareExchange)

#if !defined(_MANAGED)

#if (_MSC_VER >= 1600)

#define InterlockedExchange8 _InterlockedExchange8
#define InterlockedExchange16 _InterlockedExchange16

CHAR
InterlockedExchange8 (
    _Inout_ _Interlocked_operand_ CHAR volatile *Target,
    _In_ CHAR Value
    );

SHORT
InterlockedExchange16 (
    _Inout_ _Interlocked_operand_ SHORT volatile *Destination,
    _In_ SHORT ExChange
    );

#pragma intrinsic(_InterlockedExchange8)
#pragma intrinsic(_InterlockedExchange16)

#endif // _MSC_VER >= 1600

#if _MSC_FULL_VER >= 140041204

#define InterlockedExchangeAdd8 _InterlockedExchangeAdd8
#define InterlockedAnd8 _InterlockedAnd8
#define InterlockedOr8 _InterlockedOr8
#define InterlockedXor8 _InterlockedXor8
#define InterlockedAnd16 _InterlockedAnd16
#define InterlockedOr16 _InterlockedOr16
#define InterlockedXor16 _InterlockedXor16
#define InterlockedCompareExchange16 _InterlockedCompareExchange16
#define InterlockedIncrement16 _InterlockedIncrement16
#define InterlockedDecrement16 _InterlockedDecrement16

char 
InterlockedExchangeAdd8 (
    _Inout_ _Interlocked_operand_ char volatile * _Addend, 
    _In_ char _Value
    );

char
InterlockedAnd8 (
    _Inout_ _Interlocked_operand_ char volatile *Destination,
    _In_ char Value
    );

char
InterlockedOr8 (
    _Inout_ _Interlocked_operand_ char volatile *Destination,
    _In_ char Value
    );

char
InterlockedXor8 (
    _Inout_ _Interlocked_operand_ char volatile *Destination,
    _In_ char Value
    );

SHORT
_InterlockedAnd16 (
    _Inout_ _Interlocked_operand_ SHORT volatile *Destination,
    _In_ SHORT Value
    );

SHORT
InterlockedXor16(
    _Inout_ _Interlocked_operand_ SHORT volatile *Destination,
    _In_ SHORT Value
    );

SHORT
_InterlockedCompareExchange16 (
    _Inout_ _Interlocked_operand_ SHORT volatile *Destination,
    _In_ SHORT ExChange,
    _In_ SHORT Comperand
    );

SHORT
_InterlockedOr16 (
    _Inout_ _Interlocked_operand_ SHORT volatile *Destination,
    _In_ SHORT Value
    );

SHORT
_InterlockedIncrement16 (
    _Inout_ _Interlocked_operand_ SHORT volatile *Destination
    );

SHORT
_InterlockedDecrement16 (
    _Inout_ _Interlocked_operand_ SHORT volatile *Destination
    );

#pragma intrinsic (_InterlockedExchangeAdd8)
#pragma intrinsic (_InterlockedAnd8)
#pragma intrinsic (_InterlockedOr8)
#pragma intrinsic (_InterlockedXor8)
#pragma intrinsic (_InterlockedAnd16)
#pragma intrinsic (_InterlockedOr16)
#pragma intrinsic (_InterlockedXor16)
#pragma intrinsic (_InterlockedCompareExchange16)
#pragma intrinsic (_InterlockedIncrement16)
#pragma intrinsic (_InterlockedDecrement16)

#endif  /* _MSC_FULL_VER >= 140040816 */

//
// Define 64-bit operations in terms of InterlockedCompareExchange64
//

#define InterlockedCompareExchange64 _InterlockedCompareExchange64


FORCEINLINE
LONG64
_InlineInterlockedAnd64 (
    _Inout_ _Interlocked_operand_ LONG64 volatile *Destination,
    _In_ LONG64 Value
    )
{
    LONG64 Old;

    do {
        Old = *Destination;
    } while (InterlockedCompareExchange64(Destination,
                                          Old & Value,
                                          Old) != Old);

    return Old;
}

#define InterlockedAnd64 _InlineInterlockedAnd64
#define InterlockedAnd64Acquire _InlineInterlockedAnd64
#define InterlockedAnd64Release _InlineInterlockedAnd64
#define InterlockedAnd64NoFence _InlineInterlockedAnd64

FORCEINLINE
LONG64
_InlineInterlockedAdd64 (
    _Inout_ _Interlocked_operand_ LONG64 volatile *Addend,
    _In_ LONG64 Value
    )
{
    LONG64 Old;

    do {
        Old = *Addend;
    } while (InterlockedCompareExchange64(Addend,
                                          Old + Value,
                                          Old) != Old);

    return Old + Value;
}

#define InterlockedAdd64 _InlineInterlockedAdd64
#define InterlockedAddAcquire64 _InlineInterlockedAdd64
#define InterlockedAddRelease64 _InlineInterlockedAdd64
#define InterlockedAddNoFence64 _InlineInterlockedAdd64


#endif // !defined(_MANAGED)

#define InterlockedExchangeAddSizeT(a, b) InterlockedExchangeAdd((LONG *)a, b)
#define InterlockedExchangeAddSizeTAcquire(a, b) InterlockedExchangeAdd((LONG *)a, b)
#define InterlockedExchangeAddSizeTNoFence(a, b) InterlockedExchangeAdd((LONG *)a, b)
#define InterlockedIncrementSizeT(a) InterlockedIncrement((LONG *)a)
#define InterlockedIncrementSizeTNoFence(a) InterlockedIncrement((LONG *)a)
#define InterlockedDecrementSizeT(a) InterlockedDecrement((LONG *)a)
#define InterlockedDecrementSizeTNoFence(a) InterlockedDecrement((LONG *)a)

//
// Definitons below
//

LONG
_InterlockedXor (
    _Inout_ _Interlocked_operand_ LONG volatile *Target,
    _In_ LONG Set
    );

#pragma intrinsic(_InterlockedXor)

#define InterlockedXor _InterlockedXor

#if !defined(_MANAGED)

LONGLONG
FORCEINLINE
_InlineInterlockedOr64 (
    _Inout_ _Interlocked_operand_ LONGLONG volatile *Destination,
    _In_ LONGLONG Value
    )
{
    LONGLONG Old;

    do {
        Old = *Destination;
    } while (InterlockedCompareExchange64(Destination,
                                          Old | Value,
                                          Old) != Old);

    return Old;
}

#define InterlockedOr64 _InlineInterlockedOr64

FORCEINLINE
LONG64
_InlineInterlockedXor64 (
    _Inout_ _Interlocked_operand_ LONG64 volatile *Destination,
    _In_ LONG64 Value
    )
{
    LONG64 Old;

    do {
        Old = *Destination;
    } while (InterlockedCompareExchange64(Destination,
                                          Old ^ Value,
                                          Old) != Old);

    return Old;
}

#define InterlockedXor64 _InlineInterlockedXor64

LONGLONG
FORCEINLINE
_InlineInterlockedIncrement64 (
    _Inout_ _Interlocked_operand_ LONGLONG volatile *Addend
    )
{
    LONGLONG Old;

    do {
        Old = *Addend;
    } while (InterlockedCompareExchange64(Addend,
                                          Old + 1,
                                          Old) != Old);

    return Old + 1;
}

#define InterlockedIncrement64 _InlineInterlockedIncrement64
#define InterlockedIncrementAcquire64 InterlockedIncrement64
#define InterlockedIncrementRelease64 InterlockedIncrement64
#define InterlockedIncrementNoFence64 InterlockedIncrement64

FORCEINLINE
LONGLONG
_InlineInterlockedDecrement64 (
    _Inout_ _Interlocked_operand_ LONGLONG volatile *Addend
    )
{
    LONGLONG Old;

    do {
        Old = *Addend;
    } while (InterlockedCompareExchange64(Addend,
                                          Old - 1,
                                          Old) != Old);

    return Old - 1;
}

#define InterlockedDecrement64 _InlineInterlockedDecrement64
#define InterlockedDecrementAcquire64 InterlockedDecrement64
#define InterlockedDecrementRelease64 InterlockedDecrement64
#define InterlockedDecrementNoFence64 InterlockedDecrement64

FORCEINLINE
LONGLONG
_InlineInterlockedExchange64 (
    _Inout_ _Interlocked_operand_ LONGLONG volatile *Target,
    _In_ LONGLONG Value
    )
{
    LONGLONG Old;

    do {
        Old = *Target;
    } while (InterlockedCompareExchange64(Target,
                                          Value,
                                          Old) != Old);

    return Old;
}

#define InterlockedExchange64 _InlineInterlockedExchange64
#define InterlockedExchangeAcquire64 InterlockedExchange64
#define InterlockedExchangeNoFence64 _InlineInterlockedExchange64


FORCEINLINE
LONGLONG
_InlineInterlockedExchangeAdd64 (
    _Inout_ _Interlocked_operand_ LONGLONG volatile *Addend,
    _In_ LONGLONG Value
    )
{
    LONGLONG Old;

    do {
        Old = *Addend;
    } while (InterlockedCompareExchange64(Addend,
                                          Old + Value,
                                          Old) != Old);

    return Old;
}

#define InterlockedExchangeAdd64 _InlineInterlockedExchangeAdd64
#define InterlockedExchangeAddNoFence64 _InlineInterlockedExchangeAdd64

//
// FS relative adds and increments.
//

VOID
__incfsbyte (
    _In_ ULONG Offset
    );

VOID
__addfsbyte (
    _In_ ULONG Offset,
    _In_ UCHAR Value
    );

VOID
__incfsword (
    _In_ ULONG Offset
    );

VOID
__addfsword (
    _In_ ULONG Offset,
    _In_ USHORT Value
    );

VOID
__incfsdword (
    _In_ ULONG Offset
    );

VOID
__addfsdword (
    _In_ ULONG Offset,
    _In_ ULONG Value
    );

#pragma intrinsic(__incfsbyte)
#pragma intrinsic(__addfsbyte)
#pragma intrinsic(__incfsword)
#pragma intrinsic(__addfsword)
#pragma intrinsic(__incfsdword)
#pragma intrinsic(__addfsdword)

#endif // !defined(_MANAGED)

#if !defined(_M_CEE_PURE)

// end_ntoshvp

#if _MSC_VER >= 1500

//
// Define extended CPUID intrinsic.
//

#define CpuIdEx __cpuidex

VOID
__cpuidex (
    int CPUInfo[4],
    int Function,
    int SubLeaf
    );

#pragma intrinsic(__cpuidex)

#endif

// begin_ntoshvp

//
// Define FS read/write intrinsics
//

UCHAR
__readfsbyte (
    _In_ ULONG Offset
    );

USHORT
__readfsword (
    _In_ ULONG Offset
    );

ULONG
__readfsdword (
    _In_ ULONG Offset
    );

VOID
__writefsbyte (
    _In_ ULONG Offset,
    _In_ UCHAR Data
    );

VOID
__writefsword (
    _In_ ULONG Offset,
    _In_ USHORT Data
    );

VOID
__writefsdword (
    _In_ ULONG Offset,
    _In_ ULONG Data
    );

#pragma intrinsic(__readfsbyte)
#pragma intrinsic(__readfsword)
#pragma intrinsic(__readfsdword)
#pragma intrinsic(__writefsbyte)
#pragma intrinsic(__writefsword)
#pragma intrinsic(__writefsdword)

#endif // !defined(_M_CEE_PURE)


#if !defined(_MANAGED) && !defined(_M_HYBRID_X86_ARM64)
VOID
_mm_pause (
    VOID
    );

#pragma intrinsic(_mm_pause)

#define YieldProcessor _mm_pause

#endif // !defined(_MANAGED) && !defined(_M_HYBRID_X86_ARM64)

#ifdef __cplusplus
}
#endif

#endif  /* !defined(MIDL_PASS) || defined(_M_IX86) */

// end_ntoshvp
#endif //_X86_


#if !defined(RC_INVOKED) && !defined(MIDL_PASS)
#if ((defined(_M_AMD64) || defined(_M_IX86)) && !defined(_M_HYBRID_X86_ARM64)) || defined(_M_CEE_PURE)

#ifdef __cplusplus
extern "C" {
#endif

FORCEINLINE
CHAR
ReadAcquire8 (
    _In_ _Interlocked_operand_ CHAR const volatile *Source
    )

{

    CHAR Value;

    Value = *Source;
    return Value;
}

FORCEINLINE
CHAR
ReadNoFence8 (
    _In_ _Interlocked_operand_ CHAR const volatile *Source
    )

{

    CHAR Value;

    Value = *Source;
    return Value;
}

FORCEINLINE
VOID
WriteRelease8 (
    _Out_ _Interlocked_operand_ CHAR volatile *Destination,
    _In_ CHAR Value
    )

{

    *Destination = Value;
    return;
}

FORCEINLINE
VOID
WriteNoFence8 (
    _Out_ _Interlocked_operand_ CHAR volatile *Destination,
    _In_ CHAR Value
    )

{

    *Destination = Value;
    return;
}

FORCEINLINE
SHORT
ReadAcquire16 (
    _In_ _Interlocked_operand_ SHORT const volatile *Source
    )

{

    SHORT Value;

    Value = *Source;
    return Value;
}

FORCEINLINE
SHORT
ReadNoFence16 (
    _In_ _Interlocked_operand_ SHORT const volatile *Source
    )

{

    SHORT Value;

    Value = *Source;
    return Value;
}

FORCEINLINE
VOID
WriteRelease16 (
    _Out_ _Interlocked_operand_ SHORT volatile *Destination,
    _In_ SHORT Value
    )

{

    *Destination = Value;
    return;
}

FORCEINLINE
VOID
WriteNoFence16 (
    _Out_ _Interlocked_operand_ SHORT volatile *Destination,
    _In_ SHORT Value
    )

{

    *Destination = Value;
    return;
}

FORCEINLINE
LONG
ReadAcquire (
    _In_ _Interlocked_operand_ LONG const volatile *Source
    )

{

    LONG Value;

    Value = *Source;
    return Value;
}

CFORCEINLINE
LONG
ReadNoFence (
    _In_ _Interlocked_operand_ LONG const volatile *Source
    )

{

    LONG Value;

    Value = *Source;
    return Value;
}

CFORCEINLINE
VOID
WriteRelease (
    _Out_ _Interlocked_operand_ LONG volatile *Destination,
    _In_ LONG Value
    )

{

    *Destination = Value;
    return;
}

FORCEINLINE
VOID
WriteNoFence (
    _Out_ _Interlocked_operand_ LONG volatile *Destination,
    _In_ LONG Value
    )

{

    *Destination = Value;
    return;
}

FORCEINLINE
LONG64
ReadAcquire64 (
    _In_ _Interlocked_operand_ LONG64 const volatile *Source
    )

{

    LONG64 Value;

    Value = *Source;
    return Value;
}

CFORCEINLINE
LONG64
ReadNoFence64 (
    _In_ _Interlocked_operand_ LONG64 const volatile *Source
    )

{

    LONG64 Value;

    Value = *Source;
    return Value;
}

CFORCEINLINE
VOID
WriteRelease64 (
    _Out_ _Interlocked_operand_ LONG64 volatile *Destination,
    _In_ LONG64 Value
    )

{

    *Destination = Value;
    return;
}

FORCEINLINE
VOID
WriteNoFence64 (
    _Out_ _Interlocked_operand_ LONG64 volatile *Destination,
    _In_ LONG64 Value
    )

{

    *Destination = Value;
    return;
}

#ifdef __cplusplus
}
#endif

#endif // defined(_M_AMD64) || defined(_M_IX86) || defined(_M_CEE_PURE)

//
// Define "raw" operations which have no ordering or atomicity semantics.
//

FORCEINLINE
CHAR
ReadRaw8 (
    _In_ _Interlocked_operand_ CHAR const volatile *Source
    )

{

    CHAR Value;

    Value = *(CHAR *)Source;
    return Value;
}

FORCEINLINE
VOID
WriteRaw8 (
    _Out_ _Interlocked_operand_ CHAR volatile *Destination,
    _In_ CHAR Value
    )

{

    *(CHAR *)Destination = Value;
    return;
}

FORCEINLINE
SHORT
ReadRaw16 (
    _In_ _Interlocked_operand_ SHORT const volatile *Source
    )

{

    SHORT Value;

    Value = *(SHORT *)Source;
    return Value;
}

FORCEINLINE
VOID
WriteRaw16 (
    _Out_ _Interlocked_operand_ SHORT volatile *Destination,
    _In_ SHORT Value
    )

{

    *(SHORT *)Destination = Value;
    return;
}

FORCEINLINE
LONG
ReadRaw (
    _In_ _Interlocked_operand_ LONG const volatile *Source
    )

{

    LONG Value;

    Value = *(LONG *)Source;
    return Value;
}

CFORCEINLINE
VOID
WriteRaw (
    _Out_ _Interlocked_operand_ LONG volatile *Destination,
    _In_ LONG Value
    )

{

    *(LONG *)Destination = Value;
    return;
}

FORCEINLINE
LONG64
ReadRaw64 (
    _In_ _Interlocked_operand_ LONG64 const volatile *Source
    )

{

    LONG64 Value;

    Value = *(LONG64 *)Source;
    return Value;
}

FORCEINLINE
VOID
WriteRaw64 (
    _Out_ _Interlocked_operand_ LONG64 volatile *Destination,
    _In_ LONG64 Value
    )

{

    *(LONG64 *)Destination = Value;
    return;
}

//
// Define explicit read and write operations for derived types.
//

FORCEINLINE
UCHAR
ReadUCharAcquire (
    _In_ _Interlocked_operand_ UCHAR const volatile *Source
    )

{

    return (UCHAR)ReadAcquire8((PCHAR)Source);
}

FORCEINLINE
UCHAR
ReadUCharNoFence (
    _In_ _Interlocked_operand_ UCHAR const volatile *Source
    )

{

    return (UCHAR)ReadNoFence8((PCHAR)Source);
}

FORCEINLINE
UCHAR
ReadBooleanAcquire (
    _In_ _Interlocked_operand_ BOOLEAN const volatile *Source
    )

{

    return (BOOLEAN)ReadAcquire8((PCHAR)Source);
}

FORCEINLINE
UCHAR
ReadBooleanNoFence (
    _In_ _Interlocked_operand_ BOOLEAN const volatile *Source
    )

{

    return (BOOLEAN)ReadNoFence8((PCHAR)Source);
}

FORCEINLINE
UCHAR
ReadUCharRaw (
    _In_ _Interlocked_operand_ UCHAR const volatile *Source
    )

{

    return (UCHAR)ReadRaw8((PCHAR)Source);
}

FORCEINLINE
VOID
WriteUCharRelease (
    _Out_ _Interlocked_operand_ UCHAR volatile *Destination,
    _In_ UCHAR Value
    )

{

    WriteRelease8((PCHAR)Destination, (CHAR)Value);
    return;
}

FORCEINLINE
VOID
WriteUCharNoFence (
    _Out_ _Interlocked_operand_ UCHAR volatile *Destination,
    _In_ UCHAR Value
    )

{

    WriteNoFence8((PCHAR)Destination, (CHAR)Value);
    return;
}

FORCEINLINE
VOID
WriteBooleanRelease (
    _Out_ _Interlocked_operand_ BOOLEAN volatile *Destination,
    _In_ BOOLEAN Value
    )

{

    WriteRelease8((PCHAR)Destination, (CHAR)Value);
    return;
}

FORCEINLINE
VOID
WriteBooleanNoFence (
    _Out_ _Interlocked_operand_ BOOLEAN volatile *Destination,
    _In_ BOOLEAN Value
    )

{

    WriteNoFence8((PCHAR)Destination, (CHAR)Value);
    return;
}

FORCEINLINE
VOID
WriteUCharRaw (
    _Out_ _Interlocked_operand_ UCHAR volatile *Destination,
    _In_ UCHAR Value
    )

{

    WriteRaw8((PCHAR)Destination, (CHAR)Value);
    return;
}

FORCEINLINE
USHORT
ReadUShortAcquire (
    _In_ _Interlocked_operand_ USHORT const volatile *Source
    )

{

    return (USHORT)ReadAcquire16((PSHORT)Source);
}

FORCEINLINE
USHORT
ReadUShortNoFence (
    _In_ _Interlocked_operand_ USHORT const volatile *Source
    )

{

    return (USHORT)ReadNoFence16((PSHORT)Source);
}

FORCEINLINE
USHORT
ReadUShortRaw (
    _In_ _Interlocked_operand_ USHORT const volatile *Source
    )

{

    return (USHORT)ReadRaw16((PSHORT)Source);
}

FORCEINLINE
VOID
WriteUShortRelease (
    _Out_ _Interlocked_operand_ USHORT volatile *Destination,
    _In_ USHORT Value
    )

{

    WriteRelease16((PSHORT)Destination, (SHORT)Value);
    return;
}

FORCEINLINE
VOID
WriteUShortNoFence (
    _Out_ _Interlocked_operand_ USHORT volatile *Destination,
    _In_ USHORT Value
    )

{

    WriteNoFence16((PSHORT)Destination, (SHORT)Value);
    return;
}

FORCEINLINE
VOID
WriteUShortRaw (
    _Out_ _Interlocked_operand_ USHORT volatile *Destination,
    _In_ USHORT Value
    )

{

    WriteRaw16((PSHORT)Destination, (SHORT)Value);
    return;
}

FORCEINLINE
ULONG
ReadULongAcquire (
    _In_ _Interlocked_operand_ ULONG const volatile *Source
    )

{

    return (ULONG)ReadAcquire((PLONG)Source);
}

FORCEINLINE
ULONG
ReadULongNoFence (
    _In_ _Interlocked_operand_ ULONG const volatile *Source
    )

{

    return (ULONG)ReadNoFence((PLONG)Source);
}

FORCEINLINE
ULONG
ReadULongRaw (
    _In_ _Interlocked_operand_ ULONG const volatile *Source
    )

{

    return (ULONG)ReadRaw((PLONG)Source);
}

CFORCEINLINE
VOID
WriteULongRelease (
    _Out_ _Interlocked_operand_ ULONG volatile *Destination,
    _In_ ULONG Value
    )

{

    WriteRelease((PLONG)Destination, (LONG)Value);
    return;
}

FORCEINLINE
VOID
WriteULongNoFence (
    _Out_ _Interlocked_operand_ ULONG volatile *Destination,
    _In_ ULONG Value
    )

{

    WriteNoFence((PLONG)Destination, (LONG)Value);
    return;
}

FORCEINLINE
VOID
WriteULongRaw (
    _Out_ _Interlocked_operand_ ULONG volatile *Destination,
    _In_ ULONG Value
    )

{

    WriteRaw((PLONG)Destination, (LONG)Value);
    return;
}

FORCEINLINE
ULONG64
ReadULong64Acquire (
    _In_ _Interlocked_operand_ ULONG64 const volatile *Source
    )

{

    return (ULONG64)ReadAcquire64((PLONG64)Source);
}

FORCEINLINE
ULONG64
ReadULong64NoFence (
    _In_ _Interlocked_operand_ ULONG64 const volatile *Source
    )

{

    return (ULONG64)ReadNoFence64((PLONG64)Source);
}

FORCEINLINE
ULONG64
ReadULong64Raw (
    _In_ _Interlocked_operand_ ULONG64 const volatile *Source
    )

{

    return (ULONG64)ReadRaw64((PLONG64)Source);
}

CFORCEINLINE
VOID
WriteULong64Release (
    _Out_ _Interlocked_operand_ ULONG64 volatile *Destination,
    _In_ ULONG64 Value
    )

{

    WriteRelease64((PLONG64)Destination, (LONG64)Value);
    return;
}

FORCEINLINE
VOID
WriteULong64NoFence (
    _Out_ _Interlocked_operand_ ULONG64 volatile *Destination,
    _In_ ULONG64 Value
    )

{

    WriteNoFence64((PLONG64)Destination, (LONG64)Value);
    return;
}

FORCEINLINE
VOID
WriteULong64Raw (
    _Out_ _Interlocked_operand_ ULONG64 volatile *Destination,
    _In_ ULONG64 Value
    )

{

    WriteRaw64((PLONG64)Destination, (LONG64)Value);
    return;
}

#define ReadSizeTAcquire ReadULongPtrAcquire

#define ReadSizeTNoFence ReadULongPtrNoFence

#define ReadSizeTRaw ReadULongPtrRaw

#define WriteSizeTRelease WriteULongPtrRelease

#define WriteSizeTNoFence WriteULongPtrNoFence

#define WriteSizeTRaw WriteULongPtrRaw

#if !defined(_WIN64)

FORCEINLINE
PVOID
ReadPointerAcquire (
    _In_ _Interlocked_operand_ PVOID const volatile *Source
    )

{

    return (PVOID)ReadAcquire((PLONG)Source);
}

CFORCEINLINE
PVOID
ReadPointerNoFence (
    _In_ _Interlocked_operand_ PVOID const volatile *Source
    )

{

    return (PVOID)ReadNoFence((PLONG)Source);
}

FORCEINLINE
PVOID
ReadPointerRaw (
    _In_ _Interlocked_operand_ PVOID const volatile *Source
    )

{

    return (PVOID)ReadRaw((PLONG)Source);
}

CFORCEINLINE
VOID
WritePointerRelease (
    _Out_ _Interlocked_operand_ PVOID volatile *Destination,
    _In_ PVOID Value
    )

{

    WriteRelease((PLONG)Destination, (LONG)Value);
    return;
}

FORCEINLINE
VOID
WritePointerNoFence (
    _Out_ _Interlocked_operand_ PVOID volatile *Destination,
    _In_opt_ PVOID Value
    )

{

    WriteNoFence((PLONG)Destination, (LONG)Value);
    return;
}

FORCEINLINE
VOID
WritePointerRaw (
    _Out_ _Interlocked_operand_ PVOID volatile *Destination,
    _In_opt_ PVOID Value
    )

{

    WriteRaw((PLONG)Destination, (LONG)Value);
    return;
}

#define ReadLongPtrAcquire ReadAcquire

#define ReadLongPtrNoFence ReadNoFence

#define ReadLongPtrRaw ReadRaw

#define WriteLongPtrRelease WriteRelease

#define WriteLongPtrNoFence WriteNoFence

#define WriteLongPtrRaw WriteRaw

#define ReadULongPtrAcquire ReadULongAcquire

#define ReadULongPtrNoFence ReadULongNoFence

#define ReadULongPtrRaw ReadULongRaw

#define WriteULongPtrRelease WriteULongRelease

#define WriteULongPtrNoFence WriteULongNoFence

#define WriteULongPtrRaw WriteULongRaw

#else // !defined(_WIN64)

FORCEINLINE
PVOID
ReadPointerAcquire (
    _In_ _Interlocked_operand_ PVOID const volatile *Source
    )

{

    return (PVOID)ReadAcquire64((PLONG64)Source);
}

CFORCEINLINE
PVOID
ReadPointerNoFence (
    _In_ _Interlocked_operand_ PVOID const volatile *Source
    )

{

    return (PVOID)ReadNoFence64((PLONG64)Source);
}

FORCEINLINE
PVOID
ReadPointerRaw (
    _In_ _Interlocked_operand_ PVOID const volatile *Source
    )

{

    return (PVOID)ReadRaw64((PLONG64)Source);
}

FORCEINLINE
VOID
WritePointerRelease (
    _Out_ _Interlocked_operand_ PVOID volatile *Destination,
    _In_ PVOID Value
    )

{

    WriteRelease64((PLONG64)Destination, (LONG64)Value);
    return;
}

FORCEINLINE
VOID
WritePointerNoFence (
    _Out_ _Interlocked_operand_ PVOID volatile *Destination,
    _In_ PVOID Value
    )

{

    WriteNoFence64((PLONG64)Destination, (LONG64)Value);
    return;
}

FORCEINLINE
VOID
WritePointerRaw (
    _Out_ _Interlocked_operand_ PVOID volatile *Destination,
    _In_ PVOID Value
    )

{

    WriteRaw64((PLONG64)Destination, (LONG64)Value);
    return;
}

#define ReadLongPtrAcquire ReadAcquire64

#define ReadLongPtrNoFence ReadNoFence64

#define ReadLongPtrRaw ReadRaw64

#define WriteLongPtrRelease WriteRelease64

#define WriteLongPtrNoFence WriteNoFence64

#define WriteLongPtrRaw WriteRaw64

#define ReadULongPtrAcquire ReadULong64Acquire

#define ReadULongPtrNoFence ReadULong64NoFence

#define ReadULongPtrRaw ReadULong64Raw

#define WriteULongPtrRelease WriteULong64Release

#define WriteULongPtrNoFence WriteULong64NoFence

#define WriteULongPtrRaw WriteULong64Raw

#endif // !defined(_WIN64)

#endif // !defined(RC_INVOKED) && !defined(MIDL_PASS)


typedef enum _LOGICAL_PROCESSOR_RELATIONSHIP {
    RelationProcessorCore,
    RelationNumaNode,
    RelationCache,
    RelationProcessorPackage,
    RelationGroup,
    RelationAll = 0xffff
} LOGICAL_PROCESSOR_RELATIONSHIP;

#define LTP_PC_SMT 0x1

typedef enum _PROCESSOR_CACHE_TYPE {
    CacheUnified,
    CacheInstruction,
    CacheData,
    CacheTrace
} PROCESSOR_CACHE_TYPE;

#define CACHE_FULLY_ASSOCIATIVE 0xFF

typedef struct _CACHE_DESCRIPTOR {
    UCHAR  Level;
    UCHAR  Associativity;
    USHORT LineSize;
    ULONG  Size;
    PROCESSOR_CACHE_TYPE Type;
} CACHE_DESCRIPTOR, *PCACHE_DESCRIPTOR;

typedef struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION {
    ULONG_PTR   ProcessorMask;
    LOGICAL_PROCESSOR_RELATIONSHIP Relationship;
    union {
        struct {
            UCHAR Flags;
        } ProcessorCore;
        struct {
            ULONG NodeNumber;
        } NumaNode;
        CACHE_DESCRIPTOR Cache;
        ULONGLONG  Reserved[2];
    } DUMMYUNIONNAME;
} SYSTEM_LOGICAL_PROCESSOR_INFORMATION, *PSYSTEM_LOGICAL_PROCESSOR_INFORMATION;

typedef struct _PROCESSOR_RELATIONSHIP {
    UCHAR Flags;
    UCHAR EfficiencyClass;
    UCHAR Reserved[20];
    USHORT GroupCount;
    _Field_size_(GroupCount) GROUP_AFFINITY GroupMask[ANYSIZE_ARRAY];
} PROCESSOR_RELATIONSHIP, *PPROCESSOR_RELATIONSHIP;

typedef struct _NUMA_NODE_RELATIONSHIP {
    ULONG NodeNumber;
    UCHAR Reserved[20];
    GROUP_AFFINITY GroupMask;
} NUMA_NODE_RELATIONSHIP, *PNUMA_NODE_RELATIONSHIP;

typedef struct _CACHE_RELATIONSHIP {
    UCHAR Level;
    UCHAR Associativity;
    USHORT LineSize;
    ULONG CacheSize;
    PROCESSOR_CACHE_TYPE Type;
    UCHAR Reserved[20];
    GROUP_AFFINITY GroupMask;
} CACHE_RELATIONSHIP, *PCACHE_RELATIONSHIP;

typedef struct _PROCESSOR_GROUP_INFO {
    UCHAR MaximumProcessorCount;
    UCHAR ActiveProcessorCount;
    UCHAR Reserved[38];
    KAFFINITY ActiveProcessorMask;
} PROCESSOR_GROUP_INFO, *PPROCESSOR_GROUP_INFO;

typedef struct _GROUP_RELATIONSHIP {
    USHORT MaximumGroupCount;
    USHORT ActiveGroupCount;
    UCHAR Reserved[20];
    PROCESSOR_GROUP_INFO GroupInfo[ANYSIZE_ARRAY];
} GROUP_RELATIONSHIP, *PGROUP_RELATIONSHIP;

_Struct_size_bytes_(Size) struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX {
    LOGICAL_PROCESSOR_RELATIONSHIP Relationship;
    ULONG Size;
    union {
        PROCESSOR_RELATIONSHIP Processor;
        NUMA_NODE_RELATIONSHIP NumaNode;
        CACHE_RELATIONSHIP Cache;
        GROUP_RELATIONSHIP Group;
    } DUMMYUNIONNAME;
};

typedef struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX, *PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX;

typedef enum _CPU_SET_INFORMATION_TYPE {
    CpuSetInformation
} CPU_SET_INFORMATION_TYPE, *PCPU_SET_INFORMATION_TYPE;

_Struct_size_bytes_(Size) struct _SYSTEM_CPU_SET_INFORMATION {
    ULONG Size;
    CPU_SET_INFORMATION_TYPE Type;
    union {
        struct {
            ULONG Id;
            USHORT Group;
            UCHAR LogicalProcessorIndex;
            UCHAR CoreIndex;
            UCHAR LastLevelCacheIndex;
            UCHAR NumaNodeIndex;
            UCHAR EfficiencyClass;
            union {

#define SYSTEM_CPU_SET_INFORMATION_PARKED 0x1
#define SYSTEM_CPU_SET_INFORMATION_ALLOCATED 0x2
#define SYSTEM_CPU_SET_INFORMATION_ALLOCATED_TO_TARGET_PROCESS 0x4
#define SYSTEM_CPU_SET_INFORMATION_REALTIME 0x8

                UCHAR AllFlags;
                struct {
                    UCHAR Parked : 1;
                    UCHAR Allocated : 1;
                    UCHAR AllocatedToTargetProcess : 1;
                    UCHAR RealTime : 1;
                    UCHAR ReservedFlags : 4;
                } DUMMYSTRUCTNAME;
            } DUMMYUNIONNAME2;
            ULONG Reserved;
            ULONG64 AllocationTag;
        } CpuSet;
    } DUMMYUNIONNAME;
};

typedef struct _SYSTEM_CPU_SET_INFORMATION SYSTEM_CPU_SET_INFORMATION, *PSYSTEM_CPU_SET_INFORMATION;

// begin_ntoshvp
// begin_wudfwdm
//
// Define the I/O bus interface types.
//

typedef enum _INTERFACE_TYPE {
    InterfaceTypeUndefined = -1,
    Internal,
    Isa,
    Eisa,
    MicroChannel,
    TurboChannel,
    PCIBus,
    VMEBus,
    NuBus,
    PCMCIABus,
    CBus,
    MPIBus,
    MPSABus,
    ProcessorInternal,
    InternalPowerBus,
    PNPISABus,
    PNPBus,
    Vmcs,
    ACPIBus,
    MaximumInterfaceType
}INTERFACE_TYPE, *PINTERFACE_TYPE;

// end_wudfwdm
// end_ntoshvp

//
// Define the DMA transfer widths.
//

typedef enum _DMA_WIDTH {
    Width8Bits,
    Width16Bits,
    Width32Bits,
    Width64Bits,
    WidthNoWrap,
    MaximumDmaWidth
}DMA_WIDTH, *PDMA_WIDTH;

//
// Define DMA transfer speeds.
//

typedef enum _DMA_SPEED {
    Compatible,
    TypeA,
    TypeB,
    TypeC,
    TypeF,
    MaximumDmaSpeed
}DMA_SPEED, *PDMA_SPEED;

// begin_wudfpwdm
//
// Define Interface reference/dereference routines for
//  Interfaces exported by IRP_MN_QUERY_INTERFACE
//

typedef VOID (*PINTERFACE_REFERENCE)(PVOID Context);
typedef VOID (*PINTERFACE_DEREFERENCE)(PVOID Context);

// end_wdm end_wudfpwdm
// begin_ntddk

//
// Define types of bus information.
//

typedef enum _BUS_DATA_TYPE {
    ConfigurationSpaceUndefined = -1,
    Cmos,
    EisaConfiguration,
    Pos,
    CbusConfiguration,
    PCIConfiguration,
    VMEConfiguration,
    NuBusConfiguration,
    PCMCIAConfiguration,
    MPIConfiguration,
    MPSAConfiguration,
    PNPISAConfiguration,
    SgiInternalConfiguration,
    MaximumBusDataType
} BUS_DATA_TYPE, *PBUS_DATA_TYPE;


#include <guiddef.h>

// begin_wudfwdm

#ifdef __cplusplus
extern "C" {
#endif

//
// Assert exception.
//

#if !defined(_DBGRAISEASSERTIONFAILURE_) && !defined(RC_INVOKED) && !defined(MIDL_PASS)

#define _DBGRAISEASSERTIONFAILURE_

#if defined(_PREFAST_)

__analysis_noreturn
FORCEINLINE
VOID
DbgRaiseAssertionFailure (
    VOID
    );

#endif

#if defined(_AMD64_)

#if defined(_M_AMD64)

VOID
__int2c (
    VOID
    );

#pragma intrinsic(__int2c)

#if !defined(_PREFAST_)

#define DbgRaiseAssertionFailure() __int2c()

#endif // !defined(_PREFAST_)

#endif // defined(_M_AMD64)

#elif defined(_X86_) && !defined(_M_HYBRID_X86_ARM64)

#if defined(_M_IX86) && !defined(_M_HYBRID_X86_ARM64)

#if _MSC_FULL_VER >= 140030222

VOID
__int2c (
    VOID
    );

#pragma intrinsic(__int2c)

#if !defined(_PREFAST_)

#define DbgRaiseAssertionFailure() __int2c()

#endif // !defined(_PREFAST_)

#else // _MSC_FULL_VER >= 140030222

#pragma warning( push )
#pragma warning( disable : 4793 )

#if !defined(_PREFAST_)

__analysis_noreturn
FORCEINLINE
VOID
DbgRaiseAssertionFailure (
    VOID
    )

{
    __asm int 0x2c
}

#endif // !defined(_PREFAST_)

#pragma warning( pop )

#endif // _MSC_FULL_VER >= 140030222

#endif // defined(_M_IX86)

#elif defined(_IA64_)

#if defined(_M_IA64)

void
__break(
    _In_ int StIIM
    );

#pragma intrinsic (__break)

#define BREAK_DEBUG_BASE    0x080000
#define ASSERT_BREAKPOINT         (BREAK_DEBUG_BASE+3)  // Cause a STATUS_ASSERTION_FAILURE exception to be raised.

#if !defined(_PREFAST_)

#define DbgRaiseAssertionFailure() __break(ASSERT_BREAKPOINT)

#endif // !defined(_PREFAST_)

#endif // defined(_M_IA64)

#elif defined(_ARM64_) || defined(_CHPE_X86_ARM64_)

#if defined(_M_ARM64) || defined(_M_HYBRID_X86_ARM64)

void
__break(
    _In_ int Code
    );

#pragma intrinsic (__break)

#if !defined(_PREFAST_)

#define DbgRaiseAssertionFailure() __break(0xf001)

#endif // !defined(_PREFAST_)

#endif // defined(_M_ARM64) || defined(_M_HYBRID_X86_ARM64)

#elif defined(_ARM_)

#if defined(_M_ARM)

VOID
__emit(
    const unsigned __int32 opcode
    );

#pragma intrinsic(__emit)

#if !defined(_PREFAST_)

#define DbgRaiseAssertionFailure() __emit(0xdefc)     // THUMB_ASSERT

#endif // !defined(_PREFAST_)

#endif // defined(_M_ARM)

#endif // _AMD64_, _X86_, _IA64_, _ARM64_, _ARM_
#endif // !defined(_DBGRAISEASSERTIONFAILURE_) && !defined(RC_INVOKED) && !defined(MIDL_PASS)

#ifdef __cplusplus
}
#endif


#if _MSC_VER >= 1300

#if defined(_PREFAST_)
// _Analysis_assume_ will never result in any code generation for _exp,
// so using it will not have runtime impact, even if _exp has side effects.
#define NT_ANALYSIS_ASSUME(_exp) _Analysis_assume_(_exp)
#else // _PREFAST_

// NT_ANALYSIS_ASSUME ensures that _exp is parsed in non-analysis compile.
// On DBG, it's guaranteed to be parsed as part of the normal compile, but with
// non-DBG, use __noop to ensure _exp is parseable but without code generation.
#if DBG
#define NT_ANALYSIS_ASSUME(_exp) ((void) 0)
#else // DBG
#define NT_ANALYSIS_ASSUME(_exp) __noop(_exp)
#endif // DBG

#endif // _PREFAST_

// NT_ASSERT_ACTION is the actual assertion action, i.e. raising runtime
// assertion failure. It should be used only by the macro of NT_ASSERT
// and NT_FRE_ASSERT below.
#define NT_ASSERT_ACTION(_exp) \
    ((!(_exp)) ? \
        (__annotation(L"Debug", L"AssertFail", L#_exp), \
         DbgRaiseAssertionFailure(), FALSE) : \
        TRUE)

#define NT_ASSERTMSG_ACTION(_msg, _exp) \
    ((!(_exp)) ? \
        (__annotation(L"Debug", L"AssertFail", L##_msg), \
         DbgRaiseAssertionFailure(), FALSE) : \
        TRUE)

#define NT_ASSERTMSGW_ACTION(_msg, _exp) \
    ((!(_exp)) ? \
        (__annotation(L"Debug", L"AssertFail", _msg), \
         DbgRaiseAssertionFailure(), FALSE) : \
        TRUE)

#if DBG

#define NT_ASSERT_ASSUME(_exp) \
    (NT_ANALYSIS_ASSUME(_exp), NT_ASSERT_ACTION(_exp))

#define NT_ASSERTMSG_ASSUME(_msg, _exp) \
    (NT_ANALYSIS_ASSUME(_exp), NT_ASSERTMSG_ACTION(_msg, _exp))

#define NT_ASSERTMSGW_ASSUME(_msg, _exp) \
    (NT_ANALYSIS_ASSUME(_exp), NT_ASSERTMSGW_ACTION(_msg, _exp))

// For DBG builds, NT_ASSERT_ASSUME and NT_ASSERT_NOASSUME have the same
// behavior. The behavior only differs for non-DBG.
#define NT_ASSERT_NOASSUME     NT_ASSERT_ASSUME
#define NT_ASSERTMSG_NOASSUME  NT_ASSERTMSG_ASSUME
#define NT_ASSERTMSGW_NOASSUME NT_ASSERTMSGW_ASSUME

#define NT_VERIFY     NT_ASSERT
#define NT_VERIFYMSG  NT_ASSERTMSG
#define NT_VERIFYMSGW NT_ASSERTMSGW

#else // DBG

#define NT_ASSERT_ASSUME(_exp)           (NT_ANALYSIS_ASSUME(_exp), 0)
#define NT_ASSERTMSG_ASSUME(_msg, _exp)  (NT_ANALYSIS_ASSUME(_exp), 0)
#define NT_ASSERTMSGW_ASSUME(_msg, _exp) (NT_ANALYSIS_ASSUME(_exp), 0)

#define NT_ASSERT_NOASSUME(_exp)           ((void) 0)
#define NT_ASSERTMSG_NOASSUME(_msg, _exp)  ((void) 0)
#define NT_ASSERTMSGW_NOASSUME(_msg, _exp) ((void) 0)

#define NT_VERIFY(_exp)           (NT_ANALYSIS_ASSUME(_exp), ((_exp) ? TRUE : FALSE))
#define NT_VERIFYMSG(_msg, _exp ) (NT_ANALYSIS_ASSUME(_exp), ((_exp) ? TRUE : FALSE))
#define NT_VERIFYMSGW(_msg, _exp) (NT_ANALYSIS_ASSUME(_exp), ((_exp) ? TRUE : FALSE))

#endif // DBG

// NT_FRE_ASSERT always takes the assertion action whether DBG or non-DBG.
#define NT_FRE_ASSERT(_exp)           (NT_ANALYSIS_ASSUME(_exp), NT_ASSERT_ACTION(_exp))
#define NT_FRE_ASSERTMSG(_msg, _exp)  (NT_ANALYSIS_ASSUME(_exp), NT_ASSERTMSG_ACTION(_msg, _exp))
#define NT_FRE_ASSERTMSGW(_msg, _exp) (NT_ANALYSIS_ASSUME(_exp), NT_ASSERTMSGW_ACTION(_msg, _exp))

#ifdef NT_ASSERT_ALWAYS_ASSUMES

#define NT_ASSERT     NT_ASSERT_ASSUME
#define NT_ASSERTMSG  NT_ASSERTMSG_ASSUME
#define NT_ASSERTMSGW NT_ASSERTMSGW_ASSUME

#else // NT_ASSERT_ALWAYS_ASSUMES

#define NT_ASSERT     NT_ASSERT_NOASSUME
#define NT_ASSERTMSG  NT_ASSERTMSG_NOASSUME
#define NT_ASSERTMSGW NT_ASSERTMSGW_NOASSUME

#endif // NT_ASSERT_ALWAYS_ASSUMES

#endif // _MSC_VER >= 1300

// end_wudfwdm

#if defined(_M_AMD64) && !defined(RC_INVOKED) && !defined(MIDL_PASS)

//
// Define intrinsic function to do in's and out's.
//

#ifdef __cplusplus
extern "C" {
#endif

UCHAR
__inbyte (
    _In_ USHORT Port
    );

USHORT
__inword (
    _In_ USHORT Port
    );

ULONG
__indword (
    _In_ USHORT Port
    );

VOID
__outbyte (
    _In_ USHORT Port,
    _In_ UCHAR Data
    );

VOID
__outword (
    _In_ USHORT Port,
    _In_ USHORT Data
    );

VOID
__outdword (
    _In_ USHORT Port,
    _In_ ULONG Data
    );

VOID
__inbytestring (
    _In_ USHORT Port,
    _Out_writes_all_(Count) PUCHAR Buffer,
    _In_ ULONG Count
    );

VOID
__inwordstring (
    _In_ USHORT Port,
    _Out_writes_all_(Count) PUSHORT Buffer,
    _In_ ULONG Count
    );

VOID
__indwordstring (
    _In_ USHORT Port,
    _Out_writes_all_(Count) PULONG Buffer,
    _In_ ULONG Count
    );

VOID
__outbytestring (
    _In_ USHORT Port,
    _In_reads_(Count) PUCHAR Buffer,
    _In_ ULONG Count
    );

VOID
__outwordstring (
    _In_ USHORT Port,
    _In_reads_(Count) PUSHORT Buffer,
    _In_ ULONG Count
    );

VOID
__outdwordstring (
    _In_ USHORT Port,
    _In_reads_(Count) PULONG Buffer,
    _In_ ULONG Count
    );

#pragma intrinsic(__inbyte)
#pragma intrinsic(__inword)
#pragma intrinsic(__indword)
#pragma intrinsic(__outbyte)
#pragma intrinsic(__outword)
#pragma intrinsic(__outdword)
#pragma intrinsic(__inbytestring)
#pragma intrinsic(__inwordstring)
#pragma intrinsic(__indwordstring)
#pragma intrinsic(__outbytestring)
#pragma intrinsic(__outwordstring)
#pragma intrinsic(__outdwordstring)

#ifdef __cplusplus
}
#endif

#endif // defined(_M_AMD64) && !defined(RC_INVOKED) && !defined(MIDL_PASS)

#if defined(_AMD64_) && !defined(DSF_DRIVER)

//
// I/O space read and write macros.
//
//  The READ/WRITE_REGISTER_* calls manipulate I/O registers in MEMORY space.
//
//  The READ/WRITE_PORT_* calls manipulate I/O registers in PORT space.
//

#ifdef __cplusplus
extern "C" {
#endif

__forceinline
UCHAR
READ_REGISTER_UCHAR (
    _In_ _Notliteral_ volatile UCHAR *Register
    )
{
    _ReadWriteBarrier();
    return *Register;
}

__forceinline
USHORT
READ_REGISTER_USHORT (
    _In_ _Notliteral_ volatile USHORT *Register
    )
{
    _ReadWriteBarrier();
    return *Register;
}

__forceinline
ULONG
READ_REGISTER_ULONG (
    _In_ _Notliteral_ volatile ULONG *Register
    )
{
    _ReadWriteBarrier();
    return *Register;
}

__forceinline
ULONG64
READ_REGISTER_ULONG64 (
    _In_ _Notliteral_ volatile ULONG64 *Register
    )
{
    _ReadWriteBarrier();
    return *Register;
}

__forceinline
VOID
READ_REGISTER_BUFFER_UCHAR (
    _In_reads_(Count) _Notliteral_ volatile UCHAR *Register,
    _Out_writes_all_(Count) PUCHAR Buffer,
    _In_ ULONG Count
    )
{
    _ReadWriteBarrier();
    __movsb(Buffer, (PUCHAR)Register, Count);
    return;
}

__forceinline
VOID
READ_REGISTER_BUFFER_USHORT (
    _In_reads_(Count) _Notliteral_ volatile USHORT *Register,
    _Out_writes_all_(Count) PUSHORT Buffer,
    _In_ ULONG Count
    )
{
    _ReadWriteBarrier();
    __movsw(Buffer, (PUSHORT)Register, Count);
    return;
}

__forceinline
VOID
READ_REGISTER_BUFFER_ULONG (
    _In_reads_(Count) _Notliteral_ volatile ULONG *Register,
    _Out_writes_all_(Count) PULONG Buffer,
    _In_ ULONG Count
    )
{
    _ReadWriteBarrier();
    __movsd(Buffer, (PULONG)Register, Count);
    return;
}

__forceinline
VOID
READ_REGISTER_BUFFER_ULONG64 (
    _In_reads_(Count) _Notliteral_ volatile ULONG64 *Register,
    _Out_writes_all_(Count) PULONG64 Buffer,
    _In_ ULONG Count
    )
{
    _ReadWriteBarrier();
    __movsq(Buffer, (PULONG64)Register, Count);
    return;
}

__forceinline
VOID
WRITE_REGISTER_UCHAR (
    _In_ _Notliteral_ volatile UCHAR *Register,
    _In_ UCHAR Value
    )
{

    *Register = Value;
    FastFence();
    return;
}

__forceinline
VOID
WRITE_REGISTER_USHORT (
    _In_ _Notliteral_ volatile USHORT *Register,
    _In_ USHORT Value
    )
{

    *Register = Value;
    FastFence();
    return;
}

__forceinline
VOID
WRITE_REGISTER_ULONG (
    _In_ _Notliteral_ volatile ULONG *Register,
    _In_ ULONG Value
    )
{

    *Register = Value;
    FastFence();
    return;
}

__forceinline
VOID
WRITE_REGISTER_ULONG64 (
    _In_ _Notliteral_ volatile ULONG64 *Register,
    _In_ ULONG64 Value
    )
{

    *Register = Value;
    FastFence();
    return;
}

__forceinline
VOID
WRITE_REGISTER_BUFFER_UCHAR (
    _Out_writes_(Count) _Notliteral_ volatile UCHAR *Register,
    _In_reads_(Count) PUCHAR Buffer,
    _In_ ULONG Count
    )
{

    __movsb((PUCHAR)Register, Buffer, Count);
    FastFence();
    return;
}

__forceinline
VOID
WRITE_REGISTER_BUFFER_USHORT (
    _Out_writes_(Count) _Notliteral_ volatile USHORT *Register,
    _In_reads_(Count) PUSHORT Buffer,
    _In_ ULONG Count
    )
{

    __movsw((PUSHORT)Register, Buffer, Count);
    FastFence();
    return;
}

__forceinline
VOID
WRITE_REGISTER_BUFFER_ULONG (
    _Out_writes_(Count) _Notliteral_ volatile ULONG *Register,
    _In_reads_(Count) PULONG Buffer,
    _In_ ULONG Count
    )
{

    __movsd((PULONG)Register, Buffer, Count);
    FastFence();
    return;
}

__forceinline
VOID
WRITE_REGISTER_BUFFER_ULONG64 (
    _Out_writes_(Count) _Notliteral_ volatile ULONG64 *Register,
    _In_reads_(Count) PULONG64 Buffer,
    _In_ ULONG Count
    )
{

    __movsq((PULONG64)Register, Buffer, Count);
    FastFence();
    return;
}

// end_wudfwdm
// end_sdfwdm

__forceinline
UCHAR
READ_PORT_UCHAR (
    _In_ _Notliteral_ PUCHAR Port
    )

{
    UCHAR Result;

    _ReadWriteBarrier();
    Result = __inbyte((USHORT)((ULONG_PTR)Port));
    _ReadWriteBarrier();
    return Result;
}

__forceinline
USHORT
READ_PORT_USHORT (
    _In_ _Notliteral_ PUSHORT Port
    )

{
    USHORT Result;

    _ReadWriteBarrier();
    Result = __inword((USHORT)((ULONG_PTR)Port));
    _ReadWriteBarrier();
    return Result;
}

__forceinline
ULONG
READ_PORT_ULONG (
    _In_ _Notliteral_ PULONG Port
    )

{
    ULONG Result;

    _ReadWriteBarrier();
    Result = __indword((USHORT)((ULONG_PTR)Port));
    _ReadWriteBarrier();
    return Result;
}


__forceinline
VOID
READ_PORT_BUFFER_UCHAR (
    _In_ _Notliteral_ PUCHAR Port,
    _Out_writes_all_(Count) PUCHAR Buffer,
    _In_ ULONG Count
    )

{
    _ReadWriteBarrier();
    __inbytestring((USHORT)((ULONG_PTR)Port), Buffer, Count);
    _ReadWriteBarrier();
    return;
}

__forceinline
VOID
READ_PORT_BUFFER_USHORT (
    _In_ _Notliteral_ PUSHORT Port,
    _Out_writes_all_(Count) PUSHORT Buffer,
    _In_ ULONG Count
    )

{
    _ReadWriteBarrier();
    __inwordstring((USHORT)((ULONG_PTR)Port), Buffer, Count);
    _ReadWriteBarrier();
    return;
}

__forceinline
VOID
READ_PORT_BUFFER_ULONG (
    _In_ _Notliteral_ PULONG Port,
    _Out_writes_all_(Count) PULONG Buffer,
    _In_ ULONG Count
    )

{
    _ReadWriteBarrier();
    __indwordstring((USHORT)((ULONG_PTR)Port), Buffer, Count);
    _ReadWriteBarrier();
    return;
}

__forceinline
VOID
WRITE_PORT_UCHAR (
    _In_ _Notliteral_ PUCHAR Port,
    _In_ UCHAR Value
    )

{
    _ReadWriteBarrier();
    __outbyte((USHORT)((ULONG_PTR)Port), Value);
    _ReadWriteBarrier();
    return;
}

__forceinline
VOID
WRITE_PORT_USHORT (
    _In_ _Notliteral_ PUSHORT Port,
    _In_ USHORT Value
    )

{
    _ReadWriteBarrier();
    __outword((USHORT)((ULONG_PTR)Port), Value);
    _ReadWriteBarrier();
    return;
}

__forceinline
VOID
WRITE_PORT_ULONG (
    _In_ _Notliteral_ PULONG Port,
    _In_ ULONG Value
    )

{
    _ReadWriteBarrier();
    __outdword((USHORT)((ULONG_PTR)Port), Value);
    _ReadWriteBarrier();
    return;
}

__forceinline
VOID
WRITE_PORT_BUFFER_UCHAR (
    _In_ _Notliteral_ PUCHAR Port,
    _In_reads_(Count) PUCHAR Buffer,
    _In_ ULONG Count
    )

{
    _ReadWriteBarrier();
    __outbytestring((USHORT)((ULONG_PTR)Port), Buffer, Count);
    _ReadWriteBarrier();
    return;
}

__forceinline
VOID
WRITE_PORT_BUFFER_USHORT (
    _In_ _Notliteral_ PUSHORT Port,
    _In_reads_(Count) PUSHORT Buffer,
    _In_ ULONG Count
    )

{
    _ReadWriteBarrier();
    __outwordstring((USHORT)((ULONG_PTR)Port), Buffer, Count);
    _ReadWriteBarrier();
    return;
}

__forceinline
VOID
WRITE_PORT_BUFFER_ULONG (
    _In_ _Notliteral_ PULONG Port,
    _In_reads_(Count) PULONG Buffer,
    _In_ ULONG Count
    )

{
    _ReadWriteBarrier();
    __outdwordstring((USHORT)((ULONG_PTR)Port), Buffer, Count);
    _ReadWriteBarrier();
    return;
}

// begin_sdfwdm
// begin_wudfwdm

#ifdef __cplusplus
}
#endif

#endif


#if defined(_M_ARM) && !defined(RC_INVOKED) && !defined(MIDL_PASS)

#endif // defined(_M_ARM) && !defined(RC_INVOKED) && !defined(MIDL_PASS)

#if defined(_M_ARM64) && !defined(RC_INVOKED) && !defined(MIDL_PASS)

#endif // defined(_M_ARM64) && !defined(RC_INVOKED) && !defined(MIDL_PASS)
// begin_ntoshvp
//
// Interrupt modes.
//

typedef enum _KINTERRUPT_MODE {
    LevelSensitive,
    Latched
} KINTERRUPT_MODE;

// end_wudfwdm

typedef enum _KINTERRUPT_POLARITY {
    InterruptPolarityUnknown,
    InterruptActiveHigh,
    InterruptRisingEdge = InterruptActiveHigh,
    InterruptActiveLow,
    InterruptFallingEdge = InterruptActiveLow,

#if (NTDDI_VERSION >= NTDDI_WIN8)

    InterruptActiveBoth,

#endif

#if (NTDDI_VERSION >= NTDDI_WINBLUE)

    InterruptActiveBothTriggerLow = InterruptActiveBoth,
    InterruptActiveBothTriggerHigh,

#endif

} KINTERRUPT_POLARITY, *PKINTERRUPT_POLARITY;

// end_ntoshvp
// begin_ntoshvp

typedef enum _MEMORY_CACHING_TYPE_ORIG {
    MmFrameBufferCached = 2
} MEMORY_CACHING_TYPE_ORIG;

typedef enum _MEMORY_CACHING_TYPE {
    MmNonCached = FALSE,
    MmCached = TRUE,
    MmWriteCombined = MmFrameBufferCached,
    MmHardwareCoherentCached,
    MmNonCachedUnordered,       // IA64
    MmUSWCCached,
    MmMaximumCacheType,
    MmNotMapped = -1
} MEMORY_CACHING_TYPE;

// end_ntoshvp

//
// Structures used by the kernel drivers to describe which ports must be
// hooked out directly from the V86 emulator to the driver.
//

typedef enum _EMULATOR_PORT_ACCESS_TYPE {
    Uchar,
    Ushort,
    Ulong
} EMULATOR_PORT_ACCESS_TYPE, *PEMULATOR_PORT_ACCESS_TYPE;

//
// Access Modes
//

#define EMULATOR_READ_ACCESS    0x01
#define EMULATOR_WRITE_ACCESS   0x02

typedef struct _EMULATOR_ACCESS_ENTRY {
    ULONG BasePort;
    ULONG NumConsecutivePorts;
    EMULATOR_PORT_ACCESS_TYPE AccessType;
    UCHAR AccessMode;
    UCHAR StringSupport;
    PVOID Routine;
} EMULATOR_ACCESS_ENTRY, *PEMULATOR_ACCESS_ENTRY;

// begin_ntoshvp

typedef struct _PCI_SLOT_NUMBER {
    union {
        struct {
            ULONG   DeviceNumber:5;
            ULONG   FunctionNumber:3;
            ULONG   Reserved:24;
        } bits;
        ULONG   AsULONG;
    } u;
} PCI_SLOT_NUMBER, *PPCI_SLOT_NUMBER;

#define PCI_TYPE0_ADDRESSES             6
#define PCI_TYPE1_ADDRESSES             2
#define PCI_TYPE2_ADDRESSES             5

typedef struct _PCI_COMMON_HEADER {
    USHORT  VendorID;                   // (ro)
    USHORT  DeviceID;                   // (ro)
    USHORT  Command;                    // Device control
    USHORT  Status;
    UCHAR   RevisionID;                 // (ro)
    UCHAR   ProgIf;                     // (ro)
    UCHAR   SubClass;                   // (ro)
    UCHAR   BaseClass;                  // (ro)
    UCHAR   CacheLineSize;              // (ro+)
    UCHAR   LatencyTimer;               // (ro+)
    UCHAR   HeaderType;                 // (ro)
    UCHAR   BIST;                       // Built in self test

    union {
        struct _PCI_HEADER_TYPE_0 {
            ULONG   BaseAddresses[PCI_TYPE0_ADDRESSES];
            ULONG   CIS;
            USHORT  SubVendorID;
            USHORT  SubSystemID;
            ULONG   ROMBaseAddress;
            UCHAR   CapabilitiesPtr;
            UCHAR   Reserved1[3];
            ULONG   Reserved2;
            UCHAR   InterruptLine;      //
            UCHAR   InterruptPin;       // (ro)
            UCHAR   MinimumGrant;       // (ro)
            UCHAR   MaximumLatency;     // (ro)
        } type0;


    } u;

} PCI_COMMON_HEADER, *PPCI_COMMON_HEADER;

// end_ntoshvp

#ifdef __cplusplus

typedef struct _PCI_COMMON_CONFIG : PCI_COMMON_HEADER {
    UCHAR   DeviceSpecific[192];
} PCI_COMMON_CONFIG, *PPCI_COMMON_CONFIG;

#else

typedef struct _PCI_COMMON_CONFIG {
    PCI_COMMON_HEADER DUMMYSTRUCTNAME;
    UCHAR   DeviceSpecific[192];
} PCI_COMMON_CONFIG, *PPCI_COMMON_CONFIG;

#endif

#define PCI_COMMON_HDR_LENGTH (UFIELD_OFFSET (PCI_COMMON_CONFIG, DeviceSpecific))
#define PCI_EXTENDED_CONFIG_LENGTH          0x1000

// begin_ntoshvp

#define PCI_MAX_DEVICES                     32
#define PCI_MAX_FUNCTION                    8
#define PCI_MAX_BRIDGE_NUMBER               0xFF

#define PCI_INVALID_VENDORID                0xFFFF

//
// Bit encodings for  PCI_COMMON_CONFIG.HeaderType
//

#define PCI_MULTIFUNCTION                   0x80
#define PCI_DEVICE_TYPE                     0x00
#define PCI_BRIDGE_TYPE                     0x01
#define PCI_CARDBUS_BRIDGE_TYPE             0x02

// end_ntoshvp

#define PCI_CONFIGURATION_TYPE(PciData) \
    (((PPCI_COMMON_CONFIG)(PciData))->HeaderType & ~PCI_MULTIFUNCTION)

#define PCI_MULTIFUNCTION_DEVICE(PciData) \
    ((((PPCI_COMMON_CONFIG)(PciData))->HeaderType & PCI_MULTIFUNCTION) != 0)

//
// Bit encodings for PCI_COMMON_CONFIG.Command
//

// begin_ntoshvp

#define PCI_ENABLE_IO_SPACE                 0x0001
#define PCI_ENABLE_MEMORY_SPACE             0x0002
#define PCI_ENABLE_BUS_MASTER               0x0004
#define PCI_ENABLE_SPECIAL_CYCLES           0x0008
#define PCI_ENABLE_WRITE_AND_INVALIDATE     0x0010
#define PCI_ENABLE_VGA_COMPATIBLE_PALETTE   0x0020
#define PCI_ENABLE_PARITY                   0x0040  // (ro+)
#define PCI_ENABLE_WAIT_CYCLE               0x0080  // (ro+)
#define PCI_ENABLE_SERR                     0x0100  // (ro+)
#define PCI_ENABLE_FAST_BACK_TO_BACK        0x0200  // (ro)
#define PCI_DISABLE_LEVEL_INTERRUPT         0x0400

//
// Bit encodings for PCI_COMMON_CONFIG.Status
//

#define PCI_STATUS_INTERRUPT_PENDING        0x0008
#define PCI_STATUS_CAPABILITIES_LIST        0x0010  // (ro)
#define PCI_STATUS_66MHZ_CAPABLE            0x0020  // (ro)
#define PCI_STATUS_UDF_SUPPORTED            0x0040  // (ro)
#define PCI_STATUS_FAST_BACK_TO_BACK        0x0080  // (ro)
#define PCI_STATUS_DATA_PARITY_DETECTED     0x0100
#define PCI_STATUS_DEVSEL                   0x0600  // 2 bits wide
#define PCI_STATUS_SIGNALED_TARGET_ABORT    0x0800
#define PCI_STATUS_RECEIVED_TARGET_ABORT    0x1000
#define PCI_STATUS_RECEIVED_MASTER_ABORT    0x2000
#define PCI_STATUS_SIGNALED_SYSTEM_ERROR    0x4000
#define PCI_STATUS_DETECTED_PARITY_ERROR    0x8000

// end_ntoshvp

//
// The NT PCI Driver uses a WhichSpace parameter on its CONFIG_READ/WRITE
// routines.   The following values are defined-
//

#define PCI_WHICHSPACE_CONFIG               0x0
#define PCI_WHICHSPACE_ROM                  0x52696350

//
// PCI Capability IDs
//

// begin_ntoshvp

#define PCI_CAPABILITY_ID_POWER_MANAGEMENT  0x01
#define PCI_CAPABILITY_ID_AGP               0x02
#define PCI_CAPABILITY_ID_VPD               0x03
#define PCI_CAPABILITY_ID_SLOT_ID           0x04
#define PCI_CAPABILITY_ID_MSI               0x05
#define PCI_CAPABILITY_ID_CPCI_HOTSWAP      0x06
#define PCI_CAPABILITY_ID_PCIX              0x07
#define PCI_CAPABILITY_ID_HYPERTRANSPORT    0x08
#define PCI_CAPABILITY_ID_VENDOR_SPECIFIC   0x09
#define PCI_CAPABILITY_ID_DEBUG_PORT        0x0A
#define PCI_CAPABILITY_ID_CPCI_RES_CTRL     0x0B
#define PCI_CAPABILITY_ID_SHPC              0x0C
#define PCI_CAPABILITY_ID_P2P_SSID          0x0D
#define PCI_CAPABILITY_ID_AGP_TARGET        0x0E
#define PCI_CAPABILITY_ID_SECURE            0x0F
#define PCI_CAPABILITY_ID_PCI_EXPRESS       0x10
#define PCI_CAPABILITY_ID_MSIX              0x11
#define PCI_CAPABILITY_ID_SATA_CONFIG       0x12
#define PCI_CAPABILITY_ID_ADVANCED_FEATURES 0x13

//
// All PCI Capability structures have the following header.
//
// CapabilityID is used to identify the type of the structure (is
// one of the PCI_CAPABILITY_ID values above.
//
// Next is the offset in PCI Configuration space (0x40 - 0xfc) of the
// next capability structure in the list, or 0x00 if there are no more
// entries.
//
typedef struct _PCI_CAPABILITIES_HEADER {
    UCHAR   CapabilityID;
    UCHAR   Next;
} PCI_CAPABILITIES_HEADER, *PPCI_CAPABILITIES_HEADER;

// end_ntoshvp

//
// Power Management Capability
//

typedef struct _PCI_PMC {
    UCHAR       Version:3;
    UCHAR       PMEClock:1;
    UCHAR       Rsvd1:1;
    UCHAR       DeviceSpecificInitialization:1;
    UCHAR       Rsvd2:2;
    struct _PM_SUPPORT {
        UCHAR   Rsvd2:1;
        UCHAR   D1:1;
        UCHAR   D2:1;
        UCHAR   PMED0:1;
        UCHAR   PMED1:1;
        UCHAR   PMED2:1;
        UCHAR   PMED3Hot:1;
        UCHAR   PMED3Cold:1;
    } Support;
} PCI_PMC, *PPCI_PMC;

typedef struct _PCI_PMCSR {
    USHORT      PowerState:2;
    USHORT      Rsvd1:1;
    USHORT      NoSoftReset:1;
    USHORT      Rsvd2:4;
    USHORT      PMEEnable:1;
    USHORT      DataSelect:4;
    USHORT      DataScale:2;
    USHORT      PMEStatus:1;
} PCI_PMCSR, *PPCI_PMCSR;


typedef struct _PCI_PMCSR_BSE {
    UCHAR       Rsvd1:6;
    UCHAR       D3HotSupportsStopClock:1;       // B2_B3#
    UCHAR       BusPowerClockControlEnabled:1;  // BPCC_EN
} PCI_PMCSR_BSE, *PPCI_PMCSR_BSE;


typedef struct _PCI_PM_CAPABILITY {

    PCI_CAPABILITIES_HEADER Header;

    //
    // Power Management Capabilities (Offset = 2)
    //

    union {
        PCI_PMC         Capabilities;
        USHORT          AsUSHORT;
    } PMC;

    //
    // Power Management Control/Status (Offset = 4)
    //

    union {
        PCI_PMCSR       ControlStatus;
        USHORT          AsUSHORT;
    } PMCSR;

    //
    // PMCSR PCI-PCI Bridge Support Extensions
    //

    union {
        PCI_PMCSR_BSE   BridgeSupport;
        UCHAR           AsUCHAR;
    } PMCSR_BSE;

    //
    // Optional read only 8 bit Data register.  Contents controlled by
    // DataSelect and DataScale in ControlStatus.
    //

    UCHAR   Data;

} PCI_PM_CAPABILITY, *PPCI_PM_CAPABILITY;

// end_wdm
// begin_ntddk

//
// AGP Capabilities
//
typedef struct _PCI_AGP_CAPABILITY {

    PCI_CAPABILITIES_HEADER Header;

    USHORT  Minor:4;
    USHORT  Major:4;
    USHORT  Rsvd1:8;

    struct _PCI_AGP_STATUS {
        ULONG   Rate:3;
        ULONG   Agp3Mode:1;
        ULONG   FastWrite:1;
        ULONG   FourGB:1;
        ULONG   HostTransDisable:1;
        ULONG   Gart64:1;
        ULONG   ITA_Coherent:1;
        ULONG   SideBandAddressing:1;                   // SBA
        ULONG   CalibrationCycle:3;
        ULONG   AsyncRequestSize:3;
        ULONG   Rsvd1:1;
        ULONG   Isoch:1;
        ULONG   Rsvd2:6;
        ULONG   RequestQueueDepthMaximum:8;             // RQ
    } AGPStatus;

    struct _PCI_AGP_COMMAND {
        ULONG   Rate:3;
        ULONG   Rsvd1:1;
        ULONG   FastWriteEnable:1;
        ULONG   FourGBEnable:1;
        ULONG   Rsvd2:1;
        ULONG   Gart64:1;
        ULONG   AGPEnable:1;
        ULONG   SBAEnable:1;
        ULONG   CalibrationCycle:3;
        ULONG   AsyncReqSize:3;
        ULONG   Rsvd3:8;
        ULONG   RequestQueueDepth:8;
    } AGPCommand;

} PCI_AGP_CAPABILITY, *PPCI_AGP_CAPABILITY;

//
// An AGPv3 Target must have an extended capability,
// but it's only present for a Master when the Isoch
// bit is set in its status register
//
typedef enum _EXTENDED_AGP_REGISTER {
    IsochStatus,
    AgpControl,
    ApertureSize,
    AperturePageSize,
    GartLow,
    GartHigh,
    IsochCommand
} EXTENDED_AGP_REGISTER, *PEXTENDED_AGP_REGISTER;

typedef struct _PCI_AGP_ISOCH_STATUS {
    ULONG ErrorCode: 2;
    ULONG Rsvd1: 1;
    ULONG Isoch_L: 3;
    ULONG Isoch_Y: 2;
    ULONG Isoch_N: 8;
    ULONG Rsvd2: 16;
} PCI_AGP_ISOCH_STATUS, *PPCI_AGP_ISOCH_STATUS;

typedef struct _PCI_AGP_CONTROL {
    ULONG Rsvd1: 7;
    ULONG GTLB_Enable: 1;
    ULONG AP_Enable: 1;
    ULONG CAL_Disable: 1;
    ULONG Rsvd2: 22;
} PCI_AGP_CONTROL, *PPCI_AGP_CONTROL;

typedef struct _PCI_AGP_APERTURE_PAGE_SIZE {
    USHORT PageSizeMask: 11;
    USHORT Rsvd1: 1;
    USHORT PageSizeSelect: 4;
} PCI_AGP_APERTURE_PAGE_SIZE, *PPCI_AGP_APERTURE_PAGE_SIZE;

typedef struct _PCI_AGP_ISOCH_COMMAND {
    USHORT Rsvd1: 6;
    USHORT Isoch_Y: 2;
    USHORT Isoch_N: 8;
} PCI_AGP_ISOCH_COMMAND, *PPCI_AGP_ISOCH_COMMAND;

typedef struct PCI_AGP_EXTENDED_CAPABILITY {

    PCI_AGP_ISOCH_STATUS IsochStatus;

//
// Target only ----------------<<-begin->>
//
    PCI_AGP_CONTROL AgpControl;
    USHORT ApertureSize;
    PCI_AGP_APERTURE_PAGE_SIZE AperturePageSize;
    ULONG GartLow;
    ULONG GartHigh;
//
// ------------------------------<<-end->>
//

    PCI_AGP_ISOCH_COMMAND IsochCommand;

} PCI_AGP_EXTENDED_CAPABILITY, *PPCI_AGP_EXTENDED_CAPABILITY;


#define PCI_AGP_RATE_1X     0x1
#define PCI_AGP_RATE_2X     0x2
#define PCI_AGP_RATE_4X     0x4

// end_ntddk
// begin_wdm

//
// PCI-X Capability
//

// begin_ntoshvp

typedef struct {

    PCI_CAPABILITIES_HEADER Header;

    union {
        struct {
            USHORT  DataParityErrorRecoveryEnable:1;
            USHORT  EnableRelaxedOrdering:1;
            USHORT  MaxMemoryReadByteCount:2;
            USHORT  MaxOutstandingSplitTransactions:3;
            USHORT  Reserved:9;
        } bits;
        USHORT  AsUSHORT;
    } Command;

    union {
        struct {
            ULONG   FunctionNumber:3;
            ULONG   DeviceNumber:5;
            ULONG   BusNumber:8;
            ULONG   Device64Bit:1;
            ULONG   Capable133MHz:1;
            ULONG   SplitCompletionDiscarded:1;
            ULONG   UnexpectedSplitCompletion:1;
            ULONG   DeviceComplexity:1;
            ULONG   DesignedMaxMemoryReadByteCount:2;
            ULONG   DesignedMaxOutstandingSplitTransactions:3;
            ULONG   DesignedMaxCumulativeReadSize:3;
            ULONG   ReceivedSplitCompletionErrorMessage:1;
            ULONG   CapablePCIX266:1;
            ULONG   CapablePCIX533:1;
        } bits;
        ULONG   AsULONG;
    } Status;
} PCI_X_CAPABILITY, *PPCI_X_CAPABILITY;

// end_wdm
// begin_ntddk

//
// PCI-X Bridge Capability
//

//
// Values for BusModeFrequency in the SecondaryStatus register
//
#define PCIX_MODE_CONVENTIONAL_PCI  0x0
#define PCIX_MODE1_66MHZ            0x1
#define PCIX_MODE1_100MHZ           0x2
#define PCIX_MODE1_133MHZ           0x3
#define PCIX_MODE2_266_66MHZ        0x9
#define PCIX_MODE2_266_100MHZ       0xA
#define PCIX_MODE2_266_133MHZ       0xB
#define PCIX_MODE2_533_66MHZ        0xD
#define PCIX_MODE2_533_100MHZ       0xE
#define PCIX_MODE2_533_133MHZ       0xF

//
// Values for the Version in the SecondaryStatus register
//
#define PCIX_VERSION_MODE1_ONLY     0x0
#define PCIX_VERSION_MODE2_ECC      0x1
#define PCIX_VERSION_DUAL_MODE_ECC  0x2

typedef struct _PCIX_BRIDGE_CAPABILITY {

    PCI_CAPABILITIES_HEADER Header;

    union {
        struct {
            USHORT Bus64Bit:1;
            USHORT Bus133MHzCapable:1;
            USHORT SplitCompletionDiscarded:1;
            USHORT UnexpectedSplitCompletion:1;
            USHORT SplitCompletionOverrun:1;
            USHORT SplitRequestDelayed:1;
            USHORT BusModeFrequency:4;  // PCIX_MODE_x
            USHORT Rsvd:2;
            USHORT Version:2;           // PCIX_VERSION_x
            USHORT Bus266MHzCapable:1;
            USHORT Bus533MHzCapable:1;
        } DUMMYSTRUCTNAME;
        USHORT AsUSHORT;
    } SecondaryStatus;

    union {
        struct {
            ULONG FunctionNumber:3;
            ULONG DeviceNumber:5;
            ULONG BusNumber:8;
            ULONG Device64Bit:1;
            ULONG Device133MHzCapable:1;
            ULONG SplitCompletionDiscarded:1;
            ULONG UnexpectedSplitCompletion:1;
            ULONG SplitCompletionOverrun:1;
            ULONG SplitRequestDelayed:1;
            ULONG Rsvd:7;
            ULONG DIMCapable:1;
            ULONG Device266MHzCapable:1;
            ULONG Device533MHzCapable:1;
        } DUMMYSTRUCTNAME;
        ULONG AsULONG;
    } BridgeStatus;

    USHORT UpstreamSplitTransactionCapacity;
    USHORT UpstreamSplitTransactionLimit;

    USHORT DownstreamSplitTransactionCapacity;
    USHORT DownstreamSplitTransactionLimit;

    union {
        struct {
            ULONG SelectSecondaryRegisters:1;
            ULONG ErrorPresentInOtherBank:1;
            ULONG AdditionalCorrectableError:1;
            ULONG AdditionalUncorrectableError:1;
            ULONG ErrorPhase:3;
            ULONG ErrorCorrected:1;
            ULONG Syndrome:8;
            ULONG ErrorFirstCommand:4;
            ULONG ErrorSecondCommand:4;
            ULONG ErrorUpperAttributes:4;
            ULONG ControlUpdateEnable:1;
            ULONG Rsvd:1;
            ULONG DisableSingleBitCorrection:1;
            ULONG EccMode:1;
        } DUMMYSTRUCTNAME;
        ULONG AsULONG;
    } EccControlStatus;

    ULONG EccFirstAddress;
    ULONG EccSecondAddress;
    ULONG EccAttribute;

} PCIX_BRIDGE_CAPABILITY, *PPCIX_BRIDGE_CAPABILITY;

// end_ntoshvp

//
// PCI to PCI Bridge Subsystem ID Capability
//
typedef struct _PCI_SUBSYSTEM_IDS_CAPABILITY {

    PCI_CAPABILITIES_HEADER Header;
    USHORT Reserved;
    USHORT SubVendorID;
    USHORT SubSystemID;

} PCI_SUBSYSTEM_IDS_CAPABILITY, *PPCI_SUBSYSTEM_IDS_CAPABILITY;

//
// PCI Advanced Features Capability
//

typedef struct _PCI_ADVANCED_FEATURES_CAPABILITY {

    PCI_CAPABILITIES_HEADER Header;
    UCHAR Length;

    union {
        struct {
            UCHAR FunctionLevelResetSupported:1;
            UCHAR TransactionsPendingSupported:1;
            UCHAR Rsvd:6;
        } DUMMYSTRUCTNAME;

        UCHAR AsUCHAR;
    } Capabilities;

    union {
        struct {
            UCHAR InitiateFunctionLevelReset:1;
            UCHAR Rsvd:7;
        } DUMMYSTRUCTNAME;

        UCHAR AsUCHAR;
    } Control;

    union {
        struct {
            UCHAR TransactionsPending:1;
            UCHAR Rsvd:7;
        } DUMMYSTRUCTNAME;

        UCHAR AsUCHAR;
    } Status;

} PCI_ADVANCED_FEATURES_CAPABILITY, *PPCI_ADVANCED_FEATURES_CAPABILITY;

//
// _OSC is used by OSPM to query the capabilities of a device and to
// communicate the features supported by the device driver to the platform.
// The _OSC interface for PCI host bridge devices that originate PCI, PCI-X or
// PCI Express hierarchies is identified by a UUID of {33db4d5b-1ff7-401c-9657-
// 7441c03dd766}. A revision ID of 1 indicates that the capabilities buffer is
// composed of 3 DWORDs.
// The first DWORD is common across all OSC implementations and includes status
// and error information.
// The second DWORD (Support Field) provides information regarding OS supported
// features.
// The third DWORD (Control Field) is used to submit request for control of
// associated features. If any bits in the control field are returned cleared,
// then the respective feature is unsupported by the platform and must not be
// enabled.
// According to the PCI Firmware Specification a machine with multiple host
// bridge devices should report the same capabilities for all host bridges
// and also negotiate control of the features in the same way.
//

#define OSC_FIRMWARE_FAILURE                            0x02
#define OSC_UNRECOGNIZED_UUID                           0x04
#define OSC_UNRECOGNIZED_REVISION                       0x08
#define OSC_CAPABILITIES_MASKED                         0x10

#define PCI_ROOT_BUS_OSC_METHOD_CAPABILITY_REVISION     0x01

//
// The following declarations pertain to the second and third DWORD in
// evaluation of _OSC for PCI host bridge devices.
//

typedef struct _PCI_ROOT_BUS_OSC_SUPPORT_FIELD {
    union {
        struct {
            ULONG ExtendedConfigOpRegions:1;
            ULONG ActiveStatePowerManagement:1;
            ULONG ClockPowerManagement:1;
            ULONG SegmentGroups:1;
            ULONG MessageSignaledInterrupts:1;
            ULONG OptimizedBufferFlushAndFill:1;
            ULONG AspmOptionality:1;
            ULONG Reserved:25;
        } DUMMYSTRUCTNAME;
        ULONG AsULONG;
    } u;
} PCI_ROOT_BUS_OSC_SUPPORT_FIELD, *PPCI_ROOT_BUS_OSC_SUPPORT_FIELD;

typedef struct _PCI_ROOT_BUS_OSC_CONTROL_FIELD {
    union {
        struct {
            ULONG ExpressNativeHotPlug:1;
            ULONG ShpcNativeHotPlug:1;
            ULONG ExpressNativePME:1;
            ULONG ExpressAdvancedErrorReporting:1;
            ULONG ExpressCapabilityStructure:1;
            ULONG LatencyToleranceReporting:1;
            ULONG Reserved:26;
        } DUMMYSTRUCTNAME;
        ULONG AsULONG;
    } u;
} PCI_ROOT_BUS_OSC_CONTROL_FIELD, *PPCI_ROOT_BUS_OSC_CONTROL_FIELD;

//
// The following comes from the PCI Firmware Specification, version 3.1.  It
// defines bus capabilities as reported by an ACPI BIOS.
//

typedef struct _PCI_FIRMWARE_BUS_CAPS {
    USHORT Type;
    USHORT Length; // must be 16
    struct {
        UCHAR SixtyFourBitDevice:1;
        UCHAR PciXMode1EccCapable:1;
        UCHAR DeviceIdMessagingCapable:1;
        UCHAR ObffWakeSignalCapable:1;
        UCHAR Reserved1:4;
    } DUMMYSTRUCTNAME;
    UCHAR CurrentSpeedAndMode;
    UCHAR SupportedSpeedsAndModesLowByte;
    UCHAR SupportedSpeedsAndModesHighByte;
    UCHAR Voltage;
    UCHAR Reserved2[7];
} PCI_FIRMWARE_BUS_CAPS, *PPCI_FIRMWARE_BUS_CAPS;

typedef struct _PCI_FIRMWARE_BUS_CAPS_RETURN_BUFFER {
    USHORT Version;
    USHORT Status;
    ULONG  Length;
    PCI_FIRMWARE_BUS_CAPS Caps;
} PCI_FIRMWARE_BUS_CAPS_RETURN_BUFFER, *PPCI_FIRMWARE_BUS_CAPS_RETURN_BUFFER;

//
// An enumerator for the PCI physical and electrical interface.
//

// begin_ntoshvp

typedef enum _PCI_HARDWARE_INTERFACE {

    PciConventional,
    PciXMode1,
    PciXMode2,
    PciExpress

} PCI_HARDWARE_INTERFACE, *PPCI_HARDWARE_INTERFACE;

// end_ntoshvp

typedef enum {

    BusWidth32Bits,
    BusWidth64Bits

} PCI_BUS_WIDTH;

typedef struct _PCI_ROOT_BUS_HARDWARE_CAPABILITY {

    //
    // Describes the secondary side of a PCI root bus.
    //

    PCI_HARDWARE_INTERFACE SecondaryInterface;

    //
    // These additional capabilities are available when each of the following
    // is true.
    // 1. The secondary side of a PCI root bus operates in conventional or
    //    PCI-X mode.
    // 2. The PCI root bus has a hardware ID or compatible ID of PNP0A03.
    // 3. A _DSM function 4 is defined for the root bus.
    //

    struct {

        //
        // This boolean indicates if the remaining fields describing the bus
        // capabilities are valid or not.
        //

        BOOLEAN BusCapabilitiesFound;


        //
        // Provides information on current and supported speeds/modes.
        //

        ULONG CurrentSpeedAndMode;
        ULONG SupportedSpeedsAndModes;

        //
        // Describes the root bus capability on forwarding of Device ID message
        // transactions.
        //

        BOOLEAN DeviceIDMessagingCapable;

        //
        // Provides the width for a PCI interface.
        //

        PCI_BUS_WIDTH SecondaryBusWidth;
    } DUMMYSTRUCTNAME;

    //
    // Fields describing features supported as well as control for them from
    // the bios.
    //

    PCI_ROOT_BUS_OSC_SUPPORT_FIELD OscFeatureSupport;
    PCI_ROOT_BUS_OSC_CONTROL_FIELD OscControlRequest;
    PCI_ROOT_BUS_OSC_CONTROL_FIELD OscControlGranted;

} PCI_ROOT_BUS_HARDWARE_CAPABILITY, *PPCI_ROOT_BUS_HARDWARE_CAPABILITY;

//
// PCI Express Capability
//

// begin_ntoshvp

typedef union _PCI_EXPRESS_CAPABILITIES_REGISTER {

    struct {

        USHORT CapabilityVersion:4;
        USHORT DeviceType:4;               // PCI_EXPRESS_DEVICE_TYPE
        USHORT SlotImplemented:1;
        USHORT InterruptMessageNumber:5;
        USHORT Rsvd:2;
    } DUMMYSTRUCTNAME;

    USHORT AsUSHORT;

} PCI_EXPRESS_CAPABILITIES_REGISTER, *PPCI_EXPRESS_CAPABILITIES_REGISTER;

typedef union _PCI_EXPRESS_DEVICE_CAPABILITIES_REGISTER {

    struct {

        ULONG MaxPayloadSizeSupported:3;     // EXPRESS_MAX_PAYLOAD_SIZE
        ULONG PhantomFunctionsSupported:2;
        ULONG ExtendedTagSupported:1;
        ULONG L0sAcceptableLatency:3;        // EXPRESS_L0S_LATENCY
        ULONG L1AcceptableLatency:3;         // EXPRESS_L1_LATENCY
        ULONG Undefined:3;
        ULONG RoleBasedErrorReporting:1;
        ULONG Rsvd1:2;
        ULONG CapturedSlotPowerLimit:8;
        ULONG CapturedSlotPowerLimitScale:2;
        ULONG FunctionLevelResetCapability:1;
        ULONG Rsvd2:3;
    } DUMMYSTRUCTNAME;

    ULONG AsULONG;

} PCI_EXPRESS_DEVICE_CAPABILITIES_REGISTER, *PPCI_EXPRESS_DEVICE_CAPABILITIES_REGISTER;

//
// The low 3 bits of the PCI Express device control register dictate whether
// a device that implements AER routes error messages to the root complex.
// This mask is used when programming the AER bits in the device control
// register.
//

#define PCI_EXPRESS_AER_DEVICE_CONTROL_MASK 0x07;

typedef union _PCI_EXPRESS_DEVICE_CONTROL_REGISTER {

    struct {

        USHORT CorrectableErrorEnable:1;
        USHORT NonFatalErrorEnable:1;
        USHORT FatalErrorEnable:1;
        USHORT UnsupportedRequestErrorEnable:1;
        USHORT EnableRelaxedOrder:1;
        USHORT MaxPayloadSize:3;                 // EXPRESS_MAX_PAYLOAD_SIZE
        USHORT ExtendedTagEnable:1;
        USHORT PhantomFunctionsEnable:1;
        USHORT AuxPowerEnable:1;
        USHORT NoSnoopEnable:1;
        USHORT MaxReadRequestSize:3;             // EXPRESS_MAX_PAYLOAD_SIZE
        USHORT BridgeConfigRetryEnable:1;
    } DUMMYSTRUCTNAME;

    //
    // Hack to allow alias of BridgeConfigRetryEnable bit for FLR.
    //

    struct {
        USHORT :15;
        USHORT InitiateFunctionLevelReset:1;
    } DUMMYSTRUCTNAME2;

    USHORT AsUSHORT;

} PCI_EXPRESS_DEVICE_CONTROL_REGISTER, *PPCI_EXPRESS_DEVICE_CONTROL_REGISTER;

//
// The low 4 bits of the PCI Express device status register hold AER device
// status. This mask is used when programming the AER bits in the device status
// register.
//

#define PCI_EXPRESS_AER_DEVICE_STATUS_MASK 0x0F;

typedef union _PCI_EXPRESS_DEVICE_STATUS_REGISTER {

    struct {

        USHORT CorrectableErrorDetected:1;
        USHORT NonFatalErrorDetected:1;
        USHORT FatalErrorDetected:1;
        USHORT UnsupportedRequestDetected:1;
        USHORT AuxPowerDetected:1;
        USHORT TransactionsPending:1;
        USHORT Rsvd:10;
    } DUMMYSTRUCTNAME;

    USHORT AsUSHORT;

} PCI_EXPRESS_DEVICE_STATUS_REGISTER, *PPCI_EXPRESS_DEVICE_STATUS_REGISTER;

typedef union _PCI_EXPRESS_LINK_CAPABILITIES_REGISTER {

    struct {

        ULONG MaximumLinkSpeed:4;
        ULONG MaximumLinkWidth:6;
        ULONG ActiveStatePMSupport:2;   // EXPRESS_ASPM_CONFIG
        ULONG L0sExitLatency:3;         // EXPRESS_L0S_LATENCY
        ULONG L1ExitLatency:3;          // EXPRESS_L1_LATENCY
        ULONG ClockPowerManagement:1;
        ULONG SurpriseDownErrorReportingCapable:1;
        ULONG DataLinkLayerActiveReportingCapable:1;
        ULONG LinkBandwidthNotificationCapability:1;
        ULONG AspmOptionalityCompliance:1;
        ULONG Rsvd:1;
        ULONG PortNumber:8;
    } DUMMYSTRUCTNAME;

    ULONG AsULONG;

} PCI_EXPRESS_LINK_CAPABILITIES_REGISTER, *PPCI_EXPRESS_LINK_CAPABILITIES_REGISTER;

typedef union _PCI_EXPRESS_LINK_CONTROL_REGISTER {

    struct {

        USHORT ActiveStatePMControl:2;    // EXPRESS_ASPM_CONFIG
        USHORT Rsvd1:1;
        USHORT ReadCompletionBoundary:1;  // EXPRESS_RCB
        USHORT LinkDisable:1;
        USHORT RetrainLink:1;
        USHORT CommonClockConfig:1;
        USHORT ExtendedSynch:1;
        USHORT EnableClockPowerManagement:1;
        USHORT Rsvd2:7;
    } DUMMYSTRUCTNAME;

    USHORT AsUSHORT;

} PCI_EXPRESS_LINK_CONTROL_REGISTER, *PPCI_EXPRESS_LINK_CONTROL_REGISTER;

typedef union _PCI_EXPRESS_LINK_STATUS_REGISTER {

    struct {

        USHORT LinkSpeed:4;
        USHORT LinkWidth:6;
        USHORT Undefined:1;
        USHORT LinkTraining:1;
        USHORT SlotClockConfig:1;
        USHORT DataLinkLayerActive:1;
        USHORT Rsvd:2;
    } DUMMYSTRUCTNAME;

    USHORT AsUSHORT;

} PCI_EXPRESS_LINK_STATUS_REGISTER, *PPCI_EXPRESS_LINK_STATUS_REGISTER;

typedef union _PCI_EXPRESS_SLOT_CAPABILITIES_REGISTER {

    struct {

        ULONG AttentionButtonPresent:1;
        ULONG PowerControllerPresent:1;
        ULONG MRLSensorPresent:1;
        ULONG AttentionIndicatorPresent:1;
        ULONG PowerIndicatorPresent:1;
        ULONG HotPlugSurprise:1;
        ULONG HotPlugCapable:1;
        ULONG SlotPowerLimit:8;
        ULONG SlotPowerLimitScale:2;
        ULONG ElectromechanicalLockPresent:1;
        ULONG NoCommandCompletedSupport:1;
        ULONG PhysicalSlotNumber:13;
    } DUMMYSTRUCTNAME;

    ULONG AsULONG;

} PCI_EXPRESS_SLOT_CAPABILITIES_REGISTER, *PPCI_EXPRESS_SLOT_CAPABILITIES_REGISTER;

typedef union _PCI_EXPRESS_SLOT_CONTROL_REGISTER {

    struct {

        USHORT AttentionButtonEnable:1;
        USHORT PowerFaultDetectEnable:1;
        USHORT MRLSensorEnable:1;
        USHORT PresenceDetectEnable:1;
        USHORT CommandCompletedEnable:1;
        USHORT HotPlugInterruptEnable:1;
        USHORT AttentionIndicatorControl:2;  // EXPRESS_INDICATOR_STATE
        USHORT PowerIndicatorControl:2;      // EXPRESS_INDICATOR_STATE
        USHORT PowerControllerControl:1;     // EXPRESS_POWER_STATE
        USHORT ElectromechanicalLockControl:1;
        USHORT DataLinkStateChangeEnable:1;
        USHORT Rsvd:3;
    } DUMMYSTRUCTNAME;

    USHORT AsUSHORT;

} PCI_EXPRESS_SLOT_CONTROL_REGISTER, *PPCI_EXPRESS_SLOT_CONTROL_REGISTER;

typedef union _PCI_EXPRESS_SLOT_STATUS_REGISTER {

    struct {

        USHORT AttentionButtonPressed:1;
        USHORT PowerFaultDetected:1;
        USHORT MRLSensorChanged:1;
        USHORT PresenceDetectChanged:1;
        USHORT CommandCompleted:1;
        USHORT MRLSensorState:1;        // EXPRESS_MRL_STATE
        USHORT PresenceDetectState:1;   // EXPRESS_CARD_PRESENCE
        USHORT ElectromechanicalLockEngaged:1;
        USHORT DataLinkStateChanged:1;
        USHORT Rsvd:7;
    } DUMMYSTRUCTNAME;

    USHORT AsUSHORT;

} PCI_EXPRESS_SLOT_STATUS_REGISTER, *PPCI_EXPRESS_SLOT_STATUS_REGISTER;

typedef union _PCI_EXPRESS_ROOT_CONTROL_REGISTER {

    struct {

        USHORT CorrectableSerrEnable:1;
        USHORT NonFatalSerrEnable:1;
        USHORT FatalSerrEnable:1;
        USHORT PMEInterruptEnable:1;
        USHORT CRSSoftwareVisibilityEnable:1;
        USHORT Rsvd:11;
    } DUMMYSTRUCTNAME;

    USHORT AsUSHORT;

} PCI_EXPRESS_ROOT_CONTROL_REGISTER, *PPCI_EXPRESS_ROOT_CONTROL_REGISTER;

typedef union _PCI_EXPRESS_ROOT_CAPABILITIES_REGISTER {

    struct {

        USHORT CRSSoftwareVisibility:1;
        USHORT Rsvd:15;
    } DUMMYSTRUCTNAME;

    USHORT AsUSHORT;

} PCI_EXPRESS_ROOT_CAPABILITIES_REGISTER, *PPCI_EXPRESS_ROOT_CAPABILITIES_REGISTER;

typedef union _PCI_EXPRESS_ROOT_STATUS_REGISTER {

    struct {

        ULONG PMERequestorId:16;  // PCI_EXPRESS_REQUESTOR_ID
        ULONG PMEStatus:1;
        ULONG PMEPending:1;
        ULONG Rsvd:14;
    } DUMMYSTRUCTNAME;

    ULONG AsULONG;

} PCI_EXPRESS_ROOT_STATUS_REGISTER, *PPCI_EXPRESS_ROOT_STATUS_REGISTER;

typedef union _PCI_EXPRESS_DEVICE_CAPABILITIES_2_REGISTER {

    struct {

        ULONG CompletionTimeoutRangesSupported:4;
        ULONG CompletionTimeoutDisableSupported:1;
        ULONG AriForwardingSupported:1;
        ULONG AtomicOpRoutingSupported:1;
        ULONG AtomicOpCompleterSupported32Bit:1;
        ULONG AtomicOpCompleterSupported64Bit:1;
        ULONG CASCompleterSupported128Bit:1;
        ULONG NoROEnabledPRPRPassing:1;
        ULONG LTRMechanismSupported:1;
        ULONG TPHCompleterSupported:2;
        ULONG Rsvd:4;
        ULONG OBFFSupported:2;
        ULONG ExtendedFmtFieldSuported:1;
        ULONG EndEndTLPPrefixSupported:1;
        ULONG MaxEndEndTLPPrefixes:2;
        ULONG Rsvd2:8;
    } DUMMYSTRUCTNAME;

    ULONG AsULONG;

} PCI_EXPRESS_DEVICE_CAPABILITIES_2_REGISTER, *PPCI_EXPRESS_DEVICE_CAPABILITIES_2_REGISTER;

typedef union _PCI_EXPRESS_DEVICE_CONTROL_2_REGISTER {

    struct {

        USHORT CompletionTimeoutValue:4;
        USHORT CompletionTimeoutDisable:1;
        USHORT AriForwardingEnable:1;
        USHORT AtomicOpRequesterEnable:1;
        USHORT AtomicOpEgresBlocking:1;
        USHORT IDORequestEnable:1;
        USHORT IDOCompletionEnable:1;
        USHORT LTRMechanismEnable:1;
        USHORT Rsvd:2;
        USHORT OBFFEnable:2;
        USHORT EndEndTLPPrefixBlocking:1;
    } DUMMYSTRUCTNAME;

    USHORT AsUSHORT;

} PCI_EXPRESS_DEVICE_CONTROL_2_REGISTER, *PPCI_EXPRESS_DEVICE_CONTROL_2_REGISTER;

typedef union _PCI_EXPRESS_DEVICE_STATUS_2_REGISTER {

    struct {

        USHORT Rsvd:16;
    } DUMMYSTRUCTNAME;

    USHORT AsUSHORT;

} PCI_EXPRESS_DEVICE_STATUS_2_REGISTER, *PPCI_EXPRESS_DEVICE_STATUS_2_REGISTER;

//
// PCI Express Capability
//

typedef struct _PCI_EXPRESS_CAPABILITY {

    PCI_CAPABILITIES_HEADER Header;
    PCI_EXPRESS_CAPABILITIES_REGISTER ExpressCapabilities;

    PCI_EXPRESS_DEVICE_CAPABILITIES_REGISTER DeviceCapabilities;

    PCI_EXPRESS_DEVICE_CONTROL_REGISTER DeviceControl;
    PCI_EXPRESS_DEVICE_STATUS_REGISTER DeviceStatus;

    PCI_EXPRESS_LINK_CAPABILITIES_REGISTER LinkCapabilities;

    PCI_EXPRESS_LINK_CONTROL_REGISTER LinkControl;
    PCI_EXPRESS_LINK_STATUS_REGISTER LinkStatus;

    PCI_EXPRESS_SLOT_CAPABILITIES_REGISTER SlotCapabilities;

    PCI_EXPRESS_SLOT_CONTROL_REGISTER SlotControl;
    PCI_EXPRESS_SLOT_STATUS_REGISTER SlotStatus;

    PCI_EXPRESS_ROOT_CONTROL_REGISTER RootControl;
    PCI_EXPRESS_ROOT_CAPABILITIES_REGISTER RootCapabilities;

    PCI_EXPRESS_ROOT_STATUS_REGISTER RootStatus;

    PCI_EXPRESS_DEVICE_CAPABILITIES_2_REGISTER DeviceCapabilities2;
    PCI_EXPRESS_DEVICE_CONTROL_2_REGISTER DeviceControl2;
    PCI_EXPRESS_DEVICE_STATUS_2_REGISTER DeviceStatus2;

} PCI_EXPRESS_CAPABILITY, *PPCI_EXPRESS_CAPABILITY;

// end_ntoshvp

typedef enum {

    MRLClosed = 0,
    MRLOpen

} PCI_EXPRESS_MRL_STATE;

typedef enum {

    SlotEmpty = 0,
    CardPresent

} PCI_EXPRESS_CARD_PRESENCE;

typedef enum {

    IndicatorOn = 1,
    IndicatorBlink,
    IndicatorOff

} PCI_EXPRESS_INDICATOR_STATE;

typedef enum {

    PowerOn = 0,
    PowerOff

} PCI_EXPRESS_POWER_STATE;

typedef enum {

    NoAspmSupport = 0,
    L0sEntrySupport = 1,
    L1EntrySupport = 2,
    L0sAndL1EntrySupport = 3

} PCI_EXPRESS_ASPM_SUPPORT;

typedef enum {

    L0sAndL1EntryDisabled,
    L0sEntryEnabled,
    L1EntryEnabled,
    L0sAndL1EntryEnabled

} PCI_EXPRESS_ASPM_CONTROL;

typedef enum {

    L0s_Below64ns = 0,
    L0s_64ns_128ns,
    L0s_128ns_256ns,
    L0s_256ns_512ns,
    L0s_512ns_1us,
    L0s_1us_2us,
    L0s_2us_4us,
    L0s_Above4us

} PCI_EXPRESS_L0s_EXIT_LATENCY;

typedef enum {

    L1_Below1us = 0,
    L1_1us_2us,
    L1_2us_4us,
    L1_4us_8us,
    L1_8us_16us,
    L1_16us_32us,
    L1_32us_64us,
    L1_Above64us

} PCI_EXPRESS_L1_EXIT_LATENCY;

// begin_ntoshvp

typedef enum {

    PciExpressEndpoint = 0,
    PciExpressLegacyEndpoint,
    PciExpressRootPort = 4,
    PciExpressUpstreamSwitchPort,
    PciExpressDownstreamSwitchPort,
    PciExpressToPciXBridge,
    PciXToExpressBridge,
    PciExpressRootComplexIntegratedEndpoint,
    PciExpressRootComplexEventCollector

} PCI_EXPRESS_DEVICE_TYPE;

// end_ntoshvp

typedef enum {

    MaxPayload128Bytes = 0,
    MaxPayload256Bytes,
    MaxPayload512Bytes,
    MaxPayload1024Bytes,
    MaxPayload2048Bytes,
    MaxPayload4096Bytes

} PCI_EXPRESS_MAX_PAYLOAD_SIZE;

typedef union _PCI_EXPRESS_PME_REQUESTOR_ID {

    struct {

        USHORT FunctionNumber:3;
        USHORT DeviceNumber:5;
        USHORT BusNumber:8;
    } DUMMYSTRUCTNAME;

    USHORT AsUSHORT;

} PCI_EXPRESS_PME_REQUESTOR_ID, *PPCI_EXPRESS_PME_REQUESTOR_ID;

// end_ntddk
// begin_wdm

//
// PCI Express Extended Capabilities.
//

#define PCI_EXPRESS_ADVANCED_ERROR_REPORTING_CAP_ID                     0x0001
#define PCI_EXPRESS_VIRTUAL_CHANNEL_CAP_ID                              0x0002
#define PCI_EXPRESS_DEVICE_SERIAL_NUMBER_CAP_ID                         0x0003
#define PCI_EXPRESS_POWER_BUDGETING_CAP_ID                              0x0004
#define PCI_EXPRESS_RC_LINK_DECLARATION_CAP_ID                          0x0005
#define PCI_EXPRESS_RC_INTERNAL_LINK_CONTROL_CAP_ID                     0x0006
#define PCI_EXPRESS_RC_EVENT_COLLECTOR_ENDPOINT_ASSOCIATION_CAP_ID      0x0007
#define PCI_EXPRESS_MFVC_CAP_ID                                         0x0008
#define PCI_EXPRESS_VC_AND_MFVC_CAP_ID                                  0x0009
#define PCI_EXPRESS_RCRB_HEADER_CAP_ID                                  0x000A
#define PCI_EXPRESS_VENDOR_SPECIFIC_CAP_ID                              0x000B
#define PCI_EXPRESS_CONFIGURATION_ACCESS_CORRELATION_CAP_ID             0x000C
#define PCI_EXPRESS_ACCESS_CONTROL_SERVICES_CAP_ID                      0x000D
#define PCI_EXPRESS_ARI_CAP_ID                                          0x000E
#define PCI_EXPRESS_ATS_CAP_ID                                          0x000F
#define PCI_EXPRESS_SINGLE_ROOT_IO_VIRTUALIZATION_CAP_ID                0x0010
#define PCI_EXPRESS_MULTI_ROOT_IO_VIRTUALIZATION_CAP_ID                 0x0011
#define PCI_EXPRESS_MULTICAST_CAP_ID                                    0x0012
#define PCI_EXPRESS_PAGE_REQUEST_CAP_ID                                 0x0013
#define PCI_EXPRESS_RESERVED_FOR_AMD_CAP_ID                             0x0014
#define PCI_EXPRESS_RESIZABLE_BAR_CAP_ID                                0x0015
#define PCI_EXPRESS_DPA_CAP_ID                                          0x0016
#define PCI_EXPRESS_TPH_REQUESTER_CAP_ID                                0x0017
#define PCI_EXPRESS_LTR_CAP_ID                                          0x0018
#define PCI_EXPRESS_SECONDARY_PCI_EXPRESS_CAP_ID                        0x0019
#define PCI_EXPRESS_PMUX_CAP_ID                                         0x001A
#define PCI_EXPRESS_PASID_CAP_ID                                        0x001B
#define PCI_EXPRESS_LN_REQUESTER_CAP_ID                                 0x001C
#define PCI_EXPRESS_DPC_CAP_ID                                          0x001D
#define PCI_EXPRESS_L1_PM_SS_CAP_ID                                     0x001E
#define PCI_EXPRESS_PTM_CAP_ID                                          0x001F
#define PCI_EXPRESS_MPCIE_CAP_ID                                        0x0020
#define PCI_EXPRESS_FRS_QUEUEING_CAP_ID                                 0x0021
#define PCI_EXPRESS_READINESS_TIME_REPORTING_CAP_ID                     0x0022


//
// All Enhanced capabilities have the following header.
//

typedef struct _PCI_EXPRESS_ENHANCED_CAPABILITY_HEADER {

    USHORT CapabilityID;
    USHORT Version:4;
    USHORT Next:12;

} PCI_EXPRESS_ENHANCED_CAPABILITY_HEADER, *PPCI_EXPRESS_ENHANCED_CAPABILITY_HEADER;

//
// Vendor Specific Capability
//

typedef struct _PCI_EXPRESS_VENDOR_SPECIFIC_CAPABILITY {

    PCI_EXPRESS_ENHANCED_CAPABILITY_HEADER Header;

    USHORT VsecId;
    USHORT VsecRev:4;
    USHORT VsecLength:12;

} PCI_EXPRESS_VENDOR_SPECIFIC_CAPABILITY, *PPCI_EXPRESS_VENDOR_SPECIFIC_CAPABILITY;

//
// Serial Number Capability.
//

typedef struct _PCI_EXPRESS_SERIAL_NUMBER_CAPABILITY {

    PCI_EXPRESS_ENHANCED_CAPABILITY_HEADER Header;

    ULONG LowSerialNumber;
    ULONG HighSerialNumber;

} PCI_EXPRESS_SERIAL_NUMBER_CAPABILITY, *PPCI_EXPRESS_SERIAL_NUMBER_CAPABILITY;

//
// ARI Capability structures
//

typedef struct _PCI_EXPRESS_ARI_CAPABILITY_REGISTER {

    USHORT MfvcFunctionGroupsCapability:1;
    USHORT AcsFunctionGroupsCapability:1;
    USHORT Reserved:6;
    USHORT NextFunctionNumber:8;

} PCI_EXPRESS_ARI_CAPABILITY_REGISTER, *PPCI_EXPRESS_ARI_CAPABILITY_REGISTER;

typedef struct _PCI_EXPRESS_ARI_CONTROL_REGISTER {

    USHORT MfvcFunctionGroupsEnable:1;
    USHORT AcsFunctionGroupsEnable:1;
    USHORT Reserved1:2;
    USHORT FunctionGroup:3;
    USHORT Reserved2:9;

} PCI_EXPRESS_ARI_CONTROL_REGISTER, *PPCI_EXPRESS_ARI_CONTROL_REGISTER;

typedef struct _PCI_EXPRESS_ARI_CAPABILITY {

    PCI_EXPRESS_ENHANCED_CAPABILITY_HEADER Header;

    PCI_EXPRESS_ARI_CAPABILITY_REGISTER Capability;
    PCI_EXPRESS_ARI_CONTROL_REGISTER Control;

} PCI_EXPRESS_ARI_CAPABILITY, *PPCI_EXPRESS_ARI_CAPABILITY;

//
// Virtual Channel (VC) Capability structures
//

typedef union _VIRTUAL_CHANNEL_CAPABILITIES1 {
    struct {
        ULONG ExtendedVCCount:3;
        ULONG RsvdP1:1;
        ULONG LowPriorityExtendedVCCount:3;
        ULONG RsvdP2:1;
        ULONG ReferenceClock:2;
        ULONG PortArbitrationTableEntrySize:2;
        ULONG RsvdP3:20;
    };
    ULONG AsULONG;
} VIRTUAL_CHANNEL_CAPABILITIES1, *PVIRTUAL_CHANNEL_CAPABILITIES1;

typedef union _VIRTUAL_CHANNEL_CAPABILITIES2 {
    struct {
        ULONG VCArbitrationCapability:8;
        ULONG RsvdP:16;
        ULONG VCArbitrationTableOffset:8;
    };
    ULONG AsULONG;
} VIRTUAL_CHANNEL_CAPABILITIES2, *PVIRTUAL_CHANNEL_CAPABILITIES2;

typedef union _VIRTUAL_CHANNEL_CONTROL {
    struct {
        USHORT  LoadVCArbitrationTable:1;
        USHORT  VCArbitrationSelect:3;
        USHORT  RsvdP:12;
    };
    USHORT AsUSHORT;
} VIRTUAL_CHANNEL_CONTROL, *PVIRTUAL_CHANNEL_CONTROL;

typedef union _VIRTUAL_CHANNEL_STATUS {
    struct {
        USHORT  VCArbitrationTableStatus:1;
        USHORT  RsvdZ:15;
    };
    USHORT AsUSHORT;
} VIRTUAL_CHANNEL_STATUS, *PVIRTUAL_CHANNEL_STATUS;

typedef union _VIRTUAL_RESOURCE_CAPABILITY {
    struct {
        ULONG   PortArbitrationCapability:8;
        ULONG   RsvdP1:6;
        ULONG   Undefined:1;
        ULONG   RejectSnoopTransactions:1;
        ULONG   MaximumTimeSlots:7;
        ULONG   RsvdP2:1;
        ULONG   PortArbitrationTableOffset:8;
    };
    ULONG AsULONG;
} VIRTUAL_RESOURCE_CAPABILITY, *PVIRTUAL_RESOURCE_CAPABILITY;

typedef union _VIRTUAL_RESOURCE_CONTROL {
    struct {
        ULONG   TcVcMap:8;
        ULONG   RsvdP1:8;
        ULONG   LoadPortArbitrationTable:1;
        ULONG   PortArbitrationSelect:3;
        ULONG   RsvdP2:4;
        ULONG   VcID:3;
        ULONG   RsvdP3:4;
        ULONG   VcEnable:1;
    };
    ULONG AsULONG;
} VIRTUAL_RESOURCE_CONTROL, *PVIRTUAL_RESOURCE_CONTROL;

typedef union _VIRTUAL_RESOURCE_STATUS {
    struct {
        USHORT  PortArbitrationTableStatus:1;
        USHORT  VcNegotiationPending:1;
        USHORT  RsvdZ:14;
    };
    USHORT AsUSHORT;
} VIRTUAL_RESOURCE_STATUS, *PVIRTUAL_RESOURCE_STATUS;

typedef struct _VIRTUAL_RESOURCE {
    VIRTUAL_RESOURCE_CAPABILITY     Capability;
    VIRTUAL_RESOURCE_CONTROL        Control;
    USHORT                          RsvdP;
    VIRTUAL_RESOURCE_STATUS         Status;
} VIRTUAL_RESOURCE, *PVIRTUAL_RESOURCE;

typedef struct _PCI_EXPRESS_VIRTUAL_CHANNEL_CAPABILITY {

    PCI_EXPRESS_ENHANCED_CAPABILITY_HEADER Header;

    VIRTUAL_CHANNEL_CAPABILITIES1   Capabilities1;
    VIRTUAL_CHANNEL_CAPABILITIES2   Capabilities2;
    VIRTUAL_CHANNEL_CONTROL         Control;
    VIRTUAL_CHANNEL_STATUS          Status;
    VIRTUAL_RESOURCE                Resource[8];

} PCI_EXPRESS_VIRTUAL_CHANNEL_CAPABILITY, *PPCI_EXPRESS_VIRTUAL_CHANNEL_CAPABILITY;

//
// ATS Capability structures
//

typedef struct _PCI_EXPRESS_ATS_CAPABILITY_REGISTER {

    USHORT InvalidateQueueDepth:5;
    USHORT PageAlignedRequest:1;
    USHORT GlobalInvalidateSupported:1;
    USHORT Reserved:9;

} PCI_EXPRESS_ATS_CAPABILITY_REGISTER, *PPCI_EXPRESS_ATS_CAPABILITY_REGISTER;

typedef struct _PCI_EXPRESS_ATS_CONTROL_REGISTER {

    USHORT SmallestTransactionUnit:5;
    USHORT Reserved:10;
    USHORT Enable:1;

} PCI_EXPRESS_ATS_CONTROL_REGISTER, *PPCI_EXPRESS_ATS_CONTROL_REGISTER;

typedef struct _PCI_EXPRESS_ATS_CAPABILITY {

    PCI_EXPRESS_ENHANCED_CAPABILITY_HEADER Header;

    PCI_EXPRESS_ATS_CAPABILITY_REGISTER Capability;
    PCI_EXPRESS_ATS_CONTROL_REGISTER Control;

} PCI_EXPRESS_ATS_CAPABILITY, *PPCI_EXPRESS_ATS_CAPABILITY;

//
// PASID Extended Capability Structure
//

typedef union _PCI_EXPRESS_PASID_CAPABILITY_REGISTER {
    struct {
        USHORT Rsvd:1;
        USHORT ExecutePermissionSupported:1;
        USHORT PrivilegedModeSupported:1;
        USHORT Rsvd2:5;
        USHORT MaxPASIDWidth:5;
        USHORT Rsvd3:3;
    } DUMMYSTRUCTNAME;

    USHORT AsUSHORT;
} PCI_EXPRESS_PASID_CAPABILITY_REGISTER, *PPCI_EXPRESS_PASID_CAPABILITY_REGISTER;

typedef union _PCI_EXPRESS_PASID_CONTROL_REGISTER {
    struct {
        USHORT PASIDEnable:1;
        USHORT ExecutePermissionEnable:1;
        USHORT PrivilegedModeEnable:1;
        USHORT Rsvd:13;
    } DUMMYSTRUCTNAME;

    USHORT AsUSHORT;
} PCI_EXPRESS_PASID_CONTROL_REGISTER, *PPCI_EXPRESS_PASID_CONTROL_REGISTER;

typedef struct _PCI_EXPRESS_PASID_CAPABILITY {
    PCI_EXPRESS_ENHANCED_CAPABILITY_HEADER Header;
    PCI_EXPRESS_PASID_CAPABILITY_REGISTER Capability;
    PCI_EXPRESS_PASID_CONTROL_REGISTER Control;
} PCI_EXPRESS_PASID_CAPABILITY, *PPCI_EXPRESS_PASID_CAPABILITY;

//
// PRI Extended Capability Structure
//

typedef union _PCI_EXPRESS_PRI_STATUS_REGISTER {
    struct {
        USHORT ResponseFailure:1;
        USHORT UnexpectedPageRequestGroupIndex:1;
        USHORT Rsvd:6;
        USHORT Stopped:1;
        USHORT Rsvd2:6;
        USHORT PrgResponsePasidRequired:1;
    } DUMMYSTRUCTNAME;

    USHORT AsUSHORT;
} PCI_EXPRESS_PRI_STATUS_REGISTER, *PPCI_EXPRESS_PRI_STATUS_REGISTER;

typedef union _PCI_EXPRESS_PRI_CONTROL_REGISTER {
    struct {
        USHORT Enable:1;
        USHORT Reset:1;
        USHORT Rsvd:14;
    } DUMMYSTRUCTNAME;

    USHORT AsUSHORT;
} PCI_EXPRESS_PRI_CONTROL_REGISTER, *PPCI_EXPRESS_PRI_CONTROL_REGISTER;

typedef struct _PCI_EXPRESS_PRI_CAPABILITY {
    PCI_EXPRESS_ENHANCED_CAPABILITY_HEADER Header;
    PCI_EXPRESS_PRI_CONTROL_REGISTER Control;
    PCI_EXPRESS_PRI_STATUS_REGISTER Status;
    ULONG PRCapacity;
    ULONG PRAllocation;
} PCI_EXPRESS_PRI_CAPABILITY, *PPCI_EXPRESS_PRI_CAPABILITY;

//
// PCI Express Advanced Error Reporting structures.
//

typedef union _PCI_EXPRESS_UNCORRECTABLE_ERROR_STATUS {

    struct {
        ULONG Undefined:1;
        ULONG Reserved1:3;
        ULONG DataLinkProtocolError:1;
        ULONG SurpriseDownError:1;
        ULONG Reserved2:6;
        ULONG PoisonedTLP:1;
        ULONG FlowControlProtocolError:1;
        ULONG CompletionTimeout:1;
        ULONG CompleterAbort:1;
        ULONG UnexpectedCompletion:1;
        ULONG ReceiverOverflow:1;
        ULONG MalformedTLP:1;
        ULONG ECRCError:1;
        ULONG UnsupportedRequestError:1;
        ULONG AcsViolation:1;
        ULONG UncorrectableInternalError:1;
        ULONG MCBlockedTlp:1;
        ULONG AtomicOpEgressBlocked:1;
        ULONG TlpPrefixBlocked:1;
        ULONG Reserved3:6;
    } DUMMYSTRUCTNAME;

    ULONG AsULONG;

} PCI_EXPRESS_UNCORRECTABLE_ERROR_STATUS, *PPCI_EXPRESS_UNCORRECTABLE_ERROR_STATUS;

typedef union _PCI_EXPRESS_UNCORRECTABLE_ERROR_MASK {

    struct {
        ULONG Undefined:1;
        ULONG Reserved1:3;
        ULONG DataLinkProtocolError:1;
        ULONG SurpriseDownError:1;
        ULONG Reserved2:6;
        ULONG PoisonedTLP:1;
        ULONG FlowControlProtocolError:1;
        ULONG CompletionTimeout:1;
        ULONG CompleterAbort:1;
        ULONG UnexpectedCompletion:1;
        ULONG ReceiverOverflow:1;
        ULONG MalformedTLP:1;
        ULONG ECRCError:1;
        ULONG UnsupportedRequestError:1;
        ULONG AcsViolation:1;
        ULONG UncorrectableInternalError:1;
        ULONG MCBlockedTlp:1;
        ULONG AtomicOpEgressBlocked:1;
        ULONG TlpPrefixBlocked:1;
        ULONG Reserved3:6;
    } DUMMYSTRUCTNAME;

    ULONG AsULONG;

} PCI_EXPRESS_UNCORRECTABLE_ERROR_MASK, *PPCI_EXPRESS_UNCORRECTABLE_ERROR_MASK;

typedef union _PCI_EXPRESS_UNCORRECTABLE_ERROR_SEVERITY {

    struct {
        ULONG Undefined:1;
        ULONG Reserved1:3;
        ULONG DataLinkProtocolError:1;
        ULONG SurpriseDownError:1;
        ULONG Reserved2:6;
        ULONG PoisonedTLP:1;
        ULONG FlowControlProtocolError:1;
        ULONG CompletionTimeout:1;
        ULONG CompleterAbort:1;
        ULONG UnexpectedCompletion:1;
        ULONG ReceiverOverflow:1;
        ULONG MalformedTLP:1;
        ULONG ECRCError:1;
        ULONG UnsupportedRequestError:1;
        ULONG AcsViolation:1;
        ULONG UncorrectableInternalError:1;
        ULONG MCBlockedTlp:1;
        ULONG AtomicOpEgressBlocked:1;
        ULONG TlpPrefixBlocked:1;
        ULONG Reserved3:6;
    } DUMMYSTRUCTNAME;

    ULONG AsULONG;

} PCI_EXPRESS_UNCORRECTABLE_ERROR_SEVERITY, *PPCI_EXPRESS_UNCORRECTABLE_ERROR_SEVERITY;

typedef union _PCI_EXPRESS_CORRECTABLE_ERROR_STATUS {

    struct {
        ULONG ReceiverError:1;
        ULONG Reserved1:5;
        ULONG BadTLP:1;
        ULONG BadDLLP:1;
        ULONG ReplayNumRollover:1;
        ULONG Reserved2:3;
        ULONG ReplayTimerTimeout:1;
        ULONG AdvisoryNonFatalError:1;
        ULONG CorrectedInternalError:1;
        ULONG HeaderLogOverflow:1;
        ULONG Reserved3:16;
    } DUMMYSTRUCTNAME;

    ULONG AsULONG;

} PCI_EXPRESS_CORRECTABLE_ERROR_STATUS, *PPCI_CORRECTABLE_ERROR_STATUS;

typedef union _PCI_EXPRESS_CORRECTABLE_ERROR_MASK {

    struct {
        ULONG ReceiverError:1;
        ULONG Reserved1:5;
        ULONG BadTLP:1;
        ULONG BadDLLP:1;
        ULONG ReplayNumRollover:1;
        ULONG Reserved2:3;
        ULONG ReplayTimerTimeout:1;
        ULONG AdvisoryNonFatalError:1;
        ULONG CorrectedInternalError:1;
        ULONG HeaderLogOverflow:1;
        ULONG Reserved3:16;
    } DUMMYSTRUCTNAME;

    ULONG AsULONG;

} PCI_EXPRESS_CORRECTABLE_ERROR_MASK, *PPCI_CORRECTABLE_ERROR_MASK;

typedef union _PCI_EXPRESS_AER_CAPABILITIES {

    struct {
        ULONG FirstErrorPointer:5;
        ULONG ECRCGenerationCapable:1;
        ULONG ECRCGenerationEnable:1;
        ULONG ECRCCheckCapable:1;
        ULONG ECRCCheckEnable:1;
        ULONG MultipleHeaderRecordingCapable:1;
        ULONG MultipleHeaderRecordingEnable:1;
        ULONG TlpPrefixLogPresent:1;
        ULONG Reserved:20;
    } DUMMYSTRUCTNAME;

    ULONG AsULONG;

} PCI_EXPRESS_AER_CAPABILITIES, *PPCI_EXPRESS_AER_CAPABILITIES;

typedef union _PCI_EXPRESS_ROOT_ERROR_COMMAND {

    struct {
        ULONG CorrectableErrorReportingEnable:1;
        ULONG NonFatalErrorReportingEnable:1;
        ULONG FatalErrorReportingEnable:1;
        ULONG Reserved:29;
    } DUMMYSTRUCTNAME;

    ULONG AsULONG;

} PCI_EXPRESS_ROOT_ERROR_COMMAND, *PPCI_EXPRESS_ROOT_ERROR_COMMAND;

typedef union _PCI_EXPRESS_ROOT_ERROR_STATUS {

    struct {
        ULONG CorrectableErrorReceived:1;
        ULONG MultipleCorrectableErrorsReceived:1;
        ULONG UncorrectableErrorReceived:1;
        ULONG MultipleUncorrectableErrorsReceived:1;
        ULONG FirstUncorrectableFatal:1;
        ULONG NonFatalErrorMessagesReceived:1;
        ULONG FatalErrorMessagesReceived:1;
        ULONG Reserved:20;
        ULONG AdvancedErrorInterruptMessageNumber:5;
    } DUMMYSTRUCTNAME;

    ULONG AsULONG;

} PCI_EXPRESS_ROOT_ERROR_STATUS, *PPCI_EXPRESS_ROOT_ERROR_STATUS;

typedef union _PCI_EXPRESS_ERROR_SOURCE_ID {

    struct {
        USHORT CorrectableSourceIdFun:3;
        USHORT CorrectableSourceIdDev:5;
        USHORT CorrectableSourceIdBus:8;
        USHORT UncorrectableSourceIdFun:3;
        USHORT UncorrectableSourceIdDev:5;
        USHORT UncorrectableSourceIdBus:8;
    } DUMMYSTRUCTNAME;

    ULONG AsULONG;

} PCI_EXPRESS_ERROR_SOURCE_ID, *PPCI_EXPRESS_ERROR_SOURCE_ID;

typedef union _PCI_EXPRESS_SEC_UNCORRECTABLE_ERROR_STATUS {

    struct {
        ULONG TargetAbortOnSplitCompletion:1;
        ULONG MasterAbortOnSplitCompletion:1;
        ULONG ReceivedTargetAbort:1;
        ULONG ReceivedMasterAbort:1;
        ULONG RsvdZ:1;
        ULONG UnexpectedSplitCompletionError:1;
        ULONG UncorrectableSplitCompletion:1;
        ULONG UncorrectableDataError:1;
        ULONG UncorrectableAttributeError:1;
        ULONG UncorrectableAddressError:1;
        ULONG DelayedTransactionDiscardTimerExpired:1;
        ULONG PERRAsserted:1;
        ULONG SERRAsserted:1;
        ULONG InternalBridgeError:1;
        ULONG Reserved:18;
    } DUMMYSTRUCTNAME;

    ULONG AsULONG;

} PCI_EXPRESS_SEC_UNCORRECTABLE_ERROR_STATUS,
  *PPCI_EXPRESS_SEC_UNCORRECTABLE_ERROR_STATUS;

typedef union _PCI_EXPRESS_SEC_UNCORRECTABLE_ERROR_MASK {

    struct {
        ULONG TargetAbortOnSplitCompletion:1;
        ULONG MasterAbortOnSplitCompletion:1;
        ULONG ReceivedTargetAbort:1;
        ULONG ReceivedMasterAbort:1;
        ULONG RsvdZ:1;
        ULONG UnexpectedSplitCompletionError:1;
        ULONG UncorrectableSplitCompletion:1;
        ULONG UncorrectableDataError:1;
        ULONG UncorrectableAttributeError:1;
        ULONG UncorrectableAddressError:1;
        ULONG DelayedTransactionDiscardTimerExpired:1;
        ULONG PERRAsserted:1;
        ULONG SERRAsserted:1;
        ULONG InternalBridgeError:1;
        ULONG Reserved:18;
    } DUMMYSTRUCTNAME;

    ULONG AsULONG;

} PCI_EXPRESS_SEC_UNCORRECTABLE_ERROR_MASK,
  *PPCI_EXPRESS_SEC_UNCORRECTABLE_ERROR_MASK;

typedef union _PCI_EXPRESS_SEC_UNCORRECTABLE_ERROR_SEVERITY {

    struct {
        ULONG TargetAbortOnSplitCompletion:1;
        ULONG MasterAbortOnSplitCompletion:1;
        ULONG ReceivedTargetAbort:1;
        ULONG ReceivedMasterAbort:1;
        ULONG RsvdZ:1;
        ULONG UnexpectedSplitCompletionError:1;
        ULONG UncorrectableSplitCompletion:1;
        ULONG UncorrectableDataError:1;
        ULONG UncorrectableAttributeError:1;
        ULONG UncorrectableAddressError:1;
        ULONG DelayedTransactionDiscardTimerExpired:1;
        ULONG PERRAsserted:1;
        ULONG SERRAsserted:1;
        ULONG InternalBridgeError:1;
        ULONG Reserved:18;
    } DUMMYSTRUCTNAME;

    ULONG AsULONG;

} PCI_EXPRESS_SEC_UNCORRECTABLE_ERROR_SEVERITY,
  *PPCI_EXPRESS_SEC_UNCORRECTABLE_ERROR_SEVERITY;

typedef union _PCI_EXPRESS_SEC_AER_CAPABILITIES {

    struct {
        ULONG SecondaryUncorrectableFirstErrorPtr:5;
        ULONG Reserved:27;
    } DUMMYSTRUCTNAME;

    ULONG AsULONG;

} PCI_EXPRESS_SEC_AER_CAPABILITIES, *PPCI_EXPRESS_SEC_AER_CAPABILITIES;

#define ROOT_CMD_ENABLE_CORRECTABLE_ERROR_REPORTING  0x00000001
#define ROOT_CMD_ENABLE_NONFATAL_ERROR_REPORTING     0x00000002
#define ROOT_CMD_ENABLE_FATAL_ERROR_REPORTING        0x00000004

#define ROOT_CMD_ERROR_REPORTING_ENABLE_MASK \
    (ROOT_CMD_ENABLE_FATAL_ERROR_REPORTING | \
     ROOT_CMD_ENABLE_NONFATAL_ERROR_REPORTING | \
     ROOT_CMD_ENABLE_CORRECTABLE_ERROR_REPORTING)

//
// Advanced Error Reporting Capability structure.
//

typedef struct _PCI_EXPRESS_AER_CAPABILITY {

    PCI_EXPRESS_ENHANCED_CAPABILITY_HEADER Header;

    PCI_EXPRESS_UNCORRECTABLE_ERROR_STATUS UncorrectableErrorStatus;
    PCI_EXPRESS_UNCORRECTABLE_ERROR_MASK UncorrectableErrorMask;
    PCI_EXPRESS_UNCORRECTABLE_ERROR_SEVERITY UncorrectableErrorSeverity;
    PCI_EXPRESS_CORRECTABLE_ERROR_STATUS CorrectableErrorStatus;
    PCI_EXPRESS_CORRECTABLE_ERROR_MASK CorrectableErrorMask;
    PCI_EXPRESS_AER_CAPABILITIES CapabilitiesAndControl;
    ULONG HeaderLog[4];
    PCI_EXPRESS_SEC_UNCORRECTABLE_ERROR_STATUS SecUncorrectableErrorStatus;
    PCI_EXPRESS_SEC_UNCORRECTABLE_ERROR_MASK SecUncorrectableErrorMask;
    PCI_EXPRESS_SEC_UNCORRECTABLE_ERROR_SEVERITY SecUncorrectableErrorSeverity;
    PCI_EXPRESS_SEC_AER_CAPABILITIES SecCapabilitiesAndControl;
    ULONG SecHeaderLog[4];

} PCI_EXPRESS_AER_CAPABILITY, *PPCI_EXPRESS_AER_CAPABILITY;

//
// Advanced Error Reporting Capability structure for root port.
//

typedef struct _PCI_EXPRESS_ROOTPORT_AER_CAPABILITY {

    PCI_EXPRESS_ENHANCED_CAPABILITY_HEADER Header;

    PCI_EXPRESS_UNCORRECTABLE_ERROR_STATUS UncorrectableErrorStatus;
    PCI_EXPRESS_UNCORRECTABLE_ERROR_MASK UncorrectableErrorMask;
    PCI_EXPRESS_UNCORRECTABLE_ERROR_SEVERITY UncorrectableErrorSeverity;
    PCI_EXPRESS_CORRECTABLE_ERROR_STATUS CorrectableErrorStatus;
    PCI_EXPRESS_CORRECTABLE_ERROR_MASK CorrectableErrorMask;
    PCI_EXPRESS_AER_CAPABILITIES CapabilitiesAndControl;
    ULONG HeaderLog[4];
    PCI_EXPRESS_ROOT_ERROR_COMMAND RootErrorCommand;
    PCI_EXPRESS_ROOT_ERROR_STATUS RootErrorStatus;
    PCI_EXPRESS_ERROR_SOURCE_ID ErrorSourceId;

} PCI_EXPRESS_ROOTPORT_AER_CAPABILITY, *PPCI_EXPRESS_ROOTPORT_AER_CAPABILITY;

//
// Advanced Error Reporting Capability structure for root port.
//

typedef struct _PCI_EXPRESS_BRIDGE_AER_CAPABILITY {

    PCI_EXPRESS_ENHANCED_CAPABILITY_HEADER Header;

    PCI_EXPRESS_UNCORRECTABLE_ERROR_STATUS UncorrectableErrorStatus;
    PCI_EXPRESS_UNCORRECTABLE_ERROR_MASK UncorrectableErrorMask;
    PCI_EXPRESS_UNCORRECTABLE_ERROR_SEVERITY UncorrectableErrorSeverity;
    PCI_EXPRESS_CORRECTABLE_ERROR_STATUS CorrectableErrorStatus;
    PCI_EXPRESS_CORRECTABLE_ERROR_MASK CorrectableErrorMask;
    PCI_EXPRESS_AER_CAPABILITIES CapabilitiesAndControl;
    ULONG HeaderLog[4];
    PCI_EXPRESS_SEC_UNCORRECTABLE_ERROR_STATUS SecUncorrectableErrorStatus;
    PCI_EXPRESS_SEC_UNCORRECTABLE_ERROR_MASK SecUncorrectableErrorMask;
    PCI_EXPRESS_SEC_UNCORRECTABLE_ERROR_SEVERITY SecUncorrectableErrorSeverity;
    PCI_EXPRESS_SEC_AER_CAPABILITIES SecCapabilitiesAndControl;
    ULONG SecHeaderLog[4];

} PCI_EXPRESS_BRIDGE_AER_CAPABILITY, *PPCI_EXPRESS_BRIDGE_AER_CAPABILITY;

//
// Access Control Services Capability structure.
//
typedef union _PCI_EXPRESS_ACS_CAPABILITY_REGISTER {

    struct {
        USHORT SourceValidation:1;
        USHORT TranslationBlocking:1;
        USHORT RequestRedirect:1;
        USHORT CompletionRedirect:1;
        USHORT UpstreamForwarding:1;
        USHORT EgressControl:1;
        USHORT DirectTranslation:1;
        USHORT Reserved:1;
        USHORT EgressControlVectorSize:8;
    } DUMMYSTRUCTNAME;

    USHORT AsUSHORT;

} PCI_EXPRESS_ACS_CAPABILITY_REGISTER, *PPCI_EXPRESS_ACS_CAPABILITY_REGISTER;

typedef union _PCI_EXPRESS_ACS_CONTROL {

    struct {
        USHORT SourceValidation:1;
        USHORT TranslationBlocking:1;
        USHORT RequestRedirect:1;
        USHORT CompletionRedirect:1;
        USHORT UpstreamForwarding:1;
        USHORT EgressControl:1;
        USHORT DirectTranslation:1;
        USHORT Reserved:9;
    } DUMMYSTRUCTNAME;

    USHORT AsUSHORT;

} PCI_EXPRESS_ACS_CONTROL, *PPCI_EXPRESS_ACS_CONTROL;

typedef struct _PCI_EXPRESS_ACS_CAPABILITY {

    PCI_EXPRESS_ENHANCED_CAPABILITY_HEADER  Header;

    PCI_EXPRESS_ACS_CAPABILITY_REGISTER      Capability;
    PCI_EXPRESS_ACS_CONTROL                 Control;

    ULONG                                   EgressControl[1];
} PCI_EXPRESS_ACS_CAPABILITY, *PPCI_EXPRESS_ACS_CAPABILITY ;

//
// Single-Root I/O Virtualization Capability structure for endpoints
//

typedef union _PCI_EXPRESS_SRIOV_CAPS {

    struct {
        ULONG VFMigrationCapable:1;
        ULONG Reserved1:20;
        ULONG VFMigrationInterruptNumber:11;
    } DUMMYSTRUCTNAME;

    ULONG AsULONG;

} PCI_EXPRESS_SRIOV_CAPS, *PPCI_EXPRESS_SRIOV_CAPS;

typedef union _PCI_EXPRESS_SRIOV_CONTROL {

    struct {
        USHORT VFEnable:1;
        USHORT VFMigrationEnable:1;
        USHORT VFMigrationInterruptEnable:1;
        USHORT VFMemorySpaceEnable:1;
        USHORT ARICapableHierarchy:1;
        USHORT Reserved1:11;
    } DUMMYSTRUCTNAME;

    USHORT AsUSHORT;

} PCI_EXPRESS_SRIOV_CONTROL, *PPCI_EXPRESS_SRIOV_CONTROL;

typedef union _PCI_EXPRESS_SRIOV_STATUS {

    struct {
        USHORT VFMigrationStatus:1;
        USHORT Reserved1:15;
    } DUMMYSTRUCTNAME;

    USHORT AsUSHORT;

} PCI_EXPRESS_SRIOV_STATUS, *PPCI_EXPRESS_SRIOV_STATUS;

typedef union _PCI_EXPRESS_SRIOV_MIGRATION_STATE_ARRAY {

    struct {
        ULONG VFMigrationStateBIR:3;
        ULONG VFMigrationStateOffset:29;
    } DUMMYSTRUCTNAME;

    ULONG AsULONG;

} PCI_EXPRESS_SRIOV_MIGRATION_STATE_ARRAY, *PPCI_EXPRESS_SRIOV_MIGRATION_STATE_ARRAY;

typedef struct _PCI_EXPRESS_SRIOV_CAPABILITY {

    PCI_EXPRESS_ENHANCED_CAPABILITY_HEADER  Header;

    PCI_EXPRESS_SRIOV_CAPS                  SRIOVCapabilities;
    PCI_EXPRESS_SRIOV_CONTROL               SRIOVControl;
    PCI_EXPRESS_SRIOV_STATUS                SRIOVStatus;
    USHORT                                  InitialVFs;
    USHORT                                  TotalVFs;
    USHORT                                  NumVFs;
    UCHAR                                   FunctionDependencyLink;
    UCHAR                                   RsvdP1;
    USHORT                                  FirstVFOffset;
    USHORT                                  VFStride;
    USHORT                                  RsvdP2;
    USHORT                                  VFDeviceId;
    ULONG                                   SupportedPageSizes;
    ULONG                                   SystemPageSize;
    ULONG                                   BaseAddresses[PCI_TYPE0_ADDRESSES];
    PCI_EXPRESS_SRIOV_MIGRATION_STATE_ARRAY VFMigrationStateArrayOffset;

} PCI_EXPRESS_SRIOV_CAPABILITY, *PPCI_EXPRESS_SRIOV_CAPABILITY;

//
// Base Class Code encodings for Base Class (from PCI spec rev 2.1).
//

#define PCI_CLASS_PRE_20                    0x00
#define PCI_CLASS_MASS_STORAGE_CTLR         0x01
#define PCI_CLASS_NETWORK_CTLR              0x02
#define PCI_CLASS_DISPLAY_CTLR              0x03
#define PCI_CLASS_MULTIMEDIA_DEV            0x04
#define PCI_CLASS_MEMORY_CTLR               0x05
#define PCI_CLASS_BRIDGE_DEV                0x06
#define PCI_CLASS_SIMPLE_COMMS_CTLR         0x07
#define PCI_CLASS_BASE_SYSTEM_DEV           0x08
#define PCI_CLASS_INPUT_DEV                 0x09
#define PCI_CLASS_DOCKING_STATION           0x0a
#define PCI_CLASS_PROCESSOR                 0x0b
#define PCI_CLASS_SERIAL_BUS_CTLR           0x0c
#define PCI_CLASS_WIRELESS_CTLR             0x0d
#define PCI_CLASS_INTELLIGENT_IO_CTLR       0x0e
#define PCI_CLASS_SATELLITE_COMMS_CTLR      0x0f
#define PCI_CLASS_ENCRYPTION_DECRYPTION     0x10
#define PCI_CLASS_DATA_ACQ_SIGNAL_PROC      0x11

// 0d thru fe reserved

#define PCI_CLASS_NOT_DEFINED               0xff

//
// Sub Class Code encodings (PCI rev 2.1).
//

// Class 00 - PCI_CLASS_PRE_20

#define PCI_SUBCLASS_PRE_20_NON_VGA         0x00
#define PCI_SUBCLASS_PRE_20_VGA             0x01

// Class 01 - PCI_CLASS_MASS_STORAGE_CTLR

#define PCI_SUBCLASS_MSC_SCSI_BUS_CTLR      0x00
#define PCI_SUBCLASS_MSC_IDE_CTLR           0x01
#define PCI_SUBCLASS_MSC_FLOPPY_CTLR        0x02
#define PCI_SUBCLASS_MSC_IPI_CTLR           0x03
#define PCI_SUBCLASS_MSC_RAID_CTLR          0x04
#define PCI_SUBCLASS_MSC_AHCI_CTLR          0x06
#define PCI_SUBCLASS_MSC_NVM_CTLR           0x08
#define PCI_SUBCLASS_MSC_OTHER              0x80

// SubClass 08 - PCI_SUBCLASS_MSC_NVM_CTLR

#define PCI_PROGRAMMING_INTERFACE_MSC_NVM_EXPRESS   0x02


// Class 02 - PCI_CLASS_NETWORK_CTLR

#define PCI_SUBCLASS_NET_ETHERNET_CTLR      0x00
#define PCI_SUBCLASS_NET_TOKEN_RING_CTLR    0x01
#define PCI_SUBCLASS_NET_FDDI_CTLR          0x02
#define PCI_SUBCLASS_NET_ATM_CTLR           0x03
#define PCI_SUBCLASS_NET_ISDN_CTLR          0x04
#define PCI_SUBCLASS_NET_OTHER              0x80

// Class 03 - PCI_CLASS_DISPLAY_CTLR

// N.B. Sub Class 00 could be VGA or 8514 depending on Interface byte

#define PCI_SUBCLASS_VID_VGA_CTLR           0x00
#define PCI_SUBCLASS_VID_XGA_CTLR           0x01
#define PCI_SUBLCASS_VID_3D_CTLR            0x02
#define PCI_SUBCLASS_VID_OTHER              0x80

// Class 04 - PCI_CLASS_MULTIMEDIA_DEV

#define PCI_SUBCLASS_MM_VIDEO_DEV           0x00
#define PCI_SUBCLASS_MM_AUDIO_DEV           0x01
#define PCI_SUBCLASS_MM_TELEPHONY_DEV       0x02
#define PCI_SUBCLASS_MM_OTHER               0x80

// Class 05 - PCI_CLASS_MEMORY_CTLR

#define PCI_SUBCLASS_MEM_RAM                0x00
#define PCI_SUBCLASS_MEM_FLASH              0x01
#define PCI_SUBCLASS_MEM_OTHER              0x80

// Class 06 - PCI_CLASS_BRIDGE_DEV

#define PCI_SUBCLASS_BR_HOST                0x00
#define PCI_SUBCLASS_BR_ISA                 0x01
#define PCI_SUBCLASS_BR_EISA                0x02
#define PCI_SUBCLASS_BR_MCA                 0x03
#define PCI_SUBCLASS_BR_PCI_TO_PCI          0x04
#define PCI_SUBCLASS_BR_PCMCIA              0x05
#define PCI_SUBCLASS_BR_NUBUS               0x06
#define PCI_SUBCLASS_BR_CARDBUS             0x07
#define PCI_SUBCLASS_BR_RACEWAY             0x08
#define PCI_SUBCLASS_BR_OTHER               0x80

// Class 07 - PCI_CLASS_SIMPLE_COMMS_CTLR

// N.B. Sub Class 00 and 01 additional info in Interface byte

#define PCI_SUBCLASS_COM_SERIAL             0x00
#define PCI_SUBCLASS_COM_PARALLEL           0x01
#define PCI_SUBCLASS_COM_MULTIPORT          0x02
#define PCI_SUBCLASS_COM_MODEM              0x03
#define PCI_SUBCLASS_COM_OTHER              0x80

// Class 08 - PCI_CLASS_BASE_SYSTEM_DEV

// N.B. See Interface byte for additional info.

#define PCI_SUBCLASS_SYS_INTERRUPT_CTLR     0x00
#define PCI_SUBCLASS_SYS_DMA_CTLR           0x01
#define PCI_SUBCLASS_SYS_SYSTEM_TIMER       0x02
#define PCI_SUBCLASS_SYS_REAL_TIME_CLOCK    0x03
#define PCI_SUBCLASS_SYS_GEN_HOTPLUG_CTLR   0x04
#define PCI_SUBCLASS_SYS_SDIO_CTRL          0x05
#define PCI_SUBCLASS_SYS_OTHER              0x80

// Class 09 - PCI_CLASS_INPUT_DEV

#define PCI_SUBCLASS_INP_KEYBOARD           0x00
#define PCI_SUBCLASS_INP_DIGITIZER          0x01
#define PCI_SUBCLASS_INP_MOUSE              0x02
#define PCI_SUBCLASS_INP_SCANNER            0x03
#define PCI_SUBCLASS_INP_GAMEPORT           0x04
#define PCI_SUBCLASS_INP_OTHER              0x80

// Class 0a - PCI_CLASS_DOCKING_STATION

#define PCI_SUBCLASS_DOC_GENERIC            0x00
#define PCI_SUBCLASS_DOC_OTHER              0x80

// Class 0b - PCI_CLASS_PROCESSOR

#define PCI_SUBCLASS_PROC_386               0x00
#define PCI_SUBCLASS_PROC_486               0x01
#define PCI_SUBCLASS_PROC_PENTIUM           0x02
#define PCI_SUBCLASS_PROC_ALPHA             0x10
#define PCI_SUBCLASS_PROC_POWERPC           0x20
#define PCI_SUBCLASS_PROC_COPROCESSOR       0x40

// Class 0c - PCI_CLASS_SERIAL_BUS_CTLR

#define PCI_SUBCLASS_SB_IEEE1394            0x00
#define PCI_SUBCLASS_SB_ACCESS              0x01
#define PCI_SUBCLASS_SB_SSA                 0x02
#define PCI_SUBCLASS_SB_USB                 0x03
#define PCI_SUBCLASS_SB_FIBRE_CHANNEL       0x04
#define PCI_SUBCLASS_SB_SMBUS               0x05
#define PCI_SUBCLASS_SB_THUNDERBOLT         0x0A

// Class 0d - PCI_CLASS_WIRELESS_CTLR

#define PCI_SUBCLASS_WIRELESS_IRDA          0x00
#define PCI_SUBCLASS_WIRELESS_CON_IR        0x01
#define PCI_SUBCLASS_WIRELESS_RF            0x10
#define PCI_SUBCLASS_WIRELESS_OTHER         0x80

// Class 0e - PCI_CLASS_INTELLIGENT_IO_CTLR

#define PCI_SUBCLASS_INTIO_I2O              0x00

// Class 0f - PCI_CLASS_SATELLITE_CTLR

#define PCI_SUBCLASS_SAT_TV                 0x01
#define PCI_SUBCLASS_SAT_AUDIO              0x02
#define PCI_SUBCLASS_SAT_VOICE              0x03
#define PCI_SUBCLASS_SAT_DATA               0x04

// Class 10 - PCI_CLASS_ENCRYPTION_DECRYPTION

#define PCI_SUBCLASS_CRYPTO_NET_COMP        0x00
#define PCI_SUBCLASS_CRYPTO_ENTERTAINMENT   0x10
#define PCI_SUBCLASS_CRYPTO_OTHER           0x80

// Class 11 - PCI_CLASS_DATA_ACQ_SIGNAL_PROC

#define PCI_SUBCLASS_DASP_DPIO              0x00
#define PCI_SUBCLASS_DASP_OTHER             0x80

// end_ntndis

//
// Bit encodes for PCI_COMMON_CONFIG.u.type0.BaseAddresses
//

#define PCI_ADDRESS_IO_SPACE                0x00000001  // (ro)
#define PCI_ADDRESS_MEMORY_TYPE_MASK        0x00000006  // (ro)
#define PCI_ADDRESS_MEMORY_PREFETCHABLE     0x00000008  // (ro)

#define PCI_ADDRESS_IO_ADDRESS_MASK         0xfffffffc
#define PCI_ADDRESS_MEMORY_ADDRESS_MASK     0xfffffff0
#define PCI_ADDRESS_ROM_ADDRESS_MASK        0xfffff800

#define PCI_TYPE_32BIT      0
#define PCI_TYPE_20BIT      2
#define PCI_TYPE_64BIT      4

//
// Bit encodes for PCI_COMMON_CONFIG.u.type0.ROMBaseAddresses
//

#define PCI_ROMADDRESS_ENABLED              0x00000001


//
// Reference notes for PCI configuration fields:
//
// ro   these field are read only.  changes to these fields are ignored
//
// ro+  these field are intended to be read only and should be initialized
//      by the system to their proper values.  However, driver may change
//      these settings.
//
// ---
//
//      All resources consumed by a PCI device start as uninitialized
//      under NT.  An uninitialized memory or I/O base address can be
//      determined by checking it's corresponding enabled bit in the
//      PCI_COMMON_CONFIG.Command value.  An InterruptLine is uninitialized
//      if it contains the value of -1.
//


typedef ULONG NODE_REQUIREMENT;

#define MM_ANY_NODE_OK          0x80000000


//
// Graphics support routines.
//

typedef
VOID
(*PBANKED_SECTION_ROUTINE) (
    _In_ ULONG ReadBank,
    _In_ ULONG WriteBank,
    _In_ PVOID Context
    );

//
// WMI minor function codes under IRP_MJ_SYSTEM_CONTROL
//

#define IRP_MN_QUERY_ALL_DATA               0x00
#define IRP_MN_QUERY_SINGLE_INSTANCE        0x01
#define IRP_MN_CHANGE_SINGLE_INSTANCE       0x02
#define IRP_MN_CHANGE_SINGLE_ITEM           0x03
#define IRP_MN_ENABLE_EVENTS                0x04
#define IRP_MN_DISABLE_EVENTS               0x05
#define IRP_MN_ENABLE_COLLECTION            0x06
#define IRP_MN_DISABLE_COLLECTION           0x07
#define IRP_MN_REGINFO                      0x08
#define IRP_MN_EXECUTE_METHOD               0x09
// Minor code 0x0a is reserved
#define IRP_MN_REGINFO_EX                   0x0b
// Minor code 0x0c is reserved


// workaround overloaded definition (rpc generated headers all define INTERFACE
// to match the class name).
#undef INTERFACE

typedef struct _INTERFACE {
    USHORT Size;
    USHORT Version;
    PVOID Context;
    PINTERFACE_REFERENCE InterfaceReference;
    PINTERFACE_DEREFERENCE InterfaceDereference;
    // interface specific entries go here
} INTERFACE, *PINTERFACE;

// begin_wudfpwdm

//
// Define alignment macros to align structure sizes and pointers up and down.
//

#undef ALIGN_DOWN_BY
#undef ALIGN_UP_BY
#undef ALIGN_DOWN_POINTER_BY
#undef ALIGN_UP_POINTER_BY
#undef ALIGN_DOWN
#undef ALIGN_UP
#undef ALIGN_DOWN_POINTER
#undef ALIGN_UP_POINTER

#define ALIGN_DOWN_BY(length, alignment) \
    ((ULONG_PTR)(length) & ~(alignment - 1))

#define ALIGN_UP_BY(length, alignment) \
    (ALIGN_DOWN_BY(((ULONG_PTR)(length) + alignment - 1), alignment))

#define ALIGN_DOWN_POINTER_BY(address, alignment) \
    ((PVOID)((ULONG_PTR)(address) & ~((ULONG_PTR)alignment - 1)))

#define ALIGN_UP_POINTER_BY(address, alignment) \
    (ALIGN_DOWN_POINTER_BY(((ULONG_PTR)(address) + alignment - 1), alignment))

#define ALIGN_DOWN(length, type) \
    ALIGN_DOWN_BY(length, sizeof(type))

#define ALIGN_UP(length, type) \
    ALIGN_UP_BY(length, sizeof(type))

#define ALIGN_DOWN_POINTER(address, type) \
    ALIGN_DOWN_POINTER_BY(address, sizeof(type))

#define ALIGN_UP_POINTER(address, type) \
    ALIGN_UP_POINTER_BY(address, sizeof(type))

// end_wudfpwdm
// begin_wudfwdm
// begin_sdfwdm

#if defined(_X86_)

//
// i386 Specific portions of Mm component.
//
// Define the page size for the Intel 386 as 4096 (0x1000).
//

#define PAGE_SIZE 0x1000

//
// Define the number of trailing zeros in a page aligned virtual address.
// This is used as the shift count when shifting virtual addresses to
// virtual page numbers.
//

#define PAGE_SHIFT 12L

#elif defined(_AMD64_)

//
// AMD64 Specific portions of Mm component.
//
// Define the page size for the AMD64 as 4096 (0x1000).
//

#define PAGE_SIZE 0x1000

//
// Define the number of trailing zeros in a page aligned virtual address.
// This is used as the shift count when shifting virtual addresses to
// virtual page numbers.
//

#define PAGE_SHIFT 12L

#elif defined(_ARM64_)

//
// ARM Specific portions of Mm component.
//
// Define the page size for the ARM64 as 4096 (0x1000).
//

#define PAGE_SIZE 0x1000

//
// Define the number of trailing zeros in a page aligned virtual address.
// This is used as the shift count when shifting virtual addresses to
// virtual page numbers.
//

#define PAGE_SHIFT 12L

#elif defined(_ARM_)

//
// ARM Specific portions of Mm component.
//
// Define the page size for the ARM as 4096 (0x1000).
//

#define PAGE_SIZE 0x1000

//
// Define the number of trailing zeros in a page aligned virtual address.
// This is used as the shift count when shifting virtual addresses to
// virtual page numbers.
//

#define PAGE_SHIFT 12L

#endif

// end_sdfwdm
// end_wudfwdm

//
// Defines the Type in the RESOURCE_DESCRIPTOR
//
// NOTE:  For all CM_RESOURCE_TYPE values, there must be a
// corresponding ResType value in the 32-bit ConfigMgr headerfile
// (cfgmgr32.h).  Values in the range [0x6,0x80) use the same values
// as their ConfigMgr counterparts.  CM_RESOURCE_TYPE values with
// the high bit set (i.e., in the range [0x80,0xFF]), are
// non-arbitrated resources.  These correspond to the same values
// in cfgmgr32.h that have their high bit set (however, since
// cfgmgr32.h uses 16 bits for ResType values, these values are in
// the range [0x8000,0x807F).  Note that ConfigMgr ResType values
// cannot be in the range [0x8080,0xFFFF), because they would not
// be able to map into CM_RESOURCE_TYPE values.  (0xFFFF itself is
// a special value, because it maps to CmResourceTypeDeviceSpecific.)
//

typedef int CM_RESOURCE_TYPE;

// CmResourceTypeNull is reserved

#define CmResourceTypeNull                0   // ResType_All or ResType_None (0x0000)
#define CmResourceTypePort                1   // ResType_IO (0x0002)
#define CmResourceTypeInterrupt           2   // ResType_IRQ (0x0004)
#define CmResourceTypeMemory              3   // ResType_Mem (0x0001)
#define CmResourceTypeDma                 4   // ResType_DMA (0x0003)
#define CmResourceTypeDeviceSpecific      5   // ResType_ClassSpecific (0xFFFF)
#define CmResourceTypeBusNumber           6   // ResType_BusNumber (0x0006)
#define CmResourceTypeMemoryLarge         7   // ResType_MemLarge (0x0007)
// end_wdm end_wudfwdm
// end_sdfwdm
// begin_ntddk
#define CmResourceTypeMaximum             8
// end_ntddk
// begin_wdm begin_wudfwdm
#define CmResourceTypeNonArbitrated     128   // Not arbitrated if 0x80 bit set
#define CmResourceTypeConfigData        128   // ResType_Reserved (0x8000)
#define CmResourceTypeDevicePrivate     129   // ResType_DevicePrivate (0x8001)
#define CmResourceTypePcCardConfig      130   // ResType_PcCardConfig (0x8002)
#define CmResourceTypeMfCardConfig      131   // ResType_MfCardConfig (0x8003)
#define CmResourceTypeConnection        132   // ResType_Connection (0x8004)

// begin_sdfwdm

//
// Defines the ShareDisposition in the RESOURCE_DESCRIPTOR
//

typedef enum _CM_SHARE_DISPOSITION {
    CmResourceShareUndetermined = 0,    // Reserved
    CmResourceShareDeviceExclusive,
    CmResourceShareDriverExclusive,
    CmResourceShareShared
} CM_SHARE_DISPOSITION;

// end_sdfwdm

//
// Define the bit masks for Flags when type is CmResourceTypeInterrupt
//

#define CM_RESOURCE_INTERRUPT_LEVEL_SENSITIVE           0x00
#define CM_RESOURCE_INTERRUPT_LATCHED                   0x01
#define CM_RESOURCE_INTERRUPT_MESSAGE                   0x02
#define CM_RESOURCE_INTERRUPT_POLICY_INCLUDED           0x04
// end_wdm end_wudfwdm
#define CM_RESOURCE_INTERRUPT_ALLOW_RESERVED_IDT        0x08
// begin_wdm begin_wudfwdm
#define CM_RESOURCE_INTERRUPT_SECONDARY_INTERRUPT       0x10
#define CM_RESOURCE_INTERRUPT_WAKE_HINT                 0x20

//
// A bitmask defining the bits in a resource or requirements descriptor
// flags field that corresponds to the latch mode or a level triggered
// interrupt.
//

#define CM_RESOURCE_INTERRUPT_LEVEL_LATCHED_BITS 0x0001

//
// Define the token value used for an interrupt vector to mean that the vector
// is message signaled.  This value is used in the MaximumVector field.
//

#define CM_RESOURCE_INTERRUPT_MESSAGE_TOKEN   ((ULONG)-2)

// begin_sdfwdm

//
// Define the bit masks for Flags when type is CmResourceTypeMemory
// or CmResourceTypeMemoryLarge
//

#define CM_RESOURCE_MEMORY_READ_WRITE                       0x0000
#define CM_RESOURCE_MEMORY_READ_ONLY                        0x0001
#define CM_RESOURCE_MEMORY_WRITE_ONLY                       0x0002
#define CM_RESOURCE_MEMORY_WRITEABILITY_MASK                0x0003
#define CM_RESOURCE_MEMORY_PREFETCHABLE                     0x0004

#define CM_RESOURCE_MEMORY_COMBINEDWRITE                    0x0008
#define CM_RESOURCE_MEMORY_24                               0x0010
#define CM_RESOURCE_MEMORY_CACHEABLE                        0x0020
#define CM_RESOURCE_MEMORY_WINDOW_DECODE                    0x0040
#define CM_RESOURCE_MEMORY_BAR                              0x0080

#define CM_RESOURCE_MEMORY_COMPAT_FOR_INACCESSIBLE_RANGE    0x0100

// end_sdfwdm

//
// Define the bit masks exclusive to type CmResourceTypeMemoryLarge.
//

#define CM_RESOURCE_MEMORY_LARGE                            0x0E00
#define CM_RESOURCE_MEMORY_LARGE_40                         0x0200
#define CM_RESOURCE_MEMORY_LARGE_48                         0x0400
#define CM_RESOURCE_MEMORY_LARGE_64                         0x0800

//
// Define limits for large memory resources
//

#define CM_RESOURCE_MEMORY_LARGE_40_MAXLEN          0x000000FFFFFFFF00
#define CM_RESOURCE_MEMORY_LARGE_48_MAXLEN          0x0000FFFFFFFF0000
#define CM_RESOURCE_MEMORY_LARGE_64_MAXLEN          0xFFFFFFFF00000000

//
// Define the bit masks for Flags when type is CmResourceTypePort
//

#define CM_RESOURCE_PORT_MEMORY                             0x0000
#define CM_RESOURCE_PORT_IO                                 0x0001
#define CM_RESOURCE_PORT_10_BIT_DECODE                      0x0004
#define CM_RESOURCE_PORT_12_BIT_DECODE                      0x0008
#define CM_RESOURCE_PORT_16_BIT_DECODE                      0x0010
#define CM_RESOURCE_PORT_POSITIVE_DECODE                    0x0020
#define CM_RESOURCE_PORT_PASSIVE_DECODE                     0x0040
#define CM_RESOURCE_PORT_WINDOW_DECODE                      0x0080
#define CM_RESOURCE_PORT_BAR                                0x0100

//
// Define the bit masks for Flags when type is CmResourceTypeDma
//

#define CM_RESOURCE_DMA_8                   0x0000
#define CM_RESOURCE_DMA_16                  0x0001
#define CM_RESOURCE_DMA_32                  0x0002
#define CM_RESOURCE_DMA_8_AND_16            0x0004
#define CM_RESOURCE_DMA_BUS_MASTER          0x0008
#define CM_RESOURCE_DMA_TYPE_A              0x0010
#define CM_RESOURCE_DMA_TYPE_B              0x0020
#define CM_RESOURCE_DMA_TYPE_F              0x0040
#define CM_RESOURCE_DMA_V3                  0x0080

//
// Define the different types of DMA transfer width values.
//

#define DMAV3_TRANFER_WIDTH_8               0x00
#define DMAV3_TRANFER_WIDTH_16              0x01
#define DMAV3_TRANFER_WIDTH_32              0x02
#define DMAV3_TRANFER_WIDTH_64              0x03
#define DMAV3_TRANFER_WIDTH_128             0x04
#define DMAV3_TRANFER_WIDTH_256             0x05

//
// Define the Class and Type values for CmResourceTypeConnection
//

#define CM_RESOURCE_CONNECTION_CLASS_GPIO                  0x01
#define CM_RESOURCE_CONNECTION_CLASS_SERIAL                0x02
#define CM_RESOURCE_CONNECTION_CLASS_FUNCTION_CONFIG       0x03
#define CM_RESOURCE_CONNECTION_TYPE_GPIO_IO                0x02
#define CM_RESOURCE_CONNECTION_TYPE_SERIAL_I2C             0x01
#define CM_RESOURCE_CONNECTION_TYPE_SERIAL_SPI             0x02
#define CM_RESOURCE_CONNECTION_TYPE_SERIAL_UART            0x03
#define CM_RESOURCE_CONNECTION_TYPE_FUNCTION_CONFIG        0x01


#include "pshpack1.h"


//
// Define Mca POS data block for slot
//

typedef struct _CM_MCA_POS_DATA {
    USHORT AdapterId;
    UCHAR PosData1;
    UCHAR PosData2;
    UCHAR PosData3;
    UCHAR PosData4;
} CM_MCA_POS_DATA, *PCM_MCA_POS_DATA;

//
// Memory configuration of eisa data block structure
//

typedef struct _EISA_MEMORY_TYPE {
    UCHAR ReadWrite: 1;
    UCHAR Cached : 1;
    UCHAR Reserved0 :1;
    UCHAR Type:2;
    UCHAR Shared:1;
    UCHAR Reserved1 :1;
    UCHAR MoreEntries : 1;
} EISA_MEMORY_TYPE, *PEISA_MEMORY_TYPE;

typedef struct _EISA_MEMORY_CONFIGURATION {
    EISA_MEMORY_TYPE ConfigurationByte;
    UCHAR DataSize;
    USHORT AddressLowWord;
    UCHAR AddressHighByte;
    USHORT MemorySize;
} EISA_MEMORY_CONFIGURATION, *PEISA_MEMORY_CONFIGURATION;


//
// Interrupt configurationn of eisa data block structure
//

typedef struct _EISA_IRQ_DESCRIPTOR {
    UCHAR Interrupt : 4;
    UCHAR Reserved :1;
    UCHAR LevelTriggered :1;
    UCHAR Shared : 1;
    UCHAR MoreEntries : 1;
} EISA_IRQ_DESCRIPTOR, *PEISA_IRQ_DESCRIPTOR;

typedef struct _EISA_IRQ_CONFIGURATION {
    EISA_IRQ_DESCRIPTOR ConfigurationByte;
    UCHAR Reserved;
} EISA_IRQ_CONFIGURATION, *PEISA_IRQ_CONFIGURATION;


//
// DMA description of eisa data block structure
//

typedef struct _DMA_CONFIGURATION_BYTE0 {
    UCHAR Channel : 3;
    UCHAR Reserved : 3;
    UCHAR Shared :1;
    UCHAR MoreEntries :1;
} DMA_CONFIGURATION_BYTE0;

typedef struct _DMA_CONFIGURATION_BYTE1 {
    UCHAR Reserved0 : 2;
    UCHAR TransferSize : 2;
    UCHAR Timing : 2;
    UCHAR Reserved1 : 2;
} DMA_CONFIGURATION_BYTE1;

typedef struct _EISA_DMA_CONFIGURATION {
    DMA_CONFIGURATION_BYTE0 ConfigurationByte0;
    DMA_CONFIGURATION_BYTE1 ConfigurationByte1;
} EISA_DMA_CONFIGURATION, *PEISA_DMA_CONFIGURATION;


//
// Port description of eisa data block structure
//

typedef struct _EISA_PORT_DESCRIPTOR {
    UCHAR NumberPorts : 5;
    UCHAR Reserved :1;
    UCHAR Shared :1;
    UCHAR MoreEntries : 1;
} EISA_PORT_DESCRIPTOR, *PEISA_PORT_DESCRIPTOR;

typedef struct _EISA_PORT_CONFIGURATION {
    EISA_PORT_DESCRIPTOR Configuration;
    USHORT PortAddress;
} EISA_PORT_CONFIGURATION, *PEISA_PORT_CONFIGURATION;


//
// Eisa slot information definition
// N.B. This structure is different from the one defined
//      in ARC eisa addendum.
//

typedef struct _CM_EISA_SLOT_INFORMATION {
    UCHAR ReturnCode;
    UCHAR ReturnFlags;
    UCHAR MajorRevision;
    UCHAR MinorRevision;
    USHORT Checksum;
    UCHAR NumberFunctions;
    UCHAR FunctionInformation;
    ULONG CompressedId;
} CM_EISA_SLOT_INFORMATION, *PCM_EISA_SLOT_INFORMATION;


//
// Eisa function information definition
//

typedef struct _CM_EISA_FUNCTION_INFORMATION {
    ULONG CompressedId;
    UCHAR IdSlotFlags1;
    UCHAR IdSlotFlags2;
    UCHAR MinorRevision;
    UCHAR MajorRevision;
    UCHAR Selections[26];
    UCHAR FunctionFlags;
    UCHAR TypeString[80];
    EISA_MEMORY_CONFIGURATION EisaMemory[9];
    EISA_IRQ_CONFIGURATION EisaIrq[7];
    EISA_DMA_CONFIGURATION EisaDma[4];
    EISA_PORT_CONFIGURATION EisaPort[20];
    UCHAR InitializationData[60];
} CM_EISA_FUNCTION_INFORMATION, *PCM_EISA_FUNCTION_INFORMATION;

//
// The following defines the way pnp bios information is stored in
// the registry \\HKEY_LOCAL_MACHINE\HARDWARE\Description\System\MultifunctionAdapter\x
// key, where x is an integer number indicating adapter instance. The
// "Identifier" of the key must equal to "PNP BIOS" and the
// "ConfigurationData" is organized as follow:
//
//      CM_PNP_BIOS_INSTALLATION_CHECK        +
//      CM_PNP_BIOS_DEVICE_NODE for device 1  +
//      CM_PNP_BIOS_DEVICE_NODE for device 2  +
//                ...
//      CM_PNP_BIOS_DEVICE_NODE for device n
//

//
// Pnp BIOS device node structure
//

typedef struct _CM_PNP_BIOS_DEVICE_NODE {
    USHORT Size;
    UCHAR Node;
    ULONG ProductId;
    UCHAR DeviceType[3];
    USHORT DeviceAttributes;
    // followed by AllocatedResourceBlock, PossibleResourceBlock
    // and CompatibleDeviceId
} CM_PNP_BIOS_DEVICE_NODE,*PCM_PNP_BIOS_DEVICE_NODE;

//
// Pnp BIOS Installation check
//

typedef struct _CM_PNP_BIOS_INSTALLATION_CHECK {
    UCHAR Signature[4];             // $PnP (ascii)
    UCHAR Revision;
    UCHAR Length;
    USHORT ControlField;
    UCHAR Checksum;
    ULONG EventFlagAddress;         // Physical address
    USHORT RealModeEntryOffset;
    USHORT RealModeEntrySegment;
    USHORT ProtectedModeEntryOffset;
    ULONG ProtectedModeCodeBaseAddress;
    ULONG OemDeviceId;
    USHORT RealModeDataBaseAddress;
    ULONG ProtectedModeDataBaseAddress;
} CM_PNP_BIOS_INSTALLATION_CHECK, *PCM_PNP_BIOS_INSTALLATION_CHECK;

#include "poppack.h"

//
// Masks for EISA function information
//

#define EISA_FUNCTION_ENABLED                   0x80
#define EISA_FREE_FORM_DATA                     0x40
#define EISA_HAS_PORT_INIT_ENTRY                0x20
#define EISA_HAS_PORT_RANGE                     0x10
#define EISA_HAS_DMA_ENTRY                      0x08
#define EISA_HAS_IRQ_ENTRY                      0x04
#define EISA_HAS_MEMORY_ENTRY                   0x02
#define EISA_HAS_TYPE_ENTRY                     0x01
#define EISA_HAS_INFORMATION                    EISA_HAS_PORT_RANGE + \
                                                EISA_HAS_DMA_ENTRY + \
                                                EISA_HAS_IRQ_ENTRY + \
                                                EISA_HAS_MEMORY_ENTRY + \
                                                EISA_HAS_TYPE_ENTRY

//
// Masks for EISA memory configuration
//

#define EISA_MORE_ENTRIES                       0x80
#define EISA_SYSTEM_MEMORY                      0x00
#define EISA_MEMORY_TYPE_RAM                    0x01

//
// Returned error code for EISA bios call
//

#define EISA_INVALID_SLOT                       0x80
#define EISA_INVALID_FUNCTION                   0x81
#define EISA_INVALID_CONFIGURATION              0x82
#define EISA_EMPTY_SLOT                         0x83
#define EISA_INVALID_BIOS_CALL                  0x86


//
// Define the bitmasks for resource options
//

#define IO_RESOURCE_PREFERRED       0x01
#define IO_RESOURCE_DEFAULT         0x02
#define IO_RESOURCE_ALTERNATIVE     0x08

//
// Define interrupt affinity policy values
//

#if defined(NT_PROCESSOR_GROUPS)

typedef USHORT IRQ_DEVICE_POLICY, *PIRQ_DEVICE_POLICY;
enum _IRQ_DEVICE_POLICY_USHORT {
    IrqPolicyMachineDefault = 0,
    IrqPolicyAllCloseProcessors = 1,
    IrqPolicyOneCloseProcessor = 2,
    IrqPolicyAllProcessorsInMachine = 3,
    IrqPolicyAllProcessorsInGroup = 3,
    IrqPolicySpecifiedProcessors = 4,
    IrqPolicySpreadMessagesAcrossAllProcessors = 5,
    IrqPolicyAllProcessorsInMachineWhenSteered = 6,
    IrqPolicyAllProcessorsInGroupWhenSteered = 6
};

#else

typedef enum _IRQ_DEVICE_POLICY {
    IrqPolicyMachineDefault = 0,
    IrqPolicyAllCloseProcessors,
    IrqPolicyOneCloseProcessor,
    IrqPolicyAllProcessorsInMachine,
    IrqPolicySpecifiedProcessors,
    IrqPolicySpreadMessagesAcrossAllProcessors,
    IrqPolicyAllProcessorsInMachineWhenSteered
} IRQ_DEVICE_POLICY, *PIRQ_DEVICE_POLICY;

#endif

//
// Define interrupt priority policy values
//

typedef enum _IRQ_PRIORITY {
    IrqPriorityUndefined = 0,
    IrqPriorityLow,
    IrqPriorityNormal,
    IrqPriorityHigh
} IRQ_PRIORITY, *PIRQ_PRIORITY;

//
// Define interrupt group affinity policy
//

typedef enum _IRQ_GROUP_POLICY {
    GroupAffinityAllGroupZero = 0,
    GroupAffinityDontCare
} IRQ_GROUP_POLICY, *PIRQ_GROUP_POLICY;

//
// This structure defines one type of resource requested by the driver
//

typedef struct _IO_RESOURCE_DESCRIPTOR {
    UCHAR Option;
    UCHAR Type;                         // use CM_RESOURCE_TYPE
    UCHAR ShareDisposition;             // use CM_SHARE_DISPOSITION
    UCHAR Spare1;
    USHORT Flags;                       // use CM resource flag defines
    USHORT Spare2;                      // align

    union {
        struct {
            ULONG Length;
            ULONG Alignment;
            PHYSICAL_ADDRESS MinimumAddress;
            PHYSICAL_ADDRESS MaximumAddress;
        } Port;

        struct {
            ULONG Length;
            ULONG Alignment;
            PHYSICAL_ADDRESS MinimumAddress;
            PHYSICAL_ADDRESS MaximumAddress;
        } Memory;

        struct {
            ULONG MinimumVector;
            ULONG MaximumVector;
#if defined(NT_PROCESSOR_GROUPS)
            IRQ_DEVICE_POLICY AffinityPolicy;
            USHORT Group;
#else
            IRQ_DEVICE_POLICY AffinityPolicy;
#endif
            IRQ_PRIORITY PriorityPolicy;
            KAFFINITY TargetedProcessors;
        } Interrupt;

        struct {
            ULONG MinimumChannel;
            ULONG MaximumChannel;
        } Dma;

        struct {
            ULONG RequestLine;
            ULONG Reserved;
            ULONG Channel;
            ULONG TransferWidth;
        } DmaV3;

        struct {
            ULONG Length;
            ULONG Alignment;
            PHYSICAL_ADDRESS MinimumAddress;
            PHYSICAL_ADDRESS MaximumAddress;
        } Generic;

        struct {
            ULONG Data[3];
        } DevicePrivate;

        //
        // Bus Number information.
        //

        struct {
            ULONG Length;
            ULONG MinBusNumber;
            ULONG MaxBusNumber;
            ULONG Reserved;
        } BusNumber;

        struct {
            ULONG Priority;   // use LCPRI_Xxx values in cfg.h
            ULONG Reserved1;
            ULONG Reserved2;
        } ConfigData;

        //
        // The following structures provide descriptions
        // for memory resource requirement greater than MAXULONG
        //

        struct {
            ULONG Length40;
            ULONG Alignment40;
            PHYSICAL_ADDRESS MinimumAddress;
            PHYSICAL_ADDRESS MaximumAddress;
        } Memory40;

        struct {
            ULONG Length48;
            ULONG Alignment48;
            PHYSICAL_ADDRESS MinimumAddress;
            PHYSICAL_ADDRESS MaximumAddress;
        } Memory48;

        struct {
            ULONG Length64;
            ULONG Alignment64;
            PHYSICAL_ADDRESS MinimumAddress;
            PHYSICAL_ADDRESS MaximumAddress;
        } Memory64;

        struct {
            UCHAR Class;
            UCHAR Type;
            UCHAR Reserved1;
            UCHAR Reserved2;
            ULONG IdLowPart;
            ULONG IdHighPart;
        } Connection;

    } u;

} IO_RESOURCE_DESCRIPTOR, *PIO_RESOURCE_DESCRIPTOR;


typedef struct _IO_RESOURCE_LIST {
    USHORT Version;
    USHORT Revision;

    ULONG Count;
    IO_RESOURCE_DESCRIPTOR Descriptors[1];
} IO_RESOURCE_LIST, *PIO_RESOURCE_LIST;


typedef struct _IO_RESOURCE_REQUIREMENTS_LIST {
    ULONG ListSize;
    INTERFACE_TYPE InterfaceType; // unused for WDM
    ULONG BusNumber; // unused for WDM
    ULONG SlotNumber;
    ULONG Reserved[3];
    ULONG AlternativeLists;
    IO_RESOURCE_LIST  List[1];
} IO_RESOURCE_REQUIREMENTS_LIST, *PIO_RESOURCE_REQUIREMENTS_LIST;


#if defined(_MSC_VER)
#if (_MSC_VER >= 1200)
#pragma warning(pop)
#endif
#endif

#endif /* _MINIPORT_ */
