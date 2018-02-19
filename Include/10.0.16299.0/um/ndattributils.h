/*++

Copyright (c) 2007  Microsoft Corporation

Module Name  : NDAttribUtils.h

Abstract:

This file contains definition of functions that facilitate the management of NDF attributes (deep copy, deallocate).

Author:

Luis Hernandez (luish) 09-13-07

Revision history:

--*/

#include "ndattrib.h"

#ifndef _NDATTRIBUTILS_H_
#define _NDATTRIBUTILS_H_

#define MAX_RESOURCE_BUFF 1024

template<typename InputType, typename FReturnType, typename FInputType, FReturnType (__stdcall *fn)(FInputType arg1)>
class TSimpleDeallocator
{
public:
    TSimpleDeallocator():
        m_Memory(NULL)
    {
    }
        
    TSimpleDeallocator(InputType MemoryToManage):
        m_Memory(MemoryToManage)
    {
    }
        
    ~TSimpleDeallocator()
    {
        if(m_Memory)
        {
            fn(m_Memory);
        }
    }

    InputType Attach(InputType MemoryToManage)
    {
        InputType toReturn = m_Memory;
        m_Memory=MemoryToManage;
        return toReturn;
    }
    
    InputType Detach()
    {
        InputType toReturn = m_Memory;
        m_Memory=NULL;
        return toReturn;
    }

    InputType Get()
    {
        return m_Memory;
    }

private:
    InputType m_Memory;
        
};


typedef TSimpleDeallocator<LPWSTR, VOID, VOID *, CoTaskMemFree> CStringSimpleDeallocator;
    
__inline
HRESULT
UtilLoadStringWithAlloc (
                     _In_ UINT uID,
                     _Outptr_result_buffer_(cchBufferMax) LPWSTR* ppwzBuffer,
                     _In_ UINT cchBufferMax)
{
    if (ppwzBuffer == NULL && cchBufferMax)
    {
        return E_INVALIDARG;
    }

    if (cchBufferMax > USHRT_MAX)
    {
        //
        // limit the max size of the string to 64K characters
        //
        return E_INVALIDARG;
    }

    LPWSTR Message = (PWCHAR) CoTaskMemAlloc(cchBufferMax * sizeof(WCHAR));
    if (NULL == Message)
    {
        return E_OUTOFMEMORY;
    }
    CStringSimpleDeallocator messageDealloc(Message);
    
    if (!LoadStringW (
#ifdef NDATTRIBUTILS_USEATLMODULE
        _AtlBaseModule.GetResourceInstance (),
#else
        GetModuleHandle(NULL),
#endif
        uID,
        Message,
        cchBufferMax))
    {
        return HRESULT_FROM_WIN32(GetLastError ());

    }

    messageDealloc.Detach();
    *ppwzBuffer = Message;

    return S_OK;
};

__inline
HRESULT
UtilAssembleStringsWithAlloc(
     _Outptr_result_buffer_(BufferMax) LPWSTR* Buffer,
     _In_ UINT BufferMax,
     _In_ LPCWSTR InputFormat,
     _In_ LPCWSTR InputString,
     _In_ BOOLEAN AdditionalArgument,
     _In_ ULONG AdditionalValue
     )
{
    HRESULT hr = S_OK;

    LPWSTR Message = NULL;
    LPWSTR Format = const_cast<LPWSTR> (InputFormat);
    LPWSTR Argument = const_cast<LPWSTR> (InputString);

    CStringSimpleDeallocator formatDealloc;
    if (IS_INTRESOURCE (InputFormat)) {
        hr = UtilLoadStringWithAlloc(
            LOWORD(Format),
            &Format,
            BufferMax);
        if(FAILED(hr)) return hr;
        formatDealloc.Attach(Format);
    }

    CStringSimpleDeallocator argumentDealloc;
    if (IS_INTRESOURCE (InputString)) {
       hr = UtilLoadStringWithAlloc(
            LOWORD(Argument),
            &Argument,
            BufferMax
            );
        if(FAILED(hr)) return hr;
        argumentDealloc.Attach(Argument);
    }

    Message = (LPWSTR)CoTaskMemAlloc(BufferMax * sizeof WCHAR);
    if (NULL == Message) {
        return E_OUTOFMEMORY;
    }
    CStringSimpleDeallocator messageDealloc(Message);

    if (AdditionalArgument) {
        hr = StringCchPrintfW(
            Message,
            BufferMax,
            Format,
            AdditionalValue,
            Argument);

        //truncating the string is OK
        if(hr == HRESULT_FROM_WIN32(ERROR_INSUFFICIENT_BUFFER)){
            hr = S_OK;
        } else {
           if(FAILED(hr)) return hr;
        }
    } else {
        hr = StringCchPrintfW(
            Message,
            BufferMax,
            Format,
            Argument);

        //truncating the string is OK
        if(hr == HRESULT_FROM_WIN32(ERROR_INSUFFICIENT_BUFFER)){
            hr = S_OK;
        } else {
            if(FAILED(hr)) return hr;
        }
    }

    messageDealloc.Detach();
    *Buffer = Message;
    return hr;

}

