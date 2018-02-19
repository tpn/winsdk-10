/*****************************************************************************
 * portcls.h - WDM Streaming port class driver
 *****************************************************************************
 * Copyright (c) Microsoft Corporation. All rights reserved.
 */

#ifndef _PORTCLS_H_
#define _PORTCLS_H_

#ifdef __cplusplus
// WDM.H does not play well with C++.
extern "C"
{
#include <wdm.h>
}
#else
#include <wdm.h>
#endif

#ifndef IRP_MN_FILTER_RESOURCE_REQUIREMENTS
#define IRP_MN_FILTER_RESOURCE_REQUIREMENTS 0x0D
#endif

#include <windef.h>
#define NOBITMAP
#include <mmreg.h>
#undef NOBITMAP
#include <ks.h>
#include <ksmedia.h>
#include <punknown.h>

#if (NTDDI_VERSION >= NTDDI_WINXP)
#include <drmk.h>
#endif

#if defined(PC_NO_IMPORTS)
#define PORTCLASSAPI EXTERN_C
#else
#define PORTCLASSAPI EXTERN_C __declspec(dllimport)
#endif

#define _100NS_UNITS_PER_SECOND 10000000L
#define PORT_CLASS_DEVICE_EXTENSION_SIZE (64*sizeof(ULONG_PTR))

#if (NTDDI_VERSION >= NTDDI_WINXP)
//
//  N.B.: If you are having problems building your driver,
//        #define PC_OLD_NAMES in your sources file.
//        This flag is no longer turned on by default.
//
//#ifndef PC_NEW_NAMES
//#define PC_OLD_NAMES
//#endif
#elif (NTDDI_VERSION >= NTDDI_WIN2K)
#ifndef PC_NEW_NAMES
#define PC_OLD_NAMES
#endif
#endif

#define IID_IAdapterPowerManagment IID_IAdapterPowerManagement
#define IID_IAdapterPowerManagment2 IID_IAdapterPowerManagement2
#define PADAPTERPOWERMANAGMENT PADAPTERPOWERMANAGEMENT
#define PADAPTERPOWERMANAGMENT2 PADAPTERPOWERMANAGEMENT2

/*****************************************************************************
 * Interface identifiers.
 */

DEFINE_GUID(IID_IMiniport,
0xb4c90a24L, 0x5791, 0x11d0, 0x86, 0xf9, 0x00, 0xa0, 0xc9, 0x11, 0xb5, 0x44);
DEFINE_GUID(IID_IPort,
0xb4c90a25L, 0x5791, 0x11d0, 0x86, 0xf9, 0x00, 0xa0, 0xc9, 0x11, 0xb5, 0x44);
DEFINE_GUID(IID_IResourceList,
0x22C6AC60L, 0x851B, 0x11D0, 0x9A, 0x7F, 0x00, 0xAA, 0x00, 0x38, 0xAC, 0xFE);

#if (NTDDI_VERSION >= NTDDI_WINXP)
DEFINE_GUID(IID_IMusicTechnology,
0x80396C3CL, 0xCBCB, 0x409B, 0x9F, 0x65, 0x4F, 0x1E, 0x74, 0x67, 0xCD, 0xAF);
#endif

DEFINE_GUID(IID_IDmaChannel,
0x22C6AC61L, 0x851B, 0x11D0, 0x9A, 0x7F, 0x00, 0xAA, 0x00, 0x38, 0xAC, 0xFE);

//
// Take out IDmaChannelSlave for compilations.
//
#if (NTDDI_VERSION < NTDDI_VISTA)
DEFINE_GUID(IID_IDmaChannelSlave,
0x22C6AC62L, 0x851B, 0x11D0, 0x9A, 0x7F, 0x00, 0xAA, 0x00, 0x38, 0xAC, 0xFE);
#endif

DEFINE_GUID(IID_IInterruptSync,
0x22C6AC63L, 0x851B, 0x11D0, 0x9A, 0x7F, 0x00, 0xAA, 0x00, 0x38, 0xAC, 0xFE);
DEFINE_GUID(IID_IServiceSink,
0x22C6AC64L, 0x851B, 0x11D0, 0x9A, 0x7F, 0x00, 0xAA, 0x00, 0x38, 0xAC, 0xFE);
DEFINE_GUID(IID_IServiceGroup,
0x22C6AC65L, 0x851B, 0x11D0, 0x9A, 0x7F, 0x00, 0xAA, 0x00, 0x38, 0xAC, 0xFE);
DEFINE_GUID(IID_IRegistryKey,
0xE8DA4302l, 0xF304, 0x11D0, 0x95, 0x8B, 0x00, 0xC0, 0x4F, 0xB9, 0x25, 0xD3);
DEFINE_GUID(IID_IPortMidi,
0xb4c90a40L, 0x5791, 0x11d0, 0x86, 0xf9, 0x00, 0xa0, 0xc9, 0x11, 0xb5, 0x44);
DEFINE_GUID(IID_IMiniportMidi,
0xb4c90a41L, 0x5791, 0x11d0, 0x86, 0xf9, 0x00, 0xa0, 0xc9, 0x11, 0xb5, 0x44);
DEFINE_GUID(IID_IMiniportMidiStream,
0xb4c90a42L, 0x5791, 0x11d0, 0x86, 0xf9, 0x00, 0xa0, 0xc9, 0x11, 0xb5, 0x44);
DEFINE_GUID(IID_IPortTopology,
0xb4c90a30L, 0x5791, 0x11d0, 0x86, 0xf9, 0x00, 0xa0, 0xc9, 0x11, 0xb5, 0x44);
DEFINE_GUID(IID_IMiniportTopology,
0xb4c90a31L, 0x5791, 0x11d0, 0x86, 0xf9, 0x00, 0xa0, 0xc9, 0x11, 0xb5, 0x44);
DEFINE_GUID(IID_IPortWaveCyclic,
0xb4c90a26L, 0x5791, 0x11d0, 0x86, 0xf9, 0x00, 0xa0, 0xc9, 0x11, 0xb5, 0x44);
DEFINE_GUID(IID_IMiniportWaveCyclic,
0xb4c90a27L, 0x5791, 0x11d0, 0x86, 0xf9, 0x00, 0xa0, 0xc9, 0x11, 0xb5, 0x44);
DEFINE_GUID(IID_IMiniportWaveCyclicStream,
0xb4c90a28L, 0x5791, 0x11d0, 0x86, 0xf9, 0x00, 0xa0, 0xc9, 0x11, 0xb5, 0x44);
DEFINE_GUID(IID_IPortWavePci,
0xb4c90a50L, 0x5791, 0x11d0, 0x86, 0xf9, 0x00, 0xa0, 0xc9, 0x11, 0xb5, 0x44);
DEFINE_GUID(IID_IPortWavePciStream,
0xb4c90a51L, 0x5791, 0x11d0, 0x86, 0xf9, 0x00, 0xa0, 0xc9, 0x11, 0xb5, 0x44);
DEFINE_GUID(IID_IMiniportWavePci,
0xb4c90a52L, 0x5791, 0x11d0, 0x86, 0xf9, 0x00, 0xa0, 0xc9, 0x11, 0xb5, 0x44);
DEFINE_GUID(IID_IMiniportWavePciStream,
0xb4c90a53L, 0x5791, 0x11d0, 0x86, 0xf9, 0x00, 0xa0, 0xc9, 0x11, 0xb5, 0x44);

#if (NTDDI_VERSION >= NTDDI_VISTA)
DEFINE_GUID(IID_IPortWaveRT,
0x339ff909, 0x68a9, 0x4310, 0xb0, 0x9b, 0x27, 0x4e, 0x96, 0xee, 0x4c, 0xbd);
DEFINE_GUID(IID_IPortWaveRTStream,
0x1809ce5a, 0x64bc, 0x4e62, 0xbd, 0x7d, 0x95, 0xbc, 0xe4, 0x3d, 0xe3, 0x93);
DEFINE_GUID(IID_IMiniportWaveRT,
0xf9fc4d6, 0x6061, 0x4f3c, 0xb1, 0xfc, 0x7, 0x5e, 0x35, 0xf7, 0x96, 0xa);
DEFINE_GUID(IID_IMiniportWaveRTStream,
0xac9ab, 0xfaab, 0x4f3d, 0x94, 0x55, 0x6f, 0xf8, 0x30, 0x6a, 0x74, 0xa0);
DEFINE_GUID(IID_IMiniportWaveRTStreamNotification,
0x23759128, 0x96f1, 0x423b, 0xab, 0x4d, 0x81, 0x63, 0x5b, 0xcf, 0x8c, 0xa1);

// Need compile only for post vista case
// Not sure what NTDDI_xxxx for Windows 7 
DEFINE_GUID(IID_IPortWMIRegistration, 
0xd80b18e7, 0x804c, 0x4e1e, 0x82, 0xd3, 0x24, 0x61, 0xec, 0x6, 0xe7, 0xc7);

// {C3D5E80C-7F55-40c5-88B2-6210D0CB2B59}
DEFINE_GUID(IID_IPortClsSubdeviceEx,  
0xc3d5e80c, 0x7f55, 0x40c5, 0x88, 0xb2, 0x62, 0x10, 0xd0, 0xcb, 0x2b, 0x59);

// {47BA0351-BC4B-4869-8134-B74FE17852D8}
DEFINE_GUID(IID_IPortClsPower, 
0x47ba0351, 0xbc4b, 0x4869, 0x81, 0x34, 0xb7, 0x4f, 0xe1, 0x78, 0x52, 0xd8);

// {E057C351-0430-4DBC-B172-C711D40A2373}
DEFINE_GUID(IID_IPortClsRuntimePower,
0xe057c351, 0x430, 0x4dbc, 0xb1, 0x72, 0xc7, 0x11, 0xd4, 0xa, 0x23, 0x73);

// {29CC9AB1-E89D-413c-B6B2-F6D50005D063}
DEFINE_GUID(IID_IPinName, 
0x29cc9ab1, 0xe89d, 0x413c, 0xb6, 0xb2, 0xf6, 0xd5, 0x0, 0x5, 0xd0, 0x63);

// {80EF6667-E8B1-4252-AB09-8F6D5EBBD19F}
DEFINE_GUID(IID_IPortClsEtwHelper, 
0x80ef6667, 0xe8b1, 0x4252, 0xab, 0x9, 0x8f, 0x6d, 0x5e, 0xbb, 0xd1, 0x9f);

#endif

#if (NTDDI_VERSION >= NTDDI_THRESHOLD)

// {CD8E756A-5FC7-4624-984B-2AF02925B91F}
DEFINE_GUID(IID_IMiniportWaveRTInputStream,
0xcd8e756a, 0x5fc7, 0x4624, 0x98, 0x4b, 0x2a, 0xf0, 0x29, 0x25, 0xb9, 0x1f);

// {831FC7BC-6347-44BC-B47B-C0C657B5BF73}
DEFINE_GUID(IID_IMiniportWaveRTOutputStream,
0x831fc7bc, 0x6347, 0x44bc, 0xb4, 0x7b, 0xc0, 0xc6, 0x57, 0xb5, 0xbf, 0x73);

// {e1cd9915-cab1-4103-bb2f-7dc09c9be942}
DEFINE_GUID(IID_IPortClsStreamResourceManager,
0xe1cd9915, 0xcab1, 0x4103, 0xbb, 0x2f, 0x7d, 0xc0, 0x9c, 0x9b, 0xe9, 0x42);

// {0d500bae-d565-469d-a0e2-f283760d7148}
DEFINE_GUID(IID_IPortClsStreamResourceManager2,
0x0d500bae, 0xd565, 0x469d, 0xa0, 0xe2, 0xf2, 0x83, 0x76, 0x0d, 0x71, 0x48);

// {706f2368-4086-47f5-b913-57b76eed1a32}
DEFINE_GUID(IID_IAdapterPnpManagement,
0x706f2368L, 0x4086, 0x47f5, 0xb9, 0x13, 0x57, 0xb7, 0x6e, 0xed, 0x1a, 0x32);

// {6b735365-9487-464c-93e3-fa2c6391d5a4}
DEFINE_GUID(IID_IMiniportPnpNotify,
0x6b735365L, 0x9487, 0x464c, 0x93, 0xe3, 0xfa, 0x2c, 0x63, 0x91, 0xd5, 0xa4);

// {0485791b-17f5-4b73-902a-20344860b9ca}
DEFINE_GUID(IID_IPortClsPnp, 
0x0485791b, 0x17f5, 0x4b73, 0x90, 0x2a, 0x20, 0x34, 0x48, 0x60, 0xb9, 0xca);

#endif

DEFINE_GUID(IID_IAdapterPowerManagement,
0x793417D0L, 0x35FE, 0x11D1, 0xAD, 0x08, 0x00, 0xA0, 0xC9, 0x0A, 0xB1, 0xB0);
DEFINE_GUID(IID_IAdapterPowerManagement2, 
0xE0F92E5DL, 0x67F5, 0x48EE, 0xB5, 0x7A, 0x7D, 0x1E, 0x90, 0xC5, 0xF4, 0x3D);
DEFINE_GUID(IID_IAdapterPowerManagement3,
0xA8C7303EL, 0xF80C, 0x4BC9, 0xB2, 0xE3, 0xFB, 0x2D, 0x08, 0xBE, 0x92, 0x0F);
DEFINE_GUID(IID_IPowerNotify,
0x3DD648B8L, 0x969F, 0x11D1, 0x95, 0xA9, 0x00, 0xC0, 0x4F, 0xB9, 0x25, 0xD3);
DEFINE_GUID(IID_IWaveCyclicClock,
0xdec1ec78L, 0x419a, 0x11d1, 0xad, 0x09, 0x00, 0xc0, 0x4f, 0xb9, 0x1b, 0xc4);
DEFINE_GUID(IID_IWavePciClock,
0xd5d7a256L, 0x5d10, 0x11d1, 0xad, 0xae, 0x00, 0xc0, 0x4f, 0xb9, 0x1b, 0xc4);
DEFINE_GUID(IID_IPortEvents,
0xA80F29C4L, 0x5498, 0x11D2, 0x95, 0xD9, 0x00, 0xC0, 0x4F, 0xB9, 0x25, 0xD3);

#if (NTDDI_VERSION >= NTDDI_WINXP)
DEFINE_GUID(IID_IDrmPort,
0x286D3DF8L, 0xCA22, 0x4E2E, 0xB9, 0xBC, 0x20, 0xB4, 0xF0, 0xE2, 0x01, 0xCE);
DEFINE_GUID(IID_IDrmPort2,
0x1ACCE59CL, 0x7311, 0x4B6B, 0x9F, 0xBA, 0xCC, 0x3B, 0xA5, 0x9A, 0xCD, 0xCE);
DEFINE_GUID(IID_IPortClsVersion,
0x7D89A7BBL, 0x869B, 0x4567, 0x8D, 0xBE, 0x1E, 0x16, 0x8C, 0xC8, 0x53, 0xDE);
DEFINE_GUID(IID_IPinCount,
0x5dadb7dcL, 0xa2cb, 0x4540, 0xa4, 0xa8, 0x42, 0x5e, 0xe4, 0xae, 0x90, 0x51);
DEFINE_GUID(IID_IPreFetchOffset,
0x7000f480L, 0xed44, 0x4e8b, 0xb3, 0x8a, 0x41, 0x2f, 0x8d, 0x7a, 0x50, 0x4d);
#endif

#if (NTDDI_VERSION >= NTDDI_WS03)
DEFINE_GUID(IID_IUnregisterSubdevice,
0x16738177L, 0xe199, 0x41f9, 0x9a, 0x87, 0xab, 0xb2, 0xa5, 0x43, 0x2f, 0x21);
DEFINE_GUID(IID_IUnregisterPhysicalConnection,
0x6c38e231L, 0x2a0d, 0x428d, 0x81, 0xf8, 0x07, 0xcc, 0x42, 0x8b, 0xb9, 0xa4);
#endif


/*****************************************************************************
 * Class identifiers.
 */

DEFINE_GUID(CLSID_PortMidi,
0xb4c90a43L, 0x5791, 0x11d0, 0x86, 0xf9, 0x00, 0xa0, 0xc9, 0x11, 0xb5, 0x44);
DEFINE_GUID(CLSID_PortTopology,
0xb4c90a32L, 0x5791, 0x11d0, 0x86, 0xf9, 0x00, 0xa0, 0xc9, 0x11, 0xb5, 0x44);
DEFINE_GUID(CLSID_PortWaveCyclic,
0xb4c90a2aL, 0x5791, 0x11d0, 0x86, 0xf9, 0x00, 0xa0, 0xc9, 0x11, 0xb5, 0x44);
DEFINE_GUID(CLSID_PortWavePci,
0xb4c90a54L, 0x5791, 0x11d0, 0x86, 0xf9, 0x00, 0xa0, 0xc9, 0x11, 0xb5, 0x44);

#if (NTDDI_VERSION >= NTDDI_VISTA)
DEFINE_GUID(CLSID_PortWaveRT,
0xcc9be57a, 0xeb9e, 0x42b4, 0x94, 0xfc, 0xc, 0xad, 0x3d, 0xbc, 0xe7, 0xfa);
#endif

DEFINE_GUID(CLSID_MiniportDriverFmSynth,
0xb4c90ae0L, 0x5791, 0x11d0, 0x86, 0xf9, 0x00, 0xa0, 0xc9, 0x11, 0xb5, 0x44);
DEFINE_GUID(CLSID_MiniportDriverUart,
0xb4c90ae1L, 0x5791, 0x11d0, 0x86, 0xf9, 0x00, 0xa0, 0xc9, 0x11, 0xb5, 0x44);
DEFINE_GUID(CLSID_MiniportDriverFmSynthWithVol,
0xe5a3c139L, 0xf0f2, 0x11d1, 0x81, 0xaf, 0x00, 0x60, 0x08, 0x33, 0x16, 0xc1);


/*****************************************************************************
 * Interfaces
 */

#if !defined(DEFINE_ABSTRACT_UNKNOWN)

#define DEFINE_ABSTRACT_UNKNOWN()                               \
    STDMETHOD_(NTSTATUS, QueryInterface)(THIS_                  \
        _In_         REFIID InterfaceId,                        \
        _COM_Outptr_ PVOID* Interface                           \
        ) PURE;                                                 \
    STDMETHOD_(ULONG,AddRef)(THIS) PURE;                        \
    STDMETHOD_(ULONG,Release)(THIS) PURE;

#endif //!defined(DEFINE_ABSTRACT_UNKNOWN)

#if !defined(DEFINE_ABSTRACT_PORT)

#ifdef PC_OLD_NAMES

#define DEFINE_ABSTRACT_PORT()                                      \
    STDMETHOD_(NTSTATUS,Init)                                       \
    (   THIS_                                                       \
        _In_      PVOID           DeviceObject,                     \
        _In_opt_  PVOID           Irp,                              \
        _In_      PUNKNOWN        UnknownMiniport,                  \
        _In_opt_  PUNKNOWN        UnknownAdapter,                   \
        _In_      PRESOURCELIST   ResourceList                      \
    )   PURE;                                                       \
    STDMETHOD_(NTSTATUS,GetDeviceProperty)                          \
    (   THIS_                                                       \
        _In_      DEVICE_REGISTRY_PROPERTY    DeviceProperty,       \
        _In_      ULONG                       BufferLength,         \
        _Out_     PVOID                       PropertyBuffer,       \
        _Out_     PULONG                      ResultLength          \
    )   PURE;                                                       \
    STDMETHOD_(NTSTATUS,NewRegistryKey)                             \
    (   THIS_                                                       \
        _Out_     PREGISTRYKEY *      OutRegistryKey,               \
        _In_opt_  PUNKNOWN            OuterUnknown,                 \
        _In_      ULONG               RegistryKeyType,              \
        _In_      ACCESS_MASK         DesiredAccess,                \
        _In_opt_  POBJECT_ATTRIBUTES  ObjectAttributes,             \
        _In_opt_  ULONG               CreateOptions,                \
        _Out_opt_ PULONG              Disposition                   \
    )   PURE;

#else   //  !PC_OLD_NAMES

#define DEFINE_ABSTRACT_PORT()                                      \
    STDMETHOD_(NTSTATUS,Init)                                       \
    (   THIS_                                                       \
        _In_      PDEVICE_OBJECT  DeviceObject,                     \
        _In_opt_  PIRP            Irp,                              \
        _In_      PUNKNOWN        UnknownMiniport,                  \
        _In_opt_  PUNKNOWN        UnknownAdapter,                   \
        _In_      PRESOURCELIST   ResourceList                      \
    )   PURE;                                                       \
    STDMETHOD_(NTSTATUS,GetDeviceProperty)                          \
    (   THIS_                                                       \
        _In_      DEVICE_REGISTRY_PROPERTY    DeviceProperty,       \
        _In_      ULONG                       BufferLength,         \
        _Out_     PVOID                       PropertyBuffer,       \
        _Out_     PULONG                      ResultLength          \
    )   PURE;                                                       \
    STDMETHOD_(NTSTATUS,NewRegistryKey)                             \
    (   THIS_                                                       \
        _Out_     PREGISTRYKEY *      OutRegistryKey,               \
        _In_opt_  PUNKNOWN            OuterUnknown,                 \
        _In_      ULONG               RegistryKeyType,              \
        _In_      ACCESS_MASK         DesiredAccess,                \
        _In_opt_  POBJECT_ATTRIBUTES  ObjectAttributes,             \
        _In_opt_  ULONG               CreateOptions,                \
        _Out_opt_ PULONG              Disposition                   \
    )   PURE;

#endif //   !PC_OLD_NAMES

#endif //!defined(DEFINE_ABSTRACT_PORT)


#if !defined(DEFINE_ABSTRACT_MINIPORT)

#define DEFINE_ABSTRACT_MINIPORT()                              \
    STDMETHOD_(NTSTATUS,GetDescription)                         \
    (   THIS_                                                   \
        _Out_     PPCFILTER_DESCRIPTOR *  Description           \
    )   PURE;                                                   \
    STDMETHOD_(NTSTATUS,DataRangeIntersection)                  \
    (   THIS_                                                   \
        _In_      ULONG           PinId,                        \
        _In_      PKSDATARANGE    DataRange,                    \
        _In_      PKSDATARANGE    MatchingDataRange,            \
        _In_      ULONG           OutputBufferLength,           \
        _Out_writes_bytes_to_opt_(OutputBufferLength, *ResultantFormatLength) \
                  PVOID           ResultantFormat,              \
        _Out_     PULONG          ResultantFormatLength         \
    )   PURE;

#endif //!defined(DEFINE_ABSTRACT_MINIPORT)

#if !defined(DEFINE_ABSTRACT_DMACHANNEL)

#define DEFINE_ABSTRACT_DMACHANNEL()                            \
    STDMETHOD_(NTSTATUS,AllocateBuffer)                         \
    (   THIS_                                                   \
        _In_      ULONG               BufferSize,               \
        _In_opt_  PPHYSICAL_ADDRESS   PhysicalAddressConstraint \
    )   PURE;                                                   \
    STDMETHOD_(void,FreeBuffer)                                 \
    (   THIS                                                    \
    )   PURE;                                                   \
    STDMETHOD_(ULONG,TransferCount)                             \
    (   THIS                                                    \
    )   PURE;                                                   \
    STDMETHOD_(ULONG,MaximumBufferSize)                         \
    (   THIS                                                    \
    )   PURE;                                                   \
    STDMETHOD_(ULONG,AllocatedBufferSize)                       \
    (   THIS                                                    \
    )   PURE;                                                   \
    STDMETHOD_(ULONG,BufferSize)                                \
    (   THIS                                                    \
    )   PURE;                                                   \
    STDMETHOD_(void,SetBufferSize)                              \
    (   THIS_                                                   \
        _In_      ULONG   BufferSize                            \
    )   PURE;                                                   \
    STDMETHOD_(PVOID,SystemAddress)                             \
    (   THIS                                                    \
    )   PURE;                                                   \
    STDMETHOD_(PHYSICAL_ADDRESS,PhysicalAddress)                \
    (   THIS                                                    \
    )   PURE;                                                   \
    STDMETHOD_(PADAPTER_OBJECT,GetAdapterObject)                \
    (   THIS                                                    \
    )   PURE;                                                   \
    STDMETHOD_(void,CopyTo)                                     \
    (   THIS_                                                   \
        _Inout_updates_bytes_(ByteCount)   PVOID   Destination,        \
        _In_reads_bytes_(ByteCount)      PVOID   Source,             \
        _In_                        ULONG   ByteCount           \
    )   PURE;                                                   \
    STDMETHOD_(void,CopyFrom)                                   \
    (   THIS_                                                   \
        _Inout_updates_bytes_(ByteCount)   PVOID   Destination,        \
        _In_reads_bytes_(ByteCount)      PVOID   Source,             \
        _In_                        ULONG   ByteCount           \
    )   PURE;

