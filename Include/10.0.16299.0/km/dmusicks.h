/***************************************************************************
*                                                                          *
*   DMusicKS.h -- This module defines the the DirectMusic WDM interface.   *
*                                                                          *
*   Copyright (c) Microsoft Corp. All rights reserved.                     *
*                                                                          *
***************************************************************************/

#ifndef _DMUSICKS_
#define _DMUSICKS_

#include <dmusprop.h>

#define DONT_HOLD_FOR_SEQUENCING 0x8000000000000000

typedef struct _DMUS_KERNEL_EVENT
{                                           //  this    offset
    BYTE            bReserved;              //  1       0
    BYTE            cbStruct;               //  1       1
    USHORT          cbEvent;                //  2       2
    USHORT          usChannelGroup;         //  2       4
    USHORT          usFlags;                //  2       6
    REFERENCE_TIME  ullPresTime100ns;       //  8       8
    ULONGLONG       ullBytePosition;        //  8      16
    _DMUS_KERNEL_EVENT *pNextEvt;           //  4 (8)  24
    union
    {
        BYTE        abData[sizeof(PBYTE)];  //  4 (8)  28 (32)
        PBYTE       pbData;
        _DMUS_KERNEL_EVENT *pPackageEvt;
    } uData;
} DMUS_KERNEL_EVENT, *PDMUS_KERNEL_EVENT;   //         32 (40)

#define DMUS_KEF_EVENT_COMPLETE     0x0000
#define DMUS_KEF_EVENT_INCOMPLETE   0x0001  //  This event is an incomplete package or sysex.
                                            //  Do not use this data.

#define DMUS_KEF_PACKAGE_EVENT      0x0002  //  This event is a package. The uData.pPackageEvt
                                            //  field contains a pointer to a chain of events.

#define kBytePositionNone   (~(ULONGLONG)0) //  This message has no meaningful byte position

#define SHORT_EVT(evt)       ((evt)->cbEvent <= sizeof(PBYTE))
#define PACKAGE_EVT(evt)     ((evt)->usFlags & DMUS_KEF_PACKAGE_EVENT)
#define INCOMPLETE_EVT(evt)  ((evt)->usFlags & DMUS_KEF_EVENT_INCOMPLETE)
#define COMPLETE_EVT(evt)    (((evt)->usFlags & DMUS_KEF_EVENT_INCOMPLETE) == 0)

#define SET_INCOMPLETE_EVT(evt) ((evt)->usFlags |= DMUS_KEF_EVENT_INCOMPLETE)
#define SET_COMPLETE_EVT(evt)   ((evt)->usFlags &= (~DMUS_KEF_EVENT_INCOMPLETE))
#define SET_PACKAGE_EVT(evt)    ((evt)->usFlags |= DMUS_KEF_PACKAGE_EVENT)
#define CLEAR_PACKAGE_EVT(evt)  ((evt)->usFlags &= (~DMUS_KEF_PACKAGE_EVENT))


#define STATIC_CLSID_PortDMus\
    0xb7902fe9, 0xfb0a, 0x11d1, 0x81, 0xb0, 0x00, 0x60, 0x08, 0x33, 0x16, 0xc1
DEFINE_GUIDSTRUCT("b7902fe9-fb0a-11d1-81b0-0060083316c1", CLSID_PortDMus);
#define CLSID_PortDMus DEFINE_GUIDNAMED(CLSID_PortDMus)

#define STATIC_CLSID_MiniportDriverDMusUART\
    0xd3f0ce1c, 0xfffc, 0x11d1, 0x81, 0xb0, 0x00, 0x60, 0x08, 0x33, 0x16, 0xc1
DEFINE_GUIDSTRUCT("d3f0ce1c-fffc-11d1-81b0-0060083316c1", CLSID_MiniportDriverDMusUART);
#define CLSID_MiniportDriverDMusUART DEFINE_GUIDNAMED(CLSID_MiniportDriverDMusUART)

#define STATIC_CLSID_MiniportDriverDMusUARTCapture\
    0xd3f0ce1d, 0xfffc, 0x11d1, 0x81, 0xb0, 0x00, 0x60, 0x08, 0x33, 0x16, 0xc1
DEFINE_GUIDSTRUCT("d3f0ce1d-fffc-11d1-81b0-0060083316c1", CLSID_MiniportDriverDMusUARTCapture);
#define CLSID_MiniportDriverDMusUARTCapture DEFINE_GUIDNAMED(CLSID_MiniportDriverDMusUARTCapture)

