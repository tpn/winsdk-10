//----------------------------------------------------------------------------
//
// extcpp.cpp
//
// EngExtCpp-style extension sample.
//
// Copyright (C) Microsoft Corporation, 2005.
//
//----------------------------------------------------------------------------

#include <engextcpp.hpp>

//----------------------------------------------------------------------------
//
// Base extension class.
// Extensions derive from the provided ExtExtension class.
//
// The standard class name is "Extension".  It can be
// overridden by providing an alternate definition of
// EXT_CLASS before including engextcpp.hpp.
//
//----------------------------------------------------------------------------

class EXT_CLASS : public ExtExtension
{
public:
    EXT_COMMAND_METHOD(ummods);
};

// EXT_DECLARE_GLOBALS must be used to instantiate
// the framework's assumed globals.
EXT_DECLARE_GLOBALS();

//----------------------------------------------------------------------------
//
// ummods extension command.
//
// This command uses the framework's built-in OS
// data querying methods to do a walk over the
// user-mode loaded module list.
//
// The argument string means:
//
//   {;          - No name for the current (first) argument.
//   e,          - The argument is an expression.
//   o,          - The argument is optional.
//   d=@$peb;    - The argument's default expression is @$peb.
//   peb;        - The argument's short description is "peb".
//   PEB address - The argument's long description.
//   }           - No further arguments.
//
// This extension has a single, optional argument that
// is an expression for the PEB address.
//
//----------------------------------------------------------------------------

EXT_COMMAND(ummods,
            "Output the user-mode OS loaded module list",
            "{;e,o,d=@$peb;peb;PEB address}")
{
    // Create a typed object for the PEB argument address.
    // The argument is defaulted to @$peb automatically so
    // we can always assume an argument value is available.
    ExtRemoteTyped Peb("(ntdll!_PEB*)@$extin", GetUnnamedArgU64(0));

    //
    // This pass shows how to explicitly construct
    // typed objects to walk the PEB's loaded module list.
    //
    
    Out("Native loaded module list:\n");
    
    ExtRemoteTyped LdrListHead =
        Peb.Field("Ldr.InMemoryOrderModuleList");
    ExtRemoteTypedList LdrList(LdrListHead,
                               "ntdll!_LDR_DATA_TABLE_ENTRY",
                               "InMemoryOrderLinks");
    for (LdrList.StartHead(); LdrList.HasNode(); LdrList.Next())
    {
        ExtRemoteTyped Node = LdrList.GetTypedNode();
        
        Out("Loader list entry at %p\n", LdrList.GetNodeOffset());
        Out("  full path '%msu'\n",
            LdrList.GetNodeOffset() + Node.GetFieldOffset("FullDllName"));
        Node.OutFullValue();
        Out("\n");
    }

    //
    // This pass shows how things can be simplified by
    // using the framework's built-in support for getting
    // an appropriate typed module list typed object.
    // The framework automatically chooses the 32- or
    // 64-bit module list based on the current debugger
    // mode, so this code properly handles both WOW64 and
    // native module lists.
    //
    
    if (Is32On64())
    {
        Out("WOW64 32-bit loaded module list:\n");
    }
    else
    {
        Out("Native loaded module list:\n");
    }
    
    ExtRemoteTypedList LdrList2 =
        ExtNtOsInformation::GetUserLoadedModuleList();
    for (LdrList2.StartHead(); LdrList2.HasNode(); LdrList2.Next())
    {
        ExtRemoteTyped Node = LdrList2.GetTypedNode();
        
        Out("Loader list entry at %p\n", LdrList2.GetNodeOffset());
    }
}
