/******************************Module*Header**********************************\
*
* Module Name: d3dkmthk.h
*
* Content: longhorn display driver model kernel mode thunk interfaces
*
* Copyright (c) 2003 Microsoft Corporation.  All rights reserved.
\*****************************************************************************/
#ifndef _D3DKMTHK_H_
#define _D3DKMTHK_H_

#include <d3dkmdt.h>

#pragma warning(push)
#pragma warning(disable:4201) // anonymous unions warning
#pragma warning(disable:4200) // zero-sized array in struct/union
#pragma warning(disable:4214)   // nonstandard extension used: bit field types other than int


typedef struct _OBJECT_ATTRIBUTES OBJECT_ATTRIBUTES;
typedef OBJECT_ATTRIBUTES *POBJECT_ATTRIBUTES;

//
// Available only for Vista (LONGHORN) and later and for
// multiplatform tools such as debugger extensions
//
#if (NTDDI_VERSION >= NTDDI_LONGHORN) || defined(D3DKMDT_SPECIAL_MULTIPLATFORM_TOOL)

typedef struct _D3DKMT_CREATEDEVICEFLAGS
{
    UINT    LegacyMode               :  1;   // 0x00000001
    UINT    RequestVSync             :  1;   // 0x00000002
#if (DXGKDDI_INTERFACE_VERSION >= DXGKDDI_INTERFACE_VERSION_WIN8)
    UINT    DisableGpuTimeout        :  1;   // 0x00000004
    UINT    Reserved                 : 29;   // 0xFFFFFFF8
#else
    UINT    Reserved                 : 30;   // 0xFFFFFFFC
#endif
} D3DKMT_CREATEDEVICEFLAGS;

typedef struct _D3DKMT_CREATEDEVICE
{
    union
    {
        D3DKMT_HANDLE           hAdapter;           // in: identifies the adapter for user-mode creation
        VOID*                   pAdapter;           // in: identifies the adapter for kernel-mode creation
    };

    D3DKMT_CREATEDEVICEFLAGS    Flags;

    D3DKMT_HANDLE               hDevice;                // out: Identifies the device
    VOID*                       pCommandBuffer;         // out: D3D10 compatibility.
    UINT                        CommandBufferSize;      // out: D3D10 compatibility.
    D3DDDI_ALLOCATIONLIST*      pAllocationList;        // out: D3D10 compatibility.
    UINT                        AllocationListSize;     // out: D3D10 compatibility.
    D3DDDI_PATCHLOCATIONLIST*   pPatchLocationList;     // out: D3D10 compatibility.
    UINT                        PatchLocationListSize;  // out: D3D10 compatibility.
} D3DKMT_CREATEDEVICE;

typedef struct _D3DKMT_DESTROYDEVICE
{
    D3DKMT_HANDLE     hDevice;              // in: Indentifies the device
}D3DKMT_DESTROYDEVICE;

typedef enum _D3DKMT_CLIENTHINT
{
    D3DKMT_CLIENTHINT_UNKNOWN     = 0,
    D3DKMT_CLIENTHINT_OPENGL      = 1,
    D3DKMT_CLIENTHINT_CDD         = 2,       // Internal
    D3DKMT_CLIENTHINT_DX7         = 7,
    D3DKMT_CLIENTHINT_DX8         = 8,
    D3DKMT_CLIENTHINT_DX9         = 9,
    D3DKMT_CLIENTHINT_DX10        = 10,
} D3DKMT_CLIENTHINT;

typedef struct _D3DKMT_CREATECONTEXT
{
    D3DKMT_HANDLE               hDevice;                    // in:  Handle to the device owning this context.
    UINT                        NodeOrdinal;                // in:  Identifier for the node targetted by this context.
    UINT                        EngineAffinity;             // in:  Engine affinity within the specified node.
    D3DDDI_CREATECONTEXTFLAGS   Flags;                      // in:  Context creation flags.
    VOID*                       pPrivateDriverData;         // in:  Private driver data
    UINT                        PrivateDriverDataSize;      // in:  Size of private driver data
    D3DKMT_CLIENTHINT           ClientHint;                 // in:  Hints which client is creating this
    D3DKMT_HANDLE               hContext;                   // out: Handle of the created context.
    VOID*                       pCommandBuffer;             // out: Pointer to the first command buffer.
    UINT                        CommandBufferSize;          // out: Command buffer size (bytes).
    D3DDDI_ALLOCATIONLIST*      pAllocationList;            // out: Pointer to the first allocation list.
    UINT                        AllocationListSize;         // out: Allocation list size (elements).
    D3DDDI_PATCHLOCATIONLIST*   pPatchLocationList;         // out: Pointer to the first patch location list.
    UINT                        PatchLocationListSize;      // out: Patch location list size (elements).
    D3DGPU_VIRTUAL_ADDRESS      CommandBuffer;              // out: GPU virtual address of the command buffer. _ADVSCH_
} D3DKMT_CREATECONTEXT;

typedef struct _D3DKMT_DESTROYCONTEXT
{
    D3DKMT_HANDLE               hContext;                   // in:  Identifies the context being destroyed.
} D3DKMT_DESTROYCONTEXT;

typedef struct _D3DKMT_CREATESYNCHRONIZATIONOBJECT
{
    D3DKMT_HANDLE                           hDevice;        // in:  Handle to the device.
    D3DDDI_SYNCHRONIZATIONOBJECTINFO        Info;           // in:  Attributes of the synchronization object.
    D3DKMT_HANDLE                           hSyncObject;    // out: Handle to the synchronization object created.
} D3DKMT_CREATESYNCHRONIZATIONOBJECT;

typedef struct _D3DKMT_CREATESYNCHRONIZATIONOBJECT2
{
    D3DKMT_HANDLE                           hDevice;        // in:  Handle to the device.
    D3DDDI_SYNCHRONIZATIONOBJECTINFO2       Info;           // in/out: Attributes of the synchronization object.
    D3DKMT_HANDLE                           hSyncObject;    // out: Handle to the synchronization object created.
} D3DKMT_CREATESYNCHRONIZATIONOBJECT2;

typedef struct _D3DKMT_DESTROYSYNCHRONIZATIONOBJECT
{
    D3DKMT_HANDLE               hSyncObject;                // in:  Identifies the synchronization objects being destroyed.
} D3DKMT_DESTROYSYNCHRONIZATIONOBJECT;

typedef struct _D3DKMT_OPENSYNCHRONIZATIONOBJECT
{
    D3DKMT_HANDLE               hSharedHandle;              // in: shared handle to synchronization object to be opened.
    D3DKMT_HANDLE               hSyncObject;                // out: Handle to sync object in this process.

    UINT64                      Reserved[8];
} D3DKMT_OPENSYNCHRONIZATIONOBJECT;

typedef struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECT
{
    D3DKMT_HANDLE             hContext;                   // in: Identifies the context that needs to wait.
    UINT                      ObjectCount;                // in: Specifies the number of object to wait on.
    D3DKMT_HANDLE             ObjectHandleArray[D3DDDI_MAX_OBJECT_WAITED_ON]; // in: Specifies the object to wait on.
} D3DKMT_WAITFORSYNCHRONIZATIONOBJECT;

typedef struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECT2
{
    D3DKMT_HANDLE             hContext;                   // in: Identifies the context that needs to wait.
    UINT                      ObjectCount;                // in: Specifies the number of object to wait on.
    D3DKMT_HANDLE             ObjectHandleArray[D3DDDI_MAX_OBJECT_WAITED_ON]; // in: Specifies the object to wait on.
    union
    {
        struct {
            UINT64            FenceValue;           // in: fence value to be waited.
        } Fence;
        UINT64                Reserved[8];
    };
} D3DKMT_WAITFORSYNCHRONIZATIONOBJECT2;

typedef struct _D3DKMT_SIGNALSYNCHRONIZATIONOBJECT
{
    D3DKMT_HANDLE             hContext;           // in: Identifies the context that needs to signal.
    UINT                      ObjectCount;        // in: Specifies the number of object to signal.
    D3DKMT_HANDLE             ObjectHandleArray[D3DDDI_MAX_OBJECT_SIGNALED]; // in: Specifies the object to be signaled.
    D3DDDICB_SIGNALFLAGS      Flags;                                         // in: Specifies signal behavior.
} D3DKMT_SIGNALSYNCHRONIZATIONOBJECT;

typedef struct _D3DKMT_SIGNALSYNCHRONIZATIONOBJECT2
{
    D3DKMT_HANDLE             hContext;           // in: Identifies the context that needs to signal.
    UINT                      ObjectCount;        // in: Specifies the number of object to signal.
    D3DKMT_HANDLE             ObjectHandleArray[D3DDDI_MAX_OBJECT_SIGNALED]; // in: Specifies the object to be signaled.
    D3DDDICB_SIGNALFLAGS      Flags;                  // in: Specifies signal behavior.
    ULONG                     BroadcastContextCount;  // in: Specifies the number of context
                                                      //     to broadcast this command buffer to.
    D3DKMT_HANDLE             BroadcastContext[D3DDDI_MAX_BROADCAST_CONTEXT]; // in: Specifies the handle of the context to
                                                                              //     broadcast to.
    union
    {
        struct {
            UINT64            FenceValue;             // in: fence value to be signaled;
        } Fence;
#if (DXGKDDI_INTERFACE_VERSION >= DXGKDDI_INTERFACE_VERSION_WIN8)
        HANDLE                CpuEventHandle;         // in: handle of a CPU event to be signaled
#endif // (DXGKDDI_INTERFACE_VERSION >= DXGKDDI_INTERFACE_VERSION_WIN8)
        UINT64                Reserved[8];
    };
} D3DKMT_SIGNALSYNCHRONIZATIONOBJECT2;

typedef struct _D3DKMT_LOCK
{
    D3DKMT_HANDLE       hDevice;            // in: identifies the device
    D3DKMT_HANDLE       hAllocation;        // in: allocation to lock
                                            // out: New handle representing the allocation after the lock.
    UINT                PrivateDriverData;  // in: Used by UMD for AcquireAperture
    UINT                NumPages;
    CONST UINT*         pPages;
    VOID*               pData;              // out: pointer to memory
    D3DDDICB_LOCKFLAGS  Flags;              // in: Bit field defined by D3DDDI_LOCKFLAGS
    D3DGPU_VIRTUAL_ADDRESS GpuVirtualAddress; // out: GPU's Virtual Address of locked allocation. _ADVSCH_
} D3DKMT_LOCK;

typedef struct _D3DKMT_UNLOCK
{
    D3DKMT_HANDLE           hDevice;        // in: Identifies the device
    UINT                    NumAllocations; // in: Number of allocations in the array
    CONST D3DKMT_HANDLE*    phAllocations;  // in: array of allocations to unlock
} D3DKMT_UNLOCK;

typedef enum _D3DKMDT_MODE_PRUNING_REASON
{
    D3DKMDT_MPR_UNINITIALIZED                               = 0, // mode was pruned or is supported because of:
    D3DKMDT_MPR_ALLCAPS                                     = 1, //   all of the monitor caps (only used to imply lack of support - for support, specific reason is always indicated)
    D3DKMDT_MPR_DESCRIPTOR_MONITOR_SOURCE_MODE              = 2, //   monitor source mode in the monitor descriptor
    D3DKMDT_MPR_DESCRIPTOR_MONITOR_FREQUENCY_RANGE          = 3, //   monitor frequency range in the monitor descriptor
    D3DKMDT_MPR_DESCRIPTOR_OVERRIDE_MONITOR_SOURCE_MODE     = 4, //   monitor source mode in the monitor descriptor override
    D3DKMDT_MPR_DESCRIPTOR_OVERRIDE_MONITOR_FREQUENCY_RANGE = 5, //   monitor frequency range in the monitor descriptor override
    D3DKMDT_MPR_DEFAULT_PROFILE_MONITOR_SOURCE_MODE         = 6, //   monitor source mode in the default monitor profile
    D3DKMDT_MPR_DRIVER_RECOMMENDED_MONITOR_SOURCE_MODE      = 7, //   monitor source mode recommended by the driver
    D3DKMDT_MPR_MONITOR_FREQUENCY_RANGE_OVERRIDE            = 8, //   monitor frequency range override
    D3DKMDT_MPR_CLONE_PATH_PRUNED                           = 9, //   Mode is pruned because other path(s) in clone cluster has(have) no mode supported by monitor
    D3DKMDT_MPR_MAXVALID                                    = 10
}
D3DKMDT_MODE_PRUNING_REASON;

// This structure takes 8 bytes.
// The unnamed UINT of size 0 forces alignment of the structure to
// make it exactly occupy 8 bytes, see MSDN docs on C++ bitfields
// for more details
typedef struct _D3DKMDT_DISPLAYMODE_FLAGS
{
#if (DXGKDDI_INTERFACE_VERSION < DXGKDDI_INTERFACE_VERSION_WIN8)
    BOOLEAN                      ValidatedAgainstMonitorCaps  : 1;
    BOOLEAN                      RoundedFakeMode              : 1;
    D3DKMDT_MODE_PRUNING_REASON  ModePruningReason            : 4;
    UINT                         Reserved                     : 28;
#else
    UINT                         ValidatedAgainstMonitorCaps  : 1;
    UINT                         RoundedFakeMode              : 1;
    UINT                                                      : 0;
    D3DKMDT_MODE_PRUNING_REASON  ModePruningReason            : 4;
    UINT                         Stereo                       : 1;
    UINT                         AdvancedScanCapable          : 1;
#if (DXGKDDI_INTERFACE_VERSION < DXGKDDI_INTERFACE_VERSION_WDDM2_0)
    UINT                         Reserved                     : 26;
#else
    UINT                         PreferredTiming              : 1;
    UINT                         PhysicalModeSupported        : 1;
    UINT                         Reserved                     : 24;
#endif
#endif
}
D3DKMDT_DISPLAYMODE_FLAGS;

typedef struct _D3DKMT_DISPLAYMODE
{
    UINT                                   Width;
    UINT                                   Height;
    D3DDDIFORMAT                           Format;
    UINT                                   IntegerRefreshRate;
    D3DDDI_RATIONAL                        RefreshRate;
    D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING  ScanLineOrdering;
    D3DDDI_ROTATION                        DisplayOrientation;
    UINT                                   DisplayFixedOutput;
    D3DKMDT_DISPLAYMODE_FLAGS              Flags;
} D3DKMT_DISPLAYMODE;

typedef struct _D3DKMT_GETDISPLAYMODELIST
{
    D3DKMT_HANDLE                   hAdapter;       // in: adapter handle
    D3DDDI_VIDEO_PRESENT_SOURCE_ID  VidPnSourceId;  // in: adapter's VidPN source ID
    D3DKMT_DISPLAYMODE*             pModeList;      // out:
    UINT                            ModeCount;      // in/out:
} D3DKMT_GETDISPLAYMODELIST;

typedef struct _D3DKMT_DISPLAYMODELIST
{
    D3DDDI_VIDEO_PRESENT_SOURCE_ID  VidPnSourceId;
    UINT                            ModeCount;
    D3DKMT_DISPLAYMODE              pModeList[0];
} D3DKMT_DISPLAYMODELIST;

typedef struct _D3DKMT_SETDISPLAYMODE_FLAGS
{
    BOOLEAN  PreserveVidPn   : 1;
    UINT     Reserved       : 31;
}
D3DKMT_SETDISPLAYMODE_FLAGS;

typedef struct _D3DKMT_SETDISPLAYMODE
{
    D3DKMT_HANDLE                          hDevice;                         // in: Identifies the device
    D3DKMT_HANDLE                          hPrimaryAllocation;              // in:
    D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING  ScanLineOrdering;                // in:
    D3DDDI_ROTATION                        DisplayOrientation;              // in:
    UINT                                   PrivateDriverFormatAttribute;    // out: Private Format Attribute of the current primary surface if DxgkSetDisplayMode failed with STATUS_GRAPHICS_INCOMPATIBLE_PRIVATE_FORMAT
    D3DKMT_SETDISPLAYMODE_FLAGS            Flags;                           // in:
} D3DKMT_SETDISPLAYMODE;


typedef struct _D3DKMT_MULTISAMPLEMETHOD
{
    UINT    NumSamples;
    UINT    NumQualityLevels;
    UINT    Reserved;   //workaround for NTRAID#Longhorn-1124385-2005/03/14-kanqiu
} D3DKMT_MULTISAMPLEMETHOD;

typedef struct _D3DKMT_GETMULTISAMPLEMETHODLIST
{
    D3DKMT_HANDLE                   hAdapter;       // in: adapter handle
    D3DDDI_VIDEO_PRESENT_SOURCE_ID  VidPnSourceId;  // in: adapter's VidPN source ID
    UINT                            Width;          // in:
    UINT                            Height;         // in:
    D3DDDIFORMAT                    Format;         // in:
    D3DKMT_MULTISAMPLEMETHOD*       pMethodList;    // out:
    UINT                            MethodCount;    // in/out:
} D3DKMT_GETMULTISAMPLEMETHODLIST;

typedef struct _D3DKMT_PRESENTFLAGS
{
    union
    {
        struct
        {
            UINT    Blt                         : 1;        // 0x00000001
            UINT    ColorFill                   : 1;        // 0x00000002
            UINT    Flip                        : 1;        // 0x00000004
            UINT    FlipDoNotFlip               : 1;        // 0x00000008
            UINT    FlipDoNotWait               : 1;        // 0x00000010
            UINT    FlipRestart                 : 1;        // 0x00000020
            UINT    DstRectValid                : 1;        // 0x00000040
            UINT    SrcRectValid                : 1;        // 0x00000080
            UINT    RestrictVidPnSource         : 1;        // 0x00000100
            UINT    SrcColorKey                 : 1;        // 0x00000200
            UINT    DstColorKey                 : 1;        // 0x00000400
            UINT    LinearToSrgb                : 1;        // 0x00000800
            UINT    PresentCountValid           : 1;        // 0x00001000
            UINT    Rotate                      : 1;        // 0x00002000
            UINT    PresentToBitmap             : 1;        // 0x00004000
            UINT    RedirectedFlip              : 1;        // 0x00008000
            UINT    RedirectedBlt               : 1;        // 0x00010000
#if (DXGKDDI_INTERFACE_VERSION >= DXGKDDI_INTERFACE_VERSION_WIN8)
            UINT    FlipStereo                  : 1;        // 0x00020000   // This is a flip from a stereo alloc. Used in addition to Flip.
            UINT    FlipStereoTemporaryMono     : 1;        // 0x00040000   // This is a flip from a stereo alloc. The left image should used to produce both images. Used in addition to Flip.
            UINT    FlipStereoPreferRight       : 1;        // 0x00080000   // This is a flip from a stereo alloc. Use the right image when cloning to a mono monitor. Used in addition to Flip.
            UINT    BltStereoUseRight           : 1;        // 0x00100000   // This is a Blt from a stereo alloc to a mono alloc. The right image should be used.
            UINT    PresentHistoryTokenOnly     : 1;        // 0x00200000   // Submit Present History Token only.
            UINT    PresentRegionsValid         : 1;        // 0x00400000   // Ptr to present regions is valid
            UINT    PresentDDA                  : 1;        // 0x00800000   // Present from a DDA swapchain
            UINT    ProtectedContentBlankedOut  : 1;        // 0x01000000
            UINT    RemoteSession               : 1;        // 0x02000000
#if (DXGKDDI_INTERFACE_VERSION >= DXGKDDI_INTERFACE_VERSION_WDDM1_3)
            UINT    CrossAdapter                : 1;        // 0x04000000
            UINT    DurationValid               : 1;        // 0x08000000
            UINT    PresentIndirect             : 1;        // 0x10000000   // Present to an indirect-display adapter
            UINT    PresentHMD                  : 1;        // 0x20000000   // Present from an HMD swapchain.
            UINT    Reserved                    : 2;        // 0xC0000000
#else
            UINT    Reserved                    : 6;        // 0xFC000000
#endif // (DXGKDDI_INTERFACE_VERSION >= DXGKDDI_INTERFACE_VERSION_WDDM1_3)
#else
            UINT    Reserved                    : 15;       // 0xFFFE0000
#endif
        };
        UINT    Value;
    };
} D3DKMT_PRESENTFLAGS;

typedef enum _D3DKMT_PRESENT_MODEL
{
    D3DKMT_PM_UNINITIALIZED       = 0,
    D3DKMT_PM_REDIRECTED_GDI       = 1,
    D3DKMT_PM_REDIRECTED_FLIP      = 2,
    D3DKMT_PM_REDIRECTED_BLT       = 3,
    D3DKMT_PM_REDIRECTED_VISTABLT  = 4,
    D3DKMT_PM_SCREENCAPTUREFENCE   = 5,
    D3DKMT_PM_REDIRECTED_GDI_SYSMEM  = 6,
    D3DKMT_PM_REDIRECTED_COMPOSITION = 7,
} D3DKMT_PRESENT_MODEL;

typedef enum _D3DKMT_FLIPMODEL_INDEPENDENT_FLIP_STAGE
{
    D3DKMT_FLIPMODEL_INDEPENDENT_FLIP_STAGE_FLIP_SUBMITTED = 0,
    D3DKMT_FLIPMODEL_INDEPENDENT_FLIP_STAGE_FLIP_COMPLETE = 1,
} D3DKMT_FLIPMODEL_INDEPENDENT_FLIP_STAGE;

typedef struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKENFLAGS
{
    union
    {
        struct
        {
            UINT  Video                         :  1;   // 0x00000001
            UINT  RestrictedContent             :  1;   // 0x00000002
            UINT  ClipToView                    :  1;   // 0x00000004
#if (DXGKDDI_INTERFACE_VERSION >= DXGKDDI_INTERFACE_VERSION_WIN8)
            UINT  StereoPreferRight             :  1;   // 0x00000008
            UINT  TemporaryMono                 :  1;   // 0x00000010
            UINT  FlipRestart                   :  1;   // 0x00000020
            UINT  HDRMetaDataChanged            :  1;   // 0x00000040
            UINT  AlphaMode                     :  2;   // 0x00000180
            UINT  SignalLimitOnTokenCompletion  :  1;   // 0x00000200
            UINT  YCbCrFlags                    :  3;   // 0x00001C00
            UINT  IndependentFlip               :  1;   // 0x00002000
            D3DKMT_FLIPMODEL_INDEPENDENT_FLIP_STAGE IndependentFlipStage : 2;   // 0x0000C000
            UINT  IndependentFlipReleaseCount   :  2;   // 0x00030000
            UINT  IndependentFlipForceNotifyDwm :  1;   // 0x00040000
            UINT  UseCustomDuration             :  1;   // 0x00080000
            UINT  IndependentFlipRequestDwmConfirm:1;   // 0x00100000
            UINT  IndependentFlipCandidate      :  1;   // 0x00200000
            UINT  IndependentFlipCheckNeeded    :  1;   // 0x00400000
            UINT  IndependentFlipTrueImmediate  :  1;   // 0x00800000
            UINT  Reserved                      :  8;   // 0xFF000000
#else
            UINT  Reserved                      : 29;   // 0xFFFFFFF8
#endif
        };

        UINT  Value;
    };
} D3DKMT_FLIPMODEL_PRESENTHISTORYTOKENFLAGS;

#define D3DKMT_MAX_PRESENT_HISTORY_RECTS 16

typedef struct _D3DKMT_DIRTYREGIONS
{
    UINT  NumRects;
    RECT  Rects[D3DKMT_MAX_PRESENT_HISTORY_RECTS];
} D3DKMT_DIRTYREGIONS;

typedef struct _D3DKMT_COMPOSITION_PRESENTHISTORYTOKEN
{
    ULONG64 hPrivateData;
} D3DKMT_COMPOSITION_PRESENTHISTORYTOKEN;

typedef struct _D3DKMT_GDIMODEL_PRESENTHISTORYTOKEN
{
    ULONG64              hLogicalSurface;
    ULONG64              hPhysicalSurface;
#if (DXGKDDI_INTERFACE_VERSION >= DXGKDDI_INTERFACE_VERSION_WIN8)
    RECT                 ScrollRect;
    POINT                ScrollOffset;
#endif
    D3DKMT_DIRTYREGIONS  DirtyRegions;
} D3DKMT_GDIMODEL_PRESENTHISTORYTOKEN;

typedef struct _D3DKMT_GDIMODEL_SYSMEM_PRESENTHISTORYTOKEN
{
    ULONG64 hlsurf;
    DWORD dwDirtyFlags;
    UINT64 uiCookie;
} D3DKMT_GDIMODEL_SYSMEM_PRESENTHISTORYTOKEN;

typedef ULONGLONG  D3DKMT_VISTABLTMODEL_PRESENTHISTORYTOKEN;

typedef struct _D3DKMT_FENCE_PRESENTHISTORYTOKEN
{
    UINT64 Key;
} D3DKMT_FENCE_PRESENTHISTORYTOKEN;

typedef struct _D3DKMT_BLTMODEL_PRESENTHISTORYTOKEN
{
    ULONG64                             hLogicalSurface;
    ULONG64                             hPhysicalSurface;
    ULONG64                             EventId;
    D3DKMT_DIRTYREGIONS                 DirtyRegions;
} D3DKMT_BLTMODEL_PRESENTHISTORYTOKEN;

#if (DXGKDDI_INTERFACE_VERSION >= DXGKDDI_INTERFACE_VERSION_WIN8)
#define D3DKMT_MAX_PRESENT_HISTORY_SCATTERBLTS 12

typedef struct _D3DKMT_SCATTERBLT
{
    ULONG64 hLogicalSurfaceDestination;
    LONG64  hDestinationCompSurfDWM;
    UINT64  DestinationCompositionBindingId;
    RECT    SourceRect;
    POINT   DestinationOffset;
} D3DKMT_SCATTERBLT;

typedef struct _D3DKMT_SCATTERBLTS
{
    UINT NumBlts;
    D3DKMT_SCATTERBLT Blts[D3DKMT_MAX_PRESENT_HISTORY_SCATTERBLTS];
} D3DKMT_SCATTERBLTS;
#endif

typedef struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN
{
    UINT64                                     FenceValue;
    ULONG64                                    hLogicalSurface;
    UINT_PTR                                   dxgContext;
    D3DDDI_VIDEO_PRESENT_SOURCE_ID             VidPnSourceId;
    UINT                                       SwapChainIndex;
    UINT64                                     PresentLimitSemaphoreId;
    D3DDDI_FLIPINTERVAL_TYPE                   FlipInterval;
    D3DKMT_FLIPMODEL_PRESENTHISTORYTOKENFLAGS  Flags;
#if (DXGKDDI_INTERFACE_VERSION >= DXGKDDI_INTERFACE_VERSION_WIN8)
    LONG64                                     hCompSurf;
    LUID                                       compSurfLuid;
    UINT64                                     confirmationCookie;
    UINT64                                     CompositionSyncKey;
    UINT                                       RemainingTokens;
    RECT                                       ScrollRect;
    POINT                                      ScrollOffset;
    UINT                                       PresentCount;
    FLOAT                                      RevealColor[4]; // index 0 == R, ... , 3 == A
    D3DDDI_ROTATION                            Rotation;
    D3DKMT_SCATTERBLTS                         ScatterBlts;
    D3DKMT_HANDLE                              hSyncObject;     // The local handle of a sync object from D3D runtimes.
                                                                // The global handle of the sync object coming to DWM.
    RECT                                       SourceRect;
    UINT                                       DestWidth;
    UINT                                       DestHeight;
    RECT                                       TargetRect;
    // DXGI_MATRIX_3X2_F: _11 _12 _21 _22 _31 _32
    FLOAT                                      Transform[6];
    UINT                                       CustomDuration;
    D3DDDI_FLIPINTERVAL_TYPE                   CustomDurationFlipInterval;
    UINT                                       PlaneIndex;
#endif
#if (DXGKDDI_INTERFACE_VERSION >= DXGKDDI_INTERFACE_VERSION_WDDM2_0)
    D3DDDI_COLOR_SPACE_TYPE                    ColorSpace;
#endif
    D3DKMT_DIRTYREGIONS                        DirtyRegions;
} D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN;

// User mode timeout is in milliseconds, kernel mode timeout is in 100 nanoseconds
#define FLIPEX_TIMEOUT_USER     (2000)
#define FLIPEX_TIMEOUT_KERNEL   (FLIPEX_TIMEOUT_USER*10000)

typedef struct _D3DKMT_PRESENTHISTORYTOKEN
{
    D3DKMT_PRESENT_MODEL  Model;
    // The size of the present history token in bytes including Model.
    // Should be set to zero by when submitting a token.
    // It will be initialized when reading present history and can be used to
    // go to the next token in the present history buffer.
    UINT                  TokenSize;

#if (DXGKDDI_INTERFACE_VERSION >= DXGKDDI_INTERFACE_VERSION_WIN8)
    // The binding id as specified by the Composition Surface
    UINT64                CompositionBindingId;
#endif

    union
    {
        D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN        Flip;
        D3DKMT_BLTMODEL_PRESENTHISTORYTOKEN         Blt;
        D3DKMT_VISTABLTMODEL_PRESENTHISTORYTOKEN    VistaBlt;
        D3DKMT_GDIMODEL_PRESENTHISTORYTOKEN         Gdi;
        D3DKMT_FENCE_PRESENTHISTORYTOKEN            Fence;
        D3DKMT_GDIMODEL_SYSMEM_PRESENTHISTORYTOKEN  GdiSysMem;
        D3DKMT_COMPOSITION_PRESENTHISTORYTOKEN      Composition;
    }
    Token;
} D3DKMT_PRESENTHISTORYTOKEN;

