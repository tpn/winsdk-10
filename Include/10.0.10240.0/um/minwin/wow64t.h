/*++ BUILD Version: 0001    // Increment this if a change has global effects

Copyright (c) Microsoft Corporation.  All rights reserved.

Module Name:

    wow64t.h

Abstract:

    32-bit structure definitions for 64-bit NT.

Author:

    Barry Bond (barrybo)   20-Jun-1998

Revision History:

--*/

#ifndef _WOW64T_
#define _WOW64T_


//
// Wow64 TLS-slots definitions
//

#include "wow64tls.h"


#if _MSC_VER > 1000
#pragma once
#endif

//
// X86-processor supported features
//
// The following features are considered:
// - Address Windowing Extension (AWE)
// - LARGE_PAGE Allocations
// - WriteWatch pages
// - Read/Write Scatter/Gather IO
// - UMS
//

#if BUILD_WOW64_ENABLED
#if defined(_AMD64_)
#define WOW64_IS_LARGE_PAGES_SUPPORTED()            (TRUE)
#define WOW64_IS_AWE_SUPPORTED()                    (TRUE)
#define WOW64_IS_RDWR_SCATTER_GATHER_SUPPORTED()    (TRUE)
#define WOW64_IS_WRITE_WATCH_SUPPORTED()            (TRUE)
#define _WOW64_ALIGN_LARGE_INTEGER                  0
#define WOW64_UNALIGNED
#elif defined(_IA64_)
#define WOW64_IS_LARGE_PAGES_SUPPORTED()            (FALSE)
#define WOW64_IS_AWE_SUPPORTED()                    (FALSE)
#define WOW64_IS_RDWR_SCATTER_GATHER_SUPPORTED()    (FALSE)
#define WOW64_IS_WRITE_WATCH_SUPPORTED()            (FALSE)
#define _WOW64_ALIGN_LARGE_INTEGER                  1
#define WOW64_UNALIGNED                             UNALIGNED
#elif defined(_ARM_)
#define WOW64_IS_LARGE_PAGES_SUPPORTED()            (FALSE)
#define WOW64_IS_AWE_SUPPORTED()                    (FALSE)
#define WOW64_IS_RDWR_SCATTER_GATHER_SUPPORTED()    (FALSE)
#define WOW64_IS_WRITE_WATCH_SUPPORTED()            (FALSE)
#define _WOW64_ALIGN_LARGE_INTEGER                  1
#define WOW64_UNALIGNED
#elif defined(_ARM64_)
#define WOW64_IS_LARGE_PAGES_SUPPORTED()            (FALSE)
#define WOW64_IS_AWE_SUPPORTED()                    (FALSE)
#define WOW64_IS_RDWR_SCATTER_GATHER_SUPPORTED()    (FALSE)
#define WOW64_IS_WRITE_WATCH_SUPPORTED()            (FALSE)
#define _WOW64_ALIGN_LARGE_INTEGER                  0
#define WOW64_UNALIGNED
#else
#error "No Target Architecture"
#endif
#endif

#if defined(_WIN64)
    #define WOW64_CHILD_PROCESS_SIGNATURE     0xff00ff0011001100
#else
    #define WOW64_CHILD_PROCESS_SIGNATURE     0xff00ff00
#endif
typedef struct _ChildProcessInfo {
    ULONG_PTR   Signature;
    PVOID       pPeb32;
    SECTION_IMAGE_INFORMATION ImageInformation;
    ULONG_PTR   TailSignature;
} WOW64_CHILD_PROCESS_INFO, *PWOW64_CHILD_PROCESS_INFO;

//
// Page size on x86 NT
//

#define PAGE_SIZE_X86NT             0x1000
#define PAGE_SHIFT_X86NT            12L
#define WOW64_SPLITS_PER_PAGE       (PAGE_SIZE / PAGE_SIZE_X86NT)

