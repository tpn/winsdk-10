 
// Copyright (C) Microsoft Corporation. All rights reserved.


#if defined(_MSC_VER)
#pragma once
#endif

#ifndef _ROBUFFER_H
#define _ROBUFFER_H

#ifdef _CONTRACT_GEN
#include <nt.h>
#include <ntrtl.h>
#include <nturtl.h>
#endif
#include <apiset.h>
#include <apisetcconv.h>
#include <objidl.h>


/* APISET_NAME: api-ms-win-core-winrt-robuffer-l1 */

#if !defined(RC_INVOKED)

#ifndef _APISET_ROBUFFER_VER
#ifdef _APISET_TARGET_VERSION
#if _APISET_TARGET_VERSION >= _APISET_TARGET_VERSION_WIN8
#define _APISET_ROBUFFER_VER 0x0100
#endif
#endif
#endif

#endif // !defined(RC_INVOKED)


STDAPI
RoGetBufferMarshaler(
    _Outptr_ IMarshal ** bufferMarshaler
    );


#ifdef __cplusplus  
namespace Windows { namespace Storage { namespace Streams {

[uuid(905a0fef-bc53-11df-8c49-001e4fc686da)]
struct IBufferByteAccess : public IUnknown
{
    // an IBuffer object is created by a client, and the buffer is provided by IBufferByteAccess::Buffer.
    STDMETHOD(Buffer)(_Outptr_result_buffer_(_Inexpressible_("size given by different API")) byte **value) = 0;
};

} } } // Windows.Storage.Streams
#endif /* __cplusplus */

#endif /* _ROBUFFER_H */

