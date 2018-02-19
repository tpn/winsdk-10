/*++

Copyright (C) Microsoft Corporation. All rights reserved.

Module Name:

    NetRingBuffer.h

Abstract:

    This module defines the NET_RING_BUFFER type.

Notes:

    Do not include this header directly. This is to be used together with NetAdapterCx 1.0.
    
    NetAdapterCx 1.0 is preview only, any files related to it may be substantially modified 
    or removed in future releases of Windows.

 --*/

#pragma once

#if (defined(NET_ADAPTER_CX_1_0) || defined(NET_ADAPTER_CX_1_1))
#    if (NET_ADAPTER_CX_1_0 != 1 && NET_ADAPTER_CX_1_1 != 1)
#        error NetPacket.h can be used only with NetAdapterCx 1.0 or 1.1
#    endif
#else
#    error Include NetAdapterCx.h
#endif // (defined(NET_ADAPTER_CX_1_0) || defined(NET_ADAPTER_CX_1_1))

// This structure holds opaque elements in a ring buffer.
typedef struct DECLSPEC_CACHEALIGN _NET_RING_BUFFER
{
    // Reserved for the operating system.
    UINT16 OSReserved1;

    // Number of bytes from one element to the next.
    // Use  ((BYTE*)p + ElementStride)  to obtain the address of the next element. 
    UINT16 ElementStride;

    // Number of elements in the ring buffer.  Is always a power of 2, greater than 1.
    UINT32 NumberOfElements;

    // A mask that can be used to efficiently clamp an index to [0, NumberOfElements).
    // Use the identity:  (x % NumberOfElements) == (x & ElementIndexMask)
    UINT32 ElementIndexMask;

    // Index of the first element owned by the NetAdapter.
    UINT32 BeginIndex;

    // The NIC driver may optionally use this to track which elements have been consumed.
    UINT32 NextIndex;

    // Index of the end of the range of elements owned by the NetAdapter.
    UINT32 EndIndex;

    // Available for the NIC driver to use in any way.
    VOID* NetAdapterScratch[2];

    // Reserved for the operating system.
    VOID* OSReserved2[3];

    // Storage for element 0 in the ring buffer.
    // Use NetRingBufferGetElementAtIndex to access elements.
    DECLSPEC_ALIGN(64)
    _Field_size_(NumberOfElements * ElementStride) 
    BYTE Buffer[ANYSIZE_ARRAY];

} NET_RING_BUFFER, *PNET_RING_BUFFER;

C_ASSERT(FIELD_OFFSET(NET_RING_BUFFER, Buffer) == 64);

__inline
VOID *
NetRingBufferGetElementAtIndex(
    _In_ NET_RING_BUFFER *RingBuffer,
    _In_ UINT32 Index
    )

/*++

Routine Description:

    Returns the element at the specified index in the Ring Buffer

Arguments:

    RingBuffer - The Ring Buffer to access

    Index - The element index.  Must be in the range [0, RingBuffer->NumberOfElements).

Return Value:

    The specified element

--*/

{

    NT_ASSERT(Index < RingBuffer->NumberOfElements);

    return (VOID*)(RingBuffer->Buffer + ((SIZE_T)Index * RingBuffer->ElementStride));
}

__inline
UINT32
NetRingBufferIncrementIndex(
    _In_ NET_RING_BUFFER *RingBuffer,
    _In_ UINT32 Index
    )

/*++

Routine Description:

    Returns the next index, wrapping around if necessary

Arguments:

    RingBuffer - The Ring Buffer to access

    Index - The starting index

Return Value:

    The next index after the starting index

--*/

{

    return (Index + 1) & RingBuffer->ElementIndexMask;
}

__inline
UINT32
NetRingBufferGetNumberOfElementsInRange(
    _In_ NET_RING_BUFFER *RingBuffer,
    _In_ UINT32 StartIndex,
    _In_ UINT32 EndIndex
    )

/*++

Routine Description:

    Calculates the number of elements contained in a range

    Examples, assuming the ring has 8 elements total:
        - the number of elements in the range [1, 4) is 3.
        - the number of elements in the range [4, 1) is 5.
        - the number of elements in the range [7, 7) is 0.

Arguments:

    RingBuffer - The Ring Buffer to access

    StartIndex - The inclusive start of the range to measure

    EndIndex - The exclusive end of the range to measure

Return Value:

    The number of elements in the given range

--*/

{

    NT_ASSERT(StartIndex < RingBuffer->NumberOfElements);
    NT_ASSERT(EndIndex < RingBuffer->NumberOfElements);

    return (EndIndex - StartIndex) & RingBuffer->ElementIndexMask;
}