#define MIN_STACK_REQ_WINNT_X86NT   2

//
// Stack definitions
//

#define STACK_ALIGN_SHIFT_X86NT (2UL)
#define STACK_ALIGN_X86NT       (1UL << STACK_ALIGN_SHIFT_X86NT)
#define STACK_ROUND_X86NT       (STACK_ALIGN_X86NT - 1)

//
// Convert the number of native pages to sub x86-pages
//

#define Wow64GetNumberOfX86Pages(NativePages)    \
        (NativePages * (PAGE_SIZE >> PAGE_SHIFT_X86NT))

//
// Macro to round to the nearest page size
//

#define WOW64_ROUND_TO_PAGES(Size)  \
        (((ULONG_PTR)(Size) + PAGE_SIZE - 1) & ~(PAGE_SIZE - 1))

//
// Get number of native pages
//

#define WOW64_BYTES_TO_PAGES(Size)  (((ULONG)(Size) >> PAGE_SHIFT) + \
                                     (((ULONG)(Size) & (PAGE_SIZE - 1)) != 0))

//
// The name of the 32-bit system directory, which is a child of %SystemRoot%
//

#define WOW64_SYSTEM_DIRECTORY      "SysWOW64"
#define WOW64_SYSTEM_DIRECTORY_U   L"SysWOW64"

// Length in bytes of the new system directory, not counting a
// null terminator
//

#define WOW64_SYSTEM_DIRECTORY_SIZE (sizeof(WOW64_SYSTEM_DIRECTORY)-sizeof(CHAR))
#define WOW64_SYSTEM_DIRECTORY_U_SIZE (sizeof(WOW64_SYSTEM_DIRECTORY_U)-sizeof(WCHAR))

//
// IA64 delayed debugger notification support
//

#define WOW64_DEBUG_SIGNATURE_32BIT_DBG         0xABCDABDE000      // 32bit debugger is there
#define WOW64_DEBUG_EVENT_64BIT_DLL_UNLOAD      0x00000000001      // 64bit dll unload event not in use
#define WOW64_DEBUG_EVENT_32BIT_DLL_UNLOAD      0x00000000002      // 32bit DLL unload notification
#define WOW64_DEBUG_EVENT_DELAY_CREATE_PROCESS  0x00000000004      // Delay CreateProcess Event
#define WOW64_DEBUG_EVENT_DELAY_DLLLOAD         0x00000000008      // DElay Dll Load Event
#define WOW64_DEBUG_EVENT_NOTIFY_WX86_DONE      0x00000000010      // Notify FMT Image is done
#define WOW64_STATUS_WX86_FMT_DONE              0xCABCDE10

//
// Wow64 shared information
//

typedef enum _WOW64_SHARED_INFORMATION
{
    SharedNtdll32LdrInitializeThunk,
    SharedNtdll32KiUserExceptionDispatcher,
    SharedNtdll32KiUserApcDispatcher,
    SharedNtdll32KiUserCallbackDispatcher,
    SharedNtdll32ExpInterlockedPopEntrySListFault,
    SharedNtdll32ExpInterlockedPopEntrySListResume,
    SharedNtdll32ExpInterlockedPopEntrySListEnd,
    SharedNtdll32RtlUserThreadStart,
    SharedNtdll32pQueryProcessDebugInformationRemote,
    SharedNtdll32BaseAddress,
    SharedNtdll32LdrSystemDllInitBlock,
    Wow64SharedPageEntriesCount
} WOW64_SHARED_INFORMATION;

#if defined(_NTDLLBUILD_)
extern PS_SYSTEM_DLL_INIT_BLOCK LdrSystemDllInitBlock;
#else
extern NTSYSAPI PS_SYSTEM_DLL_INIT_BLOCK LdrSystemDllInitBlock;
#endif // defined(_NTDLLBUILD_)