#define STATIC_IID_IPortDMus\
    0xc096df9c, 0xfb09, 0x11d1, 0x81, 0xb0, 0x00, 0x60, 0x08, 0x33, 0x16, 0xc1
DEFINE_GUIDSTRUCT("c096df9c-fb09-11d1-81b0-0060083316c1", IID_IPortDMus);
#define IID_IPortDMus DEFINE_GUIDNAMED(IID_IPortDMus)

#define STATIC_IID_IMiniportDMus\
    0xc096df9d, 0xfb09, 0x11d1, 0x81, 0xb0, 0x00, 0x60, 0x08, 0x33, 0x16, 0xc1
DEFINE_GUIDSTRUCT("c096df9d-fb09-11d1-81b0-0060083316c1", IID_IMiniportDMus);
#define IID_IMiniportDMus DEFINE_GUIDNAMED(IID_IMiniportDMus)

#define STATIC_IID_IMXF\
    0xc096df9e, 0xfb09, 0x11d1, 0x81, 0xb0, 0x00, 0x60, 0x08, 0x33, 0x16, 0xc1
DEFINE_GUIDSTRUCT("c096df9e-fb09-11d1-81b0-0060083316c1", IID_IMXF);
#define IID_IMXF DEFINE_GUIDNAMED(IID_IMXF)

#define STATIC_IID_IAllocatorMXF\
    0xa5f0d62c, 0xb30f, 0x11d2, 0xb7, 0xa3, 0x00, 0x60, 0x08, 0x33, 0x16, 0xc1
DEFINE_GUIDSTRUCT("a5f0d62c-b30f-11d2-b7a3-0060083316c1", IID_IAllocatorMXF);
#define IID_IAllocatorMXF DEFINE_GUIDNAMED(IID_IAllocatorMXF)

#define STATIC_IID_ISynthSinkDMus\
    0x1f476974, 0x679b, 0x11d2, 0x8f, 0x7d, 0x00, 0xc0, 0x4f, 0xbf, 0x8f, 0xef
DEFINE_GUIDSTRUCT("1f476974-679b-11d2-8f7d-00c04fbf8fef", IID_ISynthSinkDMus);
#define IID_ISynthSinkDMus DEFINE_GUIDNAMED(IID_ISynthSinkDMus)

#define STATIC_KSAUDFNAME_DMUSIC_MPU_OUT\
    0xA4DF0EB5, 0xBAC9, 0x11d2, 0xB7, 0xA8, 0x00, 0x60, 0x08, 0x33, 0x16, 0xC1
DEFINE_GUIDSTRUCT("A4DF0EB5-BAC9-11d2-B7A8-0060083316C1", KSAUDFNAME_DMUSIC_MPU_OUT);
#define KSAUDFNAME_DMUSIC_MPU_OUT DEFINE_GUIDNAMED(KSAUDFNAME_DMUSIC_MPU_OUT)

#define STATIC_KSAUDFNAME_DMUSIC_MPU_IN\
    0xB2EC0A7D, 0xBAC9, 0x11d2, 0xB7, 0xA8, 0x00, 0x60, 0x08, 0x33, 0x16, 0xC1
DEFINE_GUIDSTRUCT("B2EC0A7D-BAC9-11d2-B7A8-0060083316C1", KSAUDFNAME_DMUSIC_MPU_IN);
#define KSAUDFNAME_DMUSIC_MPU_IN DEFINE_GUIDNAMED(KSAUDFNAME_DMUSIC_MPU_IN)


/*****************************************************************************
 * IPortDMus
 *****************************************************************************
 * Interface for DMusic port lower edge.
 */
DECLARE_INTERFACE_(IPortDMus,IPort)
{
    DEFINE_ABSTRACT_UNKNOWN()   //  For IUnknown

    DEFINE_ABSTRACT_PORT()      //  For IPort

    //  For IPortDMus
    STDMETHOD_(void,Notify)
    (   THIS_
        _In_opt_  PSERVICEGROUP   ServiceGroup
    )   PURE;

    STDMETHOD_(void,RegisterServiceGroup)
    (   THIS_
        _In_      PSERVICEGROUP   ServiceGroup
    )   PURE;
};

typedef IPortDMus *PPORTDMUS;

#ifdef PC_IMPLEMENTATION
#define IMP_IPortDMus\
    IMP_IPort;\
    STDMETHODIMP_(void) Notify\
    (   _In_opt_  PSERVICEGROUP   ServiceGroup\
    );\
    STDMETHODIMP_(void) RegisterServiceGroup\
    (   _In_      PSERVICEGROUP   ServiceGroup\
    )