#if (DXGKDDI_INTERFACE_VERSION >= DXGKDDI_INTERFACE_VERSION_WIN8)
typedef struct _D3DKMT_PRESENT_RGNS
{
    UINT DirtyRectCount;
    _Field_size_( DirtyRectCount ) const RECT* pDirtyRects;
    UINT MoveRectCount;
    _Field_size_( MoveRectCount ) const D3DKMT_MOVE_RECT* pMoveRects;
}D3DKMT_PRESENT_RGNS;
#endif

typedef struct _D3DKMT_PRESENT
{
    union
    {
        D3DKMT_HANDLE               hDevice;            // in: D3D10 compatibility.
        D3DKMT_HANDLE               hContext;           // in: Indentifies the context
    };
    HWND                            hWindow;            // in: window to present to
    D3DDDI_VIDEO_PRESENT_SOURCE_ID  VidPnSourceId;      // in: VidPn source ID if RestrictVidPnSource is flagged
    D3DKMT_HANDLE                   hSource;            // in: Source allocation to present from
    D3DKMT_HANDLE                   hDestination;       // in: Destination allocation whenever non-zero
    UINT                            Color;              // in: color value in ARGB 32 bit format
    RECT                            DstRect;            // in: unclipped dest rect
    RECT                            SrcRect;            // in: unclipped src rect
    UINT                            SubRectCnt;         // in: count of sub rects
    CONST RECT*                     pSrcSubRects;       // in: sub rects in source space
    UINT                            PresentCount;       // in: present counter
    D3DDDI_FLIPINTERVAL_TYPE        FlipInterval;       // in: flip interval
    D3DKMT_PRESENTFLAGS             Flags;              // in:
    ULONG                           BroadcastContextCount;                          // in: Specifies the number of context
                                                                                    //     to broadcast this command buffer to.
    D3DKMT_HANDLE                   BroadcastContext[D3DDDI_MAX_BROADCAST_CONTEXT]; // in: Specifies the handle of the context to
                                                                                    //     broadcast to.
    HANDLE                          PresentLimitSemaphore;
    D3DKMT_PRESENTHISTORYTOKEN      PresentHistoryToken;
#if (DXGKDDI_INTERFACE_VERSION >= DXGKDDI_INTERFACE_VERSION_WIN8)
    D3DKMT_PRESENT_RGNS*            pPresentRegions;
#endif
#if (DXGKDDI_INTERFACE_VERSION >= DXGKDDI_INTERFACE_VERSION_WDDM1_3)
    union
    {
        D3DKMT_HANDLE               hAdapter;           // in: iGpu adapter for PHT redirection. Valid only when the CrossAdapter flag is set.
        D3DKMT_HANDLE               hIndirectContext;   // in: indirect adapter context for redirecting through the DoD present path. Only
                                                        //     valid if PresentIndirect flag is set.
    };
    UINT                            Duration;           // in: Per-present duration. Valid only when the DurationValid flag is set.
#if (DXGKDDI_INTERFACE_VERSION >= DXGKDDI_INTERFACE_VERSION_WDDM2_0)
    _Field_size_(BroadcastContextCount)
    D3DKMT_HANDLE*                  BroadcastSrcAllocation;                     // in: LDA
    _Field_size_opt_(BroadcastContextCount)
    D3DKMT_HANDLE*                  BroadcastDstAllocation;                     // in: LDA
    UINT                            PrivateDriverDataSize;                      // in:
    _Field_size_bytes_(PrivateDriverDataSize)
    PVOID                           pPrivateDriverData;                         // in: Private driver data to pass to DdiPresent and DdiSetVidPnSourceAddress
    BOOLEAN                         bOptimizeForComposition;                    // out: DWM is involved in composition
#endif // (DXGKDDI_INTERFACE_VERSION >= DXGKDDI_INTERFACE_VERSION_WDDM2_0)
#endif // (DXGKDDI_INTERFACE_VERSION >= DXGKDDI_INTERFACE_VERSION_WDDM1_3)
} D3DKMT_PRESENT;

#define D3DKMT_MAX_MULTIPLANE_OVERLAY_PLANES                   8
#define D3DKMT_MAX_MULTIPLANE_OVERLAY_ALLOCATIONS_PER_PLANE   256

typedef enum D3DKMT_MULTIPLANE_OVERLAY_FLAGS
{
    D3DKMT_MULTIPLANE_OVERLAY_FLAG_VERTICAL_FLIP               = 0x1,
    D3DKMT_MULTIPLANE_OVERLAY_FLAG_HORIZONTAL_FLIP             = 0x2,
} D3DKMT_MULTIPLANE_OVERLAY_FLAGS;

typedef enum D3DKMT_MULTIPLANE_OVERLAY_BLEND
{
    D3DKMT_MULTIPLANE_OVERLAY_BLEND_OPAQUE     = 0x0,
    D3DKMT_MULTIPLANE_OVERLAY_BLEND_ALPHABLEND = 0x1,
} D3DKMT_MULTIPLANE_OVERLAY_BLEND;

typedef enum D3DKMT_MULTIPLANE_OVERLAY_VIDEO_FRAME_FORMAT
{
    D3DKMT_MULIIPLANE_OVERLAY_VIDEO_FRAME_FORMAT_PROGRESSIVE  = 0,
    D3DKMT_MULTIPLANE_OVERLAY_VIDEO_FRAME_FORMAT_INTERLACED_TOP_FIELD_FIRST   = 1,
    D3DKMT_MULTIPLANE_OVERLAY_VIDEO_FRAME_FORMAT_INTERLACED_BOTTOM_FIELD_FIRST    = 2
} D3DKMT_MULTIPLANE_OVERLAY_VIDEO_FRAME_FORMAT;

typedef enum D3DKMT_MULTIPLANE_OVERLAY_YCbCr_FLAGS
{
    D3DKMT_MULTIPLANE_OVERLAY_YCbCr_FLAG_NOMINAL_RANGE = 0x1, // 16 - 235 vs. 0 - 255
    D3DKMT_MULTIPLANE_OVERLAY_YCbCr_FLAG_BT709         = 0x2, // BT.709 vs. BT.601
    D3DKMT_MULTIPLANE_OVERLAY_YCbCr_FLAG_xvYCC         = 0x4, // xvYCC vs. conventional YCbCr
} D3DKMT_MULTIPLANE_OVERLAY_YCbCr_FLAGS;

typedef enum D3DKMT_MULTIPLANE_OVERLAY_STEREO_FORMAT
{
    DXGKMT_MULTIPLANE_OVERLAY_STEREO_FORMAT_MONO               = 0,
    D3DKMT_MULTIPLANE_OVERLAY_STEREO_FORMAT_HORIZONTAL         = 1,
    D3DKMT_MULTIPLANE_OVERLAY_STEREO_FORMAT_VERTICAL           = 2,
    DXGKMT_MULTIPLANE_OVERLAY_STEREO_FORMAT_SEPARATE           = 3,
    DXGKMT_MULTIPLANE_OVERLAY_STEREO_FORMAT_MONO_OFFSET        = 4,
    DXGKMT_MULTIPLANE_OVERLAY_STEREO_FORMAT_ROW_INTERLEAVED    = 5,
    DXGKMT_MULTIPLANE_OVERLAY_STEREO_FORMAT_COLUMN_INTERLEAVED = 6,
    DXGKMT_MULTIPLANE_OVERLAY_STEREO_FORMAT_CHECKERBOARD       = 7
} D3DKMT_MULTIPLANE_OVERLAY_STEREO_FORMAT;

typedef enum _DXGKMT_MULTIPLANE_OVERLAY_STEREO_FLIP_MODE
{
    DXGKMT_MULTIPLANE_OVERLAY_STEREO_FLIP_NONE   = 0,
    DXGKMT_MULTIPLANE_OVERLAY_STEREO_FLIP_FRAME0 = 1,
    DXGKMT_MULTIPLANE_OVERLAY_STEREO_FLIP_FRAME1 = 2,
} DXGKMT_MULTIPLANE_OVERLAY_STEREO_FLIP_MODE;

typedef enum _DXGKMT_MULTIPLANE_OVERLAY_STRETCH_QUALITY
{
    DXGKMT_MULTIPLANE_OVERLAY_STRETCH_QUALITY_BILINEAR        = 0x1,  // Bilinear
    DXGKMT_MULTIPLANE_OVERLAY_STRETCH_QUALITY_HIGH            = 0x2,  // Maximum
} DXGKMT_MULTIPLANE_OVERLAY_STRETCH_QUALITY;

typedef struct D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES
{
    UINT                                         Flags;      // D3DKMT_MULTIPLANE_OVERLAY_FLAGS
    RECT                                         SrcRect;
    RECT                                         DstRect;
#if (DXGKDDI_INTERFACE_VERSION >= DXGKDDI_INTERFACE_VERSION_WDDM1_3)
    RECT                                         ClipRect;
#endif
    D3DDDI_ROTATION                              Rotation;
    D3DKMT_MULTIPLANE_OVERLAY_BLEND              Blend;
#if (DXGKDDI_INTERFACE_VERSION >= DXGKDDI_INTERFACE_VERSION_WDDM1_3)
    UINT                                         DirtyRectCount;
    RECT*                                        pDirtyRects;
#else
    UINT                                         NumFilters;
    void*                                        pFilters;
#endif
    D3DKMT_MULTIPLANE_OVERLAY_VIDEO_FRAME_FORMAT VideoFrameFormat;
    UINT                                         YCbCrFlags; // D3DKMT_MULTIPLANE_OVERLAY_YCbCr_FLAGS
    D3DKMT_MULTIPLANE_OVERLAY_STEREO_FORMAT      StereoFormat;
    BOOL                                         StereoLeftViewFrame0;
    BOOL                                         StereoBaseViewFrame0;
    DXGKMT_MULTIPLANE_OVERLAY_STEREO_FLIP_MODE   StereoFlipMode;
#if (DXGKDDI_INTERFACE_VERSION >= DXGKDDI_INTERFACE_VERSION_WDDM1_3)
    DXGKMT_MULTIPLANE_OVERLAY_STRETCH_QUALITY    StretchQuality;
#endif
} D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES;

#if (DXGKDDI_INTERFACE_VERSION >= DXGKDDI_INTERFACE_VERSION_WDDM_1_3)
typedef struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE
{
    D3DKMT_HANDLE                        hResource;
    LUID                                 CompSurfaceLuid;
    D3DDDI_VIDEO_PRESENT_SOURCE_ID       VidPnSourceId;
    D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES PlaneAttributes;
} D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE;

typedef struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO
{
    union
    {
        struct
        {
            UINT    FailingPlane        : 4;   // The 0 based index of the first plane that could not be supported
            UINT    TryAgain            : 1;   // The configuration is not supported due to a transition condition, which should shortly go away
            UINT    Reserved            : 27;
        };
        UINT    Value;
    };
} D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO;

typedef struct _D3DKMT_CHECKMULTIPLANEOVERLAYSUPPORT
{
    D3DKMT_HANDLE                                       hDevice;            // in : Indentifies the device
    UINT                                                PlaneCount;         // in : Number of resources to pin
    D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE*              pOverlayPlanes;     // in : Array of resource handles to pin
    BOOL                                                Supported;
    D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO ReturnInfo;
} D3DKMT_CHECKMULTIPLANEOVERLAYSUPPORT;
#endif

#if (DXGKDDI_INTERFACE_VERSION >= DXGKDDI_INTERFACE_VERSION_WDDM_2_0)
typedef struct _D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES2
{
    UINT                                         Flags;     // D3DKMT_MULTIPLANE_OVERLAY_FLAGS
    RECT                                         SrcRect;   // Specifies the source rectangle, of type RECT, relative to the source resource.
    RECT                                         DstRect;   // Specifies the destination rectangle, of type RECT, relative to the monitor resolution.
    RECT                                         ClipRect;  // Specifies any additional clipping, of type RECT, relative to the DstRect rectangle, 
                                                            // after the data has been stretched according to the values of SrcRect and DstRect.

                                                            // The driver and hardware can use the ClipRect member to apply a common stretch factor 
                                                            // as the clipping changes when an app occludes part of the DstRect destination rectangle.
    D3DDDI_ROTATION                              Rotation;  // Specifies the clockwise rotation of the overlay plane, given as a value from the D3DDDI_ROTATION enumeration.
    D3DKMT_MULTIPLANE_OVERLAY_BLEND              Blend;     // Specifies the blend mode that applies to this overlay plane and the plane beneath it, given as a value from the DXGK_MULTIPLANE_OVERLAY_BLEND enumeration.
    UINT                                         DirtyRectCount;
    RECT*                                        pDirtyRects;
    D3DKMT_MULTIPLANE_OVERLAY_VIDEO_FRAME_FORMAT VideoFrameFormat;  // DXGK_MULTIPLANE_OVERLAY_VIDEO_FRAME_FORMAT
    D3DDDI_COLOR_SPACE_TYPE                      ColorSpace;   
    D3DKMT_MULTIPLANE_OVERLAY_STEREO_FORMAT      StereoFormat;      // DXGK_MULTIPLANE_OVERLAY_STEREO_FORMAT
    BOOL                                         StereoLeftViewFrame0;  // Reserved for system use. Must always be FALSE.
    BOOL                                         StereoBaseViewFrame0;  // Reserved for system use. Must always be FALSE.
    DXGKMT_MULTIPLANE_OVERLAY_STEREO_FLIP_MODE   StereoFlipMode;        // DXGK_MULTIPLANE_OVERLAY_STEREO_FLIP_MODE
    DXGKMT_MULTIPLANE_OVERLAY_STRETCH_QUALITY    StretchQuality;        // DXGK_MULTIPLANE_OVERLAY_STRETCH_QUALITY
    UINT                                         Reserved1;            
} D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES2;

typedef struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE2
{
    UINT                                  LayerIndex;
    D3DKMT_HANDLE                         hResource;
    LUID                                  CompSurfaceLuid;
    D3DDDI_VIDEO_PRESENT_SOURCE_ID        VidPnSourceId;
    D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES2 PlaneAttributes;
} D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE2;

typedef struct _D3DKMT_CHECKMULTIPLANEOVERLAYSUPPORT2
{
    D3DKMT_HANDLE                                       hAdapter;           // in: adapter handle
    D3DKMT_HANDLE                                       hDevice;            // in : Indentifies the device
    UINT                                                PlaneCount;         // in : Number of resources to pin
    D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE2*             pOverlayPlanes;     // in : Array of resource handles to pin
    BOOL                                                Supported;
    D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO ReturnInfo;
} D3DKMT_CHECKMULTIPLANEOVERLAYSUPPORT2;

typedef struct _D3DKMT_MULTIPLANE_OVERLAY2
{
    UINT                                  LayerIndex;
    BOOL                                  Enabled;
    D3DKMT_HANDLE                         hAllocation;
    D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES2 PlaneAttributes;
} D3DKMT_MULTIPLANE_OVERLAY2;

typedef struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY2
{
    D3DKMT_HANDLE                   hAdapter;           // in: adapter handle
    union
    {
        D3DKMT_HANDLE               hDevice;            // in: D3D10 compatibility.
        D3DKMT_HANDLE               hContext;           // in: Indentifies the context
    };
    ULONG                           BroadcastContextCount;                          // in: Specifies the number of context
                                                                                    //     to broadcast this command buffer to.
    D3DKMT_HANDLE                   BroadcastContext[D3DDDI_MAX_BROADCAST_CONTEXT]; // in: Specifies the handle of the context to
                                                                                    //     broadcast to.

    D3DDDI_VIDEO_PRESENT_SOURCE_ID  VidPnSourceId;      // in: VidPn source ID if RestrictVidPnSource is flagged
    UINT                            PresentCount;       // in: present counter
    D3DDDI_FLIPINTERVAL_TYPE        FlipInterval;       // in: flip interval
    D3DKMT_PRESENTFLAGS             Flags;              // in:

    UINT                            PresentPlaneCount;
    D3DKMT_MULTIPLANE_OVERLAY2*     pPresentPlanes;
    UINT                            Duration;
} D3DKMT_PRESENT_MULTIPLANE_OVERLAY2;
#endif  // DXGKDDI_INTERFACE_VERSION >= DXGKDDI_INTERFACE_VERSION_WDDM2_0

#if (DXGKDDI_INTERFACE_VERSION >= DXGKDDI_INTERFACE_VERSION_WDDM2_1)
typedef struct _D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3
{
    UINT                                         Flags;     // D3DKMT_MULTIPLANE_OVERLAY_FLAGS
    RECT                                         SrcRect;   // Specifies the source rectangle, of type RECT, relative to the source resource.
    RECT                                         DstRect;   // Specifies the destination rectangle, of type RECT, relative to the monitor resolution.
    RECT                                         ClipRect;  // Specifies any additional clipping, of type RECT, relative to the DstRect rectangle, 
                                                            // after the data has been stretched according to the values of SrcRect and DstRect.

                                                            // The driver and hardware can use the ClipRect member to apply a common stretch factor 
                                                            // as the clipping changes when an app occludes part of the DstRect destination rectangle.
    D3DDDI_ROTATION                              Rotation;  // Specifies the clockwise rotation of the overlay plane, given as a value from the D3DDDI_ROTATION enumeration.
    D3DKMT_MULTIPLANE_OVERLAY_BLEND              Blend;     // Specifies the blend mode that applies to this overlay plane and the plane beneath it, given as a value from the DXGK_MULTIPLANE_OVERLAY_BLEND enumeration.
    UINT                                         DirtyRectCount;
    _Field_size_(DirtyRectCount) RECT*           pDirtyRects;
    D3DDDI_COLOR_SPACE_TYPE                      ColorSpace;   
    DXGKMT_MULTIPLANE_OVERLAY_STRETCH_QUALITY    StretchQuality;        // DXGK_MULTIPLANE_OVERLAY_STRETCH_QUALITY
} D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3;

typedef struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3
{
    UINT                                  LayerIndex;
    D3DKMT_HANDLE                         hResource;
    LUID                                  CompSurfaceLuid;
    D3DDDI_VIDEO_PRESENT_SOURCE_ID        VidPnSourceId;
    D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3* pPlaneAttributes;
} D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3;

typedef struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_FLAGS 
{
    union
    {
        struct
        {
            UINT VerticalFlip              : 1;   // 0x00000001
            UINT HorizontalFlip            : 1;   // 0x00000002
            UINT Reserved                  :30;   // 0xFFFFFFFC
        };
        UINT Value;
    };
} D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_FLAGS;

typedef struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION
{
    D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_FLAGS    Flags;   
    RECT                                                SrcRect;  
    RECT                                                DstRect;  
    D3DDDI_ROTATION                                     Rotation; 
} D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION;

typedef struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE
{
    D3DDDI_VIDEO_PRESENT_SOURCE_ID             VidPnSourceId;          
    D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION PostComposition;            
} D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE;

typedef struct _D3DKMT_CHECKMULTIPLANEOVERLAYSUPPORT3
{
    D3DKMT_HANDLE                                            hAdapter;           // in: adapter handle
    D3DKMT_HANDLE                                            hDevice;            // in : Indentifies the device
    UINT                                                     PlaneCount;         // in : Number of resources to pin
    _Field_size_(PlaneCount) 
    D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3**                 ppOverlayPlanes;    // in : Array of pointers to overlay planes
    UINT                                                     PostCompositionCount; // in : Number of resources to pin
    _Field_size_(PostCompositionCount) 
    D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE** ppPostComposition;    // in : Array of pointers to overlay planes
    BOOL                                                     Supported;
    D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO      ReturnInfo;
} D3DKMT_CHECKMULTIPLANEOVERLAYSUPPORT3;

typedef struct _D3DKMT_PLANE_SPECIFIC_INPUT_FLAGS 
{
    union
    {
        struct
        {
            UINT Enabled                   : 1;   // 0x00000001
            UINT Reserved                  :31;   // 0xFFFFFFFE
        };
        UINT Value;
    };
} D3DKMT_PLANE_SPECIFIC_INPUT_FLAGS;

typedef struct _D3DKMT_PLANE_SPECIFIC_OUTPUT_FLAGS 
{
    union
    {
        struct
        {
            UINT FlipConvertedToImmediate  : 1;   // 0x00000001
            UINT Reserved                  :31;   // 0xFFFFFFFE
        };
        UINT Value;
    };
} D3DKMT_PLANE_SPECIFIC_OUTPUT_FLAGS;

typedef struct _D3DKMT_MULTIPLANE_OVERLAY3
{
    UINT                                         LayerIndex;
    D3DKMT_PLANE_SPECIFIC_INPUT_FLAGS            InputFlags;
    D3DDDI_FLIPINTERVAL_TYPE                     FlipInterval;   
    UINT                                         MaxImmediateFlipLine;
    UINT                                         AllocationCount;
    _Field_size_(Allocation) 
    D3DKMT_HANDLE*                               pAllocationList;
    UINT                                         DriverPrivateDataSize;
    _Field_size_bytes_(DriverPrivateDataSize)
    VOID*                                        pDriverPrivateData;
    const D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3* pPlaneAttributes;
} D3DKMT_MULTIPLANE_OVERLAY3;

typedef struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY_FLAGS 
{
    union
    {
        struct
        {
            UINT FlipStereo                 : 1;    // 0x00000001 This is a flip from a stereo alloc. Used in addition to FlipImmediate or FlipOnNextVSync.
            UINT FlipStereoTemporaryMono    : 1;    // 0x00000002 This is a flip from a stereo alloc. The left image should used. Used in addition to FlipImmediate or FlipOnNextVSync.
            UINT FlipStereoPreferRight      : 1;    // 0x00000004 This is a flip from a stereo alloc. The right image should used when cloning to a mono monitor. Used in addition to FlipImmediate or FlipOnNextVSync.
            UINT FlipDoNotWait              : 1;    // 0x00000008
            UINT FlipDoNotFlip              : 1;    // 0x00000010
            UINT FlipRestart                : 1;    // 0x00000020
            UINT DurationValid              : 1;    // 0x00000040
            UINT HDRMetaDataValid           : 1;    // 0x00000080
            UINT Reserved                   :24;    // 0xFFFFFF00
        };
        UINT Value;
    };
} D3DKMT_PRESENT_MULTIPLANE_OVERLAY_FLAGS;

typedef struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY3
{
    D3DKMT_HANDLE                               hAdapter;           // in: adapter handle
    UINT                                        ContextCount;
    _Field_size_(ContextCount) 
    D3DKMT_HANDLE*                              pContextList;

    D3DDDI_VIDEO_PRESENT_SOURCE_ID              VidPnSourceId;      // in: VidPn source ID if RestrictVidPnSource is flagged
    UINT                                        PresentCount;       // in: present counter
    D3DKMT_PRESENT_MULTIPLANE_OVERLAY_FLAGS     Flags;              // in:

    UINT                                        PresentPlaneCount;
    _Field_size_(PresentPlaneCount) 
    D3DKMT_MULTIPLANE_OVERLAY3**                ppPresentPlanes;
    D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION* pPostComposition;
    UINT                                        Duration;
    D3DDDI_HDR_METADATA_TYPE                    HDRMetaDataType;
    UINT                                        HDRMetaDataSize;
    _Field_size_bytes_(HDRMetaDataSize)
    const VOID*                                 pHDRMetaData;
} D3DKMT_PRESENT_MULTIPLANE_OVERLAY3;
#endif  // DXGKDDI_INTERFACE_VERSION >= DXGKDDI_INTERFACE_VERSION_WDDM2_1

typedef struct D3DKMT_MULTIPLANE_OVERLAY
{
    UINT                                 LayerIndex;
    BOOL                                 Enabled;
    D3DKMT_HANDLE                        hAllocation;
    D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES PlaneAttributes;
} D3DKMT_MULTIPLANE_OVERLAY;

typedef struct D3DKMT_PRESENT_MULTIPLANE_OVERLAY
{
    union
    {
        D3DKMT_HANDLE               hDevice;            // in: D3D10 compatibility.
        D3DKMT_HANDLE               hContext;           // in: Indentifies the context
    };
    ULONG                           BroadcastContextCount;                          // in: Specifies the number of context
                                                                                    //     to broadcast this command buffer to.
    D3DKMT_HANDLE                   BroadcastContext[D3DDDI_MAX_BROADCAST_CONTEXT]; // in: Specifies the handle of the context to
                                                                                    //     broadcast to.

    D3DDDI_VIDEO_PRESENT_SOURCE_ID  VidPnSourceId;      // in: VidPn source ID if RestrictVidPnSource is flagged
    UINT                            PresentCount;       // in: present counter
    D3DDDI_FLIPINTERVAL_TYPE        FlipInterval;       // in: flip interval
    D3DKMT_PRESENTFLAGS             Flags;              // in:

    UINT                            PresentPlaneCount;
    D3DKMT_MULTIPLANE_OVERLAY*      pPresentPlanes;
    UINT                            Duration;
} D3DKMT_PRESENT_MULTIPLANE_OVERLAY;

typedef struct _D3DKMT_RENDERFLAGS
{
    UINT    ResizeCommandBuffer     :  1;  // 0x00000001
    UINT    ResizeAllocationList    :  1;  // 0x00000002
    UINT    ResizePatchLocationList :  1;  // 0x00000004
    UINT    NullRendering           :  1;  // 0x00000008
    UINT    PresentRedirected       :  1;  // 0x00000010
    UINT    RenderKm                :  1;  // 0x00000020    Cannot be used with DxgkRender
    UINT    RenderKmReadback        :  1;  // 0x00000040    Cannot be used with DxgkRender
    UINT    Reserved                : 25;  // 0xFFFFFF80
} D3DKMT_RENDERFLAGS;

#if (DXGKDDI_INTERFACE_VERSION >= DXGKDDI_INTERFACE_VERSION_WIN8)
typedef struct _D3DKMT_OUTPUTDUPLPRESENTFLAGS
{
    union
    {
        struct
        {
            UINT                ProtectedContentBlankedOut  :  1;
            UINT                RemoteSession               :  1;
            UINT                FullScreenPresent           :  1;
            UINT                PresentIndirect             :  1;
            UINT                Reserved                    : 28;
        };
        UINT    Value;
    };
}D3DKMT_OUTPUTDUPLPRESENTFLAGS;

typedef struct _D3DKMT_OUTPUTDUPLPRESENT
{
    D3DKMT_HANDLE                   hContext;           // in: Indentifies the context
    D3DKMT_HANDLE                   hSource;            // in: Source allocation to present from
    D3DDDI_VIDEO_PRESENT_SOURCE_ID  VidPnSourceId;
    ULONG                           BroadcastContextCount;                          // in: Specifies the number of context
    D3DKMT_HANDLE                   BroadcastContext[D3DDDI_MAX_BROADCAST_CONTEXT]; // in: Specifies the handle of the context to
    D3DKMT_PRESENT_RGNS             PresentRegions;     // in: Dirty and move regions
    D3DKMT_OUTPUTDUPLPRESENTFLAGS   Flags;
    D3DKMT_HANDLE                   hIndirectContext;
} D3DKMT_OUTPUTDUPLPRESENT;
#endif

typedef struct _D3DKMT_RENDER
{
    union
    {
        D3DKMT_HANDLE               hDevice;                    // in: D3D10 compatibility.
        D3DKMT_HANDLE               hContext;                   // in: Indentifies the context
    };
    UINT                            CommandOffset;              // in: offset in bytes from start
    UINT                            CommandLength;              // in: number of bytes
    UINT                            AllocationCount;            // in: Number of allocations in allocation list.
    UINT                            PatchLocationCount;         // in: Number of patch locations in patch allocation list.
    VOID*                           pNewCommandBuffer;          // out: Pointer to the next command buffer to use.
                                                                // in: When RenderKm flag is set, it points to a command buffer.
    UINT                            NewCommandBufferSize;       // in: Size requested for the next command buffer.
                                                                // out: Size of the next command buffer to use.
    D3DDDI_ALLOCATIONLIST*          pNewAllocationList;         // out: Pointer to the next allocation list to use.
                                                                // in: When RenderKm flag is set, it points to an allocation list.
    UINT                            NewAllocationListSize;      // in: Size requested for the next allocation list.
                                                                // out: Size of the new allocation list.
    D3DDDI_PATCHLOCATIONLIST*       pNewPatchLocationList;      // out: Pointer to the next patch location list.
    UINT                            NewPatchLocationListSize;   // in: Size requested for the next patch location list.
                                                                // out: Size of the new patch location list.
    D3DKMT_RENDERFLAGS              Flags;                      // in:
    ULONGLONG                       PresentHistoryToken;        // in: Present history token for redirected present calls
    ULONG                           BroadcastContextCount;                          // in: Specifies the number of context
                                                                                    //     to broadcast this command buffer to.
    D3DKMT_HANDLE                   BroadcastContext[D3DDDI_MAX_BROADCAST_CONTEXT]; // in: Specifies the handle of the context to
                                                                                    //     broadcast to.
    ULONG                           QueuedBufferCount;          // out: Number of DMA buffer queued to this context after this submission.
    D3DGPU_VIRTUAL_ADDRESS          NewCommandBuffer;           // out: GPU virtual address of next command buffer to use. _ADVSCH_
    VOID*                           pPrivateDriverData;         // in: pointer to private driver data. _ADVSCH_
    UINT                            PrivateDriverDataSize;      // in: size of private driver data. _ADVSCH_
} D3DKMT_RENDER;