#if defined(_NTOS_) && !defined(_NTDLLBUILD_)
#define Wow64GetSharedInformation(entry)    \
        (PsWow64SharedInformation [entry])
#else
#define Wow64GetSharedInformation(entry)    \
        (LdrSystemDllInitBlock.Wow64SharedInformation [entry])
#endif // defined(_NTOS_) && !defined(_NTDLLBUILD_)

#if !defined(SORTPP_PASS) && !defined(MIDL_PASS) && !defined(RC_INVOKED)
C_ASSERT (Wow64SharedPageEntriesCount <= MAX_WOW64_SHARED_ENTRIES);
#endif


//
// Turbo-Thunk data structure definition
//

typedef enum _WOW64_TURBO_SERVICE_TYPE {
    ServiceNoTurbo = 0,
    Service0Arg,
    Service0ArgReloadState,
    Service1ArgSp,
    Service1ArgNSp,
    Service2ArgNSpNSp,
    Service2ArgNSpNSpReloadState,
    Service2ArgSpNSp,
    Service2ArgSpSp,
    Service2ArgNSpSp,
    Service3ArgNSpNSpNSp,
    Service3ArgSpSpSp,
    Service3ArgSpNSpNSp,
    Service3ArgSpNSpNSpReloadState,
    Service3ArgSpSpNSp,
    Service3ArgNSpSpNSp,
    Service3ArgSpNSpSp,
    Service4ArgNSpNSpNSpNSp,
    Service4ArgSpSpNSpNSp,
    Service4ArgSpSpNSpNSpReloadState,
    Service4ArgSpNSpNSpNSp,
    Service4ArgSpNSpNSpNSpReloadState,
    Service4ArgNSpSpNSpNSp,
    Service4ArgSpSpSpNSp,
    ServiceCpupTdQuerySystemTime,
    ServiceCpupTdGetCurrentProcessorNumber,
    ServiceCpupTdReadWriteFile,
    ServiceCpupTdDeviceIoControlFile,
    ServiceCpupTdRemoveIoCompletion,
    ServiceCpupTdWaitForMultipleObjects,
    ServiceCpupTdWaitForMultipleObjects32,
    ServiceCpupReturnFromSimulatedCode,       // Not really a turbo thunk.
    Wow64ServiceTypesCount

} WOW64_TURBO_SERVICE_TYPE;

typedef union _TURBO_THUNK_DESCRIPTION {
     struct {
         UCHAR ServiceType;
     } DUMMYSTRUCTNAME;

} TURBO_THUNK_DESCRIPTION, *PTURBO_THUNK_DESCRIPTION;

//
// Wow64 Registry Configuration
//

//
// Wow64 Execution Flags
//
//  31   28 27          15     11  8 7           0
// +---------------------------------------------+
// |   4   |       13   |1|1|1|  4  |     8      |
// +---------------------------------------------+
//     |           |     | | |   |        |
//     |           |     | | |   |        +---------> 64-bit Stack reserve (native PAGE_SIZE multiples)
//     |           |     | | |   |
//     |           |     | | |   +-----------> Initial 64-bit Stack commit (native PAGE_SIZE multiples)
//     |           |     | | |
//     |           |     | | +-------> DEPRECATED (Log event to eventlog when launching a wow64 process)
//     |           |     | |
//     |           |     | +----> Disable assert messages
//     |           |     |
//     |           |     +---> Disable turbo dispatch (used only for forked/interix processes)
//     |           |
//     |           +----------------> Unused bits (15 bits)
//     |
//     |
//     +-----------> Reserved bits (4 bits)
//
//
//

typedef union _WOW64_EXECUTE_OPTIONS {

    ULONG Flags;

    struct {

        ULONG StackReserveSize              : 8;
        ULONG StackCommitSize               : 4;
        ULONG Deprecated0                   : 1;
        ULONG DisableWowAssert              : 1;
        ULONG DisableTurboDispatch          : 1;
        ULONG Unused                        : 13;
        ULONG Reserved0                     : 1;
        ULONG Reserved1                     : 1;
        ULONG Reserved2                     : 1;
        ULONG Reserved3                     : 1;
    } DUMMYSTRUCTNAME;
} WOW64_EXECUTE_OPTIONS, *PWOW64_EXECUTE_OPTIONS;

