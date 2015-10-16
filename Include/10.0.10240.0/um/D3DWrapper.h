//
// Copyright (c) Microsoft Corporation.  All rights reserved.
//
//
// Use of this sample source code is subject to the terms of the Microsoft
// license agreement under which you licensed this sample source code. If
// you did not accept the terms of the license agreement, you are not
// authorized to use this sample source code. For the terms of the license,
// please see the license agreement between you and Microsoft or, if applicable,
// see the LICENSE.RTF on your install media or the root of your tools installation.
// THE SAMPLE SOURCE CODE IS PROVIDED "AS IS", WITH NO WARRANTIES OR INDEMNITIES.
//
//--------------------------------------------------------------------------------------
// File: D3DWrapper.h
//--------------------------------------------------------------------------------------
#pragma once
#ifndef _D3DWRAPPER_
#define _D3DWRAPPER_

//--------------------------------------------------------------------------------------
// D3DWrapper namespace.  This namespace contains an abstraction for access to D3D/DXGI/D2D/DWrite
// to allow an application to use these, regardless of whether the application runs as
// the Mobilecore compositor, or a Mobilecore user mode application.
//--------------------------------------------------------------------------------------
namespace D3DWrapper
{

// Initialize the D3D11Device, D3D11DeviceContext, and the swap chain.
HRESULT Init(HWND hWnd);

// Free up the above. Note: for the Compositor case, you are not able to re-init after uniniting.
void Uninit();

// Set the render targets for the next frame. This implicitly manages the ID3D11RenderTargetView.
void OMSetRenderTargets(ID3D11DepthStencilView *pDepthStencilView);

// Present the current frame.
HRESULT Present();

// Get the width and height for the current mode (this assumes full screen). This is the size
// that was used when creating the swap chain.
UINT Width();
UINT Height();

// Get current ID3D11 interfaces.
ID3D11Device*           Device();
ID3D11DeviceContext*    Context();

// Note: The RenderTargetView object can change each time Present() is called. Therefore, the
// caller should re-query for this object and any objects derived from this object after calling
// Present().
ID3D11RenderTargetView* RenderTargetView();

#ifdef _D2D1_H_
// Initialize D2D to interop with the D3D device (include <d2d1.h>).
// Note that D3D/D2D interop requires D3D_FEATURE_LEVEL_10_1 or higher.
HRESULT InitD2D(VOID);

// Free up the D2D resources.
VOID UninitD2D();

// Note: The D2D1 RenderTarget object can change each time Present() is called. Therefore, the
// caller should re-query for this object and any objects derived from this object after calling
// Present().
ID2D1RenderTarget* D2DRenderTarget();
#endif // _D2D1_H_

};

#endif // _D3DWRAPPER_