typedef struct _D3DKMT_CREATEALLOCATIONFLAGS
{
    UINT    CreateResource              :  1;    // 0x00000001
    UINT    CreateShared                :  1;    // 0x00000002
    UINT    NonSecure                   :  1;    // 0x00000004
    UINT    CreateProtected             :  1;    // 0x00000008 Cannot be used when allocation is created from the user mode.
    UINT    RestrictSharedAccess        :  1;    // 0x00000010
    UINT    ExistingSysMem              :  1;    // 0x00000020 Cannot be used when allocation is created from the user mode.
#if (DXGKDDI_INTERFACE_VERSION >= DXGKDDI_INTERFACE_VERSION_WIN8)
    UINT    NtSecuritySharing           :  1;    // 0x00000040
    UINT    ReadOnly                    :  1;    // 0x00000080
    UINT    CreateWriteCombined         :  1;    // 0x00000100 Cannot be used when allocation is created from the user mode.
    UINT    CreateCached                :  1;    // 0x00000200 Cannot be used when allocation is created from the user mode.
    UINT    SwapChainBackBuffer         :  1;    // 0x00000400 Specifies whether an allocation corresponds to a swap chain back buffer.
#if (DXGKDDI_INTERFACE_VERSION >= DXGKDDI_INTERFACE_VERSION_WDDM1_3)
    UINT    CrossAdapter                :  1;    // 0x00000800
    UINT    OpenCrossAdapter            :  1;    // 0x00001000 Cannot be used when allocation is created from the user mode.
    UINT    PartialSharedCreation       :  1;    // 0x00002000 
    UINT    Zeroed                      :  1;    // 0x00004000  // in: specify request for zeroed pages, out: set when allocation fulfilled by zero pages
    UINT    Reserved                    : 17;    // 0xFFFF8000
#else
    UINT    Zeroed                      :  1;    // 0x00000800  // in: specify request for zeroed pages, out: set when allocation fulfilled by zero pages
    UINT    Reserved                    : 20;    // 0xFFFFF000
#endif // (DXGKDDI_INTERFACE_VERSION >= DXGKDDI_INTERFACE_VERSION_WDDM1_3)
#else
    UINT    Zeroed                      :  1;    // 0x00000040  // in: specify request for zeroed pages, out: set when allocation fulfilled by zero pages
    UINT    Reserved                    : 25;    // 0xFFFFFF80
#endif
} D3DKMT_CREATEALLOCATIONFLAGS;

typedef struct _D3DKMT_CREATEALLOCATION
{
                                            D3DKMT_HANDLE                   hDevice;
                                            D3DKMT_HANDLE                   hResource;      //in/out:valid only within device
                                            D3DKMT_HANDLE                   hGlobalShare;   //out:Shared handle if CreateShared and not NtSecuritySharing
    _Field_size_bytes_(PrivateRuntimeDataSize)  CONST VOID*                     pPrivateRuntimeData;
                                            UINT                            PrivateRuntimeDataSize;
    _Field_size_bytes_(PrivateDriverDataSize)   CONST VOID*                     pPrivateDriverData;
                                            UINT                            PrivateDriverDataSize;
                                            UINT                            NumAllocations;
   union {
       _Field_size_(NumAllocations)       D3DDDI_ALLOCATIONINFO*          pAllocationInfo;
#if ((DXGKDDI_INTERFACE_VERSION >= DXGKDDI_INTERFACE_VERSION_WIN7) || \
     (D3D_UMD_INTERFACE_VERSION >= D3D_UMD_INTERFACE_VERSION_WIN7))
       _Field_size_(NumAllocations)       D3DDDI_ALLOCATIONINFO2*         pAllocationInfo2; // _ADVSCH_
#endif
   };
                                            D3DKMT_CREATEALLOCATIONFLAGS    Flags;
                                            HANDLE                          hPrivateRuntimeResourceHandle; // opaque handle used for event tracing
} D3DKMT_CREATEALLOCATION;

typedef struct _D3DKMT_OPENRESOURCE
{
                                                        D3DKMT_HANDLE               hDevice;                            // in : Indentifies the device
                                                        D3DKMT_HANDLE               hGlobalShare;                       // in : Shared resource handle
                                                        UINT                        NumAllocations;                     // in : Number of allocations associated with the resource
   union {
    _Field_size_(NumAllocations)                      D3DDDI_OPENALLOCATIONINFO*  pOpenAllocationInfo;                // in : Array of open allocation structs
#if ((DXGKDDI_INTERFACE_VERSION >= DXGKDDI_INTERFACE_VERSION_WIN7) || \
     (D3D_UMD_INTERFACE_VERSION >= D3D_UMD_INTERFACE_VERSION_WIN7))
    _Field_size_(NumAllocations)                      D3DDDI_OPENALLOCATIONINFO2* pOpenAllocationInfo2;                // in : Array of open allocation structs // _ADVSCH_
#endif
   };
    _Field_size_bytes_(PrivateRuntimeDataSize)              VOID*                       pPrivateRuntimeData;                // in : Caller supplied buffer where the runtime private data associated with this resource will be copied
                                                        UINT                        PrivateRuntimeDataSize;             // in : Size in bytes of the pPrivateRuntimeData buffer
    _Field_size_bytes_(ResourcePrivateDriverDataSize)       VOID*                       pResourcePrivateDriverData;         // in : Caller supplied buffer where the driver private data associated with the resource will be copied
                                                        UINT                        ResourcePrivateDriverDataSize;      // in : Size in bytes of the pResourcePrivateDriverData buffer
    _Field_size_bytes_(TotalPrivateDriverDataBufferSize)    VOID*                       pTotalPrivateDriverDataBuffer;      // in : Caller supplied buffer where the Driver private data will be stored
                                                        UINT                        TotalPrivateDriverDataBufferSize;   // in/out : Size in bytes of pTotalPrivateDriverDataBuffer / Size in bytes of data written to pTotalPrivateDriverDataBuffer
                                                        D3DKMT_HANDLE               hResource;                          // out : Handle for this resource in this process
}D3DKMT_OPENRESOURCE;

#if (DXGKDDI_INTERFACE_VERSION >= DXGKDDI_INTERFACE_VERSION_WIN8)
typedef struct _D3DKMT_OPENRESOURCEFROMNTHANDLE
{
                                                        D3DKMT_HANDLE               hDevice;                            // in : Indentifies the device
                                                        HANDLE                      hNtHandle;                          // in : Process's NT handle
                                                        UINT                        NumAllocations;                     // in : Number of allocations associated with the resource
    _Field_size_(NumAllocations)                      D3DDDI_OPENALLOCATIONINFO2* pOpenAllocationInfo2;                // in : Array of open allocation structs // _ADVSCH_
                                                        UINT                        PrivateRuntimeDataSize;             // in : Size in bytes of the pPrivateRuntimeData buffer
    _Field_size_bytes_(PrivateRuntimeDataSize)              VOID*                       pPrivateRuntimeData;                // in : Caller supplied buffer where the runtime private data associated with this resource will be copied
                                                        UINT                        ResourcePrivateDriverDataSize;      // in : Size in bytes of the pResourcePrivateDriverData buffer
    _Field_size_bytes_(ResourcePrivateDriverDataSize)       VOID*                       pResourcePrivateDriverData;         // in : Caller supplied buffer where the driver private data associated with the resource will be copied
                                                        UINT                        TotalPrivateDriverDataBufferSize;   // in/out : Size in bytes of pTotalPrivateDriverDataBuffer / Size in bytes of data written to pTotalPrivateDriverDataBuffer
    _Field_size_bytes_(TotalPrivateDriverDataBufferSize)    VOID*                       pTotalPrivateDriverDataBuffer;      // in : Caller supplied buffer where the Driver private data will be stored
                                                        D3DKMT_HANDLE               hResource;                          // out : Handle for this resource in this process

                                                        D3DKMT_HANDLE               hKeyedMutex;                        // out: Handle to the keyed mutex in this process
    _In_reads_bytes_opt_(PrivateRuntimeDataSize)        VOID*                       pKeyedMutexPrivateRuntimeData;      // in:  Buffer containing initial private data.
                                                                                                                        //      If NULL then PrivateRuntimeDataSize must be 0.
                                                                                                                        //      It will only be copied if the keyed mutex does not already have private data.
                                                        UINT                        KeyedMutexPrivateRuntimeDataSize;   // in:  Size in bytes of pPrivateRuntimeData.
                                                        D3DKMT_HANDLE               hSyncObject;                        // out: Handle to sync object in this process.
} D3DKMT_OPENRESOURCEFROMNTHANDLE;

typedef struct _D3DKMT_OPENSYNCOBJECTFROMNTHANDLE
{
    HANDLE          hNtHandle;                          // in : NT handle for the sync object.
    D3DKMT_HANDLE   hSyncObject;                        // out: Handle to sync object in this process.
} D3DKMT_OPENSYNCOBJECTFROMNTHANDLE;

#if (DXGKDDI_INTERFACE_VERSION >= DXGKDDI_INTERFACE_VERSION_WDDM2_0)

typedef struct _D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2
{
    HANDLE                              hNtHandle;      // in : NT handle for the sync object.
    D3DKMT_HANDLE                       hDevice;        // in : Device handle to use this sync object on.
    D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS  Flags;          // in : specifies sync object behavior for this device.
    D3DKMT_HANDLE                       hSyncObject;    // out: Handle to sync object in this process.

    union
    {

        struct
        {
            VOID*                   FenceValueCPUVirtualAddress;            // out: Read-only mapping of the fence value for the CPU
            D3DGPU_VIRTUAL_ADDRESS  FenceValueGPUVirtualAddress;            // out: Read/write mapping of the fence value for the GPU
            UINT                    EngineAffinity;                         // in: Defines physical adapters where the GPU VA should be mapped
        } MonitoredFence;

        UINT64                      Reserved[8];
    };

} D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2;

typedef struct _D3DKMT_OPENSYNCOBJECTNTHANDLEFROMNAME
{
    DWORD              dwDesiredAccess;
    OBJECT_ATTRIBUTES* pObjAttrib;
    HANDLE             hNtHandle;
} D3DKMT_OPENSYNCOBJECTNTHANDLEFROMNAME;

#endif // DXGKDDI_INTERFACE_VERSION_WDDM2_0

typedef struct _D3DKMT_OPENNTHANDLEFROMNAME
{
    DWORD              dwDesiredAccess;
    OBJECT_ATTRIBUTES* pObjAttrib;
    HANDLE             hNtHandle;
} D3DKMT_OPENNTHANDLEFROMNAME;

#define SHARED_ALLOCATION_WRITE         0x1
#define SHARED_ALLOCATION_ALL_ACCESS    (STANDARD_RIGHTS_REQUIRED | SHARED_ALLOCATION_WRITE)

typedef struct _D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE
{
    D3DKMT_HANDLE   hDevice;                        // in : Indentifies the device
    HANDLE          hNtHandle;                      // in : Global resource handle to open
    VOID*           pPrivateRuntimeData;            // in : Ptr to buffer that will receive runtime private data for the resource
    UINT            PrivateRuntimeDataSize;         // in/out : Size in bytes of buffer passed in for runtime private data / If pPrivateRuntimeData was NULL then size in bytes of buffer required for the runtime private data otherwise size in bytes of runtime private data copied into the buffer
    UINT            TotalPrivateDriverDataSize;     // out : Size in bytes of buffer required to hold all the DriverPrivate data for all of the allocations associated withe the resource
    UINT            ResourcePrivateDriverDataSize;  // out : Size in bytes of the driver's resource private data
    UINT            NumAllocations;                 // out : Number of allocations associated with this resource
}D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE;

#endif

typedef struct _D3DKMT_QUERYRESOURCEINFO
{
    D3DKMT_HANDLE   hDevice;                        // in : Indentifies the device
    D3DKMT_HANDLE   hGlobalShare;                   // in : Global resource handle to open
    VOID*           pPrivateRuntimeData;            // in : Ptr to buffer that will receive runtime private data for the resource
    UINT            PrivateRuntimeDataSize;         // in/out : Size in bytes of buffer passed in for runtime private data / If pPrivateRuntimeData was NULL then size in bytes of buffer required for the runtime private data otherwise size in bytes of runtime private data copied into the buffer
    UINT            TotalPrivateDriverDataSize;     // out : Size in bytes of buffer required to hold all the DriverPrivate data for all of the allocations associated withe the resource
    UINT            ResourcePrivateDriverDataSize;  // out : Size in bytes of the driver's resource private data
    UINT            NumAllocations;                 // out : Number of allocations associated with this resource
}D3DKMT_QUERYRESOURCEINFO;

typedef struct _D3DKMT_DESTROYALLOCATION
{
    D3DKMT_HANDLE           hDevice;            // in: Indentifies the device
    D3DKMT_HANDLE           hResource;
    CONST D3DKMT_HANDLE*    phAllocationList;   // in: pointer to an array allocation handles to destroy
    UINT                    AllocationCount;    // in: Number of allocations in phAllocationList
} D3DKMT_DESTROYALLOCATION;

#if (DXGKDDI_INTERFACE_VERSION >= DXGKDDI_INTERFACE_VERSION_WDDM2_0)

typedef struct _D3DKMT_DESTROYALLOCATION2
{
    D3DKMT_HANDLE                       hDevice;            // in: Indentifies the device
    D3DKMT_HANDLE                       hResource;
    CONST D3DKMT_HANDLE*                phAllocationList;   // in: pointer to an array allocation handles to destroy
    UINT                                AllocationCount;    // in: Number of allocations in phAllocationList
    D3DDDICB_DESTROYALLOCATION2FLAGS    Flags;              // in: Bit field defined by D3DDDICB_DESTROYALLOCATION2FLAGS
} D3DKMT_DESTROYALLOCATION2;

#endif // DXGKDDI_INTERFACE_VERSION_WDDM2_0

typedef struct _D3DKMT_SETALLOCATIONPRIORITY
{
    D3DKMT_HANDLE           hDevice;            // in: Indentifies the device
    D3DKMT_HANDLE           hResource;          // in: Specify the resource to set priority to.
    CONST D3DKMT_HANDLE*    phAllocationList;   // in: pointer to an array allocation to set priority to.
    UINT                    AllocationCount;    // in: Number of allocations in phAllocationList
    CONST UINT*             pPriorities;        // in: New priority for each of the allocation in the array.
} D3DKMT_SETALLOCATIONPRIORITY;

typedef enum _D3DKMT_ALLOCATIONRESIDENCYSTATUS
{
    D3DKMT_ALLOCATIONRESIDENCYSTATUS_RESIDENTINGPUMEMORY=1,
    D3DKMT_ALLOCATIONRESIDENCYSTATUS_RESIDENTINSHAREDMEMORY=2,
    D3DKMT_ALLOCATIONRESIDENCYSTATUS_NOTRESIDENT=3,
} D3DKMT_ALLOCATIONRESIDENCYSTATUS;

typedef struct _D3DKMT_QUERYALLOCATIONRESIDENCY
{
    D3DKMT_HANDLE                       hDevice;            // in: Indentifies the device
    D3DKMT_HANDLE                       hResource;          // in: pointer to resource owning the list of allocation.
    CONST D3DKMT_HANDLE*                phAllocationList;   // in: pointer to an array allocation to get residency status.
    UINT                                AllocationCount;    // in: Number of allocations in phAllocationList
    D3DKMT_ALLOCATIONRESIDENCYSTATUS*   pResidencyStatus;   // out: Residency status of each allocation in the array.
} D3DKMT_QUERYALLOCATIONRESIDENCY;

typedef struct _D3DKMT_GETRUNTIMEDATA
{
    D3DKMT_HANDLE       hAdapter;
    D3DKMT_HANDLE       hGlobalShare;       // in: shared handle
    VOID*               pRuntimeData;       // out: in: for a version?
    UINT                RuntimeDataSize;    // in:
} D3DKMT_GETRUNTIMEDATA;

typedef enum _KMTUMDVERSION
{
    KMTUMDVERSION_DX9 = 0,
    KMTUMDVERSION_DX10,
    KMTUMDVERSION_DX11,
    KMTUMDVERSION_DX12,
} KMTUMDVERSION;

typedef struct _D3DKMT_UMDFILENAMEINFO
{
    KMTUMDVERSION       Version;                // In: UMD version
    WCHAR               UmdFileName[MAX_PATH];  // Out: UMD file name
} D3DKMT_UMDFILENAMEINFO;

typedef struct _D3DKMT_OPENGLINFO
{
    WCHAR               UmdOpenGlIcdFileName[MAX_PATH];
    ULONG               Version;
    ULONG               Flags;
} D3DKMT_OPENGLINFO;

typedef struct _D3DKMT_SEGMENTSIZEINFO
{
    ULONGLONG           DedicatedVideoMemorySize;
    ULONGLONG           DedicatedSystemMemorySize;
    ULONGLONG           SharedSystemMemorySize;
} D3DKMT_SEGMENTSIZEINFO;

typedef struct _D3DKMT_WORKINGSETFLAGS
{
    UINT    UseDefault   :  1;   // 0x00000001
    UINT    Reserved     : 31;   // 0xFFFFFFFE
} D3DKMT_WORKINGSETFLAGS;

typedef struct _D3DKMT_WORKINGSETINFO
{
    D3DKMT_WORKINGSETFLAGS Flags;
    ULONG MinimumWorkingSetPercentile;
    ULONG MaximumWorkingSetPercentile;
} D3DKMT_WORKINGSETINFO;

typedef struct _D3DKMT_FLIPINFOFLAGS
{
    UINT                FlipInterval :  1; // 0x00000001 // Set when kmd driver support FlipInterval natively
    UINT                Reserved     : 31; // 0xFFFFFFFE
} D3DKMT_FLIPINFOFLAGS;

typedef struct _D3DKMT_FLIPQUEUEINFO
{
    UINT                 MaxHardwareFlipQueueLength; // Max flip can be queued for hardware flip queue.
    UINT                 MaxSoftwareFlipQueueLength; // Max flip can be queued for software flip queue for non-legacy device.
    D3DKMT_FLIPINFOFLAGS FlipFlags;
} D3DKMT_FLIPQUEUEINFO;

typedef struct _D3DKMT_ADAPTERADDRESS
{
    UINT   BusNumber;              // Bus number on which the physical device is located.
    UINT   DeviceNumber;           // Index of the physical device on the bus.
    UINT   FunctionNumber;         // Function number of the adapter on the physical device.
} D3DKMT_ADAPTERADDRESS;

typedef struct _D3DKMT_ADAPTERREGISTRYINFO
{
    WCHAR   AdapterString[MAX_PATH];
    WCHAR   BiosString[MAX_PATH];
    WCHAR   DacType[MAX_PATH];
    WCHAR   ChipType[MAX_PATH];
} D3DKMT_ADAPTERREGISTRYINFO;

typedef struct _D3DKMT_CURRENTDISPLAYMODE
{
    D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId;
    D3DKMT_DISPLAYMODE DisplayMode;
} D3DKMT_CURRENTDISPLAYMODE;

typedef struct _D3DKMT_VIRTUALADDRESSFLAGS // _ADVSCH_
{
    UINT   VirtualAddressSupported :  1;
    UINT   Reserved                : 31;
} D3DKMT_VIRTUALADDRESSFLAGS;

typedef struct _D3DKMT_VIRTUALADDRESSINFO // _ADVSCH_
{
    D3DKMT_VIRTUALADDRESSFLAGS VirtualAddressFlags;
} D3DKMT_VIRTUALADDRESSINFO;

typedef enum _QAI_DRIVERVERSION
{
    KMT_DRIVERVERSION_WDDM_1_0               = 1000,
    KMT_DRIVERVERSION_WDDM_1_1_PRERELEASE    = 1102,
    KMT_DRIVERVERSION_WDDM_1_1               = 1105,
#if (DXGKDDI_INTERFACE_VERSION >= DXGKDDI_INTERFACE_VERSION_WIN8)
    KMT_DRIVERVERSION_WDDM_1_2               = 1200,
#endif
#if (DXGKDDI_INTERFACE_VERSION >= DXGKDDI_INTERFACE_VERSION_WDDM1_3)
    KMT_DRIVERVERSION_WDDM_1_3               = 1300,
#endif // DXGKDDI_INTERFACE_VERSION_WDDM1_3
#if (DXGKDDI_INTERFACE_VERSION >= DXGKDDI_INTERFACE_VERSION_WDDM2_0)
    KMT_DRIVERVERSION_WDDM_2_0               = 2000,
#endif // DXGKDDI_INTERFACE_VERSION_WDDM2_0
#if (DXGKDDI_INTERFACE_VERSION >= DXGKDDI_INTERFACE_VERSION_WDDM2_1)
    KMT_DRIVERVERSION_WDDM_2_1               = 2100,
#endif // DXGKDDI_INTERFACE_VERSION_WDDM2_1
} D3DKMT_DRIVERVERSION;

#if (DXGKDDI_INTERFACE_VERSION >= DXGKDDI_INTERFACE_VERSION_WIN8)
typedef struct _D3DKMT_ADAPTERTYPE
{
    union
    {
        struct
        {
            UINT   RenderSupported       :  1;
            UINT   DisplaySupported      :  1;
            UINT   SoftwareDevice        :  1;
            UINT   PostDevice            :  1;
#if (DXGKDDI_INTERFACE_VERSION >= DXGKDDI_INTERFACE_VERSION_WDDM1_3)
            UINT   HybridDiscrete        :  1;
            UINT   HybridIntegrated      :  1;
            UINT   IndirectDisplayDevice :  1;
            UINT   Reserved              : 25;
#else
            UINT   Reserved              : 28;
#endif // (DXGKDDI_INTERFACE_VERSION >= DXGKDDI_INTERFACE_VERSION_WDDM1_3)
        };
        UINT Value;
    };
} D3DKMT_ADAPTERTYPE;

typedef struct _D3DKMT_OUTPUTDUPLCONTEXTSCOUNT
{
    D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId;
    UINT OutputDuplicationCount;
} D3DKMT_OUTPUTDUPLCONTEXTSCOUNT;

typedef struct _D3DKMT_UMD_DRIVER_VERSION
{
    LARGE_INTEGER DriverVersion;
} D3DKMT_UMD_DRIVER_VERSION;

typedef struct _D3DKMT_DIRECTFLIP_SUPPORT
{
    BOOL Supported;
} D3DKMT_DIRECTFLIP_SUPPORT;

typedef struct _D3DKMT_MULTIPLANEOVERLAY_SUPPORT
{
    BOOL Supported;
} D3DKMT_MULTIPLANEOVERLAY_SUPPORT;
#endif

#if (DXGKDDI_INTERFACE_VERSION >= DXGKDDI_INTERFACE_VERSION_WDDM1_3_PATH_INDEPENDENT_ROTATION)
typedef struct _D3DKMT_MULTIPLANEOVERLAY_HUD_SUPPORT
{
    UINT VidPnSourceId; // Not yet used.
    BOOL Update;
    BOOL KernelSupported;
    BOOL HudSupported;
} D3DKMT_MULTIPLANEOVERLAY_HUD_SUPPORT;
#endif // DXGKDDI_INTERFACE_VERSION_WDDM1_3_PATH_INDEPENDENT_ROTATION

#if (DXGKDDI_INTERFACE_VERSION >= DXGKDDI_INTERFACE_VERSION_WDDM1_3)

typedef struct _D3DKMT_DLIST_DRIVER_NAME
{
    WCHAR DListFileName[MAX_PATH];  // Out: DList driver file name
} D3DKMT_DLIST_DRIVER_NAME;

typedef struct _D3DKMT_CPDRIVERNAME
{
    WCHAR  ContentProtectionFileName[MAX_PATH];
} D3DKMT_CPDRIVERNAME;

typedef struct _D3DKMT_MIRACASTCOMPANIONDRIVERNAME
{
    WCHAR  MiracastCompanionDriverName[MAX_PATH];
} D3DKMT_MIRACASTCOMPANIONDRIVERNAME;

#endif // DXGKDDI_INTERFACE_VERSION_WDDM1_3

#if (DXGKDDI_INTERFACE_VERSION >= DXGKDDI_INTERFACE_VERSION_WDDM2_0)

typedef struct _D3DKMT_XBOX
{
    BOOL IsXBOX;
} D3DKMT_XBOX;

typedef struct _D3DKMT_INDEPENDENTFLIP_SUPPORT
{
    BOOL Supported;
} D3DKMT_INDEPENDENTFLIP_SUPPORT;

typedef struct _D3DKMT_MULTIPLANEOVERLAY_DECODE_SUPPORT
{
    BOOL Supported;
} D3DKMT_MULTIPLANEOVERLAY_DECODE_SUPPORT;

typedef struct _D3DKMT_ISBADDRIVERFORHWPROTECTIONDISABLED
{
    BOOL Disabled;
} D3DKMT_ISBADDRIVERFORHWPROTECTIONDISABLED;

typedef struct _D3DKMT_MULTIPLANEOVERLAY_SECONDARY_SUPPORT
{
    BOOL Supported;
} D3DKMT_MULTIPLANEOVERLAY_SECONDARY_SUPPORT;

typedef struct _D3DKMT_INDEPENDENTFLIP_SECONDARY_SUPPORT
{
    BOOL Supported;
} D3DKMT_INDEPENDENTFLIP_SECONDARY_SUPPORT;

typedef struct _D3DKMT_PANELFITTER_SUPPORT
{
    BOOL Supported;
} D3DKMT_PANELFITTER_SUPPORT;

typedef struct _D3DKMT_PHYSICAL_ADAPTER_COUNT
{
    UINT Count;
} D3DKMT_PHYSICAL_ADAPTER_COUNT;

typedef struct _D3DKMT_DEVICE_IDS
{
    UINT VendorID;
    UINT DeviceID;
    UINT SubVendorID;
    UINT SubSystemID;
    UINT RevisionID;
    UINT BusType;
} D3DKMT_DEVICE_IDS;

typedef struct _D3DKMT_QUERY_DEVICE_IDS
{
    UINT              PhysicalAdapterIndex; // in:
    D3DKMT_DEVICE_IDS DeviceIds;            // out:
} D3DKMT_QUERY_DEVICE_IDS;

typedef enum _D3DKMT_MIRACAST_DRIVER_TYPE
{
    D3DKMT_MIRACAST_DRIVER_NOT_SUPPORTED = 0,
    D3DKMT_MIRACAST_DRIVER_IHV = 1,
    D3DKMT_MIRACAST_DRIVER_MS = 2,
} D3DKMT_MIRACAST_DRIVER_TYPE;

typedef struct _D3DKMT_QUERY_MIRACAST_DRIVER_TYPE
{
    D3DKMT_MIRACAST_DRIVER_TYPE MiracastDriverType;
} D3DKMT_QUERY_MIRACAST_DRIVER_TYPE;

typedef struct _D3DKMT_GPUMMU_CAPS
{
    union
    {
        struct
        {	
            UINT ReadOnlyMemorySupported                : 1;
            UINT NoExecuteMemorySupported               : 1; 
            UINT CacheCoherentMemorySupported           : 1;
            UINT Reserved                               : 29;
        };
        UINT        Value;
    } Flags;
    UINT                        VirtualAddressBitCount;
} D3DKMT_GPUMMU_CAPS;

typedef struct _D3DKMT_QUERY_GPUMMU_CAPS
{
    UINT PhysicalAdapterIndex; // in:
    D3DKMT_GPUMMU_CAPS Caps;   // out:
} D3DKMT_QUERY_GPUMMU_CAPS;

#endif // DXGKDDI_INTERFACE_VERSION_WDDM2_0

typedef enum _KMTQUERYADAPTERINFOTYPE
{
     KMTQAITYPE_UMDRIVERPRIVATE         =  0,
     KMTQAITYPE_UMDRIVERNAME            =  1,
     KMTQAITYPE_UMOPENGLINFO            =  2,
     KMTQAITYPE_GETSEGMENTSIZE          =  3,
     KMTQAITYPE_ADAPTERGUID             =  4,
     KMTQAITYPE_FLIPQUEUEINFO           =  5,
     KMTQAITYPE_ADAPTERADDRESS          =  6,
     KMTQAITYPE_SETWORKINGSETINFO       =  7,
     KMTQAITYPE_ADAPTERREGISTRYINFO     =  8,
     KMTQAITYPE_CURRENTDISPLAYMODE      =  9,
     KMTQAITYPE_MODELIST                = 10,
     KMTQAITYPE_CHECKDRIVERUPDATESTATUS = 11,
     KMTQAITYPE_VIRTUALADDRESSINFO      = 12, // _ADVSCH_
     KMTQAITYPE_DRIVERVERSION           = 13,
#if (DXGKDDI_INTERFACE_VERSION >= DXGKDDI_INTERFACE_VERSION_WIN8)
     KMTQAITYPE_ADAPTERTYPE             = 15,
     KMTQAITYPE_OUTPUTDUPLCONTEXTSCOUNT = 16,
     KMTQAITYPE_WDDM_1_2_CAPS           = 17,
     KMTQAITYPE_UMD_DRIVER_VERSION      = 18,
     KMTQAITYPE_DIRECTFLIP_SUPPORT      = 19,
#endif
#if (DXGKDDI_INTERFACE_VERSION >= DXGKDDI_INTERFACE_VERSION_WDDM1_3)
     KMTQAITYPE_MULTIPLANEOVERLAY_SUPPORT = 20,
     KMTQAITYPE_DLIST_DRIVER_NAME       = 21,
     KMTQAITYPE_WDDM_1_3_CAPS           = 22,
#endif // DXGKDDI_INTERFACE_VERSION_WDDM1_3
#if (DXGKDDI_INTERFACE_VERSION >= DXGKDDI_INTERFACE_VERSION_WDDM1_3_PATH_INDEPENDENT_ROTATION)
     KMTQAITYPE_MULTIPLANEOVERLAY_HUD_SUPPORT = 23,
#endif // DXGKDDI_INTERFACE_VERSION_WDDM1_3_PATH_INDEPENDENT_ROTATION
#if (DXGKDDI_INTERFACE_VERSION >= DXGKDDI_INTERFACE_VERSION_WDDM2_0)
     KMTQAITYPE_WDDM_2_0_CAPS           = 24,
     KMTQAITYPE_NODEMETADATA            = 25,
     KMTQAITYPE_CPDRIVERNAME            = 26,
     KMTQAITYPE_XBOX                    = 27,
     KMTQAITYPE_INDEPENDENTFLIP_SUPPORT = 28,
     KMTQAITYPE_MIRACASTCOMPANIONDRIVERNAME = 29,
     KMTQAITYPE_PHYSICALADAPTERCOUNT    = 30,
     KMTQAITYPE_PHYSICALADAPTERDEVICEIDS = 31,
     KMTQAITYPE_DRIVERCAPS_EXT          = 32,
     KMTQAITYPE_QUERY_MIRACAST_DRIVER_TYPE = 33,
     KMTQAITYPE_QUERY_GPUMMU_CAPS       = 34,
     KMTQAITYPE_QUERY_MULTIPLANEOVERLAY_DECODE_SUPPORT = 35,
     KMTQAITYPE_QUERY_HW_PROTECTION_TEARDOWN_COUNT = 36,
     KMTQAITYPE_QUERY_ISBADDRIVERFORHWPROTECTIONDISABLED = 37,
     KMTQAITYPE_MULTIPLANEOVERLAY_SECONDARY_SUPPORT = 38,
     KMTQAITYPE_INDEPENDENTFLIP_SECONDARY_SUPPORT = 39,
#endif // DXGKDDI_INTERFACE_VERSION_WDDM2_0
#if (DXGKDDI_INTERFACE_VERSION >= DXGKDDI_INTERFACE_VERSION_WDDM2_1)
     KMTQAITYPE_PANELFITTER_SUPPORT     = 40,
#endif // DXGKDDI_INTERFACE_VERSION_WDDM2_1
} KMTQUERYADAPTERINFOTYPE;

