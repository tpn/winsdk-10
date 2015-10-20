//
// Copyright (c) Microsoft Corporation.  All rights reserved.
//
//
// Use of this source code is subject to the terms of the Microsoft
// premium shared source license agreement under which you licensed
// this source code. If you did not accept the terms of the license
// agreement, you are not authorized to use this source code.
// For the terms of the license, please see the license agreement
// signed by you and Microsoft.
// THE SOURCE CODE IS PROVIDED "AS IS", WITH NO WARRANTIES OR INDEMNITIES.
//

#pragma once

//MF includes
#include <mfapi.h>
#include <MFCaptureEngine.h>
#include <Mfidl.h>

#include <ks.h>
#include <ksmedia.h>
#include <ksproxy.h>
#include <initguid.h>
#include <wp_ksmedia.h>

MIDL_INTERFACE("665f66e6-815b-472a-b1ed-d2d5b726142f")
IServiceHostInterface : public IUnknown
{
    //
    // Asynchronously post an event back to the application layer. They will receieve this
    // as an <GUID,IPropertyValue> pair on the VendorSpecificDataAvailable callback in the API.
    // Note that event delivery is serialized and other event handlers set by the caller may 
    // delay processing.
    //
    IFACEMETHOD(PostCustomEvent)(
        GUID eventId,
        _In_ PROPVARIANT* pvEventData) =0;
    
    //
    // Set a property (same as client SetProperty API).
    //
    IFACEMETHOD(SetDriverProperty)(
        GUID guidPropertyId,
        _In_ PROPVARIANT* pValue) =0;

    //
    // Get a property (same as client GetProperty API).
    //
    IFACEMETHOD(GetDriverProperty)(
        GUID guidPropertyId,
        _Out_ PROPVARIANT* pValue) =0;

    //
    // Replace current storyboard with a completely custom one. Note that allocated size and
    // number of frames must match the previously configured one.
    //
    IFACEMETHOD(ReconfigureStoryboard)(
        _In_ KSPROPERTY_CAMERACONTROL_SB_S* pStoryboard) =0;

};

#define GUID_SERVICE_HOST_INTERFACE_SET __uuidof(IServiceHostInterface)