#endif //!defined(DEFINE_ABSTRACT_DMACHANNEL)

//
// Take out definitions of IDmaChannelSlave.
//
#if (NTDDI_VERSION < NTDDI_VISTA)
#if !defined(DEFINE_ABSTRACT_DMACHANNELSLAVE)

#define DEFINE_ABSTRACT_DMACHANNELSLAVE()                       \
    STDMETHOD_(NTSTATUS,Start)                                  \
    (   THIS_                                                   \
        _In_      ULONG               MapSize,                  \
        _In_      BOOLEAN             WriteToDevice             \
    )   PURE;                                                   \
    STDMETHOD_(NTSTATUS,Stop)                                   \
    (   THIS                                                    \
    )   PURE;                                                   \
    STDMETHOD_(ULONG,ReadCounter)                               \
    (   THIS                                                    \
    )   PURE;                                                   \
    STDMETHOD_(NTSTATUS,WaitForTC)                              \
    (   THIS_                                                   \
        ULONG Timeout                                           \
    )   PURE;

#endif //!defined(DEFINE_ABSTRACT_DMACHANNELSLAVE)
#endif

#if !defined(DEFINE_ABSTRACT_DRMPORT)

#define DEFINE_ABSTRACT_DRMPORT()                              \
    STDMETHOD_(NTSTATUS,CreateContentMixed)                    \
    (   THIS_                                                  \
        _In_  PULONG      paContentId,                         \
        _In_  ULONG       cContentId,                          \
        _Out_ PULONG      pMixedContentId                      \
    )   PURE;                                                  \
    STDMETHOD_(NTSTATUS,DestroyContent)                        \
    (   THIS_                                                  \
        _In_ ULONG        ContentId                            \
    )   PURE;                                                  \
    STDMETHOD_(NTSTATUS,ForwardContentToFileObject)            \
    (   THIS_                                                  \
        _In_ ULONG        ContentId,                           \
        _In_ PFILE_OBJECT FileObject                           \
    )   PURE;                                                  \
    STDMETHOD_(NTSTATUS,ForwardContentToInterface)             \
    (   THIS_                                                  \
        _In_ ULONG        ContentId,                           \
        _In_ PUNKNOWN     pUnknown,                            \
        _In_ ULONG        NumMethods                           \
    )   PURE;                                                  \
    STDMETHOD_(NTSTATUS,GetContentRights)                      \
    (   THIS_                                                  \
        _In_  ULONG       ContentId,                           \
        _Out_ PDRMRIGHTS  DrmRights                            \
    )   PURE;

#endif //!defined(DEFINE_ABSTRACT_DRMPORT)

#if !defined(DEFINE_ABSTRACT_MINIPORTWAVERTSTREAM)

#define DEFINE_ABSTRACT_MINIPORTWAVERTSTREAM()                 \
    STDMETHOD_(NTSTATUS,SetFormat)                             \
    (   THIS_                                                  \
        _In_      PKSDATAFORMAT   DataFormat                   \
    )   PURE;                                                  \
    STDMETHOD_(NTSTATUS,SetState)                              \
    (   THIS_                                                  \
        _In_      KSSTATE         State                        \
    )   PURE;                                                  \
    STDMETHOD_(NTSTATUS,GetPosition)                           \
    (   THIS_                                                  \
        _Out_     PKSAUDIO_POSITION   Position                 \
    )   PURE;                                                  \
    STDMETHOD_(NTSTATUS,AllocateAudioBuffer)                   \
    (   THIS_                                                  \
        _In_  ULONG                   RequestedSize,           \
        _Out_ PMDL                    *AudioBufferMdl,         \
        _Out_ ULONG                   *ActualSize,             \
        _Out_ ULONG                   *OffsetFromFirstPage,    \
        _Out_ MEMORY_CACHING_TYPE     *CacheType               \
    ) PURE;                                                    \
    STDMETHOD_(VOID,FreeAudioBuffer)                           \
    (   THIS_                                                  \
        _In_opt_ PMDL                    AudioBufferMdl,          \
        _In_     ULONG                   BufferSize               \
    ) PURE;                                                    \
    STDMETHOD_(VOID,GetHWLatency)                              \
    (   THIS_                                                  \
        _Out_ KSRTAUDIO_HWLATENCY     *hwLatency               \
    ) PURE;                                                    \
    STDMETHOD_(NTSTATUS,GetPositionRegister)                   \
    (   THIS_                                                  \
        _Out_ KSRTAUDIO_HWREGISTER    *Register                \
    ) PURE;                                                    \
    STDMETHOD_(NTSTATUS,GetClockRegister)                      \
    (   THIS_                                                  \
        _Out_ KSRTAUDIO_HWREGISTER    *Register                \
    ) PURE;

#endif //!defined(DEFINE_ABSTRACT_MINIPORTWAVERTSTREAM)

#if !defined(DEFINE_ABSTRACT_MINIPORTWAVERTSTREAMNOTIFICATION)

#define DEFINE_ABSTRACT_MINIPORTWAVERTSTREAMNOTIFICATION()      \
    STDMETHOD_(NTSTATUS, AllocateBufferWithNotification)        \
    (                                                           \
        _In_      ULONG                   NotificationCount,    \
        _In_      ULONG                   RequestedSize,        \
        _Out_     PMDL                    *AudioBufferMdl,      \
        _Out_     ULONG                   *ActualSize,          \
        _Out_     ULONG                   *OffsetFromFirstPage, \
        _Out_     MEMORY_CACHING_TYPE     *CacheType            \
    ) PURE;                                                     \
    STDMETHOD_(VOID, FreeBufferWithNotification)                \
    (                                                           \
        _In_      PMDL                    AudioBufferMdl,       \
        _In_      ULONG                   BufferSize            \
    ) PURE;                                                     \
    STDMETHOD_(NTSTATUS, RegisterNotificationEvent)             \
    (                                                           \
        _In_      PKEVENT                 NotificationEvent     \
    ) PURE;                                                     \
    STDMETHOD_(NTSTATUS, UnregisterNotificationEvent)           \
    (                                                           \
        _In_      PKEVENT                 NotificationEvent     \
    ) PURE;

#endif // !defined(DEFINE_ABSTRACT_MINIPORTWAVERTSTREAMNOTIFICATION)

#if (NTDDI_VERSION >= NTDDI_THRESHOLD)

#if !defined(DEFINE_ABSTRACT_MINIPORTWAVERTINPUTSTREAM)

#define DEFINE_ABSTRACT_MINIPORTWAVERTINPUTSTREAM()             \
    _IRQL_requires_max_(PASSIVE_LEVEL)                          \
    STDMETHOD_(NTSTATUS, GetReadPacket)                         \
    (   THIS_                                                   \
        _Out_ ULONG     *PacketNumber,                          \
        _Out_ DWORD     *Flags,                                 \
        _Out_ ULONG64   *PerformanceCounterValue,               \
        _Out_ BOOL      *MoreData                               \
    )   PURE;

#endif // !defined(DEFINE_ABSTRACT_MINIPORTWAVERTINPUTSTREAM)

#if !defined(DEFINE_ABSTRACT_MINIPORTWAVERTOUTPUTSTREAM)

#define DEFINE_ABSTRACT_MINIPORTWAVERTOUTPUTSTREAM()                \
    _IRQL_requires_max_(PASSIVE_LEVEL)                              \
    STDMETHOD_(NTSTATUS, SetWritePacket)                            \
    (                                                               \
        THIS_                                                       \
        _In_ ULONG      PacketNumber,                               \
        _In_ DWORD      Flags,                                      \
        _In_ ULONG      EosPacketLength                             \
    ) PURE;                                                         \
                                                                    \
    _IRQL_requires_max_(PASSIVE_LEVEL)                              \
    STDMETHOD_(NTSTATUS, GetOutputStreamPresentationPosition)       \
    (                                                               \
        THIS_                                                       \
        _Out_ KSAUDIO_PRESENTATION_POSITION *pPresentationPosition  \
    ) PURE;                                                         \
                                                                    \
    _IRQL_requires_max_(PASSIVE_LEVEL)                              \
    STDMETHOD_(NTSTATUS, GetPacketCount)                            \
    (                                                               \
        THIS_                                                       \
        _Out_ ULONG     *pPacketCount                               \
    ) PURE;

#endif // !defined(DEFINE_ABSTRACT_MINIPORTWAVERTOUTPUTSTREAM)

/*****************************************************************************
 * ENUMS FOR RESOURCE REBALANCING 
 *****************************************************************************
 */

typedef enum{
    PcRebalanceNotSupported = 0,
    PcRebalanceRemoveSubdevices
} PC_REBALANCE_TYPE;

#if !defined(DEFINE_ABSTRACT_ADAPTERPNPMANAGEMENT)

#define DEFINE_ABSTRACT_ADAPTERPNPMANAGEMENT()                  \
    STDMETHOD_(PC_REBALANCE_TYPE, GetSupportedRebalanceType)    \
    (   THIS                                                    \
    )   PURE;                                                   \
    STDMETHOD_(void, PnpQueryStop)                              \
    (   THIS                                                    \
    )   PURE;                                                   \
    STDMETHOD_(void, PnpCancelStop)                             \
    (   THIS                                                    \
    )   PURE;                                                   \
    STDMETHOD_(void, PnpStop)                                   \
    (   THIS                                                    \
    )   PURE;
    
#endif //!defined(DEFINE_ABSTRACT_ADAPTERPNPMANAGEMENT)

/*****************************************************************************
 * IAdapterPnpManagement
 *****************************************************************************
 * An interface that adapters should implement and
 * register if they want pnp management messages.
 * Register this interface with PortCls via the
 * PcRegisterAdapterPnpManagement() call.
 */
DECLARE_INTERFACE_(IAdapterPnpManagement,IUnknown)
{
    DEFINE_ABSTRACT_UNKNOWN()   //  For IUnknown
    DEFINE_ABSTRACT_ADAPTERPNPMANAGEMENT()
};

typedef IAdapterPnpManagement *PADAPTERPNPMANAGEMENT;

#define IMP_IAdapterPnpManagement                               \
    STDMETHODIMP_(PC_REBALANCE_TYPE) GetSupportedRebalanceType  \
    (                                                           \
    );                                                          \
    STDMETHODIMP_(void) PnpQueryStop                            \
    (                                                           \
    );                                                          \
    STDMETHODIMP_(void) PnpCancelStop                           \
    (                                                           \
    );                                                          \
    STDMETHODIMP_(void) PnpStop                                 \
    (                                                           \
    )

#if !defined(DEFINE_ABSTRACT_MINIPORTPNPNOTIFY)

#define DEFINE_ABSTRACT_MINIPORTPNPNOTIFY()                     \
    STDMETHOD_(void, PnpStop)                                   \
    (   THIS                                                    \
    )   PURE;
    
#endif  //!defined(DEFINE_ABSTRACT_MINIPORTPNPNOTIFY)

/*****************************************************************************
 * IMiniportPnpNotify
 *****************************************************************************
 * An OPTIONAL interface for miniports to implement to enable 
 * them to get device power state change notifications.
 */
DECLARE_INTERFACE_(IMiniportPnpNotify,IUnknown)
{
    DEFINE_ABSTRACT_UNKNOWN()   //  For IUnknown
    DEFINE_ABSTRACT_MINIPORTPNPNOTIFY()
};

typedef IMiniportPnpNotify *PMINIPORTPNPNOTIFY;

#define IMP_IMiniportPnpNotify                                  \
    STDMETHODIMP_(void) PnpStop                                 \
    (                                                           \
    )

/*****************************************************************************
 * IPortClsPnp
 *****************************************************************************
 * Used to access the adapter pnp management functions.
 */
DECLARE_INTERFACE_(IPortClsPnp,IUnknown)
{
    DEFINE_ABSTRACT_UNKNOWN()   //  For IUnknown
    
    STDMETHOD_(NTSTATUS,RegisterAdapterPnpManagement)
    (  THIS_ 
        _In_      PUNKNOWN        pUnknown,
        _In_      PDEVICE_OBJECT  DeviceObject
    )   PURE;
    STDMETHOD_(NTSTATUS,UnregisterAdapterPnpManagement)
    (  THIS_ 
        _In_      PDEVICE_OBJECT  DeviceObject
    )   PURE;
};

typedef IPortClsPnp *PPORTCLSPNP;

#endif // (NTDDI_VERSION >= NTDDI_THRESHOLD)

#if !defined(DEFINE_ABSTRACT_ADAPTERPOWERMANAGEMENT)

#define DEFINE_ABSTRACT_ADAPTERPOWERMANAGEMENT()                \
    STDMETHOD_(void,PowerChangeState)                           \
    (   THIS_                                                   \
        _In_      POWER_STATE     NewState                      \
    )   PURE;                                                   \
    STDMETHOD_(NTSTATUS,QueryPowerChangeState)                  \
    (   THIS_                                                   \
        _In_      POWER_STATE     NewStateQuery                 \
    )   PURE;                                                   \
    STDMETHOD_(NTSTATUS,QueryDeviceCapabilities)                \
    (   THIS_                                                   \
        _Inout_updates_bytes_(sizeof(DEVICE_CAPABILITIES)) PDEVICE_CAPABILITIES    PowerDeviceCaps       \
    )   PURE;

#endif //!defined(DEFINE_ABSTRACT_ADAPTERPOWERMANAGEMENT)

#if !defined(DEFINE_ABSTRACT_ADAPTERPOWERMANAGEMENT2)

#define DEFINE_ABSTRACT_ADAPTERPOWERMANAGEMENT2()               \
    STDMETHOD_(void,PowerChangeState2)                          \
    (   THIS_                                                   \
        _In_      DEVICE_POWER_STATE    NewDeviceState,         \
        _In_      SYSTEM_POWER_STATE    NewSystemState          \
    )   PURE;

#endif //!defined(DEFINE_ABSTRACT_ADAPTERPOWERMANAGEMENT2)

/*****************************************************************************
 * IResourceList
 *****************************************************************************
 * List of resources.
 */
DECLARE_INTERFACE_(IResourceList,IUnknown)
{
    DEFINE_ABSTRACT_UNKNOWN()   //  For IUnknown

    STDMETHOD_(ULONG,NumberOfEntries)
    (   THIS
    )   PURE;

    STDMETHOD_(ULONG,NumberOfEntriesOfType)
    (   THIS_
        _In_      CM_RESOURCE_TYPE    Type
    )   PURE;

    STDMETHOD_(PCM_PARTIAL_RESOURCE_DESCRIPTOR,FindTranslatedEntry)
    (   THIS_
        _In_      CM_RESOURCE_TYPE    Type,
        _In_      ULONG               Index
    )   PURE;

    STDMETHOD_(PCM_PARTIAL_RESOURCE_DESCRIPTOR,FindUntranslatedEntry)
    (   THIS_
        _In_      CM_RESOURCE_TYPE    Type,
        _In_      ULONG               Index
    )   PURE;

    STDMETHOD_(NTSTATUS,AddEntry)
    (   THIS_
        _In_      PCM_PARTIAL_RESOURCE_DESCRIPTOR Translated,
        _In_      PCM_PARTIAL_RESOURCE_DESCRIPTOR Untranslated
    )   PURE;

    STDMETHOD_(NTSTATUS,AddEntryFromParent)
    (   THIS_
        _In_      struct IResourceList *  Parent,
        _In_      CM_RESOURCE_TYPE        Type,
        _In_      ULONG                   Index
    )   PURE;

    STDMETHOD_(PCM_RESOURCE_LIST,TranslatedList)
    (   THIS
    )   PURE;

    STDMETHOD_(PCM_RESOURCE_LIST,UntranslatedList)
    (   THIS
    )   PURE;
};

typedef IResourceList *PRESOURCELIST;

#ifdef PC_IMPLEMENTATION
#define IMP_IResourceList\
    STDMETHODIMP_(ULONG)NumberOfEntries\
    (   void\
    );\
    STDMETHODIMP_(ULONG) NumberOfEntriesOfType\
    (   _In_      CM_RESOURCE_TYPE    Type\
    );\
    STDMETHODIMP_(PCM_PARTIAL_RESOURCE_DESCRIPTOR) FindTranslatedEntry\
    (   _In_      CM_RESOURCE_TYPE    Type,\
        _In_      ULONG               Index\
    );\
    STDMETHODIMP_(PCM_PARTIAL_RESOURCE_DESCRIPTOR) FindUntranslatedEntry\
    (   _In_      CM_RESOURCE_TYPE    Type,\
        _In_      ULONG               Index\
    );\
    STDMETHODIMP_(NTSTATUS) AddEntry\
    (   _In_      PCM_PARTIAL_RESOURCE_DESCRIPTOR Translated,\
        _In_      PCM_PARTIAL_RESOURCE_DESCRIPTOR Untranslated\
    );\
    STDMETHODIMP_(NTSTATUS) AddEntryFromParent\
    (   _In_      struct IResourceList *  Parent,\
        _In_      CM_RESOURCE_TYPE        Type,\
        _In_      ULONG                   Index\
    );\
    STDMETHODIMP_(PCM_RESOURCE_LIST) TranslatedList\
    (   void\
    );\
    STDMETHODIMP_(PCM_RESOURCE_LIST) UntranslatedList\
    (   void\
    )
#endif


#define NumberOfPorts()         NumberOfEntriesOfType(CmResourceTypePort)
#define FindTranslatedPort(n)   FindTranslatedEntry(CmResourceTypePort,(n))
#define FindUntranslatedPort(n) FindUntranslatedEntry(CmResourceTypePort,(n))
#define AddPortFromParent(p,n)  AddEntryFromParent((p),CmResourceTypePort,(n))

#define NumberOfInterrupts()         NumberOfEntriesOfType(CmResourceTypeInterrupt)
#define FindTranslatedInterrupt(n)   FindTranslatedEntry(CmResourceTypeInterrupt,(n))
#define FindUntranslatedInterrupt(n) FindUntranslatedEntry(CmResourceTypeInterrupt,(n))
#define AddInterruptFromParent(p,n)  AddEntryFromParent((p),CmResourceTypeInterrupt,(n))

#define NumberOfMemories()        NumberOfEntriesOfType(CmResourceTypeMemory)
#define FindTranslatedMemory(n)   FindTranslatedEntry(CmResourceTypeMemory,(n))
#define FindUntranslatedMemory(n) FindUntranslatedEntry(CmResourceTypeMemory,(n))
#define AddMemoryFromParent(p,n)  AddEntryFromParent((p),CmResourceTypeMemory,(n))

#define NumberOfDmas()         NumberOfEntriesOfType(CmResourceTypeDma)
#define FindTranslatedDma(n)   FindTranslatedEntry(CmResourceTypeDma,(n))
#define FindUntranslatedDma(n) FindUntranslatedEntry(CmResourceTypeDma,(n))
#define AddDmaFromParent(p,n)  AddEntryFromParent((p),CmResourceTypeDma,(n))

#define NumberOfDeviceSpecifics()         NumberOfEntriesOfType(CmResourceTypeDeviceSpecific)
#define FindTranslatedDeviceSpecific(n)   FindTranslatedEntry(CmResourceTypeDeviceSpecific,(n))
#define FindUntranslatedDeviceSpecific(n) FindUntranslatedEntry(CmResourceTypeDeviceSpecific,(n))
#define AddDeviceSpecificFromParent(p,n)  AddEntryFromParent((p),CmResourceTypeDeviceSpecific,(n))

#define NumberOfBusNumbers()         NumberOfEntriesOfType(CmResourceTypeBusNumber)
#define FindTranslatedBusNumber(n)   FindTranslatedEntry(CmResourceTypeBusNumber,(n))
#define FindUntranslatedBusNumber(n) FindUntranslatedEntry(CmResourceTypeBusNumber,(n))
#define AddBusNumberFromParent(p,n)  AddEntryFromParent((p),CmResourceTypeBusNumber,(n))

#define NumberOfDevicePrivates()         NumberOfEntriesOfType(CmResourceTypeDevicePrivate)
#define FindTranslatedDevicePrivate(n)   FindTranslatedEntry(CmResourceTypeDevicePrivate,(n))
#define FindUntranslatedDevicePrivate(n) FindUntranslatedEntry(CmResourceTypeDevicePrivate,(n))
#define AddDevicePrivateFromParent(p,n)  AddEntryFromParent((p),CmResourceTypeDevicePrivate,(n))

#define NumberOfAssignedResources()         NumberOfEntriesOfType(CmResourceTypeAssignedResource)
#define FindTranslatedAssignedResource(n)   FindTranslatedEntry(CmResourceTypeAssignedResource,(n))
#define FindUntranslatedAssignedResource(n) FindUntranslatedEntry(CmResourceTypeAssignedResource,(n))
#define AddAssignedResourceFromParent(p,n)  AddEntryFromParent((p),CmResourceTypeAssignedResource,(n))

#define NumberOfSubAllocateFroms()         NumberOfEntriesOfType(CmResourceTypeSubAllocateFrom)
#define FindTranslatedSubAllocateFrom(n)   FindTranslatedEntry(CmResourceTypeSubAllocateFrom,(n))
#define FindUntranslatedSubAllocateFrom(n) FindUntranslatedEntry(CmResourceTypeSubAllocateFrom,(n))
#define AddSubAllocateFromFromParent(p,n)  AddEntryFromParent((p),CmResourceTypeSubAllocateFrom,(n))

/*****************************************************************************
 * IDmaChannel
 *****************************************************************************
 * Interface for DMA channel.
 */
DECLARE_INTERFACE_(IDmaChannel,IUnknown)
{
    DEFINE_ABSTRACT_UNKNOWN()       //  For IUnknown

    DEFINE_ABSTRACT_DMACHANNEL()    //  For IDmaChannel
};

typedef IDmaChannel *PDMACHANNEL;

#ifdef PC_IMPLEMENTATION
#define IMP_IDmaChannel\
    STDMETHODIMP_(NTSTATUS) AllocateBuffer\
    (   _In_      ULONG               BufferSize,\
        _In_opt_  PPHYSICAL_ADDRESS   PhysicalAddressConstraint\
    );\
    STDMETHODIMP_(void) FreeBuffer\
    (   void\
    );\
    STDMETHODIMP_(ULONG) TransferCount\
    (   void\
    );\
    STDMETHODIMP_(ULONG) MaximumBufferSize\
    (   void\
    );\
    STDMETHODIMP_(ULONG) AllocatedBufferSize\
    (   void\
    );\
    STDMETHODIMP_(ULONG) BufferSize\
    (   void\
    );\
    STDMETHODIMP_(void) SetBufferSize\
    (   _In_      ULONG   BufferSize\
    );\
    STDMETHODIMP_(PVOID) SystemAddress\
    (   void\
    );\
    STDMETHODIMP_(PHYSICAL_ADDRESS) PhysicalAddress\
    (   void\
    );\
    STDMETHODIMP_(PADAPTER_OBJECT) GetAdapterObject\
    (   void\
    );\
    STDMETHODIMP_(void) CopyTo\
    (   _Inout_updates_bytes_(ByteCount)   PVOID   Destination,\
        _In_reads_bytes_(ByteCount)      PVOID   Source,\
        _In_                        ULONG   ByteCount\
    );\
    STDMETHODIMP_(void) CopyFrom\
    (   _Inout_updates_bytes_(ByteCount)   PVOID   Destination,\
        _In_reads_bytes_(ByteCount)      PVOID   Source,\
        _In_                        ULONG   ByteCount\
    )