typedef struct _D3DKMT_QUERYADAPTERINFO
{
    D3DKMT_HANDLE           hAdapter;
    KMTQUERYADAPTERINFOTYPE Type;
    VOID*                   pPrivateDriverData;
    UINT                    PrivateDriverDataSize;
} D3DKMT_QUERYADAPTERINFO;

typedef struct _D3DKMT_OPENADAPTERFROMHDC
{
    HDC                             hDc;            // in:  DC that maps to a single display
    D3DKMT_HANDLE                   hAdapter;       // out: adapter handle
    LUID                            AdapterLuid;    // out: adapter LUID
    D3DDDI_VIDEO_PRESENT_SOURCE_ID  VidPnSourceId;  // out: VidPN source ID for that particular display
} D3DKMT_OPENADAPTERFROMHDC;

typedef struct _D3DKMT_OPENADAPTERFROMGDIDISPLAYNAME
{
    WCHAR                           DeviceName[32]; // in:  Name of GDI device from which to open an adapter instance
    D3DKMT_HANDLE                   hAdapter;       // out: adapter handle
    LUID                            AdapterLuid;    // out: adapter LUID
    D3DDDI_VIDEO_PRESENT_SOURCE_ID  VidPnSourceId;  // out: VidPN source ID for that particular display
} D3DKMT_OPENADAPTERFROMGDIDISPLAYNAME;

typedef struct _D3DKMT_OPENADAPTERFROMDEVICENAME
{
    PCWSTR                          pDeviceName;    // in:  NULL terminated string containing the device name to open
    D3DKMT_HANDLE                   hAdapter;       // out: adapter handle
    LUID                            AdapterLuid;    // out: adapter LUID
} D3DKMT_OPENADAPTERFROMDEVICENAME;

#if (DXGKDDI_INTERFACE_VERSION >= DXGKDDI_INTERFACE_VERSION_WIN8)

#define MAX_ENUM_ADAPTERS   16

typedef struct _D3DKMT_ADAPTERINFO
{
    D3DKMT_HANDLE       hAdapter;
    LUID                AdapterLuid;
    ULONG               NumOfSources;
    BOOL                bPresentMoveRegionsPreferred;
} D3DKMT_ADAPTERINFO;

typedef struct _D3DKMT_ENUMADAPTERS
{
    _In_range_(0, MAX_ENUM_ADAPTERS) ULONG  NumAdapters;
    D3DKMT_ADAPTERINFO                      Adapters[MAX_ENUM_ADAPTERS];
} D3DKMT_ENUMADAPTERS;

typedef struct _D3DKMT_ENUMADAPTERS2
{
    ULONG                 NumAdapters;           // in/out: On input, the count of the pAdapters array buffer.  On output, the number of adapters enumerated.
    D3DKMT_ADAPTERINFO*   pAdapters;             // out: Array of enumerated adapters containing NumAdapters elements
} D3DKMT_ENUMADAPTERS2;

typedef struct _D3DKMT_OPENADAPTERFROMLUID
{
    LUID            AdapterLuid;
    D3DKMT_HANDLE   hAdapter;
} D3DKMT_OPENADAPTERFROMLUID;

typedef struct _D3DKMT_QUERYREMOTEVIDPNSOURCEFROMGDIDISPLAYNAME
{
    WCHAR                           DeviceName[32]; // in:  Name of GDI device from which to open an adapter instance
    D3DDDI_VIDEO_PRESENT_SOURCE_ID  VidPnSourceId;  // out: VidPN source ID for that particular display
} D3DKMT_QUERYREMOTEVIDPNSOURCEFROMGDIDISPLAYNAME;
#endif

typedef struct _D3DKMT_CLOSEADAPTER
{
    D3DKMT_HANDLE   hAdapter;   // in: adapter handle
} D3DKMT_CLOSEADAPTER;

typedef struct _D3DKMT_GETSHAREDPRIMARYHANDLE
{
    D3DKMT_HANDLE                   hAdapter;       // in: adapter handle
    D3DDDI_VIDEO_PRESENT_SOURCE_ID  VidPnSourceId;  // in: adapter's VidPN source ID
    D3DKMT_HANDLE                   hSharedPrimary; // out: global shared primary handle (if one exists currently)
} D3DKMT_GETSHAREDPRIMARYHANDLE;

typedef struct _D3DKMT_SHAREDPRIMARYLOCKNOTIFICATION
{
    LUID                            AdapterLuid;
    D3DDDI_VIDEO_PRESENT_SOURCE_ID  VidPnSourceId;
    RECTL                           LockRect;               // in: If zero rect then we are locking the whole primary else the lock sub-rect
} D3DKMT_SHAREDPRIMARYLOCKNOTIFICATION;

typedef struct _D3DKMT_SHAREDPRIMARYUNLOCKNOTIFICATION
{
    LUID                            AdapterLuid;
    D3DDDI_VIDEO_PRESENT_SOURCE_ID  VidPnSourceId;
} D3DKMT_SHAREDPRIMARYUNLOCKNOTIFICATION;

#if (DXGKDDI_INTERFACE_VERSION >= DXGKDDI_INTERFACE_VERSION_WIN8)
typedef struct _D3DKMT_PINDIRECTFLIPRESOURCES
{
     D3DKMT_HANDLE               hDevice;                           // in : Indentifies the device
     UINT                        ResourceCount;                     // in : Number of resources to pin
    _Field_size_(ResourceCount)  D3DKMT_HANDLE*  pResourceList;     // in : Array of resource handles to pin
} D3DKMT_PINDIRECTFLIPRESOURCES;

typedef struct _D3DKMT_UNPINDIRECTFLIPRESOURCES
{
     D3DKMT_HANDLE               hDevice;                           // in : Indentifies the device
     UINT                        ResourceCount;                     // in : Number of resources to unpin
    _Field_size_(ResourceCount)  D3DKMT_HANDLE*  pResourceList;     // in : Array of resource handles to unpin
} D3DKMT_UNPINDIRECTFLIPRESOURCES;
#endif

typedef enum _D3DKMT_ESCAPETYPE
{
    D3DKMT_ESCAPE_DRIVERPRIVATE                 =  0,
    D3DKMT_ESCAPE_VIDMM                         =  1,
    D3DKMT_ESCAPE_TDRDBGCTRL                    =  2,
    D3DKMT_ESCAPE_VIDSCH                        =  3,
    D3DKMT_ESCAPE_DEVICE                        =  4,
    D3DKMT_ESCAPE_DMM                           =  5,
    D3DKMT_ESCAPE_DEBUG_SNAPSHOT                =  6,
    D3DKMT_ESCAPE_SETDRIVERUPDATESTATUS         =  7,
    D3DKMT_ESCAPE_DRT_TEST                      =  8,
#if (DXGKDDI_INTERFACE_VERSION >= DXGKDDI_INTERFACE_VERSION_WIN8)
    D3DKMT_ESCAPE_DIAGNOSTICS                   =  9,
    D3DKMT_ESCAPE_OUTPUTDUPL_SNAPSHOT           = 10,
    D3DKMT_ESCAPE_OUTPUTDUPL_DIAGNOSTICS        = 11,
    D3DKMT_ESCAPE_BDD_PNP                       = 12,
    D3DKMT_ESCAPE_BDD_FALLBACK                  = 13,
    D3DKMT_ESCAPE_ACTIVATE_SPECIFIC_DIAG        = 14,
    D3DKMT_ESCAPE_MODES_PRUNED_OUT              = 15,
    D3DKMT_ESCAPE_WHQL_INFO                     = 16,
    D3DKMT_ESCAPE_BRIGHTNESS                    = 17,
    D3DKMT_ESCAPE_EDID_CACHE                    = 18,
    D3DKMT_ESCAPE_GENERIC_ADAPTER_DIAG_INFO     = 19,
#if (DXGKDDI_INTERFACE_VERSION >= DXGKDDI_INTERFACE_VERSION_WDDM1_3)
    D3DKMT_ESCAPE_MIRACAST_DISPLAY_REQUEST      = 20,
    D3DKMT_ESCAPE_HISTORY_BUFFER_STATUS         = 21,
    // unused (22 can be reused for future needs as it was never exposed for external purposes)
    D3DKMT_ESCAPE_MIRACAST_ADAPTER_DIAG_INFO    = 23,
#if (DXGKDDI_INTERFACE_VERSION >= DXGKDDI_INTERFACE_VERSION_WDDM2_0)
    D3DKMT_ESCAPE_FORCE_BDDFALLBACK_HEADLESS    = 24,
    D3DKMT_ESCAPE_REQUEST_MACHINE_CRASH         = 25,
    D3DKMT_ESCAPE_HMD_GET_EDID_BASE_BLOCK       = 26,
    D3DKMT_ESCAPE_SOFTGPU_ENABLE_DISABLE_HMD    = 27,
    D3DKMT_ESCAPE_PROCESS_VERIFIER_OPTION       = 28,
    D3DKMT_ESCAPE_ADAPTER_VERIFIER_OPTION       = 29,
#if (DXGKDDI_INTERFACE_VERSION >= DXGKDDI_INTERFACE_VERSION_WDDM2_1)
    D3DKMT_ESCAPE_IDD_REQUEST                   = 30,
    D3DKMT_ESCAPE_DOD_SET_DIRTYRECT_MODE        = 31,
    D3DKMT_ESCAPE_LOG_CODEPOINT_PACKET          = 32,
#endif // DXGKDDI_INTERFACE_VERSION_WDDM2_1
#endif // DXGKDDI_INTERFACE_VERSION_WDDM2_0
#endif // DXGKDDI_INTERFACE_VERSION_WDDM1_3

    D3DKMT_ESCAPE_WIN32K_START                  = 1024,
    D3DKMT_ESCAPE_WIN32K_HIP_DEVICE_INFO        = 1024,
    D3DKMT_ESCAPE_WIN32K_QUERY_CD_ROTATION_BLOCK = 1025,
#if (DXGKDDI_INTERFACE_VERSION >= DXGKDDI_INTERFACE_VERSION_WDDM1_3)
    D3DKMT_ESCAPE_WIN32K_DPI_INFO               = 1026, // Use hContext for the desired hdev
    D3DKMT_ESCAPE_WIN32K_PRESENTER_VIEW_INFO    = 1027,
    D3DKMT_ESCAPE_WIN32K_SYSTEM_DPI             = 1028,
#if (DXGKDDI_INTERFACE_VERSION >= DXGKDDI_INTERFACE_VERSION_WDDM2_0)
    D3DKMT_ESCAPE_WIN32K_BDD_FALLBACK           = 1029,
    D3DKMT_ESCAPE_WIN32K_DDA_TEST_CTL           = 1030,
    D3DKMT_ESCAPE_WIN32K_USER_DETECTED_BLACK_SCREEN = 1031,
    D3DKMT_ESCAPE_WIN32K_HMD_ENUM               = 1032,
    D3DKMT_ESCAPE_WIN32K_HMD_CONTROL            = 1033,
    D3DKMT_ESCAPE_WIN32K_LPMDISPLAY_CONTROL     = 1034,
#endif // DXGKDDI_INTERFACE_VERSION_WDDM2_0
#endif // DXGKDDI_INTERFACE_VERSION_WDDM1_3
#endif // DXGKDDI_INTERFACE_VERSION_WIN8
} D3DKMT_ESCAPETYPE;

typedef struct _D3DKMT_DOD_SET_DIRTYRECT_MODE
{
    BOOL bForceFullScreenDirty;      // in: indicates if this adapter should always give full screen dirty for every Dod present
}D3DKMT_DOD_SET_DIRTYRECT_MODE;

typedef enum _D3DKMT_TDRDBGCTRLTYPE
{
    D3DKMT_TDRDBGCTRLTYPE_FORCETDR          = 0, //Simulate a TDR
    D3DKMT_TDRDBGCTRLTYPE_DISABLEBREAK      = 1, //Disable DebugBreak on timeout
    D3DKMT_TDRDBGCTRLTYPE_ENABLEBREAK       = 2, //Enable DebugBreak on timeout
    D3DKMT_TDRDBGCTRLTYPE_UNCONDITIONAL     = 3, //Disables all safety conditions (e.g. check for consecutive recoveries)
    D3DKMT_TDRDBGCTRLTYPE_VSYNCTDR          = 4, //Simulate a Vsync TDR
    D3DKMT_TDRDBGCTRLTYPE_GPUTDR            = 5, //Simulate a GPU TDR
#if (DXGKDDI_INTERFACE_VERSION >= DXGKDDI_INTERFACE_VERSION_WIN8)
    D3DKMT_TDRDBGCTRLTYPE_FORCEDODTDR       = 6, //Simulate a Display Only Present TDR
    D3DKMT_TDRDBGCTRLTYPE_FORCEDODVSYNCTDR  = 7, //Simulate a Display Only Vsync TDR
    D3DKMT_TDRDBGCTRLTYPE_ENGINETDR         = 8, //Simulate an engine TDR
#endif
} D3DKMT_TDRDBGCTRLTYPE;

typedef enum _D3DKMT_VIDMMESCAPETYPE
{
    D3DKMT_VIDMMESCAPETYPE_SETFAULT                     = 0,
    D3DKMT_VIDMMESCAPETYPE_RUN_COHERENCY_TEST           = 1,
    D3DKMT_VIDMMESCAPETYPE_RUN_UNMAP_TO_DUMMY_PAGE_TEST = 2,
    D3DKMT_VIDMMESCAPETYPE_APERTURE_CORRUPTION_CHECK    = 3,
    D3DKMT_VIDMMESCAPETYPE_SUSPEND_CPU_ACCESS_TEST      = 4,
    D3DKMT_VIDMMESCAPETYPE_EVICT                        = 5,
    D3DKMT_VIDMMESCAPETYPE_EVICT_BY_NT_HANDLE           = 6,
    D3DKMT_VIDMMESCAPETYPE_GET_VAD_INFO                 = 7,
    D3DKMT_VIDMMESCAPETYPE_SET_BUDGET                   = 8,
    D3DKMT_VIDMMESCAPETYPE_SUSPEND_PROCESS              = 9,
    D3DKMT_VIDMMESCAPETYPE_RESUME_PROCESS               = 10,
    D3DKMT_VIDMMESCAPETYPE_GET_BUDGET                   = 11,
    D3DKMT_VIDMMESCAPETYPE_SET_TRIM_INTERVALS           = 12,
    D3DKMT_VIDMMESCAPETYPE_EVICT_BY_CRITERIA            = 13,
    D3DKMT_VIDMMESCAPETYPE_WAKE                         = 14,
    D3DKMT_VIDMMESCAPETYPE_DEFRAG                       = 15,
} D3DKMT_VIDMMESCAPETYPE;

typedef enum _D3DKMT_VIDSCHESCAPETYPE
{
    D3DKMT_VIDSCHESCAPETYPE_PREEMPTIONCONTROL   = 0, //Enable/Disable preemption
    D3DKMT_VIDSCHESCAPETYPE_SUSPENDSCHEDULER    = 1, //Suspend/Resume scheduler (obsolate)
    D3DKMT_VIDSCHESCAPETYPE_TDRCONTROL          = 2, //Tdr control
    D3DKMT_VIDSCHESCAPETYPE_SUSPENDRESUME       = 3, //Suspend/Resume scheduler
#if (DXGKDDI_INTERFACE_VERSION >= DXGKDDI_INTERFACE_VERSION_WIN8)
    D3DKMT_VIDSCHESCAPETYPE_ENABLECONTEXTDELAY  = 4, //Enable/Disable context delay
#endif
    D3DKMT_VIDSCHESCAPETYPE_CONFIGURE_TDR_LIMIT = 5, // Configure TdrLimitCount and TdrLimitTime
    D3DKMT_VIDSCHESCAPETYPE_VGPU_RESET          = 6, // Trigger VGPU reset 
} D3DKMT_VIDSCHESCAPETYPE;

typedef enum _D3DKMT_DMMESCAPETYPE
{
    D3DKMT_DMMESCAPETYPE_UNINITIALIZED                       =  0,
    D3DKMT_DMMESCAPETYPE_GET_SUMMARY_INFO                    =  1,
    D3DKMT_DMMESCAPETYPE_GET_VIDEO_PRESENT_SOURCES_INFO      =  2,
    D3DKMT_DMMESCAPETYPE_GET_VIDEO_PRESENT_TARGETS_INFO      =  3,
    D3DKMT_DMMESCAPETYPE_GET_ACTIVEVIDPN_INFO                =  4,
    D3DKMT_DMMESCAPETYPE_GET_MONITORS_INFO                   =  5,
    D3DKMT_DMMESCAPETYPE_RECENTLY_COMMITTED_VIDPNS_INFO      =  6,
    D3DKMT_DMMESCAPETYPE_RECENT_MODECHANGE_REQUESTS_INFO     =  7,
    D3DKMT_DMMESCAPETYPE_RECENTLY_RECOMMENDED_VIDPNS_INFO    =  8,
    D3DKMT_DMMESCAPETYPE_RECENT_MONITOR_PRESENCE_EVENTS_INFO =  9,
    D3DKMT_DMMESCAPETYPE_ACTIVEVIDPN_SOURCEMODESET_INFO      = 10,
    D3DKMT_DMMESCAPETYPE_ACTIVEVIDPN_COFUNCPATHMODALITY_INFO = 11,
    D3DKMT_DMMESCAPETYPE_GET_LASTCLIENTCOMMITTEDVIDPN_INFO   = 12,
    D3DKMT_DMMESCAPETYPE_GET_VERSION_INFO                    = 13,
    D3DKMT_DMMESCAPETYPE_VIDPN_MGR_DIAGNOSTICS               = 14
} D3DKMT_DMMESCAPETYPE;

typedef struct _D3DKMT_HISTORY_BUFFER_STATUS
{
	BOOLEAN Enabled;
	UINT Reserved;
} D3DKMT_HISTORY_BUFFER_STATUS;

typedef enum _D3DKMT_VAD_ESCAPE_COMMAND
{
    D3DKMT_VAD_ESCAPE_GETNUMVADS,
    D3DKMT_VAD_ESCAPE_GETVAD,
    D3DKMT_VAD_ESCAPE_GETVADRANGE,
    D3DKMT_VAD_ESCAPE_GET_PTE,
    D3DKMT_VAD_ESCAPE_GET_GPUMMU_CAPS,
    D3DKMT_VAD_ESCAPE_GET_SEGMENT_CAPS,
} D3DKMT_VAD_ESCAPE_COMMAND;

typedef struct _D3DKMT_VAD_DESC
{
    UINT    VadIndex;           // in: 0xFFFFFFFF to use the VAD address
    UINT64  VadAddress;         // in
    UINT    NumMappedRanges;    // out
    UINT    VadType;            // out: 0 - reserved, 1 - Mapped
    UINT64  StartAddress;       // out
    UINT64  EndAddress;         // out
} D3DKMT_VAD_DESC;

typedef struct _D3DKMT_VA_RANGE_DESC
{
    UINT64  VadAddress;             // in
    UINT    VaRangeIndex;           // in
    UINT    PhysicalAdapterIndex;   // in
    UINT64  StartAddress;           // out
    UINT64  EndAddress;             // out
    UINT64  DriverProtection;       // out
    UINT    OwnerType;              // out: VIDMM_VAD_OWNER_TYPE
    UINT64  pOwner;                 // out
    UINT64  OwnerOffset;            // out
    UINT    Protection;             // out: D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE
} D3DKMT_VA_RANGE_DESC;

typedef struct _D3DKMT_EVICTION_CRITERIA
{
    UINT64 MinimumSize;
    UINT64 MaximumSize;
    struct
    {
        union
        {
            struct
            {
                UINT Primary  :  1; // 0x00000001
                UINT Reserved : 31; // 0xFFFFFFFE
            } Flags;
            UINT Value;
        };
    };
} D3DKMT_EVICTION_CRITERIA;

typedef enum _D3DKMT_DEFRAG_ESCAPE_OPERATION
{
    D3DKMT_DEFRAG_ESCAPE_GET_FRAGMENTATION_STATS       =  0,
    D3DKMT_DEFRAG_ESCAPE_DEFRAG_UPWARD                 =  1,
    D3DKMT_DEFRAG_ESCAPE_DEFRAG_DOWNWARD               =  2,
} D3DKMT_DEFRAG_ESCAPE_OPERATION;

typedef struct _D3DKMT_PAGE_TABLE_LEVEL_DESC
{
    UINT    IndexBitCount;
    UINT64  IndexMask;
    UINT64  IndexShift;
    UINT64  LowerLevelsMask;
    UINT64  EntryCoverageInPages;
} D3DKMT_PAGE_TABLE_LEVEL_DESC;

typedef struct _DXGK_ESCAPE_GPUMMUCAPS
{
    BOOLEAN ReadOnlyMemorySupported;
    BOOLEAN NoExecuteMemorySupported;
    BOOLEAN ZeroInPteSupported;
    BOOLEAN CacheCoherentMemorySupported;
    BOOLEAN LargePageSupported;
    BOOLEAN DualPteSupported;
    BOOLEAN AllowNonAlignedLargePageAddress;
    UINT    VirtualAddressBitCount;
    UINT    PageTableLevelCount;
    D3DKMT_PAGE_TABLE_LEVEL_DESC PageTableLevelDesk[DXGK_MAX_PAGE_TABLE_LEVEL_COUNT];
} DXGK_ESCAPE_GPUMMUCAPS;

typedef struct _D3DKMT_GET_GPUMMU_CAPS
{
    UINT                    PhysicalAdapterIndex;   // In
    DXGK_ESCAPE_GPUMMUCAPS  GpuMmuCaps;             // Out
} D3DKMT_GET_GPUMMU_CAPS;

#define D3DKMT_GET_PTE_MAX 64

typedef struct _D3DKMT_GET_PTE
{
    UINT        PhysicalAdapterIndex;                               // In
    UINT        PageTableLevel;                                     // In
    UINT        PageTableIndex[DXGK_MAX_PAGE_TABLE_LEVEL_COUNT];    // In
    BOOLEAN     b64KBPte;                                           // In - Valid only when dual PTEs are supported. Out - PT is 64KB.
    UINT        NumPtes;                                            // In - Number of PTEs to fill. Out - number of filled PTEs
    DXGK_PTE    Pte[D3DKMT_GET_PTE_MAX];                            // Out
    UINT        NumValidEntries;                                    // Out
} D3DKMT_GET_PTE;

#define D3DKMT_MAX_SEGMENT_COUNT 32

typedef enum _D3DKMT_MEMORY_SEGMENT_GROUP
{
    D3DKMT_MEMORY_SEGMENT_GROUP_LOCAL = 0,
    D3DKMT_MEMORY_SEGMENT_GROUP_NON_LOCAL = 1
} D3DKMT_MEMORY_SEGMENT_GROUP;

typedef struct _D3DKMT_SEGMENT_CAPS
{
    UINT64  Size;
    UINT    PageSize;
    ULONG   SegmentId;
    BOOLEAN bAperture;
    BOOLEAN bReservedSysMem;
    D3DKMT_MEMORY_SEGMENT_GROUP BudgetGroup;
} D3DKMT_SEGMENT_CAPS;

typedef struct _D3DKMT_GET_SEGMENT_CAPS
{
    UINT        PhysicalAdapterIndex;                               // In
    UINT        NumSegments;                                        // Out
    D3DKMT_SEGMENT_CAPS SegmentCaps[D3DKMT_MAX_SEGMENT_COUNT];      // Out
} D3DKMT_GET_SEGMENT_CAPS;

typedef struct _D3DKMT_VIDMM_ESCAPE
{
    D3DKMT_VIDMMESCAPETYPE Type;
    union
    {
        struct
        {
            union
            {
                struct
                {
                    ULONG ProbeAndLock : 1;
                    ULONG SplitPoint : 1;
                    ULONG NoDemotion : 1;
                    ULONG SwizzlingAperture : 1;
                    ULONG PagingPathLockSubRange : 1;
                    ULONG PagingPathLockMinRange : 1;
                    ULONG ComplexLock : 1;
                    ULONG FailVARotation : 1;
                    ULONG NoWriteCombined : 1;
                    ULONG NoPrePatching : 1;
                    ULONG AlwaysRepatch : 1;
                    ULONG ExpectPreparationFailure : 1;
                    ULONG FailUserModeVAMapping : 1;
#if (DXGKDDI_INTERFACE_VERSION >= DXGKDDI_INTERFACE_VERSION_WIN8)
                    ULONG NeverDiscardOfferedAllocation : 1;
                    ULONG AlwaysDiscardOfferedAllocation : 1;
                    ULONG Reserved : 17;
#else
                    ULONG Reserved : 19;
#endif
                };
                ULONG Value;
            };
        } SetFault;
        struct
        {
            D3DKMT_HANDLE ResourceHandle;
            D3DKMT_HANDLE AllocationHandle;
        } Evict;
        struct
        {
            UINT64 NtHandle;           // Used by D3DKMT_VIDMMESCAPETYPE_EVICT_BY_NT_HANDLE
        } EvictByNtHandle;
        struct
        {
            union
            {
                struct 
                {
                    UINT NumVads;
                } GetNumVads;
                D3DKMT_VAD_DESC GetVad;
                D3DKMT_VA_RANGE_DESC GetVadRange;
                D3DKMT_GET_GPUMMU_CAPS GetGpuMmuCaps;
                D3DKMT_GET_PTE  GetPte;
                D3DKMT_GET_SEGMENT_CAPS GetSegmentCaps;
            };
            D3DKMT_VAD_ESCAPE_COMMAND Command;      // in
            NTSTATUS    Status;                     // out
        } GetVads;
        struct
        {
            ULONGLONG   LocalMemoryBudget;
            ULONGLONG   SystemMemoryBudget;
        } SetBudget;
        struct
        {
            HANDLE hProcess;
            BOOL bAllowWakeOnSubmission;
        } SuspendProcess;
        struct
        {
            HANDLE hProcess;
        } ResumeProcess;
        struct
        {
            UINT64 NumBytesToTrim;
        } GetBudget;
        struct
        {
            ULONG MinTrimInterval; // In 100ns units
            ULONG MaxTrimInterval; // In 100ns units
            ULONG IdleTrimInterval; // In 100ns units
        } SetTrimIntervals;
        D3DKMT_EVICTION_CRITERIA EvictByCriteria;
        struct
        {
            BOOL bFlush;
        } Wake;
        struct
        {
            D3DKMT_DEFRAG_ESCAPE_OPERATION  Operation;
            
            UINT                            SegmentId;

            ULONGLONG                       TotalCommitted;
            ULONGLONG                       TotalFree;
            ULONGLONG                       LargestGapBefore;
            ULONGLONG                       LargestGapAfter;
        } Defrag;
    };
} D3DKMT_VIDMM_ESCAPE;

typedef struct _D3DKMT_VIDSCH_ESCAPE
{
    D3DKMT_VIDSCHESCAPETYPE Type;
    union
    {
        BOOL PreemptionControl; // enable/disable preemption
#if (DXGKDDI_INTERFACE_VERSION >= DXGKDDI_INTERFACE_VERSION_WIN8)
        BOOL EnableContextDelay; // enable/disable context delay
        struct
        {
            ULONG TdrControl;   // control tdr
            union
            {
                ULONG NodeOrdinal;  // valid if TdrControl is set to D3DKMT_TDRDBGCTRLTYPE_ENGINETDR
            };
        } TdrControl2;
#endif
        BOOL SuspendScheduler;  // suspend/resume scheduler (obsolate)
        ULONG TdrControl;       // control tdr
        ULONG SuspendTime;      // time period to suspend.
        struct
        {
            UINT Count;
            UINT Time; // In seconds
        } TdrLimit;
    };
} D3DKMT_VIDSCH_ESCAPE;