#define WOW64_DEFAULT_EXECUTE_OPTIONS           0
#define WOW64_REGISTRY_CONFIG_ROOT              L"\\REGISTRY\\MACHINE\\SOFTWARE\\Microsoft\\WOW64"
#define WOW64_CONFIG_EXECUTE_OPTIONS            L"Wow64ExecuteFlags"

#define WOW64_X86_TAG               " (x86)"
#define WOW64_X86_TAG_U            L" (x86)"

//
// File system redirection values
//

#define WOW64_FILE_SYSTEM_ENABLE_REDIRECT          (UlongToPtr(0x00))   // enable file-system redirection for the currently executing thread
#define WOW64_FILE_SYSTEM_DISABLE_REDIRECT         (UlongToPtr(0x01))   // disable file-system redirection for the currently executing thread
#define WOW64_FILE_SYSTEM_DISABLE_REDIRECT_LEGACY  ((PVOID)L"[<__wow64_disable_redirect_all__]>")


#define TYPE32(x)   ULONG
#define TYPE64(x)   ULONGLONG


//
// Wow64Info structure is shared between 32-bit and 64-bit modules inside a Wow64 process.
// NOTE : This structure shouldn't contain any pointer-dependent data, as
// it is viewed from 32-bit and 64-bit code.
//

#define WOW64_CPUFLAGS_MSFT64           0x00000001
#define WOW64_CPUFLAGS_SOFTWARE         0x00000002
#define WOW64_CPUFLAGS_IA64             0x00000004

#define Wow64pRunningSoftwareCpu(cpufl) (cpufl & WOW64_CPUFLAGS_SOFTWARE)

typedef struct _CONTEXT32_RECORD_ENTRY
{
    ULONG Offset;

    ULONG Value;

} CONTEXT32_RECORD_ENTRY, *PCONTEXT32_RECORD_ENTRY;

typedef struct _CONTEXT32_UPDATE
{
    ULONG NumberEntries;

    // CONTEXT32_RECORD_ENTRY [ NumberEntries ];

} CONTEXT32_UPDATE, *PCONTEXT32_UPDATE;

typedef struct _PEB_LDR_DATA32 {
    ULONG Length;
    BOOLEAN Initialized;
    TYPE32(HANDLE) SsHandle;
    LIST_ENTRY32 InLoadOrderModuleList;
    LIST_ENTRY32 InMemoryOrderModuleList;
    LIST_ENTRY32 InInitializationOrderModuleList;
    TYPE32(PVOID) EntryInProgress;
    BOOLEAN ShutdownInProgress;
    TYPE32(HANDLE) ShutdownThreadId;
} PEB_LDR_DATA32, *PPEB_LDR_DATA32;

typedef struct _GDI_TEB_BATCH32 {
    ULONG    Offset : 31;
    ULONG HasRenderingCommand : 1;
    TYPE32(ULONG_PTR) HDC;
    ULONG    Buffer[GDI_BATCH_BUFFER_SIZE];
} GDI_TEB_BATCH32,*PGDI_TEB_BATCH32;


typedef struct _GDI_TEB_BATCH64 {
    ULONG    Offset : 31;
    ULONG HasRenderingCommand : 1;
    TYPE64(ULONG_PTR) HDC;
    ULONG    Buffer[GDI_BATCH_BUFFER_SIZE];
} GDI_TEB_BATCH64,*PGDI_TEB_BATCH64;


typedef struct _Wx86ThreadState32 {
    TYPE32(PULONG)  CallBx86Eip;
    TYPE32(PVOID)   DeallocationCpu;
    BOOLEAN UseKnownWx86Dll;
    char    OleStubInvoked;
} WX86THREAD32, *PWX86THREAD32;