#endif

//
// For Longhorn we don't support DMA channel slave functions, but we need
// to define PDMACHANNELSLAVE so that we can compile NewSlaveDmaChannel
// which we need for forward compatibility.
//
#if (NTDDI_VERSION < NTDDI_VISTA)
/*****************************************************************************
 * IDmaChannelSlave
 *****************************************************************************
 * Interface for slave DMA channel.
 */
DECLARE_INTERFACE_(IDmaChannelSlave,IDmaChannel)
{
    DEFINE_ABSTRACT_UNKNOWN()           //  For IUnknown

    DEFINE_ABSTRACT_DMACHANNEL()        //  For IDmaChannel

    DEFINE_ABSTRACT_DMACHANNELSLAVE()   //  For IDmaChannelSlave
};

typedef IDmaChannelSlave *PDMACHANNELSLAVE;

#ifdef PC_IMPLEMENTATION
#define IMP_IDmaChannelSlave\
    IMP_IDmaChannel;\
    STDMETHODIMP_(NTSTATUS) Start\
    (   _In_      ULONG               MapSize,\
        _In_      BOOLEAN             WriteToDevice\
    );\
    STDMETHODIMP_(NTSTATUS) Stop\
    (   void\
    );\
    STDMETHODIMP_(ULONG) ReadCounter\
    (   void\
    );\
    STDMETHODIMP_(NTSTATUS) WaitForTC\
    (   ULONG Timeout\
    )
#endif
#else   // NTDDI_VERSION < NTDDI_VISTA
//
// This is a dummy definition for PDMACHANNELSLAVE.
//
typedef PVOID PDMACHANNELSLAVE;
#endif  // NTDDI_VERSION < NTDDI_VISTA

/*****************************************************************************
 * INTERRUPTSYNCMODE
 *****************************************************************************
 * Interrupt sync mode of operation.
 */
typedef enum
{
    InterruptSyncModeNormal = 1,    // One pass, stop when successful.
    InterruptSyncModeAll,           // One pass regardless of success.
    InterruptSyncModeRepeat         // Repeat until all return unsuccessful.
} INTERRUPTSYNCMODE;

/*****************************************************************************
 * PINTERRUPTSYNCROUTINE
 *****************************************************************************
 * Pointer to an interrupt synchronization routine.  Both interrupt service
 * routines and routines that are synchronized with ISRs use this type.
 */
typedef NTSTATUS
(*PINTERRUPTSYNCROUTINE)
(
    _In_      struct IInterruptSync * InterruptSync,
    _In_      PVOID                   DynamicContext
);

/*****************************************************************************
 * IInterruptSync
 *****************************************************************************
 * Interface for objects providing access synchronization with interrupts.
 */
DECLARE_INTERFACE_(IInterruptSync,IUnknown)
{
    DEFINE_ABSTRACT_UNKNOWN()   //  For IUnknown

    STDMETHOD_(NTSTATUS,CallSynchronizedRoutine)
    (   THIS_
        _In_      PINTERRUPTSYNCROUTINE   Routine,
        _In_      PVOID                   DynamicContext
    )   PURE;
    STDMETHOD_(PKINTERRUPT,GetKInterrupt)
    (   THIS
    )   PURE;
    STDMETHOD_(NTSTATUS,Connect)
    (   THIS
    )   PURE;
    STDMETHOD_(void,Disconnect)
    (   THIS
    )   PURE;
    STDMETHOD_(NTSTATUS,RegisterServiceRoutine)
    (   THIS_
        _In_      PINTERRUPTSYNCROUTINE   Routine,
        _In_      PVOID                   DynamicContext,
        _In_      BOOLEAN                 First
    )   PURE;
};

typedef IInterruptSync *PINTERRUPTSYNC;

#ifdef PC_IMPLEMENTATION
#define IMP_IInterruptSync\
    STDMETHODIMP_(NTSTATUS) CallSynchronizedRoutine\
    (   _In_      PINTERRUPTSYNCROUTINE   Routine,\
        _In_      PVOID                   DynamicContext\
    );\
    STDMETHODIMP_(PKINTERRUPT) GetKInterrupt\
    (   void\
    );\
    STDMETHODIMP_(NTSTATUS) Connect\
    (   void\
    );\
    STDMETHODIMP_(void) Disconnect\
    (   void\
    );\
    STDMETHODIMP_(NTSTATUS) RegisterServiceRoutine\
    (   _In_      PINTERRUPTSYNCROUTINE   Routine,\
        _In_      PVOID                   DynamicContext,\
        _In_      BOOLEAN                 First\
    )
#endif

/*****************************************************************************
 * IServiceSink
 *****************************************************************************
 * Interface for notification sinks for service groups.
 */
DECLARE_INTERFACE_(IServiceSink,IUnknown)
{
    DEFINE_ABSTRACT_UNKNOWN()   //  For IUnknown

    //  For IServiceSink
    STDMETHOD_(void,RequestService)
    (   THIS
    )   PURE;
};

typedef IServiceSink *PSERVICESINK;

#ifdef PC_IMPLEMENTATION
#define IMP_IServiceSink\
    STDMETHODIMP_(void) RequestService\
    (   void\
    )
#endif

/*****************************************************************************
 * IServiceGroup
 *****************************************************************************
 * Interface for objects representing a group that is serviced collectively.
 */
DECLARE_INTERFACE_(IServiceGroup,IServiceSink)
{
    DEFINE_ABSTRACT_UNKNOWN()   //  For IUnknown

    //  For IServiceSink
    STDMETHOD_(void,RequestService)
    (   THIS
    )   PURE;

    //  For IServiceGroup
    STDMETHOD_(NTSTATUS,AddMember)
    (   THIS_
        _In_      PSERVICESINK    pServiceSink
    )   PURE;

    STDMETHOD_(void,RemoveMember)
    (   THIS_
        _In_      PSERVICESINK    pServiceSink
    )   PURE;

    STDMETHOD_(void,SupportDelayedService)
    (   THIS
    )   PURE;

    STDMETHOD_(void,RequestDelayedService)
    (   THIS_
        _In_      ULONGLONG   ullDelay
    )   PURE;

    STDMETHOD_(void,CancelDelayedService)
    (   THIS
    )   PURE;
};

typedef IServiceGroup *PSERVICEGROUP;

#ifdef PC_IMPLEMENTATION
#define IMP_IServiceGroup\
    IMP_IServiceSink;\
    STDMETHODIMP_(NTSTATUS) AddMember\
    (   _In_  PSERVICESINK    pServiceSink\
    );\
    STDMETHODIMP_(void) RemoveMember\
    (   _In_  PSERVICESINK    pServiceSink\
    );\
    STDMETHODIMP_(void) SupportDelayedService\
    (   void\
    );\
    STDMETHODIMP_(void) RequestDelayedService\
    (   _In_  ULONGLONG   ullDelay\
    );\
    STDMETHODIMP_(void) CancelDelayedService\
    (   void\
    )
#endif

/*****************************************************************************
 * IRegistryKey
 *****************************************************************************
 * Interface for objects providing access to a registry key.
 */
DECLARE_INTERFACE_(IRegistryKey,IUnknown)
{
    DEFINE_ABSTRACT_UNKNOWN()   //  For IUnknown

    STDMETHOD_(NTSTATUS,QueryKey)
    (   THIS_
        _In_      KEY_INFORMATION_CLASS   KeyInformationClass,
        _Out_     PVOID                   KeyInformation,
        _In_      ULONG                   Length,
        _Out_     PULONG                  ResultLength
    )   PURE;

    STDMETHOD_(NTSTATUS,EnumerateKey)
    (   THIS_
        _In_      ULONG                   Index,
        _In_      KEY_INFORMATION_CLASS   KeyInformationClass,
        _Out_     PVOID                   KeyInformation,
        _In_      ULONG                   Length,
        _Out_     PULONG                  ResultLength
    )   PURE;

    STDMETHOD_(NTSTATUS,QueryValueKey)
    (   THIS_
        _In_      PUNICODE_STRING             ValueName,
        _In_      KEY_VALUE_INFORMATION_CLASS KeyValueInformationClass,
        _Out_     PVOID                       KeyValueInformation,
        _In_      ULONG                       Length,
        _Out_     PULONG                      ResultLength
    )   PURE;

    STDMETHOD_(NTSTATUS,EnumerateValueKey)
    (   THIS_
        _In_      ULONG                       Index,
        _In_      KEY_VALUE_INFORMATION_CLASS KeyValueInformationClass,
        _Out_     PVOID                       KeyValueInformation,
        _In_      ULONG                       Length,
        _Out_     PULONG                      ResultLength
    )   PURE;

    STDMETHOD_(NTSTATUS,SetValueKey)
    (   THIS_
        _In_opt_  PUNICODE_STRING     ValueName,
        _In_      ULONG               Type,
        _In_      PVOID               Data,
        _In_      ULONG               DataSize
    )   PURE;

    STDMETHOD_(NTSTATUS,QueryRegistryValues)
    (   THIS_
        _In_      PRTL_QUERY_REGISTRY_TABLE   QueryTable,
        _In_opt_  PVOID                       Context 
    )   PURE;

    STDMETHOD_(NTSTATUS,NewSubKey)
    (   THIS_
        _Out_     IRegistryKey **     RegistrySubKey,
        _In_opt_  PUNKNOWN            OuterUnknown,
        _In_      ACCESS_MASK         DesiredAccess,
        _In_      PUNICODE_STRING     SubKeyName,
        _In_      ULONG               CreateOptions,
        _Out_opt_ PULONG              Disposition     
    )   PURE;

    STDMETHOD_(NTSTATUS,DeleteKey)
    (   THIS
    )   PURE;
};

typedef IRegistryKey *PREGISTRYKEY;

#ifdef PC_IMPLEMENTATION
#define IMP_IRegistryKey\
    STDMETHODIMP_(NTSTATUS) QueryKey\
    (   _In_      KEY_INFORMATION_CLASS   KeyInformationClass,\
        _Out_     PVOID                   KeyInformation,\
        _In_      ULONG                   Length,\
        _Out_     PULONG                  ResultLength\
    );\
    STDMETHODIMP_(NTSTATUS) EnumerateKey\
    (   _In_      ULONG                   Index,\
        _In_      KEY_INFORMATION_CLASS   KeyInformationClass,\
        _Out_     PVOID                   KeyInformation,\
        _In_      ULONG                   Length,\
        _Out_     PULONG                  ResultLength\
    );\
    STDMETHODIMP_(NTSTATUS) QueryValueKey\
    (   _In_      PUNICODE_STRING             ValueName,\
        _In_      KEY_VALUE_INFORMATION_CLASS KeyValueInformationClass,\
        _Out_     PVOID                       KeyValueInformation,\
        _In_      ULONG                       Length,\
        _Out_     PULONG                      ResultLength\
    );\
    STDMETHODIMP_(NTSTATUS) EnumerateValueKey\
    (   _In_      ULONG                       Index,\
        _In_      KEY_VALUE_INFORMATION_CLASS KeyValueInformationClass,\
        _Out_     PVOID                       KeyValueInformation,\
        _In_      ULONG                       Length,\
        _Out_     PULONG                      ResultLength\
    );\
    STDMETHODIMP_(NTSTATUS) SetValueKey\
    (   _In_opt_  PUNICODE_STRING     ValueName,\
        _In_      ULONG               Type,\
        _In_      PVOID               Data,\
        _In_      ULONG               DataSize\
    );\
    STDMETHODIMP_(NTSTATUS) QueryRegistryValues\
    (   _In_      PRTL_QUERY_REGISTRY_TABLE   QueryTable,\
        _In_opt_  PVOID                       Context\
    );\
    STDMETHODIMP_(NTSTATUS) NewSubKey\
    (   _Out_     IRegistryKey **     RegistrySubKey,\
        _In_opt_  PUNKNOWN            OuterUnknown,\
        _In_      ACCESS_MASK         DesiredAccess,\
        _In_      PUNICODE_STRING     SubKeyName,\
        _In_      ULONG               CreateOptions,\
        _Out_opt_ PULONG              Disposition\
    );\
    STDMETHODIMP_(NTSTATUS) DeleteKey\
    (   void\
    )
#endif

#if (NTDDI_VERSION >= NTDDI_WINXP)
/*****************************************************************************
 * IMusicTechnology
 *****************************************************************************
 * Interface for setting MusicTechnology.
 */
DECLARE_INTERFACE_(IMusicTechnology,IUnknown)
{
    DEFINE_ABSTRACT_UNKNOWN()   //  For IUnknown

    //  For IMusicTechnology
    STDMETHOD_(NTSTATUS,SetTechnology)
    (   THIS_
        _In_      const GUID *    Technology
    )   PURE;
};

typedef IMusicTechnology *PMUSICTECHNOLOGY;

#define IMP_IMusicTechnology\
    STDMETHODIMP_(NTSTATUS) SetTechnology\
    (   _In_      const GUID *    Technology\
    )
#endif

typedef struct _PCPROPERTY_REQUEST PCPROPERTY_REQUEST, *PPCPROPERTY_REQUEST;
typedef struct _PCMETHOD_REQUEST PCMETHOD_REQUEST, *PPCMETHOD_REQUEST;
typedef struct _PCEVENT_REQUEST PCEVENT_REQUEST, *PPCEVENT_REQUEST;

/*****************************************************************************
 * PCPFNPROPERTY_HANDLER
 *****************************************************************************
 * Property handler function prototype.
 *
 * All property accesses and support queries for a given property on a given
 * filter, pin or node are routed to a single handler.  The parameter contains
 * complete information regarding the request.  The handler may return
 * STATUS_PENDING, in which case it must eventually call
 * PcCompletePendingPropertyRequest() to complete the request.
 */
typedef
NTSTATUS
(*PCPFNPROPERTY_HANDLER)
(
    _In_      PPCPROPERTY_REQUEST PropertyRequest
);

/*****************************************************************************
 * PCPFNMETHOD_HANDLER
 *****************************************************************************
 * Method handler function prototype.
 *
 * All method calls and support queries for a given method on a given filter,
 * pin or node are routed to a single handler.  The parameter contains
 * complete information regarding the request.  The handler may return
 * STATUS_PENDING, in which case it must eventually call
 * PcCompletePendingMethodRequest() to complete the request.
 */
typedef
NTSTATUS
(*PCPFNMETHOD_HANDLER)
(
    _In_      PPCMETHOD_REQUEST   MethodRequest
);

/*****************************************************************************
 * PCPFNEVENT_HANDLER
 *****************************************************************************
 * Event handler function prototype.
 *
 * All event add and remove requests and all event support queries for a
 * given event on a given filter, pin or node are routed to a single handler.
 * The parameter contains complete information regarding the request.  The
 * handler may return STATUS_PENDING, in which case it must eventually call
 * PcCompletePendingEventRequest() to complete the request.
 */
typedef
NTSTATUS
(*PCPFNEVENT_HANDLER)
(
    _In_      PPCEVENT_REQUEST    EventRequest
);

/*****************************************************************************
 * PCPROPERTY_ITEM
 *****************************************************************************
 * Property table entry.
 *
 * A property item describes a property supported by a given filter, pin or
 * node.  The flags indicate what operations regarding the property are
 * supported and specify selected options with respect to the port's handling
 * of property requests.
 */
typedef struct
{
    const GUID *            Set;
    ULONG                   Id;
    ULONG                   Flags;
#define PCPROPERTY_ITEM_FLAG_GET            KSPROPERTY_TYPE_GET
#define PCPROPERTY_ITEM_FLAG_SET            KSPROPERTY_TYPE_SET
#define PCPROPERTY_ITEM_FLAG_BASICSUPPORT   KSPROPERTY_TYPE_BASICSUPPORT
//not supported #define PCPROPERTY_ITEM_FLAG_RELATIONS      KSPROPERTY_TYPE_RELATIONS
#define PCPROPERTY_ITEM_FLAG_SERIALIZERAW   KSPROPERTY_TYPE_SERIALIZERAW
#define PCPROPERTY_ITEM_FLAG_UNSERIALIZERAW KSPROPERTY_TYPE_UNSERIALIZERAW
#define PCPROPERTY_ITEM_FLAG_SERIALIZESIZE  KSPROPERTY_TYPE_SERIALIZESIZE
#define PCPROPERTY_ITEM_FLAG_SERIALIZE\
        (PCPROPERTY_ITEM_FLAG_SERIALIZERAW\
        |PCPROPERTY_ITEM_FLAG_UNSERIALIZERAW\
        |PCPROPERTY_ITEM_FLAG_SERIALIZESIZE\
        )
#define PCPROPERTY_ITEM_FLAG_DEFAULTVALUES  KSPROPERTY_TYPE_DEFAULTVALUES
    PCPFNPROPERTY_HANDLER   Handler;
}
PCPROPERTY_ITEM, *PPCPROPERTY_ITEM;

/*****************************************************************************
 * PCMETHOD_ITEM
 *****************************************************************************
 * Method table entry.
 *
 * A method item describes a method supported by a given filter, pin or node.
 * The flags indicate what operations regarding the method are supported and
 * specify selected options with respect to the port's handling of method
 * requests.
 */
typedef struct
{
    const GUID *            Set;
    ULONG                   Id;
    ULONG                   Flags;
#define PCMETHOD_ITEM_FLAG_NONE         KSMETHOD_TYPE_NONE
#define PCMETHOD_ITEM_FLAG_READ         KSMETHOD_TYPE_READ
#define PCMETHOD_ITEM_FLAG_WRITE        KSMETHOD_TYPE_WRITE
#define PCMETHOD_ITEM_FLAG_MODIFY       KSMETHOD_TYPE_MODIFY
#define PCMETHOD_ITEM_FLAG_SOURCE       KSMETHOD_TYPE_SOURCE
#define PCMETHOD_ITEM_FLAG_BASICSUPPORT KSMETHOD_TYPE_BASICSUPPORT
    PCPFNMETHOD_HANDLER     Handler;
}
PCMETHOD_ITEM, *PPCMETHOD_ITEM;

/*****************************************************************************
 * PCEVENT_ITEM
 *****************************************************************************
 * Event table entry.
 *
 * An event item describes an event supported by a given filter, pin or node.
 * The flags indicate what operations regarding the event are supported and
 * specify selected options with respect to the port's handling of event
 * requests.
 */
typedef struct
{
    const GUID *            Set;
    ULONG                   Id;
    ULONG                   Flags;
#define PCEVENT_ITEM_FLAG_ENABLE        KSEVENT_TYPE_ENABLE
#define PCEVENT_ITEM_FLAG_ONESHOT       KSEVENT_TYPE_ONESHOT
#define PCEVENT_ITEM_FLAG_BASICSUPPORT  KSEVENT_TYPE_BASICSUPPORT
    PCPFNEVENT_HANDLER      Handler;
}
PCEVENT_ITEM, *PPCEVENT_ITEM;

/*****************************************************************************
 * PCPROPERTY_REQUEST
 *****************************************************************************
 * Property request submitted to a property handler.
 *
 * This is the form that a property request takes.  Although the major target
 * is generic, in the case of miniports, it will be a pointer to the miniport
 * object.  Likewise, the minor target is the stream or voice if the request
 * is specific to a stream or voice.  Otherwise, the minor target is NULL.
 * If the request is targeted at a node, the Node parameter will specify which
 * one, otherwise it will be ULONG(-1).  If the target is a node, the minor
 * target may be specified to indicate the stream or voice with which the
 * targeted node instance is associated.
 */
typedef struct _PCPROPERTY_REQUEST
{
    PUNKNOWN                MajorTarget;
    PUNKNOWN                MinorTarget;
    ULONG                   Node;
    const PCPROPERTY_ITEM * PropertyItem;
    ULONG                   Verb;
    ULONG                   InstanceSize;
    PVOID                   Instance;
    ULONG                   ValueSize;
    PVOID                   Value;
    PIRP                    Irp;
}
PCPROPERTY_REQUEST, *PPCPROPERTY_REQUEST;

/*****************************************************************************
 * PCMETHOD_REQUEST
 *****************************************************************************
 * Method request submitted to a property handler.
 *
 * Comments in the description of PCPROPERTY_REQUEST regarding the target
 * fields apply to this structure as well.
 */
typedef struct _PCMETHOD_REQUEST
{
    PUNKNOWN                MajorTarget;
    PUNKNOWN                MinorTarget;
    ULONG                   Node;
    const PCMETHOD_ITEM *   MethodItem;
    ULONG                   Verb;
    // TODO
}
PCMETHOD_REQUEST, *PPCMETHOD_REQUEST;

/*****************************************************************************
 * PCEVENT_REQUEST
 *****************************************************************************
 * Event request submitted to a property handler.
 *
 * Comments in the description of PCPROPERTY_REQUEST regarding the target
 * fields apply to this structure as well.
 */
typedef struct _PCEVENT_REQUEST
{
    PUNKNOWN                MajorTarget;
    PUNKNOWN                MinorTarget;
    ULONG                   Node;
    const PCEVENT_ITEM *    EventItem;
    PKSEVENT_ENTRY          EventEntry;
    ULONG                   Verb;
    PIRP                    Irp;
}
PCEVENT_REQUEST, *PPCEVENT_REQUEST;

#define PCEVENT_VERB_NONE          0
#define PCEVENT_VERB_ADD           1
#define PCEVENT_VERB_REMOVE        2
#define PCEVENT_VERB_SUPPORT       4

/*****************************************************************************
 * PCAUTOMATION_TABLE
 *****************************************************************************
 * Master table of properties, methods and events.
 *
 * Any of the item pointers may be NULL, in which case, corresponding counts
 * must be zero.  For item tables that are not zero length, the item size must
 * not be smaller than the size of the item structure defined by port class.
 * The item size may be larger, in which case the port class item structure is
 * assumed to be followed by private data.  Item sizes must be a multiple of
 * 8.
 */
typedef struct
{
    ULONG                               PropertyItemSize;
    ULONG                               PropertyCount;
    const PCPROPERTY_ITEM * Properties;
        ULONG                           MethodItemSize;
        ULONG                           MethodCount;
        const PCMETHOD_ITEM *   Methods;
        ULONG                           EventItemSize;
        ULONG                           EventCount;
        const PCEVENT_ITEM *    Events;
    ULONG                   Reserved;
}
PCAUTOMATION_TABLE, *PPCAUTOMATION_TABLE;

#define DEFINE_PCAUTOMATION_TABLE_PROP(AutomationTable,PropertyTable)\
const PCAUTOMATION_TABLE AutomationTable =\
{\
    sizeof(PropertyTable[0]),\
    SIZEOF_ARRAY(PropertyTable),\
    (const PCPROPERTY_ITEM *) PropertyTable,\
    0,0,NULL,\
    0,0,NULL,\
    0\
}

#define DEFINE_PCAUTOMATION_TABLE_PROP_EVENT(AutomationTable,PropertyTable,EventTable)\
const PCAUTOMATION_TABLE AutomationTable =\
{\
    sizeof(PropertyTable[0]),\
    SIZEOF_ARRAY(PropertyTable),\
    (const PCPROPERTY_ITEM *) PropertyTable,\
    0,0,NULL,\
    sizeof(EventTable[0]),\
    SIZEOF_ARRAY(EventTable),\
    (const PCEVENT_ITEM *) EventTable,\
    0\
}

