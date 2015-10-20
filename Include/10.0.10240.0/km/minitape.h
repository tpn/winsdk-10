/*++

Copyright (c) Microsoft Corporation. All rights reserved.

Module Name:

    minitape.h

Abstract:

    Type definitions for minitape drivers.

Revision History:

--*/

#ifndef _MINITAPE_
#define _MINITAPE_

#include "stddef.h"

#define ASSERT( exp )

#if DBG

#define DebugPrint(x) ScsiDebugPrint x

#else

#define DebugPrint(x)

#endif // DBG

#if defined(_MSC_VER) && (_MSC_VER >= 800)
#if (_MSC_VER >= 1200)
#pragma warning(push)
#endif
#pragma warning(disable:4200) /* nonstandard extension used : zero-sized array in struct/union */
#pragma warning(disable:4201) /* nonstandard extension used : Nameless struct/union            */
#pragma warning(disable:4214) /* nonstandard extension used : Bit field types other than int   */
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
#define PROBE_ALIGNMENT( _s ) (TYPE_ALIGNMENT( _s ) > TYPE_ALIGNMENT( ULONG ) ? \
                              TYPE_ALIGNMENT( _s ) : TYPE_ALIGNMENT( ULONG ))
#elif !defined(RC_INVOKED)
#error "No Target Architecture"
#endif

//
// Define PROBE_ALIGNMENT32 to be the same as PROBE_ALIGNMENT on x86, so that
// code hosting x86 under WoW can handle x86's maximum garanteed alignment.
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

#if (defined(_M_IX86) || defined(_M_IA64) || defined(_M_AMD64) || defined(_M_ARM) || defined(_M_ARM64)) && !defined(MIDL_PASS)
#define DECLSPEC_IMPORT __declspec(dllimport)
#else
#define DECLSPEC_IMPORT
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

//
// Cardinal Data Types [0 - 2**N-2)
//

typedef char CCHAR;          // winnt
typedef short CSHORT;
typedef ULONG CLONG;

typedef CCHAR *PCCHAR;
typedef CSHORT *PCSHORT;
typedef CLONG *PCLONG;

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
#endif //MIDL_PASS
    LONGLONG QuadPart;
} LARGE_INTEGER;

typedef LARGE_INTEGER *PLARGE_INTEGER;

#if defined(MIDL_PASS)
typedef struct _ULARGE_INTEGER {
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
#endif //MIDL_PASS
    ULONGLONG QuadPart;
} ULARGE_INTEGER;

typedef ULARGE_INTEGER *PULARGE_INTEGER;

//
// Reference count.
//

typedef LONG_PTR RTL_REFERENCE_COUNT, *PRTL_REFERENCE_COUNT;


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
#define UNREFERENCED_PARAMETER(P)          _Prefast_unreferenced_parameter_impl_("PREfast", (P))
#define DBG_UNREFERENCED_PARAMETER(P)      _Prefast_unreferenced_parameter_impl_("PREfast", (P))
#define DBG_UNREFERENCED_LOCAL_VARIABLE(V) _Prefast_unreferenced_parameter_impl_("PREfast", (V))

#else // _PREFAST_

#define UNREFERENCED_PARAMETER(P)          (P)
#define DBG_UNREFERENCED_PARAMETER(P)      (P)
#define DBG_UNREFERENCED_LOCAL_VARIABLE(V) (V)

#endif // _PREFAST_

#else // lint

// Note: lint -e530 says don't complain about uninitialized variables for
// this varible.  Error 527 has to do with unreachable code.
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
// or on compiler-specific contructs.
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

#define DEFINE_ENUM_FLAG_OPERATORS(ENUMTYPE) \
extern "C++" { \
inline ENUMTYPE operator | (ENUMTYPE a, ENUMTYPE b) throw() { return ENUMTYPE(((_ENUM_FLAG_SIZED_INTEGER<ENUMTYPE>::type)a) | ((_ENUM_FLAG_SIZED_INTEGER<ENUMTYPE>::type)b)); } \
inline ENUMTYPE &operator |= (ENUMTYPE &a, ENUMTYPE b) throw() { return (ENUMTYPE &)(((_ENUM_FLAG_SIZED_INTEGER<ENUMTYPE>::type &)a) |= ((_ENUM_FLAG_SIZED_INTEGER<ENUMTYPE>::type)b)); } \
inline ENUMTYPE operator & (ENUMTYPE a, ENUMTYPE b) throw() { return ENUMTYPE(((_ENUM_FLAG_SIZED_INTEGER<ENUMTYPE>::type)a) & ((_ENUM_FLAG_SIZED_INTEGER<ENUMTYPE>::type)b)); } \
inline ENUMTYPE &operator &= (ENUMTYPE &a, ENUMTYPE b) throw() { return (ENUMTYPE &)(((_ENUM_FLAG_SIZED_INTEGER<ENUMTYPE>::type &)a) &= ((_ENUM_FLAG_SIZED_INTEGER<ENUMTYPE>::type)b)); } \
inline ENUMTYPE operator ~ (ENUMTYPE a) throw() { return ENUMTYPE(~((_ENUM_FLAG_SIZED_INTEGER<ENUMTYPE>::type)a)); } \
inline ENUMTYPE operator ^ (ENUMTYPE a, ENUMTYPE b) throw() { return ENUMTYPE(((_ENUM_FLAG_SIZED_INTEGER<ENUMTYPE>::type)a) ^ ((_ENUM_FLAG_SIZED_INTEGER<ENUMTYPE>::type)b)); } \
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


#ifndef _NTDDTAPE_WINNT_
#define _NTDDTAPE_WINNT_

//
// IOCTL_TAPE_ERASE definitions
//

#define TAPE_ERASE_SHORT            0L
#define TAPE_ERASE_LONG             1L

typedef struct _TAPE_ERASE {
    ULONG Type;
    BOOLEAN Immediate;
} TAPE_ERASE, *PTAPE_ERASE;

//
// IOCTL_TAPE_PREPARE definitions
//

#define TAPE_LOAD                   0L
#define TAPE_UNLOAD                 1L
#define TAPE_TENSION                2L
#define TAPE_LOCK                   3L
#define TAPE_UNLOCK                 4L
#define TAPE_FORMAT                 5L

typedef struct _TAPE_PREPARE {
    ULONG Operation;
    BOOLEAN Immediate;
} TAPE_PREPARE, *PTAPE_PREPARE;

//
// IOCTL_TAPE_WRITE_MARKS definitions
//

#define TAPE_SETMARKS               0L
#define TAPE_FILEMARKS              1L
#define TAPE_SHORT_FILEMARKS        2L
#define TAPE_LONG_FILEMARKS         3L

typedef struct _TAPE_WRITE_MARKS {
    ULONG Type;
    ULONG Count;
    BOOLEAN Immediate;
} TAPE_WRITE_MARKS, *PTAPE_WRITE_MARKS;

//
// IOCTL_TAPE_GET_POSITION definitions
//

#define TAPE_ABSOLUTE_POSITION       0L
#define TAPE_LOGICAL_POSITION        1L
#define TAPE_PSEUDO_LOGICAL_POSITION 2L

typedef struct _TAPE_GET_POSITION {
    ULONG Type;
    ULONG Partition;
    LARGE_INTEGER Offset;
} TAPE_GET_POSITION, *PTAPE_GET_POSITION;

//
// IOCTL_TAPE_SET_POSITION definitions
//

#define TAPE_REWIND                 0L
#define TAPE_ABSOLUTE_BLOCK         1L
#define TAPE_LOGICAL_BLOCK          2L
#define TAPE_PSEUDO_LOGICAL_BLOCK   3L
#define TAPE_SPACE_END_OF_DATA      4L
#define TAPE_SPACE_RELATIVE_BLOCKS  5L
#define TAPE_SPACE_FILEMARKS        6L
#define TAPE_SPACE_SEQUENTIAL_FMKS  7L
#define TAPE_SPACE_SETMARKS         8L
#define TAPE_SPACE_SEQUENTIAL_SMKS  9L

typedef struct _TAPE_SET_POSITION {
    ULONG Method;
    ULONG Partition;
    LARGE_INTEGER Offset;
    BOOLEAN Immediate;
} TAPE_SET_POSITION, *PTAPE_SET_POSITION;

//
// IOCTL_TAPE_GET_DRIVE_PARAMS definitions
//

//
// Definitions for FeaturesLow parameter
//

#define TAPE_DRIVE_FIXED            0x00000001
#define TAPE_DRIVE_SELECT           0x00000002
#define TAPE_DRIVE_INITIATOR        0x00000004

#define TAPE_DRIVE_ERASE_SHORT      0x00000010
#define TAPE_DRIVE_ERASE_LONG       0x00000020
#define TAPE_DRIVE_ERASE_BOP_ONLY   0x00000040
#define TAPE_DRIVE_ERASE_IMMEDIATE  0x00000080

#define TAPE_DRIVE_TAPE_CAPACITY    0x00000100
#define TAPE_DRIVE_TAPE_REMAINING   0x00000200
#define TAPE_DRIVE_FIXED_BLOCK      0x00000400
#define TAPE_DRIVE_VARIABLE_BLOCK   0x00000800

#define TAPE_DRIVE_WRITE_PROTECT    0x00001000
#define TAPE_DRIVE_EOT_WZ_SIZE      0x00002000

#define TAPE_DRIVE_ECC              0x00010000
#define TAPE_DRIVE_COMPRESSION      0x00020000
#define TAPE_DRIVE_PADDING          0x00040000
#define TAPE_DRIVE_REPORT_SMKS      0x00080000

#define TAPE_DRIVE_GET_ABSOLUTE_BLK 0x00100000
#define TAPE_DRIVE_GET_LOGICAL_BLK  0x00200000
#define TAPE_DRIVE_SET_EOT_WZ_SIZE  0x00400000

#define TAPE_DRIVE_EJECT_MEDIA      0x01000000
#define TAPE_DRIVE_CLEAN_REQUESTS   0x02000000
#define TAPE_DRIVE_SET_CMP_BOP_ONLY 0x04000000

#define TAPE_DRIVE_RESERVED_BIT     0x80000000  //don't use this bit!
//                                              //can't be a low features bit!
//                                              //reserved; high features only

//
// Definitions for FeaturesHigh parameter
//

#define TAPE_DRIVE_LOAD_UNLOAD      0x80000001
#define TAPE_DRIVE_TENSION          0x80000002
#define TAPE_DRIVE_LOCK_UNLOCK      0x80000004
#define TAPE_DRIVE_REWIND_IMMEDIATE 0x80000008

#define TAPE_DRIVE_SET_BLOCK_SIZE   0x80000010
#define TAPE_DRIVE_LOAD_UNLD_IMMED  0x80000020
#define TAPE_DRIVE_TENSION_IMMED    0x80000040
#define TAPE_DRIVE_LOCK_UNLK_IMMED  0x80000080

#define TAPE_DRIVE_SET_ECC          0x80000100
#define TAPE_DRIVE_SET_COMPRESSION  0x80000200
#define TAPE_DRIVE_SET_PADDING      0x80000400
#define TAPE_DRIVE_SET_REPORT_SMKS  0x80000800

#define TAPE_DRIVE_ABSOLUTE_BLK     0x80001000
#define TAPE_DRIVE_ABS_BLK_IMMED    0x80002000
#define TAPE_DRIVE_LOGICAL_BLK      0x80004000
#define TAPE_DRIVE_LOG_BLK_IMMED    0x80008000

#define TAPE_DRIVE_END_OF_DATA      0x80010000
#define TAPE_DRIVE_RELATIVE_BLKS    0x80020000
#define TAPE_DRIVE_FILEMARKS        0x80040000
#define TAPE_DRIVE_SEQUENTIAL_FMKS  0x80080000

#define TAPE_DRIVE_SETMARKS         0x80100000
#define TAPE_DRIVE_SEQUENTIAL_SMKS  0x80200000
#define TAPE_DRIVE_REVERSE_POSITION 0x80400000
#define TAPE_DRIVE_SPACE_IMMEDIATE  0x80800000

#define TAPE_DRIVE_WRITE_SETMARKS   0x81000000
#define TAPE_DRIVE_WRITE_FILEMARKS  0x82000000
#define TAPE_DRIVE_WRITE_SHORT_FMKS 0x84000000
#define TAPE_DRIVE_WRITE_LONG_FMKS  0x88000000

#define TAPE_DRIVE_WRITE_MARK_IMMED 0x90000000
#define TAPE_DRIVE_FORMAT           0xA0000000
#define TAPE_DRIVE_FORMAT_IMMEDIATE 0xC0000000
#define TAPE_DRIVE_HIGH_FEATURES    0x80000000  //mask for high features flag

typedef struct _TAPE_GET_DRIVE_PARAMETERS {
    BOOLEAN ECC;
    BOOLEAN Compression;
    BOOLEAN DataPadding;
    BOOLEAN ReportSetmarks;
    ULONG DefaultBlockSize;
    ULONG MaximumBlockSize;
    ULONG MinimumBlockSize;
    ULONG MaximumPartitionCount;
    ULONG FeaturesLow;
    ULONG FeaturesHigh;
    ULONG EOTWarningZoneSize;
} TAPE_GET_DRIVE_PARAMETERS, *PTAPE_GET_DRIVE_PARAMETERS;

//
// IOCTL_TAPE_SET_DRIVE_PARAMETERS definitions
//

typedef struct _TAPE_SET_DRIVE_PARAMETERS {
    BOOLEAN ECC;
    BOOLEAN Compression;
    BOOLEAN DataPadding;
    BOOLEAN ReportSetmarks;
    ULONG EOTWarningZoneSize;
} TAPE_SET_DRIVE_PARAMETERS, *PTAPE_SET_DRIVE_PARAMETERS;

//
// IOCTL_TAPE_GET_MEDIA_PARAMETERS definitions
//

typedef struct _TAPE_GET_MEDIA_PARAMETERS {
    LARGE_INTEGER Capacity;
    LARGE_INTEGER Remaining;
    ULONG BlockSize;
    ULONG PartitionCount;
    BOOLEAN WriteProtected;
} TAPE_GET_MEDIA_PARAMETERS, *PTAPE_GET_MEDIA_PARAMETERS;

//
// IOCTL_TAPE_SET_MEDIA_PARAMETERS definitions
//

typedef struct _TAPE_SET_MEDIA_PARAMETERS {
    ULONG BlockSize;
} TAPE_SET_MEDIA_PARAMETERS, *PTAPE_SET_MEDIA_PARAMETERS;

//
// IOCTL_TAPE_CREATE_PARTITION definitions
//

#define TAPE_FIXED_PARTITIONS       0L
#define TAPE_SELECT_PARTITIONS      1L
#define TAPE_INITIATOR_PARTITIONS   2L

typedef struct _TAPE_CREATE_PARTITION {
    ULONG Method;
    ULONG Count;
    ULONG Size;
} TAPE_CREATE_PARTITION, *PTAPE_CREATE_PARTITION;


//
// WMI Methods
//
#define TAPE_QUERY_DRIVE_PARAMETERS       0L
#define TAPE_QUERY_MEDIA_CAPACITY         1L
#define TAPE_CHECK_FOR_DRIVE_PROBLEM      2L
#define TAPE_QUERY_IO_ERROR_DATA          3L
#define TAPE_QUERY_DEVICE_ERROR_DATA      4L

typedef struct _TAPE_WMI_OPERATIONS {
   ULONG Method;
   ULONG DataBufferSize;
   PVOID DataBuffer;
} TAPE_WMI_OPERATIONS, *PTAPE_WMI_OPERATIONS;

//
// Type of drive errors
//
typedef enum _TAPE_DRIVE_PROBLEM_TYPE {
   TapeDriveProblemNone, TapeDriveReadWriteWarning,
   TapeDriveReadWriteError, TapeDriveReadWarning,
   TapeDriveWriteWarning, TapeDriveReadError,
   TapeDriveWriteError, TapeDriveHardwareError,
   TapeDriveUnsupportedMedia, TapeDriveScsiConnectionError,
   TapeDriveTimetoClean, TapeDriveCleanDriveNow,
   TapeDriveMediaLifeExpired, TapeDriveSnappedTape
} TAPE_DRIVE_PROBLEM_TYPE;

#endif


typedef struct _TAPE_STATISTICS {
    ULONG Version;
    ULONG Flags;
    LARGE_INTEGER RecoveredWrites;
    LARGE_INTEGER UnrecoveredWrites;
    LARGE_INTEGER RecoveredReads;
    LARGE_INTEGER UnrecoveredReads;
    UCHAR         CompressionRatioReads;
    UCHAR         CompressionRatioWrites;
} TAPE_STATISTICS, *PTAPE_STATISTICS;

#define RECOVERED_WRITES_VALID   0x00000001
#define UNRECOVERED_WRITES_VALID 0x00000002
#define RECOVERED_READS_VALID    0x00000004
#define UNRECOVERED_READS_VALID  0x00000008
#define WRITE_COMPRESSION_INFO_VALID  0x00000010
#define READ_COMPRESSION_INFO_VALID   0x00000020

typedef struct _TAPE_GET_STATISTICS {
    ULONG Operation;
} TAPE_GET_STATISTICS, *PTAPE_GET_STATISTICS;

#define TAPE_RETURN_STATISTICS 0L
#define TAPE_RETURN_ENV_INFO   1L
#define TAPE_RESET_STATISTICS  2L

//
// IOCTL_STORAGE_GET_MEDIA_TYPES_EX will return an array of DEVICE_MEDIA_INFO
// structures, one per supported type, embedded in the GET_MEDIA_TYPES struct.
//

typedef enum _STORAGE_MEDIA_TYPE {
    //
    // Following are defined in ntdddisk.h in the MEDIA_TYPE enum
    //
    // Unknown,                // Format is unknown
    // F5_1Pt2_512,            // 5.25", 1.2MB,  512 bytes/sector
    // F3_1Pt44_512,           // 3.5",  1.44MB, 512 bytes/sector
    // F3_2Pt88_512,           // 3.5",  2.88MB, 512 bytes/sector
    // F3_20Pt8_512,           // 3.5",  20.8MB, 512 bytes/sector
    // F3_720_512,             // 3.5",  720KB,  512 bytes/sector
    // F5_360_512,             // 5.25", 360KB,  512 bytes/sector
    // F5_320_512,             // 5.25", 320KB,  512 bytes/sector
    // F5_320_1024,            // 5.25", 320KB,  1024 bytes/sector
    // F5_180_512,             // 5.25", 180KB,  512 bytes/sector
    // F5_160_512,             // 5.25", 160KB,  512 bytes/sector
    // RemovableMedia,         // Removable media other than floppy
    // FixedMedia,             // Fixed hard disk media
    // F3_120M_512,            // 3.5", 120M Floppy
    // F3_640_512,             // 3.5" ,  640KB,  512 bytes/sector
    // F5_640_512,             // 5.25",  640KB,  512 bytes/sector
    // F5_720_512,             // 5.25",  720KB,  512 bytes/sector
    // F3_1Pt2_512,            // 3.5" ,  1.2Mb,  512 bytes/sector
    // F3_1Pt23_1024,          // 3.5" ,  1.23Mb, 1024 bytes/sector
    // F5_1Pt23_1024,          // 5.25",  1.23MB, 1024 bytes/sector
    // F3_128Mb_512,           // 3.5" MO 128Mb   512 bytes/sector
    // F3_230Mb_512,           // 3.5" MO 230Mb   512 bytes/sector
    // F8_256_128,             // 8",     256KB,  128 bytes/sector
    // F3_200Mb_512,           // 3.5",   200M Floppy (HiFD)
    //

    DDS_4mm = 0x20,            // Tape - DAT DDS1,2,... (all vendors)
    MiniQic,                   // Tape - miniQIC Tape
    Travan,                    // Tape - Travan TR-1,2,3,...
    QIC,                       // Tape - QIC
    MP_8mm,                    // Tape - 8mm Exabyte Metal Particle
    AME_8mm,                   // Tape - 8mm Exabyte Advanced Metal Evap
    AIT1_8mm,                  // Tape - 8mm Sony AIT
    DLT,                       // Tape - DLT Compact IIIxt, IV
    NCTP,                      // Tape - Philips NCTP
    IBM_3480,                  // Tape - IBM 3480
    IBM_3490E,                 // Tape - IBM 3490E
    IBM_Magstar_3590,          // Tape - IBM Magstar 3590
    IBM_Magstar_MP,            // Tape - IBM Magstar MP
    STK_DATA_D3,               // Tape - STK Data D3
    SONY_DTF,                  // Tape - Sony DTF
    DV_6mm,                    // Tape - 6mm Digital Video
    DMI,                       // Tape - Exabyte DMI and compatibles
    SONY_D2,                   // Tape - Sony D2S and D2L
    CLEANER_CARTRIDGE,         // Cleaner - All Drive types that support Drive Cleaners
    CD_ROM,                    // Opt_Disk - CD
    CD_R,                      // Opt_Disk - CD-Recordable (Write Once)
    CD_RW,                     // Opt_Disk - CD-Rewriteable
    DVD_ROM,                   // Opt_Disk - DVD-ROM
    DVD_R,                     // Opt_Disk - DVD-Recordable (Write Once)
    DVD_RW,                    // Opt_Disk - DVD-Rewriteable
    MO_3_RW,                   // Opt_Disk - 3.5" Rewriteable MO Disk
    MO_5_WO,                   // Opt_Disk - MO 5.25" Write Once
    MO_5_RW,                   // Opt_Disk - MO 5.25" Rewriteable (not LIMDOW)
    MO_5_LIMDOW,               // Opt_Disk - MO 5.25" Rewriteable (LIMDOW)
    PC_5_WO,                   // Opt_Disk - Phase Change 5.25" Write Once Optical
    PC_5_RW,                   // Opt_Disk - Phase Change 5.25" Rewriteable
    PD_5_RW,                   // Opt_Disk - PhaseChange Dual Rewriteable
    ABL_5_WO,                  // Opt_Disk - Ablative 5.25" Write Once Optical
    PINNACLE_APEX_5_RW,        // Opt_Disk - Pinnacle Apex 4.6GB Rewriteable Optical
    SONY_12_WO,                // Opt_Disk - Sony 12" Write Once
    PHILIPS_12_WO,             // Opt_Disk - Philips/LMS 12" Write Once
    HITACHI_12_WO,             // Opt_Disk - Hitachi 12" Write Once
    CYGNET_12_WO,              // Opt_Disk - Cygnet/ATG 12" Write Once
    KODAK_14_WO,               // Opt_Disk - Kodak 14" Write Once
    MO_NFR_525,                // Opt_Disk - Near Field Recording (Terastor)
    NIKON_12_RW,               // Opt_Disk - Nikon 12" Rewriteable
    IOMEGA_ZIP,                // Mag_Disk - Iomega Zip
    IOMEGA_JAZ,                // Mag_Disk - Iomega Jaz
    SYQUEST_EZ135,             // Mag_Disk - Syquest EZ135
    SYQUEST_EZFLYER,           // Mag_Disk - Syquest EzFlyer
    SYQUEST_SYJET,             // Mag_Disk - Syquest SyJet
    AVATAR_F2,                 // Mag_Disk - 2.5" Floppy
    MP2_8mm,                   // Tape - 8mm Hitachi
    DST_S,                     // Ampex DST Small Tapes
    DST_M,                     // Ampex DST Medium Tapes
    DST_L,                     // Ampex DST Large Tapes
    VXATape_1,                 // Ecrix 8mm Tape
    VXATape_2,                 // Ecrix 8mm Tape
#if (NTDDI_VERSION < NTDDI_WINXP)
    STK_EAGLE,                 // STK Eagle
#else
    STK_9840,                  // STK 9840
#endif
    LTO_Ultrium,               // IBM, HP, Seagate LTO Ultrium
    LTO_Accelis,               // IBM, HP, Seagate LTO Accelis
    DVD_RAM,                   // Opt_Disk - DVD-RAM
    AIT_8mm,                   // AIT2 or higher
    ADR_1,                     // OnStream ADR Mediatypes
    ADR_2,
    STK_9940,                  // STK 9940
    SAIT,                      // SAIT Tapes
    VXATape                    // VXA (Ecrix 8mm) Tape
}STORAGE_MEDIA_TYPE, *PSTORAGE_MEDIA_TYPE;

#define MEDIA_ERASEABLE         0x00000001
#define MEDIA_WRITE_ONCE        0x00000002
#define MEDIA_READ_ONLY         0x00000004
#define MEDIA_READ_WRITE        0x00000008

#define MEDIA_WRITE_PROTECTED   0x00000100
#define MEDIA_CURRENTLY_MOUNTED 0x80000000

//
// Define the different storage bus types
// Bus types below 128 (0x80) are reserved for Microsoft use
//

typedef enum _STORAGE_BUS_TYPE {
    BusTypeUnknown = 0x00,
    BusTypeScsi,
    BusTypeAtapi,
    BusTypeAta,
    BusType1394,
    BusTypeSsa,
    BusTypeFibre,
    BusTypeUsb,
    BusTypeRAID,
    BusTypeiScsi,
    BusTypeSas,
    BusTypeSata,
    BusTypeSd,
    BusTypeMmc,
    BusTypeVirtual,
    BusTypeFileBackedVirtual,
    BusTypeSpaces,
    BusTypeNvme,
    BusTypeMax,
    BusTypeMaxReserved = 0x7F
} STORAGE_BUS_TYPE, *PSTORAGE_BUS_TYPE;

//
// Macro to identify which bus types
// support shared storage
//

#define SupportsDeviceSharing( BusType ) ( \
        (BusType == BusTypeScsi)  ||       \
        (BusType == BusTypeFibre) ||       \
        (BusType == BusTypeiScsi) ||       \
        (BusType == BusTypeSas)   ||       \
        (BusType == BusTypeSpaces) )

typedef struct _DEVICE_MEDIA_INFO {
    union {
        struct {
            LARGE_INTEGER Cylinders;
            STORAGE_MEDIA_TYPE MediaType;
            ULONG TracksPerCylinder;
            ULONG SectorsPerTrack;
            ULONG BytesPerSector;
            ULONG NumberMediaSides;
            ULONG MediaCharacteristics; // Bitmask of MEDIA_XXX values.
        } DiskInfo;

        struct {
            LARGE_INTEGER Cylinders;
            STORAGE_MEDIA_TYPE MediaType;
            ULONG TracksPerCylinder;
            ULONG SectorsPerTrack;
            ULONG BytesPerSector;
            ULONG NumberMediaSides;
            ULONG MediaCharacteristics; // Bitmask of MEDIA_XXX values.
        } RemovableDiskInfo;

        struct {
            STORAGE_MEDIA_TYPE MediaType;
            ULONG   MediaCharacteristics; // Bitmask of MEDIA_XXX values.
            ULONG   CurrentBlockSize;
            STORAGE_BUS_TYPE BusType;

            //
            // Bus specific information describing the medium supported.
            //

            union {
                struct {
                    UCHAR MediumType;
                    UCHAR DensityCode;
                } ScsiInformation;
            } BusSpecificData;

        } TapeInfo;
    } DeviceSpecific;
} DEVICE_MEDIA_INFO, *PDEVICE_MEDIA_INFO;

typedef struct _GET_MEDIA_TYPES {
    ULONG DeviceType;              // FILE_DEVICE_XXX values
    ULONG MediaInfoCount;
    DEVICE_MEDIA_INFO MediaInfo[1];
} GET_MEDIA_TYPES, *PGET_MEDIA_TYPES;


//
// IOCTL_STORAGE_PREDICT_FAILURE
//
// input - none
//
// output - STORAGE_PREDICT_FAILURE structure
//          PredictFailure returns zero if no failure predicted and non zero
//                         if a failure is predicted.
//
//          VendorSpecific returns 512 bytes of vendor specific information
//                         if a failure is predicted
//
typedef struct _STORAGE_PREDICT_FAILURE
{
    ULONG PredictFailure;
    UCHAR VendorSpecific[512];
} STORAGE_PREDICT_FAILURE, *PSTORAGE_PREDICT_FAILURE;


//
// IOCTL_STORAGE_FAILURE_PREDICTION_CONFIG
//
// Input - STORAGE_FAILURE_PREDICTION_CONFIG structure.
//         If the sender wants to enable or disable failure prediction then
//         the sender should set the "Set" field to TRUE.
// Output - STORAGE_FAILURE_PREDICTION_CONFIG structure.
//          If successful, the "Enabled" field will indicate if failure
//          prediction is currently enabled or not.
//
typedef struct _STORAGE_FAILURE_PREDICTION_CONFIG {
    ULONG Version;      // Set to 1 for Blue.
    ULONG Size;
    BOOLEAN Set;        // TRUE if the sender wants to enable/disable failure prediction.
    BOOLEAN Enabled;
    USHORT Reserved;
} STORAGE_FAILURE_PREDICTION_CONFIG, *PSTORAGE_FAILURE_PREDICTION_CONFIG;

#define STORAGE_FAILURE_PREDICTION_CONFIG_V1 1


#define MAXIMUM_CDB_SIZE 12

//
// SCSI I/O Request Block
//

typedef struct _SCSI_REQUEST_BLOCK {
    USHORT Length;                  // offset 0
    UCHAR Function;                 // offset 2
    UCHAR SrbStatus;                // offset 3
    UCHAR ScsiStatus;               // offset 4
    UCHAR PathId;                   // offset 5
    UCHAR TargetId;                 // offset 6
    UCHAR Lun;                      // offset 7
    UCHAR QueueTag;                 // offset 8
    UCHAR QueueAction;              // offset 9
    UCHAR CdbLength;                // offset a
    UCHAR SenseInfoBufferLength;    // offset b
    ULONG SrbFlags;                 // offset c
    ULONG DataTransferLength;       // offset 10
    ULONG TimeOutValue;             // offset 14
    _Field_size_bytes_(DataTransferLength)
    PVOID DataBuffer;               // offset 18
    PVOID SenseInfoBuffer;          // offset 1c
    struct _SCSI_REQUEST_BLOCK *NextSrb; // offset 20
    PVOID OriginalRequest;          // offset 24
    PVOID SrbExtension;             // offset 28
    union {
        ULONG InternalStatus;       // offset 2c
        ULONG QueueSortKey;         // offset 2c
        ULONG LinkTimeoutValue;     // offset 2c
    };

#if defined(_WIN64)

    //
    // Force PVOID alignment of Cdb
    //

    ULONG Reserved;

#endif

    UCHAR Cdb[16];                  // offset 30
} SCSI_REQUEST_BLOCK, *PSCSI_REQUEST_BLOCK;

#define SCSI_REQUEST_BLOCK_SIZE sizeof(SCSI_REQUEST_BLOCK)

//
// SCSI I/O Request Block for WMI Requests
//

typedef struct _SCSI_WMI_REQUEST_BLOCK {
    USHORT Length;
    UCHAR Function;        // SRB_FUNCTION_WMI
    UCHAR SrbStatus;
    UCHAR WMISubFunction;
    UCHAR PathId;          // If SRB_WMI_FLAGS_ADAPTER_REQUEST is set in
    UCHAR TargetId;        // WMIFlags then PathId, TargetId and Lun are
    UCHAR Lun;             // reserved fields.
    UCHAR Reserved1;
    UCHAR WMIFlags;
    UCHAR Reserved2[2];
    ULONG SrbFlags;
    ULONG DataTransferLength;
    ULONG TimeOutValue;
    PVOID DataBuffer;
    PVOID DataPath;
    PVOID Reserved3;
    PVOID OriginalRequest;
    PVOID SrbExtension;
    ULONG Reserved4;

#if (NTDDI_VERSION >= NTDDI_WS03SP1)
#if defined(_WIN64)

    //
    // Force PVOID alignment of Cdb
    //

    ULONG Reserved6;

#endif
#endif

    UCHAR Reserved5[16];
} SCSI_WMI_REQUEST_BLOCK, *PSCSI_WMI_REQUEST_BLOCK;

typedef enum _STOR_DEVICE_POWER_STATE {
    StorPowerDeviceUnspecified = 0,
    StorPowerDeviceD0,
    StorPowerDeviceD1,
    StorPowerDeviceD2,
    StorPowerDeviceD3,
    StorPowerDeviceMaximum
} STOR_DEVICE_POWER_STATE, *PSTOR_DEVICE_POWER_STATE;

typedef enum {
    StorPowerActionNone = 0,
    StorPowerActionReserved,
    StorPowerActionSleep,
    StorPowerActionHibernate,
    StorPowerActionShutdown,
    StorPowerActionShutdownReset,
    StorPowerActionShutdownOff,
    StorPowerActionWarmEject
} STOR_POWER_ACTION, *PSTOR_POWER_ACTION;

typedef struct _SCSI_POWER_REQUEST_BLOCK {
    USHORT Length;                  // offset 0
    UCHAR Function;                 // offset 2
    UCHAR SrbStatus;                // offset 3
    UCHAR SrbPowerFlags;            // offset 4
    UCHAR PathId;                   // offset 5
    UCHAR TargetId;                 // offset 6
    UCHAR Lun;                      // offset 7
    STOR_DEVICE_POWER_STATE DevicePowerState; // offset 8
    ULONG SrbFlags;                 // offset c
    ULONG DataTransferLength;       // offset 10
    ULONG TimeOutValue;             // offset 14
    PVOID DataBuffer;               // offset 18
    PVOID SenseInfoBuffer;          // offset 1c
    struct _SCSI_REQUEST_BLOCK *NextSrb; // offset 20
    PVOID OriginalRequest;          // offset 24
    PVOID SrbExtension;             // offset 28
    STOR_POWER_ACTION PowerAction;       // offset 2c

#if defined(_WIN64)

    //
    // Force PVOID alignment of Cdb
    //

    ULONG Reserved;

#endif

    UCHAR Reserved5[16];              // offset 30
} SCSI_POWER_REQUEST_BLOCK, *PSCSI_POWER_REQUEST_BLOCK;

//
// PNP minor function codes.
//
typedef enum {
    StorStartDevice = 0x0,
    StorRemoveDevice = 0x2,
    StorStopDevice  = 0x4,
    StorQueryCapabilities = 0x9,
    StorQueryResourceRequirements = 0xB,
    StorFilterResourceRequirements = 0xD,
    StorSurpriseRemoval = 0x17
} STOR_PNP_ACTION, *PSTOR_PNP_ACTION;

typedef struct _STOR_DEVICE_CAPABILITIES {
    USHORT Version;
    ULONG  DeviceD1:1;
    ULONG  DeviceD2:1;
    ULONG  LockSupported:1;
    ULONG  EjectSupported:1;
    ULONG  Removable:1;
    ULONG  DockDevice:1;
    ULONG  UniqueID:1;
    ULONG  SilentInstall:1;
    ULONG  SurpriseRemovalOK:1;
    ULONG  NoDisplayInUI:1;

} STOR_DEVICE_CAPABILITIES, *PSTOR_DEVICE_CAPABILITIES;


#define STOR_DEVICE_CAPABILITIES_EX_VERSION_1    0x1

typedef struct _STOR_DEVICE_CAPABILITIES_EX {
    USHORT Version;
    USHORT Size;
    ULONG  DeviceD1:1;
    ULONG  DeviceD2:1;
    ULONG  LockSupported:1;
    ULONG  EjectSupported:1;
    ULONG  Removable:1;
    ULONG  DockDevice:1;
    ULONG  UniqueID:1;
    ULONG  SilentInstall:1;
    ULONG  RawDeviceOK:1;
    ULONG  SurpriseRemovalOK:1;
    ULONG  NoDisplayInUI:1;
    ULONG  DefaultWriteCacheEnabled:1;
    ULONG  Reserved0:20;

    ULONG  Address;
    ULONG  UINumber;

    ULONG  Reserved1[2];
} STOR_DEVICE_CAPABILITIES_EX, *PSTOR_DEVICE_CAPABILITIES_EX;

typedef struct _SCSI_PNP_REQUEST_BLOCK {
    USHORT Length;                  // offset 0
    UCHAR Function;                 // offset 2
    UCHAR SrbStatus;                // offset 3
    UCHAR PnPSubFunction;           // offset 4
    UCHAR PathId;                   // offset 5
    UCHAR TargetId;                 // offset 6
    UCHAR Lun;                      // offset 7
    STOR_PNP_ACTION PnPAction;       // offset 8
    ULONG SrbFlags;                 // offset c
    ULONG DataTransferLength;       // offset 10
    ULONG TimeOutValue;             // offset 14
    PVOID DataBuffer;               // offset 18
    PVOID SenseInfoBuffer;          // offset 1c
    struct _SCSI_REQUEST_BLOCK *NextSrb; // offset 20
    PVOID OriginalRequest;          // offset 24
    PVOID SrbExtension;             // offset 28
    ULONG SrbPnPFlags;              // offset 2c

#if defined(_WIN64)

    //
    // Force PVOID alignment of Cdb
    //

    ULONG Reserved;

#endif
        UCHAR Reserved4[16];            // offset 30
} SCSI_PNP_REQUEST_BLOCK, *PSCSI_PNP_REQUEST_BLOCK;

//
// SRB Functions
//

#define SRB_FUNCTION_EXECUTE_SCSI           0x00
#define SRB_FUNCTION_CLAIM_DEVICE           0x01
#define SRB_FUNCTION_IO_CONTROL             0x02
#define SRB_FUNCTION_RECEIVE_EVENT          0x03
#define SRB_FUNCTION_RELEASE_QUEUE          0x04
#define SRB_FUNCTION_ATTACH_DEVICE          0x05
#define SRB_FUNCTION_RELEASE_DEVICE         0x06
#define SRB_FUNCTION_SHUTDOWN               0x07
#define SRB_FUNCTION_FLUSH                  0x08
#define SRB_FUNCTION_PROTOCOL_COMMAND       0x09
#define SRB_FUNCTION_ABORT_COMMAND          0x10
#define SRB_FUNCTION_RELEASE_RECOVERY       0x11
#define SRB_FUNCTION_RESET_BUS              0x12
#define SRB_FUNCTION_RESET_DEVICE           0x13
#define SRB_FUNCTION_TERMINATE_IO           0x14
#define SRB_FUNCTION_FLUSH_QUEUE            0x15
#define SRB_FUNCTION_REMOVE_DEVICE          0x16
#define SRB_FUNCTION_WMI                    0x17
#define SRB_FUNCTION_LOCK_QUEUE             0x18
#define SRB_FUNCTION_UNLOCK_QUEUE           0x19
#define SRB_FUNCTION_QUIESCE_DEVICE         0x1a
#define SRB_FUNCTION_RESET_LOGICAL_UNIT     0x20
#define SRB_FUNCTION_SET_LINK_TIMEOUT       0x21
#define SRB_FUNCTION_LINK_TIMEOUT_OCCURRED  0x22
#define SRB_FUNCTION_LINK_TIMEOUT_COMPLETE  0x23
#define SRB_FUNCTION_POWER                  0x24
#define SRB_FUNCTION_PNP                    0x25
#define SRB_FUNCTION_DUMP_POINTERS          0x26
#define SRB_FUNCTION_FREE_DUMP_POINTERS     0x27

//
// Define extended SRB function that will be used to identify a new
// type of SRB that is not a SCSI_REQUEST_BLOCK. A
// SRB_FUNCTION_STORAGE_REQUEST_BLOCK will use a SRB that is of type
// STORAGE_REQUEST_BLOCK.
//
#define SRB_FUNCTION_STORAGE_REQUEST_BLOCK  0x28

//
// SRB Status
//

#define SRB_STATUS_PENDING                  0x00
#define SRB_STATUS_SUCCESS                  0x01
#define SRB_STATUS_ABORTED                  0x02
#define SRB_STATUS_ABORT_FAILED             0x03
#define SRB_STATUS_ERROR                    0x04
#define SRB_STATUS_BUSY                     0x05
#define SRB_STATUS_INVALID_REQUEST          0x06
#define SRB_STATUS_INVALID_PATH_ID          0x07
#define SRB_STATUS_NO_DEVICE                0x08
#define SRB_STATUS_TIMEOUT                  0x09
#define SRB_STATUS_SELECTION_TIMEOUT        0x0A
#define SRB_STATUS_COMMAND_TIMEOUT          0x0B
#define SRB_STATUS_MESSAGE_REJECTED         0x0D
#define SRB_STATUS_BUS_RESET                0x0E
#define SRB_STATUS_PARITY_ERROR             0x0F
#define SRB_STATUS_REQUEST_SENSE_FAILED     0x10
#define SRB_STATUS_NO_HBA                   0x11
#define SRB_STATUS_DATA_OVERRUN             0x12
#define SRB_STATUS_UNEXPECTED_BUS_FREE      0x13
#define SRB_STATUS_PHASE_SEQUENCE_FAILURE   0x14
#define SRB_STATUS_BAD_SRB_BLOCK_LENGTH     0x15
#define SRB_STATUS_REQUEST_FLUSHED          0x16
#define SRB_STATUS_INVALID_LUN              0x20
#define SRB_STATUS_INVALID_TARGET_ID        0x21
#define SRB_STATUS_BAD_FUNCTION             0x22
#define SRB_STATUS_ERROR_RECOVERY           0x23
#define SRB_STATUS_NOT_POWERED              0x24
#define SRB_STATUS_LINK_DOWN                0x25


//
// This value is used by the port driver to indicate that a non-scsi-related
// error occured.  Miniports must never return this status.
//

#define SRB_STATUS_INTERNAL_ERROR           0x30

//
// Srb status values 0x38 through 0x3f are reserved for internal port driver
// use.
//

//
// SRB Status Masks
//

#define SRB_STATUS_QUEUE_FROZEN             0x40
#define SRB_STATUS_AUTOSENSE_VALID          0x80

#define SRB_STATUS(Status) (Status & ~(SRB_STATUS_AUTOSENSE_VALID | SRB_STATUS_QUEUE_FROZEN))

//
// SRB Flag Bits
//

#define SRB_FLAGS_QUEUE_ACTION_ENABLE       0x00000002
#define SRB_FLAGS_DISABLE_DISCONNECT        0x00000004
#define SRB_FLAGS_DISABLE_SYNCH_TRANSFER    0x00000008

#define SRB_FLAGS_BYPASS_FROZEN_QUEUE       0x00000010
#define SRB_FLAGS_DISABLE_AUTOSENSE         0x00000020
#define SRB_FLAGS_DATA_IN                   0x00000040
#define SRB_FLAGS_DATA_OUT                  0x00000080
#define SRB_FLAGS_NO_DATA_TRANSFER          0x00000000
#define SRB_FLAGS_UNSPECIFIED_DIRECTION     (SRB_FLAGS_DATA_IN | SRB_FLAGS_DATA_OUT)

#define SRB_FLAGS_NO_QUEUE_FREEZE           0x00000100
#define SRB_FLAGS_ADAPTER_CACHE_ENABLE      0x00000200
#define SRB_FLAGS_FREE_SENSE_BUFFER         0x00000400

//
// This flag indicates the request is part of the workflow for processing a D3.
//
#define SRB_FLAGS_D3_PROCESSING             0x00000800


#define SRB_FLAGS_IS_ACTIVE                 0x00010000
#define SRB_FLAGS_ALLOCATED_FROM_ZONE       0x00020000
#define SRB_FLAGS_SGLIST_FROM_POOL          0x00040000
#define SRB_FLAGS_BYPASS_LOCKED_QUEUE       0x00080000

#define SRB_FLAGS_NO_KEEP_AWAKE             0x00100000
#define SRB_FLAGS_PORT_DRIVER_ALLOCSENSE    0x00200000

#define SRB_FLAGS_PORT_DRIVER_SENSEHASPORT  0x00400000
#define SRB_FLAGS_DONT_START_NEXT_PACKET    0x00800000

#define SRB_FLAGS_PORT_DRIVER_RESERVED      0x0F000000
#define SRB_FLAGS_CLASS_DRIVER_RESERVED     0xF0000000

#if DBG==1
//
// A signature used to validate the scsi port number
// at the end of a sense buffer.
//
#define SCSI_PORT_SIGNATURE                 0x54524f50
#endif

//
// Queue Action
//

#define SRB_SIMPLE_TAG_REQUEST              0x20
#define SRB_HEAD_OF_QUEUE_TAG_REQUEST       0x21
#define SRB_ORDERED_QUEUE_TAG_REQUEST       0x22

#define SRB_WMI_FLAGS_ADAPTER_REQUEST       0x01
#define SRB_POWER_FLAGS_ADAPTER_REQUEST     0x01
#define SRB_PNP_FLAGS_ADAPTER_REQUEST       0x01
#define SRB_IOCTL_FLAGS_ADAPTER_REQUEST     0x01
#define SRB_PROTOCOL_FLAGS_ADAPTER_REQUEST  0x01

#if (NTDDI_VERSION >= NTDDI_WIN8)

//
// Define alignment requirements for variable length components in extended
// SRB. For Win64, need to ensure all variable length components are 8 bytes
// align so the pointer fields within the variable length components are 8
// bytes align. Also define pointer field alignment.
//
#if defined(_WIN64) || defined(_M_ALPHA)
#define SRB_ALIGN           DECLSPEC_ALIGN(8)
#define POINTER_ALIGN       DECLSPEC_ALIGN(8)
#else
#define SRB_ALIGN
#define POINTER_ALIGN
#endif

// SRB extended data types.


typedef enum _SRBEXDATATYPE {
    SrbExDataTypeUnknown = 0,
    SrbExDataTypeBidirectional,
    SrbExDataTypeScsiCdb16 = 0x40,
    SrbExDataTypeScsiCdb32,
    SrbExDataTypeScsiCdbVar,
    SrbExDataTypeWmi = 0x60,
    SrbExDataTypePower,
    SrbExDataTypePnP,
    SrbExDataTypeIoInfo = 0x80,
    SrbExDataTypeMSReservedStart = 0xf0000000,
    SrbExDataTypeReserved = 0xffffffff
} SRBEXDATATYPE, *PSRBEXDATATYPE;

//
// Generic structure definition for accessing any SRB extended data. All SRB
// extended data must begin with a Type and Length field.
//
typedef struct SRB_ALIGN _SRBEX_DATA {
    SRBEXDATATYPE Type;
    ULONG Length;
    _Field_size_bytes_(Length) UCHAR Data[ANYSIZE_ARRAY];
} SRBEX_DATA, *PSRBEX_DATA;

//
// SRB extended data for bi-directional commands. For these SRBs, it will have both a
// SRB extended data (e.g. SRBEX_DATA_SCSI_CDB*) and a SRBEX_DATA_BIDIRECTIONAL.
//
#define SRBEX_DATA_BIDIRECTIONAL_LENGTH ((2 * sizeof(ULONG)) + sizeof(PVOID))

typedef struct SRB_ALIGN _SRBEX_DATA_BIDIRECTIONAL {
    _Field_range_(SrbExDataTypeBidirectional, SrbExDataTypeBidirectional)
    SRBEXDATATYPE Type;
    _Field_range_(SRBEX_DATA_BIDIRECTIONAL_LENGTH, SRBEX_DATA_BIDIRECTIONAL_LENGTH)
    ULONG Length;
    ULONG DataInTransferLength;
    // Reserved for future to support 64-bit DataTransferInLength
    ULONG Reserved1;
    _Field_size_bytes_full_(DataInTransferLength)
    PVOID POINTER_ALIGN DataInBuffer;
} SRBEX_DATA_BIDIRECTIONAL, *PSRBEX_DATA_BIDIRECTIONAL;

// SRB_FUNCTION_EXECUTE_SCSI for up to 16 byte CDBs
#define SRBEX_DATA_SCSI_CDB16_LENGTH ((20 * sizeof(UCHAR)) + sizeof(ULONG) + sizeof(PVOID))

typedef struct SRB_ALIGN _SRBEX_DATA_SCSI_CDB16 {
    _Field_range_(SrbExDataTypeScsiCdb16, SrbExDataTypeScsiCdb16)
    SRBEXDATATYPE Type;
    _Field_range_(SRBEX_DATA_SCSI_CDB16_LENGTH, SRBEX_DATA_SCSI_CDB16_LENGTH)
    ULONG Length;
    UCHAR ScsiStatus;
    UCHAR SenseInfoBufferLength;
    UCHAR CdbLength;
    UCHAR Reserved;
    ULONG Reserved1;
    _Field_size_bytes_full_(SenseInfoBufferLength)
    PVOID POINTER_ALIGN SenseInfoBuffer;
    UCHAR POINTER_ALIGN Cdb[16];
} SRBEX_DATA_SCSI_CDB16, *PSRBEX_DATA_SCSI_CDB16;

// SRB_FUNCTION_EXECUTE_SCSI for up to 32 byte CDBs
#define SRBEX_DATA_SCSI_CDB32_LENGTH ((36 * sizeof(UCHAR)) + sizeof(ULONG) + sizeof(PVOID))

typedef struct SRB_ALIGN _SRBEX_DATA_SCSI_CDB32 {
    _Field_range_(SrbExDataTypeScsiCdb32, SrbExDataTypeScsiCdb32)
    SRBEXDATATYPE Type;
    _Field_range_(SRBEX_DATA_SCSI_CDB32_LENGTH, SRBEX_DATA_SCSI_CDB32_LENGTH)
    ULONG Length;
    UCHAR ScsiStatus;
    UCHAR SenseInfoBufferLength;
    UCHAR CdbLength;
    UCHAR Reserved;
    ULONG Reserved1;
    _Field_size_bytes_full_(SenseInfoBufferLength)
    PVOID POINTER_ALIGN SenseInfoBuffer;
    UCHAR POINTER_ALIGN Cdb[32];
} SRBEX_DATA_SCSI_CDB32, *PSRBEX_DATA_SCSI_CDB32;

// SRB_FUNCTION_EXECUTE_SCSI for variable length CDBs
#define SRBEX_DATA_SCSI_CDB_VAR_LENGTH_MIN ((4 * sizeof(UCHAR)) + (3 * sizeof(ULONG)) + sizeof(PVOID))

//
// NOTE - may want to cap it instead of using ULONG_MAX. Max is 65KB
// currently (XCDB)
//
#define SRBEX_DATA_SCSI_CDB_VAR_LENGTH_MAX 0xffffffffUL

typedef struct SRB_ALIGN _SRBEX_DATA_SCSI_CDB_VAR {
    _Field_range_(SrbExDataTypeScsiCdbVar, SrbExDataTypeScsiCdbVar)
    SRBEXDATATYPE Type;
    _Field_range_(SRBEX_DATA_SCSI_CDB_VAR_LENGTH_MIN, SRBEX_DATA_SCSI_CDB_VAR_LENGTH_MAX)
    ULONG Length;
    UCHAR ScsiStatus;
    UCHAR SenseInfoBufferLength;
    UCHAR Reserved[2];
    ULONG CdbLength;
    ULONG Reserved1[2];
    _Field_size_bytes_full_(SenseInfoBufferLength)
    PVOID POINTER_ALIGN SenseInfoBuffer;
    _Field_size_bytes_full_(CdbLength)
    UCHAR POINTER_ALIGN Cdb[ANYSIZE_ARRAY];
} SRBEX_DATA_SCSI_CDB_VAR, *PSRBEX_DATA_SCSI_CDB_VAR;

// Used by SRB_FUNCTION_WMI
#define SRBEX_DATA_WMI_LENGTH ((4 * sizeof(UCHAR)) + sizeof(ULONG) + sizeof(PVOID))

typedef struct SRB_ALIGN _SRBEX_DATA_WMI {
    _Field_range_(SrbExDataTypeWmi, SrbExDataTypeWmi)
    SRBEXDATATYPE Type;
    _Field_range_(SRBEX_DATA_WMI_LENGTH, SRBEX_DATA_WMI_LENGTH)
    ULONG Length;
    UCHAR WMISubFunction;
    UCHAR WMIFlags;
    UCHAR Reserved[2];
    ULONG Reserved1;
    PVOID POINTER_ALIGN DataPath;
} SRBEX_DATA_WMI, *PSRBEX_DATA_WMI;

// Used by SRB_FUNCTION_POWER
#define SRBEX_DATA_POWER_LENGTH ((4 * sizeof(UCHAR)) + sizeof(STOR_DEVICE_POWER_STATE) + sizeof(STOR_POWER_ACTION))

typedef struct SRB_ALIGN _SRBEX_DATA_POWER {
    _Field_range_(SrbExDataTypePower, SrbExDataTypePower)
    SRBEXDATATYPE Type;
    _Field_range_(SRBEX_DATA_POWER_LENGTH, SRBEX_DATA_POWER_LENGTH)
    ULONG Length;
    UCHAR SrbPowerFlags;
    UCHAR Reserved[3];
    STOR_DEVICE_POWER_STATE DevicePowerState;
    STOR_POWER_ACTION PowerAction;
} SRBEX_DATA_POWER, *PSRBEX_DATA_POWER;

// Used by SRB_FUNCTION_PNP
#define SRBEX_DATA_PNP_LENGTH ((4 * sizeof(UCHAR)) + sizeof(STOR_PNP_ACTION) + (2 * sizeof(ULONG)))

typedef struct SRB_ALIGN _SRBEX_DATA_PNP {
    _Field_range_(SrbExDataTypePnP, SrbExDataTypePnP)
    SRBEXDATATYPE Type;
    _Field_range_(SRBEX_DATA_PNP_LENGTH, SRBEX_DATA_PNP_LENGTH)
    ULONG Length;
    UCHAR PnPSubFunction;
    UCHAR Reserved[3];
    STOR_PNP_ACTION PnPAction;
    ULONG SrbPnPFlags;
    ULONG Reserved1;
} SRBEX_DATA_PNP, *PSRBEX_DATA_PNP;

// Use in read/write requests to provide additional info about the IO.
#define SRBEX_DATA_IO_INFO_LENGTH ((5 * sizeof(ULONG)) + (4 * sizeof(UCHAR)))

// Define bit flags used in Flags field
#define REQUEST_INFO_NO_CACHE_FLAG                  0x00000001
#define REQUEST_INFO_PAGING_IO_FLAG                 0x00000002
#define REQUEST_INFO_SEQUENTIAL_IO_FLAG             0x00000004
#define REQUEST_INFO_TEMPORARY_FLAG                 0x00000008
#define REQUEST_INFO_WRITE_THROUGH_FLAG             0x00000010
#define REQUEST_INFO_HYBRID_WRITE_THROUGH_FLAG      0x00000020

#define REQUEST_INFO_VALID_CACHEPRIORITY_FLAG       0x80000000

typedef struct SRB_ALIGN _SRBEX_DATA_IO_INFO {
    _Field_range_(SrbExDataTypeIoInfo, SrbExDataTypeIoInfo)
    SRBEXDATATYPE Type;
    _Field_range_(SRBEX_DATA_IO_INFO_LENGTH, SRBEX_DATA_IO_INFO_LENGTH)
    ULONG Length;
    ULONG Flags;
    ULONG Key;
    ULONG RWLength;
    BOOLEAN IsWriteRequest;
    UCHAR CachePriority;
    UCHAR Reserved[2];
    ULONG Reserved1[2];
} SRBEX_DATA_IO_INFO, *PSRBEX_DATA_IO_INFO;


// SRB signature - "SRBX" in ASCII
#define SRB_SIGNATURE 0x53524258

// STORAGE_REQUEST_BLOCK structure version.
#define STORAGE_REQUEST_BLOCK_VERSION_1    0x1


typedef struct SRB_ALIGN _STORAGE_REQUEST_BLOCK_HEADER {
    USHORT Length;
    _Field_range_(SRB_FUNCTION_STORAGE_REQUEST_BLOCK, SRB_FUNCTION_STORAGE_REQUEST_BLOCK)
    UCHAR Function;
    UCHAR SrbStatus;
} STORAGE_REQUEST_BLOCK_HEADER, *PSTORAGE_REQUEST_BLOCK_HEADER;



// STORAGE_REQUEST_BLOCK is the SRB used for SRB_FUNCTION_STORAGE_REQUEST_BLOCK
typedef _Struct_size_bytes_(SrbLength) struct SRB_ALIGN _STORAGE_REQUEST_BLOCK {
    //
    // First 8 bytes of this structure is commom between all SRBs and should
    // have the same meaning as SCSI_REQEUST_BLOCK. To avoid compatibility
    // issues, bytes 4 to 7 will not be used and should be set to 0. These
    // bytes corresponds to the ScsiStatus/WMiSubFunction/SrbPowerFlags/
    // PnPSubFunction, PathId, TargetId and Lun fields in the existing SRBs
    // (e.g. SCSI_REQUEST_BLOCK, SCSI_WMI_REQUEST_BLOCK, etc).
    //
    USHORT Length;
    _Field_range_(SRB_FUNCTION_STORAGE_REQUEST_BLOCK, SRB_FUNCTION_STORAGE_REQUEST_BLOCK)
    UCHAR Function;
    UCHAR SrbStatus;
    UCHAR ReservedUchar[4];

    //
    // General SRB fields. The first 6 fields should not changed between
    // versions of this structure.
    //

    // Signature field
    _Field_range_(SRB_SIGNATURE, SRB_SIGNATURE)
    ULONG Signature;

    // Version field to denote version of STORAGE_REQUEST_BLOCK structure.
    _Field_range_(STORAGE_REQUEST_BLOCK_VERSION_1, STORAGE_REQUEST_BLOCK_VERSION_1)
    ULONG Version;

    // Size of this structure including address and SRB extended data.
    ULONG SrbLength;

    ULONG SrbFunction;
    ULONG SrbFlags;

    // Reserved for future use to expand SrbStatus to 32-bit
    ULONG ReservedUlong;

    // Equivalent to QueueTag or Task Tag in SCSI
    ULONG RequestTag;

    // Equivalent to Task Priority in SCSI
    USHORT RequestPriority;

    // Equivalent to QueueAction or Task Attributes in SCSI.
    USHORT RequestAttribute;

    // Request timeout value
    ULONG TimeOutValue;

    //
    // Used to store system failure status information in
    // SrbStatus failure conditions (e.g. SRB_STATUS_INTERNAL_ERROR).
    //
    ULONG SystemStatus;

    //
    // Guard page that should always be zero. Use to guard against misbehaving
    // storage filter drivers and to have defined behavior for drivers that misinterpret
    // new SRB format for old on 32-bit platforms.
    //
    ULONG ZeroGuard1;

    //
    // Offset to address from beginning of structure. Address should follow
    // immediately after STORAGE_REQUEST_BLOCK structure and be a STOR_ADDRESS
    // type address.
    //
    _Field_range_(sizeof(STORAGE_REQUEST_BLOCK), SrbLength - sizeof(STOR_ADDRESS))
    ULONG AddressOffset;

    // Number of SRB extended data
    ULONG NumSrbExData;

    // Data transfer length
    ULONG DataTransferLength;

    // Data buffer
    _Field_size_bytes_full_(DataTransferLength)
    PVOID POINTER_ALIGN DataBuffer;

    //
    // Guard page that should always be zero. Use to guard against misbehaving
    // storage filter drivers and to have defined behavior for drivers that misinterpret
    // new SRB format for old on 64-bit platforms.
    //
    PVOID POINTER_ALIGN ZeroGuard2;

    // Original IRP containing the request
    PVOID POINTER_ALIGN OriginalRequest;

    // Class driver's per-request context
    PVOID POINTER_ALIGN ClassContext;

    // Port driver's per-request context
    PVOID POINTER_ALIGN PortContext;

    // Miniport's per-request context
    PVOID POINTER_ALIGN MiniportContext;

    struct _STORAGE_REQUEST_BLOCK POINTER_ALIGN *NextSrb;

    //
    // Offsets to SRB extended data from beginning of structure.
    // Should follow Address field content and be a SRBEX_DATA type extension.
    //
    _At_buffer_(SrbExDataOffset, _Iter_, NumSrbExData, _Field_range_(0, SrbLength - sizeof(SRBEX_DATA)))
    _Field_size_(NumSrbExData)
    ULONG SrbExDataOffset[ANYSIZE_ARRAY];

} STORAGE_REQUEST_BLOCK, *PSTORAGE_REQUEST_BLOCK;

// Define SRB types supported
#define SRB_TYPE_SCSI_REQUEST_BLOCK         0
#define SRB_TYPE_STORAGE_REQUEST_BLOCK      1

// Define address type supported
#define STORAGE_ADDRESS_TYPE_BTL8        0


#endif //(NTDDI_VERSION >= NTDDI_WIN8)


#ifndef _NTDDK_
#define SCSIPORT_API DECLSPEC_IMPORT
#else
#define SCSIPORT_API
#endif


SCSIPORT_API
VOID
ScsiDebugPrint(
    ULONG DebugPrintLevel,
    PCCHAR DebugMessage,
    ...
    );


// begin_storport

//
// Calculate the byte offset of a field in a structure of type type.
//

#ifndef FIELD_OFFSET
#define FIELD_OFFSET(type, field)    ((LONG)(LONG_PTR)&(((type *)0)->field))
#endif

//
// Calculate the size of a field in a structure of type type, without
// knowing or stating the type of the field.
//

#ifndef RTL_FIELD_SIZE
#define RTL_FIELD_SIZE(type, field) (sizeof(((type *)0)->field))
#endif

//
// Calculate the size of a structure of type type up through and
// including a field.
//

#ifndef RTL_SIZEOF_THROUGH_FIELD
#define RTL_SIZEOF_THROUGH_FIELD(type, field) \
    (FIELD_OFFSET(type, field) + RTL_FIELD_SIZE(type, field))
#endif

//
//  RTL_CONTAINS_FIELD usage:
//
//      if (RTL_CONTAINS_FIELD(pBlock, pBlock->cbSize, dwMumble)) { // safe to use pBlock->dwMumble
//

#ifndef RTL_CONTAINS_FIELD
#define RTL_CONTAINS_FIELD(Struct, Size, Field) \
    ( (((PCHAR)(&(Struct)->Field)) + sizeof((Struct)->Field)) <= (((PCHAR)(Struct))+(Size)) )
#endif

#ifndef RtlZeroMemory
#define RtlZeroMemory(Destination,Length) memset((Destination),0,(Length))
#endif

//
// Command Descriptor Block. Passed by SCSI controller chip over the SCSI bus
//

#pragma pack(push, cdb, 1)
typedef union _CDB {

    //
    // Generic 6-Byte CDB
    //

    struct _CDB6GENERIC {
       UCHAR  OperationCode;
       UCHAR  Immediate : 1;
       UCHAR  CommandUniqueBits : 4;
       UCHAR  LogicalUnitNumber : 3;
       UCHAR  CommandUniqueBytes[3];
       UCHAR  Link : 1;
       UCHAR  Flag : 1;
       UCHAR  Reserved : 4;
       UCHAR  VendorUnique : 2;
    } CDB6GENERIC;

    //
    // Standard 6-byte CDB
    //

    struct _CDB6READWRITE {
        UCHAR OperationCode;    // 0x08, 0x0A - SCSIOP_READ, SCSIOP_WRITE
        UCHAR LogicalBlockMsb1 : 5;
        UCHAR LogicalUnitNumber : 3;
        UCHAR LogicalBlockMsb0;
        UCHAR LogicalBlockLsb;
        UCHAR TransferBlocks;
        UCHAR Control;
    } CDB6READWRITE;

    //
    // SCSI-1 Inquiry CDB
    //

    struct _CDB6INQUIRY {
        UCHAR OperationCode;    // 0x12 - SCSIOP_INQUIRY
        UCHAR Reserved1 : 5;
        UCHAR LogicalUnitNumber : 3;
        UCHAR PageCode;
        UCHAR IReserved;
        UCHAR AllocationLength;
        UCHAR Control;
    } CDB6INQUIRY;

    //
    // SCSI-3 Inquiry CDB
    //

    struct _CDB6INQUIRY3 {
        UCHAR OperationCode;    // 0x12 - SCSIOP_INQUIRY
        UCHAR EnableVitalProductData : 1;
        UCHAR CommandSupportData : 1;
        UCHAR Reserved1 : 6;
        UCHAR PageCode;
        UCHAR Reserved2;
        UCHAR AllocationLength;
        UCHAR Control;
    } CDB6INQUIRY3;

    struct _CDB6VERIFY {
        UCHAR OperationCode;    // 0x13 - SCSIOP_VERIFY
        UCHAR Fixed : 1;
        UCHAR ByteCompare : 1;
        UCHAR Immediate : 1;
        UCHAR Reserved : 2;
        UCHAR LogicalUnitNumber : 3;
        UCHAR VerificationLength[3];
        UCHAR Control;
    } CDB6VERIFY;

    struct _RECEIVE_DIAGNOSTIC {
        UCHAR OperationCode;    // 0x1C - SCSIOP_RECEIVE_DIAGNOSTIC
        UCHAR PageCodeValid : 1;
        UCHAR Reserved : 7;
        UCHAR PageCode;
        UCHAR AllocationLength[2];
        UCHAR Control;
    } RECEIVE_DIAGNOSTIC;

    struct _SEND_DIAGNOSTIC {
        UCHAR OperationCode;    // 0x1D - SCSIOP_SEND_DIAGNOSTIC
        UCHAR UnitOffline : 1;
        UCHAR DeviceOffline : 1;
        UCHAR SelfTest : 1;
        UCHAR Reserved1 : 1;
        UCHAR PageFormat : 1;
        UCHAR SelfTestCode: 3;
        UCHAR Reserved2;
        UCHAR ParameterListLength[2];
        UCHAR Control;
    } SEND_DIAGNOSTIC;

    //
    // SCSI Format CDB
    //

    struct _CDB6FORMAT {
        UCHAR OperationCode;    // 0x04 - SCSIOP_FORMAT_UNIT
        UCHAR FormatControl : 5;
        UCHAR LogicalUnitNumber : 3;
        UCHAR FReserved1;
        UCHAR InterleaveMsb;
        UCHAR InterleaveLsb;
        UCHAR FReserved2;
    } CDB6FORMAT;

    //
    // Standard 10-byte CDB

    struct _CDB10 {
        UCHAR OperationCode;
        UCHAR RelativeAddress : 1;
        UCHAR Reserved1 : 2;
        UCHAR ForceUnitAccess : 1;
        UCHAR DisablePageOut : 1;
        UCHAR LogicalUnitNumber : 3;
        UCHAR LogicalBlockByte0;
        UCHAR LogicalBlockByte1;
        UCHAR LogicalBlockByte2;
        UCHAR LogicalBlockByte3;
        UCHAR Reserved2;
        UCHAR TransferBlocksMsb;
        UCHAR TransferBlocksLsb;
        UCHAR Control;
    } CDB10;

    //
    // Standard 12-byte CDB
    //

    struct _CDB12 {
        UCHAR OperationCode;
        UCHAR RelativeAddress : 1;
        UCHAR Reserved1 : 2;
        UCHAR ForceUnitAccess : 1;
        UCHAR DisablePageOut : 1;
        UCHAR LogicalUnitNumber : 3;
        UCHAR LogicalBlock[4];
        UCHAR TransferLength[4];
        UCHAR Reserved2;
        UCHAR Control;
    } CDB12;



    //
    // Standard 16-byte CDB
    //

    struct _CDB16 {
        UCHAR OperationCode;
        UCHAR Reserved1        : 3;
        UCHAR ForceUnitAccess  : 1;
        UCHAR DisablePageOut   : 1;
        UCHAR Protection       : 3;
        UCHAR LogicalBlock[8];
        UCHAR TransferLength[4];
        UCHAR Reserved2;
        UCHAR Control;
    } CDB16;

    //
    // Security-related commands from SPC-4
    //

    struct _SECURITY_PROTOCOL_IN {

        UCHAR OperationCode;
        UCHAR SecurityProtocol;
        UCHAR SecurityProtocolSpecific[2];
        UCHAR Reserved1 : 7;
        UCHAR INC_512 : 1;
        UCHAR Reserved2;
        UCHAR AllocationLength[4];
        UCHAR Reserved3;
        UCHAR Control;

    } SECURITY_PROTOCOL_IN;

    struct _SECURITY_PROTOCOL_OUT {

        UCHAR OperationCode;
        UCHAR SecurityProtocol;
        UCHAR SecurityProtocolSpecific[2];
        UCHAR Reserved1 : 7;
        UCHAR INC_512 : 1;
        UCHAR Reserved2;
        UCHAR AllocationLength[4];
        UCHAR Reserved3;
        UCHAR Control;

    } SECURITY_PROTOCOL_OUT;

    //
    // Block Device UNMAP CDB
    //

    struct _UNMAP {
        UCHAR OperationCode;    // 0x42 - SCSIOP_UNMAP
        UCHAR Anchor        : 1;
        UCHAR Reserved1     : 7;
        UCHAR Reserved2[4];
        UCHAR GroupNumber   : 5;
        UCHAR Reserved3     : 3;
        UCHAR AllocationLength[2];
        UCHAR Control;
    } UNMAP;

    //
    // Block Device SANITIZE CDB (SBC-4)
    //

    struct _SANITIZE {
        UCHAR OperationCode;    // 0x48 - SCSIOP_SANITIZE
        UCHAR ServiceAction : 5;
        UCHAR AUSE          : 1;
        UCHAR Reserved1     : 1;
        UCHAR Immediate     : 1;
        UCHAR Reserved2[5];
        UCHAR ParameterListLength[2];
        UCHAR Control;
    } SANITIZE;

    //
    // CD Rom Audio CDBs
    //

    struct _PAUSE_RESUME {
        UCHAR OperationCode;    // 0x4B - SCSIOP_PAUSE_RESUME
        UCHAR Reserved1 : 5;
        UCHAR LogicalUnitNumber : 3;
        UCHAR Reserved2[6];
        UCHAR Action;
        UCHAR Control;
    } PAUSE_RESUME;

    //
    // Read Table of Contents
    //

    struct _READ_TOC {
        UCHAR OperationCode;    // 0x43 - SCSIOP_READ_TOC
        UCHAR Reserved0 : 1;
        UCHAR Msf : 1;
        UCHAR Reserved1 : 3;
        UCHAR LogicalUnitNumber : 3;
        UCHAR Format2 : 4;
        UCHAR Reserved2 : 4;
        UCHAR Reserved3[3];
        UCHAR StartingTrack;
        UCHAR AllocationLength[2];
        UCHAR Control : 6;
        UCHAR Format : 2;
    } READ_TOC;

    struct _READ_DISK_INFORMATION {
        UCHAR OperationCode;    // 0x51 - SCSIOP_READ_DISC_INFORMATION
        UCHAR Reserved1 : 5;
        UCHAR Lun : 3;
        UCHAR Reserved2[5];
        UCHAR AllocationLength[2];
        UCHAR Control;
    } READ_DISK_INFORMATION, READ_DISC_INFORMATION;

    struct _READ_TRACK_INFORMATION {
        UCHAR OperationCode;    // 0x52 - SCSIOP_READ_TRACK_INFORMATION
        UCHAR Track : 2;
        UCHAR Reserved4 : 3;
        UCHAR Lun : 3;
        UCHAR BlockAddress[4];  // or Track Number
        UCHAR Reserved3;
        UCHAR AllocationLength[2];
        UCHAR Control;
    } READ_TRACK_INFORMATION;

    struct _RESERVE_TRACK_RZONE {
        UCHAR OperationCode;    // 0x53 - SCSIOP_RESERVE_TRACK_RZONE
        UCHAR Reserved1[4];
        UCHAR ReservationSize[4];
        UCHAR Control;
    } RESERVE_TRACK_RZONE;

    struct _SEND_OPC_INFORMATION {
        UCHAR OperationCode;    // 0x54 - SCSIOP_SEND_OPC_INFORMATION
        UCHAR DoOpc : 1;        // perform OPC
        UCHAR Reserved1 : 7;
        UCHAR Exclude0 : 1;     // exclude layer 0
        UCHAR Exclude1 : 1;     // exclude layer 1
        UCHAR Reserved2 : 6;
        UCHAR Reserved3[4];
        UCHAR ParameterListLength[2];
        UCHAR Reserved4;
    } SEND_OPC_INFORMATION;

    struct _REPAIR_TRACK {
        UCHAR OperationCode;    // 0x58 - SCSIOP_REPAIR_TRACK
        UCHAR Immediate : 1;
        UCHAR Reserved1 : 7;
        UCHAR Reserved2[2];
        UCHAR TrackNumber[2];
        UCHAR Reserved3[3];
        UCHAR Control;
    } REPAIR_TRACK;

    struct _CLOSE_TRACK {
        UCHAR OperationCode;    // 0x5B - SCSIOP_CLOSE_TRACK_SESSION
        UCHAR Immediate : 1;
        UCHAR Reserved1 : 7;
        UCHAR Track     : 1;
        UCHAR Session   : 1;
        UCHAR Reserved2 : 6;
        UCHAR Reserved3;
        UCHAR TrackNumber[2];
        UCHAR Reserved4[3];
        UCHAR Control;
    } CLOSE_TRACK;

    struct _READ_BUFFER_CAPACITY {
        UCHAR OperationCode;    // 0x5C - SCSIOP_READ_BUFFER_CAPACITY
        UCHAR BlockInfo : 1;
        UCHAR Reserved1 : 7;
        UCHAR Reserved2[5];
        UCHAR AllocationLength[2];
        UCHAR Control;
    } READ_BUFFER_CAPACITY;

    struct _SEND_CUE_SHEET {
        UCHAR OperationCode;    // 0x5D - SCSIOP_SEND_CUE_SHEET
        UCHAR Reserved[5];
        UCHAR CueSheetSize[3];
        UCHAR Control;
    } SEND_CUE_SHEET;

    struct _READ_HEADER {
        UCHAR OperationCode;    // 0x44 - SCSIOP_READ_HEADER
        UCHAR Reserved1 : 1;
        UCHAR Msf : 1;
        UCHAR Reserved2 : 3;
        UCHAR Lun : 3;
        UCHAR LogicalBlockAddress[4];
        UCHAR Reserved3;
        UCHAR AllocationLength[2];
        UCHAR Control;
    } READ_HEADER;

    struct _PLAY_AUDIO {
        UCHAR OperationCode;    // 0x45 - SCSIOP_PLAY_AUDIO
        UCHAR Reserved1 : 5;
        UCHAR LogicalUnitNumber : 3;
        UCHAR StartingBlockAddress[4];
        UCHAR Reserved2;
        UCHAR PlayLength[2];
        UCHAR Control;
    } PLAY_AUDIO;

    struct _PLAY_AUDIO_MSF {
        UCHAR OperationCode;    // 0x47 - SCSIOP_PLAY_AUDIO_MSF
        UCHAR Reserved1 : 5;
        UCHAR LogicalUnitNumber : 3;
        UCHAR Reserved2;
        UCHAR StartingM;
        UCHAR StartingS;
        UCHAR StartingF;
        UCHAR EndingM;
        UCHAR EndingS;
        UCHAR EndingF;
        UCHAR Control;
    } PLAY_AUDIO_MSF;

    struct _BLANK_MEDIA {
        UCHAR OperationCode;    // 0xA1 - SCSIOP_BLANK
        UCHAR BlankType : 3;
        UCHAR Reserved1 : 1;
        UCHAR Immediate : 1;
        UCHAR Reserved2 : 3;
        UCHAR AddressOrTrack[4];
        UCHAR Reserved3[5];
        UCHAR Control;
    } BLANK_MEDIA;

    struct _PLAY_CD {
        UCHAR OperationCode;    // 0xBC - SCSIOP_PLAY_CD
        UCHAR Reserved1 : 1;
        UCHAR CMSF : 1;         // LBA = 0, MSF = 1
        UCHAR ExpectedSectorType : 3;
        UCHAR Lun : 3;

        union {
            struct _LBA {
                UCHAR StartingBlockAddress[4];
                UCHAR PlayLength[4];
            } LBA;

            struct _MSF {
                UCHAR Reserved1;
                UCHAR StartingM;
                UCHAR StartingS;
                UCHAR StartingF;
                UCHAR EndingM;
                UCHAR EndingS;
                UCHAR EndingF;
                UCHAR Reserved2;
            } MSF;
        };

        UCHAR Audio : 1;
        UCHAR Composite : 1;
        UCHAR Port1 : 1;
        UCHAR Port2 : 1;
        UCHAR Reserved2 : 3;
        UCHAR Speed : 1;
        UCHAR Control;
    } PLAY_CD;

    struct _SCAN_CD {
        UCHAR OperationCode;    // 0xBA - SCSIOP_SCAN_CD
        UCHAR RelativeAddress : 1;
        UCHAR Reserved1 : 3;
        UCHAR Direct : 1;
        UCHAR Lun : 3;
        UCHAR StartingAddress[4];
        UCHAR Reserved2[3];
        UCHAR Reserved3 : 6;
        UCHAR Type : 2;
        UCHAR Reserved4;
        UCHAR Control;
    } SCAN_CD;

    struct _STOP_PLAY_SCAN {
        UCHAR OperationCode;    // 0x4E - SCSIOP_STOP_PLAY_SCAN
        UCHAR Reserved1 : 5;
        UCHAR Lun : 3;
        UCHAR Reserved2[7];
        UCHAR Control;
    } STOP_PLAY_SCAN;


    //
    // Read SubChannel Data
    //

    struct _SUBCHANNEL {
        UCHAR OperationCode;    // 0x42 - SCSIOP_READ_SUB_CHANNEL
        UCHAR Reserved0 : 1;
        UCHAR Msf : 1;
        UCHAR Reserved1 : 3;
        UCHAR LogicalUnitNumber : 3;
        UCHAR Reserved2 : 6;
        UCHAR SubQ : 1;
        UCHAR Reserved3 : 1;
        UCHAR Format;
        UCHAR Reserved4[2];
        UCHAR TrackNumber;
        UCHAR AllocationLength[2];
        UCHAR Control;
    } SUBCHANNEL;

    //
    // Read CD. Used by Atapi for raw sector reads.
    //

    struct _READ_CD {
        UCHAR OperationCode;    // 0xBE - SCSIOP_READ_CD
        UCHAR RelativeAddress : 1;
        UCHAR Reserved0 : 1;
        UCHAR ExpectedSectorType : 3;
        UCHAR Lun : 3;
        UCHAR StartingLBA[4];
        UCHAR TransferBlocks[3];
        UCHAR Reserved2 : 1;
        UCHAR ErrorFlags : 2;
        UCHAR IncludeEDC : 1;
        UCHAR IncludeUserData : 1;
        UCHAR HeaderCode : 2;
        UCHAR IncludeSyncData : 1;
        UCHAR SubChannelSelection : 3;
        UCHAR Reserved3 : 5;
        UCHAR Control;
    } READ_CD;

    struct _READ_CD_MSF {
        UCHAR OperationCode;    // 0xB9 - SCSIOP_READ_CD_MSF
        UCHAR RelativeAddress : 1;
        UCHAR Reserved1 : 1;
        UCHAR ExpectedSectorType : 3;
        UCHAR Lun : 3;
        UCHAR Reserved2;
        UCHAR StartingM;
        UCHAR StartingS;
        UCHAR StartingF;
        UCHAR EndingM;
        UCHAR EndingS;
        UCHAR EndingF;
        UCHAR Reserved4 : 1;
        UCHAR ErrorFlags : 2;
        UCHAR IncludeEDC : 1;
        UCHAR IncludeUserData : 1;
        UCHAR HeaderCode : 2;
        UCHAR IncludeSyncData : 1;
        UCHAR SubChannelSelection : 3;
        UCHAR Reserved5 : 5;
        UCHAR Control;
    } READ_CD_MSF;

    //
    // Plextor Read CD-DA
    //

    struct _PLXTR_READ_CDDA {
        UCHAR OperationCode;    // Unknown -- vendor-unique?
        UCHAR Reserved0 : 5;
        UCHAR LogicalUnitNumber :3;
        UCHAR LogicalBlockByte0;
        UCHAR LogicalBlockByte1;
        UCHAR LogicalBlockByte2;
        UCHAR LogicalBlockByte3;
        UCHAR TransferBlockByte0;
        UCHAR TransferBlockByte1;
        UCHAR TransferBlockByte2;
        UCHAR TransferBlockByte3;
        UCHAR SubCode;
        UCHAR Control;
    } PLXTR_READ_CDDA;

    //
    // NEC Read CD-DA
    //

    struct _NEC_READ_CDDA {
        UCHAR OperationCode;    // Unknown -- vendor-unique?
        UCHAR Reserved0;
        UCHAR LogicalBlockByte0;
        UCHAR LogicalBlockByte1;
        UCHAR LogicalBlockByte2;
        UCHAR LogicalBlockByte3;
        UCHAR Reserved1;
        UCHAR TransferBlockByte0;
        UCHAR TransferBlockByte1;
        UCHAR Control;
    } NEC_READ_CDDA;

    //
    // Mode sense
    //

#if (NTDDI_VERSION >= NTDDI_WIN8)
    struct _MODE_SENSE {
        UCHAR OperationCode;    // 0x1A - SCSIOP_MODE_SENSE
        UCHAR Reserved1 : 3;
        UCHAR Dbd : 1;
        UCHAR Reserved2 : 4;
        UCHAR PageCode : 6;
        UCHAR Pc : 2;
        UCHAR SubPageCode;
        UCHAR AllocationLength;
        UCHAR Control;
    } MODE_SENSE;

    struct _MODE_SENSE10 {
        UCHAR OperationCode;    // 0x5A - SCSIOP_MODE_SENSE10
        UCHAR Reserved1 : 3;
        UCHAR Dbd : 1;
        UCHAR LongLBAAccepted : 1;
        UCHAR Reserved2 : 3;
        UCHAR PageCode : 6;
        UCHAR Pc : 2;
        UCHAR SubPageCode;
        UCHAR Reserved3[3];
        UCHAR AllocationLength[2];
        UCHAR Control;
    } MODE_SENSE10;
#else
    struct _MODE_SENSE {
        UCHAR OperationCode;    // 0x1A - SCSIOP_MODE_SENSE
        UCHAR Reserved1 : 3;
        UCHAR Dbd : 1;
        UCHAR Reserved2 : 1;
        UCHAR LogicalUnitNumber : 3;
        UCHAR PageCode : 6;
        UCHAR Pc : 2;
        UCHAR Reserved3;
        UCHAR AllocationLength;
        UCHAR Control;
    } MODE_SENSE;

    struct _MODE_SENSE10 {
        UCHAR OperationCode;    // 0x5A - SCSIOP_MODE_SENSE10
        UCHAR Reserved1 : 3;
        UCHAR Dbd : 1;
        UCHAR Reserved2 : 1;
        UCHAR LogicalUnitNumber : 3;
        UCHAR PageCode : 6;
        UCHAR Pc : 2;
        UCHAR Reserved3[4];
        UCHAR AllocationLength[2];
        UCHAR Control;
    } MODE_SENSE10;
#endif

    //
    // Mode select
    //

    struct _MODE_SELECT {
        UCHAR OperationCode;    // 0x15 - SCSIOP_MODE_SELECT
        UCHAR SPBit : 1;
        UCHAR Reserved1 : 3;
        UCHAR PFBit : 1;
        UCHAR LogicalUnitNumber : 3;
        UCHAR Reserved2[2];
        UCHAR ParameterListLength;
        UCHAR Control;
    } MODE_SELECT;

    struct _MODE_SELECT10 {
        UCHAR OperationCode;    // 0x55 - SCSIOP_MODE_SELECT10
        UCHAR SPBit : 1;
        UCHAR Reserved1 : 3;
        UCHAR PFBit : 1;
        UCHAR LogicalUnitNumber : 3;
        UCHAR Reserved2[5];
        UCHAR ParameterListLength[2];
        UCHAR Control;
    } MODE_SELECT10;

    struct _LOCATE {
        UCHAR OperationCode;    // 0x2B - SCSIOP_LOCATE
        UCHAR Immediate : 1;
        UCHAR CPBit : 1;
        UCHAR BTBit : 1;
        UCHAR Reserved1 : 2;
        UCHAR LogicalUnitNumber : 3;
        UCHAR Reserved3;
        UCHAR LogicalBlockAddress[4];
        UCHAR Reserved4;
        UCHAR Partition;
        UCHAR Control;
    } LOCATE;

    struct _LOGSENSE {
        UCHAR OperationCode;    // 0x4D - SCSIOP_LOG_SENSE
        UCHAR SPBit : 1;
        UCHAR PPCBit : 1;
        UCHAR Reserved1 : 3;
        UCHAR LogicalUnitNumber : 3;
        UCHAR PageCode : 6;
        UCHAR PCBit : 2;
        union {
            UCHAR SubPageCode;
            UCHAR Reserved2;
        };
        UCHAR Reserved3;
        UCHAR ParameterPointer[2];
        UCHAR AllocationLength[2];
        UCHAR Control;
    } LOGSENSE;

    struct _LOGSELECT {
        UCHAR OperationCode;    // 0x4C - SCSIOP_LOG_SELECT
        UCHAR SPBit : 1;
        UCHAR PCRBit : 1;
        UCHAR Reserved1 : 3;
        UCHAR LogicalUnitNumber : 3;
        UCHAR Reserved : 6;
        UCHAR PCBit : 2;
        UCHAR Reserved2[4];
        UCHAR ParameterListLength[2];
        UCHAR Control;
    } LOGSELECT;

    struct _PRINT {
        UCHAR OperationCode;    // 0x0A - SCSIOP_PRINT
        UCHAR Reserved : 5;
        UCHAR LogicalUnitNumber : 3;
        UCHAR TransferLength[3];
        UCHAR Control;
    } PRINT;

    struct _SEEK {
        UCHAR OperationCode;    // 0x2B - SCSIOP_SEEK
        UCHAR Reserved1 : 5;
        UCHAR LogicalUnitNumber : 3;
        UCHAR LogicalBlockAddress[4];
        UCHAR Reserved2[3];
        UCHAR Control;
    } SEEK;

    struct _ERASE {
        UCHAR OperationCode;    // 0x19 - SCSIOP_ERASE
        UCHAR Long : 1;
        UCHAR Immediate : 1;
        UCHAR Reserved1 : 3;
        UCHAR LogicalUnitNumber : 3;
        UCHAR Reserved2[3];
        UCHAR Control;
    } ERASE;

    struct _START_STOP {
        UCHAR OperationCode;    // 0x1B - SCSIOP_START_STOP_UNIT
        UCHAR Immediate: 1;
        UCHAR Reserved1 : 4;
        UCHAR LogicalUnitNumber : 3;
        UCHAR Reserved2[2];
        UCHAR Start : 1;
        UCHAR LoadEject : 1;
        UCHAR Reserved3 : 6;
        UCHAR Control;
    } START_STOP;

    struct _MEDIA_REMOVAL {
        UCHAR OperationCode;    // 0x1E - SCSIOP_MEDIUM_REMOVAL
        UCHAR Reserved1 : 5;
        UCHAR LogicalUnitNumber : 3;
        UCHAR Reserved2[2];

        UCHAR Prevent : 1;
        UCHAR Persistant : 1;
        UCHAR Reserved3 : 6;

        UCHAR Control;
    } MEDIA_REMOVAL;

    //
    // Tape CDBs
    //

    struct _SEEK_BLOCK {
        UCHAR OperationCode;    // 0x0C - SCSIOP_SEEK_BLOCK
        UCHAR Immediate : 1;
        UCHAR Reserved1 : 7;
        UCHAR BlockAddress[3];
        UCHAR Link : 1;
        UCHAR Flag : 1;
        UCHAR Reserved2 : 4;
        UCHAR VendorUnique : 2;
    } SEEK_BLOCK;

    struct _REQUEST_BLOCK_ADDRESS {
        UCHAR OperationCode;    // 0x02 - SCSIOP_REQUEST_BLOCK_ADDR
        UCHAR Reserved1[3];
        UCHAR AllocationLength;
        UCHAR Link : 1;
        UCHAR Flag : 1;
        UCHAR Reserved2 : 4;
        UCHAR VendorUnique : 2;
    } REQUEST_BLOCK_ADDRESS;

    struct _PARTITION {
        UCHAR OperationCode;    // 0x0D - SCSIOP_PARTITION
        UCHAR Immediate : 1;
        UCHAR Sel: 1;
        UCHAR PartitionSelect : 6;
        UCHAR Reserved1[3];
        UCHAR Control;
    } PARTITION;

    struct _WRITE_TAPE_MARKS {
        UCHAR OperationCode;    // Unknown -- vendor-unique?
        UCHAR Immediate : 1;
        UCHAR WriteSetMarks: 1;
        UCHAR Reserved : 3;
        UCHAR LogicalUnitNumber : 3;
        UCHAR TransferLength[3];
        UCHAR Control;
    } WRITE_TAPE_MARKS;

    struct _SPACE_TAPE_MARKS {
        UCHAR OperationCode;    // Unknown -- vendor-unique?
        UCHAR Code : 3;
        UCHAR Reserved : 2;
        UCHAR LogicalUnitNumber : 3;
        UCHAR NumMarksMSB ;
        UCHAR NumMarks;
        UCHAR NumMarksLSB;
        union {
            UCHAR value;
            struct {
                UCHAR Link : 1;
                UCHAR Flag : 1;
                UCHAR Reserved : 4;
                UCHAR VendorUnique : 2;
            } Fields;
        } Byte6;
    } SPACE_TAPE_MARKS;

    //
    // Read tape position
    //

    struct _READ_POSITION {
        UCHAR Operation;        // 0x43 - SCSIOP_READ_POSITION
        UCHAR BlockType:1;
        UCHAR Reserved1:4;
        UCHAR Lun:3;
        UCHAR Reserved2[7];
        UCHAR Control;
    } READ_POSITION;

    //
    // ReadWrite for Tape
    //

    struct _CDB6READWRITETAPE {
        UCHAR OperationCode;    // Unknown -- vendor-unique?
        UCHAR VendorSpecific : 5;
        UCHAR Reserved : 3;
        UCHAR TransferLenMSB;
        UCHAR TransferLen;
        UCHAR TransferLenLSB;
        UCHAR Link : 1;
        UCHAR Flag : 1;
        UCHAR Reserved1 : 4;
        UCHAR VendorUnique : 2;
    } CDB6READWRITETAPE;

    //
    // Medium changer CDB's
    //

    struct _INIT_ELEMENT_STATUS {
        UCHAR OperationCode;    // 0x07 - SCSIOP_INIT_ELEMENT_STATUS
        UCHAR Reserved1 : 5;
        UCHAR LogicalUnitNubmer : 3;
        UCHAR Reserved2[3];
        UCHAR Reserved3 : 7;
        UCHAR NoBarCode : 1;
    } INIT_ELEMENT_STATUS;

    struct _INITIALIZE_ELEMENT_RANGE {
        UCHAR OperationCode;    // 0xE7 - SCSIOP_INIT_ELEMENT_RANGE
        UCHAR Range : 1;
        UCHAR Reserved1 : 4;
        UCHAR LogicalUnitNubmer : 3;
        UCHAR FirstElementAddress[2];
        UCHAR Reserved2[2];
        UCHAR NumberOfElements[2];
        UCHAR Reserved3;
        UCHAR Reserved4 : 7;
        UCHAR NoBarCode : 1;
    } INITIALIZE_ELEMENT_RANGE;

    struct _POSITION_TO_ELEMENT {
        UCHAR OperationCode;    // 0x2B - SCSIOP_POSITION_TO_ELEMENT
        UCHAR Reserved1 : 5;
        UCHAR LogicalUnitNumber : 3;
        UCHAR TransportElementAddress[2];
        UCHAR DestinationElementAddress[2];
        UCHAR Reserved2[2];
        UCHAR Flip : 1;
        UCHAR Reserved3 : 7;
        UCHAR Control;
    } POSITION_TO_ELEMENT;

    struct _MOVE_MEDIUM {
        UCHAR OperationCode;    // 0xA5 - SCSIOP_MOVE_MEDIUM
        UCHAR Reserved1 : 5;
        UCHAR LogicalUnitNumber : 3;
        UCHAR TransportElementAddress[2];
        UCHAR SourceElementAddress[2];
        UCHAR DestinationElementAddress[2];
        UCHAR Reserved2[2];
        UCHAR Flip : 1;
        UCHAR Reserved3 : 7;
        UCHAR Control;
    } MOVE_MEDIUM;

    struct _EXCHANGE_MEDIUM {
        UCHAR OperationCode;    // 0xA6 - SCSIOP_EXCHANGE_MEDIUM
        UCHAR Reserved1 : 5;
        UCHAR LogicalUnitNumber : 3;
        UCHAR TransportElementAddress[2];
        UCHAR SourceElementAddress[2];
        UCHAR Destination1ElementAddress[2];
        UCHAR Destination2ElementAddress[2];
        UCHAR Flip1 : 1;
        UCHAR Flip2 : 1;
        UCHAR Reserved3 : 6;
        UCHAR Control;
    } EXCHANGE_MEDIUM;

    struct _READ_ELEMENT_STATUS {
        UCHAR OperationCode;    // 0xB8 - SCSIOP_READ_ELEMENT_STATUS
        UCHAR ElementType : 4;
        UCHAR VolTag : 1;
        UCHAR LogicalUnitNumber : 3;
        UCHAR StartingElementAddress[2];
        UCHAR NumberOfElements[2];
        UCHAR Reserved1;
        UCHAR AllocationLength[3];
        UCHAR Reserved2;
        UCHAR Control;
    } READ_ELEMENT_STATUS;

    struct _SEND_VOLUME_TAG {
        UCHAR OperationCode;    // 0xB6 - SCSIOP_SEND_VOLUME_TAG
        UCHAR ElementType : 4;
        UCHAR Reserved1 : 1;
        UCHAR LogicalUnitNumber : 3;
        UCHAR StartingElementAddress[2];
        UCHAR Reserved2;
        UCHAR ActionCode : 5;
        UCHAR Reserved3 : 3;
        UCHAR Reserved4[2];
        UCHAR ParameterListLength[2];
        UCHAR Reserved5;
        UCHAR Control;
    } SEND_VOLUME_TAG;

    struct _REQUEST_VOLUME_ELEMENT_ADDRESS {
        UCHAR OperationCode;    // Unknown -- vendor-unique?
        UCHAR ElementType : 4;
        UCHAR VolTag : 1;
        UCHAR LogicalUnitNumber : 3;
        UCHAR StartingElementAddress[2];
        UCHAR NumberElements[2];
        UCHAR Reserved1;
        UCHAR AllocationLength[3];
        UCHAR Reserved2;
        UCHAR Control;
    } REQUEST_VOLUME_ELEMENT_ADDRESS;

    //
    // Atapi 2.5 Changer 12-byte CDBs
    //

    struct _LOAD_UNLOAD {
        UCHAR OperationCode;    // 0xA6 - SCSIOP_LOAD_UNLOAD_SLOT
        UCHAR Immediate : 1;
        UCHAR Reserved1 : 4;
        UCHAR Lun : 3;
        UCHAR Reserved2[2];
        UCHAR Start : 1;
        UCHAR LoadEject : 1;
        UCHAR Reserved3: 6;
        UCHAR Reserved4[3];
        UCHAR Slot;
        UCHAR Reserved5[3];
    } LOAD_UNLOAD;

    struct _MECH_STATUS {
        UCHAR OperationCode;    // 0xBD - SCSIOP_MECHANISM_STATUS
        UCHAR Reserved : 5;
        UCHAR Lun : 3;
        UCHAR Reserved1[6];
        UCHAR AllocationLength[2];
        UCHAR Reserved2[1];
        UCHAR Control;
    } MECH_STATUS;

    //
    // C/DVD 0.9 CDBs
    //

    struct _SYNCHRONIZE_CACHE10 {

        UCHAR OperationCode;    // 0x35 - SCSIOP_SYNCHRONIZE_CACHE

        UCHAR RelAddr : 1;
        UCHAR Immediate : 1;
        UCHAR Reserved : 3;
        UCHAR Lun : 3;

        UCHAR LogicalBlockAddress[4];   // Unused - set to zero
        UCHAR Reserved2;
        UCHAR BlockCount[2];            // Unused - set to zero
        UCHAR Control;
    } SYNCHRONIZE_CACHE10;

    struct _GET_EVENT_STATUS_NOTIFICATION {
        UCHAR OperationCode;    // 0x4A - SCSIOP_GET_EVENT_STATUS_NOTIFICATION

        UCHAR Immediate : 1;
        UCHAR Reserved : 4;
        UCHAR Lun : 3;

        UCHAR Reserved2[2];
        UCHAR NotificationClassRequest;
        UCHAR Reserved3[2];
        UCHAR EventListLength[2];

        UCHAR Control;
    } GET_EVENT_STATUS_NOTIFICATION;

    struct _GET_PERFORMANCE {
        UCHAR OperationCode;    // 0xAC - SCSIOP_GET_PERFORMANCE
        UCHAR Except    : 2;
        UCHAR Write     : 1;
        UCHAR Tolerance : 2;
        UCHAR Reserved0 : 3;
        UCHAR StartingLBA[4];
        UCHAR Reserved1[2];
        UCHAR MaximumNumberOfDescriptors[2];
        UCHAR Type;
        UCHAR Control;
    } GET_PERFORMANCE;

    struct _READ_DVD_STRUCTURE {
        UCHAR OperationCode;    // 0xAD - SCSIOP_READ_DVD_STRUCTURE
        UCHAR Reserved1 : 5;
        UCHAR Lun : 3;
        UCHAR RMDBlockNumber[4];
        UCHAR LayerNumber;
        UCHAR Format;
        UCHAR AllocationLength[2];
        UCHAR Reserved3 : 6;
        UCHAR AGID : 2;
        UCHAR Control;
    } READ_DVD_STRUCTURE;

    struct _SET_STREAMING {
        UCHAR OperationCode;    // 0xB6 - SCSIOP_SET_STREAMING
        UCHAR Reserved[8];
        UCHAR ParameterListLength[2];
        UCHAR Control;
    } SET_STREAMING;

    struct _SEND_DVD_STRUCTURE {
        UCHAR OperationCode;    // 0xBF - SCSIOP_SEND_DVD_STRUCTURE
        UCHAR Reserved1 : 5;
        UCHAR Lun : 3;
        UCHAR Reserved2[5];
        UCHAR Format;
        UCHAR ParameterListLength[2];
        UCHAR Reserved3;
        UCHAR Control;
    } SEND_DVD_STRUCTURE;

    struct _SEND_KEY {
        UCHAR OperationCode;    // 0xA3 - SCSIOP_SEND_KEY
        UCHAR Reserved1 : 5;
        UCHAR Lun : 3;
        UCHAR Reserved2[6];
        UCHAR ParameterListLength[2];
        UCHAR KeyFormat : 6;
        UCHAR AGID : 2;
        UCHAR Control;
    } SEND_KEY;

    struct _REPORT_KEY {
        UCHAR OperationCode;    // 0xA4 - SCSIOP_REPORT_KEY
        UCHAR Reserved1 : 5;
        UCHAR Lun : 3;
        UCHAR LogicalBlockAddress[4];   // for title key
        UCHAR Reserved2[2];
        UCHAR AllocationLength[2];
        UCHAR KeyFormat : 6;
        UCHAR AGID : 2;
        UCHAR Control;
    } REPORT_KEY;

    struct _SET_READ_AHEAD {
        UCHAR OperationCode;    // 0xA7 - SCSIOP_SET_READ_AHEAD
        UCHAR Reserved1 : 5;
        UCHAR Lun : 3;
        UCHAR TriggerLBA[4];
        UCHAR ReadAheadLBA[4];
        UCHAR Reserved2;
        UCHAR Control;
    } SET_READ_AHEAD;

    struct _READ_FORMATTED_CAPACITIES {
        UCHAR OperationCode;    // 0x23 - SCSIOP_READ_FORMATTED_CAPACITY
        UCHAR Reserved1 : 5;
        UCHAR Lun : 3;
        UCHAR Reserved2[5];
        UCHAR AllocationLength[2];
        UCHAR Control;
    } READ_FORMATTED_CAPACITIES;

    //
    // SCSI-3
    //

    struct _REPORT_LUNS {
        UCHAR OperationCode;    // 0xA0 - SCSIOP_REPORT_LUNS
        UCHAR Reserved1[5];
        UCHAR AllocationLength[4];
        UCHAR Reserved2[1];
        UCHAR Control;
    } REPORT_LUNS;

    struct _PERSISTENT_RESERVE_IN {
        UCHAR OperationCode;    // 0x5E - SCSIOP_PERSISTENT_RESERVE_IN
        UCHAR ServiceAction : 5;
        UCHAR Reserved1 : 3;
        UCHAR Reserved2[5];
        UCHAR AllocationLength[2];
        UCHAR Control;
    } PERSISTENT_RESERVE_IN;

    struct _PERSISTENT_RESERVE_OUT {
        UCHAR OperationCode;    // 0x5F - SCSIOP_PERSISTENT_RESERVE_OUT
        UCHAR ServiceAction : 5;
        UCHAR Reserved1 : 3;
        UCHAR Type : 4;
        UCHAR Scope : 4;
        UCHAR Reserved2[4];
        UCHAR ParameterListLength[2]; // 0x18
        UCHAR Control;
    } PERSISTENT_RESERVE_OUT;

    //
    // MMC / SFF-8090 commands
    //

    struct _GET_CONFIGURATION {
        UCHAR OperationCode;       // 0x46 - SCSIOP_GET_CONFIGURATION
        UCHAR RequestType : 2;     // SCSI_GET_CONFIGURATION_REQUEST_TYPE_*
        UCHAR Reserved1   : 6;     // includes obsolete LUN field
        UCHAR StartingFeature[2];
        UCHAR Reserved2[3];
        UCHAR AllocationLength[2];
        UCHAR Control;
    } GET_CONFIGURATION;

    struct _SET_CD_SPEED {
        UCHAR OperationCode;       // 0xB8 - SCSIOP_SET_CD_SPEED
        union {
            UCHAR Reserved1;
            struct {
                UCHAR RotationControl : 2;
                UCHAR Reserved3       : 6;
            };
        };
        UCHAR ReadSpeed[2];        // 1x == (75 * 2352)
        UCHAR WriteSpeed[2];       // 1x == (75 * 2352)
        UCHAR Reserved2[5];
        UCHAR Control;
    } SET_CD_SPEED;

    struct _READ12 {
        UCHAR OperationCode;      // 0xA8 - SCSIOP_READ12
        UCHAR RelativeAddress   : 1;
        UCHAR Reserved1         : 2;
        UCHAR ForceUnitAccess   : 1;
        UCHAR DisablePageOut    : 1;
        UCHAR LogicalUnitNumber : 3;
        UCHAR LogicalBlock[4];
        UCHAR TransferLength[4];
        UCHAR Reserved2 : 7;
        UCHAR Streaming : 1;
        UCHAR Control;
    } READ12;

    struct _WRITE12 {
        UCHAR OperationCode;      // 0xAA - SCSIOP_WRITE12
        UCHAR RelativeAddress   : 1;
        UCHAR Reserved1         : 1;
        UCHAR EBP               : 1;
        UCHAR ForceUnitAccess   : 1;
        UCHAR DisablePageOut    : 1;
        UCHAR LogicalUnitNumber : 3;
        UCHAR LogicalBlock[4];
        UCHAR TransferLength[4];
        UCHAR Reserved2 : 7;
        UCHAR Streaming : 1;
        UCHAR Control;
    } WRITE12;

    struct _ATA_PASSTHROUGH12 {
        UCHAR OperationCode;  // 0xA1 - SCSIOP_ATA_PASSTHROUGH12
        UCHAR Reserved1     : 1;
        UCHAR Protocol      : 4;
        UCHAR MultipleCount : 3;
        UCHAR TLength       : 2;
        UCHAR ByteBlock     : 1;
        UCHAR TDir          : 1;
        UCHAR Reserved2     : 1;
        UCHAR CkCond        : 1;
        UCHAR Offline       : 2;
        UCHAR Features;
        UCHAR SectorCount;
        UCHAR LbaLow;
        UCHAR LbaMid;
        UCHAR LbaHigh;
        UCHAR Device;
        UCHAR Command;
        UCHAR Reserved3;
        UCHAR Control;
    } ATA_PASSTHROUGH12;

    //
    // 16-byte CDBs
    //

    struct _READ16 {
        UCHAR OperationCode;      // 0x88 - SCSIOP_READ16
        UCHAR Reserved1         : 3;
        UCHAR ForceUnitAccess   : 1;
        UCHAR DisablePageOut    : 1;
        UCHAR ReadProtect       : 3;
        UCHAR LogicalBlock[8];
        UCHAR TransferLength[4];
        UCHAR Reserved2         : 7;
        UCHAR Streaming         : 1;
        UCHAR Control;
    } READ16;

    struct _WRITE16 {
        UCHAR OperationCode;      // 0x8A - SCSIOP_WRITE16
        UCHAR Reserved1         : 3;
        UCHAR ForceUnitAccess   : 1;
        UCHAR DisablePageOut    : 1;
        UCHAR WriteProtect      : 3;
        UCHAR LogicalBlock[8];
        UCHAR TransferLength[4];
        UCHAR Reserved2         : 7;
        UCHAR Streaming         : 1;
        UCHAR Control;
    } WRITE16;

    struct _VERIFY16 {
        UCHAR OperationCode;      // 0x8F - SCSIOP_VERIFY16
        UCHAR Reserved1         : 1;
        UCHAR ByteCheck         : 1;
        UCHAR BlockVerify       : 1;
        UCHAR Reserved2         : 1;
        UCHAR DisablePageOut    : 1;
        UCHAR VerifyProtect     : 3;
        UCHAR LogicalBlock[8];
        UCHAR VerificationLength[4];
        UCHAR Reserved3         : 7;
        UCHAR Streaming         : 1;
        UCHAR Control;
    } VERIFY16;

    struct _SYNCHRONIZE_CACHE16 {
        UCHAR OperationCode;      // 0x91 - SCSIOP_SYNCHRONIZE_CACHE16
        UCHAR Reserved1         : 1;
        UCHAR Immediate         : 1;
        UCHAR Reserved2         : 6;
        UCHAR LogicalBlock[8];
        UCHAR BlockCount[4];
        UCHAR Reserved3;
        UCHAR Control;
    } SYNCHRONIZE_CACHE16;

    struct _READ_CAPACITY16 {
        UCHAR OperationCode;      // 0x9E - SCSIOP_READ_CAPACITY16
        UCHAR ServiceAction     : 5;
        UCHAR Reserved1         : 3;
        UCHAR LogicalBlock[8];
        UCHAR AllocationLength[4];
        UCHAR PMI               : 1;
        UCHAR Reserved2         : 7;
        UCHAR Control;
    } READ_CAPACITY16;

    struct _ATA_PASSTHROUGH16 {
        UCHAR OperationCode;      // 0x85 - SCSIOP_ATA_PASSTHROUGH16
        UCHAR Extend            : 1;
        UCHAR Protocol          : 4;
        UCHAR MultipleCount     : 3;
        UCHAR TLength       : 2;
        UCHAR ByteBlock     : 1;
        UCHAR TDir          : 1;
        UCHAR Reserved1     : 1;
        UCHAR CkCond        : 1;
        UCHAR Offline       : 2;
        UCHAR Features15_8;
        UCHAR Features7_0;
        UCHAR SectorCount15_8;
        UCHAR SectorCount7_0;
        UCHAR LbaLow15_8;
        UCHAR LbaLow7_0;
        UCHAR LbaMid15_8;
        UCHAR LbaMid7_0;
        UCHAR LbaHigh15_8;
        UCHAR LbaHigh7_0;
        UCHAR Device;
        UCHAR Command;
        UCHAR Control;
    } ATA_PASSTHROUGH16;

    struct _GET_LBA_STATUS {
        UCHAR OperationCode;    // 0x9E SCSIOP_GET_LBA_STATUS
        UCHAR ServiceAction : 5;
        UCHAR Reserved1     : 3;
        UCHAR StartingLBA[8];
        UCHAR AllocationLength[4];
        UCHAR Reserved2;
        UCHAR Control;
    } GET_LBA_STATUS;

    struct _TOKEN_OPERATION {
        UCHAR OperationCode;      // 0x83 SCSIOP_POPULATE_TOKEN, SCSIOP_WRITE_USING_TOKEN
        UCHAR ServiceAction : 5;
        UCHAR Reserved1     : 3;
        UCHAR Reserved2[4];
        UCHAR ListIdentifier[4];
        UCHAR ParameterListLength[4];
        UCHAR GroupNumber   : 5;
        UCHAR Reserved3     : 3;
        UCHAR Control;
    } TOKEN_OPERATION;

    struct _RECEIVE_TOKEN_INFORMATION {
        UCHAR OperationCode;      // 0x84 SCSIOP_RECEIVE_ROD_TOKEN_INFORMATION
        UCHAR ServiceAction : 5;
        UCHAR Reserved1     : 3;
        UCHAR ListIdentifier[4];
        UCHAR Reserved2[4];
        UCHAR AllocationLength[4];
        UCHAR Reserved3;
        UCHAR Control;
    } RECEIVE_TOKEN_INFORMATION;

    struct _WRITE_BUFFER {
        UCHAR OperationCode;        // 0x3B SCSIOP_WRITE_DATA_BUFF
        UCHAR Mode : 5;
        UCHAR ModeSpecific : 3;
        UCHAR BufferID;
        UCHAR BufferOffset[3];
        UCHAR ParameterListLength[3];
        UCHAR Control;
    } WRITE_BUFFER;

    ULONG AsUlong[4];
    UCHAR AsByte[16];

} CDB, *PCDB;

typedef union _CDB32 {

    //
    // Standard 32-byte CDB
    //

    struct _CDB32GENERIC {
        UCHAR OperationCode;
        UCHAR Control;
        UCHAR Reserved1[4];
        UCHAR Group            : 5;
        UCHAR Reserved2        : 3;
        UCHAR AdditionalCDBLength;
        UCHAR ServiceAction[2];
        UCHAR Reserved3[2];
        UCHAR LogicalBlock[8];
        UCHAR Reserved4[8];
        UCHAR TransferLength[4];
    } CDB32GENERIC;

    ULONG AsUlong[8];
    UCHAR AsByte[32];

} CDB32, *PCDB32;

#pragma pack(pop, cdb)


////////////////////////////////////////////////////////////////////////////////
//
// GET_EVENT_STATUS_NOTIFICATION
//


#define NOTIFICATION_OPERATIONAL_CHANGE_CLASS_MASK  0x02
#define NOTIFICATION_POWER_MANAGEMENT_CLASS_MASK    0x04
#define NOTIFICATION_EXTERNAL_REQUEST_CLASS_MASK    0x08
#define NOTIFICATION_MEDIA_STATUS_CLASS_MASK        0x10
#define NOTIFICATION_MULTI_HOST_CLASS_MASK          0x20
#define NOTIFICATION_DEVICE_BUSY_CLASS_MASK         0x40


#define NOTIFICATION_NO_CLASS_EVENTS                  0x0
#define NOTIFICATION_OPERATIONAL_CHANGE_CLASS_EVENTS  0x1
#define NOTIFICATION_POWER_MANAGEMENT_CLASS_EVENTS    0x2
#define NOTIFICATION_EXTERNAL_REQUEST_CLASS_EVENTS    0x3
#define NOTIFICATION_MEDIA_STATUS_CLASS_EVENTS        0x4
#define NOTIFICATION_MULTI_HOST_CLASS_EVENTS          0x5
#define NOTIFICATION_DEVICE_BUSY_CLASS_EVENTS         0x6

#pragma pack(push, not_header, 1)
typedef struct _NOTIFICATION_EVENT_STATUS_HEADER {
    UCHAR EventDataLength[2];

    UCHAR NotificationClass : 3;
    UCHAR Reserved : 4;
    UCHAR NEA : 1;

    UCHAR SupportedEventClasses;
#if !defined(__midl)
    UCHAR ClassEventData[0];
#endif
} NOTIFICATION_EVENT_STATUS_HEADER, *PNOTIFICATION_EVENT_STATUS_HEADER;
#pragma pack(pop, not_header)

#define NOTIFICATION_OPERATIONAL_EVENT_NO_CHANGE         0x0
#define NOTIFICATION_OPERATIONAL_EVENT_CHANGE_REQUESTED  0x1
#define NOTIFICATION_OPERATIONAL_EVENT_CHANGE_OCCURRED   0x2

#define NOTIFICATION_OPERATIONAL_STATUS_AVAILABLE        0x0
#define NOTIFICATION_OPERATIONAL_STATUS_TEMPORARY_BUSY   0x1
#define NOTIFICATION_OPERATIONAL_STATUS_EXTENDED_BUSY    0x2

#define NOTIFICATION_OPERATIONAL_OPCODE_NONE             0x0
#define NOTIFICATION_OPERATIONAL_OPCODE_FEATURE_CHANGE   0x1
#define NOTIFICATION_OPERATIONAL_OPCODE_FEATURE_ADDED    0x2
#define NOTIFICATION_OPERATIONAL_OPCODE_UNIT_RESET       0x3
#define NOTIFICATION_OPERATIONAL_OPCODE_FIRMWARE_CHANGED 0x4
#define NOTIFICATION_OPERATIONAL_OPCODE_INQUIRY_CHANGED  0x5

//
// Class event data may be one (or none) of the following:
//

#pragma pack(push, not_op, 1)
typedef struct _NOTIFICATION_OPERATIONAL_STATUS { // event class == 0x1
    UCHAR OperationalEvent : 4;
    UCHAR Reserved1 : 4;
    UCHAR OperationalStatus : 4;
    UCHAR Reserved2 : 3;
    UCHAR PersistentPrevented : 1;
    UCHAR Operation[2];
} NOTIFICATION_OPERATIONAL_STATUS, *PNOTIFICATION_OPERATIONAL_STATUS;
#pragma pack(pop, not_op)


#define NOTIFICATION_POWER_EVENT_NO_CHANGE          0x0
#define NOTIFICATION_POWER_EVENT_CHANGE_SUCCEEDED   0x1
#define NOTIFICATION_POWER_EVENT_CHANGE_FAILED      0x2

#define NOTIFICATION_POWER_STATUS_ACTIVE            0x1
#define NOTIFICATION_POWER_STATUS_IDLE              0x2
#define NOTIFICATION_POWER_STATUS_STANDBY           0x3
#define NOTIFICATION_POWER_STATUS_SLEEP             0x4

#pragma pack(push, not_power, 1)
typedef struct _NOTIFICATION_POWER_STATUS { // event class == 0x2
    UCHAR PowerEvent : 4;
    UCHAR Reserved : 4;
    UCHAR PowerStatus;
    UCHAR Reserved2[2];
} NOTIFICATION_POWER_STATUS, *PNOTIFICATION_POWER_STATUS;
#pragma pack(pop, not_power)

#define NOTIFICATION_MEDIA_EVENT_NO_EVENT           0x0
#define NOTIFICATION_EXTERNAL_EVENT_NO_CHANGE       0x0
#define NOTIFICATION_EXTERNAL_EVENT_BUTTON_DOWN     0x1
#define NOTIFICATION_EXTERNAL_EVENT_BUTTON_UP       0x2
#define NOTIFICATION_EXTERNAL_EVENT_EXTERNAL        0x3 // respond with GET_CONFIGURATION?

#define NOTIFICATION_EXTERNAL_STATUS_READY          0x0
#define NOTIFICATION_EXTERNAL_STATUS_PREVENT        0x1

#define NOTIFICATION_EXTERNAL_REQUEST_NONE          0x0000
#define NOTIFICATION_EXTERNAL_REQUEST_QUEUE_OVERRUN 0x0001
#define NOTIFICATION_EXTERNAL_REQUEST_PLAY          0x0101
#define NOTIFICATION_EXTERNAL_REQUEST_REWIND_BACK   0x0102
#define NOTIFICATION_EXTERNAL_REQUEST_FAST_FORWARD  0x0103
#define NOTIFICATION_EXTERNAL_REQUEST_PAUSE         0x0104
#define NOTIFICATION_EXTERNAL_REQUEST_STOP          0x0106
#define NOTIFICATION_EXTERNAL_REQUEST_ASCII_LOW     0x0200
#define NOTIFICATION_EXTERNAL_REQUEST_ASCII_HIGH    0x02ff

#pragma pack(push, not_extern, 1)
typedef struct _NOTIFICATION_EXTERNAL_STATUS { // event class == 0x3
    UCHAR ExternalEvent : 4;
    UCHAR Reserved1 : 4;
    UCHAR ExternalStatus : 4;
    UCHAR Reserved2 : 3;
    UCHAR PersistentPrevented : 1;
    UCHAR Request[2];
} NOTIFICATION_EXTERNAL_STATUS, *PNOTIFICATION_EXTERNAL_STATUS;
#pragma pack(pop, not_extern)

#define NOTIFICATION_MEDIA_EVENT_NO_CHANGE          0x0
#define NOTIFICATION_MEDIA_EVENT_EJECT_REQUEST      0x1
#define NOTIFICATION_MEDIA_EVENT_NEW_MEDIA          0x2
#define NOTIFICATION_MEDIA_EVENT_MEDIA_REMOVAL      0x3
#define NOTIFICATION_MEDIA_EVENT_MEDIA_CHANGE       0x4

#pragma pack(push, not_media, 1)
typedef struct _NOTIFICATION_MEDIA_STATUS { // event class == 0x4
    UCHAR MediaEvent : 4;
    UCHAR Reserved : 4;

    union {
        UCHAR PowerStatus; // OBSOLETE -- was improperly named in NT5 headers
        UCHAR MediaStatus; // Use this for currently reserved fields
        struct {
            UCHAR DoorTrayOpen : 1;
            UCHAR MediaPresent : 1;
            UCHAR ReservedX    : 6; // do not reference this directly!
        };
    };
    UCHAR StartSlot;
    UCHAR EndSlot;
} NOTIFICATION_MEDIA_STATUS, *PNOTIFICATION_MEDIA_STATUS;
#pragma pack(pop, not_media)

#define NOTIFICATION_BUSY_EVENT_NO_EVENT               0x0
#define NOTIFICATION_MULTI_HOST_EVENT_NO_CHANGE        0x0
#define NOTIFICATION_MULTI_HOST_EVENT_CONTROL_REQUEST  0x1
#define NOTIFICATION_MULTI_HOST_EVENT_CONTROL_GRANT    0x2
#define NOTIFICATION_MULTI_HOST_EVENT_CONTROL_RELEASE  0x3

#define NOTIFICATION_MULTI_HOST_STATUS_READY           0x0
#define NOTIFICATION_MULTI_HOST_STATUS_PREVENT         0x1

#define NOTIFICATION_MULTI_HOST_PRIORITY_NO_REQUESTS   0x0
#define NOTIFICATION_MULTI_HOST_PRIORITY_LOW           0x1
#define NOTIFICATION_MULTI_HOST_PRIORITY_MEDIUM        0x2
#define NOTIFICATION_MULTI_HOST_PRIORITY_HIGH          0x3

#pragma pack(push, not_multi, 1)
typedef struct _NOTIFICATION_MULTI_HOST_STATUS { // event class == 0x5
    UCHAR MultiHostEvent : 4;
    UCHAR Reserved1 : 4;
    UCHAR MultiHostStatus : 4;
    UCHAR Reserved2 : 3;
    UCHAR PersistentPrevented : 1;
    UCHAR Priority[2];
} NOTIFICATION_MULTI_HOST_STATUS, *PNOTIFICATION_MULTI_HOST_STATUS;
#pragma pack(pop, not_multi)

#define NOTIFICATION_BUSY_EVENT_NO_EVENT            0x0
#define NOTIFICATION_BUSY_EVENT_NO_CHANGE           0x0
#define NOTIFICATION_BUSY_EVENT_BUSY                0x1
#define NOTIFICATION_BUSY_EVENT_LO_CHANGE           0x2

#define NOTIFICATION_BUSY_STATUS_NO_EVENT           0x0
#define NOTIFICATION_BUSY_STATUS_POWER              0x1
#define NOTIFICATION_BUSY_STATUS_IMMEDIATE          0x2
#define NOTIFICATION_BUSY_STATUS_DEFERRED           0x3

#pragma pack(push, not_busy, 1)
typedef struct _NOTIFICATION_BUSY_STATUS { // event class == 0x6
    UCHAR DeviceBusyEvent : 4;
    UCHAR Reserved : 4;

    UCHAR DeviceBusyStatus;
    UCHAR Time[2];
} NOTIFICATION_BUSY_STATUS, *PNOTIFICATION_BUSY_STATUS;
#pragma pack(pop, not_busy)

////////////////////////////////////////////////////////////////////////////////
//
// SECURITY PROTOCOL IN/OUT definitions (SPC-4, 6.29/6.30)
//

#pragma pack(push, spin_prot_params, 1)
typedef struct _SUPPORTED_SECURITY_PROTOCOLS_PARAMETER_DATA {

    UCHAR Reserved1[6];
    UCHAR SupportedSecurityListLength[2];
    UCHAR SupportedSecurityProtocol[0];

} SUPPORTED_SECURITY_PROTOCOLS_PARAMETER_DATA, *PSUPPORTED_SECURITY_PROTOCOLS_PARAMETER_DATA;
#pragma pack(pop, spin_prot_params)

// Security protocols
#define SECURITY_PROTOCOL_IEEE1667  0xEE

////////////////////////////////////////////////////////////////////////////////
//
// Read DVD Structure Definitions and Constants
//

#define DVD_FORMAT_LEAD_IN          0x00
#define DVD_FORMAT_COPYRIGHT        0x01
#define DVD_FORMAT_DISK_KEY         0x02
#define DVD_FORMAT_BCA              0x03
#define DVD_FORMAT_MANUFACTURING    0x04

#pragma pack(push, dvd_struct_header, 1)
typedef struct _READ_DVD_STRUCTURES_HEADER {
    UCHAR Length[2];
    UCHAR Reserved[2];

#if !defined(__midl)
    UCHAR Data[0];
#endif
} READ_DVD_STRUCTURES_HEADER, *PREAD_DVD_STRUCTURES_HEADER;
#pragma pack(pop, dvd_struct_header)

//
// DiskKey, BCA & Manufacturer information will provide byte arrays as their
// data.
//

//
// CDVD 0.9 Send & Report Key Definitions and Structures
//

#define DVD_REPORT_AGID            0x00
#define DVD_CHALLENGE_KEY          0x01
#define DVD_KEY_1                  0x02
#define DVD_KEY_2                  0x03
#define DVD_TITLE_KEY              0x04
#define DVD_REPORT_ASF             0x05
#define DVD_INVALIDATE_AGID        0x3F

#pragma pack(push, dvdstuff, 1)
typedef struct _CDVD_KEY_HEADER {
    UCHAR DataLength[2];
    UCHAR Reserved[2];
#if !defined(__midl)
    UCHAR Data[0];
#endif
} CDVD_KEY_HEADER, *PCDVD_KEY_HEADER;

typedef struct _CDVD_REPORT_AGID_DATA {
    UCHAR Reserved1[3];
    UCHAR Reserved2 : 6;
    UCHAR AGID : 2;
} CDVD_REPORT_AGID_DATA, *PCDVD_REPORT_AGID_DATA;

typedef struct _CDVD_CHALLENGE_KEY_DATA {
    UCHAR ChallengeKeyValue[10];
    UCHAR Reserved[2];
} CDVD_CHALLENGE_KEY_DATA, *PCDVD_CHALLENGE_KEY_DATA;

typedef struct _CDVD_KEY_DATA {
    UCHAR Key[5];
    UCHAR Reserved[3];
} CDVD_KEY_DATA, *PCDVD_KEY_DATA;

typedef struct _CDVD_REPORT_ASF_DATA {
    UCHAR Reserved1[3];
    UCHAR Success : 1;
    UCHAR Reserved2 : 7;
} CDVD_REPORT_ASF_DATA, *PCDVD_REPORT_ASF_DATA;

typedef struct _CDVD_TITLE_KEY_HEADER {
    UCHAR DataLength[2];
    UCHAR Reserved1[1];
    UCHAR Reserved2 : 3;
    UCHAR CGMS : 2;
    UCHAR CP_SEC : 1;
    UCHAR CPM : 1;
    UCHAR Zero : 1;
    CDVD_KEY_DATA TitleKey;
} CDVD_TITLE_KEY_HEADER, *PCDVD_TITLE_KEY_HEADER;
#pragma pack(pop, dvdstuff)


//
// Format Unit Data definitions and structures
//

#pragma pack(push, format_unit, 1)
typedef struct _FORMAT_DESCRIPTOR {
    UCHAR NumberOfBlocks[4];
    UCHAR FormatSubType : 2;
    UCHAR FormatType : 6;
    UCHAR BlockLength[3];
} FORMAT_DESCRIPTOR, *PFORMAT_DESCRIPTOR;

typedef struct _FORMAT_LIST_HEADER {
    UCHAR Reserved;
    UCHAR VendorSpecific : 1;
    UCHAR Immediate : 1;
    UCHAR TryOut : 1;
    UCHAR IP : 1;
    UCHAR STPF : 1;
    UCHAR DCRT : 1;
    UCHAR DPRY : 1;
    UCHAR FOV : 1;
    UCHAR FormatDescriptorLength[2];
#if !defined(__midl)
    FORMAT_DESCRIPTOR Descriptors[0];
#endif
} FORMAT_LIST_HEADER, *PFORMAT_LIST_HEADER;
#pragma pack(pop, format_unit)

//
// Read Formatted Capacity Data - returned in Big Endian Format
//


#pragma pack(push, formatted_capacity, 1)
typedef struct _FORMATTED_CAPACITY_DESCRIPTOR {
    UCHAR NumberOfBlocks[4];
    UCHAR Maximum : 1;
    UCHAR Valid : 1;
    UCHAR FormatType : 6;
    UCHAR BlockLength[3];
} FORMATTED_CAPACITY_DESCRIPTOR, *PFORMATTED_CAPACITY_DESCRIPTOR;

typedef struct _FORMATTED_CAPACITY_LIST {
    UCHAR Reserved[3];
    UCHAR CapacityListLength;
#if !defined(__midl)
    FORMATTED_CAPACITY_DESCRIPTOR Descriptors[0];
#endif
} FORMATTED_CAPACITY_LIST, *PFORMATTED_CAPACITY_LIST;
#pragma pack(pop, formatted_capacity)

//
//      BLANK command blanking type codes
//

#define BLANK_FULL              0x0
#define BLANK_MINIMAL           0x1
#define BLANK_TRACK             0x2
#define BLANK_UNRESERVE_TRACK   0x3
#define BLANK_TAIL              0x4
#define BLANK_UNCLOSE_SESSION   0x5
#define BLANK_SESSION           0x6

//
// PLAY_CD definitions and constants
//

#define CD_EXPECTED_SECTOR_ANY          0x0
#define CD_EXPECTED_SECTOR_CDDA         0x1
#define CD_EXPECTED_SECTOR_MODE1        0x2
#define CD_EXPECTED_SECTOR_MODE2        0x3
#define CD_EXPECTED_SECTOR_MODE2_FORM1  0x4
#define CD_EXPECTED_SECTOR_MODE2_FORM2  0x5

//
// Read Disk Information Definitions and Capabilities
//

#define DISK_STATUS_EMPTY       0x00
#define DISK_STATUS_INCOMPLETE  0x01
#define DISK_STATUS_COMPLETE    0x02
#define DISK_STATUS_OTHERS      0x03

#define LAST_SESSION_EMPTY              0x00
#define LAST_SESSION_INCOMPLETE         0x01
#define LAST_SESSION_RESERVED_DAMAGED   0x02
#define LAST_SESSION_COMPLETE           0x03

#define DISK_TYPE_CDDA          0x00
#define DISK_TYPE_CDI           0x10
#define DISK_TYPE_XA            0x20
#define DISK_TYPE_UNDEFINED     0xFF

//
//  Values for MrwStatus field.
//

#define DISC_BGFORMAT_STATE_NONE        0x0
#define DISC_BGFORMAT_STATE_INCOMPLETE  0x1
#define DISC_BGFORMAT_STATE_RUNNING     0x2
#define DISC_BGFORMAT_STATE_COMPLETE    0x3


#pragma pack(push, discinfo, 1)
typedef struct _OPC_TABLE_ENTRY {
    UCHAR Speed[2];
    UCHAR OPCValue[6];
} OPC_TABLE_ENTRY, *POPC_TABLE_ENTRY;

typedef struct _DISC_INFORMATION {

    UCHAR Length[2];
    UCHAR DiscStatus        : 2;
    UCHAR LastSessionStatus : 2;
    UCHAR Erasable          : 1;
    UCHAR Reserved1         : 3;
    UCHAR FirstTrackNumber;

    UCHAR NumberOfSessionsLsb;
    UCHAR LastSessionFirstTrackLsb;
    UCHAR LastSessionLastTrackLsb;
    UCHAR MrwStatus   : 2;
    UCHAR MrwDirtyBit : 1;
    UCHAR Reserved2   : 2;
    UCHAR URU         : 1;
    UCHAR DBC_V       : 1;
    UCHAR DID_V       : 1;

    UCHAR DiscType;
    UCHAR NumberOfSessionsMsb;
    UCHAR LastSessionFirstTrackMsb;
    UCHAR LastSessionLastTrackMsb;

    UCHAR DiskIdentification[4];
    UCHAR LastSessionLeadIn[4];     // HMSF
    UCHAR LastPossibleLeadOutStartTime[4]; // HMSF
    UCHAR DiskBarCode[8];

    UCHAR Reserved4;
    UCHAR NumberOPCEntries;
    OPC_TABLE_ENTRY OPCTable[ 1 ]; // can be many of these here....

} DISC_INFORMATION, *PDISC_INFORMATION;

// TODO: Deprecate DISK_INFORMATION
//#if PRAGMA_DEPRECATED_DDK
//#pragma deprecated(_DISK_INFORMATION)  // Use DISC_INFORMATION, note size change
//#pragma deprecated( DISK_INFORMATION)  // Use DISC_INFORMATION, note size change
//#pragma deprecated(PDISK_INFORMATION)  // Use DISC_INFORMATION, note size change
//#endif

typedef struct _DISK_INFORMATION {
    UCHAR Length[2];

    UCHAR DiskStatus : 2;
    UCHAR LastSessionStatus : 2;
    UCHAR Erasable : 1;
    UCHAR Reserved1 : 3;

    UCHAR FirstTrackNumber;
    UCHAR NumberOfSessions;
    UCHAR LastSessionFirstTrack;
    UCHAR LastSessionLastTrack;

    UCHAR Reserved2 : 5;
    UCHAR GEN : 1;
    UCHAR DBC_V : 1;
    UCHAR DID_V : 1;

    UCHAR DiskType;
    UCHAR Reserved3[3];

    UCHAR DiskIdentification[4];
    UCHAR LastSessionLeadIn[4];     // MSF
    UCHAR LastPossibleStartTime[4]; // MSF
    UCHAR DiskBarCode[8];

    UCHAR Reserved4;
    UCHAR NumberOPCEntries;
#if !defined(__midl)
    OPC_TABLE_ENTRY OPCTable[0];
#endif
} DISK_INFORMATION, *PDISK_INFORMATION;
#pragma pack(pop, discinfo)


//
// Read Header definitions and structures
//
#pragma pack(push, cdheader, 1)
typedef struct _DATA_BLOCK_HEADER {
    UCHAR DataMode;
    UCHAR Reserved[4];
    union {
        UCHAR LogicalBlockAddress[4];
        struct {
            UCHAR Reserved;
            UCHAR M;
            UCHAR S;
            UCHAR F;
        } MSF;
    };
} DATA_BLOCK_HEADER, *PDATA_BLOCK_HEADER;
#pragma pack(pop, cdheader)


#define DATA_BLOCK_MODE0    0x0
#define DATA_BLOCK_MODE1    0x1
#define DATA_BLOCK_MODE2    0x2

//
// Read TOC Format Codes
//

#define READ_TOC_FORMAT_TOC         0x00
#define READ_TOC_FORMAT_SESSION     0x01
#define READ_TOC_FORMAT_FULL_TOC    0x02
#define READ_TOC_FORMAT_PMA         0x03
#define READ_TOC_FORMAT_ATIP        0x04

// TODO: Deprecate TRACK_INFORMATION structure, use TRACK_INFORMATION2 instead
#pragma pack(push, track_info, 1)
typedef struct _TRACK_INFORMATION {
    UCHAR Length[2];
    UCHAR TrackNumber;
    UCHAR SessionNumber;
    UCHAR Reserved1;
    UCHAR TrackMode : 4;
    UCHAR Copy      : 1;
    UCHAR Damage    : 1;
    UCHAR Reserved2 : 2;
    UCHAR DataMode : 4;
    UCHAR FP       : 1;
    UCHAR Packet   : 1;
    UCHAR Blank    : 1;
    UCHAR RT       : 1;
    UCHAR NWA_V     : 1;
    UCHAR Reserved3 : 7;
    UCHAR TrackStartAddress[4];
    UCHAR NextWritableAddress[4];
    UCHAR FreeBlocks[4];
    UCHAR FixedPacketSize[4];
} TRACK_INFORMATION, *PTRACK_INFORMATION;

// Second Revision Modifies:
// * Longer names for some fields
// * LSB to track/session number fields
// * LRA_V bit
// Second Revision Adds:
// * TrackSize
// * LastRecordedAddress
// * MSB to track/session
// * Two reserved bytes
// Total structure size increased by 12 (0x0C) bytes
typedef struct _TRACK_INFORMATION2 {

    UCHAR Length[2];
    UCHAR TrackNumberLsb;
    UCHAR SessionNumberLsb;

    UCHAR Reserved4;
    UCHAR TrackMode : 4;
    UCHAR Copy      : 1;
    UCHAR Damage    : 1;
    UCHAR Reserved5 : 2;
    UCHAR DataMode      : 4;
    UCHAR FixedPacket   : 1;
    UCHAR Packet        : 1;
    UCHAR Blank         : 1;
    UCHAR ReservedTrack : 1;
    UCHAR NWA_V     : 1;
    UCHAR LRA_V     : 1;
    UCHAR Reserved6 : 6;

    UCHAR TrackStartAddress[4];
    UCHAR NextWritableAddress[4];
    UCHAR FreeBlocks[4];
    UCHAR FixedPacketSize[4]; // blocking factor
    UCHAR TrackSize[4];
    UCHAR LastRecordedAddress[4];

    UCHAR TrackNumberMsb;
    UCHAR SessionNumberMsb;
    UCHAR Reserved7[2];

} TRACK_INFORMATION2, *PTRACK_INFORMATION2;

// Third Revision Adds
// * ReadCompatibilityLBA
// Total structure size increased by 4 bytes
typedef struct _TRACK_INFORMATION3 {

    UCHAR Length[2];
    UCHAR TrackNumberLsb;
    UCHAR SessionNumberLsb;

    UCHAR Reserved4;
    UCHAR TrackMode : 4;
    UCHAR Copy      : 1;
    UCHAR Damage    : 1;
    UCHAR Reserved5 : 2;
    UCHAR DataMode      : 4;
    UCHAR FixedPacket   : 1;
    UCHAR Packet        : 1;
    UCHAR Blank         : 1;
    UCHAR ReservedTrack : 1;
    UCHAR NWA_V     : 1;
    UCHAR LRA_V     : 1;
    UCHAR Reserved6 : 6;

    UCHAR TrackStartAddress[4];
    UCHAR NextWritableAddress[4];
    UCHAR FreeBlocks[4];
    UCHAR FixedPacketSize[4]; // blocking factor
    UCHAR TrackSize[4];
    UCHAR LastRecordedAddress[4];

    UCHAR TrackNumberMsb;
    UCHAR SessionNumberMsb;
    UCHAR Reserved7[2];
    UCHAR ReadCompatibilityLba[4];

} TRACK_INFORMATION3, *PTRACK_INFORMATION3;

#pragma pack(pop, track_info)

#pragma pack(push, perf_descriptor, 1)
typedef struct _PERFORMANCE_DESCRIPTOR {

    UCHAR RandomAccess         : 1;
    UCHAR Exact                : 1;
    UCHAR RestoreDefaults      : 1;
    UCHAR WriteRotationControl : 2;
    UCHAR Reserved1            : 3;

    UCHAR Reserved[3];
    UCHAR StartLba[4];
    UCHAR EndLba[4];
    UCHAR ReadSize[4];
    UCHAR ReadTime[4];
    UCHAR WriteSize[4];
    UCHAR WriteTime[4];

} PERFORMANCE_DESCRIPTOR, *PPERFORMANCE_DESCRIPTOR;
#pragma pack(pop, perf_descriptor)

//
// Command Descriptor Block constants.
//

#define CDB6GENERIC_LENGTH                   6
#define CDB10GENERIC_LENGTH                  10
#define CDB12GENERIC_LENGTH                  12

#define SETBITON                             1
#define SETBITOFF                            0

//
// Mode Sense/Select page constants.
//

#define MODE_PAGE_VENDOR_SPECIFIC       0x00
#define MODE_PAGE_ERROR_RECOVERY        0x01
#define MODE_PAGE_DISCONNECT            0x02
#define MODE_PAGE_FORMAT_DEVICE         0x03 // disk
#define MODE_PAGE_MRW                   0x03 // cdrom
#define MODE_PAGE_RIGID_GEOMETRY        0x04
#define MODE_PAGE_FLEXIBILE             0x05 // disk
#define MODE_PAGE_WRITE_PARAMETERS      0x05 // cdrom
#define MODE_PAGE_VERIFY_ERROR          0x07
#define MODE_PAGE_CACHING               0x08
#define MODE_PAGE_PERIPHERAL            0x09
#define MODE_PAGE_CONTROL               0x0A
#define MODE_PAGE_MEDIUM_TYPES          0x0B
#define MODE_PAGE_NOTCH_PARTITION       0x0C
#define MODE_PAGE_CD_AUDIO_CONTROL      0x0E
#define MODE_PAGE_DATA_COMPRESS         0x0F
#define MODE_PAGE_DEVICE_CONFIG         0x10
#define MODE_PAGE_XOR_CONTROL           0x10 // disk
#define MODE_PAGE_MEDIUM_PARTITION      0x11
#define MODE_PAGE_ENCLOSURE_SERVICES_MANAGEMENT 0x14
#define MODE_PAGE_EXTENDED              0x15
#define MODE_PAGE_EXTENDED_DEVICE_SPECIFIC 0x16
#define MODE_PAGE_CDVD_FEATURE_SET      0x18
#define MODE_PAGE_PROTOCOL_SPECIFIC_LUN 0x18
#define MODE_PAGE_PROTOCOL_SPECIFIC_PORT 0x19
#define MODE_PAGE_POWER_CONDITION       0x1A
#define MODE_PAGE_LUN_MAPPING           0x1B
#define MODE_PAGE_FAULT_REPORTING       0x1C
#define MODE_PAGE_CDVD_INACTIVITY       0x1D // cdrom
#define MODE_PAGE_ELEMENT_ADDRESS       0x1D
#define MODE_PAGE_TRANSPORT_GEOMETRY    0x1E
#define MODE_PAGE_DEVICE_CAPABILITIES   0x1F
#define MODE_PAGE_CAPABILITIES          0x2A // cdrom

#define MODE_SENSE_RETURN_ALL           0x3f

#define MODE_SENSE_CURRENT_VALUES       0x00
#define MODE_SENSE_CHANGEABLE_VALUES    0x40
#define MODE_SENSE_DEFAULT_VAULES       0x80
#define MODE_SENSE_SAVED_VALUES         0xc0


//
// SCSI CDB operation codes
//

// 6-byte commands:
#define SCSIOP_TEST_UNIT_READY          0x00
#define SCSIOP_REZERO_UNIT              0x01
#define SCSIOP_REWIND                   0x01
#define SCSIOP_REQUEST_BLOCK_ADDR       0x02
#define SCSIOP_REQUEST_SENSE            0x03
#define SCSIOP_FORMAT_UNIT              0x04
#define SCSIOP_READ_BLOCK_LIMITS        0x05
#define SCSIOP_REASSIGN_BLOCKS          0x07
#define SCSIOP_INIT_ELEMENT_STATUS      0x07
#define SCSIOP_READ6                    0x08
#define SCSIOP_RECEIVE                  0x08
#define SCSIOP_WRITE6                   0x0A
#define SCSIOP_PRINT                    0x0A
#define SCSIOP_SEND                     0x0A
#define SCSIOP_SEEK6                    0x0B
#define SCSIOP_TRACK_SELECT             0x0B
#define SCSIOP_SLEW_PRINT               0x0B
#define SCSIOP_SET_CAPACITY             0x0B // tape
#define SCSIOP_SEEK_BLOCK               0x0C
#define SCSIOP_PARTITION                0x0D
#define SCSIOP_READ_REVERSE             0x0F
#define SCSIOP_WRITE_FILEMARKS          0x10
#define SCSIOP_FLUSH_BUFFER             0x10
#define SCSIOP_SPACE                    0x11
#define SCSIOP_INQUIRY                  0x12
#define SCSIOP_VERIFY6                  0x13
#define SCSIOP_RECOVER_BUF_DATA         0x14
#define SCSIOP_MODE_SELECT              0x15
#define SCSIOP_RESERVE_UNIT             0x16
#define SCSIOP_RELEASE_UNIT             0x17
#define SCSIOP_COPY                     0x18
#define SCSIOP_ERASE                    0x19
#define SCSIOP_MODE_SENSE               0x1A
#define SCSIOP_START_STOP_UNIT          0x1B
#define SCSIOP_STOP_PRINT               0x1B
#define SCSIOP_LOAD_UNLOAD              0x1B
#define SCSIOP_RECEIVE_DIAGNOSTIC       0x1C
#define SCSIOP_SEND_DIAGNOSTIC          0x1D
#define SCSIOP_MEDIUM_REMOVAL           0x1E

// 10-byte commands
#define SCSIOP_READ_FORMATTED_CAPACITY  0x23
#define SCSIOP_READ_CAPACITY            0x25
#define SCSIOP_READ                     0x28
#define SCSIOP_WRITE                    0x2A
#define SCSIOP_SEEK                     0x2B
#define SCSIOP_LOCATE                   0x2B
#define SCSIOP_POSITION_TO_ELEMENT      0x2B
#define SCSIOP_WRITE_VERIFY             0x2E
#define SCSIOP_VERIFY                   0x2F
#define SCSIOP_SEARCH_DATA_HIGH         0x30
#define SCSIOP_SEARCH_DATA_EQUAL        0x31
#define SCSIOP_SEARCH_DATA_LOW          0x32
#define SCSIOP_SET_LIMITS               0x33
#define SCSIOP_READ_POSITION            0x34
#define SCSIOP_SYNCHRONIZE_CACHE        0x35
#define SCSIOP_COMPARE                  0x39
#define SCSIOP_COPY_COMPARE             0x3A
#define SCSIOP_WRITE_DATA_BUFF          0x3B
#define SCSIOP_READ_DATA_BUFF           0x3C
#define SCSIOP_WRITE_LONG               0x3F
#define SCSIOP_CHANGE_DEFINITION        0x40
#define SCSIOP_WRITE_SAME               0x41
#define SCSIOP_READ_SUB_CHANNEL         0x42
#define SCSIOP_UNMAP                    0x42 // block device
#define SCSIOP_READ_TOC                 0x43
#define SCSIOP_READ_HEADER              0x44
#define SCSIOP_REPORT_DENSITY_SUPPORT   0x44 // tape
#define SCSIOP_PLAY_AUDIO               0x45
#define SCSIOP_GET_CONFIGURATION        0x46
#define SCSIOP_PLAY_AUDIO_MSF           0x47
#define SCSIOP_PLAY_TRACK_INDEX         0x48
#define SCSIOP_SANITIZE                 0x48 // block device
#define SCSIOP_PLAY_TRACK_RELATIVE      0x49
#define SCSIOP_GET_EVENT_STATUS         0x4A
#define SCSIOP_PAUSE_RESUME             0x4B
#define SCSIOP_LOG_SELECT               0x4C
#define SCSIOP_LOG_SENSE                0x4D
#define SCSIOP_STOP_PLAY_SCAN           0x4E
#define SCSIOP_XDWRITE                  0x50
#define SCSIOP_XPWRITE                  0x51
#define SCSIOP_READ_DISK_INFORMATION    0x51
#define SCSIOP_READ_DISC_INFORMATION    0x51 // proper use of disc over disk
#define SCSIOP_READ_TRACK_INFORMATION   0x52
#define SCSIOP_XDWRITE_READ             0x53
#define SCSIOP_RESERVE_TRACK_RZONE      0x53
#define SCSIOP_SEND_OPC_INFORMATION     0x54 // optimum power calibration
#define SCSIOP_MODE_SELECT10            0x55
#define SCSIOP_RESERVE_UNIT10           0x56
#define SCSIOP_RESERVE_ELEMENT          0x56
#define SCSIOP_RELEASE_UNIT10           0x57
#define SCSIOP_RELEASE_ELEMENT          0x57
#define SCSIOP_REPAIR_TRACK             0x58
#define SCSIOP_MODE_SENSE10             0x5A
#define SCSIOP_CLOSE_TRACK_SESSION      0x5B
#define SCSIOP_READ_BUFFER_CAPACITY     0x5C
#define SCSIOP_SEND_CUE_SHEET           0x5D
#define SCSIOP_PERSISTENT_RESERVE_IN    0x5E
#define SCSIOP_PERSISTENT_RESERVE_OUT   0x5F

// 12-byte commands
#define SCSIOP_REPORT_LUNS              0xA0
#define SCSIOP_BLANK                    0xA1
#define SCSIOP_ATA_PASSTHROUGH12        0xA1
#define SCSIOP_SEND_EVENT               0xA2
#define SCSIOP_SECURITY_PROTOCOL_IN     0xA2
#define SCSIOP_SEND_KEY                 0xA3
#define SCSIOP_MAINTENANCE_IN           0xA3
#define SCSIOP_REPORT_KEY               0xA4
#define SCSIOP_MAINTENANCE_OUT          0xA4
#define SCSIOP_MOVE_MEDIUM              0xA5
#define SCSIOP_LOAD_UNLOAD_SLOT         0xA6
#define SCSIOP_EXCHANGE_MEDIUM          0xA6
#define SCSIOP_SET_READ_AHEAD           0xA7
#define SCSIOP_MOVE_MEDIUM_ATTACHED     0xA7
#define SCSIOP_READ12                   0xA8
#define SCSIOP_GET_MESSAGE              0xA8
#define SCSIOP_SERVICE_ACTION_OUT12     0xA9
#define SCSIOP_WRITE12                  0xAA
#define SCSIOP_SEND_MESSAGE             0xAB
#define SCSIOP_SERVICE_ACTION_IN12      0xAB
#define SCSIOP_GET_PERFORMANCE          0xAC
#define SCSIOP_READ_DVD_STRUCTURE       0xAD
#define SCSIOP_WRITE_VERIFY12           0xAE
#define SCSIOP_VERIFY12                 0xAF
#define SCSIOP_SEARCH_DATA_HIGH12       0xB0
#define SCSIOP_SEARCH_DATA_EQUAL12      0xB1
#define SCSIOP_SEARCH_DATA_LOW12        0xB2
#define SCSIOP_SET_LIMITS12             0xB3
#define SCSIOP_READ_ELEMENT_STATUS_ATTACHED 0xB4
#define SCSIOP_REQUEST_VOL_ELEMENT      0xB5
#define SCSIOP_SECURITY_PROTOCOL_OUT    0xB5
#define SCSIOP_SEND_VOLUME_TAG          0xB6
#define SCSIOP_SET_STREAMING            0xB6 // C/DVD
#define SCSIOP_READ_DEFECT_DATA         0xB7
#define SCSIOP_READ_ELEMENT_STATUS      0xB8
#define SCSIOP_READ_CD_MSF              0xB9
#define SCSIOP_SCAN_CD                  0xBA
#define SCSIOP_REDUNDANCY_GROUP_IN      0xBA
#define SCSIOP_SET_CD_SPEED             0xBB
#define SCSIOP_REDUNDANCY_GROUP_OUT     0xBB
#define SCSIOP_PLAY_CD                  0xBC
#define SCSIOP_SPARE_IN                 0xBC
#define SCSIOP_MECHANISM_STATUS         0xBD
#define SCSIOP_SPARE_OUT                0xBD
#define SCSIOP_READ_CD                  0xBE
#define SCSIOP_VOLUME_SET_IN            0xBE
#define SCSIOP_SEND_DVD_STRUCTURE       0xBF
#define SCSIOP_VOLUME_SET_OUT           0xBF
#define SCSIOP_INIT_ELEMENT_RANGE       0xE7

// 16-byte commands
#define SCSIOP_XDWRITE_EXTENDED16       0x80 // disk
#define SCSIOP_WRITE_FILEMARKS16        0x80 // tape
#define SCSIOP_REBUILD16                0x81 // disk
#define SCSIOP_READ_REVERSE16           0x81 // tape
#define SCSIOP_REGENERATE16             0x82 // disk
#define SCSIOP_EXTENDED_COPY            0x83
#define SCSIOP_POPULATE_TOKEN           0x83 // disk
#define SCSIOP_WRITE_USING_TOKEN        0x83 // disk
#define SCSIOP_RECEIVE_COPY_RESULTS     0x84
#define SCSIOP_RECEIVE_ROD_TOKEN_INFORMATION 0x84 //disk
#define SCSIOP_ATA_PASSTHROUGH16        0x85
#define SCSIOP_ACCESS_CONTROL_IN        0x86
#define SCSIOP_ACCESS_CONTROL_OUT       0x87
#define SCSIOP_READ16                   0x88
#define SCSIOP_COMPARE_AND_WRITE        0x89
#define SCSIOP_WRITE16                  0x8A
#define SCSIOP_READ_ATTRIBUTES          0x8C
#define SCSIOP_WRITE_ATTRIBUTES         0x8D
#define SCSIOP_WRITE_VERIFY16           0x8E
#define SCSIOP_VERIFY16                 0x8F
#define SCSIOP_PREFETCH16               0x90
#define SCSIOP_SYNCHRONIZE_CACHE16      0x91
#define SCSIOP_SPACE16                  0x91 // tape
#define SCSIOP_LOCK_UNLOCK_CACHE16      0x92
#define SCSIOP_LOCATE16                 0x92 // tape
#define SCSIOP_WRITE_SAME16             0x93
#define SCSIOP_ERASE16                  0x93 // tape
#define SCSIOP_READ_CAPACITY16          0x9E
#define SCSIOP_GET_LBA_STATUS           0x9E
#define SCSIOP_SERVICE_ACTION_IN16      0x9E
#define SCSIOP_SERVICE_ACTION_OUT16     0x9F

// 32-byte commands
#define SCSIOP_OPERATION32              0x7F

// Service Action for 32 bit write commands
#define SERVICE_ACTION_XDWRITE          0x0004
#define SERVICE_ACTION_XPWRITE          0x0006
#define SERVICE_ACTION_XDWRITEREAD      0x0007
#define SERVICE_ACTION_WRITE            0x000B
#define SERVICE_ACTION_WRITE_VERIFY     0x000C
#define SERVICE_ACTION_WRITE_SAME       0x000D
#define SERVICE_ACTION_ORWRITE          0x000E

// Service actions for 0x48
#define SERVICE_ACTION_OVERWRITE        0x01
#define SERVICE_ACTION_BLOCK_ERASE      0x02
#define SERVICE_ACTION_CRYPTO_ERASE     0x03
#define SERVICE_ACTION_EXIT_FAILURE     0x1f

// Service actions for 0x83
#define SERVICE_ACTION_POPULATE_TOKEN   0x10
#define SERVICE_ACTION_WRITE_USING_TOKEN 0x11

// Service actions for 0x84
#define SERVICE_ACTION_RECEIVE_TOKEN_INFORMATION 0x07

// Service actions for 0x9E
#define SERVICE_ACTION_READ_CAPACITY16  0x10
#define SERVICE_ACTION_GET_LBA_STATUS   0x12

//
// If the IMMED bit is 1, status is returned as soon
// as the operation is initiated. If the IMMED bit
// is 0, status is not returned until the operation
// is completed.
//

#define CDB_RETURN_ON_COMPLETION   0
#define CDB_RETURN_IMMEDIATE       1


//
// Inquiry buffer structure. This is the data returned from the target
// after it receives an inquiry.
//
// This structure may be extended by the number of bytes specified
// in the field AdditionalLength. The defined size constant only
// includes fields through ProductRevisionLevel.
//
// The NT SCSI drivers are only interested in the first 36 bytes of data.
//

#define INQUIRYDATABUFFERSIZE 36

typedef USHORT VERSION_DESCRIPTOR, *PVERSION_DESCRIPTOR;

#if (NTDDI_VERSION < NTDDI_WINXP)
typedef struct _INQUIRYDATA {
    UCHAR DeviceType : 5;
    UCHAR DeviceTypeQualifier : 3;
    UCHAR DeviceTypeModifier : 7;
    UCHAR RemovableMedia : 1;
    UCHAR Versions;
    UCHAR ResponseDataFormat : 4;
    UCHAR HiSupport : 1;
    UCHAR NormACA : 1;
    UCHAR ReservedBit : 1;
    UCHAR AERC : 1;
    UCHAR AdditionalLength;
    UCHAR Reserved[2];
    UCHAR SoftReset : 1;
    UCHAR CommandQueue : 1;
    UCHAR Reserved2 : 1;
    UCHAR LinkedCommands : 1;
    UCHAR Synchronous : 1;
    UCHAR Wide16Bit : 1;
    UCHAR Wide32Bit : 1;
    UCHAR RelativeAddressing : 1;
    UCHAR VendorId[8];
    UCHAR ProductId[16];
    UCHAR ProductRevisionLevel[4];
    UCHAR VendorSpecific[20];
    UCHAR Reserved3[2];
    VERSION_DESCRIPTOR VersionDescriptors[8];
    UCHAR Reserved4[30];
} INQUIRYDATA, *PINQUIRYDATA;
#else
#pragma pack(push, inquiry, 1)
typedef struct _INQUIRYDATA {
    UCHAR DeviceType : 5;
    UCHAR DeviceTypeQualifier : 3;
    UCHAR DeviceTypeModifier : 7;
    UCHAR RemovableMedia : 1;
    union {
        UCHAR Versions;
        struct {
            UCHAR ANSIVersion : 3;
            UCHAR ECMAVersion : 3;
            UCHAR ISOVersion : 2;
        };
    };
    UCHAR ResponseDataFormat : 4;
    UCHAR HiSupport : 1;
    UCHAR NormACA : 1;
    UCHAR TerminateTask : 1;
    UCHAR AERC : 1;
    UCHAR AdditionalLength;
    union {
        UCHAR Reserved;
        struct {
            UCHAR PROTECT : 1;
            UCHAR Reserved_1 : 2;
            UCHAR ThirdPartyCoppy : 1;
            UCHAR TPGS : 2;
            UCHAR ACC : 1;
            UCHAR SCCS : 1;
       };
    };
    UCHAR Addr16 : 1;               // defined only for SIP devices.
    UCHAR Addr32 : 1;               // defined only for SIP devices.
    UCHAR AckReqQ: 1;               // defined only for SIP devices.
    UCHAR MediumChanger : 1;
    UCHAR MultiPort : 1;
    UCHAR ReservedBit2 : 1;
    UCHAR EnclosureServices : 1;
    UCHAR ReservedBit3 : 1;
    UCHAR SoftReset : 1;
    UCHAR CommandQueue : 1;
    UCHAR TransferDisable : 1;      // defined only for SIP devices.
    UCHAR LinkedCommands : 1;
    UCHAR Synchronous : 1;          // defined only for SIP devices.
    UCHAR Wide16Bit : 1;            // defined only for SIP devices.
    UCHAR Wide32Bit : 1;            // defined only for SIP devices.
    UCHAR RelativeAddressing : 1;
    UCHAR VendorId[8];
    UCHAR ProductId[16];
    UCHAR ProductRevisionLevel[4];
    UCHAR VendorSpecific[20];
    UCHAR Reserved3[2];
    VERSION_DESCRIPTOR VersionDescriptors[8];
    UCHAR Reserved4[30];
} INQUIRYDATA, *PINQUIRYDATA;
#pragma pack(pop, inquiry)
#endif

#define OFFSET_VER_DESCRIPTOR_ONE       (FIELD_OFFSET(INQUIRYDATA, VersionDescriptors[0]))
#define OFFSET_VER_DESCRIPTOR_EIGHT     (FIELD_OFFSET(INQUIRYDATA, VersionDescriptors[8]))

//
// Inquiry defines. Used to interpret data returned from target as result
// of inquiry command.
//
// DeviceType field
//

#define DIRECT_ACCESS_DEVICE            0x00    // disks
#define SEQUENTIAL_ACCESS_DEVICE        0x01    // tapes
#define PRINTER_DEVICE                  0x02    // printers
#define PROCESSOR_DEVICE                0x03    // scanners, printers, etc
#define WRITE_ONCE_READ_MULTIPLE_DEVICE 0x04    // worms
#define READ_ONLY_DIRECT_ACCESS_DEVICE  0x05    // cdroms
#define SCANNER_DEVICE                  0x06    // scanners
#define OPTICAL_DEVICE                  0x07    // optical disks
#define MEDIUM_CHANGER                  0x08    // jukebox
#define COMMUNICATION_DEVICE            0x09    // network
// 0xA and 0xB are obsolete
#define ARRAY_CONTROLLER_DEVICE         0x0C
#define SCSI_ENCLOSURE_DEVICE           0x0D
#define REDUCED_BLOCK_DEVICE            0x0E    // e.g., 1394 disk
#define OPTICAL_CARD_READER_WRITER_DEVICE 0x0F
#define BRIDGE_CONTROLLER_DEVICE        0x10
#define OBJECT_BASED_STORAGE_DEVICE     0x11    // OSD
#define LOGICAL_UNIT_NOT_PRESENT_DEVICE 0x7F

#define DEVICE_QUALIFIER_ACTIVE         0x00
#define DEVICE_QUALIFIER_NOT_ACTIVE     0x01
#define DEVICE_QUALIFIER_NOT_SUPPORTED  0x03

//
// DeviceTypeQualifier field
//

#define DEVICE_CONNECTED 0x00

//
// Vital Product Data Pages
//

//
// Unit Serial Number Page (page code 0x80)
//
// Provides a product serial number for the target or the logical unit.
//
#pragma pack(push, vpd_media_sn, 1)
typedef struct _VPD_MEDIA_SERIAL_NUMBER_PAGE {
    UCHAR DeviceType : 5;
    UCHAR DeviceTypeQualifier : 3;
    UCHAR PageCode;
    UCHAR Reserved;
    UCHAR PageLength;
#if !defined(__midl)
    UCHAR SerialNumber[0];
#endif
} VPD_MEDIA_SERIAL_NUMBER_PAGE, *PVPD_MEDIA_SERIAL_NUMBER_PAGE;
#pragma pack(pop, vpd_media_sn)

#pragma pack(push, vpd_sn, 1)
typedef struct _VPD_SERIAL_NUMBER_PAGE {
    UCHAR DeviceType : 5;
    UCHAR DeviceTypeQualifier : 3;
    UCHAR PageCode;
    UCHAR Reserved;
    UCHAR PageLength;
#if !defined(__midl)
    UCHAR SerialNumber[0];
#endif
} VPD_SERIAL_NUMBER_PAGE, *PVPD_SERIAL_NUMBER_PAGE;
#pragma pack(pop, vpd_sn)

//
// Device Identification Page (page code 0x83)
// Provides the means to retrieve zero or more identification descriptors
// applying to the logical unit.
//

#pragma pack(push, vpd_stuff, 1)
typedef enum _VPD_CODE_SET {
    VpdCodeSetReserved = 0,
    VpdCodeSetBinary = 1,
    VpdCodeSetAscii = 2,
    VpdCodeSetUTF8 = 3
} VPD_CODE_SET, *PVPD_CODE_SET;

typedef enum _VPD_ASSOCIATION {
    VpdAssocDevice = 0,
    VpdAssocPort = 1,
    VpdAssocTarget = 2,
    VpdAssocReserved1 = 3,
    VpdAssocReserved2 = 4       // bogus, only two bits
} VPD_ASSOCIATION, *PVPD_ASSOCIATION;

typedef enum _VPD_IDENTIFIER_TYPE {
    VpdIdentifierTypeVendorSpecific = 0,
    VpdIdentifierTypeVendorId = 1,
    VpdIdentifierTypeEUI64 = 2,
    VpdIdentifierTypeFCPHName = 3,
    VpdIdentifierTypePortRelative = 4,
    VpdIdentifierTypeTargetPortGroup = 5,
    VpdIdentifierTypeLogicalUnitGroup = 6,
    VpdIdentifierTypeMD5LogicalUnitId = 7,
    VpdIdentifierTypeSCSINameString = 8
} VPD_IDENTIFIER_TYPE, *PVPD_IDENTIFIER_TYPE;

typedef struct _VPD_IDENTIFICATION_DESCRIPTOR {
    UCHAR CodeSet : 4;          // VPD_CODE_SET
    UCHAR Reserved : 4;
    UCHAR IdentifierType : 4;   // VPD_IDENTIFIER_TYPE
    UCHAR Association : 2;
    UCHAR Reserved2 : 2;
    UCHAR Reserved3;
    UCHAR IdentifierLength;
#if !defined(__midl)
    UCHAR Identifier[0];
#endif
} VPD_IDENTIFICATION_DESCRIPTOR, *PVPD_IDENTIFICATION_DESCRIPTOR;

typedef struct _VPD_IDENTIFICATION_PAGE {
    UCHAR DeviceType : 5;
    UCHAR DeviceTypeQualifier : 3;
    UCHAR PageCode;
    UCHAR Reserved;
    UCHAR PageLength;


    //
    // The following field is actually a variable length array of identification
    // descriptors.  Unfortunately there's no C notation for an array of
    // variable length structures so we're forced to just pretend.
    //

#if !defined(__midl)
    // VPD_IDENTIFICATION_DESCRIPTOR Descriptors[0];
    UCHAR Descriptors[0];
#endif
} VPD_IDENTIFICATION_PAGE, *PVPD_IDENTIFICATION_PAGE;

//
// VPD Page 0x89, ATA Information
//
typedef struct _VPD_ATA_INFORMATION_PAGE {
    UCHAR DeviceType : 5;
    UCHAR DeviceTypeQualifier : 3;
    UCHAR PageCode;                 // 0x89
    UCHAR PageLength[2];            // 0x238 fixed size
    UCHAR Reserved0[4];
    UCHAR VendorId[8];
    UCHAR ProductId[16];
    UCHAR ProductRevisionLevel[4];
    UCHAR DeviceSignature[20];
    UCHAR CommandCode;
    UCHAR Reserved1[3];
    UCHAR IdentifyDeviceData[512];
} VPD_ATA_INFORMATION_PAGE, *PVPD_ATA_INFORMATION_PAGE;

#if (NTDDI_VERSION >= NTDDI_WIN8)
//
// VPD Page 0x8F, Third Party Copy
//
typedef struct _VPD_THIRD_PARTY_COPY_PAGE {
    UCHAR DeviceType : 5;
    UCHAR DeviceTypeQualifier : 3;
    UCHAR PageCode;                        // 0x8F
    UCHAR PageLength[2];                   // at least 0x24 if target supports Windows Offload Data Transfers
#if !defined(__midl)
    UCHAR ThirdPartyCopyDescriptors[ANYSIZE_ARRAY];
#endif
} VPD_THIRD_PARTY_COPY_PAGE, *PVPD_THIRD_PARTY_COPY_PAGE;

typedef struct _WINDOWS_BLOCK_DEVICE_TOKEN_LIMITS_DESCRIPTOR {
    UCHAR DescriptorType[2];               // 0x00
    UCHAR DescriptorLength[2];             // 0x20
    UCHAR VendorSpecific[6];
    UCHAR MaximumRangeDescriptors[2];
    UCHAR MaximumInactivityTimer[4];
    UCHAR DefaultInactivityTimer[4];
    UCHAR MaximumTokenTransferSize[8];
    UCHAR OptimalTransferCount[8];
} WINDOWS_BLOCK_DEVICE_TOKEN_LIMITS_DESCRIPTOR, *PWINDOWS_BLOCK_DEVICE_TOKEN_LIMITS_DESCRIPTOR;

#define BLOCK_DEVICE_TOKEN_LIMITS_DESCRIPTOR_TYPE_WINDOWS       0x00

#endif //(NTDDI_VERSION >= NTDDI_WIN8)

//
// VPD Page 0xB0, Block Limits
//
typedef struct _VPD_BLOCK_LIMITS_PAGE {
    UCHAR DeviceType : 5;
    UCHAR DeviceTypeQualifier : 3;
    UCHAR PageCode;                 // 0xB0
    UCHAR PageLength[2];            // 0x3C if device supports logical block provisioning, otherwise the value may be 0x10.

    union {
        struct {
            UCHAR Reserved0;

            UCHAR MaximumCompareAndWriteLength;
            UCHAR OptimalTransferLengthGranularity[2];
            UCHAR MaximumTransferLength[4];
            UCHAR OptimalTransferLength[4];
            UCHAR MaxPrefetchXDReadXDWriteTransferLength[4];
            UCHAR MaximumUnmapLBACount[4];
            UCHAR MaximumUnmapBlockDescriptorCount[4];
            UCHAR OptimalUnmapGranularity[4];
            union {
                struct {
                    UCHAR UnmapGranularityAlignmentByte3 : 7;
                    UCHAR UGAValid : 1;
                    UCHAR UnmapGranularityAlignmentByte2;
                    UCHAR UnmapGranularityAlignmentByte1;
                    UCHAR UnmapGranularityAlignmentByte0;
                };
                UCHAR UnmapGranularityAlignment[4];
            };
            UCHAR Reserved1[28];
        };
#if !defined(__midl)
        UCHAR Descriptors[0];
#endif
    };
} VPD_BLOCK_LIMITS_PAGE, *PVPD_BLOCK_LIMITS_PAGE;

//
// VPD Page 0xB1, Block Device Characteristics
//
typedef struct _VPD_BLOCK_DEVICE_CHARACTERISTICS_PAGE {
    UCHAR DeviceType : 5;
    UCHAR DeviceTypeQualifier : 3;
    UCHAR PageCode;                 // 0xB1
    UCHAR Reserved0;
    UCHAR PageLength;               // 0x3C

    UCHAR MediumRotationRateMsb;
    UCHAR MediumRotationRateLsb;
    UCHAR MediumProductType;
    UCHAR NominalFormFactor : 4;
    UCHAR Reserved2         : 4;
    UCHAR Reserved3[56];
} VPD_BLOCK_DEVICE_CHARACTERISTICS_PAGE, *PVPD_BLOCK_DEVICE_CHARACTERISTICS_PAGE;

//
// VPD Page 0xB2, Logical Block Provisioning
//

#define PROVISIONING_TYPE_UNKNOWN       0x0
#define PROVISIONING_TYPE_RESOURCE      0x1
#define PROVISIONING_TYPE_THIN          0x2

typedef struct _VPD_LOGICAL_BLOCK_PROVISIONING_PAGE {
    UCHAR DeviceType          : 5;
    UCHAR DeviceTypeQualifier : 3;
    UCHAR PageCode;                 // 0xB2
    UCHAR PageLength[2];

    UCHAR ThresholdExponent;

    UCHAR DP                : 1;
    UCHAR ANC_SUP           : 1;
    UCHAR LBPRZ             : 1;
    UCHAR Reserved0         : 2;
    UCHAR LBPWS10           : 1;
    UCHAR LBPWS             : 1;
    UCHAR LBPU              : 1;

    UCHAR ProvisioningType  : 3;
    UCHAR Reserved1         : 5;

    UCHAR Reserved2;
#if !defined(__midl)
    UCHAR ProvisioningGroupDescr[0];
#endif
} VPD_LOGICAL_BLOCK_PROVISIONING_PAGE, *PVPD_LOGICAL_BLOCK_PROVISIONING_PAGE;

//
// Supported Vital Product Data Pages Page (page code 0x00)
// Contains a list of the vital product data page cods supported by the target
// or logical unit.
//

typedef struct _VPD_SUPPORTED_PAGES_PAGE {
    UCHAR DeviceType : 5;
    UCHAR DeviceTypeQualifier : 3;
    UCHAR PageCode;
    UCHAR Reserved;
    UCHAR PageLength;
#if !defined(__midl)
    UCHAR SupportedPageList[0];
#endif
} VPD_SUPPORTED_PAGES_PAGE, *PVPD_SUPPORTED_PAGES_PAGE;
#pragma pack(pop, vpd_stuff)



#define VPD_MAX_BUFFER_SIZE                0xff

#define VPD_SUPPORTED_PAGES                0x00
#define VPD_SERIAL_NUMBER                  0x80
#define VPD_DEVICE_IDENTIFIERS             0x83
#define VPD_MEDIA_SERIAL_NUMBER            0x84
#define VPD_SOFTWARE_INTERFACE_IDENTIFIERS 0x84
#define VPD_NETWORK_MANAGEMENT_ADDRESSES   0x85
#define VPD_EXTENDED_INQUIRY_DATA          0x86
#define VPD_MODE_PAGE_POLICY               0x87
#define VPD_SCSI_PORTS                     0x88
#define VPD_ATA_INFORMATION                0x89

#define VPD_THIRD_PARTY_COPY               0x8F
#define VPD_BLOCK_LIMITS                   0xB0
#define VPD_BLOCK_DEVICE_CHARACTERISTICS   0xB1
#define VPD_LOGICAL_BLOCK_PROVISIONING     0xB2


////////////////////////////////////////////////////////////////////////////////
//
// Log page definitions
//

#define LOG_PAGE_CODE_SUPPORTED_LOG_PAGES           0x00
#define LOG_PAGE_CODE_WRITE_ERROR_COUNTERS          0x02
#define LOG_PAGE_CODE_READ_ERROR_COUNTERS           0x03
#define LOG_PAGE_CODE_LOGICAL_BLOCK_PROVISIONING    0x0C
#define LOG_PAGE_CODE_TEMPERATURE                   0x0D
#define LOG_PAGE_CODE_STARTSTOP_CYCLE_COUNTERS      0x0E
#define LOG_PAGE_CODE_SELFTEST_RESULTS              0x10
#define LOG_PAGE_CODE_SOLID_STATE_MEDIA             0x11
#define LOG_PAGE_CODE_BACKGROUND_SCAN_RESULTS       0x15
#define LOG_PAGE_CODE_INFORMATIONAL_EXCEPTIONS      0x2F


#pragma pack(push, log_page, 1)

typedef struct _LOG_PARAMETER_HEADER {

    UCHAR ParameterCode[2];                     // Bytes 0-1

    union {

        UCHAR ControlByte;                      // Byte  2

        struct {

            UCHAR FormatAndLinking : 2;         // Byte  2, bit 0-1
            UCHAR TMC : 2;                      // Byte  2, bit 2-3
            UCHAR ETC : 1;                      // Byte  2, bit 4
            UCHAR TSD : 1;                      // Byte  2, bit 5
            UCHAR Obsolete : 1;                 // Byte  2, bit 6
            UCHAR DU : 1;                       // Byte  2, bit 7
        };

    };

    UCHAR ParameterLength;                      // Byte  3

} LOG_PARAMETER_HEADER, *PLOG_PARAMETER_HEADER;

typedef struct _LOG_PARAMETER {

    LOG_PARAMETER_HEADER Header;                // Bytes 0-3

    union {

#if !defined(__midl)
        UCHAR AsByte[0];                        // Bytes 4-N
#endif

        struct _THRESHOLD_RESOURCE_COUNT {

            UCHAR ResourceCount[4];             // Bytes 4-7
            UCHAR Scope : 2;                    // Byte  5, bit 0-1
            UCHAR Reserved1 : 6;                // Byte  5, bit 2-7
            UCHAR Reserved2[3];                 // Byte  6

        } THRESHOLD_RESOURCE_COUNT;

        struct _TEMPERATURE {

            UCHAR Reserved;                     // Byte  4
            UCHAR Temperature;                  // Byte  5

        } TEMPERATURE;

        struct _DATE_OF_MANUFACTURE {

            UCHAR Year[4];                      // Bytes 4-7
            UCHAR Week[2];                      // Bytes 8-9

        } DATE_OF_MANUFACTURE;

        struct _SELF_TEST_RESULTS {

            UCHAR SelfTestResults : 4;          // Byte  4, bit 0-3
            UCHAR Reserved1 : 1;                // Byte  4, bit 4
            UCHAR SelfTestCode : 3;             // Byte  4, bit 5-7
            UCHAR SelfTestNumber;               // Byte  5
            UCHAR PowerOnHours[2];              // Bytes 6-7
            UCHAR AddressOfFirstFailure[8];     // Bytes 8-15
            UCHAR SenseKey : 4;                 // Byte 16, bit 0-3
            UCHAR Reserved2 : 4;                // Byte 16, bit 4-7
            UCHAR AdditionalSenseCode;          // Byte 17
            UCHAR AdditionalSenseCodeQualifier; // Byte 18
            UCHAR VendorSpecific;               // Byte 19

        } SELF_TEST_RESULTS;

        struct _SOLID_STATE_MEDIA {

            UCHAR Reserved[3];                  // Bytes 4-6
            UCHAR PercentageUsed;               // Byte  7

        } SOLID_STATE_MEDIA;

        struct _BACKGROUND_SCAN_STATUS {

            UCHAR PowerOnMinutes[4];            // Bytes 4-7
            UCHAR Reserved;                     // Byte  8
            UCHAR ScanStatus;                   // Byte  9
            UCHAR ScansPerformed[2];            // Bytes 10-11
            UCHAR ScanProgress[2];              // Bytes 12-13
            UCHAR MediumScansPerformed[2];      // Bytes 14-15

        } BACKGROUND_SCAN_STATUS;

        struct _INFORMATIONAL_EXCEPTIONS {

            UCHAR ASC;                              // Byte  4
            UCHAR ASCQ;                             // Byte  5
            UCHAR MostRecentTemperature;            // Byte  6
            UCHAR VendorSpecific[ANYSIZE_ARRAY];    // Bytes 7-N

        } INFORMATIONAL_EXCEPTIONS;

    };

} LOG_PARAMETER, *PLOG_PARAMETER;

typedef struct _LOG_PAGE {

    UCHAR PageCode : 6;                         // Byte  0, bit 0-5
    UCHAR SPF : 1;                              // Byte  0, bit 6
    UCHAR DS : 1;                               // Byte  0, bit 7
    UCHAR SubPageCode;                          // Byte  1
    UCHAR PageLength[2];                        // Bytes 2-3

#if !defined(__midl)
    LOG_PARAMETER Parameters[0];
#endif

} LOG_PAGE, *PLOG_PAGE;

#pragma pack(pop, log_page)


//
// Logical Block Provisioning resource count parameter codes.
//
#define LOG_PAGE_LBP_PARAMETER_CODE_AVAILABLE   0x1
#define LOG_PAGE_LBP_PARAMETER_CODE_USED        0x2

//
// Logical Block Provisioning resource count scope codes.
//
#define LOG_PAGE_LBP_RESOURCE_SCOPE_NOT_REPORTED            0x0
#define LOG_PAGE_LBP_RESOURCE_SCOPE_DEDICATED_TO_LUN        0x1
#define LOG_PAGE_LBP_RESOURCE_SCOPE_NOT_DEDICATED_TO_LUN    0x2

//
// Logical Block Provisioning threshold resource count log page parameter.
//
typedef struct _LOG_PARAMETER_THRESHOLD_RESOURCE_COUNT {
    LOG_PARAMETER_HEADER Header;
    UCHAR ResourceCount[4];
    UCHAR Scope     :2;
    UCHAR Reserved0 :6;
    UCHAR Reserved1[3];
} LOG_PARAMETER_THRESHOLD_RESOURCE_COUNT, *PLOG_PARAMETER_THRESHOLD_RESOURCE_COUNT;

//
// Logical Block Provisioning log page.
//
typedef struct _LOG_PAGE_LOGICAL_BLOCK_PROVISIONING {

    UCHAR PageCode  : 6;    // 0x0C
    UCHAR SPF       : 1;    // 0
    UCHAR DS        : 1;    // 1
    UCHAR SubPageCode;      // 0x00
    UCHAR PageLength[2];
#if !defined(__midl)
    LOG_PARAMETER_HEADER Parameters[0];
#endif

} LOG_PAGE_LOGICAL_BLOCK_PROVISIONING, *PLOG_PAGE_LOGICAL_BLOCK_PROVISIONING;


//
// Optional VERSION DESCRIPTOR fields provide the opportunity for SCSI targets to
// claim conformance with a number of standards. The INQUIRY response can contain
// any number of version descriptors between one and eight. Below values are
// excerpted from table 136 of SPC-4 specification available at http://www.t10.org
// (backup copies maintained at http://www.incits.org and // http://www.ansi.org).
//

#define VER_DESCRIPTOR_SPC4_NOVERSION       0x0460
#define VER_DESCRIPTOR_SPC4_T10_1731D_R16   0x0461
#define VER_DESCRIPTOR_SPC4_T10_1731D_R18   0x0462
#define VER_DESCRIPTOR_SPC4_T10_1731D_R23   0x0463
#define VER_DESCRIPTOR_SBC3                 0x04C0

#define VER_DESCRIPTOR_1667_NOVERSION       0xFFC0
#define VER_DESCRIPTOR_1667_2006            0xFFC1
#define VER_DESCRIPTOR_1667_2009            0xFFC2

//
// Persistent Reservation Definitions.
//

//
// PERSISTENT_RESERVE_* definitions
//

#define RESERVATION_ACTION_READ_KEYS                    0x00
#define RESERVATION_ACTION_READ_RESERVATIONS            0x01

#define RESERVATION_ACTION_REGISTER                     0x00
#define RESERVATION_ACTION_RESERVE                      0x01
#define RESERVATION_ACTION_RELEASE                      0x02
#define RESERVATION_ACTION_CLEAR                        0x03
#define RESERVATION_ACTION_PREEMPT                      0x04
#define RESERVATION_ACTION_PREEMPT_ABORT                0x05
#define RESERVATION_ACTION_REGISTER_IGNORE_EXISTING     0x06

#define RESERVATION_SCOPE_LU                            0x00
#define RESERVATION_SCOPE_ELEMENT                       0x02

#define RESERVATION_TYPE_WRITE_EXCLUSIVE                0x01
#define RESERVATION_TYPE_EXCLUSIVE                      0x03
#define RESERVATION_TYPE_WRITE_EXCLUSIVE_REGISTRANTS    0x05
#define RESERVATION_TYPE_EXCLUSIVE_REGISTRANTS          0x06

//
// Structures for reserve in command.
//

#pragma pack(push, reserve_in_stuff, 1)
typedef struct {
    UCHAR Generation[4];
    UCHAR AdditionalLength[4];
#if !defined(__midl)
    UCHAR ReservationKeyList[0][8];
#endif
} PRI_REGISTRATION_LIST, *PPRI_REGISTRATION_LIST;

typedef struct {
    UCHAR ReservationKey[8];
    UCHAR ScopeSpecificAddress[4];
    UCHAR Reserved;
    UCHAR Type : 4;
    UCHAR Scope : 4;
    UCHAR Obsolete[2];
} PRI_RESERVATION_DESCRIPTOR, *PPRI_RESERVATION_DESCRIPTOR;

typedef struct {
    UCHAR Generation[4];
    UCHAR AdditionalLength[4];
#if !defined(__midl)
    PRI_RESERVATION_DESCRIPTOR Reservations[0];
#endif
} PRI_RESERVATION_LIST, *PPRI_RESERVATION_LIST;
#pragma pack(pop, reserve_in_stuff)

//
// Structures for reserve out command.
//

#pragma pack(push, reserve_out_stuff, 1)
typedef struct {
    UCHAR ReservationKey[8];
    UCHAR ServiceActionReservationKey[8];
    UCHAR ScopeSpecificAddress[4];
    UCHAR ActivatePersistThroughPowerLoss : 1;
    UCHAR Reserved1 : 7;
    UCHAR Reserved2;
    UCHAR Obsolete[2];
} PRO_PARAMETER_LIST, *PPRO_PARAMETER_LIST;
#pragma pack(pop, reserve_out_stuff)


#if (NTDDI_VERSION >= NTDDI_WIN8)

#define BLOCK_DEVICE_TOKEN_SIZE         512

//
// Stuctures for Token Operation and Receive Token Information commands
//

#pragma pack(push, windows_token_operation, 1)
typedef struct {
    UCHAR LogicalBlockAddress[8];
    UCHAR TransferLength[4];
    UCHAR Reserved[4];
} BLOCK_DEVICE_RANGE_DESCRIPTOR, *PBLOCK_DEVICE_RANGE_DESCRIPTOR;

typedef struct {
    UCHAR PopulateTokenDataLength[2];
    UCHAR Immediate : 1;
    UCHAR Reserved1 : 7;
    UCHAR Reserved2;
    UCHAR InactivityTimeout[4];
    UCHAR Reserved3[6];
    UCHAR BlockDeviceRangeDescriptorListLength[2];
#if !defined(__midl)
    UCHAR BlockDeviceRangeDescriptor[ANYSIZE_ARRAY];
#endif
} POPULATE_TOKEN_HEADER, *PPOPULATE_TOKEN_HEADER;

typedef struct {
    UCHAR WriteUsingTokenDataLength[2];
    UCHAR Immediate : 1;
    UCHAR Reserved1 : 7;
    UCHAR Reserved2[5];
    UCHAR BlockOffsetIntoToken[8];
    UCHAR Token[BLOCK_DEVICE_TOKEN_SIZE];
    UCHAR Reserved3[6];
    UCHAR BlockDeviceRangeDescriptorListLength[2];
#if !defined(__midl)
    UCHAR BlockDeviceRangeDescriptor[ANYSIZE_ARRAY];
#endif
} WRITE_USING_TOKEN_HEADER, *PWRITE_USING_TOKEN_HEADER;

typedef struct {
    UCHAR AvailableData[4];
    UCHAR ResponseToServiceAction : 5;
    UCHAR Reserved1               : 3;
    UCHAR OperationStatus         : 7;
    UCHAR Reserved2               : 1;
    UCHAR OperationCounter[2];
    UCHAR EstimatedStatusUpdateDelay[4];
    UCHAR CompletionStatus;
    UCHAR SenseDataFieldLength;
    UCHAR SenseDataLength;
    UCHAR TransferCountUnits;
    UCHAR TransferCount[8];
    UCHAR SegmentsProcessed[2];
    UCHAR Reserved3[6];
#if !defined(__midl)
    UCHAR SenseData[ANYSIZE_ARRAY];
#endif
} RECEIVE_TOKEN_INFORMATION_HEADER, *PRECEIVE_TOKEN_INFORMATION_HEADER;

typedef struct {
    UCHAR TokenDescriptorsLength[4];
#if !defined(__midl)
    UCHAR TokenDescriptor[ANYSIZE_ARRAY];
#endif
} RECEIVE_TOKEN_INFORMATION_RESPONSE_HEADER, *PRECEIVE_TOKEN_INFORMATION_RESPONSE_HEADER;

typedef struct {
    UCHAR TokenIdentifier[2];
    UCHAR Token[BLOCK_DEVICE_TOKEN_SIZE];
} BLOCK_DEVICE_TOKEN_DESCRIPTOR, *PBLOCK_DEVICE_TOKEN_DESCRIPTOR;

typedef enum _OPERATION_STATUS {
    OPERATION_COMPLETED_WITH_SUCCESS = 0x01,
    OPERATION_COMPLETED_WITH_ERROR = 0x02,
    OPERATION_COMPLETED_WITH_RESIDUAL_DATA = 0x03,
    OPERATION_IN_PROGRESS_IN_FOREGROUND = 0x11,
    OPERATION_IN_PROGRESS_IN_BACKGROUND = 0x12,
    OPERATION_TERMINATED = 0x60
} OPERATION_STATUS, *POPERATION_STATUS;

typedef enum _TRANSFER_COUNT_UNITS {            // Multiplier to convert a Transfer Count field to bytes
    TRANSFER_COUNT_UNITS_BYTES         = 0,     // 1
    TRANSFER_COUNT_UNITS_KIBIBYTES     = 1,     // 2^10 or 1024
    TRANSFER_COUNT_UNITS_MEBIBYTES     = 2,     // 2^20
    TRANSFER_COUNT_UNITS_GIBIBYTES     = 3,     // 2^30
    TRANSFER_COUNT_UNITS_TEBIBYTES     = 4,     // 2^40
    TRANSFER_COUNT_UNITS_PEBIBYTES     = 5,     // 2^50
    TRANSFER_COUNT_UNITS_EXBIBYTES     = 6,     // 2^60
    TRANSFER_COUNT_UNITS_NUMBER_BLOCKS = 0xF1   // Logical Block Length In Bytes (from ReadCapacity)
} TRANSFER_COUNT_UNITS, *PTRANSFER_COUNT_UNITS;
#pragma pack(pop, windows_token_operation)

#endif //(NTDDI_VERSION >= NTDDI_WIN8)

//
// SANITIZE related definition
//
#pragma pack(push, sanitize, 1)
typedef struct _OVERWRITE_PARAMETER_LIST {
    UCHAR OverWriteCount : 5;
    UCHAR Test           : 2;
    UCHAR Invert         : 1;
    UCHAR Reserved1;
    UCHAR InitializationPatternLength[2];
#if !defined(__midl)
    UCHAR InitializationPattern[ANYSIZE_ARRAY];
#endif
} OVERWRITE_PARAMETER_LIST, *POVERWRITE_PARAMETER_LIST;
#pragma pack(pop, sanitize)

//
// SCSIOP_WRITE_DATA_BUFF related definition
//
#define SCSI_WRITE_BUFFER_MODE_0D_MODE_SPECIFIC_VSE_ACT   0x01
#define SCSI_WRITE_BUFFER_MODE_0D_MODE_SPECIFIC_HR_ACT    0x02
#define SCSI_WRITE_BUFFER_MODE_0D_MODE_SPECIFIC_PO_ACT    0x04

//
// Sense Data Format
//

#pragma pack(push, sensedata, 1)
typedef struct _SENSE_DATA {
    UCHAR ErrorCode:7;
    UCHAR Valid:1;
    UCHAR SegmentNumber;
    UCHAR SenseKey:4;
    UCHAR Reserved:1;
    UCHAR IncorrectLength:1;
    UCHAR EndOfMedia:1;
    UCHAR FileMark:1;
    UCHAR Information[4];
    UCHAR AdditionalSenseLength;
    UCHAR CommandSpecificInformation[4];
    UCHAR AdditionalSenseCode;
    UCHAR AdditionalSenseCodeQualifier;
    UCHAR FieldReplaceableUnitCode;
    UCHAR SenseKeySpecific[3];
} SENSE_DATA, *PSENSE_DATA;
#pragma pack(pop, sensedata)

#pragma pack(push, sensedata_ex, 1)

//
// NOTE: Sense Data Descriptor Format is supported only in Windows 8 and later
//

typedef struct _SCSI_SENSE_DESCRIPTOR_HEADER {
    UCHAR DescriptorType;
    UCHAR AdditionalLength;
} SCSI_SENSE_DESCRIPTOR_HEADER, *PSCSI_SENSE_DESCRIPTOR_HEADER;

//
// Information Sense Data Descriptor Format
//
typedef struct _SCSI_SENSE_DESCRIPTOR_INFORMATION {
    SCSI_SENSE_DESCRIPTOR_HEADER Header;
    UCHAR Valid:1;
    UCHAR Reserved1:7;
    UCHAR Reserved2;
    UCHAR Information[8];
} SCSI_SENSE_DESCRIPTOR_INFORMATION, *PSCSI_SENSE_DESCRIPTOR_INFORMATION;

//
// Block Command Sense Data Descriptor Format
//
typedef struct _SCSI_SENSE_DESCRIPTOR_BLOCK_COMMAND {
    SCSI_SENSE_DESCRIPTOR_HEADER Header;
    UCHAR Reserved1;
    UCHAR Reserved2:5;
    UCHAR IncorrectLength:1;
    UCHAR Reserved3:2;
} SCSI_SENSE_DESCRIPTOR_BLOCK_COMMAND, *PSCSI_SENSE_DESCRIPTOR_BLOCK_COMMAND;

//
// ATA Status Return Descriptor Format
//
typedef struct _SCSI_SENSE_DESCRIPTOR_ATA_STATUS_RETURN {
    SCSI_SENSE_DESCRIPTOR_HEADER Header;
    UCHAR Extend:1;
    UCHAR Reserved1:7;
    UCHAR Error;
    UCHAR SectorCount15_8;
    UCHAR SectorCount7_0;
    UCHAR LbaLow15_8;
    UCHAR LbaLow7_0;
    UCHAR LbaMid15_8;
    UCHAR LbaMid7_0;
    UCHAR LbaHigh15_8;
    UCHAR LbaHigh7_0;
    UCHAR Device;
    UCHAR Status;
} SCSI_SENSE_DESCRIPTOR_ATA_STATUS_RETURN, *PSCSI_SENSE_DESCRIPTOR_ATA_STATUS_RETURN;

//
// Fixed Sense Data Format
//
typedef struct _SENSE_DATA FIXED_SENSE_DATA, *PFIXED_SENSE_DATA;

//
// Descriptor Sense Data Format
//
typedef struct _DESCRIPTOR_SENSE_DATA {
    UCHAR ErrorCode:7;
    UCHAR Reserved1:1;
    UCHAR SenseKey:4;
    UCHAR Reserved2:4;
    UCHAR AdditionalSenseCode;
    UCHAR AdditionalSenseCodeQualifier;
    UCHAR Reserved3[3];
    UCHAR AdditionalSenseLength;
    UCHAR DescriptorBuffer[ANYSIZE_ARRAY];
} DESCRIPTOR_SENSE_DATA, *PDESCRIPTOR_SENSE_DATA;

typedef union _SENSE_DATA_EX {

    //
    // Sense data in fixed format
    //
    FIXED_SENSE_DATA FixedData;

    //
    // Sense data in descriptor format
    //
    DESCRIPTOR_SENSE_DATA DescriptorData;

} SENSE_DATA_EX, *PSENSE_DATA_EX;

#pragma pack(pop, sensedata_ex)

//
// Default request sense buffer size
//

#define SENSE_BUFFER_SIZE sizeof(SENSE_DATA)

#define SENSE_BUFFER_SIZE_EX sizeof(SENSE_DATA_EX)

//
// Maximum request sense buffer size
//

#define MAX_SENSE_BUFFER_SIZE 255

//
// Maximum number of additional sense bytes.
//

#define MAX_ADDITIONAL_SENSE_BYTES (MAX_SENSE_BUFFER_SIZE - SENSE_BUFFER_SIZE)

#define MAX_ADDITIONAL_SENSE_BYTES_EX (MAX_SENSE_BUFFER_SIZE - SENSE_BUFFER_SIZE_EX)

//
// Sense Data Error Codes
//

#define SCSI_SENSE_ERRORCODE_FIXED_CURRENT        0x70
#define SCSI_SENSE_ERRORCODE_FIXED_DEFERRED       0x71
#define SCSI_SENSE_ERRORCODE_DESCRIPTOR_CURRENT   0x72
#define SCSI_SENSE_ERRORCODE_DESCRIPTOR_DEFERRED  0x73

//
// Sense Data Descriptor Types
//

#define SCSI_SENSE_DESCRIPTOR_TYPE_INFORMATION                  0x00
#define SCSI_SENSE_DESCRIPTOR_TYPE_COMMAND_SPECIFIC             0x01
#define SCSI_SENSE_DESCRIPTOR_TYPE_SENSE_KEY_SPECIFIC           0x02
#define SCSI_SENSE_DESCRIPTOR_TYPE_FIELD_REPLACEABLE_UNIT       0x03
#define SCSI_SENSE_DESCRIPTOR_TYPE_STREAM_COMMAND               0x04
#define SCSI_SENSE_DESCRIPTOR_TYPE_BLOCK_COMMAND                0x05
#define SCSI_SENSE_DESCRIPTOR_TYPE_OSD_OBJECT_IDENTIFICATION    0x06
#define SCSI_SENSE_DESCRIPTOR_TYPE_OSD_RESPONSE_INTEGRITY_CHECK 0x07
#define SCSI_SENSE_DESCRIPTOR_TYPE_OSD_ATTRIBUTE_IDENTIFICATION 0x08
#define SCSI_SENSE_DESCRIPTOR_TYPE_ATA_STATUS_RETURN            0x09
#define SCSI_SENSE_DESCRIPTOR_TYPE_PROGRESS_INDICATION          0x0A
#define SCSI_SENSE_DESCRIPTOR_TYPE_USER_DATA_SEGMENT_REFERRAL   0x0B
#define SCSI_SENSE_DESCRIPTOR_TYPE_FORWARDED_SENSE_DATA         0x0C

//
// Sense Keys
//

#define SCSI_SENSE_NO_SENSE         0x00
#define SCSI_SENSE_RECOVERED_ERROR  0x01
#define SCSI_SENSE_NOT_READY        0x02
#define SCSI_SENSE_MEDIUM_ERROR     0x03
#define SCSI_SENSE_HARDWARE_ERROR   0x04
#define SCSI_SENSE_ILLEGAL_REQUEST  0x05
#define SCSI_SENSE_UNIT_ATTENTION   0x06
#define SCSI_SENSE_DATA_PROTECT     0x07
#define SCSI_SENSE_BLANK_CHECK      0x08
#define SCSI_SENSE_UNIQUE           0x09
#define SCSI_SENSE_COPY_ABORTED     0x0A
#define SCSI_SENSE_ABORTED_COMMAND  0x0B
#define SCSI_SENSE_EQUAL            0x0C
#define SCSI_SENSE_VOL_OVERFLOW     0x0D
#define SCSI_SENSE_MISCOMPARE       0x0E
#define SCSI_SENSE_RESERVED         0x0F

//
// Additional tape bit
//

#define SCSI_ILLEGAL_LENGTH         0x20
#define SCSI_EOM                    0x40
#define SCSI_FILE_MARK              0x80

//
// Additional Sense codes
//

#define SCSI_ADSENSE_NO_SENSE                              0x00
#define SCSI_ADSENSE_NO_SEEK_COMPLETE                      0x02
#define SCSI_ADSENSE_WRITE                                 0x03
#define SCSI_ADSENSE_LUN_NOT_READY                         0x04
#define SCSI_ADSENSE_LUN_COMMUNICATION                     0x08
#define SCSI_ADSENSE_SERVO_ERROR                           0x09
#define SCSI_ADSENSE_WARNING                               0x0B
#define SCSI_ADSENSE_WRITE_ERROR                           0x0C
#define SCSI_ADSENSE_COPY_TARGET_DEVICE_ERROR              0x0D
#define SCSI_ADSENSE_UNRECOVERED_ERROR                     0x11
#define SCSI_ADSENSE_TRACK_ERROR                           0x14
#define SCSI_ADSENSE_SEEK_ERROR                            0x15
#define SCSI_ADSENSE_REC_DATA_NOECC                        0x17
#define SCSI_ADSENSE_REC_DATA_ECC                          0x18
#define SCSI_ADSENSE_DEFECT_LIST_ERROR                     0x19
#define SCSI_ADSENSE_PARAMETER_LIST_LENGTH                 0x1A
#define SCSI_ADSENSE_MISCOMPARE_DURING_VERIFY_OPERATION    0x1D
#define SCSI_ADSENSE_ILLEGAL_COMMAND                       0x20
#define SCSI_ADSENSE_ACCESS_DENIED                         0x20
#define SCSI_ADSENSE_ILLEGAL_BLOCK                         0x21
#define SCSI_ADSENSE_INVALID_TOKEN                         0x23
#define SCSI_ADSENSE_INVALID_CDB                           0x24
#define SCSI_ADSENSE_INVALID_LUN                           0x25
#define SCSI_ADSENSE_INVALID_FIELD_PARAMETER_LIST          0x26
#define SCSI_ADSENSE_WRITE_PROTECT                         0x27
#define SCSI_ADSENSE_MEDIUM_CHANGED                        0x28
#define SCSI_ADSENSE_BUS_RESET                             0x29
#define SCSI_ADSENSE_PARAMETERS_CHANGED                    0x2A
#define SCSI_ADSENSE_INSUFFICIENT_TIME_FOR_OPERATION       0x2E
#define SCSI_ADSENSE_INVALID_MEDIA                         0x30
#define SCSI_ADSENSE_DEFECT_LIST                           0x32
#define SCSI_ADSENSE_LB_PROVISIONING                       0x38
#define SCSI_ADSENSE_NO_MEDIA_IN_DEVICE                    0x3a
#define SCSI_ADSENSE_POSITION_ERROR                        0x3b
#define SCSI_ADSENSE_LOGICAL_UNIT_ERROR                    0x3e
#define SCSI_ADSENSE_OPERATING_CONDITIONS_CHANGED          0x3f
#define SCSI_ADSENSE_DATA_PATH_FAILURE                     0x41
#define SCSI_ADSENSE_POWER_ON_SELF_TEST_FAILURE            0x42
#define SCSI_ADSENSE_INTERNAL_TARGET_FAILURE               0x44
#define SCSI_ADSENSE_DATA_TRANSFER_ERROR                   0x4b
#define SCSI_ADSENSE_LUN_FAILED_SELF_CONFIGURATION         0x4c
#define SCSI_ADSENSE_RESOURCE_FAILURE                      0x55
#define SCSI_ADSENSE_OPERATOR_REQUEST                      0x5a // see below
#define SCSI_ADSENSE_FAILURE_PREDICTION_THRESHOLD_EXCEEDED 0x5d
#define SCSI_ADSENSE_ILLEGAL_MODE_FOR_THIS_TRACK           0x64
#define SCSI_ADSENSE_COPY_PROTECTION_FAILURE               0x6f
#define SCSI_ADSENSE_POWER_CALIBRATION_ERROR               0x73
#define SCSI_ADSENSE_VENDOR_UNIQUE                         0x80 // and higher
#define SCSI_ADSENSE_MUSIC_AREA                            0xA0
#define SCSI_ADSENSE_DATA_AREA                             0xA1
#define SCSI_ADSENSE_VOLUME_OVERFLOW                       0xA7

// for legacy apps:
#define SCSI_ADWRITE_PROTECT                        SCSI_ADSENSE_WRITE_PROTECT
#define SCSI_FAILURE_PREDICTION_THRESHOLD_EXCEEDED  SCSI_ADSENSE_FAILURE_PREDICTION_THRESHOLD_EXCEEDED


//
// SCSI_ADSENSE_NO_SENSE (0x00) qualifiers
//

#define SCSI_SENSEQ_OPERATION_IS_IN_PROGRESS     0x16

//
// SCSI_ADSENSE_WRITE (0x03) qualifiers
//
#define SCSI_SENSEQ_PERIPHERAL_DEVICE_WRITE_FAULT   0x00
#define SCSI_SENSEQ_NO_WRITE_CURRENT                0x01
#define SCSI_SENSEQ_EXCESSIVE_WRITE_ERRORS          0x02

//
// SCSI_ADSENSE_LUN_NOT_READY (0x04) qualifiers
//

#define SCSI_SENSEQ_CAUSE_NOT_REPORTABLE         0x00
#define SCSI_SENSEQ_BECOMING_READY               0x01
#define SCSI_SENSEQ_INIT_COMMAND_REQUIRED        0x02
#define SCSI_SENSEQ_MANUAL_INTERVENTION_REQUIRED 0x03
#define SCSI_SENSEQ_FORMAT_IN_PROGRESS           0x04
#define SCSI_SENSEQ_REBUILD_IN_PROGRESS          0x05
#define SCSI_SENSEQ_RECALCULATION_IN_PROGRESS    0x06
#define SCSI_SENSEQ_OPERATION_IN_PROGRESS        0x07
#define SCSI_SENSEQ_LONG_WRITE_IN_PROGRESS       0x08
#define SCSI_SENSEQ_SPACE_ALLOC_IN_PROGRESS      0x14

//
// SCSI_ADSENSE_LUN_COMMUNICATION (0x08) qualifiers
//

#define SCSI_SENSEQ_COMM_FAILURE                 0x00
#define SCSI_SENSEQ_COMM_TIMEOUT                 0x01
#define SCSI_SENSEQ_COMM_PARITY_ERROR            0x02
#define SCSI_SESNEQ_COMM_CRC_ERROR               0x03
#define SCSI_SENSEQ_UNREACHABLE_TARGET           0x04

//
// SCSI_ADSENSE_SERVO_ERROR (0x09) qualifiers
// 
#define SCSI_SENSEQ_TRACK_FOLLOWING_ERROR   0x00
#define SCSI_SENSEQ_TRACKING_SERVO_FAILURE  0x01
#define SCSI_SENSEQ_FOCUS_SERVO_FAILURE     0x02
#define SCSI_SENSEQ_SPINDLE_SERVO_FAILURE   0x03
#define SCSI_SENSEQ_HEAD_SELECT_FAULT       0x04

//
// SCSI_ADSENSE_WARNING (0x0B) qualifiers
//
#define SCSI_SENSEQ_POWER_LOSS_EXPECTED          0x08

//
// SCSI_ADSENSE_WRITE_ERROR (0x0C) qualifiers
//
#define SCSI_SENSEQ_LOSS_OF_STREAMING            0x09
#define SCSI_SENSEQ_PADDING_BLOCKS_ADDED         0x0A

//
// SCSI_ADSENSE_COPY_TARGET_DEVICE_ERROR (0x0D) qualifiers
//

#define SCSI_SENSEQ_NOT_REACHABLE                0x02
#define SCSI_SENSEQ_DATA_UNDERRUN                0x04

//
// SCSI_ADSENSE_UNRECOVERED_ERROR (0x11) qualifiers
//

#define SCSI_SENSEQ_UNRECOVERED_READ_ERROR       0x00

//
// SCSI_ADSENSE_SEEK_ERROR (0x15) qualifiers
//
#define SCSI_SENSEQ_RANDOM_POSITIONING_ERROR                        0x00
#define SCSI_SENSEQ_MECHANICAL_POSITIONING_ERROR                    0x01
#define SCSI_SENSEQ_POSITIONING_ERROR_DETECTED_BY_READ_OF_MEDIUM    0x02

//
// SCSI_ADSENSE_DEFECT_LIST_ERROR (0x19) qualifiers
//
#define SCSI_SENSEQ_DEFECT_LIST_ERROR                  0x00
#define SCSI_SENSEQ_DEFECT_LIST_NOT_AVAILABLE          0x01
#define SCSI_SENSEQ_DEFECT_LIST_ERROR_IN_PRIMARY_LIST  0x02
#define SCSI_SENSEQ_DEFECT_LIST_ERROR_IN_GROWN_LIST    0x03

//
// SCSI_ADSENSE_NO_SENSE (0x00) qualifiers
//

#define SCSI_SENSEQ_FILEMARK_DETECTED            0x01
#define SCSI_SENSEQ_END_OF_MEDIA_DETECTED        0x02
#define SCSI_SENSEQ_SETMARK_DETECTED             0x03
#define SCSI_SENSEQ_BEGINNING_OF_MEDIA_DETECTED  0x04

//
// SCSI_ADSENSE_ACCESS_DENIED (0x20) qualifiers
//

#define SCSI_SENSEQ_NO_ACCESS_RIGHTS             0x02

//
// SCSI_ADSENSE_ILLEGAL_BLOCK (0x21) qualifiers
//

#define SCSI_SENSEQ_ILLEGAL_ELEMENT_ADDR         0x01

//
// SCSI_ADSENSE_INVALID_FIELD_PARAMETER_LIST (0x26) qualifiers
//

#define SCSI_SENSEQ_INVALID_RELEASE_OF_PERSISTENT_RESERVATION 0x04
#define SCSI_SENSEQ_TOO_MANY_SEGMENT_DESCRIPTORS 0x08

//
// SCSI_ADSENSE_WRITE_PROTECT (0x27) qualifiers
//

#define SCSI_SENSEQ_SPACE_ALLOC_FAILED_WRITE_PROTECT 0x07

//
// SCSI_ADSENSE_PARAMETERS_CHANGED (0x2A) qualifiers
//

#define SCSI_SENSEQ_CAPACITY_DATA_CHANGED        0x09

//
// SCSI_ADSENSE_POSITION_ERROR (0x3b) qualifiers
//

#define SCSI_SENSEQ_DESTINATION_FULL             0x0d
#define SCSI_SENSEQ_SOURCE_EMPTY                 0x0e

//
// SCSI_ADSENSE_INVALID_MEDIA (0x30) qualifiers
//

#define SCSI_SENSEQ_INCOMPATIBLE_MEDIA_INSTALLED 0x00
#define SCSI_SENSEQ_UNKNOWN_FORMAT 0x01
#define SCSI_SENSEQ_INCOMPATIBLE_FORMAT 0x02
#define SCSI_SENSEQ_CLEANING_CARTRIDGE_INSTALLED 0x03

//
// SCSI_ADSENSE_DEFECT_LIST (0x32) qualifiers
//
#define SCSI_SENSEQ_NO_DEFECT_SPARE_LOCATION_AVAILABLE  0x00
#define SCSI_SENSEQ_DEFECT_LIST_UPDATE_FAILURE          0x01

//
// SCSI_ADSENSE_LB_PROVISIONING (0x38) qualifiers
//
#define SCSI_SENSEQ_SOFT_THRESHOLD_REACHED 0x07

//
// SCSI_ADSENSE_LOGICAL_UNIT_ERROR (0x3e) qualifiers
//

#define SCSI_SENSEQ_LOGICAL_UNIT_HAS_NOT_SELF_CONFIGURED_YET    0x00
#define SCSI_SENSEQ_LOGICAL_UNIT_FAILURE                        0x01
#define SCSI_SENSEQ_TIMEOUT_ON_LOGICAL_UNIT                     0x02
#define SCSI_SENSEQ_LOGICAL_UNIT_FAILED_SELF_TEST               0x03
#define SCSI_SENSEQ_LOGICAL_UNIT_FAILED_TO_UPDATE_SELF_TEST_LOG 0x04

//
// SCSI_ADSENSE_OPERATING_CONDITIONS_CHANGED (0x3f) qualifiers
//

#define SCSI_SENSEQ_TARGET_OPERATING_CONDITIONS_CHANGED 0x00
#define SCSI_SENSEQ_MICROCODE_CHANGED                   0x01
#define SCSI_SENSEQ_OPERATING_DEFINITION_CHANGED        0x02
#define SCSI_SENSEQ_INQUIRY_DATA_CHANGED                0x03
#define SCSI_SENSEQ_COMPONENT_DEVICE_ATTACHED           0x04
#define SCSI_SENSEQ_DEVICE_IDENTIFIER_CHANGED           0x05
#define SCSI_SENSEQ_REDUNDANCY_GROUP_MODIFIED           0x06
#define SCSI_SENSEQ_REDUNDANCY_GROUP_DELETED            0x07
#define SCSI_SENSEQ_SPARE_MODIFIED                      0x08
#define SCSI_SENSEQ_SPARE_DELETED                       0x09
#define SCSI_SENSEQ_VOLUME_SET_MODIFIED                 0x0A
#define SCSI_SENSEQ_VOLUME_SET_DELETED                  0x0B
#define SCSI_SENSEQ_VOLUME_SET_DEASSIGNED               0x0C
#define SCSI_SENSEQ_VOLUME_SET_REASSIGNED               0x0D
#define SCSI_SENSEQ_REPORTED_LUNS_DATA_CHANGED          0x0E
#define SCSI_SENSEQ_ECHO_BUFFER_OVERWRITTEN             0x0F
#define SCSI_SENSEQ_MEDIUM_LOADABLE                     0x10
#define SCSI_SENSEQ_MEDIUM_AUXILIARY_MEMORY_ACCESSIBLE  0x11

//
// SCSI_ADSENSE_INTERNAL_TARGET_FAILURE (0x44) qualifiers
//
#define SCSI_SENSEQ_INTERNAL_TARGET_FAILURE                 0x00
#define SCSI_SENSEQ_PRESISTENT_RESERVATION_INFORMATION_LOST 0x01
#define SCSI_SENSEQ_ATA_DEVICE_FAILED_SET_FEATURES          0x71

//
// SCSI_ADSENSE_DATA_TRANSFER_ERROR (0x4b) qualifiers
//

#define SCSI_SENSEQ_INITIATOR_RESPONSE_TIMEOUT          0x06

//
// SCSI_ADSENSE_RESOURCE_FAILURE (0x55) qualifiers
//
#define SCSI_SENSEQ_SYSTEM_RESOURCE_FAILURE             0x00
#define SCSI_SENSEQ_SYSTEM_BUFFER_FULL                  0x01
#define SCSI_SENSEQ_INSUFFICIENT_RESERVATION_RESOURCES  0x02
#define SCSI_SENSEQ_INSUFFICIENT_RESOURCES              0x03

//
// SCSI_ADSENSE_OPERATOR_REQUEST (0x5a) qualifiers
//

#define SCSI_SENSEQ_STATE_CHANGE_INPUT                  0x00 // generic request
#define SCSI_SENSEQ_MEDIUM_REMOVAL                      0x01
#define SCSI_SENSEQ_WRITE_PROTECT_ENABLE                0x02
#define SCSI_SENSEQ_WRITE_PROTECT_DISABLE               0x03

//
// SCSI_ADSENSE_FAILURE_PREDICTION_THRESHOLD_EXCEEDED (0x5d) qualifiers
//
#define SCSI_SENSEQ_FAILURE_PREDICTION_THRESHOLD_EXCEEDED               0x00
#define SCSI_SENSEQ_MEDIA_FAILURE_PREDICTION_THRESHOLD_EXCEEDED         0x01
#define SCSI_SENSEQ_LUN_FAILURE_PREDICTION_THRESHOLD_EXCEEDED           0x02
#define SCSI_SENSEQ_SPARE_AREA_EXHAUSTION_PREDICTION_THRESHOLD_EXCEEDED 0x03
#define SCSI_SENSEQ_GENERAL_HARD_DRIVE_FAILURE                          0x10
#define SCSI_SENSEQ_DRIVE_ERROR_RATE_TOO_HIGH                           0x11
#define SCSI_SENSEQ_DATA_ERROR_RATE_TOO_HIGH                            0x12
#define SCSI_SENSEQ_SEEK_ERROR_RATE_TOO_HIGH                            0x13
#define SCSI_SENSEQ_TOO_MANY_BLOCK_REASSIGNS                            0x14
#define SCSI_SENSEQ_ACCESS_TIMES_TOO_HIGH                               0x15
#define SCSI_SENSEQ_START_UNIT_TIMES_TOO_HIGH                           0x16
#define SCSI_SENSEQ_CHANNEL_PARAMETRICS                                 0x17
#define SCSI_SENSEQ_CONTROLLER_DETECTED                                 0x18
#define SCSI_SENSEQ_THROUGHPUT_PERFORMANCE                              0x19
#define SCSI_SENSEQ_SEEK_TIME_PERFORMANCE                               0x1A
#define SCSI_SENSEQ_SPIN_UP_RETRY_COUNT                                 0x1B
#define SCSI_SENSEQ_DRIVE_CALIBRATION_RETRY_COUNT                       0x1C
#define SCSI_SENSEQ_DATA_CHANNEL_DATA_ERROR_RATE_TOO_HIGH               0x32
#define SCSI_SENSEQ_SERVO_DATA_ERROR_RATE_TOO_HIGH                      0x42
#define SCSI_SENSEQ_SERVER_SEEK_ERROR_RATE_TOO_HIGH                     0x43
#define SCSI_SENSEQ_FAILURE_PREDICTION_THRESHOLD_EXCEEDED_FALSE         0xFF

//
// SCSI_ADSENSE_COPY_PROTECTION_FAILURE (0x6f) qualifiers
//
#define SCSI_SENSEQ_AUTHENTICATION_FAILURE                          0x00
#define SCSI_SENSEQ_KEY_NOT_PRESENT                                 0x01
#define SCSI_SENSEQ_KEY_NOT_ESTABLISHED                             0x02
#define SCSI_SENSEQ_READ_OF_SCRAMBLED_SECTOR_WITHOUT_AUTHENTICATION 0x03
#define SCSI_SENSEQ_MEDIA_CODE_MISMATCHED_TO_LOGICAL_UNIT           0x04
#define SCSI_SENSEQ_LOGICAL_UNIT_RESET_COUNT_ERROR                  0x05

//
// SCSI_ADSENSE_POWER_CALIBRATION_ERROR (0x73) qualifiers
//

#define SCSI_SENSEQ_POWER_CALIBRATION_AREA_ALMOST_FULL  0x01
#define SCSI_SENSEQ_POWER_CALIBRATION_AREA_FULL         0x02
#define SCSI_SENSEQ_POWER_CALIBRATION_AREA_ERROR        0x03
#define SCSI_SENSEQ_PMA_RMA_UPDATE_FAILURE              0x04
#define SCSI_SENSEQ_PMA_RMA_IS_FULL                     0x05
#define SCSI_SENSEQ_PMA_RMA_ALMOST_FULL                 0x06




//
// Read Capacity Data - returned in Big Endian format
//

#pragma pack(push, read_capacity, 1)
typedef struct _READ_CAPACITY_DATA {
    ULONG LogicalBlockAddress;
    ULONG BytesPerBlock;
} READ_CAPACITY_DATA, *PREAD_CAPACITY_DATA;
#pragma pack(pop, read_capacity)


#pragma pack(push, read_capacity_ex, 1)
typedef struct _READ_CAPACITY_DATA_EX {
    LARGE_INTEGER LogicalBlockAddress;
    ULONG BytesPerBlock;
} READ_CAPACITY_DATA_EX, *PREAD_CAPACITY_DATA_EX;
#pragma pack(pop, read_capacity_ex)


#pragma pack(push, read_capacity16, 1)
typedef struct _READ_CAPACITY16_DATA {
    LARGE_INTEGER LogicalBlockAddress;
    ULONG BytesPerBlock;
    UCHAR ProtectionEnable : 1;
    UCHAR ProtectionType : 3;
    UCHAR Reserved : 4;
    UCHAR LogicalPerPhysicalExponent : 4;
    UCHAR Reserved1 : 4;
    UCHAR LowestAlignedBlock_MSB : 6;
    UCHAR LBPRZ : 1;
    UCHAR LBPME : 1;
    UCHAR LowestAlignedBlock_LSB;
    UCHAR Reserved3[16];
} READ_CAPACITY16_DATA, *PREAD_CAPACITY16_DATA;
#pragma pack(pop, read_capacity16)


//
// Get LBA Status structures, returned in Big Endian format.
//
#pragma pack(push, get_lba_status, 1)
typedef struct _LBA_STATUS_DESCRIPTOR {
    ULONGLONG StartingLBA;
    ULONG LogicalBlockCount;
    UCHAR ProvisioningStatus : 4;
    UCHAR Reserved1 : 4;
    UCHAR Reserved2[3];
} LBA_STATUS_DESCRIPTOR, *PLBA_STATUS_DESCRIPTOR;

typedef struct _LBA_STATUS_LIST_HEADER {
    ULONG ParameterLength;
    ULONG Reserved;
#if !defined(__midl)
    LBA_STATUS_DESCRIPTOR Descriptors[0];
#endif
} LBA_STATUS_LIST_HEADER, *PLBA_STATUS_LIST_HEADER;
#pragma pack(pop, get_lba_status)

#define LBA_STATUS_MAPPED      0x0
#define LBA_STATUS_DEALLOCATED 0x1
#define LBA_STATUS_ANCHORED    0x2

//
// Read Block Limits Data - returned in Big Endian format
// This structure returns the maximum and minimum block
// size for a TAPE device.
//

#pragma pack(push, read_block_limits, 1)
typedef struct _READ_BLOCK_LIMITS {
    UCHAR Reserved;
    UCHAR BlockMaximumSize[3];
    UCHAR BlockMinimumSize[2];
} READ_BLOCK_LIMITS_DATA, *PREAD_BLOCK_LIMITS_DATA;
#pragma pack(pop, read_block_limits)

#pragma pack(push, read_buffer_capacity, 1)
typedef struct _READ_BUFFER_CAPACITY_DATA {
    UCHAR DataLength[2];
    UCHAR Reserved1;
    UCHAR BlockDataReturned : 1;
    UCHAR Reserved4         : 7;
    UCHAR TotalBufferSize[4];
    UCHAR AvailableBufferSize[4];
} READ_BUFFER_CAPACITY_DATA, *PREAD_BUFFER_CAPACITY_DATA;
#pragma pack(pop, read_buffer_capacity)


//
// Mode data structures.
//

//
// Define Mode parameter header.
//

#pragma pack(push, mode_params, 1)
typedef struct _MODE_PARAMETER_HEADER {
    UCHAR ModeDataLength;
    UCHAR MediumType;
    UCHAR DeviceSpecificParameter;
    UCHAR BlockDescriptorLength;
}MODE_PARAMETER_HEADER, *PMODE_PARAMETER_HEADER;

typedef struct _MODE_PARAMETER_HEADER10 {
    UCHAR ModeDataLength[2];
    UCHAR MediumType;
    UCHAR DeviceSpecificParameter;
    UCHAR Reserved[2];
    UCHAR BlockDescriptorLength[2];
}MODE_PARAMETER_HEADER10, *PMODE_PARAMETER_HEADER10;
#pragma pack(pop, mode_params)

#define MODE_FD_SINGLE_SIDE     0x01
#define MODE_FD_DOUBLE_SIDE     0x02
#define MODE_FD_MAXIMUM_TYPE    0x1E
#define MODE_DSP_FUA_SUPPORTED  0x10
#define MODE_DSP_WRITE_PROTECT  0x80

//
// Define the mode parameter block.
//

#pragma pack(push, mode_params_block, 1)
typedef struct _MODE_PARAMETER_BLOCK {
    UCHAR DensityCode;
    UCHAR NumberOfBlocks[3];
    UCHAR Reserved;
    UCHAR BlockLength[3];
}MODE_PARAMETER_BLOCK, *PMODE_PARAMETER_BLOCK;

#pragma pack(pop, mode_params_block)


//
// Define Disconnect-Reconnect page.
//

#pragma pack(push, mode_page_disconnect, 1)
typedef struct _MODE_DISCONNECT_PAGE {
    UCHAR PageCode : 6;
    UCHAR Reserved : 1;
    UCHAR PageSavable : 1;
    UCHAR PageLength;
    UCHAR BufferFullRatio;
    UCHAR BufferEmptyRatio;
    UCHAR BusInactivityLimit[2];
    UCHAR BusDisconnectTime[2];
    UCHAR BusConnectTime[2];
    UCHAR MaximumBurstSize[2];
    UCHAR DataTransferDisconnect : 2;
    UCHAR Reserved2[3];
}MODE_DISCONNECT_PAGE, *PMODE_DISCONNECT_PAGE;
#pragma pack(pop, mode_page_disconnect)

//
// Define mode caching page.
//

#pragma pack(push, mode_page_caching, 1)
typedef struct _MODE_CACHING_PAGE {
    UCHAR PageCode : 6;
    UCHAR Reserved : 1;
    UCHAR PageSavable : 1;
    UCHAR PageLength;
    UCHAR ReadDisableCache : 1;
    UCHAR MultiplicationFactor : 1;
    UCHAR WriteCacheEnable : 1;
    UCHAR Reserved2 : 5;
    UCHAR WriteRetensionPriority : 4;
    UCHAR ReadRetensionPriority : 4;
    UCHAR DisablePrefetchTransfer[2];
    UCHAR MinimumPrefetch[2];
    UCHAR MaximumPrefetch[2];
    UCHAR MaximumPrefetchCeiling[2];
}MODE_CACHING_PAGE, *PMODE_CACHING_PAGE;
#pragma pack(pop, mode_page_caching)

#pragma pack(push, mode_page_caching_ex, 1)
typedef struct _MODE_CACHING_PAGE_EX {
    UCHAR PageCode : 6;     // 0x08
    UCHAR SubPageFormat : 1;
    UCHAR PageSavable : 1;
    UCHAR PageLength;
    UCHAR ReadDisableCache : 1;
    UCHAR MultiplicationFactor : 1;
    UCHAR WriteCacheEnable : 1;
    UCHAR SizeEnable : 1;
    UCHAR Discontinuity : 1;
    UCHAR CachingAnalysisPermitted : 1;
    UCHAR AbortPreFetch : 1;
    UCHAR InitiatorControl : 1;
    UCHAR WriteRetensionPriority : 4;
    UCHAR ReadRetensionPriority : 4;
    UCHAR DisablePrefetchTransfer[2];
    UCHAR MinimumPrefetch[2];
    UCHAR MaximumPrefetch[2];
    UCHAR MaximumPrefetchCeiling[2];
    UCHAR NvCacheDisable : 1;
    UCHAR SyncCacheProgress : 2;
    UCHAR VendorSpecific : 2;
    UCHAR DisableReadAhead : 1;
    UCHAR LogicalBlockCacheSegmentSize : 1;
    UCHAR ForceSequentialWrite : 1;
    UCHAR NumberOfCacheSegments;
    UCHAR CacheSegmentSize[2];
    UCHAR Reserved[4];
}MODE_CACHING_PAGE_EX, *PMODE_CACHING_PAGE_EX;
#pragma pack(pop, mode_page_caching_ex)

#pragma pack(push, mode_page_control, 1)
typedef struct _MODE_CONTROL_PAGE {
    UCHAR PageCode : 6; // 0x0A
    UCHAR Reserved1 : 1;
    UCHAR PageSavable : 1;

    UCHAR PageLength;

    UCHAR RLEC : 1;
    UCHAR GLTSD : 1;
    UCHAR D_SENSE : 1;
    UCHAR DPICZ : 1;
    UCHAR TMF_ONLY : 1;
    UCHAR TST : 3;

    UCHAR Obsolete1 : 1;
    UCHAR QERR : 2;
    UCHAR NUAR : 1;
    UCHAR QueueAlgorithmModifier : 4;

    UCHAR Obsolete2 : 3;
    UCHAR SWP : 1;
    UCHAR UA_INTLCK_CTRL : 2;
    UCHAR RAC : 1;
    UCHAR VS : 1;

    UCHAR AutoloadMode : 3;
    UCHAR Reserved2 : 1;
    UCHAR RWWP : 1;
    UCHAR ATMPE : 1;
    UCHAR TAS : 1;
    UCHAR ATO : 1;

    UCHAR Obsolete3[2];
    UCHAR BusyTimeoutPeriod[2];
    UCHAR ExtendeSelfTestCompletionTime[2];

}MODE_CONTROL_PAGE, *PMODE_CONTROL_PAGE;
#pragma pack(pop, mode_page_control)


//
// Define write parameters cdrom page
//
#pragma pack(push, mode_page_wp2, 1)
typedef struct _MODE_CDROM_WRITE_PARAMETERS_PAGE2 {
    UCHAR PageCode : 6;             // 0x05
    UCHAR Reserved : 1;
    UCHAR PageSavable : 1;
    UCHAR PageLength;               // 0x32 ??
    UCHAR WriteType                 : 4;
    UCHAR TestWrite                 : 1;
    UCHAR LinkSizeValid             : 1;
    UCHAR BufferUnderrunFreeEnabled : 1;
    UCHAR Reserved2                 : 1;
    UCHAR TrackMode                 : 4;
    UCHAR Copy                      : 1;
    UCHAR FixedPacket               : 1;
    UCHAR MultiSession              : 2;
    UCHAR DataBlockType             : 4;
    UCHAR Reserved3                 : 4;
    UCHAR LinkSize;
    UCHAR Reserved4;
    UCHAR HostApplicationCode       : 6;
    UCHAR Reserved5                 : 2;
    UCHAR SessionFormat;
    UCHAR Reserved6;
    UCHAR PacketSize[4];
    UCHAR AudioPauseLength[2];
    UCHAR MediaCatalogNumber[16];
    UCHAR ISRC[16];
    UCHAR SubHeaderData[4];
} MODE_CDROM_WRITE_PARAMETERS_PAGE2, *PMODE_CDROM_WRITE_PARAMETERS_PAGE2;
#pragma pack(pop, mode_page_wp2)

#ifndef DEPRECATE_DDK_FUNCTIONS
// this structure is being retired due to missing fields and overly
// complex data definitions for the MCN and ISRC.
#pragma pack(push, mode_page_wp, 1)
typedef struct _MODE_CDROM_WRITE_PARAMETERS_PAGE {
    UCHAR PageLength;               // 0x32 ??
    UCHAR WriteType                 : 4;
    UCHAR TestWrite                 : 1;
    UCHAR LinkSizeValid             : 1;
    UCHAR BufferUnderrunFreeEnabled : 1;
    UCHAR Reserved2                 : 1;
    UCHAR TrackMode                 : 4;
    UCHAR Copy                      : 1;
    UCHAR FixedPacket               : 1;
    UCHAR MultiSession              : 2;
    UCHAR DataBlockType             : 4;
    UCHAR Reserved3                 : 4;
    UCHAR LinkSize;
    UCHAR Reserved4;
    UCHAR HostApplicationCode       : 6;
    UCHAR Reserved5                 : 2;
    UCHAR SessionFormat;
    UCHAR Reserved6;
    UCHAR PacketSize[4];
    UCHAR AudioPauseLength[2];
    UCHAR Reserved7                 : 7;
    UCHAR MediaCatalogNumberValid   : 1;
    UCHAR MediaCatalogNumber[13];
    UCHAR MediaCatalogNumberZero;
    UCHAR MediaCatalogNumberAFrame;
    UCHAR Reserved8                 : 7;
    UCHAR ISRCValid                 : 1;
    UCHAR ISRCCountry[2];
    UCHAR ISRCOwner[3];
    UCHAR ISRCRecordingYear[2];
    UCHAR ISRCSerialNumber[5];
    UCHAR ISRCZero;
    UCHAR ISRCAFrame;
    UCHAR ISRCReserved;
    UCHAR SubHeaderData[4];
} MODE_CDROM_WRITE_PARAMETERS_PAGE, *PMODE_CDROM_WRITE_PARAMETERS_PAGE;
#pragma pack(pop, mode_page_wp)
#endif //ifndef DEPRECATE_DDK_FUNCTIONS

//
// Define the MRW mode page for CDROM device types
//
#pragma pack(push, mode_page_mrw, 1)
typedef struct _MODE_MRW_PAGE {
    UCHAR PageCode : 6; // 0x03
    UCHAR Reserved : 1;
    UCHAR PageSavable : 1;
    UCHAR PageLength;   //0x06
    UCHAR Reserved1;
    UCHAR LbaSpace  : 1;
    UCHAR Reserved2 : 7;
    UCHAR Reserved3[4];
} MODE_MRW_PAGE, *PMODE_MRW_PAGE;
#pragma pack(pop, mode_page_mrw)

//
// Define mode flexible disk page.
//

#pragma pack(push, mode_page_flex, 1)
typedef struct _MODE_FLEXIBLE_DISK_PAGE {
    UCHAR PageCode : 6;
    UCHAR Reserved : 1;
    UCHAR PageSavable : 1;
    UCHAR PageLength;
    UCHAR TransferRate[2];
    UCHAR NumberOfHeads;
    UCHAR SectorsPerTrack;
    UCHAR BytesPerSector[2];
    UCHAR NumberOfCylinders[2];
    UCHAR StartWritePrecom[2];
    UCHAR StartReducedCurrent[2];
    UCHAR StepRate[2];
    UCHAR StepPluseWidth;
    UCHAR HeadSettleDelay[2];
    UCHAR MotorOnDelay;
    UCHAR MotorOffDelay;
    UCHAR Reserved2 : 5;
    UCHAR MotorOnAsserted : 1;
    UCHAR StartSectorNumber : 1;
    UCHAR TrueReadySignal : 1;
    UCHAR StepPlusePerCyclynder : 4;
    UCHAR Reserved3 : 4;
    UCHAR WriteCompenstation;
    UCHAR HeadLoadDelay;
    UCHAR HeadUnloadDelay;
    UCHAR Pin2Usage : 4;
    UCHAR Pin34Usage : 4;
    UCHAR Pin1Usage : 4;
    UCHAR Pin4Usage : 4;
    UCHAR MediumRotationRate[2];
    UCHAR Reserved4[2];
} MODE_FLEXIBLE_DISK_PAGE, *PMODE_FLEXIBLE_DISK_PAGE;
#pragma pack(pop, mode_page_flex)

//
// Define mode format page.
//

#pragma pack(push, mode_page_format, 1)
typedef struct _MODE_FORMAT_PAGE {
    UCHAR PageCode : 6;
    UCHAR Reserved : 1;
    UCHAR PageSavable : 1;
    UCHAR PageLength;
    UCHAR TracksPerZone[2];
    UCHAR AlternateSectorsPerZone[2];
    UCHAR AlternateTracksPerZone[2];
    UCHAR AlternateTracksPerLogicalUnit[2];
    UCHAR SectorsPerTrack[2];
    UCHAR BytesPerPhysicalSector[2];
    UCHAR Interleave[2];
    UCHAR TrackSkewFactor[2];
    UCHAR CylinderSkewFactor[2];
    UCHAR Reserved2 : 4;
    UCHAR SurfaceFirst : 1;
    UCHAR RemovableMedia : 1;
    UCHAR HardSectorFormating : 1;
    UCHAR SoftSectorFormating : 1;
    UCHAR Reserved3[3];
} MODE_FORMAT_PAGE, *PMODE_FORMAT_PAGE;
#pragma pack(pop, mode_page_format)

//
// Define rigid disk driver geometry page.
//

#pragma pack(push, mode_page_geometry, 1)
typedef struct _MODE_RIGID_GEOMETRY_PAGE {
    UCHAR PageCode : 6;
    UCHAR Reserved : 1;
    UCHAR PageSavable : 1;
    UCHAR PageLength;
    UCHAR NumberOfCylinders[3];
    UCHAR NumberOfHeads;
    UCHAR StartWritePrecom[3];
    UCHAR StartReducedCurrent[3];
    UCHAR DriveStepRate[2];
    UCHAR LandZoneCyclinder[3];
    UCHAR RotationalPositionLock : 2;
    UCHAR Reserved2 : 6;
    UCHAR RotationOffset;
    UCHAR Reserved3;
    UCHAR RoataionRate[2];
    UCHAR Reserved4[2];
}MODE_RIGID_GEOMETRY_PAGE, *PMODE_RIGID_GEOMETRY_PAGE;
#pragma pack(pop, mode_page_geometry)

//
// Define read write recovery page
//

#pragma pack(push, mode_page_rw_recovery, 1)
typedef struct _MODE_READ_WRITE_RECOVERY_PAGE {

    UCHAR PageCode : 6;
    UCHAR Reserved1 : 1;
    UCHAR PSBit : 1;
    UCHAR PageLength;
    UCHAR DCRBit : 1;
    UCHAR DTEBit : 1;
    UCHAR PERBit : 1;
    UCHAR EERBit : 1;
    UCHAR RCBit : 1;
    UCHAR TBBit : 1;
    UCHAR ARRE : 1;
    UCHAR AWRE : 1;
    UCHAR ReadRetryCount;
    UCHAR Reserved4[4];
    UCHAR WriteRetryCount;
    UCHAR Reserved5[3];

} MODE_READ_WRITE_RECOVERY_PAGE, *PMODE_READ_WRITE_RECOVERY_PAGE;
#pragma pack(pop, mode_page_rw_recovery)

//
// Define read recovery page - cdrom
//

#pragma pack(push, mode_page_r_recovery, 1)
typedef struct _MODE_READ_RECOVERY_PAGE {

    UCHAR PageCode : 6;
    UCHAR Reserved1 : 1;
    UCHAR PSBit : 1;
    UCHAR PageLength;
    UCHAR DCRBit : 1;
    UCHAR DTEBit : 1;
    UCHAR PERBit : 1;
    UCHAR Reserved2 : 1;
    UCHAR RCBit : 1;
    UCHAR TBBit : 1;
    UCHAR Reserved3 : 2;
    UCHAR ReadRetryCount;
    UCHAR Reserved4[4];

} MODE_READ_RECOVERY_PAGE, *PMODE_READ_RECOVERY_PAGE;
#pragma pack(pop, mode_page_r_recovery)


//
// Define Informational Exception Control Page. Used for failure prediction
//

#pragma pack(push, mode_page_xcpt, 1)
typedef struct _MODE_INFO_EXCEPTIONS
{
    UCHAR PageCode : 6;
    UCHAR Reserved1 : 1;
    UCHAR PSBit : 1;

    UCHAR PageLength;

    union
    {
        UCHAR Flags;
        struct
        {
            UCHAR LogErr : 1;
            UCHAR Reserved2 : 1;
            UCHAR Test : 1;
            UCHAR Dexcpt : 1;
            UCHAR Reserved3 : 3;
            UCHAR Perf : 1;
        };
    };

    UCHAR ReportMethod : 4;
    UCHAR Reserved4 : 4;

    UCHAR IntervalTimer[4];
    UCHAR ReportCount[4];

} MODE_INFO_EXCEPTIONS, *PMODE_INFO_EXCEPTIONS;
#pragma pack(pop, mode_page_xcpt)

//
// Begin C/DVD 0.9 definitions
//

//
// Power Condition Mode Page Format
//

#pragma pack(push, mode_page_power, 1)
typedef struct _POWER_CONDITION_PAGE {
    UCHAR PageCode : 6;         // 0x1A
    UCHAR Reserved : 1;
    UCHAR PSBit : 1;
    UCHAR PageLength;           // 0x0A
    UCHAR Reserved2;

    UCHAR Standby : 1;
    UCHAR Idle : 1;
    UCHAR Reserved3 : 6;

    UCHAR IdleTimer[4];
    UCHAR StandbyTimer[4];
} POWER_CONDITION_PAGE, *PPOWER_CONDITION_PAGE;
#pragma pack(pop, mode_page_power)

//
// CD-Audio Control Mode Page Format
//

#pragma pack(push, mode_page_cdaudio, 1)
typedef struct _CDDA_OUTPUT_PORT {
    UCHAR ChannelSelection : 4;
    UCHAR Reserved : 4;
    UCHAR Volume;
} CDDA_OUTPUT_PORT, *PCDDA_OUTPUT_PORT;

typedef struct _CDAUDIO_CONTROL_PAGE {
    UCHAR PageCode : 6;     // 0x0E
    UCHAR Reserved : 1;
    UCHAR PSBit : 1;

    UCHAR PageLength;       // 0x0E

    UCHAR Reserved2 : 1;
    UCHAR StopOnTrackCrossing : 1;         // Default 0
    UCHAR Immediate : 1;    // Always 1
    UCHAR Reserved3 : 5;

    UCHAR Reserved4[3];
    UCHAR Obsolete[2];

    CDDA_OUTPUT_PORT CDDAOutputPorts[4];

} CDAUDIO_CONTROL_PAGE, *PCDAUDIO_CONTROL_PAGE;
#pragma pack(pop, mode_page_cdaudio)

#define CDDA_CHANNEL_MUTED      0x0
#define CDDA_CHANNEL_ZERO       0x1
#define CDDA_CHANNEL_ONE        0x2
#define CDDA_CHANNEL_TWO        0x4
#define CDDA_CHANNEL_THREE      0x8

//
// C/DVD Feature Set Support & Version Page
//

#pragma pack(push, mode_page_features, 1)
typedef struct _CDVD_FEATURE_SET_PAGE {
    UCHAR PageCode : 6;     // 0x18
    UCHAR Reserved : 1;
    UCHAR PSBit : 1;

    UCHAR PageLength;       // 0x16

    UCHAR CDAudio[2];
    UCHAR EmbeddedChanger[2];
    UCHAR PacketSMART[2];
    UCHAR PersistantPrevent[2];
    UCHAR EventStatusNotification[2];
    UCHAR DigitalOutput[2];
    UCHAR CDSequentialRecordable[2];
    UCHAR DVDSequentialRecordable[2];
    UCHAR RandomRecordable[2];
    UCHAR KeyExchange[2];
    UCHAR Reserved2[2];
} CDVD_FEATURE_SET_PAGE, *PCDVD_FEATURE_SET_PAGE;
#pragma pack(pop, mode_page_features)

//
// CDVD Inactivity Time-out Page Format
//

#pragma pack(push, mode_page_timeout, 1)
typedef struct _CDVD_INACTIVITY_TIMEOUT_PAGE {
    UCHAR PageCode : 6;     // 0x1D
    UCHAR Reserved : 1;
    UCHAR PSBit : 1;

    UCHAR PageLength;       // 0x08
    UCHAR Reserved2[2];

    UCHAR SWPP : 1;
    UCHAR DISP : 1;
    UCHAR Reserved3 : 6;

    UCHAR Reserved4;
    UCHAR GroupOneMinimumTimeout[2];
    UCHAR GroupTwoMinimumTimeout[2];
} CDVD_INACTIVITY_TIMEOUT_PAGE, *PCDVD_INACTIVITY_TIMEOUT_PAGE;
#pragma pack(pop, mode_page_timeout)

//
// CDVD Capabilities & Mechanism Status Page
//

#define CDVD_LMT_CADDY              0
#define CDVD_LMT_TRAY               1
#define CDVD_LMT_POPUP              2
#define CDVD_LMT_RESERVED1          3
#define CDVD_LMT_CHANGER_INDIVIDUAL 4
#define CDVD_LMT_CHANGER_CARTRIDGE  5
#define CDVD_LMT_RESERVED2          6
#define CDVD_LMT_RESERVED3          7


#pragma pack(push, mode_page_capabilities, 1)
typedef struct _CDVD_CAPABILITIES_PAGE {
    UCHAR PageCode : 6;     // 0x2A
    UCHAR Reserved : 1;
    UCHAR PSBit : 1;                        // offset 0

    UCHAR PageLength;       // >= 0x18      // offset 1

    UCHAR CDRRead : 1;
    UCHAR CDERead : 1;
    UCHAR Method2 : 1;
    UCHAR DVDROMRead : 1;
    UCHAR DVDRRead : 1;
    UCHAR DVDRAMRead : 1;
    UCHAR Reserved2 : 2;                    // offset 2

    UCHAR CDRWrite : 1;
    UCHAR CDEWrite : 1;
    UCHAR TestWrite : 1;
    UCHAR Reserved3 : 1;
    UCHAR DVDRWrite : 1;
    UCHAR DVDRAMWrite : 1;
    UCHAR Reserved4 : 2;                    // offset 3

    UCHAR AudioPlay : 1;
    UCHAR Composite : 1;
    UCHAR DigitalPortOne : 1;
    UCHAR DigitalPortTwo : 1;
    UCHAR Mode2Form1 : 1;
    UCHAR Mode2Form2 : 1;
    UCHAR MultiSession : 1;
    UCHAR BufferUnderrunFree : 1;                    // offset 4

    UCHAR CDDA : 1;
    UCHAR CDDAAccurate : 1;
    UCHAR RWSupported : 1;
    UCHAR RWDeinterleaved : 1;
    UCHAR C2Pointers : 1;
    UCHAR ISRC : 1;
    UCHAR UPC : 1;
    UCHAR ReadBarCodeCapable : 1;           // offset 5

    UCHAR Lock : 1;
    UCHAR LockState : 1;
    UCHAR PreventJumper : 1;
    UCHAR Eject : 1;
    UCHAR Reserved6 : 1;
    UCHAR LoadingMechanismType : 3;         // offset 6

    UCHAR SeparateVolume : 1;
    UCHAR SeperateChannelMute : 1;
    UCHAR SupportsDiskPresent : 1;
    UCHAR SWSlotSelection : 1;
    UCHAR SideChangeCapable : 1;
    UCHAR RWInLeadInReadable : 1;
    UCHAR Reserved7 : 2;                    // offset 7

    union {
        UCHAR ReadSpeedMaximum[2];
        UCHAR ObsoleteReserved[2];          // offset 8
    };

    UCHAR NumberVolumeLevels[2];            // offset 10
    UCHAR BufferSize[2];                    // offset 12

    union {
        UCHAR ReadSpeedCurrent[2];
        UCHAR ObsoleteReserved2[2];         // offset 14
    };
    UCHAR ObsoleteReserved3;                // offset 16

    UCHAR Reserved8 : 1;
    UCHAR BCK : 1;
    UCHAR RCK : 1;
    UCHAR LSBF : 1;
    UCHAR Length : 2;
    UCHAR Reserved9 : 2;                    // offset 17

    union {
        UCHAR WriteSpeedMaximum[2];
        UCHAR ObsoleteReserved4[2];         // offset 18
    };
    union {
        UCHAR WriteSpeedCurrent[2];
        UCHAR ObsoleteReserved11[2];        // offset 20
    };

    //
    // NOTE: This mode page is two bytes too small in the release
    //       version of the Windows2000 DDK.  it also incorrectly
    //       put the CopyManagementRevision at offset 20 instead
    //       of offset 22, so fix that with a nameless union (for
    //       backwards-compatibility with those who "fixed" it on
    //       their own by looking at Reserved10[]).
    //

    union {
        UCHAR CopyManagementRevision[2];    // offset 22
        UCHAR Reserved10[2];
    };
    //UCHAR Reserved12[2];                    // offset 24

} CDVD_CAPABILITIES_PAGE, *PCDVD_CAPABILITIES_PAGE;
#pragma pack(pop, mode_page_capabilities)

#pragma pack(push, lun_list, 1)
typedef struct _LUN_LIST {
    UCHAR LunListLength[4]; // sizeof LunSize * 8
    UCHAR Reserved[4];
#if !defined(__midl)
    UCHAR Lun[0][8];        // 4 level of addressing.  2 bytes each.
#endif
} LUN_LIST, *PLUN_LIST;
#pragma pack(pop, lun_list)


#define LOADING_MECHANISM_CADDY                 0x00
#define LOADING_MECHANISM_TRAY                  0x01
#define LOADING_MECHANISM_POPUP                 0x02
#define LOADING_MECHANISM_INDIVIDUAL_CHANGER    0x04
#define LOADING_MECHANISM_CARTRIDGE_CHANGER     0x05

//
// end C/DVD 0.9 mode page definitions

//
// Mode parameter list block descriptor -
// set the block length for reading/writing
//
//

#define MODE_BLOCK_DESC_LENGTH               8
#define MODE_HEADER_LENGTH                   4
#define MODE_HEADER_LENGTH10                 8

#pragma pack(push, mode_parm_rw, 1)
typedef struct _MODE_PARM_READ_WRITE {

   MODE_PARAMETER_HEADER  ParameterListHeader;  // List Header Format
   MODE_PARAMETER_BLOCK   ParameterListBlock;   // List Block Descriptor

} MODE_PARM_READ_WRITE_DATA, *PMODE_PARM_READ_WRITE_DATA;
#pragma pack(pop, mode_parm_rw)


//
// Tape definitions
//

#pragma pack(push, tape_position, 1)
typedef struct _TAPE_POSITION_DATA {
    UCHAR Reserved1:2;
    UCHAR BlockPositionUnsupported:1;
    UCHAR Reserved2:3;
    UCHAR EndOfPartition:1;
    UCHAR BeginningOfPartition:1;
    UCHAR PartitionNumber;
    USHORT Reserved3;
    UCHAR FirstBlock[4];
    UCHAR LastBlock[4];
    UCHAR Reserved4;
    UCHAR NumberOfBlocks[3];
    UCHAR NumberOfBytes[4];
} TAPE_POSITION_DATA, *PTAPE_POSITION_DATA;
#pragma pack(pop, tape_position)

//
// This structure is used to convert little endian
// ULONGs to SCSI CDB big endians values.
//

#pragma pack(push, byte_stuff, 1)
typedef union _EIGHT_BYTE {

    struct {
        UCHAR Byte0;
        UCHAR Byte1;
        UCHAR Byte2;
        UCHAR Byte3;
        UCHAR Byte4;
        UCHAR Byte5;
        UCHAR Byte6;
        UCHAR Byte7;
    };

    ULONGLONG AsULongLong;
} EIGHT_BYTE, *PEIGHT_BYTE;

typedef union _FOUR_BYTE {

    struct {
        UCHAR Byte0;
        UCHAR Byte1;
        UCHAR Byte2;
        UCHAR Byte3;
    };

    ULONG AsULong;
} FOUR_BYTE, *PFOUR_BYTE;

typedef union _TWO_BYTE {

    struct {
        UCHAR Byte0;
        UCHAR Byte1;
    };

    USHORT AsUShort;
} TWO_BYTE, *PTWO_BYTE;
#pragma pack(pop, byte_stuff)

//
// Byte reversing macro for converting
// between big- and little-endian formats
//

#define REVERSE_BYTES_QUAD(Destination, Source) {           \
    PEIGHT_BYTE d = (PEIGHT_BYTE)(Destination);             \
    PEIGHT_BYTE s = (PEIGHT_BYTE)(Source);                  \
    d->Byte7 = s->Byte0;                                    \
    d->Byte6 = s->Byte1;                                    \
    d->Byte5 = s->Byte2;                                    \
    d->Byte4 = s->Byte3;                                    \
    d->Byte3 = s->Byte4;                                    \
    d->Byte2 = s->Byte5;                                    \
    d->Byte1 = s->Byte6;                                    \
    d->Byte0 = s->Byte7;                                    \
}

#define REVERSE_BYTES(Destination, Source) {                \
    PFOUR_BYTE d = (PFOUR_BYTE)(Destination);               \
    PFOUR_BYTE s = (PFOUR_BYTE)(Source);                    \
    d->Byte3 = s->Byte0;                                    \
    d->Byte2 = s->Byte1;                                    \
    d->Byte1 = s->Byte2;                                    \
    d->Byte0 = s->Byte3;                                    \
}

#define REVERSE_BYTES_SHORT(Destination, Source) {          \
    PTWO_BYTE d = (PTWO_BYTE)(Destination);                 \
    PTWO_BYTE s = (PTWO_BYTE)(Source);                      \
    d->Byte1 = s->Byte0;                                    \
    d->Byte0 = s->Byte1;                                    \
}

//
// Byte reversing macro for converting
// USHORTS from big to little endian in place
//

#define REVERSE_SHORT(Short) {          \
    UCHAR tmp;                          \
    PTWO_BYTE w = (PTWO_BYTE)(Short);   \
    tmp = w->Byte0;                     \
    w->Byte0 = w->Byte1;                \
    w->Byte1 = tmp;                     \
    }

//
// Byte reversing macro for convering
// ULONGS between big & little endian in place
//

#define REVERSE_LONG(Long) {            \
    UCHAR tmp;                          \
    PFOUR_BYTE l = (PFOUR_BYTE)(Long);  \
    tmp = l->Byte3;                     \
    l->Byte3 = l->Byte0;                \
    l->Byte0 = tmp;                     \
    tmp = l->Byte2;                     \
    l->Byte2 = l->Byte1;                \
    l->Byte1 = tmp;                     \
    }

//
// This macro has the effect of Bit = log2(Data)
//

#define WHICH_BIT(Data, Bit) {                      \
    UCHAR tmp;                                      \
    for (tmp = 0; tmp < 32; tmp++) {                \
        if (((Data) >> tmp) == 1) {                 \
            break;                                  \
        }                                           \
    }                                               \
    NT_ASSERT(tmp != 32);                              \
    (Bit) = tmp;                                    \
}

//
// Define alignment requirements for variable length components in extended SRB.
// For Win64, need to ensure all variable length components are 8 bytes align
// so the pointer fields within the variable length components are 8 bytes align.
//
#if defined(_WIN64) || defined(_M_ALPHA)
#define STOR_ADDRESS_ALIGN           DECLSPEC_ALIGN(8)
#else
#define STOR_ADDRESS_ALIGN
#endif

//
// Generic structure definition for accessing any STOR_ADDRESS. All
// STOR_ADDRESS must begin with a Type, Port and AddressLength field.
//
typedef struct STOR_ADDRESS_ALIGN _STOR_ADDRESS {
    USHORT Type;
    USHORT Port;
    ULONG AddressLength;
    _Field_size_bytes_(AddressLength) UCHAR AddressData[ANYSIZE_ARRAY];
} STOR_ADDRESS, *PSTOR_ADDRESS;

// Define different storage address types
#define STOR_ADDRESS_TYPE_UNKNOWN   0x0
#define STOR_ADDRESS_TYPE_BTL8      0x1
#define STOR_ADDRESS_TYPE_MAX       0xffff

// Define 8 bit bus, target and LUN address scheme
#define STOR_ADDR_BTL8_ADDRESS_LENGTH    4
typedef struct STOR_ADDRESS_ALIGN _STOR_ADDR_BTL8 {
    _Field_range_(STOR_ADDRESS_TYPE_BTL8, STOR_ADDRESS_TYPE_BTL8)
    USHORT Type;
    USHORT Port;
    _Field_range_(STOR_ADDR_BTL8_ADDRESS_LENGTH, STOR_ADDR_BTL8_ADDRESS_LENGTH)
    ULONG AddressLength;
    UCHAR Path;
    UCHAR Target;
    UCHAR Lun;
    UCHAR Reserved;
} STOR_ADDR_BTL8, *PSTOR_ADDR_BTL8;

#if (NTDDI_VERSION >= NTDDI_WIN8)


////////////////////////////////////////////////////////////////////////////////
//
// Ses definitions
//

#define SES_DIAGNOSTIC_PAGE_CONFIGURATION             0x01
#define SES_DIAGNOSTIC_PAGE_CONTROL                   0x02
#define SES_DIAGNOSTIC_PAGE_STATUS                    0x02
#define SES_DIAGNOSTIC_PAGE_STRING_IN                 0x04

#define SES_DIAGNOSTIC_PAGE_ADDITIONAL_ELEMENT_STATUS 0x0A

#define SES_SAS_PROTOCOL_IDENTIFIER                   6

typedef enum _SES_ELEMENT_TYPE {

    SesElementTypeUnknown = 0,
    SesElementTypeDeviceSlot,
    SesElementTypePowerSupply,
    SesElementTypeCooling,
    SesElementTypeTemperatureSensor,
    SesElementTypeDoor,
    SesElementTypeAudibleAlarm,
    SesElementTypeController,
    SesElementTypeScsiController,
    SesElementTypeNonVolatileCache,
    SesElementTypeInvalidOperationReason,
    SesElementTypeUps,
    SesElementTypeDisplay,
    SesElementTypeKeypad,
    SesElementTypeEnclosure,
    SesElementTypeScsiPort,
    SesElementTypeLanguage,
    SesElementTypeCommunicationPort,
    SesElementTypeVoltageSensor,
    SesElementTypeCurrentSensor,
    SesElementTypeScsiTargetPort,
    SesElementTypeScsiInitiatorPort,
    SesElementTypeSubEnclosure,
    SesElementTypeArrayDeviceSlot,
    SesElementTypeSasExpander,
    SesElementTypeSasConnector,
    SesElementTypeMax

} SES_ELEMENT_TYPE, *PSES_ELEMENT_TYPE;

typedef enum _SES_ELEMENT_STATE {

    SesElementStateNotReported = 0,             // Unknown
    SesElementStateOkay,                        // Healthy
    SesElementStateCritical,                    // Unhealthy
    SesElementStateNonCritical,                 // Warning
    SesElementStateUnrecoverable,               // Unhealthy
    SesElementStateNotInstalled,                // Unknown
    SesElementStateUnknown,                     // Unhealthy
    SesElementStateNotAvailable,                // Warning
    SesElementStateNoAccessAllowed,             // Warning
    SesElementStateMax

} SES_ELEMENT_STATE, *PSES_ELEMENT_STATE;

#pragma pack(push, ses, 1)

typedef struct _SES_DIAGNOSTIC_PAGE {

    UCHAR PageCode;                             // Byte  0
    UCHAR Reserved;                             // Byte  1
    UCHAR PageLength[2];                        // Bytes 2-3
    UCHAR PageData[ANYSIZE_ARRAY];

} SES_DIAGNOSTIC_PAGE, *PSES_DIAGNOSTIC_PAGE;


typedef struct _SES_TYPE_DESCRIPTOR_HEADER {

    UCHAR ElementType;                          // Byte  0
    UCHAR NumberOfPossibleElements;             // Byte  1
    UCHAR SubEnclosureId;                       // Byte  2
    UCHAR TypeDescriptorTextLength;             // Byte  3

} SES_TYPE_DESCRIPTOR_HEADER, *PSES_TYPE_DESCRIPTOR_HEADER;

typedef struct _SES_ENCLOSURE_DESCRIPTOR {

    UCHAR NumberOfEnclosureServices : 3;        // Byte  0, bit 0-2
    UCHAR Reserved1 : 1;                        // Byte  0, bit 3
    UCHAR RelativeEnclosureServicesId : 3;      // Byte  0, bit 4-6
    UCHAR Reserved2 : 1;                        // Byte  0, bit 7
    UCHAR SubEnclosureId;                       // Byte  1
    UCHAR NumberOfTypeDescriptorHeaders;        // Byte  2
    UCHAR EnclosureDescriptorLength;            // Byte  3
    UCHAR Identifier[8];                        // Byte  4-11
    UCHAR VendorId[8];                          // Byte 12-19
    UCHAR ProductId[16];                        // Byte 20-35
    UCHAR ProductRevisionLevel[4];              // Byte 36-39
    UCHAR VendorSpecific[ANYSIZE_ARRAY];

} SES_ENCLOSURE_DESCRIPTOR, *PSES_ENCLOSURE_DESCRIPTOR;

typedef struct _SES_CONFIGURATION_DIAGNOSTIC_PAGE {

    UCHAR PageCode;                             // Byte  0
    UCHAR NumberOfSecondarySubEnclosures;       // Byte  1
    UCHAR PageLength[2];                        // Bytes 2-3
    UCHAR GenerationCode[4];                    // Bytes 4-7
    SES_ENCLOSURE_DESCRIPTOR Descriptors[ANYSIZE_ARRAY];

} SES_CONFIGURATION_DIAGNOSTIC_PAGE, *PSES_CONFIGURATION_DIAGNOSTIC_PAGE;


typedef struct _SES_CONTROL_DESCRIPTOR {

    UCHAR Reserved : 4;                         // Byte  0, bit 0-3
    UCHAR ResetSwap : 1;                        // Byte  0, bit 4
    UCHAR Disable : 1;                          // Byte  0, bit 5
    UCHAR PredictFailure : 1;                   // Byte  0, bit 6
    UCHAR Select : 1;                           // Byte  0, bit 7

    union {

        struct {

            UCHAR Reserved1;                    // Byte  1
            UCHAR Reserved2 : 1;                // Byte  2, bit 0
            UCHAR RequestIdentify : 1;          // Byte  2, bit 1
            UCHAR RequestRemove : 1;            // Byte  2, bit 2
            UCHAR RequestInsert : 1;            // Byte  2, bit 3
            UCHAR RequestMissing : 1;           // Byte  2, bit 4
            UCHAR Reserved3 : 1;                // Byte  2, bit 5
            UCHAR DoNotRemove : 1;              // Byte  2, bit 6
            UCHAR RequestActive : 1;            // Byte  2, bit 7
            UCHAR Reserved4 : 2;                // Byte  3, bit 0-1
            UCHAR EnableBypassB : 1;            // Byte  3, bit 2
            UCHAR EnableBypassA : 1;            // Byte  3, bit 3
            UCHAR DeviceOff : 1;                // Byte  3, bit 4
            UCHAR RequestFault : 1;             // Byte  3, bit 5
            UCHAR Reserved5 : 2;                // Byte  3, bit 6-7

        } DeviceSlot;

        struct {

            UCHAR Reserved1 : 7;                // Byte  1, bit 0-6
            UCHAR RequestIdentify : 1;          // Byte  1, bit 7
            UCHAR Reserved2;                    // Byte  2
            UCHAR Reserved3 : 5;                // Byte  3, bit 0-4
            UCHAR RequestOn : 1;                // Byte  3, bit 5
            UCHAR RequestFail : 1;              // Byte  3, bit 6
            UCHAR Reserved4 : 1;                // Byte  3, bit 7

        } PowerSupply;

        struct {

            UCHAR Reserved1 : 7;                // Byte  1, bit 0-6
            UCHAR RequestIdentify : 1;          // Byte  1, bit 7
            UCHAR Reserved2;                    // Byte  2
            UCHAR RequestSpeedCode : 3;         // Byte  3, bit 0-2
            UCHAR Reserved3 : 2;                // Byte  3, bit 3-4
            UCHAR RequestOn : 1;                // Byte  3, bit 5
            UCHAR RequestFail : 1;              // Byte  3, bit 6
            UCHAR Reserved4 : 1;                // Byte  3, bit 7

        } Cooling;

        struct {

            UCHAR Reserved1 : 6;                // Byte  1, bit 0-5
            UCHAR RequestFail : 1;              // Byte  1, bit 6
            UCHAR RequestIdentify : 1;          // Byte  1, bit 7
            UCHAR Reserved2;                    // Byte  2
            UCHAR Reserved3;                    // Byte  3

        } TemperatureSensor;

        struct {

            UCHAR Reserved1 : 6;                // Byte  1, bit 0-5
            UCHAR RequestFail : 1;              // Byte  1, bit 6
            UCHAR RequestIdentify : 1;          // Byte  1, bit 7
            UCHAR Reserved2;                    // Byte  2
            UCHAR Reserved3;                    // Byte  3

        } VoltageSensor;

        struct {

            UCHAR Reserved1 : 6;                // Byte  1, bit 0-5
            UCHAR RequestFail : 1;              // Byte  1, bit 6
            UCHAR RequestIdentify : 1;          // Byte  1, bit 7
            UCHAR Reserved2;                    // Byte  2
            UCHAR Reserved3;                    // Byte  3

        } CurrentSensor;

        struct {

            UCHAR Reserved1 : 7;                // Byte  1, bit 0-6
            UCHAR RequestIdentify : 1;          // Byte  1, bit 7
            UCHAR PowerCycleDelay : 6;          // Byte  2, bit 0-5
            UCHAR PowerCycleRequest : 2;        // Byte  2, bit 6-7
            UCHAR RequestWarning : 1;           // Byte  3, bit 0
            UCHAR RequestFailure : 1;           // Byte  3, bit 1
            UCHAR PowerOffDuration : 6;         // Byte  3, bit 2-7

        } Enclosure;

        struct {

            UCHAR RequestRebuildAbort : 1;      // Byte  1, bit 0
            UCHAR RequestRebuild : 1;           // Byte  1, bit 1
            UCHAR RequestInFailedArray : 1;     // Byte  1, bit 2
            UCHAR RequestInCriticalArray : 1;   // Byte  1, bit 3
            UCHAR RequestConsistencyArray : 1;  // Byte  1, bit 4
            UCHAR RequestHotSpare : 1;          // Byte  1, bit 5
            UCHAR RequestReservedDevice : 1;    // Byte  1, bit 6
            UCHAR RequestOK : 1;                // Byte  1, bit 7
            UCHAR Reserved1 : 1;                // Byte  2, bit 0
            UCHAR RequestIdentify : 1;          // Byte  2, bit 1
            UCHAR RequestRemove : 1;            // Byte  2, bit 2
            UCHAR RequestInsert : 1;            // Byte  2, bit 3
            UCHAR RequestMissing : 1;           // Byte  2, bit 4
            UCHAR Reserved2 : 1;                // Byte  2, bit 5
            UCHAR DoNotRemove : 1;              // Byte  2, bit 6
            UCHAR RequestActive : 1;            // Byte  2, bit 7
            UCHAR Reserved3 : 2;                // Byte  3, bit 0-1
            UCHAR EnableBypassB : 1;            // Byte  3, bit 2
            UCHAR EnableBypassA : 1;            // Byte  3, bit 3
            UCHAR DeviceOff : 1;                // Byte  3, bit 4
            UCHAR RequestFault : 1;             // Byte  3, bit 5
            UCHAR Reserved4 : 2;                // Byte  3, bit 6-7

        } ArrayDeviceSlot;

    };

} SES_CONTROL_DESCRIPTOR, *PSES_CONTROL_DESCRIPTOR;

typedef struct _SES_CONTROL_DIAGNOSTIC_PAGE {

    UCHAR PageCode;                             // Byte  0
    UCHAR Unrecoverable : 1;                    // Byte  1, bit 0
    UCHAR Critical : 1;                         // Byte  1, bit 1
    UCHAR NonCritical : 1;                      // Byte  1, bit 2
    UCHAR Informational : 1;                    // Byte  1, bit 3
    UCHAR Reserved : 4;                         // Byte  1, bit 4-7
    UCHAR PageLength[2];                        // Bytes 2-3
    UCHAR ExpectedGenerationCode[4];            // Bytes 4-7
    SES_CONTROL_DESCRIPTOR Descriptors[ANYSIZE_ARRAY];

} SES_CONTROL_DIAGNOSTIC_PAGE, *PSES_CONTROL_DIAGNOSTIC_PAGE;


typedef struct _SES_STATUS_DESCRIPTOR {

    UCHAR ElementStatus : 4;                    // Byte  0, bit 0-3
    UCHAR Swap : 1;                             // Byte  0, bit 4
    UCHAR Disabled : 1;                         // Byte  0, bit 5
    UCHAR PredictedFailure : 1;                 // Byte  0, bit 6
    UCHAR Reserved1 : 1;                        // Byte  0, bit 7

    union { 

        struct {

            UCHAR SlotAddress;                  // Byte  1
            UCHAR Report : 1;                   // Byte  2, bit 0
            UCHAR Identify : 1;                 // Byte  2, bit 1
            UCHAR Remove : 1;                   // Byte  2, bit 2
            UCHAR ReadyToInsert : 1;            // Byte  2, bit 3
            UCHAR EnclosureBypassedB : 1;       // Byte  2, bit 4
            UCHAR EnclosureBypassedA : 1;       // Byte  2, bit 5
            UCHAR DoNotRemove : 1;              // Byte  2, bit 6
            UCHAR AppBypassedA : 1;             // Byte  2, bit 7
            UCHAR DeviceBypassedB : 1;          // Byte  3, bit 0
            UCHAR DeviceBypassedA : 1;          // Byte  3, bit 1
            UCHAR BypassedB : 1;                // Byte  3, bit 2
            UCHAR BypassedA : 1;                // Byte  3, bit 3
            UCHAR DeviceOff : 1;                // Byte  3, bit 4
            UCHAR FaultRequested : 1;           // Byte  3, bit 5
            UCHAR FaultSensed : 1;              // Byte  3, bit 6
            UCHAR AppBypassedB : 1;             // Byte  3, bit 7

        } DeviceSlot;

        struct {

            UCHAR Reserved1 : 7;                // Byte  1, bit 0-6
            UCHAR Identify : 1;                 // Byte  1, bit 7
            UCHAR Reserved2 : 1;                // Byte  2, bit 0
            UCHAR DCOverCurrent : 1;            // Byte  2, bit 1
            UCHAR DCUnderVoltage : 1;           // Byte  2, bit 2
            UCHAR DCOverVoltage : 1;            // Byte  2, bit 3
            UCHAR Reserved3 : 4;                // Byte  2, bit 4-7
            UCHAR DCFail : 1;                   // Byte  3, bit 0
            UCHAR ACFail : 1;                   // Byte  3, bit 1
            UCHAR TemperatureWarning : 1;       // Byte  3, bit 2
            UCHAR OverTemperatureFail : 1;      // Byte  3, bit 3
            UCHAR Off : 1;                      // Byte  3, bit 4
            UCHAR RequestedOn : 1;              // Byte  3, bit 5
            UCHAR Fail : 1;                     // Byte  3, bit 6
            UCHAR HotSwap : 1;                  // Byte  3, bit 7

        } PowerSupply;

        struct {

            UCHAR ActualFanSpeedMSB : 3;        // Byte  1, bit 0-2
            UCHAR Reserved1 : 4;                // Byte  1, bit 3-6
            UCHAR Identify : 1;                 // Byte  1, bit 7
            UCHAR ActualFanSpeedLSB;            // Byte  2
            UCHAR ActualSpeedCode : 3;          // Byte  3, bit 0-2
            UCHAR Reserved2 : 1;                // Byte  3, bit 3
            UCHAR Off : 1;                      // Byte  3, bit 4
            UCHAR RequestedOn : 1;              // Byte  3, bit 5
            UCHAR Fail : 1;                     // Byte  3, bit 6
            UCHAR HotSwap : 1;                  // Byte  3, bit 7

        } Cooling;

        struct {

            UCHAR Reserved1 : 6;                // Byte  1, bit 0-5
            UCHAR Fail : 1;                     // Byte  1, bit 6
            UCHAR Identify : 1;                 // Byte  1, bit 7
            UCHAR Temperature;                  // Byte  2
            UCHAR UnderTemperatureWarning : 1;  // Byte  3, bit 0
            UCHAR UnderTemperatureFailure : 1;  // Byte  3, bit 1
            UCHAR OverTemperatureWarning : 1;   // Byte  3, bit 2
            UCHAR OverTemperatureFailure : 1;   // Byte  3, bit 3
            UCHAR Reserved2 : 4;                // Byte  3, bit 4-7

        } TemperatureSensor;

        struct {

            UCHAR CritUnder : 1;                // Byte  1, bit 0
            UCHAR CritOver : 1;                 // Byte  1, bit 1
            UCHAR WarnUnder : 1;                // Byte  1, bit 2
            UCHAR WarnOver : 1;                 // Byte  1, bit 3
            UCHAR Reserved1 : 2;                // Byte  1, bit 4-5
            UCHAR Fail : 1;                     // Byte  1, bit 6
            UCHAR Identify : 1;                 // Byte  1, bit 7
            UCHAR VoltageMSB;                   // Byte  2
            UCHAR VoltageLSB;                   // Byte  3

        } VoltageSensor;

        struct {

            UCHAR Reserved1 : 1;                // Byte  1, bit 0
            UCHAR CritOver : 1;                 // Byte  1, bit 1
            UCHAR Reserved2 : 1;                // Byte  1, bit 2
            UCHAR WarnOver : 1;                 // Byte  1, bit 3
            UCHAR Reserved3 : 2;                // Byte  1, bit 4-5
            UCHAR Fail : 1;                     // Byte  1, bit 6
            UCHAR Identify : 1;                 // Byte  1, bit 7
            UCHAR CurrentMSB;                   // Byte  2
            UCHAR CurrentLSB;                   // Byte  3

        } CurrentSensor;

        struct {

            UCHAR Reserved1 : 7;                // Byte  1, bit 0-6
            UCHAR Identify : 1;                 // Byte  1, bit 7
            UCHAR WarningIndication : 1;        // Byte  2, bit 0
            UCHAR FailureIndication : 1;        // Byte  2, bit 1
            UCHAR TimeUntilPowerCycle : 6;      // Byte  2, bit 6
            UCHAR WarningRequested : 1;         // Byte  3, bit 0
            UCHAR FailureRequested : 1;         // Byte  3, bit 1
            UCHAR RequestedPowerOffTime : 6;    // Byte  3, bit 6

        } Enclosure;

        struct {

            UCHAR RebuildAbort : 1;             // Byte  1, bit 0
            UCHAR Rebuild : 1;                  // Byte  1, bit 1
            UCHAR InFailedArray : 1;            // Byte  1, bit 2
            UCHAR InCriticalArray : 1;          // Byte  1, bit 3
            UCHAR ConsistencyCheck : 1;         // Byte  1, bit 4
            UCHAR HotSpare : 1;                 // Byte  1, bit 5
            UCHAR ReservedDevice : 1;           // Byte  1, bit 6
            UCHAR OK : 1;                       // Byte  1, bit 7
            UCHAR Report : 1;                   // Byte  2, bit 0
            UCHAR Identify : 1;                 // Byte  2, bit 1
            UCHAR Remove : 1;                   // Byte  2, bit 2
            UCHAR ReadyToInsert : 1;            // Byte  2, bit 3
            UCHAR EnclosureBypassedB : 1;       // Byte  2, bit 4
            UCHAR EnclosureBypassedA : 1;       // Byte  2, bit 5
            UCHAR DoNotRemove : 1;              // Byte  2, bit 6
            UCHAR AppBypassedA : 1;             // Byte  2, bit 7
            UCHAR DeviceBypassedB : 1;          // Byte  3, bit 0
            UCHAR DeviceBypassedA : 1;          // Byte  3, bit 1
            UCHAR BypassedB : 1;                // Byte  3, bit 2
            UCHAR BypassedA : 1;                // Byte  3, bit 3
            UCHAR DeviceOff : 1;                // Byte  3, bit 4
            UCHAR FaultRequested : 1;           // Byte  3, bit 5
            UCHAR FaultSensed : 1;              // Byte  3, bit 6
            UCHAR AppBypassedB : 1;             // Byte  3, bit 7

        } ArrayDeviceSlot;

    };

} SES_STATUS_DESCRIPTOR, *PSES_STATUS_DESCRIPTOR;

typedef struct _SES_STATUS_DIAGNOSTIC_PAGE {

    UCHAR PageCode;                             // Byte  0
    UCHAR Unrecoverable : 1;                    // Byte  1, bit 0
    UCHAR Critical : 1;                         // Byte  1, bit 1
    UCHAR NonCritical : 1;                      // Byte  1, bit 2
    UCHAR Informational : 1;                    // Byte  1, bit 3
    UCHAR InvalidOperation : 1;                 // Byte  1, bit 4
    UCHAR Reserved : 3;                         // Byte  1, bit 5-7
    UCHAR PageLength[2];                        // Bytes 2-3
    UCHAR GenerationCode[4];                    // Bytes 4-7
    SES_STATUS_DESCRIPTOR Descriptors[ANYSIZE_ARRAY];

} SES_STATUS_DIAGNOSTIC_PAGE, *PSES_STATUS_DIAGNOSTIC_PAGE;


typedef struct _SES_PHY_DESCRIPTOR {

    UCHAR Reserved1 : 4;                        // Byte  0, bit 0-3
    UCHAR DeviceType : 3;                       // Byte  0, bit 4-6
    UCHAR Reserved3 : 1;                        // Byte  0, bit 7
    UCHAR Reserved4;                            // Byte  1
    UCHAR Reserved5 : 1;                        // Byte  2, bit 0
    UCHAR SmpInitiatorPort : 1;                 // Byte  2, bit 1
    UCHAR StpInitiatorPort : 1;                 // Byte  2, bit 2
    UCHAR SspInitiatorPort : 1;                 // Byte  2, bit 3
    UCHAR Reserved6 : 4;                        // Byte  2, bit 4-7
    UCHAR SataDevice : 1;                       // Byte  3, bit 0
    UCHAR SmpTargetPort : 1;                    // Byte  3, bit 1
    UCHAR StpTargetPort : 1;                    // Byte  3, bit 2
    UCHAR SspTargetPort : 1;                    // Byte  3, bit 3
    UCHAR Reserved7 : 3;                        // Byte  3, bit 4-6
    UCHAR SataPortSelector : 1;                 // Byte  3, bit 7
    UCHAR AttachedSASAddress[8];                // Bytes 4-11
    UCHAR SASAddress[8];                        // Bytes 12-19
    UCHAR PhyIdentifier;                        // Byte  20
    UCHAR Reserved2[7];                         // Bytes 21-27

} SES_PHY_DESCRIPTOR, *PSES_PHY_DESCRIPTOR;

typedef struct _SES_SAS_SLOT_INFORMATION {

    UCHAR NumberOfPhyDescriptors;               // Byte  0
    UCHAR NotAllPhys : 1;                       // Byte  1, bit 0
    UCHAR Reserved1 : 5;                        // Byte  1, bit 1-5
    UCHAR Type : 2;                             // Byte  1, bit 6-7
    UCHAR Reserved2;                            // Byte  2
    UCHAR DeviceSlotNumber;                     // Byte  3
    SES_PHY_DESCRIPTOR PhyDescriptors[ANYSIZE_ARRAY];

} SES_SAS_SLOT_INFORMATION, *PSES_SAS_SLOT_INFORMATION;

typedef union _SES_PROTOCOL_INFORMATION {

    //
    // Add additional protocol infos
    // as needed
    //

    SES_SAS_SLOT_INFORMATION SasSlot;

} SES_PROTOCOL_INFORMATION, *PSES_PROTOCOL_INFORMATION;

typedef struct _SES_ADDITIONAL_ELEMENT_STATUS_DESCRIPTOR {

    //
    // We expect EIP to be set to 1
    //

    UCHAR  ProtocolIdentifier : 4;              // Byte  0, bit 0-3
    UCHAR  EIP : 1;                             // Byte  0, bit 4
    UCHAR  Reserved1 : 2;                       // Byte  0, bit 5-6
    UCHAR  Invalid : 1;                         // Byte  0, bit 7
    UCHAR  Length;                              // Byte  1
    UCHAR  Reserved2;                           // Byte  2
    UCHAR  ElementIndex;                        // Byte  3
    SES_PROTOCOL_INFORMATION ProtocolInfo;

} SES_ADDITIONAL_ELEMENT_STATUS_DESCRIPTOR, *PSES_ADDITIONAL_ELEMENT_STATUS_DESCRIPTOR;

typedef struct _SES_ADDITIONAL_ELEMENT_STATUS_DIAGNOSTIC_PAGE {

    UCHAR PageCode;                             // Byte  0
    UCHAR Reserved;                             // Byte  1
    UCHAR PageLength[2];                        // Bytes 2-3
    UCHAR GenerationCode[4];                    // Bytes 4-7
    SES_ADDITIONAL_ELEMENT_STATUS_DESCRIPTOR Descriptors[ANYSIZE_ARRAY];

} SES_ADDITIONAL_ELEMENT_STATUS_DIAGNOSTIC_PAGE, *PSES_ADDITIONAL_ELEMENT_STATUS_DIAGNOSTIC_PAGE;

#pragma pack(pop, ses)


#endif

//
// Collections of SCSI utility functions
//

//
// SCSI sense data related functions
//

//
// NOTE: Sense Data Descriptor Format is supported only in Windows 8 and later
//

//
// Obtain Error Code from the sense info buffer.
// Note: Error Code is same as "Response Code" defined in SPC Specification.
//
#define ScsiGetSenseErrorCode(SenseInfoBuffer) (((PUCHAR)(SenseInfoBuffer))[0] & 0x7f)

//
// Determine the buffer length of a descriptor
//
#define ScsiGetSenseDescriptorLength(DescriptorBuffer) \
            (sizeof(SCSI_SENSE_DESCRIPTOR_HEADER) + ((PSCSI_SENSE_DESCRIPTOR_HEADER)(DescriptorBuffer))->AdditionalLength)

//
// Determine if sense data is in Fixed format
//
#define IsFixedSenseDataFormat(SenseInfoBuffer) \
            ((ScsiGetSenseErrorCode(SenseInfoBuffer)) == SCSI_SENSE_ERRORCODE_FIXED_CURRENT || \
             (ScsiGetSenseErrorCode(SenseInfoBuffer)) == SCSI_SENSE_ERRORCODE_FIXED_DEFERRED)

//
// Determine if sense data is in Descriptor format
//
#define IsDescriptorSenseDataFormat(SenseInfoBuffer) \
            ((ScsiGetSenseErrorCode(SenseInfoBuffer)) == SCSI_SENSE_ERRORCODE_DESCRIPTOR_CURRENT || \
             (ScsiGetSenseErrorCode(SenseInfoBuffer)) == SCSI_SENSE_ERRORCODE_DESCRIPTOR_DEFERRED)

//
// Determine if sense data is Current error type
//
#define IsSenseDataCurrentError(SenseInfoBuffer) \
            ((ScsiGetSenseErrorCode(SenseInfoBuffer)) == SCSI_SENSE_ERRORCODE_FIXED_CURRENT || \
             (ScsiGetSenseErrorCode(SenseInfoBuffer)) == SCSI_SENSE_ERRORCODE_DESCRIPTOR_CURRENT)

//
// Determine if sense data is Deferred error type
//
#define IsSenseDataDeferredError(SenseInfoBuffer) \
            ((ScsiGetSenseErrorCode(SenseInfoBuffer)) == SCSI_SENSE_ERRORCODE_FIXED_DEFERRED || \
             (ScsiGetSenseErrorCode(SenseInfoBuffer)) == SCSI_SENSE_ERRORCODE_DESCRIPTOR_DEFERRED)

//
// Determine if sense data format indicated in sense data payload is a valid value
//
#define IsSenseDataFormatValueValid(SenseInfoBuffer) \
            (IsFixedSenseDataFormat(SenseInfoBuffer) || IsDescriptorSenseDataFormat(SenseInfoBuffer))

_Success_(return != FALSE)
FORCEINLINE BOOLEAN
ScsiGetTotalSenseByteCountIndicated (
   _In_reads_bytes_(SenseInfoBufferLength) PVOID SenseInfoBuffer,
   _In_  UCHAR SenseInfoBufferLength,
   _Out_ UCHAR *TotalByteCountIndicated
   )
/*++

Description:

    This function returns size of available sense data. This is based on
    AdditionalSenseLength field in the sense data payload as indicated
    by the device.

    This function handles both Fixed and Desciptor format.

Arguments:

    SenseInfoBuffer
      - A pointer to sense info buffer

    SenseInfoBufferLength
      - Size of the buffer SenseInfoBuffer points to.

    TotalByteCountIndicated
      - On output, it contains total byte counts of available sense data

Returns:

    TRUE if the function is able to determine size of available sense data

    Otherwise, FALSE

    Note: The routine returns FALSE when available sense data amount is
          greater than MAX_SENSE_BUFFER_SIZE

--*/
{
    BOOLEAN succeed = FALSE;
    UCHAR byteCount = 0;
    PFIXED_SENSE_DATA senseInfoBuffer = NULL;

    if (SenseInfoBuffer == NULL ||
        SenseInfoBufferLength == 0 ||
        TotalByteCountIndicated == NULL) {

        return FALSE;
    }


    //
    // Offset to AdditionalSenseLength field is same between
    // Fixed and Descriptor format.
    //
    senseInfoBuffer = (PFIXED_SENSE_DATA)SenseInfoBuffer;

    if (RTL_CONTAINS_FIELD(senseInfoBuffer,
                           SenseInfoBufferLength,
                           AdditionalSenseLength)) {

        if (senseInfoBuffer->AdditionalSenseLength <=
            (MAX_SENSE_BUFFER_SIZE - RTL_SIZEOF_THROUGH_FIELD(FIXED_SENSE_DATA, AdditionalSenseLength))) {

            byteCount = senseInfoBuffer->AdditionalSenseLength
                        + RTL_SIZEOF_THROUGH_FIELD(FIXED_SENSE_DATA, AdditionalSenseLength);

            *TotalByteCountIndicated = byteCount;

            succeed = TRUE;
        }
    }

    return succeed;
}

_Success_(return != FALSE)
FORCEINLINE BOOLEAN
ScsiGetFixedSenseKeyAndCodes (
   _In_reads_bytes_(SenseInfoBufferLength) PVOID SenseInfoBuffer,
   _In_ UCHAR SenseInfoBufferLength,
   _Out_opt_ PUCHAR SenseKey,
   _Out_opt_ PUCHAR AdditionalSenseCode,
   _Out_opt_ PUCHAR AdditionalSenseCodeQualifier
   )
/*++

Description:

    This function retrieves the following information from sense data
    in Fixed format:

        1. Sense key
        2. Additional Sense Code
        3. Additional Sense Code Qualifier

    If Additional Sense Code or Additional Sense Code Qualifer is not available,
    it is set to 0 when the function returns.

Arguments:

    SenseInfoBuffer
      - A pointer to sense info buffer

    SenseInfoBufferLength
      - Size of the buffer SenseInfoBuffer points to.

    SenseKey
      - On output, buffer contains the sense key.
        If null is specified, the function will not retrieve the sense key

    AdditionalSenseCode
      - On output, buffer contains the additional sense code.
        If null is specified, the function will not retrieve the additional sense code.

    AdditionalSenseCodeQualifier
      - On output, buffer contains the additional sense code qualifier.
        If null is specified, the function will not retrieve the additional sense code qualifier.

Returns:

    TRUE if the function is able to retrieve the requested information.

    Otherwise, FALSE

--*/
{
    PFIXED_SENSE_DATA fixedSenseData = (PFIXED_SENSE_DATA)SenseInfoBuffer;
    BOOLEAN succeed = FALSE;
    ULONG dataLength = 0;

    if (SenseInfoBuffer == NULL || SenseInfoBufferLength == 0) {
        return FALSE;
    }

    if (RTL_CONTAINS_FIELD(fixedSenseData, SenseInfoBufferLength, AdditionalSenseLength)) {

        dataLength = fixedSenseData->AdditionalSenseLength + RTL_SIZEOF_THROUGH_FIELD(FIXED_SENSE_DATA, AdditionalSenseLength);

        if (dataLength > SenseInfoBufferLength) {
            dataLength = SenseInfoBufferLength;
        }

        if (SenseKey != NULL) {
           *SenseKey = fixedSenseData->SenseKey;
        }

        if (AdditionalSenseCode != NULL) {
           *AdditionalSenseCode = RTL_CONTAINS_FIELD(fixedSenseData, dataLength, AdditionalSenseCode) ?
                                  fixedSenseData->AdditionalSenseCode : 0;
        }

        if (AdditionalSenseCodeQualifier != NULL) {
           *AdditionalSenseCodeQualifier = RTL_CONTAINS_FIELD(fixedSenseData, dataLength, AdditionalSenseCodeQualifier) ?
                                           fixedSenseData->AdditionalSenseCodeQualifier : 0;
        }

        succeed = TRUE;
    }

    return succeed;
}

_Success_(return != FALSE)
FORCEINLINE BOOLEAN
ScsiGetDescriptorSenseKeyAndCodes (
   _In_reads_bytes_(SenseInfoBufferLength) PVOID SenseInfoBuffer,
   _In_ UCHAR SenseInfoBufferLength,
   _Out_opt_ PUCHAR SenseKey,
   _Out_opt_ PUCHAR AdditionalSenseCode,
   _Out_opt_ PUCHAR AdditionalSenseCodeQualifier
   )
/*++

Description:

    This function retrieves the following information from sense data
    in Descriptor format:

        1. Sense key
        2. Additional Sense Code
        3. Additional Sense Code Qualifier

Arguments:

    SenseInfoBuffer
      - A pointer to sense info buffer

    SenseInfoBufferLength
      - Size of the buffer SenseInfoBuffer points to.

    SenseKey
      - On output, buffer contains the sense key.
        Note: If null is specified, the function will not retrieve the sense key

    AdditionalSenseCode
      - On output, buffer contains the additional sense code.
        Note: If null is specified, the function will not retrieve the additional sense code.

    AdditionalSenseCodeQualifier
      - On output, buffer contains the additional sense code qualifier.
        Note: If null is specified, the function will not retrieve the additional sense code qualifier.

Returns:

    TRUE if the function is able to retrieve the requested information.

    Otherwise, FALSE

--*/
{
    PDESCRIPTOR_SENSE_DATA descriptorSenseData = (PDESCRIPTOR_SENSE_DATA)SenseInfoBuffer;
    BOOLEAN succeed = FALSE;

    if (SenseInfoBuffer == NULL || SenseInfoBufferLength == 0) {
        return FALSE;
    }
    if (RTL_CONTAINS_FIELD(descriptorSenseData, SenseInfoBufferLength, AdditionalSenseLength)) {

        if (SenseKey) {
            *SenseKey = descriptorSenseData->SenseKey;
        }

        if (AdditionalSenseCode != NULL) {
            *AdditionalSenseCode = descriptorSenseData->AdditionalSenseCode;
        }

        if (AdditionalSenseCodeQualifier != NULL) {
            *AdditionalSenseCodeQualifier = descriptorSenseData->AdditionalSenseCodeQualifier;
        }

        succeed = TRUE;
    }

    return succeed;
}

//
// SCSI_SENSE_OPTIONS
//

typedef ULONG SCSI_SENSE_OPTIONS;

//
// No options is specified
//
#define SCSI_SENSE_OPTIONS_NONE                                      ((SCSI_SENSE_OPTIONS)0x00000000)

//
// If no known format is indicated in the sense buffer, interpret
// the sense buffer as Fixed format.
//
#define SCSI_SENSE_OPTIONS_FIXED_FORMAT_IF_UNKNOWN_FORMAT_INDICATED  ((SCSI_SENSE_OPTIONS)0x00000001)

_Success_(return != FALSE)
FORCEINLINE BOOLEAN
ScsiGetSenseKeyAndCodes (
   _In_reads_bytes_(SenseInfoBufferLength) PVOID SenseInfoBuffer,
   _In_ UCHAR SenseInfoBufferLength,
   _In_ SCSI_SENSE_OPTIONS Options,
   _Out_opt_ PUCHAR SenseKey,
   _Out_opt_ PUCHAR AdditionalSenseCode,
   _Out_opt_ PUCHAR AdditionalSenseCodeQualifier
   )
/*++

Description:

    This function retrieves the following information from sense data

        1. Sense key
        2. Additional Sense Code
        3. Additional Sense Code Qualifier

    This function handles both Fixed and Descriptor format.

Arguments:

    SenseInfoBuffer
      - A pointer to sense info buffer

    SenseInfoBufferLength
      - Size of the buffer SenseInfoBuffer points to.

    Options
      - Options used by this routine. It is a bit-field value. See defintions
        of list of #define SCSI_SENSE_OPTIONS above in this file.

    SenseKey
      - On output, buffer contains the sense key.
        Note: If null is specified, the function will not retrieve the sense key

    AdditionalSenseCode
      - On output, buffer contains the additional sense code.
        Note: If null is specified, the function will not retrieve the additional sense code.

    AdditionalSenseCodeQualifier
      - On output, buffer contains the additional sense code qualifier.
        Note: If null is specified, the function will not retrieve the additional sense code qualifier.

Returns:

    TRUE if the function is able to retrieve the requested information.

    Otherwise, FALSE

--*/
{
    BOOLEAN succeed = FALSE;

    if (SenseInfoBuffer == NULL || SenseInfoBufferLength == 0) {
        return FALSE;
    }

    if (IsDescriptorSenseDataFormat(SenseInfoBuffer)) {

        succeed = ScsiGetDescriptorSenseKeyAndCodes( SenseInfoBuffer,
                                                     SenseInfoBufferLength,
                                                     SenseKey,
                                                     AdditionalSenseCode,
                                                     AdditionalSenseCodeQualifier );
    } else {

        if ((Options & SCSI_SENSE_OPTIONS_FIXED_FORMAT_IF_UNKNOWN_FORMAT_INDICATED) ||
            IsFixedSenseDataFormat(SenseInfoBuffer)) {

            succeed = ScsiGetFixedSenseKeyAndCodes( SenseInfoBuffer,
                                                    SenseInfoBufferLength,
                                                    SenseKey,
                                                    AdditionalSenseCode,
                                                    AdditionalSenseCodeQualifier );
        }
    }

    return succeed;
}

_Success_(return != FALSE)
FORCEINLINE BOOLEAN
ScsiGetSenseDescriptor(
   _In_reads_bytes_(SenseInfoBufferLength) PVOID SenseInfoBuffer,
   _In_ UCHAR SenseInfoBufferLength,
   _Outptr_result_bytebuffer_(*DescriptorBufferLength) PVOID *DescriptorBuffer,
   _Out_ UCHAR *DescriptorBufferLength
   )
/*++

Description:

    This function calculates available amount of descriptors information
    within sense data in Descriptor format.  Then, it returns the starting
    address of descriptors and amount of descriptor data available.

Arguments:

    SenseInfoBuffer
      - A pointer to sense info buffer

    SenseInfoBufferLength
      - Size of the buffer SenseInfoBuffer points to.

    DescriptorBuffer
      - On output, it contains pointer to the starting address of descriptor

    DescriptorBufferLength
      - On output, it contains number of bytes of available descriptor data

Returns:

    TRUE if the function succeeds

    Otherwise, FALSE

    Note: FALSE if no descriptor data are available.

--*/
{
    PDESCRIPTOR_SENSE_DATA descriptorSenseData;
    BOOLEAN succeed = FALSE;
    UCHAR dataLength = 0;

    if (SenseInfoBuffer == NULL    ||
        SenseInfoBufferLength == 0 ||
        DescriptorBuffer == NULL   ||
        DescriptorBufferLength == NULL) {
        return FALSE;
    }

    *DescriptorBuffer = NULL;
    *DescriptorBufferLength = 0;

    if (!IsDescriptorSenseDataFormat(SenseInfoBuffer)) {
        return FALSE;
    }

    descriptorSenseData = (PDESCRIPTOR_SENSE_DATA)SenseInfoBuffer;

    if (RTL_CONTAINS_FIELD(descriptorSenseData, SenseInfoBufferLength, AdditionalSenseLength)) {

        if (descriptorSenseData->AdditionalSenseLength <= (MAX_SENSE_BUFFER_SIZE - RTL_SIZEOF_THROUGH_FIELD(DESCRIPTOR_SENSE_DATA, AdditionalSenseLength))) {

            dataLength = descriptorSenseData->AdditionalSenseLength + RTL_SIZEOF_THROUGH_FIELD(DESCRIPTOR_SENSE_DATA, AdditionalSenseLength);

            if (dataLength > SenseInfoBufferLength) {
                dataLength = SenseInfoBufferLength;
            }

            *DescriptorBufferLength = dataLength - RTL_SIZEOF_THROUGH_FIELD(DESCRIPTOR_SENSE_DATA, AdditionalSenseLength);

            if (*DescriptorBufferLength > 0) {
                *DescriptorBuffer = (PVOID)(descriptorSenseData->DescriptorBuffer);
                succeed = TRUE;
            }
        }
    }

    return succeed;
}

_Success_(return != FALSE)
FORCEINLINE BOOLEAN
ScsiValidateInformationSenseDescriptor(
    _In_reads_bytes_(DescriptorBufferLength) PVOID DescriptorBuffer,
    _In_ UCHAR DescriptorBufferLength
    )
/*++

Description:

    This function validates if buffer contains a valid payload for descriptor of Information type

Arguments:

    DescriptorBuffer
      - Pointer to the starting address of descriptor payload

    DescriptorBufferLength
      - Size of the buffer that DescriptorBuffer points to.

Returns:

    TRUE if DescriptorBuffer contains valid payload for Information type descriptor.

    Otherwise, FALSE

--*/
{
    PSCSI_SENSE_DESCRIPTOR_INFORMATION descriptor;
    UCHAR additionalLength;

    if (DescriptorBuffer == NULL || DescriptorBufferLength < sizeof(SCSI_SENSE_DESCRIPTOR_INFORMATION)) {
        return FALSE;
    }

    descriptor = (PSCSI_SENSE_DESCRIPTOR_INFORMATION)DescriptorBuffer;

    if (descriptor->Header.DescriptorType != SCSI_SENSE_DESCRIPTOR_TYPE_INFORMATION) {
        return FALSE;
    }

    additionalLength = sizeof(SCSI_SENSE_DESCRIPTOR_INFORMATION) - RTL_SIZEOF_THROUGH_FIELD(SCSI_SENSE_DESCRIPTOR_INFORMATION, Header);

    if (descriptor->Header.AdditionalLength != additionalLength) {
        return FALSE;
    }

    if (descriptor->Valid == 0) {
        return FALSE;
    }

   return TRUE;
}

_Success_(return != FALSE)
FORCEINLINE BOOLEAN
ScsiValidateBlockCommandSenseDescriptor(
    _In_reads_bytes_(DescriptorBufferLength) PVOID DescriptorBuffer,
    _In_ UCHAR DescriptorBufferLength
    )
/*++

Description:

    This function validates if buffer contains a valid payload for Block Command type descriptor

Arguments:

    DescriptorBuffer
      - Pointer to the starting address of descriptor payload

    DescriptorBufferLength
      - Size of the buffer that DescriptorBuffer points to

Returns:

    TRUE if DescriptorBuffer contains a valid payload for descriptor of Block Command type

    Otherwise, FALSE

--*/
{
    PSCSI_SENSE_DESCRIPTOR_BLOCK_COMMAND descriptor;
    UCHAR additionalLength;

    if (DescriptorBuffer == NULL || DescriptorBufferLength < sizeof(SCSI_SENSE_DESCRIPTOR_BLOCK_COMMAND)) {
        return FALSE;
    }

    descriptor = (PSCSI_SENSE_DESCRIPTOR_BLOCK_COMMAND)DescriptorBuffer;

    if (descriptor->Header.DescriptorType != SCSI_SENSE_DESCRIPTOR_TYPE_BLOCK_COMMAND) {
        return FALSE;
    }

    additionalLength = sizeof(SCSI_SENSE_DESCRIPTOR_BLOCK_COMMAND) - RTL_SIZEOF_THROUGH_FIELD(SCSI_SENSE_DESCRIPTOR_BLOCK_COMMAND, Header);

    if (descriptor->Header.AdditionalLength != additionalLength) {
        return FALSE;
    }

   return TRUE;
}

_Success_(return != FALSE)
FORCEINLINE BOOLEAN
ScsiConvertToFixedSenseFormat(
    _In_reads_bytes_(SenseInfoBufferLength) PVOID SenseInfoBuffer,
    _In_ UCHAR SenseInfoBufferLength,
    _Out_writes_bytes_(OutBufferLength) PVOID OutBuffer,
    _In_ UCHAR OutBufferLength
    )
/*++

Description:

    This routine converts descriptor format sense data to fixed format sense data.

    Due to differences between two formats, the conversion is only based on Sense Key,
    Additional Sense Code, and Additional Sense Code Qualififer.

Arguments:

    SenseInfoBuffer
      - A pointer to sense data buffer

    SenseInfoBufferLength
      - Size of the buffer SenseInfoBuffer points to.

    OutBuffer
      - On output, OutBuffer contains the fixed sense data as result of conversion.

    OutBufferLength
      - Size of the buffer that OutBuffer points to.

Returns:

    TRUE if conversion to Fixed format is successful.

    Otherwise, FALSE.

--*/
{
    BOOLEAN succeed = FALSE;
    BOOLEAN validSense  = FALSE;
    UCHAR senseKey = 0;
    UCHAR additionalSenseCode = 0;
    UCHAR additionalSenseCodeQualifier = 0;
    PFIXED_SENSE_DATA outBuffer = (PFIXED_SENSE_DATA)OutBuffer;

    if (SenseInfoBuffer == NULL ||
        SenseInfoBufferLength == 0 ||
        OutBuffer == NULL ||
        OutBufferLength < sizeof(FIXED_SENSE_DATA)) {
        return FALSE;
    }

    if (IsDescriptorSenseDataFormat(SenseInfoBuffer)) {

        RtlZeroMemory(OutBuffer, OutBufferLength);

        validSense = ScsiGetSenseKeyAndCodes(SenseInfoBuffer,
                                             SenseInfoBufferLength,
                                             SCSI_SENSE_OPTIONS_NONE,
                                             &senseKey,
                                             &additionalSenseCode,
                                             &additionalSenseCodeQualifier);
        if (validSense) {

            if (IsSenseDataCurrentError(SenseInfoBuffer)) {
                outBuffer->ErrorCode = SCSI_SENSE_ERRORCODE_FIXED_CURRENT;
            } else {
                outBuffer->ErrorCode = SCSI_SENSE_ERRORCODE_FIXED_DEFERRED;
            }
            outBuffer->AdditionalSenseLength = sizeof(FIXED_SENSE_DATA) - RTL_SIZEOF_THROUGH_FIELD(FIXED_SENSE_DATA, AdditionalSenseLength);
            outBuffer->SenseKey = senseKey;
            outBuffer->AdditionalSenseCode = additionalSenseCode;
            outBuffer->AdditionalSenseCodeQualifier = additionalSenseCodeQualifier;

            succeed = TRUE;
        }
    }

    return succeed;
}

_Success_(return != FALSE)
FORCEINLINE BOOLEAN
ScsiGetNextSenseDescriptorByType (
    _In_reads_bytes_(BufferLength) PVOID Buffer,
    _In_ UCHAR BufferLength,
    _In_reads_(TypeListCount) PUCHAR TypeList,
    _In_ ULONG TypeListCount,
    _Out_ PUCHAR OutType,
    _Outptr_result_bytebuffer_(*OutBufferLength) PVOID *OutBuffer,
    _Out_ UCHAR *OutBufferLength
)
/*++

Description:

    This routine locates the next descriptor with type equals to one of the
    types specified by caller.

Arguments:

    Buffer - pointer to buffer to be searched.

    BufferLength - Size of the buffer that Buffer points to.

    TypeList - Pointer to array of descriptor types to be searched

    TypeListCount - Number of element in TypeList array

    OutType - Upon return, if a descriptor is found,
              it contains the type of the descriptor.

    OutBuffer - Upon return, if a descriptor is found,
                it points to start address of the descriptor buffer

    OutBufferLength - Upon return, if a descriptor is found,
                      it contains the number of bytes available starting at
                      OutBuffer. i.e. This is the buffer available between
                      OutBuffer pointer and end of Buffer.

Returns:

    TRUE if descriptor of specified type is found.

    Otherwise, FALSE.

--*/
{
    PUCHAR remainingBuffer;
    UCHAR remainingBufferLength;
    UCHAR type;
    ULONG i;
    UCHAR descriptorLength;

    if (Buffer          == NULL ||
        BufferLength    == 0    ||
        TypeList        == NULL ||
        TypeListCount   == 0    ||
        OutType         == NULL ||
        OutBuffer       == NULL ||
        OutBufferLength == NULL) {

        return FALSE;
    }

    *OutBuffer = NULL;
    *OutBufferLength = 0;
    *OutType = 0;

    remainingBuffer = (PUCHAR)Buffer;
    remainingBufferLength = BufferLength;

    while (remainingBufferLength >= sizeof(SCSI_SENSE_DESCRIPTOR_HEADER)) {

        for (i = 0; i < TypeListCount; i++) {

            type = TypeList[i];

            if (((PSCSI_SENSE_DESCRIPTOR_HEADER)remainingBuffer)->DescriptorType == type) {
                *OutBuffer = (PVOID)remainingBuffer;
                *OutBufferLength = remainingBufferLength;
                *OutType = type;
                return TRUE;
            }
        }

        descriptorLength = ScsiGetSenseDescriptorLength(remainingBuffer);

        if (remainingBufferLength > descriptorLength) {

            // Advance to start address of next descriptor
            remainingBuffer += descriptorLength;
            remainingBufferLength -= descriptorLength;

        } else {

            // Search is completed.
            break;
        }

    }

    return FALSE;
}

//
// [END] Collections of SCSI utiltiy functions
//

// end_storport


#if defined DebugPrint
   #undef DebugPrint
#endif

#if DBG

#define DebugPrint(x) TapeDebugPrint x

#else

#define DebugPrint(x)

#endif // DBG

//
// Define Device Configuration Page
//

typedef struct _MODE_DEVICE_CONFIGURATION_PAGE {

    UCHAR PageCode : 6;
    UCHAR Reserved1 : 1;
    UCHAR PS : 1;
    UCHAR PageLength;
    UCHAR ActiveFormat : 5;
    UCHAR CAFBit : 1;
    UCHAR CAPBit : 1;
    UCHAR Reserved2 : 1;
    UCHAR ActivePartition;
    UCHAR WriteBufferFullRatio;
    UCHAR ReadBufferEmptyRatio;
    UCHAR WriteDelayTime[2];
    UCHAR REW : 1;
    UCHAR RBO : 1;
    UCHAR SOCF : 2;
    UCHAR AVC : 1;
    UCHAR RSmk : 1;
    UCHAR BIS : 1;
    UCHAR DBR : 1;
    UCHAR GapSize;
    UCHAR Reserved3 : 3;
    UCHAR SEW : 1;
    UCHAR EEG : 1;
    UCHAR EODdefined : 3;
    UCHAR BufferSize[3];
    UCHAR DCAlgorithm;
    UCHAR Reserved4;

} MODE_DEVICE_CONFIGURATION_PAGE, *PMODE_DEVICE_CONFIGURATION_PAGE;

//
// Define Medium Partition Page
//

typedef struct _MODE_MEDIUM_PARTITION_PAGE {

    UCHAR PageCode : 6;
    UCHAR Reserved1 : 1;
    UCHAR PSBit : 1;
    UCHAR PageLength;
    UCHAR MaximumAdditionalPartitions;
    UCHAR AdditionalPartitionDefined;
    UCHAR Reserved2 : 3;
    UCHAR PSUMBit : 2;
    UCHAR IDPBit : 1;
    UCHAR SDPBit : 1;
    UCHAR FDPBit : 1;
    UCHAR MediumFormatRecognition;
    UCHAR Reserved3[2];
    UCHAR Partition0Size[2];
    UCHAR Partition1Size[2];

} MODE_MEDIUM_PARTITION_PAGE, *PMODE_MEDIUM_PARTITION_PAGE;

//
// Define Data Compression Page
//

typedef struct _MODE_DATA_COMPRESSION_PAGE {

    UCHAR PageCode : 6;
    UCHAR Reserved1 : 2;
    UCHAR PageLength;
    UCHAR Reserved2 : 6;
    UCHAR DCC : 1;
    UCHAR DCE : 1;
    UCHAR Reserved3 : 5;
    UCHAR RED : 2;
    UCHAR DDE : 1;
    UCHAR CompressionAlgorithm[4];
    UCHAR DecompressionAlgorithm[4];
    UCHAR Reserved4[4];

} MODE_DATA_COMPRESSION_PAGE, *PMODE_DATA_COMPRESSION_PAGE;

//
// Define capabilites and mechanical status page.
//

typedef struct _MODE_CAPABILITIES_PAGE {

    UCHAR PageCode : 6;
    UCHAR Reserved1 : 2;
    UCHAR PageLength;
    UCHAR Reserved2[2];
    UCHAR RO : 1;
    UCHAR Reserved3 : 4;
    UCHAR SPREV : 1;
    UCHAR Reserved4 : 2;
    UCHAR Reserved5 : 3;
    UCHAR EFMT : 1;
    UCHAR Reserved6 : 1;
    UCHAR QFA : 1;
    UCHAR Reserved7 : 2;
    UCHAR LOCK : 1;
    UCHAR LOCKED : 1;
    UCHAR PREVENT : 1;
    UCHAR UNLOAD : 1;
    UCHAR Reserved8 : 2;
    UCHAR ECC : 1;
    UCHAR CMPRS : 1;
    UCHAR Reserved9 : 1;
    UCHAR BLK512 : 1;
    UCHAR BLK1024 : 1;
    UCHAR Reserved10 : 4;
    UCHAR SLOWB : 1;
    UCHAR MaximumSpeedSupported[2];
    UCHAR MaximumStoredDefectedListEntries[2];
    UCHAR ContinuousTransferLimit[2];
    UCHAR CurrentSpeedSelected[2];
    UCHAR BufferSize[2];
    UCHAR Reserved11[2];

} MODE_CAPABILITIES_PAGE, *PMODE_CAPABILITIES_PAGE;

typedef struct _MODE_CAP_PAGE {

    MODE_PARAMETER_HEADER   ParameterListHeader;
    MODE_PARAMETER_BLOCK    ParameterListBlock;
    MODE_CAPABILITIES_PAGE  CapabilitiesPage;

} MODE_CAP_PAGE, *PMODE_CAP_PAGE;



//
// Mode parameter list header and medium partition page -
// used in creating partitions
//

typedef struct _MODE_MEDIUM_PART_PAGE {

   MODE_PARAMETER_HEADER       ParameterListHeader;
   MODE_MEDIUM_PARTITION_PAGE  MediumPartPage;

} MODE_MEDIUM_PART_PAGE, *PMODE_MEDIUM_PART_PAGE;

typedef struct _MODE_MEDIUM_PART_PAGE_PLUS {

    MODE_PARAMETER_HEADER       ParameterListHeader;
    MODE_PARAMETER_BLOCK        ParameterListBlock;
    MODE_MEDIUM_PARTITION_PAGE  MediumPartPage;

} MODE_MEDIUM_PART_PAGE_PLUS, *PMODE_MEDIUM_PART_PAGE_PLUS;



//
// Mode parameters for retrieving tape or media information
//

typedef struct _MODE_TAPE_MEDIA_INFORMATION {

   MODE_PARAMETER_HEADER       ParameterListHeader;
   MODE_PARAMETER_BLOCK        ParameterListBlock;
   MODE_MEDIUM_PARTITION_PAGE  MediumPartPage;

} MODE_TAPE_MEDIA_INFORMATION, *PMODE_TAPE_MEDIA_INFORMATION;

//
// Mode parameter list header and device configuration page -
// used in retrieving device configuration information
//

typedef struct _MODE_DEVICE_CONFIG_PAGE {

   MODE_PARAMETER_HEADER       ParameterListHeader;
   MODE_DEVICE_CONFIGURATION_PAGE  DeviceConfigPage;

} MODE_DEVICE_CONFIG_PAGE, *PMODE_DEVICE_CONFIG_PAGE;

typedef struct _MODE_DEVICE_CONFIG_PAGE_PLUS {

   MODE_PARAMETER_HEADER       ParameterListHeader;
   MODE_PARAMETER_BLOCK        ParameterListBlock;
   MODE_DEVICE_CONFIGURATION_PAGE  DeviceConfigPage;

} MODE_DEVICE_CONFIG_PAGE_PLUS, *PMODE_DEVICE_CONFIG_PAGE_PLUS ;

//
// Mode parameter list header and data compression page -
// used in retrieving data compression information
//

typedef struct _MODE_DATA_COMPRESS_PAGE {

   MODE_PARAMETER_HEADER       ParameterListHeader;
   MODE_DATA_COMPRESSION_PAGE  DataCompressPage;

} MODE_DATA_COMPRESS_PAGE, *PMODE_DATA_COMPRESS_PAGE;

typedef struct _MODE_DATA_COMPRESS_PAGE_PLUS {

   MODE_PARAMETER_HEADER       ParameterListHeader;
   MODE_PARAMETER_BLOCK        ParameterListBlock;
   MODE_DATA_COMPRESSION_PAGE  DataCompressPage;

} MODE_DATA_COMPRESS_PAGE_PLUS, *PMODE_DATA_COMPRESS_PAGE_PLUS;



//
// Tape/Minitape definition.
//

typedef
BOOLEAN
(*TAPE_VERIFY_INQUIRY_ROUTINE)(
    _In_  PINQUIRYDATA            InquiryData,
    _In_  PMODE_CAPABILITIES_PAGE ModeCapabilitiesPage
    );

typedef
VOID
(*TAPE_EXTENSION_INIT_ROUTINE)(
    _In_  PVOID                   MinitapeExtension,
    _In_  PINQUIRYDATA            InquiryData,
    _In_  PMODE_CAPABILITIES_PAGE ModeCapabilitiesPage
    );

typedef enum _TAPE_STATUS {
    TAPE_STATUS_SEND_SRB_AND_CALLBACK,
    TAPE_STATUS_CALLBACK,
    TAPE_STATUS_CHECK_TEST_UNIT_READY,

    TAPE_STATUS_SUCCESS,
    TAPE_STATUS_INSUFFICIENT_RESOURCES,
    TAPE_STATUS_NOT_IMPLEMENTED,
    TAPE_STATUS_INVALID_DEVICE_REQUEST,
    TAPE_STATUS_INVALID_PARAMETER,

    TAPE_STATUS_MEDIA_CHANGED,
    TAPE_STATUS_BUS_RESET,
    TAPE_STATUS_SETMARK_DETECTED,
    TAPE_STATUS_FILEMARK_DETECTED,
    TAPE_STATUS_BEGINNING_OF_MEDIA,
    TAPE_STATUS_END_OF_MEDIA,
    TAPE_STATUS_BUFFER_OVERFLOW,
    TAPE_STATUS_NO_DATA_DETECTED,
    TAPE_STATUS_EOM_OVERFLOW,
    TAPE_STATUS_NO_MEDIA,
    TAPE_STATUS_IO_DEVICE_ERROR,
    TAPE_STATUS_UNRECOGNIZED_MEDIA,

    TAPE_STATUS_DEVICE_NOT_READY,
    TAPE_STATUS_MEDIA_WRITE_PROTECTED,
    TAPE_STATUS_DEVICE_DATA_ERROR,
    TAPE_STATUS_NO_SUCH_DEVICE,
    TAPE_STATUS_INVALID_BLOCK_LENGTH,
    TAPE_STATUS_IO_TIMEOUT,
    TAPE_STATUS_DEVICE_NOT_CONNECTED,
    TAPE_STATUS_DATA_OVERRUN,
    TAPE_STATUS_DEVICE_BUSY,
    TAPE_STATUS_REQUIRES_CLEANING,
    TAPE_STATUS_CLEANER_CARTRIDGE_INSTALLED

} TAPE_STATUS, *PTAPE_STATUS;

typedef
VOID
(*TAPE_ERROR_ROUTINE)(
    _In_      PVOID               MinitapeExtension,
    _In_      PSCSI_REQUEST_BLOCK Srb,
    _Inout_  PTAPE_STATUS        TapeStatus
    );

#define TAPE_RETRY_MASK 0x0000FFFF
#define IGNORE_ERRORS   0x00010000
#define RETURN_ERRORS   0x00020000

typedef
TAPE_STATUS
(*TAPE_PROCESS_COMMAND_ROUTINE)(
    _Inout_  PVOID               MinitapeExtension,
    _Inout_  PVOID               CommandExtension,
    _Inout_  PVOID               CommandParameters,
    _Inout_  PSCSI_REQUEST_BLOCK Srb,
    _In_      ULONG               CallNumber,
    _In_      TAPE_STATUS         StatusOfLastCommand,
    _Inout_  PULONG              RetryFlags
    );

//
// NT 4.0 miniclass drivers will be using this.
//

typedef struct _TAPE_INIT_DATA {
    TAPE_VERIFY_INQUIRY_ROUTINE     VerifyInquiry;
    BOOLEAN                         QueryModeCapabilitiesPage ;
    ULONG                           MinitapeExtensionSize;
    TAPE_EXTENSION_INIT_ROUTINE     ExtensionInit;          /* OPTIONAL */
    ULONG                           DefaultTimeOutValue;    /* OPTIONAL */
    TAPE_ERROR_ROUTINE              TapeError;              /* OPTIONAL */
    ULONG                           CommandExtensionSize;
    TAPE_PROCESS_COMMAND_ROUTINE    CreatePartition;
    TAPE_PROCESS_COMMAND_ROUTINE    Erase;
    TAPE_PROCESS_COMMAND_ROUTINE    GetDriveParameters;
    TAPE_PROCESS_COMMAND_ROUTINE    GetMediaParameters;
    TAPE_PROCESS_COMMAND_ROUTINE    GetPosition;
    TAPE_PROCESS_COMMAND_ROUTINE    GetStatus;
    TAPE_PROCESS_COMMAND_ROUTINE    Prepare;
    TAPE_PROCESS_COMMAND_ROUTINE    SetDriveParameters;
    TAPE_PROCESS_COMMAND_ROUTINE    SetMediaParameters;
    TAPE_PROCESS_COMMAND_ROUTINE    SetPosition;
    TAPE_PROCESS_COMMAND_ROUTINE    WriteMarks;
    TAPE_PROCESS_COMMAND_ROUTINE    PreProcessReadWrite;
} TAPE_INIT_DATA, *PTAPE_INIT_DATA;

typedef struct _TAPE_INIT_DATA_EX {

    //
    // Size of this structure.
    //

    ULONG InitDataSize;

    //
    // Keep the 4.0 init data as is, so support of these
    // drivers can be as seamless as possible.
    //

    TAPE_VERIFY_INQUIRY_ROUTINE     VerifyInquiry;
    BOOLEAN                         QueryModeCapabilitiesPage ;
    ULONG                           MinitapeExtensionSize;
    TAPE_EXTENSION_INIT_ROUTINE     ExtensionInit;          /* OPTIONAL */
    ULONG                           DefaultTimeOutValue;    /* OPTIONAL */
    TAPE_ERROR_ROUTINE              TapeError;              /* OPTIONAL */
    ULONG                           CommandExtensionSize;
    TAPE_PROCESS_COMMAND_ROUTINE    CreatePartition;
    TAPE_PROCESS_COMMAND_ROUTINE    Erase;
    TAPE_PROCESS_COMMAND_ROUTINE    GetDriveParameters;
    TAPE_PROCESS_COMMAND_ROUTINE    GetMediaParameters;
    TAPE_PROCESS_COMMAND_ROUTINE    GetPosition;
    TAPE_PROCESS_COMMAND_ROUTINE    GetStatus;
    TAPE_PROCESS_COMMAND_ROUTINE    Prepare;
    TAPE_PROCESS_COMMAND_ROUTINE    SetDriveParameters;
    TAPE_PROCESS_COMMAND_ROUTINE    SetMediaParameters;
    TAPE_PROCESS_COMMAND_ROUTINE    SetPosition;
    TAPE_PROCESS_COMMAND_ROUTINE    WriteMarks;
    TAPE_PROCESS_COMMAND_ROUTINE    PreProcessReadWrite;

    //
    // New entry points / information for 5.0
    //
    // Returns supported media types for the device.
    //

    TAPE_PROCESS_COMMAND_ROUTINE    TapeGetMediaTypes;

    //
    // Indicates the number of different types the drive supports.
    //

    ULONG                           MediaTypesSupported;

    //
    // Entry point for all WMI operations that the driver/device supports.
    //

    TAPE_PROCESS_COMMAND_ROUTINE    TapeWMIOperations;
    ULONG                           Reserved[2];
} TAPE_INIT_DATA_EX, *PTAPE_INIT_DATA_EX;

SCSIPORT_API
ULONG
TapeClassInitialize(
    _In_  PVOID           Argument1,
    _In_  PVOID           Argument2,
    _In_  PTAPE_INIT_DATA_EX TapeInitData
    );

SCSIPORT_API
BOOLEAN
TapeClassAllocateSrbBuffer(
    _Inout_  PSCSI_REQUEST_BLOCK Srb,
    _In_      ULONG               SrbBufferSize
    );

SCSIPORT_API
VOID
TapeClassZeroMemory(
    _Inout_updates_bytes_(BufferSize) _Inout_  PVOID   Buffer,
    _In_      ULONG   BufferSize
    );

SCSIPORT_API
ULONG
TapeClassCompareMemory(
    _Inout_  PVOID   Source1,
    _Inout_  PVOID   Source2,
    _In_      ULONG   Length
    );

SCSIPORT_API
LARGE_INTEGER
TapeClassLiDiv(
    _In_ LARGE_INTEGER Dividend,
    _In_ LARGE_INTEGER Divisor
    );

SCSIPORT_API
VOID
TapeDebugPrint(
    ULONG DebugPrintLevel,
    PCCHAR DebugMessage,
    ...
    );


//
// defines for QIC tape density codes
//

#define QIC_XX     0   // ????
#define QIC_24     5   // 0x05
#define QIC_120    15  // 0x0F
#define QIC_150    16  // 0x10
#define QIC_525    17  // 0x11
#define QIC_1350   18  // 0x12
#define QIC_1000   21  // 0x15
#define QIC_1000C  30  // 0x1E
#define QIC_2100   31  // 0x1F
#define QIC_2GB    34  // 0x22
#define QIC_5GB    40  // 0x28

//
// defines for QIC tape media codes
//

#define DCXXXX   0
#define DC300    1
#define DC300XLP 2
#define DC615    3
#define DC600    4
#define DC6037   5
#define DC6150   6
#define DC6250   7
#define DC6320   8
#define DC6525   9
#define DC9135SL 33  //0x21
#define DC9210   34  //0x22
#define DC9135   35  //0x23
#define DC9100   36  //0x24
#define DC9120   37  //0x25
#define DC9120SL 38  //0x26
#define DC9164   39  //0x27
#define DCXXXXFW 48  //0x30
#define DC9200SL 49  //0x31
#define DC9210XL 50  //0x32
#define DC10GB   51  //0x33
#define DC9200   52  //0x34
#define DC9120XL 53  //0x35
#define DC9210SL 54  //0x36
#define DC9164XL 55  //0x37
#define DC9200XL 64  //0x40
#define DC9400   65  //0x41
#define DC9500   66  //0x42
#define DC9500SL 70  //0x46

//
// defines for translation reference point
//

#define NOT_FROM_BOT 0
#define FROM_BOT 1

//
// info/structure returned by/from
// TapeLogicalBlockToPhysicalBlock( )
//

typedef struct _TAPE_PHYS_POSITION {
    ULONG SeekBlockAddress;
    ULONG SpaceBlockCount;
} TAPE_PHYS_POSITION, PTAPE_PHYS_POSITION;

//
// function prototypes
//

TAPE_PHYS_POSITION
TapeClassLogicalBlockToPhysicalBlock(
    _In_ UCHAR DensityCode,
    _In_ ULONG LogicalBlockAddress,
    _In_ ULONG BlockLength,
    _In_ BOOLEAN FromBOT
    );

ULONG
TapeClassPhysicalBlockToLogicalBlock(
    _In_ UCHAR DensityCode,
    _In_ ULONG PhysicalBlockAddress,
    _In_ ULONG BlockLength,
    _In_ BOOLEAN FromBOT
    );


//
// LOG SENSE Page codes
//
#define TapeAlertLogPage  0x2E

//
// Type of tape drive alert information
// supported by the drive.
// For example, if the type is TapeAlertInfoNone, the drive doesn't
// support any alert info. Need to use read\write error counters
// to predict drive problems. If the type is TapeAlertInfoRequestSense,
// request sense command can be used to determine drive problems.
//
typedef enum _TAPE_ALERT_INFO_TYPE { 
   TapeAlertInfoNone,        
   TapeAlertInfoRequestSense,
   TapeAlertInfoLogPage   
} TAPE_ALERT_INFO_TYPE;

//
// Tape alert information
//
#define READ_WARNING            1
#define WRITE_WARNING           2
#define HARD_ERROR              3 
#define MEDIA_ERROR             4
#define READ_FAILURE            5
#define WRITE_FAILURE           6
#define MEDIA_LIFE              7
#define NOT_DATA_GRADE          8
#define WRITE_PROTECT           9
#define NO_REMOVAL              10
#define CLEANING_MEDIA          11
#define UNSUPPORTED_FORMAT      12
#define SNAPPED_TAPE            13
#define CLEAN_NOW               20
#define CLEAN_PERIODIC          21
#define EXPIRED_CLEANING_MEDIA  22
#define HARDWARE_A              30
#define HARDWARE_B              31
#define INTERFACE_ERROR         32
#define EJECT_MEDIA             33
#define DOWNLOAD_FAIL           34

//
// The following structs are duplicated from wmidata.h
// wmidata.h is generated from wmicore.mof file. Should
// the MOF file change for these structs, the corresponding
// change should be made in these structs also. 
// Since minidrivers do not have access wmidata.h, we need
// to duplicate it here.
//
// ISSUE : 02/28/2000 - nramas : Should find a better way to
// handle the above. Duplication will cause problems in keeping
// these definitions in sync.
//
typedef struct _WMI_TAPE_DRIVE_PARAMETERS
{
    // Maximum block size supported
    ULONG MaximumBlockSize;

    // Minimum block size supported
    ULONG MinimumBlockSize;
    
    // Default block size supported
    ULONG DefaultBlockSize;

    // Maximum number of partitions allowed.
    ULONG MaximumPartitionCount;

    // TRUE if drive supports compression.
    BOOLEAN CompressionCapable;

    // TRUE if compression is enabled.
    BOOLEAN CompressionEnabled;

    // TRUE if drive reports setmarks
    BOOLEAN ReportSetmarks;

    // TRUE if drive supports hardware error correction
    BOOLEAN HardwareErrorCorrection;
} WMI_TAPE_DRIVE_PARAMETERS, *PWMI_TAPE_DRIVE_PARAMETERS;

typedef struct _WMI_TAPE_MEDIA_PARAMETERS
{
    // Maximum capacity of the media
    ULONGLONG MaximumCapacity;

    // Available capacity of the media
    ULONGLONG AvailableCapacity;

    // Current blocksize
    ULONG BlockSize;

    // Current number of partitions
    ULONG PartitionCount;

    // TRUEif media is write protected
    BOOLEAN MediaWriteProtected;
} WMI_TAPE_MEDIA_PARAMETERS, *PWMI_TAPE_MEDIA_PARAMETERS;


typedef struct _WMI_TAPE_PROBLEM_WARNING
{
    // Tape drive problem warning event
    ULONG DriveProblemType;

    // Tape drive problem data
    UCHAR TapeData[512];
} WMI_TAPE_PROBLEM_WARNING, *PWMI_TAPE_PROBLEM_WARNING;

typedef struct _WMI_TAPE_PROBLEM_IO_ERROR
{
    // Read errors corrected without much delay
    ULONG ReadCorrectedWithoutDelay;

    // Read errors corrected with substantial delay
    ULONG ReadCorrectedWithDelay;

    // Total number of Read errors
    ULONG ReadTotalErrors;

    // Total number of read errors that were corrected
    ULONG ReadTotalCorrectedErrors;

    // Total number of uncorrected read errors
    ULONG ReadTotalUncorrectedErrors;

    // Number of times correction algorithm was processed for read
    ULONG ReadCorrectionAlgorithmProcessed;

    // Write errors corrected without much delay
    ULONG WriteCorrectedWithoutDelay;

    // Write errors corrected with substantial delay
    ULONG WriteCorrectedWithDelay;

    // Total number of Read errors
    ULONG WriteTotalErrors;

    // Total number of write errors that were corrected
    ULONG WriteTotalCorrectedErrors;

    // Total number of uncorrected write errors
    ULONG WriteTotalUncorrectedErrors;

    // Number of times correction algorithm was processed for write
    ULONG WriteCorrectionAlgorithmProcessed;

    // Errors not related to medium
    ULONG NonMediumErrors;
} WMI_TAPE_PROBLEM_IO_ERROR, *PWMI_TAPE_PROBLEM_IO_ERROR;

typedef struct _WMI_TAPE_PROBLEM_DEVICE_ERROR
{

   // WARNING : Drive is experiencing read problem.
   BOOLEAN ReadWarning;
   
   // WARNING : Drive is experiencing write problem.
   BOOLEAN WriteWarning;

   // Drive hardware problem
   BOOLEAN HardError;

   // Critical Error : Too many read errors.
   BOOLEAN ReadFailure;

   // Critical Error : Too many write errors.
   BOOLEAN WriteFailure;

   // Tape format not supported
   BOOLEAN UnsupportedFormat;

   // Tape is snapped. Replace media
   BOOLEAN TapeSnapped;

   // Drive Requires Cleaning
   BOOLEAN DriveRequiresCleaning;

   // It's time to clean the drive
   BOOLEAN TimetoCleanDrive;

   // Hardware error. Check drive
   BOOLEAN DriveHardwareError;

   // Some error in cabling, or connection.
   BOOLEAN ScsiInterfaceError;

   // Critical Error : Media life expired. 
   BOOLEAN MediaLife;
} WMI_TAPE_PROBLEM_DEVICE_ERROR, *PWMI_TAPE_PROBLEM_DEVICE_ERROR;


#if defined(_MSC_VER) && (_MSC_VER >= 800)
#if (_MSC_VER >= 1200)
#pragma warning(pop)
#else
#pragma warning(default:4200) /* nonstandard extension used : zero-sized array in struct/union */
#pragma warning(default:4201) /* nonstandard extension used : Nameless struct/union            */
#pragma warning(default:4214) /* nonstandard extension used : Bit field types other than int   */
#endif
#endif

#endif /* _MINITAPE_ */