#endif  /* PC_IMPLEMENTATION */


/*****************************************************************************
 * IMXF
 *****************************************************************************
 * Interface for DMusic miniport streams.
 */
struct  IMXF;
typedef IMXF *PMXF;

#if !defined(DEFINE_ABSTRACT_MXF)

#define DEFINE_ABSTRACT_MXF()                                   \
    STDMETHOD_(NTSTATUS,SetState)                               \
    (   THIS_                                                   \
        _In_    KSSTATE State                                   \
    )   PURE;                                                   \
    STDMETHOD_(NTSTATUS,PutMessage)                             \
    (   THIS_                                                   \
        _In_    PDMUS_KERNEL_EVENT  pDMKEvt                     \
    )   PURE;                                                   \
    STDMETHOD_(NTSTATUS,ConnectOutput)                          \
    (   THIS_                                                   \
        _In_    PMXF    sinkMXF                                 \
    )   PURE;                                                   \
    STDMETHOD_(NTSTATUS,DisconnectOutput)                       \
    (   THIS_                                                   \
        _In_    PMXF    sinkMXF                                 \
    )   PURE;

#endif //!defined(DEFINE_ABSTRACT_MXF)

DECLARE_INTERFACE_(IMXF,IUnknown)
{
    DEFINE_ABSTRACT_UNKNOWN()   //  For IUnknown

    DEFINE_ABSTRACT_MXF()       //  For IMXF
};

#define IMP_IMXF\
    STDMETHODIMP_(NTSTATUS) SetState\
    (   _In_    KSSTATE State\
    );\
    STDMETHODIMP_(NTSTATUS) PutMessage\
    (   _In_    PDMUS_KERNEL_EVENT  pDMKEvt\
    );\
    STDMETHODIMP_(NTSTATUS) ConnectOutput\
    (   _In_    PMXF    sinkMXF\
    );\
    STDMETHODIMP_(NTSTATUS) DisconnectOutput\
    (   _In_    PMXF    sinkMXF\
    );\

/*****************************************************************************
 * IAllocatorMXF
 *****************************************************************************
 * Interface for DMusic miniport streams.
 */
struct  IAllocatorMXF;
typedef IAllocatorMXF *PAllocatorMXF;

DECLARE_INTERFACE_(IAllocatorMXF,IMXF)
{
    DEFINE_ABSTRACT_UNKNOWN()   //  For IUnknown

    DEFINE_ABSTRACT_MXF()       //  For IMXF

    //  For IAllocatorMXF
    STDMETHOD_(NTSTATUS,GetMessage)
    (   THIS_
        _Out_   PDMUS_KERNEL_EVENT * ppDMKEvt
    )   PURE;

    STDMETHOD_(USHORT,GetBufferSize)
    (   THIS
    )   PURE;

    STDMETHOD_(NTSTATUS,GetBuffer)
    (   THIS_
        _Outptr_result_bytebuffer_(_Inexpressible_(GetBufferSize bytes)) PBYTE * ppBuffer
    )   PURE;

    STDMETHOD_(NTSTATUS,PutBuffer)
    (   THIS_
        _In_ PBYTE   pBuffer
    )   PURE;
};

#define IMP_IAllocatorMXF\
    IMP_IMXF;\
    STDMETHODIMP_(NTSTATUS) GetMessage\
    (   _Out_   PDMUS_KERNEL_EVENT * ppDMKEvt\
    );\
    STDMETHODIMP_(USHORT) GetBufferSize\
    (   void\
    );\
    STDMETHODIMP_(NTSTATUS) GetBuffer\
    (   _Outptr_result_bytebuffer_(_Inexpressible_(GetBufferSize bytes)) PBYTE * ppBuffer\
    );\
    STDMETHODIMP_(NTSTATUS) PutBuffer\
    (   _In_ PBYTE   pBuffer\
    );\


typedef enum
{
    DMUS_STREAM_MIDI_INVALID = -1,
    DMUS_STREAM_MIDI_RENDER = 0,
    DMUS_STREAM_MIDI_CAPTURE,
    DMUS_STREAM_WAVE_SINK
} DMUS_STREAM_TYPE;

/*****************************************************************************
 * ISynthSinkDMus
 *****************************************************************************
 * Interface for synth wave out.
 */