#define DEFINE_PCAUTOMATION_TABLE_EVENT(AutomationTable,EventTable)\
const PCAUTOMATION_TABLE AutomationTable =\
{\
    0,0,NULL,\
    0,0,NULL,\
    sizeof(EventTable[0]),\
    SIZEOF_ARRAY(EventTable),\
    (const PCEVENT_ITEM *) EventTable,\
    0\
}

/*****************************************************************************
 * PCPIN_DESCRIPTOR for IMiniport::GetDescription()
 *****************************************************************************
 * Description of a pin on the filter implemented by the miniport.
 *
 * MaxGlobalInstanceCount and MaxFilterInstanceCount may be zero to indicate
 * that the pin may not be instantiated, ULONG(-1) to indicate the pin may be
 * allocated any number of times, or any other value to indicate a specific
 * number of times the pin may be allocated.  MinFilterInstanceCount may not
 * be ULONG(-1) because it specifies a definite lower bound on the number of
 * instances of a pin that must exist in order for a filter to function.
 *
 * The KS pin descriptor may have zero interfaces and zero mediums.  The list
 * of interfaces is ignored in all cases.  The medium list will default to
 * a list containing only the standard medium (device I/O).
 *
 * The automation table pointer may be NULL indicating that no automation is
 * supported.
 */
typedef struct
{
    ULONG                       MaxGlobalInstanceCount;
    ULONG                       MaxFilterInstanceCount;
    ULONG                       MinFilterInstanceCount;
    const PCAUTOMATION_TABLE *  AutomationTable;
    KSPIN_DESCRIPTOR            KsPinDescriptor;
}
PCPIN_DESCRIPTOR, *PPCPIN_DESCRIPTOR;

/*****************************************************************************
 * PCNODE_DESCRIPTOR for IMiniport::GetDescription()
 *****************************************************************************
 * Description of a node in the filter implemented by the miniport.
 *
 * The automation table pointer may be NULL indicating that no automation is
 * supported.  The name GUID pointer may be NULL indicating that the type GUID
 * should be used to determine the node name.
 */
typedef struct
{
    ULONG                       Flags;
        const PCAUTOMATION_TABLE *  AutomationTable;
        const GUID *                Type;
        const GUID *                Name;
}
PCNODE_DESCRIPTOR, *PPCNODE_DESCRIPTOR;

/*****************************************************************************
 * PCCONNECTION_DESCRIPTOR for IMiniport::GetDescription()
 *****************************************************************************
 * Description of a node connection in the topology of the filter implemented
 * by the miniport.
 */
typedef KSTOPOLOGY_CONNECTION
PCCONNECTION_DESCRIPTOR, *PPCCONNECTION_DESCRIPTOR;

/*****************************************************************************
 * PCFILTER_DESCRIPTOR for IMiniport::GetDescription()
 *****************************************************************************
 * Description of the of the filter implemented by a miniport, including
 * pins, nodes, connections and properties.
 *
 * The version number should be zero.
 */
typedef struct
{
    ULONG                           Version;
        const PCAUTOMATION_TABLE *      AutomationTable;
    ULONG                           PinSize;
    ULONG                           PinCount;
    const PCPIN_DESCRIPTOR *        Pins;
    ULONG                           NodeSize;
    ULONG                           NodeCount;
    const PCNODE_DESCRIPTOR *       Nodes;
    ULONG                           ConnectionCount;
    const PCCONNECTION_DESCRIPTOR * Connections;
    ULONG                           CategoryCount;
    const GUID *                    Categories;
}
PCFILTER_DESCRIPTOR, *PPCFILTER_DESCRIPTOR;

/*****************************************************************************
 * PCFILTER_NODE for IMiniport::GetTopology()
 *****************************************************************************
 * The placeholder for the FromNode or ToNode fields in connections which
 * describe connections to the filter's pins.
 */
#define PCFILTER_NODE KSFILTER_NODE

/*****************************************************************************
 * IMiniport
 *****************************************************************************
 * Interface common to all miniports.
 */
DECLARE_INTERFACE_(IMiniport,IUnknown)
{
    DEFINE_ABSTRACT_UNKNOWN()   //  For IUnknown

    DEFINE_ABSTRACT_MINIPORT()  //  For IMiniport
};

typedef IMiniport *PMINIPORT;

#define IMP_IMiniport\
    STDMETHODIMP_(NTSTATUS) GetDescription\
    (   _Out_     PPCFILTER_DESCRIPTOR *  Description\
    );\
    STDMETHODIMP_(NTSTATUS) DataRangeIntersection\
    (   _In_      ULONG           PinId,\
        _In_      PKSDATARANGE    DataRange,\
        _In_      PKSDATARANGE    MatchingDataRange,\
        _In_      ULONG           OutputBufferLength,\
        _Out_writes_bytes_to_opt_(OutputBufferLength, *ResultantFormatLength)\
                  PVOID           ResultantFormat,\
        _Out_     PULONG          ResultantFormatLength\
    )

/*****************************************************************************
 * IPort
 *****************************************************************************
 * Interface common to all port lower edges.
 */
DECLARE_INTERFACE_(IPort,IUnknown)
{
    DEFINE_ABSTRACT_UNKNOWN()   //  For IUnknown

    DEFINE_ABSTRACT_PORT()      //  For IPort
};

typedef IPort *PPORT;

#ifdef PC_IMPLEMENTATION
#define IMP_IPort\
    STDMETHODIMP_(NTSTATUS) Init\
    (   _In_      PDEVICE_OBJECT  DeviceObject,\
        _In_opt_  PIRP            Irp,\
        _In_      PUNKNOWN        UnknownMiniport,\
        _In_opt_  PUNKNOWN        UnknownAdapter,\
        _In_      PRESOURCELIST   ResourceList\
    );\
    STDMETHODIMP_(NTSTATUS) GetDeviceProperty\
    (   _In_      DEVICE_REGISTRY_PROPERTY    DeviceProperty,\
        _In_      ULONG                       BufferLength,\
        _Out_     PVOID                       PropertyBuffer,\
        _Out_     PULONG                      ResultLength\
    );\
    STDMETHODIMP_(NTSTATUS) NewRegistryKey\
    (   _Out_     PREGISTRYKEY *      OutRegistryKey,\
        _In_opt_  PUNKNOWN            OuterUnknown,\
        _In_      ULONG               RegistryKeyType,\
        _In_      ACCESS_MASK         DesiredAccess,\
        _In_opt_  POBJECT_ATTRIBUTES  ObjectAttributes,\
        _In_opt_  ULONG               CreateOptions,\
        _Out_opt_ PULONG              Disposition\
    )
#endif

/*****************************************************************************
 * IPortMidi
 *****************************************************************************
 * Interface for MIDI port lower edge.
 */
DECLARE_INTERFACE_(IPortMidi,IPort)
{
    DEFINE_ABSTRACT_UNKNOWN()   //  For IUnknown

    DEFINE_ABSTRACT_PORT()      //  For IPort

    //  For IPortMidi
    STDMETHOD_(void,Notify)
    (   THIS_
        _In_opt_  PSERVICEGROUP   ServiceGroup    
    )   PURE;

    STDMETHOD_(void,RegisterServiceGroup)
    (   THIS_
        _In_      PSERVICEGROUP   ServiceGroup
    )   PURE;
};

typedef IPortMidi *PPORTMIDI;

#ifdef PC_IMPLEMENTATION
#define IMP_IPortMidi\
    IMP_IPort;\
    STDMETHODIMP_(void) Notify\
    (   _In_opt_  PSERVICEGROUP   ServiceGroup\
    );\
    STDMETHODIMP_(void) RegisterServiceGroup\
    (   _In_      PSERVICEGROUP   ServiceGroup\
    )
#endif

/*****************************************************************************
 * IMiniportMidiStream
 *****************************************************************************
 * Interface for MIDI miniport streams.
 */
DECLARE_INTERFACE_(IMiniportMidiStream,IUnknown)
{
    DEFINE_ABSTRACT_UNKNOWN()   //  For IUnknown

    STDMETHOD_(NTSTATUS,SetFormat)
    (   THIS_
        _In_      PKSDATAFORMAT   DataFormat
    )   PURE;

    STDMETHOD_(NTSTATUS,SetState)
    (   THIS_
        _In_      KSSTATE     State
    )   PURE;

    STDMETHOD_(NTSTATUS,Read)
    (   THIS_
        _In_      PVOID       BufferAddress,
        _In_      ULONG       BufferLength,
        _Out_     PULONG      BytesRead
    )   PURE;

    STDMETHOD_(NTSTATUS,Write)
    (   THIS_
        _In_      PVOID       BufferAddress,
        _In_      ULONG       BytesToWrite,
        _Out_     PULONG      BytesWritten
    )   PURE;
};

typedef IMiniportMidiStream *PMINIPORTMIDISTREAM;

#define IMP_IMiniportMidiStream\
    STDMETHODIMP_(NTSTATUS) SetFormat\
    (   _In_      PKSDATAFORMAT   DataFormat\
    );\
    STDMETHODIMP_(NTSTATUS) SetState\
    (   _In_      KSSTATE     State\
    );\
    STDMETHODIMP_(NTSTATUS) Read\
    (   _In_      PVOID       BufferAddress,\
        _In_      ULONG       BufferLength,\
        _Out_     PULONG      BytesRead\
    );\
    STDMETHODIMP_(NTSTATUS) Write\
    (   _In_      PVOID       BufferAddress,\
        _In_      ULONG       BytesToWrite,\
        _Out_     PULONG      BytesWritten\
    )

/*****************************************************************************
 * IMiniportMidi
 *****************************************************************************
 * Interface for MIDI miniports.
 */
DECLARE_INTERFACE_(IMiniportMidi,IMiniport)
{
    DEFINE_ABSTRACT_UNKNOWN()   //  For IUnknown

    DEFINE_ABSTRACT_MINIPORT()  //  For IMiniport

    //  For IMiniportMidi
    STDMETHOD_(NTSTATUS,Init)
    (   THIS_
        _In_      PUNKNOWN        UnknownAdapter,
        _In_      PRESOURCELIST   ResourceList,
        _In_      PPORTMIDI       Port,
        _Out_     PSERVICEGROUP * ServiceGroup
    )   PURE;

    STDMETHOD_(void,Service)
    (   THIS
    )   PURE;

    STDMETHOD_(NTSTATUS,NewStream)
    (   THIS_
        _Out_     PMINIPORTMIDISTREAM *   Stream,
        _In_opt_  PUNKNOWN                OuterUnknown,
        _In_      POOL_TYPE               PoolType,
        _In_      ULONG                   Pin,
        _In_      BOOLEAN                 Capture,
        _In_      PKSDATAFORMAT           DataFormat,
        _Out_     PSERVICEGROUP *         ServiceGroup
    )   PURE;
};

typedef IMiniportMidi *PMINIPORTMIDI;

#define IMP_IMiniportMidi\
    IMP_IMiniport;\
    STDMETHODIMP_(NTSTATUS) Init\
    (   _In_      PUNKNOWN        UnknownAdapter,\
        _In_      PRESOURCELIST   ResourceList,\
        _In_      PPORTMIDI       Port,\
        _Out_     PSERVICEGROUP * ServiceGroup\
    );\
    STDMETHODIMP_(void) Service\
    (   void\
    );\
    STDMETHODIMP_(NTSTATUS) NewStream\
    (   _Out_     PMINIPORTMIDISTREAM *   Stream,\
        _In_opt_  PUNKNOWN                OuterUnknown,\
        _In_      POOL_TYPE               PoolType,\
        _In_      ULONG                   Pin,\
        _In_      BOOLEAN                 Capture,\
        _In_      PKSDATAFORMAT           DataFormat,\
        _Out_     PSERVICEGROUP *         ServiceGroup\
    )

/*****************************************************************************
 * IPortDMus
 *****************************************************************************
 * See DMusicKS.h
 */

/*****************************************************************************
 * IMXF
 *****************************************************************************
 * See DMusicKS.h
 */

/*****************************************************************************
 * IAllocatorMXF
 *****************************************************************************
 * See DMusicKS.h
 */

/*****************************************************************************
 * IMiniportDMus
 *****************************************************************************
 * See DMusicKS.h
 */


/*****************************************************************************
 * IPortTopology
 *****************************************************************************
 * Interface for topology port lower edge.
 */
DECLARE_INTERFACE_(IPortTopology,IPort)
{
    DEFINE_ABSTRACT_UNKNOWN()   //  For IUnknown

    DEFINE_ABSTRACT_PORT()      //  For IPort
};

typedef IPortTopology *PPORTTOPOLOGY;

#ifdef PC_IMPLEMENTATION
#define IMP_IPortTopology IMP_IPort
#endif

/*****************************************************************************
 * IMiniportTopology
 *****************************************************************************
 * Interface for topology miniports.
 */
DECLARE_INTERFACE_(IMiniportTopology,IMiniport)
{
    DEFINE_ABSTRACT_UNKNOWN()   //  For IUnknown

    DEFINE_ABSTRACT_MINIPORT()  //  For IMiniport

    //  For IMiniportTopology
    STDMETHOD_(NTSTATUS,Init)
    (   THIS_
        _In_      PUNKNOWN                UnknownAdapter,
        _In_      PRESOURCELIST           ResourceList,
        _In_      PPORTTOPOLOGY           Port
    )   PURE;
};

typedef IMiniportTopology *PMINIPORTTOPOLOGY;

#define IMP_IMiniportTopology\
    IMP_IMiniport;\
    STDMETHODIMP_(NTSTATUS) Init\
    (   _In_      PUNKNOWN        UnknownAdapter,\
        _In_      PRESOURCELIST   ResourceList,\
        _In_      PPORTTOPOLOGY   Port\
    )

/*****************************************************************************
 * IPortWaveCyclic
 *****************************************************************************
 * Interface for cyclic wave port lower edge.
 */
DECLARE_INTERFACE_(IPortWaveCyclic,IPort)
{
    DEFINE_ABSTRACT_UNKNOWN()   //  For IUnknown

    DEFINE_ABSTRACT_PORT()      //  For IPort

    //  For IPortWaveCyclic
    STDMETHOD_(void,Notify)
    (   THIS_
        _In_      PSERVICEGROUP   ServiceGroup
    )   PURE;

    STDMETHOD_(NTSTATUS,NewSlaveDmaChannel)
    (   THIS_
        _Out_     PDMACHANNELSLAVE *  DmaChannel,
        _In_      PUNKNOWN            OuterUnknown,
        _In_      PRESOURCELIST       ResourceList,
        _In_      ULONG               DmaIndex,
        _In_      ULONG               MaximumLength,
        _In_      BOOLEAN             DemandMode,
        _In_      DMA_SPEED           DmaSpeed
    )   PURE;

    STDMETHOD_(NTSTATUS,NewMasterDmaChannel)
    (   THIS_
        _Out_     PDMACHANNEL *   DmaChannel,
        _In_      PUNKNOWN        OuterUnknown,
        _In_opt_  PRESOURCELIST   ResourceList,
        _In_      ULONG           MaximumLength,
        _In_      BOOLEAN         Dma32BitAddresses,
        _In_      BOOLEAN         Dma64BitAddresses,
        _In_      DMA_WIDTH       DmaWidth,
        _In_      DMA_SPEED       DmaSpeed
    )   PURE;
};

typedef IPortWaveCyclic *PPORTWAVECYCLIC;

#ifdef PC_IMPLEMENTATION
#define IMP_IPortWaveCyclic\
    IMP_IPort;\
    STDMETHODIMP_(void) Notify\
    (   _In_      PSERVICEGROUP   ServiceGroup\
    );\
    STDMETHODIMP_(NTSTATUS) NewSlaveDmaChannel\
    (   _Out_     PDMACHANNELSLAVE *  DmaChannel,\
        _In_      PUNKNOWN            OuterUnknown,\
        _In_      PRESOURCELIST       ResourceList,\
        _In_      ULONG               DmaIndex,\
        _In_      ULONG               MaximumLength,\
        _In_      BOOLEAN             DemandMode,\
        _In_      DMA_SPEED           DmaSpeed\
    );\
    STDMETHODIMP_(NTSTATUS) NewMasterDmaChannel\
    (   _Out_     PDMACHANNEL *   DmaChannel,\
        _In_      PUNKNOWN        OuterUnknown,\
        _In_opt_  PRESOURCELIST   ResourceList,\
        _In_      ULONG           MaximumLength,\
        _In_      BOOLEAN         Dma32BitAddresses,\
        _In_      BOOLEAN         Dma64BitAddresses,\
        _In_      DMA_WIDTH       DmaWidth,\
        _In_      DMA_SPEED       DmaSpeed\
    )
#endif

/*****************************************************************************
 * IMiniportWaveCyclicStream
 *****************************************************************************
 * Interface for cyclic wave miniport streams.
 */
DECLARE_INTERFACE_(IMiniportWaveCyclicStream,IUnknown)
{
    DEFINE_ABSTRACT_UNKNOWN()   //  For IUnknown

    STDMETHOD_(NTSTATUS,SetFormat)
    (   THIS_
        _In_      PKSDATAFORMAT   DataFormat
    )   PURE;

    STDMETHOD_(ULONG,SetNotificationFreq)
    (   THIS_
        _In_      ULONG           Interval,
        _Out_     PULONG          FrameSize
    )   PURE;

    STDMETHOD_(NTSTATUS,SetState)
    (   THIS_
        _In_      KSSTATE         State
    )   PURE;

    STDMETHOD_(NTSTATUS,GetPosition)
    (   THIS_
        _Out_     PULONG          Position
    )   PURE;

    STDMETHOD_(NTSTATUS,NormalizePhysicalPosition)
    (   THIS_
        _Inout_ PLONGLONG       PhysicalPosition
    )   PURE;

    STDMETHOD_(void,Silence)
    (   THIS_
        _Inout_updates_bytes_(ByteCount)   PVOID   Buffer,
        _In_                        ULONG   ByteCount
    )   PURE;
};

typedef IMiniportWaveCyclicStream *PMINIPORTWAVECYCLICSTREAM;

#define IMP_IMiniportWaveCyclicStream\
    STDMETHODIMP_(NTSTATUS) SetFormat\
    (   _In_      PKSDATAFORMAT   DataFormat\
    );\
    STDMETHODIMP_(ULONG) SetNotificationFreq\
    (   _In_      ULONG           Interval,\
        _Out_     PULONG          FrameSize\
    );\
    STDMETHODIMP_(NTSTATUS) SetState\
    (   _In_      KSSTATE         State\
    );\
    STDMETHODIMP_(NTSTATUS) GetPosition\
    (   _Out_     PULONG          Position\
    );\
    STDMETHODIMP_(NTSTATUS) NormalizePhysicalPosition\
    (   _Inout_ PLONGLONG        PhysicalPosition\
    );\
    STDMETHODIMP_(void) Silence\
    (   _Inout_updates_bytes_(ByteCount)   PVOID           Buffer,\
        _In_                        ULONG           ByteCount\
    )

/*****************************************************************************
 * IMiniportWaveCyclic
 *****************************************************************************
 * Interface for cyclic wave miniports.
 */
DECLARE_INTERFACE_(IMiniportWaveCyclic,IMiniport)
{
    DEFINE_ABSTRACT_UNKNOWN()   //  For IUnknown

    DEFINE_ABSTRACT_MINIPORT()  //  For IMiniport

    //  For IMiniportWaveCyclic
    STDMETHOD_(NTSTATUS,Init)
    (   THIS_
        _In_      PUNKNOWN        UnknownAdapter,
        _In_      PRESOURCELIST   ResourceList,
        _In_      PPORTWAVECYCLIC Port
    )   PURE;

    STDMETHOD_(NTSTATUS,NewStream)
    (   THIS_
        _Out_     PMINIPORTWAVECYCLICSTREAM * Stream,
        _In_opt_  PUNKNOWN                    OuterUnknown,
        _In_      POOL_TYPE                   PoolType,
        _In_      ULONG                       Pin,
        _In_      BOOLEAN                     Capture,
        _In_      PKSDATAFORMAT               DataFormat,
        _Out_     PDMACHANNEL *               DmaChannel,
        _Out_     PSERVICEGROUP *             ServiceGroup
    )   PURE;
};

typedef IMiniportWaveCyclic *PMINIPORTWAVECYCLIC;

#define IMP_IMiniportWaveCyclic\
    IMP_IMiniport;\
    STDMETHODIMP_(NTSTATUS) Init\
    (   _In_      PUNKNOWN        UnknownAdapter,\
        _In_      PRESOURCELIST   ResourceList,\
        _In_      PPORTWAVECYCLIC Port\
    );\
    STDMETHODIMP_(NTSTATUS) NewStream\
    (   _Out_     PMINIPORTWAVECYCLICSTREAM * Stream,\
        _In_opt_  PUNKNOWN                    OuterUnknown,\
        _In_      POOL_TYPE                   PoolType,\
        _In_      ULONG                       Pin,\
        _In_      BOOLEAN                     Capture,\
        _In_      PKSDATAFORMAT               DataFormat,\
        _Out_     PDMACHANNEL *               DmaChannel,\
        _Out_     PSERVICEGROUP *             ServiceGroup\
    )

/*****************************************************************************
 * IPortWavePci
 *****************************************************************************
 * Interface for PCI wave port lower edge.
 */
DECLARE_INTERFACE_(IPortWavePci,IPort)
{
    DEFINE_ABSTRACT_UNKNOWN()   //  For IUnknown

    DEFINE_ABSTRACT_PORT()      //  For IPort

    //  For IPortWavePci
    STDMETHOD_(void,Notify)
    (   THIS_
        _In_      PSERVICEGROUP       ServiceGroup
    )   PURE;

    STDMETHOD_(NTSTATUS,NewMasterDmaChannel)
    (   THIS_
        _Out_     PDMACHANNEL *       OutDmaChannel,
        _In_opt_  PUNKNOWN            OuterUnknown,
        _In_      POOL_TYPE           PoolType,
        _In_opt_  PRESOURCELIST       ResourceList,
        _In_      BOOLEAN             ScatterGather,
        _In_      BOOLEAN             Dma32BitAddresses,
        _In_      BOOLEAN             Dma64BitAddresses,
        _In_      BOOLEAN             IgnoreCount,
        _In_      DMA_WIDTH           DmaWidth,
        _In_      DMA_SPEED           DmaSpeed,
        _In_      ULONG               MaximumLength,
        _In_      ULONG               DmaPort
    )   PURE;
};

typedef IPortWavePci *PPORTWAVEPCI;

#ifdef PC_IMPLEMENTATION
#define IMP_IPortWavePci\
    IMP_IPort;\
    STDMETHODIMP_(void) Notify\
    (   _In_      PSERVICEGROUP       ServiceGroup\
    );\
    STDMETHODIMP_(NTSTATUS) NewMasterDmaChannel\
    (   _Out_     PDMACHANNEL *       OutDmaChannel,\
        _In_opt_  PUNKNOWN            OuterUnknown,\
        _In_      POOL_TYPE           PoolType,\
        _In_opt_  PRESOURCELIST       ResourceList,\
        _In_      BOOLEAN             ScatterGather,\
        _In_      BOOLEAN             Dma32BitAddresses,\
        _In_      BOOLEAN             Dma64BitAddresses,\
        _In_      BOOLEAN             IgnoreCount,\
        _In_      DMA_WIDTH           DmaWidth,\
        _In_      DMA_SPEED           DmaSpeed,\
        _In_      ULONG               MaximumLength,\
        _In_      ULONG               DmaPort\
    )
#endif

/*****************************************************************************
 * IPortWavePciStream
 *****************************************************************************
 * Interface for PCI wave port pin lower edge.
 */