__inline HRESULT UtilStringCopyWithAlloc(
    _Outptr_result_buffer_(BufferMax) LPWSTR* Buffer,
     _In_ UINT BufferMax,
     _In_ LPCWSTR Source)
{
    size_t length = 0;
    HRESULT hr = StringCchLengthW(Source, BufferMax, &length);
    if(SUCCEEDED(hr))
    {
        length++; //for null termination
        LPWSTR toReturn = static_cast<LPWSTR>(CoTaskMemAlloc(length*sizeof(WCHAR)));
        if(toReturn)
        {
            ZeroMemory(toReturn, length*sizeof(WCHAR));
            hr = StringCchCopyW(toReturn, length, Source);
            if(SUCCEEDED(hr))
            {
                *Buffer = toReturn;
            }
            else
            {
                CoTaskMemFree(toReturn);
            }
        }
        else
        {
            hr = E_OUTOFMEMORY;
        }
    }

    return hr;
}

__inline VOID FreeUiInfo(_In_ UiInfo * pInfo)
{
    if(pInfo)
    {
        if (pInfo->type == UIT_SHELL_COMMAND)
        {
            CoTaskMemFree(pInfo->ShellInfo.pwszDirectory);
            pInfo->ShellInfo.pwszDirectory=NULL;
            CoTaskMemFree(pInfo->ShellInfo.pwszFile);
            pInfo->ShellInfo.pwszFile=NULL;
            CoTaskMemFree(pInfo->ShellInfo.pwszOperation);
            pInfo->ShellInfo.pwszOperation=NULL;
            CoTaskMemFree(pInfo->ShellInfo.pwszParameters);
            pInfo->ShellInfo.pwszParameters=NULL;
        }
        else if (pInfo->type == UIT_HELP_PANE)
        {
            CoTaskMemFree(pInfo->pwzHelpUrl);
            pInfo->pwzHelpUrl=NULL;
        }
        else if (pInfo->type == UIT_DUI)
        {
            CoTaskMemFree(pInfo->pwzDui);
            pInfo->pwzDui=NULL;
        }
        pInfo->type=UIT_NONE;
    }
}


__inline 
VOID FreeRepairInfos(
          _In_reads_(RepairCount) RepairInfo* pInfo,
          ULONG RepairCount,
          BOOL bFreePointer
          )
{
    ULONG k = 0;
    if (NULL != pInfo && RepairCount > 0)
    {
        for (
            k = 0; 
            k < RepairCount; 
            k++
            )
        {
            //free string members
            CoTaskMemFree (pInfo[k].pwszClassName);
            pInfo[k].pwszClassName=NULL;
            CoTaskMemFree (pInfo[k].pwszDescription);
            pInfo[k].pwszDescription=NULL;

            //Free the UI Info members
            FreeUiInfo(&pInfo[k].UiInfo);
        }
        if(bFreePointer) CoTaskMemFree (pInfo);
    }
}

__inline 
VOID FreeRepairInfoExs(
          _In_reads_(RepairCount) RepairInfoEx* pInfo,
          ULONG RepairCount,
          BOOL bFreePointer
          )
{
    ULONG k = 0;
    if (NULL != pInfo && RepairCount > 0)
    {
        for (
            k = 0; 
            k < RepairCount; 
            k++
            )
        {
            FreeRepairInfos(&pInfo[k].repair, 1, FALSE);
        }
        if(bFreePointer) CoTaskMemFree (pInfo);
    }
}

