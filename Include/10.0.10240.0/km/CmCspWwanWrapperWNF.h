//
// Copyright (c) Microsoft Corporation.  All rights reserved.
//
//
// Use of this source code is subject to the terms of the Microsoft shared
// source or premium shared source license agreement under which you licensed
// this source code. If you did not accept the terms of the license agreement,
// you are not authorized to use this source code. For the terms of the license,
// please see the license agreement between you and Microsoft or, if applicable,
// see the SOURCE.RTF on your install media or the root of your tools installation.
// THE SOURCE CODE IS PROVIDED "AS IS", WITH NO WARRANTIES OR INDEMNITIES.
//


#pragma once

typedef  
NTSTATUS  
CWP_WNF_WRAPPER_USER_CALLBACK(  
    const VOID*   pBuffer,  
    ULONG   Length  
    );  

typedef CWP_WNF_WRAPPER_USER_CALLBACK *CWP_WNF_WRAPPER_USER_CALLBACKP;

NTSTATUS cwpSubscriberStateNotifWrapperWNF(
            CWP_WNF_WRAPPER_USER_CALLBACKP pUserCallbackF);

NTSTATUS cwpQueryStateWrapperWNF(
            CWP_WNF_WRAPPER_USER_CALLBACKP pUserCallbackF);