DECLARE_INTERFACE_(IPortWavePciStream,IUnknown)
{
    DEFINE_ABSTRACT_UNKNOWN()   //  For IUnknown

    STDMETHOD_(NTSTATUS,GetMapping)
    (   THIS_
        _In_      PVOID               Tag,
        _Out_     PPHYSICAL_ADDRESS   PhysicalAddress,
        _Out_     PVOID *             VirtualAddress,
        _Out_     PULONG              ByteCount,
        _Out_     PULONG              Flags
    )   PURE;

    STDMETHOD_(NTSTATUS,ReleaseMapping)
    (   THIS_
        _In_      PVOID               Tag
    )   PURE;

    STDMETHOD_(NTSTATUS,TerminatePacket)
    (   THIS
    )   PURE;
};

typedef IPortWavePciStream *PPORTWAVEPCISTREAM;

#ifdef PC_IMPLEMENTATION
#define IMP_IPortWavePciStream\
    STDMETHODIMP_(NTSTATUS) GetMapping\
    (   _In_      PVOID               Tag,\
        _Out_     PPHYSICAL_ADDRESS   PhysicalAddress,\
        _Out_     PVOID *             VirtualAddress,\
        _Out_     PULONG              ByteCount,\
        _Out_     PULONG              Flags\
    );\
    STDMETHODIMP_(NTSTATUS) ReleaseMapping\
    (   _In_      PVOID               Tag\
    );\
    STDMETHODIMP_(NTSTATUS) TerminatePacket\
    (   void\
    )
#endif

/*****************************************************************************
 * IMiniportWavePciStream
 *****************************************************************************
 * Interface for PCI wave miniport streams.
 */
DECLARE_INTERFACE_(IMiniportWavePciStream,IUnknown)
{
    DEFINE_ABSTRACT_UNKNOWN()   //  For IUnknown

    STDMETHOD_(NTSTATUS,SetFormat)
    (   THIS_
        _In_      PKSDATAFORMAT   DataFormat
    )   PURE;

    STDMETHOD_(NTSTATUS,SetState)
    (   THIS_
        _In_      KSSTATE         State
    )   PURE;

    STDMETHOD_(NTSTATUS,GetPosition)
    (   THIS_
        _Out_     PULONGLONG      Position
    )   PURE;

    STDMETHOD_(NTSTATUS,NormalizePhysicalPosition)
    (
        THIS_
        _Inout_ PLONGLONG        PhysicalPosition
    )   PURE;

    STDMETHOD_(NTSTATUS,GetAllocatorFraming)
    (
        THIS_
        _Out_ PKSALLOCATOR_FRAMING AllocatorFraming
    ) PURE;

    STDMETHOD_(NTSTATUS,RevokeMappings)
    (   THIS_
        _In_      PVOID           FirstTag,
        _In_      PVOID           LastTag,
        _Out_     PULONG          MappingsRevoked
    )   PURE;

    STDMETHOD_(void,MappingAvailable)
    (   THIS
    )   PURE;

    STDMETHOD_(void,Service)
    (   THIS
    )   PURE;
};

typedef IMiniportWavePciStream *PMINIPORTWAVEPCISTREAM;

#define IMP_IMiniportWavePciStream\
    STDMETHODIMP_(NTSTATUS) SetFormat\
    (   _In_      PKSDATAFORMAT   DataFormat\
    );\
    STDMETHODIMP_(NTSTATUS) SetState\
    (   _In_      KSSTATE         State\
    );\
    STDMETHODIMP_(NTSTATUS) GetPosition\
    (   _Out_     PULONGLONG      Position\
    );\
    STDMETHODIMP_(NTSTATUS) NormalizePhysicalPosition\
    (   _Inout_ PLONGLONG        PhysicalPosition\
    );\
    STDMETHODIMP_(NTSTATUS) GetAllocatorFraming\
    (   _Out_ PKSALLOCATOR_FRAMING AllocatorFraming\
    );\
    STDMETHODIMP_(NTSTATUS) RevokeMappings\
    (   _In_      PVOID           FirstTag,\
        _In_      PVOID           LastTag,\
        _Out_     PULONG          MappingsRevoked\
    );\
    STDMETHODIMP_(void) MappingAvailable\
    (   void\
    );\
    STDMETHODIMP_(void) Service\
    (   void\
    )

/*****************************************************************************
 * IMiniportWavePci
 *****************************************************************************
 * Interface for PCI wave miniports.
 */
DECLARE_INTERFACE_(IMiniportWavePci,IMiniport)
{
    DEFINE_ABSTRACT_UNKNOWN()   //  For IUnknown

    DEFINE_ABSTRACT_MINIPORT()  //  For IMiniport

    //  For IMiniportWavePci
    STDMETHOD_(NTSTATUS,Init)
    (   THIS_
        _In_      PUNKNOWN            UnknownAdapter,
        _In_      PRESOURCELIST       ResourceList,
        _In_      PPORTWAVEPCI        Port,
        _Out_     PSERVICEGROUP *     ServiceGroup
    )   PURE;

    STDMETHOD_(NTSTATUS,NewStream)
    (   THIS_
        _Out_     PMINIPORTWAVEPCISTREAM *    Stream,
        _In_opt_  PUNKNOWN                    OuterUnknown,
        _When_((PoolType & NonPagedPoolMustSucceed) != 0,
           __drv_reportError("Must succeed pool allocations are forbidden. "
                 "Allocation failures cause a system crash"))
        _In_      POOL_TYPE                   PoolType,
        _In_      PPORTWAVEPCISTREAM          PortStream,
        _In_      ULONG                       Pin,
        _In_      BOOLEAN                     Capture,
        _In_      PKSDATAFORMAT               DataFormat,
        _Out_     PDMACHANNEL *               DmaChannel,
        _Out_     PSERVICEGROUP *             ServiceGroup
    )   PURE;

    STDMETHOD_(void,Service)
    (   THIS
    )   PURE;
};

typedef IMiniportWavePci *PMINIPORTWAVEPCI;

#define IMP_IMiniportWavePci\
    IMP_IMiniport;\
    STDMETHODIMP_(NTSTATUS) Init\
    (   _In_      PUNKNOWN            UnknownAdapter,\
        _In_      PRESOURCELIST       ResourceList,\
        _In_      PPORTWAVEPCI        Port,\
        _Out_     PSERVICEGROUP *     ServiceGroup\
    );\
    STDMETHODIMP_(NTSTATUS) NewStream\
    (   _Out_     PMINIPORTWAVEPCISTREAM *    Stream,\
        _In_opt_  PUNKNOWN                    OuterUnknown,\
        _When_((PoolType & NonPagedPoolMustSucceed) != 0,\
           __drv_reportError("Must succeed pool allocations are forbidden. "\
                 "Allocation failures cause a system crash"))\
        _In_      POOL_TYPE                   PoolType,\
        _In_      PPORTWAVEPCISTREAM          PortStream,\
        _In_      ULONG                       Pin,\
        _In_      BOOLEAN                     Capture,\
        _In_      PKSDATAFORMAT               DataFormat,\
        _Out_     PDMACHANNEL *               DmaChannel,\
        _Out_     PSERVICEGROUP *             ServiceGroup\
    );\
    STDMETHODIMP_(void) Service\
    (   void\
    )

#if (NTDDI_VERSION >= NTDDI_VISTA)
/*****************************************************************************
 * IPortWaveRT
 *****************************************************************************
 * Interface for WaveRT port lower edge.
 */
DECLARE_INTERFACE_(IPortWaveRT,IPort)
{
    DEFINE_ABSTRACT_UNKNOWN()   //  For IUnknown

    DEFINE_ABSTRACT_PORT()      //  For IPort
};

typedef IPortWaveRT *PPORTWAVERT;

#ifdef PC_IMPLEMENTATION
#define IMP_IPortWaveRT\
    IMP_IPort
#endif

/*****************************************************************************
 * IPortWaveRTStream
 *****************************************************************************
 * Interface for WaveRT stream port lower edge.
 */
DECLARE_INTERFACE_(IPortWaveRTStream,IUnknown)
{
    DEFINE_ABSTRACT_UNKNOWN()   //  For IUnknown

    STDMETHOD_(PMDL, AllocatePagesForMdl)
    (   THIS_
        _In_      PHYSICAL_ADDRESS    HighAddress,
        _In_      SIZE_T              TotalBytes
    )   PURE;

    STDMETHOD_(PMDL, AllocateContiguousPagesForMdl)
    (   THIS_
        _In_      PHYSICAL_ADDRESS    LowAddress,
        _In_      PHYSICAL_ADDRESS    HighAddress,
        _In_      SIZE_T              TotalBytes
    )   PURE;

    STDMETHOD_(PVOID, MapAllocatedPages)
    (   THIS_
        _In_      PMDL                    MemoryDescriptorList,
        _In_      MEMORY_CACHING_TYPE     CacheType
    )   PURE;

    STDMETHOD_(VOID, UnmapAllocatedPages)
    (   THIS_
        _In_      PVOID   BaseAddress,
        _In_      PMDL    MemoryDescriptorList
    )   PURE;

    STDMETHOD_(VOID, FreePagesFromMdl)
    (   THIS_
        _In_      PMDL    MemoryDescriptorList
    )   PURE;

    STDMETHOD_(ULONG, GetPhysicalPagesCount)
    (   THIS_
        _In_      PMDL    MemoryDescriptorList
    )   PURE;

    STDMETHOD_(PHYSICAL_ADDRESS, GetPhysicalPageAddress)
    (   THIS_
        _In_      PMDL    MemoryDescriptorList,
        _In_      ULONG   Index
    )   PURE;
};

typedef IPortWaveRTStream *PPORTWAVERTSTREAM;

#ifdef PC_IMPLEMENTATION
#define IMP_IPortWaveRTStream\
    STDMETHODIMP_(PMDL) AllocatePagesForMdl\
    (\
        _In_      PHYSICAL_ADDRESS    HighAddress,\
        _In_      SIZE_T              TotalBytes\
    );\
    STDMETHODIMP_(PMDL) AllocateContiguousPagesForMdl\
    (\
        _In_      PHYSICAL_ADDRESS    LowAddress,\
        _In_      PHYSICAL_ADDRESS    HighAddress,\
        _In_      SIZE_T              TotalBytes\
    );\
    STDMETHODIMP_(PVOID) MapAllocatedPages\
    (\
        _In_      PMDL                    MemoryDescriptorList,\
        _In_      MEMORY_CACHING_TYPE     CacheType\
    );\
    STDMETHODIMP_(VOID) UnmapAllocatedPages\
    (\
        _In_      PVOID   BaseAddress,\
        _In_      PMDL    MemoryDescriptorList\
    );\
    STDMETHODIMP_(VOID) FreePagesFromMdl\
    (\
        _In_      PMDL    MemoryDescriptorList\
    );\
    STDMETHODIMP_(ULONG) GetPhysicalPagesCount\
    (\
        _In_      PMDL    MemoryDescriptorList\
    );\
    STDMETHODIMP_(PHYSICAL_ADDRESS) GetPhysicalPageAddress\
    (\
        _In_      PMDL    MemoryDescriptorList,\
        _In_      ULONG   Index\
    )
#endif

/*****************************************************************************
 * IMiniportWaveRTStream
 *****************************************************************************
 * Interface for WaveRT miniport stream.
 */
DECLARE_INTERFACE_(IMiniportWaveRTStream,IUnknown)
{
    DEFINE_ABSTRACT_UNKNOWN()   //  For IUnknown
    DEFINE_ABSTRACT_MINIPORTWAVERTSTREAM()   //  For IMiniportWaveRTStream
};

typedef IMiniportWaveRTStream *PMINIPORTWAVERTSTREAM;

#define IMP_IMiniportWaveRTStream\
    STDMETHODIMP_(NTSTATUS) SetFormat\
    (   _In_      PKSDATAFORMAT   DataFormat\
    );\
    STDMETHODIMP_(NTSTATUS) SetState\
    (   _In_      KSSTATE         State\
    );\
    STDMETHODIMP_(NTSTATUS) GetPosition\
    (   _Out_     PKSAUDIO_POSITION   Position\
    );\
    STDMETHODIMP_(NTSTATUS) AllocateAudioBuffer\
    (\
        _In_      ULONG                   RequestedSize,\
        _Out_     PMDL                    *AudioBufferMdl,\
        _Out_     ULONG                   *ActualSize,\
        _Out_     ULONG                   *OffsetFromFirstPage,\
        _Out_     MEMORY_CACHING_TYPE     *CacheType\
    );\
    STDMETHODIMP_(VOID) FreeAudioBuffer\
    (\
        _In_opt_  PMDL                    AudioBufferMdl,\
        _In_  ULONG                   BufferSize\
    );\
    STDMETHODIMP_(VOID) GetHWLatency\
    (\
        _Out_ KSRTAUDIO_HWLATENCY     *hwLatency\
    );\
    STDMETHODIMP_(NTSTATUS) GetPositionRegister\
    (\
        _Out_ KSRTAUDIO_HWREGISTER    *Register\
    );\
    STDMETHODIMP_(NTSTATUS) GetClockRegister\
    (\
        _Out_ KSRTAUDIO_HWREGISTER    *Register\
    )


/*****************************************************************************
 * IMiniportWaveRTStreamNotification
 *****************************************************************************
 * Interface for WaveRT miniport stream buffer notification extensions.
 */
DECLARE_INTERFACE_(IMiniportWaveRTStreamNotification,IMiniportWaveRTStream)
{
    DEFINE_ABSTRACT_UNKNOWN()   //  For IUnknown

    DEFINE_ABSTRACT_MINIPORTWAVERTSTREAM()  //  For IMiniportWaveRTStream

    STDMETHOD_(NTSTATUS,AllocateBufferWithNotification)
    (   THIS_
        _In_      ULONG                   NotificationCount,
        _In_      ULONG                   RequestedSize,
        _Out_     PMDL                    *AudioBufferMdl,
        _Out_     ULONG                   *ActualSize,
        _Out_     ULONG                   *OffsetFromFirstPage,
        _Out_     MEMORY_CACHING_TYPE     *CacheType
    )   PURE;

    STDMETHOD_(VOID,FreeBufferWithNotification)
    (   THIS_
        _In_      PMDL            AudioBufferMdl,
        _In_      ULONG           BufferSize
    )   PURE;

    STDMETHOD_(NTSTATUS,RegisterNotificationEvent)
    (   THIS_
        _In_      PKEVENT         NotificationEvent
    )   PURE;

    STDMETHOD_(NTSTATUS,UnregisterNotificationEvent)
    (   THIS_
        _In_      PKEVENT         NotificationEvent
    )   PURE;
};

typedef IMiniportWaveRTStreamNotification *PMINIPORTWAVERTSTREAMNOTIFICATION;

#define IMP_IMiniportWaveRTStreamNotification\
    STDMETHODIMP_(NTSTATUS) AllocateBufferWithNotification\
    (\
        _In_      ULONG                   NotificationCount,\
        _In_      ULONG                   RequestedSize,\
        _Out_     PMDL                    *AudioBufferMdl,\
        _Out_     ULONG                   *ActualSize,\
        _Out_     ULONG                   *OffsetFromFirstPage,\
        _Out_     MEMORY_CACHING_TYPE     *CacheType\
    );\
    STDMETHODIMP_(VOID) FreeBufferWithNotification\
    (\
        _In_      PMDL                    AudioBufferMdl,\
        _In_      ULONG                   BufferSize\
    );\
    STDMETHODIMP_(NTSTATUS) RegisterNotificationEvent\
    (\
        _In_      PKEVENT                 NotificationEvent\
    );\
    STDMETHODIMP_(NTSTATUS) UnregisterNotificationEvent\
    (\
        _In_      PKEVENT                 NotificationEvent\
    )

#if (NTDDI_VERSION >= NTDDI_THRESHOLD)

/*****************************************************************************
 * IMiniportWaveRTInputStream
 *****************************************************************************
 * Interface for WaveRT miniport stream read packets.
 */
DECLARE_INTERFACE_(IMiniportWaveRTInputStream, IUnknown)
{
    DEFINE_ABSTRACT_UNKNOWN()                               //  For IUnknown

    _IRQL_requires_max_(PASSIVE_LEVEL)
    STDMETHOD_(NTSTATUS, GetReadPacket)
        (THIS_
        _Out_ ULONG     *PacketNumber,
        _Out_ DWORD     *Flags,
        _Out_ ULONG64   *PerformanceCounterValue,
        _Out_ BOOL      *MoreData
        )   PURE;

};

typedef IMiniportWaveRTInputStream *PMINIPORTWAVERTINPUTSTREAM;

#define IMP_IMiniportWaveRTInputStream                          \
    _IRQL_requires_max_(PASSIVE_LEVEL)                          \
    STDMETHODIMP_(NTSTATUS) GetReadPacket                       \
    (                                                           \
        _Out_ ULONG     *PacketNumber,                          \
        _Out_ DWORD     *Flags,                                 \
        _Out_ ULONG64   *PerformanceCounterValue,               \
        _Out_ BOOL      *MoreData                               \
    );

/*****************************************************************************
 * IMiniportWaveRTOutputStream
 *****************************************************************************
 * Interface for WaveRT miniport stream write packets.
 */
DECLARE_INTERFACE_(IMiniportWaveRTOutputStream, IUnknown)
{
    DEFINE_ABSTRACT_UNKNOWN()                               //  For IUnknown

    _IRQL_requires_max_(PASSIVE_LEVEL)
    STDMETHOD_(NTSTATUS, SetWritePacket)
    (
        THIS_
        _In_ ULONG      PacketNumber,
        _In_ DWORD      Flags,
        _In_ ULONG      EosPacketLength
    ) PURE;

    _IRQL_requires_max_(PASSIVE_LEVEL)
    STDMETHOD_(NTSTATUS, GetOutputStreamPresentationPosition)
    (
        THIS_
        _Out_ KSAUDIO_PRESENTATION_POSITION *pPresentationPosition
    ) PURE;

    _IRQL_requires_max_(PASSIVE_LEVEL)
    STDMETHOD_(NTSTATUS, GetPacketCount)
    (
        THIS_
        _Out_ ULONG		*pPacketCount
    ) PURE;
};

typedef IMiniportWaveRTOutputStream *PMINIPORTWAVERTOUTPUTSTREAM;

#define IMP_IMiniportWaveRTOutputStream                             \
    _IRQL_requires_max_(PASSIVE_LEVEL)                              \
    STDMETHOD_(NTSTATUS, SetWritePacket)                            \
    (                                                               \
        _In_ ULONG      PacketNumber,                               \
        _In_ DWORD      Flags,                                      \
        _In_ ULONG      EosPacketLength                             \
    );                                                              \
                                                                    \
    _IRQL_requires_max_(PASSIVE_LEVEL)                              \
    STDMETHOD_(NTSTATUS, GetOutputStreamPresentationPosition)       \
    (                                                               \
        _Out_ KSAUDIO_PRESENTATION_POSITION *pPresentationPosition  \
    );                                                              \
                                                                    \
    _IRQL_requires_max_(PASSIVE_LEVEL)                              \
    STDMETHOD_(NTSTATUS, GetPacketCount)                            \
    (                                                               \
        _Out_ ULONG		*pPacketCount                               \
    );
    
#endif

/*****************************************************************************
 * IMiniportWaveRT
 *****************************************************************************
 * Interface for WaveRT miniports.
 */
DECLARE_INTERFACE_(IMiniportWaveRT,IMiniport)
{
    DEFINE_ABSTRACT_UNKNOWN()   //  For IUnknown

    DEFINE_ABSTRACT_MINIPORT()  //  For IMiniport

    //  For IMiniportWaveRT
    STDMETHOD_(NTSTATUS,Init)
    (   THIS_
        _In_      PUNKNOWN            UnknownAdapter,
        _In_      PRESOURCELIST       ResourceList,
        _In_      PPORTWAVERT             Port
    )   PURE;

    STDMETHOD_(NTSTATUS,NewStream)
    (   THIS_
        _Out_     PMINIPORTWAVERTSTREAM *         Stream,
        _In_      PPORTWAVERTSTREAM               PortStream,
        _In_      ULONG                       Pin,
        _In_      BOOLEAN                     Capture,
        _In_      PKSDATAFORMAT               DataFormat
    )   PURE;

    STDMETHOD_(NTSTATUS,GetDeviceDescription)
    (   THIS_
        _Out_     PDEVICE_DESCRIPTION     DeviceDescription
    )   PURE;
};

typedef IMiniportWaveRT *PMINIPORTWAVERT;

#define IMP_IMiniportWaveRT\
    IMP_IMiniport;\
    STDMETHODIMP_(NTSTATUS) Init\
    (   _In_      PUNKNOWN            UnknownAdapter,\
        _In_      PRESOURCELIST       ResourceList,\
        _In_      PPORTWAVERT             Port\
    );\
    STDMETHODIMP_(NTSTATUS) NewStream\
    (   _Out_     PMINIPORTWAVERTSTREAM *         Stream,\
        _In_      PPORTWAVERTSTREAM               PortStream,\
        _In_      ULONG                       Pin,\
        _In_      BOOLEAN                     Capture,\
        _In_      PKSDATAFORMAT               DataFormat\
    );\
    STDMETHODIMP_(NTSTATUS) GetDeviceDescription\
    (   _Out_     PDEVICE_DESCRIPTION     DeviceDescription\
    )

/*****************************************************************************
 * IMiniportAudioSignalProcessing
 *****************************************************************************
 * Interface for signal processing discover.
 */
DECLARE_INTERFACE_(IMiniportAudioSignalProcessing,IUnknown)
{
    DEFINE_ABSTRACT_UNKNOWN()   //  For IUnknown

    //  For IMiniportAudioSignalProcessing
    STDMETHOD_(NTSTATUS,GetModes)
    (   THIS_
        _In_                                        ULONG   Pin,
        _Out_writes_opt_(*NumSignalProcessingModes) GUID*   SignalProcessingModes,
        _Inout_                                     ULONG*  NumSignalProcessingModes
    )   PURE;
};

typedef IMiniportAudioSignalProcessing *PMINIPORTAudioSignalProcessing;

#define IMP_IMiniportAudioSignalProcessing\
    STDMETHODIMP_(NTSTATUS) GetModes\
    (\
        _In_                                        ULONG   Pin,\
        _Out_writes_opt_(*NumSignalProcessingModes) GUID*   SignalProcessingModes,\
        _Inout_                                     ULONG*  NumSignalProcessingModes\
    );
#endif

/*****************************************************************************
 * IAdapterPowerManagement
 *****************************************************************************
 * An interface that adapters should implement and
 * register if they want power management messages.
 * Register this interface with PortCls via the
 * PcRegisterAdapterPowerManagement() call.
 *
 * NOTE: If you want to fill in the caps struct
 * for your device, register the interface
 * with PortCls in or before your AddDevice()
 * function. The OS queries devices before
 * StartDevice() gets called.
 */
DECLARE_INTERFACE_(IAdapterPowerManagement,IUnknown)
{
    DEFINE_ABSTRACT_UNKNOWN()   //  For IUnknown

    // Called by PortCls to tell the device
    // to change to the new power state.
    //
    STDMETHOD_(void,PowerChangeState)
    (   THIS_
        _In_      POWER_STATE     NewState
    )   PURE;

    // Called by PortCls to ask whether the device
    // can change to the requested power state.
    //
    STDMETHOD_(NTSTATUS,QueryPowerChangeState)
    (   THIS_
        _In_      POWER_STATE     NewStateQuery
    )   PURE;

    // Called by PortCls to get the power management
    // capabilities of the device. See ACPI documentation
    // for data about the DEVICE_CAPABILITIES struct.
    //
    STDMETHOD_(NTSTATUS,QueryDeviceCapabilities)
    (   THIS_
        _Inout_updates_bytes_(sizeof(DEVICE_CAPABILITIES)) PDEVICE_CAPABILITIES    PowerDeviceCaps
    )   PURE;
};