typedef struct _D3DKMT_TDRDBGCTRL_ESCAPE
{
    D3DKMT_TDRDBGCTRLTYPE TdrControl;   // control tdr
#if (DXGKDDI_INTERFACE_VERSION >= DXGKDDI_INTERFACE_VERSION_WIN8)
    union
    {
        ULONG NodeOrdinal;  // valid if TdrControl is set to D3DKMT_TDRDBGCTRLTYPE_ENGINETDR
    };
#endif
} D3DKMT_TDRDBGCTRL_ESCAPE;

// Upper boundary on the DMM escape data size (in bytes).
enum
{
    D3DKMT_MAX_DMM_ESCAPE_DATASIZE = 100*1024
};

// NOTE: If (ProvidedBufferSize >= MinRequiredBufferSize), then MinRequiredBufferSize = size of the actual complete data set in the Data[] array.
typedef struct _D3DKMT_DMM_ESCAPE
{
    _In_  D3DKMT_DMMESCAPETYPE  Type;
    _In_  SIZE_T                ProvidedBufferSize;     // actual size of Data[] array, in bytes.
    _Out_ SIZE_T                MinRequiredBufferSize;  // minimum required size of Data[] array to contain requested data.
    _Out_writes_bytes_(ProvidedBufferSize) UCHAR  Data[1];
} D3DKMT_DMM_ESCAPE;

typedef enum _D3DKMT_BRIGHTNESS_INFO_TYPE
{
    D3DKMT_BRIGHTNESS_INFO_GET_POSSIBLE_LEVELS  = 1,
    D3DKMT_BRIGHTNESS_INFO_GET                  = 2,
    D3DKMT_BRIGHTNESS_INFO_SET                  = 3,
    D3DKMT_BRIGHTNESS_INFO_GET_CAPS             = 4,
    D3DKMT_BRIGHTNESS_INFO_SET_STATE            = 5,
    D3DKMT_BRIGHTNESS_INFO_SET_OPTIMIZATION     = 6,
    D3DKMT_BRIGHTNESS_INFO_GET_REDUCTION        = 7,
    D3DKMT_BRIGHTNESS_INFO_BEGIN_MANUAL_MODE    = 8,
    D3DKMT_BRIGHTNESS_INFO_END_MANUAL_MODE      = 9,
    D3DKMT_BRIGHTNESS_INFO_TOGGLE_LOGGING       = 10,
} D3DKMT_BRIGHTNESS_INFO_TYPE;

typedef struct _D3DKMT_BRIGHTNESS_POSSIBLE_LEVELS
{
    UCHAR LevelCount;
    UCHAR BrightnessLevels[256];
} D3DKMT_BRIGHTNESS_POSSIBLE_LEVELS;

typedef struct _D3DKMT_BRIGHTNESS_INFO
{
    D3DKMT_BRIGHTNESS_INFO_TYPE    Type;
    union
    {
        D3DKMT_BRIGHTNESS_POSSIBLE_LEVELS   PossibleLevels;
        UCHAR                               Brightness;
        DXGK_BRIGHTNESS_CAPS                BrightnessCaps;
        DXGK_BRIGHTNESS_STATE               BrightnessState;
        DXGK_BACKLIGHT_OPTIMIZATION_LEVEL   OptimizationLevel;
        DXGK_BACKLIGHT_INFO                 ReductionInfo;
        BOOLEAN                             VerboseLogging;
    };
} D3DKMT_BRIGHTNESS_INFO;

#if (DXGKDDI_INTERFACE_VERSION >= DXGKDDI_INTERFACE_VERSION_WDDM2_0)
typedef struct _D3DKMT_BDDFALLBACK_CTL
{
    BOOLEAN ForceBddHeadlessNextFallback;
} D3DKMT_BDDFALLBACK_CTL;

typedef struct _D3DKMT_REQUEST_MACHINE_CRASH_ESCAPE
{
    ULONG_PTR Param1;
    ULONG_PTR Param2;
    ULONG_PTR Param3;
} D3DKMT_REQUEST_MACHINE_CRASH_ESCAPE;

//
// VERIFIER OPTIONS
//
typedef enum _D3DKMT_VERIFIER_OPTION_MODE
{
    D3DKMT_VERIFIER_OPTION_QUERY,
    D3DKMT_VERIFIER_OPTION_SET
} D3DKMT_VERIFIER_OPTION_MODE;

typedef enum _D3DKMT_PROCESS_VERIFIER_OPTION_TYPE
{
    //
    // Dxgkrnl (0xxx)
    //

    //
    // VidMm (1xxx)
    //
    D3DKMT_PROCESS_VERIFIER_OPTION_VIDMM_FLAGS              = 1000,
    D3DKMT_PROCESS_VERIFIER_OPTION_VIDMM_RESTRICT_BUDGET    = 1001,

    //
    // VidSch (2xxx)
    //

} D3DKMT_PROCESS_VERIFIER_OPTION_TYPE;

typedef union _D3DKMT_PROCESS_VERIFIER_VIDMM_FLAGS
{
    struct
    {
        UINT ForceSynchronousEvict     : 1;
        UINT NeverDeferEvictions       : 1;
        UINT AlwaysFailCommitOnReclaim : 1;
        UINT Reserved : 29;
    };
    UINT32 Value;
} D3DKMT_PROCESS_VERIFIER_VIDMM_FLAGS;

typedef struct _D3DKMT_PROCESS_VERIFIER_VIDMM_RESTRICT_BUDGET
{
    UINT64 LocalBudget;
    UINT64 NonLocalBudget;
} D3DKMT_PROCESS_VERIFIER_VIDMM_RESTRICT_BUDGET;

typedef union _D3DKMT_PROCESS_VERIFIER_OPTION_DATA
{
    D3DKMT_PROCESS_VERIFIER_VIDMM_FLAGS VidMmFlags;
    D3DKMT_PROCESS_VERIFIER_VIDMM_RESTRICT_BUDGET VidMmRestrictBudget;
} D3DKMT_PROCESS_VERIFIER_OPTION_DATA;

typedef struct _D3DKMT_PROCESS_VERIFIER_OPTION
{
    HANDLE hProcess;
    D3DKMT_PROCESS_VERIFIER_OPTION_TYPE Type;
    D3DKMT_VERIFIER_OPTION_MODE Mode;
    D3DKMT_PROCESS_VERIFIER_OPTION_DATA Data;
} D3DKMT_PROCESS_VERIFIER_OPTION;

typedef enum _D3DKMT_ADAPTER_VERIFIER_OPTION_TYPE
{
    //
    // Dxgkrnl (0xxx)
    //

    //
    // VidMm (1xxx)
    //
    D3DKMT_ADAPTER_VERIFIER_OPTION_VIDMM_FLAGS          = 1000,
    D3DKMT_ADAPTER_VERIFIER_OPTION_VIDMM_TRIM_INTERVAL  = 1001,

    //
    // VidSch (2xxx)
    //
} D3DKMT_ADAPTER_VERIFIER_OPTION_TYPE;

typedef union _D3DKMT_ADAPTER_VERIFIER_VIDMM_FLAGS
{
    struct
    {
        UINT AlwaysRepatch              : 1;    
        UINT FailSharedPrimary          : 1;
        UINT FailProbeAndLock           : 1;
        UINT AlwaysDiscardOffer         : 1;
        UINT NeverDiscardOffer          : 1;
        UINT ForceComplexLock           : 1;
        UINT NeverPrepatch              : 1;
        UINT ExpectPreparationFailure   : 1;
        UINT TakeSplitPoint             : 1;
        UINT FailAcquireSwizzlingRange  : 1;
        UINT PagingPathLockSubrange     : 1;
        UINT PagingPathLockMinrange     : 1;
        UINT FailVaRotation             : 1;
        UINT NoDemotion                 : 1;
        UINT FailDefragPass             : 1;
        UINT AlwaysProcessOfferList     : 1;
        UINT Reserved                   : 16;
    };
    UINT32 Value;
} D3DKMT_ADAPTER_VERIFIER_VIDMM_FLAGS;

typedef struct _D3DKMT_ADAPTER_VERIFIER_VIDMM_TRIM_INTERVAL
{
    UINT64 MinimumTrimInterval;
    UINT64 MaximumTrimInterval;
    UINT64 IdleTrimInterval;
} D3DKMT_ADAPTER_VERIFIER_VIDMM_TRIM_INTERVAL;

typedef union _D3DKMT_ADAPTER_VERIFIER_OPTION_DATA
{
    D3DKMT_ADAPTER_VERIFIER_VIDMM_FLAGS VidMmFlags;
    D3DKMT_ADAPTER_VERIFIER_VIDMM_TRIM_INTERVAL VidMmTrimInterval;
} D3DKMT_ADAPTER_VERIFIER_OPTION_DATA;

typedef struct _D3DKMT_ADAPTER_VERIFIER_OPTION
{
    D3DKMT_ADAPTER_VERIFIER_OPTION_TYPE Type;
    D3DKMT_VERIFIER_OPTION_MODE Mode;
    D3DKMT_ADAPTER_VERIFIER_OPTION_DATA Data;
} D3DKMT_ADAPTER_VERIFIER_OPTION;

#endif // DXGKDDI_INTERFACE_VERSION_WDDM2_0

typedef enum _D3DKMT_DEVICEESCAPE_TYPE
{
    D3DKMT_DEVICEESCAPE_VIDPNFROMALLOCATION = 0,
    D3DKMT_DEVICEESCAPE_RESTOREGAMMA        = 1,
} D3DKMT_DEVICEESCAPE_TYPE;

typedef struct _D3DKMT_DEVICE_ESCAPE
{
    D3DKMT_DEVICEESCAPE_TYPE Type;
    union
    {
        struct
        {
            D3DKMT_HANDLE                   hPrimaryAllocation; // in: Primary allocation handle
            D3DDDI_VIDEO_PRESENT_SOURCE_ID  VidPnSourceId;      // out: VidPnSoureId of primary allocation
        } VidPnFromAllocation;
    };
} D3DKMT_DEVICE_ESCAPE;

typedef struct _D3DKMT_DEBUG_SNAPSHOT_ESCAPE
{
    ULONG Length;   // out: Actual length of the snapshot written in Buffer
    BYTE Buffer[1]; // out: Buffer to place snapshot
} D3DKMT_DEBUG_SNAPSHOT_ESCAPE;

#if (DXGKDDI_INTERFACE_VERSION >= DXGKDDI_INTERFACE_VERSION_WIN8)
#ifndef DXGK_DIAG_PROCESS_NAME_LENGTH
#define DXGK_DIAG_PROCESS_NAME_LENGTH 16
#endif

typedef enum _OUTPUTDUPL_CONTEXT_DEBUG_STATUS
{
    OUTPUTDUPL_CONTEXT_DEBUG_STATUS_INACTIVE = 0,
    OUTPUTDUPL_CONTEXT_DEBUG_STATUS_ACTIVE = 1,
    OUTPUTDUPL_CONTEXT_DEBUG_STATUS_PENDING_DESTROY = 2,
    OUTPUTDUPL_CONTEXT_DEBUG_STATUS_FORCE_UINT32 = 0xffffffff
}OUTPUTDUPL_CONTEXT_DEBUG_STATUS;

typedef struct _OUTPUTDUPL_CONTEXT_DEBUG_INFO
{
    OUTPUTDUPL_CONTEXT_DEBUG_STATUS Status;
    HANDLE                          ProcessID;
    UINT32                          AccumulatedPresents;
    LARGE_INTEGER                   LastPresentTime;
    LARGE_INTEGER                   LastMouseTime;
    CHAR                            ProcessName[DXGK_DIAG_PROCESS_NAME_LENGTH];
} OUTPUTDUPL_CONTEXT_DEBUG_INFO;

#define GET_OUTPUT_DUPL_DEBUG_INFO_FROM_SNAPSHOT(pSnapshot, VidPnSource, OutputDuplContextIndex) \
    (pSnapshot->OutputDuplDebugInfos[(VidPnSource * pSnapshot->NumOutputDuplContexts) + OutputDuplContextIndex])

typedef struct _D3DKMT_OUTPUTDUPL_SNAPSHOT
{
    UINT Size;                          // _In_/out: Size of entire structure

    UINT SessionProcessCount;           // _Out_: Number of processes currently duplicating output in this session (max possible will be equal to NumOutputDuplContexts)
    UINT SessionActiveConnectionsCount; // _Out_: Total number of active contexts in this session, may be more than number active in 2D array because that is per adapter

    UINT NumVidPnSources;               // _Out_: Max of first array index
    UINT NumOutputDuplContexts;         // _Out_: Max of second array index

    // This field is in reality a two dimensional array, use GET_OUTPUT_DUPL_DEBUG_INFO_FROM_SNAPSHOT macro to get a specific one
    _Field_size_bytes_(Size - sizeof(_D3DKMT_OUTPUTDUPL_SNAPSHOT)) OUTPUTDUPL_CONTEXT_DEBUG_INFO OutputDuplDebugInfos[0];
} D3DKMT_OUTPUTDUPL_SNAPSHOT;
#endif

typedef enum _D3DKMT_ACTIVATE_SPECIFIC_DIAG_TYPE
{
    D3DKMT_ACTIVATE_SPECIFIC_DIAG_TYPE_EXTRA_CCD_DATABASE_INFO = 0,
    D3DKMT_ACTIVATE_SPECIFIC_DIAG_TYPE_MODES_PRUNED            = 15,
}D3DKMT_ACTIVATE_SPECIFIC_DIAG_TYPE;

typedef struct _D3DKMT_ACTIVATE_SPECIFIC_DIAG_ESCAPE
{
    D3DKMT_ACTIVATE_SPECIFIC_DIAG_TYPE  Type;     // The escape type that needs to be (de)activated
    BOOL                                Activate; // FALSE means deactivate
} D3DKMT_ACTIVATE_SPECIFIC_DIAG_ESCAPE;

typedef struct _D3DKMT_ESCAPE
{
    D3DKMT_HANDLE       hAdapter;               // in: adapter handle
    D3DKMT_HANDLE       hDevice;                // in: device handle [Optional]
    D3DKMT_ESCAPETYPE   Type;                   // in: escape type.
    D3DDDI_ESCAPEFLAGS  Flags;                  // in: flags
    VOID*               pPrivateDriverData;     // in/out: escape data
    UINT                PrivateDriverDataSize;  // in: size of escape data
    D3DKMT_HANDLE       hContext;               // in: context handle [Optional]
} D3DKMT_ESCAPE;


typedef enum _D3DKMT_VIDPNSOURCEOWNER_TYPE
{
     D3DKMT_VIDPNSOURCEOWNER_UNOWNED        = 0,    //Has no owner or GDI is the owner
     D3DKMT_VIDPNSOURCEOWNER_SHARED         = 1,    //Has shared owner, that is owner can yield to any exclusive owner, not available to legacy devices
     D3DKMT_VIDPNSOURCEOWNER_EXCLUSIVE      = 2,    //Has exclusive owner without shared gdi primary,
     D3DKMT_VIDPNSOURCEOWNER_EXCLUSIVEGDI   = 3,    //Has exclusive owner with shared gdi primary and must be exclusive owner of all VidPn sources, only available to legacy devices
     D3DKMT_VIDPNSOURCEOWNER_EMULATED       = 4,    //Does not have real primary ownership, but allows the device to set gamma on its owned sources
} D3DKMT_VIDPNSOURCEOWNER_TYPE;

#if (DXGKDDI_INTERFACE_VERSION >= DXGKDDI_INTERFACE_VERSION_WIN8)
typedef struct _D3DKMT_VIDPNSOURCEOWNER_FLAGS
{
    union
    {
        struct
        {
            UINT AllowOutputDuplication : 1;
            UINT DisableDWMVirtualMode  : 1;
            UINT Reserved               : 30;
        };
        UINT Value;
    };
} D3DKMT_VIDPNSOURCEOWNER_FLAGS;
#endif

typedef struct _D3DKMT_SETVIDPNSOURCEOWNER
{
    D3DKMT_HANDLE                           hDevice;            // in: Device handle
    CONST D3DKMT_VIDPNSOURCEOWNER_TYPE*     pType;              // in: OwnerType array
    CONST D3DDDI_VIDEO_PRESENT_SOURCE_ID*   pVidPnSourceId;     // in: VidPn source ID array
    UINT                                    VidPnSourceCount;   // in: Number of valid entries in above array
} D3DKMT_SETVIDPNSOURCEOWNER;

#if (DXGKDDI_INTERFACE_VERSION >= DXGKDDI_INTERFACE_VERSION_WIN8)
typedef struct _D3DKMT_SETVIDPNSOURCEOWNER1
{
    D3DKMT_SETVIDPNSOURCEOWNER              Version0;
    D3DKMT_VIDPNSOURCEOWNER_FLAGS           Flags;
} D3DKMT_SETVIDPNSOURCEOWNER1;
#endif

typedef struct _D3DKMT_CHECKVIDPNEXCLUSIVEOWNERSHIP
{
    D3DKMT_HANDLE                           hAdapter;           // in: Adapter handle
    D3DDDI_VIDEO_PRESENT_SOURCE_ID          VidPnSourceId;      // in: VidPn source ID array
} D3DKMT_CHECKVIDPNEXCLUSIVEOWNERSHIP;

#define D3DKMT_GETPRESENTHISTORY_MAXTOKENS  2048

typedef struct _D3DKMT_GETPRESENTHISTORY
{
    D3DKMT_HANDLE                                             hAdapter;     // in: Handle to adapter
    UINT                                                      ProvidedSize; // in: Size of provided buffer
    UINT                                                      WrittenSize;  // out: Copied token size or required size for first token
    _Field_size_bytes_(ProvidedSize) D3DKMT_PRESENTHISTORYTOKEN  *pTokens;      // in: Pointer to buffer.
    UINT                                                      NumTokens;    // out: Number of copied token
} D3DKMT_GETPRESENTHISTORY;

typedef struct _D3DKMT_CREATEOVERLAY
{
    D3DDDI_VIDEO_PRESENT_SOURCE_ID  VidPnSourceId;      // in
    D3DKMT_HANDLE                   hDevice;            // in: Indentifies the device
    D3DDDI_KERNELOVERLAYINFO        OverlayInfo;        // in
    D3DKMT_HANDLE                   hOverlay;           // out: Kernel overlay handle
} D3DKMT_CREATEOVERLAY;

typedef struct _D3DKMT_UPDATEOVERLAY
{
    D3DKMT_HANDLE            hDevice;           // in: Indentifies the device
    D3DKMT_HANDLE            hOverlay;          // in: Kernel overlay handle
    D3DDDI_KERNELOVERLAYINFO OverlayInfo;       // in
} D3DKMT_UPDATEOVERLAY;

typedef struct _D3DKMT_FLIPOVERLAY
{
    D3DKMT_HANDLE        hDevice;               // in: Indentifies the device
    D3DKMT_HANDLE        hOverlay;              // in: Kernel overlay handle
    D3DKMT_HANDLE        hSource;               // in: Allocation currently displayed
    VOID*                pPrivateDriverData;    // in: Private driver data
    UINT                 PrivateDriverDataSize; // in: Size of private driver data
} D3DKMT_FLIPOVERLAY;

typedef struct _D3DKMT_GETOVERLAYSTATE
{
    D3DKMT_HANDLE        hDevice;               // in: Indentifies the device
    D3DKMT_HANDLE        hOverlay;              // in: Kernel overlay handle
    BOOLEAN              OverlayEnabled;
} D3DKMT_GETOVERLAYSTATE;

typedef struct _D3DKMT_DESTROYOVERLAY
{
    D3DKMT_HANDLE        hDevice;               // in: Indentifies the device
    D3DKMT_HANDLE        hOverlay;              // in: Kernel overlay handle
} D3DKMT_DESTROYOVERLAY;

typedef struct _D3DKMT_WAITFORVERTICALBLANKEVENT
{
    D3DKMT_HANDLE                   hAdapter;      // in: adapter handle
    D3DKMT_HANDLE                   hDevice;       // in: device handle [Optional]
    D3DDDI_VIDEO_PRESENT_SOURCE_ID  VidPnSourceId; // in: adapter's VidPN Source ID
} D3DKMT_WAITFORVERTICALBLANKEVENT;

#define D3DKMT_MAX_WAITFORVERTICALBLANK_OBJECTS 8

typedef struct _D3DKMT_WAITFORVERTICALBLANKEVENT2
{
    D3DKMT_HANDLE                   hAdapter;      // in: adapter handle
    D3DKMT_HANDLE                   hDevice;       // in: device handle [Optional]
    D3DDDI_VIDEO_PRESENT_SOURCE_ID  VidPnSourceId; // in: adapter's VidPN Source ID
    UINT                            NumObjects;
    HANDLE                          ObjectHandleArray[D3DKMT_MAX_WAITFORVERTICALBLANK_OBJECTS]; // in: Specifies the objects to wait on.
} D3DKMT_WAITFORVERTICALBLANKEVENT2;

typedef struct _D3DKMT_GETVERTICALBLANKEVENT
{
    D3DKMT_HANDLE                   hAdapter;      // in: adapter handle
    D3DKMT_HANDLE                   hDevice;       // in: device handle [Optional]
    D3DDDI_VIDEO_PRESENT_SOURCE_ID  VidPnSourceId; // in: adapter's VidPN Source ID
    HANDLE*                         phEvent;
} D3DKMT_GETVERTICALBLANKEVENT;

typedef struct _D3DKMT_SETSYNCREFRESHCOUNTWAITTARGET
{
    D3DKMT_HANDLE                   hAdapter;      // in: adapter handle
    D3DKMT_HANDLE                   hDevice;       // in: device handle [Optional]
    D3DDDI_VIDEO_PRESENT_SOURCE_ID  VidPnSourceId; // in: adapter's VidPN Source ID
    UINT                            TargetSyncRefreshCount;
} D3DKMT_SETSYNCREFRESHCOUNTWAITTARGET;

typedef struct _D3DKMT_SETGAMMARAMP
{
    D3DKMT_HANDLE                   hDevice;       // in: device handle
    D3DDDI_VIDEO_PRESENT_SOURCE_ID  VidPnSourceId; // in: adapter's VidPN Source ID
    D3DDDI_GAMMARAMP_TYPE           Type;          // in: Gamma ramp type
    union
    {
        D3DDDI_GAMMA_RAMP_RGB256x3x16* pGammaRampRgb256x3x16;
        D3DDDI_GAMMA_RAMP_DXGI_1*      pGammaRampDXGI1;
    };
    UINT                            Size;
} D3DKMT_SETGAMMARAMP;

typedef struct _D3DKMT_ADJUSTFULLSCREENGAMMA
{
    D3DKMT_HANDLE                   hAdapter;      // in: adapter handle
    D3DDDI_VIDEO_PRESENT_SOURCE_ID  VidPnSourceId; // in: adapter's VidPN Source ID
    D3DDDI_DXGI_RGB                 Scale;
    D3DDDI_DXGI_RGB                 Offset;
} D3DKMT_ADJUSTFULLSCREENGAMMA;

typedef struct _D3DKMT_SETVIDPNSOURCEHWPROTECTION
{
    D3DKMT_HANDLE                   hAdapter;      // in: adapter handle
    D3DDDI_VIDEO_PRESENT_SOURCE_ID  VidPnSourceId; // in: adapter's VidPN Source ID
    BOOL                            HwProtected;   // in: HW protection status
} D3DKMT_SETVIDPNSOURCEHWPROTECTION;

typedef struct _D3DKMT_SETHWPROTECTIONTEARDOWNRECOVERY
{
    D3DKMT_HANDLE                   hAdapter;      // in: adapter handle
    BOOL                            Recovered;     // in: HW protection teardown recovery
} D3DKMT_SETHWPROTECTIONTEARDOWNRECOVERY;

typedef enum _D3DKMT_DEVICEEXECUTION_STATE
{
    D3DKMT_DEVICEEXECUTION_ACTIVE               = 1,
    D3DKMT_DEVICEEXECUTION_RESET                = 2,
    D3DKMT_DEVICEEXECUTION_HUNG                 = 3,
    D3DKMT_DEVICEEXECUTION_STOPPED              = 4,
    D3DKMT_DEVICEEXECUTION_ERROR_OUTOFMEMORY    = 5,
    D3DKMT_DEVICEEXECUTION_ERROR_DMAFAULT       = 6,
#if (DXGKDDI_INTERFACE_VERSION >= DXGKDDI_INTERFACE_VERSION_WDDM2_0)
    D3DKMT_DEVICEEXECUTION_ERROR_DMAPAGEFAULT   = 7,
#endif // (DXGKDDI_INTERFACE_VERSION >= DXGKDDI_INTERFACE_VERSION_WDDM2_0)
} D3DKMT_DEVICEEXECUTION_STATE;

typedef struct _D3DKMT_DEVICERESET_STATE
{
    union
    {
        struct
        {
            UINT    DesktopSwitched : 1;        // 0x00000001
            UINT    Reserved        :31;        // 0xFFFFFFFE
        };
        UINT    Value;
    };
} D3DKMT_DEVICERESET_STATE;

typedef struct _D3DKMT_PRESENT_STATS
{
    UINT PresentCount;
    UINT PresentRefreshCount;
    UINT SyncRefreshCount;
    LARGE_INTEGER SyncQPCTime;
    LARGE_INTEGER SyncGPUTime;
} D3DKMT_PRESENT_STATS;

typedef struct _D3DKMT_DEVICEPRESENT_STATE
{
    D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId; // in: present source id
    D3DKMT_PRESENT_STATS           PresentStats;  // out: present stats
} D3DKMT_DEVICEPRESENT_STATE;

typedef struct _D3DKMT_PRESENT_STATS_DWM
{
    UINT PresentCount;
    UINT PresentRefreshCount;
    LARGE_INTEGER PresentQPCTime;
    UINT SyncRefreshCount;
    LARGE_INTEGER SyncQPCTime;
    UINT CustomPresentDuration;
} D3DKMT_PRESENT_STATS_DWM;

#if (DXGKDDI_INTERFACE_VERSION >= DXGKDDI_INTERFACE_VERSION_WDDM2_0)

typedef struct _D3DKMT_DEVICEPAGEFAULT_STATE
{
    UINT64                      FaultedPrimitiveAPISequenceNumber; // when per draw fence write is enabled, identifies the draw that caused the page fault, or DXGK_PRIMITIVE_API_SEQUENCE_NUMBER_UNKNOWN if such information is not available.           
    DXGK_RENDER_PIPELINE_STAGE  FaultedPipelineStage;   // render pipeline stage during which the fault was generated, or DXGK_RENDER_PIPELINE_STAGE_UNKNOWN if such information is not available.
    UINT                        FaultedBindTableEntry;  // a bind table index of a resource being accessed at the time of the fault, or DXGK_BIND_TABLE_ENTRY_UNKNOWN if such information is not available.
    DXGK_PAGE_FAULT_FLAGS       PageFaultFlags;         // flags specifying the nature of the fault
    DXGK_FAULT_ERROR_CODE       FaultErrorCode;         // Structure that contains error code describing the fault.
    D3DGPU_VIRTUAL_ADDRESS      FaultedVirtualAddress;  // virtual address of faulting resource, or D3DGPU_NULL if such information is not available.
} D3DKMT_DEVICEPAGEFAULT_STATE;

#endif // (DXGKDDI_INTERFACE_VERSION >= DXGKDDI_INTERFACE_VERSION_WDDM2_0)

typedef struct _D3DKMT_DEVICEPRESENT_STATE_DWM
{
    D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId; // in: present source id
    D3DKMT_PRESENT_STATS_DWM       PresentStatsDWM; // out: present stats rev 2
} D3DKMT_DEVICEPRESENT_STATE_DWM;

typedef enum _D3DKMT_DEVICESTATE_TYPE
{
    D3DKMT_DEVICESTATE_EXECUTION = 1,
    D3DKMT_DEVICESTATE_PRESENT   = 2,
    D3DKMT_DEVICESTATE_RESET     = 3,
    D3DKMT_DEVICESTATE_PRESENT_DWM = 4,

#if (DXGKDDI_INTERFACE_VERSION >= DXGKDDI_INTERFACE_VERSION_WDDM2_0)

    D3DKMT_DEVICESTATE_PAGE_FAULT = 5,

#endif // (DXGKDDI_INTERFACE_VERSION >= DXGKDDI_INTERFACE_VERSION_WDDM2_0)

} D3DKMT_DEVICESTATE_TYPE;

typedef struct _D3DKMT_GETDEVICESTATE
{
    D3DKMT_HANDLE                   hDevice;       // in: device handle
    D3DKMT_DEVICESTATE_TYPE         StateType;     // in: device state type
    union
    {
        D3DKMT_DEVICEEXECUTION_STATE ExecutionState; // out: device state
        D3DKMT_DEVICEPRESENT_STATE   PresentState;   // in/out: present state
        D3DKMT_DEVICERESET_STATE     ResetState;     // out: reset state
        D3DKMT_DEVICEPRESENT_STATE_DWM  PresentStateDWM;  // in/out: present state

#if (DXGKDDI_INTERFACE_VERSION >= DXGKDDI_INTERFACE_VERSION_WDDM2_0)

        D3DKMT_DEVICEPAGEFAULT_STATE PageFaultState; // out: page fault state

#endif // (DXGKDDI_INTERFACE_VERSION >= DXGKDDI_INTERFACE_VERSION_WDDM2_0)
    };
} D3DKMT_GETDEVICESTATE;

