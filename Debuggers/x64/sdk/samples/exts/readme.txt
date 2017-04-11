                   Microsoft(R) Debugging Tools for Windows(R)
                        DbgExts.dll DBGENG Sample Extension
                                      README


Overview

This extension DLL shows how to write a debugger engine-style extension and
demonstrates use of a few APIs required by and provided to extension DLLs.

----------
Required and Optional Initialization

This mandatory routine must be implemented and exported for debugger engine
style extensions:


    HRESULT
    CALLBACK
    DebugExtensionInitialize(PULONG Version, PULONG Flags)

    This is called on loading of the extension DLL. Global variables and flags
    for the extension should be initialized in this routine. One of the useful
    things that is done in this routine is to initialize "ExtensionApis" as a
    WINDBG_EXTENSION_APIS global variable from the lpExtensionApis parameter.     
    lpExtensionApis has pointers to some commonly used APIs for memory reads
    and I/O.

    This function should return the extension version in *Version. Flags is a
    reserved parameter for future use and should be set to 0.

    A debug session may not be active when the extension DLL is loaded so
    initialization code here should not presume to be able to query for debug
    session information.

    All new dbgeng interface-style extensions can be identified by the
    presence of the DebugExtensionInitialize export.

These next two routines are optional but it is recommended to implement these
routines in a debugger extension for better control of the debug session:


    CALLBACK
    DebugExtensionNotify(ULONG Notify, ULONG64 Argument)

    This is used to notify the extension DLL of changes in debug session
    states, e.g. when the session becomes accessible etc. Look at the
    DEBUG_NOTIFY* definitions in dbgeng.h for argument values (active,
    inactive, accessible, inaccessible).

    Use of this function allows an extension to cache debug session related
    info without needing to register explicit callbacks.


    CALLBACK
    DebugExtensionUninitialize(void)

    This is called when a DLL is unloaded and can be used for cleanup related
    code.


----------
Anatomy of an Extension Call

A debugger extension is a function with the following declared type:


    HRESULT
    CALLBACK
    DebugExtensionCall(PDEBUG_CLIENT Client, PCSTR args)

    Where "DebugExtensionCall" is an actual name of the extension being
    implemented, such as "stack" for a !stack extension.

    This is the recommended function prototype to use but, in reality,
    extensions can use any prototype with one restriction - the function name
    must begin with _EFN_ to distinguish the function as an extension function
    some arbitrary, or normal, function.  The debugger's
    IDebugControl::GetExtensionFunction automatically prepends _EFN_ when
    searching for the function in the extension DLL.

    The Client parameter is the initial pointer to the debug engine's
    IDebugClient interface.

    The args parameter is simply the command line argument string passed to
    the extension.  It can be NULL or empty.

    An extension can return DEBUG_EXTENSION_CONTINUE_SEARCH if the extension
    cannot handle the request and in this case the debugger will search the
    next path in the extension DLL chain.


In this sample, upon entering each extension, all required engine interfaces
are queried from the DEBUG_CLIENT using the INIT_API() macro. The same
interfaces are released using the EXIT_API() macro.

INIT_API() simply encapsulates a call to ExtQuery() and EXIT_API encapsulates
ExtRelease().  Any interfaces queried from the debugger engine should be
released before exit.

----------
Extensions Implemented in this Sample


cmdsample

This demonstrates use of engine APIs like IDebugControl::Execute, Output and
OutputStackTrace.


structsample

This shows how to read data from the target using helper definitions from the
wdbgexts.h header file.  More importantly, it shows how to use types to read
values correctly so that the extension does not need to be rewritten when the
type definition changes for the target.


help

Extension DLLs should implement one extension called 'help' which shows
descriptions for the extension commands provided by the extension DLL.
