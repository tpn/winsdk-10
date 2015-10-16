/*==========================================================================;
 *
 *  Copyright (C) Microsoft Corporation.  All Rights Reserved.
 *
 *  Content: Device Driver Interface
 *
 ***************************************************************************/

#include <winapifamily.h>

#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

#ifndef _D3D12UMDDI_H
#define _D3D12UMDDI_H

#ifndef D3D12DDI_MINOR_HEADER_VERSION
#define D3D12DDI_MINOR_HEADER_VERSION 2
#endif

#include "d3d10umddi.h"

typedef D3D10DDI_HSHADER            D3D12DDI_HSHADER;
typedef D3D10DDI_HDEVICE            D3D12DDI_HDEVICE;
typedef D3D10DDI_HRESOURCE          D3D12DDI_HRESOURCE;
typedef D3D10DDI_HBLENDSTATE        D3D12DDI_HBLENDSTATE;
typedef D3D10DDI_HRASTERIZERSTATE   D3D12DDI_HRASTERIZERSTATE;
typedef D3D10DDI_HDEPTHSTENCILSTATE D3D12DDI_HDEPTHSTENCILSTATE;
typedef D3D10DDI_HELEMENTLAYOUT     D3D12DDI_HELEMENTLAYOUT;
typedef D3D10DDI_HADAPTER           D3D12DDI_HADAPTER;
typedef D3D10DDI_HKMRESOURCE        D3D12DDI_HKMRESOURCE;
typedef D3D10DDI_HRTRESOURCE        D3D12DDI_HRTRESOURCE;
typedef D3D10DDI_HRTDEVICE          D3D12DDI_HRTDEVICE;
typedef D3D10DDI_HRTADAPTER         D3D12DDI_HRTADAPTER;


// D3DDDI_REVISION16 values
//
// These flags are meant to be indicative of smaller changes like QFEs or SPs (especially after we have shipped the OS already).
// We do not want device creation to fail if a driver doesn't support one of these. These are not meant as barriers between bigger
// changes for which we want old drivers to fail device creation until the driver supports the new version. Do not use these flags
// when wanting to up the version for a new OS release. To achieve a non-breaking DDI change, modify the D3DDDI_VERSION32 value.
// If the old DDI version exists only in non-shipped versions of the product, prefer incrementing the D3DDDI_BUILD16 value. Else,
// change the D3DDDI_REVISION16 value. New drivers will be built using the latest D3DDDI_BUILD16 values, causing older runtimes to
// reject loading them. It's not always very clear how the driver uses the these D3DDDI_REVISION16 values and has led to bugs where

// D3D12
#define D3D12DDI_MAJOR_VERSION 12
#define D3D12DDI_MINOR_VERSION 2
#define D3D12DDI_INTERFACE_VERSION ((D3D12DDI_MAJOR_VERSION << 16) | D3D12DDI_MINOR_VERSION)

#define D3D12DDI_BUILD_VERSION_BEFORE_ASTC_PROFILE 1
#define D3D12DDI_BUILD_VERSION_BEFORE_CROSS_ADAPTER 2
#define D3D12DDI_BUILD_VERSION_BEFORE_SUBRESOURCE_REFACTOR 3
#define D3D12DDI_BUILD_VERSION_BEFORE_IMAGE_QUEUE_MULTI_ADAPTER 4
#define D3D12DDI_BUILD_VERSION_BEFORE_SUBRESOURCE_REFACTOR2 5
#define D3D12DDI_BUILD_VERSION_BEFORE_DX10_DX12_HEADER_REFACTOR 6
#define D3D12DDI_BUILD_VERSION_DX10_DX12_HEADER_REFACTOR 7
#define D3D12DDI_BUILD_VERSION_PARAMETERIZED_SWIZZLE_XOR3 8
#define D3D12DDI_BUILD_VERSION 8

#define D3D12DDI_SUPPORTED ((((UINT64)D3D12DDI_INTERFACE_VERSION) << 32) | (((UINT64)D3D12DDI_BUILD_VERSION) << 16))

#if D3D12DDI_MINOR_HEADER_VERSION >= 2

//----------------------------------------------------------------------------------------------------------------------------------
// D3D12 DDI Parameters
//

// Runtime handle types
D3D10DDI_HRT( D3D12DDI_HRTCOMMANDLIST )
D3D10DDI_HRT( D3D12DDI_HRTTABLE )
D3D10DDI_HRT( D3D12DDI_HRTCOMMANDQUEUE )
D3D10DDI_HRT( D3D12DDI_HRTPAGINGQUEUE )

// UMD handle types
D3D10DDI_H( D3D12DDI_HCOMMANDQUEUE )
D3D10DDI_H( D3D12DDI_HCOMMANDALLOCATOR )
D3D10DDI_H( D3D12DDI_HPIPELINESTATE )
D3D10DDI_H( D3D12DDI_HCOMMANDLIST )
D3D10DDI_H( D3D12DDI_HFENCE )
D3D10DDI_H( D3D12DDI_HDESCRIPTORHEAP )
D3D10DDI_H( D3D12DDI_HQUERYHEAP )
D3D10DDI_H( D3D12DDI_HCOMMANDSIGNATURE )
D3D10DDI_H( D3D12DDI_HHEAP )
D3D10DDI_H( D3D12DDI_HUNORDEREDACCESSVIEWCOUNTER )
D3D10DDI_H( D3D12DDI_HROOTSIGNATURE )

typedef UINT64 D3D12DDI_GPU_VIRTUAL_ADDRESS;

// D3D12DDICAPS_SHADER
typedef struct D3D12DDI_SHADER_CAPS
{
    UINT Caps; // D3D12DDICAPS_SHADER_*
} D3D12DDI_SHADER_CAPS;

typedef enum D3D12DDICAPS_SHADER
{
    D3D12DDICAPS_SHADER_DOUBLES                                               = 0x1,
    D3D12DDICAPS_SHADER_COMPUTE_PLUS_RAW_AND_STRUCTURED_BUFFERS_IN_SHADER_4_X = 0x2,
    D3D12DDICAPS_SHADER_DEBUGGABLE                                            = 0x4,
    D3D12DDICAPS_SHADER_REQUIRES_TRANSLATION_INFO_FOR_DX9                     = 0x8,
    D3D12DDICAPS_SHADER_SPECIFIED_STENCIL_REF             = 0x10,
    D3D12DDICAPS_SHADER_TYPED_UAV_LOAD_ADDITIONAL_FORMATS = 0x20,
    D3D12DDICAPS_SHADER_ROVS                              = 0x40,
} D3D12DDICAPS_SHADER;

// D3D12DDICAPS_MEMORY_ARCHITECTURE
    // pInfo = NULL (only set to NULL by older runtimes)
    // pData = D3D12DDI_MEMORY_ARCHITECTURE_CAPS*
    // DataSize = sizeof(D3D12DDI_TEXTURE_LAYOUT_CAPS)

// D3D12DDICAPS_MEMORY_ARCHITECTURE/D3D12DDICAPS_TYPE_MEMORY_ARCHITECTURE
    // *pInfo = NodeIndex
    // pData = D3D12DDI_MEMORY_ARCHITECTURE_CAPS
    // DataSize = sizeof(D3D12DDI_MEMORY_ARCHITECTURE_CAPS)

typedef struct D3D12DDI_MEMORY_ARCHITECTURE_CAPS
{
    BOOL UMA;
    BOOL IOCoherent;
    BOOL CacheCoherent; 
} D3D12DDI_MEMORY_ARCHITECTURE_CAPS;

// D3D12DDICAPS_TEXTURE_LAYOUT/D3D12DDICAPS_TYPE_TEXTURE_LAYOUT
    // *pInfo = NULL
    // pData = D3D12DDI_TEXTURE_LAYOUT_CAPS
    // DataSize = sizeof(D3D12DDI_TEXTURE_LAYOUT_CAPS)
typedef struct D3D12DDI_TEXTURE_LAYOUT_CAPS
{
    UINT DeviceDependentLayoutCount; // D3D12DDI_TEXTURE_LAYOUT
    UINT DeviceDependentSwizzleCount; // D3D12DDI_SWIZZLE_PATTERN
    BOOL Supports64KStandardSwizzle;
} D3D12DDI_TEXTURE_LAYOUT_CAPS;

// D3D12DDICAPS_TEXTURE_LAYOUT/D3D12DDICAPS_TYPE_TEXTURE_LAYOUT
    // *pInfo == UINT : (0 through DeviceDependentLayoutCount - 1)
    // pData = D3D12DDI_SWIZZLE_PATTERN*
    // DataSize = sizeof(D3D12DDI_SWIZZLE_PATTERN) * 2

// D3D12DDICAPS_TYPE_TEXTURE_LAYOUT1
    // *pInfo == UINT : (0 through DeviceDependentLayoutCount - 1)
    // pData = D3D12DDI_SWIZZLE_PATTERN*
    // DataSize = sizeof(D3D12DDI_SWIZZLE_PATTERN) * 6
typedef enum D3D12DDI_TEXTURE_LAYOUT
{
    D3D12DDI_TL_UNDEFINED = 0,
    D3D12DDI_TL_ROW_MAJOR = 1,
    D3D12DDI_TL_64KB_TILE_UNDEFINED_SWIZZLE = 2,
    D3D12DDI_TL_64KB_TILE_STANDARD_SWIZZLE = 3, 
    D3D12DDI_TL_DEVICE_DEPENDENT_SWIZZLE_0 = 0x100,
} D3D12DDI_TEXTURE_LAYOUT;

typedef enum D3D12DDI_SWIZZLE_PATTERN
{
    D3D12DDI_SP_ROW_MAJOR = 0, 
    D3D12DDI_SP_64KB_STANDARD_SWIZZLE = 3, 
    D3D12DDI_SP_DEVICE_DEPENDENT_0 = 0x100,
} D3D12DDI_SWIZZLE_PATTERN;

// D3D12DDICAPS_SWIZZLE_PATTERN/D3D12DDICAPS_TYPE_SWIZZLE_PATTERN
    // *pInfo == UINT : (0 through DeviceDependentSwizzleCount - 1)
    // pData = D3D12DDI_SWIZZLE_PATTERN_DESC*
    // DataSize = sizeof(D3D12DDI_SWIZZLE_PATTERN_DESC)
typedef struct D3D12DDI_SWIZZLE_BIT_ENTRY
{
    UINT8 Valid : 1;
    UINT8 ChannelIndex : 2; // 0 for X, 1 for Y, 2 for Z, 3 for SS
    UINT8 SourceBitIndex : 5; // Index of source bit address
} D3D12DDI_SWIZZLE_BIT_ENTRY;

typedef struct D3D12DDI_SWIZZLE_PATTERN_DESC
{
    D3D12DDI_SWIZZLE_BIT_ENTRY InterleavePatternSourceBits[ 32 ];
    D3D12DDI_SWIZZLE_BIT_ENTRY InterleavePatternXORSourceBits[ 32 ];
    D3D12DDI_SWIZZLE_BIT_ENTRY InterleavePatternXOR2SourceBits[ 32 ];
} D3D12DDI_SWIZZLE_PATTERN_DESC;

typedef enum D3D12DDI_FUNCTIONAL_UNIT
{
    // Least common denominator details for sampling, rendering, copying:
    D3D12DDI_FUNCUNIT_COMBINED, 

    D3D12DDI_FUNCUNIT_COPY_SRC, // Copying on the copy or other engines
    D3D12DDI_FUNCUNIT_COPY_DST, // Copying on the copy or other engines
} D3D12DDI_FUNCTIONAL_UNIT;

// D3D12DDICAPS_TEXTURE_LAYOUT_SETS/D3D12DDICAPS_TYPE_TEXTURE_LAYOUT_SETS
    // *pInfo == UINT[2] { D3D12DDI_TL_ROW_MAJOR , D3D12DDI_FUNCTIONAL_UNIT }
    // pData = D3D12DDI_ROW_MAJOR_LAYOUT_CAPS*
    // DataSize = sizeof(D3D12DDI_ROW_MAJOR_LAYOUT_CAPS)
typedef enum D3D12DDI_ROW_MAJOR_LAYOUT_FLAGS
{
    D3D12DDI_ROW_MAJOR_LAYOUT_FLAG_NONE                               = 0x0,
    D3D12DDI_ROW_MAJOR_LAYOUT_FLAG_FLEXIBLE_DEPTH_PITCH               = 0x1,
    D3D12DDI_ROW_MAJOR_LAYOUT_FLAG_DEPTH_PITCH_4_8_16_HEIGHT_MULTIPLE = 0x2,
} D3D12DDI_ROW_MAJOR_LAYOUT_FLAGS;
DEFINE_ENUM_FLAG_OPERATORS( D3D12DDI_ROW_MAJOR_LAYOUT_FLAGS );

typedef struct D3D12DDI_ROW_MAJOR_LAYOUT_SUB_CAPS
{
    UINT16 MaxElementSize;
    UINT16 BaseOffsetAlignment;
    UINT16 PitchAlignment;
    UINT16 DepthPitchAlignment;
} D3D12DDI_ROW_MAJOR_LAYOUT_SUB_CAPS;

typedef struct D3D12DDI_ROW_MAJOR_LAYOUT_CAPS
{
    D3D12DDI_ROW_MAJOR_LAYOUT_SUB_CAPS SubCaps[2];
    D3D12DDI_ROW_MAJOR_LAYOUT_FLAGS Flags;
} D3D12DDI_ROW_MAJOR_LAYOUT_CAPS;

typedef enum D3D12DDI_CPU_PAGE_PROPERTY
{
    D3D12DDI_CPU_PAGE_PROPERTY_NOT_AVAILABLE = 0,
    D3D12DDI_CPU_PAGE_PROPERTY_WRITE_COMBINE = 1,
    D3D12DDI_CPU_PAGE_PROPERTY_WRITE_BACK = 2,
} D3D12DDI_CPU_PAGE_PROPERTY;

typedef enum D3D12DDI_MEMORY_POOL
{
    D3D12DDI_MEMORY_POOL_L0 = 0, // Always system memory
    D3D12DDI_MEMORY_POOL_L1 = 1, // Typically local video memory
} D3D12DDI_MEMORY_POOL;

typedef enum D3D12DDI_HEAP_FLAGS
{
    D3D12DDI_HEAP_FLAG_NONE = 0x0, // Constant for no flags
    D3D12DDI_HEAP_FLAG_NON_RT_DS_TEXTURES = 0x2,
    D3D12DDI_HEAP_FLAG_BUFFERS = 0x4,
    D3D12DDI_HEAP_FLAG_COHERENT_SYSTEMWIDE = 0x8,
    D3D12DDI_HEAP_FLAG_PRIMARY = 0x10,
    D3D12DDI_HEAP_FLAG_RT_DS_TEXTURES = 0x20,
} D3D12DDI_HEAP_FLAGS;
DEFINE_ENUM_FLAG_OPERATORS( D3D12DDI_HEAP_FLAGS );

typedef struct D3D12DDIARG_CREATEHEAP
{
    UINT64 ByteSize;
    UINT64 Alignment;
    D3D12DDI_MEMORY_POOL MemoryPool;
    D3D12DDI_CPU_PAGE_PROPERTY CPUPageProperty;
    D3D12DDI_HEAP_FLAGS Flags;
} D3D12DDIARG_CREATEHEAP;

typedef enum D3D12DDI_HANDLETYPE
{
    D3D12DDI_HT_COMMAND_QUEUE     = 19,
    D3D12DDI_HT_COMMAND_ALLOCATOR = 20,
    D3D12DDI_HT_PIPELINE_STATE    = 21,
    D3D12DDI_HT_COMMAND_LIST      = 22,
    D3D12DDI_HT_FENCE             = 23,
    D3D12DDI_HT_DESCRIPTOR_HEAP   = 24,
    D3D12DDI_HT_HEAP              = 25,
    D3D12DDI_HT_QUERY_HEAP        = 27,
    D3D12DDI_HT_COMMAND_SIGNATURE = 28,
} D3D12DDI_HANDLETYPE;

typedef struct D3D12DDI_HANDLE_AND_TYPE
{
    VOID* Handle;
    D3D12DDI_HANDLETYPE Type;
} D3D12DDI_HANDLE_AND_TYPE;

typedef enum D3D12DDI_RESOURCE_FLAGS
{
    D3D12DDI_RESOURCE_FLAG_NONE = 0x0, // Constant for no flags
    D3D12DDI_RESOURCE_FLAG_RENDER_TARGET = 0x1,
    D3D12DDI_RESOURCE_FLAG_DEPTH_STENCIL = 0x2,
    D3D12DDI_RESOURCE_FLAG_COMPRESSION_DATA = 0x4,
} D3D12DDI_RESOURCE_FLAGS;
DEFINE_ENUM_FLAG_OPERATORS( D3D12DDI_RESOURCE_FLAGS );

typedef enum D3D12DDI_RESOURCE_FLAGS_0003
{
    D3D12DDI_RESOURCE_FLAG_0003_NONE = 0x0, // Constant for no flags
    D3D12DDI_RESOURCE_FLAG_0003_RENDER_TARGET = 0x1,
    D3D12DDI_RESOURCE_FLAG_0003_DEPTH_STENCIL = 0x2,
    D3D12DDI_RESOURCE_FLAG_0003_CROSS_ADAPTER = 0x4,
    D3D12DDI_RESOURCE_FLAG_0003_SIMULTANEOUS_ACCESS = 0x8,
    D3D12DDI_RESOURCE_FLAG_0003_SHADER_RESOURCE = 0x10,
} D3D12DDI_RESOURCE_FLAGS_0003;
DEFINE_ENUM_FLAG_OPERATORS( D3D12DDI_RESOURCE_FLAGS_0003 );

typedef enum D3D12DDI_RESOURCE_TYPE
{
    D3D12DDI_RT_BUFFER = 1,
    D3D12DDI_RT_TEXTURE1D = 2,
    D3D12DDI_RT_TEXTURE2D = 3,
    D3D12DDI_RT_TEXTURE3D = 4,
} D3D12DDI_RESOURCE_TYPE;


typedef struct D3D12DDIARG_ROW_MAJOR_RESOURCE_LAYOUT
{
    UINT RowPitch;
    UINT SlicePitch;
} D3D12DDIARG_ROW_MAJOR_RESOURCE_LAYOUT;

typedef enum D3D12DDI_RESOURCE_USAGE
{
    D3D12DDI_RESOURCE_USAGE_NO_ACCESS                 = 0x00000001,
    D3D12DDI_RESOURCE_USAGE_DEFAULT_READ              = 0x00000002,
    D3D12DDI_RESOURCE_USAGE_RENDER_TARGET             = 0x00000004,
    D3D12DDI_RESOURCE_USAGE_UNORDERED_ACCESS          = 0x00000008,
    D3D12DDI_RESOURCE_USAGE_DEPTH                     = 0x00000010,
    D3D12DDI_RESOURCE_USAGE_NON_PIXEL_SHADER_RESOURCE = 0x00000020,
    D3D12DDI_RESOURCE_USAGE_PIXEL_SHADER_RESOURCE     = 0x00000040,
    D3D12DDI_RESOURCE_USAGE_STREAM_OUT                = 0x00000080,
    D3D12DDI_RESOURCE_USAGE_INDIRECT_ARGUMENT         = 0x00000100,
    D3D12DDI_RESOURCE_USAGE_COPY_DEST                 = 0x00000400,
    D3D12DDI_RESOURCE_USAGE_COPY_SOURCE               = 0x00000800,
    D3D12DDI_RESOURCE_USAGE_RESOLVE_DEST              = 0x00001000,
    D3D12DDI_RESOURCE_USAGE_RESOLVE_SOURCE            = 0x00002000,
    D3D12DDI_RESOURCE_USAGE_CPU_READ_WRITE            = 0x00004000,
} D3D12DDI_RESOURCE_USAGE;
DEFINE_ENUM_FLAG_OPERATORS( D3D12DDI_RESOURCE_USAGE );
    
typedef struct D3D12DDIARG_CREATERESOURCE
{
    D3D12DDI_HRESOURCE          hReuseBufferGPUVA;
    UINT64                      BufferOffset; // Aligned correctly
    D3D12DDI_RESOURCE_TYPE      ResourceType;
    UINT64                      Width; // Virtual coords
    UINT                        Height; // Virtual coords
    UINT16                      DepthOrArraySize; 
    UINT16                      MipLevels;
    DXGI_FORMAT                 Format; 
    DXGI_SAMPLE_DESC            SampleDesc;
    D3D12DDI_TEXTURE_LAYOUT     Layout; // See standard swizzle spec
    D3D12DDI_RESOURCE_FLAGS     Flags;
    D3D12DDI_RESOURCE_USAGE     InitialResourceState;

    UINT                        Reserved0;

    // When Layout = D3D12DDI_TL_ROW_MAJOR and pRowMajorLayout is non-null
    // then *pRowMajorLayout specifies the layout of the resource
    union
    {
        CONST VOID*                 Reserved1;
        CONST D3D12DDIARG_ROW_MAJOR_RESOURCE_LAYOUT* pRowMajorLayout;
    };
} D3D12DDIARG_CREATERESOURCE;

typedef struct D3D12DDI_DEPTH_STENCIL_VALUES
{
    FLOAT Depth;
    UINT8 Stencil;
} D3D12DDI_DEPTH_STENCIL_VALUES;

typedef struct D3D12DDI_CLEAR_VALUES
{
    DXGI_FORMAT Format;
    union
    {
        FLOAT Color[4];
        D3D12DDI_DEPTH_STENCIL_VALUES DepthStencil;
    };
} D3D12DDI_CLEAR_VALUES;

typedef struct D3D12DDIARG_OPENHEAP
{
    UINT                        NumAllocations;             // in : Number of open allocation structs
    D3DDDI_OPENALLOCATIONINFO*  pOpenAllocationInfo;        // in : Array of open allocation structs
    D3D12DDI_HKMRESOURCE        hKMResource;                // in : Kernel resource handle
    VOID*                       pPrivateDriverData;         // in : Ptr to per reosurce PrivateDriverData
    UINT                        PrivateDriverDataSize;      // in : Size of resource pPrivateDriverData
    D3D12DDI_RESOURCE_USAGE     InitialResourceState;       // in : Initial resource state
} D3D12DDIARG_OPENHEAP;

typedef struct D3D12DDIARG_MAKERESIDENT
{
    D3D12DDI_HRTPAGINGQUEUE hRTPagingQueue;
    UINT NumObjects;
    _Field_size_(NumObjects) CONST D3D12DDI_HANDLE_AND_TYPE* pObjects;
    D3DDDI_MAKERESIDENT_FLAGS Flags;
    UINT64 PagingFenceValue;                                // out: Fence to wait on
} D3D12DDIARG_MAKERESIDENT;

typedef struct D3D12DDIARG_EVICT
{
    UINT NumObjects;
    _Field_size_(NumObjects) CONST D3D12DDI_HANDLE_AND_TYPE* pObjects;
    D3DDDI_EVICT_FLAGS Flags;
} D3D12DDIARG_EVICT;

typedef struct D3D12DDIARG_OFFERRESOURCES
{
    UINT NumObjects;
    _Field_size_(NumObjects) CONST D3D12DDI_HANDLE_AND_TYPE* pObjects;
    D3DDDI_OFFER_PRIORITY Priority;
} D3D12DDIARG_OFFERRESOURCES;

typedef struct D3D12DDIARG_RECLAIMRESOURCES
{
    D3D12DDI_HRTPAGINGQUEUE hRTPagingQueue;
    UINT NumObjects;
    _Field_size_(NumObjects) CONST D3D12DDI_HANDLE_AND_TYPE* pObjects;
    _Field_size_(NumObjects) BOOL* pDiscarded;
    UINT64 PagingFenceValue;                                // out: Fence to wait on
} D3D12DDIARG_RECLAIMRESOURCES;

typedef struct D3D12DDI_HEAP_AND_RESOURCE_SIZES
{
    SIZE_T Heap;
    SIZE_T Resource;
} D3D12DDI_HEAP_AND_RESOURCE_SIZES;

typedef enum D3D12DDI_RESOURCE_OPTIMIZATION_FLAGS
{
    D3D12DDI_RESOURCE_OPTIMIZATION_FLAG_NONE = 0x0, // Constant for no flags
    D3D12DDI_RESOURCE_OPTIMIZATION_FLAG_SHADER_RESOURCE = 0x1,
    D3D12DDI_RESOURCE_OPTIMIZATION_FLAG_UNORDERED_ACCESS = 0x2,
    D3D12DDI_RESOURCE_OPTIMIZATION_FLAG_PRIMARY = 0x4,
    D3D12DDI_RESOURCE_OPTIMIZATION_FLAG_DETERMINISTIC = 0x8,
} D3D12DDI_RESOURCE_OPTIMIZATION_FLAGS;
DEFINE_ENUM_FLAG_OPERATORS( D3D12DDI_RESOURCE_OPTIMIZATION_FLAGS );

typedef struct D3D12DDI_RESOURCE_ALLOCATION_INFO
{
    UINT64 ResourceDataSize;
    UINT64 AdditionalDataHeaderSize;
    UINT64 AdditionalDataSize;
    UINT64 ResourceDataAlignment;
    union
    {
        UINT64 AdditionalDataHeaderAlignment;
        struct
        {
            UINT32 AdditionalDataHeaderAlignment1;
            UINT8 AdditionalMipLevelSwizzleTransitionsArray[4];
        };
    };

    UINT64 AdditionalDataAlignment;    
    D3D12DDI_TEXTURE_LAYOUT Layout;
    UINT8 MipLevelSwizzleTransition;
} D3D12DDI_RESOURCE_ALLOCATION_INFO;

typedef enum D3D12DDI_RESOURCE_MAPPING_FLAGS
{
    D3D12DDI_RESOURCE_MAPPING_FLAG_NONE = 0x0, // Constant for no flags
    D3D12DDI_RESOURCE_MAPPING_FLAG_NO_HAZARD = 0x1,
    D3D12DDI_RESOURCE_MAPPING_FLAG_RESOURCE_DATA = 0x2,
    D3D12DDI_RESOURCE_MAPPING_FLAG_ADDITIONAL_DATA = 0x4,
} D3D12DDI_RESOURCE_MAPPING_FLAGS;
DEFINE_ENUM_FLAG_OPERATORS( D3D12DDI_RESOURCE_MAPPING_FLAGS );

typedef struct D3D12DDI_SUBRESOURCE_INFO
{
    UINT64 Offset;
    UINT64 RowStride;
    UINT64 DepthStride;
    UINT16 RowBytePreSwizzleOffset;
    UINT16 ColumnPreSwizzleOffset;
    UINT16 DepthPreSwizzleOffset;
} D3D12DDI_SUBRESOURCE_INFO;

typedef struct D3D12DDI_TILED_RESOURCE_COORDINATE
{
    // Coordinate values below index tiles (not pixels or bytes).
    UINT X; // Used for buffer, 1D, 2D, 3D
    UINT Y; // Used for 2D, 3D
    UINT Z; // Used for 3D
    UINT Subresource; // indexes into mips, arrays. Used for 1D, 2D, 3D
    // For mipmaps that are packed into a single tile, any subresource
    // value that indicates any of the packed mips all refer to the same tile.
} D3D12DDI_TILED_RESOURCE_COORDINATE;

typedef struct D3D12DDI_TILE_REGION_SIZE
{
    UINT NumTiles;
    BOOL UseBox;  // TRUE: Uses width/height/depth parameters below to define the region.
                  //   Width*Height*Depth must match NumTiles above.  (While
                  //   this looks like redundant information, the application likely has to know
                  //   how many tiles are involved anyway.)
                  //   The downside to using the box parameters is that one update region cannot
                  //   span mipmaps (though it can span array slices via the depth parameter).
                  //
                  // FALSE: Ignores width/height/depth parameters - NumTiles just traverses tiles in
                  //   the resource linearly across x, then y, then z (as applicable) then spilling over
                  //   mips/arrays in subresource order.  Useful for just mapping an entire resource
                  //   at once.
                  //
                  // In either case, the starting location for the region within the resource
                  // is specified as a separate parameter outside this struct.

    UINT Width;   // Used for buffer, 1D, 2D, 3D
    UINT16 Height; // Used for 2D, 3D
    UINT16 Depth; // For 3D or arrays.  For arrays, advancing in depth skips to next slice of same mip size.
} D3D12DDI_TILE_REGION_SIZE;

typedef enum D3D12DDI_TILE_RANGE_FLAGS
{
    D3D12DDI_TILE_RANGE_FLAG_NONE = 0x0, // Constant for no flags
    D3D12DDI_TILE_RANGE_FLAG_NULL = 0x1,
    D3D12DDI_TILE_RANGE_FLAG_SKIP = 0x2,
    D3D12DDI_TILE_RANGE_FLAG_REUSE_SINGLE_TILE = 0x4,
} D3D12DDI_TILE_RANGE_FLAGS;
DEFINE_ENUM_FLAG_OPERATORS( D3D12DDI_TILE_RANGE_FLAGS );

typedef enum D3D12DDI_TILE_MAPPING_FLAGS
{
    D3D12DDI_TILE_MAPPING_FLAG_NONE = 0x0, // Constant for no flags
    D3D12DDI_TILE_MAPPING_FLAG_NO_HAZARD = 0x1,
} D3D12DDI_TILE_MAPPING_FLAGS;
DEFINE_ENUM_FLAG_OPERATORS( D3D12DDI_TILE_MAPPING_FLAGS );

typedef enum D3D12DDI_TILE_COPY_FLAGS
{
    D3D12DDI_TILE_COPY_FLAG_NONE = 0x0, // Constant for no flags
    D3D12DDI_TILE_COPY_FLAG_NO_HAZARD = 0x1,
    D3D12DDI_TILE_COPY_FLAG_LINEAR_BUFFER_TO_SWIZZLED_TILED_RESOURCE = 0x2,
    D3D12DDI_TILE_COPY_FLAG_SWIZZLED_TILED_RESOURCE_TO_LINEAR_BUFFER = 0x4,
} D3D12DDI_TILE_COPY_FLAGS;
DEFINE_ENUM_FLAG_OPERATORS( D3D12DDI_TILE_COPY_FLAGS );

// Bit fields for the CheckFormatSupport DDI for features that are optional on some formats.
#define D3D12DDI_FORMAT_SUPPORT_SHADER_SAMPLE            0x00000001 // format can be sampled with any filter in shaders
#define D3D12DDI_FORMAT_SUPPORT_RENDERTARGET             0x00000002 // format can be a renderTarget
#define D3D12DDI_FORMAT_SUPPORT_BLENDABLE                0x00000004 // format is blendable (can only be set if format can be renderTarget)
#define D3D12DDI_FORMAT_SUPPORT_MULTISAMPLE_RENDERTARGET 0x00000008 // format can be used as RenderTarget with some sample count > 1.
#define D3D12DDI_FORMAT_SUPPORT_MULTISAMPLE_LOAD         0x00000010 // format can be used as source for 'ld2dms'
#define D3D12DDI_FORMAT_SUPPORT_DECODER_OUTPUT           0x00000020 // format can be used as decoder output
#define D3D12DDI_FORMAT_SUPPORT_VIDEO_PROCESSOR_OUTPUT   0x00000040 // format can be used as video processor output
#define D3D12DDI_FORMAT_SUPPORT_VIDEO_PROCESSOR_INPUT    0x00000080 // format can be used as video processor input
#define D3D12DDI_FORMAT_SUPPORT_VERTEX_BUFFER            0x00000100 // format can be used as vertex buffer
#define D3D12DDI_FORMAT_SUPPORT_UAV_WRITES               0x00000200 // format can be written to through a UAV
#define D3D12DDI_FORMAT_SUPPORT_BUFFER                   0x00000400 // format can used in a typed Buffer view
#define D3D12DDI_FORMAT_SUPPORT_CAPTURE                  0x00000800 // format that can be supported as an output to the video capture engine
#define D3D12DDI_FORMAT_SUPPORT_VIDEO_ENCODER            0x00001000 // format can be supported as an input to a hardware MFT
#define D3D12DDI_FORMAT_SUPPORT_OUTPUT_MERGER_LOGIC_OP   0x00002000 // format supports logic op
#define D3D12DDI_FORMAT_SUPPORT_SHADER_GATHER            0x00004000 // format supports gather4
#define D3D12DDI_FORMAT_SUPPORT_MULTIPLANE_OVERLAY       0x00008000 // format supports multi plane overlay
#define D3D12DDI_FORMAT_SUPPORT_TILED                    0x00010000 // format supports use in a tiled Texture1D/2D/Cube/Array (not incl Texture3D)
#define D3D12DDI_FORMAT_SUPPORT_UAV_READS                0x00020000 // format supports Typed UAV Loads
#define D3D12DDI_FORMAT_SUPPORT_NOT_SUPPORTED            0x80000000 // format is not supported at all. Currently only valid for DXGI_FORMAT_R10G10B10_XR_BIAS_A2_UNORM. (Set only this bit)

typedef enum D3D12DDI_RESOURCE_BINDING_TIER
{
    D3D12DDI_RESOURCE_BINDING_TIER_1 = 1,
    D3D12DDI_RESOURCE_BINDING_TIER_2 = 2,
    D3D12DDI_RESOURCE_BINDING_TIER_3 = 3,
} D3D12DDI_RESOURCE_BINDING_TIER;

typedef enum D3D12DDI_CONSERVATIVE_RASTERIZATION_TIER
{
  D3D12DDI_CONSERVATIVE_RASTERIZATION_TIER_NOT_SUPPORTED = 0,
  D3D12DDI_CONSERVATIVE_RASTERIZATION_TIER_1 = 1,
  D3D12DDI_CONSERVATIVE_RASTERIZATION_TIER_2 = 2,
  D3D12DDI_CONSERVATIVE_RASTERIZATION_TIER_3 = 3,
} D3D12DDI_CONSERVATIVE_RASTERIZATION_TIER;

typedef enum D3D12DDI_TILED_RESOURCES_TIER
{
    D3D12DDI_TILED_RESOURCES_TIER_NOT_SUPPORTED = 0,
    D3D12DDI_TILED_RESOURCES_TIER_1 = 1,
    D3D12DDI_TILED_RESOURCES_TIER_2 = 2,
    D3D12DDI_TILED_RESOURCES_TIER_3 = 3,
} D3D12DDI_TILED_RESOURCES_TIER;

typedef enum D3D12DDI_ASTC_PROFILE_SUPPORT
{
    D3D12DDI_ASTC_PROFILE_SUPPORT_NONE    =   0,
    D3D12DDI_ASTC_PROFILE_SUPPORT_LDR    =   1,
    D3D12DDI_ASTC_PROFILE_SUPPORT_HDR    =   2,
    D3D12DDI_ASTC_PROFILE_SUPPORT_FULL   =   3
} D3D12DDI_ASTC_PROFILE_SUPPORT;

// D3D12DDICAPS_D3D12_OPTIONS
typedef struct D3D12DDI_D3D12_OPTIONS_DATA
{
    D3D12DDI_RESOURCE_BINDING_TIER ResourceBindingTier;
    D3D12DDI_CONSERVATIVE_RASTERIZATION_TIER ConservativeRasterizationTier;
    D3D12DDI_TILED_RESOURCES_TIER TiledResourcesTier;
    D3D12DDI_ASTC_PROFILE_SUPPORT ASTCProfileSupport;
} D3D12DDI_D3D12_OPTIONS_DATA;

// Keep FILL_MODE values in sync with earlier DX versions (HW consumes values directly).
typedef enum D3D12DDI_FILL_MODE
{
    // 1 was POINT, unused in D3D10+
    D3D12DDI_FILL_MODE_WIREFRAME = 2,
    D3D12DDI_FILL_MODE_SOLID     = 3
} D3D12DDI_FILL_MODE;

// Keep CULL_MODE values in sync with earlier DX versions (HW consumes values directly).
typedef enum D3D12DDI_CULL_MODE
{
    D3D12DDI_CULL_MODE_NONE  = 1,
    D3D12DDI_CULL_MODE_FRONT = 2,
    D3D12DDI_CULL_MODE_BACK  = 3
} D3D12DDI_CULL_MODE;

typedef enum D3D12DDI_CONSERVATIVE_RASTERIZATION_MODE
{
    D3D12DDI_CONSERVATIVE_RASTERIZATION_MODE_OFF = 0, // Default
    D3D12DDI_CONSERVATIVE_RASTERIZATION_MODE_ON  = 1
} D3D12DDI_CONSERVATIVE_RASTERIZATION_MODE;

typedef struct D3D12DDI_RASTERIZER_DESC
{
    D3D12DDI_FILL_MODE FillMode;
    D3D12DDI_CULL_MODE CullMode;
    BOOL FrontCounterClockwise;
    INT DepthBias;
    FLOAT DepthBiasClamp;
    FLOAT SlopeScaledDepthBias;
    BOOL DepthClipEnable;
    BOOL ScissorEnable;
    BOOL MultisampleEnable;
    BOOL AntialiasedLineEnable;
    UINT ForcedSampleCount;
    D3D12DDI_CONSERVATIVE_RASTERIZATION_MODE ConservativeRasterizationMode;
} D3D12DDI_RASTERIZER_DESC;

typedef enum D3D12DDI_COMMAND_LIST_FLAGS
{
    D3D12DDI_COMMAND_LIST_FLAG_NONE           = 0x00000000,
    D3D12DDI_COMMAND_LIST_FLAG_ENABLE_MARKERS = 0x00000001,
} D3D12DDI_COMMAND_LIST_FLAGS;
DEFINE_ENUM_FLAG_OPERATORS( D3D12DDI_COMMAND_LIST_FLAGS );

typedef struct D3D12DDIARG_RESETCOMMANDLIST
{
    D3D12DDI_HCOMMANDALLOCATOR  hDrvCommandAllocator;
    UINT                        Slot;
    UINT64                      ID;
    D3D12DDI_COMMAND_LIST_FLAGS CommandListFlags;
} D3D12DDIARG_RESETCOMMANDLIST;

typedef RECT D3D12DDI_RECT;

typedef enum D3D12DDI_DESCRIPTOR_HEAP_TYPE
{
    D3D12DDI_DESCRIPTOR_HEAP_TYPE_CBV_SRV_UAV,
    D3D12DDI_DESCRIPTOR_HEAP_TYPE_SAMPLER,
    D3D12DDI_DESCRIPTOR_HEAP_TYPE_RTV,
    D3D12DDI_DESCRIPTOR_HEAP_TYPE_DSV,
    D3D12DDI_DESCRIPTOR_HEAP_TYPE_NUM_TYPES
} D3D12DDI_DESCRIPTOR_HEAP_TYPE;


typedef enum D3D12DDI_DESCRIPTOR_HEAP_FLAGS
{
    D3D12DDI_DESCRIPTOR_HEAP_FLAG_NONE           = 0x0,
    D3D12DDI_DESCRIPTOR_HEAP_FLAG_CPU_VISIBLE    = 0x1,
    D3D12DDI_DESCRIPTOR_HEAP_FLAG_SHADER_VISIBLE = 0x2,
} D3D12DDI_DESCRIPTOR_HEAP_FLAGS;
DEFINE_ENUM_FLAG_OPERATORS( D3D12DDI_DESCRIPTOR_HEAP_FLAGS );

typedef struct D3D12DDIARG_CREATE_DESCRIPTOR_HEAP
{
    D3D12DDI_DESCRIPTOR_HEAP_TYPE Type;
    UINT NumDescriptors;
    D3D12DDI_DESCRIPTOR_HEAP_FLAGS Flags;
} D3D12DDIARG_CREATE_DESCRIPTOR_HEAP;

// D3D12 resource binding model
typedef enum D3D12DDI_SHADER_COMPONENT_MAPPING
{
    D3D12DDI_SHADER_COMPONENT_MAPPING_FROM_MEMORY_COMPONENT_0 = 0,
    D3D12DDI_SHADER_COMPONENT_MAPPING_FROM_MEMORY_COMPONENT_1 = 1,
    D3D12DDI_SHADER_COMPONENT_MAPPING_FROM_MEMORY_COMPONENT_2 = 2,
    D3D12DDI_SHADER_COMPONENT_MAPPING_FROM_MEMORY_COMPONENT_3 = 3,
    D3D12DDI_SHADER_COMPONENT_MAPPING_FORCE_VALUE_0 = 4,
    D3D12DDI_SHADER_COMPONENT_MAPPING_FORCE_VALUE_1 = 5,
} D3D12DDI_SHADER_COMPONENT_MAPPING;

#define D3D12DDI_SHADER_COMPONENT_MAPPING_MASK 0x7
#define D3D12DDI_SHADER_COMPONENT_MAPPING_SHIFT 3
#define D3D12DDI_SHADER_COMPONENT_MAPPING_ALWAYS_SET_BIT_AVOIDING_ZEROMEM_MISTAKES (1<<(D3D12DDI_SHADER_COMPONENT_MAPPING_SHIFT*4))
#define D3D12DDI_ENCODE_SHADER_4_COMPONENT_MAPPING(Src0,Src1,Src2,Src3) ((((Src0)&D3D12DDI_SHADER_COMPONENT_MAPPING_MASK)|     \
                                                                (((Src1)&D3D12DDI_SHADER_COMPONENT_MAPPING_MASK)<<D3D12DDI_SHADER_COMPONENT_MAPPING_SHIFT)| \
                                                                (((Src2)&D3D12DDI_SHADER_COMPONENT_MAPPING_MASK)<<(D3D12DDI_SHADER_COMPONENT_MAPPING_SHIFT*2))| \
                                                                (((Src3)&D3D12DDI_SHADER_COMPONENT_MAPPING_MASK)<<(D3D12DDI_SHADER_COMPONENT_MAPPING_SHIFT*3))| \
                                                                D3D12DDI_SHADER_COMPONENT_MAPPING_ALWAYS_SET_BIT_AVOIDING_ZEROMEM_MISTAKES))
#define D3D12DDI_DECODE_SHADER_4_COMPONENT_MAPPING(ComponentToExtract,Mapping) ((D3D12DDI_SHADER_COMPONENT_MAPPING)(Mapping >> (D3D12DDI_SHADER_COMPONENT_MAPPING_SHIFT*ComponentToExtract) & D3D12DDI_SHADER_COMPONENT_MAPPING_MASK))
#define D3D12DDI_DEFAULT_SHADER_4_COMPONENT_MAPPING D3D12DDI_ENCODE_SHADER_4_COMPONENT_MAPPING(0,1,2,3)

typedef enum D3D12DDI_BUFFER_SRV_FLAGS
{
    D3D12DDI_BUFFER_SRV_FLAG_NONE = 0x00000000,
    D3D12DDI_BUFFER_SRV_FLAG_RAW  = 0x00000001,
} D3D12DDI_BUFFER_SRV_FLAGS;
DEFINE_ENUM_FLAG_OPERATORS( D3D12DDI_BUFFER_SRV_FLAGS );

typedef struct D3D12DDIARG_BUFFER_SHADER_RESOURCE_VIEW
{
    UINT64 FirstElement;
    UINT NumElements;
    UINT StructureByteStride; // if nonzero, format must be DXGI_FORMAT_UNKNOWN
    D3D12DDI_BUFFER_SRV_FLAGS Flags;
} D3D12DDIARG_BUFFER_SHADER_RESOURCE_VIEW;

typedef struct D3D12DDIARG_TEX1D_SHADER_RESOURCE_VIEW
{
    UINT     MostDetailedMip;
    UINT     FirstArraySlice;
    UINT     MipLevels;
    UINT     ArraySize;
    FLOAT    ResourceMinLODClamp;
} D3D12DDIARG_TEX1D_SHADER_RESOURCE_VIEW;

typedef struct D3D12DDIARG_TEX2D_SHADER_RESOURCE_VIEW
{
    UINT     MostDetailedMip;
    UINT     FirstArraySlice;
    UINT     MipLevels;
    UINT     ArraySize;
    FLOAT    ResourceMinLODClamp;
} D3D12DDIARG_TEX2D_SHADER_RESOURCE_VIEW;

typedef struct D3D12DDIARG_TEX3D_SHADER_RESOURCE_VIEW
{
    UINT     MostDetailedMip;
    UINT     MipLevels;
    FLOAT    ResourceMinLODClamp;
} D3D12DDIARG_TEX3D_SHADER_RESOURCE_VIEW;

typedef struct D3D12DDIARG_TEXCUBE_SHADER_RESOURCE_VIEW
{
    UINT     MostDetailedMip;
    UINT     MipLevels;
    UINT     First2DArrayFace;
    UINT     NumCubes;
    FLOAT    ResourceMinLODClamp;
} D3D12DDIARG_TEXCUBE_SHADER_RESOURCE_VIEW;

typedef enum D3D12DDI_RESOURCE_DIMENSION
{
    D3D12DDI_RD_BUFFER      = 1,
    D3D12DDI_RD_TEXTURE1D   = 2,
    D3D12DDI_RD_TEXTURE2D   = 3,
    D3D12DDI_RD_TEXTURE3D   = 4,
    D3D12DDI_RD_TEXTURECUBE = 5,
} D3D12DDI_RESOURCE_DIMENSION;

typedef struct D3D12DDIARG_CREATE_SHADER_RESOURCE_VIEW
{
    D3D12DDI_HRESOURCE    hDrvResource;
    DXGI_FORMAT           Format;
    D3D12DDI_RESOURCE_DIMENSION ResourceDimension;
    UINT                  Shader4ComponentMapping;

    union
    {
        D3D12DDIARG_BUFFER_SHADER_RESOURCE_VIEW  Buffer;
        D3D12DDIARG_TEX1D_SHADER_RESOURCE_VIEW   Tex1D;
        D3D12DDIARG_TEX2D_SHADER_RESOURCE_VIEW   Tex2D;
        D3D12DDIARG_TEX3D_SHADER_RESOURCE_VIEW   Tex3D;
        D3D12DDIARG_TEXCUBE_SHADER_RESOURCE_VIEW TexCube;
    };
} D3D12DDIARG_CREATE_SHADER_RESOURCE_VIEW;

typedef enum D3D12DDI_FILTER
{
    // Bits used in defining enumeration of valid filters:
    // bits [1:0] - mip: 0 == point, 1 == linear, 2,3 unused
    // bits [3:2] - mag: 0 == point, 1 == linear, 2,3 unused
    // bits [5:4] - min: 0 == point, 1 == linear, 2,3 unused
    // bit  [6]   - aniso
    // bits [8:7] - reduction type:
    //                0 == standard filtering
    //                1 == comparison
    //                2 == min
    //                3 == max
    // bit  [31]  - mono 1-bit (narrow-purpose filter)

    D3D12DDI_FILTER_MIN_MAG_MIP_POINT                              = 0x00000000,
    D3D12DDI_FILTER_MIN_MAG_POINT_MIP_LINEAR                       = 0x00000001,
    D3D12DDI_FILTER_MIN_POINT_MAG_LINEAR_MIP_POINT                 = 0x00000004,
    D3D12DDI_FILTER_MIN_POINT_MAG_MIP_LINEAR                       = 0x00000005,
    D3D12DDI_FILTER_MIN_LINEAR_MAG_MIP_POINT                       = 0x00000010,
    D3D12DDI_FILTER_MIN_LINEAR_MAG_POINT_MIP_LINEAR                = 0x00000011,
    D3D12DDI_FILTER_MIN_MAG_LINEAR_MIP_POINT                       = 0x00000014,
    D3D12DDI_FILTER_MIN_MAG_MIP_LINEAR                             = 0x00000015,
    D3D12DDI_FILTER_ANISOTROPIC                                    = 0x00000055,
    D3D12DDI_FILTER_COMPARISON_MIN_MAG_MIP_POINT                   = 0x00000080,
    D3D12DDI_FILTER_COMPARISON_MIN_MAG_POINT_MIP_LINEAR            = 0x00000081,
    D3D12DDI_FILTER_COMPARISON_MIN_POINT_MAG_LINEAR_MIP_POINT      = 0x00000084,
    D3D12DDI_FILTER_COMPARISON_MIN_POINT_MAG_MIP_LINEAR            = 0x00000085,
    D3D12DDI_FILTER_COMPARISON_MIN_LINEAR_MAG_MIP_POINT            = 0x00000090,
    D3D12DDI_FILTER_COMPARISON_MIN_LINEAR_MAG_POINT_MIP_LINEAR     = 0x00000091,
    D3D12DDI_FILTER_COMPARISON_MIN_MAG_LINEAR_MIP_POINT            = 0x00000094,
    D3D12DDI_FILTER_COMPARISON_MIN_MAG_MIP_LINEAR                  = 0x00000095,
    D3D12DDI_FILTER_COMPARISON_ANISOTROPIC                         = 0x000000d5,
    D3D12DDI_FILTER_MINIMUM_MIN_MAG_MIP_POINT                      = 0x00000100,
    D3D12DDI_FILTER_MINIMUM_MIN_MAG_POINT_MIP_LINEAR               = 0x00000101,
    D3D12DDI_FILTER_MINIMUM_MIN_POINT_MAG_LINEAR_MIP_POINT         = 0x00000104,
    D3D12DDI_FILTER_MINIMUM_MIN_POINT_MAG_MIP_LINEAR               = 0x00000105,
    D3D12DDI_FILTER_MINIMUM_MIN_LINEAR_MAG_MIP_POINT               = 0x00000110,
    D3D12DDI_FILTER_MINIMUM_MIN_LINEAR_MAG_POINT_MIP_LINEAR        = 0x00000111,
    D3D12DDI_FILTER_MINIMUM_MIN_MAG_LINEAR_MIP_POINT               = 0x00000114,
    D3D12DDI_FILTER_MINIMUM_MIN_MAG_MIP_LINEAR                     = 0x00000115,
    D3D12DDI_FILTER_MINIMUM_ANISOTROPIC                            = 0x00000155,
    D3D12DDI_FILTER_MAXIMUM_MIN_MAG_MIP_POINT                      = 0x00000180,
    D3D12DDI_FILTER_MAXIMUM_MIN_MAG_POINT_MIP_LINEAR               = 0x00000181,
    D3D12DDI_FILTER_MAXIMUM_MIN_POINT_MAG_LINEAR_MIP_POINT         = 0x00000184,
    D3D12DDI_FILTER_MAXIMUM_MIN_POINT_MAG_MIP_LINEAR               = 0x00000185,
    D3D12DDI_FILTER_MAXIMUM_MIN_LINEAR_MAG_MIP_POINT               = 0x00000190,
    D3D12DDI_FILTER_MAXIMUM_MIN_LINEAR_MAG_POINT_MIP_LINEAR        = 0x00000191,
    D3D12DDI_FILTER_MAXIMUM_MIN_MAG_LINEAR_MIP_POINT               = 0x00000194,
    D3D12DDI_FILTER_MAXIMUM_MIN_MAG_MIP_LINEAR                     = 0x00000195,
    D3D12DDI_FILTER_MAXIMUM_ANISOTROPIC                            = 0x000001d5,

} D3D12DDI_FILTER;

typedef enum D3D12DDI_FILTER_TYPE
{
    D3D12DDI_FILTER_TYPE_POINT = 0,
    D3D12DDI_FILTER_TYPE_LINEAR = 1,
} D3D12DDI_FILTER_TYPE;

typedef enum D3D12DDI_FILTER_REDUCTION_TYPE
{
    D3D12DDI_FILTER_REDUCTION_TYPE_STANDARD = 0,
    D3D12DDI_FILTER_REDUCTION_TYPE_COMPARISON = 1,
    D3D12DDI_FILTER_REDUCTION_TYPE_MINIMUM = 2,
    D3D12DDI_FILTER_REDUCTION_TYPE_MAXIMUM = 3,
} D3D12DDI_FILTER_REDUCTION_TYPE;

#if defined( __cplusplus )
const UINT D3D12DDI_FILTER_TYPE_MASK = 0x00000003;
const UINT D3D12DDI_MIN_FILTER_SHIFT = 4;
const UINT D3D12DDI_MAG_FILTER_SHIFT = 2;
const UINT D3D12DDI_MIP_FILTER_SHIFT = 0;
const UINT D3D12DDI_FILTER_REDUCTION_TYPE_MASK = 0x00000003;
const UINT D3D12DDI_FILTER_REDUCTION_TYPE_SHIFT = 7;
const UINT D3D12DDI_ANISOTROPIC_FILTERING_BIT = 0x00000040;
const UINT D3D12DDI_TEXT_1BIT_BIT = 0x80000000;
#else
#define D3D12DDI_FILTER_TYPE_MASK 0x00000003
#define D3D12DDI_MIN_FILTER_SHIFT 4
#define D3D12DDI_MAG_FILTER_SHIFT 2
#define D3D12DDI_MIP_FILTER_SHIFT 0
#define D3D12DDI_FILTER_REDUCTION_TYPE_MASK 0x00000003
#define D3D12DDI_FILTER_REDUCTION_TYPE_SHIFT 7
#define D3D12DDI_ANISOTROPIC_FILTERING_BIT 0x00000040
#define D3D12DDI_TEXT_1BIT_BIT 0x80000000
#endif

// encode enum entry for most filters except anisotropic filtering
#define D3D12DDI_ENCODE_BASIC_FILTER( min, mag, mip, reduction )                                                 \
                                   ( ( D3D12DDI_FILTER ) (                                                       \
                                   ( ( ( min ) & D3D12DDI_FILTER_TYPE_MASK ) << D3D12DDI_MIN_FILTER_SHIFT ) |   \
                                   ( ( ( mag ) & D3D12DDI_FILTER_TYPE_MASK ) << D3D12DDI_MAG_FILTER_SHIFT ) |   \
                                   ( ( ( mip ) & D3D12DDI_FILTER_TYPE_MASK ) << D3D12DDI_MIP_FILTER_SHIFT ) |   \
                                   ( ( ( reduction ) & D3D12DDI_FILTER_REDUCTION_TYPE_MASK ) << D3D12DDI_FILTER_REDUCTION_TYPE_SHIFT ) ) )

// encode enum entry for anisotropic filtering (with or without comparison filtering)
#define D3D12DDI_ENCODE_ANISOTROPIC_FILTER( reduction )                                                  \
                                         ( ( D3D12DDI_FILTER ) (                                         \
                                         D3D12DDI_ANISOTROPIC_FILTERING_BIT |                            \
                                         D3D12DDI_ENCODE_BASIC_FILTER( D3D12DDI_FILTER_TYPE_LINEAR,     \
                                                                    D3D12DDI_FILTER_TYPE_LINEAR,         \
                                                                    D3D12DDI_FILTER_TYPE_LINEAR,         \
                                                                    reduction ) ) )


#define D3D12DDI_DECODE_MIN_FILTER( d3d12Filter )                                                                    \
                                 ( ( D3D12DDI_FILTER_TYPE )                                                          \
                                 ( ( ( d3d12Filter ) >> D3D12DDI_MIN_FILTER_SHIFT ) & D3D12DDI_FILTER_TYPE_MASK ) )

#define D3D12DDI_DECODE_MAG_FILTER( d3d12Filter )                                                                    \
                                 ( ( D3D12DDI_FILTER_TYPE )                                                          \
                                 ( ( ( d3d12Filter ) >> D3D12DDI_MAG_FILTER_SHIFT ) & D3D12DDI_FILTER_TYPE_MASK ) )

#define D3D12DDI_DECODE_MIP_FILTER( d3d12Filter )                                                                    \
                                 ( ( D3D12DDI_FILTER_TYPE )                                                          \
                                 ( ( ( d3d12Filter ) >> D3D12DDI_MIP_FILTER_SHIFT ) & D3D12DDI_FILTER_TYPE_MASK ) )

#define D3D12DDI_DECODE_FILTER_REDUCTION( d3d12Filter )                                                             \
                                 ( ( D3D12DDI_FILTER_REDUCTION_TYPE )                                               \
                                 ( ( ( d3d12Filter ) >> D3D12DDI_FILTER_REDUCTION_TYPE_SHIFT ) & D3D12DDI_FILTER_REDUCTION_TYPE_MASK ) )
#define D3D12DDI_DECODE_IS_COMPARISON_FILTER( d3d12Filter )                                                          \
                                 ( D3D12DDI_DECODE_FILTER_REDUCTION( d3d12Filter ) == D3D12DDI_FILTER_REDUCTION_TYPE_COMPARISON )

#define D3D12DDI_DECODE_IS_ANISOTROPIC_FILTER( d3d12Filter )                                                 \
                            ( ( ( d3d12Filter ) & D3D12DDI_ANISOTROPIC_FILTERING_BIT ) &&                    \
                            ( D3D12DDI_FILTER_TYPE_LINEAR == D3D12DDI_DECODE_MIN_FILTER( d3d12Filter ) ) && \
                            ( D3D12DDI_FILTER_TYPE_LINEAR == D3D12DDI_DECODE_MAG_FILTER( d3d12Filter ) ) && \
                            ( D3D12DDI_FILTER_TYPE_LINEAR == D3D12DDI_DECODE_MIP_FILTER( d3d12Filter ) ) )

#define D3D12DDI_DECODE_IS_TEXT_1BIT_FILTER( d3d12Filter )                                             \
                                 ( ( d3d12Filter ) == D3D12DDI_TEXT_1BIT_BIT )


typedef enum D3D12DDI_COMPARISON_FUNC
{
    D3D12DDI_COMPARISON_FUNC_NEVER = 1,
    D3D12DDI_COMPARISON_FUNC_LESS = 2,
    D3D12DDI_COMPARISON_FUNC_EQUAL = 3,
    D3D12DDI_COMPARISON_FUNC_LESS_EQUAL = 4,
    D3D12DDI_COMPARISON_FUNC_GREATER = 5,
    D3D12DDI_COMPARISON_FUNC_NOT_EQUAL = 6,
    D3D12DDI_COMPARISON_FUNC_GREATER_EQUAL = 7,
    D3D12DDI_COMPARISON_FUNC_ALWAYS = 8
} D3D12DDI_COMPARISON_FUNC;

typedef enum D3D12DDI_TEXTURE_ADDRESS_MODE
{
    D3D12DDI_TEXTURE_ADDRESS_MODE_WRAP = 1,
    D3D12DDI_TEXTURE_ADDRESS_MODE_MIRROR = 2,
    D3D12DDI_TEXTURE_ADDRESS_MODE_CLAMP = 3,
    D3D12DDI_TEXTURE_ADDRESS_MODE_BORDER = 4,
    D3D12DDI_TEXTURE_ADDRESS_MODE_MIRRORONCE = 5
} D3D12DDI_TEXTURE_ADDRESS_MODE;

/* TextureCube Face identifiers */
typedef enum D3D12DDI_TEXTURECUBE_FACE
{
    D3D12DDI_TEXTURECUBE_FACE_POSITIVE_X = 0,
    D3D12DDI_TEXTURECUBE_FACE_NEGATIVE_X = 1,
    D3D12DDI_TEXTURECUBE_FACE_POSITIVE_Y = 2,
    D3D12DDI_TEXTURECUBE_FACE_NEGATIVE_Y = 3,
    D3D12DDI_TEXTURECUBE_FACE_POSITIVE_Z = 4,
    D3D12DDI_TEXTURECUBE_FACE_NEGATIVE_Z = 5
} D3D12DDI_TEXTURECUBE_FACE;

typedef struct D3D12DDI_SAMPLER_DESC
{
    D3D12DDI_FILTER Filter;
    D3D12DDI_TEXTURE_ADDRESS_MODE AddressU;
    D3D12DDI_TEXTURE_ADDRESS_MODE AddressV;
    D3D12DDI_TEXTURE_ADDRESS_MODE AddressW;
    FLOAT MipLODBias;
    UINT MaxAnisotropy;
    D3D12DDI_COMPARISON_FUNC ComparisonFunc;
    FLOAT BorderColor[4]; // RGBA
    FLOAT MinLOD;
    FLOAT MaxLOD;
} D3D12DDI_SAMPLER_DESC;

typedef struct D3D12DDIARG_CREATE_SAMPLER
{
    CONST D3D12DDI_SAMPLER_DESC*   pSamplerDesc;
} D3D12DDIARG_CREATE_SAMPLER;

typedef enum D3D12DDI_BUFFER_UAV_FLAGS
{
    D3D12DDI_BUFFER_UAV_FLAG_NONE    = 0x00000000,
    D3D12DDI_BUFFER_UAV_FLAG_RAW     = 0x00000001,
    D3D12DDI_BUFFER_UAV_FLAG_APPEND  = 0x00000002, // deprecated
    D3D12DDI_BUFFER_UAV_FLAG_COUNTER = 0x00000004, // deprecated
} D3D12DDI_BUFFER_UAV_FLAGS;
DEFINE_ENUM_FLAG_OPERATORS( D3D12DDI_BUFFER_UAV_FLAGS );

typedef struct D3D12DDIARG_BUFFER_UNORDERED_ACCESS_VIEW
{
    D3D12DDI_HRESOURCE        hDrvCounterResource; 
    UINT64                    FirstElement;
    UINT                      NumElements;
    UINT                      StructureByteStride; // if nonzero, format must be DXGI_FORMAT_UNKNOWN
    UINT64                    CounterOffsetInBytes;
    D3D12DDI_BUFFER_UAV_FLAGS Flags;
} D3D12DDIARG_BUFFER_UNORDERED_ACCESS_VIEW;

typedef struct D3D12DDIARG_TEX1D_UNORDERED_ACCESS_VIEW
{
    UINT     MipSlice;
    UINT     FirstArraySlice;
    UINT     ArraySize;
} D3D12DDIARG_TEX1D_UNORDERED_ACCESS_VIEW;

typedef struct D3D12DDIARG_TEX2D_UNORDERED_ACCESS_VIEW
{
    UINT     MipSlice;
    UINT     FirstArraySlice;
    UINT     ArraySize;
} D3D12DDIARG_TEX2D_UNORDERED_ACCESS_VIEW;

typedef struct D3D12DDIARG_TEX3D_UNORDERED_ACCESS_VIEW
{
    UINT     MipSlice;
    UINT     FirstW;
    UINT     WSize;
} D3D12DDIARG_TEX3D_UNORDERED_ACCESS_VIEW;

typedef struct D3D12DDIARG_CREATE_UNORDERED_ACCESS_VIEW
{
    D3D12DDI_HRESOURCE    hDrvResource;
    DXGI_FORMAT           Format;
    D3D12DDI_RESOURCE_DIMENSION ResourceDimension; // Runtime will never set
                                                   // this to TexCube

    union
    {
        D3D12DDIARG_BUFFER_UNORDERED_ACCESS_VIEW   Buffer;
        D3D12DDIARG_TEX1D_UNORDERED_ACCESS_VIEW     Tex1D;
        D3D12DDIARG_TEX2D_UNORDERED_ACCESS_VIEW     Tex2D;
        D3D12DDIARG_TEX3D_UNORDERED_ACCESS_VIEW     Tex3D;
    };
} D3D12DDIARG_CREATE_UNORDERED_ACCESS_VIEW;

typedef struct D3D12DDIARG_BUFFER_RENDER_TARGET_VIEW
{
    UINT64 FirstElement;
    UINT NumElements;
} D3D12DDIARG_BUFFER_RENDER_TARGET_VIEW;

typedef struct D3D12DDIARG_TEX1D_RENDER_TARGET_VIEW
{
    UINT     MipSlice;
    UINT     FirstArraySlice;
    UINT     ArraySize;
} D3D12DDIARG_TEX1D_RENDER_TARGET_VIEW;

typedef struct D3D12DDIARG_TEX2D_RENDER_TARGET_VIEW
{
    UINT     MipSlice;
    UINT     FirstArraySlice;
    UINT     ArraySize;
} D3D12DDIARG_TEX2D_RENDER_TARGET_VIEW;

typedef struct D3D12DDIARG_TEX3D_RENDER_TARGET_VIEW
{
    UINT     MipSlice;
    UINT     FirstW;
    UINT     WSize;
} D3D12DDIARG_TEX3D_RENDER_TARGET_VIEW;

typedef struct D3D12DDIARG_TEXCUBE_RENDER_TARGET_VIEW
{
    UINT     MipSlice;
    UINT     FirstArraySlice;
    UINT     ArraySize;
} D3D12DDIARG_TEXCUBE_RENDER_TARGET_VIEW;

typedef struct D3D12DDIARG_CREATE_RENDER_TARGET_VIEW
{
    D3D12DDI_HRESOURCE    hDrvResource;
    DXGI_FORMAT           Format;
    D3D12DDI_RESOURCE_DIMENSION ResourceDimension;

    union
    {
        D3D12DDIARG_BUFFER_RENDER_TARGET_VIEW  Buffer;
        D3D12DDIARG_TEX1D_RENDER_TARGET_VIEW   Tex1D;
        D3D12DDIARG_TEX2D_RENDER_TARGET_VIEW   Tex2D;
        D3D12DDIARG_TEX3D_RENDER_TARGET_VIEW   Tex3D;
        D3D12DDIARG_TEXCUBE_RENDER_TARGET_VIEW TexCube;
    };
} D3D12DDIARG_CREATE_RENDER_TARGET_VIEW;

typedef struct D3D12DDIARG_TEX1D_DEPTH_STENCIL_VIEW
{
    UINT     MipSlice;
    UINT     FirstArraySlice;
    UINT     ArraySize;
} D3D12DDIARG_TEX1D_DEPTH_STENCIL_VIEW;

typedef struct D3D12DDIARG_TEX2D_DEPTH_STENCIL_VIEW
{
    UINT     MipSlice;
    UINT     FirstArraySlice;
    UINT     ArraySize;
} D3D12DDIARG_TEX2D_DEPTH_STENCIL_VIEW;

typedef struct D3D12DDIARG_TEXCUBE_DEPTH_STENCIL_VIEW
{
    UINT     MipSlice;
    UINT     FirstArraySlice;
    UINT     ArraySize;
} D3D12DDIARG_TEXCUBE_DEPTH_STENCIL_VIEW;

typedef enum D3D12DDI_CREATE_DEPTH_STENCIL_VIEW_FLAGS
{
    D3D12DDI_CREATE_DSV_FLAG_NONE              = 0x00L,
    D3D12DDI_CREATE_DSV_FLAG_READ_ONLY_DEPTH   = 0x01L,
    D3D12DDI_CREATE_DSV_FLAG_READ_ONLY_STENCIL = 0x02L,
    D3D12DDI_CREATE_DSV_FLAG_MASK         = 0x03L,
} D3D12DDI_CREATE_DEPTH_STENCIL_VIEW_FLAGS;
DEFINE_ENUM_FLAG_OPERATORS( D3D12DDI_CREATE_DEPTH_STENCIL_VIEW_FLAGS );

typedef struct D3D12DDIARG_CREATE_DEPTH_STENCIL_VIEW
{
    D3D12DDI_HRESOURCE    hDrvResource;
    DXGI_FORMAT           Format;
    D3D12DDI_RESOURCE_DIMENSION ResourceDimension;
    D3D12DDI_CREATE_DEPTH_STENCIL_VIEW_FLAGS Flags;

    union
    {
        D3D12DDIARG_TEX1D_DEPTH_STENCIL_VIEW   Tex1D;
        D3D12DDIARG_TEX2D_DEPTH_STENCIL_VIEW   Tex2D;
        D3D12DDIARG_TEXCUBE_DEPTH_STENCIL_VIEW TexCube;
    };
} D3D12DDIARG_CREATE_DEPTH_STENCIL_VIEW;

// Root Signature
typedef enum D3D12DDI_DESCRIPTOR_RANGE_TYPE
{
    D3D12DDI_DESCRIPTOR_RANGE_TYPE_SRV,
    D3D12DDI_DESCRIPTOR_RANGE_TYPE_UAV,
    D3D12DDI_DESCRIPTOR_RANGE_TYPE_CBV,
    D3D12DDI_DESCRIPTOR_RANGE_TYPE_SAMPLER
} D3D12DDI_DESCRIPTOR_RANGE_TYPE;

#define D3D12DDI_DESCRIPTOR_RANGE_OFFSET_APPEND -1

typedef struct D3D12DDI_DESCRIPTOR_RANGE
{
    D3D12DDI_DESCRIPTOR_RANGE_TYPE RangeType;
    UINT NumDescriptors; 
    UINT BaseShaderRegister; 
    UINT RegisterSpace; 
    UINT OffsetInDescriptorsFromTableStart; 
} D3D12DDI_DESCRIPTOR_RANGE;

typedef struct D3D12DDI_ROOT_DESCRIPTOR_TABLE
{
    UINT NumDescriptorRanges;
    CONST D3D12DDI_DESCRIPTOR_RANGE* pDescriptorRanges;
} D3D12DDI_ROOT_DESCRIPTOR_TABLE;

typedef struct D3D12DDI_ROOT_CONSTANTS
{
    UINT ShaderRegister; 
    UINT RegisterSpace; 
    UINT Num32BitValues; 
} D3D12DDI_ROOT_CONSTANTS;

typedef struct D3D12DDI_ROOT_DESCRIPTOR
{
    UINT ShaderRegister;
    UINT RegisterSpace;
} D3D12DDI_ROOT_DESCRIPTOR;

typedef enum D3D12DDI_SHADER_VISIBILITY
{
    D3D12DDI_SHADER_VISIBILITY_ALL = 0, 
    D3D12DDI_SHADER_VISIBILITY_VERTEX = 1,
    D3D12DDI_SHADER_VISIBILITY_HULL = 2,
    D3D12DDI_SHADER_VISIBILITY_DOMAIN = 3,
    D3D12DDI_SHADER_VISIBILITY_GEOMETRY = 4,
    D3D12DDI_SHADER_VISIBILITY_PIXEL = 5
} D3D12DDI_SHADER_VISIBILITY;

typedef enum D3D12DDI_ROOT_PARAMETER_TYPE
{
    D3D12DDI_ROOT_PARAMETER_TYPE_DESCRIPTOR_TABLE,
    D3D12DDI_ROOT_PARAMETER_TYPE_32BIT_CONSTANTS, 
    D3D12DDI_ROOT_PARAMETER_TYPE_CBV, 
    D3D12DDI_ROOT_PARAMETER_TYPE_SRV,
    D3D12DDI_ROOT_PARAMETER_TYPE_UAV  
} D3D12DDI_ROOT_PARAMETER_TYPE;

typedef struct D3D12DDI_ROOT_PARAMETER
{
    D3D12DDI_ROOT_PARAMETER_TYPE ParameterType;
    union
    {
        D3D12DDI_ROOT_DESCRIPTOR_TABLE    DescriptorTable;
        D3D12DDI_ROOT_CONSTANTS           Constants;
        D3D12DDI_ROOT_DESCRIPTOR          Descriptor;
    };
    D3D12DDI_SHADER_VISIBILITY ShaderVisibility;
} D3D12DDI_ROOT_PARAMETER;

typedef enum D3D12DDI_ROOT_SIGNATURE_FLAGS
{
    D3D12DDI_ROOT_SIGNATURE_FLAG_NONE                               = 0x0,
    D3D12DDI_ROOT_SIGNATURE_FLAG_ALLOW_INPUT_ASSEMBLER_INPUT_LAYOUT = 0x1,
    D3D12DDI_ROOT_SIGNATURE_FLAG_DENY_VERTEX_SHADER_ROOT_ACCESS     = 0x2,
    D3D12DDI_ROOT_SIGNATURE_FLAG_DENY_HULL_SHADER_ROOT_ACCESS       = 0x4,
    D3D12DDI_ROOT_SIGNATURE_FLAG_DENY_DOMAIN_SHADER_ROOT_ACCESS     = 0x8,
    D3D12DDI_ROOT_SIGNATURE_FLAG_DENY_GEOMETRY_SHADER_ROOT_ACCESS   = 0x10,
    D3D12DDI_ROOT_SIGNATURE_FLAG_DENY_PIXEL_SHADER_ROOT_ACCESS      = 0x20,
    D3D12DDI_ROOT_SIGNATURE_FLAG_ALLOW_STREAM_OUTPUT                = 0x40,
} D3D12DDI_ROOT_SIGNATURE_FLAGS;
DEFINE_ENUM_FLAG_OPERATORS( D3D12DDI_ROOT_SIGNATURE_FLAGS );

typedef enum D3D12DDI_STATIC_BORDER_COLOR
{
    D3D12DDI_STATIC_BORDER_COLOR_TRANSPARENT_BLACK, // 0.0f,0.0f,0.0f,0.0f
    D3D12DDI_STATIC_BORDER_COLOR_OPAQUE_BLACK, // 0.0f,0.0f,0.0f,1.0f
    D3D12DDI_STATIC_BORDER_COLOR_OPAQUE_WHITE, // 1.0f,1.0f,1.0f,1.0f
} D3D12DDI_STATIC_BORDER_COLOR;

typedef struct D3D12DDI_STATIC_SAMPLER
{
    D3D12DDI_FILTER Filter;
    D3D12DDI_TEXTURE_ADDRESS_MODE AddressU;
    D3D12DDI_TEXTURE_ADDRESS_MODE AddressV;
    D3D12DDI_TEXTURE_ADDRESS_MODE AddressW;
    FLOAT MipLODBias;
    UINT MaxAnisotropy;
    D3D12DDI_COMPARISON_FUNC ComparisonFunc;
    D3D12DDI_STATIC_BORDER_COLOR BorderColor; 
    FLOAT MinLOD;
    FLOAT MaxLOD;
    UINT ShaderRegister; 
    UINT RegisterSpace; 
    D3D12DDI_SHADER_VISIBILITY ShaderVisibility;    
} D3D12DDI_STATIC_SAMPLER;

typedef struct D3D12DDI_ROOT_SIGNATURE
{
    UINT NumParameters;
    CONST D3D12DDI_ROOT_PARAMETER* pRootParameters;
    UINT NumStaticSamplers;
    CONST D3D12DDI_STATIC_SAMPLER* pStaticSamplers;
    D3D12DDI_ROOT_SIGNATURE_FLAGS Flags;
} D3D12DDI_ROOT_SIGNATURE;

typedef struct D3D12DDIARG_CREATE_ROOT_SIGNATURE
{
    CONST D3D12DDI_ROOT_SIGNATURE* pRootSignature;
} D3D12DDIARG_CREATE_ROOT_SIGNATURE;

typedef struct D3D12DDI_CPU_DESCRIPTOR_HANDLE
{
    SIZE_T ptr;
} D3D12DDI_CPU_DESCRIPTOR_HANDLE;

typedef struct D3D12DDI_GPU_DESCRIPTOR_HANDLE
{
    UINT64 ptr;
} D3D12DDI_GPU_DESCRIPTOR_HANDLE;

typedef enum D3D12DDI_COMMAND_LIST_TYPE
{
    D3D12DDI_COMMAND_LIST_TYPE_DIRECT  = 0,
    D3D12DDI_COMMAND_LIST_TYPE_BUNDLE  = 1,
} D3D12DDI_COMMAND_LIST_TYPE;

typedef enum D3D12DDI_COMMAND_QUEUE_FLAGS
{
    D3D12DDI_COMMAND_QUEUE_FLAG_3D      = 0x00000001,
    D3D12DDI_COMMAND_QUEUE_FLAG_COMPUTE = 0x00000002,
    D3D12DDI_COMMAND_QUEUE_FLAG_COPY    = 0x00000004,
    D3D12DDI_COMMAND_QUEUE_FLAG_PAGING  = 0x00000008,
} D3D12DDI_COMMAND_QUEUE_FLAGS;
DEFINE_ENUM_FLAG_OPERATORS( D3D12DDI_COMMAND_QUEUE_FLAGS );

typedef struct D3D12DDIARG_CREATECOMMANDQUEUE
{
    D3D12DDI_HCOMMANDQUEUE       hDrvCommandQueue;
    D3D12DDI_HRTCOMMANDQUEUE     hRTCommandQueue;
    D3D12DDI_COMMAND_QUEUE_FLAGS QueueFlags;
} D3D12DDIARG_CREATECOMMANDQUEUE;

typedef struct D3D12DDIARG_CREATECOMMANDALLOCATOR
{
    D3D12DDI_HCOMMANDALLOCATOR   hDrvCommandAllocator;
    D3D12DDI_COMMAND_LIST_TYPE   Type;
    D3D12DDI_COMMAND_QUEUE_FLAGS QueueFlags;
} D3D12DDIARG_CREATECOMMANDALLOCATOR;

typedef struct D3D12DDIARG_CREATECOMMANDLIST
{
    D3D12DDI_HCOMMANDLIST        hDrvCommandList;
    D3D12DDI_HRTCOMMANDLIST      hRTCommandList;
    D3D12DDI_HCOMMANDALLOCATOR   hDrvCommandAllocator;
    D3D12DDI_COMMAND_LIST_TYPE   Type;
    D3D12DDI_COMMAND_QUEUE_FLAGS QueueFlags;
    UINT64                       ID;
    D3D12DDI_COMMAND_LIST_FLAGS  CommandListFlags;
} D3D12DDIARG_CREATECOMMANDLIST;

typedef enum D3D12DDI_RESOURCE_BARRIER_TYPE
{
    D3D12DDI_RESOURCE_BARRIER_TYPE_TRANSITION,
    D3D12DDI_RESOURCE_BARRIER_TYPE_ALIASING,
    D3D12DDI_RESOURCE_BARRIER_TYPE_UAV,
} D3D12DDI_RESOURCE_BARRIER_TYPE;

const UINT D3D12DDI_RESOURCE_BARRIER_ALL_SUBRESOURCES = 0xFFFFFFFF;

typedef struct D3D12DDI_RESOURCE_TRANSITION_BARRIER
{
    D3D12DDI_HRESOURCE hResource;
    UINT Subresource;
    D3D12DDI_RESOURCE_USAGE StateBefore;
    D3D12DDI_RESOURCE_USAGE StateAfter;
} D3D12DDI_RESOURCE_TRANSITION_BARRIER;

typedef struct D3D12DDI_RESOURCE_ALIASING_BARRIER
{
    D3D12DDI_HRESOURCE hResourceBefore;
    D3D12DDI_HRESOURCE hResourceAfter;
} D3D12DDI_RESOURCE_ALIASING_BARRIER;

typedef struct D3D12DDI_RESOURCE_UAV_BARRIER
{
    D3D12DDI_HRESOURCE hResource;
} D3D12DDI_RESOURCE_UAV_BARRIER;

typedef struct D3D12DDIARG_RESOURCE_BARRIER
{
    D3D12DDI_RESOURCE_BARRIER_TYPE    Type;

    union
    {
        D3D12DDI_RESOURCE_TRANSITION_BARRIER Transition;
        D3D12DDI_RESOURCE_ALIASING_BARRIER   Aliasing;
        D3D12DDI_RESOURCE_UAV_BARRIER        UAV;
    };
} D3D12DDIARG_RESOURCE_BARRIER;

typedef struct D3D12DDIARG_HRESOURCE_PLACEMENT
{
    D3D12DDI_HRESOURCE hResource;
    UINT64             Offset;
} D3D12DDIARG_HRESOURCE_PLACEMENT;

typedef struct D3D12DDIARG_BUFFER_PLACEMENT
{
    union
    {
        D3D12DDIARG_HRESOURCE_PLACEMENT UMD;
    } BaseAddress;
} D3D12DDIARG_BUFFER_PLACEMENT;

typedef enum D3D12DDI_RESOURCE_LAYOUT
{
    D3D12DDI_RL_UNDEFINED                           =     0,
    D3D12DDI_RL_PLACED_PHYSICAL_SUBRESOURCE_PITCHED =     1,
    D3D12DDI_RL_PLACED_VIRTUAL_SUBRESOURCE_PITCHED  =     2,

    // D3D11 compatibility:
    D3D12DDI_RL_SELECT_SUBRESOURCE                  =  0x40,
} D3D12DDI_RESOURCE_LAYOUT;

typedef struct D3D12DDIARG_PLACED_RESOURCE
{
    D3D12DDI_RESOURCE_LAYOUT Layout; // Cannot be D3D12DDI_RL_UNDEFINED.
    CONST VOID*              pLayout;
} D3D12DDIARG_PLACED_RESOURCE;

// D3D12DDI_RL_PLACED_PHYSICAL_SUBRESOURCE_PITCHED
typedef struct D3D12DDIARG_PHYSICAL_SUBRESOURCE_PITCHED_LAYOUT
{
    DXGI_FORMAT Format;
    UINT        PhysicalWidth;  // Block dimensions
    UINT        PhysicalHeight; // Block dimensions
    UINT        PhysicalDepth;  // Block dimensions
    UINT        Pitch;
    UINT        SlicePitch;
} D3D12DDIARG_PHYSICAL_SUBRESOURCE_PITCHED_LAYOUT;

// D3D12DDI_RL_PLACED_VIRTUAL_SUBRESOURCE_PITCHED
typedef struct D3D12DDIARG_VIRTUAL_SUBRESOURCE_PITCHED_LAYOUT
{
    DXGI_FORMAT Format;
    UINT        VirtualWidth;
    UINT        VirtualHeight;
    UINT        VirtualDepth;
    UINT        PhysicalWidth;  // Block dimensions
    UINT        PhysicalHeight; // Block dimensions
    UINT        PhysicalDepth;  // Block dimensions
    UINT        Pitch;
    UINT        SlicePitch;
} D3D12DDIARG_VIRTUAL_SUBRESOURCE_PITCHED_LAYOUT;

// D3D12DDI_RL_SELECT_SUBRESOURCE
// Use D3D12DDIARG_BUFFER_PLACEMENT::BaseAddress::UMD
//   D3D12DDI_HRESOURCE denotes resource
//   Offset specifies subresource

typedef struct D3D12DDI_FENCE_PLACEMENT
{
    D3DGPU_VIRTUAL_ADDRESS BaseAddress;
} D3D12DDI_FENCE_PLACEMENT;

typedef enum D3D12DDI_FENCE_FLAGS
{
    D3D12DDI_FENCE_FLAG_NONE           = 0x0,
    D3D12DDI_FENCE_FLAG_BOTTOM_OF_PIPE = 0x1,
} D3D12DDI_FENCE_FLAGS;
DEFINE_ENUM_FLAG_OPERATORS( D3D12DDI_FENCE_FLAGS );

typedef struct D3D12DDI_FENCE
{
    D3D12DDI_FENCE_PLACEMENT FenceValue;
    D3D12DDI_FENCE_PLACEMENT FenceMonitoredValue;
    D3D12DDI_FENCE_FLAGS Flags;
} D3D12DDI_FENCE;

typedef struct D3D12DDIARG_CREATE_FENCE
{
    UINT FenceCount;
    _Field_size_(FenceCount) D3D12DDI_FENCE* Fences;
} D3D12DDIARG_CREATE_FENCE;

typedef struct D3D12DDI_FENCE_OPERATION
{
    D3D12DDI_HFENCE Fence;
    UINT64 Value;
} D3D12DDI_FENCE_OPERATION;

typedef struct D3D12DDIARG_BLT
{
    D3D12DDI_HRESOURCE          hDstResource;
    UINT                        DstSubresource;
    UINT                        DstLeft;
    UINT                        DstTop;
    UINT                        DstRight;
    UINT                        DstBottom;
    D3D12DDI_HRESOURCE          hSrcResource;
    UINT                        SrcSubresource;
    UINT                        SrcLeft;
    UINT                        SrcTop;
    UINT                        SrcRight;
    UINT                        SrcBottom;
    DXGI_DDI_ARG_BLT_FLAGS      Flags;
    DXGI_DDI_MODE_ROTATION      Rotate;
} D3D12DDIARG_BLT;

typedef struct D3D12DDI_ARG_PRESENTSURFACE
{
    D3D12DDI_HRESOURCE hSurface;
    UINT               SubResourceIndex;
} D3D12DDI_ARG_PRESENTSURFACE;

typedef struct D3D12DDIARG_PRESENT
{
    CONST D3D12DDI_ARG_PRESENTSURFACE*  phSurfacesToPresent;
    UINT                                SurfacesToPresent;
    D3D12DDI_HRESOURCE                  hDstResource;
    UINT                                DstSubResourceIndex;
    DXGI_DDI_PRESENT_FLAGS              Flags;
    DXGI_DDI_FLIP_INTERVAL_TYPE         FlipInterval;
    UINT                                Reserved;
    CONST RECT*                         pDirtyRects;
    UINT                                DirtyRects;
} D3D12DDIARG_PRESENT;

typedef struct D3D12DDI_PRESENT
{
    D3DKMT_HANDLE   hSrcAllocation;
    D3DKMT_HANDLE   hDstAllocation;
    HANDLE          hContext;
    UINT            BroadcastContextCount;
    HANDLE          BroadcastContext[D3DDDI_MAX_BROADCAST_CONTEXT];
} D3D12DDI_PRESENT;

typedef struct D3D12DDI_BOX
{
    LONG Left;
    LONG Top;
    LONG Front;
    LONG Right;
    LONG Bottom;
    LONG Back;
} D3D12DDI_BOX;

//----------------------------------------------------------------------------------------------------------------------------------
// D3D12 DDI Declarations
//
typedef HRESULT ( APIENTRY* PFND3D12DDI_RESOURCEMAP )(
     D3D12DDI_HRESOURCE, UINT, D3D10_DDI_MAP, _Out_ D3D10DDI_MAPPED_SUBRESOURCE* );
typedef VOID ( APIENTRY* PFND3D12DDI_RESOURCEUNMAP )(
     D3D12DDI_HRESOURCE, UINT );


typedef SIZE_T ( APIENTRY* PFND3D12DDI_CALCPRIVATECOMMANDQUEUESIZE )( D3D12DDI_HDEVICE );
typedef HRESULT ( APIENTRY* PFND3D12DDI_CREATECOMMANDQUEUE )( D3D12DDI_HDEVICE, _In_ CONST D3D12DDIARG_CREATECOMMANDQUEUE* );
typedef VOID ( APIENTRY* PFND3D12DDI_DESTROYCOMMANDQUEUE )( D3D12DDI_HDEVICE, D3D12DDI_HCOMMANDQUEUE );

typedef VOID ( APIENTRY* PFND3D12DDI_EXECUTECOMMANDLISTS ) (  
    D3D12DDI_HCOMMANDQUEUE, 
    UINT Count,
     _In_reads_(Count) CONST D3D12DDI_HCOMMANDLIST* pCommandLists
    );

typedef SIZE_T ( APIENTRY* PFND3D12DDI_CALCPRIVATECOMMANDALLOCATORSIZE )( D3D12DDI_HDEVICE, _In_ CONST D3D12DDIARG_CREATECOMMANDALLOCATOR* );
typedef HRESULT ( APIENTRY* PFND3D12DDI_CREATECOMMANDALLOCATOR ) ( D3D12DDI_HDEVICE, _In_ CONST D3D12DDIARG_CREATECOMMANDALLOCATOR* );
typedef VOID ( APIENTRY* PFND3D12DDI_DESTROYCOMMANDALLOCATOR ) ( D3D12DDI_HDEVICE, D3D12DDI_HCOMMANDALLOCATOR );
typedef VOID ( APIENTRY* PFND3D12DDI_RESETCOMMANDALLOCATOR ) ( D3D12DDI_HCOMMANDALLOCATOR );

typedef SIZE_T ( APIENTRY* PFND3D12DDI_CALCPRIVATECOMMANDLISTSIZE )( D3D12DDI_HDEVICE, _In_ CONST D3D12DDIARG_CREATECOMMANDLIST* );
typedef HRESULT ( APIENTRY* PFND3D12DDI_CREATECOMMANDLIST ) ( D3D12DDI_HDEVICE, _In_ CONST D3D12DDIARG_CREATECOMMANDLIST* );
typedef VOID ( APIENTRY* PFND3D12DDI_DESTROYCOMMANDLIST ) ( D3D12DDI_HDEVICE, D3D12DDI_HCOMMANDLIST );

typedef VOID ( APIENTRY* PFND3D12DDI_CLOSECOMMANDLIST )( D3D12DDI_HCOMMANDLIST );
typedef VOID ( APIENTRY* PFND3D12DDI_DRAWINSTANCED )(
    D3D12DDI_HCOMMANDLIST, UINT, UINT, UINT, UINT );
typedef VOID ( APIENTRY* PFND3D12DDI_DRAWINDEXEDINSTANCED )(
    D3D12DDI_HCOMMANDLIST, UINT, UINT, UINT, INT, UINT );
typedef VOID ( APIENTRY* PFND3D12DDI_RESOURCECOPY )(
    D3D12DDI_HCOMMANDLIST, D3D12DDI_HRESOURCE, D3D12DDI_HRESOURCE );
typedef VOID ( APIENTRY* PFND3D12DDI_IA_SETTOPOLOGY )(
    D3D12DDI_HCOMMANDLIST, D3D10_DDI_PRIMITIVE_TOPOLOGY );
typedef VOID ( APIENTRY* PFND3D12DDI_RS_SETVIEWPORTS )(
    D3D12DDI_HCOMMANDLIST, UINT Count, _In_reads_(Count) CONST D3D10_DDI_VIEWPORT* );
typedef VOID ( APIENTRY* PFND3D12DDI_RS_SETSCISSORRECTS )(
    D3D12DDI_HCOMMANDLIST, UINT Count, _In_reads_(Count) CONST D3D10_DDI_RECT* );
typedef VOID ( APIENTRY* PFND3D12DDI_OM_SETBLENDFACTOR )(
    D3D12DDI_HCOMMANDLIST, CONST FLOAT[4] );
typedef VOID ( APIENTRY* PFND3D12DDI_OM_SETSTENCILREF )(
    D3D12DDI_HCOMMANDLIST, UINT );
typedef VOID ( APIENTRY* PFND3D12DDI_EXECUTE_BUNDLE )(
    D3D12DDI_HCOMMANDLIST, D3D12DDI_HCOMMANDLIST );
typedef VOID ( APIENTRY* PFND3D12DDI_SET_PIPELINE_STATE )(
    D3D12DDI_HCOMMANDLIST, D3D12DDI_HPIPELINESTATE );
typedef VOID ( APIENTRY* PFND3D12DDI_RESOURCEBARRIER )(
    D3D12DDI_HCOMMANDLIST, UINT Count, _In_reads_(Count) CONST D3D12DDIARG_RESOURCE_BARRIER* pResourceBarriers);
typedef VOID ( APIENTRY* PFND3D12DDI_DISPATCH )(
    D3D12DDI_HCOMMANDLIST, UINT, UINT, UINT );
typedef VOID ( APIENTRY* PFND3D12DDI_RESOURCERESOLVESUBRESOURCE )(
    D3D12DDI_HCOMMANDLIST, D3D12DDI_HRESOURCE, UINT, D3D12DDI_HRESOURCE, UINT, DXGI_FORMAT );

typedef VOID ( APIENTRY* PFND3D12DDI_COPYTEXTUREREGION )(
    D3D12DDI_HCOMMANDLIST,
    _In_ CONST D3D12DDIARG_BUFFER_PLACEMENT*, D3D12DDIARG_PLACED_RESOURCE, UINT, UINT, UINT,
    _In_ CONST D3D12DDIARG_BUFFER_PLACEMENT*, D3D12DDIARG_PLACED_RESOURCE, _In_opt_ CONST D3D10_DDI_BOX*,
    UINT CopyFlags );

typedef SIZE_T ( APIENTRY* PFND3D12DDI_CALCPRIVATEFENCESIZE )( D3D12DDI_HDEVICE, _In_ CONST D3D12DDIARG_CREATE_FENCE* );
typedef HRESULT ( APIENTRY* PFND3D12DDI_CREATEFENCE )( D3D12DDI_HDEVICE, D3D12DDI_HFENCE, _In_ CONST D3D12DDIARG_CREATE_FENCE* );
typedef VOID ( APIENTRY* PFND3D12DDI_DESTROYFENCE )( D3D12DDI_HDEVICE, D3D12DDI_HFENCE );

typedef VOID ( APIENTRY* PFND3D12DDI_BLT ) ( D3D12DDI_HCOMMANDLIST, _In_ CONST D3D12DDIARG_BLT* );
typedef VOID ( APIENTRY* PFND3D12DDI_PRESENT ) ( D3D12DDI_HCOMMANDLIST, D3D12DDI_HCOMMANDQUEUE, _In_ CONST D3D12DDIARG_PRESENT*, _Out_ BOOL*, _Out_ D3D12DDI_PRESENT* );

typedef HRESULT ( APIENTRY* PFND3D12DDI_SERIALIZEOBJECT )(
        D3D12DDI_HDEVICE hDevice,
        D3D12DDI_HANDLETYPE HandleType,
        HANDLE hObject,
        __out SIZE_T *BlobSize,
        __out const UINT **ppBlob );

typedef VOID ( APIENTRY* PFND3D12DDI_DESTROYOBJECTSERIALIZATION )(
    D3D12DDI_HDEVICE hDevice,
    SIZE_T BlobSize,
    CONST UINT *pBlob);

typedef SIZE_T ( APIENTRY* PFND3D12DDI_CALCPRIVATEDESERIALIZEDOBJECTSIZE )(
    D3D12DDI_HDEVICE HDEVICE,
    D3D12DDI_HANDLETYPE HandleType,
    SIZE_T BlobSize,
    CONST UINT *pBlob);

typedef HRESULT ( APIENTRY* PFND3D12DDI_CREATEDESERIALIZEDOBJECT )(
    D3D12DDI_HDEVICE HDEVICE,
    D3D12DDI_HANDLETYPE HandleType,
    SIZE_T BlobSize,
    CONST UINT *pBlob,
    VOID * hObject,
    VOID * hRTObject);

typedef HRESULT ( APIENTRY* PFND3D12DDI_MAPHEAP )( D3D12DDI_HDEVICE, D3D12DDI_HHEAP, _Out_ VOID** );
typedef VOID ( APIENTRY* PFND3D12DDI_UNMAPHEAP )( D3D12DDI_HDEVICE, D3D12DDI_HHEAP );
typedef D3D12DDI_HEAP_AND_RESOURCE_SIZES ( APIENTRY* PFND3D12DDI_CALCPRIVATEHEAPANDRESOURCESIZES )(
     D3D12DDI_HDEVICE, _In_opt_ CONST D3D12DDIARG_CREATEHEAP*, _In_opt_ CONST D3D12DDIARG_CREATERESOURCE* );
typedef HRESULT ( APIENTRY* PFND3D12DDI_CREATEHEAPANDRESOURCE )(
    D3D12DDI_HDEVICE, _In_opt_ CONST D3D12DDIARG_CREATEHEAP*, D3D12DDI_HHEAP, D3D12DDI_HRTRESOURCE,
    _In_opt_ CONST D3D12DDIARG_CREATERESOURCE*, _In_opt_ CONST D3D12DDI_CLEAR_VALUES*, D3D12DDI_HRESOURCE );
typedef VOID ( APIENTRY* PFND3D12DDI_DESTROYHEAPANDRESOURCE )( D3D12DDI_HDEVICE, D3D12DDI_HHEAP, D3D12DDI_HRESOURCE );
typedef D3D12DDI_HEAP_AND_RESOURCE_SIZES ( APIENTRY* PFND3D12DDI_CALCPRIVATEOPENEDHEAPANDRESOURCESIZES )(
    D3D12DDI_HDEVICE, _In_ CONST D3D12DDIARG_OPENHEAP* );
typedef HRESULT ( APIENTRY* PFND3D12DDI_OPENHEAPANDRESOURCE )( D3D12DDI_HDEVICE, _In_ CONST D3D12DDIARG_OPENHEAP*, D3D12DDI_HHEAP,
    D3D12DDI_HRTRESOURCE, D3D12DDI_HRESOURCE );
typedef VOID ( APIENTRY* PFND3D12DDI_CHECKRESOURCEALLOCATIONINFO )(
    D3D12DDI_HDEVICE,
    _In_ CONST D3D12DDIARG_CREATERESOURCE*,
    D3D12DDI_RESOURCE_OPTIMIZATION_FLAGS,
    UINT64 AlignmentRestriction,
    _Out_ D3D12DDI_RESOURCE_ALLOCATION_INFO* );
typedef VOID ( APIENTRY* PFND3D12DDI_CHECKSUBRESOURCEINFO )(
    D3D12DDI_HDEVICE,
    D3D12DDI_HRESOURCE,
    UINT Subresource,
    _Out_ D3D12DDI_SUBRESOURCE_INFO* );

// TODO: Delete
typedef HRESULT ( APIENTRY* PFND3D12DDI_MAKERESIDENT )(
     D3D12DDI_HCOMMANDQUEUE, UINT Handles, _In_reads_(Handles) CONST D3D12DDI_HANDLE_AND_TYPE* );
// TODO: Delete
typedef HRESULT ( APIENTRY* PFND3D12DDI_EVICT )(
     D3D12DDI_HCOMMANDQUEUE, UINT Handles, _In_reads_(Handles) CONST D3D12DDI_HANDLE_AND_TYPE* );

typedef HRESULT ( APIENTRY* PFND3D12DDI_MAKERESIDENT2 )(
     D3D12DDI_HDEVICE, D3D12DDIARG_MAKERESIDENT* );
typedef HRESULT ( APIENTRY* PFND3D12DDI_EVICT2 )(
     D3D12DDI_HDEVICE, CONST D3D12DDIARG_EVICT* );

typedef HRESULT ( APIENTRY* PFND3D12DDI_OFFERRESOURCES )(
     D3D12DDI_HDEVICE, CONST D3D12DDIARG_OFFERRESOURCES* );
typedef HRESULT ( APIENTRY* PFND3D12DDI_RECLAIMRESOURCES )(
     D3D12DDI_HDEVICE, D3D12DDIARG_RECLAIMRESOURCES* );

typedef VOID ( APIENTRY* PFND3D12DDI_UPDATETILEMAPPINGS )( D3D12DDI_HCOMMANDQUEUE, D3D12DDI_HRESOURCE,
    UINT NumTiledResourceRegions,
    _In_reads_(NumTiledResourceRegions) const D3D12DDI_TILED_RESOURCE_COORDINATE* pResourceRegionStartCoords,
    _In_reads_opt_(NumTiledResourceRegions) const D3D12DDI_TILE_REGION_SIZE* pResourceRegionSizes,
    D3D12DDI_HHEAP, UINT NumRanges,
    _In_reads_opt_(NumRanges) const D3D12DDI_TILE_RANGE_FLAGS*,
    _In_reads_opt_(NumRanges) const UINT* pHeapStartOffsets,
    _In_reads_opt_(NumRanges) const UINT* pRangeTileCounts,
    D3D12DDI_TILE_MAPPING_FLAGS );
typedef VOID ( APIENTRY* PFND3D12DDI_COPYTILEMAPPINGS )( D3D12DDI_HCOMMANDQUEUE,
    D3D12DDI_HRESOURCE hDstResource, _In_ const D3D12DDI_TILED_RESOURCE_COORDINATE* pDstRegionStartCoord,
    D3D12DDI_HRESOURCE hSrcResource, _In_ const D3D12DDI_TILED_RESOURCE_COORDINATE* pSrcRegionStartCoord,
    _In_ const D3D12DDI_TILE_REGION_SIZE*, D3D12DDI_TILE_MAPPING_FLAGS );

typedef VOID ( APIENTRY* PFND3D12DDI_COPYTILES )(
    D3D12DDI_HCOMMANDLIST,
    D3D12DDI_HRESOURCE hResource,
    _In_ const D3D12DDI_TILED_RESOURCE_COORDINATE* pRegionStartCoord,
    _In_ const D3D12DDI_TILE_REGION_SIZE* pRegionSize,
    D3D12DDI_HRESOURCE hBuffer, // buffer
    UINT64 BufferStartOffsetInBytes,
    D3D12DDI_TILE_COPY_FLAGS );


typedef SIZE_T ( APIENTRY* PFND3D12DDI_CALCPRIVATERASTERIZERSTATESIZE )(
    D3D12DDI_HDEVICE, _In_ CONST D3D12DDI_RASTERIZER_DESC* );

typedef VOID ( APIENTRY* PFND3D12DDI_CREATERASTERIZERSTATE )(
    D3D12DDI_HDEVICE, _In_ CONST D3D12DDI_RASTERIZER_DESC*, D3D12DDI_HRASTERIZERSTATE, D3D10DDI_HRTRASTERIZERSTATE );

typedef VOID ( APIENTRY* PFND3D12DDI_RESETCOMMANDLIST )( D3D12DDI_HCOMMANDLIST, _In_ CONST D3D12DDIARG_RESETCOMMANDLIST*);
typedef VOID ( APIENTRY* PFND3D12DDI_SET_MARKER )( D3D12DDI_HCOMMANDLIST, UINT64 );

typedef VOID ( APIENTRY* PFND3D12DDI_CREATE_SHADER_RESOURCE_VIEW  )( D3D12DDI_HDEVICE, _In_ CONST D3D12DDIARG_CREATE_SHADER_RESOURCE_VIEW *, _In_ D3D12DDI_CPU_DESCRIPTOR_HANDLE DestDescriptor );

typedef struct D3D12DDI_CONSTANT_BUFFER_VIEW_DESC
{
    D3D12DDI_GPU_VIRTUAL_ADDRESS BufferLocation;
    UINT SizeInBytes; 
    UINT Padding;
} D3D12DDI_CONSTANT_BUFFER_VIEW_DESC;

typedef VOID ( APIENTRY* PFND3D12DDI_CREATE_CONSTANT_BUFFER_VIEW  )( D3D12DDI_HDEVICE, _In_ CONST D3D12DDI_CONSTANT_BUFFER_VIEW_DESC*, _In_ D3D12DDI_CPU_DESCRIPTOR_HANDLE DestDescriptor );
typedef VOID ( APIENTRY* PFND3D12DDI_CREATE_SAMPLER               )( D3D12DDI_HDEVICE, _In_ CONST D3D12DDIARG_CREATE_SAMPLER *, _In_ D3D12DDI_CPU_DESCRIPTOR_HANDLE DestDescriptor );
typedef VOID ( APIENTRY* PFND3D12DDI_CREATE_UNORDERED_ACCESS_VIEW )( D3D12DDI_HDEVICE, _In_ CONST D3D12DDIARG_CREATE_UNORDERED_ACCESS_VIEW *, _In_ D3D12DDI_CPU_DESCRIPTOR_HANDLE DestDescriptor );
typedef VOID ( APIENTRY* PFND3D12DDI_CREATE_RENDER_TARGET_VIEW    )( D3D12DDI_HDEVICE, _In_ CONST D3D12DDIARG_CREATE_RENDER_TARGET_VIEW *, _In_ D3D12DDI_CPU_DESCRIPTOR_HANDLE DestDescriptor );
typedef VOID ( APIENTRY* PFND3D12DDI_CREATE_DEPTH_STENCIL_VIEW    )( D3D12DDI_HDEVICE, _In_ CONST D3D12DDIARG_CREATE_DEPTH_STENCIL_VIEW *, _In_ D3D12DDI_CPU_DESCRIPTOR_HANDLE DestDescriptor );

#if D3D12DDI_MINOR_HEADER_VERSION <= 2
typedef VOID ( APIENTRY* PFND3D12DDI_COPY_DESCRIPTORS_IMMEDIATE )(
    D3D12DDI_HDEVICE, 
    _In_reads_(NumSrcDescriptorRanges) CONST D3D12DDI_CPU_DESCRIPTOR_HANDLE* pSrcDescriptorRangeStarts,
    _In_reads_opt_(NumSrcDescriptorRanges) CONST UINT* pSrcDescriptorRangeSizes, // NULL means all ranges 1
    _In_ UINT NumSrcDescriptorRanges,
    _In_reads_(NumDestDescriptorRanges) CONST D3D12DDI_CPU_DESCRIPTOR_HANDLE* pDestDescriptorRangeStarts,
    _In_reads_opt_(NumDestDescriptorRanges) CONST UINT* pDestDescriptorRangeSizes, // NULL means all ranges 1
    _In_ UINT NumDestDescriptorRanges,
    _In_ D3D12DDI_DESCRIPTOR_HEAP_TYPE DescriptorHeapsType);

typedef VOID ( APIENTRY* PFND3D12DDI_COPY_DESCRIPTORS_IMMEDIATE_SIMPLE )(
    D3D12DDI_HDEVICE,
    _In_ D3D12DDI_CPU_DESCRIPTOR_HANDLE SrcDescriptorRangeStart,
    _In_ D3D12DDI_CPU_DESCRIPTOR_HANDLE DestDescriptorRangeStart,
    _In_ UINT NumDescriptors,
    _In_ D3D12DDI_DESCRIPTOR_HEAP_TYPE DescriptorHeapsType);
#endif
typedef VOID ( APIENTRY* PFND3D12DDI_COPY_DESCRIPTORS )(
    D3D12DDI_HDEVICE, 
    _In_reads_(NumDestDescriptorRanges) CONST D3D12DDI_CPU_DESCRIPTOR_HANDLE* pDestDescriptorRangeStarts,
    _In_reads_opt_(NumDestDescriptorRanges) CONST UINT* pDestDescriptorRangeSizes, // NULL means all ranges 1
    _In_ UINT NumDestDescriptorRanges,
    _In_reads_(NumSrcDescriptorRanges) CONST D3D12DDI_CPU_DESCRIPTOR_HANDLE* pSrcDescriptorRangeStarts,
    _In_reads_opt_(NumSrcDescriptorRanges) CONST UINT* pSrcDescriptorRangeSizes, // NULL means all ranges 1
    _In_ UINT NumSrcDescriptorRanges,
    _In_ D3D12DDI_DESCRIPTOR_HEAP_TYPE DescriptorHeapsType);

typedef VOID ( APIENTRY* PFND3D12DDI_COPY_DESCRIPTORS_SIMPLE )(
    D3D12DDI_HDEVICE,
    _In_ D3D12DDI_CPU_DESCRIPTOR_HANDLE DestDescriptorRangeStart,
    _In_ D3D12DDI_CPU_DESCRIPTOR_HANDLE SrcDescriptorRangeStart,
    _In_ UINT NumDescriptors,
    _In_ D3D12DDI_DESCRIPTOR_HEAP_TYPE DescriptorHeapsType);

typedef SIZE_T ( APIENTRY* PFND3D12DDI_CALC_PRIVATE_ROOT_SIGNATURE_SIZE )( D3D12DDI_HDEVICE, _In_ CONST D3D12DDIARG_CREATE_ROOT_SIGNATURE* );
typedef HRESULT ( APIENTRY* PFND3D12DDI_CREATE_ROOT_SIGNATURE ) ( D3D12DDI_HDEVICE, _In_ CONST D3D12DDIARG_CREATE_ROOT_SIGNATURE*, D3D12DDI_HROOTSIGNATURE );
typedef VOID ( APIENTRY* PFND3D12DDI_DESTROY_ROOT_SIGNATURE ) ( D3D12DDI_HDEVICE, D3D12DDI_HROOTSIGNATURE );

typedef SIZE_T ( APIENTRY* PFND3D12DDI_CALC_PRIVATE_DESCRIPTOR_HEAP_SIZE )( D3D12DDI_HDEVICE, _In_ CONST D3D12DDIARG_CREATE_DESCRIPTOR_HEAP* );
typedef HRESULT ( APIENTRY* PFND3D12DDI_CREATE_DESCRIPTOR_HEAP ) ( D3D12DDI_HDEVICE, _In_ CONST D3D12DDIARG_CREATE_DESCRIPTOR_HEAP*, D3D12DDI_HDESCRIPTORHEAP );
typedef VOID ( APIENTRY* PFND3D12DDI_DESTROY_DESCRIPTOR_HEAP ) ( D3D12DDI_HDEVICE, D3D12DDI_HDESCRIPTORHEAP );

typedef UINT ( APIENTRY* PFND3D12DDI_GET_DESCRIPTOR_SIZE_IN_BYTES ) ( D3D12DDI_HDEVICE, D3D12DDI_DESCRIPTOR_HEAP_TYPE );
typedef D3D12DDI_CPU_DESCRIPTOR_HANDLE ( APIENTRY* PFND3D12DDI_GET_CPU_DESCRIPTOR_HANDLE_FOR_HEAP_START ) ( D3D12DDI_HDEVICE, D3D12DDI_HDESCRIPTORHEAP);
typedef D3D12DDI_GPU_DESCRIPTOR_HANDLE ( APIENTRY* PFND3D12DDI_GET_GPU_DESCRIPTOR_HANDLE_FOR_HEAP_START ) ( D3D12DDI_HDEVICE, D3D12DDI_HDESCRIPTORHEAP);

typedef SIZE_T ( APIENTRY* PFND3D12DDI_CALC_PRIVATE_UNORDERED_ACCESS_VIEW_COUNTER_SIZE )( D3D12DDI_HDEVICE );
typedef HRESULT ( APIENTRY* PFND3D12DDI_CREATE_UNORDERED_ACCESS_VIEW_COUNTER )( D3D12DDI_HDEVICE, D3D12DDI_HUNORDEREDACCESSVIEWCOUNTER );
typedef VOID ( APIENTRY* PFND3D12DDI_DESTROY_UNORDERED_ACCESS_VIEW_COUNTER )( D3D12DDI_HDEVICE, D3D12DDI_HUNORDEREDACCESSVIEWCOUNTER );

typedef VOID ( APIENTRY* PFND3D12DDI_SET_DESCRIPTOR_HEAPS )( 
    D3D12DDI_HCOMMANDLIST, 
    _In_reads_(NumDescriptorHeaps) D3D12DDI_HDESCRIPTORHEAP*, 
    _In_ UINT NumDescriptorHeaps);

typedef VOID ( APIENTRY* PFND3D12DDI_SET_ROOT_SIGNATURE )(
    D3D12DDI_HCOMMANDLIST, 
    _In_ D3D12DDI_HROOTSIGNATURE); 

typedef VOID ( APIENTRY* PFND3D12DDI_SET_ROOT_DESCRIPTOR_TABLE )(
    D3D12DDI_HCOMMANDLIST, 
    _In_ UINT RootParameterIndex,
    _In_ D3D12DDI_GPU_DESCRIPTOR_HANDLE BaseDescriptor );

typedef VOID ( APIENTRY* PFND3D12DDI_SET_ROOT_32BIT_CONSTANT )(
    D3D12DDI_HCOMMANDLIST, 
    UINT RootParameterIndex, 
    UINT SrcData, 
    UINT DestOffsetIn32BitValues);  

typedef VOID ( APIENTRY* PFND3D12DDI_SET_ROOT_32BIT_CONSTANTS )(
    D3D12DDI_HCOMMANDLIST, 
    UINT RootParameterIndex, 
    CONST void* pSrcData, 
    UINT DestOffsetIn32BitValues, 
    UINT Num32BitValuesToSet);  

typedef VOID ( APIENTRY* PFND3D12DDI_SET_ROOT_BUFFER_VIEW )(
    D3D12DDI_HCOMMANDLIST, 
    UINT RootParameterIndex, 
    _In_ D3D12DDI_GPU_VIRTUAL_ADDRESS BufferLocation);

typedef struct D3D12DDI_INDEX_BUFFER_VIEW
{
    D3D12DDI_GPU_VIRTUAL_ADDRESS BufferLocation;
    UINT SizeInBytes; 
    DXGI_FORMAT Format;
} D3D12DDI_INDEX_BUFFER_VIEW;

typedef VOID ( APIENTRY* PFND3D12DDI_IA_SET_INDEX_BUFFER )(
    D3D12DDI_HCOMMANDLIST, 
    _In_ CONST D3D12DDI_INDEX_BUFFER_VIEW* pDesc);

typedef struct D3D12DDI_VERTEX_BUFFER_VIEW
{
    D3D12DDI_GPU_VIRTUAL_ADDRESS BufferLocation;
    UINT SizeInBytes; 
    UINT StrideInBytes;
} D3D12DDI_VERTEX_BUFFER_VIEW;

typedef VOID ( APIENTRY* PFND3D12DDI_IA_SET_VERTEX_BUFFERS )(   
    D3D12DDI_HCOMMANDLIST, 
    _In_ UINT StartSlot,    
    _In_reads_opt_(NumBuffers) CONST D3D12DDI_VERTEX_BUFFER_VIEW * pDesc,
    _In_ UINT NumBuffers );

typedef struct D3D12DDI_STREAM_OUTPUT_BUFFER_VIEW
{
    D3D12DDI_GPU_VIRTUAL_ADDRESS BufferLocation;
    UINT64 SizeInBytes;
    D3D12DDI_GPU_VIRTUAL_ADDRESS BufferFilledSizeLocation;
} D3D12DDI_STREAM_OUTPUT_BUFFER_VIEW;

typedef VOID ( APIENTRY* PFND3D12DDI_SO_SET_TARGETS )(
    D3D12DDI_HCOMMANDLIST, 
    _In_ UINT StartSlot,
    _In_reads_opt_(NumBuffers) CONST D3D12DDI_STREAM_OUTPUT_BUFFER_VIEW* pDesc,
    _In_ UINT NumBuffers );

typedef VOID ( APIENTRY* PFND3D12DDI_OM_SET_RENDER_TARGETS )(
    D3D12DDI_HCOMMANDLIST, 
    _In_ CONST D3D12DDI_CPU_DESCRIPTOR_HANDLE* pRenderTargetDescriptors,
    _In_ BOOL RTsSingleHandleToDescriptorRange,
    _In_ UINT NumRenderTargetDescriptors,
    _In_opt_ CONST D3D12DDI_CPU_DESCRIPTOR_HANDLE* pDepthStencilDescriptor);

typedef VOID ( APIENTRY* PFND3D12DDI_CLEAR_UNORDERED_ACCESS_VIEW_UINT )(
    D3D12DDI_HCOMMANDLIST, 
    D3D12DDI_GPU_DESCRIPTOR_HANDLE ViewGPUHandleInCurrentHeap,
    D3D12DDI_CPU_DESCRIPTOR_HANDLE ViewCPUHandle,
    D3D12DDI_HRESOURCE hDrvResource,
    CONST UINT[4],
    _In_reads_(NumRects) CONST D3D12DDI_RECT* pRects, 
    UINT NumRects );

typedef VOID ( APIENTRY* PFND3D12DDI_CLEAR_UNORDERED_ACCESS_VIEW_FLOAT )(
    D3D12DDI_HCOMMANDLIST, 
    D3D12DDI_GPU_DESCRIPTOR_HANDLE ViewGPUHandleInCurrentHeap,
    D3D12DDI_CPU_DESCRIPTOR_HANDLE ViewCPUHandle,
    D3D12DDI_HRESOURCE hDrvResource,
    CONST FLOAT[4],
    _In_reads_(NumRects) CONST D3D12DDI_RECT* pRects, 
    UINT NumRects );

typedef VOID ( APIENTRY* PFND3D12DDI_CLEAR_RENDER_TARGET_VIEW )(
    D3D12DDI_HCOMMANDLIST, 
    D3D12DDI_CPU_DESCRIPTOR_HANDLE ViewCPUHandle,
    CONST FLOAT[4],
    _In_reads_(NumRects) CONST D3D12DDI_RECT* pRects, 
    UINT NumRects );

typedef VOID ( APIENTRY* PFND3D12DDI_CLEAR_DEPTH_STENCIL_VIEW )(
    D3D12DDI_HCOMMANDLIST, 
    D3D12DDI_CPU_DESCRIPTOR_HANDLE ViewCPUHandle,
    UINT, FLOAT, UINT8,
    _In_reads_(NumRects) CONST D3D12DDI_RECT* pRects, 
    UINT NumRects );

typedef struct D3D12DDIARG_DISCARD_RESOURCE
{
    CONST _In_reads_(NumRects) D3D12DDI_RECT *pRects;
    UINT NumRects;
    UINT FirstSubresource;
    UINT NumSubresources;
} D3D12DDIARG_DISCARD_RESOURCE;

typedef VOID ( APIENTRY* PFND3D12DDI_DISCARD_RESOURCE )(
    D3D12DDI_HCOMMANDLIST, 
    D3D12DDI_HRESOURCE hDrvResource,
    _In_opt_ CONST D3D12DDIARG_DISCARD_RESOURCE* );

typedef struct D3D12DDIARG_STREAM_OUTPUT_DECLARATION_ENTRY
{
    UINT Stream;
    UINT OutputSlot;
    UINT RegisterIndex;
    BYTE RegisterMask; // (D3D10_SB_OPERAND_4_COMPONENT_MASK >> 4), meaning 4 LSBs are xyzw respectively
} D3D12DDIARG_STREAM_OUTPUT_DECLARATION_ENTRY;

typedef struct D3D12DDIARG_CREATE_GEOMETRY_SHADER_WITH_STREAM_OUTPUT
{
    CONST UINT*                                         pShaderCode;
    D3D12DDI_HROOTSIGNATURE                             hRootSignature;
    CONST D3D12DDIARG_STREAM_OUTPUT_DECLARATION_ENTRY*  pOutputStreamDecl;
    UINT                                                NumEntries;
    CONST UINT*                                         BufferStridesInBytes;
    UINT                                                NumStrides;
    UINT                                                RasterizedStream;
} D3D12DDIARG_CREATE_GEOMETRY_SHADER_WITH_STREAM_OUTPUT;

typedef struct D3D12DDIARG_SIGNATURE_ENTRY
{
    D3D10_SB_NAME SystemValue; // D3D10_SB_NAME_UNDEFINED if the particular entry doesn't have a system name.
    UINT Register;
    BYTE Mask;// (D3D10_SB_OPERAND_4_COMPONENT_MASK >> 4), meaning 4 LSBs are xyzw respectively
    D3D10_SB_REGISTER_COMPONENT_TYPE RegisterComponentType;
    D3D11_SB_OPERAND_MIN_PRECISION   MinPrecision;
} D3D12DDIARG_SIGNATURE_ENTRY;

typedef struct D3D12DDIARG_STAGE_IO_SIGNATURES
{
// A signature is basically the union of all registers input and output by any
// shader sharing the signature.  Thus, a signature may be a superset of what a
// given shader may happen to actually input or output.  Another way to think
// of a signature is that hardware should assume for an input signature that
// the upstream stage in the pipeline may provide some or all the data in the
// signature laid out as specified.  Similarly, hardware should assume for an output
// signature that the downstream stage in the pipeline may consume some or all
// of the data in the signature laid out as specified.
//
// The reason this full signature is passed to the driver is to assist in the event
// input/output registers need to be reordered during shader compilation.
// Such reordering may depend on knowing all of the registers in the signature,
// as well as which ones have system names ("position", "clipDistance" etc),
// including registers that don't happen to be present in the current shader.
//
// The declarations within the shader code itself will show which registers
// are actually used by a particular shader (possibly a subset of these signatures).
// If some hardware doesn't need to reorder input/output registers at
// compile-time, the full signatures provided by this structure can be
// completely ignored.  The reference rasterizer, for example, doens't
// need the information provided here at all.
//
    D3D12DDIARG_SIGNATURE_ENTRY*  pInputSignature;
    UINT                          NumInputSignatureEntries;
    D3D12DDIARG_SIGNATURE_ENTRY*  pOutputSignature;
    UINT                          NumOutputSignatureEntries;
} D3D12DDIARG_STAGE_IO_SIGNATURES;

typedef struct D3D12DDIARG_TESSELLATION_IO_SIGNATURES
{
// A signature is basically the union of all registers input and output by any
// shader sharing the signature.  Thus, a signature may be a superset of what a
// given shader may happen to actually input or output.  Another way to think
// of a signature is that hardware should assume for an input signature that
// the upstream stage in the pipeline may provide some or all the data in the
// signature laid out as specified.  Similarly, hardware should assume for an output
// signature that the downstream stage in the pipeline may consume some or all
// of the data in the signature laid out as specified.
//
// The reason this full signature is passed to the driver is to assist in the event
// input/output registers need to be reordered during shader compilation.
// Such reordering may depend on knowing all of the registers in the signature,
// as well as which ones have system names ("position", "clipDistance" etc),
// including registers that don't happen to be present in the current shader.
//
// The declarations within the shader code itself will show which registers
// are actually used by a particular shader (possibly a subset of these signatures).
// If some hardware doesn't need to reorder input/output registers at
// compile-time, the full signatures provided by this structure can be
// completely ignored.  The reference rasterizer, for example, doens't
// need the information provided here at all.
//
    D3D12DDIARG_SIGNATURE_ENTRY*  pInputSignature;
    UINT                          NumInputSignatureEntries;
    D3D12DDIARG_SIGNATURE_ENTRY*  pOutputSignature;
    UINT                          NumOutputSignatureEntries;
    D3D12DDIARG_SIGNATURE_ENTRY*  pPatchConstantSignature;
    UINT                          NumPatchConstantSignatureEntries;
} D3D12DDIARG_TESSELLATION_IO_SIGNATURES;

typedef SIZE_T ( APIENTRY* PFND3D12DDI_CALC_PRIVATE_SHADER_SIZE )(
    D3D12DDI_HDEVICE, _In_reads_(pShaderCode[1]) CONST UINT* pShaderCode, D3D12DDI_HROOTSIGNATURE, _In_ CONST D3D12DDIARG_STAGE_IO_SIGNATURES* );
typedef VOID ( APIENTRY* PFND3D12DDI_CREATE_VERTEX_SHADER )(
    D3D12DDI_HDEVICE, _In_reads_(pShaderCode[1]) CONST UINT* pShaderCode, D3D12DDI_HROOTSIGNATURE, D3D12DDI_HSHADER, D3D10DDI_HRTSHADER, _In_ CONST D3D12DDIARG_STAGE_IO_SIGNATURES* );
typedef VOID ( APIENTRY* PFND3D12DDI_CREATE_GEOMETRY_SHADER )(
    D3D12DDI_HDEVICE, _In_reads_(pShaderCode[1]) CONST UINT* pShaderCode, D3D12DDI_HROOTSIGNATURE, D3D12DDI_HSHADER, D3D10DDI_HRTSHADER, _In_ CONST D3D12DDIARG_STAGE_IO_SIGNATURES* );
typedef VOID ( APIENTRY* PFND3D12DDI_CREATE_PIXEL_SHADER )(
    D3D12DDI_HDEVICE, _In_reads_(pShaderCode[1]) CONST UINT* pShaderCode, D3D12DDI_HROOTSIGNATURE, D3D12DDI_HSHADER, D3D10DDI_HRTSHADER, _In_ CONST D3D12DDIARG_STAGE_IO_SIGNATURES* );
typedef SIZE_T ( APIENTRY* PFND3D12DDI_CALC_PRIVATE_GEOMETRY_SHADER_WITH_STREAM_OUTPUT )(
    D3D12DDI_HDEVICE, _In_ CONST D3D12DDIARG_CREATE_GEOMETRY_SHADER_WITH_STREAM_OUTPUT*, _In_ CONST D3D12DDIARG_STAGE_IO_SIGNATURES* );
typedef VOID ( APIENTRY* PFND3D12DDI_CREATE_GEOMETRY_SHADER_WITH_STREAM_OUTPUT )(
    D3D12DDI_HDEVICE, _In_ CONST D3D12DDIARG_CREATE_GEOMETRY_SHADER_WITH_STREAM_OUTPUT*, D3D12DDI_HSHADER, D3D10DDI_HRTSHADER, _In_ CONST D3D12DDIARG_STAGE_IO_SIGNATURES* );
typedef VOID ( APIENTRY* PFND3D12DDI_CREATE_COMPUTE_SHADER )(
    D3D12DDI_HDEVICE, _In_reads_(pShaderCode[1]) CONST UINT* pShaderCode, D3D12DDI_HROOTSIGNATURE, D3D12DDI_HSHADER, D3D10DDI_HRTSHADER );
typedef SIZE_T ( APIENTRY* PFND3D12DDI_CALC_PRIVATE_TESSELLATION_SHADER_SIZE )(
    D3D12DDI_HDEVICE, _In_reads_(pShaderCode[1]) CONST UINT* pShaderCode, D3D12DDI_HROOTSIGNATURE, _In_ CONST D3D12DDIARG_TESSELLATION_IO_SIGNATURES* );
typedef VOID ( APIENTRY* PFND3D12DDI_CREATE_HULL_SHADER )(
    D3D12DDI_HDEVICE, _In_reads_(pShaderCode[1]) CONST UINT* pShaderCode, D3D12DDI_HROOTSIGNATURE, D3D12DDI_HSHADER, D3D10DDI_HRTSHADER, _In_ CONST D3D12DDIARG_TESSELLATION_IO_SIGNATURES* );
typedef VOID ( APIENTRY* PFND3D12DDI_CREATE_DOMAIN_SHADER )(
    D3D12DDI_HDEVICE, _In_reads_(pShaderCode[1]) CONST UINT* pShaderCode, D3D12DDI_HROOTSIGNATURE, D3D12DDI_HSHADER, D3D10DDI_HRTSHADER, _In_ CONST D3D12DDIARG_TESSELLATION_IO_SIGNATURES* );

typedef enum D3D12DDI_PRIMITIVE_TOPOLOGY_TYPE
{
    D3D12DDI_PRIMITIVE_TOPOLOGY_TYPE_UNDEFINED = 0,
    D3D12DDI_PRIMITIVE_TOPOLOGY_TYPE_POINT = 1,
    D3D12DDI_PRIMITIVE_TOPOLOGY_TYPE_LINE = 2,
    D3D12DDI_PRIMITIVE_TOPOLOGY_TYPE_TRIANGLE = 3,
    D3D12DDI_PRIMITIVE_TOPOLOGY_TYPE_PATCH = 4,
} D3D12DDI_PRIMITIVE_TOPOLOGY_TYPE;

typedef enum D3D12DDI_INDEX_BUFFER_STRIP_CUT_VALUE
{
    D3D12DDI_INDEX_BUFFER_STRIP_CUT_VALUE_DISABLED = 0,
    D3D12DDI_INDEX_BUFFER_STRIP_CUT_VALUE_0xFFFF = 1,
    D3D12DDI_INDEX_BUFFER_STRIP_CUT_VALUE_0xFFFFFFFF = 2
} D3D12DDI_INDEX_BUFFER_STRIP_CUT_VALUE;

typedef struct D3D12DDIARG_CREATE_PIPELINE_STATE
{
    D3D12DDI_HPIPELINESTATE hDrvPipelineState;

    D3D12DDI_HSHADER hComputeShader;
    D3D12DDI_HSHADER hVertexShader;
    D3D12DDI_HSHADER hPixelShader;
    D3D12DDI_HSHADER hDomainShader;
    D3D12DDI_HSHADER hHullShader;
    D3D12DDI_HSHADER hGeometryShader;
    D3D12DDI_HROOTSIGNATURE hRootSignature;
    D3D12DDI_HBLENDSTATE hBlendState;
    UINT SampleMask;
    D3D12DDI_HRASTERIZERSTATE hRasterizerState;
    D3D12DDI_HDEPTHSTENCILSTATE hDepthStencilState;
    D3D12DDI_HELEMENTLAYOUT hElementLayout;
    D3D12DDI_INDEX_BUFFER_STRIP_CUT_VALUE IBStripCutValue;
    D3D12DDI_PRIMITIVE_TOPOLOGY_TYPE PrimitiveTopologyType;
    UINT NumRenderTargets;
    DXGI_FORMAT RTVFormats[8];
    DXGI_FORMAT DSVFormat;
    DXGI_SAMPLE_DESC SampleDesc;
} D3D12DDIARG_CREATE_PIPELINE_STATE;

typedef SIZE_T ( APIENTRY* PFND3D12DDI_CALC_PRIVATE_PIPELINE_STATE_SIZE )( D3D12DDI_HDEVICE, _In_ CONST D3D12DDIARG_CREATE_PIPELINE_STATE* );
typedef HRESULT ( APIENTRY* PFND3D12DDI_CREATE_PIPELINE_STATE ) ( D3D12DDI_HDEVICE, _In_ CONST D3D12DDIARG_CREATE_PIPELINE_STATE* );
typedef VOID ( APIENTRY* PFND3D12DDI_DESTROY_PIPELINE_STATE ) ( D3D12DDI_HDEVICE, D3D12DDI_HPIPELINESTATE );

typedef enum D3D12DDI_QUERY_HEAP_TYPE
{
    D3D12DDI_QUERY_HEAP_TYPE_OCCLUSION             = 0,
    D3D12DDI_QUERY_HEAP_TYPE_TIMESTAMP             = 1,
    D3D12DDI_QUERY_HEAP_TYPE_PIPELINE_STATISTICS   = 2,
    D3D12DDI_QUERY_HEAP_TYPE_SO_STATISTICS         = 3,
} D3D12DDI_QUERY_HEAP_TYPE;

typedef enum D3D12DDI_QUERY_TYPE
{
    D3D12DDI_QUERY_TYPE_OCCLUSION              = 0,
    D3D12DDI_QUERY_TYPE_BINARY_OCCLUSION       = 1,
    D3D12DDI_QUERY_TYPE_TIMESTAMP              = 2,
    D3D12DDI_QUERY_TYPE_PIPELINE_STATISTICS    = 3,
    D3D12DDI_QUERY_TYPE_SO_STATISTICS_STREAM0  = 4,
    D3D12DDI_QUERY_TYPE_SO_STATISTICS_STREAM1  = 5,
    D3D12DDI_QUERY_TYPE_SO_STATISTICS_STREAM2  = 6,
    D3D12DDI_QUERY_TYPE_SO_STATISTICS_STREAM3  = 7,

} D3D12DDI_QUERY_TYPE;

typedef enum D3D12DDI_PREDICATION_OP
{
    D3D12DDI_PREDICATION_OP_EQUAL_ZERO     = 0,
    D3D12DDI_PREDICATION_OP_NOT_EQUAL_ZERO = 1,
} D3D12DDI_PREDICATION_OP;

typedef struct D3D12DDIARG_CREATE_QUERY_HEAP
{
    D3D12DDI_QUERY_HEAP_TYPE    Type;
    UINT                        Count;
} D3D12DDIARG_CREATE_QUERY_HEAP;

typedef struct D3D12DDI_QUERY_DATA_PIPELINE_STATISTICS
{
    UINT64 IAVertices;
    UINT64 IAPrimitives;
    UINT64 VSInvocations;
    UINT64 GSInvocations;
    UINT64 GSPrimitives;
    UINT64 CInvocations;
    UINT64 CPrimitives;
    UINT64 PSInvocations;
    UINT64 HSInvocations;
    UINT64 DSInvocations;
    UINT64 CSInvocations;
} D3D12DDI_QUERY_DATA_PIPELINE_STATISTICS;

typedef struct D3D12DDI_QUERY_DATA_SO_STATISTICS
{
    UINT64 NumPrimitivesWritten;
    UINT64 PrimitivesStorageNeeded;
} D3D12DDI_QUERY_DATA_SO_STATISTICS;

typedef SIZE_T ( APIENTRY* PFND3D12DDI_CALC_PRIVATE_QUERY_HEAP_SIZE )( D3D12DDI_HDEVICE, _In_ CONST D3D12DDIARG_CREATE_QUERY_HEAP* );
typedef HRESULT ( APIENTRY* PFND3D12DDI_CREATE_QUERY_HEAP ) ( D3D12DDI_HDEVICE, _In_ CONST D3D12DDIARG_CREATE_QUERY_HEAP*, D3D12DDI_HQUERYHEAP );
typedef VOID ( APIENTRY* PFND3D12DDI_DESTROY_QUERY_HEAP ) ( D3D12DDI_HDEVICE, D3D12DDI_HQUERYHEAP );

typedef VOID ( APIENTRY* PFND3D12DDI_BEGIN_END_QUERY )( D3D12DDI_HCOMMANDLIST, D3D12DDI_HQUERYHEAP, UINT, D3D12DDI_QUERY_TYPE);

typedef VOID ( APIENTRY* PFND3D12DDI_RESOLVE_QUERY_DATA )( 
    D3D12DDI_HCOMMANDLIST, 
    D3D12DDI_HQUERYHEAP, 
    D3D12DDI_QUERY_TYPE,
    UINT StartElement,
    UINT ElementCount,
    D3D12DDI_HRESOURCE hDrvDestinationBuffer,
    UINT64 DestinationOffset
    );

typedef VOID ( APIENTRY* PFND3D12DDI_SET_PREDICATION )( D3D12DDI_HCOMMANDLIST, D3D12DDI_HRESOURCE, UINT64, D3D12DDI_PREDICATION_OP );

typedef struct D3D12DDI_DRAW_ARGUMENTS
{
    UINT VertexCountPerInstance;
    UINT InstanceCount;
    UINT StartVertexLocation;
    UINT StartInstanceLocation;
} D3D12DDI_DRAW_ARGUMENTS;

typedef struct D3D12DDI_DRAW_INDEXED_ARGUMENTS
{
    UINT IndexCountPerInstance;
    UINT InstanceCount;
    UINT StartIndexLocation;
    INT  BaseVertexLocation;
    UINT StartInstanceLocation;
} D3D12DDI_DRAW_INDEXED_ARGUMENTS;

typedef struct D3D12DDI_DISPATCH_ARGUMENTS
{
    UINT ThreadGroupCountX;
    UINT ThreadGroupCountY;
    UINT ThreadGroupCountZ;
} D3D12DDI_DISPATCH_ARGUMENTS;

typedef enum D3D12DDI_INDIRECT_ARGUMENT_TYPE
{
    D3D12DDI_INDIRECT_ARGUMENT_TYPE_DRAW,
    D3D12DDI_INDIRECT_ARGUMENT_TYPE_DRAW_INDEXED,
    D3D12DDI_INDIRECT_ARGUMENT_TYPE_DISPATCH,
    D3D12DDI_INDIRECT_ARGUMENT_TYPE_VERTEX_BUFFER_VIEW,
    D3D12DDI_INDIRECT_ARGUMENT_TYPE_INDEX_BUFFER_VIEW,
    D3D12DDI_INDIRECT_ARGUMENT_TYPE_CONSTANT,
    D3D12DDI_INDIRECT_ARGUMENT_TYPE_CONSTANT_BUFFER_VIEW,
    D3D12DDI_INDIRECT_ARGUMENT_TYPE_SHADER_RESOURCE_VIEW,
    D3D12DDI_INDIRECT_ARGUMENT_TYPE_UNORDERED_ACCESS_VIEW,
} D3D12DDI_INDIRECT_ARGUMENT_TYPE;

typedef struct D3D12DDI_INDIRECT_ARGUMENT_DESC
{
    D3D12DDI_INDIRECT_ARGUMENT_TYPE Type;

    union
    {
        struct
        {
            UINT Slot;
        } VertexBuffer;

        struct
        {
            UINT RootParameterIndex;
            UINT DestOffsetIn32BitValues;
            UINT Num32BitValuesToSet;
        } Constant;

        struct
        {
            UINT RootParameterIndex;
        } ConstantBufferView;

        struct
        {
            UINT RootParameterIndex;
        } ShaderResourceView;

        struct
        {
            UINT RootParameterIndex;
        } UnorderedAccessView;
    };
} D3D12DDI_INDIRECT_ARGUMENT_DESC;

typedef struct D3D12DDIARG_CREATE_COMMAND_SIGNATURE
{
    UINT ByteStride; 
    UINT NumArgumentDescs;
    const D3D12DDI_INDIRECT_ARGUMENT_DESC* pArgumentDescs;
    D3D12DDI_HROOTSIGNATURE hRootSignature;
} D3D12DDIARG_CREATE_COMMAND_SIGNATURE;

typedef SIZE_T ( APIENTRY* PFND3D12DDI_CALC_PRIVATE_COMMAND_SIGNATURE_SIZE )( D3D12DDI_HDEVICE, _In_ CONST D3D12DDIARG_CREATE_COMMAND_SIGNATURE* );
typedef HRESULT ( APIENTRY* PFND3D12DDI_CREATE_COMMAND_SIGNATURE ) ( D3D12DDI_HDEVICE, _In_ CONST D3D12DDIARG_CREATE_COMMAND_SIGNATURE*, D3D12DDI_HCOMMANDSIGNATURE );
typedef VOID ( APIENTRY* PFND3D12DDI_DESTROY_COMMAND_SIGNATURE ) ( D3D12DDI_HDEVICE, D3D12DDI_HCOMMANDSIGNATURE );

typedef VOID ( APIENTRY* PFND3D12DDI_EXECUTE_INDIRECT )( 
    D3D12DDI_HCOMMANDLIST, 
    D3D12DDI_HCOMMANDSIGNATURE, 
    UINT MaxCommandCount, 
    D3D12DDIARG_BUFFER_PLACEMENT ArgumentBuffer, 
    D3D12DDIARG_BUFFER_PLACEMENT CountBuffer
    );

typedef D3D12DDI_GPU_VIRTUAL_ADDRESS ( APIENTRY* PFND3D12DDI_CHECKRESOURCEVIRTUALADDRESS )( D3D12DDI_HDEVICE, D3D12DDI_HRESOURCE  );

typedef VOID ( APIENTRY* PFND3D12DDI_CHECKEXISITINGRESOURCEALLOCATIONINFO )(
    D3D12DDI_HDEVICE,
    D3D12DDI_HRESOURCE,
    _Out_ D3D12DDI_RESOURCE_ALLOCATION_INFO*,
    _Out_ D3DKMT_HANDLE* phAllocation );
typedef VOID ( APIENTRY* PFND3D12DDI_COPYBUFFERREGION )(
    D3D12DDI_HCOMMANDLIST,
    D3D12DDIARG_BUFFER_PLACEMENT Dst,
    D3D12DDIARG_BUFFER_PLACEMENT Src,
    UINT64 SrcBytes,
    UINT CopyFlags );

typedef enum D3D12DDI_TABLE_TYPE
{
    D3D12DDI_TABLE_TYPE_DEVICE_CORE             = 0,
    D3D12DDI_TABLE_TYPE_COMMAND_LIST_3D         = 1,
    D3D12DDI_TABLE_TYPE_COMMAND_QUEUE_3D        = 2,
    D3D12DDI_TABLE_TYPE_DXGI                    = 3,
} D3D12DDI_TABLE_TYPE;

typedef struct D3D12DDI_TABLE_REQUEST
{
    D3D12DDI_TABLE_TYPE tableType;
    UINT                numTables;
} D3D12DDI_TABLE_REQUEST;

typedef HRESULT ( APIENTRY * PFND3D12DDI_GETOPTIONALDDITTABLES )(
    D3D12DDI_HADAPTER, _Inout_ UINT32* puEntries, _Out_writes_opt_( *puEntries ) D3D12DDI_TABLE_REQUEST* );

typedef HRESULT ( APIENTRY * PFND3D12DDI_FILLDDITTABLE )(
    D3D12DDI_HADAPTER, D3D12DDI_TABLE_TYPE, _Inout_ VOID*, SIZE_T, UINT, _In_opt_ D3D12DDI_HRTTABLE );

typedef _Check_return_ HRESULT(APIENTRY CALLBACK *PFND3D12DDI_MAKERESIDENT_CB)(
    _In_    D3D12DDI_HRTDEVICE hRTDevice,
    _In_    D3D12DDI_HRTPAGINGQUEUE hRTPagingQueue,
    _Inout_ D3DDDI_MAKERESIDENT*
    );

typedef _Check_return_ HRESULT(APIENTRY CALLBACK *PFND3D12DDI_EVICT_CB)(
    _In_    D3D12DDI_HRTDEVICE hRTDevice,
    _In_ const D3DDDICB_EVICT*
    );

typedef _Check_return_ HRESULT(APIENTRY CALLBACK *PFND3D12DDI_RECLAIMALLOCATIONS2_CB)(
    _In_    D3D12DDI_HRTDEVICE hRTDevice,
    _In_    D3D12DDI_HRTPAGINGQUEUE hRTPagingQueue,
    _Inout_ D3D12DDICB_RECLAIMALLOCATIONS2*
    );

typedef _Check_return_ HRESULT(APIENTRY CALLBACK *PFND3D12DDI_OFFERALLOCATIONS_CB)(
    _In_ D3D12DDI_HRTDEVICE hRTDevice,
    _In_ CONST D3D12DDICB_OFFERALLOCATIONS*
    );

typedef VOID (APIENTRY CALLBACK *PFND3D12DDI_SETCOMMANDLISTDDITABLE_CB)( D3D12DDI_HRTCOMMANDLIST, D3D12DDI_HRTTABLE );

typedef _Check_return_ HRESULT(APIENTRY CALLBACK *PFND3D12DDI_CREATECONTEXT_CB)(
    _In_    D3D12DDI_HRTCOMMANDQUEUE hRTCommandQueue,
    _Inout_ D3DDDICB_CREATECONTEXT*
    );

typedef _Check_return_ HRESULT(APIENTRY CALLBACK *PFND3D12DDI_CREATECONTEXTVIRTUAL_CB)(
    _In_    D3D12DDI_HRTCOMMANDQUEUE hRTCommandQueue,
    _Inout_ D3DDDICB_CREATECONTEXTVIRTUAL*
    );

typedef _Check_return_ HRESULT(APIENTRY CALLBACK *PFND3D12DDI_DESTROYCONTEXT_CB)(
    _In_    D3D12DDI_HRTCOMMANDQUEUE hRTCommandQueue,
    _In_ const D3DDDICB_DESTROYCONTEXT*
    );

typedef _Check_return_ HRESULT(APIENTRY CALLBACK *PFND3D12DDI_CREATEPAGINGQUEUE_CB)(
    _In_    D3D12DDI_HRTCOMMANDQUEUE hRTCommandQueue,
    _Inout_ D3DDDICB_CREATEPAGINGQUEUE*
    );

typedef _Check_return_ HRESULT(APIENTRY CALLBACK *PFND3D12DDI_DESTROYPAGINGQUEUE_CB)(
    _In_    D3D12DDI_HRTCOMMANDQUEUE hRTCommandQueue,
    _In_ const D3DDDI_DESTROYPAGINGQUEUE*
    );

typedef VOID (APIENTRY CALLBACK *PFND3D12DDI_SETCOMMANDLISTERROR_CB)( D3D12DDI_HRTCOMMANDLIST, HRESULT );

typedef struct D3D12DDI_CORELAYER_DEVICECALLBACKS
{
    PFND3D10DDI_SETERROR_CB pfnSetErrorCb;
    PFND3D12DDI_SETCOMMANDLISTERROR_CB pfnSetCommandListErrorCb;
    PFND3D12DDI_SETCOMMANDLISTDDITABLE_CB pfnSetCommandListDDITableCb;

    // KM callbacks for 12
    PFND3D12DDI_CREATECONTEXT_CB        pfnCreateContextCb;
    PFND3D12DDI_CREATECONTEXTVIRTUAL_CB pfnCreateContextVirtualCb;
    PFND3D12DDI_DESTROYCONTEXT_CB       pfnDestroyContextCb;
    PFND3D12DDI_CREATEPAGINGQUEUE_CB    pfnCreatePagingQueueCb;
    PFND3D12DDI_DESTROYPAGINGQUEUE_CB   pfnDestroyPagingQueueCb;
    PFND3D12DDI_MAKERESIDENT_CB         pfnMakeResidentCb;
    PFND3D12DDI_EVICT_CB                pfnEvictCb;
    PFND3D12DDI_RECLAIMALLOCATIONS2_CB  pfnReclaimAllocations2Cb;
    PFND3D12DDI_OFFERALLOCATIONS_CB     pfnOfferAllocationsCb;
} D3D12DDI_CORELAYER_DEVICECALLBACKS;

typedef struct D3D12DDIARG_CREATEDEVICE
{
    D3D12DDI_HRTDEVICE              hRTDevice;              // in:  Runtime handle
    UINT                            Interface;              // in:  Interface version
    UINT                            Version;                // in:  Runtime Version
    CONST D3DDDI_DEVICECALLBACKS*   pKTCallbacks;           // in:  Pointer to runtime callbacks that invoke kernel
    D3D12DDI_HDEVICE                hDrvDevice;             // in:  Driver private handle/ storage.
    DXGI_DDI_BASE_ARGS              DXGIBaseDDI;            // in/out
    D3D10DDI_HRTCORELAYER           hRTCoreLayer;           // in:  CoreLayer handle
    CONST D3D12DDI_CORELAYER_DEVICECALLBACKS* p12UMCallbacks; // in:  callbacks that stay in usermode
    UINT                            Flags;                  // in:  D3D10DDI_CREATEDEVICE_FLAG_*
} D3D12DDIARG_CREATEDEVICE;

typedef HRESULT (APIENTRY *PFND3D12DDI_CREATEDEVICE)(D3D12DDI_HADAPTER, _In_ D3D12DDIARG_CREATEDEVICE*);

typedef struct D3D12DDI_ADAPTER_FUNCS
{
    PFND3D10DDI_CALCPRIVATEDEVICESIZE         pfnCalcPrivateDeviceSize;
    PFND3D12DDI_CREATEDEVICE                  pfnCreateDevice;
    PFND3D10DDI_CLOSEADAPTER                  pfnCloseAdapter;
    PFND3D10_2DDI_GETSUPPORTEDVERSIONS        pfnGetSupportedVersions;
    PFND3D10_2DDI_GETCAPS                     pfnGetCaps;
    PFND3D12DDI_GETOPTIONALDDITTABLES         pfnGetOptionalDDITables;
    PFND3D12DDI_FILLDDITTABLE                 pfnFillDDITable;
} D3D12DDI_ADAPTER_FUNCS;

//----------------------------------------------------------------------------------------------------------------------------------
// D3D12 DDI Tables
//

typedef struct D3D12DDI_DEVICE_FUNCS_CORE
{
    PFND3D10DDI_DESTROYDEVICE                               pfnDestroyDevice;

    PFND3D11_1DDI_ASSIGNDEBUGBINARY                         pfnAssignDebugBinary;

    PFND3D10DDI_CHECKFORMATSUPPORT                          pfnCheckFormatSupport;
    PFND3DWDDM1_3DDI_CHECKMULTISAMPLEQUALITYLEVELS          pfnCheckMultisampleQualityLevels;
    PFND3D11_1DDI_CHECKDIRECTFLIPSUPPORT                    pfnCheckDirectFlipSupport;
    PFND3DWDDM1_3DDI_GETMIPPACKING                          pfnGetMipPacking;

    PFND3D11DDI_CALCPRIVATERESOURCESIZE                     pfnCalcPrivateResourceSize;
    PFND3D11DDI_CREATERESOURCE                              pfnCreateResource;
    PFND3D10DDI_DESTROYRESOURCE                             pfnDestroyResource;

    PFND3D10DDI_CALCPRIVATEOPENEDRESOURCESIZE               pfnCalcPrivateOpenedResourceSize;
    PFND3D10DDI_OPENRESOURCE                                pfnOpenResource;

    PFND3D10DDI_CALCPRIVATEELEMENTLAYOUTSIZE                pfnCalcPrivateElementLayoutSize;
    PFND3D10DDI_CREATEELEMENTLAYOUT                         pfnCreateElementLayout;
    PFND3D10DDI_DESTROYELEMENTLAYOUT                        pfnDestroyElementLayout;

    PFND3D11_1DDI_CALCPRIVATEBLENDSTATESIZE                 pfnCalcPrivateBlendStateSize;
    PFND3D11_1DDI_CREATEBLENDSTATE                          pfnCreateBlendState;
    PFND3D10DDI_DESTROYBLENDSTATE                           pfnDestroyBlendState;
    
    PFND3D10DDI_CALCPRIVATEDEPTHSTENCILSTATESIZE            pfnCalcPrivateDepthStencilStateSize;
    PFND3D10DDI_CREATEDEPTHSTENCILSTATE                     pfnCreateDepthStencilState;
    PFND3D10DDI_DESTROYDEPTHSTENCILSTATE                    pfnDestroyDepthStencilState;

    PFND3D12DDI_CALCPRIVATERASTERIZERSTATESIZE              pfnCalcPrivateRasterizerStateSize;
    PFND3D12DDI_CREATERASTERIZERSTATE                       pfnCreateRasterizerState;
    PFND3D10DDI_DESTROYRASTERIZERSTATE                      pfnDestroyRasterizerState;

    PFND3D12DDI_CALC_PRIVATE_SHADER_SIZE                    pfnCalcPrivateShaderSize;
    PFND3D12DDI_CREATE_VERTEX_SHADER                        pfnCreateVertexShader;
    PFND3D12DDI_CREATE_PIXEL_SHADER                         pfnCreatePixelShader;
    PFND3D12DDI_CREATE_GEOMETRY_SHADER                      pfnCreateGeometryShader;
    PFND3D12DDI_CREATE_COMPUTE_SHADER                       pfnCreateComputeShader;

    PFND3D12DDI_CALC_PRIVATE_GEOMETRY_SHADER_WITH_STREAM_OUTPUT pfnCalcPrivateGeometryShaderWithStreamOutput;
    PFND3D12DDI_CREATE_GEOMETRY_SHADER_WITH_STREAM_OUTPUT   pfnCreateGeometryShaderWithStreamOutput;

    PFND3D12DDI_CALC_PRIVATE_TESSELLATION_SHADER_SIZE       pfnCalcPrivateTessellationShaderSize;
    PFND3D12DDI_CREATE_HULL_SHADER                          pfnCreateHullShader;
    PFND3D12DDI_CREATE_DOMAIN_SHADER                        pfnCreateDomainShader;

    PFND3D10DDI_DESTROYSHADER                               pfnDestroyShader;
    
    PFND3D12DDI_CALCPRIVATECOMMANDQUEUESIZE                 pfnCalcPrivateCommandQueueSize;
    PFND3D12DDI_CREATECOMMANDQUEUE                          pfnCreateCommandQueue;
    PFND3D12DDI_DESTROYCOMMANDQUEUE                         pfnDestroyCommandQueue;

    PFND3D12DDI_CALCPRIVATECOMMANDALLOCATORSIZE             pfnCalcPrivateCommandAllocatorSize;
    PFND3D12DDI_CREATECOMMANDALLOCATOR                      pfnCreateCommandAllocator;
    PFND3D12DDI_DESTROYCOMMANDALLOCATOR                     pfnDestroyCommandAllocator;
    PFND3D12DDI_RESETCOMMANDALLOCATOR                       pfnResetCommandAllocator;

    PFND3D12DDI_CALC_PRIVATE_PIPELINE_STATE_SIZE            pfnCalcPrivatePipelineStateSize;
    PFND3D12DDI_CREATE_PIPELINE_STATE                       pfnCreatePipelineState;
    PFND3D12DDI_DESTROY_PIPELINE_STATE                      pfnDestroyPipelineState;

    PFND3D12DDI_CALCPRIVATECOMMANDLISTSIZE                  pfnCalcPrivateCommandListSize;
    PFND3D12DDI_CREATECOMMANDLIST                           pfnCreateCommandList;
    PFND3D12DDI_DESTROYCOMMANDLIST                          pfnDestroyCommandList;

    PFND3D12DDI_RESOURCEMAP                                 pfnMap;
    PFND3D12DDI_RESOURCEUNMAP                               pfnUnmap;

    PFND3D12DDI_CALCPRIVATEFENCESIZE                        pfnCalcPrivateFenceSize;
    PFND3D12DDI_CREATEFENCE                                 pfnCreateFence;
    PFND3D12DDI_DESTROYFENCE                                pfnDestroyFence;

    PFND3D12DDI_CALC_PRIVATE_DESCRIPTOR_HEAP_SIZE           pfnCalcPrivateDescriptorHeapSize;
    PFND3D12DDI_CREATE_DESCRIPTOR_HEAP                      pfnCreateDescriptorHeap;
    PFND3D12DDI_DESTROY_DESCRIPTOR_HEAP                     pfnDestroyDescriptorHeap;
    PFND3D12DDI_GET_DESCRIPTOR_SIZE_IN_BYTES                pfnGetDescriptorSizeInBytes;
    PFND3D12DDI_GET_CPU_DESCRIPTOR_HANDLE_FOR_HEAP_START    pfnGetCPUDescriptorHandleForHeapStart;
    PFND3D12DDI_GET_GPU_DESCRIPTOR_HANDLE_FOR_HEAP_START    pfnGetGPUDescriptorHandleForHeapStart;
    PFND3D12DDI_CREATE_SHADER_RESOURCE_VIEW                 pfnCreateShaderResourceView;
    PFND3D12DDI_CREATE_CONSTANT_BUFFER_VIEW                 pfnCreateConstantBufferView;
    PFND3D12DDI_CREATE_SAMPLER                              pfnCreateSampler;
    PFND3D12DDI_CREATE_UNORDERED_ACCESS_VIEW                pfnCreateUnorderedAccessView;
    PFND3D12DDI_CREATE_RENDER_TARGET_VIEW                   pfnCreateRenderTargetView;
    PFND3D12DDI_CREATE_DEPTH_STENCIL_VIEW                   pfnCreateDepthStencilView;
    PFND3D12DDI_CALC_PRIVATE_ROOT_SIGNATURE_SIZE            pfnCalcPrivateRootSignatureSize;
    PFND3D12DDI_CREATE_ROOT_SIGNATURE                       pfnCreateRootSignature;
    PFND3D12DDI_DESTROY_ROOT_SIGNATURE                      pfnDestroyRootSignature;
    PFND3D12DDI_CALC_PRIVATE_UNORDERED_ACCESS_VIEW_COUNTER_SIZE pfnCalcPrivateUnorderedAccessViewCounterSize;
    PFND3D12DDI_CREATE_UNORDERED_ACCESS_VIEW_COUNTER        pfnCreateUnorderedAccessViewCounter;
    PFND3D12DDI_DESTROY_UNORDERED_ACCESS_VIEW_COUNTER       pfnDestroyUnorderedAccessViewCounter;

    PFND3D12DDI_SERIALIZEOBJECT                             pfnSerializeObject;
    PFND3D12DDI_DESTROYOBJECTSERIALIZATION                  pfnDestroyObjectSerialization;
    PFND3D12DDI_CALCPRIVATEDESERIALIZEDOBJECTSIZE           pfnCalcPrivateDeserializedObjectSize;
    PFND3D12DDI_CREATEDESERIALIZEDOBJECT                    pfnCreateDeserializedObject;

    PFND3D12DDI_MAPHEAP                                     pfnMapHeap;
    PFND3D12DDI_UNMAPHEAP                                   pfnUnmapHeap;
    PFND3D12DDI_CALCPRIVATEHEAPANDRESOURCESIZES             pfnCalcPrivateHeapAndResourceSizes;
    PFND3D12DDI_CREATEHEAPANDRESOURCE                       pfnCreateHeapAndResource;
    PFND3D12DDI_DESTROYHEAPANDRESOURCE                      pfnDestroyHeapAndResource;    

    PFND3D12DDI_MAKERESIDENT2                               pfnMakeResident;
    PFND3D12DDI_EVICT2                                      pfnEvict;
    PFND3D12DDI_CALCPRIVATEOPENEDHEAPANDRESOURCESIZES       pfnCalcPrivateOpenedHeapAndResourceSizes;
    PFND3D12DDI_OPENHEAPANDRESOURCE                         pfnOpenHeapAndResource;

    PFND3D12DDI_COPY_DESCRIPTORS                            pfnCopyDescriptors;
    PFND3D12DDI_COPY_DESCRIPTORS_SIMPLE                     pfnCopyDescriptorsSimple;

    PFND3D12DDI_CALC_PRIVATE_QUERY_HEAP_SIZE                pfnCalcPrivateQueryHeapSize;
    PFND3D12DDI_CREATE_QUERY_HEAP                           pfnCreateQueryHeap;
    PFND3D12DDI_DESTROY_QUERY_HEAP                          pfnDestroyQueryHeap;

    PFND3D12DDI_CALC_PRIVATE_COMMAND_SIGNATURE_SIZE         pfnCalcPrivateCommandSignatureSize;
    PFND3D12DDI_CREATE_COMMAND_SIGNATURE                    pfnCreateCommandSignature;
    PFND3D12DDI_DESTROY_COMMAND_SIGNATURE                   pfnDestroyCommandSignature;

    PFND3D12DDI_CHECKRESOURCEVIRTUALADDRESS                 pfnCheckResourceVirtualAddress;
    
    PFND3D12DDI_CHECKRESOURCEALLOCATIONINFO                 pfnCheckResourceAllocationInfo;
    PFND3D12DDI_CHECKSUBRESOURCEINFO                        pfnCheckSubresourceInfo;
    PFND3D12DDI_CHECKEXISITINGRESOURCEALLOCATIONINFO        pfnCheckExistingResourceAllocationInfo;

    PFND3D12DDI_OFFERRESOURCES                              pfnOfferResources;
    PFND3D12DDI_RECLAIMRESOURCES                            pfnReclaimResources;
} D3D12DDI_DEVICE_FUNCS_CORE;

typedef struct D3D12DDI_COMMAND_QUEUE_FUNCS_CORE
{
    PFND3D12DDI_EXECUTECOMMANDLISTS      pfnExecuteCommandLists;
    PFND3D12DDI_MAKERESIDENT             pfnMakeResident;
    PFND3D12DDI_EVICT                    pfnEvict;
    PFND3D12DDI_UPDATETILEMAPPINGS       pfnUpdateTileMappings;
    PFND3D12DDI_COPYTILEMAPPINGS         pfnCopyTileMappings;
} D3D12DDI_COMMAND_QUEUE_FUNCS_CORE;

typedef struct D3D12DDI_COMMAND_LIST_FUNCS_3D
{
    PFND3D12DDI_CLOSECOMMANDLIST                            pfnCloseCommandList;
    PFND3D12DDI_RESETCOMMANDLIST                            pfnResetCommandList;

    PFND3D12DDI_DRAWINSTANCED                               pfnDrawInstanced;
    PFND3D12DDI_DRAWINDEXEDINSTANCED                        pfnDrawIndexedInstanced;
    PFND3D12DDI_DISPATCH                                    pfnDispatch;
    PFND3D12DDI_CLEAR_UNORDERED_ACCESS_VIEW_UINT            pfnClearUnorderedAccessViewUint;
    PFND3D12DDI_CLEAR_UNORDERED_ACCESS_VIEW_FLOAT           pfnClearUnorderedAccessViewFloat;
    PFND3D12DDI_CLEAR_RENDER_TARGET_VIEW                    pfnClearRenderTargetView;
    PFND3D12DDI_CLEAR_DEPTH_STENCIL_VIEW                    pfnClearDepthStencilView;
    PFND3D12DDI_DISCARD_RESOURCE                            pfnDiscardResource;
    PFND3D12DDI_COPYTEXTUREREGION                           pfnCopyTextureRegion;
    PFND3D12DDI_RESOURCECOPY                                pfnResourceCopy;
    PFND3D12DDI_COPYTILES                                   pfnCopyTiles;
    PFND3D12DDI_COPYBUFFERREGION                            pfnCopyBufferRegion;
    PFND3D12DDI_RESOURCERESOLVESUBRESOURCE                  pfnResourceResolveSubresource;
    PFND3D12DDI_EXECUTE_BUNDLE                              pfnExecuteBundle;
    PFND3D12DDI_EXECUTE_INDIRECT                            pfnExecuteIndirect;
    PFND3D12DDI_RESOURCEBARRIER                             pfnResourceBarrier;
    PFND3D12DDI_BLT                                         pfnBlt;
    PFND3D12DDI_PRESENT                                     pfnPresent;
    PFND3D12DDI_BEGIN_END_QUERY                             pfnBeginQuery;
    PFND3D12DDI_BEGIN_END_QUERY                             pfnEndQuery;
    PFND3D12DDI_RESOLVE_QUERY_DATA                          pfnResolveQueryData;
    PFND3D12DDI_SET_PREDICATION                             pfnSetPredication;

    PFND3D12DDI_IA_SETTOPOLOGY                              pfnIaSetTopology;    
    PFND3D12DDI_RS_SETVIEWPORTS                             pfnRsSetViewports;
    PFND3D12DDI_RS_SETSCISSORRECTS                          pfnRsSetScissorRects;
    PFND3D12DDI_OM_SETBLENDFACTOR                           pfnOmSetBlendFactor;
    PFND3D12DDI_OM_SETSTENCILREF                            pfnOmSetStencilRef;
    PFND3D12DDI_SET_PIPELINE_STATE                          pfnSetPipelineState;

    PFND3D12DDI_SET_DESCRIPTOR_HEAPS                        pfnSetDescriptorHeaps;
    PFND3D12DDI_SET_ROOT_SIGNATURE                          pfnSetComputeRootSignature;
    PFND3D12DDI_SET_ROOT_SIGNATURE                          pfnSetGraphicsRootSignature;
    PFND3D12DDI_SET_ROOT_DESCRIPTOR_TABLE                   pfnSetComputeRootDescriptorTable;
    PFND3D12DDI_SET_ROOT_DESCRIPTOR_TABLE                   pfnSetGraphicsRootDescriptorTable;
    PFND3D12DDI_SET_ROOT_32BIT_CONSTANT                     pfnSetComputeRoot32BitConstant;
    PFND3D12DDI_SET_ROOT_32BIT_CONSTANT                     pfnSetGraphicsRoot32BitConstant;
    PFND3D12DDI_SET_ROOT_32BIT_CONSTANTS                    pfnSetComputeRoot32BitConstants;
    PFND3D12DDI_SET_ROOT_32BIT_CONSTANTS                    pfnSetGraphicsRoot32BitConstants;
    PFND3D12DDI_SET_ROOT_BUFFER_VIEW                        pfnSetComputeRootConstantBufferView;
    PFND3D12DDI_SET_ROOT_BUFFER_VIEW                        pfnSetGraphicsRootConstantBufferView;
    PFND3D12DDI_SET_ROOT_BUFFER_VIEW                        pfnSetComputeRootShaderResourceView;
    PFND3D12DDI_SET_ROOT_BUFFER_VIEW                        pfnSetGraphicsRootShaderResourceView;
    PFND3D12DDI_SET_ROOT_BUFFER_VIEW                        pfnSetComputeRootUnorderedAccessView;
    PFND3D12DDI_SET_ROOT_BUFFER_VIEW                        pfnSetGraphicsRootUnorderedAccessView;

    PFND3D12DDI_IA_SET_INDEX_BUFFER                         pfnIASetIndexBuffer;
    PFND3D12DDI_IA_SET_VERTEX_BUFFERS                       pfnIASetVertexBuffers;
    PFND3D12DDI_SO_SET_TARGETS                              pfnSOSetTargets;
    PFND3D12DDI_OM_SET_RENDER_TARGETS                       pfnOMSetRenderTargets;
    PFND3D12DDI_SET_MARKER                                  pfnSetMarker;
} D3D12DDI_COMMAND_LIST_FUNCS_3D;

//----------------------------------------------------------------------------------------------------------------------------------
// D3D12 DDI V2 types
// Used when the build version is > D3D12DDI_BUILD_VERSION_BEFORE_SUBRESOURCE_REFACTOR
//

// D3D10_2DDICAPS_TYPE values which are passed to GetCaps in the D3D12 DDI V2 and before
// These have been repalced with D3D12DDICAPS_TYPE_SHADER
#define D3D12DDICAPS_RESOURCE_LAYOUT 138
#define D3D12DDICAPS_D3D12_OPTIONS 139
#define D3D12DDICAPS_MEMORY_ARCHITECTURE 140
#define D3D12DDICAPS_TEXTURE_LAYOUT_SETS 141
#define D3D12DDICAPS_TEXTURE_LAYOUT 142
#define D3D12DDICAPS_SWIZZLE_PATTERN 148

// When this flag is passed to CreateDevice, it means that drivers should not perform any implicit multi-GPU optimizations.
#define D3D12DDI_CREATEDEVICE_DISABLE_IMPLICIT_MGPU 0x40

// D3D12DDICAPS_TEXTURE_LAYOUT
    // *pInfo = NULL
    // pData = D3D12DDI_TEXTURE_LAYOUT_CAPS_0001
    // DataSize = sizeof(D3D12DDI_TEXTURE_LAYOUT_CAPS_0001)
typedef struct D3D12DDI_TEXTURE_LAYOUT_CAPS_0001
{
    UINT DeviceDependentLayoutCount; // D3D12DDI_TEXTURE_LAYOUT
    UINT DeviceDependentSwizzleCount; // D3D12DDI_SWIZZLE_PATTERN
    BOOL Supports64KStandardSwizzle;
    BOOL SupportsRowMajorTexture; 
} D3D12DDI_TEXTURE_LAYOUT_CAPS_0001;

typedef enum D3D12DDI_CROSS_NODE_SHARING_TIER
{
    D3D12DDI_CROSS_NODE_SHARING_TIER_NOT_SUPPORTED    = 0,
    D3D12DDI_CROSS_NODE_SHARING_TIER_1_EMULATED  = 1,
    D3D12DDI_CROSS_NODE_SHARING_TIER_1           = 2,
    D3D12DDI_CROSS_NODE_SHARING_TIER_2           = 3,
} D3D12DDI_CROSS_NODE_SHARING_TIER;

// D3D12DDICAPS_D3D12_OPTIONS
typedef struct D3D12DDI_D3D12_OPTIONS_DATA_0001
{
    D3D12DDI_RESOURCE_BINDING_TIER ResourceBindingTier;
    D3D12DDI_CONSERVATIVE_RASTERIZATION_TIER ConservativeRasterizationTier;
    D3D12DDI_TILED_RESOURCES_TIER TiledResourcesTier;
    D3D12DDI_ASTC_PROFILE_SUPPORT ASTCProfileSupport;
    D3D12DDI_CROSS_NODE_SHARING_TIER CrossNodeSharingTier;
} D3D12DDI_D3D12_OPTIONS_DATA_0001;

typedef struct D3D12DDIARG_CREATECOMMANDQUEUE_0001
{
    D3D12DDI_HCOMMANDQUEUE       hDrvCommandQueue;
    D3D12DDI_HRTCOMMANDQUEUE     hRTCommandQueue;
    D3D12DDI_COMMAND_QUEUE_FLAGS QueueFlags;
    UINT                         NodeMask;
} D3D12DDIARG_CREATECOMMANDQUEUE_0001;

typedef SIZE_T ( APIENTRY* PFND3D12DDI_CALCPRIVATECOMMANDQUEUESIZE_0001 )( D3D12DDI_HDEVICE, _In_ CONST D3D12DDIARG_CREATECOMMANDQUEUE_0001* );
typedef HRESULT ( APIENTRY* PFND3D12DDI_CREATECOMMANDQUEUE_0001 )( D3D12DDI_HDEVICE, _In_ CONST D3D12DDIARG_CREATECOMMANDQUEUE_0001* );

typedef struct D3D12DDIARG_CREATE_PIPELINE_STATE_0001
{
    D3D12DDI_HPIPELINESTATE hDrvPipelineState;

    D3D12DDI_HSHADER hComputeShader;
    D3D12DDI_HSHADER hVertexShader;
    D3D12DDI_HSHADER hPixelShader;
    D3D12DDI_HSHADER hDomainShader;
    D3D12DDI_HSHADER hHullShader;
    D3D12DDI_HSHADER hGeometryShader;
    D3D12DDI_HROOTSIGNATURE hRootSignature;
    D3D12DDI_HBLENDSTATE hBlendState;
    UINT SampleMask;
    D3D12DDI_HRASTERIZERSTATE hRasterizerState;
    D3D12DDI_HDEPTHSTENCILSTATE hDepthStencilState;
    D3D12DDI_HELEMENTLAYOUT hElementLayout;
    D3D12DDI_INDEX_BUFFER_STRIP_CUT_VALUE IBStripCutValue;
    D3D12DDI_PRIMITIVE_TOPOLOGY_TYPE PrimitiveTopologyType;
    UINT NumRenderTargets;
    DXGI_FORMAT RTVFormats[8];
    DXGI_FORMAT DSVFormat;
    DXGI_SAMPLE_DESC SampleDesc;
    UINT NodeMask;
} D3D12DDIARG_CREATE_PIPELINE_STATE_0001;

typedef SIZE_T ( APIENTRY* PFND3D12DDI_CALC_PRIVATE_PIPELINE_STATE_SIZE_0001 )( D3D12DDI_HDEVICE, _In_ CONST D3D12DDIARG_CREATE_PIPELINE_STATE_0001* );
typedef HRESULT ( APIENTRY* PFND3D12DDI_CREATE_PIPELINE_STATE_0001 ) ( D3D12DDI_HDEVICE, _In_ CONST D3D12DDIARG_CREATE_PIPELINE_STATE_0001* );

typedef struct D3D12DDIARG_CREATEHEAP_0001
{
    UINT64 ByteSize;
    UINT64 Alignment;
    D3D12DDI_MEMORY_POOL MemoryPool;
    D3D12DDI_CPU_PAGE_PROPERTY CPUPageProperty;
    D3D12DDI_HEAP_FLAGS Flags;
    UINT CreationNodeMask;
    UINT VisibleNodeMask;
} D3D12DDIARG_CREATEHEAP_0001;

typedef D3D12DDI_HEAP_AND_RESOURCE_SIZES ( APIENTRY* PFND3D12DDI_CALCPRIVATEHEAPANDRESOURCESIZES_0001 )(
     D3D12DDI_HDEVICE, _In_opt_ CONST D3D12DDIARG_CREATEHEAP_0001*, _In_opt_ CONST D3D12DDIARG_CREATERESOURCE* );

typedef HRESULT ( APIENTRY* PFND3D12DDI_CREATEHEAPANDRESOURCE_0001 )(
    D3D12DDI_HDEVICE, _In_opt_ CONST D3D12DDIARG_CREATEHEAP_0001*, D3D12DDI_HHEAP, D3D12DDI_HRTRESOURCE,
    _In_opt_ CONST D3D12DDIARG_CREATERESOURCE*, _In_opt_ CONST D3D12DDI_CLEAR_VALUES*, D3D12DDI_HRESOURCE );

typedef VOID ( APIENTRY* PFND3D12DDI_CHECKRESOURCEALLOCATIONINFO_0001 )(
    D3D12DDI_HDEVICE,
    _In_ CONST D3D12DDIARG_CREATERESOURCE*,
    D3D12DDI_RESOURCE_OPTIMIZATION_FLAGS,
    UINT64 AlignmentRestriction,
    UINT VisibleNodeMask,
    _Out_ D3D12DDI_RESOURCE_ALLOCATION_INFO* );

typedef struct D3D12DDIARG_CREATE_DESCRIPTOR_HEAP_0001
{
    D3D12DDI_DESCRIPTOR_HEAP_TYPE Type;
    UINT NumDescriptors;
    D3D12DDI_DESCRIPTOR_HEAP_FLAGS Flags;
    UINT NodeMask;
} D3D12DDIARG_CREATE_DESCRIPTOR_HEAP_0001;

typedef SIZE_T ( APIENTRY* PFND3D12DDI_CALC_PRIVATE_DESCRIPTOR_HEAP_SIZE_0001 )( D3D12DDI_HDEVICE, _In_ CONST D3D12DDIARG_CREATE_DESCRIPTOR_HEAP_0001* );
typedef HRESULT ( APIENTRY* PFND3D12DDI_CREATE_DESCRIPTOR_HEAP_0001 ) ( D3D12DDI_HDEVICE, _In_ CONST D3D12DDIARG_CREATE_DESCRIPTOR_HEAP_0001*, D3D12DDI_HDESCRIPTORHEAP );

typedef struct D3D12DDIARG_CREATE_QUERY_HEAP_0001
{
    D3D12DDI_QUERY_HEAP_TYPE    Type;
    UINT                        Count;
    UINT                        NodeMask;
} D3D12DDIARG_CREATE_QUERY_HEAP_0001;

typedef SIZE_T ( APIENTRY* PFND3D12DDI_CALC_PRIVATE_QUERY_HEAP_SIZE_0001 )( D3D12DDI_HDEVICE, _In_ CONST D3D12DDIARG_CREATE_QUERY_HEAP_0001* );
typedef HRESULT ( APIENTRY* PFND3D12DDI_CREATE_QUERY_HEAP_0001 ) ( D3D12DDI_HDEVICE, _In_ CONST D3D12DDIARG_CREATE_QUERY_HEAP_0001*, D3D12DDI_HQUERYHEAP );

typedef struct D3D12DDIARG_CREATE_COMMAND_SIGNATURE_0001
{
    UINT ByteStride; 
    UINT NumArgumentDescs;
    const D3D12DDI_INDIRECT_ARGUMENT_DESC* pArgumentDescs;
    D3D12DDI_HROOTSIGNATURE hRootSignature;
    UINT NodeMask;
} D3D12DDIARG_CREATE_COMMAND_SIGNATURE_0001;

typedef SIZE_T ( APIENTRY* PFND3D12DDI_CALC_PRIVATE_COMMAND_SIGNATURE_SIZE_0001 )( D3D12DDI_HDEVICE, _In_ CONST D3D12DDIARG_CREATE_COMMAND_SIGNATURE_0001* );
typedef HRESULT ( APIENTRY* PFND3D12DDI_CREATE_COMMAND_SIGNATURE_0001 ) ( D3D12DDI_HDEVICE, _In_ CONST D3D12DDIARG_CREATE_COMMAND_SIGNATURE_0001*, D3D12DDI_HCOMMANDSIGNATURE );

typedef struct D3D12DDIARG_CREATE_ROOT_SIGNATURE_0001
{
    CONST D3D12DDI_ROOT_SIGNATURE* pRootSignature;
    UINT NodeMask;
} D3D12DDIARG_CREATE_ROOT_SIGNATURE_0001;

typedef SIZE_T ( APIENTRY* PFND3D12DDI_CALC_PRIVATE_ROOT_SIGNATURE_SIZE_0001 )( D3D12DDI_HDEVICE, _In_ CONST D3D12DDIARG_CREATE_ROOT_SIGNATURE_0001* );
typedef HRESULT ( APIENTRY* PFND3D12DDI_CREATE_ROOT_SIGNATURE_0001 ) ( D3D12DDI_HDEVICE, _In_ CONST D3D12DDIARG_CREATE_ROOT_SIGNATURE_0001*, D3D12DDI_HROOTSIGNATURE );

typedef struct D3D12DDIARG_CREATE_COMMAND_LIST_0001
{
    D3D12DDI_HCOMMANDLIST        hDrvCommandList;
    D3D12DDI_HRTCOMMANDLIST      hRTCommandList;
    D3D12DDI_HCOMMANDALLOCATOR   hDrvCommandAllocator;
    D3D12DDI_COMMAND_LIST_TYPE   Type;
    D3D12DDI_COMMAND_QUEUE_FLAGS QueueFlags;
    UINT64                       ID;
    D3D12DDI_COMMAND_LIST_FLAGS  CommandListFlags;
    UINT                        NodeMask;
} D3D12DDIARG_CREATE_COMMAND_LIST_0001;

typedef SIZE_T ( APIENTRY* PFND3D12DDI_CALC_PRIVATE_COMMAND_LIST_SIZE_0001 )( D3D12DDI_HDEVICE, _In_ CONST D3D12DDIARG_CREATE_COMMAND_LIST_0001* );
typedef HRESULT ( APIENTRY* PFND3D12DDI_CREATE_COMMAND_LIST_0001 ) ( D3D12DDI_HDEVICE, _In_ CONST D3D12DDIARG_CREATE_COMMAND_LIST_0001* );

typedef UINT ( APIENTRY* PFND3D12DDI_GETIMPLICITPHYSICALADAPTERMASK )( D3D12DDI_HDEVICE );

typedef struct D3D12DDIARG_PRESENT_0001
{
    CONST D3D12DDI_ARG_PRESENTSURFACE*  phSurfacesToPresent;
    UINT                                SurfacesToPresent;
    D3D12DDI_HRESOURCE                  hDstResource;
    UINT                                DstSubResourceIndex;
    DXGI_DDI_PRESENT_FLAGS              Flags;
    DXGI_DDI_FLIP_INTERVAL_TYPE         FlipInterval;
    D3DDDI_VIDEO_PRESENT_SOURCE_ID      VidPnSourceID;
    CONST RECT*                         pDirtyRects;
    UINT                                DirtyRects;
    UINT                                PrivateDriverDataSize;
    VOID*                               pPrivateDriverData;
    BOOL                                OptimizeForComposition;
} D3D12DDIARG_PRESENT_0001;

typedef struct D3D12DDI_PRESENT_0001
{
    D3DKMT_HANDLE   hSrcAllocation;
    D3DKMT_HANDLE   hDstAllocation;
    HANDLE          hContext;
    UINT            BroadcastContextCount;
    HANDLE          BroadcastContext[D3DDDI_MAX_BROADCAST_CONTEXT];
    D3DKMT_HANDLE   BroadcastSrcAllocation[D3DDDI_MAX_BROADCAST_CONTEXT];
    D3DKMT_HANDLE   BroadcastDstAllocation[D3DDDI_MAX_BROADCAST_CONTEXT];
    BOOL            AddedGpuWork;
} D3D12DDI_PRESENT_0001;

typedef VOID ( APIENTRY* PFND3D12DDI_PRESENT_0001 ) ( D3D12DDI_HCOMMANDLIST, D3D12DDI_HCOMMANDQUEUE, _In_ CONST D3D12DDIARG_PRESENT_0001*, _Out_ D3D12DDI_PRESENT_0001* );
typedef UINT ( APIENTRY* PFND3D12DDI_GET_PRESENT_PRIVATE_DRIVER_DATA_SIZE ) ( D3D12DDI_HDEVICE, _In_ CONST D3D12DDIARG_PRESENT_0001* );

typedef struct D3D12DDIARG_MAKERESIDENT_0001
{
    UINT NumAdapters;
    _Field_size_(NumAdapters) CONST D3D12DDI_HRTPAGINGQUEUE* pRTPagingQueue;
    UINT NumObjects;
    _Field_size_(NumObjects) CONST D3D12DDI_HANDLE_AND_TYPE* pObjects;
    D3DDDI_MAKERESIDENT_FLAGS Flags;
    _Field_size_(NumAdapters) UINT64* pPagingFenceValue;    // out: Fence to wait on
    UINT WaitMask;                                          // out: Bit "i" is set if PagingFenceValue[i] is valid.  Only if MakeResident returns E_PENDING.
} D3D12DDIARG_MAKERESIDENT_0001;

typedef struct D3D12DDIARG_RECLAIMRESOURCES_0001
{
    UINT NumAdapters;
    _Field_size_(NumAdapters) CONST D3D12DDI_HRTPAGINGQUEUE* pRTPagingQueue;
    UINT NumObjects;
    _Field_size_(NumObjects) CONST D3D12DDI_HANDLE_AND_TYPE* pObjects;
    _Field_size_(NumObjects) BOOL* pDiscarded;
    _Field_size_(NumAdapters) UINT64* pPagingFenceValue;    // out: Fence to wait on
    UINT WaitMask;                                          // out: Bit "i" is set if PagingFenceValue[i] is valid.  Only if MakeResident returns E_PENDING.
} D3D12DDIARG_RECLAIMRESOURCES_0001;

typedef HRESULT ( APIENTRY* PFND3D12DDI_MAKERESIDENT_0001 )(
     D3D12DDI_HDEVICE, D3D12DDIARG_MAKERESIDENT_0001* );

typedef HRESULT ( APIENTRY* PFND3D12DDI_RECLAIMRESOURCES_0001 )(
     D3D12DDI_HDEVICE, D3D12DDIARG_RECLAIMRESOURCES_0001* );

typedef struct D3D12DDIARG_FENCE_OPERATION
{
    D3D12DDI_HFENCE Fence;
    UINT64 Value;
    UINT PhysicalAdapterMask; // Out: The set of adapters to broadcast the operation to
} D3D12DDIARG_FENCE_OPERATION;

typedef void( APIENTRY* PFND3D12DDI_SIGNAL_FENCE )( D3D12DDI_HCOMMANDQUEUE, D3D12DDIARG_FENCE_OPERATION*);
typedef void( APIENTRY* PFND3D12DDI_WAIT_FOR_FENCE )( D3D12DDI_HCOMMANDQUEUE, D3D12DDIARG_FENCE_OPERATION*); 

#define D3D12DDI_NODE_MAP_HIDE_NODE 0xffffffff

typedef VOID ( APIENTRY* PFND3D12DDI_QUERY_NODE_MAP )(D3D12DDI_HDEVICE, UINT NumPhysicalAdapters, _Out_writes_( NumPhysicalAdapters) UINT* pMap);

typedef HRESULT ( APIENTRY* PFND3D12DDI_RETRIEVE_SHADER_COMMENT )(
    D3D12DDI_HDEVICE, D3D12DDI_HSHADER, _Out_writes_z_(*CharacterCountIncludingNullTerminator) WCHAR * pBuffer, _Inout_ SIZE_T * CharacterCountIncludingNullTerminator );

typedef enum D3D12DDI_RESOURCE_TRANSITION_BARRIER_FLAGS_0001
{
    D3D12DDI_RESOURCE_TRANSITION_BARRIER_FLAG_NONE = 0x0,
    D3D12DDI_RESOURCE_TRANSITION_BARRIER_FLAG_DEPTH_ONLY = 0x1,
    D3D12DDI_RESOURCE_TRANSITION_BARRIER_FLAG_STENCIL_ONLY = 0x2,
} D3D12DDI_RESOURCE_TRANSITION_BARRIER_FLAGS_0001;
DEFINE_ENUM_FLAG_OPERATORS( D3D12DDI_RESOURCE_TRANSITION_BARRIER_FLAGS_0001 );

typedef struct D3D12DDI_RESOURCE_TRANSITION_BARRIER_0001
{
    D3D12DDI_HRESOURCE hResource;
    UINT Subresource;
    D3D12DDI_RESOURCE_USAGE StateBefore;
    D3D12DDI_RESOURCE_USAGE StateAfter;
    D3D12DDI_RESOURCE_TRANSITION_BARRIER_FLAGS_0001 Flags;
} D3D12DDI_RESOURCE_TRANSITION_BARRIER_0001;

typedef struct D3D12DDIARG_RESOURCE_BARRIER_0001
{
    D3D12DDI_RESOURCE_BARRIER_TYPE    Type;

    union
    {
        D3D12DDI_RESOURCE_TRANSITION_BARRIER_0001 Transition;
        D3D12DDI_RESOURCE_ALIASING_BARRIER             Aliasing;
        D3D12DDI_RESOURCE_UAV_BARRIER                  UAV;
    };
} D3D12DDIARG_RESOURCE_BARRIER_0001;

typedef VOID ( APIENTRY* PFND3D12DDI_RESOURCEBARRIER_0001 )(
    D3D12DDI_HCOMMANDLIST, UINT Count, _In_reads_(Count) CONST D3D12DDIARG_RESOURCE_BARRIER_0001* pResourceBarriers);

typedef struct D3D12DDI_COMMAND_QUEUE_FUNCS_CORE_0001
{
    PFND3D12DDI_EXECUTECOMMANDLISTS         pfnExecuteCommandLists;
    PFND3D12DDI_MAKERESIDENT                pfnMakeResident;
    PFND3D12DDI_EVICT                       pfnEvict;
    PFND3D12DDI_UPDATETILEMAPPINGS          pfnUpdateTileMappings;
    PFND3D12DDI_COPYTILEMAPPINGS            pfnCopyTileMappings;
    PFND3D12DDI_SIGNAL_FENCE                pfnSignalFence;
    PFND3D12DDI_WAIT_FOR_FENCE              pfnWaitForFence;
} D3D12DDI_COMMAND_QUEUE_FUNCS_CORE_0001;

typedef struct D3D12DDI_DEVICE_FUNCS_CORE_0001
{
    PFND3D10DDI_DESTROYDEVICE                               pfnDestroyDevice;

    PFND3D11_1DDI_ASSIGNDEBUGBINARY                         pfnAssignDebugBinary;

    PFND3D10DDI_CHECKFORMATSUPPORT                          pfnCheckFormatSupport;
    PFND3DWDDM1_3DDI_CHECKMULTISAMPLEQUALITYLEVELS          pfnCheckMultisampleQualityLevels;
    PFND3D11_1DDI_CHECKDIRECTFLIPSUPPORT                    pfnCheckDirectFlipSupport;
    PFND3DWDDM1_3DDI_GETMIPPACKING                          pfnGetMipPacking;

    PFND3D11DDI_CALCPRIVATERESOURCESIZE                     pfnCalcPrivateResourceSize;
    PFND3D11DDI_CREATERESOURCE                              pfnCreateResource;
    PFND3D10DDI_DESTROYRESOURCE                             pfnDestroyResource;

    PFND3D10DDI_CALCPRIVATEOPENEDRESOURCESIZE               pfnCalcPrivateOpenedResourceSize;
    PFND3D10DDI_OPENRESOURCE                                pfnOpenResource;

    PFND3D10DDI_CALCPRIVATEELEMENTLAYOUTSIZE                pfnCalcPrivateElementLayoutSize;
    PFND3D10DDI_CREATEELEMENTLAYOUT                         pfnCreateElementLayout;
    PFND3D10DDI_DESTROYELEMENTLAYOUT                        pfnDestroyElementLayout;

    PFND3D11_1DDI_CALCPRIVATEBLENDSTATESIZE                 pfnCalcPrivateBlendStateSize;
    PFND3D11_1DDI_CREATEBLENDSTATE                          pfnCreateBlendState;
    PFND3D10DDI_DESTROYBLENDSTATE                           pfnDestroyBlendState;
    
    PFND3D10DDI_CALCPRIVATEDEPTHSTENCILSTATESIZE            pfnCalcPrivateDepthStencilStateSize;
    PFND3D10DDI_CREATEDEPTHSTENCILSTATE                     pfnCreateDepthStencilState;
    PFND3D10DDI_DESTROYDEPTHSTENCILSTATE                    pfnDestroyDepthStencilState;

    PFND3D12DDI_CALCPRIVATERASTERIZERSTATESIZE              pfnCalcPrivateRasterizerStateSize;
    PFND3D12DDI_CREATERASTERIZERSTATE                       pfnCreateRasterizerState;
    PFND3D10DDI_DESTROYRASTERIZERSTATE                      pfnDestroyRasterizerState;

    PFND3D12DDI_CALC_PRIVATE_SHADER_SIZE                    pfnCalcPrivateShaderSize;
    PFND3D12DDI_CREATE_VERTEX_SHADER                        pfnCreateVertexShader;
    PFND3D12DDI_CREATE_PIXEL_SHADER                         pfnCreatePixelShader;
    PFND3D12DDI_CREATE_GEOMETRY_SHADER                      pfnCreateGeometryShader;
    PFND3D12DDI_CREATE_COMPUTE_SHADER                       pfnCreateComputeShader;

    PFND3D12DDI_CALC_PRIVATE_GEOMETRY_SHADER_WITH_STREAM_OUTPUT pfnCalcPrivateGeometryShaderWithStreamOutput;
    PFND3D12DDI_CREATE_GEOMETRY_SHADER_WITH_STREAM_OUTPUT   pfnCreateGeometryShaderWithStreamOutput;

    PFND3D12DDI_CALC_PRIVATE_TESSELLATION_SHADER_SIZE       pfnCalcPrivateTessellationShaderSize;
    PFND3D12DDI_CREATE_HULL_SHADER                          pfnCreateHullShader;
    PFND3D12DDI_CREATE_DOMAIN_SHADER                        pfnCreateDomainShader;

    PFND3D10DDI_DESTROYSHADER                               pfnDestroyShader;
    
    PFND3D12DDI_CALCPRIVATECOMMANDQUEUESIZE_0001              pfnCalcPrivateCommandQueueSize;
    PFND3D12DDI_CREATECOMMANDQUEUE_0001                       pfnCreateCommandQueue;
    PFND3D12DDI_DESTROYCOMMANDQUEUE                         pfnDestroyCommandQueue;

    PFND3D12DDI_CALCPRIVATECOMMANDALLOCATORSIZE             pfnCalcPrivateCommandAllocatorSize;
    PFND3D12DDI_CREATECOMMANDALLOCATOR                      pfnCreateCommandAllocator;
    PFND3D12DDI_DESTROYCOMMANDALLOCATOR                     pfnDestroyCommandAllocator;
    PFND3D12DDI_RESETCOMMANDALLOCATOR                       pfnResetCommandAllocator;

    PFND3D12DDI_CALC_PRIVATE_PIPELINE_STATE_SIZE_0001         pfnCalcPrivatePipelineStateSize;
    PFND3D12DDI_CREATE_PIPELINE_STATE_0001                    pfnCreatePipelineState;
    PFND3D12DDI_DESTROY_PIPELINE_STATE                      pfnDestroyPipelineState;

    PFND3D12DDI_CALC_PRIVATE_COMMAND_LIST_SIZE_0001           pfnCalcPrivateCommandListSize;
    PFND3D12DDI_CREATE_COMMAND_LIST_0001                      pfnCreateCommandList;
    PFND3D12DDI_DESTROYCOMMANDLIST                          pfnDestroyCommandList;

    PFND3D12DDI_RESOURCEMAP                                 pfnMap;
    PFND3D12DDI_RESOURCEUNMAP                               pfnUnmap;

    PFND3D12DDI_CALCPRIVATEFENCESIZE                        pfnCalcPrivateFenceSize;
    PFND3D12DDI_CREATEFENCE                                 pfnCreateFence;
    PFND3D12DDI_DESTROYFENCE                                pfnDestroyFence;

    PFND3D12DDI_CALC_PRIVATE_DESCRIPTOR_HEAP_SIZE_0001        pfnCalcPrivateDescriptorHeapSize;
    PFND3D12DDI_CREATE_DESCRIPTOR_HEAP_0001                   pfnCreateDescriptorHeap;
    PFND3D12DDI_DESTROY_DESCRIPTOR_HEAP                     pfnDestroyDescriptorHeap;
    PFND3D12DDI_GET_DESCRIPTOR_SIZE_IN_BYTES                pfnGetDescriptorSizeInBytes;
    PFND3D12DDI_GET_CPU_DESCRIPTOR_HANDLE_FOR_HEAP_START    pfnGetCPUDescriptorHandleForHeapStart;
    PFND3D12DDI_GET_GPU_DESCRIPTOR_HANDLE_FOR_HEAP_START    pfnGetGPUDescriptorHandleForHeapStart;
    PFND3D12DDI_CREATE_SHADER_RESOURCE_VIEW                 pfnCreateShaderResourceView;
    PFND3D12DDI_CREATE_CONSTANT_BUFFER_VIEW                 pfnCreateConstantBufferView;
    PFND3D12DDI_CREATE_SAMPLER                              pfnCreateSampler;
    PFND3D12DDI_CREATE_UNORDERED_ACCESS_VIEW                pfnCreateUnorderedAccessView;
    PFND3D12DDI_CREATE_RENDER_TARGET_VIEW                   pfnCreateRenderTargetView;
    PFND3D12DDI_CREATE_DEPTH_STENCIL_VIEW                   pfnCreateDepthStencilView;
    PFND3D12DDI_CALC_PRIVATE_ROOT_SIGNATURE_SIZE_0001         pfnCalcPrivateRootSignatureSize;
    PFND3D12DDI_CREATE_ROOT_SIGNATURE_0001                    pfnCreateRootSignature;
    PFND3D12DDI_DESTROY_ROOT_SIGNATURE                      pfnDestroyRootSignature;
    PFND3D12DDI_CALC_PRIVATE_UNORDERED_ACCESS_VIEW_COUNTER_SIZE pfnCalcPrivateUnorderedAccessViewCounterSize;
    PFND3D12DDI_CREATE_UNORDERED_ACCESS_VIEW_COUNTER        pfnCreateUnorderedAccessViewCounter;
    PFND3D12DDI_DESTROY_UNORDERED_ACCESS_VIEW_COUNTER       pfnDestroyUnorderedAccessViewCounter;

    PFND3D12DDI_SERIALIZEOBJECT                             pfnSerializeObject;
    PFND3D12DDI_DESTROYOBJECTSERIALIZATION                  pfnDestroyObjectSerialization;
    PFND3D12DDI_CALCPRIVATEDESERIALIZEDOBJECTSIZE           pfnCalcPrivateDeserializedObjectSize;
    PFND3D12DDI_CREATEDESERIALIZEDOBJECT                    pfnCreateDeserializedObject;

    PFND3D12DDI_MAPHEAP                                     pfnMapHeap;
    PFND3D12DDI_UNMAPHEAP                                   pfnUnmapHeap;
    PFND3D12DDI_CALCPRIVATEHEAPANDRESOURCESIZES_0001          pfnCalcPrivateHeapAndResourceSizes;
    PFND3D12DDI_CREATEHEAPANDRESOURCE_0001                    pfnCreateHeapAndResource;
    PFND3D12DDI_DESTROYHEAPANDRESOURCE                      pfnDestroyHeapAndResource;

    PFND3D12DDI_MAKERESIDENT_0001                           pfnMakeResident;
    PFND3D12DDI_EVICT2                                      pfnEvict;
    PFND3D12DDI_CALCPRIVATEOPENEDHEAPANDRESOURCESIZES       pfnCalcPrivateOpenedHeapAndResourceSizes;
    PFND3D12DDI_OPENHEAPANDRESOURCE                         pfnOpenHeapAndResource;

    PFND3D12DDI_COPY_DESCRIPTORS                            pfnCopyDescriptors;
    PFND3D12DDI_COPY_DESCRIPTORS_SIMPLE                     pfnCopyDescriptorsSimple;

    PFND3D12DDI_CALC_PRIVATE_QUERY_HEAP_SIZE_0001             pfnCalcPrivateQueryHeapSize;
    PFND3D12DDI_CREATE_QUERY_HEAP_0001                        pfnCreateQueryHeap;
    PFND3D12DDI_DESTROY_QUERY_HEAP                          pfnDestroyQueryHeap;

    PFND3D12DDI_CALC_PRIVATE_COMMAND_SIGNATURE_SIZE_0001      pfnCalcPrivateCommandSignatureSize;
    PFND3D12DDI_CREATE_COMMAND_SIGNATURE_0001                 pfnCreateCommandSignature;
    PFND3D12DDI_DESTROY_COMMAND_SIGNATURE                   pfnDestroyCommandSignature;

    PFND3D12DDI_CHECKRESOURCEVIRTUALADDRESS                 pfnCheckResourceVirtualAddress;
    
    PFND3D12DDI_CHECKRESOURCEALLOCATIONINFO_0001              pfnCheckResourceAllocationInfo;
    PFND3D12DDI_CHECKSUBRESOURCEINFO                        pfnCheckSubresourceInfo;
    PFND3D12DDI_CHECKEXISITINGRESOURCEALLOCATIONINFO        pfnCheckExistingResourceAllocationInfo;

    PFND3D12DDI_OFFERRESOURCES                              pfnOfferResources;
    PFND3D12DDI_RECLAIMRESOURCES_0001                         pfnReclaimResources;

    PFND3D12DDI_GETIMPLICITPHYSICALADAPTERMASK              pfnGetImplicitPhysicalAdapterMask;
    PFND3D12DDI_GET_PRESENT_PRIVATE_DRIVER_DATA_SIZE        pfnGetPresentPrivateDriverDataSize;
    PFND3D12DDI_QUERY_NODE_MAP                              pfnQueryNodeMap;
    PFND3D12DDI_RETRIEVE_SHADER_COMMENT                     pfnRetrieveShaderComment;
} D3D12DDI_DEVICE_FUNCS_CORE_0001;

typedef struct D3D12DDI_COMMAND_LIST_FUNCS_3D_0001
{
    PFND3D12DDI_CLOSECOMMANDLIST                            pfnCloseCommandList;
    PFND3D12DDI_RESETCOMMANDLIST                            pfnResetCommandList;

    PFND3D12DDI_DRAWINSTANCED                               pfnDrawInstanced;
    PFND3D12DDI_DRAWINDEXEDINSTANCED                        pfnDrawIndexedInstanced;
    PFND3D12DDI_DISPATCH                                    pfnDispatch;
    PFND3D12DDI_CLEAR_UNORDERED_ACCESS_VIEW_UINT            pfnClearUnorderedAccessViewUint;
    PFND3D12DDI_CLEAR_UNORDERED_ACCESS_VIEW_FLOAT           pfnClearUnorderedAccessViewFloat;
    PFND3D12DDI_CLEAR_RENDER_TARGET_VIEW                    pfnClearRenderTargetView;
    PFND3D12DDI_CLEAR_DEPTH_STENCIL_VIEW                    pfnClearDepthStencilView;
    PFND3D12DDI_DISCARD_RESOURCE                            pfnDiscardResource;
    PFND3D12DDI_COPYTEXTUREREGION                           pfnCopyTextureRegion;
    PFND3D12DDI_RESOURCECOPY                                pfnResourceCopy;
    PFND3D12DDI_COPYTILES                                   pfnCopyTiles;
    PFND3D12DDI_COPYBUFFERREGION                            pfnCopyBufferRegion;
    PFND3D12DDI_RESOURCERESOLVESUBRESOURCE                  pfnResourceResolveSubresource;
    PFND3D12DDI_EXECUTE_BUNDLE                              pfnExecuteBundle;
    PFND3D12DDI_EXECUTE_INDIRECT                            pfnExecuteIndirect;
    PFND3D12DDI_RESOURCEBARRIER_0001                        pfnResourceBarrier;
    PFND3D12DDI_BLT                                         pfnBlt;
    PFND3D12DDI_PRESENT_0001                                pfnPresent;
    PFND3D12DDI_BEGIN_END_QUERY                             pfnBeginQuery;
    PFND3D12DDI_BEGIN_END_QUERY                             pfnEndQuery;
    PFND3D12DDI_RESOLVE_QUERY_DATA                          pfnResolveQueryData;
    PFND3D12DDI_SET_PREDICATION                             pfnSetPredication;

    PFND3D12DDI_IA_SETTOPOLOGY                              pfnIaSetTopology;    
    PFND3D12DDI_RS_SETVIEWPORTS                             pfnRsSetViewports;
    PFND3D12DDI_RS_SETSCISSORRECTS                          pfnRsSetScissorRects;
    PFND3D12DDI_OM_SETBLENDFACTOR                           pfnOmSetBlendFactor;
    PFND3D12DDI_OM_SETSTENCILREF                            pfnOmSetStencilRef;
    PFND3D12DDI_SET_PIPELINE_STATE                          pfnSetPipelineState;

    PFND3D12DDI_SET_DESCRIPTOR_HEAPS                        pfnSetDescriptorHeaps;
    PFND3D12DDI_SET_ROOT_SIGNATURE                          pfnSetComputeRootSignature;
    PFND3D12DDI_SET_ROOT_SIGNATURE                          pfnSetGraphicsRootSignature;
    PFND3D12DDI_SET_ROOT_DESCRIPTOR_TABLE                   pfnSetComputeRootDescriptorTable;
    PFND3D12DDI_SET_ROOT_DESCRIPTOR_TABLE                   pfnSetGraphicsRootDescriptorTable;
    PFND3D12DDI_SET_ROOT_32BIT_CONSTANT                     pfnSetComputeRoot32BitConstant;
    PFND3D12DDI_SET_ROOT_32BIT_CONSTANT                     pfnSetGraphicsRoot32BitConstant;
    PFND3D12DDI_SET_ROOT_32BIT_CONSTANTS                    pfnSetComputeRoot32BitConstants;
    PFND3D12DDI_SET_ROOT_32BIT_CONSTANTS                    pfnSetGraphicsRoot32BitConstants;
    PFND3D12DDI_SET_ROOT_BUFFER_VIEW                        pfnSetComputeRootConstantBufferView;
    PFND3D12DDI_SET_ROOT_BUFFER_VIEW                        pfnSetGraphicsRootConstantBufferView;
    PFND3D12DDI_SET_ROOT_BUFFER_VIEW                        pfnSetComputeRootShaderResourceView;
    PFND3D12DDI_SET_ROOT_BUFFER_VIEW                        pfnSetGraphicsRootShaderResourceView;
    PFND3D12DDI_SET_ROOT_BUFFER_VIEW                        pfnSetComputeRootUnorderedAccessView;
    PFND3D12DDI_SET_ROOT_BUFFER_VIEW                        pfnSetGraphicsRootUnorderedAccessView;

    PFND3D12DDI_IA_SET_INDEX_BUFFER                         pfnIASetIndexBuffer;
    PFND3D12DDI_IA_SET_VERTEX_BUFFERS                       pfnIASetVertexBuffers;
    PFND3D12DDI_SO_SET_TARGETS                              pfnSOSetTargets;
    PFND3D12DDI_OM_SET_RENDER_TARGETS                       pfnOMSetRenderTargets;
    PFND3D12DDI_SET_MARKER                                  pfnSetMarker;
} D3D12DDI_COMMAND_LIST_FUNCS_3D_0001;


//----------------------------------------------------------------------------------------------------------------------------------
// D3D12 DDI Revision 0002
// Used when the build version is > D3D12DDI_BUILD_VERSION_BEFORE_SUBRESOURCE_REFACTOR2
//

typedef struct D3D12DDIARG_TEX2D_SHADER_RESOURCE_VIEW_0002
{
    UINT     MostDetailedMip;
    UINT     FirstArraySlice;
    UINT     MipLevels;
    UINT     ArraySize;
    UINT     PlaneSlice;
    FLOAT    ResourceMinLODClamp;
} D3D12DDIARG_TEX2D_SHADER_RESOURCE_VIEW_0002;

typedef struct D3D12DDIARG_CREATE_SHADER_RESOURCE_VIEW_0002
{
    D3D12DDI_HRESOURCE    hDrvResource;
    DXGI_FORMAT           Format;
    D3D12DDI_RESOURCE_DIMENSION ResourceDimension;
    UINT                  Shader4ComponentMapping;

    union
    {
        D3D12DDIARG_BUFFER_SHADER_RESOURCE_VIEW         Buffer;
        D3D12DDIARG_TEX1D_SHADER_RESOURCE_VIEW          Tex1D;
        D3D12DDIARG_TEX2D_SHADER_RESOURCE_VIEW_0002     Tex2D;
        D3D12DDIARG_TEX3D_SHADER_RESOURCE_VIEW          Tex3D;
        D3D12DDIARG_TEXCUBE_SHADER_RESOURCE_VIEW        TexCube;
    };
} D3D12DDIARG_CREATE_SHADER_RESOURCE_VIEW_0002;


typedef struct D3D12DDIARG_TEX2D_UNORDERED_ACCESS_VIEW_0002
{
    UINT     MipSlice;
    UINT     FirstArraySlice;
    UINT     ArraySize;
    UINT     PlaneSlice;
} D3D12DDIARG_TEX2D_UNORDERED_ACCESS_VIEW_0002;

typedef struct D3D12DDIARG_CREATE_UNORDERED_ACCESS_VIEW_0002
{
    D3D12DDI_HRESOURCE    hDrvResource;
    DXGI_FORMAT           Format;
    D3D12DDI_RESOURCE_DIMENSION ResourceDimension; // Runtime will never set
                                                   // this to TexCube

    union
    {
        D3D12DDIARG_BUFFER_UNORDERED_ACCESS_VIEW        Buffer;
        D3D12DDIARG_TEX1D_UNORDERED_ACCESS_VIEW         Tex1D;
        D3D12DDIARG_TEX2D_UNORDERED_ACCESS_VIEW_0002    Tex2D;
        D3D12DDIARG_TEX3D_UNORDERED_ACCESS_VIEW         Tex3D;
    };
} D3D12DDIARG_CREATE_UNORDERED_ACCESS_VIEW_0002;

typedef struct D3D12DDIARG_TEX2D_RENDER_TARGET_VIEW_0002
{
    UINT     MipSlice;
    UINT     FirstArraySlice;
    UINT     ArraySize;
    UINT     PlaneSlice;
} D3D12DDIARG_TEX2D_RENDER_TARGET_VIEW_0002;

typedef struct D3D12DDIARG_CREATE_RENDER_TARGET_VIEW_0002
{
    D3D12DDI_HRESOURCE    hDrvResource;
    DXGI_FORMAT           Format;
    D3D12DDI_RESOURCE_DIMENSION ResourceDimension;

    union
    {
        D3D12DDIARG_BUFFER_RENDER_TARGET_VIEW       Buffer;
        D3D12DDIARG_TEX1D_RENDER_TARGET_VIEW        Tex1D;
        D3D12DDIARG_TEX2D_RENDER_TARGET_VIEW_0002   Tex2D;
        D3D12DDIARG_TEX3D_RENDER_TARGET_VIEW        Tex3D;
        D3D12DDIARG_TEXCUBE_RENDER_TARGET_VIEW      TexCube;
    };
} D3D12DDIARG_CREATE_RENDER_TARGET_VIEW_0002;

typedef VOID ( APIENTRY* PFND3D12DDI_CREATE_SHADER_RESOURCE_VIEW_0002  )( D3D12DDI_HDEVICE, _In_ CONST D3D12DDIARG_CREATE_SHADER_RESOURCE_VIEW_0002 *, _In_ D3D12DDI_CPU_DESCRIPTOR_HANDLE DestDescriptor );
typedef VOID ( APIENTRY* PFND3D12DDI_CREATE_UNORDERED_ACCESS_VIEW_0002 )( D3D12DDI_HDEVICE, _In_ CONST D3D12DDIARG_CREATE_UNORDERED_ACCESS_VIEW_0002 *, _In_ D3D12DDI_CPU_DESCRIPTOR_HANDLE DestDescriptor );
typedef VOID ( APIENTRY* PFND3D12DDI_CREATE_RENDER_TARGET_VIEW_0002 )( D3D12DDI_HDEVICE, _In_ CONST D3D12DDIARG_CREATE_RENDER_TARGET_VIEW_0002 *, _In_ D3D12DDI_CPU_DESCRIPTOR_HANDLE DestDescriptor );

typedef struct D3D12DDI_DEVICE_FUNCS_CORE_0002
{
    PFND3D10DDI_DESTROYDEVICE                               pfnDestroyDevice;

    PFND3D11_1DDI_ASSIGNDEBUGBINARY                         pfnAssignDebugBinary;

    PFND3D10DDI_CHECKFORMATSUPPORT                          pfnCheckFormatSupport;
    PFND3DWDDM1_3DDI_CHECKMULTISAMPLEQUALITYLEVELS          pfnCheckMultisampleQualityLevels;
    PFND3D11_1DDI_CHECKDIRECTFLIPSUPPORT                    pfnCheckDirectFlipSupport;
    PFND3DWDDM1_3DDI_GETMIPPACKING                          pfnGetMipPacking;

    PFND3D11DDI_CALCPRIVATERESOURCESIZE                     pfnCalcPrivateResourceSize;
    PFND3D11DDI_CREATERESOURCE                              pfnCreateResource;
    PFND3D10DDI_DESTROYRESOURCE                             pfnDestroyResource;

    PFND3D10DDI_CALCPRIVATEOPENEDRESOURCESIZE               pfnCalcPrivateOpenedResourceSize;
    PFND3D10DDI_OPENRESOURCE                                pfnOpenResource;

    PFND3D10DDI_CALCPRIVATEELEMENTLAYOUTSIZE                pfnCalcPrivateElementLayoutSize;
    PFND3D10DDI_CREATEELEMENTLAYOUT                         pfnCreateElementLayout;
    PFND3D10DDI_DESTROYELEMENTLAYOUT                        pfnDestroyElementLayout;

    PFND3D11_1DDI_CALCPRIVATEBLENDSTATESIZE                 pfnCalcPrivateBlendStateSize;
    PFND3D11_1DDI_CREATEBLENDSTATE                          pfnCreateBlendState;
    PFND3D10DDI_DESTROYBLENDSTATE                           pfnDestroyBlendState;
    
    PFND3D10DDI_CALCPRIVATEDEPTHSTENCILSTATESIZE            pfnCalcPrivateDepthStencilStateSize;
    PFND3D10DDI_CREATEDEPTHSTENCILSTATE                     pfnCreateDepthStencilState;
    PFND3D10DDI_DESTROYDEPTHSTENCILSTATE                    pfnDestroyDepthStencilState;

    PFND3D12DDI_CALCPRIVATERASTERIZERSTATESIZE              pfnCalcPrivateRasterizerStateSize;
    PFND3D12DDI_CREATERASTERIZERSTATE                       pfnCreateRasterizerState;
    PFND3D10DDI_DESTROYRASTERIZERSTATE                      pfnDestroyRasterizerState;

    PFND3D12DDI_CALC_PRIVATE_SHADER_SIZE                    pfnCalcPrivateShaderSize;
    PFND3D12DDI_CREATE_VERTEX_SHADER                        pfnCreateVertexShader;
    PFND3D12DDI_CREATE_PIXEL_SHADER                         pfnCreatePixelShader;
    PFND3D12DDI_CREATE_GEOMETRY_SHADER                      pfnCreateGeometryShader;
    PFND3D12DDI_CREATE_COMPUTE_SHADER                       pfnCreateComputeShader;

    PFND3D12DDI_CALC_PRIVATE_GEOMETRY_SHADER_WITH_STREAM_OUTPUT pfnCalcPrivateGeometryShaderWithStreamOutput;
    PFND3D12DDI_CREATE_GEOMETRY_SHADER_WITH_STREAM_OUTPUT   pfnCreateGeometryShaderWithStreamOutput;

    PFND3D12DDI_CALC_PRIVATE_TESSELLATION_SHADER_SIZE       pfnCalcPrivateTessellationShaderSize;
    PFND3D12DDI_CREATE_HULL_SHADER                          pfnCreateHullShader;
    PFND3D12DDI_CREATE_DOMAIN_SHADER                        pfnCreateDomainShader;

    PFND3D10DDI_DESTROYSHADER                               pfnDestroyShader;
    
    PFND3D12DDI_CALCPRIVATECOMMANDQUEUESIZE_0001            pfnCalcPrivateCommandQueueSize;
    PFND3D12DDI_CREATECOMMANDQUEUE_0001                     pfnCreateCommandQueue;
    PFND3D12DDI_DESTROYCOMMANDQUEUE                         pfnDestroyCommandQueue;

    PFND3D12DDI_CALCPRIVATECOMMANDALLOCATORSIZE             pfnCalcPrivateCommandAllocatorSize;
    PFND3D12DDI_CREATECOMMANDALLOCATOR                      pfnCreateCommandAllocator;
    PFND3D12DDI_DESTROYCOMMANDALLOCATOR                     pfnDestroyCommandAllocator;
    PFND3D12DDI_RESETCOMMANDALLOCATOR                       pfnResetCommandAllocator;

    PFND3D12DDI_CALC_PRIVATE_PIPELINE_STATE_SIZE_0001       pfnCalcPrivatePipelineStateSize;
    PFND3D12DDI_CREATE_PIPELINE_STATE_0001                  pfnCreatePipelineState;
    PFND3D12DDI_DESTROY_PIPELINE_STATE                      pfnDestroyPipelineState;

    PFND3D12DDI_CALC_PRIVATE_COMMAND_LIST_SIZE_0001         pfnCalcPrivateCommandListSize;
    PFND3D12DDI_CREATE_COMMAND_LIST_0001                    pfnCreateCommandList;
    PFND3D12DDI_DESTROYCOMMANDLIST                          pfnDestroyCommandList;

    PFND3D12DDI_RESOURCEMAP                                 pfnMap;
    PFND3D12DDI_RESOURCEUNMAP                               pfnUnmap;

    PFND3D12DDI_CALCPRIVATEFENCESIZE                        pfnCalcPrivateFenceSize;
    PFND3D12DDI_CREATEFENCE                                 pfnCreateFence;
    PFND3D12DDI_DESTROYFENCE                                pfnDestroyFence;

    PFND3D12DDI_CALC_PRIVATE_DESCRIPTOR_HEAP_SIZE_0001      pfnCalcPrivateDescriptorHeapSize;
    PFND3D12DDI_CREATE_DESCRIPTOR_HEAP_0001                 pfnCreateDescriptorHeap;
    PFND3D12DDI_DESTROY_DESCRIPTOR_HEAP                     pfnDestroyDescriptorHeap;
    PFND3D12DDI_GET_DESCRIPTOR_SIZE_IN_BYTES                pfnGetDescriptorSizeInBytes;
    PFND3D12DDI_GET_CPU_DESCRIPTOR_HANDLE_FOR_HEAP_START    pfnGetCPUDescriptorHandleForHeapStart;
    PFND3D12DDI_GET_GPU_DESCRIPTOR_HANDLE_FOR_HEAP_START    pfnGetGPUDescriptorHandleForHeapStart;
    PFND3D12DDI_CREATE_SHADER_RESOURCE_VIEW_0002            pfnCreateShaderResourceView;
    PFND3D12DDI_CREATE_CONSTANT_BUFFER_VIEW                 pfnCreateConstantBufferView;
    PFND3D12DDI_CREATE_SAMPLER                              pfnCreateSampler;
    PFND3D12DDI_CREATE_UNORDERED_ACCESS_VIEW_0002           pfnCreateUnorderedAccessView;
    PFND3D12DDI_CREATE_RENDER_TARGET_VIEW_0002              pfnCreateRenderTargetView;
    PFND3D12DDI_CREATE_DEPTH_STENCIL_VIEW                   pfnCreateDepthStencilView;
    PFND3D12DDI_CALC_PRIVATE_ROOT_SIGNATURE_SIZE_0001       pfnCalcPrivateRootSignatureSize;
    PFND3D12DDI_CREATE_ROOT_SIGNATURE_0001                  pfnCreateRootSignature;
    PFND3D12DDI_DESTROY_ROOT_SIGNATURE                      pfnDestroyRootSignature;
    PFND3D12DDI_CALC_PRIVATE_UNORDERED_ACCESS_VIEW_COUNTER_SIZE pfnCalcPrivateUnorderedAccessViewCounterSize;
    PFND3D12DDI_CREATE_UNORDERED_ACCESS_VIEW_COUNTER        pfnCreateUnorderedAccessViewCounter;
    PFND3D12DDI_DESTROY_UNORDERED_ACCESS_VIEW_COUNTER       pfnDestroyUnorderedAccessViewCounter;

    PFND3D12DDI_SERIALIZEOBJECT                             pfnSerializeObject;
    PFND3D12DDI_DESTROYOBJECTSERIALIZATION                  pfnDestroyObjectSerialization;
    PFND3D12DDI_CALCPRIVATEDESERIALIZEDOBJECTSIZE           pfnCalcPrivateDeserializedObjectSize;
    PFND3D12DDI_CREATEDESERIALIZEDOBJECT                    pfnCreateDeserializedObject;

    PFND3D12DDI_MAPHEAP                                     pfnMapHeap;
    PFND3D12DDI_UNMAPHEAP                                   pfnUnmapHeap;
    PFND3D12DDI_CALCPRIVATEHEAPANDRESOURCESIZES_0001        pfnCalcPrivateHeapAndResourceSizes;
    PFND3D12DDI_CREATEHEAPANDRESOURCE_0001                  pfnCreateHeapAndResource;
    PFND3D12DDI_DESTROYHEAPANDRESOURCE                      pfnDestroyHeapAndResource;    

    PFND3D12DDI_MAKERESIDENT_0001                           pfnMakeResident;
    PFND3D12DDI_EVICT2                                      pfnEvict;
    PFND3D12DDI_CALCPRIVATEOPENEDHEAPANDRESOURCESIZES       pfnCalcPrivateOpenedHeapAndResourceSizes;
    PFND3D12DDI_OPENHEAPANDRESOURCE                         pfnOpenHeapAndResource;

    PFND3D12DDI_COPY_DESCRIPTORS                            pfnCopyDescriptors;
    PFND3D12DDI_COPY_DESCRIPTORS_SIMPLE                     pfnCopyDescriptorsSimple;

    PFND3D12DDI_CALC_PRIVATE_QUERY_HEAP_SIZE_0001           pfnCalcPrivateQueryHeapSize;
    PFND3D12DDI_CREATE_QUERY_HEAP_0001                      pfnCreateQueryHeap;
    PFND3D12DDI_DESTROY_QUERY_HEAP                          pfnDestroyQueryHeap;

    PFND3D12DDI_CALC_PRIVATE_COMMAND_SIGNATURE_SIZE_0001    pfnCalcPrivateCommandSignatureSize;
    PFND3D12DDI_CREATE_COMMAND_SIGNATURE_0001               pfnCreateCommandSignature;
    PFND3D12DDI_DESTROY_COMMAND_SIGNATURE                   pfnDestroyCommandSignature;

    PFND3D12DDI_CHECKRESOURCEVIRTUALADDRESS                 pfnCheckResourceVirtualAddress;
    
    PFND3D12DDI_CHECKRESOURCEALLOCATIONINFO_0001            pfnCheckResourceAllocationInfo;
    PFND3D12DDI_CHECKSUBRESOURCEINFO                        pfnCheckSubresourceInfo;
    PFND3D12DDI_CHECKEXISITINGRESOURCEALLOCATIONINFO        pfnCheckExistingResourceAllocationInfo;

    PFND3D12DDI_OFFERRESOURCES                              pfnOfferResources;
    PFND3D12DDI_RECLAIMRESOURCES_0001                       pfnReclaimResources;

    PFND3D12DDI_GETIMPLICITPHYSICALADAPTERMASK              pfnGetImplicitPhysicalAdapterMask;
    PFND3D12DDI_GET_PRESENT_PRIVATE_DRIVER_DATA_SIZE        pfnGetPresentPrivateDriverDataSize;
    PFND3D12DDI_QUERY_NODE_MAP                              pfnQueryNodeMap;
    PFND3D12DDI_RETRIEVE_SHADER_COMMENT                     pfnRetrieveShaderComment;
} D3D12DDI_DEVICE_FUNCS_CORE_0002;

//----------------------------------------------------------------------------------------------------------------------------------
// D3D12 DDI Revision 0003
// Used when the build version is > D3D12DDI_BUILD_VERSION_BEFORE_DX10_DX12_HEADER_REFACTOR
//


typedef enum D3D12DDI_BLEND
{
    D3D12DDI_BLEND_ZERO = 1,
    D3D12DDI_BLEND_ONE = 2,
    D3D12DDI_BLEND_SRC_COLOR = 3, // PS output oN.rgb (N is current RT being blended)
    D3D12DDI_BLEND_INV_SRC_COLOR = 4, // 1.0f - PS output oN.rgb
    D3D12DDI_BLEND_SRC_ALPHA = 5, // PS output oN.a
    D3D12DDI_BLEND_INV_SRC_ALPHA = 6, // 1.0f - PS output oN.a
    D3D12DDI_BLEND_DEST_ALPHA = 7, // RT(N).a (N is current RT being blended)
    D3D12DDI_BLEND_INV_DEST_ALPHA = 8, // 1.0f - RT(N).a
    D3D12DDI_BLEND_DEST_COLOR = 9, // RT(N).rgb
    D3D12DDI_BLEND_INV_DEST_COLOR = 10,// 1.0f - RT(N).rgb
    D3D12DDI_BLEND_SRC_ALPHASAT = 11,// (f,f,f,1), f = min(1 - RT(N).a, oN.a)
    // 12 reserved (was BOTHSRCALPHA)
    // 13 reserved (was BOTH_INV_SRC_ALPHA)
    D3D12DDI_BLEND_BLEND_FACTOR = 14,
    D3D12DDI_BLEND_INVBLEND_FACTOR = 15,
    D3D12DDI_BLEND_SRC1_COLOR = 16, // PS output o1.rgb
    D3D12DDI_BLEND_INV_SRC1_COLOR = 17, // 1.0f - PS output o1.rgb
    D3D12DDI_BLEND_SRC1_ALPHA = 18, // PS output o1.a
    D3D12DDI_BLEND_INV_SRC1_ALPHA = 19, // 1.0f - PS output o1.a
} D3D12DDI_BLEND;

typedef enum D3D12DDI_BLEND_OP
{
    D3D12DDI_BLEND_OP_ADD = 1,
    D3D12DDI_BLEND_OP_SUBTRACT = 2,
    D3D12DDI_BLEND_OP_REV_SUBTRACT = 3,
    D3D12DDI_BLEND_OP_MIN = 4, // min semantics are like min shader instruction
    D3D12DDI_BLEND_OP_MAX = 5, // max semantics are like max shader instruction
} D3D12DDI_BLEND_OP;

typedef enum D3D12DDI_COLOR_WRITE_ENABLE
{
    D3D12DDI_COLOR_WRITE_ENABLE_RED = 1,
    D3D12DDI_COLOR_WRITE_ENABLE_GREEN = 2,
    D3D12DDI_COLOR_WRITE_ENABLE_BLUE = 4,
    D3D12DDI_COLOR_WRITE_ENABLE_ALPHA = 8,
    D3D12DDI_COLOR_WRITE_ENABLE_ALL = (D3D12DDI_COLOR_WRITE_ENABLE_RED|D3D12DDI_COLOR_WRITE_ENABLE_GREEN|
        D3D12DDI_COLOR_WRITE_ENABLE_BLUE|D3D12DDI_COLOR_WRITE_ENABLE_ALPHA),
} D3D12DDI_COLOR_WRITE_ENABLE;

#define D3D12DDI_SIMULTANEOUS_RENDER_TARGET_COUNT 8

typedef enum D3D12DDI_LOGIC_OP
{
                                   // Operation:
                                   // (s == PS output, d = RTV contents)
    D3D12DDI_LOGIC_OP_CLEAR = 0,      // 0
    D3D12DDI_LOGIC_OP_SET,            // 1
    D3D12DDI_LOGIC_OP_COPY,           // s
    D3D12DDI_LOGIC_OP_COPY_INVERTED,  // ~s
    D3D12DDI_LOGIC_OP_NOOP,           // d
    D3D12DDI_LOGIC_OP_INVERT,         // ~d
    D3D12DDI_LOGIC_OP_AND,            // s & d
    D3D12DDI_LOGIC_OP_NAND,           // ~(s & d)
    D3D12DDI_LOGIC_OP_OR,             // s | d
    D3D12DDI_LOGIC_OP_NOR,            // ~(s | d)
    D3D12DDI_LOGIC_OP_XOR,            // s ^ d
    D3D12DDI_LOGIC_OP_EQUIV,          // ~(s ^ d)
    D3D12DDI_LOGIC_OP_AND_REVERSE,    // s & ~d
    D3D12DDI_LOGIC_OP_AND_INVERTED,   // ~s & d
    D3D12DDI_LOGIC_OP_OR_REVERSE,     // s | ~d
    D3D12DDI_LOGIC_OP_OR_INVERTED,    // ~s | d
} D3D12DDI_LOGIC_OP;

typedef struct D3D12DDI_RENDER_TARGET_BLEND_DESC
{
    BOOL BlendEnable;
    BOOL LogicOpEnable; // LogicOpEnable and BlendEnable can't both be true
    D3D12DDI_BLEND SrcBlend;
    D3D12DDI_BLEND DestBlend;
    D3D12DDI_BLEND_OP BlendOp;
    D3D12DDI_BLEND SrcBlendAlpha;
    D3D12DDI_BLEND DestBlendAlpha;
    D3D12DDI_BLEND_OP BlendOpAlpha;
    D3D12DDI_LOGIC_OP LogicOp;
    UINT8 RenderTargetWriteMask; // D3D12DDI_COLOR_WRITE_ENABLE
} D3D12DDI_RENDER_TARGET_BLEND_DESC;

typedef struct D3D12DDI_BLEND_DESC
{
    BOOL AlphaToCoverageEnable; // relevant to multisample antialiasing only
    BOOL IndependentBlendEnable; // if FALSE, then first entry in RenderTarget array is replicated to other entries
    D3D12DDI_RENDER_TARGET_BLEND_DESC RenderTarget[D3D12DDI_SIMULTANEOUS_RENDER_TARGET_COUNT];
} D3D12DDI_BLEND_DESC;

typedef enum D3D12DDI_DEPTH_WRITE_MASK
{
    D3D12DDI_DEPTH_WRITE_MASK_ZERO = 0,
    D3D12DDI_DEPTH_WRITE_MASK_ALL = 1
} D3D12DDI_DEPTH_WRITE_MASK;

typedef enum D3D12DDI_STENCIL_OP
{
    D3D12DDI_STENCIL_OP_KEEP = 1,
    D3D12DDI_STENCIL_OP_ZERO = 2,
    D3D12DDI_STENCIL_OP_REPLACE = 3,
    D3D12DDI_STENCIL_OP_INCR_SAT = 4,
    D3D12DDI_STENCIL_OP_DECR_SAT = 5,
    D3D12DDI_STENCIL_OP_INVERT = 6,
    D3D12DDI_STENCIL_OP_INCR = 7,
    D3D12DDI_STENCIL_OP_DECR = 8
} D3D12DDI_STENCIL_OP;

typedef struct D3D12DDI_DEPTH_STENCILOP_DESC
{
    D3D12DDI_STENCIL_OP StencilFailOp;
    D3D12DDI_STENCIL_OP StencilDepthFailOp;
    D3D12DDI_STENCIL_OP StencilPassOp;
    D3D12DDI_COMPARISON_FUNC StencilFunc;
} D3D12DDI_DEPTH_STENCILOP_DESC;

typedef struct D3D12DDI_DEPTH_STENCIL_DESC
{
    BOOL DepthEnable;
    D3D12DDI_DEPTH_WRITE_MASK DepthWriteMask;
    D3D12DDI_COMPARISON_FUNC DepthFunc;
    BOOL StencilEnable;
    BOOL FrontEnable;
    BOOL BackEnable;
    UINT8 StencilReadMask;
    UINT8 StencilWriteMask;
    D3D12DDI_DEPTH_STENCILOP_DESC FrontFace;
    D3D12DDI_DEPTH_STENCILOP_DESC BackFace;
} D3D12DDI_DEPTH_STENCIL_DESC;

typedef enum D3D12DDI_MULTISAMPLE_QUALITY_LEVEL_FLAGS
{
    D3D12DDI_MULTISAMPLE_QUALITY_LEVEL_FLAG_NONE            = 0,
    D3D12DDI_MULTISAMPLE_QUALITY_LEVEL_FLAG_TILED_RESOURCE  = 0x1
} D3D12DDI_MULTISAMPLE_QUALITY_LEVEL_FLAGS;
DEFINE_ENUM_FLAG_OPERATORS( D3D12DDI_MULTISAMPLE_QUALITY_LEVEL_FLAGS );

typedef enum D3D12DDI_INPUT_CLASSIFICATION
{
    D3D12DDI_INPUT_CLASSIFICIATION_PER_VERTEX_DATA = 0,
    D3D12DDI_INPUT_CLASSIFICIATION_PER_INSTANCE_DATA = 1
} D3D12DDI_INPUT_CLASSIFICATION;

typedef struct D3D12DDIARG_INPUT_ELEMENT_DESC
{
    UINT InputSlot;
    UINT AlignedByteOffset;
    DXGI_FORMAT Format;
    D3D12DDI_INPUT_CLASSIFICATION InputSlotClass;
    UINT InstanceDataStepRate;
    UINT InputRegister;
} D3D12DDIARG_INPUT_ELEMENT_DESC;

typedef struct D3D12DDIARG_CREATEELEMENTLAYOUT
{
    CONST D3D12DDIARG_INPUT_ELEMENT_DESC* pVertexElements;
    UINT                                  NumElements;
} D3D12DDIARG_CREATEELEMENTLAYOUT;

typedef enum D3D12DDI_PRIMITIVE_TOPOLOGY
{
    D3D12DDI_PRIMITIVE_TOPOLOGY_UNDEFINED = 0,
    D3D12DDI_PRIMITIVE_TOPOLOGY_POINTLIST = 1,
    D3D12DDI_PRIMITIVE_TOPOLOGY_LINELIST = 2,
    D3D12DDI_PRIMITIVE_TOPOLOGY_LINESTRIP = 3,
    D3D12DDI_PRIMITIVE_TOPOLOGY_TRIANGLELIST = 4,
    D3D12DDI_PRIMITIVE_TOPOLOGY_TRIANGLESTRIP = 5,
    // 6 is reserved for legacy triangle fans
    // Adjacency values should be equal to (0x8 & non-adjacency):
    D3D12DDI_PRIMITIVE_TOPOLOGY_LINELIST_ADJ = 10,
    D3D12DDI_PRIMITIVE_TOPOLOGY_LINESTRIP_ADJ = 11,
    D3D12DDI_PRIMITIVE_TOPOLOGY_TRIANGLELIST_ADJ = 12,
    D3D12DDI_PRIMITIVE_TOPOLOGY_TRIANGLESTRIP_ADJ = 13,
    D3D12DDI_PRIMITIVE_TOPOLOGY_1_CONTROL_POINT_PATCHLIST = 33,
    D3D12DDI_PRIMITIVE_TOPOLOGY_2_CONTROL_POINT_PATCHLIST = 34,
    D3D12DDI_PRIMITIVE_TOPOLOGY_3_CONTROL_POINT_PATCHLIST = 35,
    D3D12DDI_PRIMITIVE_TOPOLOGY_4_CONTROL_POINT_PATCHLIST = 36,
    D3D12DDI_PRIMITIVE_TOPOLOGY_5_CONTROL_POINT_PATCHLIST = 37,
    D3D12DDI_PRIMITIVE_TOPOLOGY_6_CONTROL_POINT_PATCHLIST = 38,
    D3D12DDI_PRIMITIVE_TOPOLOGY_7_CONTROL_POINT_PATCHLIST = 39,
    D3D12DDI_PRIMITIVE_TOPOLOGY_8_CONTROL_POINT_PATCHLIST = 40,
    D3D12DDI_PRIMITIVE_TOPOLOGY_9_CONTROL_POINT_PATCHLIST = 41,
    D3D12DDI_PRIMITIVE_TOPOLOGY_10_CONTROL_POINT_PATCHLIST = 42,
    D3D12DDI_PRIMITIVE_TOPOLOGY_11_CONTROL_POINT_PATCHLIST = 43,
    D3D12DDI_PRIMITIVE_TOPOLOGY_12_CONTROL_POINT_PATCHLIST = 44,
    D3D12DDI_PRIMITIVE_TOPOLOGY_13_CONTROL_POINT_PATCHLIST = 45,
    D3D12DDI_PRIMITIVE_TOPOLOGY_14_CONTROL_POINT_PATCHLIST = 46,
    D3D12DDI_PRIMITIVE_TOPOLOGY_15_CONTROL_POINT_PATCHLIST = 47,
    D3D12DDI_PRIMITIVE_TOPOLOGY_16_CONTROL_POINT_PATCHLIST = 48,
    D3D12DDI_PRIMITIVE_TOPOLOGY_17_CONTROL_POINT_PATCHLIST = 49,
    D3D12DDI_PRIMITIVE_TOPOLOGY_18_CONTROL_POINT_PATCHLIST = 50,
    D3D12DDI_PRIMITIVE_TOPOLOGY_19_CONTROL_POINT_PATCHLIST = 51,
    D3D12DDI_PRIMITIVE_TOPOLOGY_20_CONTROL_POINT_PATCHLIST = 52,
    D3D12DDI_PRIMITIVE_TOPOLOGY_21_CONTROL_POINT_PATCHLIST = 53,
    D3D12DDI_PRIMITIVE_TOPOLOGY_22_CONTROL_POINT_PATCHLIST = 54,
    D3D12DDI_PRIMITIVE_TOPOLOGY_23_CONTROL_POINT_PATCHLIST = 55,
    D3D12DDI_PRIMITIVE_TOPOLOGY_24_CONTROL_POINT_PATCHLIST = 56,
    D3D12DDI_PRIMITIVE_TOPOLOGY_25_CONTROL_POINT_PATCHLIST = 57,
    D3D12DDI_PRIMITIVE_TOPOLOGY_26_CONTROL_POINT_PATCHLIST = 58,
    D3D12DDI_PRIMITIVE_TOPOLOGY_27_CONTROL_POINT_PATCHLIST = 59,
    D3D12DDI_PRIMITIVE_TOPOLOGY_28_CONTROL_POINT_PATCHLIST = 60,
    D3D12DDI_PRIMITIVE_TOPOLOGY_29_CONTROL_POINT_PATCHLIST = 61,
    D3D12DDI_PRIMITIVE_TOPOLOGY_30_CONTROL_POINT_PATCHLIST = 62,
    D3D12DDI_PRIMITIVE_TOPOLOGY_31_CONTROL_POINT_PATCHLIST = 63,
    D3D12DDI_PRIMITIVE_TOPOLOGY_32_CONTROL_POINT_PATCHLIST = 64,
} D3D12DDI_PRIMITIVE_TOPOLOGY;

typedef struct D3D12DDI_VIEWPORT
{
    FLOAT TopLeftX;
    FLOAT TopLeftY;
    FLOAT Width;
    FLOAT Height;
    FLOAT MinDepth;
    FLOAT MaxDepth;
} D3D12DDI_VIEWPORT;

typedef RECT D3D12DDI_RECT;

typedef enum D3D12DDI_CREATE_DEVICE_FLAGS
{
    D3D12DDI_CREATE_DEVICE_FLAG_NONE                  = 0x0,
    D3D12DDI_CREATE_DEVICE_FLAG_DISABLE_IMPLICIT_MGPU = 0x1,
    D3D12DDI_CREATE_DEVICE_FLAG_DEBUGGABLE            = 0x2,
} D3D12DDI_CREATE_DEVICE_FLAGS;
DEFINE_ENUM_FLAG_OPERATORS( D3D12DDI_CREATE_DEVICE_FLAGS );

typedef struct D3D12DDIARG_CALCPRIVATEDEVICESIZE
{
    UINT                          Interface;          // in:  Interface version
    UINT                          Version;            // in:  Runtime Version
    D3D12DDI_CREATE_DEVICE_FLAGS  Flags;              // in:  Flags
} D3D12DDIARG_CALCPRIVATEDEVICESIZE;

typedef VOID (APIENTRY CALLBACK *PFND3D12DDI_SETERROR_CB)( D3D10DDI_HRTDEVICE, HRESULT );

typedef struct D3D12DDI_CORELAYER_DEVICECALLBACKS_0003
{
    PFND3D12DDI_SETERROR_CB pfnSetErrorCb;
    PFND3D12DDI_SETCOMMANDLISTERROR_CB pfnSetCommandListErrorCb;
    PFND3D12DDI_SETCOMMANDLISTDDITABLE_CB pfnSetCommandListDDITableCb;

    // KM callbacks for 12
    PFND3D12DDI_CREATECONTEXT_CB        pfnCreateContextCb;
    PFND3D12DDI_CREATECONTEXTVIRTUAL_CB pfnCreateContextVirtualCb;
    PFND3D12DDI_DESTROYCONTEXT_CB       pfnDestroyContextCb;
    PFND3D12DDI_CREATEPAGINGQUEUE_CB    pfnCreatePagingQueueCb;
    PFND3D12DDI_DESTROYPAGINGQUEUE_CB   pfnDestroyPagingQueueCb;
    PFND3D12DDI_MAKERESIDENT_CB         pfnMakeResidentCb;
    PFND3D12DDI_EVICT_CB                pfnEvictCb;
    PFND3D12DDI_RECLAIMALLOCATIONS2_CB  pfnReclaimAllocations2Cb;
    PFND3D12DDI_OFFERALLOCATIONS_CB     pfnOfferAllocationsCb;
} D3D12DDI_CORELAYER_DEVICECALLBACKS_0003;

typedef struct D3D12DDIARG_CREATEDEVICE_0003
{
    D3D12DDI_HRTDEVICE              hRTDevice;              // in:  Runtime handle
    UINT                            Interface;              // in:  Interface version
    UINT                            Version;                // in:  Runtime Version
    CONST D3DDDI_DEVICECALLBACKS*   pKTCallbacks;           // in:  Pointer to runtime callbacks that invoke kernel
    D3D12DDI_HDEVICE                hDrvDevice;             // in:  Driver private handle/ storage.
    CONST D3D12DDI_CORELAYER_DEVICECALLBACKS_0003* p12UMCallbacks; // in:  callbacks that stay in usermode
    D3D12DDI_CREATE_DEVICE_FLAGS    Flags; // in:  
} D3D12DDIARG_CREATEDEVICE_0003;

typedef enum D3D12DDI_SHADER_MIN_PRECISION
{
    D3D12DDI_SHADER_MIN_PRECISION_NONE   = 0x0,
    D3D12DDI_SHADER_MIN_PRECISION_10_BIT = 0x1,
    D3D12DDI_SHADER_MIN_PRECISION_16_BIT = 0x2
} D3D12DDI_SHADER_MIN_PRECISION;
DEFINE_ENUM_FLAG_OPERATORS( D3D12DDI_SHADER_MIN_PRECISION );

// D3D12DDICAPS_TYPE_SHADER
typedef struct D3D12DDI_SHADER_CAPS_0003
{
    D3D12DDI_SHADER_MIN_PRECISION MinPrecision; // Bitmask
    BOOL Doubles;
    BOOL ShaderSpecifiedStencilRef;
    BOOL TypedUAVLoadAdditionalFormats;
    BOOL ROVs;
} D3D12DDI_SHADER_CAPS_0003;

// D3D12DDICAPS_TYPE_D3D12_OPTIONS
typedef enum D3D12DDI_RESOURCE_HEAP_TIER
{
    D3D12DDI_RESOURCE_HEAP_TIER_1 = 1,
    D3D12DDI_RESOURCE_HEAP_TIER_2 = 2,
} D3D12DDI_RESOURCE_HEAP_TIER;

typedef struct D3D12DDI_D3D12_OPTIONS_DATA_0003
{
    D3D12DDI_RESOURCE_BINDING_TIER ResourceBindingTier;
    D3D12DDI_CONSERVATIVE_RASTERIZATION_TIER ConservativeRasterizationTier;
    D3D12DDI_TILED_RESOURCES_TIER TiledResourcesTier;
    D3D12DDI_CROSS_NODE_SHARING_TIER CrossNodeSharingTier;
    BOOL VPAndRTArrayIndexFromAnyShaderFeedingRasterizerSupportedWithoutGSEmulation;
    BOOL OutputMergerLogicOp;
    D3D12DDI_RESOURCE_HEAP_TIER ResourceHeapTier;
} D3D12DDI_D3D12_OPTIONS_DATA_0003;

typedef struct D3D12DDI_SWIZZLE_PATTERN_DESC_0003
{
    D3D12DDI_SWIZZLE_BIT_ENTRY InterleavePatternSourceBits[ 32 ];
    D3D12DDI_SWIZZLE_BIT_ENTRY InterleavePatternXORSourceBits[ 32 ];
    D3D12DDI_SWIZZLE_BIT_ENTRY InterleavePatternXOR2SourceBits[ 32 ];
    BOOL StackDepthSlices;
} D3D12DDI_SWIZZLE_PATTERN_DESC_0003;

// D3D12DDICAPS_TYPE_ARCHITECTURE_INFO
typedef struct D3D12DDI_ARCHITECTURE_INFO_DATA
{
    BOOL TileBasedDeferredRenderer;
} D3D12DDI_ARCHITECTURE_INFO_DATA;

// D3D12DDICAPS_TYPE_3DPIPELINESUPPORT
// For D3D12, drivers only report the maximum level they support
typedef enum D3D12DDI_3DPIPELINELEVEL
{
    D3D12DDI_3DPIPELINELEVEL_11_0 = 10,
    D3D12DDI_3DPIPELINELEVEL_11_1 = 11,
    D3D12DDI_3DPIPELINELEVEL_12_0 = 12,
    D3D12DDI_3DPIPELINELEVEL_12_1 = 13,
} D3D12DDI_3DPIPELINELEVEL;


typedef enum D3D12DDICAPS_TYPE
{
    D3D12DDICAPS_TYPE_TEXTURE_LAYOUT        = 1000,
    D3D12DDICAPS_TYPE_SWIZZLE_PATTERN       = 1001,
    D3D12DDICAPS_TYPE_MEMORY_ARCHITECTURE   = 1002,
    D3D12DDICAPS_TYPE_TEXTURE_LAYOUT_SETS   = 1003,
    D3D12DDICAPS_TYPE_SHADER                = 1004,
    D3D12DDICAPS_TYPE_ARCHITECTURE_INFO     = 1005,
    D3D12DDICAPS_TYPE_D3D12_OPTIONS         = 1006,
    D3D12DDICAPS_TYPE_3DPIPELINESUPPORT     = 1007,

    D3D12DDICAPS_TYPE_GPUVA_CAPS            = 1009,
    D3D12DDICAPS_TYPE_TEXTURE_LAYOUT1     = 1010,

} D3D12DDICAPS_TYPE;

typedef struct D3D12DDIARG_GETCAPS
{
    D3D12DDICAPS_TYPE Type;
    VOID* pInfo;
    VOID* pData;
    UINT DataSize;
} D3D12DDIARG_GETCAPS;

typedef enum D3D12DDI_RESOURCE_STATES
{
    D3D12DDI_RESOURCE_STATE_COMMON                    = 0,

    D3D12DDI_RESOURCE_STATE_VERTEX_AND_CONSTANT_BUFFER             = 0x0001,
    D3D12DDI_RESOURCE_STATE_INDEX_BUFFER              = 0x0002,
    D3D12DDI_RESOURCE_STATE_RENDER_TARGET             = 0x0004,
    D3D12DDI_RESOURCE_STATE_UNORDERED_ACCESS          = 0x0008,
    D3D12DDI_RESOURCE_STATE_DEPTH_WRITE               = 0x0010,
    D3D12DDI_RESOURCE_STATE_DEPTH_READ                = 0x0020,
    D3D12DDI_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE = 0x0040,
    D3D12DDI_RESOURCE_STATE_PIXEL_SHADER_RESOURCE     = 0x0080,
    D3D12DDI_RESOURCE_STATE_STREAM_OUT                = 0x0100,
    D3D12DDI_RESOURCE_STATE_INDIRECT_ARGUMENT         = 0x0200,
    D3D12DDI_RESOURCE_STATE_COPY_DEST                 = 0x0400,
    D3D12DDI_RESOURCE_STATE_COPY_SOURCE               = 0x0800,
    D3D12DDI_RESOURCE_STATE_RESOLVE_DEST              = 0x1000,
    D3D12DDI_RESOURCE_STATE_RESOLVE_SOURCE            = 0x2000,
} D3D12DDI_RESOURCE_STATES;
DEFINE_ENUM_FLAG_OPERATORS( D3D12DDI_RESOURCE_STATES );

typedef enum D3D12DDI_RESOURCE_BARRIER_FLAGS
{
    D3D12DDI_RESOURCE_BARRIER_FLAG_NONE       = 0x0,
    D3D12DDI_RESOURCE_BARRIER_FLAG_BEGIN_ONLY = 0x1,
    D3D12DDI_RESOURCE_BARRIER_FLAG_END_ONLY   = 0x2,
} D3D12DDI_RESOURCE_BARRIER_FLAGS;
DEFINE_ENUM_FLAG_OPERATORS( D3D12DDI_RESOURCE_BARRIER_FLAGS );

typedef struct D3D12DDI_RESOURCE_TRANSITION_BARRIER_0003
{
    D3D12DDI_HRESOURCE hResource;
    UINT Subresource;
    D3D12DDI_RESOURCE_STATES StateBefore;
    D3D12DDI_RESOURCE_STATES StateAfter;
} D3D12DDI_RESOURCE_TRANSITION_BARRIER_0003;

typedef struct D3D12DDIARG_RESOURCE_BARRIER_0003
{
    D3D12DDI_RESOURCE_BARRIER_TYPE    Type;
    D3D12DDI_RESOURCE_BARRIER_FLAGS   Flags;

    union
    {
        D3D12DDI_RESOURCE_TRANSITION_BARRIER_0003 Transition;
        D3D12DDI_RESOURCE_ALIASING_BARRIER        Aliasing;
        D3D12DDI_RESOURCE_UAV_BARRIER             UAV;
    };
} D3D12DDIARG_RESOURCE_BARRIER_0003;

typedef struct D3D12DDIARG_OPENHEAP_0003
{
    UINT                           NumAllocations;             // in : Number of open allocation structs
    D3DDDI_OPENALLOCATIONINFO*     pOpenAllocationInfo;        // in : Array of open allocation structs
    D3D12DDI_HKMRESOURCE           hKMResource;                // in : Kernel resource handle
    VOID*                          pPrivateDriverData;         // in : Ptr to per reosurce PrivateDriverData
    UINT                           PrivateDriverDataSize;      // in : Size of resource pPrivateDriverData
    D3D12DDI_RESOURCE_STATES       InitialResourceState;       // in : Initial resource state
} D3D12DDIARG_OPENHEAP_0003;

typedef VOID ( APIENTRY* PFND3D12DDI_RESOURCEBARRIER_0003 )(
    D3D12DDI_HCOMMANDLIST, UINT Count, _In_reads_(Count) CONST D3D12DDIARG_RESOURCE_BARRIER_0003* pResourceBarrierDesc);

typedef struct D3D12DDIARG_CREATERESOURCE_0003
{
    D3D12DDIARG_BUFFER_PLACEMENT    ReuseBufferGPUVA;
    D3D12DDI_RESOURCE_TYPE          ResourceType;
    UINT64                          Width; // Virtual coords
    UINT                            Height; // Virtual coords
    UINT16                          DepthOrArraySize; 
    UINT16                          MipLevels;
    DXGI_FORMAT                     Format; 
    DXGI_SAMPLE_DESC                SampleDesc;
    D3D12DDI_TEXTURE_LAYOUT         Layout; // See standard swizzle spec
    D3D12DDI_RESOURCE_FLAGS_0003    Flags;
    D3D12DDI_RESOURCE_STATES        InitialResourceState;

    // When Layout = D3D12DDI_TL_ROW_MAJOR and pRowMajorLayout is non-null
    // then *pRowMajorLayout specifies the layout of the resource
    CONST D3D12DDIARG_ROW_MAJOR_RESOURCE_LAYOUT* pRowMajorLayout;
} D3D12DDIARG_CREATERESOURCE_0003;

typedef struct D3D12DDI_PRESENT_0003
{
    D3DKMT_HANDLE   hSrcAllocation;
    D3DKMT_HANDLE   hDstAllocation;
    HANDLE          hContext;
    UINT            BroadcastContextCount;
    HANDLE          BroadcastContext[D3DDDI_MAX_BROADCAST_CONTEXT];
    D3DKMT_HANDLE   BroadcastSrcAllocation[D3DDDI_MAX_BROADCAST_CONTEXT];
    D3DKMT_HANDLE   BroadcastDstAllocation[D3DDDI_MAX_BROADCAST_CONTEXT];
    BOOL            AddedGpuWork;
    UINT            BackBufferMultiplicity;
} D3D12DDI_PRESENT_0003;

typedef enum D3D12DDI_CREATE_SHADER_FLAGS
{
    D3D12DDI_CREATE_SHADER_FLAG_NONE = 0x0,
    D3D12DDI_CREATE_SHADER_FLAG_ENABLE_SHADER_TRACING = 0x1,
} D3D12DDI_CREATE_SHADER_FLAGS;
DEFINE_ENUM_FLAG_OPERATORS( D3D12DDI_CREATE_SHADER_FLAGS );

typedef VOID ( APIENTRY* PFND3D12DDI_PRESENT_0003 ) ( D3D12DDI_HCOMMANDLIST, D3D12DDI_HCOMMANDQUEUE, _In_ CONST D3D12DDIARG_PRESENT_0001*, _Out_ D3D12DDI_PRESENT_0003* );

typedef HRESULT (APIENTRY *PFND3D12DDI_GETCAPS)(D3D12DDI_HADAPTER,
    _In_ CONST D3D12DDIARG_GETCAPS*);

typedef VOID ( APIENTRY* PFND3D12DDI_DESTROYDEVICE )( D3D12DDI_HDEVICE );

typedef VOID ( APIENTRY* PFND3D12DDI_CHECKFORMATSUPPORT )(
    D3D12DDI_HDEVICE, DXGI_FORMAT, _Out_ UINT* );

typedef VOID ( APIENTRY* PFND3D12DDI_CHECKMULTISAMPLEQUALITYLEVELS )(
    D3D12DDI_HDEVICE hDevice,
    DXGI_FORMAT Format,
    UINT SampleCount,
    D3D12DDI_MULTISAMPLE_QUALITY_LEVEL_FLAGS Flags,
    _Out_ UINT* pNumQualityLevels
);

typedef VOID ( APIENTRY* PFND3D12DDI_GETMIPPACKING )(
    D3D12DDI_HDEVICE hDevice,
    D3D12DDI_HRESOURCE hTiledResource,
    _Out_ UINT* pNumPackedMips,
    _Out_ UINT* pNumTilesForPackedMips
);

typedef SIZE_T ( APIENTRY* PFND3D12DDI_CALCPRIVATEELEMENTLAYOUTSIZE )(
    D3D12DDI_HDEVICE, _In_ CONST D3D12DDIARG_CREATEELEMENTLAYOUT* );

typedef VOID ( APIENTRY* PFND3D12DDI_CREATEELEMENTLAYOUT )(
    D3D12DDI_HDEVICE, _In_ CONST D3D12DDIARG_CREATEELEMENTLAYOUT*, D3D12DDI_HELEMENTLAYOUT, D3D10DDI_HRTELEMENTLAYOUT );

typedef VOID ( APIENTRY* PFND3D12DDI_DESTROYELEMENTLAYOUT )(
    D3D12DDI_HDEVICE, D3D12DDI_HELEMENTLAYOUT );

typedef SIZE_T ( APIENTRY* PFND3D12DDI_CALCPRIVATEBLENDSTATESIZE )(
    D3D12DDI_HDEVICE, _In_ CONST D3D12DDI_BLEND_DESC* );

typedef VOID ( APIENTRY* PFND3D12DDI_CREATEBLENDSTATE )(
    D3D12DDI_HDEVICE, _In_ CONST D3D12DDI_BLEND_DESC*, D3D12DDI_HBLENDSTATE, D3D10DDI_HRTBLENDSTATE );

typedef VOID ( APIENTRY* PFND3D12DDI_DESTROYBLENDSTATE )(
    D3D12DDI_HDEVICE, D3D12DDI_HBLENDSTATE );

typedef SIZE_T ( APIENTRY* PFND3D12DDI_CALCPRIVATEDEPTHSTENCILSTATESIZE )(
    D3D12DDI_HDEVICE, _In_ CONST D3D12DDI_DEPTH_STENCIL_DESC* );

typedef VOID ( APIENTRY* PFND3D12DDI_CREATEDEPTHSTENCILSTATE )(
    D3D12DDI_HDEVICE, _In_ CONST D3D12DDI_DEPTH_STENCIL_DESC*, D3D12DDI_HDEPTHSTENCILSTATE, D3D10DDI_HRTDEPTHSTENCILSTATE );

typedef VOID ( APIENTRY* PFND3D12DDI_DESTROYDEPTHSTENCILSTATE )(
    D3D12DDI_HDEVICE, D3D12DDI_HDEPTHSTENCILSTATE );

typedef VOID ( APIENTRY* PFND3D12DDI_DESTROYRASTERIZERSTATE )(
    D3D12DDI_HDEVICE, D3D12DDI_HRASTERIZERSTATE );

typedef VOID ( APIENTRY* PFND3D12DDI_CLEAR_ROOT_ARGUMENTS )(D3D12DDI_HCOMMANDLIST);

typedef VOID ( APIENTRY* PFND3D12DDI_DESTROYSHADER )(
    D3D12DDI_HDEVICE, D3D12DDI_HSHADER );

typedef VOID ( APIENTRY* PFND3D12DDI_COPYTEXTUREREGION_0003 )(
    D3D12DDI_HCOMMANDLIST,
    _In_ CONST D3D12DDIARG_BUFFER_PLACEMENT*, D3D12DDIARG_PLACED_RESOURCE, UINT, UINT, UINT,
    _In_ CONST D3D12DDIARG_BUFFER_PLACEMENT*, D3D12DDIARG_PLACED_RESOURCE, _In_opt_ CONST D3D12DDI_BOX* );

typedef VOID ( APIENTRY* PFND3D12DDI_COPYBUFFERREGION_0003 )(
    D3D12DDI_HCOMMANDLIST,
    D3D12DDIARG_BUFFER_PLACEMENT Dst,
    D3D12DDIARG_BUFFER_PLACEMENT Src,
    UINT64 SrcBytes );

typedef VOID ( APIENTRY* PFND3D12DDI_IA_SETTOPOLOGY_0003 )(
    D3D12DDI_HCOMMANDLIST, D3D12DDI_PRIMITIVE_TOPOLOGY );

typedef VOID ( APIENTRY* PFND3D12DDI_RS_SETVIEWPORTS_0003 )(
    D3D12DDI_HCOMMANDLIST, UINT Count, _In_reads_(Count) CONST D3D12DDI_VIEWPORT* );

typedef VOID ( APIENTRY* PFND3D12DDI_RS_SETSCISSORRECTS_0003 )(
    D3D12DDI_HCOMMANDLIST, UINT Count, _In_reads_(Count) CONST D3D12DDI_RECT* );

typedef VOID ( APIENTRY* PFND3D12DDI_BEGIN_END_QUERY_0003 )( D3D12DDI_HCOMMANDLIST, D3D12DDI_HQUERYHEAP, D3D12DDI_QUERY_TYPE, UINT );

typedef VOID ( APIENTRY* PFND3D12DDI_SET_DESCRIPTOR_HEAPS_0003 )( 
    D3D12DDI_HCOMMANDLIST, 
    _In_ UINT NumDescriptorHeaps,
    _In_reads_(NumDescriptorHeaps) D3D12DDI_HDESCRIPTORHEAP* );

typedef VOID ( APIENTRY* PFND3D12DDI_SET_ROOT_32BIT_CONSTANTS_0003 )(
    D3D12DDI_HCOMMANDLIST, 
    UINT RootParameterIndex, 
    UINT Num32BitValuesToSet,
    CONST void* pSrcData, 
    UINT DestOffsetIn32BitValues );  

typedef VOID ( APIENTRY* PFND3D12DDI_IA_SET_VERTEX_BUFFERS_0003 )(   
    D3D12DDI_HCOMMANDLIST, 
    _In_ UINT StartSlot,    
    _In_ UINT NumViews,
    _In_reads_opt_(NumViews) CONST D3D12DDI_VERTEX_BUFFER_VIEW * pViews );

typedef VOID ( APIENTRY* PFND3D12DDI_SO_SET_TARGETS_0003 )(
    D3D12DDI_HCOMMANDLIST, 
    _In_ UINT StartSlot,
    _In_ UINT NumViews,
    _In_reads_opt_(NumViews) CONST D3D12DDI_STREAM_OUTPUT_BUFFER_VIEW* pViews );

typedef VOID ( APIENTRY* PFND3D12DDI_OM_SET_RENDER_TARGETS_0003 )(
    D3D12DDI_HCOMMANDLIST, 
    _In_ UINT NumRenderTargetDescriptors,
    _In_ CONST D3D12DDI_CPU_DESCRIPTOR_HANDLE* pRenderTargetDescriptors,
    _In_ BOOL RTsSingleHandleToDescriptorRange,
    _In_opt_ CONST D3D12DDI_CPU_DESCRIPTOR_HANDLE* pDepthStencilDescriptor);

typedef VOID ( APIENTRY* PFND3D12DDI_CLEAR_UNORDERED_ACCESS_VIEW_UINT_0003 )(
    D3D12DDI_HCOMMANDLIST, 
    D3D12DDI_GPU_DESCRIPTOR_HANDLE ViewGPUHandleInCurrentHeap,
    D3D12DDI_CPU_DESCRIPTOR_HANDLE ViewCPUHandle,
    D3D12DDI_HRESOURCE hDrvResource,
    CONST UINT[4],
    UINT NumRects,
    _In_reads_(NumRects) CONST D3D12DDI_RECT* pRects );

typedef VOID ( APIENTRY* PFND3D12DDI_CLEAR_UNORDERED_ACCESS_VIEW_FLOAT_0003 )(
    D3D12DDI_HCOMMANDLIST, 
    D3D12DDI_GPU_DESCRIPTOR_HANDLE ViewGPUHandleInCurrentHeap,
    D3D12DDI_CPU_DESCRIPTOR_HANDLE ViewCPUHandle,
    D3D12DDI_HRESOURCE hDrvResource,
    CONST FLOAT[4],
    UINT NumRects,
    _In_reads_(NumRects) CONST D3D12DDI_RECT* pRects );

typedef VOID ( APIENTRY* PFND3D12DDI_CLEAR_RENDER_TARGET_VIEW_0003 )(
    D3D12DDI_HCOMMANDLIST, 
    D3D12DDI_CPU_DESCRIPTOR_HANDLE ViewCPUHandle,
    CONST FLOAT[4],
    UINT NumRects,
    _In_reads_(NumRects) CONST D3D12DDI_RECT* pRects );

typedef VOID ( APIENTRY* PFND3D12DDI_CLEAR_DEPTH_STENCIL_VIEW_0003 )(
    D3D12DDI_HCOMMANDLIST, 
    D3D12DDI_CPU_DESCRIPTOR_HANDLE ViewCPUHandle,
    UINT, FLOAT, UINT8,
    UINT NumRects,
    _In_reads_(NumRects) CONST D3D12DDI_RECT* pRects );

typedef struct D3D12DDIARG_DISCARD_RESOURCE_0003
{
    UINT NumRects;
    CONST _In_reads_(NumRects) D3D12DDI_RECT *pRects;
    UINT FirstSubresource;
    UINT NumSubresources;
} D3D12DDIARG_DISCARD_RESOURCE_0003;

typedef VOID ( APIENTRY* PFND3D12DDI_DISCARD_RESOURCE_0003 )(
    D3D12DDI_HCOMMANDLIST, 
    D3D12DDI_HRESOURCE hDrvResource,
    _In_opt_ CONST D3D12DDIARG_DISCARD_RESOURCE_0003* );

typedef SIZE_T (APIENTRY *PFND3D12DDI_CALCPRIVATEDEVICESIZE)(D3D12DDI_HADAPTER, _In_ CONST D3D12DDIARG_CALCPRIVATEDEVICESIZE*);

typedef HRESULT (APIENTRY *PFND3D12DDI_CLOSEADAPTER)(D3D12DDI_HADAPTER);

typedef HRESULT (APIENTRY *PFND3D12DDI_CREATEDEVICE_0003)(D3D12DDI_HADAPTER, _In_ CONST D3D12DDIARG_CREATEDEVICE_0003*);

typedef HRESULT (APIENTRY *PFND3D12DDI_GETSUPPORTEDVERSIONS)(D3D12DDI_HADAPTER,
    _Inout_ UINT32* puEntries, _Out_writes_opt_( *puEntries ) UINT64* pSupportedDDIInterfaceVersions);

typedef VOID ( APIENTRY* PFND3D12DDI_CREATERASTERIZERSTATE_0003 )(
    D3D12DDI_HDEVICE, _In_ CONST D3D12DDI_RASTERIZER_DESC*, D3D12DDI_HRASTERIZERSTATE );

typedef VOID ( APIENTRY* PFND3D12DDI_CREATEELEMENTLAYOUT_0003 )(
    D3D12DDI_HDEVICE, _In_ CONST D3D12DDIARG_CREATEELEMENTLAYOUT*, D3D12DDI_HELEMENTLAYOUT );

typedef VOID ( APIENTRY* PFND3D12DDI_CREATEBLENDSTATE_0003 )(
    D3D12DDI_HDEVICE, _In_ CONST D3D12DDI_BLEND_DESC*, D3D12DDI_HBLENDSTATE );

typedef VOID ( APIENTRY* PFND3D12DDI_CREATEDEPTHSTENCILSTATE_0003 )(
    D3D12DDI_HDEVICE, _In_ CONST D3D12DDI_DEPTH_STENCIL_DESC*, D3D12DDI_HDEPTHSTENCILSTATE );

typedef VOID ( APIENTRY* PFND3D12DDI_CREATE_SHADER_0003 )(
    D3D12DDI_HDEVICE, _In_reads_(pShaderCode[1]) CONST UINT* pShaderCode, D3D12DDI_HROOTSIGNATURE, D3D12DDI_HSHADER, _In_ CONST D3D12DDIARG_STAGE_IO_SIGNATURES*, D3D12DDI_CREATE_SHADER_FLAGS );

typedef VOID ( APIENTRY* PFND3D12DDI_CREATE_GEOMETRY_SHADER_WITH_STREAM_OUTPUT_0003 )(
    D3D12DDI_HDEVICE, _In_ CONST D3D12DDIARG_CREATE_GEOMETRY_SHADER_WITH_STREAM_OUTPUT*, D3D12DDI_HSHADER, _In_ CONST D3D12DDIARG_STAGE_IO_SIGNATURES*, D3D12DDI_CREATE_SHADER_FLAGS );

typedef VOID ( APIENTRY* PFND3D12DDI_CREATE_COMPUTE_SHADER_0003 )(
    D3D12DDI_HDEVICE, _In_reads_(pShaderCode[1]) CONST UINT* pShaderCode, D3D12DDI_HROOTSIGNATURE, D3D12DDI_HSHADER, D3D12DDI_CREATE_SHADER_FLAGS );

typedef VOID ( APIENTRY* PFND3D12DDI_CREATE_TESS_SHADER_0003 )(
    D3D12DDI_HDEVICE, _In_reads_(pShaderCode[1]) CONST UINT* pShaderCode, D3D12DDI_HROOTSIGNATURE, D3D12DDI_HSHADER, _In_ CONST D3D12DDIARG_TESSELLATION_IO_SIGNATURES*, D3D12DDI_CREATE_SHADER_FLAGS );

typedef D3D12DDI_HEAP_AND_RESOURCE_SIZES ( APIENTRY* PFND3D12DDI_CALCPRIVATEHEAPANDRESOURCESIZES_0003 )(
     D3D12DDI_HDEVICE, _In_opt_ CONST D3D12DDIARG_CREATEHEAP_0001*, _In_opt_ CONST D3D12DDIARG_CREATERESOURCE_0003* );

typedef HRESULT ( APIENTRY* PFND3D12DDI_CREATEHEAPANDRESOURCE_0003 )(
    D3D12DDI_HDEVICE, _In_opt_ CONST D3D12DDIARG_CREATEHEAP_0001*, D3D12DDI_HHEAP, D3D12DDI_HRTRESOURCE,
    _In_opt_ CONST D3D12DDIARG_CREATERESOURCE_0003*, _In_opt_ CONST D3D12DDI_CLEAR_VALUES*, D3D12DDI_HRESOURCE );

typedef VOID ( APIENTRY* PFND3D12DDI_CHECKRESOURCEALLOCATIONINFO_0003 )(
    D3D12DDI_HDEVICE,
    _In_ CONST D3D12DDIARG_CREATERESOURCE_0003*,
    D3D12DDI_RESOURCE_OPTIMIZATION_FLAGS,
    UINT64 AlignmentRestriction,
    UINT VisibleNodeMask,
    _Out_ D3D12DDI_RESOURCE_ALLOCATION_INFO* );

typedef D3DKMT_HANDLE ( APIENTRY* PFND3D12DDI_CHECKRESOURCEALLOCATIONHANDLE )( D3D12DDI_HDEVICE, D3D10DDI_HRESOURCE );

typedef D3D12DDI_HEAP_AND_RESOURCE_SIZES ( APIENTRY* PFND3D12DDI_CALCPRIVATEOPENEDHEAPANDRESOURCESIZES_0003 )(
    D3D12DDI_HDEVICE, _In_ CONST D3D12DDIARG_OPENHEAP_0003* );

typedef HRESULT ( APIENTRY* PFND3D12DDI_OPENHEAPANDRESOURCE_0003 )( D3D12DDI_HDEVICE, _In_ CONST D3D12DDIARG_OPENHEAP_0003*, D3D12DDI_HHEAP, D3D12DDI_HRTRESOURCE, D3D12DDI_HRESOURCE );

typedef struct D3D12DDI_COMMAND_LIST_FUNCS_3D_0003
{
    PFND3D12DDI_CLOSECOMMANDLIST                            pfnCloseCommandList;
    PFND3D12DDI_RESETCOMMANDLIST                            pfnResetCommandList;

    PFND3D12DDI_DRAWINSTANCED                               pfnDrawInstanced;
    PFND3D12DDI_DRAWINDEXEDINSTANCED                        pfnDrawIndexedInstanced;
    PFND3D12DDI_DISPATCH                                    pfnDispatch;
    PFND3D12DDI_CLEAR_UNORDERED_ACCESS_VIEW_UINT_0003       pfnClearUnorderedAccessViewUint;
    PFND3D12DDI_CLEAR_UNORDERED_ACCESS_VIEW_FLOAT_0003      pfnClearUnorderedAccessViewFloat;
    PFND3D12DDI_CLEAR_RENDER_TARGET_VIEW_0003               pfnClearRenderTargetView;
    PFND3D12DDI_CLEAR_DEPTH_STENCIL_VIEW_0003               pfnClearDepthStencilView;
    PFND3D12DDI_DISCARD_RESOURCE_0003                       pfnDiscardResource;
    PFND3D12DDI_COPYTEXTUREREGION_0003                      pfnCopyTextureRegion;
    PFND3D12DDI_RESOURCECOPY                                pfnResourceCopy;
    PFND3D12DDI_COPYTILES                                   pfnCopyTiles;
    PFND3D12DDI_COPYBUFFERREGION_0003                       pfnCopyBufferRegion;
    PFND3D12DDI_RESOURCERESOLVESUBRESOURCE                  pfnResourceResolveSubresource;
    PFND3D12DDI_EXECUTE_BUNDLE                              pfnExecuteBundle;
    PFND3D12DDI_EXECUTE_INDIRECT                            pfnExecuteIndirect;
    PFND3D12DDI_RESOURCEBARRIER_0003                        pfnResourceBarrier;
    PFND3D12DDI_BLT                                         pfnBlt;
    PFND3D12DDI_PRESENT_0003                                pfnPresent;
    PFND3D12DDI_BEGIN_END_QUERY_0003                        pfnBeginQuery;
    PFND3D12DDI_BEGIN_END_QUERY_0003                        pfnEndQuery;
    PFND3D12DDI_RESOLVE_QUERY_DATA                          pfnResolveQueryData;
    PFND3D12DDI_SET_PREDICATION                             pfnSetPredication;

    PFND3D12DDI_IA_SETTOPOLOGY_0003                         pfnIaSetTopology;    
    PFND3D12DDI_RS_SETVIEWPORTS_0003                        pfnRsSetViewports;
    PFND3D12DDI_RS_SETSCISSORRECTS_0003                     pfnRsSetScissorRects;
    PFND3D12DDI_OM_SETBLENDFACTOR                           pfnOmSetBlendFactor;
    PFND3D12DDI_OM_SETSTENCILREF                            pfnOmSetStencilRef;
    PFND3D12DDI_SET_PIPELINE_STATE                          pfnSetPipelineState;

    PFND3D12DDI_SET_DESCRIPTOR_HEAPS_0003                   pfnSetDescriptorHeaps;
    PFND3D12DDI_SET_ROOT_SIGNATURE                          pfnSetComputeRootSignature;
    PFND3D12DDI_SET_ROOT_SIGNATURE                          pfnSetGraphicsRootSignature;
    PFND3D12DDI_SET_ROOT_DESCRIPTOR_TABLE                   pfnSetComputeRootDescriptorTable;
    PFND3D12DDI_SET_ROOT_DESCRIPTOR_TABLE                   pfnSetGraphicsRootDescriptorTable;
    PFND3D12DDI_SET_ROOT_32BIT_CONSTANT                     pfnSetComputeRoot32BitConstant;
    PFND3D12DDI_SET_ROOT_32BIT_CONSTANT                     pfnSetGraphicsRoot32BitConstant;
    PFND3D12DDI_SET_ROOT_32BIT_CONSTANTS_0003               pfnSetComputeRoot32BitConstants;
    PFND3D12DDI_SET_ROOT_32BIT_CONSTANTS_0003               pfnSetGraphicsRoot32BitConstants;
    PFND3D12DDI_SET_ROOT_BUFFER_VIEW                        pfnSetComputeRootConstantBufferView;
    PFND3D12DDI_SET_ROOT_BUFFER_VIEW                        pfnSetGraphicsRootConstantBufferView;
    PFND3D12DDI_SET_ROOT_BUFFER_VIEW                        pfnSetComputeRootShaderResourceView;
    PFND3D12DDI_SET_ROOT_BUFFER_VIEW                        pfnSetGraphicsRootShaderResourceView;
    PFND3D12DDI_SET_ROOT_BUFFER_VIEW                        pfnSetComputeRootUnorderedAccessView;
    PFND3D12DDI_SET_ROOT_BUFFER_VIEW                        pfnSetGraphicsRootUnorderedAccessView;

    PFND3D12DDI_IA_SET_INDEX_BUFFER                         pfnIASetIndexBuffer;
    PFND3D12DDI_IA_SET_VERTEX_BUFFERS_0003                  pfnIASetVertexBuffers;
    PFND3D12DDI_SO_SET_TARGETS_0003                         pfnSOSetTargets;
    PFND3D12DDI_OM_SET_RENDER_TARGETS_0003                  pfnOMSetRenderTargets;
    PFND3D12DDI_SET_MARKER                                  pfnSetMarker;

    PFND3D12DDI_CLEAR_ROOT_ARGUMENTS                        pfnClearRootArguments;
} D3D12DDI_COMMAND_LIST_FUNCS_3D_0003;


typedef HRESULT ( APIENTRY* PFND3D12DDI_RETRIEVE_SHADER_COMMENT_0003 )(
    D3D12DDI_HDEVICE, D3D12DDI_HPIPELINESTATE, _Out_writes_z_(*CharacterCountIncludingNullTerminator) WCHAR * pBuffer, _Inout_ SIZE_T * CharacterCountIncludingNullTerminator );

typedef VOID ( APIENTRY* PFND3D12DDI_COPY_DESCRIPTORS_0003 )(
    D3D12DDI_HDEVICE, 
    _In_ UINT NumDestDescriptorRanges,
    _In_reads_(NumDestDescriptorRanges) CONST D3D12DDI_CPU_DESCRIPTOR_HANDLE* pDestDescriptorRangeStarts,
    _In_reads_opt_(NumDestDescriptorRanges) CONST UINT* pDestDescriptorRangeSizes, // NULL means all ranges 1
    _In_ UINT NumSrcDescriptorRanges,
    _In_reads_(NumSrcDescriptorRanges) CONST D3D12DDI_CPU_DESCRIPTOR_HANDLE* pSrcDescriptorRangeStarts,
    _In_reads_opt_(NumSrcDescriptorRanges) CONST UINT* pSrcDescriptorRangeSizes, // NULL means all ranges 1
    _In_ D3D12DDI_DESCRIPTOR_HEAP_TYPE DescriptorHeapsType);

typedef VOID ( APIENTRY* PFND3D12DDI_COPY_DESCRIPTORS_SIMPLE_0003 )(
    D3D12DDI_HDEVICE,
    _In_ UINT NumDescriptors,
    _In_ D3D12DDI_CPU_DESCRIPTOR_HANDLE DestDescriptorRangeStart,
    _In_ D3D12DDI_CPU_DESCRIPTOR_HANDLE SrcDescriptorRangeStart,
    _In_ D3D12DDI_DESCRIPTOR_HEAP_TYPE DescriptorHeapsType);

typedef struct D3D12DDI_DEVICE_FUNCS_CORE_0003
{
    PFND3D12DDI_CHECKFORMATSUPPORT                          pfnCheckFormatSupport;
    PFND3D12DDI_CHECKMULTISAMPLEQUALITYLEVELS               pfnCheckMultisampleQualityLevels;
    PFND3D12DDI_GETMIPPACKING                               pfnGetMipPacking;

    PFND3D12DDI_CALCPRIVATEELEMENTLAYOUTSIZE                pfnCalcPrivateElementLayoutSize;
    PFND3D12DDI_CREATEELEMENTLAYOUT_0003                    pfnCreateElementLayout;
    PFND3D12DDI_DESTROYELEMENTLAYOUT                        pfnDestroyElementLayout;

    PFND3D12DDI_CALCPRIVATEBLENDSTATESIZE                   pfnCalcPrivateBlendStateSize;
    PFND3D12DDI_CREATEBLENDSTATE_0003                       pfnCreateBlendState;
    PFND3D12DDI_DESTROYBLENDSTATE                           pfnDestroyBlendState;
    
    PFND3D12DDI_CALCPRIVATEDEPTHSTENCILSTATESIZE            pfnCalcPrivateDepthStencilStateSize;
    PFND3D12DDI_CREATEDEPTHSTENCILSTATE_0003                pfnCreateDepthStencilState;
    PFND3D12DDI_DESTROYDEPTHSTENCILSTATE                    pfnDestroyDepthStencilState;

    PFND3D12DDI_CALCPRIVATERASTERIZERSTATESIZE              pfnCalcPrivateRasterizerStateSize;
    PFND3D12DDI_CREATERASTERIZERSTATE_0003                  pfnCreateRasterizerState;
    PFND3D12DDI_DESTROYRASTERIZERSTATE                      pfnDestroyRasterizerState;

    PFND3D12DDI_CALC_PRIVATE_SHADER_SIZE                    pfnCalcPrivateShaderSize;
    PFND3D12DDI_CREATE_SHADER_0003                          pfnCreateVertexShader;
    PFND3D12DDI_CREATE_SHADER_0003                          pfnCreatePixelShader;
    PFND3D12DDI_CREATE_SHADER_0003                          pfnCreateGeometryShader;
    PFND3D12DDI_CREATE_COMPUTE_SHADER_0003                  pfnCreateComputeShader;

    PFND3D12DDI_CALC_PRIVATE_GEOMETRY_SHADER_WITH_STREAM_OUTPUT pfnCalcPrivateGeometryShaderWithStreamOutput;
    PFND3D12DDI_CREATE_GEOMETRY_SHADER_WITH_STREAM_OUTPUT_0003  pfnCreateGeometryShaderWithStreamOutput;

    PFND3D12DDI_CALC_PRIVATE_TESSELLATION_SHADER_SIZE       pfnCalcPrivateTessellationShaderSize;
    PFND3D12DDI_CREATE_TESS_SHADER_0003                     pfnCreateHullShader;
    PFND3D12DDI_CREATE_TESS_SHADER_0003                     pfnCreateDomainShader;

    PFND3D12DDI_DESTROYSHADER                               pfnDestroyShader;
    
    PFND3D12DDI_CALCPRIVATECOMMANDQUEUESIZE_0001            pfnCalcPrivateCommandQueueSize;
    PFND3D12DDI_CREATECOMMANDQUEUE_0001                     pfnCreateCommandQueue;
    PFND3D12DDI_DESTROYCOMMANDQUEUE                         pfnDestroyCommandQueue;

    PFND3D12DDI_CALCPRIVATECOMMANDALLOCATORSIZE             pfnCalcPrivateCommandAllocatorSize;
    PFND3D12DDI_CREATECOMMANDALLOCATOR                      pfnCreateCommandAllocator;
    PFND3D12DDI_DESTROYCOMMANDALLOCATOR                     pfnDestroyCommandAllocator;
    PFND3D12DDI_RESETCOMMANDALLOCATOR                       pfnResetCommandAllocator;

    PFND3D12DDI_CALC_PRIVATE_PIPELINE_STATE_SIZE_0001       pfnCalcPrivatePipelineStateSize;
    PFND3D12DDI_CREATE_PIPELINE_STATE_0001                  pfnCreatePipelineState;
    PFND3D12DDI_DESTROY_PIPELINE_STATE                      pfnDestroyPipelineState;

    PFND3D12DDI_CALC_PRIVATE_COMMAND_LIST_SIZE_0001         pfnCalcPrivateCommandListSize;
    PFND3D12DDI_CREATE_COMMAND_LIST_0001                    pfnCreateCommandList;
    PFND3D12DDI_DESTROYCOMMANDLIST                          pfnDestroyCommandList;

    PFND3D12DDI_CALCPRIVATEFENCESIZE                        pfnCalcPrivateFenceSize;
    PFND3D12DDI_CREATEFENCE                                 pfnCreateFence;
    PFND3D12DDI_DESTROYFENCE                                pfnDestroyFence;

    PFND3D12DDI_CALC_PRIVATE_DESCRIPTOR_HEAP_SIZE_0001      pfnCalcPrivateDescriptorHeapSize;
    PFND3D12DDI_CREATE_DESCRIPTOR_HEAP_0001                 pfnCreateDescriptorHeap;
    PFND3D12DDI_DESTROY_DESCRIPTOR_HEAP                     pfnDestroyDescriptorHeap;
    PFND3D12DDI_GET_DESCRIPTOR_SIZE_IN_BYTES                pfnGetDescriptorSizeInBytes;
    PFND3D12DDI_GET_CPU_DESCRIPTOR_HANDLE_FOR_HEAP_START    pfnGetCPUDescriptorHandleForHeapStart;
    PFND3D12DDI_GET_GPU_DESCRIPTOR_HANDLE_FOR_HEAP_START    pfnGetGPUDescriptorHandleForHeapStart;
    PFND3D12DDI_CREATE_SHADER_RESOURCE_VIEW_0002            pfnCreateShaderResourceView;
    PFND3D12DDI_CREATE_CONSTANT_BUFFER_VIEW                 pfnCreateConstantBufferView;
    PFND3D12DDI_CREATE_SAMPLER                              pfnCreateSampler;
    PFND3D12DDI_CREATE_UNORDERED_ACCESS_VIEW_0002           pfnCreateUnorderedAccessView;
    PFND3D12DDI_CREATE_RENDER_TARGET_VIEW_0002              pfnCreateRenderTargetView;
    PFND3D12DDI_CREATE_DEPTH_STENCIL_VIEW                   pfnCreateDepthStencilView;
    PFND3D12DDI_CALC_PRIVATE_ROOT_SIGNATURE_SIZE_0001       pfnCalcPrivateRootSignatureSize;
    PFND3D12DDI_CREATE_ROOT_SIGNATURE_0001                  pfnCreateRootSignature;
    PFND3D12DDI_DESTROY_ROOT_SIGNATURE                      pfnDestroyRootSignature;

    PFND3D12DDI_SERIALIZEOBJECT                             pfnSerializeObject;
    PFND3D12DDI_DESTROYOBJECTSERIALIZATION                  pfnDestroyObjectSerialization;
    PFND3D12DDI_CALCPRIVATEDESERIALIZEDOBJECTSIZE           pfnCalcPrivateDeserializedObjectSize;
    PFND3D12DDI_CREATEDESERIALIZEDOBJECT                    pfnCreateDeserializedObject;

    PFND3D12DDI_MAPHEAP                                     pfnMapHeap;
    PFND3D12DDI_UNMAPHEAP                                   pfnUnmapHeap;
    PFND3D12DDI_CALCPRIVATEHEAPANDRESOURCESIZES_0003        pfnCalcPrivateHeapAndResourceSizes;
    PFND3D12DDI_CREATEHEAPANDRESOURCE_0003                  pfnCreateHeapAndResource;
    PFND3D12DDI_DESTROYHEAPANDRESOURCE                      pfnDestroyHeapAndResource;    

    PFND3D12DDI_MAKERESIDENT_0001                           pfnMakeResident;
    PFND3D12DDI_EVICT2                                      pfnEvict;
    PFND3D12DDI_CALCPRIVATEOPENEDHEAPANDRESOURCESIZES_0003  pfnCalcPrivateOpenedHeapAndResourceSizes;
    PFND3D12DDI_OPENHEAPANDRESOURCE_0003                    pfnOpenHeapAndResource;

    PFND3D12DDI_COPY_DESCRIPTORS_0003                       pfnCopyDescriptors;
    PFND3D12DDI_COPY_DESCRIPTORS_SIMPLE_0003                pfnCopyDescriptorsSimple;

    PFND3D12DDI_CALC_PRIVATE_QUERY_HEAP_SIZE_0001           pfnCalcPrivateQueryHeapSize;
    PFND3D12DDI_CREATE_QUERY_HEAP_0001                      pfnCreateQueryHeap;
    PFND3D12DDI_DESTROY_QUERY_HEAP                          pfnDestroyQueryHeap;

    PFND3D12DDI_CALC_PRIVATE_COMMAND_SIGNATURE_SIZE_0001    pfnCalcPrivateCommandSignatureSize;
    PFND3D12DDI_CREATE_COMMAND_SIGNATURE_0001               pfnCreateCommandSignature;
    PFND3D12DDI_DESTROY_COMMAND_SIGNATURE                   pfnDestroyCommandSignature;

    PFND3D12DDI_CHECKRESOURCEVIRTUALADDRESS                 pfnCheckResourceVirtualAddress;
    
    PFND3D12DDI_CHECKRESOURCEALLOCATIONINFO_0003            pfnCheckResourceAllocationInfo;
    PFND3D12DDI_CHECKSUBRESOURCEINFO                        pfnCheckSubresourceInfo;
    PFND3D12DDI_CHECKEXISITINGRESOURCEALLOCATIONINFO        pfnCheckExistingResourceAllocationInfo;

    PFND3D12DDI_OFFERRESOURCES                              pfnOfferResources;
    PFND3D12DDI_RECLAIMRESOURCES_0001                       pfnReclaimResources;

    PFND3D12DDI_GETIMPLICITPHYSICALADAPTERMASK              pfnGetImplicitPhysicalAdapterMask;
    PFND3D12DDI_GET_PRESENT_PRIVATE_DRIVER_DATA_SIZE        pfnGetPresentPrivateDriverDataSize;
    PFND3D12DDI_QUERY_NODE_MAP                              pfnQueryNodeMap;
    PFND3D12DDI_RETRIEVE_SHADER_COMMENT_0003                pfnRetrieveShaderComment;

    PFND3D12DDI_CHECKRESOURCEALLOCATIONHANDLE               pfnCheckResourceAllocationHandle;
} D3D12DDI_DEVICE_FUNCS_CORE_0003;

//----------------------------------------------------------------------------------------------------------------------------------
typedef struct D3D12DDI_ADAPTERFUNCS
{
    PFND3D12DDI_CALCPRIVATEDEVICESIZE         pfnCalcPrivateDeviceSize;
    PFND3D12DDI_CREATEDEVICE_0003             pfnCreateDevice;
    PFND3D12DDI_CLOSEADAPTER                  pfnCloseAdapter;
    PFND3D12DDI_GETSUPPORTEDVERSIONS          pfnGetSupportedVersions;
    PFND3D12DDI_GETCAPS                       pfnGetCaps;
    PFND3D12DDI_GETOPTIONALDDITTABLES         pfnGetOptionalDDITables;
    PFND3D12DDI_FILLDDITTABLE                 pfnFillDDITable;
    PFND3D12DDI_DESTROYDEVICE                 pfnDestroyDevice;
} D3D12DDI_ADAPTERFUNCS;

typedef struct D3D12DDIARG_OPENADAPTER
{
    D3D12DDI_HRTADAPTER            hRTAdapter;         // in:  Runtime handle
    D3D12DDI_HADAPTER              hAdapter;           // out: Driver handle
    CONST D3DDDI_ADAPTERCALLBACKS* pAdapterCallbacks;  // in:  Pointer to runtime callbacks
    D3D12DDI_ADAPTERFUNCS*         pAdapterFuncs;      // out: Driver function table
} D3D12DDIARG_OPENADAPTER;

typedef HRESULT (APIENTRY *PFND3D12DDI_OPENADAPTER)(_Inout_ D3D12DDIARG_OPENADAPTER*);



//----------------------------------------------------------------------------------------------------------------------------------
// D3D12 DDI Revision 0004
// Used when the build version is >= D3D12DDI_BUILD_VERSION_PARAMETERIZED_SWIZZLE_XOR3
//

typedef enum D3D12DDI_SWIZZLE_PATTERN_FLAGS
{
    D3D12DDI_SWIZZLE_PATTERN_FLAGS_NONE                = 0,
    D3D12DDI_SWIZZLE_PATTERN_FLAGS_STACK_DEPTH_SLICES  = 1,
} D3D12DDI_SWIZZLE_PATTERN_FLAGS;
    
typedef struct D3D12DDI_SWIZZLE_PATTERN_DESC_0004
{
    D3D12DDI_SWIZZLE_BIT_ENTRY InterleavePatternSourceBits[ 32 ];
    D3D12DDI_SWIZZLE_BIT_ENTRY InterleavePatternXORSourceBits[ 32 ];
    D3D12DDI_SWIZZLE_BIT_ENTRY InterleavePatternXOR2SourceBits[ 32 ];
    UINT InterleavePatternXOR3; 
    UINT Flags;
} D3D12DDI_SWIZZLE_PATTERN_DESC_0004;

typedef struct D3D12DDI_GPUVA_CAPS_0004
{
    UINT MaxGPUVirtualAddressBitsPerResource;
} D3D12DDI_GPUVA_CAPS_0004;


#endif // D3D12DDI_MINOR_HEADER_VERSION >= 2

#endif // _D3D12UMDDI_H

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */
#pragma endregion


// NOTE: The following constants are generated from the D3D12 hardware spec.  Do not edit these values directly.
#ifndef _D3D12_CONSTANTS
#define _D3D12_CONSTANTS
const UINT D3D12_16BIT_INDEX_STRIP_CUT_VALUE = 0xffff;
const UINT D3D12_32BIT_INDEX_STRIP_CUT_VALUE = 0xffffffff;
const UINT D3D12_8BIT_INDEX_STRIP_CUT_VALUE = 0xff;
const UINT D3D12_APPEND_ALIGNED_ELEMENT = 0xffffffff;
const UINT D3D12_ARRAY_AXIS_ADDRESS_RANGE_BIT_COUNT = 9;
const UINT D3D12_CLIP_OR_CULL_DISTANCE_COUNT = 8;
const UINT D3D12_CLIP_OR_CULL_DISTANCE_ELEMENT_COUNT = 2;
const UINT D3D12_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT = 14;
const UINT D3D12_COMMONSHADER_CONSTANT_BUFFER_COMPONENTS = 4;
const UINT D3D12_COMMONSHADER_CONSTANT_BUFFER_COMPONENT_BIT_COUNT = 32;
const UINT D3D12_COMMONSHADER_CONSTANT_BUFFER_HW_SLOT_COUNT = 15;
const UINT D3D12_COMMONSHADER_CONSTANT_BUFFER_PARTIAL_UPDATE_EXTENTS_BYTE_ALIGNMENT = 16;
const UINT D3D12_COMMONSHADER_CONSTANT_BUFFER_REGISTER_COMPONENTS = 4;
const UINT D3D12_COMMONSHADER_CONSTANT_BUFFER_REGISTER_COUNT = 15;
const UINT D3D12_COMMONSHADER_CONSTANT_BUFFER_REGISTER_READS_PER_INST = 1;
const UINT D3D12_COMMONSHADER_CONSTANT_BUFFER_REGISTER_READ_PORTS = 1;
const UINT D3D12_COMMONSHADER_FLOWCONTROL_NESTING_LIMIT = 64;
const UINT D3D12_COMMONSHADER_IMMEDIATE_CONSTANT_BUFFER_REGISTER_COMPONENTS = 4;
const UINT D3D12_COMMONSHADER_IMMEDIATE_CONSTANT_BUFFER_REGISTER_COUNT = 1;
const UINT D3D12_COMMONSHADER_IMMEDIATE_CONSTANT_BUFFER_REGISTER_READS_PER_INST = 1;
const UINT D3D12_COMMONSHADER_IMMEDIATE_CONSTANT_BUFFER_REGISTER_READ_PORTS = 1;
const UINT D3D12_COMMONSHADER_IMMEDIATE_VALUE_COMPONENT_BIT_COUNT = 32;
const UINT D3D12_COMMONSHADER_INPUT_RESOURCE_REGISTER_COMPONENTS = 1;
const UINT D3D12_COMMONSHADER_INPUT_RESOURCE_REGISTER_COUNT = 128;
const UINT D3D12_COMMONSHADER_INPUT_RESOURCE_REGISTER_READS_PER_INST = 1;
const UINT D3D12_COMMONSHADER_INPUT_RESOURCE_REGISTER_READ_PORTS = 1;
const UINT D3D12_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT = 128;
const UINT D3D12_COMMONSHADER_SAMPLER_REGISTER_COMPONENTS = 1;
const UINT D3D12_COMMONSHADER_SAMPLER_REGISTER_COUNT = 16;
const UINT D3D12_COMMONSHADER_SAMPLER_REGISTER_READS_PER_INST = 1;
const UINT D3D12_COMMONSHADER_SAMPLER_REGISTER_READ_PORTS = 1;
const UINT D3D12_COMMONSHADER_SAMPLER_SLOT_COUNT = 16;
const UINT D3D12_COMMONSHADER_SUBROUTINE_NESTING_LIMIT = 32;
const UINT D3D12_COMMONSHADER_TEMP_REGISTER_COMPONENTS = 4;
const UINT D3D12_COMMONSHADER_TEMP_REGISTER_COMPONENT_BIT_COUNT = 32;
const UINT D3D12_COMMONSHADER_TEMP_REGISTER_COUNT = 4096;
const UINT D3D12_COMMONSHADER_TEMP_REGISTER_READS_PER_INST = 3;
const UINT D3D12_COMMONSHADER_TEMP_REGISTER_READ_PORTS = 3;
const UINT D3D12_COMMONSHADER_TEXCOORD_RANGE_REDUCTION_MAX = 10;
const INT D3D12_COMMONSHADER_TEXCOORD_RANGE_REDUCTION_MIN = -10;
const INT D3D12_COMMONSHADER_TEXEL_OFFSET_MAX_NEGATIVE = -8;
const UINT D3D12_COMMONSHADER_TEXEL_OFFSET_MAX_POSITIVE = 7;
const UINT D3D12_CONSTANT_BUFFER_DATA_PLACEMENT_ALIGNMENT = 256;
const UINT D3D12_CS_4_X_BUCKET00_MAX_BYTES_TGSM_WRITABLE_PER_THREAD = 256;
const UINT D3D12_CS_4_X_BUCKET00_MAX_NUM_THREADS_PER_GROUP = 64;
const UINT D3D12_CS_4_X_BUCKET01_MAX_BYTES_TGSM_WRITABLE_PER_THREAD = 240;
const UINT D3D12_CS_4_X_BUCKET01_MAX_NUM_THREADS_PER_GROUP = 68;
const UINT D3D12_CS_4_X_BUCKET02_MAX_BYTES_TGSM_WRITABLE_PER_THREAD = 224;
const UINT D3D12_CS_4_X_BUCKET02_MAX_NUM_THREADS_PER_GROUP = 72;
const UINT D3D12_CS_4_X_BUCKET03_MAX_BYTES_TGSM_WRITABLE_PER_THREAD = 208;
const UINT D3D12_CS_4_X_BUCKET03_MAX_NUM_THREADS_PER_GROUP = 76;
const UINT D3D12_CS_4_X_BUCKET04_MAX_BYTES_TGSM_WRITABLE_PER_THREAD = 192;
const UINT D3D12_CS_4_X_BUCKET04_MAX_NUM_THREADS_PER_GROUP = 84;
const UINT D3D12_CS_4_X_BUCKET05_MAX_BYTES_TGSM_WRITABLE_PER_THREAD = 176;
const UINT D3D12_CS_4_X_BUCKET05_MAX_NUM_THREADS_PER_GROUP = 92;
const UINT D3D12_CS_4_X_BUCKET06_MAX_BYTES_TGSM_WRITABLE_PER_THREAD = 160;
const UINT D3D12_CS_4_X_BUCKET06_MAX_NUM_THREADS_PER_GROUP = 100;
const UINT D3D12_CS_4_X_BUCKET07_MAX_BYTES_TGSM_WRITABLE_PER_THREAD = 144;
const UINT D3D12_CS_4_X_BUCKET07_MAX_NUM_THREADS_PER_GROUP = 112;
const UINT D3D12_CS_4_X_BUCKET08_MAX_BYTES_TGSM_WRITABLE_PER_THREAD = 128;
const UINT D3D12_CS_4_X_BUCKET08_MAX_NUM_THREADS_PER_GROUP = 128;
const UINT D3D12_CS_4_X_BUCKET09_MAX_BYTES_TGSM_WRITABLE_PER_THREAD = 112;
const UINT D3D12_CS_4_X_BUCKET09_MAX_NUM_THREADS_PER_GROUP = 144;
const UINT D3D12_CS_4_X_BUCKET10_MAX_BYTES_TGSM_WRITABLE_PER_THREAD = 96;
const UINT D3D12_CS_4_X_BUCKET10_MAX_NUM_THREADS_PER_GROUP = 168;
const UINT D3D12_CS_4_X_BUCKET11_MAX_BYTES_TGSM_WRITABLE_PER_THREAD = 80;
const UINT D3D12_CS_4_X_BUCKET11_MAX_NUM_THREADS_PER_GROUP = 204;
const UINT D3D12_CS_4_X_BUCKET12_MAX_BYTES_TGSM_WRITABLE_PER_THREAD = 64;
const UINT D3D12_CS_4_X_BUCKET12_MAX_NUM_THREADS_PER_GROUP = 256;
const UINT D3D12_CS_4_X_BUCKET13_MAX_BYTES_TGSM_WRITABLE_PER_THREAD = 48;
const UINT D3D12_CS_4_X_BUCKET13_MAX_NUM_THREADS_PER_GROUP = 340;
const UINT D3D12_CS_4_X_BUCKET14_MAX_BYTES_TGSM_WRITABLE_PER_THREAD = 32;
const UINT D3D12_CS_4_X_BUCKET14_MAX_NUM_THREADS_PER_GROUP = 512;
const UINT D3D12_CS_4_X_BUCKET15_MAX_BYTES_TGSM_WRITABLE_PER_THREAD = 16;
const UINT D3D12_CS_4_X_BUCKET15_MAX_NUM_THREADS_PER_GROUP = 768;
const UINT D3D12_CS_4_X_DISPATCH_MAX_THREAD_GROUPS_IN_Z_DIMENSION = 1;
const UINT D3D12_CS_4_X_RAW_UAV_BYTE_ALIGNMENT = 256;
const UINT D3D12_CS_4_X_THREAD_GROUP_MAX_THREADS_PER_GROUP = 768;
const UINT D3D12_CS_4_X_THREAD_GROUP_MAX_X = 768;
const UINT D3D12_CS_4_X_THREAD_GROUP_MAX_Y = 768;
const UINT D3D12_CS_4_X_UAV_REGISTER_COUNT = 1;
const UINT D3D12_CS_DISPATCH_MAX_THREAD_GROUPS_PER_DIMENSION = 65535;
const UINT D3D12_CS_TGSM_REGISTER_COUNT = 8192;
const UINT D3D12_CS_TGSM_REGISTER_READS_PER_INST = 1;
const UINT D3D12_CS_TGSM_RESOURCE_REGISTER_COMPONENTS = 1;
const UINT D3D12_CS_TGSM_RESOURCE_REGISTER_READ_PORTS = 1;
const UINT D3D12_CS_THREADGROUPID_REGISTER_COMPONENTS = 3;
const UINT D3D12_CS_THREADGROUPID_REGISTER_COUNT = 1;
const UINT D3D12_CS_THREADIDINGROUPFLATTENED_REGISTER_COMPONENTS = 1;
const UINT D3D12_CS_THREADIDINGROUPFLATTENED_REGISTER_COUNT = 1;
const UINT D3D12_CS_THREADIDINGROUP_REGISTER_COMPONENTS = 3;
const UINT D3D12_CS_THREADIDINGROUP_REGISTER_COUNT = 1;
const UINT D3D12_CS_THREADID_REGISTER_COMPONENTS = 3;
const UINT D3D12_CS_THREADID_REGISTER_COUNT = 1;
const UINT D3D12_CS_THREAD_GROUP_MAX_THREADS_PER_GROUP = 1024;
const UINT D3D12_CS_THREAD_GROUP_MAX_X = 1024;
const UINT D3D12_CS_THREAD_GROUP_MAX_Y = 1024;
const UINT D3D12_CS_THREAD_GROUP_MAX_Z = 64;
const UINT D3D12_CS_THREAD_GROUP_MIN_X = 1;
const UINT D3D12_CS_THREAD_GROUP_MIN_Y = 1;
const UINT D3D12_CS_THREAD_GROUP_MIN_Z = 1;
const UINT D3D12_CS_THREAD_LOCAL_TEMP_REGISTER_POOL = 16384;
#define D3D12_DEFAULT_BLEND_FACTOR_ALPHA	( 1.0f )
#define D3D12_DEFAULT_BLEND_FACTOR_BLUE	( 1.0f )
#define D3D12_DEFAULT_BLEND_FACTOR_GREEN	( 1.0f )
#define D3D12_DEFAULT_BLEND_FACTOR_RED	( 1.0f )
#define D3D12_DEFAULT_BORDER_COLOR_COMPONENT	( 0.0f )
const UINT D3D12_DEFAULT_DEPTH_BIAS = 0;
#define D3D12_DEFAULT_DEPTH_BIAS_CLAMP	( 0.0f )
const UINT D3D12_DEFAULT_MAX_ANISOTROPY = 16;
#define D3D12_DEFAULT_MIP_LOD_BIAS	( 0.0f )
const UINT D3D12_DEFAULT_MSAA_RESOURCE_PLACEMENT_ALIGNMENT = 4194304;
const UINT D3D12_DEFAULT_RENDER_TARGET_ARRAY_INDEX = 0;
const UINT D3D12_DEFAULT_RESOURCE_PLACEMENT_ALIGNMENT = 65536;
const UINT D3D12_DEFAULT_SAMPLE_MASK = 0xffffffff;
const UINT D3D12_DEFAULT_SCISSOR_ENDX = 0;
const UINT D3D12_DEFAULT_SCISSOR_ENDY = 0;
const UINT D3D12_DEFAULT_SCISSOR_STARTX = 0;
const UINT D3D12_DEFAULT_SCISSOR_STARTY = 0;
#define D3D12_DEFAULT_SLOPE_SCALED_DEPTH_BIAS	( 0.0f )
const UINT D3D12_DEFAULT_STENCIL_READ_MASK = 0xff;
const UINT D3D12_DEFAULT_STENCIL_REFERENCE = 0;
const UINT D3D12_DEFAULT_STENCIL_WRITE_MASK = 0xff;
const UINT D3D12_DEFAULT_VIEWPORT_AND_SCISSORRECT_INDEX = 0;
const UINT D3D12_DEFAULT_VIEWPORT_HEIGHT = 0;
#define D3D12_DEFAULT_VIEWPORT_MAX_DEPTH	( 0.0f )
#define D3D12_DEFAULT_VIEWPORT_MIN_DEPTH	( 0.0f )
const UINT D3D12_DEFAULT_VIEWPORT_TOPLEFTX = 0;
const UINT D3D12_DEFAULT_VIEWPORT_TOPLEFTY = 0;
const UINT D3D12_DEFAULT_VIEWPORT_WIDTH = 0;
const UINT D3D12_DESCRIPTOR_RANGE_OFFSET_APPEND = 0xffffffff;
const UINT D3D12_DRIVER_RESERVED_REGISTER_SPACE_VALUES_END = 0xfffffff7;
const UINT D3D12_DRIVER_RESERVED_REGISTER_SPACE_VALUES_START = 0xfffffff0;
const UINT D3D12_DS_INPUT_CONTROL_POINTS_MAX_TOTAL_SCALARS = 3968;
const UINT D3D12_DS_INPUT_CONTROL_POINT_REGISTER_COMPONENTS = 4;
const UINT D3D12_DS_INPUT_CONTROL_POINT_REGISTER_COMPONENT_BIT_COUNT = 32;
const UINT D3D12_DS_INPUT_CONTROL_POINT_REGISTER_COUNT = 32;
const UINT D3D12_DS_INPUT_CONTROL_POINT_REGISTER_READS_PER_INST = 2;
const UINT D3D12_DS_INPUT_CONTROL_POINT_REGISTER_READ_PORTS = 1;
const UINT D3D12_DS_INPUT_DOMAIN_POINT_REGISTER_COMPONENTS = 3;
const UINT D3D12_DS_INPUT_DOMAIN_POINT_REGISTER_COMPONENT_BIT_COUNT = 32;
const UINT D3D12_DS_INPUT_DOMAIN_POINT_REGISTER_COUNT = 1;
const UINT D3D12_DS_INPUT_DOMAIN_POINT_REGISTER_READS_PER_INST = 2;
const UINT D3D12_DS_INPUT_DOMAIN_POINT_REGISTER_READ_PORTS = 1;
const UINT D3D12_DS_INPUT_PATCH_CONSTANT_REGISTER_COMPONENTS = 4;
const UINT D3D12_DS_INPUT_PATCH_CONSTANT_REGISTER_COMPONENT_BIT_COUNT = 32;
const UINT D3D12_DS_INPUT_PATCH_CONSTANT_REGISTER_COUNT = 32;
const UINT D3D12_DS_INPUT_PATCH_CONSTANT_REGISTER_READS_PER_INST = 2;
const UINT D3D12_DS_INPUT_PATCH_CONSTANT_REGISTER_READ_PORTS = 1;
const UINT D3D12_DS_INPUT_PRIMITIVE_ID_REGISTER_COMPONENTS = 1;
const UINT D3D12_DS_INPUT_PRIMITIVE_ID_REGISTER_COMPONENT_BIT_COUNT = 32;
const UINT D3D12_DS_INPUT_PRIMITIVE_ID_REGISTER_COUNT = 1;
const UINT D3D12_DS_INPUT_PRIMITIVE_ID_REGISTER_READS_PER_INST = 2;
const UINT D3D12_DS_INPUT_PRIMITIVE_ID_REGISTER_READ_PORTS = 1;
const UINT D3D12_DS_OUTPUT_REGISTER_COMPONENTS = 4;
const UINT D3D12_DS_OUTPUT_REGISTER_COMPONENT_BIT_COUNT = 32;
const UINT D3D12_DS_OUTPUT_REGISTER_COUNT = 32;
#define D3D12_FLOAT16_FUSED_TOLERANCE_IN_ULP	( 0.6 )
#define D3D12_FLOAT32_MAX	( 3.402823466e+38f )
#define D3D12_FLOAT32_TO_INTEGER_TOLERANCE_IN_ULP	( 0.6f )
#define D3D12_FLOAT_TO_SRGB_EXPONENT_DENOMINATOR	( 2.4f )
#define D3D12_FLOAT_TO_SRGB_EXPONENT_NUMERATOR	( 1.0f )
#define D3D12_FLOAT_TO_SRGB_OFFSET	( 0.055f )
#define D3D12_FLOAT_TO_SRGB_SCALE_1	( 12.92f )
#define D3D12_FLOAT_TO_SRGB_SCALE_2	( 1.055f )
#define D3D12_FLOAT_TO_SRGB_THRESHOLD	( 0.0031308f )
#define D3D12_FTOI_INSTRUCTION_MAX_INPUT	( 2147483647.999f )
#define D3D12_FTOI_INSTRUCTION_MIN_INPUT	( -2147483648.999f )
#define D3D12_FTOU_INSTRUCTION_MAX_INPUT	( 4294967295.999f )
#define D3D12_FTOU_INSTRUCTION_MIN_INPUT	( 0.0f )
const UINT D3D12_GS_INPUT_INSTANCE_ID_READS_PER_INST = 2;
const UINT D3D12_GS_INPUT_INSTANCE_ID_READ_PORTS = 1;
const UINT D3D12_GS_INPUT_INSTANCE_ID_REGISTER_COMPONENTS = 1;
const UINT D3D12_GS_INPUT_INSTANCE_ID_REGISTER_COMPONENT_BIT_COUNT = 32;
const UINT D3D12_GS_INPUT_INSTANCE_ID_REGISTER_COUNT = 1;
const UINT D3D12_GS_INPUT_PRIM_CONST_REGISTER_COMPONENTS = 1;
const UINT D3D12_GS_INPUT_PRIM_CONST_REGISTER_COMPONENT_BIT_COUNT = 32;
const UINT D3D12_GS_INPUT_PRIM_CONST_REGISTER_COUNT = 1;
const UINT D3D12_GS_INPUT_PRIM_CONST_REGISTER_READS_PER_INST = 2;
const UINT D3D12_GS_INPUT_PRIM_CONST_REGISTER_READ_PORTS = 1;
const UINT D3D12_GS_INPUT_REGISTER_COMPONENTS = 4;
const UINT D3D12_GS_INPUT_REGISTER_COMPONENT_BIT_COUNT = 32;
const UINT D3D12_GS_INPUT_REGISTER_COUNT = 32;
const UINT D3D12_GS_INPUT_REGISTER_READS_PER_INST = 2;
const UINT D3D12_GS_INPUT_REGISTER_READ_PORTS = 1;
const UINT D3D12_GS_INPUT_REGISTER_VERTICES = 32;
const UINT D3D12_GS_MAX_INSTANCE_COUNT = 32;
const UINT D3D12_GS_MAX_OUTPUT_VERTEX_COUNT_ACROSS_INSTANCES = 1024;
const UINT D3D12_GS_OUTPUT_ELEMENTS = 32;
const UINT D3D12_GS_OUTPUT_REGISTER_COMPONENTS = 4;
const UINT D3D12_GS_OUTPUT_REGISTER_COMPONENT_BIT_COUNT = 32;
const UINT D3D12_GS_OUTPUT_REGISTER_COUNT = 32;
const UINT D3D12_HS_CONTROL_POINT_PHASE_INPUT_REGISTER_COUNT = 32;
const UINT D3D12_HS_CONTROL_POINT_PHASE_OUTPUT_REGISTER_COUNT = 32;
const UINT D3D12_HS_CONTROL_POINT_REGISTER_COMPONENTS = 4;
const UINT D3D12_HS_CONTROL_POINT_REGISTER_COMPONENT_BIT_COUNT = 32;
const UINT D3D12_HS_CONTROL_POINT_REGISTER_READS_PER_INST = 2;
const UINT D3D12_HS_CONTROL_POINT_REGISTER_READ_PORTS = 1;
const UINT D3D12_HS_FORK_PHASE_INSTANCE_COUNT_UPPER_BOUND = 0xFFFFFFFF;
const UINT D3D12_HS_INPUT_FORK_INSTANCE_ID_REGISTER_COMPONENTS = 1;
const UINT D3D12_HS_INPUT_FORK_INSTANCE_ID_REGISTER_COMPONENT_BIT_COUNT = 32;
const UINT D3D12_HS_INPUT_FORK_INSTANCE_ID_REGISTER_COUNT = 1;
const UINT D3D12_HS_INPUT_FORK_INSTANCE_ID_REGISTER_READS_PER_INST = 2;
const UINT D3D12_HS_INPUT_FORK_INSTANCE_ID_REGISTER_READ_PORTS = 1;
const UINT D3D12_HS_INPUT_JOIN_INSTANCE_ID_REGISTER_COMPONENTS = 1;
const UINT D3D12_HS_INPUT_JOIN_INSTANCE_ID_REGISTER_COMPONENT_BIT_COUNT = 32;
const UINT D3D12_HS_INPUT_JOIN_INSTANCE_ID_REGISTER_COUNT = 1;
const UINT D3D12_HS_INPUT_JOIN_INSTANCE_ID_REGISTER_READS_PER_INST = 2;
const UINT D3D12_HS_INPUT_JOIN_INSTANCE_ID_REGISTER_READ_PORTS = 1;
const UINT D3D12_HS_INPUT_PRIMITIVE_ID_REGISTER_COMPONENTS = 1;
const UINT D3D12_HS_INPUT_PRIMITIVE_ID_REGISTER_COMPONENT_BIT_COUNT = 32;
const UINT D3D12_HS_INPUT_PRIMITIVE_ID_REGISTER_COUNT = 1;
const UINT D3D12_HS_INPUT_PRIMITIVE_ID_REGISTER_READS_PER_INST = 2;
const UINT D3D12_HS_INPUT_PRIMITIVE_ID_REGISTER_READ_PORTS = 1;
const UINT D3D12_HS_JOIN_PHASE_INSTANCE_COUNT_UPPER_BOUND = 0xFFFFFFFF;
#define D3D12_HS_MAXTESSFACTOR_LOWER_BOUND	( 1.0f )
#define D3D12_HS_MAXTESSFACTOR_UPPER_BOUND	( 64.0f )
const UINT D3D12_HS_OUTPUT_CONTROL_POINTS_MAX_TOTAL_SCALARS = 3968;
const UINT D3D12_HS_OUTPUT_CONTROL_POINT_ID_REGISTER_COMPONENTS = 1;
const UINT D3D12_HS_OUTPUT_CONTROL_POINT_ID_REGISTER_COMPONENT_BIT_COUNT = 32;
const UINT D3D12_HS_OUTPUT_CONTROL_POINT_ID_REGISTER_COUNT = 1;
const UINT D3D12_HS_OUTPUT_CONTROL_POINT_ID_REGISTER_READS_PER_INST = 2;
const UINT D3D12_HS_OUTPUT_CONTROL_POINT_ID_REGISTER_READ_PORTS = 1;
const UINT D3D12_HS_OUTPUT_PATCH_CONSTANT_REGISTER_COMPONENTS = 4;
const UINT D3D12_HS_OUTPUT_PATCH_CONSTANT_REGISTER_COMPONENT_BIT_COUNT = 32;
const UINT D3D12_HS_OUTPUT_PATCH_CONSTANT_REGISTER_COUNT = 32;
const UINT D3D12_HS_OUTPUT_PATCH_CONSTANT_REGISTER_READS_PER_INST = 2;
const UINT D3D12_HS_OUTPUT_PATCH_CONSTANT_REGISTER_READ_PORTS = 1;
const UINT D3D12_HS_OUTPUT_PATCH_CONSTANT_REGISTER_SCALAR_COMPONENTS = 128;
const UINT D3D12_IA_DEFAULT_INDEX_BUFFER_OFFSET_IN_BYTES = 0;
const UINT D3D12_IA_DEFAULT_PRIMITIVE_TOPOLOGY = 0;
const UINT D3D12_IA_DEFAULT_VERTEX_BUFFER_OFFSET_IN_BYTES = 0;
const UINT D3D12_IA_INDEX_INPUT_RESOURCE_SLOT_COUNT = 1;
const UINT D3D12_IA_INSTANCE_ID_BIT_COUNT = 32;
const UINT D3D12_IA_INTEGER_ARITHMETIC_BIT_COUNT = 32;
const UINT D3D12_IA_PATCH_MAX_CONTROL_POINT_COUNT = 32;
const UINT D3D12_IA_PRIMITIVE_ID_BIT_COUNT = 32;
const UINT D3D12_IA_VERTEX_ID_BIT_COUNT = 32;
const UINT D3D12_IA_VERTEX_INPUT_RESOURCE_SLOT_COUNT = 32;
const UINT D3D12_IA_VERTEX_INPUT_STRUCTURE_ELEMENTS_COMPONENTS = 128;
const UINT D3D12_IA_VERTEX_INPUT_STRUCTURE_ELEMENT_COUNT = 32;
const UINT D3D12_INTEGER_DIVIDE_BY_ZERO_QUOTIENT = 0xffffffff;
const UINT D3D12_INTEGER_DIVIDE_BY_ZERO_REMAINDER = 0xffffffff;
const UINT D3D12_KEEP_RENDER_TARGETS_AND_DEPTH_STENCIL = 0xffffffff;
const UINT D3D12_KEEP_UNORDERED_ACCESS_VIEWS = 0xffffffff;
#define D3D12_LINEAR_GAMMA	( 1.0f )
const UINT D3D12_MAJOR_VERSION = 12;
#define D3D12_MAX_BORDER_COLOR_COMPONENT	( 1.0f )
#define D3D12_MAX_DEPTH	( 1.0f )
const UINT D3D12_MAX_LIVE_STATIC_SAMPLERS = 2032;
const UINT D3D12_MAX_MAXANISOTROPY = 16;
const UINT D3D12_MAX_MULTISAMPLE_SAMPLE_COUNT = 32;
#define D3D12_MAX_POSITION_VALUE	( 3.402823466e+34f )
const UINT D3D12_MAX_ROOT_COST = 64;
const UINT D3D12_MAX_SHADER_VISIBLE_DESCRIPTOR_HEAP_SIZE_TIER_1 = 1000000;
const UINT D3D12_MAX_SHADER_VISIBLE_DESCRIPTOR_HEAP_SIZE_TIER_2 = 1000000;
const UINT D3D12_MAX_SHADER_VISIBLE_SAMPLER_HEAP_SIZE = 2048;
const UINT D3D12_MAX_TEXTURE_DIMENSION_2_TO_EXP = 17;
const UINT D3D12_MINOR_VERSION = 0;
#define D3D12_MIN_BORDER_COLOR_COMPONENT	( 0.0f )
#define D3D12_MIN_DEPTH	( 0.0f )
const UINT D3D12_MIN_MAXANISOTROPY = 0;
#define D3D12_MIP_LOD_BIAS_MAX	( 15.99f )
#define D3D12_MIP_LOD_BIAS_MIN	( -16.0f )
const UINT D3D12_MIP_LOD_FRACTIONAL_BIT_COUNT = 8;
const UINT D3D12_MIP_LOD_RANGE_BIT_COUNT = 8;
#define D3D12_MULTISAMPLE_ANTIALIAS_LINE_WIDTH	( 1.4f )
const UINT D3D12_NONSAMPLE_FETCH_OUT_OF_RANGE_ACCESS_RESULT = 0;
const UINT D3D12_OS_RESERVED_REGISTER_SPACE_VALUES_END = 0xffffffff;
const UINT D3D12_OS_RESERVED_REGISTER_SPACE_VALUES_START = 0xfffffff8;
const UINT D3D12_PACKED_TILE = 0xffffffff;
const UINT D3D12_PIXEL_ADDRESS_RANGE_BIT_COUNT = 15;
const UINT D3D12_PRE_SCISSOR_PIXEL_ADDRESS_RANGE_BIT_COUNT = 16;
const UINT D3D12_PS_CS_UAV_REGISTER_COMPONENTS = 1;
const UINT D3D12_PS_CS_UAV_REGISTER_COUNT = 8;
const UINT D3D12_PS_CS_UAV_REGISTER_READS_PER_INST = 1;
const UINT D3D12_PS_CS_UAV_REGISTER_READ_PORTS = 1;
const UINT D3D12_PS_FRONTFACING_DEFAULT_VALUE = 0xFFFFFFFF;
const UINT D3D12_PS_FRONTFACING_FALSE_VALUE = 0x00000000;
const UINT D3D12_PS_FRONTFACING_TRUE_VALUE = 0xFFFFFFFF;
const UINT D3D12_PS_INPUT_REGISTER_COMPONENTS = 4;
const UINT D3D12_PS_INPUT_REGISTER_COMPONENT_BIT_COUNT = 32;
const UINT D3D12_PS_INPUT_REGISTER_COUNT = 32;
const UINT D3D12_PS_INPUT_REGISTER_READS_PER_INST = 2;
const UINT D3D12_PS_INPUT_REGISTER_READ_PORTS = 1;
#define D3D12_PS_LEGACY_PIXEL_CENTER_FRACTIONAL_COMPONENT	( 0.0f )
const UINT D3D12_PS_OUTPUT_DEPTH_REGISTER_COMPONENTS = 1;
const UINT D3D12_PS_OUTPUT_DEPTH_REGISTER_COMPONENT_BIT_COUNT = 32;
const UINT D3D12_PS_OUTPUT_DEPTH_REGISTER_COUNT = 1;
const UINT D3D12_PS_OUTPUT_MASK_REGISTER_COMPONENTS = 1;
const UINT D3D12_PS_OUTPUT_MASK_REGISTER_COMPONENT_BIT_COUNT = 32;
const UINT D3D12_PS_OUTPUT_MASK_REGISTER_COUNT = 1;
const UINT D3D12_PS_OUTPUT_REGISTER_COMPONENTS = 4;
const UINT D3D12_PS_OUTPUT_REGISTER_COMPONENT_BIT_COUNT = 32;
const UINT D3D12_PS_OUTPUT_REGISTER_COUNT = 8;
#define D3D12_PS_PIXEL_CENTER_FRACTIONAL_COMPONENT	( 0.5f )
const UINT D3D12_RAW_UAV_SRV_BYTE_ALIGNMENT = 16;
const UINT D3D12_REQ_BLEND_OBJECT_COUNT_PER_DEVICE = 4096;
const UINT D3D12_REQ_BUFFER_RESOURCE_TEXEL_COUNT_2_TO_EXP = 27;
const UINT D3D12_REQ_CONSTANT_BUFFER_ELEMENT_COUNT = 4096;
const UINT D3D12_REQ_DEPTH_STENCIL_OBJECT_COUNT_PER_DEVICE = 4096;
const UINT D3D12_REQ_DRAWINDEXED_INDEX_COUNT_2_TO_EXP = 32;
const UINT D3D12_REQ_DRAW_VERTEX_COUNT_2_TO_EXP = 32;
const UINT D3D12_REQ_FILTERING_HW_ADDRESSABLE_RESOURCE_DIMENSION = 16384;
const UINT D3D12_REQ_GS_INVOCATION_32BIT_OUTPUT_COMPONENT_LIMIT = 1024;
const UINT D3D12_REQ_IMMEDIATE_CONSTANT_BUFFER_ELEMENT_COUNT = 4096;
const UINT D3D12_REQ_MAXANISOTROPY = 16;
const UINT D3D12_REQ_MIP_LEVELS = 15;
const UINT D3D12_REQ_MULTI_ELEMENT_STRUCTURE_SIZE_IN_BYTES = 2048;
const UINT D3D12_REQ_RASTERIZER_OBJECT_COUNT_PER_DEVICE = 4096;
const UINT D3D12_REQ_RENDER_TO_BUFFER_WINDOW_WIDTH = 16384;
const UINT D3D12_REQ_RESOURCE_SIZE_IN_MEGABYTES_EXPRESSION_A_TERM = 128;
#define D3D12_REQ_RESOURCE_SIZE_IN_MEGABYTES_EXPRESSION_B_TERM	( 0.25f )
const UINT D3D12_REQ_RESOURCE_SIZE_IN_MEGABYTES_EXPRESSION_C_TERM = 2048;
const UINT D3D12_REQ_RESOURCE_VIEW_COUNT_PER_DEVICE_2_TO_EXP = 20;
const UINT D3D12_REQ_SAMPLER_OBJECT_COUNT_PER_DEVICE = 4096;
const UINT D3D12_REQ_SUBRESOURCES = 30720;
const UINT D3D12_REQ_TEXTURE1D_ARRAY_AXIS_DIMENSION = 2048;
const UINT D3D12_REQ_TEXTURE1D_U_DIMENSION = 16384;
const UINT D3D12_REQ_TEXTURE2D_ARRAY_AXIS_DIMENSION = 2048;
const UINT D3D12_REQ_TEXTURE2D_U_OR_V_DIMENSION = 16384;
const UINT D3D12_REQ_TEXTURE3D_U_V_OR_W_DIMENSION = 2048;
const UINT D3D12_REQ_TEXTURECUBE_DIMENSION = 16384;
const UINT D3D12_RESINFO_INSTRUCTION_MISSING_COMPONENT_RETVAL = 0;
const UINT D3D12_RESOURCE_BARRIER_ALL_SUBRESOURCES = 0xffffffff;
const UINT D3D12_SHADER_MAJOR_VERSION = 5;
const UINT D3D12_SHADER_MAX_INSTANCES = 65535;
const UINT D3D12_SHADER_MAX_INTERFACES = 253;
const UINT D3D12_SHADER_MAX_INTERFACE_CALL_SITES = 4096;
const UINT D3D12_SHADER_MAX_TYPES = 65535;
const UINT D3D12_SHADER_MINOR_VERSION = 1;
const UINT D3D12_SHIFT_INSTRUCTION_PAD_VALUE = 0;
const UINT D3D12_SHIFT_INSTRUCTION_SHIFT_VALUE_BIT_COUNT = 5;
const UINT D3D12_SIMULTANEOUS_RENDER_TARGET_COUNT = 8;
const UINT D3D12_SMALL_MSAA_RESOURCE_PLACEMENT_ALIGNMENT = 65536;
const UINT D3D12_SMALL_RESOURCE_PLACEMENT_ALIGNMENT = 4096;
const UINT D3D12_SO_BUFFER_MAX_STRIDE_IN_BYTES = 2048;
const UINT D3D12_SO_BUFFER_MAX_WRITE_WINDOW_IN_BYTES = 512;
const UINT D3D12_SO_BUFFER_SLOT_COUNT = 4;
const UINT D3D12_SO_DDI_REGISTER_INDEX_DENOTING_GAP = 0xffffffff;
const UINT D3D12_SO_NO_RASTERIZED_STREAM = 0xffffffff;
const UINT D3D12_SO_OUTPUT_COMPONENT_COUNT = 128;
const UINT D3D12_SO_STREAM_COUNT = 4;
const UINT D3D12_SPEC_DATE_DAY = 14;
const UINT D3D12_SPEC_DATE_MONTH = 11;
const UINT D3D12_SPEC_DATE_YEAR = 2014;
#define D3D12_SPEC_VERSION	( 1.16 )
#define D3D12_SRGB_GAMMA	( 2.2f )
#define D3D12_SRGB_TO_FLOAT_DENOMINATOR_1	( 12.92f )
#define D3D12_SRGB_TO_FLOAT_DENOMINATOR_2	( 1.055f )
#define D3D12_SRGB_TO_FLOAT_EXPONENT	( 2.4f )
#define D3D12_SRGB_TO_FLOAT_OFFSET	( 0.055f )
#define D3D12_SRGB_TO_FLOAT_THRESHOLD	( 0.04045f )
#define D3D12_SRGB_TO_FLOAT_TOLERANCE_IN_ULP	( 0.5f )
const UINT D3D12_STANDARD_COMPONENT_BIT_COUNT = 32;
const UINT D3D12_STANDARD_COMPONENT_BIT_COUNT_DOUBLED = 64;
const UINT D3D12_STANDARD_MAXIMUM_ELEMENT_ALIGNMENT_BYTE_MULTIPLE = 4;
const UINT D3D12_STANDARD_PIXEL_COMPONENT_COUNT = 128;
const UINT D3D12_STANDARD_PIXEL_ELEMENT_COUNT = 32;
const UINT D3D12_STANDARD_VECTOR_SIZE = 4;
const UINT D3D12_STANDARD_VERTEX_ELEMENT_COUNT = 32;
const UINT D3D12_STANDARD_VERTEX_TOTAL_COMPONENT_COUNT = 64;
const UINT D3D12_SUBPIXEL_FRACTIONAL_BIT_COUNT = 8;
const UINT D3D12_SUBTEXEL_FRACTIONAL_BIT_COUNT = 8;
const UINT D3D12_SYSTEM_RESERVED_REGISTER_SPACE_VALUES_END = 0xffffffff;
const UINT D3D12_SYSTEM_RESERVED_REGISTER_SPACE_VALUES_START = 0xfffffff0;
const UINT D3D12_TESSELLATOR_MAX_EVEN_TESSELLATION_FACTOR = 64;
const UINT D3D12_TESSELLATOR_MAX_ISOLINE_DENSITY_TESSELLATION_FACTOR = 64;
const UINT D3D12_TESSELLATOR_MAX_ODD_TESSELLATION_FACTOR = 63;
const UINT D3D12_TESSELLATOR_MAX_TESSELLATION_FACTOR = 64;
const UINT D3D12_TESSELLATOR_MIN_EVEN_TESSELLATION_FACTOR = 2;
const UINT D3D12_TESSELLATOR_MIN_ISOLINE_DENSITY_TESSELLATION_FACTOR = 1;
const UINT D3D12_TESSELLATOR_MIN_ODD_TESSELLATION_FACTOR = 1;
const UINT D3D12_TEXEL_ADDRESS_RANGE_BIT_COUNT = 16;
const UINT D3D12_TEXTURE_DATA_PITCH_ALIGNMENT = 256;
const UINT D3D12_TEXTURE_DATA_PLACEMENT_ALIGNMENT = 512;
const UINT D3D12_TILED_RESOURCE_TILE_SIZE_IN_BYTES = 65536;
const UINT D3D12_UAV_COUNTER_PLACEMENT_ALIGNMENT = 4096;
const UINT D3D12_UAV_SLOT_COUNT = 64;
const UINT D3D12_UNBOUND_MEMORY_ACCESS_RESULT = 0;
const UINT D3D12_VIEWPORT_AND_SCISSORRECT_MAX_INDEX = 15;
const UINT D3D12_VIEWPORT_AND_SCISSORRECT_OBJECT_COUNT_PER_PIPELINE = 16;
const UINT D3D12_VIEWPORT_BOUNDS_MAX = 32767;
const INT D3D12_VIEWPORT_BOUNDS_MIN = -32768;
const UINT D3D12_VS_INPUT_REGISTER_COMPONENTS = 4;
const UINT D3D12_VS_INPUT_REGISTER_COMPONENT_BIT_COUNT = 32;
const UINT D3D12_VS_INPUT_REGISTER_COUNT = 32;
const UINT D3D12_VS_INPUT_REGISTER_READS_PER_INST = 2;
const UINT D3D12_VS_INPUT_REGISTER_READ_PORTS = 1;
const UINT D3D12_VS_OUTPUT_REGISTER_COMPONENTS = 4;
const UINT D3D12_VS_OUTPUT_REGISTER_COMPONENT_BIT_COUNT = 32;
const UINT D3D12_VS_OUTPUT_REGISTER_COUNT = 32;
const UINT D3D12_WHQL_CONTEXT_COUNT_FOR_RESOURCE_LIMIT = 10;
const UINT D3D12_WHQL_DRAWINDEXED_INDEX_COUNT_2_TO_EXP = 25;
const UINT D3D12_WHQL_DRAW_VERTEX_COUNT_2_TO_EXP = 25;
#endif
// NOTE: The following constants are generated from the D3D12 hardware spec.  Do not edit these values directly.
#ifndef _D3D12DDI_CONSTANTS
#define _D3D12DDI_CONSTANTS
const UINT D3D12DDI_MAX_ROOT_COST = 128;
#endif