typedef struct _D3DKMT_CREATEDCFROMMEMORY
{
    VOID*                           pMemory;       // in: memory for DC
    D3DDDIFORMAT                    Format;        // in: Memory pixel format
    UINT                            Width;         // in: Memory Width
    UINT                            Height;        // in: Memory Height
    UINT                            Pitch;         // in: Memory pitch
    HDC                             hDeviceDc;     // in: DC describing the device
    PALETTEENTRY*                   pColorTable;   // in: Palette
    HDC                             hDc;           // out: HDC
    HANDLE                          hBitmap;       // out: Handle to bitmap
} D3DKMT_CREATEDCFROMMEMORY;

typedef struct _D3DKMT_DESTROYDCFROMMEMORY
{
    HDC                             hDc;           // in:
    HANDLE                          hBitmap;       // in:
} D3DKMT_DESTROYDCFROMMEMORY;

typedef struct _D3DKMT_SETCONTEXTSCHEDULINGPRIORITY
{
    D3DKMT_HANDLE                   hContext;      // in: context handle
    INT                             Priority;      // in: context priority
} D3DKMT_SETCONTEXTSCHEDULINGPRIORITY;

typedef struct _D3DKMT_SETCONTEXTINPROCESSSCHEDULINGPRIORITY
{
    D3DKMT_HANDLE                   hContext;      // in: context handle
    INT                             Priority;      // in: context priority
} D3DKMT_SETCONTEXTINPROCESSSCHEDULINGPRIORITY;

typedef struct _D3DKMT_CHANGESURFACEPOINTER
{
    HDC                             hDC;             // in: dc handle
    HANDLE                          hBitmap;         // in: bitmap handle
    LPVOID                          pSurfacePointer; // in: new surface pointer
    UINT                            Width;           // in: Memory Width
    UINT                            Height;          // in: Memory Height
    UINT                            Pitch;           // in: Memory pitch
} D3DKMT_CHANGESURFACEPOINTER;

typedef struct _D3DKMT_GETCONTEXTSCHEDULINGPRIORITY
{
    D3DKMT_HANDLE                   hContext;      // in: context handle
    INT                             Priority;      // out: context priority
} D3DKMT_GETCONTEXTSCHEDULINGPRIORITY;

typedef struct _D3DKMT_GETCONTEXTINPROCESSSCHEDULINGPRIORITY
{
    D3DKMT_HANDLE                   hContext;      // in: context handle
    INT                             Priority;      // out: context priority
} D3DKMT_GETCONTEXTINPROCESSSCHEDULINGPRIORITY;

typedef enum _D3DKMT_SCHEDULINGPRIORITYCLASS
{
    D3DKMT_SCHEDULINGPRIORITYCLASS_IDLE         = 0,
    D3DKMT_SCHEDULINGPRIORITYCLASS_BELOW_NORMAL = 1,
    D3DKMT_SCHEDULINGPRIORITYCLASS_NORMAL       = 2,
    D3DKMT_SCHEDULINGPRIORITYCLASS_ABOVE_NORMAL = 3,
    D3DKMT_SCHEDULINGPRIORITYCLASS_HIGH         = 4,
    D3DKMT_SCHEDULINGPRIORITYCLASS_REALTIME     = 5,
} D3DKMT_SCHEDULINGPRIORITYCLASS;

typedef struct _D3DKMT_GETSCANLINE
{
    D3DKMT_HANDLE                   hAdapter;           // in: Adapter handle
    D3DDDI_VIDEO_PRESENT_SOURCE_ID  VidPnSourceId;      // in: Adapter's VidPN Source ID
    BOOLEAN                         InVerticalBlank;    // out: Within vertical blank
    UINT                            ScanLine;           // out: Current scan line
} D3DKMT_GETSCANLINE;

typedef enum _D3DKMT_QUEUEDLIMIT_TYPE
{
    D3DKMT_SET_QUEUEDLIMIT_PRESENT     = 1,
    D3DKMT_GET_QUEUEDLIMIT_PRESENT     = 2,
} D3DKMT_QUEUEDLIMIT_TYPE;

typedef struct _D3DKMT_SETQUEUEDLIMIT
{
    D3DKMT_HANDLE                   hDevice;            // in: device handle
    D3DKMT_QUEUEDLIMIT_TYPE         Type;               // in: limit type
    union
    {
        UINT                        QueuedPresentLimit; // in (or out): queued present limit
        struct
        {
            D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId;          // in: adapter's VidPN source ID
            UINT                           QueuedPendingFlipLimit; // in (or out): flip pending limit
        };
    };
} D3DKMT_SETQUEUEDLIMIT;

typedef struct _D3DKMT_POLLDISPLAYCHILDREN
{
    D3DKMT_HANDLE                   hAdapter;                 // in: Adapter handle
    UINT                            NonDestructiveOnly :  1;  // in: 0x00000001 Destructive or not
    UINT                            SynchronousPolling :  1;  // in: 0x00000002 Synchronous polling or not
    UINT                            DisableModeReset   :  1;  // in: 0x00000004 Disable DMM mode reset on monitor event
    UINT                            PollAllAdapters    :  1;  // in: 0x00000008 Poll all adapters
    UINT                            PollInterruptible  :  1;  // in: 0x00000010 Poll interruptible targets as well.
    UINT                            Reserved           : 27;  // in: 0xffffffc0
} D3DKMT_POLLDISPLAYCHILDREN;

typedef struct _D3DKMT_INVALIDATEACTIVEVIDPN
{
    D3DKMT_HANDLE                   hAdapter;               // in: Adapter handle
    VOID*                           pPrivateDriverData;     // in: Private driver data
    UINT                            PrivateDriverDataSize;  // in: Size of private driver data
} D3DKMT_INVALIDATEACTIVEVIDPN;

typedef struct _D3DKMT_CHECKOCCLUSION
{
    HWND            hWindow;        // in:  Destination window handle
} D3DKMT_CHECKOCCLUSION;

typedef struct _D3DKMT_WAITFORIDLE
{
    D3DKMT_HANDLE   hDevice;        // in:  Device to wait for idle
} D3DKMT_WAITFORIDLE;

typedef struct _D3DKMT_CHECKMONITORPOWERSTATE
{
    D3DKMT_HANDLE    hAdapter;    // in: Adapter to check on
    D3DDDI_VIDEO_PRESENT_SOURCE_ID  VidPnSourceId;      // in: Adapter's VidPN Source ID
} D3DKMT_CHECKMONITORPOWERSTATE;

typedef struct _D3DKMT_SETDISPLAYPRIVATEDRIVERFORMAT
{
    D3DKMT_HANDLE                   hDevice;                         // in: Identifies the device
    D3DDDI_VIDEO_PRESENT_SOURCE_ID  VidPnSourceId;                   // in: Identifies which VidPn we are changing the private driver format attribute for
    UINT                            PrivateDriverFormatAttribute;    // In: Requested private format attribute for VidPn specified
} D3DKMT_SETDISPLAYPRIVATEDRIVERFORMAT;

typedef struct _D3DKMT_CREATEKEYEDMUTEX
{
    UINT64                                  InitialValue;               // in:  Initial value to release to
    D3DKMT_HANDLE                           hSharedHandle;              // out:  Global handle to keyed mutex
    D3DKMT_HANDLE                           hKeyedMutex;                // out: Handle to the keyed mutex in this process
} D3DKMT_CREATEKEYEDMUTEX;

typedef struct _D3DKMT_OPENKEYEDMUTEX
{
    D3DKMT_HANDLE                           hSharedHandle;              // in:  Global handle to keyed mutex
    D3DKMT_HANDLE                           hKeyedMutex;                // out: Handle to the keyed mutex in this process
} D3DKMT_OPENKEYEDMUTEX;

typedef struct _D3DKMT_DESTROYKEYEDMUTEX
{
    D3DKMT_HANDLE                           hKeyedMutex;                // in:  Identifies the keyed mutex being destroyed.
} D3DKMT_DESTROYKEYEDMUTEX;

typedef struct _D3DKMT_ACQUIREKEYEDMUTEX
{
    D3DKMT_HANDLE                           hKeyedMutex;                // in: Handle to the keyed mutex
    UINT64                                  Key;                        // in: Key value to Acquire
    PLARGE_INTEGER                          pTimeout;                   // in: NT-style timeout value
    UINT64                                  FenceValue;                 // out: Current fence value of the GPU sync object
} D3DKMT_ACQUIREKEYEDMUTEX;

typedef struct _D3DKMT_RELEASEKEYEDMUTEX
{
    D3DKMT_HANDLE                           hKeyedMutex;                // in: Handle to the keyed mutex
    UINT64                                  Key;                        // in: Key value to Release to
    UINT64                                  FenceValue;                 // in: New fence value to use for GPU sync object
} D3DKMT_RELEASEKEYEDMUTEX;

#if (DXGKDDI_INTERFACE_VERSION >= DXGKDDI_INTERFACE_VERSION_WIN8)

typedef struct _D3DKMT_CREATEKEYEDMUTEX2_FLAGS
{
    union
    {
        struct
        {
            UINT NtSecuritySharing      : 1;    // If set, the keyed mutex will be shared using DxgkShareObjects instead of D3DKMT_CREATEKEYEDMUTEX2::hSharedHandle
            UINT Reserved               : 31;
        };
        UINT Value;
    };
} D3DKMT_CREATEKEYEDMUTEX2_FLAGS;

typedef struct _D3DKMT_CREATEKEYEDMUTEX2
{
    UINT64                                        InitialValue;           // in:  Initial value to release to
    D3DKMT_HANDLE                                 hSharedHandle;          // out: Global handle to keyed mutex, NULL if NtSecuritySharing is set.
    D3DKMT_HANDLE                                 hKeyedMutex;            // out: Handle to the keyed mutex in this process
    _In_reads_bytes_opt_(PrivateRuntimeDataSize) VOID* pPrivateRuntimeData;    // in:  Buffer containing initial private data.
                                                                          //      If NULL then PrivateRuntimeDataSize must be 0.
    UINT                                          PrivateRuntimeDataSize; // in:  Size in bytes of pPrivateRuntimeData.
    D3DKMT_CREATEKEYEDMUTEX2_FLAGS                Flags;                  // in:  Creation flags.
} D3DKMT_CREATEKEYEDMUTEX2;

typedef struct _D3DKMT_OPENKEYEDMUTEX2
{
    D3DKMT_HANDLE                                 hSharedHandle;          // in:  Global handle to keyed mutex
    D3DKMT_HANDLE                                 hKeyedMutex;            // out: Handle to the keyed mutex in this process
    _In_reads_bytes_opt_(PrivateRuntimeDataSize) VOID* pPrivateRuntimeData;    // in:  Buffer containing initial private data.
                                                                          //      If NULL then PrivateRuntimeDataSize must be 0.
                                                                          //      It will only be copied if the keyed mutex does not already have private data.
    UINT                                          PrivateRuntimeDataSize; // in:  Size in bytes of pPrivateRuntimeData.
} D3DKMT_OPENKEYEDMUTEX2;

typedef struct _D3DKMT_ACQUIREKEYEDMUTEX2
{
    D3DKMT_HANDLE                                       hKeyedMutex;            // in:  Handle to the keyed mutex
    UINT64                                              Key;                    // in:  Key value to Acquire
    PLARGE_INTEGER                                      pTimeout;               // in:  NT-style timeout value
    UINT64                                              FenceValue;             // out: Current fence value of the GPU sync object
    _Out_writes_bytes_all_opt_(PrivateRuntimeDataSize) VOID* pPrivateRuntimeData;    // out: Buffer to copy private data to.
                                                                                //      If NULL then PrivateRuntimeDataSize must be 0.
    UINT                                                PrivateRuntimeDataSize; // in:  Size in bytes of pPrivateRuntimeData.
} D3DKMT_ACQUIREKEYEDMUTEX2;

typedef struct _D3DKMT_RELEASEKEYEDMUTEX2
{
    D3DKMT_HANDLE                                 hKeyedMutex;            // in: Handle to the keyed mutex
    UINT64                                        Key;                    // in: Key value to Release to
    UINT64                                        FenceValue;             // in: New fence value to use for GPU sync object
    _In_reads_bytes_opt_(PrivateRuntimeDataSize) VOID* pPrivateRuntimeData;    // in: Buffer containing new private data.
                                                                          //     If NULL then PrivateRuntimeDataSize must be 0.
    UINT                                          PrivateRuntimeDataSize; // in: Size in bytes of pPrivateRuntimeData.
} D3DKMT_RELEASEKEYEDMUTEX2;
#endif

typedef struct _D3DKMT_CREATESWAPCHAIN
{
    BOOL                                          bProducer;                    // in: Indicates if producer or consumer
    D3DKMT_HANDLE                                 hDevice;                      // in: Handle to the device.
    POBJECT_ATTRIBUTES                            pObjectAttributes;            // in: Security attribute of swapchain
    ACCESS_MASK                                   DesiredAccess;                // in: Desired access for swapchain
    UINT                                          SurfaceCount;                 // in: Number of buffers
    _Field_size_(SurfaceCount) HANDLE*            pNtSurfaceHandles;            // in: Array of Nt handles
    BOOL                                          bFailAcquireIfSurfaceBusy;    // in: Indicates if acquires fail if surface still busy
    HANDLE                                        BufferAvailableEvent;         // in_opt: Option handle to event
    HANDLE                                        hNtSwapChain;                 // out: NT handle for swapchain in this process
} D3DKMT_CREATESWAPCHAIN;

typedef struct _D3DKMT_OPENSWAPCHAIN
{
    HANDLE                                        hNtSwapChain;             // in/out_opt: NT handle for swapchain in this process
    POBJECT_ATTRIBUTES                            pObjectAttributes;        // in_opt: Security attributes of the swapchain
    BOOL                                          bProducer;                // in: Indicates if producer or consumer
    D3DKMT_HANDLE                                 hDevice;                  // in: Handle to the device.
    BOOL                                          bFailAcquireIfSurfaceBusy;// in: Indicates if acquires fail if surface still busy
    ACCESS_MASK                                   DesiredAccess;            // in: Desired access for the swapchain
    ACCESS_MASK                                   DesiredAccessTextures;    // in: Desired access for the textures
    HANDLE                                        BufferAvailableEvent;     // in_opt: Option handle to event
    UINT                                          SurfaceCount;             // in/out: Number of buffers in table provided on way in, on out number of surfaces used/needed
    _Field_size_opt_(SurfaceCount) HANDLE*        pNtSurfaceHandles;        // out: Array of Nt handles
} D3DKMT_OPENSWAPCHAIN;

typedef struct _D3DKMT_ABANDONSWAPCHAIN
{
    HANDLE                           hNtSwapChain;             // in: NT handle for swapchain in this process
} D3DKMT_ABANDONSWAPCHAIN;

typedef struct _D3DKMT_RELEASESWAPCHAIN
{
    HANDLE                                  hNtSwapChain;               // in: NT handle for swapchain in this process
    BOOL                                    bProducer;                  // in: Indicate if producer or consumer
    UINT                                    MetaDataSize;               // in: Size of metadata
    _Field_size_bytes_(MetaDataSize) PVOID  pMetaData;                  // in: Point to metadata for frame
} D3DKMT_RELEASESWAPCHAIN;

typedef struct _D3DKMT_ACQUIRESWAPCHAIN
{
    HANDLE                                  hNtSwapChain;               // in: NT handle for swapchain in this process
    BOOL                                    bReleaseBeforeAcquire;      // in: Indicates if caller wants to release current buffer before acquire
    BOOL                                    bProducer;                  // in: Indicates if producer or consumer
    D3DKMT_RELEASESWAPCHAIN                 ReleaseInfo;                // in: Release info
    UINT                                    AcquiredBufferIdx;          // out: Index of buffer just acquired
    UINT                                    AcquireMetadataSize;        // out: Size of metadata
} D3DKMT_ACQUIRESWAPCHAIN;

typedef struct _D3DKMT_GETSETSWAPCHAINMETADATA
{
    HANDLE                                  hNtSwapChain;               // in: NT handle for swapchain in this process
    BOOL                                    bSetMetaData;               // in: Indicates if caller is setting or getting the metadata
    BOOL                                    bProducer;                  // in: Indicates if producer or consumer
    BOOL                                    bGlobalMetaData;            // in: Indicates if the caller is setting the swap-chain global metadata, or surface metadata
    UINT                                    BufferSize;                 // in: Size of buffer for metadatat to be copied to
    _Field_size_bytes_(BufferSize) PVOID    pBuffer;                    // in/out: Buffer metadata should be copied to
    UINT                                    DataCopied;                 // out: Number of bytes copied to the buffer
} D3DKMT_GETSETSWAPCHAINMETADATA;

typedef struct _D3DKMT_SETDODINDIRECTSWAPCHAIN
{
    D3DKMT_HANDLE                   hDodAdapter;        // in: Device owner
    D3DKMT_HANDLE                   hDevice;            // in: Device owner
    D3DDDI_VIDEO_PRESENT_SOURCE_ID  VidPnSourceId;      // in: Adapter's VidPN Source ID
    HANDLE                          hNtSwapChain;       // in: NT handle for swapchain in this process
    BOOL                            bTerminateOutput;   // in: Swap-chain owner is reporting a device timeout
} D3DKMT_SETDODINDIRECTSWAPCHAIN;

typedef struct _D3DKMT_CONFIGURESHAREDRESOURCE
{
    D3DKMT_HANDLE   hDevice;        // in:  Device that created the resource
    D3DKMT_HANDLE   hResource;      // in: Handle for shared resource
    BOOLEAN         IsDwm;          // in: TRUE when the process is DWM
    HANDLE          hProcess;       // in: Process handle for the non-DWM case
    BOOLEAN         AllowAccess;    // in: Indicates whereh the process is allowed access
} D3DKMT_CONFIGURESHAREDRESOURCE;

typedef struct _D3DKMT_CHECKSHAREDRESOURCEACCESS
{
    D3DKMT_HANDLE   hResource;      // in: Handle for the resource
    UINT            ClientPid;      // in: Client process PID
} D3DKMT_CHECKSHAREDRESOURCEACCESS;

#if (DXGKDDI_INTERFACE_VERSION >= DXGKDDI_INTERFACE_VERSION_WIN8)
typedef enum _D3DKMT_OFFER_PRIORITY
{
    D3DKMT_OFFER_PRIORITY_LOW=1,    // Content is not useful
    D3DKMT_OFFER_PRIORITY_NORMAL,   // Content is useful but easy to regenerate
    D3DKMT_OFFER_PRIORITY_HIGH,     // Content is useful and difficult to regenerate
    D3DKMT_OFFER_PRIORITY_AUTO,     // Let VidMm decide offer priority based on eviction priority
} D3DKMT_OFFER_PRIORITY;

#if (DXGKDDI_INTERFACE_VERSION >= DXGKDDI_INTERFACE_VERSION_WDDM2_0)
typedef struct _D3DKMT_OFFER_FLAGS
{
    union
    {
        struct
        {
            UINT OfferImmediately :  1; // 0x00000001
            UINT AllowDecommit    :  1; // 0x00000002
            UINT Reserved         : 30; // 0xFFFFFFFC
        };
        UINT Value;
    };
} D3DKMT_OFFER_FLAGS;
#endif // DXGKDDI_INTERFACE_VERSION

typedef struct _D3DKMT_OFFERALLOCATIONS
{
    D3DKMT_HANDLE hDevice;          // in: Device that created the allocations
    D3DKMT_HANDLE* pResources;      // in: array of D3D runtime resource handles.
    CONST D3DKMT_HANDLE* HandleList;// in: array of allocation handles. If non-NULL, pResources must be NULL.
    UINT NumAllocations;            // in: number of items in whichever of pResources or HandleList is non-NULL.
    D3DKMT_OFFER_PRIORITY Priority; // in: priority with which to offer the allocations
#if (DXGKDDI_INTERFACE_VERSION >= DXGKDDI_INTERFACE_VERSION_WDDM2_0)
    D3DKMT_OFFER_FLAGS Flags;       // in: various flags for determining offer behavior
#endif // DXGKDDI_INTERFACE_VERSION
} D3DKMT_OFFERALLOCATIONS;

typedef struct _D3DKMT_RECLAIMALLOCATIONS
{
    D3DKMT_HANDLE hDevice;          // in:  Device that created the allocations
    D3DKMT_HANDLE* pResources;      // in:  array of D3D runtime resource handles.
    CONST D3DKMT_HANDLE* HandleList;// in:  array of allocation handles. If non-NULL, pResources must be NULL.
    BOOL* pDiscarded;               // out: optional array of booleans specifying whether each resource or allocation was discarded.
    UINT NumAllocations;            // in:  number of items in pDiscarded and whichever of pResources or HandleList is non-NULL.
} D3DKMT_RECLAIMALLOCATIONS;

typedef struct _D3DKMT_RECLAIMALLOCATIONS2
{
    D3DKMT_HANDLE hPagingQueue;             // in:  Device that created the allocations
    UINT NumAllocations;                    // in:  number of items in pDiscarded and whichever of pResources or HandleList is non-NULL.
    D3DKMT_HANDLE* pResources;              // in:  array of D3D runtime resource handles.
    CONST D3DKMT_HANDLE* HandleList;        // in:  array of allocation handles. If non-NULL, pResources must be NULL.
#if(DXGKDDI_INTERFACE_VERSION >= DXGKDDI_INTERFACE_VERSION_WDDM2_1 || \
    D3D_UMD_INTERFACE_VERSION >= D3D_UMD_INTERFACE_VERSION_WDDM2_1)
    union
    {
        BOOL* pDiscarded;                   // out: optional array of booleans specifying whether each resource or allocation was discarded.
        D3DDDI_RECLAIM_RESULT* pResults;    // out: array of results specifying whether each resource or allocation is OK, discarded, or has no commitment.
    };
#else
    BOOL* pDiscarded;                       // out: optional array of booleans specifying whether each resource or allocation was discarded.
#endif // (DXGKDDI_INTERFACE_VERSION || D3D_UMD_INTERFACE_VERSION)
    UINT64 PagingFenceValue;                // out: The paging fence to synchronize against before submitting work to the GPU which
                                            //      references any of the resources or allocations in the provided arrays
} D3DKMT_RECLAIMALLOCATIONS2;


typedef struct _D3DKMT_OUTPUTDUPL_KEYEDMUTEX
{
    D3DKMT_HANDLE hSharedSurfaceGlobal;
    D3DKMT_HANDLE hGPUFencefaceGlobal;
    D3DKMT_HANDLE hKeyedMutexGlobal;
}D3DKMT_OUTPUTDUPL_KEYEDMUTEX;

#define OUTPUTDUPL_CREATE_MAX_KEYEDMUTXES 3
typedef struct _D3DKMT_CREATE_OUTPUTDUPL
{
    D3DKMT_HANDLE                   hAdapter;
    D3DDDI_VIDEO_PRESENT_SOURCE_ID  VidPnSourceId;
    UINT                            KeyedMutexCount;            // in : If zero then means is this the pre-create check
    UINT                            RequiredKeyedMutexCount;    // out: The number of keyed mutexs needed
    D3DKMT_OUTPUTDUPL_KEYEDMUTEX    KeyedMutexs[OUTPUTDUPL_CREATE_MAX_KEYEDMUTXES];
} D3DKMT_CREATE_OUTPUTDUPL;

typedef struct _D3DKMT_DESTROY_OUTPUTDUPL
{
    D3DKMT_HANDLE                   hAdapter;
    D3DDDI_VIDEO_PRESENT_SOURCE_ID  VidPnSourceId;
    BOOL                            bDestroyAllContexts;
} D3DKMT_DESTROY_OUTPUTDUPL;

typedef struct _D3DKMT_OUTPUTDUPL_POINTER_POSITION
{
    POINT   Position;
    BOOL    Visible;
} D3DKMT_OUTPUTDUPL_POINTER_POSITION;

typedef struct _D3DKMT_OUTPUTDUPL_FRAMEINFO
{
    LARGE_INTEGER                       LastPresentTime;
    LARGE_INTEGER                       LastMouseUpdateTime;
    UINT                                AccumulatedFrames;
    BOOL                                RectsCoalesced;
    BOOL                                ProtectedContentMaskedOut;
    D3DKMT_OUTPUTDUPL_POINTER_POSITION  PointerPosition;
    UINT                                TotalMetadataBufferSize;
    UINT                                PointerShapeBufferSize;
} D3DKMT_OUTPUTDUPL_FRAMEINFO;

typedef struct _D3DKMT_OUTPUTDUPL_GET_FRAMEINFO
{
    D3DKMT_HANDLE                   hAdapter;
    D3DDDI_VIDEO_PRESENT_SOURCE_ID  VidPnSourceId;
    D3DKMT_OUTPUTDUPL_FRAMEINFO     FrameInfo;
} D3DKMT_OUTPUTDUPL_GET_FRAMEINFO;

typedef enum _D3DKMT_OUTPUTDUPL_METADATATYPE
{
    D3DKMT_OUTPUTDUPL_METADATATYPE_DIRTY_RECTS = 0,
    D3DKMT_OUTPUTDUPL_METADATATYPE_MOVE_RECTS  = 1
} D3DKMT_OUTPUTDUPL_METADATATYPE;

typedef struct _D3DKMT_OUTPUTDUPL_METADATA
{
    D3DKMT_HANDLE                                                       hAdapter;
    D3DDDI_VIDEO_PRESENT_SOURCE_ID                                      VidPnSourceId;
    D3DKMT_OUTPUTDUPL_METADATATYPE                                      Type;
    UINT                                                                BufferSizeSupplied;
    _Field_size_bytes_part_(BufferSizeSupplied, BufferSizeRequired) PVOID   pBuffer;
    UINT                                                                BufferSizeRequired;
} D3DKMT_OUTPUTDUPL_METADATA;

typedef enum _D3DKMT_OUTDUPL_POINTER_SHAPE_TYPE
{
    D3DKMT_OUTDUPL_POINTER_SHAPE_TYPE_MONOCHROME     = 0x00000001,
    D3DKMT_OUTDUPL_POINTER_SHAPE_TYPE_COLOR          = 0x00000002,
    D3DKMT_OUTDUPL_POINTER_SHAPE_TYPE_MASKED_COLOR   = 0x00000004
} D3DKMT_OUTDUPL_POINTER_SHAPE_TYPE;

typedef struct _D3DKMT_OUTDUPL_POINTER_SHAPE_INFO
{
    D3DKMT_OUTDUPL_POINTER_SHAPE_TYPE   Type;
    UINT                                Width;
    UINT                                Height;
    UINT                                Pitch;
    POINT                               HotSpot;
} D3DKMT_OUTDUPL_POINTER_SHAPE_INFO;

typedef struct _D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA
{
    D3DKMT_HANDLE                                                       hAdapter;
    D3DDDI_VIDEO_PRESENT_SOURCE_ID                                      VidPnSourceId;
    UINT                                                                BufferSizeSupplied;
    _Field_size_bytes_part_(BufferSizeSupplied, BufferSizeRequired) PVOID   pShapeBuffer;
    UINT                                                                BufferSizeRequired;
    D3DKMT_OUTDUPL_POINTER_SHAPE_INFO                                   ShapeInfo;
} D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA;

typedef struct _D3DKMT_OUTPUTDUPL_RELEASE_FRAME
{
    D3DKMT_HANDLE                   hAdapter;
    D3DDDI_VIDEO_PRESENT_SOURCE_ID  VidPnSourceId;
    UINT                            NextKeyMutexIdx;    // out : index of the next keyed mutex to use
} D3DKMT_OUTPUTDUPL_RELEASE_FRAME;


#define D3DKMT_MAX_OBJECTS_PER_HANDLE 3

#define D3DKMT_GDI_STYLE_HANDLE_DECORATION 0x2

typedef struct _D3DKMT_GETSHAREDRESOURCEADAPTERLUID
{
    D3DKMT_HANDLE hGlobalShare; // in : Shared resource handle
    HANDLE hNtHandle;           // in : Process's NT handle
    LUID AdapterLuid;           // out: adapter LUID
} D3DKMT_GETSHAREDRESOURCEADAPTERLUID;

typedef enum _D3DKMT_HYBRID_QUERY_STATE
{
    D3DKMT_HYBRID_QUERY_STATE_UNINITIALIZED,
    D3DKMT_HYBRID_QUERY_STATE_DISCRETE,
    D3DKMT_HYBRID_QUERY_STATE_INTEGRATED
} D3DKMT_HYBRID_QUERY_STATE;

typedef struct _D3DKMT_HYBRID_LIST
{
    D3DKMT_HYBRID_QUERY_STATE State;
} D3DKMT_HYBRID_LIST;

#if (DXGKDDI_INTERFACE_VERSION >= DXGKDDI_INTERFACE_VERSION_WDDM1_3)
typedef struct
{
    DXGK_MIRACAST_CHUNK_INFO ChunkInfo;
    UINT                     PrivateDriverDataSize; // Size of private data
    BYTE                     PrivateDriverData[1];  // Private data buffer
} D3DKMT_MIRACAST_CHUNK_DATA;

typedef enum
{
    MiracastStopped = 0,
    MiracastStartPending = 1,
    MiracastStarted = 2,
    MiracastStopPending = 3,
} D3DKMT_MIRACAST_DISPLAY_DEVICE_STATE;