__inline 
VOID FreeRootCauseInfos(  _In_reads_(RootCauseCount) RootCauseInfo* pInfo,
                          ULONG RootCauseCount,
                          BOOL bFreePointer
                          )
{
    ULONG k = 0;
    if (NULL != pInfo && RootCauseCount > 0)
    {
        for (
            k = 0; 
            k < RootCauseCount; 
            k++
            )
        {
            //free string members
            CoTaskMemFree (pInfo[k].pwszDescription);
            pInfo[k].pwszDescription=NULL;
            //free repair member
            FreeRepairInfoExs(pInfo[k].pRepairs, pInfo[k].repairCount,TRUE);
        }
        if(bFreePointer) CoTaskMemFree (pInfo);
    }
}


__inline 
VOID FreeHelperAttributes(  _In_reads_(HelperAttributeCount) HELPER_ATTRIBUTE* pInfo,
                          ULONG HelperAttributeCount,
                          BOOL bFreePointer
                          )
{
    ULONG k = 0;
    if (NULL != pInfo && HelperAttributeCount > 0)
    {
        for (
            k = 0; 
            k < HelperAttributeCount; 
            k++
            )
        {
            // name
            CoTaskMemFree(pInfo[k].pwszName);
            pInfo->pwszName=NULL;

            // value
            switch(pInfo[k].type)
            {
            case AT_STRING:
                CoTaskMemFree(pInfo[k].PWStr);
                pInfo->PWStr=NULL;
                break;
            case AT_OCTET_STRING:
                CoTaskMemFree(pInfo[k].OctetString.lpValue);
                pInfo[k].OctetString.lpValue=NULL;
                break;
            }
            pInfo[k].type=AT_INVALID;
        }
        if(bFreePointer) CoTaskMemFree (pInfo);
    }
}

template<typename T, void (__stdcall *fn)(T arg1, ULONG arg2, BOOL arg3)>
class TNDFDeallocator
{
public:
    TNDFDeallocator()
    {
        Detach();
    }
        
    TNDFDeallocator(T MemoryToManage, ULONG ItemCount, BOOL FreePointer):
        m_Memory(MemoryToManage),
        m_ItemCount(ItemCount),
        m_FreePointer(FreePointer)
    {
    }
        
    ~TNDFDeallocator()
    {
        if(m_Memory)
        {
            fn(m_Memory, m_ItemCount, m_FreePointer);
        }
    }

    void Attach(T MemoryToManage, ULONG ItemCount, BOOL FreePointer)
    {
        m_Memory=MemoryToManage;
        m_ItemCount=ItemCount;
        m_FreePointer=FreePointer;
    }
    
    void Detach()
    {
        m_Memory=NULL;
        m_ItemCount=0;
        m_FreePointer=FALSE;
    }

private:
    T m_Memory;
    ULONG m_ItemCount;
    BOOL m_FreePointer;
        
};


typedef TNDFDeallocator<RepairInfo *, FreeRepairInfos> CRepairInfoDeallocator;
typedef TNDFDeallocator<RepairInfoEx *, FreeRepairInfoExs> CRepairInfoExDeallocator;
typedef TNDFDeallocator<RootCauseInfo *, FreeRootCauseInfos> CRootCauseInfoDeallocator;
typedef TNDFDeallocator<HELPER_ATTRIBUTE *, FreeHelperAttributes> CHelperAttributeDeallocator;