DECLARE_INTERFACE_(ISynthSinkDMus,IMXF)
{
    DEFINE_ABSTRACT_UNKNOWN()   //  For IUnknown

    DEFINE_ABSTRACT_MXF()       //  For IMXF

    //  For ISynthSinkDMus
    STDMETHOD_(void,Render)
    (   THIS_
        _In_    PBYTE       pBuffer,
        _In_    DWORD       dwLength,
        _In_    LONGLONG    llPosition
    )   PURE;

    STDMETHOD_(NTSTATUS,SyncToMaster)
    (   THIS_
        _In_    REFERENCE_TIME  rfTime,
        _In_    BOOL            fStart
    )   PURE;

    STDMETHOD_(NTSTATUS,SampleToRefTime)
    (   THIS_
        _In_    LONGLONG         llSampleTime,
        _Out_   REFERENCE_TIME * prfTime
    )   PURE;

    STDMETHOD_(NTSTATUS,RefTimeToSample)
    (   THIS_
        _In_    REFERENCE_TIME  rfTime,
        _Out_   LONGLONG *      pllSampleTime
    )   PURE;
};

typedef ISynthSinkDMus * PSYNTHSINKDMUS;

#define IMP_ISynthSinkDMus\
    IMP_IMXF;\
    STDMETHODIMP_(void) Render\
    (   _In_    PBYTE       pBuffer,\
        _In_    DWORD       dwLength,\
        _In_    LONGLONG    llPosition\
    );\
    STDMETHODIMP_(NTSTATUS) SyncToMaster\
    (   _In_    REFERENCE_TIME  rfTime,\
        _In_    BOOL            fStart\
    );\
    STDMETHODIMP_(NTSTATUS) SampleToRefTime\
    (   _In_    LONGLONG         llSampleTime,\
        _Out_   REFERENCE_TIME * prfTime\
    );\
    STDMETHODIMP_(NTSTATUS) RefTimeToSample\
    (   _In_    REFERENCE_TIME  rfTime,\
        _Out_   LONGLONG *      pllSampleTime\
    )


/*****************************************************************************
 * IMasterClock
 *****************************************************************************
 * Master clock for MXF graph
 */
DECLARE_INTERFACE_(IMasterClock,IUnknown)
{
    DEFINE_ABSTRACT_UNKNOWN()   //  For IUnknown

    STDMETHOD_(NTSTATUS,GetTime)
    (   THIS_
        _Out_   REFERENCE_TIME  * pTime
    )   PURE;
};

typedef IMasterClock *PMASTERCLOCK;

#define IMP_IMasterClock               \
    STDMETHODIMP_(NTSTATUS) GetTime               \
    (   THIS_                          \
        _Out_   REFERENCE_TIME * pTime \
    );                                 \


#if (NTDDI_VERSION < NTDDI_WINXP)
/*****************************************************************************
 * IPositionNotify
 *****************************************************************************
 * Byte position notify for MXF graph
 */
DECLARE_INTERFACE_(IPositionNotify,IUnknown)    
{
    STDMETHOD_(void,PositionNotify)
    (   THIS_ 
        _In_    ULONGLONG   bytePosition
    )   PURE;
};

typedef IPositionNotify *PPOSITIONNOTIFY;

#define IMP_IPositionNotify                 \
    STDMETHODIMP_(void) PositionNotify      \
    (   THIS_                               \
        _In_    ULONGLONG   bytePosition    \
    );                                      \

#endif

/*****************************************************************************
 * IMiniportDMus
 *****************************************************************************
 * Interface for DMusic miniports.
 */
DECLARE_INTERFACE_(IMiniportDMus,IMiniport)
{
    DEFINE_ABSTRACT_UNKNOWN()   //  For IUnknown

    DEFINE_ABSTRACT_MINIPORT()  //  For IMiniport

    //  For IMiniportDMus
    STDMETHOD_(NTSTATUS,Init)
    (   THIS_
        _In_opt_ PUNKNOWN        UnknownAdapter,
        _In_     PRESOURCELIST   ResourceList,
        _In_     PPORTDMUS       Port,
        _Out_    PSERVICEGROUP * ServiceGroup
    )   PURE;

    STDMETHOD_(void,Service)
    (   THIS
    )   PURE;

    STDMETHOD_(NTSTATUS,NewStream)
    (   THIS_
        _Out_    PMXF                  * MXF,
        _In_opt_ PUNKNOWN                OuterUnknown,
        _When_((PoolType & NonPagedPoolMustSucceed) != 0,
           __drv_reportError("Must succeed pool allocations are forbidden. "
                 "Allocation failures cause a system crash"))
        _In_     POOL_TYPE               PoolType,
        _In_     ULONG                   PinID,
        _In_     DMUS_STREAM_TYPE        StreamType,
        _In_     PKSDATAFORMAT           DataFormat,
        _Out_    PSERVICEGROUP         * ServiceGroup,
        _In_     PAllocatorMXF           AllocatorMXF,
        _In_     PMASTERCLOCK            MasterClock,
        _Out_    PULONGLONG              SchedulePreFetch
    )   PURE;
};