typedef enum
{
    D3DKMT_MIRACAST_DEVICE_STATUS_SUCCESS                   = 0,
    D3DKMT_MIRACAST_DEVICE_STATUS_SUCCESS_NO_MONITOR        = 1,
    D3DKMT_MIRACAST_DEVICE_STATUS_PENDING                   = 2,
    D3DKMT_MIRACAST_DEVICE_STATUS_UNKOWN_ERROR              = 0x80000001,
    D3DKMT_MIRACAST_DEVICE_STATUS_GPU_RESOURCE_IN_USE       = 0x80000002,
    D3DKMT_MIRACAST_DEVICE_STATUS_DEVICE_ERROR              = 0x80000003,
    D3DKMT_MIRACAST_DEVICE_STATUS_UNKOWN_PAIRING            = 0x80000004,
    D3DKMT_MIRACAST_DEVICE_STATUS_REMOTE_SESSION            = 0x80000005,
    D3DKMT_MIRACAST_DEVICE_STATUS_DEVICE_NOT_FOUND          = 0x80000006,
    D3DKMT_MIRACAST_DEVICE_STATUS_DEVICE_NOT_STARTED        = 0x80000007,
    D3DKMT_MIRACAST_DEVICE_STATUS_INVALID_PARAMETER         = 0x80000008,
    D3DKMT_MIRACAST_DEVICE_STATUS_INSUFFICIENT_BANDWIDTH    = 0x80000009,
    D3DKMT_MIRACAST_DEVICE_STATUS_INSUFFICIENT_MEMORY       = 0x8000000A,
    D3DKMT_MIRACAST_DEVICE_STATUS_CANCELLED                 = 0x8000000B,
} D3DKMT_MIRACAST_DEVICE_STATUS;

typedef struct _D3DKMT_MIRACAST_DISPLAY_DEVICE_STATUS
{
    //
    // Miracast display device state.
    //
    D3DKMT_MIRACAST_DISPLAY_DEVICE_STATE State;
} D3DKMT_MIRACAST_DISPLAY_DEVICE_STATUS, *PD3DKMT_MIRACAST_DISPLAY_DEVICE_STATUS;

typedef struct _D3DKMT_MIRACAST_DISPLAY_DEVICE_CAPS
{
    BOOLEAN HdcpSupported;
    ULONG DefaultControlPort;
} D3DKMT_MIRACAST_DISPLAY_DEVICE_CAPS, *PD3DKMT_MIRACAST_DISPLAY_DEVICE_CAPS;

#if (DXGKDDI_INTERFACE_VERSION >= DXGKDDI_INTERFACE_VERSION_WDDM2_0)
typedef struct _D3DKMT_MIRACAST_DISPLAY_STOP_SESSIONS
{
    LUID AdapterLuid;
    D3DDDI_VIDEO_PRESENT_TARGET_ID TargetId;
    UINT StopReason;    
} D3DKMT_MIRACAST_DISPLAY_STOP_SESSIONS, *PD3DKMT_MIRACAST_DISPLAY_STOP_SESSIONS;
#endif // (DXGKDDI_INTERFACE_VERSION >= DXGKDDI_INTERFACE_VERSION_WDDM2_0)


#endif // (DXGKDDI_INTERFACE_VERSION >= DXGKDDI_INTERFACE_VERSION_WDDM1_3)

#if (DXGKDDI_INTERFACE_VERSION >= DXGKDDI_INTERFACE_VERSION_WDDM2_0)

typedef struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU
{
    D3DKMT_HANDLE           hDevice;                        // in: Handle to the device.
    UINT                    ObjectCount;                    // in: Number of objects to wait on.

    _Field_size_(ObjectCount)
    const D3DKMT_HANDLE*    ObjectHandleArray;              // in: Handle to monitored fence synchronization objects to wait on.

    _Field_size_(ObjectCount)
    const UINT64*           FenceValueArray;                // in: Fence values to be waited on.

    HANDLE                  hAsyncEvent;                    // in: Event to be signaled when the wait condition is satisfied.
                                                            // When set to NULL, the call will not return until the wait condition is satisfied.

    D3DDDI_WAITFORSYNCHRONIZATIONOBJECTFROMCPU_FLAGS Flags; // in: Flags that specify the wait mode.
} D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU;

typedef struct _D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU
{
    D3DKMT_HANDLE           hDevice;            // in: Handle to the device.
    UINT                    ObjectCount;        // in: Number of objects to signal.

    _Field_size_(ObjectCount)
    const D3DKMT_HANDLE*    ObjectHandleArray;  // in: Handle to monitored fence synchronization objects to signal.

    _Field_size_(ObjectCount)
    const UINT64*           FenceValueArray;    // in: Fence values to be signaled.

    D3DDDICB_SIGNALFLAGS    Flags;              // in: Specifies signal behavior.
} D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU;

typedef struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMGPU
{
    D3DKMT_HANDLE           hContext;                   // in: Specify the context that should be waiting.
    UINT                    ObjectCount;                // in: Number of object to wait on.

    _Field_size_(ObjectCount)
    const D3DKMT_HANDLE*    ObjectHandleArray;          // in: Handles to synchronization objects to wait on.

    union
    {
        _Field_size_(ObjectCount)
        const UINT64*       MonitoredFenceValueArray;   // in: monitored fence values to be waited.

        UINT64              FenceValue;                 // in: fence value to be waited.

        UINT64              Reserved[8];
    };
} D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMGPU;

typedef struct _D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMGPU
{
    D3DKMT_HANDLE           hContext;           // in: Identifies the context that the signal is being submitted to.
    UINT                    ObjectCount;        // in: Specifies the number of objects to signal.

    _Field_size_(ObjectCount)
    const D3DKMT_HANDLE*    ObjectHandleArray;  // in: Specifies the objects to signal.

    union
    {
        _Field_size_(ObjectCount)
        const UINT64*   MonitoredFenceValueArray; // in: monitored fence values to be signaled

        UINT64 Reserved[8];
    };
} D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMGPU;

typedef struct _D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMGPU2
{
    UINT                    ObjectCount;            // in: Specifies the number of objects to signal.

    _Field_size_(ObjectCount)
    const D3DKMT_HANDLE*    ObjectHandleArray;      // in: Specifies the objects to signal.

    D3DDDICB_SIGNALFLAGS    Flags;                  // in: Specifies signal behavior.

    ULONG                   BroadcastContextCount;  // in: Specifies the number of contexts to broadcast this signal to.

    _Field_size_(BroadcastContextCount)
    const D3DKMT_HANDLE*    BroadcastContextArray;  // in: Specifies context handles to broadcast to.

    union
    {
        UINT64              FenceValue;             // in: fence value to be signaled;

        HANDLE              CpuEventHandle;         // in: handle of a CPU event to be signaled if Flags.EnqueueCpuEvent flag is set.

        _Field_size_(ObjectCount)
        const UINT64*       MonitoredFenceValueArray; // in: monitored fence values to be signaled

        UINT64              Reserved[8];
    };
} D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMGPU2;

typedef struct _D3DKMT_CREATEPAGINGQUEUE
{
    D3DKMT_HANDLE               hDevice;                        // in: Handle to the device.
    D3DDDI_PAGINGQUEUE_PRIORITY Priority;                       // in: scheduling priority relative to other paging queues on this device
    D3DKMT_HANDLE               hPagingQueue;                   // out: handle to the paging queue used to synchronize paging operations for this device.
    D3DKMT_HANDLE               hSyncObject;                    // out: handle to the monitored fence object used to synchronize paging operations for this paging queue.
    VOID*                       FenceValueCPUVirtualAddress;    // out: Read-only mapping of the fence value for the CPU
    UINT                        PhysicalAdapterIndex;           // in: Physical adapter index (engine ordinal)
} D3DKMT_CREATEPAGINGQUEUE;

typedef struct _D3DKMT_EVICT
{
    D3DKMT_HANDLE               hDevice;            // in: Device that created the allocations
    UINT                        NumAllocations;     // in: number of allocation handles
    CONST D3DKMT_HANDLE*        AllocationList;     // in: an array of NumAllocations allocation handles
    D3DDDI_EVICT_FLAGS          Flags;              // in: eviction flags
    UINT64                      NumBytesToTrim;     // out: This value indicates how much to trim in order to satisfy the new budget.
} D3DKMT_EVICT;

typedef struct _D3DKMT_LOCK2
{
    D3DKMT_HANDLE       hDevice;            // in: Handle to the device.
    D3DKMT_HANDLE       hAllocation;        // in: allocation to lock
    D3DDDICB_LOCK2FLAGS Flags;              // in: Bit field defined by D3DDDI_LOCK2FLAGS
    PVOID               pData;              // out: Virtual address of the locked allocation
} D3DKMT_LOCK2;

typedef struct _D3DKMT_UNLOCK2
{
    D3DKMT_HANDLE           hDevice;        // in: Handle to the device.
    D3DKMT_HANDLE           hAllocation;    // in: allocation to unlock
} D3DKMT_UNLOCK2;

typedef struct _D3DKMT_INVALIDATECACHE
{
    D3DKMT_HANDLE   hDevice;
    D3DKMT_HANDLE   hAllocation;
    SIZE_T          Offset;
    SIZE_T          Length;
} D3DKMT_INVALIDATECACHE;

typedef struct _D3DKMT_FREEGPUVIRTUALADDRESS
{
    D3DKMT_HANDLE           hAdapter;                               // in: Handle to an adapter.
    D3DGPU_VIRTUAL_ADDRESS  BaseAddress;                            // in: Start of a virtual address range in bytes
    D3DGPU_SIZE_T           Size;                                   // in: Size of the virtual address range in bytes
} D3DKMT_FREEGPUVIRTUALADDRESS;

typedef struct _D3DKMT_UPDATEGPUVIRTUALADDRESS
{
    D3DKMT_HANDLE                               hDevice;
    D3DKMT_HANDLE                               hContext;
    D3DKMT_HANDLE                               hFenceObject;
    UINT                                        NumOperations;
    D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION*   Operations;
    UINT                                        Reserved0;
    UINT64                                      Reserved1;
    UINT64                                      FenceValue;
    union
    {
       struct
       {
           UINT  DoNotWait  :  1;
           UINT  Reserved   : 31;
       };
       UINT Value;
    } Flags;
} D3DKMT_UPDATEGPUVIRTUALADDRESS;

typedef struct _D3DKMT_CREATECONTEXTVIRTUAL
{
    D3DKMT_HANDLE               hDevice;                        // in:
    UINT                        NodeOrdinal;                    // in:
    UINT                        EngineAffinity;                 // in:
    D3DDDI_CREATECONTEXTFLAGS   Flags;                          // in:
    VOID*                       pPrivateDriverData;             // in:
    UINT                        PrivateDriverDataSize;          // in:
    D3DKMT_CLIENTHINT           ClientHint;                     // in:  Hints which client is creating the context
    D3DKMT_HANDLE               hContext;                       // out:
} D3DKMT_CREATECONTEXTVIRTUAL;

typedef struct _D3DKMT_SUBMITCOMMANDFLAGS
{
    UINT    NullRendering           :  1;  // 0x00000001
    UINT    PresentRedirected       :  1;  // 0x00000002
    UINT    Reserved                : 30;  // 0xFFFFFFFC
} D3DKMT_SUBMITCOMMANDFLAGS;

typedef struct _D3DKMT_SUBMITCOMMAND
{
    D3DGPU_VIRTUAL_ADDRESS      Commands;
    UINT                        CommandLength;
    D3DKMT_SUBMITCOMMANDFLAGS   Flags;
    ULONGLONG                   PresentHistoryToken;                            // in: Present history token for redirected present calls
    UINT                        BroadcastContextCount;
    D3DKMT_HANDLE               BroadcastContext[D3DDDI_MAX_BROADCAST_CONTEXT];
    VOID*                       pPrivateDriverData;
    UINT                        PrivateDriverDataSize;
    UINT                        NumPrimaries;
    D3DKMT_HANDLE               WrittenPrimaries[D3DDDI_MAX_WRITTEN_PRIMARIES];
    UINT                        NumHistoryBuffers;
    D3DKMT_HANDLE*              HistoryBufferArray;
} D3DKMT_SUBMITCOMMAND;

typedef struct _D3DKMT_QUERYVIDEOMEMORYINFO
{
    HANDLE                      hProcess;                   // in,opt: A handle to a process. If NULL, the current process is used.
                                                            //         The process handle must be opened with PROCESS_QUERY_INFORMATION privileges
    D3DKMT_HANDLE               hAdapter;                   // in : The adapter to query for this process
    D3DKMT_MEMORY_SEGMENT_GROUP MemorySegmentGroup;         // in : The memory segment group to query.
    UINT64                      Budget;                     // out: Total memory the application may use
    UINT64                      CurrentUsage;               // out: Current memory usage of the device
    UINT64                      CurrentReservation;         // out: Current reservation of the device
    UINT64                      AvailableForReservation;    // out: Total that the device may reserve
    UINT                        PhysicalAdapterIndex;       // in : Zero based physical adapter index in the LDA configuration.
} D3DKMT_QUERYVIDEOMEMORYINFO;

typedef struct _D3DKMT_CHANGEVIDEOMMEMORYRESERVATION
{
    HANDLE                      hProcess;                   // in,opt: A handle to a process. If NULL, the current process is used.
                                                            //         The process handle must be opened with PROCESS_SET_INFORMATION privileges
    D3DKMT_HANDLE               hAdapter;                   // in : The adapter to change reservation for.
    D3DKMT_MEMORY_SEGMENT_GROUP MemorySegmentGroup;         // in : The memory segment group to change reservation for.
    UINT64                      Reservation;                // in : Desired reservation in the range between 0 and AvailableForReservation returned by QueryVideoMemoryInfo.
    UINT                        PhysicalAdapterIndex;       // in : Zero based physical adapter index in the LDA configuration.
} D3DKMT_CHANGEVIDEOMEMORYRESERVATION;

typedef struct _D3DKMT_SETSTABLEPOWERSTATE
{
    D3DKMT_HANDLE   hAdapter;   // in: The adapter to enable or disable stable power for
    BOOL            Enabled;    // in: Whether or not stable power is being requested on or off.
} D3DKMT_SETSTABLEPOWERSTATE;


typedef struct _D3DKMT_TRIMNOTIFICATION
{
    VOID*                              Context;         // In: context at Register
    D3DDDI_TRIMRESIDENCYSET_FLAGS      Flags;           // In: trim flags
    UINT64                             NumBytesToTrim;  // In: When TrimToBudget flag is set, this value indicates how much VidMm
                                                        // requests the app to trim to fit in the new budget.
} D3DKMT_TRIMNOTIFICATION;

typedef VOID (APIENTRY *PFND3DKMT_TRIMNOTIFICATIONCALLBACK)(_Inout_ D3DKMT_TRIMNOTIFICATION*);

typedef struct _D3DKMT_REGISTERTRIMNOTIFICATION
{
    LUID                               AdapterLuid;
    D3DKMT_HANDLE                      hDevice;
    PFND3DKMT_TRIMNOTIFICATIONCALLBACK Callback;
    VOID*                              Context;  // In: callback context
    VOID*                              Handle;   // Out: for Unregister
} D3DKMT_REGISTERTRIMNOTIFICATION;

typedef struct _D3DKMT_UNREGISTERTRIMNOTIFICATION
{
    VOID*                              Handle;   // In: Handle returned from RegisterTrimNotification,
                                                 // or NULL to unregister all Callback instances.
    PFND3DKMT_TRIMNOTIFICATIONCALLBACK Callback; // In: When Handle is NULL, this parameter specifies that all registered instances of Callback
                                                 // should be unregistered. This unregistration method should only be used
                                                 // in DLL unload scenarios when the DLL being unloaded cannot guarantee that
                                                 // all trim callbacks are unregistered through their handles.
} D3DKMT_UNREGISTERTRIMNOTIFICATION;

typedef struct _D3DKMT_BUDGETCHANGENOTIFICATION
{
    VOID*                               Context;    // In: context at Register
    UINT64                              Budget;     // In: new budget
} D3DKMT_BUDGETCHANGENOTIFICATION;

typedef VOID (APIENTRY *PFND3DKMT_BUDGETCHANGENOTIFICATIONCALLBACK)(_In_ D3DKMT_BUDGETCHANGENOTIFICATION*);

typedef struct _D3DKMT_REGISTERBUDGETCHANGENOTIFICATION
{
    D3DKMT_HANDLE                      hDevice;
    PFND3DKMT_BUDGETCHANGENOTIFICATIONCALLBACK Callback;
    VOID*                              Context;  // In: callback context
    VOID*                              Handle;   // Out: for Unregister
} D3DKMT_REGISTERBUDGETCHANGENOTIFICATION;

typedef struct _D3DKMT_UNREGISTERBUDGETCHANGENOTIFICATION
{
    VOID*                              Handle;   // In: from register
} D3DKMT_UNREGISTERBUDGETCHANGENOTIFICATION;

typedef struct _D3DKMT_QUERYVIDPNEXCLUSIVEOWNERSHIP
{
    HANDLE                          hProcess;       // In: Process handle
    HWND                            hWindow;        // In: Window handle
    D3DDDI_VIDEO_PRESENT_SOURCE_ID  VidPnSourceId;  // Out: VidPn source ID
    LUID                            AdapterLuid;    // Out: Adapter LUID
    D3DKMT_VIDPNSOURCEOWNER_TYPE    OwnerType;      // Out: Owner Type
} D3DKMT_QUERYVIDPNEXCLUSIVEOWNERSHIP;


typedef enum _D3DKMT_DEVICE_ERROR_REASON {
    D3DKMT_DEVICE_ERROR_REASON_GENERIC           = 0x80000000,
    D3DKMT_DEVICE_ERROR_REASON_DRIVER_ERROR      = 0x80000006,
} D3DKMT_DEVICE_ERROR_REASON; 

typedef struct _D3DKMT_MARKDEVICEASERROR
{
    D3DKMT_HANDLE              hDevice; // in: Device handle
    D3DKMT_DEVICE_ERROR_REASON Reason;  // in: Status code
} D3DKMT_MARKDEVICEASERROR;

typedef struct _D3DKMT_FLUSHHEAPTRANSITIONS
{
    D3DKMT_HANDLE              hAdapter;
} D3DKMT_FLUSHHEAPTRANSITIONS;

typedef struct _D3DKMT_QUERYPROCESSOFFERINFO
{
    _In_ ULONG cbSize;
    _In_ HANDLE hProcess;
    _Out_ UINT64 DecommitUniqueness;
    _Out_ UINT64 DecommittableBytes;
} D3DKMT_QUERYPROCESSOFFERINFO;

typedef union _D3DKMT_TRIMPROCESSCOMMITMENT_FLAGS
{
    struct
    {
        UINT Lazy           :  1;
        UINT OnlyRepurposed :  1;
        UINT Reserved       : 30;
    };
    UINT Value;
} D3DKMT_TRIMPROCESSCOMMITMENT_FLAGS;

typedef struct _D3DKMT_TRIMPROCESSCOMMITMENT
{
    _In_ ULONG cbSize;
    _In_ HANDLE hProcess;
    _In_ D3DKMT_TRIMPROCESSCOMMITMENT_FLAGS Flags;
    _In_ UINT64 DecommitRequested;
    _Out_ UINT64 NumBytesDecommitted;
} D3DKMT_TRIMPROCESSCOMMITMENT;


#endif // (DXGKDDI_INTERFACE_VERSION >= DXGKDDI_INTERFACE_VERSION_WDDM2_0)

#endif // (DXGKDDI_INTERFACE_VERSION >= DXGKDDI_INTERFACE_VERSION_WIN8)

#if (DXGKDDI_INTERFACE_VERSION >= DXGKDDI_INTERFACE_VERSION_WDDM2_1)
typedef union _D3DKMT_SETFSEBLOCKFLAGS
{
    struct
    {
        UINT Block : 1;
        UINT Reserved : 31;
    };
    UINT Value;
} D3DKMT_SETFSEBLOCKFLAGS;

typedef struct _D3DKMT_SETFSEBLOCK
{
    LUID                            AdapterLuid;
    D3DKMT_HANDLE                   hAdapter;
    D3DDDI_VIDEO_PRESENT_SOURCE_ID  VidPnSourceId;
    D3DKMT_SETFSEBLOCKFLAGS         Flags;
} D3DKMT_SETFSEBLOCK;

typedef union _D3DKMT_QUERYFSEFLAGS
{
    struct
    {
        UINT Blocked : 1;
        UINT Reserved : 31;
    };
    UINT Value;
} D3DKMT_QUERYFSEBLOCKFLAGS;

typedef struct _D3DKMT_QUERYFSEBLOCK
{
    LUID                            AdapterLuid;
    D3DKMT_HANDLE                   hAdapter;
    D3DDDI_VIDEO_PRESENT_SOURCE_ID  VidPnSourceId;
    D3DKMT_QUERYFSEBLOCKFLAGS       Flags;
} D3DKMT_QUERYFSEBLOCK;
#endif // (DXGKDDI_INTERFACE_VERSION >= DXGKDDI_INTERFACE_VERSION_WDDM2_1)


typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_CREATEALLOCATION)(_Inout_ D3DKMT_CREATEALLOCATION*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_CREATEALLOCATION2)(_Inout_ D3DKMT_CREATEALLOCATION*); // _ADVSCH_
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_QUERYRESOURCEINFO)(_Inout_ D3DKMT_QUERYRESOURCEINFO*);
#if (DXGKDDI_INTERFACE_VERSION >= DXGKDDI_INTERFACE_VERSION_WIN8)
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_QUERYRESOURCEINFOFROMNTHANDLE)(_Inout_ D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE*);

typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_SHAREOBJECTS)(
    _In_range_(1, D3DKMT_MAX_OBJECTS_PER_HANDLE) UINT   cObjects,
    _In_reads_(cObjects) CONST D3DKMT_HANDLE *          hObjects,
    _In_ POBJECT_ATTRIBUTES                             pObjectAttributes,
    _In_ DWORD                                          dwDesiredAccess,
    _Out_ HANDLE *                                      phSharedNtHandle
    );
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_OPENNTHANDLEFROMNAME)(_Inout_ D3DKMT_OPENNTHANDLEFROMNAME*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_OPENRESOURCEFROMNTHANDLE)(_Inout_ D3DKMT_OPENRESOURCEFROMNTHANDLE*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_OPENSYNCOBJECTFROMNTHANDLE)(_Inout_ D3DKMT_OPENSYNCOBJECTFROMNTHANDLE*);
#endif
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_OPENRESOURCE)(_Inout_ D3DKMT_OPENRESOURCE*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_OPENRESOURCE2)(_Inout_ D3DKMT_OPENRESOURCE*); // _ADVSCH_
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_DESTROYALLOCATION)(_In_ CONST D3DKMT_DESTROYALLOCATION*);

#if (DXGKDDI_INTERFACE_VERSION >= DXGKDDI_INTERFACE_VERSION_WDDM2_0)
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_DESTROYALLOCATION2)(_In_ CONST D3DKMT_DESTROYALLOCATION2*);
#endif // DXGKDDI_INTERFACE_VERSION_WDDM2_0

typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_SETALLOCATIONPRIORITY)(_In_ CONST D3DKMT_SETALLOCATIONPRIORITY*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_QUERYALLOCATIONRESIDENCY)(_In_ CONST D3DKMT_QUERYALLOCATIONRESIDENCY*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_CREATEDEVICE)(_Inout_ D3DKMT_CREATEDEVICE*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_DESTROYDEVICE)(_In_ CONST D3DKMT_DESTROYDEVICE*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_CREATECONTEXT)(_Inout_ D3DKMT_CREATECONTEXT*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_DESTROYCONTEXT)(_In_ CONST D3DKMT_DESTROYCONTEXT*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_CREATESYNCHRONIZATIONOBJECT)(_Inout_ D3DKMT_CREATESYNCHRONIZATIONOBJECT*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_CREATESYNCHRONIZATIONOBJECT2)(_Inout_ D3DKMT_CREATESYNCHRONIZATIONOBJECT2*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_OPENSYNCHRONIZATIONOBJECT)(_Inout_ D3DKMT_OPENSYNCHRONIZATIONOBJECT*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_DESTROYSYNCHRONIZATIONOBJECT)(_In_ CONST D3DKMT_DESTROYSYNCHRONIZATIONOBJECT*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_WAITFORSYNCHRONIZATIONOBJECT)(_In_ D3DKMT_WAITFORSYNCHRONIZATIONOBJECT*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_WAITFORSYNCHRONIZATIONOBJECT2)(_In_ D3DKMT_WAITFORSYNCHRONIZATIONOBJECT2*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_SIGNALSYNCHRONIZATIONOBJECT)(_In_ CONST D3DKMT_SIGNALSYNCHRONIZATIONOBJECT*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_SIGNALSYNCHRONIZATIONOBJECT2)(_In_ CONST D3DKMT_SIGNALSYNCHRONIZATIONOBJECT2*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_LOCK)(_Inout_ D3DKMT_LOCK*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_UNLOCK)(_In_ CONST D3DKMT_UNLOCK*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_GETDISPLAYMODELIST)(_Inout_ D3DKMT_GETDISPLAYMODELIST*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_SETDISPLAYMODE)(_Inout_ CONST D3DKMT_SETDISPLAYMODE*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_GETMULTISAMPLEMETHODLIST)(_Inout_ D3DKMT_GETMULTISAMPLEMETHODLIST*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_PRESENT)(_Inout_ D3DKMT_PRESENT*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_RENDER)(_Inout_ D3DKMT_RENDER*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_GETRUNTIMEDATA)(_Inout_ CONST D3DKMT_GETRUNTIMEDATA*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_QUERYADAPTERINFO)(_Inout_ CONST D3DKMT_QUERYADAPTERINFO*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_OPENADAPTERFROMHDC)(_Inout_ D3DKMT_OPENADAPTERFROMHDC*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_OPENADAPTERFROMGDIDISPLAYNAME)(_Inout_ D3DKMT_OPENADAPTERFROMGDIDISPLAYNAME*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_OPENADAPTERFROMDEVICENAME)(_Inout_ D3DKMT_OPENADAPTERFROMDEVICENAME*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_CLOSEADAPTER)(_In_ CONST D3DKMT_CLOSEADAPTER*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_GETSHAREDPRIMARYHANDLE)(_Inout_ D3DKMT_GETSHAREDPRIMARYHANDLE*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_ESCAPE)(_In_ CONST D3DKMT_ESCAPE*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_SETVIDPNSOURCEOWNER)(_In_ CONST D3DKMT_SETVIDPNSOURCEOWNER*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_GETPRESENTHISTORY)(_Inout_ D3DKMT_GETPRESENTHISTORY*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_CREATEOVERLAY)(_Inout_ D3DKMT_CREATEOVERLAY*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_UPDATEOVERLAY)(_In_ CONST D3DKMT_UPDATEOVERLAY*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_FLIPOVERLAY)(_In_ CONST D3DKMT_FLIPOVERLAY*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_DESTROYOVERLAY)(_In_ CONST D3DKMT_DESTROYOVERLAY*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_WAITFORVERTICALBLANKEVENT)(_In_ CONST D3DKMT_WAITFORVERTICALBLANKEVENT*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_SETGAMMARAMP)(_In_ CONST D3DKMT_SETGAMMARAMP*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_GETDEVICESTATE)(_Inout_ D3DKMT_GETDEVICESTATE*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_CREATEDCFROMMEMORY)(_Inout_ D3DKMT_CREATEDCFROMMEMORY*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_DESTROYDCFROMMEMORY)(_In_ CONST D3DKMT_DESTROYDCFROMMEMORY*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_SETCONTEXTSCHEDULINGPRIORITY)(_In_ CONST D3DKMT_SETCONTEXTSCHEDULINGPRIORITY*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_GETCONTEXTSCHEDULINGPRIORITY)(_Inout_ D3DKMT_GETCONTEXTSCHEDULINGPRIORITY*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_SETPROCESSSCHEDULINGPRIORITYCLASS)(_In_ HANDLE, _In_ D3DKMT_SCHEDULINGPRIORITYCLASS);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_GETPROCESSSCHEDULINGPRIORITYCLASS)(_In_ HANDLE, _Out_ D3DKMT_SCHEDULINGPRIORITYCLASS*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_RELEASEPROCESSVIDPNSOURCEOWNERS)(_In_ HANDLE);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_GETSCANLINE)(_Inout_ D3DKMT_GETSCANLINE*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_CHANGESURFACEPOINTER)(_In_ CONST D3DKMT_CHANGESURFACEPOINTER*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_SETQUEUEDLIMIT)(_In_ CONST D3DKMT_SETQUEUEDLIMIT*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_POLLDISPLAYCHILDREN)(_In_ CONST D3DKMT_POLLDISPLAYCHILDREN*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_INVALIDATEACTIVEVIDPN)(_In_ CONST D3DKMT_INVALIDATEACTIVEVIDPN*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_CHECKOCCLUSION)(_In_ CONST D3DKMT_CHECKOCCLUSION*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_WAITFORIDLE)(_In_ CONST D3DKMT_WAITFORIDLE*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_CHECKMONITORPOWERSTATE)(_In_ CONST D3DKMT_CHECKMONITORPOWERSTATE*);
typedef _Check_return_ BOOLEAN  (APIENTRY *PFND3DKMT_CHECKEXCLUSIVEOWNERSHIP)();
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_CHECKVIDPNEXCLUSIVEOWNERSHIP)(_In_ CONST D3DKMT_CHECKVIDPNEXCLUSIVEOWNERSHIP*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_SETDISPLAYPRIVATEDRIVERFORMAT)(_In_ CONST D3DKMT_SETDISPLAYPRIVATEDRIVERFORMAT*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_SHAREDPRIMARYLOCKNOTIFICATION)(_In_ CONST D3DKMT_SHAREDPRIMARYLOCKNOTIFICATION*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_SHAREDPRIMARYUNLOCKNOTIFICATION)(_In_ CONST D3DKMT_SHAREDPRIMARYUNLOCKNOTIFICATION*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_CREATEKEYEDMUTEX)(_Inout_ D3DKMT_CREATEKEYEDMUTEX*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_OPENKEYEDMUTEX)(_Inout_ D3DKMT_OPENKEYEDMUTEX*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_DESTROYKEYEDMUTEX)(_In_ CONST D3DKMT_DESTROYKEYEDMUTEX*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_ACQUIREKEYEDMUTEX)(_Inout_ D3DKMT_ACQUIREKEYEDMUTEX*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_RELEASEKEYEDMUTEX)(_Inout_ D3DKMT_RELEASEKEYEDMUTEX*);
#if (DXGKDDI_INTERFACE_VERSION >= DXGKDDI_INTERFACE_VERSION_WIN8)
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_CREATEKEYEDMUTEX2)(_Inout_ D3DKMT_CREATEKEYEDMUTEX2*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_OPENKEYEDMUTEX2)(_Inout_ D3DKMT_OPENKEYEDMUTEX2*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_ACQUIREKEYEDMUTEX2)(_Inout_ D3DKMT_ACQUIREKEYEDMUTEX2*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_RELEASEKEYEDMUTEX2)(_Inout_ D3DKMT_RELEASEKEYEDMUTEX2*);
#endif
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_CONFIGURESHAREDRESOURCE)(_In_ D3DKMT_CONFIGURESHAREDRESOURCE*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_GETOVERLAYSTATE)(_Inout_ D3DKMT_GETOVERLAYSTATE*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_CHECKSHAREDRESOURCEACCESS)(_In_ CONST D3DKMT_CHECKSHAREDRESOURCEACCESS*);
#if (DXGKDDI_INTERFACE_VERSION >= DXGKDDI_INTERFACE_VERSION_WIN8)
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_OFFERALLOCATIONS)(_In_ CONST D3DKMT_OFFERALLOCATIONS*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_RECLAIMALLOCATIONS)(_Inout_ CONST D3DKMT_RECLAIMALLOCATIONS*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_CREATEOUTPUTDUPL)(_In_ CONST D3DKMT_CREATE_OUTPUTDUPL*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_DESTROYOUTPUTDUPL)(_In_ CONST D3DKMT_DESTROY_OUTPUTDUPL*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_OUTPUTDUPLGETFRAMEINFO)(_Inout_ D3DKMT_OUTPUTDUPL_GET_FRAMEINFO*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_OUTPUTDUPLGETMETADATA)(_Inout_ D3DKMT_OUTPUTDUPL_METADATA*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_OUTPUTDUPLGETPOINTERSHAPEDATA)(_Inout_ D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_OUTPUTDUPLRELEASEFRAME)(_In_ D3DKMT_OUTPUTDUPL_RELEASE_FRAME*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_OUTPUTDUPLPRESENT)(_In_ CONST D3DKMT_OUTPUTDUPLPRESENT*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_ENUMADAPTERS)(_Inout_ CONST D3DKMT_ENUMADAPTERS*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_ENUMADAPTERS2)(_Inout_ CONST D3DKMT_ENUMADAPTERS2*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_OPENADAPTERFROMLUID)(_Inout_ D3DKMT_OPENADAPTERFROMLUID*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_QUERYREMOTEVIDPNSOURCEFROMGDIDISPLAYNAME)(_Inout_ D3DKMT_QUERYREMOTEVIDPNSOURCEFROMGDIDISPLAYNAME*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_SETVIDPNSOURCEOWNER1)(_In_ CONST D3DKMT_SETVIDPNSOURCEOWNER1*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_PINDIRECTFLIPRESOURCES)(_In_ CONST D3DKMT_PINDIRECTFLIPRESOURCES*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_UNPINDIRECTFLIPRESOURCES)(_In_ CONST D3DKMT_UNPINDIRECTFLIPRESOURCES*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_WAITFORVERTICALBLANKEVENT2)(_In_ CONST D3DKMT_WAITFORVERTICALBLANKEVENT2*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_GETDWMVERTICALBLANKEVENT)(_In_ CONST D3DKMT_GETVERTICALBLANKEVENT*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_SETSYNCREFRESHCOUNTWAITTARGET)(_In_ CONST D3DKMT_SETSYNCREFRESHCOUNTWAITTARGET*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_SETCONTEXTINPROCESSSCHEDULINGPRIORITY)(_In_ CONST D3DKMT_SETCONTEXTINPROCESSSCHEDULINGPRIORITY*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_GETCONTEXTINPROCESSSCHEDULINGPRIORITY)(_Inout_ D3DKMT_GETCONTEXTINPROCESSSCHEDULINGPRIORITY*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_PRESENTMULTIPLANEOVERLAY)(_In_ CONST D3DKMT_PRESENT_MULTIPLANE_OVERLAY*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_GETSHAREDRESOURCEADAPTERLUID)(_Inout_ D3DKMT_GETSHAREDRESOURCEADAPTERLUID*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_SETSTEREOENABLED)(_In_ BOOL);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_QUERYHYBRIDLISTVALUE)(_Out_ D3DKMT_HYBRID_LIST*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_SETHYBRIDLISTVVALUE)(_Inout_ D3DKMT_HYBRID_LIST*);
#endif
#if (DXGKDDI_INTERFACE_VERSION >= DXGKDDI_INTERFACE_VERSION_WDDM1_3)
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_CHECKMULTIPLANEOVERLAYSUPPORT)(_Inout_ D3DKMT_CHECKMULTIPLANEOVERLAYSUPPORT*);
#endif