typedef IAdapterPowerManagement *PADAPTERPOWERMANAGEMENT;

#define IMP_IAdapterPowerManagement\
    STDMETHODIMP_(void) PowerChangeState\
    (   _In_      POWER_STATE     NewState\
    );\
    STDMETHODIMP_(NTSTATUS) QueryPowerChangeState\
    (   _In_      POWER_STATE     NewStateQuery\
    );\
    STDMETHODIMP_(NTSTATUS) QueryDeviceCapabilities\
    (   _Inout_updates_bytes_(sizeof(DEVICE_CAPABILITIES)) PDEVICE_CAPABILITIES    PowerDeviceCaps\
    )

/*****************************************************************************
 * IAdapterPowerManagement2
 *****************************************************************************
 * An interface that adapters should implement and
 * register if they want power management messages.
 * Register this interface with PortCls via the
 * PcRegisterAdapterPowerManagement() call.
 *
 * NOTE: If you want to fill in the caps struct
 * for your device, register the interface
 * with PortCls in or before your AddDevice()
 * function. The OS queries devices before
 * StartDevice() gets called.
 */
DECLARE_INTERFACE_(IAdapterPowerManagement2,IUnknown)
{
    DEFINE_ABSTRACT_UNKNOWN()   //  For IUnknown
    DEFINE_ABSTRACT_ADAPTERPOWERMANAGEMENT()

    // Called by PortCls to tell the device
    // to change to the new power state.
    //
    STDMETHOD_(void,PowerChangeState2)
    (   THIS_
        _In_      DEVICE_POWER_STATE     NewDeviceState,
        _In_      SYSTEM_POWER_STATE     NewSystemState
    )   PURE;
};

typedef IAdapterPowerManagement2 *PADAPTERPOWERMANAGEMENT2;

#define IMP_IAdapterPowerManagement2\
    IMP_IAdapterPowerManagement;\
    STDMETHODIMP_(void) PowerChangeState2\
    (   _In_      DEVICE_POWER_STATE     NewDeviceState,\
        _In_      SYSTEM_POWER_STATE     NewSystemState\
    );\

/*****************************************************************************
 * PC_EXIT_LATENCY
 *****************************************************************************
 * Specifies the exit latency required to return from a low device power state
 * to a fully running device power state (D0)
 */
typedef enum _PC_EXIT_LATENCY {
    PcExitLatencyInstant = 0,
    PcExitLatencyFast,
    PcExitLatencyResponsive
} PC_EXIT_LATENCY, *PPC_EXIT_LATENCY;

/*****************************************************************************
 * IAdapterPowerManagement3
 *****************************************************************************
 * An interface that adapters should implement and
 * register if they want power management messages.
 * Register this interface with PortCls via the
 * PcRegisterAdapterPowerManagement() call.
 *
 * NOTE: If you want to fill in the caps struct
 * for your device, register the interface
 * with PortCls in or before your AddDevice()
 * function. The OS queries devices before
 * StartDevice() gets called.
 */
DECLARE_INTERFACE_(IAdapterPowerManagement3,IUnknown)
{
    DEFINE_ABSTRACT_UNKNOWN()   //  For IUnknown
    DEFINE_ABSTRACT_ADAPTERPOWERMANAGEMENT()
    DEFINE_ABSTRACT_ADAPTERPOWERMANAGEMENT2()
    
    // Called by PortCls to tell the device
    // to change to the new power state.
    //
    STDMETHOD_(void,PowerChangeState3)
    (   THIS_
        _In_    DEVICE_POWER_STATE      NewDeviceState,
        _In_    SYSTEM_POWER_STATE      NewSystemState,
        _In_    PC_EXIT_LATENCY         D3ExitLatency
    )   PURE;

    // Called by PortCls to tell the device
    // of a change in resume latency tolerance
    //
    STDMETHOD_(NTSTATUS,D3ExitLatencyChanged)
    (   THIS_
        _In_      PC_EXIT_LATENCY       NewD3ExitLatency
    )   PURE;
};

typedef IAdapterPowerManagement3 *PADAPTERPOWERMANAGEMENT3;

#define IMP_IAdapterPowerManagement3\
    IMP_IAdapterPowerManagement2;\
    STDMETHODIMP_(void) PowerChangeState3\
    (   _In_    DEVICE_POWER_STATE      NewDeviceState,\
        _In_    SYSTEM_POWER_STATE      NewSystemState,\
        _In_    PC_EXIT_LATENCY         D3ExitLatency\
    );\
    STDMETHODIMP_(NTSTATUS) D3ExitLatencyChanged\
    (   _In_    PC_EXIT_LATENCY         NewD3ExitLatency\
    );\

/*****************************************************************************
 * IPowerNotify
 *****************************************************************************
 * An OPTIONAL interface for miniports and pins to implement to
 * enable them to get device power state change notifications.
 */
DECLARE_INTERFACE_(IPowerNotify,IUnknown)
{
    DEFINE_ABSTRACT_UNKNOWN()   //  For IUnknown

    // Called by the port to notify registered miniports
    // and pins of device power state changes, so that
    // appropriate context save/restore can take place.
    //
    STDMETHOD_(void,PowerChangeNotify)
    (   THIS_
        _In_      POWER_STATE     PowerState
    )   PURE;
};

typedef IPowerNotify *PPOWERNOTIFY;

#define IMP_IPowerNotify\
    STDMETHODIMP_(void) PowerChangeNotify\
    (   _In_  POWER_STATE     PowerState\
    )

#if (NTDDI_VERSION >= NTDDI_WINXP)
/*****************************************************************************
 * IPinCount
 *****************************************************************************
 * An OPTIONAL interface for miniports to implement to
 * enable them to get pin count queries, for dynamic pin counts.
 */
DECLARE_INTERFACE_(IPinCount,IUnknown)
{
    DEFINE_ABSTRACT_UNKNOWN()   //  For IUnknown

    // Called by the port to notify registered miniports
    // of pin count queries, so that appropriate pin
    // count manipulation can take place.
    //
    STDMETHOD_(void,PinCount)
    (   THIS_
        _In_      ULONG   PinId,
        _Inout_  PULONG  FilterNecessary,
        _Inout_  PULONG  FilterCurrent,
        _Inout_  PULONG  FilterPossible,
        _Inout_  PULONG  GlobalCurrent,
        _Inout_  PULONG  GlobalPossible
    )   PURE;
};

typedef IPinCount *PPINCOUNT;

#define IMP_IPinCount                       \
    STDMETHODIMP_(void) PinCount            \
    (   _In_      ULONG   PinId,            \
        _Inout_  PULONG  FilterNecessary,   \
        _Inout_  PULONG  FilterCurrent,     \
        _Inout_  PULONG  FilterPossible,    \
        _Inout_  PULONG  GlobalCurrent,     \
        _Inout_  PULONG  GlobalPossible     \
    )
#endif

/*****************************************************************************
 * IPortEvents
 *****************************************************************************
 * An interface implemented by ports to provide
 * notification event helpers to miniports.
 */
DECLARE_INTERFACE_(IPortEvents,IUnknown)
{
    DEFINE_ABSTRACT_UNKNOWN()   //  For IUnknown

    STDMETHOD_(void,AddEventToEventList)
    (   THIS_
        _In_  PKSEVENT_ENTRY      EventEntry
    )   PURE;
    STDMETHOD_(void,GenerateEventList)
    (   THIS_
        _In_opt_ GUID*   Set,
        _In_     ULONG   EventId,
        _In_     BOOL    PinEvent,
        _In_     ULONG   PinId,
        _In_     BOOL    NodeEvent,
        _In_     ULONG   NodeId
    )   PURE;
};

typedef IPortEvents *PPORTEVENTS;

#define IMP_IPortEvents\
    STDMETHODIMP_(void) AddEventToEventList\
    (   _In_  PKSEVENT_ENTRY  EventEntry\
    );\
    STDMETHODIMP_(void) GenerateEventList\
    (   _In_opt_    GUID*   Set,\
        _In_        ULONG   EventId,\
        _In_        BOOL    PinEvent,\
        _In_        ULONG   PinId,\
        _In_        BOOL    NodeEvent,\
        _In_        ULONG   NodeId\
    )

#if (NTDDI_VERSION >= NTDDI_WINXP)
/*****************************************************************************
 * IDrmPort
 *****************************************************************************
 * An optional interface implemented by ports
 * to provide DRM functionality to miniports.
 */
DECLARE_INTERFACE_(IDrmPort,IUnknown)
{
    DEFINE_ABSTRACT_UNKNOWN()   //  For IUnknown

    DEFINE_ABSTRACT_DRMPORT()   //  For IDrmPort
};

typedef IDrmPort *PDRMPORT;

#define IMP_IDrmPort\
    STDMETHODIMP_(NTSTATUS) CreateContentMixed          \
    (   _In_  PULONG      paContentId,                  \
        _In_  ULONG       cContentId,                   \
        _Out_ PULONG      pMixedContentId               \
    );                                                  \
    STDMETHODIMP_(NTSTATUS) DestroyContent              \
    (   _In_ ULONG        ContentId                     \
    );                                                  \
    STDMETHODIMP_(NTSTATUS) ForwardContentToFileObject  \
    (   _In_ ULONG        ContentId,                    \
        _In_ PFILE_OBJECT FileObject                    \
    );                                                  \
    STDMETHODIMP_(NTSTATUS) ForwardContentToInterface   \
    (   _In_ ULONG        ContentId,                    \
        _In_ PUNKNOWN     pUnknown,                     \
        _In_ ULONG        NumMethods                    \
    );                                                  \
    STDMETHODIMP_(NTSTATUS) GetContentRights            \
    (   _In_  ULONG       ContentId,                    \
        _Out_ PDRMRIGHTS  DrmRights                     \
    )

/*****************************************************************************
 * IDrmPort2
 *****************************************************************************
 * An optional interface implemented by ports
 * to provide DRM functionality to miniports.
 * This is identical to IDrmPort with the
 * addition of two new routines.
 */
DECLARE_INTERFACE_(IDrmPort2,IDrmPort)
{
    DEFINE_ABSTRACT_UNKNOWN()   //  For IUnknown

    DEFINE_ABSTRACT_DRMPORT()   //  For IDrmPort

    STDMETHOD_(NTSTATUS,AddContentHandlers)
    (   THIS_
        _In_                        ULONG        ContentId,
        _In_reads_(NumHandlers)    PVOID      * paHandlers,
        _In_                        ULONG        NumHandlers
    )   PURE;
    STDMETHOD_(NTSTATUS,ForwardContentToDeviceObject)
    (   THIS_
        _In_ ULONG          ContentId,
        _In_ PVOID          Reserved,
        _In_ PCDRMFORWARD   DrmForward
    )   PURE;
};

typedef IDrmPort2 *PDRMPORT2;

#define IMP_IDrmPort2                                   \
    IMP_IDrmPort;                                       \
    STDMETHODIMP_(NTSTATUS) AddContentHandlers          \
    (   _In_                        ULONG        ContentId, \
        _In_reads_(NumHandlers)    PVOID      * paHandlers,\
        _In_                        ULONG        NumHandlers\
    );                                                  \
    STDMETHODIMP_(NTSTATUS) ForwardContentToDeviceObject\
    (   _In_ ULONG          ContentId,                  \
        _In_ PVOID          Reserved,                   \
        _In_ PCDRMFORWARD   DrmForward                  \
    )

/*****************************************************************************
 * IPortClsVersion
 *****************************************************************************
 * What version of PortCls is this?
 */
DECLARE_INTERFACE_(IPortClsVersion,IUnknown)
{
    STDMETHOD_(DWORD,GetVersion)
    (   THIS
    )   PURE;
};

typedef IPortClsVersion *PPORTCLSVERSION;


/*****************************************************************************
 * IPortClsSubdeviceEx
 *****************************************************************************
 * Provide access to new subdevice registration APIs
 * PcRegisterSubdeviceEx and PcEnableSubDeviceInterfaces
 */
DECLARE_INTERFACE_(IPortClsSubdeviceEx,IUnknown)
{
    DEFINE_ABSTRACT_UNKNOWN()   //  For IUnknown

    STDMETHOD_(NTSTATUS, UpdatePinDescriptor)           
    (                                                       
        _In_      ULONG             _ulPinId,
        _In_      ULONG             _ulFlags,
        _In_      PPCPIN_DESCRIPTOR _pPinDescriptor
    ) PURE;
};

#define PCUPDATE_PIN_DESC_FLAG_DATARANGES 0x00000001

typedef IPortClsSubdeviceEx *PPORTCLSSubdeviceEx;

/*****************************************************************************
 * IPortClsPower
 *****************************************************************************
 * Used to access the adapter power management functions.
 */
DECLARE_INTERFACE_(IPortClsPower,IUnknown)
{
    STDMETHOD_(NTSTATUS,RegisterAdapterPowerManagement)
    (   
        _In_      PUNKNOWN        _pUnknown,
        _In_      PDEVICE_OBJECT  _DeviceObject
    )   PURE;
    STDMETHOD_(NTSTATUS,UnregisterAdapterPowerManagement)
    (   
        _In_      PDEVICE_OBJECT  _DeviceObject
    )   PURE;
    STDMETHOD_(NTSTATUS,SetIdlePowerManagement)
    (
        _In_      PDEVICE_OBJECT  _DeviceObject,
        _In_      BOOLEAN         _bEnabled
    )   PURE;
};

typedef IPortClsPower *PPORTCLSPOWER;

/*****************************************************************************
 * PCPFNRUNTIME_POWER_CONTROL_CALLBACK
 *****************************************************************************
 * Callback invoked on miniport when runtime framework makes a power control 
 * on PortCls
 */
typedef
NTSTATUS
_IRQL_requires_max_(DISPATCH_LEVEL)
(*PCPFNRUNTIME_POWER_CONTROL_CALLBACK)
(
    _In_        LPCGUID PowerControlCode,
    _In_opt_    PVOID   InBuffer,
    _In_        SIZE_T  InBufferSize,
    _Out_opt_   PVOID   OutBuffer,
    _In_        SIZE_T  OutBufferSize,
    _Out_opt_   PSIZE_T BytesReturned,
    _In_opt_    PVOID   Context
);

/*****************************************************************************
 * IPortClsRuntimePower
 *****************************************************************************
 * Used to access runtime power management capabilities.
 */
DECLARE_INTERFACE_(IPortClsRuntimePower,IUnknown)
{
    STDMETHOD_(NTSTATUS,SendPowerControl)
    (
        _In_        PDEVICE_OBJECT  _DeviceObject,
        _In_        LPCGUID         _PowerControlCode,
        _In_opt_    PVOID           _InBuffer,
        _In_        SIZE_T          _InBufferSize,
        _Out_opt_   PVOID           _OutBuffer,
        _In_        SIZE_T          _OutBufferSize,
        _Out_opt_   PSIZE_T         _BytesReturned
    )   PURE;
    STDMETHOD_(NTSTATUS,RegisterPowerControlCallback)
    (
        _In_        PDEVICE_OBJECT                      _DeviceObject,
        _In_        PCPFNRUNTIME_POWER_CONTROL_CALLBACK _Callback,
        _In_opt_    PVOID                               _Context
    ) PURE;
    STDMETHOD_(NTSTATUS,UnregisterPowerControlCallback)
    (
        _In_        PDEVICE_OBJECT  _DeviceObject
    ) PURE;
};

typedef IPortClsRuntimePower *PPORTCLSRUNTIMEPOWER;

typedef enum 
{
    eMINIPORT_IHV_DEFINED = 0, 
    eMINIPORT_BUFFER_COMPLETE,
    eMINIPORT_PIN_STATE,
    eMINIPORT_GET_STREAM_POSITION,
    eMINIPORT_SET_WAVERT_BUFFER_WRITE_POSITION,
    eMINIPORT_GET_PRESENTATION_POSITION,
    eMINIPORT_PROGRAM_DMA,
    eMINIPORT_GLITCH_REPORT,
    eMINIPORT_LAST_BUFFER_RENDERED,
    eMINIPORT_PROCESSING_MODE,
    eMINIPORT_FX_CLSID,
    eMINIPORT_MaxValue
} EPcMiniportEngineEvent;


/*****************************************************************************
 * IPortClsEtwHelper
 *****************************************************************************
 * Used to access the portcls etw helper  functions.
 */
DECLARE_INTERFACE_(IPortClsEtwHelper,IUnknown)
{
    STDMETHOD_(NTSTATUS,MiniportWriteEtwEvent)
    (   
        _In_ EPcMiniportEngineEvent	miniportEventType,
        _In_ ULONGLONG	pvData1,
        _In_ ULONGLONG  pvData2,
        _In_ ULONGLONG  ulData3,
        _In_ ULONGLONG  ulData4
    )   PURE;
};

typedef IPortClsEtwHelper *PPORTCLSETWHELPER;


// DO NOT ASSUME THAT EACH SUCCESSIVE ENUM IMPLIES A FEATURE SUPERSET!
// Example: Win2K has more audio features than Win98SE_QFE2.
//
enum
{
    kVersionInvalid = -1,

    kVersionWin98,        // IPortClsVersion is unsupported
    kVersionWin98SE,      // IPortClsVersion is unsupported
    kVersionWin2K,        // IPortClsVersion is unsupported

    kVersionWin98SE_QFE2, // IPortClsVersion is unsupported
                          // Hotfix Package 269601 (contains 242937 and 247565)

    kVersionWin2K_SP2,    // IPortClsVersion is supported

    kVersionWinME,        // IPortClsVersion is unsupported

    kVersionWin98SE_QFE3, // IPortClsVersion is supported
                          // Hotfix Package (not yet released, as of 6/15/2001)

    kVersionWinME_QFE1,   // IPortClsVersion is supported
                          // Hotfix Package (not yet released, as of 6/15/2001)

    kVersionWinXP,        // IPortClsVersion is supported
    kVersionWinXPSP1,     // IPortClsVersion is supported

    kVersionWinServer2003,// IPortClsVersion is supported

    kVersionWin2K_UAAQFE, // IPortClsVersion is supported
    kVersionWinXP_UAAQFE, // IPortClsVersion is supported
    kVersionWinServer2003_UAAQFE, // IPortClsVersion is supported

    kVersionWindowsLonghorn  // IPortClsVersion is supported

    // Additional enum values will be added here, in
    // *roughly* chronological (not feature set) order.
};

/*****************************************************************************
 * IPortWMIRegistration
 *****************************************************************************/
DECLARE_INTERFACE_(IPortWMIRegistration,IUnknown)
{
    DEFINE_ABSTRACT_UNKNOWN()   //  For IUnknown

    STDMETHOD_(NTSTATUS,RegisterWMIProvider)
    (   THIS_
        PDEVICE_OBJECT, 
        PVOID
    ) PURE;
    STDMETHOD_(NTSTATUS,UnregisterWMIProvider)
    (   
        THIS_
        PDEVICE_OBJECT
    ) PURE;
};

typedef IPortWMIRegistration *PPORTWMIREGISTRATION;

/*****************************************************************************
 * IPreFetchOffset
 *****************************************************************************
 * An interface implemented by the pin to implement prefetch characteristics
 * of bus master hardware - to specify the hardware queue size, determining
 * the pad between play cursor and write cursor.
 */
DECLARE_INTERFACE_(IPreFetchOffset,IUnknown)
{
    DEFINE_ABSTRACT_UNKNOWN()   //  For IUnknown

    STDMETHOD_(VOID,SetPreFetchOffset)
    (   THIS_
        _In_  ULONG   PreFetchOffset
    )   PURE;
};

typedef IPreFetchOffset *PPREFETCHOFFSET;

#define IMP_IPreFetchOffset\
    STDMETHODIMP_(VOID) SetPreFetchOffset\
    (\
        _In_  ULONG   PreFetchOffset\
    )
#endif

#if (NTDDI_VERSION >= NTDDI_WS03)
/*****************************************************************************
 * IUnregisterSubdevice
 *****************************************************************************
 * An interface implemented by the port to implement a method to remove the
 * registered subdevice.
 */
DECLARE_INTERFACE_(IUnregisterSubdevice,IUnknown)
{
    DEFINE_ABSTRACT_UNKNOWN()   //  For IUnknown

    STDMETHOD_(NTSTATUS,UnregisterSubdevice)
    (   THIS_
        _In_  PDEVICE_OBJECT  DeviceObject,
        _In_  PUNKNOWN        Unknown
    )   PURE;
};

typedef IUnregisterSubdevice *PUNREGISTERSUBDEVICE;

#define IMP_IUnregisterSubdevice\
    STDMETHODIMP_(NTSTATUS) UnregisterSubdevice\
    (\
        _In_  PDEVICE_OBJECT  DeviceObject,\
        _In_  PUNKNOWN        Unknown\
    )

/*****************************************************************************
 * IUnregisterPhysicalConnection
 *****************************************************************************
 * An interface implemented by the port to implement a method to remove the
 * registered physical connections.
 */
DECLARE_INTERFACE_(IUnregisterPhysicalConnection,IUnknown)
{
    DEFINE_ABSTRACT_UNKNOWN()   //  For IUnknown

    STDMETHOD_(NTSTATUS,UnregisterPhysicalConnection)
    (   THIS_
        _In_  PDEVICE_OBJECT  DeviceObject,
        _In_  PUNKNOWN        FromUnknown,
        _In_  ULONG           FromPin,
        _In_  PUNKNOWN        ToUnknown,
        _In_  ULONG           ToPin
    )   PURE;

    STDMETHOD_(NTSTATUS,UnregisterPhysicalConnectionToExternal)
    (   THIS_
        _In_  PDEVICE_OBJECT  DeviceObject,
        _In_  PUNKNOWN        FromUnknown,
        _In_  ULONG           FromPin,
        _In_  PUNICODE_STRING ToString,
        _In_  ULONG           ToPin
    )   PURE;

    STDMETHOD_(NTSTATUS,UnregisterPhysicalConnectionFromExternal)
    (   THIS_
        _In_  PDEVICE_OBJECT  DeviceObject,
        _In_  PUNICODE_STRING FromString,
        _In_  ULONG           FromPin,
        _In_  PUNKNOWN        ToUnknown,
        _In_  ULONG           ToPin
    )   PURE;
};

typedef IUnregisterPhysicalConnection *PUNREGISTERPHYSICALCONNECTION;

#define IMP_IUnregisterPhysicalConnection\
    STDMETHODIMP_(NTSTATUS) UnregisterPhysicalConnection\
    (\
        _In_  PDEVICE_OBJECT  DeviceObject,\
        _In_  PUNKNOWN        FromUnknown,\
        _In_  ULONG           FromPin,\
        _In_  PUNKNOWN        ToUnknown,\
        _In_  ULONG           ToPin\
    );\
    STDMETHODIMP_(NTSTATUS) UnregisterPhysicalConnectionToExternal\
    (\
        _In_  PDEVICE_OBJECT  DeviceObject,\
        _In_  PUNKNOWN        FromUnknown,\
        _In_  ULONG           FromPin,\
        _In_  PUNICODE_STRING ToString,\
        _In_  ULONG           ToPin\
    );\
    STDMETHODIMP_(NTSTATUS) UnregisterPhysicalConnectionFromExternal\
    (\
        _In_  PDEVICE_OBJECT  DeviceObject,\
        _In_  PUNICODE_STRING FromString,\
        _In_  ULONG           FromPin,\
        _In_  PUNKNOWN        ToUnknown,\
        _In_  ULONG           ToPin\
    )
#endif


/*****************************************************************************
 * IPinName, 
 *****************************************************************************
 * An OPTIONAL interface for miniports to implement to
 * enable them to get pin name from miniport driver
 */