typedef struct _Wx86ThreadState64 {
    TYPE64(PULONG)  CallBx86Eip;
    TYPE64(PVOID)   DeallocationCpu;
    BOOLEAN UseKnownWx86Dll;
    char    OleStubInvoked;
} WX86THREAD64, *PWX86THREAD64;

typedef struct _CLIENT_ID32 {
    TYPE32(HANDLE)  UniqueProcess;
    TYPE32(HANDLE)  UniqueThread;
} CLIENT_ID32;

typedef CLIENT_ID32 *PCLIENT_ID32;

#if !defined(CLIENT_ID64_DEFINED)

typedef struct _CLIENT_ID64 {
    TYPE64(HANDLE)  UniqueProcess;
    TYPE64(HANDLE)  UniqueThread;
} CLIENT_ID64;

typedef CLIENT_ID64 *PCLIENT_ID64;

#define CLIENT_ID64_DEFINED

#endif

typedef ULONG GDI_HANDLE_BUFFER32[GDI_HANDLE_BUFFER_SIZE32];
typedef ULONG GDI_HANDLE_BUFFER64[GDI_HANDLE_BUFFER_SIZE64];

#define PEBTEB_BITS 32
#include "pebteb.h"
#undef PEBTEB_BITS

#define PEBTEB_BITS 64
#include "pebteb.h"
#undef PEBTEB_BITS

#if !defined(SORTPP_PASS) && !defined(MIDL_PASS) && !defined(RC_INVOKED) && !defined(_X86AMD64_) && !defined(WOW64EXTS_386) && !defined(_ARM_)
C_ASSERT(FIELD_OFFSET(TEB32, GdiTebBatch) == 0x1d4);
C_ASSERT(FIELD_OFFSET(TEB64, GdiTebBatch) == 0x2f0);
#endif


typedef struct _WOW64INFO {

    ULONG NativeSystemPageSize;         // Page size of the native system the emulator is running on.

    ULONG CpuFlags;

    WOW64_EXECUTE_OPTIONS Wow64ExecuteFlags;

    ULONG InstrumentationCallback;

} WOW64INFO, *PWOW64INFO;

typedef struct _PEB32_WITH_WOW64INFO {

    PEB32       Peb32;

    WOW64INFO   Wow64Info;

} PEB32_WITH_WOW64INFO, *PPEB32_WITH_WOW64INFO;

#if !defined(BUILD_WOW6432)

//
// Get the 32-bit TEB without doing a memory reference.
//

#define WOW64_GET_TEB32_SAFE(teb64) \
        ((PTEB32) ((ULONG_PTR)teb64 + WOW64_ROUND_TO_PAGES (sizeof (TEB))))

#define WOW64_GET_TEB32(teb64) \
        WOW64_GET_TEB32_SAFE(teb64)

#define WOW64_TEB32_POINTER_ADDRESS(teb64) \
        (PVOID)&((teb64)->NtTib.ExceptionList)

#endif

//
// Thunk macros

#define UStr32ToUStr(dst, src) { (dst)->Length = (src)->Length; \
                                 (dst)->MaximumLength = (src)->MaximumLength; \
                                 (dst)->Buffer = (PWSTR) UlongToPtr ((src)->Buffer); }

#define UStrToUStr32(dst, src) { (dst)->Length = (src)->Length; \
                                 (dst)->MaximumLength = (src)->MaximumLength; \
                                 (dst)->Buffer = (ULONG) PtrToUlong ((src)->Buffer); }

