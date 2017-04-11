//----------------------------------------------------------------------------
//
// Simple example of how to open a dump file and get its stack.
//
// This is not a debugger extension.  It is a tool that can be used to replace
// the debugger.
//
//
// Copyright (C) Microsoft Corporation, 2000.
//
//----------------------------------------------------------------------------

#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <windows.h>
#include <dbgeng.h>

#include "out.hpp"

PSTR g_DumpFile;
PSTR g_ImagePath;
PSTR g_SymbolPath;

ULONG64 g_TraceFrom[3];

IDebugClient* g_Client;
IDebugControl* g_Control;
IDebugSymbols* g_Symbols;

void
Exit(int Code, _In_ _Printf_format_string_ PCSTR Format, ...)
{
    // Clean up any resources.
    if (g_Symbols != NULL)
    {
        g_Symbols->Release();
    }
    if (g_Control != NULL)
    {
        g_Control->Release();
    }
    if (g_Client != NULL)
    {
        //
        // Request a simple end to any current session.
        // This may or may not do anything but it isn't
        // harmful to call it.
        //

        // We don't want to see any output from the shutdown.
        g_Client->SetOutputCallbacks(NULL);
        
        g_Client->EndSession(DEBUG_END_PASSIVE);
        
        g_Client->Release();
    }

    // Output an error message if given.
    if (Format != NULL)
    {
        va_list Args;

        va_start(Args, Format);
        vfprintf(stderr, Format, Args);
        va_end(Args);
    }
    
    exit(Code);
}

void
CreateInterfaces(void)
{
    HRESULT Status;

    // Start things off by getting an initial interface from
    // the engine.  This can be any engine interface but is
    // generally IDebugClient as the client interface is
    // where sessions are started.
    if ((Status = DebugCreate(__uuidof(IDebugClient),
                              (void**)&g_Client)) != S_OK)
    {
        Exit(1, "DebugCreate failed, 0x%X\n", Status);
    }

    // Query for some other interfaces that we'll need.
    if ((Status = g_Client->QueryInterface(__uuidof(IDebugControl),
                                           (void**)&g_Control)) != S_OK ||
        (Status = g_Client->QueryInterface(__uuidof(IDebugSymbols),
                                           (void**)&g_Symbols)) != S_OK)
    {
        Exit(1, "QueryInterface failed, 0x%X\n", Status);
    }
}

//typedef _Null_terminated_ CHAR *TTPSTR;

void
ParseCommandLine(int Argc, _In_reads_(Argc) PSTR* Argv)
{
    int i;
    
    while (--Argc > 0)
    {
        Argv++;
        if (!strcmp(Argv[0], "-a32"))
        {
            if (Argc < 4)
            {
                Exit(1, "-a32 missing arguments\n");
            }

            for (i = 0; i < 3; i++)
            {
                int Addr;
                
                Argv++;
                Argc--;

                if (Argc > 0)
                {
                    if (sscanf_s(Argv[0], "%i", &Addr) == EOF)
                    {
                        Exit(1, "-a32 illegal argument type\n");
                    }

                    g_TraceFrom[i] = (ULONG64)(LONG64)(LONG)Addr;
                }
            }
        }
        else if (!strcmp(Argv[0], "-a64"))
        {
            if (Argc < 4)
            {
                Exit(1, "-a64 missing arguments\n");
            }

            for (i = 0; i < 3; i++)
            {
                Argv++;
                Argc--;
                if (Argc > 0)
                {
                    if (sscanf_s(Argv[0], "%I64i", (LONG64*)&g_TraceFrom[i]) == EOF)
                    {
                        Exit(1, "-a64 illegal argument type\n");
                    }
                }
            }
        }
        else if (!strcmp(Argv[0], "-i"))
        {
            Argv++;
            Argc--;
            if (Argc > 0)
            {
                g_ImagePath = Argv[0];
            }
            else
            {
                Exit(1, "-i missing argument\n");
            }
        }
        else if (!strcmp(Argv[0], "-y"))
        {
            Argv++;
            Argc--;
            if (Argc > 0)
            {
                g_SymbolPath = *Argv;
            }
            else
            {
                Exit(1, "-y missing argument\n");
            }
        }
        else if (!strcmp(Argv[0], "-z"))
        {
            Argv++;
            Argc--;
            if (Argc > 0)
            {
                g_DumpFile = Argv[0];
            }
            else
            {
                Exit(1, "-z missing argument\n");
            }
        }
        else
        {
            Exit(1, "Unknown command line argument '%s'\n", Argv[0]);
        }
    }

    if (g_DumpFile == NULL)
    {
        Exit(1, "No dump file specified, use -z <file>\n");
    }
}