DECLARE_INTERFACE_(IPinName,IUnknown)
{
    DEFINE_ABSTRACT_UNKNOWN()   //  For IUnknown

    // Called by the port to notify registered miniports
    // for servicing verndor defined pin property
    //
    STDMETHOD_(NTSTATUS,GetPinName)
    (   THIS_
        _In_      PIRP            Irp,     
        _In_      PKSP_PIN        Pin,
        _Out_     PVOID           Data
    )   PURE;
};

typedef IPinName *PIPINNAME;

#define IMP_IPinName                        \
    STDMETHODIMP_(NTSTATUS) GetPinName      \
    (       _In_      PIRP            Irp,  \
            _In_      PKSP_PIN        Pin,  \
            _Out_     PVOID           Data  \
    );
#if (NTDDI_VERSION >= NTDDI_WIN8)

// {2EBF536C-EF57-4c64-BEDC-25C1A6D668E6}
DEFINE_GUID(IID_IMiniportAudioEngineNode, 
0x2ebf536c, 0xef57, 0x4c64, 0xbe, 0xdc, 0x25, 0xc1, 0xa6, 0xd6, 0x68, 0xe6);

// {BD6EEB4B-E6E5-40fd-8D5A-5B1DCDE20C42}
DEFINE_GUID(IID_IMiniportStreamAudioEngineNode, 
0xbd6eeb4b, 0xe6e5, 0x40fd, 0x8d, 0x5a, 0x5b, 0x1d, 0xcd, 0xe2, 0xc, 0x42);

// {AEB7F86A-6CBA-44CF-A2D2-B3FA5B696817}
DEFINE_GUID(IID_IMiniportStreamAudioEngineNode2, 
0xaeb7f86a, 0x6cba, 0x44cf, 0xa2, 0xd2, 0xb3, 0xfa, 0x5b, 0x69, 0x68, 0x17);

// {B532678C-BE50-472D-9973-8A6F16594989}
DEFINE_GUID(IID_IMiniportAudioSignalProcessing, 
0xb532678c, 0xbe50, 0x472d, 0x99, 0x73, 0x8a, 0x6f, 0x16, 0x59, 0x49, 0x89);


typedef enum {
    eMixFormat,
    eDeviceFormat,
    eSupportedDeviceFormats,
} eEngineFormatType;

typedef enum {
    eVolumeAttribute,
    eMuteAttribute,
    ePeakMeterAttribute,
} eChannelTargetType;

 /*****************************************************************************
 * IMiniportAudioEngineNode 
 *****************************************************************************/

DECLARE_INTERFACE_(IMiniportAudioEngineNode,IUnknown)
{
    DEFINE_ABSTRACT_UNKNOWN()   //  For IUnknown

    STDMETHOD_(NTSTATUS,GetAudioEngineDescriptor)
    (   THIS_
        _In_  ULONG ulNodeId,
        _Out_ KSAUDIOENGINE_DESCRIPTOR *pAudioEngineDescriptor
    )   PURE;
    STDMETHOD_(NTSTATUS,GetGfxState)
    (   THIS_
        _In_  ULONG ulNodeId,
        _Out_ BOOL *pbEnable
    )   PURE;
    STDMETHOD_(NTSTATUS,SetGfxState)
    (   THIS_
        _In_ ULONG ulNodeId,
        _In_ BOOL  bEnable
    )   PURE;
    STDMETHOD_(NTSTATUS,GetEngineFormatSize)
    (   THIS_
        _In_  ULONG ulNodeId,
        _In_  eEngineFormatType	formatType,
        _Out_ ULONG *pulFormatSize
    )   PURE;
    STDMETHOD_(NTSTATUS,GetMixFormat)
    (   THIS_
        _In_  ULONG ulNodeId,
        _Out_ KSDATAFORMAT_WAVEFORMATEX *pFormat,
        _In_  ULONG ulBufferSize
    )   PURE;
    STDMETHOD_(NTSTATUS,GetDeviceFormat)
    (   THIS_
        _In_  ULONG ulNodeId,
        _Out_ KSDATAFORMAT_WAVEFORMATEX *pFormat,
        _In_  ULONG ulBufferSize
    )   PURE;	
    STDMETHOD_(NTSTATUS,SetDeviceFormat)
    (   THIS_
        _In_  ULONG ulNodeId,
        _In_  KSDATAFORMAT_WAVEFORMATEX *pFormat,
        _In_  ULONG ulBufferSize
    )   PURE;	
    STDMETHOD_(NTSTATUS,GetSupportedDeviceFormats)
    (   THIS_
        _In_  ULONG ulNodeId,
        _Out_ KSMULTIPLE_ITEM* pFormats,
        _In_  ULONG ulBufferSize
    )   PURE;
    STDMETHOD_(NTSTATUS,GetDeviceChannelCount)
    (   THIS_
        _In_  ULONG ulNodeId,
        _In_  eChannelTargetType targetType,
        _Out_  UINT32 *pulChannelCount
    )   PURE;
    STDMETHOD_(NTSTATUS,GetDeviceAttributeSteppings)
    (   THIS_
        _In_  ULONG ulNodeId,
        _In_  eChannelTargetType targetType,
        _Out_ PKSPROPERTY_STEPPING_LONG pKsPropStepLong,
        _In_  UINT32 ui32DataSize
    )   PURE;
    STDMETHOD_(NTSTATUS,GetDeviceChannelVolume)
    (   THIS_
        _In_  ULONG ulNodeId,
        _In_  UINT32 ulChannel,
        _Out_  LONG *plVolume
    )   PURE;
    STDMETHOD_(NTSTATUS,SetDeviceChannelVolume)
    (   THIS_
        _In_  ULONG ulNodeId,
        _In_  UINT32 ulChannel,
        _In_  LONG lVolume
    )   PURE; 

    STDMETHOD_(NTSTATUS,GetDeviceChannelMute)
    (   THIS_
        _In_  ULONG ulNodeId,
        _In_  UINT32 ulChannel,
        _Out_  BOOL *pbMute
    )   PURE;
    STDMETHOD_(NTSTATUS,SetDeviceChannelMute)
    (   THIS_
        _In_  ULONG ulNodeId,
        _In_  UINT32 ulChannel,
        _In_  BOOL	 bMute
    )   PURE;  
    STDMETHOD_(NTSTATUS,GetDeviceChannelPeakMeter)
    (   THIS_
        _In_  ULONG ulNodeId,
        _In_  UINT32 ulChannel,
        _Out_ LONG *plPeakMeter
    )   PURE;
    STDMETHOD_(NTSTATUS,GetBufferSizeRange)
    (   THIS_
        _In_  ULONG ulNodeId,
        _In_  KSDATAFORMAT_WAVEFORMATEX *pKsDataFormatWfx,
        _Out_ KSAUDIOENGINE_BUFFER_SIZE_RANGE *pBufferSizeRange
    )   PURE;   

};
typedef IMiniportAudioEngineNode *PIMINIPORTAudioEngineNode;
#define IMP_IMiniportAudioEngineNode                    \
    STDMETHODIMP_(NTSTATUS) GetAudioEngineDescriptor  \
    (       \
        _In_ ULONG _ulNodeId,\
        _Out_ KSAUDIOENGINE_DESCRIPTOR *pAudioEngineDescriptor\
    );\
    STDMETHODIMP_(NTSTATUS) GetGfxState  \
    (       \
        _In_ ULONG _ulNodeId,\
        _Out_ BOOL *pbEnable\
    );\
    STDMETHODIMP_(NTSTATUS) SetGfxState  \
    (       \
        _In_ ULONG _ulNodeId,\
        _In_ BOOL bEnable\
    );\
    STDMETHODIMP_(NTSTATUS) GetEngineFormatSize  \
    (       \
        _In_  ULONG ulNodeId,\
        _In_  eEngineFormatType	formatType,\
        _Out_ ULONG *pulFormatSize\
    );\
    STDMETHODIMP_(NTSTATUS) GetMixFormat  \
    (       \
        _In_  ULONG ulNodeId,\
        _Out_ KSDATAFORMAT_WAVEFORMATEX *pFormat,\
        _In_  ULONG ulBufferSize\
    );\
    STDMETHODIMP_(NTSTATUS) GetDeviceFormat  \
    (       \
        _In_  ULONG ulNodeId,\
        _Out_ KSDATAFORMAT_WAVEFORMATEX *pFormat,\
        _In_  ULONG ulBufferSize\
    );\
    STDMETHODIMP_(NTSTATUS) SetDeviceFormat  \
    (       \
        _In_  ULONG ulNodeId,\
        _In_ KSDATAFORMAT_WAVEFORMATEX *pFormat,\
        _In_  ULONG ulBufferSize\
    );\
    STDMETHODIMP_(NTSTATUS) GetSupportedDeviceFormats  \
    (       \
        _In_  ULONG ulNodeId,\
        _Out_ KSMULTIPLE_ITEM* pFormats,\
        _In_  ULONG ulBufferSize\
    );\
    STDMETHODIMP_(NTSTATUS) GetDeviceChannelCount  \
    (       \
        _In_  ULONG	ulNodeId,\
        _In_  eChannelTargetType targetType,\
        _Out_ UINT32 *pulChannelCount\
    );\
    STDMETHODIMP_(NTSTATUS) GetDeviceAttributeSteppings  \
    (       \
        _In_  ULONG ulNodeId,\
    _In_  eChannelTargetType targetType,\
    _Out_ PKSPROPERTY_STEPPING_LONG pKsPropStepLong,\
    _In_  UINT32 ui32DataSize\
    );\
    STDMETHODIMP_(NTSTATUS) GetDeviceChannelVolume  \
    (       \
        _In_  ULONG ulNodeId,\
    _In_  UINT32 ulChannel,\
    _Out_  LONG *plVolume\
    );\
    STDMETHODIMP_(NTSTATUS) SetDeviceChannelVolume  \
    (       \
        _In_  ULONG ulNodeId,\
    _In_  UINT32 ulChannel,\
    _In_  LONG   lValue\
    );\
    STDMETHODIMP_(NTSTATUS) GetDeviceChannelMute  \
    (       \
        _In_  ULONG ulNodeId,\
    _In_  UINT32 ulChannel,\
    _Out_ BOOL *pbMute\
    );\
    STDMETHODIMP_(NTSTATUS) SetDeviceChannelMute  \
    (       \
        _In_  ULONG ulNodeId,\
        _In_  UINT32 ulChannel,\
        _In_  BOOL bMute\
    );\
    STDMETHODIMP_(NTSTATUS) GetDeviceChannelPeakMeter  \
    (       \
        _In_  ULONG ulNodeId,\
        _In_  UINT32 ulChannel,\
        _Out_ LONG *plPeakMeter\
    );\
    STDMETHODIMP_(NTSTATUS) GetBufferSizeRange  \
    (       \
        _In_  ULONG ulNodeId,\
        _In_  KSDATAFORMAT_WAVEFORMATEX *pKsDataFormatWfx,\
        _Out_ KSAUDIOENGINE_BUFFER_SIZE_RANGE *pBufferSizeRange\
    );\



/*****************************************************************************
 * IID_IMiniportStreamAudioEngineNode 
 *****************************************************************************
 * An OPTIONAL interface for miniports to implement to
 * enable them to get AudioEngine interface from miniport driver
 */
DECLARE_INTERFACE_(IMiniportStreamAudioEngineNode,IUnknown)
{
    DEFINE_ABSTRACT_UNKNOWN()   //  For IUnknown

    STDMETHOD_(NTSTATUS,GetLfxState)
    (   THIS_
        _Out_ BOOL *pbEnable
    )   PURE;
    STDMETHOD_(NTSTATUS,SetLfxState)
    (   THIS_
        _In_ BOOL bEnable
    )   PURE;
    STDMETHOD_(NTSTATUS,GetStreamChannelCount)
    (   THIS_
        _In_ eChannelTargetType targetType,
        _Out_ UINT32 *pulChannelCount
    )   PURE;
    STDMETHOD_(NTSTATUS,GetStreamAttributeSteppings)
    (   THIS_
        _In_ eChannelTargetType targetType,
        _Out_ PKSPROPERTY_STEPPING_LONG pKsPropStepLong,
        _In_ UINT32 ui32DataSize
    )   PURE;
    STDMETHOD_(NTSTATUS,GetStreamChannelVolume)
    (   THIS_
        _In_ UINT32 ulChannel,
        _Out_ LONG	 *plValue
    )   PURE;
     STDMETHOD_(NTSTATUS,SetStreamChannelVolume)
    (   THIS_
        _In_ UINT32                                 Channel,
        _In_ LONG                                   TargetVolume,
        _In_ AUDIO_CURVE_TYPE                       CurveType,
        _In_ ULONGLONG                              CurveDuration
    )   PURE;   
    STDMETHOD_(NTSTATUS,GetStreamChannelMute)
    (   THIS_
        _In_ UINT32 ulChannel,
        _Out_ BOOL	*pbMute
    )   PURE;
    STDMETHOD_(NTSTATUS,SetStreamChannelMute)
    (   THIS_
        _In_ UINT32 ulChannel,
        _In_ BOOL	bMute
    )   PURE;    
    STDMETHOD_(NTSTATUS,GetStreamChannelPeakMeter)
    (   THIS_
        _In_ UINT32 ulChannel,
        _Out_ LONG	 *plPeakMeter
    )   PURE;
    STDMETHOD_(NTSTATUS,GetStreamPresentationPosition)
    (   THIS_
        _Out_ KSAUDIO_PRESENTATION_POSITION *pPresentationPosition
    )   PURE; 
    STDMETHOD_(NTSTATUS,SetStreamCurrentWritePosition)
    (   THIS_
        _In_ ULONG ulCurrentWritePosition
    )   PURE;   
    STDMETHOD_(NTSTATUS,GetStreamLinearBufferPosition)
    (   THIS_
        _Out_ ULONGLONG *pullLinearBufferPosition
    )   PURE;   
    STDMETHOD_(NTSTATUS,SetStreamLoopbackProtection)
    (   THIS_
        _In_ CONSTRICTOR_OPTION ProtectionOption
    )   PURE;   
};

typedef IMiniportStreamAudioEngineNode *PIMINIPORTStreamAudioEngineNode;

#define IMP_IMiniportStreamAudioEngineNode                    \
    STDMETHODIMP_(NTSTATUS) GetLfxState  \
    (       \
        _Out_ BOOL *pbEnable\
    );\
    STDMETHODIMP_(NTSTATUS) SetLfxState  \
    (       \
        _In_ BOOL bEnable\
    );\
    STDMETHODIMP_(NTSTATUS) GetStreamChannelCount  \
    (       \
        _In_ eChannelTargetType targetType,\
        _Out_ UINT32 *pulChannelCount\
    );\
    STDMETHODIMP_(NTSTATUS) GetStreamAttributeSteppings  \
    (       \
        _In_ eChannelTargetType targetType,\
        _Out_ PKSPROPERTY_STEPPING_LONG pKsPropStepLong,\
        _In_ UINT32 ui32DataSize\
    );\
    STDMETHODIMP_(NTSTATUS) GetStreamChannelVolume  \
    (       \
        _In_ UINT32 ulChannel,\
        _Out_ LONG *plVolume\
    );\
    STDMETHODIMP_(NTSTATUS) SetStreamChannelVolume  \
    (       \
        _In_ UINT32                                 Channel, \
        _In_ LONG                                   TargetVolume, \
        _In_ AUDIO_CURVE_TYPE                       CurveType, \
        _In_ ULONGLONG                              CurveDuration \
    );\
    STDMETHODIMP_(NTSTATUS) GetStreamChannelMute  \
    (       \
        _In_ UINT32 ulChannel,\
        _Out_ BOOL *pbMute\
    );\
    STDMETHODIMP_(NTSTATUS) SetStreamChannelMute  \
    (       \
        _In_ UINT32 ulChannel,\
        _In_ BOOL bMute\
    );\
    STDMETHODIMP_(NTSTATUS) GetStreamChannelPeakMeter  \
    (       \
        _In_ UINT32 ulChannel,\
        _Out_ LONG	*plPeakMeter\
    );\
    STDMETHODIMP_(NTSTATUS) GetStreamPresentationPosition  \
    (       \
        _Out_ KSAUDIO_PRESENTATION_POSITION *pPresentationPosition\
    );\
    STDMETHODIMP_(NTSTATUS) SetStreamCurrentWritePosition  \
    (       \
        _In_ ULONG ulCurrentWritePosition\
    );\
    STDMETHODIMP_(NTSTATUS) GetStreamLinearBufferPosition  \
    (       \
        _Out_ ULONGLONG *pullLinearBufferPosition\
    );\
    STDMETHODIMP_(NTSTATUS) SetStreamLoopbackProtection  \
    (       \
        _In_ CONSTRICTOR_OPTION ProtectionOption\
    );


//*****************************************************************************
// * IID_IMiniportStreamAudioEngineNode2
// *****************************************************************************
// * An OPTIONAL interface for miniports to support to
// * new interface on top of IID_IMiniportStreamAudioEngineNode
//
DECLARE_INTERFACE_(IMiniportStreamAudioEngineNode2,IUnknown)
{
    DEFINE_ABSTRACT_UNKNOWN()   //  For IUnknown
    STDMETHOD_(NTSTATUS,SetStreamCurrentWritePositionForLastBuffer)
    (   THIS_
        _In_ ULONG _ulWritePosition
    )   PURE;  
};

typedef IMiniportStreamAudioEngineNode2 *PIMINIPORTStreamAudioEngineNode2;

#define IMP_IMiniportStreamAudioEngineNode2  \
    STDMETHODIMP_(NTSTATUS) SetStreamCurrentWritePositionForLastBuffer  \
    (   \
        _In_ ULONG _ulWritePosition\
        \
    );
#endif
/*****************************************************************************
 * Functions.
 */

/*****************************************************************************
 * PCPFNSTARTDEVICE
 *****************************************************************************
 * Type for start device callback.
 */
typedef
NTSTATUS
(*PCPFNSTARTDEVICE)
(
#ifdef PC_OLD_NAMES
    _In_      PVOID           DeviceObject,
    _In_      PVOID           Irp,
#else
    _In_      PDEVICE_OBJECT  DeviceObject,
    _In_      PIRP            Irp,
#endif
    _In_      PRESOURCELIST   ResourceList
);

#if (NTDDI_VERSION < NTDDI_WINXP)
/*****************************************************************************
 * PCPFNIRPHANDLER
 *****************************************************************************
 * Type for IRP handlers.
 */
typedef
NTSTATUS
(*PCPFNIRPHANDLER)
(
    _In_      PDEVICE_OBJECT  DeviceObject,
    _In_      PIRP            Irp,
    _Out_     PULONG          Action
#define IRP_HANDLER_ACTION_DEFAULT 0
#define IRP_HANDLER_ACTION_FINISH  1
#define IRP_HANDLER_ACTION_FORWARD 2
);
#endif

/*****************************************************************************
 * PcInitializeAdapterDriver()
 *****************************************************************************
 * Initializes an adapter driver.
 */
PORTCLASSAPI
NTSTATUS
NTAPI
PcInitializeAdapterDriver
(
    _In_      PDRIVER_OBJECT      DriverObject,
    _In_      PUNICODE_STRING     RegistryPathName,
    _In_      PDRIVER_ADD_DEVICE  AddDevice
);

/*****************************************************************************
 * PcDispatchIrp()
 *****************************************************************************
 * Dispatch an IRP.
 */
PORTCLASSAPI
NTSTATUS
NTAPI
PcDispatchIrp
(
    _In_      PDEVICE_OBJECT  pDeviceObject,
    _In_      PIRP            pIrp
);

/*****************************************************************************
 * PcAddAdapterDevice()
 *****************************************************************************
 * Adds an adapter device.  DeviceExtensionSize may be zero for default size.
 */
_Kernel_clear_do_init_(__yes)
PORTCLASSAPI
NTSTATUS
NTAPI
PcAddAdapterDevice
(
    _In_      PDRIVER_OBJECT      DriverObject,
    _In_      PDEVICE_OBJECT      PhysicalDeviceObject,
    _In_      PCPFNSTARTDEVICE    StartDevice,
    _In_      ULONG               MaxObjects,
    _In_      ULONG               DeviceExtensionSize
);

/*****************************************************************************
 * PcCompleteIrp()
 *****************************************************************************
 * Complete an IRP unless status is STATUS_PENDING.
 */
PORTCLASSAPI
NTSTATUS
NTAPI
PcCompleteIrp
(
    _In_      PDEVICE_OBJECT  pDeviceObject,
    _In_      PIRP            pIrp,
    _In_      NTSTATUS        ntStatus
);

/*****************************************************************************
 * PcForwardIrpSynchronous()
 *****************************************************************************
 * Forward a PnP IRP to the PDO.  The IRP is not completed at this level,
 * this function does not return until the lower driver has completed the IRP,
 * and DecrementPendingIrpCount() is not called.
 */
PORTCLASSAPI
NTSTATUS
NTAPI
PcForwardIrpSynchronous
(
    _In_      PDEVICE_OBJECT  DeviceObject,
    _In_      PIRP            Irp
);

/*****************************************************************************
 * PcRegisterSubdevice()
 *****************************************************************************
 * Registers a subdevice.
 */
PORTCLASSAPI
NTSTATUS
NTAPI
PcRegisterSubdevice
(
    _In_      PDEVICE_OBJECT  DeviceObject,
    _In_      PWSTR           Name,
    _In_      PUNKNOWN        Unknown
);

/*****************************************************************************
 * PcRegisterPhysicalConnection()
 *****************************************************************************
 * Registers a physical connection between subdevices.
 */
PORTCLASSAPI
NTSTATUS
NTAPI
PcRegisterPhysicalConnection
(
    _In_      PDEVICE_OBJECT  DeviceObject,
    _In_      PUNKNOWN        FromUnknown,
    _In_      ULONG           FromPin,
    _In_      PUNKNOWN        ToUnknown,
    _In_      ULONG           ToPin
);

/*****************************************************************************
 * PcRegisterPhysicalConnectionToExternal()
 *****************************************************************************
 * Registers a physical connection from a subdevice to an external device.
 */
PORTCLASSAPI
NTSTATUS
NTAPI
PcRegisterPhysicalConnectionToExternal
(
    _In_      PDEVICE_OBJECT  DeviceObject,
    _In_      PUNKNOWN        FromUnknown,
    _In_      ULONG           FromPin,
    _In_      PUNICODE_STRING ToString,
    _In_      ULONG           ToPin
);

/*****************************************************************************
 * PcRegisterPhysicalConnectionFromExternal()
 *****************************************************************************
 * Registers a physical connection to a subdevice from an external device.
 */
PORTCLASSAPI
NTSTATUS
NTAPI
PcRegisterPhysicalConnectionFromExternal
(
    _In_      PDEVICE_OBJECT  DeviceObject,
    _In_      PUNICODE_STRING FromString,
    _In_      ULONG           FromPin,
    _In_      PUNKNOWN        ToUnknown,
    _In_      ULONG           ToPin
);

/*****************************************************************************
 * PcNewPort()
 *****************************************************************************
 * Creates an instance of a port driver.
 */
PORTCLASSAPI
NTSTATUS
NTAPI
PcNewPort
(
    _Out_     PPORT *     OutPort,
    _In_      REFCLSID    ClassID
);

/*****************************************************************************
 * PcNewMiniport()
 *****************************************************************************
 * Creates an instance of a system-supplied miniport driver.
 */
PORTCLASSAPI
NTSTATUS
NTAPI
PcNewMiniport
(
    _Out_     PMINIPORT * OutMiniPort,
    _In_      REFCLSID    ClassID
);

#if (NTDDI_VERSION >= NTDDI_WINXP)
/*****************************************************************************
 * PcNewDmaChannel()
 *****************************************************************************
 * Creates a DMA channel.
 */
