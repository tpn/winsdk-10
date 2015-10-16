//*@@@+++@@@@******************************************************************
//
// ComponentPackageSupport
// Copyright (C) Microsoft Corporation. All rights reserved.
//
//*@@@---@@@@******************************************************************
//

//
// CompPkgSup.h is the header containing the realtime work queue APIs 
// exported by CompPkgSup.dll
// 

#if (_MSC_VER > 1020)
#pragma once
#endif

#if !defined(__COMPPKGSUP_H__)
#define __COMPPKGSUP_H__

#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

#include <hstring.h>
#include <inspectable.h>
/////////////////////////////////////////////////////////////////////////////////////////

STDAPI InstantiateComponentFromPackage(_In_ HSTRING classId, _In_ HSTRING packageFullName, _COM_Outptr_ IInspectable** instance);
STDAPI RegisterServerForPMP(_In_ HSTRING serverClassId, _In_ IClassFactory *classFactory, _Out_ LPVOID *token);
STDAPI UnregisterServerForPMP(_In_ LPVOID token);
STDAPI GetServerForPMP(_In_ HSTRING serverClassId, _COM_Outptr_ IUnknown **unknown);

STDAPI AreDvdCodecsEnabled();

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */
#pragma endregion

#endif //#if !defined(__COMPPKGSUP_H__)