typedef IMiniportDMus *PMINIPORTDMUS;

#define IMP_IMiniportDMus\
    IMP_IMiniport;\
    STDMETHODIMP_(NTSTATUS) Init\
    (   _In_opt_ PUNKNOWN        UnknownAdapter,\
	_In_     PRESOURCELIST   ResourceList,\
	_In_     PPORTDMUS       Port,\
	_Out_    PSERVICEGROUP * ServiceGroup\
    );\
    STDMETHODIMP_(void) Service\
    (   void\
    );\
    STDMETHODIMP_(NTSTATUS) NewStream\
    (   _Out_    PMXF                  * MXF,                        \
	_In_opt_ PUNKNOWN                OuterUnknown    OPTIONAL,   \
	_When_((PoolType & NonPagedPoolMustSucceed) != 0,            \
	    __drv_reportError("Must succeed pool allocations are forbidden. " \
	        "Allocation failures cause a system crash"))         \
	_In_     POOL_TYPE               PoolType,                   \
	_In_     ULONG                   PinID,                      \
	_In_     DMUS_STREAM_TYPE        StreamType,                 \
	_In_     PKSDATAFORMAT           DataFormat,                 \
	_Out_    PSERVICEGROUP         * ServiceGroup,               \
	_In_     PAllocatorMXF           AllocatorMXF,               \
	_In_     PMASTERCLOCK            MasterClock,                \
	_Out_    PULONGLONG              SchedulePreFetch            \
    );

DEFINE_GUID(GUID_DMUS_PROP_GM_Hardware, 0x178f2f24, 0xc364, 0x11d1, 0xa7, 0x60, 0x00, 0x00, 0xf8, 0x75, 0xac, 0x12);
DEFINE_GUID(GUID_DMUS_PROP_GS_Hardware, 0x178f2f25, 0xc364, 0x11d1, 0xa7, 0x60, 0x00, 0x00, 0xf8, 0x75, 0xac, 0x12);
DEFINE_GUID(GUID_DMUS_PROP_XG_Hardware, 0x178f2f26, 0xc364, 0x11d1, 0xa7, 0x60, 0x00, 0x00, 0xf8, 0x75, 0xac, 0x12);
DEFINE_GUID(GUID_DMUS_PROP_XG_Capable,  0x6496aba1, 0x61b0, 0x11d2, 0xaf, 0xa6, 0x00, 0xaa, 0x00, 0x24, 0xd8, 0xb6);
DEFINE_GUID(GUID_DMUS_PROP_GS_Capable,  0x6496aba2, 0x61b0, 0x11d2, 0xaf, 0xa6, 0x00, 0xaa, 0x00, 0x24, 0xd8, 0xb6);
DEFINE_GUID(GUID_DMUS_PROP_DLS1,        0x178f2f27, 0xc364, 0x11d1, 0xa7, 0x60, 0x00, 0x00, 0xf8, 0x75, 0xac, 0x12);
DEFINE_GUID(GUID_DMUS_PROP_WavesReverb, 0x04cb5622, 0x32e5, 0x11d2, 0xaf, 0xa6, 0x00, 0xaa, 0x00, 0x24, 0xd8, 0xb6);
DEFINE_GUID(GUID_DMUS_PROP_Effects,     0xcda8d611, 0x684a, 0x11d2, 0x87, 0x1e, 0x00, 0x60, 0x08, 0x93, 0xb1, 0xbd);

#ifndef DMUS_EFFECT_NONE
#define DMUS_EFFECT_NONE    0x00000000
#endif

#ifndef DMUS_EFFECT_REVERB
#define DMUS_EFFECT_REVERB  0x00000001
#endif

#ifndef DMUS_EFFECT_CHORUS
#define DMUS_EFFECT_CHORUS  0x00000002
#endif


#endif  /* _DMUSICKS_ */