PORTCLASSAPI
NTSTATUS
NTAPI
PcNewDmaChannel
(
    _Out_     PDMACHANNEL *       OutDmaChannel,
    _In_opt_  PUNKNOWN            OuterUnknown,
    _In_      POOL_TYPE           PoolType,
    _In_      PDEVICE_DESCRIPTION DeviceDescription,
    _In_      PDEVICE_OBJECT      DeviceObject
);
#endif

/*****************************************************************************
 * PcCompletePendingPropertyRequest()
 *****************************************************************************
 * Completes a pending property request.
 */
PORTCLASSAPI
NTSTATUS
NTAPI
PcCompletePendingPropertyRequest
(
    _In_      PPCPROPERTY_REQUEST PropertyRequest,
    _In_      NTSTATUS            NtStatus
);

/*****************************************************************************
 * PcGetTimeInterval
 *****************************************************************************
 * Gets the system time interval
 */
PORTCLASSAPI
ULONGLONG
NTAPI
PcGetTimeInterval
(
    _In_  ULONGLONG   Since
);

#define GTI_SECONDS(t)      (ULONGLONG(t)*10000000)
#define GTI_MILLISECONDS(t) (ULONGLONG(t)*10000)
#define GTI_MICROSECONDS(t) (ULONGLONG(t)*10)

/*****************************************************************************
 * PcNewResourceList()
 *****************************************************************************
 * Creates and initializes a resource list.
 */
PORTCLASSAPI
NTSTATUS
NTAPI
PcNewResourceList
(
    _Out_     PRESOURCELIST *     OutResourceList,
    _In_opt_  PUNKNOWN            OuterUnknown,
    _In_      POOL_TYPE           PoolType,
    _In_      PCM_RESOURCE_LIST   TranslatedResources,
    _In_      PCM_RESOURCE_LIST   UntranslatedResources
);

/*****************************************************************************
 * PcNewResourceSublist()
 *****************************************************************************
 * Creates and initializes an empty resource list derived from another
 * resource list.
 */
PORTCLASSAPI
NTSTATUS
NTAPI
PcNewResourceSublist
(
    _Out_     PRESOURCELIST *     OutResourceList,
    _In_opt_  PUNKNOWN            OuterUnknown,
    _In_      POOL_TYPE           PoolType,
    _In_      PRESOURCELIST       ParentList,
    _In_      ULONG               MaximumEntries
);

/*****************************************************************************
 * PcNewInterruptSync()
 *****************************************************************************
 * Creates and initializes an interrupt-level synchronization object.
 */
PORTCLASSAPI
NTSTATUS
NTAPI
PcNewInterruptSync
(
    _Out_     PINTERRUPTSYNC *        OutInterruptSync,
    _In_opt_  PUNKNOWN                OuterUnknown,
    _In_      PRESOURCELIST           ResourceList,
    _In_      ULONG                   ResourceIndex,
    _In_      INTERRUPTSYNCMODE       Mode
);

/*****************************************************************************
 * PcNewServiceGroup()
 *****************************************************************************
 * Creates and initializes a service group object.
 */
PORTCLASSAPI
NTSTATUS
NTAPI
PcNewServiceGroup
(
    _Out_     PSERVICEGROUP *     OutServiceGroup,
    _In_opt_  PUNKNOWN            OuterUnknown
);

/*****************************************************************************
 * PcNewRegistryKey()
 *****************************************************************************
 * Creates and initializes a registry key object.
 */
PORTCLASSAPI
NTSTATUS
NTAPI
PcNewRegistryKey
(
    _Out_       PREGISTRYKEY *      OutRegistryKey,
    _In_opt_    PUNKNOWN            OuterUnknown,
    _In_        ULONG               RegistryKeyType,
    _In_        ACCESS_MASK         DesiredAccess,
    _In_opt_    PVOID               DeviceObject,
    _In_opt_    PVOID               SubDevice,
    _In_opt_    POBJECT_ATTRIBUTES  ObjectAttributes,
    _In_opt_    ULONG               CreateOptions,
    _Out_opt_   PULONG              Disposition    
);

/*****************************************************************************
 * RegistryKeyType for NewRegistryKey()
 *****************************************************************************
 * Enumeration of key types.
 */
enum
{
    GeneralRegistryKey,     // ObjectAttributes and CreateOptions are req'd.
    DeviceRegistryKey,      // Device Object is required
    DriverRegistryKey,      // Device Object is required
    HwProfileRegistryKey,   // Device Object is required
    DeviceInterfaceRegistryKey  // Device Object and SubDevice are required
};

/*****************************************************************************
 * PcGetDeviceProperty()
 *****************************************************************************
 * This returns the requested device property from the registry.
 */
PORTCLASSAPI
NTSTATUS
NTAPI
PcGetDeviceProperty
(
    _In_      PVOID                       DeviceObject,
    _In_      DEVICE_REGISTRY_PROPERTY    DeviceProperty,
    _In_      ULONG                       BufferLength,
    _Out_     PVOID                       PropertyBuffer,
    _Out_     PULONG                      ResultLength
);

/*****************************************************************************
 * PcRegisterAdapterPowerManagement()
 *****************************************************************************
 * Register the adapter's power management interface with PortCls.
 */
PORTCLASSAPI
NTSTATUS
NTAPI
PcRegisterAdapterPowerManagement
(
    _In_      PUNKNOWN    Unknown,
    _In_      PVOID       pvContext1
);

/*****************************************************************************
 * PcUnregisterAdapterPowerManagement()
 *****************************************************************************
 * Unregister the adapter's power management interface with PortCls.
 */
PORTCLASSAPI
NTSTATUS
NTAPI
PcUnregisterAdapterPowerManagement
(
    _In_      PDEVICE_OBJECT  pDeviceObject
);

/*****************************************************************************
 * PcRequestNewPowerState()
 *****************************************************************************
 * This routine is used to request a new power state for the device.  It is
 * normally not needed by adapter drivers but is exported in order to
 * support unusual circumstances.
 */
PORTCLASSAPI
NTSTATUS
NTAPI
PcRequestNewPowerState
(
    _In_      PDEVICE_OBJECT      pDeviceObject,
    _In_      DEVICE_POWER_STATE  RequestedNewState
);

// IO Timers are not supported on ARM
#ifndef ARM
/*****************************************************************************
 * PcRegisterIoTimeout()
 *****************************************************************************
 * This routine registers a driver-supplied callback associated with a given
 * device object (see IoInitializeTimer in the DDK).  This callback that will
 * be called approximately once per second while the device is active (see
 * IoStartTimer, and IoStopTimer in the DDK - these are called upon device
 * START and STOP).
 *
 * This routine must be called at PASSIVE_LEVEL.
 * pTimerRoutine can and will be called at DISPATCH_LEVEL; it must be non-paged.
 *
 */
_IRQL_requires_max_(PASSIVE_LEVEL)
PORTCLASSAPI
__declspec(deprecated("This method is deprecated."))
NTSTATUS
NTAPI
PcRegisterIoTimeout
(
    _In_      PDEVICE_OBJECT      pDeviceObject,
    _In_      PIO_TIMER_ROUTINE   pTimerRoutine,
    _In_      PVOID               pContext
);

/*****************************************************************************
 * PcUnregisterIoTimeout()
 *****************************************************************************
 * This routine unregisters a driver-supplied callback associated with a given
 * device object.  This callback must have been previously registered with
 * PcRegisterIoTimeout (with the same device object, timer routine and context).
 *
 * This routine must be called at PASSIVE_LEVEL.
 * pTimerRoutine can and will be called at DISPATCH_LEVEL; it must be non-paged.
 *
 */
 PORTCLASSAPI
__declspec(deprecated("This method is deprecated."))
NTSTATUS
NTAPI
PcUnregisterIoTimeout
(
    _In_      PDEVICE_OBJECT      pDeviceObject,
    _In_      PIO_TIMER_ROUTINE   pTimerRoutine,
    _In_      PVOID               pContext
);
#endif

/*****************************************************************************
 * PcGetPhysicalDeviceObject()
 *****************************************************************************
 * Return the physical device object passed in to the portcls in the PcAddAdapterDevice call
 */
PORTCLASSAPI
NTSTATUS
NTAPI
PcGetPhysicalDeviceObject
(
    IN  PDEVICE_OBJECT  pDeviceObject,
    OUT PDEVICE_OBJECT  *ppPhysicalObject
);

#if (NTDDI_VERSION >= NTDDI_WINXP)
/*****************************************************************************
 * Pc DRM functions
 *****************************************************************************
 * These functions link directly to the kernel-mode Digital Rights Management
 * module.  They all must be called at PASSIVE_LEVEL.
 */
PORTCLASSAPI
NTSTATUS
NTAPI
PcAddContentHandlers
(
    _In_                      ULONG           ContentId,
    _In_reads_(NumHandlers)  PVOID         * paHandlers,
    _In_                      ULONG           NumHandlers
);

PORTCLASSAPI
NTSTATUS
NTAPI
PcCreateContentMixed
(
    _In_      PULONG          paContentId,
    _In_      ULONG           cContentId,
    _Out_     PULONG          pMixedContentId
);

PORTCLASSAPI
NTSTATUS
NTAPI
PcDestroyContent
(
    _In_      ULONG           ContentId
);

PORTCLASSAPI
NTSTATUS
NTAPI
PcForwardContentToDeviceObject
(
    _In_      ULONG           ContentId,
    _In_      PVOID           Reserved,
    _In_      PCDRMFORWARD    DrmForward
);

__drv_preferredFunction("DrmForwardContentToDeviceObject", "Obsolete") 
PORTCLASSAPI
NTSTATUS
NTAPI
PcForwardContentToFileObject
(
    _In_      ULONG           ContentId,
    _In_      PFILE_OBJECT    FileObject
);

PORTCLASSAPI
NTSTATUS
NTAPI
PcForwardContentToInterface
(
    _In_      ULONG           ContentId,
    _In_      PUNKNOWN        pUnknown,
    _In_      ULONG           NumMethods
);

PORTCLASSAPI
NTSTATUS
NTAPI
PcGetContentRights
(
    _In_      ULONG           ContentId,
    _Out_     PDRMRIGHTS      DrmRights
);
#endif

#if (NTDDI_VERSION >= NTDDI_THRESHOLD)
typedef
_Function_class_(EVT_PC_POST_PO_FX_REGISTER_DEVICE)
_IRQL_requires_same_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
EVT_PC_POST_PO_FX_REGISTER_DEVICE(
    _In_ PVOID    PoFxDeviceContext,
    _In_ POHANDLE PoHandle
    );

typedef EVT_PC_POST_PO_FX_REGISTER_DEVICE *PFN_PC_POST_PO_FX_REGISTER_DEVICE;

typedef
_Function_class_(EVT_PC_PRE_PO_FX_UNREGISTER_DEVICE)
_IRQL_requires_same_
_IRQL_requires_max_(PASSIVE_LEVEL)
VOID
EVT_PC_PRE_PO_FX_UNREGISTER_DEVICE(
    _In_ PVOID    PoFxDeviceContext,
    _In_ POHANDLE PoHandle
    );

typedef EVT_PC_PRE_PO_FX_UNREGISTER_DEVICE *PFN_PC_PRE_PO_FX_UNREGISTER_DEVICE;

typedef struct _PC_POWER_FRAMEWORK_SETTINGS {
  ULONG                                         Size;
  PFN_PC_POST_PO_FX_REGISTER_DEVICE             EvtPcPostPoFxRegisterDevice;
  PFN_PC_PRE_PO_FX_UNREGISTER_DEVICE            EvtPcPrePoFxUnregisterDevice;
  PPO_FX_COMPONENT                              Component;
  PPO_FX_COMPONENT_ACTIVE_CONDITION_CALLBACK    ComponentActiveConditionCallback;
  PPO_FX_COMPONENT_IDLE_CONDITION_CALLBACK      ComponentIdleConditionCallback;
  PPO_FX_COMPONENT_IDLE_STATE_CALLBACK          ComponentIdleStateCallback;
  PPO_FX_POWER_CONTROL_CALLBACK                 PowerControlCallback;
  PVOID                                         PoFxDeviceContext;
} PC_POWER_FRAMEWORK_SETTINGS, *PPC_POWER_FRAMEWORK_SETTINGS;

VOID
FORCEINLINE
PC_POWER_FRAMEWORK_SETTINGS_INIT(
    _Out_ PPC_POWER_FRAMEWORK_SETTINGS PowerFrameworkSettings
    )
{    
    RtlZeroMemory(PowerFrameworkSettings,
                  sizeof(PC_POWER_FRAMEWORK_SETTINGS));
    PowerFrameworkSettings->Size = sizeof(PC_POWER_FRAMEWORK_SETTINGS);
}

PORTCLASSAPI
NTSTATUS
NTAPI
PcAssignPowerFrameworkSettings(
  _In_ PDEVICE_OBJECT DeviceObject,
  _In_ PPC_POWER_FRAMEWORK_SETTINGS PowerFrameworkSettings
  );

DECLARE_HANDLE(PCSTREAMRESOURCE);

typedef enum _PcStreamResourceType { 
    ePcStreamResourceInterrupt, 
    ePcStreamResourceThread, 
    ePcStreamResourceSet
} PcStreamResourceType, *PPcStreamResourceType; 

typedef struct _PCSTREAMRESOURCE_DESCRIPTOR { 

    ULONG                   Size; 
    ULONG                   Flags;      // No flag bits are currently defined. Set to zero.
    PDEVICE_OBJECT          Pdo;  
    PcStreamResourceType    Type; 
    union {
        struct {
            ULONG           Version;
            PVOID           Generic;
        } Interrupt; 
        PETHREAD            Thread; 
        PVOID               ResourceSet; 
    } Resource; 
    
} PCSTREAMRESOURCE_DESCRIPTOR, *PPCSTREAMRESOURCE_DESCRIPTOR; 

VOID
FORCEINLINE
PCSTREAMRESOURCE_DESCRIPTOR_INIT(
    _Out_ PPCSTREAMRESOURCE_DESCRIPTOR Resource
    )
{
    RtlZeroMemory(Resource, sizeof(PCSTREAMRESOURCE_DESCRIPTOR));
    Resource->Size = sizeof(PCSTREAMRESOURCE_DESCRIPTOR);
}

PORTCLASSAPI
NTSTATUS
PcAddStreamResource(
    _In_  PDEVICE_OBJECT     PhysicalDeviceObject, 
    _In_  PVOID              ResourceSet, 
    _In_  PPCSTREAMRESOURCE_DESCRIPTOR ResourceDescriptor,
    _Out_ PCSTREAMRESOURCE*  ResourceHandle
    );

PORTCLASSAPI
NTSTATUS
PcRemoveStreamResource(
    _In_ PCSTREAMRESOURCE  ResourceHandle
    );

#if !defined(DEFINE_ABSTRACT_IPORTCLSSTREAMRESOURCEMANAGER)
#define DEFINE_ABSTRACT_IPORTCLSSTREAMRESOURCEMANAGER()         \
    STDMETHOD_(NTSTATUS,AddStreamResource)                      \
    (   THIS_                                                   \
        _In_  PVOID             ResourceSet,                    \
        _In_  PPCSTREAMRESOURCE_DESCRIPTOR ResourceDescriptor,  \
        _Out_ PCSTREAMRESOURCE* ResourceHandle                  \
    ) PURE;                                                     \
    STDMETHOD_(NTSTATUS,RemoveStreamResource)                   \
    (                                                           \
        THIS_                                                   \
        _In_ PCSTREAMRESOURCE   ResourceHandle                  \
    ) PURE;
#endif // !defined(DEFINE_ABSTRACT_IPORTCLSSTREAMRESOURCEMANAGER)

/*****************************************************************************
 * IPortClsStreamResourceManager
 *****************************************************************************/
DECLARE_INTERFACE_(IPortClsStreamResourceManager,IUnknown)
{
    DEFINE_ABSTRACT_UNKNOWN()   //  For IUnknown

    DEFINE_ABSTRACT_IPORTCLSSTREAMRESOURCEMANAGER() // For IPortClsStreamResourceManager
};

typedef IPortClsStreamResourceManager *PPORTCLSStreamResourceManager;

#ifdef PC_IMPLEMENTATION
#define IMP_IPortClsStreamResourceManager\
    STDMETHODIMP_(NTSTATUS) AddStreamResource\
    (\
        _In_  PVOID             ResourceSet,\
        _In_  PPCSTREAMRESOURCE_DESCRIPTOR ResourceDescriptor,\
        _Out_ PCSTREAMRESOURCE* ResourceHandle\
    );\
    STDMETHODIMP_(NTSTATUS) RemoveStreamResource\
    (\
        _In_ PCSTREAMRESOURCE   ResourceHandle\
    );
#endif // PC_IMPLEMENTATION

/*****************************************************************************
 * IPortClsStreamResourceManager2
 *****************************************************************************/
DECLARE_INTERFACE_(IPortClsStreamResourceManager2,IPortClsStreamResourceManager)
{
    DEFINE_ABSTRACT_UNKNOWN()   //  For IUnknown

    DEFINE_ABSTRACT_IPORTCLSSTREAMRESOURCEMANAGER() // For IPortClsStreamResourceManager
    
    STDMETHOD_(NTSTATUS,AddStreamResource2)
    (   THIS_
        _In_  PDEVICE_OBJECT    PhysicalDeviceObject, 
        _In_  PVOID             ResourceSet,
        _In_  PPCSTREAMRESOURCE_DESCRIPTOR ResourceDescriptor,
        _Out_ PCSTREAMRESOURCE* ResourceHandle
    ) PURE;
};

typedef IPortClsStreamResourceManager2 *PPORTCLSStreamResourceManager2;

#ifdef PC_IMPLEMENTATION
#define IMP_IPortClsStreamResourceManager2\
    IMP_IPortClsStreamResourceManager\
    STDMETHODIMP_(NTSTATUS) AddStreamResource2\
    (\
        _In_  PDEVICE_OBJECT    PhysicalDeviceObject,\
        _In_  PVOID             ResourceSet,\
        _In_  PPCSTREAMRESOURCE_DESCRIPTOR ResourceDescriptor,\
        _Out_ PCSTREAMRESOURCE* ResourceHandle\
    );
#endif // PC_IMPLEMENTATION

/*****************************************************************************
 * PcRegisterAdapterPnpManagement() 
 *****************************************************************************
 * Register the adapter's pnp management interface with PortCls.
 */
PORTCLASSAPI
NTSTATUS
NTAPI
PcRegisterAdapterPnpManagement
(
    _In_      PUNKNOWN          Unknown,
    _In_      PDEVICE_OBJECT    DeviceObject
);

/*****************************************************************************
 * PcUnregisterAdapterPnpManagement()
 *****************************************************************************
 * Unregister the adapter's pnp management interface with PortCls.
 */
PORTCLASSAPI
NTSTATUS
NTAPI
PcUnregisterAdapterPnpManagement
(
    _In_      PDEVICE_OBJECT    DeviceObject
);

#endif // (NTDDI_VERSION >= NTDDI_THRESHOLD)

#ifdef PC_OLD_NAMES

#define InitializeAdapterDriver(c1,c2,a)        \
    PcInitializeAdapterDriver(PDRIVER_OBJECT(c1),PUNICODE_STRING(c2),PDRIVER_ADD_DEVICE(a))
#define AddAdapterDevice(c1,c2,s,m)             \
    PcAddAdapterDevice(PDRIVER_OBJECT(c1),PDEVICE_OBJECT(c2),s,m,0)
#define RegisterSubdevice(c1,c2,n,u)            \
    PcRegisterSubdevice(PDEVICE_OBJECT(c1),n,u)
#define RegisterPhysicalConnection(c1,c2,fs,fp,ts,tp) \
    PcRegisterPhysicalConnection(PDEVICE_OBJECT(c1),fs,fp,ts,tp)
#define RegisterPhysicalConnectionToExternal(c1,c2,fs,fp,ts,tp) \
    PcRegisterPhysicalConnectionToExternal(PDEVICE_OBJECT(c1),fs,fp,ts,tp)
#define RegisterPhysicalConnectionFromExternal(c1,c2,fs,fp,ts,tp) \
    PcRegisterPhysicalConnectionFromExternal(PDEVICE_OBJECT(c1),fs,fp,ts,tp)

#define NewPort                                 PcNewPort
#define NewMiniport                             PcNewMiniport
#define CompletePendingPropertyRequest          PcCompletePendingPropertyRequest

#if (NTDDI_VERSION < NTDDI_WINXP)
#define NewIrpStreamVirtual                     PcNewIrpStreamVirtual
#define NewIrpStreamPhysical                    PcNewIrpStreamPhysical
#endif

#define NewResourceList                         PcNewResourceList
#define NewResourceSublist                      PcNewResourceSublist
#define NewDmaChannel                           PcNewDmaChannel
#define NewServiceGroup                         PcNewServiceGroup
#define GetTimeInterval                         PcGetTimeInterval

#define WIN95COMPAT_ReadPortUChar(Port)         READ_PORT_UCHAR(Port)
#define WIN95COMPAT_WritePortUChar(Port,Value)  WRITE_PORT_UCHAR(Port,Value)
#define WIN95COMPAT_ReadPortUShort(Port)        READ_PORT_USHORT(Port)
#define WIN95COMPAT_WritePortUShort(Port,Value) WRITE_PORT_USHORT(Port,Value)

#endif  //PC_OLD_NAMES

#if (NTDDI_VERSION >= NTDDI_WIN10_RS2)

// {1E092CE2-DB25-483B-8446-B0961215258B}
DEFINE_GUID(IID_IPortClsNotifications,
0x1E092CE2L, 0xDB25, 0x483B, 0x84, 0x46, 0xB0, 0x96, 0x12, 0x15, 0x25, 0x8B);

/*****************************************************************************
 * IPortClsNotifications
 *****************************************************************************
 * An interface implemented by ports to provide
 * notification helpers to miniports.
 */

typedef struct _PCNOTIFICATION_BUFFER 
{
    UCHAR NotificationBuffer[1];
} PCNOTIFICATION_BUFFER, *PPCNOTIFICATION_BUFFER;

DECLARE_INTERFACE_(IPortClsNotifications,IUnknown)
{
    DEFINE_ABSTRACT_UNKNOWN()   //  For IUnknown

    STDMETHOD_(NTSTATUS, AllocNotificationBuffer)
    (   THIS_
        _In_    POOL_TYPE               PoolType,
        _In_    USHORT                  NumberOfBytes,
        _Out_   PPCNOTIFICATION_BUFFER* NotificationBuffer
    )   PURE;
    
    STDMETHOD_(void, FreeNotificationBuffer)
    (   THIS_
        _In_    PPCNOTIFICATION_BUFFER  NotificationBuffer
    )   PURE;
    
    STDMETHOD_(void, SendNotification)
    (   THIS_
        _In_    const GUID*             NotificationId,
        _In_    PPCNOTIFICATION_BUFFER  NotificationBuffer
    )   PURE;
};

typedef IPortClsNotifications *PPORTCLSNOTIFICATIONS;

#define IMP_IPortClsNotifications\
    STDMETHODIMP_(NTSTATUS) AllocNotificationBuffer\
    (   _In_    POOL_TYPE      	        PoolType,\
        _In_    USHORT                  NumberOfBytes,\
        _Out_   PPCNOTIFICATION_BUFFER* NotificationBuffer\
    );\
    STDMETHODIMP_(void)     FreeNotificationBuffer\
    (   _In_    PPCNOTIFICATION_BUFFER  NotificationBuffer\
    );\
    STDMETHODIMP_(void)     SendNotification\
    (   _In_    const GUID*             NotificationId,\
        _In_    PPCNOTIFICATION_BUFFER  NotificationBuffer\
    )

#endif // NTDDI_VERSION >= NTDDI_WIN10_RS2

#endif //_PORTCLS_H_