void
ApplyCommandLineArguments(void)
{
    HRESULT Status;

    // Install output callbacks so we get any output that the
    // later calls produce.
    if ((Status = g_Client->SetOutputCallbacks(&g_OutputCb)) != S_OK)
    {
        Exit(1, "SetOutputCallbacks failed, 0x%X\n", Status);
    }

    if (g_ImagePath != NULL)
    {
        if ((Status = g_Symbols->SetImagePath(g_ImagePath)) != S_OK)
        {
            Exit(1, "SetImagePath failed, 0x%X\n", Status);
        }
    }
    if (g_SymbolPath != NULL)
    {
        if ((Status = g_Symbols->SetSymbolPath(g_SymbolPath)) != S_OK)
        {
            Exit(1, "SetSymbolPath failed, 0x%X\n", Status);
        }
    }

    // Everything's set up so open the dump file.
    if ((Status = g_Client->OpenDumpFile(g_DumpFile)) != S_OK)
    {
        Exit(1, "OpenDumpFile failed, 0x%X\n", Status);
    }

    // Finish initialization by waiting for the event that
    // caused the dump.  This will return immediately as the
    // dump file is considered to be at its event.
    if ((Status = g_Control->WaitForEvent(DEBUG_WAIT_DEFAULT,
                                          INFINITE)) != S_OK)
    {
        Exit(1, "WaitForEvent failed, 0x%X\n", Status);
    }

    // Everything is now initialized and we can make any
    // queries we want.
}

void
DumpStack(void)
{
    HRESULT Status;
    PDEBUG_STACK_FRAME Frames = NULL;
    int Count = 50;

    printf("\nFirst %d frames of the call stack:\n", Count);

    if (g_TraceFrom[0] || g_TraceFrom[1] || g_TraceFrom[2])
    {
        ULONG Filled;
        
        Frames = new DEBUG_STACK_FRAME[Count];
        if (Frames == NULL)
        {
            Exit(1, "Unable to allocate stack frames\n");
        }
        
        if ((Status = g_Control->
             GetStackTrace(g_TraceFrom[0], g_TraceFrom[1], g_TraceFrom[2],
                           Frames, Count, &Filled)) != S_OK)
        {
            Exit(1, "GetStackTrace failed, 0x%X\n", Status);
        }

        Count = Filled;
    }
                           
    // Print the call stack.
    if ((Status = g_Control->
         OutputStackTrace(DEBUG_OUTCTL_ALL_CLIENTS, Frames,
                          Count, DEBUG_STACK_SOURCE_LINE |
                          DEBUG_STACK_FRAME_ADDRESSES |
                          DEBUG_STACK_COLUMN_NAMES |
                          DEBUG_STACK_FRAME_NUMBERS)) != S_OK)
    {
        Exit(1, "OutputStackTrace failed, 0x%X\n", Status);
    }

    delete[] Frames;
}

void __cdecl
main(int Argc, _In_reads_(Argc) PSTR* Argv)
{
    CreateInterfaces();
    
    ParseCommandLine(Argc, Argv);

    ApplyCommandLineArguments();
    
    DumpStack();

    Exit(0, "");
}