__inline
//Deep copies the RepairInfo structure
HRESULT
CopyRepairInfo(
        _Out_ RepairInfo *Dest,
        _In_ const RepairInfo *Source
        )
{
    if(Dest==NULL || Source==NULL) return E_INVALIDARG;

    RepairInfo tempDest={0};

    //copy main structure, then create copies of the strings
    memcpy(&tempDest,Source,sizeof(RepairInfo));
    
    //clear out pointers so we can deallocate new dynamic memory if anything fails
    tempDest.pwszClassName=NULL;
    tempDest.pwszDescription=NULL;
    SecureZeroMemory(&tempDest.UiInfo, sizeof(UiInfo));

    //take a reference to the destination, if anything goes wrong and
    //we exit the function, the dynamically allocated memory will be freed.
    CRepairInfoDeallocator riDealloc(&tempDest, 1, FALSE); 

    //copy string members
    HRESULT hr = S_OK;
    if(Source->pwszClassName)
    {
        hr = UtilAssembleStringsWithAlloc(&tempDest.pwszClassName,MAX_RESOURCE_BUFF,L"%s",Source->pwszClassName,FALSE,0);    
        if(FAILED(hr)) return hr;
    }

    if(Source->pwszDescription)
    {
        hr = UtilStringCopyWithAlloc(&tempDest.pwszDescription,USHRT_MAX,Source->pwszDescription);    
        if(FAILED(hr)) return hr;
    }

    tempDest.UiInfo.type = Source->UiInfo.type;
    if (Source->UiInfo.type == UIT_SHELL_COMMAND)
    {
        if(Source->UiInfo.ShellInfo.pwszDirectory)
        {
            hr = UtilAssembleStringsWithAlloc(&tempDest.UiInfo.ShellInfo.pwszDirectory,MAX_RESOURCE_BUFF,L"%s",Source->UiInfo.ShellInfo.pwszDirectory,FALSE,0);    
            if(FAILED(hr)) return hr;
        }

        if(Source->UiInfo.ShellInfo.pwszFile)
        {
            hr = UtilAssembleStringsWithAlloc(&tempDest.UiInfo.ShellInfo.pwszFile,MAX_RESOURCE_BUFF,L"%s",Source->UiInfo.ShellInfo.pwszFile,FALSE,0);    
            if(FAILED(hr)) return hr;
        }

        if(Source->UiInfo.ShellInfo.pwszOperation)
        {
            hr = UtilAssembleStringsWithAlloc(&tempDest.UiInfo.ShellInfo.pwszOperation,MAX_RESOURCE_BUFF,L"%s",Source->UiInfo.ShellInfo.pwszOperation,FALSE,0);    
            if(FAILED(hr)) return hr;
        }

        if(Source->UiInfo.ShellInfo.pwszParameters)
        {
            hr = UtilAssembleStringsWithAlloc(&tempDest.UiInfo.ShellInfo.pwszParameters,MAX_RESOURCE_BUFF,L"%s",Source->UiInfo.ShellInfo.pwszParameters,FALSE,0);    
            if(FAILED(hr)) return hr;
        }

        tempDest.UiInfo.ShellInfo.nShowCmd = Source->UiInfo.ShellInfo.nShowCmd;

    }
    else if (Source->UiInfo.type == UIT_HELP_PANE)
    {
        if(Source->UiInfo.pwzHelpUrl)
        {
            hr = UtilAssembleStringsWithAlloc(&tempDest.UiInfo.pwzHelpUrl,MAX_RESOURCE_BUFF,L"%s",Source->UiInfo.pwzHelpUrl,FALSE,0);    
            if(FAILED(hr)) return hr;
        }
    }
    else if (Source->UiInfo.type == UIT_DUI)
    {
        if(Source->UiInfo.pwzDui)
        {
            hr = UtilAssembleStringsWithAlloc(&tempDest.UiInfo.pwzDui,MAX_RESOURCE_BUFF,L"%s",Source->UiInfo.pwzDui,FALSE,0);    
            if(FAILED(hr)) return hr;
        }
    }

    //the destination is now a full deep copy of the source, remove the 
    //reference from the deallocator
    riDealloc.Detach();

    //set the copy of the data to the return pointer
    memcpy(Dest,&tempDest,sizeof(RepairInfo));
    
    return hr;
}

