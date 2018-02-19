//
//    Copyright (C) Microsoft.  All rights reserved.
//
#ifndef _DRMK_H_
#define _DRMK_H_

#ifdef __cplusplus
extern "C"
{
#endif
    
	
typedef struct tagDRMRIGHTS {
    BOOL  CopyProtect;
    ULONG Reserved;
    BOOL  DigitalOutputDisable;
} DRMRIGHTS , *PDRMRIGHTS;
typedef const DRMRIGHTS *PCDRMRIGHTS;

#define DEFINE_DRMRIGHTS_DEFAULT(DrmRights) const DRMRIGHTS DrmRights = {FALSE, 0, FALSE}


// {1915C967-3299-48cb-A3E4-69FD1D1B306E}
DEFINE_GUID(IID_IDrmAudioStream,
	    0x1915c967, 0x3299, 0x48cb, 0xa3, 0xe4, 0x69, 0xfd, 0x1d, 0x1b, 0x30, 0x6e);

DECLARE_INTERFACE_(IDrmAudioStream, IUnknown)
{
    // IUnknown methods
    STDMETHOD_(NTSTATUS, QueryInterface)(THIS_
        _In_  REFIID InterfaceId,
        _Out_ PVOID* Interface
        ) PURE;
        
    STDMETHOD_(ULONG,AddRef)(THIS) PURE;
    
    STDMETHOD_(ULONG,Release)(THIS) PURE;
    
    // IDrmAudioStream methods                       
    STDMETHOD_(NTSTATUS,SetContentId)(THIS_
	_In_ ULONG ContentId,
        _In_ PCDRMRIGHTS DrmRights
        ) PURE;
};

typedef IDrmAudioStream *PDRMAUDIOSTREAM;

#define IMP_IDrmAudioStream\
    STDMETHODIMP_(NTSTATUS) SetContentId\
    (   _In_      ULONG	    ContentId,\
        _In_      PCDRMRIGHTS DrmRights\
    );

typedef struct tagDRMFORWARD {
    DWORD          Flags;
    PDEVICE_OBJECT DeviceObject;
    PFILE_OBJECT   FileObject;
    PVOID          Context;
} DRMFORWARD, *PDRMFORWARD;
typedef const DRMFORWARD *PCDRMFORWARD;

_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
DrmAddContentHandlers(
    _In_ ULONG ContentId,
    _In_reads_(NumHandlers) PVOID* paHandlers,
    _In_ ULONG NumHandlers
    );

typedef
NTSTATUS
(NTAPI *PFNDRMADDCONTENTHANDLERS)(
    _In_ ULONG ContentId,
    _In_ PVOID* paHandlers,
    _In_ ULONG NumHandlers
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
DrmCreateContentMixed(
    _In_ PULONG paContentId,
    _In_ ULONG cContentId,
    _Out_ PULONG pMixedContentId
    );

typedef
NTSTATUS
(NTAPI *PFNDRMCREATECONTENTMIXED)(
    _In_ PULONG paContentId,
    _In_ ULONG cContentId,
    _Out_ PULONG pMixedContentId
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
DrmDestroyContent(
    _In_ ULONG ContentId
    );

typedef
NTSTATUS
(NTAPI *PFNDRMDESTROYCONTENT)(
    _In_ ULONG ContentId
    );

NTSTATUS
NTAPI
DrmForwardContentToDeviceObject(
    _In_ ULONG ContentId,
    _In_opt_ PVOID Reserved,
    _In_ PCDRMFORWARD DrmForward
    );

typedef
NTSTATUS
(NTAPI *PFNDRMFORWARDCONTENTTODEVICEOBJECT)(
    _In_ ULONG ContentId,
    _In_ PVOID Reserved,
    _In_ PCDRMFORWARD DrmForward
    );


_IRQL_requires_max_(PASSIVE_LEVEL) 
__drv_preferredFunction("DrmForwardContentToDeviceObject", "Obsolete")
NTSTATUS
NTAPI
DrmForwardContentToFileObject(
    _In_ ULONG ContentId,
    _In_ PFILE_OBJECT FileObject
    );

typedef
NTSTATUS
(NTAPI *PFNDRMFORWARDCONTENTTOFILEOBJECT)(
    _In_ ULONG ContentId,
    _In_ PFILE_OBJECT FileObject
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
DrmForwardContentToInterface(
    _In_ ULONG ContentId,
    _In_ PUNKNOWN pUnknown,
    _In_ ULONG NumMethods);

typedef
NTSTATUS
(NTAPI *PFNDRMFORWARDCONTENTTOINTERFACE)(
    _In_ ULONG ContentId,
    _In_ PUNKNOWN pUnknown,
    _In_ ULONG NumMethods);

_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
DrmGetContentRights(
    _In_ ULONG ContentId,
    _Out_ PDRMRIGHTS DrmRights
    );

typedef
NTSTATUS
(NTAPI *PFNDRMGETCONTENTRIGHTS)(
    _In_ ULONG ContentId,
    _Out_ PDRMRIGHTS DrmRights
    );


//
// Structures for use with KSPROPERY_DRMAUDIOSTREAM_CONTENTID
//

typedef struct {
    ULONG     ContentId;
    DRMRIGHTS DrmRights;
} KSDRMAUDIOSTREAM_CONTENTID, *PKSDRMAUDIOSTREAM_CONTENTID;

typedef struct {
    KSPROPERTY                         Property;
    PVOID                              Context;
    // DRM API callback functions
    PFNDRMADDCONTENTHANDLERS            DrmAddContentHandlers;
    PFNDRMCREATECONTENTMIXED            DrmCreateContentMixed;
    PFNDRMDESTROYCONTENT                DrmDestroyContent;
    PFNDRMFORWARDCONTENTTODEVICEOBJECT  DrmForwardContentToDeviceObject;
    PFNDRMFORWARDCONTENTTOFILEOBJECT    DrmForwardContentToFileObject;
    PFNDRMFORWARDCONTENTTOINTERFACE     DrmForwardContentToInterface;
    PFNDRMGETCONTENTRIGHTS              DrmGetContentRights;
} KSP_DRMAUDIOSTREAM_CONTENTID, *PKSP_DRMAUDIOSTREAM_CONTENTID;


#ifdef __cplusplus
}
#endif

#endif