FORCEINLINE
TEB32 * __uptr
Wow64CurrentGuestTeb (
    VOID
    )
{

    TEB * __uptr Teb;
    TEB32 * __uptr Teb32;

    Teb = NtCurrentTeb();
    if (Teb->WowTebOffset == 0) {

        //
        // Not running under or over WoW, so there is no "guest teb"
        //

        return NULL;
    }

    if (Teb->WowTebOffset < 0) {

        //
        // Was called while running under WoW. The current teb is the guest
        // teb.
        //

        Teb32 = (PTEB32)Teb;

        NT_ASSERT(&Teb32->WowTebOffset == &Teb->WowTebOffset);

    } else {

        //
        // Called by the WoW Host, so calculate the position of the guest teb
        // relative to the current (host) teb.
        //

        Teb32 = (PTEB32)((ULONG_PTR)Teb + Teb->WowTebOffset);
    }

    NT_ASSERT(Teb32->NtTib.Self == (ULONG)Teb32);

    return Teb32;
}

FORCEINLINE
VOID * __uptr
Wow64CurrentNativeTeb (
    VOID
    )
{

    TEB * __uptr Teb;
    VOID * __uptr HostTeb;

    Teb = NtCurrentTeb();
    if (Teb->WowTebOffset >= 0) {

        //
        // Not running under WoW, so it it either not running on WoW at all, or
        // it is the host. Return the current teb as native teb.
        //

        HostTeb = (PVOID)Teb;

    } else {

        //
        // Called while runnign under WoW Host, so calculate the position of the
        // host teb relative to the current (guest) teb.
        //

        HostTeb = (PVOID)((ULONG_PTR)Teb + Teb->WowTebOffset);
    }

    NT_ASSERT((((PTEB32)HostTeb)->NtTib.Self == (ULONG)HostTeb) ||
              (((PTEB64)HostTeb)->NtTib.Self == (ULONGLONG)HostTeb));

    return HostTeb;
}

#define Wow64GetNativeTebField(teb, field) ( ((ULONG)(teb) == ((PTEB32)(teb))->NtTib.Self) ? (((PTEB32)(teb))->##field) : (((PTEB64)(teb))->##field) )
#define Wow64SetNativeTebField(teb, field, value) { if ((ULONG)(teb) == ((PTEB32)(teb))->NtTib.Self) {(((PTEB32)(teb))->##field) = (value);} else {(((PTEB64)(teb))->##field) = (value);} }

FORCEINLINE
VOID
Wow64SetNativeTebTls (
    ULONG Slot,
    ULONG_PTR Value
    )
{

    PVOID Teb;
    PTEB64 Teb64;
    PTEB32 Teb32;

    Teb = Wow64CurrentNativeTeb();
    Teb32 = (PTEB32)Teb;
    Teb64 = (PTEB64)Teb;

    if ((ULONG)Teb32 == Teb32->NtTib.Self) {
        Teb32->TlsSlots[Slot] = (ULONG)Value;
    } else {
        Teb64->TlsSlots[Slot] = (ULONGLONG)Value;
    }
}

FORCEINLINE
ULONG_PTR
Wow64GetNativeTebTls (
    ULONG Slot
    )
{

    PVOID Teb;
    PTEB64 Teb64;
    PTEB32 Teb32;

    Teb = Wow64CurrentNativeTeb();
    Teb32 = (PTEB32)Teb;
    Teb64 = (PTEB64)Teb;

    if ((ULONG)Teb32 == Teb32->NtTib.Self) {
        return (ULONG_PTR)Teb32->TlsSlots[Slot];
    } else {
        return (ULONG_PTR)Teb64->TlsSlots[Slot];
    }
}

#define NtCurrentTeb32() (Wow64CurrentGuestTeb())
#define NtCurrentPeb32()  ((PPEB32)(UlongToPtr((NtCurrentTeb32()->ProcessEnvironmentBlock))))

//
// Wow64 file-system redirection support.
//

//
// These should only be called from code known to be running under WoW.
//

#define Wow64EnableFilesystemRedirector()   \
    Wow64SetNativeTebTls(WOW64_TLS_FILESYSREDIR, 0);

