/******************************************************************************
*                                                                             *
*   Copyright (C) Microsoft. All rights reserved.                             *
*                                                                             *
******************************************************************************/

#pragma once

#ifndef _modemconfighelperoem_h_
#define _modemconfighelperoem_h_

#ifdef __cplusplus
extern "C" {
#endif

#define SPC_LEN 6

/// <summary>
/// This function is to be implemented by the OEM to return                 
/// the service programming code (SPC) of the device. This is necessary     
/// for OMA-DM provisioning for Sprint. The function is expected to return  
/// the SPC as WCHARs and null-terminate the string                         
/// </summary>
/// <param name="wszSPC">             [in]  a WCHAR array buffer passed to the function with length SPC_LEN + 1. 
///                                         The additional character is to null-terimate the string
/// </param>
/// <returns>
/// <para>Returns S_OK if successful. Otherwise, corresponding E_* HRESULT</para>
/// </returns>
HRESULT GetSPC(_Out_writes_z_(SPC_LEN + 1) LPWSTR wszSPC);

/// <summary>
/// This function is to be implemented by the OEM to retrieve                 
/// The BSRMaxTime per Sprint requirements. This is a non-standard modem feature
/// and needs to be implemented by OEM.
/// </summary>
/// <param name="pdwBSRMaxTime">       [out]  a pointer to a DWORD that should be updated to the correct BSRMaxTime value
/// </param>
/// <returns>
/// <para>Returns S_OK if successful. Otherwise, corresponding E_* HRESULT</para>
/// </returns>
HRESULT GetBSRMaxTime(_Out_ LPDWORD pdwBSRMaxTime);

/// <summary>
/// This function is to be implemented by the OEM to set                 
/// The BSRMaxTime per Sprint requirements. This is a non-standard modem feature
/// and needs to be implemented by OEM.
/// </summary>
/// <param name="dwBSRMaxTime">       [in]  a DWORD that specifies the BSRMaxTime value
/// </param>
/// <returns>
/// <para>Returns S_OK if successful. Otherwise, corresponding E_* HRESULT</para>
/// </returns>
HRESULT SetBSRMaxTime(DWORD dwBSRMaxTime);
#ifdef __cplusplus
}
#endif

#endif //_modemconfighelperoem_h_