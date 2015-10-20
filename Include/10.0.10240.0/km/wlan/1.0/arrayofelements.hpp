/*
    Copyright (c) Microsoft Corporation.  All rights reserved.

    Microsoft Confidential

    THIS CODE AND INFORMATION IS PROVIDED "AS IS" WITHOUT WARRANTY OF ANY
    KIND, EITHER EXPRESSED OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE
    IMPLIED WARRANTIES OF MERCHANTABILITY AND/OR FITNESS FOR A PARTICULAR
    PURPOSE.

    Module Name:
    arrayofelements.h

    Abstract:
    Simple array wrapper using operator new and explicit move semmantics

    */
#pragma once

#ifdef __cplusplus

extern void * __cdecl operator new(size_t _Size, ULONG_PTR AllocationContext) throw();

template <class ContentType>
struct ArrayOfElements
{
    ArrayOfElements() :
        ElementCount( 0 ),
        pElements( NULL ),
        MemoryInternallyAllocated( false ) { }

    ~ArrayOfElements( )
    {
        Cleanup();
    }

    static void Cleanup(_In_ void * pvThis )
    {
        return (reinterpret_cast<ArrayOfElements<ContentType>*>(pvThis))->Cleanup();
    }

    void Cleanup()
    {
        if (pElements != NULL &&
            MemoryInternallyAllocated)
        {
            delete[] pElements;
        }
        pElements = NULL;
        ElementCount = 0;
        MemoryInternallyAllocated = false;
    }

    static NDIS_STATUS AllocateElements(
        _In_ void * pvThis,
        _In_ UINT32 SourceElementCount,
        _In_ ULONG_PTR AllocationContext )
    {
        return (reinterpret_cast<ArrayOfElements<ContentType>*>(pvThis))->AllocateElements( SourceElementCount, AllocationContext );
    }

    NDIS_STATUS AllocateElements(
        _In_ UINT32 SourceElementCount,
        _In_ ULONG_PTR AllocationContext )
    {
        Cleanup();
        if (SourceElementCount > 0)
        {
#pragma warning(suppress : 4291 ) // no matching operator delete found; memory will not be freed if initialization throws an exception
            pElements = new ( AllocationContext ) ContentType[SourceElementCount];
            if (pElements == NULL)
                return NDIS_STATUS_RESOURCES;
                
            ElementCount = SourceElementCount;
            MemoryInternallyAllocated = true;  
            return NDIS_STATUS_SUCCESS;
        }
        else
        {
            // Shouldnt be allowed to allocate 0 length
            return NDIS_STATUS_FAILURE;
        }

    }

    VOID SimpleAssign(
        _In_reads_(SourceElementCount) ContentType *pSourceElements, 
        _In_ UINT32 SourceElementCount
        )
    {
        Cleanup();

        MemoryInternallyAllocated = false;
        ElementCount = SourceElementCount;
        pElements = pSourceElements;        
    }    

    
    NDIS_STATUS SimpleSet(
        _In_reads_(SourceElementCount) const ContentType *pSourceElements, 
        _In_ UINT32 SourceElementCount,
        _In_ ULONG_PTR AllocationContext
        )
    { 
        Cleanup();

        ElementCount = SourceElementCount;
        if (ElementCount > 0)
        {
            pElements = new ( AllocationContext ) ContentType[SourceElementCount];
            if (pElements == NULL)
                return NDIS_STATUS_RESOURCES;
                
            MemoryInternallyAllocated = true;  

            RtlCopyMemory(pElements, pSourceElements, SourceElementCount * sizeof(ContentType));        
        }
        
        return NDIS_STATUS_SUCCESS;
    }

    NDIS_STATUS SimpleSet(
        _In_ const ArrayOfElements<ContentType> *pSource,
        _In_ ULONG_PTR AllocationContext
        )
    {
        return SimpleSet( pSource->pElements, pSource->ElementCount, AllocationContext );
    }

    void FullMove(
        _In_ ArrayOfElements<ContentType> *pSource
        )
    {
        Cleanup();

        ElementCount = pSource->ElementCount;
        pElements = pSource->pElements;
        MemoryInternallyAllocated = pSource->MemoryInternallyAllocated;

        // Clear everything from source
        pSource->MemoryInternallyAllocated = false;
        pSource->pElements = NULL;
        pSource->ElementCount = 0;
    }

    UINT32 ElementCount;
    _When_(ElementCount > 0, _Field_size_(ElementCount))
    _When_(ElementCount == 0, _Null_)
        ContentType* pElements;
    BOOLEAN MemoryInternallyAllocated;

private:
    // Semmantics/ownership are too vague.  Use explicit move or copy above
    ArrayOfElements( ArrayOfElements<ContentType> const & ) = delete;
    ArrayOfElements<ContentType>& operator=(ArrayOfElements<ContentType> const &) = delete;
};

namespace WDI_TLV
{
    namespace PARSER
    {
        inline void MarkArrayOfElementFieldsAsCopied( _Inout_ void * pField )
            // Assumes that pField has just been memcpy'd from someplace else and thus
            // does not 'own' and pointers.  This method will clear any copied
            // ArrayOfElements::MemoryInternallyAllocated fields.
            // The default implementation does NOTHING. The generated
            // AggregateContainer-specific overloads will do do the real work.
        {
            UNREFERENCED_PARAMETER( pField );

            return;
        }
    }
}
#endif // __cplusplus