#if (DXGKDDI_INTERFACE_VERSION >= DXGKDDI_INTERFACE_VERSION_WDDM2_0)
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_MAKERESIDENT)(_Inout_ D3DDDI_MAKERESIDENT*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_EVICT)(_Inout_ D3DKMT_EVICT*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU)(_In_ CONST D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU)(_In_ CONST D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMGPU)(_In_ CONST D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMGPU*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMGPU)(_In_ CONST D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMGPU*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMGPU2)(_In_ CONST D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMGPU2*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_CREATEPAGINGQUEUE)(_Inout_ D3DKMT_CREATEPAGINGQUEUE*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_DESTROYPAGINGQUEUE)(_Inout_ D3DDDI_DESTROYPAGINGQUEUE*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_LOCK2)(_Inout_ D3DKMT_LOCK2*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_UNLOCK2)(_In_ CONST D3DKMT_UNLOCK2*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_INVALIDATECACHE)(_In_ const D3DKMT_INVALIDATECACHE*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_RESERVEGPUVIRTUALADDRESS)(_Inout_ D3DDDI_RESERVEGPUVIRTUALADDRESS*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_MAPGPUVIRTUALADDRESS)(_Inout_ D3DDDI_MAPGPUVIRTUALADDRESS*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_FREEGPUVIRTUALADDRESS)(_In_ CONST D3DKMT_FREEGPUVIRTUALADDRESS*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_UPDATEGPUVIRTUALADDRESS)(_In_ CONST D3DKMT_UPDATEGPUVIRTUALADDRESS*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_GETRESOURCEPRESENTPRIVATEDRIVERDATA)(_Inout_ D3DDDI_GETRESOURCEPRESENTPRIVATEDRIVERDATA*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_CREATECONTEXTVIRTUAL)(_Inout_ D3DKMT_CREATECONTEXTVIRTUAL*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_SUBMITCOMMAND)(_In_ CONST D3DKMT_SUBMITCOMMAND*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_OPENSYNCOBJECTFROMNTHANDLE2)(_Inout_ D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_OPENSYNCOBJECTNTHANDLEFROMNAME)(_Inout_ D3DKMT_OPENSYNCOBJECTNTHANDLEFROMNAME*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_QUERYVIDEOMEMORYINFO)(_Inout_ D3DKMT_QUERYVIDEOMEMORYINFO*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_CHANGEVIDEOMEMORYRESERVATION)(_In_ CONST D3DKMT_CHANGEVIDEOMEMORYRESERVATION*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_REGISTERTRIMNOTIFICATION)(_Inout_ D3DKMT_REGISTERTRIMNOTIFICATION*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_UNREGISTERTRIMNOTIFICATION)(_Inout_ D3DKMT_UNREGISTERTRIMNOTIFICATION*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_REGISTERBUDGETCHANGENOTIFICATION)(_Inout_ D3DKMT_REGISTERBUDGETCHANGENOTIFICATION*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_UNREGISTERBUDGETCHANGENOTIFICATION)(_Inout_ D3DKMT_UNREGISTERBUDGETCHANGENOTIFICATION*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_CREATESWAPCHAIN)(_Inout_ D3DKMT_CREATESWAPCHAIN*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_OPENSWAPCHAIN)(_Inout_ D3DKMT_OPENSWAPCHAIN*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_ACQUIRESWAPCHAIN)(_Inout_ D3DKMT_ACQUIRESWAPCHAIN*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_RELEASESWAPCHAIN)(_Inout_ D3DKMT_RELEASESWAPCHAIN*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_GETSETSWAPCHAINMETADATA)(_In_ D3DKMT_GETSETSWAPCHAINMETADATA*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_ABANDONSWAPCHAIN)(_In_ D3DKMT_ABANDONSWAPCHAIN*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_SETDODINDIRECTSWAPCHAIN)(_In_ D3DKMT_SETDODINDIRECTSWAPCHAIN*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_CHECKMULTIPLANEOVERLAYSUPPORT2)(_Inout_ D3DKMT_CHECKMULTIPLANEOVERLAYSUPPORT2*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_PRESENTMULTIPLANEOVERLAY2)(_In_ CONST D3DKMT_PRESENT_MULTIPLANE_OVERLAY2*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_RECLAIMALLOCATIONS2)(_Inout_ D3DKMT_RECLAIMALLOCATIONS2*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_SETSTABLEPOWERSTATE)(_In_ CONST D3DKMT_SETSTABLEPOWERSTATE*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_QUERYCLOCKCALIBRATION)(_Inout_ D3DKMT_QUERYCLOCKCALIBRATION*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_QUERYVIDPNEXCLUSIVEOWNERSHIP)(_Inout_ D3DKMT_QUERYVIDPNEXCLUSIVEOWNERSHIP*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_ADJUSTFULLSCREENGAMMA)(_In_ D3DKMT_ADJUSTFULLSCREENGAMMA*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_SETVIDPNSOURCEHWPROTECTION)(_In_ D3DKMT_SETVIDPNSOURCEHWPROTECTION*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_MARKDEVICEASERROR)(_In_ D3DKMT_MARKDEVICEASERROR*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_FLUSHHEAPTRANSITIONS)(_In_ D3DKMT_FLUSHHEAPTRANSITIONS*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_SETHWPROTECTIONTEARDOWNRECOVERY)(_In_ D3DKMT_SETHWPROTECTIONTEARDOWNRECOVERY*);
#endif

#if (DXGKDDI_INTERFACE_VERSION >= DXGKDDI_INTERFACE_VERSION_WDDM2_1)
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_QUERYPROCESSOFFERINFO)(_Inout_ D3DKMT_QUERYPROCESSOFFERINFO*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_TRIMPROCESSCOMMITMENT)(_Inout_ D3DKMT_TRIMPROCESSCOMMITMENT*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_UPDATEALLOCATIONPROPERTY)(_Inout_ D3DDDI_UPDATEALLOCPROPERTY*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_CHECKMULTIPLANEOVERLAYSUPPORT3)(_Inout_ D3DKMT_CHECKMULTIPLANEOVERLAYSUPPORT3*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_PRESENTMULTIPLANEOVERLAY3)(_In_ CONST D3DKMT_PRESENT_MULTIPLANE_OVERLAY3*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_SETFSEBLOCK)(_In_ CONST D3DKMT_SETFSEBLOCK*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_QUERYFSEBLOCK)(_Inout_ D3DKMT_QUERYFSEBLOCK*);
#endif

#if !defined(D3DKMDT_SPECIAL_MULTIPLATFORM_TOOL)

#ifdef __cplusplus
extern "C"
{
#endif

EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTCreateAllocation(_Inout_ D3DKMT_CREATEALLOCATION*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTCreateAllocation2(_Inout_ D3DKMT_CREATEALLOCATION*); // _ADVSCH_
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTQueryResourceInfo(_Inout_ D3DKMT_QUERYRESOURCEINFO*);
#if (DXGKDDI_INTERFACE_VERSION >= DXGKDDI_INTERFACE_VERSION_WIN8)
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTQueryResourceInfoFromNtHandle(_Inout_ D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE*);

EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTShareObjects(
    _In_range_(1, D3DKMT_MAX_OBJECTS_PER_HANDLE) UINT   cObjects,
    _In_reads_(cObjects) CONST D3DKMT_HANDLE *          hObjects,
    _In_ POBJECT_ATTRIBUTES                             pObjectAttributes,
    _In_ DWORD                                          dwDesiredAccess,
    _Out_ HANDLE *                                      phSharedNtHandle
    );

EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTOpenNtHandleFromName(_Inout_ D3DKMT_OPENNTHANDLEFROMNAME*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTOpenResourceFromNtHandle(_Inout_ D3DKMT_OPENRESOURCEFROMNTHANDLE*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTOpenSyncObjectFromNtHandle(_Inout_ D3DKMT_OPENSYNCOBJECTFROMNTHANDLE*);
#endif
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTOpenResource(_Inout_ D3DKMT_OPENRESOURCE*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTOpenResource2(_Inout_ D3DKMT_OPENRESOURCE*); // _ADVSCH_
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTDestroyAllocation(_In_ CONST D3DKMT_DESTROYALLOCATION*);

#if (DXGKDDI_INTERFACE_VERSION >= DXGKDDI_INTERFACE_VERSION_WDDM2_0)
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTDestroyAllocation2(_In_ CONST D3DKMT_DESTROYALLOCATION2*);
#endif // DXGKDDI_INTERFACE_VERSION_WDDM2_0

EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTSetAllocationPriority(_In_ CONST D3DKMT_SETALLOCATIONPRIORITY*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTQueryAllocationResidency(_In_ CONST D3DKMT_QUERYALLOCATIONRESIDENCY*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTCreateDevice(_Inout_ D3DKMT_CREATEDEVICE*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTDestroyDevice(_In_ CONST D3DKMT_DESTROYDEVICE*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTCreateContext(_Inout_ D3DKMT_CREATECONTEXT*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTDestroyContext(_In_ CONST D3DKMT_DESTROYCONTEXT*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTCreateSynchronizationObject(_Inout_ D3DKMT_CREATESYNCHRONIZATIONOBJECT*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTCreateSynchronizationObject2(_Inout_ D3DKMT_CREATESYNCHRONIZATIONOBJECT2*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTOpenSynchronizationObject(_Inout_ D3DKMT_OPENSYNCHRONIZATIONOBJECT*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTDestroySynchronizationObject(_In_ CONST D3DKMT_DESTROYSYNCHRONIZATIONOBJECT*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTWaitForSynchronizationObject(_In_ CONST D3DKMT_WAITFORSYNCHRONIZATIONOBJECT*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTWaitForSynchronizationObject2(_In_ CONST D3DKMT_WAITFORSYNCHRONIZATIONOBJECT2*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTSignalSynchronizationObject(_In_ CONST D3DKMT_SIGNALSYNCHRONIZATIONOBJECT*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTSignalSynchronizationObject2(_In_ CONST D3DKMT_SIGNALSYNCHRONIZATIONOBJECT2*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTLock(_Inout_ D3DKMT_LOCK*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTUnlock(_In_ CONST D3DKMT_UNLOCK*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTGetDisplayModeList(_Inout_ D3DKMT_GETDISPLAYMODELIST*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTSetDisplayMode(_Inout_ CONST D3DKMT_SETDISPLAYMODE*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTGetMultisampleMethodList(_Inout_ D3DKMT_GETMULTISAMPLEMETHODLIST*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTPresent(_Inout_ D3DKMT_PRESENT*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTRender(_Inout_ D3DKMT_RENDER*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTGetRuntimeData(_Inout_ CONST D3DKMT_GETRUNTIMEDATA*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTQueryAdapterInfo(_Inout_ CONST D3DKMT_QUERYADAPTERINFO*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTOpenAdapterFromHdc(_Inout_ D3DKMT_OPENADAPTERFROMHDC*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTOpenAdapterFromGdiDisplayName(_Inout_ D3DKMT_OPENADAPTERFROMGDIDISPLAYNAME*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTOpenAdapterFromDeviceName(_Inout_ D3DKMT_OPENADAPTERFROMDEVICENAME*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTCloseAdapter(_In_ CONST D3DKMT_CLOSEADAPTER*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTGetSharedPrimaryHandle(_Inout_ D3DKMT_GETSHAREDPRIMARYHANDLE*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTEscape(_In_ CONST D3DKMT_ESCAPE*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTSetVidPnSourceOwner(_In_ CONST D3DKMT_SETVIDPNSOURCEOWNER*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTGetPresentHistory(_Inout_ D3DKMT_GETPRESENTHISTORY*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTGetPresentQueueEvent(_In_ D3DKMT_HANDLE hAdapter, _Inout_ HANDLE*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTCreateOverlay(_Inout_ D3DKMT_CREATEOVERLAY*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTUpdateOverlay(_In_ CONST D3DKMT_UPDATEOVERLAY*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTFlipOverlay(_In_ CONST D3DKMT_FLIPOVERLAY*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTDestroyOverlay(_In_ CONST D3DKMT_DESTROYOVERLAY*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTWaitForVerticalBlankEvent(_In_ CONST D3DKMT_WAITFORVERTICALBLANKEVENT*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTSetGammaRamp(_In_ CONST D3DKMT_SETGAMMARAMP*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTGetDeviceState(_Inout_ D3DKMT_GETDEVICESTATE*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTCreateDCFromMemory(_Inout_ D3DKMT_CREATEDCFROMMEMORY*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTDestroyDCFromMemory(_In_ CONST D3DKMT_DESTROYDCFROMMEMORY*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTSetContextSchedulingPriority(_In_ CONST D3DKMT_SETCONTEXTSCHEDULINGPRIORITY*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTGetContextSchedulingPriority(_Inout_ D3DKMT_GETCONTEXTSCHEDULINGPRIORITY*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTSetProcessSchedulingPriorityClass(_In_ HANDLE, _In_ D3DKMT_SCHEDULINGPRIORITYCLASS);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTGetProcessSchedulingPriorityClass(_In_ HANDLE, _Out_ D3DKMT_SCHEDULINGPRIORITYCLASS*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTReleaseProcessVidPnSourceOwners(_In_ HANDLE);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTGetScanLine(_Inout_ D3DKMT_GETSCANLINE*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTChangeSurfacePointer(_In_ CONST D3DKMT_CHANGESURFACEPOINTER*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTSetQueuedLimit(_In_ CONST D3DKMT_SETQUEUEDLIMIT*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTPollDisplayChildren(_In_ CONST D3DKMT_POLLDISPLAYCHILDREN*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTInvalidateActiveVidPn(_In_ CONST D3DKMT_INVALIDATEACTIVEVIDPN*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTCheckOcclusion(_In_ CONST D3DKMT_CHECKOCCLUSION*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTWaitForIdle(IN CONST D3DKMT_WAITFORIDLE*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTCheckMonitorPowerState(_In_ CONST D3DKMT_CHECKMONITORPOWERSTATE*);
EXTERN_C _Check_return_ BOOLEAN  APIENTRY D3DKMTCheckExclusiveOwnership(VOID);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTCheckVidPnExclusiveOwnership(_In_ CONST D3DKMT_CHECKVIDPNEXCLUSIVEOWNERSHIP*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTSetDisplayPrivateDriverFormat(_In_ CONST D3DKMT_SETDISPLAYPRIVATEDRIVERFORMAT*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTSharedPrimaryLockNotification(_In_ CONST D3DKMT_SHAREDPRIMARYLOCKNOTIFICATION*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTSharedPrimaryUnLockNotification(_In_ CONST D3DKMT_SHAREDPRIMARYUNLOCKNOTIFICATION*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTCreateKeyedMutex(_Inout_ D3DKMT_CREATEKEYEDMUTEX*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTOpenKeyedMutex(_Inout_ D3DKMT_OPENKEYEDMUTEX*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTDestroyKeyedMutex(_In_ CONST D3DKMT_DESTROYKEYEDMUTEX*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTAcquireKeyedMutex(_Inout_ D3DKMT_ACQUIREKEYEDMUTEX*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTReleaseKeyedMutex(_Inout_ D3DKMT_RELEASEKEYEDMUTEX*);
#if (DXGKDDI_INTERFACE_VERSION >= DXGKDDI_INTERFACE_VERSION_WIN8)
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTCreateKeyedMutex2(_Inout_ D3DKMT_CREATEKEYEDMUTEX2*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTOpenKeyedMutex2(_Inout_ D3DKMT_OPENKEYEDMUTEX2*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTAcquireKeyedMutex2(_Inout_ D3DKMT_ACQUIREKEYEDMUTEX2*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTReleaseKeyedMutex2(_Inout_ D3DKMT_RELEASEKEYEDMUTEX2*);
#endif
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTConfigureSharedResource(_In_ CONST D3DKMT_CONFIGURESHAREDRESOURCE*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTGetOverlayState(_Inout_ D3DKMT_GETOVERLAYSTATE*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTCheckSharedResourceAccess(_In_ CONST D3DKMT_CHECKSHAREDRESOURCEACCESS*);
#if (DXGKDDI_INTERFACE_VERSION >= DXGKDDI_INTERFACE_VERSION_WIN8)
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTOfferAllocations(_In_ CONST D3DKMT_OFFERALLOCATIONS*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTReclaimAllocations(_Inout_ CONST D3DKMT_RECLAIMALLOCATIONS*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTCreateOutputDupl(_In_ CONST D3DKMT_CREATE_OUTPUTDUPL*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTDestroyOutputDupl(_In_ CONST D3DKMT_DESTROY_OUTPUTDUPL*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTOutputDuplGetFrameInfo(_Inout_ D3DKMT_OUTPUTDUPL_GET_FRAMEINFO*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTOutputDuplGetMetaData(_Inout_ D3DKMT_OUTPUTDUPL_METADATA*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTOutputDuplGetPointerShapeData(_Inout_ D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTOutputDuplReleaseFrame(_Inout_ D3DKMT_OUTPUTDUPL_RELEASE_FRAME*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTOutputDuplPresent(_In_ CONST D3DKMT_OUTPUTDUPLPRESENT*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTEnumAdapters(_Inout_ CONST D3DKMT_ENUMADAPTERS*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTEnumAdapters2(_Inout_ CONST D3DKMT_ENUMADAPTERS2*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTOpenAdapterFromLuid(_Inout_ CONST D3DKMT_OPENADAPTERFROMLUID*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTQueryRemoteVidPnSourceFromGdiDisplayName(_Inout_ D3DKMT_QUERYREMOTEVIDPNSOURCEFROMGDIDISPLAYNAME*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTSetVidPnSourceOwner1(_In_ CONST D3DKMT_SETVIDPNSOURCEOWNER1*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTWaitForVerticalBlankEvent2(_In_ CONST D3DKMT_WAITFORVERTICALBLANKEVENT2*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTSetSyncRefreshCountWaitTarget(_In_ CONST D3DKMT_SETSYNCREFRESHCOUNTWAITTARGET*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTGetDWMVerticalBlankEvent(_In_ CONST D3DKMT_GETVERTICALBLANKEVENT*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTPresentMultiPlaneOverlay(_In_ CONST D3DKMT_PRESENT_MULTIPLANE_OVERLAY*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTGetSharedResourceAdapterLuid(_Inout_ D3DKMT_GETSHAREDRESOURCEADAPTERLUID*);
#endif


#if (DXGKDDI_INTERFACE_VERSION >= DXGKDDI_INTERFACE_VERSION_WDDM1_3)
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTCheckMultiPlaneOverlaySupport(_Inout_ D3DKMT_CHECKMULTIPLANEOVERLAYSUPPORT*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTSetContextInProcessSchedulingPriority(_In_ CONST D3DKMT_SETCONTEXTINPROCESSSCHEDULINGPRIORITY*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTGetContextInProcessSchedulingPriority(_Inout_ D3DKMT_GETCONTEXTINPROCESSSCHEDULINGPRIORITY*);
#endif

#if (DXGKDDI_INTERFACE_VERSION >= DXGKDDI_INTERFACE_VERSION_WDDM2_0)
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTMakeResident(_Inout_ D3DDDI_MAKERESIDENT*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTEvict(_Inout_ D3DKMT_EVICT*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTWaitForSynchronizationObjectFromCpu(_In_ CONST D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTSignalSynchronizationObjectFromCpu(_In_ CONST D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTWaitForSynchronizationObjectFromGpu(_In_ CONST D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMGPU*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTSignalSynchronizationObjectFromGpu(_In_ CONST D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMGPU*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTSignalSynchronizationObjectFromGpu2(_In_ CONST D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMGPU2*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTCreatePagingQueue(_Inout_ D3DKMT_CREATEPAGINGQUEUE*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTDestroyPagingQueue(_Inout_ D3DDDI_DESTROYPAGINGQUEUE*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTLock2(_Inout_ D3DKMT_LOCK2*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTUnlock2(_In_ CONST D3DKMT_UNLOCK2*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTInvalidateCache(_In_ CONST D3DKMT_INVALIDATECACHE*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTMapGpuVirtualAddress(_Inout_ D3DDDI_MAPGPUVIRTUALADDRESS*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTReserveGpuVirtualAddress(_Inout_ D3DDDI_RESERVEGPUVIRTUALADDRESS*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTFreeGpuVirtualAddress(_In_ CONST D3DKMT_FREEGPUVIRTUALADDRESS*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTUpdateGpuVirtualAddress(_In_ CONST D3DKMT_UPDATEGPUVIRTUALADDRESS*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTGetResourcePresentPrivateDriverData(_Inout_ D3DDDI_GETRESOURCEPRESENTPRIVATEDRIVERDATA*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTCreateContextVirtual(_In_ D3DKMT_CREATECONTEXTVIRTUAL*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTSubmitCommand(_In_ CONST D3DKMT_SUBMITCOMMAND*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTOpenSyncObjectFromNtHandle2(_Inout_ D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTOpenSyncObjectNtHandleFromName(_Inout_ D3DKMT_OPENSYNCOBJECTNTHANDLEFROMNAME*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTQueryVideoMemoryInfo(_Inout_ D3DKMT_QUERYVIDEOMEMORYINFO*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTChangeVideoMemoryReservation(_In_ CONST D3DKMT_CHANGEVIDEOMEMORYRESERVATION*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTRegisterTrimNotification(_Inout_ D3DKMT_REGISTERTRIMNOTIFICATION*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTUnregisterTrimNotification(_Inout_ D3DKMT_UNREGISTERTRIMNOTIFICATION*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTCreateSwapChain(_Inout_ D3DKMT_CREATESWAPCHAIN*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTOpenSwapChain(_Inout_ D3DKMT_OPENSWAPCHAIN*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTAcquireSwapChain(_Inout_ D3DKMT_ACQUIRESWAPCHAIN*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTReleaseSwapChain(_Inout_ D3DKMT_RELEASESWAPCHAIN*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTGetSetSwapChainMetadata(_In_ D3DKMT_GETSETSWAPCHAINMETADATA*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTAbandonSwapChain(_In_ D3DKMT_ABANDONSWAPCHAIN*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTSetDodIndirectSwapchain(_In_ D3DKMT_SETDODINDIRECTSWAPCHAIN*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTCheckMultiPlaneOverlaySupport2(_Inout_ D3DKMT_CHECKMULTIPLANEOVERLAYSUPPORT2*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTPresentMultiPlaneOverlay2(_In_ CONST D3DKMT_PRESENT_MULTIPLANE_OVERLAY2*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTReclaimAllocations2(_Inout_ D3DKMT_RECLAIMALLOCATIONS2*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTSetStablePowerState(_In_ CONST D3DKMT_SETSTABLEPOWERSTATE*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTQueryClockCalibration(_Inout_ D3DKMT_QUERYCLOCKCALIBRATION*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTQueryVidPnExclusiveOwnership(_Inout_ D3DKMT_QUERYVIDPNEXCLUSIVEOWNERSHIP*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTAdjustFullscreenGamma(_In_ D3DKMT_ADJUSTFULLSCREENGAMMA*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTSetVidPnSourceHwProtection(_In_ D3DKMT_SETVIDPNSOURCEHWPROTECTION*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTMarkDeviceAsError(_In_ D3DKMT_MARKDEVICEASERROR*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTFlushHeapTransitions(_In_ D3DKMT_FLUSHHEAPTRANSITIONS*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTSetHwProtectionTeardownRecovery(_In_ D3DKMT_SETHWPROTECTIONTEARDOWNRECOVERY*);
#endif

#if (DXGKDDI_INTERFACE_VERSION >= DXGKDDI_INTERFACE_VERSION_WDDM2_1)
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTQueryProcessOfferInfo(_Inout_ D3DKMT_QUERYPROCESSOFFERINFO*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTTrimProcessCommitment(_Inout_ D3DKMT_TRIMPROCESSCOMMITMENT*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTUpdateAllocationProperty(_Inout_ D3DDDI_UPDATEALLOCPROPERTY*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTCheckMultiPlaneOverlaySupport3(_Inout_ D3DKMT_CHECKMULTIPLANEOVERLAYSUPPORT3*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTPresentMultiPlaneOverlay3(_In_ CONST D3DKMT_PRESENT_MULTIPLANE_OVERLAY3*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTSetFSEBlock(_In_ CONST D3DKMT_SETFSEBLOCK*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTQueryFSEBlock(_Inout_ D3DKMT_QUERYFSEBLOCK*);
#endif

#ifdef __cplusplus
}
#endif

#endif // !defined(D3DKMDT_SPECIAL_MULTIPLATFORM_TOOL)

#endif // (NTDDI_VERSION >= NTDDI_LONGHORN) || defined(D3DKMDT_SPECIAL_MULTIPLATFORM_TOOL)


#pragma warning(pop)

#endif /* _D3DKMTHK_H_ */

