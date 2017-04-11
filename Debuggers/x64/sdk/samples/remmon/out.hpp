//----------------------------------------------------------------------------
//
// stdio-based output callbacks class.
//
// Copyright (C) Microsoft Corporation, 2000-2006.
//
//----------------------------------------------------------------------------

#ifndef __OUT_HPP__
#define __OUT_HPP__

class StdioOutputCallbacks : public IDebugOutputCallbacks
{
public:
    // IUnknown.
    STDMETHOD(QueryInterface)(
        THIS_
        _In_ REFIID InterfaceId,
        _Out_ PVOID* Interface
        );
    STDMETHOD_(ULONG, AddRef)(
        THIS
        );
    STDMETHOD_(ULONG, Release)(
        THIS
        );

    // IDebugOutputCallbacks.
    STDMETHOD(Output)(
        THIS_
        IN ULONG Mask,
        IN PCSTR Text
        );
};

extern StdioOutputCallbacks g_OutputCb;

#endif // #ifndef __OUT_HPP__