#define Wow64DisableFilesystemRedirector(filename)  \
    Wow64SetNativeTebTls(WOW64_TLS_FILESYSREDIR, (ULONG_PTR)(filename));

#define Wow64QueryFilesystemRedirector()  \
    ((PVOID)(Wow64GetNativeTebTls(WOW64_TLS_FILESYSREDIR)))

FORCEINLINE
PVOID
Wow64SetFilesystemRedirectorEx (
    _In_ PVOID NewValue
    )
/*++

Routine Description:

    This routine allows a thread running inside Wow64 to disable file-system
    redirection for all calls happening in the context of this thread.

Arguments:

    NewValue - New Wow64 file-system redirection value. This can either be:
               a- pointer to a unicode string with a fully-qualified path name (e.g. L"c:\\windows\\notepad.exe").
               b- any of the following predefined values :
                  * WOW64_FILE_SYSTEM_ENABLE_REDIRECT : Enables file-system redirection (default)
                  * WOW64_FILE_SYSTEM_DISABLE_REDIRECT : Disables file-system redirection on all
                    file I/O operations happening within the context of the current thread.
                  * WOW64_FILE_SYSTEM_DISABLE_REDIRECT_LEGACY: Use this only if you want to run on
                    download level platforms (for example XP 2600), as it will have no effect
                    and prevents your program from malfunctioning.

Return:

    Old Wow64 file-system redirection value


NB: This routine should only called from a wow64 process, and is only available
    when running on .NET server platforms and beyond. If you component will
    run on downlevel platforms (XP 2600 for example), you shouldn't use
    WOW64_FILE_SYSTEM_DISABLE_REDIRECT (see below).

Example (Enumerating files under c:\windows\system32):

    {
        HANDLE File;
        WIN32_FIND_DATA FindData;
#ifndef _WIN64
        BOOL bWow64Process = FALSE;
        PVOID Wow64RedirectionOld;
#endif

        //
        // Disable Wow64 file system redirection
        //
#ifndef _WIN64
        IsWow64Process (GetCurrentProcess (), &bWow64Process);
        if (bWow64Process == TRUE) {
            Wow64RedirectionOld = Wow64SetFilesystemRedirectorEx (WOW64_FILE_SYSTEM_DISABLE_REDIRECT);
        }
#endif
        File = FindFirstFileA ("c:\\windows\\system32\\*.*", &FindData);

        do {
        .
        .
        } while (FindNextFileA (File, &FindData) != 0);

        FindClose (File);

        //
        // Enable Wow64 file-system redirection
        //
#ifndef _WIN64
        if (bWow64Process == TRUE) {
            Wow64SetFilesystemRedirectorEx (Wow64RedirectionOld);
        }
#endif
    }


--*/
{
    PVOID OldValue;

    OldValue = (PVOID)Wow64GetNativeTebTls(WOW64_TLS_FILESYSREDIR);
    Wow64SetNativeTebTls(WOW64_TLS_FILESYSREDIR, (ULONG_PTR)NewValue);
    return OldValue;
}


#define Wow64GetSharedInfo() ((PWOW64INFO)Wow64GetNativeTebTls(WOW64_TLS_WOW64INFO))
#define Wow64GetSystemNativePageSize() (Wow64GetSharedInfo()->NativeSystemPageSize)

#if BUILD_WOW64_ENABLED

#if defined(_WIN64)

//
// N.B. On 64bit hosts, I/O manager sets and clears the least significant bit to
// indicate IOSB is 32bit.
//
// There are also enough bits to afford discriminating between guest and host
// UmAPCs. Assuming all UmAPCs belong to the guest payloasd could be an
// app-compat potential issue if some 3rd party software is actually able to
// inject a native DLL that does not break WoW and uses UmAPCs.
//

#define Wow64EncodeApcRoutine(ApcRoutine) \
    ((PVOID)((0 - ((LONG_PTR)(ApcRoutine))) << 2))