__inline
//deep copies RootCauseInfo structure
HRESULT
CopyRootCauseInfo(
        _Out_ RootCauseInfo *Dest,
        _In_ const RootCauseInfo *Source
)
{
    if(Dest==NULL || Source==NULL) return E_INVALIDARG;

    HRESULT hr = S_OK;
    RootCauseInfo tempDest = {0};

    //copy main structure, then create copies of the strings
    memcpy(&tempDest,Source,sizeof(RootCauseInfo));

    //clear out pointers so we can deallocate new dynamic memory if anything fails
    tempDest.pwszDescription=NULL;
    tempDest.pRepairs=NULL;
    tempDest.repairCount=0;

    //take a reference to the destination, if anything goes wrong and
    //we exit the function, the dynamically allocated memory will be freed.
    CRootCauseInfoDeallocator rciDealloc(&tempDest, 1, FALSE); 

    //copy string members
    if(Source->pwszDescription)
    {
        hr = UtilStringCopyWithAlloc(&tempDest.pwszDescription,USHRT_MAX,Source->pwszDescription);    
        if(FAILED(hr)) return hr;
    }

    //copy the repairs
    if(Source->pRepairs && Source->repairCount)
    {
        tempDest.pRepairs = static_cast<RepairInfoEx *>(CoTaskMemAlloc(Source->repairCount*sizeof(RepairInfoEx)));
        if(!tempDest.pRepairs)
        {
            return E_OUTOFMEMORY;
        }
        SecureZeroMemory(tempDest.pRepairs,Source->repairCount*sizeof(RepairInfoEx));

        CRepairInfoExDeallocator riDealloc(tempDest.pRepairs, Source->repairCount, TRUE);
        
        for(USHORT i=0; i<Source->repairCount; i++)
        {
            tempDest.pRepairs[i].repairRank=Source->pRepairs[i].repairRank;
            hr = CopyRepairInfo(&tempDest.pRepairs[i].repair, &Source->pRepairs[i].repair);
            if(FAILED(hr))
            {
                return hr;
            }
        }

        riDealloc.Detach();
        tempDest.repairCount=Source->repairCount;
    }

    //the destination is now a full deep copy of the source, remove the 
    //reference from the deallocator
    rciDealloc.Detach();

    //set the copy of the data to the return pointer
    memcpy(Dest,&tempDest,sizeof(RootCauseInfo));
    
    return hr;

}

__inline
HRESULT
CopyHelperAttribute(
        _Out_ HELPER_ATTRIBUTE *Dest,
        _In_ const HELPER_ATTRIBUTE *Source
)
{
   if(Dest==NULL || Source==NULL) return E_INVALIDARG;

    HELPER_ATTRIBUTE tempDest = {0};
    CHelperAttributeDeallocator haDealloc(&tempDest, 1, FALSE);

    LPWSTR tempName=NULL;    
    HRESULT hr = UtilAssembleStringsWithAlloc(&tempName, MAX_RESOURCE_BUFF, L"%s", Source->pwszName, FALSE, 0);
    if(SUCCEEDED(hr))
    {
        CStringSimpleDeallocator nameDealloc(tempName); 
        tempDest.type = Source->type;
        switch(Source->type)
        {
            case AT_STRING:
                if (Source->PWStr)
                {
                    hr = UtilAssembleStringsWithAlloc(&tempDest.PWStr, MAX_RESOURCE_BUFF, L"%s", Source->PWStr, FALSE, 0);
                }
                break;
           case AT_OCTET_STRING:
                if (Source->OctetString.lpValue && Source->OctetString.dwLength > 0)
                {
                    tempDest.OctetString.lpValue = static_cast<LPBYTE>(CoTaskMemAlloc(Source->OctetString.dwLength));
                    if(!tempDest.OctetString.lpValue)
                    {
                        hr = E_OUTOFMEMORY;
                    }
                    else
                    {
                        memcpy(tempDest.OctetString.lpValue, Source->OctetString.lpValue, Source->OctetString.dwLength);
                        tempDest.OctetString.dwLength=Source->OctetString.dwLength;
                    }
                }
                break;            
            default:
                //transfer values
                tempDest=*Source; //note, next line should set name field, otherwise we could get an accidental double free
                break;
        }

        if(SUCCEEDED(hr))
        {
            //successfully copied the internal structures
            //remove deallocator references and return to caller
            tempDest.pwszName = nameDealloc.Detach();
            haDealloc.Detach();
            *Dest = tempDest;
        }
    }

    return hr;
}

#endif
