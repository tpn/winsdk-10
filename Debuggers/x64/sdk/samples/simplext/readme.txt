                   Microsoft(R) Debugging Tools for Windows(R)
                  Simple.dll "old style" WinDbg Sample Extension
                                      README


Overview

This extension dll shows how to write a simple extension using the old style
WinDBG extension interface, and demonstrates the use of various APIs in
wdbgexts.h

----------
Required and Optional Initialization

These three mandatory routine must be implemented and exported for windbg
style extensions:

    VOID
    WinDbgExtensionDllInit(
        PWINDBG_EXTENSION_APIS lpExtensionApis,
        USHORT MajorVersion,
        USHORT MinorVersion
        )

    This is called on loading of the extension DLL. Global variables and flags
    for the extension should be initialized in this routine. One of the useful
    things that is done in this routine is to initialize "ExtensionApis" as a
    WINDBG_EXTENSION_APIS global variable from the lpExtensionApis parameter.     
    lpExtensionApis has pointers to some commonly used APIs for memory reads
    and I/O.


    LPEXT_API_VERSION
    ExtensionApiVersion(
        VOID
        )

    This tells debugger about version of the extension DLL. The value
    returned by this function will determine how extension commands for this
    DLL will be called.

    A common error while writing extensions is mismatched values of the
    version returned by this routine compared to what the version the DLL was
    built with.

    This sample extension has this ApiVersion:

    ApiVersion = { (VER_PRODUCTVERSION_W >> 8),
                   (VER_PRODUCTVERSION_W & 0xff),
                   EXT_API_VERSION_NUMBER64,
                   0 };


    VOID
    CheckVersion(
        VOID
        )

    This is called after the DLL is loaded by the debugger. The extension DLL
    can verify here if it was loaded for the correct target.


----------
Anatomy of an Extension Call

EXT_API_VERSION_NUMBER64 is needed to create 64-bit aware extensions. All
addresses for these will then be ULONG64s. Therefore, an extension should be
defined like this:

    CPPMOD VOID 
    DebugExtensionCall(
        HANDLE                 hCurrentProcess,
        HANDLE                 hCurrentThread,
        ULONG64                dwCurrentPc,
        ULONG                  dwProcessor,
        PCSTR                  args
        )

    Where "DebugExtensionCall" is an actual name of the extension being
    implemented, such as "stack" for a !stack extension.

----------
Extensions Implemented in this Sample


read

This shows how to read data from the target.


edit

This shows how to edit data on the target.


stack

This retrieves and prints the current stack trace.


help

Extension DLLs should implement one extension called 'help' which shows
descriptions for the extension commands provided by the extension DLL.