#define Wow64DecodeApcRoutine(ApcRoutine) \
    ((PVOID)(0 - (((LONG_PTR)(ApcRoutine)) >> 2)))

#else

//
// On ARM32 all UmAPCs in a WoW process are assumed to belong to the guest
// payload.
//

#define Wow64EncodeApcRoutine(ApcRoutine) \
    ((PVOID)((LONG_PTR)(ApcRoutine)))

#define Wow64DecodeApcRoutine(ApcRoutine) \
    ((PVOID)((LONG_PTR)(ApcRoutine)))

#endif

//
// Macros for reading the X86 context.
// NB: This is only to be used by the IceCAP performance collection code. It must
//     not be used in any production code. This doesn't have support for IA32EL yet.
//

#define Wow64GetThreadX86Context(Teb64)        \
        ((PVOID)((PCHAR)(Teb64->TlsSlots[WOW64_TLS_CPURESERVED]) + sizeof (ULONG)))

#endif

#if !defined(SORTPP_PASS)

FORCEINLINE
ULONG
Wow64ThunkAffinityMask64TO32(
    _In_ ULONGLONG Affinity64
    )
/*++

Routine Description:
    This function converts a 64bit AffinityMask into a 32bit mask.

Arguments:

    Affinity64 - Supplies the 64bit affinity mask.

Return Value:

    The converted 32bit affinity mask.

--*/
{

    // Create a 32bit affinity mask by ORing the top 32bits with the bottom 32bits.
    // Some care needs to be taken since the following is not always true:
    // Affinity32 == Wow64ThunkAffinityMask32TO64(Wow64ThunkAffinityMask64To32(Affinity32))

    return (ULONG)( (Affinity64 & 0xFFFFFFFF) | ( (Affinity64 & (0xFFFFFFFFi64 << 32) ) >> 32) );
}

FORCEINLINE
ULONGLONG
Wow64ThunkAffinityMask32TO64(
    _In_ ULONG Affinity32
    )
/*++

Routine Description:

    This function converts a 32bit AffinityMask into a 64bit mask.

Arguments:

    Affinity32 - Supplies the 32bit affinity mask.

Return Value:

    The converted 64bit affinity mask.

--*/
{
    return (ULONGLONG)Affinity32;
}

#endif // SORTPP_PASS

typedef ULONGLONG SIZE_T64, *PSIZE_T64;

#if defined(BUILD_WOW6432) && !defined(BUILD_WOW3232)

typedef VOID * __ptr64 NATIVE_PVOID;
typedef ULONG64 NATIVE_ULONG_PTR;
typedef SIZE_T64 NATIVE_SIZE_T;
typedef PSIZE_T64 PNATIVE_SIZE_T;
typedef struct _PEB64 NATIVE_PEB;
typedef struct _PROCESS_EXTENDED_BASIC_INFORMATION64 NATIVE_PROCESS_EXTENDED_BASIC_INFORMATION;
typedef struct _MEMORY_BASIC_INFORMATION64 NATIVE_MEMORY_BASIC_INFORMATION;

#else // defined(BUILD_WOW6432) && !defined(BUILD_WOW3232)

typedef VOID * NATIVE_PVOID;
typedef ULONG_PTR NATIVE_ULONG_PTR;
typedef SIZE_T NATIVE_SIZE_T;
typedef PSIZE_T PNATIVE_SIZE_T;
typedef struct _PEB NATIVE_PEB;
typedef struct _PROCESS_EXTENDED_BASIC_INFORMATION NATIVE_PROCESS_EXTENDED_BASIC_INFORMATION;
typedef struct _MEMORY_BASIC_INFORMATION NATIVE_MEMORY_BASIC_INFORMATION;

#endif // defined(BUILD_WOW6432) && !defined(BUILD_WOW3232)

#endif  // _WOW64T_
