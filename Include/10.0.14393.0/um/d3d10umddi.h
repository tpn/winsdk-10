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

#ifndef _D3D10UMDDI_H
#define _D3D10UMDDI_H

#include "dxmini.h"
#include "d3dkmddi.h"
#include "d3d9types.h"
#include "d3dumddi.h"
#include "d3dkmthk.h"

#ifndef D3D10DDI_MINOR_HEADER_VERSION
#define D3D10DDI_MINOR_HEADER_VERSION 2
#endif

#include "dxgiddi.h"
#if D3D10DDI_MINOR_HEADER_VERSION < 2
#include "d3d10tokenizedprogramformat.hpp"
#else
#ifdef D3D12_TOKENIZED_PROGRAM_FORMAT_HEADER
#include "d3d12tokenizedprogramformat.hpp"
#else
#include "d3d11tokenizedprogramformat.hpp"
#endif
#endif

#if !defined ( D3D11DDI_MINOR_HEADER_VERSION )  || ( D3D11DDI_MINOR_HEADER_VERSION < 5 && D3D12DDI_MINOR_HEADER_VERSION >= 1 )
#undef D3D11DDI_MINOR_HEADER_VERSION
#define D3D11DDI_MINOR_HEADER_VERSION 11
#endif

//----------------------------------

// Strongly-typed handles:

// Kernel Mode handles:
//----------------------------------
#if defined( __cplusplus )

//----------------------------------
#define D3D10DDI_HKM( TYPE ) \
typedef struct TYPE \
{ \
    D3DKMT_HANDLE handle; \
 \
    bool operator< ( const TYPE& o ) const \
    { return handle <  o.handle; } \
    bool operator<=( const TYPE& o ) const \
    { return handle <= o.handle; } \
    bool operator> ( const TYPE& o ) const \
    { return handle >  o.handle; } \
    bool operator>=( const TYPE& o ) const \
    { return handle >= o.handle; } \
    bool operator==( const TYPE& o ) const \
    { return handle == o.handle; } \
    bool operator!=( const TYPE& o ) const \
    { return handle != o.handle; } \
} TYPE; \
 \
inline TYPE MAKE_##TYPE##( D3DKMT_HANDLE h ) \
{ const TYPE r = { h }; return r; }

#else

//----------------------------------
#define D3D10DDI_HKM( TYPE ) \
typedef struct TYPE \
{ \
    D3DKMT_HANDLE handle; \
} TYPE;

#endif

//----------------------------------
D3D10DDI_HKM( D3D10DDI_HKMDEVICE ) // D3D10DDI_HKMDEVICE
D3D10DDI_HKM( D3D10DDI_HKMRESOURCE ) // D3D10DDI_HKMRESOURCE
D3D10DDI_HKM( D3D10DDI_HKMALLOCATION ) // D3D10DDI_HKMALLOCATION

// Runtime handles:
//----------------------------------
#if defined( __cplusplus )

#define D3D10DDI_HRT( TYPE ) \
typedef struct TYPE \
{ \
    VOID* handle; \
 \
    bool operator< ( const TYPE& o ) const \
    { return handle <  o.handle; } \
    bool operator<=( const TYPE& o ) const \
    { return handle <= o.handle; } \
    bool operator> ( const TYPE& o ) const \
    { return handle >  o.handle; } \
    bool operator>=( const TYPE& o ) const \
    { return handle >= o.handle; } \
    bool operator==( const TYPE& o ) const \
    { return handle == o.handle; } \
    bool operator!=( const TYPE& o ) const \
    { return handle != o.handle; } \
} TYPE; \
 \
inline TYPE MAKE_##TYPE##( VOID* h ) \
{ const TYPE r = { h }; return r; }
#else

#define D3D10DDI_HRT( TYPE ) \
typedef struct TYPE \
{ \
    VOID* handle; \
} TYPE;
#endif

//----------------------------------
D3D10DDI_HRT( D3D10DDI_HRTADAPTER ) // D3D10DDI_HRTADAPTER  ... this is for KT callbacks
D3D10DDI_HRT( D3D10DDI_HRTDEVICE ) // D3D10DDI_HRTDEVICE  ... this is for KT callbacks
D3D10DDI_HRT( D3D10DDI_HRTCORELAYER ) // D3D10DDI_HRTCORELAYER ... this is for the core layer callbacks
D3D10DDI_HRT( D3D10DDI_HRTRESOURCE ) // D3D10DDI_HRTRESOURCE ... used for KT resource handles
D3D10DDI_HRT( D3D10DDI_HRTSHADERRESOURCEVIEW )
D3D10DDI_HRT( D3D10DDI_HRTRENDERTARGETVIEW )
D3D10DDI_HRT( D3D10DDI_HRTDEPTHSTENCILVIEW )
D3D10DDI_HRT( D3D10DDI_HRTSHADER )
D3D10DDI_HRT( D3D10DDI_HRTELEMENTLAYOUT )
D3D10DDI_HRT( D3D10DDI_HRTBLENDSTATE )
D3D10DDI_HRT( D3D10DDI_HRTDEPTHSTENCILSTATE )
D3D10DDI_HRT( D3D10DDI_HRTRASTERIZERSTATE )
D3D10DDI_HRT( D3D10DDI_HRTSAMPLER )
D3D10DDI_HRT( D3D10DDI_HRTQUERY )
#if D3D11DDI_MINOR_HEADER_VERSION >= 1
D3D10DDI_HRT( D3D11DDI_HRTUNORDEREDACCESSVIEW )
#endif
#if D3D11DDI_MINOR_HEADER_VERSION >= 3
D3D10DDI_HRT( D3D11_1DDI_HRTDECODE )
D3D10DDI_HRT( D3D11_1DDI_HRTVIDEOPROCESSORENUM )
D3D10DDI_HRT( D3D11_1DDI_HRTVIDEOPROCESSOR )
D3D10DDI_HRT( D3D11_1DDI_HRTVIDEODECODEROUTPUTVIEW )
D3D10DDI_HRT( D3D11_1DDI_HRTVIDEOPROCESSORINPUTVIEW )
D3D10DDI_HRT( D3D11_1DDI_HRTVIDEOPROCESSOROUTPUTVIEW )
D3D10DDI_HRT( D3D11_1DDI_HRTCRYPTOSESSION )
D3D10DDI_HRT( D3D11_1DDI_HRTAUTHCHANNEL )
#endif

#if D3D11DDI_MINOR_HEADER_VERSION > 0
#if defined( __cplusplus )

#define D3D11DDI_HRT( TYPE ) \
typedef struct TYPE \
{ \
    VOID* handle; \
 \
    bool operator< ( const TYPE& o ) const \
    { return handle <  o.handle; } \
    bool operator<=( const TYPE& o ) const \
    { return handle <= o.handle; } \
    bool operator> ( const TYPE& o ) const \
    { return handle >  o.handle; } \
    bool operator>=( const TYPE& o ) const \
    { return handle >= o.handle; } \
    bool operator==( const TYPE& o ) const \
    { return handle == o.handle; } \
    bool operator!=( const TYPE& o ) const \
    { return handle != o.handle; } \
} TYPE; \
 \
inline TYPE MAKE_##TYPE##( VOID* h ) \
{ const TYPE r = { h }; return r; }
#else

#define D3D11DDI_HRT( TYPE ) \
typedef struct TYPE \
{ \
    VOID* handle; \
} TYPE;
#endif

//----------------------------------
D3D11DDI_HRT( D3D11DDI_HRTCOMMANDLIST )
#endif

// Driver handles:
//----------------------------------
#if defined( __cplusplus )

#define D3D10DDI_H( TYPE ) \
typedef struct TYPE \
{ \
    VOID* pDrvPrivate; \
 \
    bool operator< ( const TYPE& o ) const \
    { return pDrvPrivate <  o.pDrvPrivate; } \
    bool operator<=( const TYPE& o ) const \
    { return pDrvPrivate <= o.pDrvPrivate; } \
    bool operator> ( const TYPE& o ) const \
    { return pDrvPrivate >  o.pDrvPrivate; } \
    bool operator>=( const TYPE& o ) const \
    { return pDrvPrivate >= o.pDrvPrivate; } \
    bool operator==( const TYPE& o ) const \
    { return pDrvPrivate == o.pDrvPrivate; } \
    bool operator!=( const TYPE& o ) const \
    { return pDrvPrivate != o.pDrvPrivate; } \
} TYPE; \
 \
inline TYPE MAKE_##TYPE##( VOID* h ) \
{ const TYPE r = { h }; return r; }
#else

#define D3D10DDI_H( TYPE ) \
typedef struct TYPE \
{ \
    VOID* pDrvPrivate; \
} TYPE;
#endif

//----------------------------------
D3D10DDI_H( D3D10DDI_HADAPTER )
D3D10DDI_H( D3D10DDI_HDEVICE )
D3D10DDI_H( D3D10DDI_HRESOURCE ) // D3D10DDI_HT_RESOURCE
D3D10DDI_H( D3D10DDI_HSHADERRESOURCEVIEW ) // D3D10DDI_HT_SHADERRESOURCEVIEW
D3D10DDI_H( D3D10DDI_HRENDERTARGETVIEW ) // D3D10DDI_HT_RENDERTARGETVIEW
D3D10DDI_H( D3D10DDI_HDEPTHSTENCILVIEW ) // D3D10DDI_HT_DEPTHSTENCILVIEW
D3D10DDI_H( D3D10DDI_HSHADER ) // D3D10DDI_HT_SHADER
D3D10DDI_H( D3D10DDI_HELEMENTLAYOUT ) // D3D10DDI_HT_ELEMENTLAYOUT
D3D10DDI_H( D3D10DDI_HBLENDSTATE ) // D3D10DDI_HT_BLENDSTATE
D3D10DDI_H( D3D10DDI_HDEPTHSTENCILSTATE ) // D3D10DDI_HT_DEPTHSTENCILSTATE
D3D10DDI_H( D3D10DDI_HRASTERIZERSTATE ) // D3D10DDI_HT_RASTERIZERSTATE
D3D10DDI_H( D3D10DDI_HSAMPLER ) // D3D10DDI_HT_SAMPLERSTATE
D3D10DDI_H( D3D10DDI_HQUERY ) // D3D10DDI_HT_QUERY
#if D3D11DDI_MINOR_HEADER_VERSION >= 1
D3D10DDI_H( D3D11DDI_HUNORDEREDACCESSVIEW ) // D3D11DDI_HT_HUNORDEREDACCESSVIEW
#endif
#if D3D11DDI_MINOR_HEADER_VERSION >= 3
D3D10DDI_H( D3D11_1DDI_HDECODE ) // D3D11_1DDI_HT_DECODE
D3D10DDI_H( D3D11_1DDI_HVIDEOPROCESSORENUM ) // D3D11_1DDI_HT_VIDEOPROCESSORENUM
D3D10DDI_H( D3D11_1DDI_HVIDEOPROCESSOR ) // D3D11_1DDI_HT_VIDEOPROCESSOR
D3D10DDI_H( D3D11_1DDI_HVIDEODECODEROUTPUTVIEW ) // D3D11_1DDI_HT_VIDEODECODEROUTPUTVIEW
D3D10DDI_H( D3D11_1DDI_HVIDEOPROCESSORINPUTVIEW ) // D3D11_1DDI_HT_VIDEOPROCESSORINPUTVIEW
D3D10DDI_H( D3D11_1DDI_HVIDEOPROCESSOROUTPUTVIEW ) // D3D11_1DDI_HT_VIDEOPROCESSOROUTPUTVIEW
D3D10DDI_H( D3D11_1DDI_HCRYPTOSESSION ) // D3D11_1DDI_HCRYPTOSESSION
D3D10DDI_H( D3D11_1DDI_HAUTHCHANNEL ) // D3D11_1DDI_HAUTHCHANNEL
#endif

#if D3D11DDI_MINOR_HEADER_VERSION > 0
#if defined( __cplusplus )

#define D3D11DDI_H( TYPE ) \
typedef struct TYPE \
{ \
    VOID* pDrvPrivate; \
 \
    bool operator< ( const TYPE& o ) const \
    { return pDrvPrivate <  o.pDrvPrivate; } \
    bool operator<=( const TYPE& o ) const \
    { return pDrvPrivate <= o.pDrvPrivate; } \
    bool operator> ( const TYPE& o ) const \
    { return pDrvPrivate >  o.pDrvPrivate; } \
    bool operator>=( const TYPE& o ) const \
    { return pDrvPrivate >= o.pDrvPrivate; } \
    bool operator==( const TYPE& o ) const \
    { return pDrvPrivate == o.pDrvPrivate; } \
    bool operator!=( const TYPE& o ) const \
    { return pDrvPrivate != o.pDrvPrivate; } \
} TYPE; \
 \
inline TYPE MAKE_##TYPE##( VOID* h ) \
{ const TYPE r = { h }; return r; }
#else

#define D3D11DDI_H( TYPE ) \
typedef struct TYPE \
{ \
    VOID* pDrvPrivate; \
} TYPE;
#endif

//----------------------------------
D3D11DDI_H( D3D11DDI_HCOMMANDLIST ) // D3D11DDI_HT_COMMANDLIST
#endif

typedef enum D3D10DDIRESOURCE_TYPE
{
    D3D10DDIRESOURCE_BUFFER      = 1,
    D3D10DDIRESOURCE_TEXTURE1D   = 2,
    D3D10DDIRESOURCE_TEXTURE2D   = 3,
    D3D10DDIRESOURCE_TEXTURE3D   = 4,
    D3D10DDIRESOURCE_TEXTURECUBE = 5,
#if D3D11DDI_MINOR_HEADER_VERSION >= 1
    D3D11DDIRESOURCE_BUFFEREX    = 6,
#endif
} D3D10DDIRESOURCE_TYPE;

typedef enum D3D10_DDI_RESOURCE_USAGE
{
    D3D10_DDI_USAGE_DEFAULT    = 0,
    D3D10_DDI_USAGE_IMMUTABLE  = 1,
    D3D10_DDI_USAGE_DYNAMIC    = 2,
    D3D10_DDI_USAGE_STAGING    = 3,
} D3D10_DDI_RESOURCE_USAGE;

typedef enum D3D10_DDI_RESOURCE_BIND_FLAG
{
    D3D10_DDI_BIND_VERTEX_BUFFER     = 0x00000001L,
    D3D10_DDI_BIND_INDEX_BUFFER      = 0x00000002L,
    D3D10_DDI_BIND_CONSTANT_BUFFER   = 0x00000004L,
    D3D10_DDI_BIND_SHADER_RESOURCE   = 0x00000008L,
    D3D10_DDI_BIND_STREAM_OUTPUT     = 0x00000010L,
    D3D10_DDI_BIND_RENDER_TARGET     = 0x00000020L,
    D3D10_DDI_BIND_DEPTH_STENCIL     = 0x00000040L,
    D3D10_DDI_BIND_PIPELINE_MASK     = 0x0000007FL,

    D3D10_DDI_BIND_PRESENT           = 0x00000080L,
    D3D10_DDI_BIND_MASK              = 0x000000FFL,

#if D3D11DDI_MINOR_HEADER_VERSION >= 3
    D3D11_DDI_BIND_UNORDERED_ACCESS  = 0x00000100L,
    D3D11_DDI_BIND_DECODER           = 0x00000200L,
    D3D11_DDI_BIND_VIDEO_ENCODER     = 0x00000400L,
    D3D11_DDI_BIND_CAPTURE           = 0x00000800L,

    D3D11_DDI_BIND_PIPELINE_MASK     = 0x00000F7FL,
    D3D11_DDI_BIND_MASK              = 0x00000FFFL,
#else
#if D3D11DDI_MINOR_HEADER_VERSION >= 1
    D3D11_DDI_BIND_UNORDERED_ACCESS  = 0x00000100L,

    D3D11_DDI_BIND_PIPELINE_MASK     = 0x0000017FL,
    D3D11_DDI_BIND_MASK              = 0x000001FFL,
#endif
#endif

} D3D10_DDI_RESOURCE_BIND_FLAG;

typedef enum D3D10_DDI_CPU_ACCESS
{
    D3D10_DDI_CPU_ACCESS_WRITE          = 0x00000001L,
    D3D10_DDI_CPU_ACCESS_READ           = 0x00000002L,
    D3D10_DDI_CPU_ACCESS_MASK          = 0x00000003L,
} D3D10_DDI_CPU_ACCESS;

typedef enum D3D10_DDI_RESOURCE_MISC_FLAG
{
    D3D10_DDI_RESOURCE_AUTO_GEN_MIP_MAP                     = 0x00000001L,
    D3D10_DDI_RESOURCE_MISC_SHARED                          = 0x00000002L,
    // Reserved for D3D11_RESOURCE_MISC_TEXTURECUBE           0x00000004L,
    D3D10_DDI_RESOURCE_MISC_DISCARD_ON_PRESENT              = 0x00000008L,
#if D3D11DDI_MINOR_HEADER_VERSION >= 1
    D3D11_DDI_RESOURCE_MISC_DRAWINDIRECT_ARGS               = 0x00000010L,
    D3D11_DDI_RESOURCE_MISC_BUFFER_ALLOW_RAW_VIEWS          = 0x00000020L,
    D3D11_DDI_RESOURCE_MISC_BUFFER_STRUCTURED               = 0x00000040L,
    D3D11_DDI_RESOURCE_MISC_RESOURCE_CLAMP                  = 0x00000080L,
#endif
    // Reserved for D3D11_RESOURCE_MISC_SHARED_KEYEDMUTEX     0x00000100L,
    // Reserved for D3D11_RESOURCE_MISC_GDI_COMPATIBLE        0x00000200L,
    D3D10_DDI_RESOURCE_MISC_REMOTE                          = 0x00000400L,
#if D3D11DDI_MINOR_HEADER_VERSION >= 3
    D3D11_1DDI_RESOURCE_MISC_RESTRICTED_CONTENT              = 0x00000800L,
    D3D11_1DDI_RESOURCE_MISC_RESTRICT_SHARED_RESOURCE_DRIVER = 0x00001000L,
#endif
#if D3D11DDI_MINOR_HEADER_VERSION >= 4
    D3DWDDM1_3DDI_RESOURCE_MISC_CROSS_ADAPTER                = 0x00002000L,
    D3DWDDM1_3DDI_RESOURCE_MISC_TILED                        = 0x00004000L,
    D3DWDDM1_3DDI_RESOURCE_MISC_TILE_POOL                    = 0x00008000L,
#endif
#if D3D11DDI_MINOR_HEADER_VERSION >= 5
    D3DWDDM2_0DDI_RESOURCE_MISC_HW_PROTECTED                 = 0x00010000L,
    D3DWDDM2_0DDI_RESOURCE_MISC_DISPLAYABLE_SURFACE          = 0x00020000L,
    D3DWDDM2_0DDI_RESOURCE_MISC_CONTAINS_HW_PROTECTED        = 0x00040000L,
#endif
} D3D10_DDI_RESOURCE_MISC_FLAG;

typedef enum D3D10_DDI_MAP // for calling ID3D10Resource::Map()
{
    D3D10_DDI_MAP_READ = 1,
    D3D10_DDI_MAP_WRITE = 2,
    D3D10_DDI_MAP_READWRITE = 3,
    D3D10_DDI_MAP_WRITE_DISCARD = 4,
    D3D10_DDI_MAP_WRITE_NOOVERWRITE = 5,
} D3D10_DDI_MAP;

typedef enum D3D10_DDI_MAP_FLAG
{
    D3D10_DDI_MAP_FLAG_DONOTWAIT             = 0x00100000L,
    D3D10_DDI_MAP_FLAG_MASK                  = 0x00100000L,
} D3D10_DDI_MAP_FLAG;

// Bit fields for the CheckFormatSupport DDI for features that are optional on some formats.
#define D3D10_DDI_FORMAT_SUPPORT_SHADER_SAMPLE            0x00000001 // format can be sampled with any filter in shaders
#define D3D10_DDI_FORMAT_SUPPORT_RENDERTARGET             0x00000002 // format can be a renderTarget
#define D3D10_DDI_FORMAT_SUPPORT_BLENDABLE                0x00000004 // format is blendable (can only be set if format can be renderTarget)
#define D3D10_DDI_FORMAT_SUPPORT_MULTISAMPLE_RENDERTARGET 0x00000008 // format can be used as RenderTarget with some sample count > 1.
#define D3D10_DDI_FORMAT_SUPPORT_MULTISAMPLE_LOAD         0x00000010 // format can be used as source for 'ld2dms'
#if D3D11DDI_MINOR_HEADER_VERSION >= 3
#define D3D11_1DDI_FORMAT_SUPPORT_DECODER_OUTPUT          0x00000020 // format can be used as decoder output
#define D3D11_1DDI_FORMAT_SUPPORT_VIDEO_PROCESSOR_OUTPUT  0x00000040 // format can be used as video processor output
#define D3D11_1DDI_FORMAT_SUPPORT_VIDEO_PROCESSOR_INPUT   0x00000080 // format can be used as video processor input
#define D3D11_1DDI_FORMAT_SUPPORT_VERTEX_BUFFER           0x00000100 // format can be used as vertex buffer
#define D3D11_1DDI_FORMAT_SUPPORT_UAV_WRITES              0x00000200 // format can be written to through a UAV
#define D3D11_1DDI_FORMAT_SUPPORT_BUFFER                  0x00000400 // format can used in a typed Buffer view
#define D3D11_1DDI_FORMAT_SUPPORT_CAPTURE                 0x00000800 // format that can be supported as an output to the video capture engine
#define D3D11_1DDI_FORMAT_SUPPORT_VIDEO_ENCODER           0x00001000 // format can be supported as an input to a hardware MFT
#define D3D11_1DDI_FORMAT_SUPPORT_OUTPUT_MERGER_LOGIC_OP  0x00002000 // format supports logic op
#define D3D11_1DDI_FORMAT_SUPPORT_SHADER_GATHER           0x00004000 // format supports gather4
#define D3D11_1DDI_FORMAT_SUPPORT_MULTIPLANE_OVERLAY      0x00008000 // format supports multi plane overlay
#endif
#if D3D11DDI_MINOR_HEADER_VERSION >= 4
#define D3DWDDM1_3DDI_FORMAT_SUPPORT_TILED                0x00010000 // format supports use in a tiled Texture1D/2D/Cube/Array (not incl Texture3D)
#endif
#if D3D11DDI_MINOR_HEADER_VERSION >= 5
#define D3DWDDM2_0DDI_FORMAT_SUPPORT_UAV_READS            0x00020000 // format supports Typed UAV Loads
#endif
#define D3D10_DDI_FORMAT_SUPPORT_NOT_SUPPORTED            0x80000000 // format is not supported at all. Currently only valid for DXGI_FORMAT_R10G10B10_XR_BIAS_A2_UNORM. (Set only this bit)

typedef struct D3D10DDI_MIPINFO
{
    UINT TexelWidth;
    UINT TexelHeight;
    UINT TexelDepth;
    UINT PhysicalWidth;
    UINT PhysicalHeight;
    UINT PhysicalDepth;
} D3D10DDI_MIPINFO;

typedef struct D3D10_DDIARG_SUBRESOURCE_UP
{
    VOID*   pSysMem;
    UINT  SysMemPitch;
    UINT  SysMemSlicePitch;
} D3D10_DDIARG_SUBRESOURCE_UP;

typedef struct D3D10DDIARG_CREATERESOURCE
{
    CONST D3D10DDI_MIPINFO*              pMipInfoList;
    CONST D3D10_DDIARG_SUBRESOURCE_UP*   pInitialDataUP; // non-NULL if Usage has invariant
    D3D10DDIRESOURCE_TYPE                ResourceDimension; // Part of old Caps1

    UINT                                 Usage; // Part of old Caps1
    UINT                                 BindFlags; // Part of old Caps1
    UINT /*D3D10_DDI_CPU_ACCESS*/        MapFlags; 
    UINT                                 MiscFlags;

    DXGI_FORMAT                          Format; // Totally different than D3DDDIFORMAT
    DXGI_SAMPLE_DESC                     SampleDesc;
    UINT                                 MipLevels;
    UINT                                 ArraySize;

    // Can only be non-NULL, if BindFlags has D3D10_DDI_BIND_PRESENT bit set; but not always.
    // Presence of structure is an indication that Resource could be used as a primary (ie. scanned-out),
    // and naturally used with Present (flip style). (UMD can prevent this- see dxgiddi.h)
    // If pPrimaryDesc absent, blt/ copy style is implied when used with Present.
    DXGI_DDI_PRIMARY_DESC*               pPrimaryDesc;
} D3D10DDIARG_CREATERESOURCE;

typedef struct D3D10DDIARG_OPENRESOURCE
{
    UINT                        NumAllocations;             // in : Number of open allocation structs
#if D3D10DDI_MINOR_HEADER_VERSION >= 2 || D3D11DDI_MINOR_HEADER_VERSION >= 1
    union {
        D3DDDI_OPENALLOCATIONINFO*  pOpenAllocationInfo;    // in : Array of open allocation structs : WDDM v1
        D3DDDI_OPENALLOCATIONINFO2* pOpenAllocationInfo2;   // in : Array of open allocation structs : WDDM v2 _ADVSCH_
    };
#else
    D3DDDI_OPENALLOCATIONINFO*  pOpenAllocationInfo;        // in : Array of open allocation structs
#endif
    D3D10DDI_HKMRESOURCE        hKMResource;                // in : Kernel resource handle
    VOID*                       pPrivateDriverData;         // in : Ptr to per reosurce PrivateDriverData
    UINT                        PrivateDriverDataSize;      // in : Size of resource pPrivateDriverData
} D3D10DDIARG_OPENRESOURCE;

typedef enum D3D10DDI_SHADERUNITTYPE
{
    D3D10DDISHADERUNITTYPE_UNDEFINED= 0,
    D3D10DDISHADERUNITTYPE_GEOMETRY = 1,
    D3D10DDISHADERUNITTYPE_VERTEX   = 2,
    D3D10DDISHADERUNITTYPE_PIXEL    = 3,
#if D3D11DDI_MINOR_HEADER_VERSION >= 1
    D3D11DDISHADERUNITTYPE_HULL     = 4,
    D3D11DDISHADERUNITTYPE_DOMAIN   = 5,
    D3D11DDISHADERUNITTYPE_COMPUTE  = 6,
#endif
} D3D10DDI_SHADERUNITTYPE;

typedef struct D3D10DDI_MAPPED_SUBRESOURCE
{
    void * pData;
    UINT RowPitch;
    UINT DepthPitch;
} D3D10DDI_MAPPED_SUBRESOURCE;

//----------------------------------------------------------------------------------------------------------------------------------
// User mode function argument definitions
//

typedef struct D3D10DDIARG_BUFFER_SHADERRESOURCEVIEW
{
    union
    {
        UINT FirstElement;
        UINT ElementOffset;
    };
    union
    {
        UINT NumElements;
        UINT ElementWidth;
    };
} D3D10DDIARG_BUFFER_SHADERRESOURCEVIEW;

typedef struct D3D10DDIARG_TEX1D_SHADERRESOURCEVIEW
{
    UINT     MostDetailedMip;
    UINT     FirstArraySlice;
    UINT     MipLevels;
    UINT     ArraySize;
} D3D10DDIARG_TEX1D_SHADERRESOURCEVIEW;

typedef struct D3D10DDIARG_TEX2D_SHADERRESOURCEVIEW
{
    UINT     MostDetailedMip;
    UINT     FirstArraySlice;
    UINT     MipLevels;
    UINT     ArraySize;
} D3D10DDIARG_TEX2D_SHADERRESOURCEVIEW;

typedef struct D3D10DDIARG_TEX3D_SHADERRESOURCEVIEW
{
    UINT     MostDetailedMip;
    UINT     MipLevels;
} D3D10DDIARG_TEX3D_SHADERRESOURCEVIEW;

typedef struct D3D10DDIARG_TEXCUBE_SHADERRESOURCEVIEW
{
    UINT     MostDetailedMip;
    UINT     MipLevels;
} D3D10DDIARG_TEXCUBE_SHADERRESOURCEVIEW;

typedef struct D3D10DDIARG_CREATESHADERRESOURCEVIEW
{
    D3D10DDI_HRESOURCE    hDrvResource;
    DXGI_FORMAT           Format;
    D3D10DDIRESOURCE_TYPE ResourceDimension;

    union
    {
        D3D10DDIARG_BUFFER_SHADERRESOURCEVIEW  Buffer;
        D3D10DDIARG_TEX1D_SHADERRESOURCEVIEW   Tex1D;
        D3D10DDIARG_TEX2D_SHADERRESOURCEVIEW   Tex2D;
        D3D10DDIARG_TEX3D_SHADERRESOURCEVIEW   Tex3D;
        D3D10DDIARG_TEXCUBE_SHADERRESOURCEVIEW TexCube;
    };
} D3D10DDIARG_CREATESHADERRESOURCEVIEW;

typedef struct D3D10DDIARG_BUFFER_RENDERTARGETVIEW
{
    union
    {
        UINT FirstElement;
        UINT ElementOffset;
    };
    union
    {
        UINT NumElements;
        UINT ElementWidth;
    };
} D3D10DDIARG_BUFFER_RENDERTARGETVIEW;

typedef struct D3D10DDIARG_TEX1D_RENDERTARGETVIEW
{
    UINT     MipSlice;
    UINT     FirstArraySlice;
    UINT     ArraySize;
} D3D10DDIARG_TEX1D_RENDERTARGETVIEW;

typedef struct D3D10DDIARG_TEX2D_RENDERTARGETVIEW
{
    UINT     MipSlice;
    UINT     FirstArraySlice;
    UINT     ArraySize;
} D3D10DDIARG_TEX2D_RENDERTARGETVIEW;

typedef struct D3D10DDIARG_TEX3D_RENDERTARGETVIEW
{
    UINT     MipSlice;
    UINT     FirstW;
    UINT     WSize;
} D3D10DDIARG_TEX3D_RENDERTARGETVIEW;

typedef struct D3D10DDIARG_TEXCUBE_RENDERTARGETVIEW
{
    UINT     MipSlice;
    UINT     FirstArraySlice;
    UINT     ArraySize;
} D3D10DDIARG_TEXCUBE_RENDERTARGETVIEW;

typedef struct D3D10DDIARG_CREATERENDERTARGETVIEW
{
    D3D10DDI_HRESOURCE    hDrvResource;
    DXGI_FORMAT          Format;
    D3D10DDIRESOURCE_TYPE ResourceDimension;

    union
    {
        D3D10DDIARG_BUFFER_RENDERTARGETVIEW  Buffer;
        D3D10DDIARG_TEX1D_RENDERTARGETVIEW   Tex1D;
        D3D10DDIARG_TEX2D_RENDERTARGETVIEW   Tex2D;
        D3D10DDIARG_TEX3D_RENDERTARGETVIEW   Tex3D;
        D3D10DDIARG_TEXCUBE_RENDERTARGETVIEW TexCube;
    };
} D3D10DDIARG_CREATERENDERTARGETVIEW;

typedef struct D3D10DDIARG_TEX1D_DEPTHSTENCILVIEW
{
    UINT     MipSlice;
    UINT     FirstArraySlice;
    UINT     ArraySize;
} D3D10DDIARG_TEX1D_DEPTHSTENCILVIEW;

typedef struct D3D10DDIARG_TEX2D_DEPTHSTENCILVIEW
{
    UINT     MipSlice;
    UINT     FirstArraySlice;
    UINT     ArraySize;
} D3D10DDIARG_TEX2D_DEPTHSTENCILVIEW;

typedef struct D3D10DDIARG_TEXCUBE_DEPTHSTENCILVIEW
{
    UINT     MipSlice;
    UINT     FirstArraySlice;
    UINT     ArraySize;
} D3D10DDIARG_TEXCUBE_DEPTHSTENCILVIEW;

typedef struct D3D10DDIARG_CREATEDEPTHSTENCILVIEW
{
    D3D10DDI_HRESOURCE    hDrvResource;
    DXGI_FORMAT           Format;
    D3D10DDIRESOURCE_TYPE ResourceDimension;

    union
    {
        D3D10DDIARG_TEX1D_DEPTHSTENCILVIEW   Tex1D;
        D3D10DDIARG_TEX2D_DEPTHSTENCILVIEW   Tex2D;
        D3D10DDIARG_TEXCUBE_DEPTHSTENCILVIEW TexCube;
    };
} D3D10DDIARG_CREATEDEPTHSTENCILVIEW;

typedef enum D3D11_DDI_CREATEDEPTHSTENCILVIEW_FLAG
{
    D3D11_DDI_CREATE_DSV_READ_ONLY_DEPTH   = 0x01L,
    D3D11_DDI_CREATE_DSV_READ_ONLY_STENCIL = 0x02L,
    D3D11_DDI_CREATE_DSV_FLAG_MASK         = 0x03L,
} D3D11_DDI_CREATEDEPTHSTENCILVIEW_FLAG;

typedef struct D3D11DDIARG_CREATEDEPTHSTENCILVIEW
{
    D3D10DDI_HRESOURCE    hDrvResource;
    DXGI_FORMAT           Format;
    D3D10DDIRESOURCE_TYPE ResourceDimension;
    UINT                  Flags;

    union
    {
        D3D10DDIARG_TEX1D_DEPTHSTENCILVIEW   Tex1D;
        D3D10DDIARG_TEX2D_DEPTHSTENCILVIEW   Tex2D;
        D3D10DDIARG_TEXCUBE_DEPTHSTENCILVIEW TexCube;
    };
} D3D11DDIARG_CREATEDEPTHSTENCILVIEW;

typedef enum D3D10_DDI_INPUT_CLASSIFICATION
{
    D3D10_DDI_INPUT_PER_VERTEX_DATA = 0,
    D3D10_DDI_INPUT_PER_INSTANCE_DATA = 1
} D3D10_DDI_INPUT_CLASSIFICATION;

typedef struct D3D10DDIARG_INPUT_ELEMENT_DESC
{
    UINT InputSlot;
    UINT AlignedByteOffset;
    DXGI_FORMAT Format;
    D3D10_DDI_INPUT_CLASSIFICATION InputSlotClass;
    UINT InstanceDataStepRate;
    UINT InputRegister;
} D3D10DDIARG_INPUT_ELEMENT_DESC;

typedef struct D3D10DDIARG_CREATEELEMENTLAYOUT
{
    CONST D3D10DDIARG_INPUT_ELEMENT_DESC* pVertexElements;
    UINT                                  NumElements;
} D3D10DDIARG_CREATEELEMENTLAYOUT;

typedef struct D3D10DDIARG_STREAM_OUTPUT_DECLARATION_ENTRY
{
    UINT OutputSlot;
    UINT RegisterIndex;
    BYTE RegisterMask; // (D3D10_SB_OPERAND_4_COMPONENT_MASK >> 4), meaning 4 LSBs are xyzw respectively
} D3D10DDIARG_STREAM_OUTPUT_DECLARATION_ENTRY;

typedef struct D3D10DDIARG_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT
{
    CONST UINT*                                         pShaderCode;
    CONST D3D10DDIARG_STREAM_OUTPUT_DECLARATION_ENTRY*  pOutputStreamDecl;
    UINT                                                NumEntries;
    UINT                                                StreamOutputStrideInBytes;
} D3D10DDIARG_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT;

typedef struct D3D10DDIARG_SIGNATURE_ENTRY
{
    D3D10_SB_NAME SystemValue; // D3D10_SB_NAME_UNDEFINED if the particular entry doesn't have a system name.
    UINT Register;
    BYTE Mask;// (D3D10_SB_OPERAND_4_COMPONENT_MASK >> 4), meaning 4 LSBs are xyzw respectively
} D3D10DDIARG_SIGNATURE_ENTRY;

typedef struct D3D10DDIARG_STAGE_IO_SIGNATURES
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
    D3D10DDIARG_SIGNATURE_ENTRY*  pInputSignature;
    UINT                          NumInputSignatureEntries;
    D3D10DDIARG_SIGNATURE_ENTRY*  pOutputSignature;
    UINT                          NumOutputSignatureEntries;
} D3D10DDIARG_STAGE_IO_SIGNATURES;

typedef enum D3D10_DDI_FILTER
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

    D3D10_DDI_FILTER_MIN_MAG_MIP_POINT                              = 0x00000000,
    D3D10_DDI_FILTER_MIN_MAG_POINT_MIP_LINEAR                       = 0x00000001,
    D3D10_DDI_FILTER_MIN_POINT_MAG_LINEAR_MIP_POINT                 = 0x00000004,
    D3D10_DDI_FILTER_MIN_POINT_MAG_MIP_LINEAR                       = 0x00000005,
    D3D10_DDI_FILTER_MIN_LINEAR_MAG_MIP_POINT                       = 0x00000010,
    D3D10_DDI_FILTER_MIN_LINEAR_MAG_POINT_MIP_LINEAR                = 0x00000011,
    D3D10_DDI_FILTER_MIN_MAG_LINEAR_MIP_POINT                       = 0x00000014,
    D3D10_DDI_FILTER_MIN_MAG_MIP_LINEAR                             = 0x00000015,
    D3D10_DDI_FILTER_ANISOTROPIC                                    = 0x00000055,
    D3D10_DDI_FILTER_COMPARISON_MIN_MAG_MIP_POINT                   = 0x00000080,
    D3D10_DDI_FILTER_COMPARISON_MIN_MAG_POINT_MIP_LINEAR            = 0x00000081,
    D3D10_DDI_FILTER_COMPARISON_MIN_POINT_MAG_LINEAR_MIP_POINT      = 0x00000084,
    D3D10_DDI_FILTER_COMPARISON_MIN_POINT_MAG_MIP_LINEAR            = 0x00000085,
    D3D10_DDI_FILTER_COMPARISON_MIN_LINEAR_MAG_MIP_POINT            = 0x00000090,
    D3D10_DDI_FILTER_COMPARISON_MIN_LINEAR_MAG_POINT_MIP_LINEAR     = 0x00000091,
    D3D10_DDI_FILTER_COMPARISON_MIN_MAG_LINEAR_MIP_POINT            = 0x00000094,
    D3D10_DDI_FILTER_COMPARISON_MIN_MAG_MIP_LINEAR                  = 0x00000095,
    D3D10_DDI_FILTER_COMPARISON_ANISOTROPIC                         = 0x000000d5,

#if D3D11DDI_MINOR_HEADER_VERSION >= 4
    D3DWDDM1_3DDI_FILTER_MINIMUM_MIN_MAG_MIP_POINT                     = 0x00000100,
    D3DWDDM1_3DDI_FILTER_MINIMUM_MIN_MAG_POINT_MIP_LINEAR              = 0x00000101,
    D3DWDDM1_3DDI_FILTER_MINIMUM_MIN_POINT_MAG_LINEAR_MIP_POINT        = 0x00000104,
    D3DWDDM1_3DDI_FILTER_MINIMUM_MIN_POINT_MAG_MIP_LINEAR              = 0x00000105,
    D3DWDDM1_3DDI_FILTER_MINIMUM_MIN_LINEAR_MAG_MIP_POINT              = 0x00000110,
    D3DWDDM1_3DDI_FILTER_MINIMUM_MIN_LINEAR_MAG_POINT_MIP_LINEAR       = 0x00000111,
    D3DWDDM1_3DDI_FILTER_MINIMUM_MIN_MAG_LINEAR_MIP_POINT              = 0x00000114,
    D3DWDDM1_3DDI_FILTER_MINIMUM_MIN_MAG_MIP_LINEAR                    = 0x00000115,
    D3DWDDM1_3DDI_FILTER_MINIMUM_ANISOTROPIC                           = 0x00000155,
    D3DWDDM1_3DDI_FILTER_MAXIMUM_MIN_MAG_MIP_POINT                     = 0x00000180,
    D3DWDDM1_3DDI_FILTER_MAXIMUM_MIN_MAG_POINT_MIP_LINEAR              = 0x00000181,
    D3DWDDM1_3DDI_FILTER_MAXIMUM_MIN_POINT_MAG_LINEAR_MIP_POINT        = 0x00000184,
    D3DWDDM1_3DDI_FILTER_MAXIMUM_MIN_POINT_MAG_MIP_LINEAR              = 0x00000185,
    D3DWDDM1_3DDI_FILTER_MAXIMUM_MIN_LINEAR_MAG_MIP_POINT              = 0x00000190,
    D3DWDDM1_3DDI_FILTER_MAXIMUM_MIN_LINEAR_MAG_POINT_MIP_LINEAR       = 0x00000191,
    D3DWDDM1_3DDI_FILTER_MAXIMUM_MIN_MAG_LINEAR_MIP_POINT              = 0x00000194,
    D3DWDDM1_3DDI_FILTER_MAXIMUM_MIN_MAG_MIP_LINEAR                    = 0x00000195,
    D3DWDDM1_3DDI_FILTER_MAXIMUM_ANISOTROPIC                           = 0x000001d5,
#endif

    D3D10_DDI_FILTER_TEXT_1BIT                                      = 0x80000000 // Only filter for R1_UNORM format

} D3D10_DDI_FILTER;

typedef enum D3D10_DDI_FILTER_TYPE
{
    D3D10_DDI_FILTER_TYPE_POINT = 0,
    D3D10_DDI_FILTER_TYPE_LINEAR = 1,
} D3D10_DDI_FILTER_TYPE;

#if D3D11DDI_MINOR_HEADER_VERSION >= 4
typedef enum D3DWDDM1_3DDI_FILTER_REDUCTION_TYPE
{
    D3DWDDM1_3DDI_FILTER_REDUCTION_TYPE_STANDARD = 0,
    D3DWDDM1_3DDI_FILTER_REDUCTION_TYPE_COMPARISON = 1,
    D3DWDDM1_3DDI_FILTER_REDUCTION_TYPE_MINIMUM = 2,
    D3DWDDM1_3DDI_FILTER_REDUCTION_TYPE_MAXIMUM = 3,
} D3DWDDM1_3DDI_FILTER_REDUCTION_TYPE;
#endif

#if defined( __cplusplus )
const UINT D3D10_DDI_FILTER_TYPE_MASK = 0x00000003;
const UINT D3D10_DDI_MIN_FILTER_SHIFT = 4;
const UINT D3D10_DDI_MAG_FILTER_SHIFT = 2;
const UINT D3D10_DDI_MIP_FILTER_SHIFT = 0;
#if D3D11DDI_MINOR_HEADER_VERSION >= 4
const UINT D3DWDDM1_3DDI_FILTER_REDUCTION_TYPE_MASK = 0x00000003;
const UINT D3DWDDM1_3DDI_FILTER_REDUCTION_TYPE_SHIFT = 7;
#else
const UINT D3D10_DDI_COMPARISON_FILTERING_BIT = 0x00000080;
#endif
const UINT D3D10_DDI_ANISOTROPIC_FILTERING_BIT = 0x00000040;
const UINT D3D10_DDI_TEXT_1BIT_BIT = 0x80000000;
#else
#define D3D10_DDI_FILTER_TYPE_MASK 0x00000003
#define D3D10_DDI_MIN_FILTER_SHIFT 4
#define D3D10_DDI_MAG_FILTER_SHIFT 2
#define D3D10_DDI_MIP_FILTER_SHIFT 0
#if D3D11DDI_MINOR_HEADER_VERSION >= 4
#define D3DWDDM1_3DDI_FILTER_REDUCTION_TYPE_MASK 0x00000003
#define D3DWDDM1_3DDI_FILTER_REDUCTION_TYPE_SHIFT 7
#else
#define D3D10_DDI_COMPARISON_FILTERING_BIT 0x00000080
#endif
#define D3D10_DDI_ANISOTROPIC_FILTERING_BIT 0x00000040
#define D3D10_DDI_TEXT_1BIT_BIT 0x80000000
#endif


#if D3D11DDI_MINOR_HEADER_VERSION >= 4

// encode enum entry for most filters except anisotropic filtering
#define D3D10_DDI_ENCODE_BASIC_FILTER( min, mag, mip, reduction )                                                 \
                                   ( ( D3D10_DDI_FILTER ) (                                                       \
                                   ( ( ( min ) & D3D10_DDI_FILTER_TYPE_MASK ) << D3D10_DDI_MIN_FILTER_SHIFT ) |   \
                                   ( ( ( mag ) & D3D10_DDI_FILTER_TYPE_MASK ) << D3D10_DDI_MAG_FILTER_SHIFT ) |   \
                                   ( ( ( mip ) & D3D10_DDI_FILTER_TYPE_MASK ) << D3D10_DDI_MIP_FILTER_SHIFT ) |   \
                                   ( ( ( reduction ) & D3DWDDM1_3DDI_FILTER_REDUCTION_TYPE_MASK ) << D3DWDDM1_3DDI_FILTER_REDUCTION_TYPE_SHIFT ) ) )

// encode enum entry for anisotropic filtering (with or without comparison filtering)
#define D3D10_DDI_ENCODE_ANISOTROPIC_FILTER( reduction )                                                  \
                                         ( ( D3D10_DDI_FILTER ) (                                         \
                                         D3D10_DDI_ANISOTROPIC_FILTERING_BIT |                            \
                                         D3D10_DDI_ENCODE_BASIC_FILTER( D3D10_DDI_FILTER_TYPE_LINEAR,     \
                                                                    D3D10_DDI_FILTER_TYPE_LINEAR,         \
                                                                    D3D10_DDI_FILTER_TYPE_LINEAR,         \
                                                                    reduction ) ) )

#else

// encode enum entry for most filters except anisotropic filtering
#define D3D10_DDI_ENCODE_BASIC_FILTER( min, mag, mip, bComparison )                                               \
                                   ( ( D3D10_DDI_FILTER ) (                                                       \
                                   ( ( bComparison ) ? D3D10_DDI_COMPARISON_FILTERING_BIT : 0 ) |                 \
                                   ( ( ( min ) & D3D10_DDI_FILTER_TYPE_MASK ) << D3D10_DDI_MIN_FILTER_SHIFT ) |   \
                                   ( ( ( mag ) & D3D10_DDI_FILTER_TYPE_MASK ) << D3D10_DDI_MAG_FILTER_SHIFT ) |   \
                                   ( ( ( mip ) & D3D10_DDI_FILTER_TYPE_MASK ) << D3D10_DDI_MIP_FILTER_SHIFT ) ) )

// encode enum entry for anisotropic filtering (with or without comparison filtering)
#define D3D10_DDI_ENCODE_ANISOTROPIC_FILTER( bComparison )                                                \
                                         ( ( D3D10_DDI_FILTER ) (                                         \
                                         D3D10_DDI_ANISOTROPIC_FILTERING_BIT |                            \
                                         D3D10_DDI_ENCODE_BASIC_FILTER( D3D10_DDI_FILTER_TYPE_LINEAR,     \
                                                                    D3D10_DDI_FILTER_TYPE_LINEAR,         \
                                                                    D3D10_DDI_FILTER_TYPE_LINEAR,         \
                                                                    bComparison ) ) )


#endif

#define D3D10_DDI_DECODE_MIN_FILTER( d3d10Filter )                                                                    \
                                 ( ( D3D10_DDI_FILTER_TYPE )                                                          \
                                 ( ( ( d3d10Filter ) >> D3D10_DDI_MIN_FILTER_SHIFT ) & D3D10_DDI_FILTER_TYPE_MASK ) )

#define D3D10_DDI_DECODE_MAG_FILTER( d3d10Filter )                                                                    \
                                 ( ( D3D10_DDI_FILTER_TYPE )                                                          \
                                 ( ( ( d3d10Filter ) >> D3D10_DDI_MAG_FILTER_SHIFT ) & D3D10_DDI_FILTER_TYPE_MASK ) )

#define D3D10_DDI_DECODE_MIP_FILTER( d3d10Filter )                                                                    \
                                 ( ( D3D10_DDI_FILTER_TYPE )                                                          \
                                 ( ( ( d3d10Filter ) >> D3D10_DDI_MIP_FILTER_SHIFT ) & D3D10_DDI_FILTER_TYPE_MASK ) )

#if D3D11DDI_MINOR_HEADER_VERSION >= 4
#define D3DWDDM1_3DDI_DECODE_FILTER_REDUCTION( d3d10Filter )                                                             \
                                 ( ( D3DWDDM1_3DDI_FILTER_REDUCTION_TYPE )                                               \
                                 ( ( ( d3d10Filter ) >> D3DWDDM1_3DDI_FILTER_REDUCTION_TYPE_SHIFT ) & D3DWDDM1_3DDI_FILTER_REDUCTION_TYPE_MASK ) )
#define D3D10_DDI_DECODE_IS_COMPARISON_FILTER( d3d10Filter )                                                          \
                                 ( D3DWDDM1_3DDI_DECODE_FILTER_REDUCTION( d3d10Filter ) == D3DWDDM1_3DDI_FILTER_REDUCTION_TYPE_COMPARISON )
#else
#define D3D10_DDI_DECODE_IS_COMPARISON_FILTER( d3d10Filter )                                                          \
                                 ( ( d3d10Filter ) & D3D10_DDI_COMPARISON_FILTERING_BIT )
#endif


#define D3D10_DDI_DECODE_IS_ANISOTROPIC_FILTER( d3d10Filter )                                                 \
                            ( ( ( d3d10Filter ) & D3D10_DDI_ANISOTROPIC_FILTERING_BIT ) &&                    \
                            ( D3D10_DDI_FILTER_TYPE_LINEAR == D3D10_DDI_DECODE_MIN_FILTER( d3d10Filter ) ) && \
                            ( D3D10_DDI_FILTER_TYPE_LINEAR == D3D10_DDI_DECODE_MAG_FILTER( d3d10Filter ) ) && \
                            ( D3D10_DDI_FILTER_TYPE_LINEAR == D3D10_DDI_DECODE_MIP_FILTER( d3d10Filter ) ) )

#define D3D10_DDI_DECODE_IS_TEXT_1BIT_FILTER( d3d10Filter )                                             \
                                 ( ( d3d10Filter ) == D3D10_DDI_TEXT_1BIT_BIT )


typedef enum D3D10_DDI_COMPARISON_FUNC
{
    D3D10_DDI_COMPARISON_NEVER = 1,
    D3D10_DDI_COMPARISON_LESS = 2,
    D3D10_DDI_COMPARISON_EQUAL = 3,
    D3D10_DDI_COMPARISON_LESS_EQUAL = 4,
    D3D10_DDI_COMPARISON_GREATER = 5,
    D3D10_DDI_COMPARISON_NOT_EQUAL = 6,
    D3D10_DDI_COMPARISON_GREATER_EQUAL = 7,
    D3D10_DDI_COMPARISON_ALWAYS = 8
} D3D10_DDI_COMPARISON_FUNC;

typedef enum D3D10_DDI_TEXTURE_ADDRESS_MODE
{
    D3D10_DDI_TEXTURE_ADDRESS_WRAP = 1,
    D3D10_DDI_TEXTURE_ADDRESS_MIRROR = 2,
    D3D10_DDI_TEXTURE_ADDRESS_CLAMP = 3,
    D3D10_DDI_TEXTURE_ADDRESS_BORDER = 4,
    D3D10_DDI_TEXTURE_ADDRESS_MIRRORONCE = 5
} D3D10_DDI_TEXTURE_ADDRESS_MODE;

/* TextureCube Face identifiers */
typedef enum D3D10_DDI_TEXTURECUBE_FACE
{
    D3D10_DDI_TEXTURECUBE_FACE_POSITIVE_X = 0,
    D3D10_DDI_TEXTURECUBE_FACE_NEGATIVE_X = 1,
    D3D10_DDI_TEXTURECUBE_FACE_POSITIVE_Y = 2,
    D3D10_DDI_TEXTURECUBE_FACE_NEGATIVE_Y = 3,
    D3D10_DDI_TEXTURECUBE_FACE_POSITIVE_Z = 4,
    D3D10_DDI_TEXTURECUBE_FACE_NEGATIVE_Z = 5
} D3D10_DDI_TEXTURECUBE_FACE;

typedef struct D3D10_DDI_SAMPLER_DESC
{
    D3D10_DDI_FILTER Filter;
    D3D10_DDI_TEXTURE_ADDRESS_MODE AddressU;
    D3D10_DDI_TEXTURE_ADDRESS_MODE AddressV;
    D3D10_DDI_TEXTURE_ADDRESS_MODE AddressW;
    FLOAT MipLODBias;
    UINT MaxAnisotropy;
    D3D10_DDI_COMPARISON_FUNC ComparisonFunc;
    FLOAT BorderColor[4]; // RGBA
    FLOAT MinLOD;
    FLOAT MaxLOD;
} D3D10_DDI_SAMPLER_DESC;

typedef struct D3D10_DDIARG_CREATE_SAMPLER
{
    CONST D3D10_DDI_SAMPLER_DESC*   pSamplerDesc;
} D3D10_DDIARG_CREATE_SAMPLER;

// Flags for ClearDepthStencil
typedef enum D3D10_DDI_CLEAR_FLAG
{
    D3D10_DDI_CLEAR_DEPTH = 0x01L,
    D3D10_DDI_CLEAR_STENCIL = 0x02L,
    D3D10_DDI_CLEAR_FLAG_MASK = 0x03L,
} D3D10_DDI_CLEAR_FLAG;

typedef enum D3D10DDI_QUERY
{
    D3D10DDI_QUERY_EVENT = 0,
    D3D10DDI_QUERY_OCCLUSION,
    D3D10DDI_QUERY_TIMESTAMP,
    D3D10DDI_QUERY_TIMESTAMPDISJOINT,
    D3D10DDI_QUERY_PIPELINESTATS,
    D3D10DDI_QUERY_OCCLUSIONPREDICATE,
    D3D10DDI_QUERY_STREAMOUTPUTSTATS,
    D3D10DDI_QUERY_STREAMOVERFLOWPREDICATE,

#if D3D11DDI_MINOR_HEADER_VERSION >= 1
    D3D11DDI_QUERY_PIPELINESTATS,
    D3D11DDI_QUERY_STREAMOUTPUTSTATS_STREAM0,
    D3D11DDI_QUERY_STREAMOUTPUTSTATS_STREAM1,
    D3D11DDI_QUERY_STREAMOUTPUTSTATS_STREAM2,
    D3D11DDI_QUERY_STREAMOUTPUTSTATS_STREAM3,
    D3D11DDI_QUERY_STREAMOVERFLOWPREDICATE_STREAM0,
    D3D11DDI_QUERY_STREAMOVERFLOWPREDICATE_STREAM1,
    D3D11DDI_QUERY_STREAMOVERFLOWPREDICATE_STREAM2,
    D3D11DDI_QUERY_STREAMOVERFLOWPREDICATE_STREAM3,
#endif

#if D3D11DDI_MINOR_HEADER_VERSION >= 5
#endif 

    D3D10DDI_COUNTER_GPU_IDLE = 0x1000, // Start of "counters"
    D3D10DDI_COUNTER_VERTEX_PROCESSING,
    D3D10DDI_COUNTER_GEOMETRY_PROCESSING,
    D3D10DDI_COUNTER_PIXEL_PROCESSING,
    D3D10DDI_COUNTER_OTHER_GPU_PROCESSING,
    D3D10DDI_COUNTER_HOST_ADAPTER_BANDWIDTH_UTILIZATION,
    D3D10DDI_COUNTER_LOCAL_VIDMEM_BANDWIDTH_UTILIZATION,
    D3D10DDI_COUNTER_VERTEX_THROUGHPUT_UTILIZATION,
    D3D10DDI_COUNTER_TRISETUP_THROUGHPUT_UTILIZATION,
    D3D10DDI_COUNTER_FILLRATE_THROUGHPUT_UTILIZATION,
    D3D10DDI_COUNTER_VERTEXSHADER_MEMORY_LIMITED,
    D3D10DDI_COUNTER_VERTEXSHADER_COMPUTATION_LIMITED,
    D3D10DDI_COUNTER_GEOMETRYSHADER_MEMORY_LIMITED,
    D3D10DDI_COUNTER_GEOMETRYSHADER_COMPUTATION_LIMITED,
    D3D10DDI_COUNTER_PIXELSHADER_MEMORY_LIMITED,
    D3D10DDI_COUNTER_PIXELSHADER_COMPUTATION_LIMITED,
    D3D10DDI_COUNTER_POST_TRANSFORM_CACHE_HIT_RATE,
    D3D10DDI_COUNTER_TEXTURE_CACHE_HIT_RATE,

    D3D10DDI_COUNTER_DEVICE_DEPENDENT_0 = 0x40000000, // Start of "device-dependent counters"
} D3D10DDI_QUERY;

typedef struct D3D10_DDI_QUERY_DATA_TIMESTAMP_DISJOINT
{
    UINT64 Frequency;
    BOOL Disjoint;
} D3D10_DDI_QUERY_DATA_TIMESTAMP_DISJOINT;

typedef struct D3D10_DDI_QUERY_DATA_PIPELINE_STATISTICS
{
    UINT64 IAVertices;
    UINT64 IAPrimitives;
    UINT64 VSInvocations;
    UINT64 GSInvocations;
    UINT64 GSPrimitives;
    UINT64 CInvocations;
    UINT64 CPrimitives;
    UINT64 PSInvocations;
} D3D10_DDI_QUERY_DATA_PIPELINE_STATISTICS;

#if D3D11DDI_MINOR_HEADER_VERSION >= 1
typedef struct D3D11_DDI_QUERY_DATA_PIPELINE_STATISTICS
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
} D3D11_DDI_QUERY_DATA_PIPELINE_STATISTICS;
#endif

typedef struct D3D10_DDI_QUERY_DATA_SO_STATISTICS
{
    UINT64 NumPrimitivesWritten;
    UINT64 PrimitivesStorageNeeded;
} D3D10_DDI_QUERY_DATA_SO_STATISTICS;


typedef enum D3D10DDI_COUNTER_TYPE
{
    D3D10DDI_COUNTER_TYPE_FLOAT32,
    D3D10DDI_COUNTER_TYPE_UINT16,
    D3D10DDI_COUNTER_TYPE_UINT32,
    D3D10DDI_COUNTER_TYPE_UINT64,
} D3D10DDI_COUNTER_TYPE;

typedef struct D3D10DDI_COUNTER_INFO
{
    D3D10DDI_QUERY LastDeviceDependentCounter;
    UINT NumSimultaneousCounters;
    UINT8 NumDetectableParallelUnits;
} D3D10DDI_COUNTER_INFO;

#define D3D10DDI_QUERY_MISCFLAG_PREDICATEHINT 0x1

typedef struct D3D10DDIARG_CREATEQUERY
{
    D3D10DDI_QUERY Query;
    UINT MiscFlags;
} D3D10DDIARG_CREATEQUERY;

typedef enum D3D10_DDI_GET_DATA_FLAG
{
    D3D10_DDI_GET_DATA_DO_NOT_FLUSH = 0x01L,
} D3D10_DDI_GET_DATA_FLAG;

typedef struct D3D10DDI_VERTEX_CACHE_DESC
{
    UINT Pattern; /* bit pattern, return value must be FOUR_CC('C', 'A', 'C', 'H') */
    UINT OptMethod; /* optimization method 0 means longest strips, 1 means vertex cache based */
    UINT CacheSize; /* cache size to optimize for (only required if type is 1) */
    UINT MagicNumber; /* used to determine when to restart strips (only required if type is 1)*/
} D3D10DDI_VERTEX_CACHE_DESC;


// Keep PRIMITIVE_TOPOLOGY values in sync with earlier DX versions (HW consumes values directly).
typedef enum D3D10_DDI_PRIMITIVE_TOPOLOGY
{
    D3D10_DDI_PRIMITIVE_TOPOLOGY_UNDEFINED = 0,
    D3D10_DDI_PRIMITIVE_TOPOLOGY_POINTLIST = 1,
    D3D10_DDI_PRIMITIVE_TOPOLOGY_LINELIST = 2,
    D3D10_DDI_PRIMITIVE_TOPOLOGY_LINESTRIP = 3,
    D3D10_DDI_PRIMITIVE_TOPOLOGY_TRIANGLELIST = 4,
    D3D10_DDI_PRIMITIVE_TOPOLOGY_TRIANGLESTRIP = 5,
    // 6 is reserved for legacy triangle fans
    // Adjacency values should be equal to (0x8 & non-adjacency):
    D3D10_DDI_PRIMITIVE_TOPOLOGY_LINELIST_ADJ = 10,
    D3D10_DDI_PRIMITIVE_TOPOLOGY_LINESTRIP_ADJ = 11,
    D3D10_DDI_PRIMITIVE_TOPOLOGY_TRIANGLELIST_ADJ = 12,
    D3D10_DDI_PRIMITIVE_TOPOLOGY_TRIANGLESTRIP_ADJ = 13,
#if D3D11DDI_MINOR_HEADER_VERSION >= 1
    D3D11_DDI_PRIMITIVE_TOPOLOGY_1_CONTROL_POINT_PATCHLIST = 33,
    D3D11_DDI_PRIMITIVE_TOPOLOGY_2_CONTROL_POINT_PATCHLIST = 34,
    D3D11_DDI_PRIMITIVE_TOPOLOGY_3_CONTROL_POINT_PATCHLIST = 35,
    D3D11_DDI_PRIMITIVE_TOPOLOGY_4_CONTROL_POINT_PATCHLIST = 36,
    D3D11_DDI_PRIMITIVE_TOPOLOGY_5_CONTROL_POINT_PATCHLIST = 37,
    D3D11_DDI_PRIMITIVE_TOPOLOGY_6_CONTROL_POINT_PATCHLIST = 38,
    D3D11_DDI_PRIMITIVE_TOPOLOGY_7_CONTROL_POINT_PATCHLIST = 39,
    D3D11_DDI_PRIMITIVE_TOPOLOGY_8_CONTROL_POINT_PATCHLIST = 40,
    D3D11_DDI_PRIMITIVE_TOPOLOGY_9_CONTROL_POINT_PATCHLIST = 41,
    D3D11_DDI_PRIMITIVE_TOPOLOGY_10_CONTROL_POINT_PATCHLIST = 42,
    D3D11_DDI_PRIMITIVE_TOPOLOGY_11_CONTROL_POINT_PATCHLIST = 43,
    D3D11_DDI_PRIMITIVE_TOPOLOGY_12_CONTROL_POINT_PATCHLIST = 44,
    D3D11_DDI_PRIMITIVE_TOPOLOGY_13_CONTROL_POINT_PATCHLIST = 45,
    D3D11_DDI_PRIMITIVE_TOPOLOGY_14_CONTROL_POINT_PATCHLIST = 46,
    D3D11_DDI_PRIMITIVE_TOPOLOGY_15_CONTROL_POINT_PATCHLIST = 47,
    D3D11_DDI_PRIMITIVE_TOPOLOGY_16_CONTROL_POINT_PATCHLIST = 48,
    D3D11_DDI_PRIMITIVE_TOPOLOGY_17_CONTROL_POINT_PATCHLIST = 49,
    D3D11_DDI_PRIMITIVE_TOPOLOGY_18_CONTROL_POINT_PATCHLIST = 50,
    D3D11_DDI_PRIMITIVE_TOPOLOGY_19_CONTROL_POINT_PATCHLIST = 51,
    D3D11_DDI_PRIMITIVE_TOPOLOGY_20_CONTROL_POINT_PATCHLIST = 52,
    D3D11_DDI_PRIMITIVE_TOPOLOGY_21_CONTROL_POINT_PATCHLIST = 53,
    D3D11_DDI_PRIMITIVE_TOPOLOGY_22_CONTROL_POINT_PATCHLIST = 54,
    D3D11_DDI_PRIMITIVE_TOPOLOGY_23_CONTROL_POINT_PATCHLIST = 55,
    D3D11_DDI_PRIMITIVE_TOPOLOGY_24_CONTROL_POINT_PATCHLIST = 56,
    D3D11_DDI_PRIMITIVE_TOPOLOGY_25_CONTROL_POINT_PATCHLIST = 57,
    D3D11_DDI_PRIMITIVE_TOPOLOGY_26_CONTROL_POINT_PATCHLIST = 58,
    D3D11_DDI_PRIMITIVE_TOPOLOGY_27_CONTROL_POINT_PATCHLIST = 59,
    D3D11_DDI_PRIMITIVE_TOPOLOGY_28_CONTROL_POINT_PATCHLIST = 60,
    D3D11_DDI_PRIMITIVE_TOPOLOGY_29_CONTROL_POINT_PATCHLIST = 61,
    D3D11_DDI_PRIMITIVE_TOPOLOGY_30_CONTROL_POINT_PATCHLIST = 62,
    D3D11_DDI_PRIMITIVE_TOPOLOGY_31_CONTROL_POINT_PATCHLIST = 63,
    D3D11_DDI_PRIMITIVE_TOPOLOGY_32_CONTROL_POINT_PATCHLIST = 64,
#endif

} D3D10_DDI_PRIMITIVE_TOPOLOGY;

typedef enum D3D10_DDI_PRIMITIVE
{
    D3D10_DDI_PRIMITIVE_UNDEFINED = 0,
    D3D10_DDI_PRIMITIVE_POINT = 1,
    D3D10_DDI_PRIMITIVE_LINE = 2,
    D3D10_DDI_PRIMITIVE_TRIANGLE = 3,
    // Adjacency values should be equal to (0x4 & non-adjacency):
    D3D10_DDI_PRIMITIVE_LINE_ADJ = 6,
    D3D10_DDI_PRIMITIVE_TRIANGLE_ADJ = 7,
#if D3D11DDI_MINOR_HEADER_VERSION >= 1
    D3D11_DDI_PRIMITIVE_1_CONTROL_POINT_PATCH = 33,
    D3D11_DDI_PRIMITIVE_2_CONTROL_POINT_PATCH = 34,
    D3D11_DDI_PRIMITIVE_3_CONTROL_POINT_PATCH = 35,
    D3D11_DDI_PRIMITIVE_4_CONTROL_POINT_PATCH = 36,
    D3D11_DDI_PRIMITIVE_5_CONTROL_POINT_PATCH = 37,
    D3D11_DDI_PRIMITIVE_6_CONTROL_POINT_PATCH = 38,
    D3D11_DDI_PRIMITIVE_7_CONTROL_POINT_PATCH = 39,
    D3D11_DDI_PRIMITIVE_8_CONTROL_POINT_PATCH = 40,
    D3D11_DDI_PRIMITIVE_9_CONTROL_POINT_PATCH = 41,
    D3D11_DDI_PRIMITIVE_10_CONTROL_POINT_PATCH = 42,
    D3D11_DDI_PRIMITIVE_11_CONTROL_POINT_PATCH = 43,
    D3D11_DDI_PRIMITIVE_12_CONTROL_POINT_PATCH = 44,
    D3D11_DDI_PRIMITIVE_13_CONTROL_POINT_PATCH = 45,
    D3D11_DDI_PRIMITIVE_14_CONTROL_POINT_PATCH = 46,
    D3D11_DDI_PRIMITIVE_15_CONTROL_POINT_PATCH = 47,
    D3D11_DDI_PRIMITIVE_16_CONTROL_POINT_PATCH = 48,
    D3D11_DDI_PRIMITIVE_17_CONTROL_POINT_PATCH = 49,
    D3D11_DDI_PRIMITIVE_18_CONTROL_POINT_PATCH = 50,
    D3D11_DDI_PRIMITIVE_19_CONTROL_POINT_PATCH = 51,
    D3D11_DDI_PRIMITIVE_20_CONTROL_POINT_PATCH = 52,
    D3D11_DDI_PRIMITIVE_21_CONTROL_POINT_PATCH = 53,
    D3D11_DDI_PRIMITIVE_22_CONTROL_POINT_PATCH = 54,
    D3D11_DDI_PRIMITIVE_23_CONTROL_POINT_PATCH = 55,
    D3D11_DDI_PRIMITIVE_24_CONTROL_POINT_PATCH = 56,
    D3D11_DDI_PRIMITIVE_25_CONTROL_POINT_PATCH = 57,
    D3D11_DDI_PRIMITIVE_26_CONTROL_POINT_PATCH = 58,
    D3D11_DDI_PRIMITIVE_27_CONTROL_POINT_PATCH = 59,
    D3D11_DDI_PRIMITIVE_28_CONTROL_POINT_PATCH = 60,
    D3D11_DDI_PRIMITIVE_29_CONTROL_POINT_PATCH = 61,
    D3D11_DDI_PRIMITIVE_30_CONTROL_POINT_PATCH = 62,
    D3D11_DDI_PRIMITIVE_31_CONTROL_POINT_PATCH = 63,
    D3D11_DDI_PRIMITIVE_32_CONTROL_POINT_PATCH = 64,
#endif
} D3D10_DDI_PRIMITIVE;

typedef struct D3D10_DDI_VIEWPORT
{
    FLOAT TopLeftX;
    FLOAT TopLeftY;
    FLOAT Width;
    FLOAT Height;
    FLOAT MinDepth;
    FLOAT MaxDepth;
} D3D10_DDI_VIEWPORT;

typedef RECT D3D10_DDI_RECT;

typedef struct D3D10_DDI_BOX
{
    LONG left;
    LONG top;
    LONG front;
    LONG right;
    LONG bottom;
    LONG back;
} D3D10_DDI_BOX;

typedef enum D3D10_DDI_DEPTH_WRITE_MASK
{
    D3D10_DDI_DEPTH_WRITE_MASK_ZERO = 0,
    D3D10_DDI_DEPTH_WRITE_MASK_ALL = 1
} D3D10_DDI_DEPTH_WRITE_MASK;

// Keep STENCILOP values in sync with earlier DX versions (HW consumes values directly).
typedef enum D3D10_DDI_STENCIL_OP
{
    D3D10_DDI_STENCIL_OP_KEEP = 1,
    D3D10_DDI_STENCIL_OP_ZERO = 2,
    D3D10_DDI_STENCIL_OP_REPLACE = 3,
    D3D10_DDI_STENCIL_OP_INCR_SAT = 4,
    D3D10_DDI_STENCIL_OP_DECR_SAT = 5,
    D3D10_DDI_STENCIL_OP_INVERT = 6,
    D3D10_DDI_STENCIL_OP_INCR = 7,
    D3D10_DDI_STENCIL_OP_DECR = 8
} D3D10_DDI_STENCIL_OP;

typedef struct D3D10_DDI_DEPTH_STENCILOP_DESC
{
    D3D10_DDI_STENCIL_OP StencilFailOp;
    D3D10_DDI_STENCIL_OP StencilDepthFailOp;
    D3D10_DDI_STENCIL_OP StencilPassOp;
    D3D10_DDI_COMPARISON_FUNC StencilFunc;
} D3D10_DDI_DEPTH_STENCILOP_DESC;

typedef struct D3D10_DDI_DEPTH_STENCIL_DESC
{
    BOOL DepthEnable;
    D3D10_DDI_DEPTH_WRITE_MASK DepthWriteMask;
    D3D10_DDI_COMPARISON_FUNC DepthFunc;
    BOOL StencilEnable;
    BOOL FrontEnable;
    BOOL BackEnable;
    UINT8 StencilReadMask;
    UINT8 StencilWriteMask;
    D3D10_DDI_DEPTH_STENCILOP_DESC FrontFace;
    D3D10_DDI_DEPTH_STENCILOP_DESC BackFace;
} D3D10_DDI_DEPTH_STENCIL_DESC;

// Keep FILL_MODE values in sync with earlier DX versions (HW consumes values directly).
typedef enum D3D10_DDI_FILL_MODE
{
    // 1 was POINT in D3D, unused in D3D10
    D3D10_DDI_FILL_WIREFRAME = 2,
    D3D10_DDI_FILL_SOLID = 3
} D3D10_DDI_FILL_MODE;

// Keep CULL_MODE values in sync with earlier DX versions (HW consumes values directly).
typedef enum D3D10_DDI_CULL_MODE
{
    D3D10_DDI_CULL_NONE = 1,
    D3D10_DDI_CULL_FRONT = 2,
    D3D10_DDI_CULL_BACK = 3
} D3D10_DDI_CULL_MODE;

typedef enum D3D10_DDI_FRONT_WINDING
{
    D3D10_DDI_FRONT_CW = 1,
    D3D10_DDI_FRONT_CCW = 2
} D3D10_DDI_FRONT_WINDING;

typedef struct D3D10_DDI_RASTERIZER_DESC
{
    D3D10_DDI_FILL_MODE FillMode;
    D3D10_DDI_CULL_MODE CullMode;
    BOOL FrontCounterClockwise;
    INT32 DepthBias;
    FLOAT DepthBiasClamp;
    FLOAT SlopeScaledDepthBias;
    BOOL DepthClipEnable;
    BOOL ScissorEnable;
    BOOL MultisampleEnable;
    BOOL AntialiasedLineEnable;
} D3D10_DDI_RASTERIZER_DESC;

// Keep BLEND values in sync with earlier DX versions (HW consumes values directly).
typedef enum D3D10_DDI_BLEND
{
    D3D10_DDI_BLEND_ZERO = 1,
    D3D10_DDI_BLEND_ONE = 2,
    D3D10_DDI_BLEND_SRC_COLOR = 3, // PS output oN.rgb (N is current RT being blended)
    D3D10_DDI_BLEND_INV_SRC_COLOR = 4, // 1.0f - PS output oN.rgb
    D3D10_DDI_BLEND_SRC_ALPHA = 5, // PS output oN.a
    D3D10_DDI_BLEND_INV_SRC_ALPHA = 6, // 1.0f - PS output oN.a
    D3D10_DDI_BLEND_DEST_ALPHA = 7, // RT(N).a (N is current RT being blended)
    D3D10_DDI_BLEND_INV_DEST_ALPHA = 8, // 1.0f - RT(N).a
    D3D10_DDI_BLEND_DEST_COLOR = 9, // RT(N).rgb
    D3D10_DDI_BLEND_INV_DEST_COLOR = 10,// 1.0f - RT(N).rgb
    D3D10_DDI_BLEND_SRC_ALPHASAT = 11,// (f,f,f,1), f = min(1 - RT(N).a, oN.a)
    // 12 reserved (was BOTHSRCALPHA)
    // 13 reserved (was BOTH_INV_SRC_ALPHA)
    D3D10_DDI_BLEND_BLEND_FACTOR = 14,
    D3D10_DDI_BLEND_INVBLEND_FACTOR = 15,
    D3D10_DDI_BLEND_SRC1_COLOR = 16, // PS output o1.rgb
    D3D10_DDI_BLEND_INV_SRC1_COLOR = 17, // 1.0f - PS output o1.rgb
    D3D10_DDI_BLEND_SRC1_ALPHA = 18, // PS output o1.a
    D3D10_DDI_BLEND_INV_SRC1_ALPHA = 19, // 1.0f - PS output o1.a
} D3D10_DDI_BLEND;

// Keep BLENDOP values in sync with earlier DX versions (HW consumes values directly).
typedef enum D3D10_DDI_BLEND_OP
{
    D3D10_DDI_BLEND_OP_ADD = 1,
    D3D10_DDI_BLEND_OP_SUBTRACT = 2,
    D3D10_DDI_BLEND_OP_REV_SUBTRACT = 3,
    D3D10_DDI_BLEND_OP_MIN = 4, // min semantics are like min shader instruction
    D3D10_DDI_BLEND_OP_MAX = 5, // max semantics are like max shader instruction
} D3D10_DDI_BLEND_OP;

typedef enum D3D10_DDI_COLOR_WRITE_ENABLE
{
    D3D10_DDI_COLOR_WRITE_ENABLE_RED = 1,
    D3D10_DDI_COLOR_WRITE_ENABLE_GREEN = 2,
    D3D10_DDI_COLOR_WRITE_ENABLE_BLUE = 4,
    D3D10_DDI_COLOR_WRITE_ENABLE_ALPHA = 8,
    D3D10_DDI_COLOR_WRITE_ENABLE_ALL = (D3D10_DDI_COLOR_WRITE_ENABLE_RED|D3D10_DDI_COLOR_WRITE_ENABLE_GREEN|
        D3D10_DDI_COLOR_WRITE_ENABLE_BLUE|D3D10_DDI_COLOR_WRITE_ENABLE_ALPHA),
} D3D10_DDI_COLOR_WRITE_ENABLE;

#define D3D10_DDI_SIMULTANEOUS_RENDER_TARGET_COUNT 8

typedef struct D3D10_DDI_BLEND_DESC
{
    BOOL AlphaToCoverageEnable; // relevant to multisample antialiasing only
    BOOL BlendEnable[D3D10_DDI_SIMULTANEOUS_RENDER_TARGET_COUNT];
    D3D10_DDI_BLEND SrcBlend; // same for all RenderTargets
    D3D10_DDI_BLEND DestBlend; // same for all RenderTargets
    D3D10_DDI_BLEND_OP BlendOp; // same for all RenderTargets
    D3D10_DDI_BLEND SrcBlendAlpha; // same for all RenderTargets
    D3D10_DDI_BLEND DestBlendAlpha; // same for all RenderTargets
    D3D10_DDI_BLEND_OP BlendOpAlpha; // same for all RenderTargets
    UINT8 RenderTargetWriteMask[D3D10_DDI_SIMULTANEOUS_RENDER_TARGET_COUNT];
} D3D10_DDI_BLEND_DESC;

//----------------------------------------------------------------------------------------------------------------------------------
// User mode DDI device function definitions
//
typedef VOID ( APIENTRY* PFND3D10DDI_DRAW )(
    D3D10DDI_HDEVICE, UINT, UINT );
typedef VOID ( APIENTRY* PFND3D10DDI_DRAWINDEXED )(
    D3D10DDI_HDEVICE, UINT, UINT, INT );
typedef VOID ( APIENTRY* PFND3D10DDI_DRAWINSTANCED )(
    D3D10DDI_HDEVICE, UINT, UINT, UINT, UINT );
typedef VOID ( APIENTRY* PFND3D10DDI_DRAWINDEXEDINSTANCED )(
    D3D10DDI_HDEVICE, UINT, UINT, UINT, INT, UINT );
typedef VOID ( APIENTRY* PFND3D10DDI_DRAWAUTO )(
    D3D10DDI_HDEVICE );
typedef VOID ( APIENTRY* PFND3D10DDI_IA_SETTOPOLOGY )(
    D3D10DDI_HDEVICE, D3D10_DDI_PRIMITIVE_TOPOLOGY );
typedef VOID ( APIENTRY* PFND3D10DDI_IA_SETVERTEXBUFFERS )(
    D3D10DDI_HDEVICE, UINT, UINT NumBuffers, _In_reads_(NumBuffers) CONST D3D10DDI_HRESOURCE*, _In_reads_(NumBuffers) CONST UINT*, _In_reads_(NumBuffers) CONST UINT* );
typedef VOID ( APIENTRY* PFND3D10DDI_IA_SETINDEXBUFFER )(
    D3D10DDI_HDEVICE, D3D10DDI_HRESOURCE, DXGI_FORMAT, UINT );
typedef VOID ( APIENTRY* PFND3D10DDI_SETSHADER )(
    D3D10DDI_HDEVICE, D3D10DDI_HSHADER );
typedef VOID ( APIENTRY* PFND3D10DDI_SETINPUTLAYOUT )(
    D3D10DDI_HDEVICE, D3D10DDI_HELEMENTLAYOUT );
typedef VOID ( APIENTRY* PFND3D10DDI_SETSHADERRESOURCES )(
    D3D10DDI_HDEVICE, UINT, UINT NumViews, _In_reads_(NumViews) CONST D3D10DDI_HSHADERRESOURCEVIEW* );
typedef VOID ( APIENTRY* PFND3D10DDI_SETCONSTANTBUFFERS )(
    D3D10DDI_HDEVICE, UINT, UINT NumBuffers, _In_reads_(NumBuffers) CONST D3D10DDI_HRESOURCE* );
typedef VOID ( APIENTRY* PFND3D10DDI_SETSAMPLERS )(
    D3D10DDI_HDEVICE, UINT, UINT NumSamplers, _In_reads_(NumSamplers) CONST D3D10DDI_HSAMPLER* );
typedef VOID ( APIENTRY* PFND3D10DDI_SO_SETTARGETS )(
    D3D10DDI_HDEVICE, UINT NumBuffers, UINT, _In_reads_(NumBuffers) CONST D3D10DDI_HRESOURCE*, _In_reads_(NumBuffers) CONST UINT* );
typedef VOID ( APIENTRY* PFND3D10DDI_SETBLENDSTATE )(
    D3D10DDI_HDEVICE, D3D10DDI_HBLENDSTATE, CONST FLOAT[4], UINT );
typedef VOID ( APIENTRY* PFND3D10DDI_SETDEPTHSTENCILSTATE )(
    D3D10DDI_HDEVICE, D3D10DDI_HDEPTHSTENCILSTATE, UINT );
typedef VOID ( APIENTRY* PFND3D10DDI_SETRASTERIZERSTATE )(
    D3D10DDI_HDEVICE, D3D10DDI_HRASTERIZERSTATE );
typedef VOID ( APIENTRY* PFND3D10DDI_SETVIEWPORTS )(
    D3D10DDI_HDEVICE, UINT NumViewports, UINT, _In_reads_(NumViewports) CONST D3D10_DDI_VIEWPORT* );
typedef VOID ( APIENTRY* PFND3D10DDI_SETSCISSORRECTS )(
    D3D10DDI_HDEVICE, UINT NumRects, UINT, _In_reads_(NumRects) CONST D3D10_DDI_RECT* );
typedef VOID ( APIENTRY* PFND3D10DDI_SETRENDERTARGETS )(
    D3D10DDI_HDEVICE, _In_reads_(NumViews) CONST D3D10DDI_HRENDERTARGETVIEW*, UINT NumViews, UINT, D3D10DDI_HDEPTHSTENCILVIEW );
typedef VOID ( APIENTRY* PFND3D10DDI_SETPREDICATION )(
    D3D10DDI_HDEVICE, D3D10DDI_HQUERY, BOOL );
typedef VOID ( APIENTRY* PFND3D10DDI_QUERYBEGIN )(
    D3D10DDI_HDEVICE, D3D10DDI_HQUERY );
typedef VOID ( APIENTRY* PFND3D10DDI_QUERYEND )(
    D3D10DDI_HDEVICE, D3D10DDI_HQUERY );
typedef VOID ( APIENTRY* PFND3D10DDI_QUERYGETDATA )(
    D3D10DDI_HDEVICE, D3D10DDI_HQUERY, _Out_writes_bytes_all_opt_(DataSize) VOID*, UINT DataSize, UINT );
typedef VOID ( APIENTRY* PFND3D10DDI_CLEARRENDERTARGETVIEW )(
    D3D10DDI_HDEVICE, D3D10DDI_HRENDERTARGETVIEW, FLOAT[4] );
typedef VOID ( APIENTRY* PFND3D10DDI_CLEARDEPTHSTENCILVIEW )(
    D3D10DDI_HDEVICE, D3D10DDI_HDEPTHSTENCILVIEW, UINT, FLOAT, UINT8 );
typedef VOID ( APIENTRY* PFND3D10DDI_FLUSH )(
    D3D10DDI_HDEVICE );
typedef VOID ( APIENTRY* PFND3D10DDI_GENMIPS )(
    D3D10DDI_HDEVICE, D3D10DDI_HSHADERRESOURCEVIEW );

typedef VOID ( APIENTRY* PFND3D10DDI_RESOURCEMAP )(
    D3D10DDI_HDEVICE, D3D10DDI_HRESOURCE, UINT, D3D10_DDI_MAP, UINT, _Out_ D3D10DDI_MAPPED_SUBRESOURCE* );
typedef VOID ( APIENTRY* PFND3D10DDI_RESOURCEUNMAP )(
    D3D10DDI_HDEVICE, D3D10DDI_HRESOURCE, UINT );
typedef VOID ( APIENTRY* PFND3D10DDI_RESOURCEREADAFTERWRITEHAZARD )(
    D3D10DDI_HDEVICE, D3D10DDI_HRESOURCE );
typedef VOID ( APIENTRY* PFND3D10DDI_SHADERRESOURCEVIEWREADAFTERWRITEHAZARD )(
    D3D10DDI_HDEVICE, D3D10DDI_HSHADERRESOURCEVIEW, D3D10DDI_HRESOURCE );
typedef VOID ( APIENTRY* PFND3D10DDI_RESOURCECOPYREGION )(
    D3D10DDI_HDEVICE, D3D10DDI_HRESOURCE, UINT, UINT, UINT, UINT, D3D10DDI_HRESOURCE, UINT, _In_opt_ CONST D3D10_DDI_BOX* );
typedef VOID ( APIENTRY* PFND3D10DDI_RESOURCECOPY )(
    D3D10DDI_HDEVICE, D3D10DDI_HRESOURCE, D3D10DDI_HRESOURCE );
typedef VOID ( APIENTRY* PFND3D10DDI_RESOURCERESOLVESUBRESOURCE )(
    D3D10DDI_HDEVICE, D3D10DDI_HRESOURCE, UINT, D3D10DDI_HRESOURCE, UINT, DXGI_FORMAT );
typedef VOID ( APIENTRY* PFND3D10DDI_RESOURCEUPDATESUBRESOURCEUP )(
    D3D10DDI_HDEVICE, D3D10DDI_HRESOURCE, UINT, _In_opt_ CONST D3D10_DDI_BOX*, _In_ CONST VOID*, UINT, UINT );
typedef VOID ( APIENTRY* PFND3D10DDI_SETTEXTFILTERSIZE )(
    D3D10DDI_HDEVICE, UINT, UINT );

// Infrequent paths:
typedef BOOL ( APIENTRY* PFND3D10DDI_RESOURCEISSTAGINGBUSY )(
    D3D10DDI_HDEVICE, D3D10DDI_HRESOURCE );
typedef VOID ( APIENTRY* PFND3D10DDI_RELOCATEDEVICEFUNCS )(
    D3D10DDI_HDEVICE, _In_ struct D3D10DDI_DEVICEFUNCS* );
typedef SIZE_T ( APIENTRY* PFND3D10DDI_CALCPRIVATERESOURCESIZE )(
    D3D10DDI_HDEVICE, _In_ CONST D3D10DDIARG_CREATERESOURCE* );
typedef SIZE_T ( APIENTRY* PFND3D10DDI_CALCPRIVATEOPENEDRESOURCESIZE )(
    D3D10DDI_HDEVICE, _In_ CONST D3D10DDIARG_OPENRESOURCE* );
typedef VOID ( APIENTRY* PFND3D10DDI_CREATERESOURCE )(
    D3D10DDI_HDEVICE, _In_ CONST D3D10DDIARG_CREATERESOURCE*, D3D10DDI_HRESOURCE, D3D10DDI_HRTRESOURCE );
typedef VOID ( APIENTRY* PFND3D10DDI_OPENRESOURCE )(
    D3D10DDI_HDEVICE, _In_ CONST D3D10DDIARG_OPENRESOURCE*, D3D10DDI_HRESOURCE, D3D10DDI_HRTRESOURCE );
typedef VOID ( APIENTRY* PFND3D10DDI_DESTROYRESOURCE )(
    D3D10DDI_HDEVICE, D3D10DDI_HRESOURCE );
typedef SIZE_T ( APIENTRY* PFND3D10DDI_CALCPRIVATESHADERRESOURCEVIEWSIZE )(
    D3D10DDI_HDEVICE, _In_ CONST D3D10DDIARG_CREATESHADERRESOURCEVIEW* );
typedef VOID ( APIENTRY* PFND3D10DDI_CREATESHADERRESOURCEVIEW )(
    D3D10DDI_HDEVICE, _In_ CONST D3D10DDIARG_CREATESHADERRESOURCEVIEW*, D3D10DDI_HSHADERRESOURCEVIEW, D3D10DDI_HRTSHADERRESOURCEVIEW );
typedef VOID ( APIENTRY* PFND3D10DDI_DESTROYSHADERRESOURCEVIEW )(
    D3D10DDI_HDEVICE, D3D10DDI_HSHADERRESOURCEVIEW );
typedef SIZE_T ( APIENTRY* PFND3D10DDI_CALCPRIVATERENDERTARGETVIEWSIZE )(
    D3D10DDI_HDEVICE, _In_ CONST D3D10DDIARG_CREATERENDERTARGETVIEW* );
typedef VOID ( APIENTRY* PFND3D10DDI_CREATERENDERTARGETVIEW )(
    D3D10DDI_HDEVICE, _In_ CONST D3D10DDIARG_CREATERENDERTARGETVIEW*, D3D10DDI_HRENDERTARGETVIEW, D3D10DDI_HRTRENDERTARGETVIEW );
typedef VOID ( APIENTRY* PFND3D10DDI_DESTROYRENDERTARGETVIEW )(
    D3D10DDI_HDEVICE, D3D10DDI_HRENDERTARGETVIEW );
typedef SIZE_T ( APIENTRY* PFND3D10DDI_CALCPRIVATEDEPTHSTENCILVIEWSIZE )(
    D3D10DDI_HDEVICE, _In_ CONST D3D10DDIARG_CREATEDEPTHSTENCILVIEW* );
typedef VOID ( APIENTRY* PFND3D10DDI_CREATEDEPTHSTENCILVIEW )(
    D3D10DDI_HDEVICE, _In_ CONST D3D10DDIARG_CREATEDEPTHSTENCILVIEW*, D3D10DDI_HDEPTHSTENCILVIEW, D3D10DDI_HRTDEPTHSTENCILVIEW );
typedef VOID ( APIENTRY* PFND3D10DDI_DESTROYDEPTHSTENCILVIEW )(
    D3D10DDI_HDEVICE, D3D10DDI_HDEPTHSTENCILVIEW );
typedef SIZE_T ( APIENTRY* PFND3D10DDI_CALCPRIVATEELEMENTLAYOUTSIZE )(
    D3D10DDI_HDEVICE, _In_ CONST D3D10DDIARG_CREATEELEMENTLAYOUT* );
typedef VOID ( APIENTRY* PFND3D10DDI_CREATEELEMENTLAYOUT )(
    D3D10DDI_HDEVICE, _In_ CONST D3D10DDIARG_CREATEELEMENTLAYOUT*, D3D10DDI_HELEMENTLAYOUT, D3D10DDI_HRTELEMENTLAYOUT );
typedef VOID ( APIENTRY* PFND3D10DDI_DESTROYELEMENTLAYOUT )(
    D3D10DDI_HDEVICE, D3D10DDI_HELEMENTLAYOUT );
typedef SIZE_T ( APIENTRY* PFND3D10DDI_CALCPRIVATEBLENDSTATESIZE )(
    D3D10DDI_HDEVICE, _In_ CONST D3D10_DDI_BLEND_DESC* );
typedef VOID ( APIENTRY* PFND3D10DDI_CREATEBLENDSTATE )(
    D3D10DDI_HDEVICE, _In_ CONST D3D10_DDI_BLEND_DESC*, D3D10DDI_HBLENDSTATE, D3D10DDI_HRTBLENDSTATE );
typedef VOID ( APIENTRY* PFND3D10DDI_DESTROYBLENDSTATE )(
    D3D10DDI_HDEVICE, D3D10DDI_HBLENDSTATE );
typedef SIZE_T ( APIENTRY* PFND3D10DDI_CALCPRIVATEDEPTHSTENCILSTATESIZE )(
    D3D10DDI_HDEVICE, _In_ CONST D3D10_DDI_DEPTH_STENCIL_DESC* );
typedef VOID ( APIENTRY* PFND3D10DDI_CREATEDEPTHSTENCILSTATE )(
    D3D10DDI_HDEVICE, _In_ CONST D3D10_DDI_DEPTH_STENCIL_DESC*, D3D10DDI_HDEPTHSTENCILSTATE, D3D10DDI_HRTDEPTHSTENCILSTATE );
typedef VOID ( APIENTRY* PFND3D10DDI_DESTROYDEPTHSTENCILSTATE )(
    D3D10DDI_HDEVICE, D3D10DDI_HDEPTHSTENCILSTATE );
typedef SIZE_T ( APIENTRY* PFND3D10DDI_CALCPRIVATERASTERIZERSTATESIZE )(
    D3D10DDI_HDEVICE, _In_ CONST D3D10_DDI_RASTERIZER_DESC* );
typedef VOID ( APIENTRY* PFND3D10DDI_CREATERASTERIZERSTATE )(
    D3D10DDI_HDEVICE, _In_ CONST D3D10_DDI_RASTERIZER_DESC*, D3D10DDI_HRASTERIZERSTATE, D3D10DDI_HRTRASTERIZERSTATE );
typedef VOID ( APIENTRY* PFND3D10DDI_DESTROYRASTERIZERSTATE )(
    D3D10DDI_HDEVICE, D3D10DDI_HRASTERIZERSTATE );
typedef SIZE_T ( APIENTRY* PFND3D10DDI_CALCPRIVATESHADERSIZE )(
    D3D10DDI_HDEVICE, _In_reads_(pShaderCode[1]) CONST UINT* pShaderCode, _In_ CONST D3D10DDIARG_STAGE_IO_SIGNATURES* );
typedef VOID ( APIENTRY* PFND3D10DDI_CREATEVERTEXSHADER )(
    D3D10DDI_HDEVICE, _In_reads_(pShaderCode[1]) CONST UINT* pShaderCode, D3D10DDI_HSHADER, D3D10DDI_HRTSHADER, _In_ CONST D3D10DDIARG_STAGE_IO_SIGNATURES* );
typedef VOID ( APIENTRY* PFND3D10DDI_CREATEGEOMETRYSHADER )(
    D3D10DDI_HDEVICE, _In_reads_(pShaderCode[1]) CONST UINT* pShaderCode, D3D10DDI_HSHADER, D3D10DDI_HRTSHADER, _In_ CONST D3D10DDIARG_STAGE_IO_SIGNATURES* );
typedef VOID ( APIENTRY* PFND3D10DDI_CREATEPIXELSHADER )(
    D3D10DDI_HDEVICE, _In_reads_(pShaderCode[1]) CONST UINT* pShaderCode, D3D10DDI_HSHADER, D3D10DDI_HRTSHADER, _In_ CONST D3D10DDIARG_STAGE_IO_SIGNATURES* );
typedef SIZE_T ( APIENTRY* PFND3D10DDI_CALCPRIVATEGEOMETRYSHADERWITHSTREAMOUTPUT )(
    D3D10DDI_HDEVICE, _In_ CONST D3D10DDIARG_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT*, _In_ CONST D3D10DDIARG_STAGE_IO_SIGNATURES* );
typedef VOID ( APIENTRY* PFND3D10DDI_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT )(
    D3D10DDI_HDEVICE, _In_ CONST D3D10DDIARG_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT*, D3D10DDI_HSHADER, D3D10DDI_HRTSHADER, _In_ CONST D3D10DDIARG_STAGE_IO_SIGNATURES* );
typedef VOID ( APIENTRY* PFND3D10DDI_DESTROYSHADER )(
    D3D10DDI_HDEVICE, D3D10DDI_HSHADER );
typedef SIZE_T ( APIENTRY* PFND3D10DDI_CALCPRIVATESAMPLERSIZE )(
    D3D10DDI_HDEVICE, _In_ CONST D3D10_DDI_SAMPLER_DESC* );
typedef VOID ( APIENTRY* PFND3D10DDI_CREATESAMPLER )(
    D3D10DDI_HDEVICE, _In_ CONST D3D10_DDI_SAMPLER_DESC*, D3D10DDI_HSAMPLER, D3D10DDI_HRTSAMPLER );
typedef VOID ( APIENTRY* PFND3D10DDI_DESTROYSAMPLER )(
    D3D10DDI_HDEVICE, D3D10DDI_HSAMPLER );
typedef SIZE_T ( APIENTRY* PFND3D10DDI_CALCPRIVATEQUERYSIZE )(
    D3D10DDI_HDEVICE, _In_ CONST D3D10DDIARG_CREATEQUERY* );
typedef VOID ( APIENTRY* PFND3D10DDI_CREATEQUERY )(
    D3D10DDI_HDEVICE, _In_ CONST D3D10DDIARG_CREATEQUERY*, D3D10DDI_HQUERY, D3D10DDI_HRTQUERY );
typedef VOID ( APIENTRY* PFND3D10DDI_DESTROYQUERY )(
    D3D10DDI_HDEVICE, D3D10DDI_HQUERY );

typedef VOID ( APIENTRY* PFND3D10DDI_CHECKFORMATSUPPORT )(
    D3D10DDI_HDEVICE, DXGI_FORMAT, _Out_ UINT* );
typedef VOID ( APIENTRY* PFND3D10DDI_CHECKMULTISAMPLEQUALITYLEVELS )(
    D3D10DDI_HDEVICE, DXGI_FORMAT, UINT, _Out_ UINT* );
typedef VOID ( APIENTRY* PFND3D10DDI_CHECKCOUNTERINFO )(
    D3D10DDI_HDEVICE, _Out_ D3D10DDI_COUNTER_INFO* );
typedef VOID ( APIENTRY* PFND3D10DDI_CHECKCOUNTER )(
    D3D10DDI_HDEVICE, D3D10DDI_QUERY, _Out_ D3D10DDI_COUNTER_TYPE*, _Out_ UINT*,
    _Out_writes_to_opt_(*pNameLength, *pNameLength) LPSTR, _Inout_opt_ UINT* pNameLength,
    _Out_writes_to_opt_(*pUnitsLength, *pUnitsLength) LPSTR, _Inout_opt_ UINT* pUnitsLength,
    _Out_writes_to_opt_(*pDescriptionLength, *pDescriptionLength) LPSTR, _Inout_opt_ UINT* pDescriptionLength);

typedef VOID ( APIENTRY* PFND3D10DDI_DESTROYDEVICE )(
    D3D10DDI_HDEVICE );


#ifdef D3D10PSGP
// Rasterization-only specific:
//
typedef enum D3D10_DDI_INTERPOLATION_MODE
{
    D3D10_DDI_INTERPOLATION_UNDEFINED = 0,
    D3D10_DDI_INTERPOLATION_CONSTANT = 1,
    D3D10_DDI_INTERPOLATION_LINEAR = 2,
    D3D10_DDI_INTERPOLATION_LINEAR_CENTROID = 3,
    D3D10_DDI_INTERPOLATION_LINEAR_NOPERSPECTIVE = 4,
    D3D10_DDI_INTERPOLATION_LINEAR_NOPERSPECTIVE_CENTROID = 5,
    D3D10_DDI_INTERPOLATION_LINEAR_SAMPLE = 6, // DX10.1
    D3D10_DDI_INTERPOLATION_LINEAR_NOPERSPECTIVE_SAMPLE = 7, // DX10.1
} D3D10_DDI_INTERPOLATION_MODE;

typedef struct D3D10DDIARG_REGISTER_DESC
{
    D3D10_DDI_INTERPOLATION_MODE    InterpolationMode;
    // One bit for each register component, starting from LSB
    UINT                        UsageMask;
} D3D10DDIARG_REGISTER_DESC;

typedef struct D3D10DDIARG_VERTEXPIPELINEOUTPUT
{
    // The number of 4-component registers in the vertex data
    UINT                        NumRegisters;
    // The number of clip distances in the vertex data
    UINT                        NumClipDistances;
    // The number of cull distances in the vertex data
    UINT                        NumCullDistances;
    // The position offset in bytes in the vertex data
    UINT                        PositionOffset;
    // The viewport index offset in bytes in the vertex data. -1 when it is not defined
    UINT                        ViewportIndexOffset;
    // The render target array index offset in bytes  in the vertex data. -1 when it is not defined
    UINT                        RenderTargetArrayIndexOffset;
    // Pointer to the register descriptors. The number of descriptors is NumRegisters.
    CONST D3D10DDIARG_REGISTER_DESC*  pRegisterDescs;
    // Pointer to the array of offsets in bytes in the vertex data for clip distances.
    // The number of elements in the array is NumClipDistances.
    CONST UINT*                 pClipDistanceOffsets;
    // Pointer to the array of offsets in bytes in the vertex data for cull distances.
    // The number of elements in the array is NumCullDistances.
    CONST UINT*                 pCullDistanceOffsets;
} D3D10DDIARG_VERTEXPIPELINEOUTPUT;

typedef VOID ( APIENTRY* PFND3D10DDI_RESETPRIMITIVEID)(
    D3D10DDI_HDEVICE, BOOL );
typedef VOID ( APIENTRY* PFND3D10DDI_SETVERTEXPIPELINEOUTPUT)(
    D3D10DDI_HDEVICE, _In_ CONST D3D10DDIARG_VERTEXPIPELINEOUTPUT* );

#endif // D3D10PSGP

//----------------------------------------------------------------------------------------------------------------------------------
// User mode device function table
//
typedef struct D3D10DDI_DEVICEFUNCS
{
// Order of functions is in decreasing order of priority ( as far as performance is concerned ).
// !!! BEGIN HIGH-FREQUENCY !!!
    PFND3D10DDI_RESOURCEUPDATESUBRESOURCEUP               pfnDefaultConstantBufferUpdateSubresourceUP;
    PFND3D10DDI_SETCONSTANTBUFFERS                        pfnVsSetConstantBuffers;
    PFND3D10DDI_SETSHADERRESOURCES                        pfnPsSetShaderResources;
    PFND3D10DDI_SETSHADER                                 pfnPsSetShader;
    PFND3D10DDI_SETSAMPLERS                               pfnPsSetSamplers;
    PFND3D10DDI_SETSHADER                                 pfnVsSetShader;
    PFND3D10DDI_DRAWINDEXED                               pfnDrawIndexed;
    PFND3D10DDI_DRAW                                      pfnDraw;
    PFND3D10DDI_RESOURCEMAP                               pfnDynamicIABufferMapNoOverwrite;
    PFND3D10DDI_RESOURCEUNMAP                             pfnDynamicIABufferUnmap;
    PFND3D10DDI_RESOURCEMAP                               pfnDynamicConstantBufferMapDiscard;
    PFND3D10DDI_RESOURCEMAP                               pfnDynamicIABufferMapDiscard;
    PFND3D10DDI_RESOURCEUNMAP                             pfnDynamicConstantBufferUnmap;
    PFND3D10DDI_SETCONSTANTBUFFERS                        pfnPsSetConstantBuffers;
    PFND3D10DDI_SETINPUTLAYOUT                            pfnIaSetInputLayout;
    PFND3D10DDI_IA_SETVERTEXBUFFERS                       pfnIaSetVertexBuffers;
    PFND3D10DDI_IA_SETINDEXBUFFER                         pfnIaSetIndexBuffer;
// !!! END HIGH-FREQUENCY !!!

// Order of functions is in decreasing order of priority ( as far as performance is concerned ).
// !!! BEGIN MIDDLE-FREQUENCY !!!
    PFND3D10DDI_DRAWINDEXEDINSTANCED                      pfnDrawIndexedInstanced;
    PFND3D10DDI_DRAWINSTANCED                             pfnDrawInstanced;
    PFND3D10DDI_RESOURCEMAP                               pfnDynamicResourceMapDiscard;
    PFND3D10DDI_RESOURCEUNMAP                             pfnDynamicResourceUnmap;
    PFND3D10DDI_SETCONSTANTBUFFERS                        pfnGsSetConstantBuffers;
    PFND3D10DDI_SETSHADER                                 pfnGsSetShader;
    PFND3D10DDI_IA_SETTOPOLOGY                            pfnIaSetTopology;
    PFND3D10DDI_RESOURCEMAP                               pfnStagingResourceMap;
    PFND3D10DDI_RESOURCEUNMAP                             pfnStagingResourceUnmap;
    PFND3D10DDI_SETSHADERRESOURCES                        pfnVsSetShaderResources;
    PFND3D10DDI_SETSAMPLERS                               pfnVsSetSamplers;
    PFND3D10DDI_SETSHADERRESOURCES                        pfnGsSetShaderResources;
    PFND3D10DDI_SETSAMPLERS                               pfnGsSetSamplers;
    PFND3D10DDI_SETRENDERTARGETS                          pfnSetRenderTargets;
    PFND3D10DDI_SHADERRESOURCEVIEWREADAFTERWRITEHAZARD    pfnShaderResourceViewReadAfterWriteHazard;
    PFND3D10DDI_RESOURCEREADAFTERWRITEHAZARD              pfnResourceReadAfterWriteHazard;
    PFND3D10DDI_SETBLENDSTATE                             pfnSetBlendState;
    PFND3D10DDI_SETDEPTHSTENCILSTATE                      pfnSetDepthStencilState;
    PFND3D10DDI_SETRASTERIZERSTATE                        pfnSetRasterizerState;
    PFND3D10DDI_QUERYEND                                  pfnQueryEnd;
    PFND3D10DDI_QUERYBEGIN                                pfnQueryBegin;
    PFND3D10DDI_RESOURCECOPYREGION                        pfnResourceCopyRegion;
    PFND3D10DDI_RESOURCEUPDATESUBRESOURCEUP               pfnResourceUpdateSubresourceUP;
    PFND3D10DDI_SO_SETTARGETS                             pfnSoSetTargets;
    PFND3D10DDI_DRAWAUTO                                  pfnDrawAuto;
    PFND3D10DDI_SETVIEWPORTS                              pfnSetViewports;
    PFND3D10DDI_SETSCISSORRECTS                           pfnSetScissorRects;
    PFND3D10DDI_CLEARRENDERTARGETVIEW                     pfnClearRenderTargetView;
    PFND3D10DDI_CLEARDEPTHSTENCILVIEW                     pfnClearDepthStencilView;
    PFND3D10DDI_SETPREDICATION                            pfnSetPredication;
    PFND3D10DDI_QUERYGETDATA                              pfnQueryGetData;
    PFND3D10DDI_FLUSH                                     pfnFlush;
    PFND3D10DDI_GENMIPS                                   pfnGenMips;
    PFND3D10DDI_RESOURCECOPY                              pfnResourceCopy;
    PFND3D10DDI_RESOURCERESOLVESUBRESOURCE                pfnResourceResolveSubresource;
// !!! END MIDDLE-FREQUENCY !!!

// Infrequent paths:
    PFND3D10DDI_RESOURCEMAP                               pfnResourceMap;
    PFND3D10DDI_RESOURCEUNMAP                             pfnResourceUnmap;
    PFND3D10DDI_RESOURCEISSTAGINGBUSY                     pfnResourceIsStagingBusy;
    PFND3D10DDI_RELOCATEDEVICEFUNCS                       pfnRelocateDeviceFuncs;
    PFND3D10DDI_CALCPRIVATERESOURCESIZE                   pfnCalcPrivateResourceSize;
    PFND3D10DDI_CALCPRIVATEOPENEDRESOURCESIZE             pfnCalcPrivateOpenedResourceSize;
    PFND3D10DDI_CREATERESOURCE                            pfnCreateResource;
    PFND3D10DDI_OPENRESOURCE                              pfnOpenResource;
    PFND3D10DDI_DESTROYRESOURCE                           pfnDestroyResource;
    PFND3D10DDI_CALCPRIVATESHADERRESOURCEVIEWSIZE         pfnCalcPrivateShaderResourceViewSize;
    PFND3D10DDI_CREATESHADERRESOURCEVIEW                  pfnCreateShaderResourceView;
    PFND3D10DDI_DESTROYSHADERRESOURCEVIEW                 pfnDestroyShaderResourceView;
    PFND3D10DDI_CALCPRIVATERENDERTARGETVIEWSIZE           pfnCalcPrivateRenderTargetViewSize;
    PFND3D10DDI_CREATERENDERTARGETVIEW                    pfnCreateRenderTargetView;
    PFND3D10DDI_DESTROYRENDERTARGETVIEW                   pfnDestroyRenderTargetView;
    PFND3D10DDI_CALCPRIVATEDEPTHSTENCILVIEWSIZE           pfnCalcPrivateDepthStencilViewSize;
    PFND3D10DDI_CREATEDEPTHSTENCILVIEW                    pfnCreateDepthStencilView;
    PFND3D10DDI_DESTROYDEPTHSTENCILVIEW                   pfnDestroyDepthStencilView;
    PFND3D10DDI_CALCPRIVATEELEMENTLAYOUTSIZE              pfnCalcPrivateElementLayoutSize;
    PFND3D10DDI_CREATEELEMENTLAYOUT                       pfnCreateElementLayout;
    PFND3D10DDI_DESTROYELEMENTLAYOUT                      pfnDestroyElementLayout;
    PFND3D10DDI_CALCPRIVATEBLENDSTATESIZE                 pfnCalcPrivateBlendStateSize;
    PFND3D10DDI_CREATEBLENDSTATE                          pfnCreateBlendState;
    PFND3D10DDI_DESTROYBLENDSTATE                         pfnDestroyBlendState;
    PFND3D10DDI_CALCPRIVATEDEPTHSTENCILSTATESIZE          pfnCalcPrivateDepthStencilStateSize;
    PFND3D10DDI_CREATEDEPTHSTENCILSTATE                   pfnCreateDepthStencilState;
    PFND3D10DDI_DESTROYDEPTHSTENCILSTATE                  pfnDestroyDepthStencilState;
    PFND3D10DDI_CALCPRIVATERASTERIZERSTATESIZE            pfnCalcPrivateRasterizerStateSize;
    PFND3D10DDI_CREATERASTERIZERSTATE                     pfnCreateRasterizerState;
    PFND3D10DDI_DESTROYRASTERIZERSTATE                    pfnDestroyRasterizerState;
    PFND3D10DDI_CALCPRIVATESHADERSIZE                     pfnCalcPrivateShaderSize;
    PFND3D10DDI_CREATEVERTEXSHADER                        pfnCreateVertexShader;
    PFND3D10DDI_CREATEGEOMETRYSHADER                      pfnCreateGeometryShader;
    PFND3D10DDI_CREATEPIXELSHADER                         pfnCreatePixelShader;
    PFND3D10DDI_CALCPRIVATEGEOMETRYSHADERWITHSTREAMOUTPUT pfnCalcPrivateGeometryShaderWithStreamOutput;
    PFND3D10DDI_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT      pfnCreateGeometryShaderWithStreamOutput;
    PFND3D10DDI_DESTROYSHADER                             pfnDestroyShader;
    PFND3D10DDI_CALCPRIVATESAMPLERSIZE                    pfnCalcPrivateSamplerSize;
    PFND3D10DDI_CREATESAMPLER                             pfnCreateSampler;
    PFND3D10DDI_DESTROYSAMPLER                            pfnDestroySampler;
    PFND3D10DDI_CALCPRIVATEQUERYSIZE                      pfnCalcPrivateQuerySize;
    PFND3D10DDI_CREATEQUERY                               pfnCreateQuery;
    PFND3D10DDI_DESTROYQUERY                              pfnDestroyQuery;

    PFND3D10DDI_CHECKFORMATSUPPORT                        pfnCheckFormatSupport;
    PFND3D10DDI_CHECKMULTISAMPLEQUALITYLEVELS             pfnCheckMultisampleQualityLevels;
    PFND3D10DDI_CHECKCOUNTERINFO                          pfnCheckCounterInfo;
    PFND3D10DDI_CHECKCOUNTER                              pfnCheckCounter;

    PFND3D10DDI_DESTROYDEVICE                             pfnDestroyDevice;
    PFND3D10DDI_SETTEXTFILTERSIZE                         pfnSetTextFilterSize;

#ifdef D3D10PSGP
// Rasterization-only specific:
    PFND3D10DDI_RESETPRIMITIVEID                          pfnResetPrimitiveID;
    PFND3D10DDI_SETVERTEXPIPELINEOUTPUT                   pfnSetVertexPipelineOutput;
#endif // D3D10PSGP



} D3D10DDI_DEVICEFUNCS;

#if D3D10DDI_MINOR_HEADER_VERSION >= 1 || D3D11DDI_MINOR_HEADER_VERSION >= 1
//----------------------------------------------------------------------------------------------------------------------------------
// User mode function argument definitions 10.1
//

// The Quality Level value for standard multisample pattern is D3D10_1_DDIARG_STANDARD_MULTISAMPLE_PATTERN.
// To expose support for the standard multisample pattern for a given sample count, the driver
// needs to expose at least one standard quality level via CheckMultisampleQualityLevels,
// and that will allow D3D10_1_DDIARG_STANDARD_MULTISAMPLE_PATTERN to be used.  If the vendor
// has no proprietary sample pattern they wish to expose, just the standard pattern, then
// they can just implement the standard pattern for both quality level 0 as well as
// quality level D3D10_1_DDIARG_STANDARD_MULTISAMPLE_PATTERN.  In this case, CheckMultisampleQualityLevels
// would return 1, which allows applications to to request quality level 0 or D3D10_1_DDIARG_STANDARD_MULTISAMPLE_PATTERN,
// and both will give the same behavior.
//
// For every sample count where STANDARD_MULTISAMPLE_PATTERN is supported, a sibling pattern
// must be supported: D3D10_1_DDIARG_CENTER_MULTISAMPLE_PATTERN, which just has the same number of samples,
// except they all overlap the center of the pixel.
//
// This enum matches D3D10_STANDARD_MULTISAMPLE_QUALITY_LEVELS in the sdk header.
typedef enum D3D10_1_DDIARG_STANDARD_MULTISAMPLE_QUALITY_LEVELS
{
    D3D10_1_DDIARG_STANDARD_MULTISAMPLE_PATTERN = 0xffffffff,
    D3D10_1_DDIARG_CENTER_MULTISAMPLE_PATTERN = 0xfffffffe
} D3D10_1_DDIARG_STANDARD_MULTISAMPLE_QUALITY_LEVELS;

typedef struct D3D10_1DDIARG_TEXCUBE_SHADERRESOURCEVIEW
{
    UINT MostDetailedMip;
    UINT MipLevels;
    UINT First2DArrayFace;
    UINT NumCubes;
} D3D10_1DDIARG_TEXCUBE_SHADERRESOURCEVIEW;

typedef struct D3D10_1DDIARG_CREATESHADERRESOURCEVIEW
{
    D3D10DDI_HRESOURCE    hDrvResource;
    DXGI_FORMAT           Format;
    D3D10DDIRESOURCE_TYPE ResourceDimension;

    union
    {
        D3D10DDIARG_BUFFER_SHADERRESOURCEVIEW    Buffer;
        D3D10DDIARG_TEX1D_SHADERRESOURCEVIEW     Tex1D;
        D3D10DDIARG_TEX2D_SHADERRESOURCEVIEW     Tex2D;
        D3D10DDIARG_TEX3D_SHADERRESOURCEVIEW     Tex3D;
        D3D10_1DDIARG_TEXCUBE_SHADERRESOURCEVIEW TexCube;
    };
} D3D10_1DDIARG_CREATESHADERRESOURCEVIEW;

typedef struct D3D10_DDI_RENDER_TARGET_BLEND_DESC1
{
    BOOL BlendEnable;
    D3D10_DDI_BLEND SrcBlend;
    D3D10_DDI_BLEND DestBlend;
    D3D10_DDI_BLEND_OP BlendOp;
    D3D10_DDI_BLEND SrcBlendAlpha;
    D3D10_DDI_BLEND DestBlendAlpha;
    D3D10_DDI_BLEND_OP BlendOpAlpha;
    UINT8 RenderTargetWriteMask; // D3D10_DDI_COLOR_WRITE_ENABLE
} D3D10_DDI_RENDER_TARGET_BLEND_DESC1;

typedef struct D3D10_1_DDI_BLEND_DESC
{
    BOOL AlphaToCoverageEnable; // relevant to multisample antialiasing only
    BOOL IndependentBlendEnable; // if FALSE, then first entry in RenderTarget array is replicated to other entries
    D3D10_DDI_RENDER_TARGET_BLEND_DESC1 RenderTarget[D3D10_DDI_SIMULTANEOUS_RENDER_TARGET_COUNT];
} D3D10_1_DDI_BLEND_DESC;

//----------------------------------------------------------------------------------------------------------------------------------
// User mode DDI device function definitions 10.1
//
typedef VOID ( APIENTRY* PFND3D10_1DDI_RELOCATEDEVICEFUNCS )(
    D3D10DDI_HDEVICE, _In_ struct D3D10_1DDI_DEVICEFUNCS* );
typedef SIZE_T ( APIENTRY* PFND3D10_1DDI_CALCPRIVATESHADERRESOURCEVIEWSIZE )(
    D3D10DDI_HDEVICE, _In_ CONST D3D10_1DDIARG_CREATESHADERRESOURCEVIEW* );
typedef VOID ( APIENTRY* PFND3D10_1DDI_CREATESHADERRESOURCEVIEW )(
    D3D10DDI_HDEVICE, _In_ CONST D3D10_1DDIARG_CREATESHADERRESOURCEVIEW*, D3D10DDI_HSHADERRESOURCEVIEW, D3D10DDI_HRTSHADERRESOURCEVIEW );
typedef SIZE_T ( APIENTRY* PFND3D10_1DDI_CALCPRIVATEBLENDSTATESIZE )(
    D3D10DDI_HDEVICE, _In_ CONST D3D10_1_DDI_BLEND_DESC* );
typedef VOID ( APIENTRY* PFND3D10_1DDI_CREATEBLENDSTATE )(
    D3D10DDI_HDEVICE, _In_ CONST D3D10_1_DDI_BLEND_DESC*, D3D10DDI_HBLENDSTATE, D3D10DDI_HRTBLENDSTATE );

//----------------------------------------------------------------------------------------------------------------------------------
// User mode device function table 10.1
//
typedef struct D3D10_1DDI_DEVICEFUNCS
{
// Order of functions is in decreasing order of priority ( as far as performance is concerned ).
// !!! BEGIN HIGH-FREQUENCY !!!
    PFND3D10DDI_RESOURCEUPDATESUBRESOURCEUP               pfnDefaultConstantBufferUpdateSubresourceUP;
    PFND3D10DDI_SETCONSTANTBUFFERS                        pfnVsSetConstantBuffers;
    PFND3D10DDI_SETSHADERRESOURCES                        pfnPsSetShaderResources;
    PFND3D10DDI_SETSHADER                                 pfnPsSetShader;
    PFND3D10DDI_SETSAMPLERS                               pfnPsSetSamplers;
    PFND3D10DDI_SETSHADER                                 pfnVsSetShader;
    PFND3D10DDI_DRAWINDEXED                               pfnDrawIndexed;
    PFND3D10DDI_DRAW                                      pfnDraw;
    PFND3D10DDI_RESOURCEMAP                               pfnDynamicIABufferMapNoOverwrite;
    PFND3D10DDI_RESOURCEUNMAP                             pfnDynamicIABufferUnmap;
    PFND3D10DDI_RESOURCEMAP                               pfnDynamicConstantBufferMapDiscard;
    PFND3D10DDI_RESOURCEMAP                               pfnDynamicIABufferMapDiscard;
    PFND3D10DDI_RESOURCEUNMAP                             pfnDynamicConstantBufferUnmap;
    PFND3D10DDI_SETCONSTANTBUFFERS                        pfnPsSetConstantBuffers;
    PFND3D10DDI_SETINPUTLAYOUT                            pfnIaSetInputLayout;
    PFND3D10DDI_IA_SETVERTEXBUFFERS                       pfnIaSetVertexBuffers;
    PFND3D10DDI_IA_SETINDEXBUFFER                         pfnIaSetIndexBuffer;
// !!! END HIGH-FREQUENCY !!!

// Order of functions is in decreasing order of priority ( as far as performance is concerned ).
// !!! BEGIN MIDDLE-FREQUENCY !!!
    PFND3D10DDI_DRAWINDEXEDINSTANCED                      pfnDrawIndexedInstanced;
    PFND3D10DDI_DRAWINSTANCED                             pfnDrawInstanced;
    PFND3D10DDI_RESOURCEMAP                               pfnDynamicResourceMapDiscard;
    PFND3D10DDI_RESOURCEUNMAP                             pfnDynamicResourceUnmap;
    PFND3D10DDI_SETCONSTANTBUFFERS                        pfnGsSetConstantBuffers;
    PFND3D10DDI_SETSHADER                                 pfnGsSetShader;
    PFND3D10DDI_IA_SETTOPOLOGY                            pfnIaSetTopology;
    PFND3D10DDI_RESOURCEMAP                               pfnStagingResourceMap;
    PFND3D10DDI_RESOURCEUNMAP                             pfnStagingResourceUnmap;
    PFND3D10DDI_SETSHADERRESOURCES                        pfnVsSetShaderResources;
    PFND3D10DDI_SETSAMPLERS                               pfnVsSetSamplers;
    PFND3D10DDI_SETSHADERRESOURCES                        pfnGsSetShaderResources;
    PFND3D10DDI_SETSAMPLERS                               pfnGsSetSamplers;
    PFND3D10DDI_SETRENDERTARGETS                          pfnSetRenderTargets;
    PFND3D10DDI_SHADERRESOURCEVIEWREADAFTERWRITEHAZARD    pfnShaderResourceViewReadAfterWriteHazard;
    PFND3D10DDI_RESOURCEREADAFTERWRITEHAZARD              pfnResourceReadAfterWriteHazard;
    PFND3D10DDI_SETBLENDSTATE                             pfnSetBlendState;
    PFND3D10DDI_SETDEPTHSTENCILSTATE                      pfnSetDepthStencilState;
    PFND3D10DDI_SETRASTERIZERSTATE                        pfnSetRasterizerState;
    PFND3D10DDI_QUERYEND                                  pfnQueryEnd;
    PFND3D10DDI_QUERYBEGIN                                pfnQueryBegin;
    PFND3D10DDI_RESOURCECOPYREGION                        pfnResourceCopyRegion;
    PFND3D10DDI_RESOURCEUPDATESUBRESOURCEUP               pfnResourceUpdateSubresourceUP;
    PFND3D10DDI_SO_SETTARGETS                             pfnSoSetTargets;
    PFND3D10DDI_DRAWAUTO                                  pfnDrawAuto;
    PFND3D10DDI_SETVIEWPORTS                              pfnSetViewports;
    PFND3D10DDI_SETSCISSORRECTS                           pfnSetScissorRects;
    PFND3D10DDI_CLEARRENDERTARGETVIEW                     pfnClearRenderTargetView;
    PFND3D10DDI_CLEARDEPTHSTENCILVIEW                     pfnClearDepthStencilView;
    PFND3D10DDI_SETPREDICATION                            pfnSetPredication;
    PFND3D10DDI_QUERYGETDATA                              pfnQueryGetData;
    PFND3D10DDI_FLUSH                                     pfnFlush;
    PFND3D10DDI_GENMIPS                                   pfnGenMips;
    PFND3D10DDI_RESOURCECOPY                              pfnResourceCopy;
    PFND3D10DDI_RESOURCERESOLVESUBRESOURCE                pfnResourceResolveSubresource;
// !!! END MIDDLE-FREQUENCY !!!

// Infrequent paths:
    PFND3D10DDI_RESOURCEMAP                               pfnResourceMap;
    PFND3D10DDI_RESOURCEUNMAP                             pfnResourceUnmap;
    PFND3D10DDI_RESOURCEISSTAGINGBUSY                     pfnResourceIsStagingBusy;
    PFND3D10_1DDI_RELOCATEDEVICEFUNCS                     pfnRelocateDeviceFuncs;
    PFND3D10DDI_CALCPRIVATERESOURCESIZE                   pfnCalcPrivateResourceSize;
    PFND3D10DDI_CALCPRIVATEOPENEDRESOURCESIZE             pfnCalcPrivateOpenedResourceSize;
    PFND3D10DDI_CREATERESOURCE                            pfnCreateResource;
    PFND3D10DDI_OPENRESOURCE                              pfnOpenResource;
    PFND3D10DDI_DESTROYRESOURCE                           pfnDestroyResource;
    PFND3D10_1DDI_CALCPRIVATESHADERRESOURCEVIEWSIZE       pfnCalcPrivateShaderResourceViewSize;
    PFND3D10_1DDI_CREATESHADERRESOURCEVIEW                pfnCreateShaderResourceView;
    PFND3D10DDI_DESTROYSHADERRESOURCEVIEW                 pfnDestroyShaderResourceView;
    PFND3D10DDI_CALCPRIVATERENDERTARGETVIEWSIZE           pfnCalcPrivateRenderTargetViewSize;
    PFND3D10DDI_CREATERENDERTARGETVIEW                    pfnCreateRenderTargetView;
    PFND3D10DDI_DESTROYRENDERTARGETVIEW                   pfnDestroyRenderTargetView;
    PFND3D10DDI_CALCPRIVATEDEPTHSTENCILVIEWSIZE           pfnCalcPrivateDepthStencilViewSize;
    PFND3D10DDI_CREATEDEPTHSTENCILVIEW                    pfnCreateDepthStencilView;
    PFND3D10DDI_DESTROYDEPTHSTENCILVIEW                   pfnDestroyDepthStencilView;
    PFND3D10DDI_CALCPRIVATEELEMENTLAYOUTSIZE              pfnCalcPrivateElementLayoutSize;
    PFND3D10DDI_CREATEELEMENTLAYOUT                       pfnCreateElementLayout;
    PFND3D10DDI_DESTROYELEMENTLAYOUT                      pfnDestroyElementLayout;
    PFND3D10_1DDI_CALCPRIVATEBLENDSTATESIZE               pfnCalcPrivateBlendStateSize;
    PFND3D10_1DDI_CREATEBLENDSTATE                        pfnCreateBlendState;
    PFND3D10DDI_DESTROYBLENDSTATE                         pfnDestroyBlendState;
    PFND3D10DDI_CALCPRIVATEDEPTHSTENCILSTATESIZE          pfnCalcPrivateDepthStencilStateSize;
    PFND3D10DDI_CREATEDEPTHSTENCILSTATE                   pfnCreateDepthStencilState;
    PFND3D10DDI_DESTROYDEPTHSTENCILSTATE                  pfnDestroyDepthStencilState;
    PFND3D10DDI_CALCPRIVATERASTERIZERSTATESIZE            pfnCalcPrivateRasterizerStateSize;
    PFND3D10DDI_CREATERASTERIZERSTATE                     pfnCreateRasterizerState;
    PFND3D10DDI_DESTROYRASTERIZERSTATE                    pfnDestroyRasterizerState;
    PFND3D10DDI_CALCPRIVATESHADERSIZE                     pfnCalcPrivateShaderSize;
    PFND3D10DDI_CREATEVERTEXSHADER                        pfnCreateVertexShader;
    PFND3D10DDI_CREATEGEOMETRYSHADER                      pfnCreateGeometryShader;
    PFND3D10DDI_CREATEPIXELSHADER                         pfnCreatePixelShader;
    PFND3D10DDI_CALCPRIVATEGEOMETRYSHADERWITHSTREAMOUTPUT pfnCalcPrivateGeometryShaderWithStreamOutput;
    PFND3D10DDI_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT      pfnCreateGeometryShaderWithStreamOutput;
    PFND3D10DDI_DESTROYSHADER                             pfnDestroyShader;
    PFND3D10DDI_CALCPRIVATESAMPLERSIZE                    pfnCalcPrivateSamplerSize;
    PFND3D10DDI_CREATESAMPLER                             pfnCreateSampler;
    PFND3D10DDI_DESTROYSAMPLER                            pfnDestroySampler;
    PFND3D10DDI_CALCPRIVATEQUERYSIZE                      pfnCalcPrivateQuerySize;
    PFND3D10DDI_CREATEQUERY                               pfnCreateQuery;
    PFND3D10DDI_DESTROYQUERY                              pfnDestroyQuery;

    PFND3D10DDI_CHECKFORMATSUPPORT                        pfnCheckFormatSupport;
    PFND3D10DDI_CHECKMULTISAMPLEQUALITYLEVELS             pfnCheckMultisampleQualityLevels;
    PFND3D10DDI_CHECKCOUNTERINFO                          pfnCheckCounterInfo;
    PFND3D10DDI_CHECKCOUNTER                              pfnCheckCounter;

    PFND3D10DDI_DESTROYDEVICE                             pfnDestroyDevice;
    PFND3D10DDI_SETTEXTFILTERSIZE                         pfnSetTextFilterSize;

    // Start additional 10.1 entries:
    PFND3D10DDI_RESOURCECOPY                              pfnResourceConvert;
    PFND3D10DDI_RESOURCECOPYREGION                        pfnResourceConvertRegion;

#ifdef D3D10PSGP
// Rasterization-only specific:
    PFND3D10DDI_RESETPRIMITIVEID                          pfnResetPrimitiveID;
    PFND3D10DDI_SETVERTEXPIPELINEOUTPUT                   pfnSetVertexPipelineOutput;
#endif // D3D10PSGP

} D3D10_1DDI_DEVICEFUNCS;

#endif

#if D3D11DDI_MINOR_HEADER_VERSION >= 1

typedef struct D3D11DDIARG_STREAM_OUTPUT_DECLARATION_ENTRY
{
    UINT Stream;
    UINT OutputSlot;
    UINT RegisterIndex;
    BYTE RegisterMask; // (D3D10_SB_OPERAND_4_COMPONENT_MASK >> 4), meaning 4 LSBs are xyzw respectively
} D3D11DDIARG_STREAM_OUTPUT_DECLARATION_ENTRY;

typedef struct D3D11DDIARG_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT
{
    CONST UINT*                                         pShaderCode;
    CONST D3D11DDIARG_STREAM_OUTPUT_DECLARATION_ENTRY*  pOutputStreamDecl;
    UINT                                                NumEntries;
    CONST UINT*                                         BufferStridesInBytes;
    UINT                                                NumStrides;
    UINT                                                RasterizedStream;
} D3D11DDIARG_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT;

typedef struct D3D11DDIARG_TESSELLATION_IO_SIGNATURES
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
    D3D10DDIARG_SIGNATURE_ENTRY*  pInputSignature;
    UINT                          NumInputSignatureEntries;
    D3D10DDIARG_SIGNATURE_ENTRY*  pOutputSignature;
    UINT                          NumOutputSignatureEntries;
    D3D10DDIARG_SIGNATURE_ENTRY*  pPatchConstantSignature;
    UINT                          NumPatchConstantSignatureEntries;
} D3D11DDIARG_TESSELLATION_IO_SIGNATURES;

typedef enum D3D11DDI_HANDLETYPE
{
    D3D10DDI_HT_RESOURCE,
    D3D10DDI_HT_SHADERRESOURCEVIEW,
    D3D10DDI_HT_RENDERTARGETVIEW,
    D3D10DDI_HT_DEPTHSTENCILVIEW,
    D3D10DDI_HT_SHADER,
    D3D10DDI_HT_ELEMENTLAYOUT,
    D3D10DDI_HT_BLENDSTATE,
    D3D10DDI_HT_DEPTHSTENCILSTATE,
    D3D10DDI_HT_RASTERIZERSTATE,
    D3D10DDI_HT_SAMPLERSTATE,
    D3D10DDI_HT_QUERY,
    D3D11DDI_HT_COMMANDLIST,
    D3D11DDI_HT_UNORDEREDACCESSVIEW,
#if D3D11DDI_MINOR_HEADER_VERSION >= 3
    D3D11_1DDI_HT_DECODE,
    D3D11_1DDI_HT_VIDEOPROCESSORENUM,
    D3D11_1DDI_HT_VIDEOPROCESSOR,
    D3D11_1DDI_HT_VIDEODECODEROUTPUTVIEW,
    D3D11_1DDI_HT_VIDEOPROCESSORINPUTVIEW,
    D3D11_1DDI_HT_VIDEOPROCESSOROUTPUTVIEW,
#endif
} D3D11DDI_HANDLETYPE;

typedef struct D3D11DDI_HANDLESIZE
{
    D3D11DDI_HANDLETYPE HandleType;
    SIZE_T DriverPrivateSize;
} D3D11DDI_HANDLESIZE;

typedef struct D3D11DDIARG_CREATEDEFERREDCONTEXT
{
    union
    {
        struct D3D11DDI_DEVICEFUNCS* p11ContextFuncs; // in/out:
        struct D3D11_1DDI_DEVICEFUNCS* p11_1ContextFuncs; // in/out:
#if D3D11DDI_MINOR_HEADER_VERSION >= 4
        struct D3DWDDM1_3DDI_DEVICEFUNCS* pWDDM1_3ContextFuncs; // in/out:
#endif
#if D3D11DDI_MINOR_HEADER_VERSION >= 5
        struct D3DWDDM2_0DDI_DEVICEFUNCS* pWDDM2_0ContextFuncs; // in/out:
#endif
#if D3D11DDI_MINOR_HEADER_VERSION >= 10
        struct D3DWDDM2_1DDI_DEVICEFUNCS* pWDDM2_1ContextFuncs; // in/out:
#endif
    };
    D3D10DDI_HDEVICE hDrvContext; // in:  Driver private handle/ storage.

    D3D10DDI_HRTCORELAYER hRTCoreLayer; // in: CoreLayer handle
    union
    {
        CONST struct D3D11DDI_CORELAYER_DEVICECALLBACKS* p11UMCallbacks; // in: callbacks that stay in usermode
#if D3D11DDI_MINOR_HEADER_VERSION >= 5
        CONST struct D3DWDDM2_0DDI_CORELAYER_DEVICECALLBACKS* pWDDM2_0UMCallbacks; // in:  callbacks that stay in usermode
#endif
    };

    UINT Flags; // in: D3D10DDI_CREATEDEVICE_FLAG_*
} D3D11DDIARG_CREATEDEFERREDCONTEXT;

typedef struct D3D11DDIARG_CALCPRIVATEDEFERREDCONTEXTSIZE
{
    UINT Flags; // in: D3D10DDI_CREATEDEVICE_FLAG_*
} D3D11DDIARG_CALCPRIVATEDEFERREDCONTEXTSIZE;

typedef struct D3D11DDIARG_CREATECOMMANDLIST
{
    D3D10DDI_HDEVICE hDeferredContext;
} D3D11DDIARG_CREATECOMMANDLIST;

typedef struct D3D11DDIARG_POINTERDATA
{
    UINT uCBOffset : 12;
    UINT uCBID : 4;
    UINT uBaseSamp : 4;
    UINT uBaseTex : 7;
    UINT uReserved : 5;
} D3D11DDIARG_POINTERDATA;

#if D3D11DDI_MINOR_HEADER_VERSION >= 3
typedef enum D3D11_DDI_VIDEO_DECODER_BUFFER_TYPE
{
    D3D11_1DDI_VIDEO_DECODER_BUFFER_UNKNOWN                          = 0,
    D3D11_1DDI_VIDEO_DECODER_BUFFER_PICTURE_PARAMETERS               = 1,
    D3D11_1DDI_VIDEO_DECODER_BUFFER_MACROBLOCK_CONTROL               = 2,
    D3D11_1DDI_VIDEO_DECODER_BUFFER_RESIDUAL_DIFFERENCE              = 3,
    D3D11_1DDI_VIDEO_DECODER_BUFFER_DEBLOCKING_CONTROL               = 4,
    D3D11_1DDI_VIDEO_DECODER_BUFFER_INVERSE_QUANTIZATION_MATRIX      = 5,
    D3D11_1DDI_VIDEO_DECODER_BUFFER_SLICE_CONTROL                    = 6,
    D3D11_1DDI_VIDEO_DECODER_BUFFER_BITSTREAM                        = 7,
    D3D11_1DDI_VIDEO_DECODER_BUFFER_MOTION_VECTOR                    = 8,
    D3D11_1DDI_VIDEO_DECODER_BUFFER_FILM_GRAIN                       = 9
} D3D11_1DDI_VIDEO_DECODER_BUFFER_TYPE;
#endif

#if D3D11DDI_MINOR_HEADER_VERSION >= 5
typedef enum D3DWDDM2_0DDI_TEXTURE_LAYOUT
{
    D3DWDDM2_0DDI_TL_UNDEFINED = 0,
    D3DWDDM2_0DDI_TL_ROW_MAJOR = 1,
    D3DWDDM2_0DDI_TL_STANDARD_SWIZZLE_64K_TILE = 3, 
    D3DWDDM2_0DDI_TL_DEVICE_DEPENDENT_SWIZZLE_0 = 0x100,
} D3DWDDM2_0DDI_TEXTURE_LAYOUT;
#endif

typedef struct D3D11DDIARG_CREATERESOURCE
{
    CONST D3D10DDI_MIPINFO*              pMipInfoList;
    CONST D3D10_DDIARG_SUBRESOURCE_UP*   pInitialDataUP; // non-NULL if Usage has invariant
    D3D10DDIRESOURCE_TYPE                ResourceDimension; // Part of old Caps1

    UINT                                 Usage; // Part of old Caps1
    UINT                                 BindFlags; // Part of old Caps1
    UINT /*D3D10_DDI_CPU_ACCESS*/        MapFlags;
    UINT                                 MiscFlags;

    DXGI_FORMAT                          Format; // Totally different than D3DDDIFORMAT
    DXGI_SAMPLE_DESC                     SampleDesc;
    UINT                                 MipLevels;
    UINT                                 ArraySize;

    // Can only be non-NULL, if BindFlags has D3D10_DDI_BIND_PRESENT bit set; but not always.
    // Presence of structure is an indication that Resource could be used as a primary (ie. scanned-out),
    // and naturally used with Present (flip style). (UMD can prevent this- see dxgiddi.h)
    // If pPrimaryDesc absent, blt/ copy style is implied when used with Present.
    DXGI_DDI_PRIMARY_DESC*               pPrimaryDesc;

    UINT                                 ByteStride;
#if D3D11DDI_MINOR_HEADER_VERSION >= 3
    D3D11_1DDI_VIDEO_DECODER_BUFFER_TYPE DecoderBufferType;
#endif

#if D3D11DDI_MINOR_HEADER_VERSION >= 5
    D3DWDDM2_0DDI_TEXTURE_LAYOUT         TextureLayout;
#endif

} D3D11DDIARG_CREATERESOURCE;

typedef struct D3D11DDIARG_BUFFEREX_SHADERRESOURCEVIEW
{
    union
    {
        UINT FirstElement;  // Nicer name
        UINT ElementOffset;
    };
    union
    {
        UINT NumElements;   // Nicer name
        UINT ElementWidth;
    };
    UINT     Flags; // See D3D11_DDI_BUFFEREX_SRV_FLAG_* below
} D3D11DDIARG_BUFFEREX_SHADERRESOURCEVIEW;
#define D3D11_DDI_BUFFEREX_SRV_FLAG_RAW         0x00000001

typedef struct D3D11DDIARG_CREATESHADERRESOURCEVIEW
{
    D3D10DDI_HRESOURCE    hDrvResource;
    DXGI_FORMAT           Format;
    D3D10DDIRESOURCE_TYPE ResourceDimension;

    union
    {
        D3D10DDIARG_BUFFER_SHADERRESOURCEVIEW    Buffer;
        D3D10DDIARG_TEX1D_SHADERRESOURCEVIEW     Tex1D;
        D3D10DDIARG_TEX2D_SHADERRESOURCEVIEW     Tex2D;
        D3D10DDIARG_TEX3D_SHADERRESOURCEVIEW     Tex3D;
        D3D10_1DDIARG_TEXCUBE_SHADERRESOURCEVIEW TexCube;
        D3D11DDIARG_BUFFEREX_SHADERRESOURCEVIEW  BufferEx;
    };
} D3D11DDIARG_CREATESHADERRESOURCEVIEW;

typedef struct D3D11DDIARG_BUFFER_RENDERTARGETVIEW
{
    union
    {
        UINT FirstElement;  // Nicer name
        UINT ElementOffset;
    };
    union
    {
        UINT NumElements;   // Nicer name
        UINT ElementWidth;
    };
} D3D11DDIARG_BUFFER_RENDERTARGETVIEW;


typedef struct D3D11DDIARG_BUFFER_UNORDEREDACCESSVIEW
{
    UINT     FirstElement;
    UINT     NumElements;
    UINT     Flags; // See D3D11_DDI_BUFFER_UAV_FLAG* below
} D3D11DDIARG_BUFFER_UNORDEREDACCESSVIEW;
#define D3D11_DDI_BUFFER_UAV_FLAG_RAW         0x00000001
#define D3D11_DDI_BUFFER_UAV_FLAG_APPEND      0x00000002
#define D3D11_DDI_BUFFER_UAV_FLAG_COUNTER     0x00000004

typedef struct D3D11DDIARG_TEX1D_UNORDEREDACCESSVIEW
{
    UINT     MipSlice;
    UINT     FirstArraySlice;
    UINT     ArraySize;
} D3D11DDIARG_TEX1D_UNORDEREDACCESSVIEW;

typedef struct D3D11DDIARG_TEX2D_UNORDEREDACCESSVIEW
{
    UINT     MipSlice;
    UINT     FirstArraySlice;
    UINT     ArraySize;
} D3D11DDIARG_TEX2D_UNORDEREDACCESSVIEW;

typedef struct D3D11DDIARG_TEX3D_UNORDEREDACCESSVIEW
{
    UINT     MipSlice;
    UINT     FirstW;
    UINT     WSize;
} D3D11DDIARG_TEX3D_UNORDEREDACCESSVIEW;

typedef struct D3D11DDIARG_CREATEUNORDEREDACCESSVIEW
{
    D3D10DDI_HRESOURCE    hDrvResource;
    DXGI_FORMAT           Format;
    D3D10DDIRESOURCE_TYPE ResourceDimension; // Runtime will never set this to TexCube

    union
    {
        D3D11DDIARG_BUFFER_UNORDEREDACCESSVIEW    Buffer;
        D3D11DDIARG_TEX1D_UNORDEREDACCESSVIEW     Tex1D;
        D3D11DDIARG_TEX2D_UNORDEREDACCESSVIEW     Tex2D;
        D3D11DDIARG_TEX3D_UNORDEREDACCESSVIEW     Tex3D;
    };
} D3D11DDIARG_CREATEUNORDEREDACCESSVIEW;

//----------------------------------------------------------------------------------------------------------------------------------
// User mode DDI device function definitions 11
//
typedef VOID ( APIENTRY* PFND3D11DDI_RELOCATEDEVICEFUNCS )(
    D3D10DDI_HDEVICE, _In_ struct D3D11DDI_DEVICEFUNCS* );
typedef SIZE_T ( APIENTRY* PFND3D11DDI_CALCPRIVATEGEOMETRYSHADERWITHSTREAMOUTPUT )(
    D3D10DDI_HDEVICE, _In_ CONST D3D11DDIARG_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT*, _In_ CONST D3D10DDIARG_STAGE_IO_SIGNATURES* );
typedef VOID ( APIENTRY* PFND3D11DDI_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT )(
    D3D10DDI_HDEVICE, _In_ CONST D3D11DDIARG_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT*, D3D10DDI_HSHADER, D3D10DDI_HRTSHADER, _In_ CONST D3D10DDIARG_STAGE_IO_SIGNATURES* );
typedef VOID ( APIENTRY* PFND3D11DDI_DRAWINDEXEDINSTANCEDINDIRECT )(
    D3D10DDI_HDEVICE, D3D10DDI_HRESOURCE, UINT );
typedef VOID ( APIENTRY* PFND3D11DDI_DRAWINSTANCEDINDIRECT )(
    D3D10DDI_HDEVICE, D3D10DDI_HRESOURCE, UINT );
typedef SIZE_T ( APIENTRY* PFND3D11DDI_CALCPRIVATETESSELLATIONSHADERSIZE )(
    D3D10DDI_HDEVICE, _In_reads_(pShaderCode[1]) CONST UINT* pShaderCode, _In_ CONST D3D11DDIARG_TESSELLATION_IO_SIGNATURES* );
typedef VOID ( APIENTRY* PFND3D11DDI_CREATEHULLSHADER )(
    D3D10DDI_HDEVICE, _In_reads_(pShaderCode[1]) CONST UINT* pShaderCode, D3D10DDI_HSHADER, D3D10DDI_HRTSHADER, _In_ CONST D3D11DDIARG_TESSELLATION_IO_SIGNATURES* );
typedef VOID ( APIENTRY* PFND3D11DDI_CREATEDOMAINSHADER )(
    D3D10DDI_HDEVICE, _In_reads_(pShaderCode[1]) CONST UINT* pShaderCode, D3D10DDI_HSHADER, D3D10DDI_HRTSHADER, _In_ CONST D3D11DDIARG_TESSELLATION_IO_SIGNATURES* );
typedef VOID ( APIENTRY* PFND3D11DDI_CHECKDEFERREDCONTEXTHANDLESIZES )(
    D3D10DDI_HDEVICE, _Inout_ UINT* pHSizes, _Out_writes_to_opt_(*pHSizes, *pHSizes) D3D11DDI_HANDLESIZE* );
typedef SIZE_T ( APIENTRY* PFND3D11DDI_CALCDEFERREDCONTEXTHANDLESIZE )(
    D3D10DDI_HDEVICE, D3D11DDI_HANDLETYPE, _In_ VOID* );
typedef SIZE_T ( APIENTRY* PFND3D11DDI_CALCPRIVATEDEFERREDCONTEXTSIZE )(
    D3D10DDI_HDEVICE, _In_ CONST D3D11DDIARG_CALCPRIVATEDEFERREDCONTEXTSIZE* );
typedef VOID ( APIENTRY* PFND3D11DDI_CREATEDEFERREDCONTEXT )(
    D3D10DDI_HDEVICE, _In_ CONST D3D11DDIARG_CREATEDEFERREDCONTEXT* );
typedef HRESULT ( APIENTRY* PFND3D11DDI_RECYCLECREATEDEFERREDCONTEXT )(
    D3D10DDI_HDEVICE, _In_ CONST D3D11DDIARG_CREATEDEFERREDCONTEXT* );
typedef VOID ( APIENTRY* PFND3D11DDI_ABANDONCOMMANDLIST )(
    D3D10DDI_HDEVICE );
typedef SIZE_T ( APIENTRY* PFND3D11DDI_CALCPRIVATECOMMANDLISTSIZE )(
    D3D10DDI_HDEVICE, _In_ CONST D3D11DDIARG_CREATECOMMANDLIST* );
typedef VOID ( APIENTRY* PFND3D11DDI_CREATECOMMANDLIST )(
    D3D10DDI_HDEVICE, _In_ CONST D3D11DDIARG_CREATECOMMANDLIST*, D3D11DDI_HCOMMANDLIST, D3D11DDI_HRTCOMMANDLIST );
typedef VOID ( APIENTRY* PFND3D11DDI_RECYCLECOMMANDLIST )( D3D10DDI_HDEVICE /*DC-only*/, D3D11DDI_HCOMMANDLIST /* IC handle */ );
typedef HRESULT ( APIENTRY* PFND3D11DDI_RECYCLECREATECOMMANDLIST )(
    D3D10DDI_HDEVICE, _In_ CONST D3D11DDIARG_CREATECOMMANDLIST*, D3D11DDI_HCOMMANDLIST, D3D11DDI_HRTCOMMANDLIST );
typedef VOID ( APIENTRY* PFND3D11DDI_DESTROYCOMMANDLIST )(
    D3D10DDI_HDEVICE, D3D11DDI_HCOMMANDLIST );
typedef VOID ( APIENTRY* PFND3D11DDI_COMMANDLISTEXECUTE )(
    D3D10DDI_HDEVICE, D3D11DDI_HCOMMANDLIST );
typedef VOID ( APIENTRY* PFND3D11DDI_SETSHADER_WITH_IFACES )(
    D3D10DDI_HDEVICE, D3D10DDI_HSHADER, UINT NumClassInstances, _In_reads_(NumClassInstances) CONST UINT*, _In_reads_(NumClassInstances) CONST D3D11DDIARG_POINTERDATA* );
typedef VOID ( APIENTRY* PFND3D11DDI_SETRENDERTARGETS )
(
    D3D10DDI_HDEVICE, // device handle
    _In_reads_(NumRTVs) CONST D3D10DDI_HRENDERTARGETVIEW*, // array of RenderTargetViews,
    UINT NumRTVs,  // number of RTVs to set
    UINT,  // number of RTVs to unbind (those that were previously but no longer set)
    D3D10DDI_HDEPTHSTENCILVIEW, // DepthStencilView
    _In_reads_(NumUAVs) CONST D3D11DDI_HUNORDEREDACCESSVIEW*, // array of UnorderedAccessViews,
    _In_reads_(NumUAVs) CONST UINT*, // Array of Append buffer offsets (relevant only for
           // UAVs which have the Append flag (otherwise ignored).
           // -1 means keep current offset.  Any other value sets
           // the hidden counter for that Appendable UAV.
    UINT,  // index of first UAVs to set, at least as great as NumRTVs
    UINT NumUAVs,  // number of UAVs to set
    UINT,  // the first UAV in the set all updated UAVs (including NULL bindings)
    UINT   // the number of UAVs in the set all updated UAVs (including NULL bindings)
);
typedef VOID ( APIENTRY* PFND3D11DDI_SETUNORDEREDACCESSVIEWS )(
    D3D10DDI_HDEVICE, UINT, UINT NumViews, _In_reads_(NumViews) CONST D3D11DDI_HUNORDEREDACCESSVIEW*, _In_reads_(NumViews) CONST UINT* );
typedef SIZE_T ( APIENTRY* PFND3D11DDI_CALCPRIVATERESOURCESIZE )(
    D3D10DDI_HDEVICE, _In_ CONST D3D11DDIARG_CREATERESOURCE* );
typedef VOID ( APIENTRY* PFND3D11DDI_CREATERESOURCE )(
    D3D10DDI_HDEVICE, _In_ CONST D3D11DDIARG_CREATERESOURCE*, D3D10DDI_HRESOURCE, D3D10DDI_HRTRESOURCE );
typedef SIZE_T ( APIENTRY* PFND3D11DDI_CALCPRIVATESHADERRESOURCEVIEWSIZE )(
    D3D10DDI_HDEVICE, _In_ CONST D3D11DDIARG_CREATESHADERRESOURCEVIEW* );
typedef VOID ( APIENTRY* PFND3D11DDI_CREATESHADERRESOURCEVIEW )(
    D3D10DDI_HDEVICE, _In_ CONST D3D11DDIARG_CREATESHADERRESOURCEVIEW*, D3D10DDI_HSHADERRESOURCEVIEW, D3D10DDI_HRTSHADERRESOURCEVIEW );
typedef SIZE_T ( APIENTRY* PFND3D11DDI_CALCPRIVATEUNORDEREDACCESSVIEWSIZE )(
    D3D10DDI_HDEVICE, _In_ CONST D3D11DDIARG_CREATEUNORDEREDACCESSVIEW* );
typedef VOID ( APIENTRY* PFND3D11DDI_CREATEUNORDEREDACCESSVIEW )(
    D3D10DDI_HDEVICE, _In_ CONST D3D11DDIARG_CREATEUNORDEREDACCESSVIEW*, D3D11DDI_HUNORDEREDACCESSVIEW, D3D11DDI_HRTUNORDEREDACCESSVIEW );
typedef VOID ( APIENTRY* PFND3D11DDI_DESTROYUNORDEREDACCESSVIEW )(
    D3D10DDI_HDEVICE, D3D11DDI_HUNORDEREDACCESSVIEW );
typedef VOID ( APIENTRY* PFND3D11DDI_CLEARUNORDEREDACCESSVIEWUINT )(
    D3D10DDI_HDEVICE, D3D11DDI_HUNORDEREDACCESSVIEW, CONST UINT[4] );
typedef VOID ( APIENTRY* PFND3D11DDI_CLEARUNORDEREDACCESSVIEWFLOAT )(
    D3D10DDI_HDEVICE, D3D11DDI_HUNORDEREDACCESSVIEW, CONST FLOAT[4] );
typedef VOID ( APIENTRY* PFND3D11DDI_CREATECOMPUTESHADER )(
    D3D10DDI_HDEVICE, _In_reads_(pShaderCode[1]) CONST UINT* pShaderCode, D3D10DDI_HSHADER, D3D10DDI_HRTSHADER );
typedef VOID ( APIENTRY* PFND3D11DDI_DISPATCH )(
    D3D10DDI_HDEVICE, UINT, UINT, UINT );
typedef VOID ( APIENTRY* PFND3D11DDI_DISPATCHINDIRECT )(
    D3D10DDI_HDEVICE, D3D10DDI_HRESOURCE, UINT );
typedef VOID ( APIENTRY* PFND3D11DDI_SETRESOURCEMINLOD)(
    D3D10DDI_HDEVICE, D3D10DDI_HRESOURCE, FLOAT );
typedef SIZE_T ( APIENTRY* PFND3D11DDI_CALCPRIVATEDEPTHSTENCILVIEWSIZE )(
    D3D10DDI_HDEVICE, _In_ CONST D3D11DDIARG_CREATEDEPTHSTENCILVIEW* );
typedef VOID ( APIENTRY* PFND3D11DDI_CREATEDEPTHSTENCILVIEW )(
    D3D10DDI_HDEVICE, _In_ CONST D3D11DDIARG_CREATEDEPTHSTENCILVIEW*, D3D10DDI_HDEPTHSTENCILVIEW, D3D10DDI_HRTDEPTHSTENCILVIEW );
typedef VOID ( APIENTRY* PFND3D11DDI_COPYSTRUCTURECOUNT )(
    D3D10DDI_HDEVICE, D3D10DDI_HRESOURCE, UINT, D3D11DDI_HUNORDEREDACCESSVIEW );


//----------------------------------------------------------------------------------------------------------------------------------
// User mode device function table 11
//
typedef struct D3D11DDI_DEVICEFUNCS
{
// Order of functions is in decreasing order of priority ( as far as performance is concerned ).
// !!! BEGIN HIGH-FREQUENCY !!!
    PFND3D10DDI_RESOURCEUPDATESUBRESOURCEUP                 pfnDefaultConstantBufferUpdateSubresourceUP;
    PFND3D10DDI_SETCONSTANTBUFFERS                          pfnVsSetConstantBuffers;
    PFND3D10DDI_SETSHADERRESOURCES                          pfnPsSetShaderResources;
    PFND3D10DDI_SETSHADER                                   pfnPsSetShader;
    PFND3D10DDI_SETSAMPLERS                                 pfnPsSetSamplers;
    PFND3D10DDI_SETSHADER                                   pfnVsSetShader;
    PFND3D10DDI_DRAWINDEXED                                 pfnDrawIndexed;
    PFND3D10DDI_DRAW                                        pfnDraw;
    PFND3D10DDI_RESOURCEMAP                                 pfnDynamicIABufferMapNoOverwrite;
    PFND3D10DDI_RESOURCEUNMAP                               pfnDynamicIABufferUnmap;
    PFND3D10DDI_RESOURCEMAP                                 pfnDynamicConstantBufferMapDiscard;
    PFND3D10DDI_RESOURCEMAP                                 pfnDynamicIABufferMapDiscard;
    PFND3D10DDI_RESOURCEUNMAP                               pfnDynamicConstantBufferUnmap;
    PFND3D10DDI_SETCONSTANTBUFFERS                          pfnPsSetConstantBuffers;
    PFND3D10DDI_SETINPUTLAYOUT                              pfnIaSetInputLayout;
    PFND3D10DDI_IA_SETVERTEXBUFFERS                         pfnIaSetVertexBuffers;
    PFND3D10DDI_IA_SETINDEXBUFFER                           pfnIaSetIndexBuffer;
// !!! END HIGH-FREQUENCY !!!

// Order of functions is in decreasing order of priority ( as far as performance is concerned ).
// !!! BEGIN MIDDLE-FREQUENCY !!!
    PFND3D10DDI_DRAWINDEXEDINSTANCED                        pfnDrawIndexedInstanced;
    PFND3D10DDI_DRAWINSTANCED                               pfnDrawInstanced;
    PFND3D10DDI_RESOURCEMAP                                 pfnDynamicResourceMapDiscard;
    PFND3D10DDI_RESOURCEUNMAP                               pfnDynamicResourceUnmap;
    PFND3D10DDI_SETCONSTANTBUFFERS                          pfnGsSetConstantBuffers;
    PFND3D10DDI_SETSHADER                                   pfnGsSetShader;
    PFND3D10DDI_IA_SETTOPOLOGY                              pfnIaSetTopology;
    PFND3D10DDI_RESOURCEMAP                                 pfnStagingResourceMap;
    PFND3D10DDI_RESOURCEUNMAP                               pfnStagingResourceUnmap;
    PFND3D10DDI_SETSHADERRESOURCES                          pfnVsSetShaderResources;
    PFND3D10DDI_SETSAMPLERS                                 pfnVsSetSamplers;
    PFND3D10DDI_SETSHADERRESOURCES                          pfnGsSetShaderResources;
    PFND3D10DDI_SETSAMPLERS                                 pfnGsSetSamplers;
    PFND3D11DDI_SETRENDERTARGETS                            pfnSetRenderTargets;
    PFND3D10DDI_SHADERRESOURCEVIEWREADAFTERWRITEHAZARD      pfnShaderResourceViewReadAfterWriteHazard;
    PFND3D10DDI_RESOURCEREADAFTERWRITEHAZARD                pfnResourceReadAfterWriteHazard;
    PFND3D10DDI_SETBLENDSTATE                               pfnSetBlendState;
    PFND3D10DDI_SETDEPTHSTENCILSTATE                        pfnSetDepthStencilState;
    PFND3D10DDI_SETRASTERIZERSTATE                          pfnSetRasterizerState;
    PFND3D10DDI_QUERYEND                                    pfnQueryEnd;
    PFND3D10DDI_QUERYBEGIN                                  pfnQueryBegin;
    PFND3D10DDI_RESOURCECOPYREGION                          pfnResourceCopyRegion;
    PFND3D10DDI_RESOURCEUPDATESUBRESOURCEUP                 pfnResourceUpdateSubresourceUP;
    PFND3D10DDI_SO_SETTARGETS                               pfnSoSetTargets;
    PFND3D10DDI_DRAWAUTO                                    pfnDrawAuto;
    PFND3D10DDI_SETVIEWPORTS                                pfnSetViewports;
    PFND3D10DDI_SETSCISSORRECTS                             pfnSetScissorRects;
    PFND3D10DDI_CLEARRENDERTARGETVIEW                       pfnClearRenderTargetView;
    PFND3D10DDI_CLEARDEPTHSTENCILVIEW                       pfnClearDepthStencilView;
    PFND3D10DDI_SETPREDICATION                              pfnSetPredication;
    PFND3D10DDI_QUERYGETDATA                                pfnQueryGetData;
    PFND3D10DDI_FLUSH                                       pfnFlush;
    PFND3D10DDI_GENMIPS                                     pfnGenMips;
    PFND3D10DDI_RESOURCECOPY                                pfnResourceCopy;
    PFND3D10DDI_RESOURCERESOLVESUBRESOURCE                  pfnResourceResolveSubresource;
// !!! END MIDDLE-FREQUENCY !!!

// Infrequent paths:
    PFND3D10DDI_RESOURCEMAP                                 pfnResourceMap;
    PFND3D10DDI_RESOURCEUNMAP                               pfnResourceUnmap;
    PFND3D10DDI_RESOURCEISSTAGINGBUSY                       pfnResourceIsStagingBusy;
    PFND3D11DDI_RELOCATEDEVICEFUNCS                         pfnRelocateDeviceFuncs;
    PFND3D11DDI_CALCPRIVATERESOURCESIZE                     pfnCalcPrivateResourceSize;
    PFND3D10DDI_CALCPRIVATEOPENEDRESOURCESIZE               pfnCalcPrivateOpenedResourceSize;
    PFND3D11DDI_CREATERESOURCE                              pfnCreateResource;
    PFND3D10DDI_OPENRESOURCE                                pfnOpenResource;
    PFND3D10DDI_DESTROYRESOURCE                             pfnDestroyResource;
    PFND3D11DDI_CALCPRIVATESHADERRESOURCEVIEWSIZE           pfnCalcPrivateShaderResourceViewSize;
    PFND3D11DDI_CREATESHADERRESOURCEVIEW                    pfnCreateShaderResourceView;
    PFND3D10DDI_DESTROYSHADERRESOURCEVIEW                   pfnDestroyShaderResourceView;
    PFND3D10DDI_CALCPRIVATERENDERTARGETVIEWSIZE             pfnCalcPrivateRenderTargetViewSize;
    PFND3D10DDI_CREATERENDERTARGETVIEW                      pfnCreateRenderTargetView;
    PFND3D10DDI_DESTROYRENDERTARGETVIEW                     pfnDestroyRenderTargetView;
    PFND3D11DDI_CALCPRIVATEDEPTHSTENCILVIEWSIZE             pfnCalcPrivateDepthStencilViewSize;
    PFND3D11DDI_CREATEDEPTHSTENCILVIEW                      pfnCreateDepthStencilView;
    PFND3D10DDI_DESTROYDEPTHSTENCILVIEW                     pfnDestroyDepthStencilView;
    PFND3D10DDI_CALCPRIVATEELEMENTLAYOUTSIZE                pfnCalcPrivateElementLayoutSize;
    PFND3D10DDI_CREATEELEMENTLAYOUT                         pfnCreateElementLayout;
    PFND3D10DDI_DESTROYELEMENTLAYOUT                        pfnDestroyElementLayout;
    PFND3D10_1DDI_CALCPRIVATEBLENDSTATESIZE                 pfnCalcPrivateBlendStateSize;
    PFND3D10_1DDI_CREATEBLENDSTATE                          pfnCreateBlendState;
    PFND3D10DDI_DESTROYBLENDSTATE                           pfnDestroyBlendState;
    PFND3D10DDI_CALCPRIVATEDEPTHSTENCILSTATESIZE            pfnCalcPrivateDepthStencilStateSize;
    PFND3D10DDI_CREATEDEPTHSTENCILSTATE                     pfnCreateDepthStencilState;
    PFND3D10DDI_DESTROYDEPTHSTENCILSTATE                    pfnDestroyDepthStencilState;
    PFND3D10DDI_CALCPRIVATERASTERIZERSTATESIZE              pfnCalcPrivateRasterizerStateSize;
    PFND3D10DDI_CREATERASTERIZERSTATE                       pfnCreateRasterizerState;
    PFND3D10DDI_DESTROYRASTERIZERSTATE                      pfnDestroyRasterizerState;
    PFND3D10DDI_CALCPRIVATESHADERSIZE                       pfnCalcPrivateShaderSize;
    PFND3D10DDI_CREATEVERTEXSHADER                          pfnCreateVertexShader;
    PFND3D10DDI_CREATEGEOMETRYSHADER                        pfnCreateGeometryShader;
    PFND3D10DDI_CREATEPIXELSHADER                           pfnCreatePixelShader;
    PFND3D11DDI_CALCPRIVATEGEOMETRYSHADERWITHSTREAMOUTPUT   pfnCalcPrivateGeometryShaderWithStreamOutput;
    PFND3D11DDI_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT        pfnCreateGeometryShaderWithStreamOutput;
    PFND3D10DDI_DESTROYSHADER                               pfnDestroyShader;
    PFND3D10DDI_CALCPRIVATESAMPLERSIZE                      pfnCalcPrivateSamplerSize;
    PFND3D10DDI_CREATESAMPLER                               pfnCreateSampler;
    PFND3D10DDI_DESTROYSAMPLER                              pfnDestroySampler;
    PFND3D10DDI_CALCPRIVATEQUERYSIZE                        pfnCalcPrivateQuerySize;
    PFND3D10DDI_CREATEQUERY                                 pfnCreateQuery;
    PFND3D10DDI_DESTROYQUERY                                pfnDestroyQuery;

    PFND3D10DDI_CHECKFORMATSUPPORT                          pfnCheckFormatSupport;
    PFND3D10DDI_CHECKMULTISAMPLEQUALITYLEVELS               pfnCheckMultisampleQualityLevels;
    PFND3D10DDI_CHECKCOUNTERINFO                            pfnCheckCounterInfo;
    PFND3D10DDI_CHECKCOUNTER                                pfnCheckCounter;

    PFND3D10DDI_DESTROYDEVICE                               pfnDestroyDevice;
    PFND3D10DDI_SETTEXTFILTERSIZE                           pfnSetTextFilterSize;

    // Start additional 10.1 entries:
    PFND3D10DDI_RESOURCECOPY                                pfnResourceConvert;
    PFND3D10DDI_RESOURCECOPYREGION                          pfnResourceConvertRegion;

#ifdef D3D10PSGP
    // Rasterization-only specific:
    PFND3D10DDI_RESETPRIMITIVEID                            pfnResetPrimitiveID;
    PFND3D10DDI_SETVERTEXPIPELINEOUTPUT                     pfnSetVertexPipelineOutput;
#endif // D3D10PSGP

    // Start additional 11.0 entries:
    PFND3D11DDI_DRAWINDEXEDINSTANCEDINDIRECT                pfnDrawIndexedInstancedIndirect;
    PFND3D11DDI_DRAWINSTANCEDINDIRECT                       pfnDrawInstancedIndirect;
    PFND3D11DDI_COMMANDLISTEXECUTE                          pfnCommandListExecute; // Only required when supporting D3D11DDICAPS_COMMANDLISTS
    PFND3D10DDI_SETSHADERRESOURCES                          pfnHsSetShaderResources;
    PFND3D10DDI_SETSHADER                                   pfnHsSetShader;
    PFND3D10DDI_SETSAMPLERS                                 pfnHsSetSamplers;
    PFND3D10DDI_SETCONSTANTBUFFERS                          pfnHsSetConstantBuffers;
    PFND3D10DDI_SETSHADERRESOURCES                          pfnDsSetShaderResources;
    PFND3D10DDI_SETSHADER                                   pfnDsSetShader;
    PFND3D10DDI_SETSAMPLERS                                 pfnDsSetSamplers;
    PFND3D10DDI_SETCONSTANTBUFFERS                          pfnDsSetConstantBuffers;
    PFND3D11DDI_CREATEHULLSHADER                            pfnCreateHullShader;
    PFND3D11DDI_CREATEDOMAINSHADER                          pfnCreateDomainShader;
    PFND3D11DDI_CHECKDEFERREDCONTEXTHANDLESIZES             pfnCheckDeferredContextHandleSizes; // Only required when supporting D3D11DDICAPS_COMMANDLISTS*
    PFND3D11DDI_CALCDEFERREDCONTEXTHANDLESIZE               pfnCalcDeferredContextHandleSize; // Only required when supporting D3D11DDICAPS_COMMANDLISTS*
    PFND3D11DDI_CALCPRIVATEDEFERREDCONTEXTSIZE              pfnCalcPrivateDeferredContextSize; // Only required when supporting D3D11DDICAPS_COMMANDLISTS*
    PFND3D11DDI_CREATEDEFERREDCONTEXT                       pfnCreateDeferredContext; // Only required when supporting D3D11DDICAPS_COMMANDLISTS*
    PFND3D11DDI_ABANDONCOMMANDLIST                          pfnAbandonCommandList; // Only required when supporting D3D11DDICAPS_COMMANDLISTS*
    PFND3D11DDI_CALCPRIVATECOMMANDLISTSIZE                  pfnCalcPrivateCommandListSize; // Only required when supporting D3D11DDICAPS_COMMANDLISTS*
    PFND3D11DDI_CREATECOMMANDLIST                           pfnCreateCommandList; // Only required when supporting D3D11DDICAPS_COMMANDLISTS*
    PFND3D11DDI_DESTROYCOMMANDLIST                          pfnDestroyCommandList; // Only required when supporting D3D11DDICAPS_COMMANDLISTS*
    PFND3D11DDI_CALCPRIVATETESSELLATIONSHADERSIZE           pfnCalcPrivateTessellationShaderSize;
    PFND3D11DDI_SETSHADER_WITH_IFACES                       pfnPsSetShaderWithIfaces;
    PFND3D11DDI_SETSHADER_WITH_IFACES                       pfnVsSetShaderWithIfaces;
    PFND3D11DDI_SETSHADER_WITH_IFACES                       pfnGsSetShaderWithIfaces;
    PFND3D11DDI_SETSHADER_WITH_IFACES                       pfnHsSetShaderWithIfaces;
    PFND3D11DDI_SETSHADER_WITH_IFACES                       pfnDsSetShaderWithIfaces;
    PFND3D11DDI_SETSHADER_WITH_IFACES                       pfnCsSetShaderWithIfaces;
    PFND3D11DDI_CREATECOMPUTESHADER                         pfnCreateComputeShader;
    PFND3D10DDI_SETSHADER                                   pfnCsSetShader;
    PFND3D10DDI_SETSHADERRESOURCES                          pfnCsSetShaderResources;
    PFND3D10DDI_SETSAMPLERS                                 pfnCsSetSamplers;
    PFND3D10DDI_SETCONSTANTBUFFERS                          pfnCsSetConstantBuffers;
    PFND3D11DDI_CALCPRIVATEUNORDEREDACCESSVIEWSIZE          pfnCalcPrivateUnorderedAccessViewSize;
    PFND3D11DDI_CREATEUNORDEREDACCESSVIEW                   pfnCreateUnorderedAccessView;
    PFND3D11DDI_DESTROYUNORDEREDACCESSVIEW                  pfnDestroyUnorderedAccessView;
    PFND3D11DDI_CLEARUNORDEREDACCESSVIEWUINT                pfnClearUnorderedAccessViewUint;
    PFND3D11DDI_CLEARUNORDEREDACCESSVIEWFLOAT               pfnClearUnorderedAccessViewFloat;
    PFND3D11DDI_SETUNORDEREDACCESSVIEWS                     pfnCsSetUnorderedAccessViews;
    PFND3D11DDI_DISPATCH                                    pfnDispatch;
    PFND3D11DDI_DISPATCHINDIRECT                            pfnDispatchIndirect;
    PFND3D11DDI_SETRESOURCEMINLOD                           pfnSetResourceMinLOD;
    PFND3D11DDI_COPYSTRUCTURECOUNT                          pfnCopyStructureCount;
    // Follow function entries were introduced D3D11_0_*DDI_BUILD_VERSION == 2, i.e. don't attempt to write to them with earlier build verisons:
    PFND3D11DDI_RECYCLECOMMANDLIST                          pfnRecycleCommandList; // Only required on DC when supporting D3D11DDICAPS_COMMANDLISTS_BUILD_2
    PFND3D11DDI_RECYCLECREATECOMMANDLIST                    pfnRecycleCreateCommandList; // Only required when supporting D3D11DDICAPS_COMMANDLISTS_BUILD_2
    PFND3D11DDI_RECYCLECREATEDEFERREDCONTEXT                pfnRecycleCreateDeferredContext; // Only required when supporting D3D11DDICAPS_COMMANDLISTS_BUILD_2
    PFND3D11DDI_DESTROYCOMMANDLIST                          pfnRecycleDestroyCommandList; // Only required when supporting D3D11DDICAPS_COMMANDLISTS_BUILD_2

} D3D11DDI_DEVICEFUNCS;

#endif // D3D11DDI_MINOR_HEADER_VERSION

#if D3D11DDI_MINOR_HEADER_VERSION >= 3
//----------------------------------------------------------------------------------------------------------------------------------
// D3D11.1 DDI
//

// The idea here is that if the driver doesn't recognize a newly added flag, the driver will conservatively flush.
// Therefore new flags should introduce new opportunities for the driver to prevent flushing.
typedef enum D3D11_1_DDI_FLUSH_FLAGS
{
    D3D11_1DDI_FLUSH_UNLESS_NO_COMMANDS = 0x00000001,
#if D3D11DDI_MINOR_HEADER_VERSION >= 4
    D3DWDDM1_3DDI_TRIM_MEMORY           = 0x00000002,
#endif
} D3D11_1_DDI_FLUSH_FLAGS;

typedef enum D3D11_1_DDI_LOGIC_OP
{
                                   // Operation:
                                   // (s == PS output, d = RTV contents)
    D3D11_1_DDI_LOGIC_OP_CLEAR = 0,      // 0
    D3D11_1_DDI_LOGIC_OP_SET,            // 1
    D3D11_1_DDI_LOGIC_OP_COPY,           // s
    D3D11_1_DDI_LOGIC_OP_COPY_INVERTED,  // ~s
    D3D11_1_DDI_LOGIC_OP_NOOP,           // d
    D3D11_1_DDI_LOGIC_OP_INVERT,         // ~d
    D3D11_1_DDI_LOGIC_OP_AND,            // s & d
    D3D11_1_DDI_LOGIC_OP_NAND,           // ~(s & d)
    D3D11_1_DDI_LOGIC_OP_OR,             // s | d
    D3D11_1_DDI_LOGIC_OP_NOR,            // ~(s | d)
    D3D11_1_DDI_LOGIC_OP_XOR,            // s ^ d
    D3D11_1_DDI_LOGIC_OP_EQUIV,          // ~(s ^ d)
    D3D11_1_DDI_LOGIC_OP_AND_REVERSE,    // s & ~d
    D3D11_1_DDI_LOGIC_OP_AND_INVERTED,   // ~s & d
    D3D11_1_DDI_LOGIC_OP_OR_REVERSE,     // s | ~d
    D3D11_1_DDI_LOGIC_OP_OR_INVERTED,    // ~s | d
} D3D11_1_DDI_LOGIC_OP;

typedef struct D3D11_1_DDI_RENDER_TARGET_BLEND_DESC
{
    BOOL BlendEnable;
    BOOL LogicOpEnable; // LogicOpEnable and BlendEnable can't both be true
    D3D10_DDI_BLEND SrcBlend;
    D3D10_DDI_BLEND DestBlend;
    D3D10_DDI_BLEND_OP BlendOp;
    D3D10_DDI_BLEND SrcBlendAlpha;
    D3D10_DDI_BLEND DestBlendAlpha;
    D3D10_DDI_BLEND_OP BlendOpAlpha;
    D3D11_1_DDI_LOGIC_OP LogicOp;
    UINT8 RenderTargetWriteMask; // D3D10_DDI_COLOR_WRITE_ENABLE
} D3D11_1_DDI_RENDER_TARGET_BLEND_DESC;

typedef struct D3D11_1_DDI_BLEND_DESC
{
    BOOL AlphaToCoverageEnable; // relevant to multisample antialiasing only
    BOOL IndependentBlendEnable; // if FALSE, then first entry in RenderTarget array is replicated to other entries
    D3D11_1_DDI_RENDER_TARGET_BLEND_DESC RenderTarget[D3D10_DDI_SIMULTANEOUS_RENDER_TARGET_COUNT];
} D3D11_1_DDI_BLEND_DESC;

typedef struct D3D11_1_DDI_RASTERIZER_DESC
{
    D3D10_DDI_FILL_MODE FillMode;
    D3D10_DDI_CULL_MODE CullMode;
    BOOL FrontCounterClockwise;
    INT DepthBias;
    FLOAT DepthBiasClamp;
    FLOAT SlopeScaledDepthBias;
    BOOL DepthClipEnable;
    BOOL ScissorEnable;
    BOOL MultisampleEnable;
    BOOL AntialiasedLineEnable;
    UINT ForcedSampleCount;
} D3D11_1_DDI_RASTERIZER_DESC;

typedef enum D3D11_1_DDI_COPY_FLAGS
{
    D3D11_1DDI_COPY_NO_OVERWRITE = 0x00000001,
    D3D11_1DDI_COPY_DISCARD      = 0x00000002,
    D3D11_1DDI_COPY_TILEABLE     = 0x00000004,
} D3D11_1_DDI_COPY_FLAGS;

typedef struct D3D11_1DDIARG_SIGNATURE_ENTRY
{
    D3D10_SB_NAME SystemValue; // D3D10_SB_NAME_UNDEFINED if the particular entry doesn't have a system name.
    UINT Register;
    BYTE Mask;// (D3D10_SB_OPERAND_4_COMPONENT_MASK >> 4), meaning 4 LSBs are xyzw respectively
    D3D10_SB_REGISTER_COMPONENT_TYPE RegisterComponentType;
    D3D11_SB_OPERAND_MIN_PRECISION   MinPrecision;
} D3D11_1DDIARG_SIGNATURE_ENTRY;

typedef struct D3D11_1DDIARG_STAGE_IO_SIGNATURES
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
    D3D11_1DDIARG_SIGNATURE_ENTRY*  pInputSignature;
    UINT                            NumInputSignatureEntries;
    D3D11_1DDIARG_SIGNATURE_ENTRY*  pOutputSignature;
    UINT                            NumOutputSignatureEntries;
} D3D11_1DDIARG_STAGE_IO_SIGNATURES;

typedef struct D3D11_1DDIARG_TESSELLATION_IO_SIGNATURES
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
    D3D11_1DDIARG_SIGNATURE_ENTRY*  pInputSignature;
    UINT                            NumInputSignatureEntries;
    D3D11_1DDIARG_SIGNATURE_ENTRY*   pOutputSignature;
    UINT                            NumOutputSignatureEntries;
    D3D11_1DDIARG_SIGNATURE_ENTRY*  pPatchConstantSignature;
    UINT                            NumPatchConstantSignatureEntries;
} D3D11_1DDIARG_TESSELLATION_IO_SIGNATURES;

typedef enum D3D11_1_DDI_CHECK_DIRECT_FLIP_FLAGS
{
    D3D11_1DDI_CHECK_DIRECT_FLIP_IMMEDIATE = 0x00000001,
} D3D11_1_DDI_CHECK_DIRECT_FLIP_FLAGS;

//----------------------------------------------------------------------------------------------------------------------------------
// User mode DDI device function definitions 11.1
//
typedef BOOL ( APIENTRY* PFND3D11_1DDI_FLUSH )(
    D3D10DDI_HDEVICE, UINT /*D3D11_1_DDI_FLUSH_FLAGS*/ FlushFlags );
typedef VOID ( APIENTRY* PFND3D11_1DDI_RELOCATEDEVICEFUNCS )(
    D3D10DDI_HDEVICE, _In_ struct D3D11_1DDI_DEVICEFUNCS* );
typedef SIZE_T ( APIENTRY* PFND3D11_1DDI_CALCPRIVATEBLENDSTATESIZE )(
    D3D10DDI_HDEVICE, _In_ CONST D3D11_1_DDI_BLEND_DESC* );
typedef VOID ( APIENTRY* PFND3D11_1DDI_CREATEBLENDSTATE )(
    D3D10DDI_HDEVICE, _In_ CONST D3D11_1_DDI_BLEND_DESC*, D3D10DDI_HBLENDSTATE, D3D10DDI_HRTBLENDSTATE );
typedef SIZE_T ( APIENTRY* PFND3D11_1DDI_CALCPRIVATERASTERIZERSTATESIZE )(
    D3D10DDI_HDEVICE, _In_ CONST D3D11_1_DDI_RASTERIZER_DESC* );
typedef VOID ( APIENTRY* PFND3D11_1DDI_CREATERASTERIZERSTATE )(
    D3D10DDI_HDEVICE, _In_ CONST D3D11_1_DDI_RASTERIZER_DESC*, D3D10DDI_HRASTERIZERSTATE, D3D10DDI_HRTRASTERIZERSTATE );
typedef VOID ( APIENTRY* PFND3D11_1DDI_RESOURCECOPYREGION )(
    D3D10DDI_HDEVICE, D3D10DDI_HRESOURCE, UINT, UINT, UINT, UINT, D3D10DDI_HRESOURCE, UINT, _In_opt_ CONST D3D10_DDI_BOX*, UINT CopyFlags );
typedef VOID ( APIENTRY* PFND3D11_1DDI_RESOURCEUPDATESUBRESOURCEUP )(
    D3D10DDI_HDEVICE, D3D10DDI_HRESOURCE, UINT, _In_opt_ CONST D3D10_DDI_BOX*, _In_ CONST VOID*, UINT, UINT, UINT CopyFlags );
typedef VOID ( APIENTRY* PFND3D11_1DDI_SETCONSTANTBUFFERS )(
    D3D10DDI_HDEVICE, UINT, UINT NumBuffers, _In_reads_(NumBuffers) CONST D3D10DDI_HRESOURCE*,
    _In_reads_opt_(NumBuffers) CONST UINT* pFirstConstant,_In_reads_opt_(NumBuffers) CONST UINT* pNumConstants );
typedef VOID ( APIENTRY* PFND3D11_1DDI_DISCARD )(
    D3D10DDI_HDEVICE, D3D11DDI_HANDLETYPE HandleType, VOID* hResourceOrView, _In_reads_opt_(NumRects) CONST D3D10_DDI_RECT*, UINT NumRects );
typedef VOID ( APIENTRY* PFND3D11_1DDI_ASSIGNDEBUGBINARY )(
    D3D10DDI_HDEVICE, D3D10DDI_HSHADER,
    UINT uBinarySize, _In_reads_bytes_(uBinarySize) CONST VOID* pBinary);

typedef SIZE_T ( APIENTRY* PFND3D11_1DDI_CALCPRIVATESHADERSIZE )(
    D3D10DDI_HDEVICE, _In_reads_(pShaderCode[1]) CONST UINT* pShaderCode, _In_ CONST D3D11_1DDIARG_STAGE_IO_SIGNATURES* );
typedef VOID ( APIENTRY* PFND3D11_1DDI_CREATEVERTEXSHADER )(
    D3D10DDI_HDEVICE, _In_reads_(pShaderCode[1]) CONST UINT* pShaderCode, D3D10DDI_HSHADER, D3D10DDI_HRTSHADER, _In_ CONST D3D11_1DDIARG_STAGE_IO_SIGNATURES* );
typedef VOID ( APIENTRY* PFND3D11_1DDI_CREATEGEOMETRYSHADER )(
    D3D10DDI_HDEVICE, _In_reads_(pShaderCode[1]) CONST UINT* pShaderCode, D3D10DDI_HSHADER, D3D10DDI_HRTSHADER, _In_ CONST D3D11_1DDIARG_STAGE_IO_SIGNATURES* );
typedef VOID ( APIENTRY* PFND3D11_1DDI_CREATEPIXELSHADER )(
    D3D10DDI_HDEVICE, _In_reads_(pShaderCode[1]) CONST UINT* pShaderCode, D3D10DDI_HSHADER, D3D10DDI_HRTSHADER, _In_ CONST D3D11_1DDIARG_STAGE_IO_SIGNATURES* );
typedef SIZE_T ( APIENTRY* PFND3D11_1DDI_CALCPRIVATEGEOMETRYSHADERWITHSTREAMOUTPUT )(
    D3D10DDI_HDEVICE, _In_ CONST D3D11DDIARG_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT*, _In_ CONST D3D11_1DDIARG_STAGE_IO_SIGNATURES* );
typedef VOID ( APIENTRY* PFND3D11_1DDI_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT )(
    D3D10DDI_HDEVICE, _In_ CONST D3D11DDIARG_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT*, D3D10DDI_HSHADER, D3D10DDI_HRTSHADER, _In_ CONST D3D11_1DDIARG_STAGE_IO_SIGNATURES* );
typedef SIZE_T ( APIENTRY* PFND3D11_1DDI_CALCPRIVATETESSELLATIONSHADERSIZE )(
    D3D10DDI_HDEVICE, _In_reads_(pShaderCode[1]) CONST UINT* pShaderCode, _In_ CONST D3D11_1DDIARG_TESSELLATION_IO_SIGNATURES* );
typedef VOID ( APIENTRY* PFND3D11_1DDI_CREATEHULLSHADER )(
    D3D10DDI_HDEVICE, _In_reads_(pShaderCode[1]) CONST UINT* pShaderCode, D3D10DDI_HSHADER, D3D10DDI_HRTSHADER, _In_ CONST D3D11_1DDIARG_TESSELLATION_IO_SIGNATURES* );
typedef VOID ( APIENTRY* PFND3D11_1DDI_CREATEDOMAINSHADER )(
    D3D10DDI_HDEVICE, _In_reads_(pShaderCode[1]) CONST UINT* pShaderCode, D3D10DDI_HSHADER, D3D10DDI_HRTSHADER, _In_ CONST D3D11_1DDIARG_TESSELLATION_IO_SIGNATURES* );
typedef VOID ( APIENTRY* PFND3D11_1DDI_CHECKDIRECTFLIPSUPPORT )(
    D3D10DDI_HDEVICE, D3D10DDI_HRESOURCE, D3D10DDI_HRESOURCE, UINT CheckDirectFlipFlags, _Out_ BOOL* pSupported );

typedef VOID ( APIENTRY* PFND3D11_1DDI_CLEARVIEW )(
    D3D10DDI_HDEVICE hDevice, D3D11DDI_HANDLETYPE viewType, VOID* hView, CONST FLOAT Color[4], _In_reads_opt_(NumRects) CONST D3D10_DDI_RECT* pRect, UINT NumRects );


//----------------------------------------------------------------------------------------------------------------------------------
// User mode device function table 11.1
//
typedef struct D3D11_1DDI_DEVICEFUNCS
{
// Order of functions is in decreasing order of priority ( as far as performance is concerned ).
// !!! BEGIN HIGH-FREQUENCY !!!
    PFND3D11_1DDI_RESOURCEUPDATESUBRESOURCEUP               pfnDefaultConstantBufferUpdateSubresourceUP;
    PFND3D11_1DDI_SETCONSTANTBUFFERS                        pfnVsSetConstantBuffers;
    PFND3D10DDI_SETSHADERRESOURCES                          pfnPsSetShaderResources;
    PFND3D10DDI_SETSHADER                                   pfnPsSetShader;
    PFND3D10DDI_SETSAMPLERS                                 pfnPsSetSamplers;
    PFND3D10DDI_SETSHADER                                   pfnVsSetShader;
    PFND3D10DDI_DRAWINDEXED                                 pfnDrawIndexed;
    PFND3D10DDI_DRAW                                        pfnDraw;
    PFND3D10DDI_RESOURCEMAP                                 pfnDynamicIABufferMapNoOverwrite;
    PFND3D10DDI_RESOURCEUNMAP                               pfnDynamicIABufferUnmap;
    PFND3D10DDI_RESOURCEMAP                                 pfnDynamicConstantBufferMapDiscard;
    PFND3D10DDI_RESOURCEMAP                                 pfnDynamicIABufferMapDiscard;
    PFND3D10DDI_RESOURCEUNMAP                               pfnDynamicConstantBufferUnmap;
    PFND3D11_1DDI_SETCONSTANTBUFFERS                        pfnPsSetConstantBuffers;
    PFND3D10DDI_SETINPUTLAYOUT                              pfnIaSetInputLayout;
    PFND3D10DDI_IA_SETVERTEXBUFFERS                         pfnIaSetVertexBuffers;
    PFND3D10DDI_IA_SETINDEXBUFFER                           pfnIaSetIndexBuffer;
// !!! END HIGH-FREQUENCY !!!

// Order of functions is in decreasing order of priority ( as far as performance is concerned ).
// !!! BEGIN MIDDLE-FREQUENCY !!!
    PFND3D10DDI_DRAWINDEXEDINSTANCED                        pfnDrawIndexedInstanced;
    PFND3D10DDI_DRAWINSTANCED                               pfnDrawInstanced;
    PFND3D10DDI_RESOURCEMAP                                 pfnDynamicResourceMapDiscard;
    PFND3D10DDI_RESOURCEUNMAP                               pfnDynamicResourceUnmap;
    PFND3D11_1DDI_SETCONSTANTBUFFERS                        pfnGsSetConstantBuffers;
    PFND3D10DDI_SETSHADER                                   pfnGsSetShader;
    PFND3D10DDI_IA_SETTOPOLOGY                              pfnIaSetTopology;
    PFND3D10DDI_RESOURCEMAP                                 pfnStagingResourceMap;
    PFND3D10DDI_RESOURCEUNMAP                               pfnStagingResourceUnmap;
    PFND3D10DDI_SETSHADERRESOURCES                          pfnVsSetShaderResources;
    PFND3D10DDI_SETSAMPLERS                                 pfnVsSetSamplers;
    PFND3D10DDI_SETSHADERRESOURCES                          pfnGsSetShaderResources;
    PFND3D10DDI_SETSAMPLERS                                 pfnGsSetSamplers;
    PFND3D11DDI_SETRENDERTARGETS                            pfnSetRenderTargets;
    PFND3D10DDI_SHADERRESOURCEVIEWREADAFTERWRITEHAZARD      pfnShaderResourceViewReadAfterWriteHazard;
    PFND3D10DDI_RESOURCEREADAFTERWRITEHAZARD                pfnResourceReadAfterWriteHazard;
    PFND3D10DDI_SETBLENDSTATE                               pfnSetBlendState;
    PFND3D10DDI_SETDEPTHSTENCILSTATE                        pfnSetDepthStencilState;
    PFND3D10DDI_SETRASTERIZERSTATE                          pfnSetRasterizerState;
    PFND3D10DDI_QUERYEND                                    pfnQueryEnd;
    PFND3D10DDI_QUERYBEGIN                                  pfnQueryBegin;
    PFND3D11_1DDI_RESOURCECOPYREGION                        pfnResourceCopyRegion;
    PFND3D11_1DDI_RESOURCEUPDATESUBRESOURCEUP               pfnResourceUpdateSubresourceUP;
    PFND3D10DDI_SO_SETTARGETS                               pfnSoSetTargets;
    PFND3D10DDI_DRAWAUTO                                    pfnDrawAuto;
    PFND3D10DDI_SETVIEWPORTS                                pfnSetViewports;
    PFND3D10DDI_SETSCISSORRECTS                             pfnSetScissorRects;
    PFND3D10DDI_CLEARRENDERTARGETVIEW                       pfnClearRenderTargetView;
    PFND3D10DDI_CLEARDEPTHSTENCILVIEW                       pfnClearDepthStencilView;
    PFND3D10DDI_SETPREDICATION                              pfnSetPredication;
    PFND3D10DDI_QUERYGETDATA                                pfnQueryGetData;
    PFND3D11_1DDI_FLUSH                                     pfnFlush;
    PFND3D10DDI_GENMIPS                                     pfnGenMips;
    PFND3D10DDI_RESOURCECOPY                                pfnResourceCopy;
    PFND3D10DDI_RESOURCERESOLVESUBRESOURCE                  pfnResourceResolveSubresource;
// !!! END MIDDLE-FREQUENCY !!!

// Infrequent paths:
    PFND3D10DDI_RESOURCEMAP                                 pfnResourceMap;
    PFND3D10DDI_RESOURCEUNMAP                               pfnResourceUnmap;
    PFND3D10DDI_RESOURCEISSTAGINGBUSY                       pfnResourceIsStagingBusy;
    PFND3D11_1DDI_RELOCATEDEVICEFUNCS                       pfnRelocateDeviceFuncs;
    PFND3D11DDI_CALCPRIVATERESOURCESIZE                     pfnCalcPrivateResourceSize;
    PFND3D10DDI_CALCPRIVATEOPENEDRESOURCESIZE               pfnCalcPrivateOpenedResourceSize;
    PFND3D11DDI_CREATERESOURCE                              pfnCreateResource;
    PFND3D10DDI_OPENRESOURCE                                pfnOpenResource;
    PFND3D10DDI_DESTROYRESOURCE                             pfnDestroyResource;
    PFND3D11DDI_CALCPRIVATESHADERRESOURCEVIEWSIZE           pfnCalcPrivateShaderResourceViewSize;
    PFND3D11DDI_CREATESHADERRESOURCEVIEW                    pfnCreateShaderResourceView;
    PFND3D10DDI_DESTROYSHADERRESOURCEVIEW                   pfnDestroyShaderResourceView;
    PFND3D10DDI_CALCPRIVATERENDERTARGETVIEWSIZE             pfnCalcPrivateRenderTargetViewSize;
    PFND3D10DDI_CREATERENDERTARGETVIEW                      pfnCreateRenderTargetView;
    PFND3D10DDI_DESTROYRENDERTARGETVIEW                     pfnDestroyRenderTargetView;
    PFND3D11DDI_CALCPRIVATEDEPTHSTENCILVIEWSIZE             pfnCalcPrivateDepthStencilViewSize;
    PFND3D11DDI_CREATEDEPTHSTENCILVIEW                      pfnCreateDepthStencilView;
    PFND3D10DDI_DESTROYDEPTHSTENCILVIEW                     pfnDestroyDepthStencilView;
    PFND3D10DDI_CALCPRIVATEELEMENTLAYOUTSIZE                pfnCalcPrivateElementLayoutSize;
    PFND3D10DDI_CREATEELEMENTLAYOUT                         pfnCreateElementLayout;
    PFND3D10DDI_DESTROYELEMENTLAYOUT                        pfnDestroyElementLayout;
    PFND3D11_1DDI_CALCPRIVATEBLENDSTATESIZE                 pfnCalcPrivateBlendStateSize;
    PFND3D11_1DDI_CREATEBLENDSTATE                          pfnCreateBlendState;
    PFND3D10DDI_DESTROYBLENDSTATE                           pfnDestroyBlendState;
    PFND3D10DDI_CALCPRIVATEDEPTHSTENCILSTATESIZE            pfnCalcPrivateDepthStencilStateSize;
    PFND3D10DDI_CREATEDEPTHSTENCILSTATE                     pfnCreateDepthStencilState;
    PFND3D10DDI_DESTROYDEPTHSTENCILSTATE                    pfnDestroyDepthStencilState;
    PFND3D11_1DDI_CALCPRIVATERASTERIZERSTATESIZE            pfnCalcPrivateRasterizerStateSize;
    PFND3D11_1DDI_CREATERASTERIZERSTATE                     pfnCreateRasterizerState;
    PFND3D10DDI_DESTROYRASTERIZERSTATE                      pfnDestroyRasterizerState;
    PFND3D11_1DDI_CALCPRIVATESHADERSIZE                     pfnCalcPrivateShaderSize;
    PFND3D11_1DDI_CREATEVERTEXSHADER                        pfnCreateVertexShader;
    PFND3D11_1DDI_CREATEGEOMETRYSHADER                      pfnCreateGeometryShader;
    PFND3D11_1DDI_CREATEPIXELSHADER                         pfnCreatePixelShader;
    PFND3D11_1DDI_CALCPRIVATEGEOMETRYSHADERWITHSTREAMOUTPUT pfnCalcPrivateGeometryShaderWithStreamOutput;
    PFND3D11_1DDI_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT      pfnCreateGeometryShaderWithStreamOutput;
    PFND3D10DDI_DESTROYSHADER                               pfnDestroyShader;
    PFND3D10DDI_CALCPRIVATESAMPLERSIZE                      pfnCalcPrivateSamplerSize;
    PFND3D10DDI_CREATESAMPLER                               pfnCreateSampler;
    PFND3D10DDI_DESTROYSAMPLER                              pfnDestroySampler;
    PFND3D10DDI_CALCPRIVATEQUERYSIZE                        pfnCalcPrivateQuerySize;
    PFND3D10DDI_CREATEQUERY                                 pfnCreateQuery;
    PFND3D10DDI_DESTROYQUERY                                pfnDestroyQuery;

    PFND3D10DDI_CHECKFORMATSUPPORT                          pfnCheckFormatSupport;
    PFND3D10DDI_CHECKMULTISAMPLEQUALITYLEVELS               pfnCheckMultisampleQualityLevels;
    PFND3D10DDI_CHECKCOUNTERINFO                            pfnCheckCounterInfo;
    PFND3D10DDI_CHECKCOUNTER                                pfnCheckCounter;

    PFND3D10DDI_DESTROYDEVICE                               pfnDestroyDevice;
    PFND3D10DDI_SETTEXTFILTERSIZE                           pfnSetTextFilterSize;

    // Start additional 10.1 entries:
    PFND3D10DDI_RESOURCECOPY                                pfnResourceConvert;
    PFND3D11_1DDI_RESOURCECOPYREGION                        pfnResourceConvertRegion;

#ifdef D3D10PSGP
    // Rasterization-only specific:
    PFND3D10DDI_RESETPRIMITIVEID                            pfnResetPrimitiveID;
    PFND3D10DDI_SETVERTEXPIPELINEOUTPUT                     pfnSetVertexPipelineOutput;
#endif // D3D10PSGP

    // Start additional 11.0 entries:
    PFND3D11DDI_DRAWINDEXEDINSTANCEDINDIRECT                pfnDrawIndexedInstancedIndirect;
    PFND3D11DDI_DRAWINSTANCEDINDIRECT                       pfnDrawInstancedIndirect;
    PFND3D11DDI_COMMANDLISTEXECUTE                          pfnCommandListExecute; // Only required when supporting D3D11DDICAPS_COMMANDLISTS
    PFND3D10DDI_SETSHADERRESOURCES                          pfnHsSetShaderResources;
    PFND3D10DDI_SETSHADER                                   pfnHsSetShader;
    PFND3D10DDI_SETSAMPLERS                                 pfnHsSetSamplers;
    PFND3D11_1DDI_SETCONSTANTBUFFERS                        pfnHsSetConstantBuffers;
    PFND3D10DDI_SETSHADERRESOURCES                          pfnDsSetShaderResources;
    PFND3D10DDI_SETSHADER                                   pfnDsSetShader;
    PFND3D10DDI_SETSAMPLERS                                 pfnDsSetSamplers;
    PFND3D11_1DDI_SETCONSTANTBUFFERS                        pfnDsSetConstantBuffers;
    PFND3D11_1DDI_CREATEHULLSHADER                          pfnCreateHullShader;
    PFND3D11_1DDI_CREATEDOMAINSHADER                        pfnCreateDomainShader;
    PFND3D11DDI_CHECKDEFERREDCONTEXTHANDLESIZES             pfnCheckDeferredContextHandleSizes; // Only required when supporting D3D11DDICAPS_COMMANDLISTS*
    PFND3D11DDI_CALCDEFERREDCONTEXTHANDLESIZE               pfnCalcDeferredContextHandleSize; // Only required when supporting D3D11DDICAPS_COMMANDLISTS*
    PFND3D11DDI_CALCPRIVATEDEFERREDCONTEXTSIZE              pfnCalcPrivateDeferredContextSize; // Only required when supporting D3D11DDICAPS_COMMANDLISTS*
    PFND3D11DDI_CREATEDEFERREDCONTEXT                       pfnCreateDeferredContext; // Only required when supporting D3D11DDICAPS_COMMANDLISTS*
    PFND3D11DDI_ABANDONCOMMANDLIST                          pfnAbandonCommandList; // Only required when supporting D3D11DDICAPS_COMMANDLISTS*
    PFND3D11DDI_CALCPRIVATECOMMANDLISTSIZE                  pfnCalcPrivateCommandListSize; // Only required when supporting D3D11DDICAPS_COMMANDLISTS*
    PFND3D11DDI_CREATECOMMANDLIST                           pfnCreateCommandList; // Only required when supporting D3D11DDICAPS_COMMANDLISTS*
    PFND3D11DDI_DESTROYCOMMANDLIST                          pfnDestroyCommandList; // Only required when supporting D3D11DDICAPS_COMMANDLISTS*
    PFND3D11_1DDI_CALCPRIVATETESSELLATIONSHADERSIZE         pfnCalcPrivateTessellationShaderSize;
    PFND3D11DDI_SETSHADER_WITH_IFACES                       pfnPsSetShaderWithIfaces;
    PFND3D11DDI_SETSHADER_WITH_IFACES                       pfnVsSetShaderWithIfaces;
    PFND3D11DDI_SETSHADER_WITH_IFACES                       pfnGsSetShaderWithIfaces;
    PFND3D11DDI_SETSHADER_WITH_IFACES                       pfnHsSetShaderWithIfaces;
    PFND3D11DDI_SETSHADER_WITH_IFACES                       pfnDsSetShaderWithIfaces;
    PFND3D11DDI_SETSHADER_WITH_IFACES                       pfnCsSetShaderWithIfaces;
    PFND3D11DDI_CREATECOMPUTESHADER                         pfnCreateComputeShader;
    PFND3D10DDI_SETSHADER                                   pfnCsSetShader;
    PFND3D10DDI_SETSHADERRESOURCES                          pfnCsSetShaderResources;
    PFND3D10DDI_SETSAMPLERS                                 pfnCsSetSamplers;
    PFND3D11_1DDI_SETCONSTANTBUFFERS                        pfnCsSetConstantBuffers;
    PFND3D11DDI_CALCPRIVATEUNORDEREDACCESSVIEWSIZE          pfnCalcPrivateUnorderedAccessViewSize;
    PFND3D11DDI_CREATEUNORDEREDACCESSVIEW                   pfnCreateUnorderedAccessView;
    PFND3D11DDI_DESTROYUNORDEREDACCESSVIEW                  pfnDestroyUnorderedAccessView;
    PFND3D11DDI_CLEARUNORDEREDACCESSVIEWUINT                pfnClearUnorderedAccessViewUint;
    PFND3D11DDI_CLEARUNORDEREDACCESSVIEWFLOAT               pfnClearUnorderedAccessViewFloat;
    PFND3D11DDI_SETUNORDEREDACCESSVIEWS                     pfnCsSetUnorderedAccessViews;
    PFND3D11DDI_DISPATCH                                    pfnDispatch;
    PFND3D11DDI_DISPATCHINDIRECT                            pfnDispatchIndirect;
    PFND3D11DDI_SETRESOURCEMINLOD                           pfnSetResourceMinLOD;
    PFND3D11DDI_COPYSTRUCTURECOUNT                          pfnCopyStructureCount;
    PFND3D11DDI_RECYCLECOMMANDLIST                          pfnRecycleCommandList;
    PFND3D11DDI_RECYCLECREATECOMMANDLIST                    pfnRecycleCreateCommandList;
    PFND3D11DDI_RECYCLECREATEDEFERREDCONTEXT                pfnRecycleCreateDeferredContext;
    PFND3D11DDI_DESTROYCOMMANDLIST                          pfnRecycleDestroyCommandList;

    // Start additional 11.1 entries
    // (note some functions above also have different signatures 11.1 vs. 11.0)

    PFND3D11_1DDI_DISCARD                                   pfnDiscard;
    PFND3D11_1DDI_ASSIGNDEBUGBINARY                         pfnAssignDebugBinary;
    PFND3D10DDI_RESOURCEMAP                                 pfnDynamicConstantBufferMapNoOverwrite;
    PFND3D11_1DDI_CHECKDIRECTFLIPSUPPORT                    pfnCheckDirectFlipSupport;
    PFND3D11_1DDI_CLEARVIEW                                 pfnClearView;

} D3D11_1DDI_DEVICEFUNCS;

//----------------------------------------------------------------------------------------------------------------------------------
// D3D11.1 Video DDI
//
DEFINE_GUID(D3D11_1DDI_DECODER_PROFILE_MPEG2_MOCOMP,      0xe6a9f44b, 0x61b0, 0x4563,0x9e,0xa4,0x63,0xd2,0xa3,0xc6,0xfe,0x66);
DEFINE_GUID(D3D11_1DDI_DECODER_PROFILE_MPEG2_IDCT,        0xbf22ad00, 0x03ea, 0x4690,0x80,0x77,0x47,0x33,0x46,0x20,0x9b,0x7e);
DEFINE_GUID(D3D11_1DDI_DECODER_PROFILE_MPEG2_VLD,         0xee27417f, 0x5e28, 0x4e65,0xbe,0xea,0x1d,0x26,0xb5,0x08,0xad,0xc9);
DEFINE_GUID(D3D11_1DDI_DECODER_PROFILE_MPEG1_VLD,         0x6f3ec719, 0x3735, 0x42cc,0x80,0x63,0x65,0xcc,0x3c,0xb3,0x66,0x16);
DEFINE_GUID(D3D11_1DDI_DECODER_PROFILE_MPEG2and1_VLD,     0x86695f12, 0x340e, 0x4f04,0x9f,0xd3,0x92,0x53,0xdd,0x32,0x74,0x60);

DEFINE_GUID(D3D11_1DDI_DECODER_PROFILE_H264_MOCOMP_NOFGT, 0x1b81be64, 0xa0c7,0x11d3,0xb9,0x84,0x00,0xc0,0x4f,0x2e,0x73,0xc5);
DEFINE_GUID(D3D11_1DDI_DECODER_PROFILE_H264_MOCOMP_FGT,   0x1b81be65, 0xa0c7,0x11d3,0xb9,0x84,0x00,0xc0,0x4f,0x2e,0x73,0xc5);
DEFINE_GUID(D3D11_1DDI_DECODER_PROFILE_H264_IDCT_NOFGT,   0x1b81be66, 0xa0c7,0x11d3,0xb9,0x84,0x00,0xc0,0x4f,0x2e,0x73,0xc5);
DEFINE_GUID(D3D11_1DDI_DECODER_PROFILE_H264_IDCT_FGT,     0x1b81be67, 0xa0c7,0x11d3,0xb9,0x84,0x00,0xc0,0x4f,0x2e,0x73,0xc5);
DEFINE_GUID(D3D11_1DDI_DECODER_PROFILE_H264_VLD_NOFGT,    0x1b81be68, 0xa0c7,0x11d3,0xb9,0x84,0x00,0xc0,0x4f,0x2e,0x73,0xc5);
DEFINE_GUID(D3D11_1DDI_DECODER_PROFILE_H264_VLD_FGT,      0x1b81be69, 0xa0c7,0x11d3,0xb9,0x84,0x00,0xc0,0x4f,0x2e,0x73,0xc5);
DEFINE_GUID(D3D11_1DDI_DECODER_PROFILE_H264_VLD_WITHFMOASO_NOFGT,  0xd5f04ff9, 0x3418,0x45d8,0x95,0x61,0x32,0xa7,0x6a,0xae,0x2d,0xdd);

DEFINE_GUID(D3D11_1DDI_DECODER_PROFILE_H264_VLD_STEREO_PROGRESSIVE_NOFGT, 0xd79be8da, 0x0cf1,0x4c81,0xb8,0x2a,0x69,0xa4,0xe2,0x36,0xf4,0x3d);
DEFINE_GUID(D3D11_1DDI_DECODER_PROFILE_H264_VLD_STEREO_NOFGT,             0xf9aaccbb, 0xc2b6,0x4cfc,0x87,0x79,0x57,0x07,0xb1,0x76,0x05,0x52);
DEFINE_GUID(D3D11_1DDI_DECODER_PROFILE_H264_VLD_MULTIVIEW_NOFGT,          0x705b9d82, 0x76cf,0x49d6,0xb7,0xe6,0xac,0x88,0x72,0xdb,0x01,0x3c);

DEFINE_GUID(D3D11_1DDI_DECODER_PROFILE_WMV8_POSTPROC,     0x1b81be80, 0xa0c7,0x11d3,0xb9,0x84,0x00,0xc0,0x4f,0x2e,0x73,0xc5);
DEFINE_GUID(D3D11_1DDI_DECODER_PROFILE_WMV8_MOCOMP,       0x1b81be81, 0xa0c7,0x11d3,0xb9,0x84,0x00,0xc0,0x4f,0x2e,0x73,0xc5);

DEFINE_GUID(D3D11_1DDI_DECODER_PROFILE_WMV9_POSTPROC,     0x1b81be90, 0xa0c7,0x11d3,0xb9,0x84,0x00,0xc0,0x4f,0x2e,0x73,0xc5);
DEFINE_GUID(D3D11_1DDI_DECODER_PROFILE_WMV9_MOCOMP,       0x1b81be91, 0xa0c7,0x11d3,0xb9,0x84,0x00,0xc0,0x4f,0x2e,0x73,0xc5);
DEFINE_GUID(D3D11_1DDI_DECODER_PROFILE_WMV9_IDCT,         0x1b81be94, 0xa0c7,0x11d3,0xb9,0x84,0x00,0xc0,0x4f,0x2e,0x73,0xc5);

DEFINE_GUID(D3D11_1DDI_DECODER_PROFILE_VC1_POSTPROC,      0x1b81beA0, 0xa0c7,0x11d3,0xb9,0x84,0x00,0xc0,0x4f,0x2e,0x73,0xc5);
DEFINE_GUID(D3D11_1DDI_DECODER_PROFILE_VC1_MOCOMP,        0x1b81beA1, 0xa0c7,0x11d3,0xb9,0x84,0x00,0xc0,0x4f,0x2e,0x73,0xc5);
DEFINE_GUID(D3D11_1DDI_DECODER_PROFILE_VC1_IDCT,          0x1b81beA2, 0xa0c7,0x11d3,0xb9,0x84,0x00,0xc0,0x4f,0x2e,0x73,0xc5);
DEFINE_GUID(D3D11_1DDI_DECODER_PROFILE_VC1_VLD,           0x1b81beA3, 0xa0c7,0x11d3,0xb9,0x84,0x00,0xc0,0x4f,0x2e,0x73,0xc5);
DEFINE_GUID(D3D11_1DDI_DECODER_PROFILE_VC1_D2010,         0x1b81beA4, 0xa0c7,0x11d3,0xb9,0x84,0x00,0xc0,0x4f,0x2e,0x73,0xc5);

DEFINE_GUID(D3D11_1DDI_DECODER_PROFILE_MPEG4PT2_VLD_SIMPLE,           0xefd64d74, 0xc9e8,0x41d7,0xa5,0xe9,0xe9,0xb0,0xe3,0x9f,0xa3,0x19);
DEFINE_GUID(D3D11_1DDI_DECODER_PROFILE_MPEG4PT2_VLD_ADVSIMPLE_NOGMC,  0xed418a9f, 0x010d,0x4eda,0x9a,0xe3,0x9a,0x65,0x35,0x8d,0x8d,0x2e);
DEFINE_GUID(D3D11_1DDI_DECODER_PROFILE_MPEG4PT2_VLD_ADVSIMPLE_GMC,    0xab998b5b, 0x4258,0x44a9,0x9f,0xeb,0x94,0xe5,0x97,0xa6,0xba,0xae);

DEFINE_GUID(D3D11_1DDI_DECODER_PROFILE_HEVC_VLD_MAIN,    0x5b11d51b, 0x2f4c,0x4452,0xbc,0xc3,0x09,0xf2,0xa1,0x16,0x0c,0xc0);
DEFINE_GUID(D3D11_1DDI_DECODER_PROFILE_HEVC_VLD_MAIN10,  0x107af0e0, 0xef1a,0x4d19,0xab,0xa8,0x67,0xa1,0x63,0x07,0x3d,0x13);

DEFINE_GUID(D3D11_1DDI_DECODER_PROFILE_VP9_VLD_PROFILE0,       0x463707f8, 0xa1d0, 0x4585, 0x87, 0x6d, 0x83, 0xaa, 0x6d, 0x60, 0xb8, 0x9e);
DEFINE_GUID(D3D11_1DDI_DECODER_PROFILE_VP9_VLD_10BIT_PROFILE2, 0xa4c749ef, 0x6ecf, 0x48aa, 0x84, 0x48, 0x50, 0xa7, 0xa1, 0x16, 0x5f, 0xf7);
DEFINE_GUID(D3D11_1DDI_DECODER_PROFILE_VP8_VLD,                0x90b899ea, 0x3a62, 0x4705, 0x88, 0xb3, 0x8d, 0xf0, 0x4b, 0x27, 0x44, 0xe7);

// Authenticated channel queries
DEFINE_GUID( D3D11_1DDI_AUTHENTICATED_QUERY_PROTECTION, 0xa84eb584, 0xc495, 0x48aa, 0xb9, 0x4d, 0x8b, 0xd2, 0xd6, 0xfb, 0xce, 0x5 );
DEFINE_GUID( D3D11_1DDI_AUTHENTICATED_QUERY_CHANNEL_TYPE, 0xbc1b18a5, 0xb1fb, 0x42ab, 0xbd, 0x94, 0xb5, 0x82, 0x8b, 0x4b, 0xf7, 0xbe );
DEFINE_GUID( D3D11_1DDI_AUTHENTICATED_QUERY_DEVICE_HANDLE, 0xec1c539d, 0x8cff, 0x4e2a, 0xbc, 0xc4, 0xf5, 0x69, 0x2f, 0x99, 0xf4, 0x80 );
DEFINE_GUID( D3D11_1DDI_AUTHENTICATED_QUERY_CRYPTO_SESSION, 0x2634499e, 0xd018, 0x4d74, 0xac, 0x17, 0x7f, 0x72, 0x40, 0x59, 0x52, 0x8d );
DEFINE_GUID( D3D11_1DDI_AUTHENTICATED_QUERY_RESTRICTED_SHARED_RESOURCE_PROCESS_COUNT, 0xdb207b3, 0x9450, 0x46a6, 0x82, 0xde, 0x1b, 0x96, 0xd4, 0x4f, 0x9c, 0xf2 );
DEFINE_GUID( D3D11_1DDI_AUTHENTICATED_QUERY_RESTRICTED_SHARED_RESOURCE_PROCESS, 0x649bbadb, 0xf0f4, 0x4639, 0xa1, 0x5b, 0x24, 0x39, 0x3f, 0xc3, 0xab, 0xac );
DEFINE_GUID( D3D11_1DDI_AUTHENTICATED_QUERY_UNRESTRICTED_PROTECTED_SHARED_RESOURCE_COUNT, 0x12f0bd6, 0xe662, 0x4474, 0xbe, 0xfd, 0xaa, 0x53, 0xe5, 0x14, 0x3c, 0x6d );
DEFINE_GUID( D3D11_1DDI_AUTHENTICATED_QUERY_OUTPUT_ID_COUNT, 0x2c042b5e, 0x8c07, 0x46d5, 0xaa, 0xbe, 0x8f, 0x75, 0xcb, 0xad, 0x4c, 0x31 );
DEFINE_GUID( D3D11_1DDI_AUTHENTICATED_QUERY_OUTPUT_ID, 0x839ddca3, 0x9b4e, 0x41e4, 0xb0, 0x53, 0x89, 0x2b, 0xd2, 0xa1, 0x1e, 0xe7 );
DEFINE_GUID( D3D11_1DDI_AUTHENTICATED_QUERY_ACCESSIBILITY_ATTRIBUTES, 0x6214d9d2, 0x432c, 0x4abb, 0x9f, 0xce, 0x21, 0x6e, 0xea, 0x26, 0x9e, 0x3b );
DEFINE_GUID( D3D11_1DDI_AUTHENTICATED_QUERY_ENCRYPTION_WHEN_ACCESSIBLE_GUID_COUNT, 0xb30f7066, 0x203c, 0x4b07, 0x93, 0xfc, 0xce, 0xaa, 0xfd, 0x61, 0x24, 0x1e );
DEFINE_GUID( D3D11_1DDI_AUTHENTICATED_QUERY_ENCRYPTION_WHEN_ACCESSIBLE_GUID, 0xf83a5958, 0xe986, 0x4bda, 0xbe, 0xb0, 0x41, 0x1f, 0x6a, 0x7a, 0x1, 0xb7 );
DEFINE_GUID( D3D11_1DDI_AUTHENTICATED_QUERY_CURRENT_ENCRYPTION_WHEN_ACCESSIBLE, 0xec1791c7, 0xdad3, 0x4f15, 0x9e, 0xc3, 0xfa, 0xa9, 0x3d, 0x60, 0xd4, 0xf0 );

// Authenticated channel configure commands
DEFINE_GUID( D3D11_1DDI_AUTHENTICATED_CONFIGURE_INITIALIZE_GUID, 0x6114bdb, 0x3523, 0x470a, 0x8d, 0xca, 0xfb, 0xc2, 0x84, 0x51, 0x54, 0xf0 );
DEFINE_GUID( D3D11_1DDI_AUTHENTICATED_CONFIGURE_PROTECTION_GUID, 0x50455658, 0x3f47, 0x4362, 0xbf, 0x99, 0xbf, 0xdf, 0xcd, 0xe9, 0xed, 0x29 );
DEFINE_GUID( D3D11_1DDI_AUTHENTICATED_CONFIGURE_CRYPTO_SESSION_GUID, 0x6346cc54, 0x2cfc, 0x4ad4, 0x82, 0x24, 0xd1, 0x58, 0x37, 0xde, 0x77, 0x0 );
DEFINE_GUID( D3D11_1DDI_AUTHENTICATED_CONFIGURE_SHARED_RESOURCE_GUID, 0x772d047, 0x1b40, 0x48e8, 0x9c, 0xa6, 0xb5, 0xf5, 0x10, 0xde, 0x9f, 0x1 );
DEFINE_GUID( D3D11_1DDI_AUTHENTICATED_CONFIGURE_ENCRYPTION_WHEN_ACCESSIBLE_GUID, 0x41fff286, 0x6ae0, 0x4d43, 0x9d, 0x55, 0xa4, 0x6e, 0x9e, 0xfd, 0x15, 0x8a );

// Crypto types
DEFINE_GUID(D3D11_1DDI_CRYPTO_TYPE_AES128_CTR, 0x9b6bd711, 0x4f74, 0x41c9, 0x9e, 0x7b, 0xb, 0xe2, 0xd7, 0xd9, 0x3b, 0x4f );

// Key exchange types
DEFINE_GUID( D3D11_1DDI_KEY_EXCHANGE_RSAES_OAEP, 0xc1949895, 0xd72a, 0x4a1d, 0x8e, 0x5d, 0xed, 0x85, 0x7d, 0x17, 0x15, 0x20);


typedef struct D3D11_1DDIARG_CREATEVIDEODECODEROUTPUTVIEW
{
    D3D10DDI_HRESOURCE           hDrvResource;
    GUID                         DecodeProfile;
    UINT                         MipSlice;
    UINT                         FirstArraySlice;
    UINT                         ArraySize;
} D3D11_1DDIARG_CREATEVIDEODECODEROUTPUTVIEW;

typedef struct D3D11_1DDIARG_CREATEVIDEOPROCESSORINPUTVIEW
{
    D3D10DDI_HRESOURCE           hDrvResource;
    D3D11_1DDI_HVIDEOPROCESSORENUM hDrvVideoProcessorEnum;
    UINT                         FourCC;
    UINT                         MipSlice;
    UINT                         FirstArraySlice;
    UINT                         ArraySize;
} D3D11_1DDIARG_CREATEVIDEOPROCESSORINPUTVIEW;

typedef struct D3D11_1DDIARG_CREATEVIDEOPROCESSOROUTPUTVIEW
{
    D3D10DDI_HRESOURCE           hDrvResource;
    D3D11_1DDI_HVIDEOPROCESSORENUM hDrvVideoProcessorEnum;
    UINT                         MipSlice;
    UINT                         FirstArraySlice;
    UINT                         ArraySize;
} D3D11_1DDIARG_CREATEVIDEOPROCESSOROUTPUTVIEW;

typedef struct D3D11_1DDI_VIDEO_DECODER_DESC
{

    GUID        Guid;
    UINT        SampleWidth;
    UINT        SampleHeight;
    DXGI_FORMAT OutputFormat;
} D3D11_1DDI_VIDEO_DECODER_DESC;

typedef struct D3D11_1DDI_VIDEO_DECODER_CONFIG
{
    GUID guidConfigBitstreamEncryption;
    GUID guidConfigMBcontrolEncryption;
    GUID guidConfigResidDiffEncryption;
    UINT ConfigBitstreamRaw;
    UINT ConfigMBcontrolRasterOrder;
    UINT ConfigResidDiffHost;
    UINT ConfigSpatialResid8;
    UINT ConfigResid8Subtraction;
    UINT ConfigSpatialHost8or9Clipping;
    UINT ConfigSpatialResidInterleaved;
    UINT ConfigIntraResidUnsigned;
    UINT ConfigResidDiffAccelerator;
    UINT ConfigHostInverseScan;
    UINT ConfigSpecificIDCT;
    UINT Config4GroupedCoefs;
    USHORT ConfigMinRenderTargetBuffCount;
    USHORT ConfigDecoderSpecific;
} D3D11_1DDI_VIDEO_DECODER_CONFIG;

typedef struct D3D11_1DDI_VIDEO_DECODER_BUFFER_INFO
{
    D3D11_1DDI_VIDEO_DECODER_BUFFER_TYPE  Type;
    UINT   Size;
    UINT   Usage;
} D3D11_1DDI_VIDEO_DECODER_BUFFER_INFO;

typedef struct D3D11_1DDIARG_CREATEVIDEODECODER
{
    D3D11_1DDI_VIDEO_DECODER_DESC Desc;
    D3D11_1DDI_VIDEO_DECODER_CONFIG Config;
} D3D11_1DDIARG_CREATEVIDEODECODER;

typedef struct D3D11_1DDIARG_VIDEODECODEREXTENSION
{
    UINT Function;
    void* pPrivateInputData;
    UINT PrivateInputDataSize;
    void* pPrivateOutputData;
    UINT PrivateOutputDataSize;
    UINT ResourceCount;
    D3D10DDI_HRESOURCE* pResourceList;
} D3D11_1DDIARG_VIDEODECODEREXTENSION;

typedef struct D3D11_1DDIARG_VIDEODECODERBEGINFRAME
{
    D3D11_1DDI_HVIDEODECODEROUTPUTVIEW hOutputView;
    CONST void* pContentKey;
    UINT ContentKeySize;
} D3D11_1DDIARG_VIDEODECODERBEGINFRAME;

typedef struct D3D11_1DDI_ENCRYPTED_BLOCK_INFO
{
    UINT NumEncryptedBytesAtBeginning;
    UINT NumBytesInSkipPattern;
    UINT NumBytesInEncryptPattern;
} D3D11_1DDI_ENCRYPTED_BLOCK_INFO;

typedef struct D3D11_1DDI_VIDEO_DECODERR_BUFFER_DESC
{
    D3D10DDI_HRESOURCE hResource;
    D3D11_1DDI_VIDEO_DECODER_BUFFER_TYPE BufferType;
    UINT BufferIndex;
    UINT DataOffset;
    UINT DataSize;
    UINT FirstMBaddress;
    UINT NumMBsInBuffer;
    UINT Width;
    UINT Height;
    UINT Stride;
    UINT ReservedBits;
    void* pIV;
    UINT IVSize;
    BOOL PartialEncryption;
    D3D11_1DDI_ENCRYPTED_BLOCK_INFO EncryptedBlockInfo;
} D3D11_1DDI_VIDEO_DECODER_BUFFER_DESC;

typedef struct D3D11_1DDI_AES_CTR_IV
{
    UINT64   IV;         // Big-Endian IV
    UINT64   Count;      // Big-Endian Block Count
} D3D11_1DDI_AES_CTR_IV;

typedef enum D3D11_1DDI_VIDEO_FRAME_FORMAT
{
    D3D11_1DDI_VIDEO_FRAME_FORMAT_PROGRESSIVE	= 0,
    D3D11_1DDI_VIDEO_FRAME_FORMAT_INTERLACED_TOP_FIELD_FIRST	= 1,
    D3D11_1DDI_VIDEO_FRAME_FORMAT_INTERLACED_BOTTOM_FIELD_FIRST	= 2
} D3D11_1DDI_VIDEO_FRAME_FORMAT;

typedef enum D3D11_1DDI_VIDEO_USAGE
{
    D3D11_1DDI_VIDEO_USAGE_PLAYBACK_NORMAL	= 0,
    D3D11_1DDI_VIDEO_USAGE_OPTIMAL_SPEED	= 1,
    D3D11_1DDI_VIDEO_USAGE_OPTIMAL_QUALITY	= 2
} D3D11_1DDI_VIDEO_USAGE;

typedef struct D3D11_1DDI_VIDEO_PROCESSOR_CONTENT_DESC
{
    D3D11_1DDI_VIDEO_FRAME_FORMAT InputFrameFormat;
    DXGI_RATIONAL InputFrameRate;
    UINT InputWidth;
    UINT InputHeight;
    DXGI_RATIONAL OutputFrameRate;
    UINT OutputWidth;
    UINT OutputHeight;
    D3D11_1DDI_VIDEO_USAGE Usage;
} D3D11_1DDI_VIDEO_PROCESSOR_CONTENT_DESC;

typedef struct D3D11_1DDIARG_CREATEVIDEOPROCESSORENUM
{
    D3D11_1DDI_VIDEO_PROCESSOR_CONTENT_DESC Desc;
} D3D11_1DDIARG_CREATEVIDEOPROCESSORENUM;

typedef enum D3D11_1DDI_VIDEO_PROCESSOR_FORMAT_SUPPORT
{
    D3D11_1DDI_VIDEO_PROCESSOR_FORMAT_SUPPORT_INPUT = 0x00000001,
    D3D11_1DDI_VIDEO_PROCESSOR_FORMAT_SUPPORT_OUTPUT = 0x00000002,
} D3D11_1DDI_VIDEO_PROCESSOR_FORMAT_SUPPORT;

typedef enum D3D11_1DDI_VIDEO_PROCESSOR_DEVICE_CAPS
{
    D3D11_1DDI_VIDEO_PROCESSOR_DEVICE_CAPS_LINEAR_SPACE            = 0x1,
    D3D11_1DDI_VIDEO_PROCESSOR_DEVICE_CAPS_xvYCC                   = 0x2,
    D3D11_1DDI_VIDEO_PROCESSOR_DEVICE_CAPS_RGB_RANGE_CONVERSION    = 0x4,
    D3D11_1DDI_VIDEO_PROCESSOR_DEVICE_CAPS_YCbCr_MATRIX_CONVERSION = 0x8,
    D3D11_1DDI_VIDEO_PROCESSOR_DEVICE_CAPS_NOMINAL_RANGE           = 0x10
} D3D11_1DDI_VIDEO_PROCESSOR_DEVICE_CAPS;

typedef enum D3D11_1DDI_VIDEO_PROCESSOR_FEATURE_CAPS
{
    D3D11_1DDI_VIDEO_PROCESSOR_FEATURE_CAPS_ALPHA_FILL         = 0x1,
    D3D11_1DDI_VIDEO_PROCESSOR_FEATURE_CAPS_CONSTRICTION       = 0x2,
    D3D11_1DDI_VIDEO_PROCESSOR_FEATURE_CAPS_LUMA_KEY           = 0x4,
    D3D11_1DDI_VIDEO_PROCESSOR_FEATURE_CAPS_ALPHA_PALETTE      = 0x8,
    D3D11_1DDI_VIDEO_PROCESSOR_FEATURE_CAPS_LEGACY             = 0x10,
    D3D11_1DDI_VIDEO_PROCESSOR_FEATURE_CAPS_STEREO             = 0x20,
    D3D11_1DDI_VIDEO_PROCESSOR_FEATURE_CAPS_ROTATION           = 0x40,
    D3D11_1DDI_VIDEO_PROCESSOR_FEATURE_CAPS_ALPHA_STREAM       = 0x80,
    D3D11_1DDI_VIDEO_PROCESSOR_FEATURE_CAPS_PIXEL_ASPECT_RATIO = 0x100,
#if D3D11DDI_MINOR_HEADER_VERSION >= 5
    D3D11_1DDI_VIDEO_PROCESSOR_FEATURE_CAPS_MIRROR             = 0x200, 
    D3D11_1DDI_VIDEO_PROCESSOR_FEATURE_CAPS_SHADER_USAGE       = 0x400,
#endif
#if D3D11DDI_MINOR_HEADER_VERSION >= 10
    D3DWDDM2_1DDI_VIDEO_PROCESSOR_FEATURE_CAPS_METADATA_HDR10  = 0x800, 
#endif
} D3D11_1DDI_VIDEO_PROCESSOR_FEATURE_CAPS;

typedef enum D3D11_1DDI_VIDEO_PROCESSOR_FILTER_CAPS
{
    D3D11_1DDI_VIDEO_PROCESSOR_FILTER_CAPS_BRIGHTNESS         = 0x1,
    D3D11_1DDI_VIDEO_PROCESSOR_FILTER_CAPS_CONTRAST           = 0x2,
    D3D11_1DDI_VIDEO_PROCESSOR_FILTER_CAPS_HUE                = 0x4,
    D3D11_1DDI_VIDEO_PROCESSOR_FILTER_CAPS_SATURATION         = 0x8,
    D3D11_1DDI_VIDEO_PROCESSOR_FILTER_CAPS_NOISE_REDUCTION    = 0x10,
    D3D11_1DDI_VIDEO_PROCESSOR_FILTER_CAPS_EDGE_ENHANCEMENT   = 0x20,
    D3D11_1DDI_VIDEO_PROCESSOR_FILTER_CAPS_ANAMORPHIC_SCALING = 0x40,
    D3D11_1DDI_VIDEO_PROCESSOR_FILTER_CAPS_STEREO_ADJUSTMENT  = 0x80
} D3D11_1DDI_VIDEO_PROCESSOR_FILTER_CAPS;

typedef enum D3D11_1DDI_VIDEO_PROCESSOR_FORMAT_CAPS
{
    D3D11_1DDI_VIDEO_PROCESSOR_FORMAT_CAPS_RGB_INTERLACED     = 0x1,
    D3D11_1DDI_VIDEO_PROCESSOR_FORMAT_CAPS_RGB_PROCAMP        = 0x2,
    D3D11_1DDI_VIDEO_PROCESSOR_FORMAT_CAPS_RGB_LUMA_KEY       = 0x4,
    D3D11_1DDI_VIDEO_PROCESSOR_FORMAT_CAPS_PALETTE_INTERLACED = 0x8
} D3D11_1DDI_VIDEO_PROCESSOR_FORMAT_CAPS;

typedef enum D3D11_1DDI_VIDEO_PROCESSOR_STEREO_CAPS
{
    D3D11_1DDI_VIDEO_PROCESSOR_STEREO_CAPS_MONO_OFFSET        = 0x1,
    D3D11_1DDI_VIDEO_PROCESSOR_STEREO_CAPS_ROW_INTERLEAVED    = 0x2,
    D3D11_1DDI_VIDEO_PROCESSOR_STEREO_CAPS_COLUMN_INTERLEAVED = 0x4,
    D3D11_1DDI_VIDEO_PROCESSOR_STEREO_CAPS_CHECKERBOARD       = 0x8,
    D3D11_1DDI_VIDEO_PROCESSOR_STEREO_CAPS_FLIP_MODE          = 0x10
} D3D11_1DDI_VIDEO_PROCESSOR_STEREO_CAPS;

typedef enum D3D11_1DDI_VIDEO_PROCESSOR_AUTO_STREAM_CAPS
{
    D3D11_1DDI_VIDEO_PROCESSOR_AUTO_STREAM_CAPS_DENOISE              = 0x01,
    D3D11_1DDI_VIDEO_PROCESSOR_AUTO_STREAM_CAPS_DERINGING            = 0x02,
    D3D11_1DDI_VIDEO_PROCESSOR_AUTO_STREAM_CAPS_EDGE_ENHANCEMENT     = 0x04,
    D3D11_1DDI_VIDEO_PROCESSOR_AUTO_STREAM_CAPS_COLOR_CORRECTION     = 0x08,
    D3D11_1DDI_VIDEO_PROCESSOR_AUTO_STREAM_CAPS_FLESH_TONE_MAPPING   = 0x10,
    D3D11_1DDI_VIDEO_PROCESSOR_AUTO_STREAM_CAPS_IMAGE_STABILIZATION  = 0x20,
    D3D11_1DDI_VIDEO_PROCESSOR_AUTO_STREAM_CAPS_SUPER_RESOLUTION     = 0x40,
    D3D11_1DDI_VIDEO_PROCESSOR_AUTO_STREAM_CAPS_ANAMORPHIC_SCALING   = 0x80
} D3D11_1DDI_VIDEO_PROCESSOR_AUTO_STREAM_CAPS;

typedef struct D3D11_1DDI_VIDEO_PROCESSOR_CAPS
{
    UINT DeviceCaps;
    UINT FeatureCaps;
    UINT FilterCaps;
    UINT InputFormatCaps;
    UINT AutoStreamCaps;
    UINT StereoCaps;
    UINT RateConversionCapsCount;
    UINT MaxInputStreams;
    UINT MaxStreamStates;
} D3D11_1DDI_VIDEO_PROCESSOR_CAPS;

typedef enum D3D11_1DDI_VIDEO_PROCESSOR_CONVERSION_CAPS
{
    D3D11_1DDI_VIDEO_PROCESSOR_CONVERSION_CAPS_DEINTERLACE_BLEND                 = 0x1,
    D3D11_1DDI_VIDEO_PROCESSOR_CONVERSION_CAPS_DEINTERLACE_BOB                   = 0x2,
    D3D11_1DDI_VIDEO_PROCESSOR_CONVERSION_CAPS_DEINTERLACE_ADAPTIVE              = 0x4,
    D3D11_1DDI_VIDEO_PROCESSOR_CONVERSION_CAPS_DEINTERLACE_MOTION_COMPENSATION   = 0x8,
    D3D11_1DDI_VIDEO_PROCESSOR_CONVERSION_CAPS_INVERSE_TELECINE                  = 0x10,
    D3D11_1DDI_VIDEO_PROCESSOR_CONVERSION_CAPS_FRAME_RATE_CONVERSION             = 0x20
} D3D11_1DDI_VIDEO_PROCESSOR_CONVERSION_CAPS;

typedef enum D3D11_1DDI_VIDEO_PROCESSOR_ITELECINE_CAPS
{
    D3D11_1DDI_VIDEO_PROCESSOR_ITELECINE_CAPS_32             = 0x1,
    D3D11_1DDI_VIDEO_PROCESSOR_ITELECINE_CAPS_22             = 0x2,
    D3D11_1DDI_VIDEO_PROCESSOR_ITELECINE_CAPS_2224           = 0x4,
    D3D11_1DDI_VIDEO_PROCESSOR_ITELECINE_CAPS_2332           = 0x8,
    D3D11_1DDI_VIDEO_PROCESSOR_ITELECINE_CAPS_32322          = 0x10,
    D3D11_1DDI_VIDEO_PROCESSOR_ITELECINE_CAPS_55             = 0x20,
    D3D11_1DDI_VIDEO_PROCESSOR_ITELECINE_CAPS_64             = 0x40,
    D3D11_1DDI_VIDEO_PROCESSOR_ITELECINE_CAPS_87             = 0x80,
    D3D11_1DDI_VIDEO_PROCESSOR_ITELECINE_CAPS_222222222223   = 0x100,
    D3D11_1DDI_VIDEO_PROCESSOR_ITELECINE_CAPS_OTHER          = 0x80000000
} D3D11_1DDI_VIDEO_PROCESSOR_ITELECINE_CAPS;

typedef struct D3D11_1DDI_VIDEO_PROCESSOR_RATE_CONVERSION_CAPS
{
    UINT PastFrames;
    UINT FutureFrames;
    UINT ConversionCaps;
    UINT ITelecineCaps;
    UINT CustomRateCount;
} D3D11_1DDI_VIDEO_PROCESSOR_RATE_CONVERSION_CAPS;

typedef enum D3D11_1DDI_CONTENT_PROTECTION_CAPS
{
    D3D11_1DDI_CONTENT_PROTECTION_CAPS_SOFTWARE                = 0x00000001,
    D3D11_1DDI_CONTENT_PROTECTION_CAPS_HARDWARE                = 0x00000002,
    D3D11_1DDI_CONTENT_PROTECTION_CAPS_PROTECTION_ALWAYS_ON    = 0x00000004,
    D3D11_1DDI_CONTENT_PROTECTION_CAPS_PARTIAL_DECRYPTION      = 0x00000008,
    D3D11_1DDI_CONTENT_PROTECTION_CAPS_CONTENT_KEY             = 0x00000010,
    D3D11_1DDI_CONTENT_PROTECTION_CAPS_FRESHEN_SESSION_KEY     = 0x00000020,
    D3D11_1DDI_CONTENT_PROTECTION_CAPS_ENCRYPTED_READ_BACK     = 0x00000040,
    D3D11_1DDI_CONTENT_PROTECTION_CAPS_ENCRYPTED_READ_BACK_KEY = 0x00000080,
    D3D11_1DDI_CONTENT_PROTECTION_CAPS_SEQUENTIAL_CTR_IV       = 0x00000100,
    D3D11_1DDI_CONTENT_PROTECTION_CAPS_ENCRYPT_SLICEDATA_ONLY  = 0x00000200,
    D3D11_1DDI_CONTENT_PROTECTION_CAPS_DECRYPTION_BLT          = 0x00000400,
#if D3D11DDI_MINOR_HEADER_VERSION >= 5
    D3DWDDM2_0DDI_CONTENT_PROTECTION_CAPS_HARDWARE_PROTECT_UNCOMPRESSED        = 0x00000800,
    D3DWDDM2_0DDI_CONTENT_PROTECTION_CAPS_HARDWARE_PROTECTED_MEMORY_PAGEABLE    = 0x00001000,
    D3DWDDM2_0DDI_CONTENT_PROTECTION_CAPS_HARDWARE_PROTECTED_MEMORY_TRANSITION = 0x00002000,
    D3DWDDM2_0DDI_CONTENT_PROTECTION_CAPS_HARDWARE_TEARDOWN          = 0x00004000,
    D3DWDDM2_0DDI_CONTENT_PROTECTION_CAPS_HARDWARE_DRM_COMMUNICATION = 0x00008000
#endif
} D3D11_1DDI_CONTENT_PROTECTION_CAPS;

typedef struct D3D11_1DDI_VIDEO_CONTENT_PROTECTION_CAPS
{
    UINT      Caps;
    UINT      KeyExchangeTypeCount;
    UINT      BlockAlignmentSize;
    ULONGLONG ProtectedMemorySize;
} D3D11_1DDI_VIDEO_CONTENT_PROTECTION_CAPS;

typedef struct D3D11_1DDI_VIDEO_PROCESSOR_CUSTOM_RATE
{
    DXGI_RATIONAL CustomRate;
    UINT          OutputFrames;
    BOOL          InputInterlaced;
    UINT          InputFramesOrFields;
} D3D11_1DDI_VIDEO_PROCESSOR_CUSTOM_RATE;

typedef enum D3D11_1DDI_VIDEO_PROCESSOR_FILTER
{
    D3D11_1DDI_VIDEO_PROCESSOR_FILTER_BRIGHTNESS           = 0,
    D3D11_1DDI_VIDEO_PROCESSOR_FILTER_CONTRAST             = 1,
    D3D11_1DDI_VIDEO_PROCESSOR_FILTER_HUE                  = 2,
    D3D11_1DDI_VIDEO_PROCESSOR_FILTER_SATURATION           = 3,
    D3D11_1DDI_VIDEO_PROCESSOR_FILTER_NOISE_REDUCTION      = 4,
    D3D11_1DDI_VIDEO_PROCESSOR_FILTER_EDGE_ENHANCEMENT     = 5,
    D3D11_1DDI_VIDEO_PROCESSOR_FILTER_ANAMORPHIC_SCALING   = 6,
    D3D11_1DDI_VIDEO_PROCESSOR_FILTER_STEREO_ADJUSTMENT    = 7
} D3D11_1DDI_VIDEO_PROCESSOR_FILTER;

typedef struct D3D11_1DDI_VIDEO_PROCESSOR_FILTER_RANGE
{
  int   Minimum;
  int   Maximum;
  int   Default;
  float Multiplier;
} D3D11_1DDI_VIDEO_PROCESSOR_FILTER_RANGE;

typedef enum D3D11_1DDI_VIDEO_PROCESSOR_ROTATION
{
    D3D11_1DDI_VIDEO_PROCESSOR_ROTATION_IDENTITY     = 0,
    D3D11_1DDI_VIDEO_PROCESSOR_ROTATION_90           = 1,
    D3D11_1DDI_VIDEO_PROCESSOR_ROTATION_180          = 2,
    D3D11_1DDI_VIDEO_PROCESSOR_ROTATION_270          = 3
} D3D11_1DDI_VIDEO_PROCESSOR_ROTATION;

typedef struct D3D11_1DDIARG_CREATEVIDEOPROCESSOR
{
    D3D11_1DDI_HVIDEOPROCESSORENUM hVideoProcessorEnum;
    UINT RateConversionCapsIndex;
} D3D11_1DDIARG_CREATEVIDEOPROCESSOR;

typedef struct D3D11_1DDI_VIDEO_COLOR_RGBA
{
    float R;
    float G;
    float B;
    float A;
} D3D11_1DDI_VIDEO_COLOR_RGBA;

typedef struct D3D11_1DDI_VIDEO_COLOR_YCbCrA
{
    float Y;
    float Cb;
    float Cr;
    float A;
} D3D11_1DDI_VIDEO_COLOR_YCbCrA;

typedef struct D3D11_1DDI_VIDEO_COLOR
{
    union
    {
        D3D11_1DDI_VIDEO_COLOR_YCbCrA YCbCr;
        D3D11_1DDI_VIDEO_COLOR_RGBA RGBA;
    };
} D3D11_1DDI_VIDEO_COLOR;

typedef enum D3D11_1DDI_VIDEO_PROCESSOR_NOMINAL_RANGE
{
    D3D11_1DDI_VIDEO_PROCESSOR_NOMINAL_RANGE_UNDEFINED         = 0,
    D3D11_1DDI_VIDEO_PROCESSOR_NOMINAL_RANGE_16_235            = 1,
    D3D11_1DDI_VIDEO_PROCESSOR_NOMINAL_RANGE_0_255             = 2
} D3D11_1DDI_VIDEO_PROCESSOR_NOMINAL_RANGE;

typedef struct D3D11_1DDI_VIDEO_PROCESSOR_COLOR_SPACE
{
    UINT Usage  :1;
    UINT RGB_Range  :1;
    UINT YCbCr_Matrix  :1;
    UINT YCbCr_xvYCC  :1;
    UINT Nominal_Range :2; // D3D11_1DDI_VIDEO_PROCESSOR_NOMINAL_RANGE
    UINT Reserved : 26;
} D3D11_1DDI_VIDEO_PROCESSOR_COLOR_SPACE;

typedef enum D3D11_1DDI_VIDEO_PROCESSOR_ALPHA_FILL_MODE
{
    D3D11_1DDI_VIDEO_PROCESSOR_ALPHA_FILL_MODE_OPAQUE          = 0,
    D3D11_1DDI_VIDEO_PROCESSOR_ALPHA_FILL_MODE_BACKGROUND      = 1,
    D3D11_1DDI_VIDEO_PROCESSOR_ALPHA_FILL_MODE_DESTINATION     = 2,
    D3D11_1DDI_VIDEO_PROCESSOR_ALPHA_FILL_MODE_SOURCE_STREAM   = 3
} D3D11_1DDI_VIDEO_PROCESSOR_ALPHA_FILL_MODE;

typedef enum D3D11_1DDI_VIDEO_PROCESSOR_OUTPUT_RATE
{
    D3D11_1DDI_VIDEO_PROCESSOR_OUTPUT_RATE_NORMAL   = 0,
    D3D11_1DDI_VIDEO_PROCESSOR_OUTPUT_RATE_HALF     = 1,
    D3D11_1DDI_VIDEO_PROCESSOR_OUTPUT_RATE_CUSTOM   = 2
} D3D11_1DDI_VIDEO_PROCESSOR_OUTPUT_RATE;

typedef enum D3D11_1DDI_VIDEO_PROCESSOR_STEREO_FORMAT
{
    D3D11_1DDI_VIDEO_PROCESSOR_STEREO_FORMAT_MONO               = 0,
    D3D11_1DDI_VIDEO_PROCESSOR_STEREO_FORMAT_HORIZONTAL         = 1,
    D3D11_1DDI_VIDEO_PROCESSOR_STEREO_FORMAT_VERTICAL           = 2,
    D3D11_1DDI_VIDEO_PROCESSOR_STEREO_FORMAT_SEPARATE           = 3,
    D3D11_1DDI_VIDEO_PROCESSOR_STEREO_FORMAT_MONO_OFFSET        = 4,
    D3D11_1DDI_VIDEO_PROCESSOR_STEREO_FORMAT_ROW_INTERLEAVED    = 5,
    D3D11_1DDI_VIDEO_PROCESSOR_STEREO_FORMAT_COLUMN_INTERLEAVED = 6,
    D3D11_1DDI_VIDEO_PROCESSOR_STEREO_FORMAT_CHECKERBOARD       = 7
} D3D11_1DDI_VIDEO_PROCESSOR_STEREO_FORMAT;

typedef enum D3D11_1DDI_VIDEO_PROCESSOR_STEREO_FLIP_MODE
{
    D3D11_1DDI_VIDEO_PROCESSOR_STEREO_FLIP_NONE   = 0,
    D3D11_1DDI_VIDEO_PROCESSOR_STEREO_FLIP_FRAME0 = 1,
    D3D11_1DDI_VIDEO_PROCESSOR_STEREO_FLIP_FRAME1 = 2,
} D3D11_1DDI_VIDEO_PROCESSOR_STEREO_FLIP_MODE;

typedef struct D3D11_1DDI_VIDEO_PROCESSOR_STREAM
{
    BOOL Enable;
    UINT OutputIndex;
    UINT InputFrameOrField;
    UINT PastFrames;
    UINT FutureFrames;
    D3D11_1DDI_HVIDEOPROCESSORINPUTVIEW* pPastSurfaces;
    D3D11_1DDI_HVIDEOPROCESSORINPUTVIEW hInputSurface;
    D3D11_1DDI_HVIDEOPROCESSORINPUTVIEW* pFutureSurfaces;
    D3D11_1DDI_HVIDEOPROCESSORINPUTVIEW* pPastSurfacesRight;
    D3D11_1DDI_HVIDEOPROCESSORINPUTVIEW hInputSurfaceRight;
    D3D11_1DDI_HVIDEOPROCESSORINPUTVIEW* pFutureSurfacesRight;
} D3D11_1DDI_VIDEO_PROCESSOR_STREAM;

typedef struct D3D11_1DDIARG_CREATECRYPTOSESSION
{
    GUID CryptoType;
    GUID DecodeProfile;
    GUID KeyExchangeType;
} D3D11_1DDIARG_CREATECRYPTOSESSION;

typedef enum D3D11_1DDI_CERTIFICATE_TYPE
{
    D3D11_1DDI_CERTIFICATE_TYPE_AUTHENTICATED_CHANNEL = 1,
    D3D11_1DDI_CERTIFICATE_TYPE_CRYPTO_SESSION        = 2
} D3D11_1DDI_CERTIFICATE_TYPE;

typedef enum D3D11_1DDI_AUTHENTICATED_CHANNEL_TYPE
{
    D3D11_1DDI_AUTHENTICATED_CHANNEL_DRIVER_SOFTWARE = 2,
    D3D11_1DDI_AUTHENTICATED_CHANNEL_DRIVER_HARDWARE = 3,
} D3D11_1DDI_AUTHENTICATED_CHANNEL_TYPE;

typedef struct D3D11_1DDI_CERTIFICATE_INFO
{
    D3D11_1DDI_CERTIFICATE_TYPE CertificateType;
    union
    {
         D3D11_1DDI_AUTHENTICATED_CHANNEL_TYPE ChannelType;
         GUID CryptoSessionType;
    };
} D3D11_1DDI_CERTIFICATE_INFO;

typedef struct D3D11_1DDIARG_CREATEAUTHENTICATEDCHANNEL
{
    D3D11_1DDI_AUTHENTICATED_CHANNEL_TYPE ChannelType;
    HANDLE                                hChannel;
} D3D11_1DDIARG_CREATEAUTHENTICATEDCHANNEL;

typedef struct D3D11_1DDI_AUTHENTICATED_QUERY_INPUT
{
    GUID                               QueryType;
    HANDLE                             hChannel;
    UINT                               SequenceNumber;
} D3D11_1DDI_AUTHENTICATED_QUERY_INPUT;

typedef struct D3D11_1DDI_OMAC
{
    BYTE Omac[D3D_OMAC_SIZE];
} D3D11_1DDI_OMAC;

typedef struct D3D11_1DDI_AUTHENTICATED_QUERY_OUTPUT
{
    D3D11_1DDI_OMAC                    omac;
    GUID                               QueryType;
    HANDLE                             hChannel;
    UINT                               SequenceNumber;
    HRESULT                            ReturnCode;
} D3D11_1DDI_AUTHENTICATED_QUERY_OUTPUT;

typedef struct D3D11_1DDI_AUTHENTICATED_PROTECTION_FLAGS
{
    union
    {
        struct
        {
            UINT ProtectionEnabled                       : 1;
            UINT OverlayOrFullscreenRequired             : 1;
            UINT Reserved                                : 30;
        };
        UINT  Value;
    };
} D3D11_1DDI_AUTHENTICATED_PROTECTION_FLAGS;

typedef struct D3D11_1DDI_AUTHENTICATED_QUERY_PROTECTION_OUTPUT
{
    D3D11_1DDI_AUTHENTICATED_QUERY_OUTPUT Output;
    D3D11_1DDI_AUTHENTICATED_PROTECTION_FLAGS ProtectionFlags;
} D3D11_1DDI_AUTHENTICATED_QUERY_PROTECTION_OUTPUT;

typedef struct D3D11_1DDI_AUTHENTICATED_QUERY_CHANNEL_TYPE_OUTPUT
{
    D3D11_1DDI_AUTHENTICATED_QUERY_OUTPUT Output;
    D3D11_1DDI_AUTHENTICATED_CHANNEL_TYPE ChannelType;
} D3D11_1DDI_AUTHENTICATED_QUERY_CHANNEL_TYPE_OUTPUT;

typedef struct D3D11_1DDI_AUTHENTICATED_QUERY_DEVICE_HANDLE_OUTPUT
{
    D3D11_1DDI_AUTHENTICATED_QUERY_OUTPUT Output;
    HANDLE   DeviceHandle;
} D3D11_1DDI_AUTHENTICATED_QUERY_DEVICE_HANDLE_OUTPUT;

typedef struct D3D11_1DDI_AUTHENTICATED_QUERY_CRYPTO_SESSION_INPUT
{
    D3D11_1DDI_AUTHENTICATED_QUERY_INPUT Input;
    HANDLE   DecodeHandle;
} D3D11_1DDI_AUTHENTICATED_QUERY_CRYPTO_SESSION_INPUT;

typedef struct D3D11_1DDI_AUTHENTICATED_QUERY_CRYPTO_SESSION_OUTPUT
{
    D3D11_1DDI_AUTHENTICATED_QUERY_OUTPUT Output;
    HANDLE   DecodeHandle;
    HANDLE   CryptoSessionHandle;
    HANDLE   DeviceHandle;
} D3D11_1DDI_AUTHENTICATED_QUERY_CRYPTO_SESSION_OUTPUT;

typedef struct D3D11_1DDI_AUTHENTICATED_QUERY_RESTRICTED_SHARED_RESOURCE_PROCESS_COUNT_OUTPUT
{
    D3D11_1DDI_AUTHENTICATED_QUERY_OUTPUT Output;
    UINT   RestrictedSharedResourceProcessCount;
} D3D11_1DDI_AUTHENTICATED_QUERY_RESTRICTED_SHARED_RESOURCE_PROCESS_COUNT_OUTPUT;

typedef struct D3D11_1DDI_AUTHENTICATED_QUERY_RESTRICTED_SHARED_RESOURCE_PROCESS_INPUT
{
    D3D11_1DDI_AUTHENTICATED_QUERY_INPUT Input;
    UINT     ProcessIndex;
} D3D11_1DDI_AUTHENTICATED_QUERY_RESTRICTED_SHARED_RESOURCE_PROCESS_INPUT;

typedef enum D3D11_1DDI_AUTHENTICATED_PROCESS_IDENTIFIER_TYPE
{
    D3D11_1DDI_PROCESSIDTYPE_UNKNOWN  = 0,
    D3D11_1DDI_PROCESSIDTYPE_DWM      = 1,
    D3D11_1DDI_PROCESSIDTYPE_HANDLE   = 2
} D3D11_1DDI_AUTHENTICATED_PROCESS_IDENTIFIER_TYPE;

typedef struct D3D11_1DDI_AUTHENTICATED_QUERY_RESTRICTED_SHARED_RESOURCE_PROCESS_OUTPUT
{
    D3D11_1DDI_AUTHENTICATED_QUERY_OUTPUT            Output;
    UINT                                             ProcessIndex;
    D3D11_1DDI_AUTHENTICATED_PROCESS_IDENTIFIER_TYPE ProcessIdentifier;
    HANDLE                                           ProcessHandle;
} D3D11_1DDI_AUTHENTICATED_QUERY_RESTRICTED_SHARED_RESOURCE_PROCESS_OUTPUT;

typedef struct D3D11_1DDI_AUTHENTICATED_QUERY_UNRESTRICTED_PROTECTED_SHARED_RESOURCE_COUNT_OUTPUT
{
    D3D11_1DDI_AUTHENTICATED_QUERY_OUTPUT Output;
    UINT  UnrestrictedProtectedSharedResourceCount;
} D3D11_1DDI_AUTHENTICATED_QUERY_UNRESTRICTED_PROTECTED_SHARED_RESOURCE_COUNT_OUTPUT;

typedef struct D3D11_1DDI_AUTHENTICATED_QUERY_OUTPUT_ID_COUNT_INPUT
{
    D3D11_1DDI_AUTHENTICATED_QUERY_INPUT Input;
    HANDLE  DeviceHandle;
    HANDLE  CryptoSessionHandle;
} D3D11_1DDI_AUTHENTICATED_QUERY_OUTPUT_ID_COUNT_INPUT;

typedef struct D3D11_1DDI_AUTHENTICATED_QUERY_OUTPUT_ID_COUNT_OUTPUT
{
    D3D11_1DDI_AUTHENTICATED_QUERY_OUTPUT Output;
    HANDLE  DeviceHandle;
    HANDLE  CryptoSessionHandle;
    UINT    OutputIDCount;
} D3D11_1DDI_AUTHENTICATED_CHANNEL_QUERY_OUTPUT_ID_COUNT_OUTPUT;

typedef struct D3D11_1DDI_AUTHENTICATED_QUERY_OUTPUT_ID_INPUT
{
    D3D11_1DDI_AUTHENTICATED_QUERY_INPUT Input;
    HANDLE  DeviceHandle;
    HANDLE  CryptoSessionHandle;
    UINT    OutputIDIndex;
} D3D11_1DDI_AUTHENTICATED_QUERY_OUTPUT_ID_INPUT;

typedef struct D3D11_1DDI_AUTHENTICATED_QUERY_OUTPUT_ID_OUTPUT
{
    D3D11_1DDI_AUTHENTICATED_QUERY_OUTPUT Output;
    HANDLE  DeviceHandle;
    HANDLE  CryptoSessionHandle;
    UINT    OutputIDIndex;
    UINT64  OutputID;
} D3D11_1DDI_AUTHENTICATED_QUERY_OUTPUT_ID_OUTPUT;

typedef enum D3D11_1DDI_BUS_TYPE
{
    D3D11_1DDI_BUS_TYPE_OTHER                                     = 0x00000000,
    D3D11_1DDI_BUS_TYPE_PCI                                       = 0x00000001,
    D3D11_1DDI_BUS_TYPE_PCIX                                      = 0x00000002,
    D3D11_1DDI_BUS_TYPE_PCIEXPRESS                                = 0x00000003,
    D3D11_1DDI_BUS_TYPE_AGP                                       = 0x00000004,
    D3D11_1DDI_BUS_IMPL_MODIFIER_INSIDE_OF_CHIPSET                = 0x00010000,
    D3D11_1DDI_BUS_IMPL_MODIFIER_TRACKS_ON_MOTHER_BOARD_TO_CHIP   = 0x00020000,
    D3D11_1DDI_BUS_IMPL_MODIFIER_TRACKS_ON_MOTHER_BOARD_TO_SOCKET = 0x00030000,
    D3D11_1DDI_BUS_IMPL_MODIFIER_DAUGHTER_BOARD_CONNECTOR         = 0x00040000,
    D3D11_1DDI_BUS_IMPL_MODIFIER_DAUGHTER_BOARD_CONNECTOR_INSIDE_OF_NUAE = 0x00050000,
    D3D11_1DDI_BUS_IMPL_MODIFIER_NON_STANDARD                     = 0x80000000,
} D3D11_1DDI_BUS_TYPE;

typedef struct D3D11_1DDI_AUTHENTICATED_QUERY_ACESSIBILITY_OUTPUT
{
    D3D11_1DDI_AUTHENTICATED_QUERY_OUTPUT Output;
    D3D11_1DDI_BUS_TYPE BusType;
    BOOL AccessibleInContiguousBlocks;
    BOOL AccessibleInNonContiguousBlocks;
} D3D11_1DDI_AUTHENTICATED_QUERY_ACCESSIBILITY_OUTPUT;

typedef struct D3D11_1DDI_AUTHENTICATED_QUERY_ACCESSIBILITY_ENCRYPTION_GUID_COUNT_OUTPUT
{
    D3D11_1DDI_AUTHENTICATED_QUERY_OUTPUT Output;
    UINT   EncryptionGuidCount;
} D3D11_1DDI_AUTHENTICATED_QUERY_ACCESSIBILITY_ENCRYPTION_GUID_COUNT_OUTPUT;

typedef struct D3D11_1DDI_AUTHENTICATED_QUERY_ACCESSIBILITY_ENCRYPTION_GUID_INPUT
{
    D3D11_1DDI_AUTHENTICATED_QUERY_INPUT Input;
    UINT EncryptionGuidIndex;
} D3D11_1DDI_AUTHENTICATED_QUERY_ACCESSIBILITY_ENCRYPTION_GUID_INPUT;

typedef struct D3D11_1DDI_AUTHENTICATED_QUERY_ACCESSIBILITY_ENCRYPTION_GUID_OUTPUT
{
    D3D11_1DDI_AUTHENTICATED_QUERY_OUTPUT Output;
    UINT       EncryptionGuidIndex;
    GUID       EncryptionGuid;
} D3D11_1DDI_AUTHENTICATED_QUERY_ACCESSIBILITY_ENCRYPTION_GUID_OUTPUT;

typedef struct D3D11_1DDI_AUTHENTICATED_QUERY_CURRENT_ACCESSIBILITY_ENCRYPTION_OUTPUT
{
    D3D11_1DDI_AUTHENTICATED_QUERY_OUTPUT Output;
    GUID       EncryptionGuid;
} D3D11_1DDI_AUTHENTICATED_QUERY_CURRENT_ACCESSIBILITY_ENCRYPTION_OUTPUT;

typedef struct D3D11_1DDI_AUTHENTICATED_CONFIGURE_INPUT
{
    D3D11_1DDI_OMAC                     omac;
    GUID                                ConfigureType;
    HANDLE                              hChannel;
    UINT                                SequenceNumber;
} D3D11_1DDI_AUTHENTICATED_CONFIGURE_INPUT;

typedef struct D3D11_1DDI_AUTHENTICATED_CONFIGURE_OUTPUT
{
    D3D11_1DDI_OMAC                     omac;
    GUID                                ConfigureType;
    HANDLE                              hChannel;
    UINT                                SequenceNumber;
    HRESULT                             ReturnCode;
} D3D11_1DDI_AUTHENTICATED_CONFIGURE_OUTPUT;

typedef struct D3D11_1DDI_AUTHENTICATED_CONFIGURE_INITIALIZE
{
    D3D11_1DDI_AUTHENTICATED_CONFIGURE_INPUT   Parameters;
    UINT   StartSequenceQuery;
    UINT   StartSequenceConfigure;
} D3D11_DDI_AUTHENTICATED_CONFIGURE_INITIALIZE;

typedef struct D3D11_1DDI_AUTHENTICATED_CONFIGURE_PROTECTION
{
    D3D11_1DDI_AUTHENTICATED_CONFIGURE_INPUT   Parameters;
    D3D11_1DDI_AUTHENTICATED_PROTECTION_FLAGS Protections;
} D3D11_1DDI_AUTHENTICATED_CONFIGURE_PROTECTION;

typedef struct D3D11_1DDI_AUTHENTICATED_CONFIGURE_CRYPTO_SESSION
{
    D3D11_1DDI_AUTHENTICATED_CONFIGURE_INPUT   Parameters;
    HANDLE      DecodeHandle;
    HANDLE      CryptoSessionHandle;
    HANDLE      DeviceHandle;
} D3D11_1DDI_AUTHENTICATED_CONFIGURE_CRYPTO_SESSION;

typedef struct D3D11_1DDI_AUTHENTICATED_CONFIGURE_SHARED_RESOURCE
{
    D3D11_1DDI_AUTHENTICATED_CONFIGURE_INPUT         Parameters;
    D3D11_1DDI_AUTHENTICATED_PROCESS_IDENTIFIER_TYPE ProcessType;
    HANDLE                                           ProcessHandle;
    BOOL                                             AllowAccess;
} D3D11_1DDI_AUTHENTICATED_CONFIGURE_SHARED_RESOURCE;

typedef struct D3D11_1DDI_AUTHENTICATED_CONFIGURE_ACCESSIBLE_ENCRYPTION
{
    D3D11_1DDI_AUTHENTICATED_CONFIGURE_INPUT   Parameters;
    GUID                                               EncryptionGuid;
} D3D11_1DDI_AUTHENTICATED_CONFIGURE_ACCESSIBLE_ENCRYPTION;

typedef struct _D3D11_1DDI_GETCAPTUREHANDLEDATA
{
    D3D10DDI_HRESOURCE hResource;      // in
    UINT               ArrayIndex;     // in
    D3DKMT_HANDLE      hAllocation;    // out
    UINT               DataOffset;     // out
    UINT               DataSize;       // out
} D3D11_1DDI_GETCAPTUREHANDLEDATA;

//----------------------------------------------------------------------------------------------------------------------------------
// User mode DDI device function definitions 11.1 video
//
typedef VOID ( APIENTRY* PFND3D11_1DDI_GETVIDEODECODERPROFILECOUNT )(
    D3D10DDI_HDEVICE, UINT* );
typedef VOID ( APIENTRY* PFND3D11_1DDI_GETVIDEODECODERPROFILE )(
    D3D10DDI_HDEVICE, UINT, GUID* );
typedef VOID ( APIENTRY* PFND3D11_1DDI_CHECKVIDEODECODERFORMAT )(
    D3D10DDI_HDEVICE, CONST GUID*, DXGI_FORMAT, BOOL* );
typedef VOID ( APIENTRY* PFND3D11_1DDI_GETVIDEODECODERCONFIGCOUNT )(
    D3D10DDI_HDEVICE, CONST D3D11_1DDI_VIDEO_DECODER_DESC*, UINT* );
typedef VOID ( APIENTRY* PFND3D11_1DDI_GETVIDEODECODERCONFIG )(
    D3D10DDI_HDEVICE, CONST D3D11_1DDI_VIDEO_DECODER_DESC*, UINT, D3D11_1DDI_VIDEO_DECODER_CONFIG* );
typedef VOID ( APIENTRY* PFND3D11_1DDI_GETVIDEODECODERBUFFERTYPECOUNT ) (
    D3D10DDI_HDEVICE, CONST D3D11_1DDI_VIDEO_DECODER_DESC*, UINT * );
typedef VOID ( APIENTRY* PFND3D11_1DDI_GETVIDEODECODERBUFFERINFO ) (
    D3D10DDI_HDEVICE, CONST D3D11_1DDI_VIDEO_DECODER_DESC*, UINT, D3D11_1DDI_VIDEO_DECODER_BUFFER_INFO* );
typedef SIZE_T ( APIENTRY* PFND3D11_1DDI_CALCPRIVATEVIDEODECODERSIZE )(
    D3D10DDI_HDEVICE, _In_ CONST D3D11_1DDIARG_CREATEVIDEODECODER* );
typedef HRESULT ( APIENTRY* PFND3D11_1DDI_CREATEVIDEODECODER ) (
    D3D10DDI_HDEVICE, CONST D3D11_1DDIARG_CREATEVIDEODECODER*, D3D11_1DDI_HDECODE, D3D11_1DDI_HRTDECODE );
typedef VOID ( APIENTRY* PFND3D11_1DDI_DESTROYVIDEODECODER )(
    D3D10DDI_HDEVICE, D3D11_1DDI_HDECODE );
typedef HRESULT ( APIENTRY* PFND3D11_1DDI_VIDEODECODEREXTENSION )(
    D3D10DDI_HDEVICE, D3D11_1DDI_HDECODE, CONST D3D11_1DDIARG_VIDEODECODEREXTENSION* );
typedef HRESULT ( APIENTRY* PFND3D11_1DDI_VIDEODECODERBEGINFRAME )(
    D3D10DDI_HDEVICE, D3D11_1DDI_HDECODE, CONST D3D11_1DDIARG_VIDEODECODERBEGINFRAME* );
typedef VOID ( APIENTRY* PFND3D11_1DDI_VIDEODECODERENDFRAME )(
    D3D10DDI_HDEVICE, D3D11_1DDI_HDECODE );
typedef HRESULT ( APIENTRY* PFND3D11_1DDI_VIDEODECODERSUBMITBUFFERS )(
    D3D10DDI_HDEVICE, D3D11_1DDI_HDECODE, UINT, CONST D3D11_1DDI_VIDEO_DECODER_BUFFER_DESC* );
typedef SIZE_T ( APIENTRY* PFND3D11_1DDI_CALCPRIVATEVIDEOPROCESSORENUMSIZE )(
    D3D10DDI_HDEVICE, _In_ CONST D3D11_1DDIARG_CREATEVIDEOPROCESSORENUM* );
typedef HRESULT ( APIENTRY* PFND3D11_1DDI_CREATEVIDEOPROCESSORENUM ) (
    D3D10DDI_HDEVICE, CONST D3D11_1DDIARG_CREATEVIDEOPROCESSORENUM*, D3D11_1DDI_HVIDEOPROCESSORENUM, D3D11_1DDI_HRTVIDEOPROCESSORENUM );
typedef VOID ( APIENTRY* PFND3D11_1DDI_DESTROYVIDEOPROCESSORENUM )(
    D3D10DDI_HDEVICE, D3D11_1DDI_HVIDEOPROCESSORENUM );
typedef VOID ( APIENTRY* PFND3D11_1DDI_CHECKVIDEOPROCESSORFORMAT )(
    D3D10DDI_HDEVICE, D3D11_1DDI_HVIDEOPROCESSORENUM, DXGI_FORMAT, UINT* );
typedef VOID ( APIENTRY* PFND3D11_1DDI_GETVIDEOPROCESSORCAPS )(
    D3D10DDI_HDEVICE, D3D11_1DDI_HVIDEOPROCESSORENUM, D3D11_1DDI_VIDEO_PROCESSOR_CAPS* );
typedef VOID ( APIENTRY* PFND3D11_1DDI_GETVIDEOPROCESSORRATECONVERSIONCAPS )(
    D3D10DDI_HDEVICE, D3D11_1DDI_HVIDEOPROCESSORENUM, UINT, D3D11_1DDI_VIDEO_PROCESSOR_RATE_CONVERSION_CAPS* );
typedef VOID ( APIENTRY* PFND3D11_1DDI_GETVIDEOPROCESSORCUSTOMRATE )(
    D3D10DDI_HDEVICE, D3D11_1DDI_HVIDEOPROCESSORENUM, UINT, UINT, D3D11_1DDI_VIDEO_PROCESSOR_CUSTOM_RATE* );
typedef VOID ( APIENTRY* PFND3D11_1DDI_GETVIDEOPROCESSORFILTERRANGE )(
    D3D10DDI_HDEVICE, D3D11_1DDI_HVIDEOPROCESSORENUM, D3D11_1DDI_VIDEO_PROCESSOR_FILTER, D3D11_1DDI_VIDEO_PROCESSOR_FILTER_RANGE* );
typedef SIZE_T ( APIENTRY* PFND3D11_1DDI_CALCPRIVATEVIDEOPROCESSORSIZE )(
    D3D10DDI_HDEVICE, _In_ CONST D3D11_1DDIARG_CREATEVIDEOPROCESSOR* );
typedef HRESULT ( APIENTRY* PFND3D11_1DDI_CREATEVIDEOPROCESSOR ) (
    D3D10DDI_HDEVICE, CONST D3D11_1DDIARG_CREATEVIDEOPROCESSOR*, D3D11_1DDI_HVIDEOPROCESSOR, D3D11_1DDI_HRTVIDEOPROCESSOR );
typedef VOID ( APIENTRY* PFND3D11_1DDI_DESTROYVIDEOPROCESSOR )(
    D3D10DDI_HDEVICE, D3D11_1DDI_HVIDEOPROCESSOR );
typedef VOID ( APIENTRY* PFND3D11_1DDI_VIDEOPROCESSORSETOUTPUTTARGETRECT )(
    D3D10DDI_HDEVICE, D3D11_1DDI_HVIDEOPROCESSOR, BOOL, CONST RECT* );
typedef VOID ( APIENTRY* PFND3D11_1DDI_VIDEOPROCESSORSETOUTPUTBACKGROUNDCOLOR )(
    D3D10DDI_HDEVICE, D3D11_1DDI_HVIDEOPROCESSOR, BOOL, CONST D3D11_1DDI_VIDEO_COLOR* );
typedef VOID ( APIENTRY* PFND3D11_1DDI_VIDEOPROCESSORSETOUTPUTCOLORSPACE )(
    D3D10DDI_HDEVICE, D3D11_1DDI_HVIDEOPROCESSOR, CONST D3D11_1DDI_VIDEO_PROCESSOR_COLOR_SPACE* );
typedef VOID ( APIENTRY* PFND3D11_1DDI_VIDEOPROCESSORSETOUTPUTALPHAFILLMODE )(
    D3D10DDI_HDEVICE, D3D11_1DDI_HVIDEOPROCESSOR, D3D11_1DDI_VIDEO_PROCESSOR_ALPHA_FILL_MODE, UINT );
typedef VOID ( APIENTRY* PFND3D11_1DDI_VIDEOPROCESSORSETOUTPUTCONSTRICTION )(
    D3D10DDI_HDEVICE, D3D11_1DDI_HVIDEOPROCESSOR, BOOL, SIZE );
typedef VOID ( APIENTRY* PFND3D11_1DDI_VIDEOPROCESSORSETOUTPUTSTEREOMODE ) (
    D3D10DDI_HDEVICE, D3D11_1DDI_HVIDEOPROCESSOR, BOOL );
typedef HRESULT ( APIENTRY* PFND3D11_1DDI_VIDEOPROCESSORSETOUTPUTEXTENSION )(
    D3D10DDI_HDEVICE, D3D11_1DDI_HVIDEOPROCESSOR, CONST GUID*, UINT, void* );
typedef HRESULT ( APIENTRY* PFND3D11_1DDI_VIDEOPROCESSORGETOUTPUTEXTENSION )(
    D3D10DDI_HDEVICE, D3D11_1DDI_HVIDEOPROCESSOR, CONST GUID*, UINT, void* );
typedef VOID ( APIENTRY* PFND3D11_1DDI_VIDEOPROCESSORSETSTREAMFRAMEFORMAT )(
    D3D10DDI_HDEVICE, D3D11_1DDI_HVIDEOPROCESSOR, UINT, D3D11_1DDI_VIDEO_FRAME_FORMAT );
typedef VOID ( APIENTRY* PFND3D11_1DDI_VIDEOPROCESSORSETSTREAMCOLORSPACE )(
    D3D10DDI_HDEVICE, D3D11_1DDI_HVIDEOPROCESSOR, UINT, CONST D3D11_1DDI_VIDEO_PROCESSOR_COLOR_SPACE* );
typedef VOID ( APIENTRY* PFND3D11_1DDI_VIDEOPROCESSORSETSTREAMOUTPUTRATE )(
    D3D10DDI_HDEVICE, D3D11_1DDI_HVIDEOPROCESSOR, UINT, D3D11_1DDI_VIDEO_PROCESSOR_OUTPUT_RATE, BOOL, CONST DXGI_RATIONAL* );
typedef VOID ( APIENTRY* PFND3D11_1DDI_VIDEOPROCESSORSETSTREAMSOURCERECT )(
    D3D10DDI_HDEVICE, D3D11_1DDI_HVIDEOPROCESSOR, UINT, BOOL, CONST RECT* );
typedef VOID ( APIENTRY* PFND3D11_1DDI_VIDEOPROCESSORSETSTREAMDESTRECT )(
    D3D10DDI_HDEVICE, D3D11_1DDI_HVIDEOPROCESSOR, UINT, BOOL, CONST RECT* );
typedef VOID ( APIENTRY* PFND3D11_1DDI_VIDEOPROCESSORSETSTREAMALPHA )(
    D3D10DDI_HDEVICE, D3D11_1DDI_HVIDEOPROCESSOR, UINT, BOOL, FLOAT );
typedef VOID ( APIENTRY* PFND3D11_1DDI_VIDEOPROCESSORSETSTREAMPALETTE )(
    D3D10DDI_HDEVICE, D3D11_1DDI_HVIDEOPROCESSOR, UINT, UINT, CONST UINT* );
typedef VOID ( APIENTRY* PFND3D11_1DDI_VIDEOPROCESSORSETSTREAMPIXELASPECTRATIO )(
    D3D10DDI_HDEVICE, D3D11_1DDI_HVIDEOPROCESSOR, UINT, BOOL, CONST DXGI_RATIONAL*, CONST DXGI_RATIONAL* );
typedef VOID ( APIENTRY* PFND3D11_1DDI_VIDEOPROCESSORSETSTREAMLUMAKEY )(
    D3D10DDI_HDEVICE, D3D11_1DDI_HVIDEOPROCESSOR, UINT, BOOL, FLOAT, FLOAT );
typedef VOID ( APIENTRY* PFND3D11_1DDI_VIDEOPROCESSORSETSTREAMSTEREOFORMAT )(
    D3D10DDI_HDEVICE, D3D11_1DDI_HVIDEOPROCESSOR, UINT, BOOL, D3D11_1DDI_VIDEO_PROCESSOR_STEREO_FORMAT, BOOL, BOOL, D3D11_1DDI_VIDEO_PROCESSOR_STEREO_FLIP_MODE, int );
typedef VOID ( APIENTRY* PFND3D11_1DDI_VIDEOPROCESSORSETSTREAMAUTOPROCESSINGMODE )(
    D3D10DDI_HDEVICE, D3D11_1DDI_HVIDEOPROCESSOR, UINT, BOOL );
typedef VOID ( APIENTRY* PFND3D11_1DDI_VIDEOPROCESSORSETSTREAMFILTER )(
    D3D10DDI_HDEVICE, D3D11_1DDI_HVIDEOPROCESSOR, UINT, D3D11_1DDI_VIDEO_PROCESSOR_FILTER, BOOL, int );
typedef VOID ( APIENTRY* PFND3D11_1DDI_VIDEOPROCESSORSETSTREAMROTATION )(
    D3D10DDI_HDEVICE, D3D11_1DDI_HVIDEOPROCESSOR, UINT, BOOL, D3D11_1DDI_VIDEO_PROCESSOR_ROTATION );
typedef HRESULT ( APIENTRY* PFND3D11_1DDI_VIDEOPROCESSORSETSTREAMEXTENSION )(
    D3D10DDI_HDEVICE, D3D11_1DDI_HVIDEOPROCESSOR, UINT, CONST GUID*, UINT, void* );
typedef HRESULT ( APIENTRY* PFND3D11_1DDI_VIDEOPROCESSORGETSTREAMEXTENSION )(
    D3D10DDI_HDEVICE, D3D11_1DDI_HVIDEOPROCESSOR, UINT, CONST GUID*, UINT, void* );
typedef HRESULT ( APIENTRY* PFND3D11_1DDI_VIDEOPROCESSORBLT )(
   D3D10DDI_HDEVICE, D3D11_1DDI_HVIDEOPROCESSOR, D3D11_1DDI_HVIDEOPROCESSOROUTPUTVIEW, UINT, UINT, CONST D3D11_1DDI_VIDEO_PROCESSOR_STREAM* );
typedef SIZE_T ( APIENTRY* PFND3D11_1DDI_CALCPRIVATEVIDEODECODEROUTPUTVIEWSIZE )(
    D3D10DDI_HDEVICE, _In_ CONST D3D11_1DDIARG_CREATEVIDEODECODEROUTPUTVIEW* );
typedef HRESULT ( APIENTRY* PFND3D11_1DDI_CREATEVIDEODECODEROUTPUTVIEW )(
    D3D10DDI_HDEVICE, _In_ CONST D3D11_1DDIARG_CREATEVIDEODECODEROUTPUTVIEW*, D3D11_1DDI_HVIDEODECODEROUTPUTVIEW, D3D11_1DDI_HRTVIDEODECODEROUTPUTVIEW );
typedef VOID ( APIENTRY* PFND3D11_1DDI_DESTROYVIDEODECODEROUTPUTVIEW )(
    D3D10DDI_HDEVICE, D3D11_1DDI_HVIDEODECODEROUTPUTVIEW );
typedef SIZE_T ( APIENTRY* PFND3D11_1DDI_CALCPRIVATEVIDEOPROCESSORINPUTVIEWSIZE )(
    D3D10DDI_HDEVICE, _In_ CONST D3D11_1DDIARG_CREATEVIDEOPROCESSORINPUTVIEW* );
typedef HRESULT ( APIENTRY* PFND3D11_1DDI_CREATEVIDEOPROCESSORINPUTVIEW )(
    D3D10DDI_HDEVICE, _In_ CONST D3D11_1DDIARG_CREATEVIDEOPROCESSORINPUTVIEW*, D3D11_1DDI_HVIDEOPROCESSORINPUTVIEW, D3D11_1DDI_HRTVIDEOPROCESSORINPUTVIEW );
typedef VOID ( APIENTRY* PFND3D11_1DDI_DESTROYVIDEOPROCESSORINPUTVIEW )(
    D3D10DDI_HDEVICE, D3D11_1DDI_HVIDEOPROCESSORINPUTVIEW );
typedef SIZE_T ( APIENTRY* PFND3D11_1DDI_CALCPRIVATEVIDEOPROCESSOROUTPUTVIEWSIZE )(
    D3D10DDI_HDEVICE, _In_ CONST D3D11_1DDIARG_CREATEVIDEOPROCESSOROUTPUTVIEW* );
typedef HRESULT ( APIENTRY* PFND3D11_1DDI_CREATEVIDEOPROCESSOROUTPUTVIEW )(
    D3D10DDI_HDEVICE, _In_ CONST D3D11_1DDIARG_CREATEVIDEOPROCESSOROUTPUTVIEW*, D3D11_1DDI_HVIDEOPROCESSOROUTPUTVIEW, D3D11_1DDI_HRTVIDEOPROCESSOROUTPUTVIEW );
typedef VOID ( APIENTRY* PFND3D11_1DDI_DESTROYVIDEOPROCESSOROUTPUTVIEW )(
    D3D10DDI_HDEVICE, D3D11_1DDI_HVIDEOPROCESSOROUTPUTVIEW );
typedef VOID ( APIENTRY* PFND3D11_1DDI_VIDEOPROCESSORINPUTVIEWREADAFTERWRITEHAZARD )(
    D3D10DDI_HDEVICE, D3D11_1DDI_HVIDEOPROCESSORINPUTVIEW, D3D10DDI_HRESOURCE );
typedef HRESULT ( APIENTRY* PFND3D11_1DDI_GETCONTENTPROTECTIONCAPS ) (
    D3D10DDI_HDEVICE hDevice, CONST GUID* pCryptoType, CONST GUID* pDecodeProfile, D3D11_1DDI_VIDEO_CONTENT_PROTECTION_CAPS* pCaps);
typedef HRESULT ( APIENTRY* PFND3D11_1DDI_GETCRYPTOKEYEXCHANGETYPE ) (
    D3D10DDI_HDEVICE hDevice, CONST GUID* pCryptoType, CONST GUID* pDecodeProfile, UINT Index, GUID* pKeyExchangeType);
typedef SIZE_T ( APIENTRY* PFND3D11_1DDI_CALCPRIVATECRYPTOSESSIONSIZE )(
    D3D10DDI_HDEVICE hDevice, CONST D3D11_1DDIARG_CREATECRYPTOSESSION* pCreateData);
typedef HRESULT ( APIENTRY* PFND3D11_1DDI_CREATECRYPTOSESSION ) (
    D3D10DDI_HDEVICE hDevice, CONST D3D11_1DDIARG_CREATECRYPTOSESSION* pCreateData, D3D11_1DDI_HCRYPTOSESSION hCryptoSession, D3D11_1DDI_HRTCRYPTOSESSION hRTCryptoSession);
typedef VOID ( APIENTRY* PFND3D11_1DDI_DESTROYCRYPTOSESSION )(
    D3D10DDI_HDEVICE hDevice, D3D11_1DDI_HCRYPTOSESSION hCryptoSession);
typedef VOID ( APIENTRY* PFND3D11_1DDI_GETCERTIFICATESIZE ) (
    D3D10DDI_HDEVICE hDevice, CONST D3D11_1DDI_CERTIFICATE_INFO* pCertificateInfo, UINT* pCertificateSize);
typedef VOID ( APIENTRY* PFND3D11_1DDI_GETCERTIFICATE ) (
    D3D10DDI_HDEVICE hDevice, CONST D3D11_1DDI_CERTIFICATE_INFO* pCertificateInfo, UINT CertificateSize, _Out_writes_bytes_(CertificateSize) BYTE* pCertificate);
typedef HRESULT ( APIENTRY* PFND3D11_1DDI_NEGOTIATECRYPTOSESSIONKEYESCHANGE ) (
    D3D10DDI_HDEVICE hDevice, D3D11_1DDI_HCRYPTOSESSION hCryptoSession, UINT DataSize, BYTE* pData);
typedef VOID ( APIENTRY* PFND3D11_1DDI_ENCRYPTIONBLT ) (
    D3D10DDI_HDEVICE hDevice, D3D11_1DDI_HCRYPTOSESSION hCryptoSession, D3D10DDI_HRESOURCE hSrcResource, D3D10DDI_HRESOURCE hDstResource, UINT IVSize, CONST VOID* pIV);
typedef VOID ( APIENTRY* PFND3D11_1DDI_DECRYPTIONBLT ) (
    D3D10DDI_HDEVICE hDevice, D3D11_1DDI_HCRYPTOSESSION hCryptoSession, D3D10DDI_HRESOURCE hSrcResource, D3D10DDI_HRESOURCE hDstResource, CONST D3D11_1DDI_ENCRYPTED_BLOCK_INFO* pEncryptedBlockInfo, UINT ContentKeySize, CONST VOID* pContentKey, UINT IVSize, CONST VOID* pIV);
typedef VOID ( APIENTRY* PFND3D11_1DDI_STARTSESSIONKEYREFRESH ) (
    D3D10DDI_HDEVICE hDevice, D3D11_1DDI_HCRYPTOSESSION hCryptoSession, UINT RandomNumberSize, VOID* pRandomNumber);
typedef VOID ( APIENTRY* PFND3D11_1DDI_FINISHSESSIONKEYREFRESH ) (
    D3D10DDI_HDEVICE hDevice, D3D11_1DDI_HCRYPTOSESSION hCryptoSession);
typedef VOID ( APIENTRY* PFND3D11_1DDI_GETENCRYPTIONBLTKEY ) (
    D3D10DDI_HDEVICE hDevice, D3D11_1DDI_HCRYPTOSESSION hCryptoSession, UINT KeySize, VOID* pReadbackKey);
typedef SIZE_T ( APIENTRY* PFND3D11_1DDI_CALCPRIVATEAUTHENTICATEDCHANNELSIZE )(
    D3D10DDI_HDEVICE hDevice, CONST D3D11_1DDIARG_CREATEAUTHENTICATEDCHANNEL* pCreateData);
typedef HRESULT ( APIENTRY* PFND3D11_1DDI_CREATEAUTHENTICATEDCHANNEL ) (
    D3D10DDI_HDEVICE hDevice, D3D11_1DDIARG_CREATEAUTHENTICATEDCHANNEL* pCreateData, D3D11_1DDI_HAUTHCHANNEL hAuthChannel, D3D11_1DDI_HRTAUTHCHANNEL hRTAuthChannel);
typedef VOID ( APIENTRY* PFND3D11_1DDI_DESTROYAUTHENTICATEDCHANNEL )(
    D3D10DDI_HDEVICE hDevice, D3D11_1DDI_HAUTHCHANNEL hAuthChannel);
typedef HRESULT ( APIENTRY* PFND3D11_1DDI_NEGOTIATEAUTHENTICATEDCHANNELKEYEXCHANGE ) (
    D3D10DDI_HDEVICE hDevice, D3D11_1DDI_HAUTHCHANNEL hCAuthChannel, UINT DataSize, VOID* pData);
typedef HRESULT ( APIENTRY* PFND3D11_1DDI_QUERYAUTHENTICATEDCHANNEL ) (
    D3D10DDI_HDEVICE hDevice, D3D11_1DDI_HAUTHCHANNEL hCAuthChannel, UINT InputDataSize, CONST VOID* pInputData, UINT OutputDataSize, VOID* pOutputData);
typedef HRESULT ( APIENTRY* PFND3D11_1DDI_CONFIGUREAUTHENTICATEDCHANNEL ) (
    D3D10DDI_HDEVICE hDevice, D3D11_1DDI_HAUTHCHANNEL hCAuthChannel, UINT InputDataSize, CONST VOID* pInputData, D3D11_1DDI_AUTHENTICATED_CONFIGURE_OUTPUT* pOutputData);
typedef HRESULT ( APIENTRY* PFND3D11_1DDI_VIDEODECODERGETHANDLE ) (
    D3D10DDI_HDEVICE hDevice, D3D11_1DDI_HDECODE, HANDLE* pContentProtectionHandle);
typedef HRESULT ( APIENTRY* PFND3D11_1DDI_CRYPTOSESSIONGETHANDLE ) (
    D3D10DDI_HDEVICE hDevice, D3D11_1DDI_HCRYPTOSESSION hCryptoSession, HANDLE* pHandle);
typedef VOID ( APIENTRY* PFND3D11_1DDI_GETCAPTUREHANDLE ) (
    D3D10DDI_HDEVICE hDevice, D3D11_1DDI_GETCAPTUREHANDLEDATA* pHandleData );


//----------------------------------------------------------------------------------------------------------------------------------
// User mode device function table 11.1 video
//
typedef struct D3D11_1DDI_VIDEODEVICEFUNCS
{
    PFND3D11_1DDI_GETVIDEODECODERPROFILECOUNT                 pfnGetVideoDecoderProfileCount;
    PFND3D11_1DDI_GETVIDEODECODERPROFILE                      pfnGetVideoDecoderProfile;
    PFND3D11_1DDI_CHECKVIDEODECODERFORMAT                     pfnCheckVideoDecoderFormat;
    PFND3D11_1DDI_GETVIDEODECODERCONFIGCOUNT                  pfnGetVideoDecoderConfigCount;
    PFND3D11_1DDI_GETVIDEODECODERCONFIG                       pfnGetVideoDecoderConfig;
    PFND3D11_1DDI_GETVIDEODECODERBUFFERTYPECOUNT              pfnGetVideoDecoderBufferTypeCount;
    PFND3D11_1DDI_GETVIDEODECODERBUFFERINFO                   pfnGetVideoDecoderBufferInfo;
    PFND3D11_1DDI_CALCPRIVATEVIDEODECODERSIZE                 pfnCalcPrivateVideoDecoderSize;
    PFND3D11_1DDI_CREATEVIDEODECODER                          pfnCreateVideoDecoder;
    PFND3D11_1DDI_DESTROYVIDEODECODER                         pfnDestroyVideoDecoder;
    PFND3D11_1DDI_VIDEODECODEREXTENSION                       pfnVideoDecoderExtension;
    PFND3D11_1DDI_VIDEODECODERBEGINFRAME                      pfnVideoDecoderBeginFrame;
    PFND3D11_1DDI_VIDEODECODERENDFRAME                        pfnVideoDecoderEndFrame;
    PFND3D11_1DDI_VIDEODECODERSUBMITBUFFERS                   pfnVideoDecoderSubmitBuffers;
    PFND3D11_1DDI_CALCPRIVATEVIDEOPROCESSORENUMSIZE           pfnCalcPrivateVideoProcessorEnumSize;
    PFND3D11_1DDI_CREATEVIDEOPROCESSORENUM                    pfnCreateVideoProcessorEnum;
    PFND3D11_1DDI_DESTROYVIDEOPROCESSORENUM                   pfnDestroyVideoProcessorEnum;
    PFND3D11_1DDI_CHECKVIDEOPROCESSORFORMAT                   pfnCheckVideoProcessorFormat;
    PFND3D11_1DDI_GETVIDEOPROCESSORCAPS                       pfnGetVideoProcessorCaps;
    PFND3D11_1DDI_GETVIDEOPROCESSORRATECONVERSIONCAPS         pfnGetVideoProcessorRateConversionCaps;
    PFND3D11_1DDI_GETVIDEOPROCESSORCUSTOMRATE                 pfnGetVideoProcessorCustomRate;
    PFND3D11_1DDI_GETVIDEOPROCESSORFILTERRANGE                pfnGetVideoProcessorFilterRange;
    PFND3D11_1DDI_CALCPRIVATEVIDEOPROCESSORSIZE               pfnCalcPrivateVideoProcessorSize;
    PFND3D11_1DDI_CREATEVIDEOPROCESSOR                        pfnCreateVideoProcessor;
    PFND3D11_1DDI_DESTROYVIDEOPROCESSOR                       pfnDestroyVideoProcessor;
    PFND3D11_1DDI_VIDEOPROCESSORSETOUTPUTTARGETRECT           pfnVideoProcessorSetOutputTargetRect;
    PFND3D11_1DDI_VIDEOPROCESSORSETOUTPUTBACKGROUNDCOLOR      pfnVideoProcessorSetOutputBackgroundColor;
    PFND3D11_1DDI_VIDEOPROCESSORSETOUTPUTCOLORSPACE           pfnVideoProcessorSetOutputColorSpace;
    PFND3D11_1DDI_VIDEOPROCESSORSETOUTPUTALPHAFILLMODE        pfnVideoProcessorSetOutputAlphaFillMode;
    PFND3D11_1DDI_VIDEOPROCESSORSETOUTPUTCONSTRICTION         pfnVideoProcessorSetOutputConstriction;
    PFND3D11_1DDI_VIDEOPROCESSORSETOUTPUTSTEREOMODE           pfnVideoProcessorSetOutputStereoMode;
    PFND3D11_1DDI_VIDEOPROCESSORSETOUTPUTEXTENSION            pfnVideoProcessorSetOutputExtension;
    PFND3D11_1DDI_VIDEOPROCESSORGETOUTPUTEXTENSION            pfnVideoProcessorGetOutputExtension;
    PFND3D11_1DDI_VIDEOPROCESSORSETSTREAMFRAMEFORMAT          pfnVideoProcessorSetStreamFrameFormat;
    PFND3D11_1DDI_VIDEOPROCESSORSETSTREAMCOLORSPACE           pfnVideoProcessorSetStreamColorSpace;
    PFND3D11_1DDI_VIDEOPROCESSORSETSTREAMOUTPUTRATE           pfnVideoProcessorSetStreamOutputRate;
    PFND3D11_1DDI_VIDEOPROCESSORSETSTREAMSOURCERECT           pfnVideoProcessorSetStreamSourceRect;
    PFND3D11_1DDI_VIDEOPROCESSORSETSTREAMDESTRECT             pfnVideoProcessorSetStreamDestRect;
    PFND3D11_1DDI_VIDEOPROCESSORSETSTREAMALPHA                pfnVideoProcessorSetStreamAlpha;
    PFND3D11_1DDI_VIDEOPROCESSORSETSTREAMPALETTE              pfnVideoProcessorSetStreamPalette;
    PFND3D11_1DDI_VIDEOPROCESSORSETSTREAMPIXELASPECTRATIO     pfnVideoProcessorSetStreamPixelAspectRatio;
    PFND3D11_1DDI_VIDEOPROCESSORSETSTREAMLUMAKEY              pfnVideoProcessorSetStreamLumaKey;
    PFND3D11_1DDI_VIDEOPROCESSORSETSTREAMSTEREOFORMAT         pfnVideoProcessorSetStreamStereoFormat;
    PFND3D11_1DDI_VIDEOPROCESSORSETSTREAMAUTOPROCESSINGMODE   pfnVideoProcessorSetStreamAutoProcessingMode;
    PFND3D11_1DDI_VIDEOPROCESSORSETSTREAMFILTER               pfnVideoProcessorSetStreamFilter;
    PFND3D11_1DDI_VIDEOPROCESSORSETSTREAMEXTENSION            pfnVideoProcessorSetStreamExtension;
    PFND3D11_1DDI_VIDEOPROCESSORGETSTREAMEXTENSION            pfnVideoProcessorGetStreamExtension;
    PFND3D11_1DDI_VIDEOPROCESSORBLT                           pfnVideoProcessorBlt;
    PFND3D11_1DDI_CALCPRIVATEVIDEODECODEROUTPUTVIEWSIZE       pfnCalcPrivateVideoDecoderOutputViewSize;
    PFND3D11_1DDI_CREATEVIDEODECODEROUTPUTVIEW                pfnCreateVideoDecoderOutputView;
    PFND3D11_1DDI_DESTROYVIDEODECODEROUTPUTVIEW               pfnDestroyVideoDecoderOutputView;
    PFND3D11_1DDI_CALCPRIVATEVIDEOPROCESSORINPUTVIEWSIZE      pfnCalcPrivateVideoProcessorInputViewSize;
    PFND3D11_1DDI_CREATEVIDEOPROCESSORINPUTVIEW               pfnCreateVideoProcessorInputView;
    PFND3D11_1DDI_DESTROYVIDEOPROCESSORINPUTVIEW              pfnDestroyVideoProcessorInputView;
    PFND3D11_1DDI_CALCPRIVATEVIDEOPROCESSOROUTPUTVIEWSIZE     pfnCalcPrivateVideoProcessorOutputViewSize;
    PFND3D11_1DDI_CREATEVIDEOPROCESSOROUTPUTVIEW              pfnCreateVideoProcessorOutputView;
    PFND3D11_1DDI_DESTROYVIDEOPROCESSOROUTPUTVIEW             pfnDestroyVideoProcessorOutputView;
    PFND3D11_1DDI_VIDEOPROCESSORINPUTVIEWREADAFTERWRITEHAZARD pfnVideoProcessorInputViewReadAfterWriteHazard;
    PFND3D11_1DDI_GETCONTENTPROTECTIONCAPS                    pfnGetContentProtectionCaps;
    PFND3D11_1DDI_GETCRYPTOKEYEXCHANGETYPE                    pfnGetCryptoKeyExchangeType;
    PFND3D11_1DDI_CALCPRIVATECRYPTOSESSIONSIZE                pfnCalcPrivateCryptoSessionSize;
    PFND3D11_1DDI_CREATECRYPTOSESSION                         pfnCreateCryptoSession;
    PFND3D11_1DDI_DESTROYCRYPTOSESSION                        pfnDestroyCryptoSession;
    PFND3D11_1DDI_GETCERTIFICATESIZE                          pfnGetCertificateSize;
    PFND3D11_1DDI_GETCERTIFICATE                              pfnGetCertificate;
    PFND3D11_1DDI_NEGOTIATECRYPTOSESSIONKEYESCHANGE           pfnNegotiateCryptoSessionKeyExchange;
    PFND3D11_1DDI_ENCRYPTIONBLT                               pfnEncryptionBlt;
    PFND3D11_1DDI_DECRYPTIONBLT                               pfnDecryptionBlt;
    PFND3D11_1DDI_STARTSESSIONKEYREFRESH                      pfnStartSessionKeyRefresh;
    PFND3D11_1DDI_FINISHSESSIONKEYREFRESH                     pfnFinishSessionKeyRefresh;
    PFND3D11_1DDI_GETENCRYPTIONBLTKEY                         pfnGetEncryptionBltKey;
    PFND3D11_1DDI_CALCPRIVATEAUTHENTICATEDCHANNELSIZE         pfnCalcPrivateAuthenticatedChannelSize;
    PFND3D11_1DDI_CREATEAUTHENTICATEDCHANNEL                  pfnCreateAuthenticatedChannel;
    PFND3D11_1DDI_DESTROYAUTHENTICATEDCHANNEL                 pfnDestroyAuthenticatedChannel;
    PFND3D11_1DDI_NEGOTIATEAUTHENTICATEDCHANNELKEYEXCHANGE    pfnNegotiateAuthenticatedChannelKeyExchange;
    PFND3D11_1DDI_QUERYAUTHENTICATEDCHANNEL                   pfnQueryAuthenticatedChannel;
    PFND3D11_1DDI_CONFIGUREAUTHENTICATEDCHANNEL               pfnConfigureAuthenticatedChannel;
    PFND3D11_1DDI_VIDEODECODERGETHANDLE                       pfnVideoDecoderGetHandle;
    PFND3D11_1DDI_CRYPTOSESSIONGETHANDLE                      pfnCryptoSessionGetHandle;
    PFND3D11_1DDI_VIDEOPROCESSORSETSTREAMROTATION             pfnVideoProcessorSetStreamRotation;
    PFND3D11_1DDI_GETCAPTUREHANDLE                            pfnGetCaptureHandle;
} D3D11_1DDI_VIDEODEVICEFUNCS;

typedef struct D3D11_1DDI_VIDEO_INPUT
{
   BOOL Relocate;
   D3D11_1DDI_VIDEODEVICEFUNCS*           p11VideoDeviceFuncs;
} D3D11_1DDI_VIDEO_INPUT;

typedef struct D3D11_1DDI_VIDEO_OUTPUT
{
    UINT8 Reserved; // C doesn't allow empty structures. They are, at least, the size of a byte.
} D3D11_1DDI_VIDEO_OUTPUT;
#endif // D3D11DDI_MINOR_HEADER_VERSION

#if D3D11DDI_MINOR_HEADER_VERSION >= 5

//----------------------------------------------------------------------------------------------------------------------------------
// D3D WDDM2.0 Video DDI
//
typedef struct D3DWDDM2_0DDI_VIDEO_DECODER_SUB_SAMPLE_MAPPING_BLOCK
{
    UINT   ClearSize;
    UINT   EncryptedSize;
} D3DWDDM2_0DDI_VIDEO_DECODER_SUB_SAMPLE_MAPPING_BLOCK;

typedef struct D3DWDDM2_0DDI_VIDEO_DECODER_BUFFER_DESC1
{
    D3D10DDI_HRESOURCE hResource;
    D3D11_1DDI_VIDEO_DECODER_BUFFER_TYPE BufferType;
    UINT DataOffset;
    UINT DataSize;
    _Field_size_opt_(IVSize) void* pIV;
    UINT IVSize;
    _Field_size_opt_(SubSampleMappingCount) D3DWDDM2_0DDI_VIDEO_DECODER_SUB_SAMPLE_MAPPING_BLOCK* pSubSampleMappingBlock;
    UINT SubSampleMappingCount;
} D3DWDDM2_0DDI_VIDEO_DECODER_BUFFER_DESC1;

DEFINE_GUID(D3DWDDM2_0DDI_DECODER_ENCRYPTION_HW_CENC, 0x89d6ac4f, 0x9f2, 0x4229, 0xb2, 0xcd, 0x37, 0x74, 0xa, 0x6d, 0xfd, 0x81); 

typedef struct D3DWDDM2_0DDI_VIDEO_DECODER_BEGIN_FRAME_CRYPTO_SESSION
{
    D3D11_1DDI_HCRYPTOSESSION hCryptoSession; 
    _Field_size_opt_(BlobSize) void* pBlob;
    UINT  BlobSize;
    GUID* pKeyInfoId;
    _Field_size_opt_(PrivateDataSize) void* pPrivateData;
    UINT  PrivateDataSize; 
} D3DWDDM2_0DDI_VIDEO_DECODER_BEGIN_FRAME_CRYPTO_SESSION;

typedef enum D3DWDDM2_0DDI_CRYPTO_SESSION_STATUS
{
    D3DWDDM2_0DDI_CRYPTO_SESSION_STATUS_OK                    = 0,
    D3DWDDM2_0DDI_CRYPTO_SESSION_STATUS_KEY_LOST              = 1,
    D3DWDDM2_0DDI_CRYPTO_SESSION_STATUS_KEY_AND_CONTENT_LOST  = 2    
} D3DWDDM2_0DDI_CRYPTO_SESSION_STATUS;

typedef struct D3DWDDM2_0DDI_CHECK_VIDEO_PROCESSOR_FORMAT_CONVERSION 
{ 
    DXGI_FORMAT InputFormat; 
    D3DDDI_COLOR_SPACE_TYPE InputColorSpace; 
    DXGI_FORMAT OutputFormat; 
    D3DDDI_COLOR_SPACE_TYPE OutputColorSpace; 
    BOOL Supported; 
} D3DWDDM2_0DDI_CHECK_VIDEO_PROCESSOR_FORMAT_CONVERSION;

typedef enum D3DWDDM2_0DDI_VIDEO_CAPABILITY_QUERY
{
    D3DWDDM2_0DDI_VIDEO_CAPABILITY_QUERY_DECODER_DOWNSAMPLING             = 2,
    D3DWDDM2_0DDI_VIDEO_CAPABILITY_QUERY_RECOMMEND_DECODER_DOWNSAMPLING   = 3,
    D3DWDDM2_0DDI_VIDEO_CAPABILITY_QUERY_DECODER_CAPS                     = 4,
    D3DWDDM2_0DDI_VIDEO_CAPABILITY_QUERY_DECODER_DOWNSAMPLE_OUTPUT_FORMAT = 5,
} D3DWDDM2_0DDI_VIDEO_CAPABILITY_QUERY;

typedef enum D3DWDDM2_0DDI_VIDEO_DECODER_CAPS 
{ 
    D3DWDDM2_0DDI_VIDEO_DECODER_CAP_DOWNSAMPLE           = 0x01, 
    D3DWDDM2_0DDI_VIDEO_DECODER_CAP_NON_REAL_TIME        = 0x02,
    D3DWDDM2_0DDI_VIDEO_DECODER_CAP_DOWNSAMPLE_REQUIRED  = 0x04,
    D3DWDDM2_0DDI_VIDEO_DECODER_CAP_UNSUPPORTED          = 0x08
} D3DWDDM2_0DDI_VIDEO_DECODER_CAPS;

typedef struct D3DWDDM2_0DDI_VIDEO_CAPABILITY_DECODER_CAPS 
{ 
    GUID DecodeProfile;      // in
    UINT SampleWidth;        // in 
    UINT SampleHeight;       // in
    DXGI_RATIONAL FrameRate; // in
    UINT BitRate;            // in
    const GUID* pCryptoType; // in
    UINT Caps;               // out: D3DWDDM2_0DDI_VIDEO_DECODER_CAPS
} D3DWDDM2_0DDI_VIDEO_CAPABILITY_DECODER_CAPS;

typedef struct D3DWDDM2_0DDI_VIDEO_CAPABILITY_DECODER_DOWNSAMPLING
{
    CONST D3D11_1DDI_VIDEO_DECODER_DESC* pInputDesc;        // in
    D3DDDI_COLOR_SPACE_TYPE InputColorSpace;                // in
    CONST D3D11_1DDI_VIDEO_DECODER_CONFIG* pInputConfig;    // in
    CONST DXGI_RATIONAL* pFrameRate;                        // in
    CONST D3D11_1DDI_VIDEO_DECODER_DESC* pOutputDesc;       // in
    D3DDDI_COLOR_SPACE_TYPE OutputColorSpace;               // in
    BOOL Supported;                                         // out
    BOOL RealTime;                                          // out
} D3DWDDM2_0DDI_VIDEO_CAPABILITY_DECODER_DOWNSAMPLING;

typedef struct D3DWDDM2_0DDI_VIDEO_CAPABILITY_RECOMMEND_DECODER_DOWNSAMPLING
{
    CONST D3D11_1DDI_VIDEO_DECODER_DESC* pInputDesc;        // in
    D3DDDI_COLOR_SPACE_TYPE InputColorSpace;                // in
    CONST D3D11_1DDI_VIDEO_DECODER_CONFIG* pInputConfig;    // in
    CONST DXGI_RATIONAL* pFrameRate;                        // in
    D3D11_1DDI_VIDEO_DECODER_DESC* pOutputDesc;             // out
    D3DDDI_COLOR_SPACE_TYPE OutputColorSpace;               // out
} D3DWDDM2_0DDI_VIDEO_CAPABILITY_RECOMMEND_DECODER_DOWNSAMPLING;

typedef struct D3DWDDM2_0DDI_VIDEO_CAPABILITY_DECODER_DOWNSAMPLE_OUTPUT_FORMAT 
{ 
    GUID DecodeProfile;      // in
    DXGI_FORMAT Format;      // in 
    BOOL Supported;          // out
} D3DWDDM2_0DDI_VIDEO_CAPABILITY_DECODER_DOWNSAMPLE_OUTPUT_FORMAT;

typedef struct D3DWDDM2_0DDI_VIDEO_PROCESSOR_STREAM_BEHAVIOR_HINT
{ 
    BOOL Enable; 
    UINT Width;
    UINT Height;
    DXGI_FORMAT Format; 
} D3DWDDM2_0DDI_VIDEO_PROCESSOR_STREAM_BEHAVIOR_HINT; 

typedef enum D3DWDDM2_0DDI_VIDEO_PROCESSOR_BEHAVIOR_HINTS
{
    D3DWDDM2_0DDI_VIDEO_PROCESSOR_BEHAVIOR_HINT_MULTIPLANE_OVERLAY_ROTATION               = 0x01,
    D3DWDDM2_0DDI_VIDEO_PROCESSOR_BEHAVIOR_HINT_MULTIPLANE_OVERLAY_RESIZE                 = 0x02,
    D3DWDDM2_0DDI_VIDEO_PROCESSOR_BEHAVIOR_HINT_MULTIPLANE_OVERLAY_COLOR_SPACE_CONVERSION = 0x04,
} D3DWDDM2_0DDI_VIDEO_PROCESSOR_BEHAVIOR_HINTS;

DEFINE_GUID(D3DWDDM2_0DDI_KEY_EXCHANGE_HW_PROTECTION, 0xb1170d8a, 0x628d, 0x4da3, 0xad, 0x3b, 0x82, 0xdd, 0xb0, 0x8b, 0x49, 0x70);

typedef struct D3DWDDM2_0DDI_KEY_EXCHANGE_HW_PROTECTION_INPUT_DATA
{
    UINT PrivateDataSize;
    UINT HWProtectionDataSize;
    BYTE pbInput[4];
} D3DWDDM2_0DDI_KEY_EXCHANGE_HW_PROTECTION_INPUT_DATA;

typedef struct D3DWDDM2_0DDI_KEY_EXCHANGE_HW_PROTECTION_OUTPUT_DATA
{
    UINT PrivateDataSize;
    UINT MaxHWProtectionDataSize;
    UINT HWProtectionDataSize;
    UINT64 TransportTime;
    UINT64 ExecutionTime;
    BYTE pbOutput[4];
} D3DWDDM2_0DDI_KEY_EXCHANGE_HW_PROTECTION_OUTPUT_DATA;

typedef struct D3DWDDM2_0DDI_KEY_EXCHANGE_HW_PROTECTION_DATA
{
    UINT HWProtectionFunctionID;
    D3DWDDM2_0DDI_KEY_EXCHANGE_HW_PROTECTION_INPUT_DATA *pInputData;
    D3DWDDM2_0DDI_KEY_EXCHANGE_HW_PROTECTION_OUTPUT_DATA *pOutputData;
    HRESULT Status;
} D3DWDDM2_0DDI_KEY_EXCHANGE_HW_PROTECTION_DATA;


//----------------------------------------------------------------------------------------------------------------------------------
// User mode DDI device function definitions WDDM 2.0 video
//
typedef HRESULT ( APIENTRY* PFND3DWDDM2_0DDI_GETDATAFORNEWHARDWAREKEY ) ( 
    _In_ D3D10DDI_HDEVICE hDevice, 
    _In_ D3D11_1DDI_HCRYPTOSESSION hCryptoSession, 
    _In_ UINT PrivateInputSize,
    _In_reads_(PrivateInputSize) const void* pPrivatInputData,
    _Out_ UINT64* pPrivateOutputData);
typedef void ( APIENTRY* PFND3DWDDM2_0DDI_CHECKCRYPTOSESSIONSTATUS ) (
    _In_ D3D10DDI_HDEVICE hDevice, 
    _In_ D3D11_1DDI_HCRYPTOSESSION hCryptoSession, 
    _Out_ D3DWDDM2_0DDI_CRYPTO_SESSION_STATUS* pStatus);
typedef HRESULT ( APIENTRY* PFND3DWDDM2_0DDI_VIDEODECODERSUBMITBUFFERS1 )(
    _In_ D3D10DDI_HDEVICE hDevice, 
    _In_ D3D11_1DDI_HDECODE hDecode, 
    _In_ UINT BufferCount, 
    _In_ CONST D3DWDDM2_0DDI_VIDEO_DECODER_BUFFER_DESC1* pBufferDesc);
typedef VOID ( APIENTRY* PFND3DWDDM2_0DDI_QUERYVIDEOCAPABILITIES ) ( 
    _In_ D3D10DDI_HDEVICE hDevice,  
    _In_ D3DWDDM2_0DDI_VIDEO_CAPABILITY_QUERY QueryType,
    _In_ UINT DataSize,
    _Inout_ VOID* pData);
typedef HRESULT ( APIENTRY* PFND3DWDDM2_0DDI_VIDEODECODERENABLEDOWNSAMPLING )( 
    _In_ D3D10DDI_HDEVICE hDevice, 
    _In_ D3D11_1DDI_HDECODE hDecoder, 
    _In_ D3DDDI_COLOR_SPACE_TYPE InputColorSpace, 
    _In_ CONST D3D11_1DDI_VIDEO_DECODER_DESC* pOutputDesc, 
    _In_ D3DDDI_COLOR_SPACE_TYPE OutputColorSpace,
    _In_ UINT ReferenceFrameCount);
typedef HRESULT ( APIENTRY* PFND3DWDDM2_0DDI_VIDEODECODERUPDATEDOWNSAMPLING )( 
    _In_ D3D10DDI_HDEVICE hDevice, 
    _In_ D3D11_1DDI_HDECODE hDecoder, 
    _In_ CONST D3D11_1DDI_VIDEO_DECODER_DESC* pOutputDesc, 
    _In_ D3DDDI_COLOR_SPACE_TYPE OutputColorSpace);
typedef VOID ( APIENTRY* PFND3DWDDM2_0DDI_CHECKVIDEOPROCESSORFORMATCONVERSION )( 
    _In_ D3D10DDI_HDEVICE hDevice, 
    _In_ D3D11_1DDI_HVIDEOPROCESSORENUM hProcessorEnum, 
    _In_ D3DWDDM2_0DDI_CHECK_VIDEO_PROCESSOR_FORMAT_CONVERSION* pConversion);
typedef VOID ( APIENTRY* PFND3DWDDM2_0DDI_VIDEOPROCESSORSETOUTPUTCOLORSPACE1 )( 
    _In_ D3D10DDI_HDEVICE hDevice, 
    _In_ D3D11_1DDI_HVIDEOPROCESSOR hVideoProcessor, 
    _In_ D3DDDI_COLOR_SPACE_TYPE ColorSpace);
typedef VOID ( APIENTRY* PFND3DWDDM2_0DDI_VIDEOPROCESSORSETOUTPUTSHADERUSAGE )(
    _In_ D3D10DDI_HDEVICE hDevice, 
    _In_ D3D11_1DDI_HVIDEOPROCESSOR hVideoProcessor, 
    _In_ BOOL ShaderUsage);
typedef VOID ( APIENTRY* PFND3DWDDM2_0DDI_VIDEOPROCESSORSETSTREAMCOLORSPACE1 )( 
    _In_ D3D10DDI_HDEVICE hDevice, 
    _In_ D3D11_1DDI_HVIDEOPROCESSOR hVideoProcessor, 
    _In_ UINT StreamIndex,  
    _In_ D3DDDI_COLOR_SPACE_TYPE ColorSpace);
typedef VOID ( APIENTRY* PFND3DWDDM2_0DDI_VIDEOPROCESSORSETSTREAMMIRROR )( 
    _In_ D3D10DDI_HDEVICE hDevice,  
    _In_ D3D11_1DDI_HVIDEOPROCESSOR hVideoProcessor,  
    _In_ UINT StreamIndex,  
    _In_ BOOL Enable,  
    _In_ BOOL FlipHorizontal,  
    _In_ BOOL FlipVertical);
typedef HRESULT ( APIENTRY* PFND3DWDDM2_0DDI_VIDEOPROCESSORGETBEHAVIORHINTS )(
    _In_ D3D10DDI_HDEVICE hDevice,  
    _In_ D3D11_1DDI_HVIDEOPROCESSOR hVideoProcessor,  
    _In_ UINT OutputWidth,
    _In_ UINT OutputHeight,
    _In_ DXGI_FORMAT OutputFormat,
    _In_ UINT StreamCount,
    _In_reads_(StreamCount) const D3DWDDM2_0DDI_VIDEO_PROCESSOR_STREAM_BEHAVIOR_HINT *pStreams,
    _Out_ UINT* pBehaviorHints);
typedef void ( APIENTRY* PFND3DWDDM2_0DDI_GETCRYPTOSESSIONPRIVATEDATASIZE ) (
    _In_ D3D10DDI_HDEVICE hDevice, 
    _In_ CONST GUID* pCryptoType,
    _In_opt_ CONST GUID* pDecoderProfile,
    _In_ CONST GUID* pKeyExchangeType,
    _Out_ UINT* pPrivateInputSize,
    _Out_ UINT* pPrivateOutputSize);
    
//----------------------------------------------------------------------------------------------------------------------------------
// User mode device function table 2.0 video
//
typedef struct D3DWDDM2_0DDI_VIDEODEVICEFUNCS
{
    PFND3D11_1DDI_GETVIDEODECODERPROFILECOUNT                 pfnGetVideoDecoderProfileCount;
    PFND3D11_1DDI_GETVIDEODECODERPROFILE                      pfnGetVideoDecoderProfile;
    PFND3D11_1DDI_CHECKVIDEODECODERFORMAT                     pfnCheckVideoDecoderFormat;
    PFND3D11_1DDI_GETVIDEODECODERCONFIGCOUNT                  pfnGetVideoDecoderConfigCount;
    PFND3D11_1DDI_GETVIDEODECODERCONFIG                       pfnGetVideoDecoderConfig;
    PFND3D11_1DDI_GETVIDEODECODERBUFFERTYPECOUNT              pfnGetVideoDecoderBufferTypeCount;
    PFND3D11_1DDI_GETVIDEODECODERBUFFERINFO                   pfnGetVideoDecoderBufferInfo;
    PFND3D11_1DDI_CALCPRIVATEVIDEODECODERSIZE                 pfnCalcPrivateVideoDecoderSize;
    PFND3D11_1DDI_CREATEVIDEODECODER                          pfnCreateVideoDecoder;
    PFND3D11_1DDI_DESTROYVIDEODECODER                         pfnDestroyVideoDecoder;
    PFND3D11_1DDI_VIDEODECODEREXTENSION                       pfnVideoDecoderExtension;
    PFND3D11_1DDI_VIDEODECODERBEGINFRAME                      pfnVideoDecoderBeginFrame;
    PFND3D11_1DDI_VIDEODECODERENDFRAME                        pfnVideoDecoderEndFrame;
    PFND3D11_1DDI_VIDEODECODERSUBMITBUFFERS                   pfnVideoDecoderSubmitBuffers;
    PFND3D11_1DDI_CALCPRIVATEVIDEOPROCESSORENUMSIZE           pfnCalcPrivateVideoProcessorEnumSize;
    PFND3D11_1DDI_CREATEVIDEOPROCESSORENUM                    pfnCreateVideoProcessorEnum;
    PFND3D11_1DDI_DESTROYVIDEOPROCESSORENUM                   pfnDestroyVideoProcessorEnum;
    PFND3D11_1DDI_CHECKVIDEOPROCESSORFORMAT                   pfnCheckVideoProcessorFormat;
    PFND3D11_1DDI_GETVIDEOPROCESSORCAPS                       pfnGetVideoProcessorCaps;
    PFND3D11_1DDI_GETVIDEOPROCESSORRATECONVERSIONCAPS         pfnGetVideoProcessorRateConversionCaps;
    PFND3D11_1DDI_GETVIDEOPROCESSORCUSTOMRATE                 pfnGetVideoProcessorCustomRate;
    PFND3D11_1DDI_GETVIDEOPROCESSORFILTERRANGE                pfnGetVideoProcessorFilterRange;
    PFND3D11_1DDI_CALCPRIVATEVIDEOPROCESSORSIZE               pfnCalcPrivateVideoProcessorSize;
    PFND3D11_1DDI_CREATEVIDEOPROCESSOR                        pfnCreateVideoProcessor;
    PFND3D11_1DDI_DESTROYVIDEOPROCESSOR                       pfnDestroyVideoProcessor;
    PFND3D11_1DDI_VIDEOPROCESSORSETOUTPUTTARGETRECT           pfnVideoProcessorSetOutputTargetRect;
    PFND3D11_1DDI_VIDEOPROCESSORSETOUTPUTBACKGROUNDCOLOR      pfnVideoProcessorSetOutputBackgroundColor;
    PFND3D11_1DDI_VIDEOPROCESSORSETOUTPUTCOLORSPACE           pfnVideoProcessorSetOutputColorSpace;
    PFND3D11_1DDI_VIDEOPROCESSORSETOUTPUTALPHAFILLMODE        pfnVideoProcessorSetOutputAlphaFillMode;
    PFND3D11_1DDI_VIDEOPROCESSORSETOUTPUTCONSTRICTION         pfnVideoProcessorSetOutputConstriction;
    PFND3D11_1DDI_VIDEOPROCESSORSETOUTPUTSTEREOMODE           pfnVideoProcessorSetOutputStereoMode;
    PFND3D11_1DDI_VIDEOPROCESSORSETOUTPUTEXTENSION            pfnVideoProcessorSetOutputExtension;
    PFND3D11_1DDI_VIDEOPROCESSORGETOUTPUTEXTENSION            pfnVideoProcessorGetOutputExtension;
    PFND3D11_1DDI_VIDEOPROCESSORSETSTREAMFRAMEFORMAT          pfnVideoProcessorSetStreamFrameFormat;
    PFND3D11_1DDI_VIDEOPROCESSORSETSTREAMCOLORSPACE           pfnVideoProcessorSetStreamColorSpace;
    PFND3D11_1DDI_VIDEOPROCESSORSETSTREAMOUTPUTRATE           pfnVideoProcessorSetStreamOutputRate;
    PFND3D11_1DDI_VIDEOPROCESSORSETSTREAMSOURCERECT           pfnVideoProcessorSetStreamSourceRect;
    PFND3D11_1DDI_VIDEOPROCESSORSETSTREAMDESTRECT             pfnVideoProcessorSetStreamDestRect;
    PFND3D11_1DDI_VIDEOPROCESSORSETSTREAMALPHA                pfnVideoProcessorSetStreamAlpha;
    PFND3D11_1DDI_VIDEOPROCESSORSETSTREAMPALETTE              pfnVideoProcessorSetStreamPalette;
    PFND3D11_1DDI_VIDEOPROCESSORSETSTREAMPIXELASPECTRATIO     pfnVideoProcessorSetStreamPixelAspectRatio;
    PFND3D11_1DDI_VIDEOPROCESSORSETSTREAMLUMAKEY              pfnVideoProcessorSetStreamLumaKey;
    PFND3D11_1DDI_VIDEOPROCESSORSETSTREAMSTEREOFORMAT         pfnVideoProcessorSetStreamStereoFormat;
    PFND3D11_1DDI_VIDEOPROCESSORSETSTREAMAUTOPROCESSINGMODE   pfnVideoProcessorSetStreamAutoProcessingMode;
    PFND3D11_1DDI_VIDEOPROCESSORSETSTREAMFILTER               pfnVideoProcessorSetStreamFilter;
    PFND3D11_1DDI_VIDEOPROCESSORSETSTREAMEXTENSION            pfnVideoProcessorSetStreamExtension;
    PFND3D11_1DDI_VIDEOPROCESSORGETSTREAMEXTENSION            pfnVideoProcessorGetStreamExtension;
    PFND3D11_1DDI_VIDEOPROCESSORBLT                           pfnVideoProcessorBlt;
    PFND3D11_1DDI_CALCPRIVATEVIDEODECODEROUTPUTVIEWSIZE       pfnCalcPrivateVideoDecoderOutputViewSize;
    PFND3D11_1DDI_CREATEVIDEODECODEROUTPUTVIEW                pfnCreateVideoDecoderOutputView;
    PFND3D11_1DDI_DESTROYVIDEODECODEROUTPUTVIEW               pfnDestroyVideoDecoderOutputView;
    PFND3D11_1DDI_CALCPRIVATEVIDEOPROCESSORINPUTVIEWSIZE      pfnCalcPrivateVideoProcessorInputViewSize;
    PFND3D11_1DDI_CREATEVIDEOPROCESSORINPUTVIEW               pfnCreateVideoProcessorInputView;
    PFND3D11_1DDI_DESTROYVIDEOPROCESSORINPUTVIEW              pfnDestroyVideoProcessorInputView;
    PFND3D11_1DDI_CALCPRIVATEVIDEOPROCESSOROUTPUTVIEWSIZE     pfnCalcPrivateVideoProcessorOutputViewSize;
    PFND3D11_1DDI_CREATEVIDEOPROCESSOROUTPUTVIEW              pfnCreateVideoProcessorOutputView;
    PFND3D11_1DDI_DESTROYVIDEOPROCESSOROUTPUTVIEW             pfnDestroyVideoProcessorOutputView;
    PFND3D11_1DDI_VIDEOPROCESSORINPUTVIEWREADAFTERWRITEHAZARD pfnVideoProcessorInputViewReadAfterWriteHazard;
    PFND3D11_1DDI_GETCONTENTPROTECTIONCAPS                    pfnGetContentProtectionCaps;
    PFND3D11_1DDI_GETCRYPTOKEYEXCHANGETYPE                    pfnGetCryptoKeyExchangeType;
    PFND3D11_1DDI_CALCPRIVATECRYPTOSESSIONSIZE                pfnCalcPrivateCryptoSessionSize;
    PFND3D11_1DDI_CREATECRYPTOSESSION                         pfnCreateCryptoSession;
    PFND3D11_1DDI_DESTROYCRYPTOSESSION                        pfnDestroyCryptoSession;
    PFND3D11_1DDI_GETCERTIFICATESIZE                          pfnGetCertificateSize;
    PFND3D11_1DDI_GETCERTIFICATE                              pfnGetCertificate;
    PFND3D11_1DDI_NEGOTIATECRYPTOSESSIONKEYESCHANGE           pfnNegotiateCryptoSessionKeyExchange;
    PFND3D11_1DDI_ENCRYPTIONBLT                               pfnEncryptionBlt;
    PFND3D11_1DDI_DECRYPTIONBLT                               pfnDecryptionBlt;
    PFND3D11_1DDI_STARTSESSIONKEYREFRESH                      pfnStartSessionKeyRefresh;
    PFND3D11_1DDI_FINISHSESSIONKEYREFRESH                     pfnFinishSessionKeyRefresh;
    PFND3D11_1DDI_GETENCRYPTIONBLTKEY                         pfnGetEncryptionBltKey;
    PFND3D11_1DDI_CALCPRIVATEAUTHENTICATEDCHANNELSIZE         pfnCalcPrivateAuthenticatedChannelSize;
    PFND3D11_1DDI_CREATEAUTHENTICATEDCHANNEL                  pfnCreateAuthenticatedChannel;
    PFND3D11_1DDI_DESTROYAUTHENTICATEDCHANNEL                 pfnDestroyAuthenticatedChannel;
    PFND3D11_1DDI_NEGOTIATEAUTHENTICATEDCHANNELKEYEXCHANGE    pfnNegotiateAuthenticatedChannelKeyExchange;
    PFND3D11_1DDI_QUERYAUTHENTICATEDCHANNEL                   pfnQueryAuthenticatedChannel;
    PFND3D11_1DDI_CONFIGUREAUTHENTICATEDCHANNEL               pfnConfigureAuthenticatedChannel;
    PFND3D11_1DDI_VIDEODECODERGETHANDLE                       pfnVideoDecoderGetHandle;
    PFND3D11_1DDI_CRYPTOSESSIONGETHANDLE                      pfnCryptoSessionGetHandle;
    PFND3D11_1DDI_VIDEOPROCESSORSETSTREAMROTATION             pfnVideoProcessorSetStreamRotation;
    PFND3D11_1DDI_GETCAPTUREHANDLE                            pfnGetCaptureHandle;

    // New video DDIs
    PFND3DWDDM2_0DDI_GETDATAFORNEWHARDWAREKEY                 pfnGetDataForNewHardwareKey;
    PFND3DWDDM2_0DDI_CHECKCRYPTOSESSIONSTATUS                 pfnCheckCryptoSessionStatus;
    PFND3DWDDM2_0DDI_VIDEODECODERSUBMITBUFFERS1               pfnVideoDecoderSubmitBuffers1;
    PFND3DWDDM2_0DDI_QUERYVIDEOCAPABILITIES                   pfnQueryVideoCapabilities; 
    PFND3DWDDM2_0DDI_CHECKVIDEOPROCESSORFORMATCONVERSION      pfnCheckVideoProcessorFormatConversion; 
    PFND3DWDDM2_0DDI_VIDEODECODERENABLEDOWNSAMPLING           pfnVideoDecoderEnableDownsampling; 
    PFND3DWDDM2_0DDI_VIDEODECODERUPDATEDOWNSAMPLING           pfnVideoDecoderUpdateDownsampling;  
    PFND3DWDDM2_0DDI_VIDEOPROCESSORSETSTREAMMIRROR            pfnVideoProcessorSetStreamMirror; 
    PFND3DWDDM2_0DDI_VIDEOPROCESSORSETOUTPUTCOLORSPACE1       pfnVideoProcessorSetOutputColorSpace1;
    PFND3DWDDM2_0DDI_VIDEOPROCESSORSETSTREAMCOLORSPACE1       pfnVideoProcessorSetStreamColorSpace1;
    PFND3DWDDM2_0DDI_VIDEOPROCESSORSETOUTPUTSHADERUSAGE       pfnVideoProcessorSetOutputShaderUsage;
    PFND3DWDDM2_0DDI_VIDEOPROCESSORGETBEHAVIORHINTS           pfnVideoProcessorGetBehaviorHints;
    PFND3DWDDM2_0DDI_GETCRYPTOSESSIONPRIVATEDATASIZE          pfnGetCryptoSessionPrivateDataSize;
} D3DWDDM2_0DDI_VIDEODEVICEFUNCS;

typedef struct D3DWDDM2_0DDI_VIDEO_INPUT
{
   BOOL Relocate;
   D3DWDDM2_0DDI_VIDEODEVICEFUNCS*           pWDDM2_0VideoDeviceFuncs;
} D3DWDDM2_0DDI_VIDEO_INPUT;

typedef struct D3DWDDM2_0DDI_VIDEO_OUTPUT
{
    UINT8 Reserved; // C doesn't allow empty structures. They are, at least, the size of a byte.
} D3DWDDM2_0DDI_VIDEO_OUTPUT;


#endif // D3D11DDI_MINOR_HEADER_VERSION

#if D3D11DDI_MINOR_HEADER_VERSION >= 10

//----------------------------------------------------------------------------------------------------------------------------------
// User mode DDI device function definitions WDDM 2.1 video
//
typedef VOID ( APIENTRY* PFND3DWDDM2_1DDI_VIDEOPROCESSORSETOUTPUTHDRMETADATA )(
    _In_ D3D10DDI_HDEVICE hDevice,
    _In_ D3D11_1DDI_HVIDEOPROCESSOR hVideoProcessor,
    _In_ D3DDDI_HDR_METADATA_TYPE Type,
    _In_ UINT Size,
    _In_ CONST VOID* pMetaData);
typedef VOID ( APIENTRY* PFND3DWDDM2_1DDI_VIDEOPROCESSORSETSTREAMHDRMETADATA )(
    _In_ D3D10DDI_HDEVICE hDevice,
    _In_ D3D11_1DDI_HVIDEOPROCESSOR hVideoProcessor,
    _In_ UINT StreamIndex, 
    _In_ D3DDDI_HDR_METADATA_TYPE Type,
    _In_ UINT Size,
    _In_ CONST VOID* pMetaData);

//----------------------------------------------------------------------------------------------------------------------------------
// User mode device function table 2.1 video
//
typedef struct D3DWDDM2_1DDI_VIDEODEVICEFUNCS
{
    PFND3D11_1DDI_GETVIDEODECODERPROFILECOUNT                 pfnGetVideoDecoderProfileCount;
    PFND3D11_1DDI_GETVIDEODECODERPROFILE                      pfnGetVideoDecoderProfile;
    PFND3D11_1DDI_CHECKVIDEODECODERFORMAT                     pfnCheckVideoDecoderFormat;
    PFND3D11_1DDI_GETVIDEODECODERCONFIGCOUNT                  pfnGetVideoDecoderConfigCount;
    PFND3D11_1DDI_GETVIDEODECODERCONFIG                       pfnGetVideoDecoderConfig;
    PFND3D11_1DDI_GETVIDEODECODERBUFFERTYPECOUNT              pfnGetVideoDecoderBufferTypeCount;
    PFND3D11_1DDI_GETVIDEODECODERBUFFERINFO                   pfnGetVideoDecoderBufferInfo;
    PFND3D11_1DDI_CALCPRIVATEVIDEODECODERSIZE                 pfnCalcPrivateVideoDecoderSize;
    PFND3D11_1DDI_CREATEVIDEODECODER                          pfnCreateVideoDecoder;
    PFND3D11_1DDI_DESTROYVIDEODECODER                         pfnDestroyVideoDecoder;
    PFND3D11_1DDI_VIDEODECODEREXTENSION                       pfnVideoDecoderExtension;
    PFND3D11_1DDI_VIDEODECODERBEGINFRAME                      pfnVideoDecoderBeginFrame;
    PFND3D11_1DDI_VIDEODECODERENDFRAME                        pfnVideoDecoderEndFrame;
    PFND3D11_1DDI_VIDEODECODERSUBMITBUFFERS                   pfnVideoDecoderSubmitBuffers;
    PFND3D11_1DDI_CALCPRIVATEVIDEOPROCESSORENUMSIZE           pfnCalcPrivateVideoProcessorEnumSize;
    PFND3D11_1DDI_CREATEVIDEOPROCESSORENUM                    pfnCreateVideoProcessorEnum;
    PFND3D11_1DDI_DESTROYVIDEOPROCESSORENUM                   pfnDestroyVideoProcessorEnum;
    PFND3D11_1DDI_CHECKVIDEOPROCESSORFORMAT                   pfnCheckVideoProcessorFormat;
    PFND3D11_1DDI_GETVIDEOPROCESSORCAPS                       pfnGetVideoProcessorCaps;
    PFND3D11_1DDI_GETVIDEOPROCESSORRATECONVERSIONCAPS         pfnGetVideoProcessorRateConversionCaps;
    PFND3D11_1DDI_GETVIDEOPROCESSORCUSTOMRATE                 pfnGetVideoProcessorCustomRate;
    PFND3D11_1DDI_GETVIDEOPROCESSORFILTERRANGE                pfnGetVideoProcessorFilterRange;
    PFND3D11_1DDI_CALCPRIVATEVIDEOPROCESSORSIZE               pfnCalcPrivateVideoProcessorSize;
    PFND3D11_1DDI_CREATEVIDEOPROCESSOR                        pfnCreateVideoProcessor;
    PFND3D11_1DDI_DESTROYVIDEOPROCESSOR                       pfnDestroyVideoProcessor;
    PFND3D11_1DDI_VIDEOPROCESSORSETOUTPUTTARGETRECT           pfnVideoProcessorSetOutputTargetRect;
    PFND3D11_1DDI_VIDEOPROCESSORSETOUTPUTBACKGROUNDCOLOR      pfnVideoProcessorSetOutputBackgroundColor;
    PFND3D11_1DDI_VIDEOPROCESSORSETOUTPUTCOLORSPACE           pfnVideoProcessorSetOutputColorSpace;
    PFND3D11_1DDI_VIDEOPROCESSORSETOUTPUTALPHAFILLMODE        pfnVideoProcessorSetOutputAlphaFillMode;
    PFND3D11_1DDI_VIDEOPROCESSORSETOUTPUTCONSTRICTION         pfnVideoProcessorSetOutputConstriction;
    PFND3D11_1DDI_VIDEOPROCESSORSETOUTPUTSTEREOMODE           pfnVideoProcessorSetOutputStereoMode;
    PFND3D11_1DDI_VIDEOPROCESSORSETOUTPUTEXTENSION            pfnVideoProcessorSetOutputExtension;
    PFND3D11_1DDI_VIDEOPROCESSORGETOUTPUTEXTENSION            pfnVideoProcessorGetOutputExtension;
    PFND3D11_1DDI_VIDEOPROCESSORSETSTREAMFRAMEFORMAT          pfnVideoProcessorSetStreamFrameFormat;
    PFND3D11_1DDI_VIDEOPROCESSORSETSTREAMCOLORSPACE           pfnVideoProcessorSetStreamColorSpace;
    PFND3D11_1DDI_VIDEOPROCESSORSETSTREAMOUTPUTRATE           pfnVideoProcessorSetStreamOutputRate;
    PFND3D11_1DDI_VIDEOPROCESSORSETSTREAMSOURCERECT           pfnVideoProcessorSetStreamSourceRect;
    PFND3D11_1DDI_VIDEOPROCESSORSETSTREAMDESTRECT             pfnVideoProcessorSetStreamDestRect;
    PFND3D11_1DDI_VIDEOPROCESSORSETSTREAMALPHA                pfnVideoProcessorSetStreamAlpha;
    PFND3D11_1DDI_VIDEOPROCESSORSETSTREAMPALETTE              pfnVideoProcessorSetStreamPalette;
    PFND3D11_1DDI_VIDEOPROCESSORSETSTREAMPIXELASPECTRATIO     pfnVideoProcessorSetStreamPixelAspectRatio;
    PFND3D11_1DDI_VIDEOPROCESSORSETSTREAMLUMAKEY              pfnVideoProcessorSetStreamLumaKey;
    PFND3D11_1DDI_VIDEOPROCESSORSETSTREAMSTEREOFORMAT         pfnVideoProcessorSetStreamStereoFormat;
    PFND3D11_1DDI_VIDEOPROCESSORSETSTREAMAUTOPROCESSINGMODE   pfnVideoProcessorSetStreamAutoProcessingMode;
    PFND3D11_1DDI_VIDEOPROCESSORSETSTREAMFILTER               pfnVideoProcessorSetStreamFilter;
    PFND3D11_1DDI_VIDEOPROCESSORSETSTREAMEXTENSION            pfnVideoProcessorSetStreamExtension;
    PFND3D11_1DDI_VIDEOPROCESSORGETSTREAMEXTENSION            pfnVideoProcessorGetStreamExtension;
    PFND3D11_1DDI_VIDEOPROCESSORBLT                           pfnVideoProcessorBlt;
    PFND3D11_1DDI_CALCPRIVATEVIDEODECODEROUTPUTVIEWSIZE       pfnCalcPrivateVideoDecoderOutputViewSize;
    PFND3D11_1DDI_CREATEVIDEODECODEROUTPUTVIEW                pfnCreateVideoDecoderOutputView;
    PFND3D11_1DDI_DESTROYVIDEODECODEROUTPUTVIEW               pfnDestroyVideoDecoderOutputView;
    PFND3D11_1DDI_CALCPRIVATEVIDEOPROCESSORINPUTVIEWSIZE      pfnCalcPrivateVideoProcessorInputViewSize;
    PFND3D11_1DDI_CREATEVIDEOPROCESSORINPUTVIEW               pfnCreateVideoProcessorInputView;
    PFND3D11_1DDI_DESTROYVIDEOPROCESSORINPUTVIEW              pfnDestroyVideoProcessorInputView;
    PFND3D11_1DDI_CALCPRIVATEVIDEOPROCESSOROUTPUTVIEWSIZE     pfnCalcPrivateVideoProcessorOutputViewSize;
    PFND3D11_1DDI_CREATEVIDEOPROCESSOROUTPUTVIEW              pfnCreateVideoProcessorOutputView;
    PFND3D11_1DDI_DESTROYVIDEOPROCESSOROUTPUTVIEW             pfnDestroyVideoProcessorOutputView;
    PFND3D11_1DDI_VIDEOPROCESSORINPUTVIEWREADAFTERWRITEHAZARD pfnVideoProcessorInputViewReadAfterWriteHazard;
    PFND3D11_1DDI_GETCONTENTPROTECTIONCAPS                    pfnGetContentProtectionCaps;
    PFND3D11_1DDI_GETCRYPTOKEYEXCHANGETYPE                    pfnGetCryptoKeyExchangeType;
    PFND3D11_1DDI_CALCPRIVATECRYPTOSESSIONSIZE                pfnCalcPrivateCryptoSessionSize;
    PFND3D11_1DDI_CREATECRYPTOSESSION                         pfnCreateCryptoSession;
    PFND3D11_1DDI_DESTROYCRYPTOSESSION                        pfnDestroyCryptoSession;
    PFND3D11_1DDI_GETCERTIFICATESIZE                          pfnGetCertificateSize;
    PFND3D11_1DDI_GETCERTIFICATE                              pfnGetCertificate;
    PFND3D11_1DDI_NEGOTIATECRYPTOSESSIONKEYESCHANGE           pfnNegotiateCryptoSessionKeyExchange;
    PFND3D11_1DDI_ENCRYPTIONBLT                               pfnEncryptionBlt;
    PFND3D11_1DDI_DECRYPTIONBLT                               pfnDecryptionBlt;
    PFND3D11_1DDI_STARTSESSIONKEYREFRESH                      pfnStartSessionKeyRefresh;
    PFND3D11_1DDI_FINISHSESSIONKEYREFRESH                     pfnFinishSessionKeyRefresh;
    PFND3D11_1DDI_GETENCRYPTIONBLTKEY                         pfnGetEncryptionBltKey;
    PFND3D11_1DDI_CALCPRIVATEAUTHENTICATEDCHANNELSIZE         pfnCalcPrivateAuthenticatedChannelSize;
    PFND3D11_1DDI_CREATEAUTHENTICATEDCHANNEL                  pfnCreateAuthenticatedChannel;
    PFND3D11_1DDI_DESTROYAUTHENTICATEDCHANNEL                 pfnDestroyAuthenticatedChannel;
    PFND3D11_1DDI_NEGOTIATEAUTHENTICATEDCHANNELKEYEXCHANGE    pfnNegotiateAuthenticatedChannelKeyExchange;
    PFND3D11_1DDI_QUERYAUTHENTICATEDCHANNEL                   pfnQueryAuthenticatedChannel;
    PFND3D11_1DDI_CONFIGUREAUTHENTICATEDCHANNEL               pfnConfigureAuthenticatedChannel;
    PFND3D11_1DDI_VIDEODECODERGETHANDLE                       pfnVideoDecoderGetHandle;
    PFND3D11_1DDI_CRYPTOSESSIONGETHANDLE                      pfnCryptoSessionGetHandle;
    PFND3D11_1DDI_VIDEOPROCESSORSETSTREAMROTATION             pfnVideoProcessorSetStreamRotation;
    PFND3D11_1DDI_GETCAPTUREHANDLE                            pfnGetCaptureHandle;

    // 2.0 video DDIs
    PFND3DWDDM2_0DDI_GETDATAFORNEWHARDWAREKEY                 pfnGetDataForNewHardwareKey;
    PFND3DWDDM2_0DDI_CHECKCRYPTOSESSIONSTATUS                 pfnCheckCryptoSessionStatus;
    PFND3DWDDM2_0DDI_VIDEODECODERSUBMITBUFFERS1               pfnVideoDecoderSubmitBuffers1;
    PFND3DWDDM2_0DDI_QUERYVIDEOCAPABILITIES                   pfnQueryVideoCapabilities; 
    PFND3DWDDM2_0DDI_CHECKVIDEOPROCESSORFORMATCONVERSION      pfnCheckVideoProcessorFormatConversion; 
    PFND3DWDDM2_0DDI_VIDEODECODERENABLEDOWNSAMPLING           pfnVideoDecoderEnableDownsampling; 
    PFND3DWDDM2_0DDI_VIDEODECODERUPDATEDOWNSAMPLING           pfnVideoDecoderUpdateDownsampling;  
    PFND3DWDDM2_0DDI_VIDEOPROCESSORSETSTREAMMIRROR            pfnVideoProcessorSetStreamMirror; 
    PFND3DWDDM2_0DDI_VIDEOPROCESSORSETOUTPUTCOLORSPACE1       pfnVideoProcessorSetOutputColorSpace1;
    PFND3DWDDM2_0DDI_VIDEOPROCESSORSETSTREAMCOLORSPACE1       pfnVideoProcessorSetStreamColorSpace1;
    PFND3DWDDM2_0DDI_VIDEOPROCESSORSETOUTPUTSHADERUSAGE       pfnVideoProcessorSetOutputShaderUsage;
    PFND3DWDDM2_0DDI_VIDEOPROCESSORGETBEHAVIORHINTS           pfnVideoProcessorGetBehaviorHints;
    PFND3DWDDM2_0DDI_GETCRYPTOSESSIONPRIVATEDATASIZE          pfnGetCryptoSessionPrivateDataSize;

    // 2.1 video DDIs
    PFND3DWDDM2_1DDI_VIDEOPROCESSORSETOUTPUTHDRMETADATA       pfnVideoProcessorSetOutputHDRMetaData;
    PFND3DWDDM2_1DDI_VIDEOPROCESSORSETSTREAMHDRMETADATA       pfnVideoProcessorSetStreamHDRMetaData;
} D3DWDDM2_1DDI_VIDEODEVICEFUNCS;

typedef struct D3DWDDM2_1DDI_VIDEO_INPUT
{
   BOOL Relocate;
   D3DWDDM2_1DDI_VIDEODEVICEFUNCS*           pWDDM2_1VideoDeviceFuncs;
} D3DWDDM2_1DDI_VIDEO_INPUT;

typedef struct D3DWDDM2_1DDI_VIDEO_OUTPUT
{
    UINT8 Reserved; // C doesn't allow empty structures. They are, at least, the size of a byte.
} D3DWDDM2_1DDI_VIDEO_OUTPUT;
#endif /*D3D11DDI_MINOR_HEADER_VERSION >= 10*/

#if D3D11DDI_MINOR_HEADER_VERSION >= 4
//----------------------------------------------------------------------------------------------------------------------------------
// WDDM 1.3 DDI
//

typedef struct D3DWDDM1_3DDI_TILED_RESOURCE_COORDINATE
{
    // Coordinate values below index tiles (not pixels or bytes).
    UINT X; // Used for buffer, 1D, 2D, 3D
    UINT Y; // Used for 2D, 3D
    UINT Z; // Used for 3D
    UINT Subresource; // indexes into mips, arrays. Used for 1D, 2D, 3D
    // For mipmaps that are packed into a single tile, any subresource
    // value that indicates any of the packed mips all refer to the same tile.
} D3DWDDM1_3DDI_TILED_RESOURCE_COORDINATE;

typedef struct D3DWDDM1_3DDI_TILE_REGION_SIZE
{
    UINT NumTiles;
    BOOL bUseBox; // TRUE: Uses width/height/depth parameters below to define the region.
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
} D3DWDDM1_3DDI_TILE_REGION_SIZE;

typedef enum D3DWDDM1_3DDI_TILE_MAPPING_FLAG
{
    D3DWDDM1_3DDI_TILE_MAPPING_NO_OVERWRITE = 0x00000001,
} D3DWDDM1_3DDI_TILE_MAPPING_FLAG;

typedef enum D3DWDDM1_3DDI_TILE_RANGE_FLAG
{
    D3DWDDM_1_3DDI_TILE_RANGE_NULL = 0x00000001,
    D3DWDDM_1_3DDI_TILE_RANGE_SKIP = 0x00000002,
    D3DWDDM_1_3DDI_TILE_RANGE_REUSE_SINGLE_TILE = 0x00000004,
} D3DWDDM1_3DDI_TILE_RANGE_FLAG;

typedef enum D3DWDDM1_3DDI_TILE_COPY_FLAG
{
    D3DWDDM1_3DDI_TILE_COPY_NO_OVERWRITE = 0x00000001,
    D3DWDDM1_3DDI_TILE_COPY_LINEAR_BUFFER_TO_SWIZZLED_TILED_RESOURCE = 0x00000002,
    D3DWDDM1_3DDI_TILE_COPY_SWIZZLED_TILED_RESOURCE_TO_LINEAR_BUFFER = 0x00000004,
} D3DWDDM1_3DDI_TILE_COPY_FLAG;

typedef enum D3DWDDM1_3DDI_CHECK_MULTISAMPLE_QUALITY_LEVELS_FLAG
{
    D3DWDDM1_3DDI_CHECK_MULTISAMPLE_QUALITY_LEVELS_TILED_RESOURCE = 0x00000001,
} D3DWDDM1_3DDI_CHECK_MULTISAMPLE_QUALITY_LEVELS_FLAG;

//----------------------------------------------------------------------------------------------------------------------------------
// User mode DDI device function definitions WDDM 1.3
//

typedef VOID ( APIENTRY* PFND3DWDDM1_3DDI_RELOCATEDEVICEFUNCS )(
    D3D10DDI_HDEVICE, _In_ struct D3DWDDM1_3DDI_DEVICEFUNCS* );

typedef VOID ( APIENTRY* PFND3DWDDM1_3DDI_UPDATETILEMAPPINGS )(
    D3D10DDI_HDEVICE hDevice,
    D3D10DDI_HRESOURCE hTiledResource,
    UINT NumTiledResourceRegions,
    _In_reads_(NumTiledResourceRegions) const D3DWDDM1_3DDI_TILED_RESOURCE_COORDINATE* pTiledResourceRegionStartCoords,
    _In_reads_opt_(NumTiledResourceRegions) const D3DWDDM1_3DDI_TILE_REGION_SIZE* pTiledResourceRegionSizes,
    D3D10DDI_HRESOURCE hTilePool,
    UINT NumRanges,
    _In_reads_opt_(NumRanges) const UINT* pRangeFlags, // D3DWDDM1_3DDI_TILE_RANGE_FLAG
    _In_reads_opt_(NumRanges) const UINT* pTilePoolStartOffsets,
    _In_reads_opt_(NumRanges) const UINT* pRangeTileCounts,
    UINT Flags // D3DWDDM1_3DDI_TILE_MAPPING_FLAG
);

typedef VOID ( APIENTRY* PFND3DWDDM1_3DDI_COPYTILEMAPPINGS )(
    D3D10DDI_HDEVICE hDevice,
    D3D10DDI_HRESOURCE hDestTiledResource,
    _In_ const D3DWDDM1_3DDI_TILED_RESOURCE_COORDINATE* pDestRegionStartCoord,
    D3D10DDI_HRESOURCE hSourceTiledResource,
    _In_ const D3DWDDM1_3DDI_TILED_RESOURCE_COORDINATE* pSourceRegionStartCoord,
    _In_ const D3DWDDM1_3DDI_TILE_REGION_SIZE* pTileRegionSize,
    UINT Flags // D3DWDDM1_3DDI_TILE_MAPPING_FLAGS
);

typedef VOID ( APIENTRY* PFND3DWDDM1_3DDI_COPYTILES )(
    D3D10DDI_HDEVICE hDevice,
    D3D10DDI_HRESOURCE hTiledResource,
    _In_ const D3DWDDM1_3DDI_TILED_RESOURCE_COORDINATE* pTileRegionStartCoord,
    _In_ const D3DWDDM1_3DDI_TILE_REGION_SIZE* pTileRegionSize,
    D3D10DDI_HRESOURCE hBuffer, // Default, dynamic or staging buffer
    UINT64 BufferStartOffsetInBytes,
    UINT Flags // D3DWDDM1_3DDI_TILE_COPY_FLAGS
);

typedef VOID ( APIENTRY* PFND3DWDDM1_3DDI_UPDATETILES )(
    D3D10DDI_HDEVICE hDevice,
    D3D10DDI_HRESOURCE hDestTiledResource,
    _In_ const D3DWDDM1_3DDI_TILED_RESOURCE_COORDINATE* pDestTileRegionStartCoord,
    _In_ const D3DWDDM1_3DDI_TILE_REGION_SIZE* pDestTileRegionSize,
    _In_ const VOID* pSourceTileData, // caller memory
    UINT Flags // D3DWDDM1_3DDI_TILE_COPY_FLAGS
);

typedef VOID ( APIENTRY* PFND3DWDDM1_3DDI_TILEDRESOURCEBARRIER )(
    D3D10DDI_HDEVICE hDevice,
    D3D11DDI_HANDLETYPE TiledResourceAccessBeforeBarrierHandleType,
    _In_opt_ VOID* hTiledResourceAccessBeforeBarrier,
    D3D11DDI_HANDLETYPE TiledResourceAccessAfterBarrierHandleType,
    _In_opt_ VOID* hTiledResourceAccessAfterBarrier
);

typedef VOID ( APIENTRY* PFND3DWDDM1_3DDI_GETMIPPACKING )(
    D3D10DDI_HDEVICE hDevice,
    D3D10DDI_HRESOURCE hTiledResource,
    _Out_ UINT* pNumPackedMips,
    _Out_ UINT* pNumTilesForPackedMips
);

typedef VOID ( APIENTRY* PFND3DWDDM1_3DDI_CHECKMULTISAMPLEQUALITYLEVELS )(
    D3D10DDI_HDEVICE hDevice,
    DXGI_FORMAT Format,
    UINT SampleCount,
    UINT Flags, // D3DWDDM1_3DDI_CHECK_MULTISAMPLE_QUALITY_LEVELS_FLAGS
    _Out_ UINT* pNumQualityLevels
);

typedef VOID ( APIENTRY* PFND3DWDDM1_3DDI_RESIZETILEPOOL )(
    D3D10DDI_HDEVICE hDevice,
    D3D10DDI_HRESOURCE hTilePool,
    UINT64 NewSizeInBytes
);

typedef enum D3DWDDM1_3DDI_MARKER_TYPE
{
    D3DWDDM1_3DDI_MARKER_TYPE_NONE,
    D3DWDDM1_3DDI_MARKER_TYPE_PROFILE,
} D3DWDDM1_3DDI_MARKER_TYPE;

#define D3DWDDM1_3DDI_SETMARKERMODE_CUSTOMDRIVEREVENTS 0x1

typedef VOID ( APIENTRY* PFND3DWDDM1_3DDI_SETMARKERMODE )(
    D3D10DDI_HDEVICE hDevice, D3DWDDM1_3DDI_MARKER_TYPE Type, /*D3DWDDM1_3DDI_SETMARKERMODE*/ UINT Flags );

typedef VOID ( APIENTRY* PFND3DWDDM1_3DDI_SETMARKER )(
    D3D10DDI_HDEVICE hDevice );

//----------------------------------------------------------------------------------------------------------------------------------
// User mode device function table WDDM 1.3
//
typedef struct D3DWDDM1_3DDI_DEVICEFUNCS
{
// Order of functions is in decreasing order of priority ( as far as performance is concerned ).
// !!! BEGIN HIGH-FREQUENCY !!!
    PFND3D11_1DDI_RESOURCEUPDATESUBRESOURCEUP               pfnDefaultConstantBufferUpdateSubresourceUP;
    PFND3D11_1DDI_SETCONSTANTBUFFERS                        pfnVsSetConstantBuffers;
    PFND3D10DDI_SETSHADERRESOURCES                          pfnPsSetShaderResources;
    PFND3D10DDI_SETSHADER                                   pfnPsSetShader;
    PFND3D10DDI_SETSAMPLERS                                 pfnPsSetSamplers;
    PFND3D10DDI_SETSHADER                                   pfnVsSetShader;
    PFND3D10DDI_DRAWINDEXED                                 pfnDrawIndexed;
    PFND3D10DDI_DRAW                                        pfnDraw;
    PFND3D10DDI_RESOURCEMAP                                 pfnDynamicIABufferMapNoOverwrite;
    PFND3D10DDI_RESOURCEUNMAP                               pfnDynamicIABufferUnmap;
    PFND3D10DDI_RESOURCEMAP                                 pfnDynamicConstantBufferMapDiscard;
    PFND3D10DDI_RESOURCEMAP                                 pfnDynamicIABufferMapDiscard;
    PFND3D10DDI_RESOURCEUNMAP                               pfnDynamicConstantBufferUnmap;
    PFND3D11_1DDI_SETCONSTANTBUFFERS                        pfnPsSetConstantBuffers;
    PFND3D10DDI_SETINPUTLAYOUT                              pfnIaSetInputLayout;
    PFND3D10DDI_IA_SETVERTEXBUFFERS                         pfnIaSetVertexBuffers;
    PFND3D10DDI_IA_SETINDEXBUFFER                           pfnIaSetIndexBuffer;
// !!! END HIGH-FREQUENCY !!!

// Order of functions is in decreasing order of priority ( as far as performance is concerned ).
// !!! BEGIN MIDDLE-FREQUENCY !!!
    PFND3D10DDI_DRAWINDEXEDINSTANCED                        pfnDrawIndexedInstanced;
    PFND3D10DDI_DRAWINSTANCED                               pfnDrawInstanced;
    PFND3D10DDI_RESOURCEMAP                                 pfnDynamicResourceMapDiscard;
    PFND3D10DDI_RESOURCEUNMAP                               pfnDynamicResourceUnmap;
    PFND3D11_1DDI_SETCONSTANTBUFFERS                        pfnGsSetConstantBuffers;
    PFND3D10DDI_SETSHADER                                   pfnGsSetShader;
    PFND3D10DDI_IA_SETTOPOLOGY                              pfnIaSetTopology;
    PFND3D10DDI_RESOURCEMAP                                 pfnStagingResourceMap;
    PFND3D10DDI_RESOURCEUNMAP                               pfnStagingResourceUnmap;
    PFND3D10DDI_SETSHADERRESOURCES                          pfnVsSetShaderResources;
    PFND3D10DDI_SETSAMPLERS                                 pfnVsSetSamplers;
    PFND3D10DDI_SETSHADERRESOURCES                          pfnGsSetShaderResources;
    PFND3D10DDI_SETSAMPLERS                                 pfnGsSetSamplers;
    PFND3D11DDI_SETRENDERTARGETS                            pfnSetRenderTargets;
    PFND3D10DDI_SHADERRESOURCEVIEWREADAFTERWRITEHAZARD      pfnShaderResourceViewReadAfterWriteHazard;
    PFND3D10DDI_RESOURCEREADAFTERWRITEHAZARD                pfnResourceReadAfterWriteHazard;
    PFND3D10DDI_SETBLENDSTATE                               pfnSetBlendState;
    PFND3D10DDI_SETDEPTHSTENCILSTATE                        pfnSetDepthStencilState;
    PFND3D10DDI_SETRASTERIZERSTATE                          pfnSetRasterizerState;
    PFND3D10DDI_QUERYEND                                    pfnQueryEnd;
    PFND3D10DDI_QUERYBEGIN                                  pfnQueryBegin;
    PFND3D11_1DDI_RESOURCECOPYREGION                        pfnResourceCopyRegion;
    PFND3D11_1DDI_RESOURCEUPDATESUBRESOURCEUP               pfnResourceUpdateSubresourceUP;
    PFND3D10DDI_SO_SETTARGETS                               pfnSoSetTargets;
    PFND3D10DDI_DRAWAUTO                                    pfnDrawAuto;
    PFND3D10DDI_SETVIEWPORTS                                pfnSetViewports;
    PFND3D10DDI_SETSCISSORRECTS                             pfnSetScissorRects;
    PFND3D10DDI_CLEARRENDERTARGETVIEW                       pfnClearRenderTargetView;
    PFND3D10DDI_CLEARDEPTHSTENCILVIEW                       pfnClearDepthStencilView;
    PFND3D10DDI_SETPREDICATION                              pfnSetPredication;
    PFND3D10DDI_QUERYGETDATA                                pfnQueryGetData;
    PFND3D11_1DDI_FLUSH                                     pfnFlush;
    PFND3D10DDI_GENMIPS                                     pfnGenMips;
    PFND3D10DDI_RESOURCECOPY                                pfnResourceCopy;
    PFND3D10DDI_RESOURCERESOLVESUBRESOURCE                  pfnResourceResolveSubresource;
// !!! END MIDDLE-FREQUENCY !!!

// Infrequent paths:
    PFND3D10DDI_RESOURCEMAP                                 pfnResourceMap;
    PFND3D10DDI_RESOURCEUNMAP                               pfnResourceUnmap;
    PFND3D10DDI_RESOURCEISSTAGINGBUSY                       pfnResourceIsStagingBusy;
    PFND3DWDDM1_3DDI_RELOCATEDEVICEFUNCS                    pfnRelocateDeviceFuncs;
    PFND3D11DDI_CALCPRIVATERESOURCESIZE                     pfnCalcPrivateResourceSize;
    PFND3D10DDI_CALCPRIVATEOPENEDRESOURCESIZE               pfnCalcPrivateOpenedResourceSize;
    PFND3D11DDI_CREATERESOURCE                              pfnCreateResource;
    PFND3D10DDI_OPENRESOURCE                                pfnOpenResource;
    PFND3D10DDI_DESTROYRESOURCE                             pfnDestroyResource;
    PFND3D11DDI_CALCPRIVATESHADERRESOURCEVIEWSIZE           pfnCalcPrivateShaderResourceViewSize;
    PFND3D11DDI_CREATESHADERRESOURCEVIEW                    pfnCreateShaderResourceView;
    PFND3D10DDI_DESTROYSHADERRESOURCEVIEW                   pfnDestroyShaderResourceView;
    PFND3D10DDI_CALCPRIVATERENDERTARGETVIEWSIZE             pfnCalcPrivateRenderTargetViewSize;
    PFND3D10DDI_CREATERENDERTARGETVIEW                      pfnCreateRenderTargetView;
    PFND3D10DDI_DESTROYRENDERTARGETVIEW                     pfnDestroyRenderTargetView;
    PFND3D11DDI_CALCPRIVATEDEPTHSTENCILVIEWSIZE             pfnCalcPrivateDepthStencilViewSize;
    PFND3D11DDI_CREATEDEPTHSTENCILVIEW                      pfnCreateDepthStencilView;
    PFND3D10DDI_DESTROYDEPTHSTENCILVIEW                     pfnDestroyDepthStencilView;
    PFND3D10DDI_CALCPRIVATEELEMENTLAYOUTSIZE                pfnCalcPrivateElementLayoutSize;
    PFND3D10DDI_CREATEELEMENTLAYOUT                         pfnCreateElementLayout;
    PFND3D10DDI_DESTROYELEMENTLAYOUT                        pfnDestroyElementLayout;
    PFND3D11_1DDI_CALCPRIVATEBLENDSTATESIZE                 pfnCalcPrivateBlendStateSize;
    PFND3D11_1DDI_CREATEBLENDSTATE                          pfnCreateBlendState;
    PFND3D10DDI_DESTROYBLENDSTATE                           pfnDestroyBlendState;
    PFND3D10DDI_CALCPRIVATEDEPTHSTENCILSTATESIZE            pfnCalcPrivateDepthStencilStateSize;
    PFND3D10DDI_CREATEDEPTHSTENCILSTATE                     pfnCreateDepthStencilState;
    PFND3D10DDI_DESTROYDEPTHSTENCILSTATE                    pfnDestroyDepthStencilState;
    PFND3D11_1DDI_CALCPRIVATERASTERIZERSTATESIZE            pfnCalcPrivateRasterizerStateSize;
    PFND3D11_1DDI_CREATERASTERIZERSTATE                     pfnCreateRasterizerState;
    PFND3D10DDI_DESTROYRASTERIZERSTATE                      pfnDestroyRasterizerState;
    PFND3D11_1DDI_CALCPRIVATESHADERSIZE                     pfnCalcPrivateShaderSize;
    PFND3D11_1DDI_CREATEVERTEXSHADER                        pfnCreateVertexShader;
    PFND3D11_1DDI_CREATEGEOMETRYSHADER                      pfnCreateGeometryShader;
    PFND3D11_1DDI_CREATEPIXELSHADER                         pfnCreatePixelShader;
    PFND3D11_1DDI_CALCPRIVATEGEOMETRYSHADERWITHSTREAMOUTPUT pfnCalcPrivateGeometryShaderWithStreamOutput;
    PFND3D11_1DDI_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT      pfnCreateGeometryShaderWithStreamOutput;
    PFND3D10DDI_DESTROYSHADER                               pfnDestroyShader;
    PFND3D10DDI_CALCPRIVATESAMPLERSIZE                      pfnCalcPrivateSamplerSize;
    PFND3D10DDI_CREATESAMPLER                               pfnCreateSampler;
    PFND3D10DDI_DESTROYSAMPLER                              pfnDestroySampler;
    PFND3D10DDI_CALCPRIVATEQUERYSIZE                        pfnCalcPrivateQuerySize;
    PFND3D10DDI_CREATEQUERY                                 pfnCreateQuery;
    PFND3D10DDI_DESTROYQUERY                                pfnDestroyQuery;

    PFND3D10DDI_CHECKFORMATSUPPORT                          pfnCheckFormatSupport;
    PFND3DWDDM1_3DDI_CHECKMULTISAMPLEQUALITYLEVELS          pfnCheckMultisampleQualityLevels;
    PFND3D10DDI_CHECKCOUNTERINFO                            pfnCheckCounterInfo;
    PFND3D10DDI_CHECKCOUNTER                                pfnCheckCounter;

    PFND3D10DDI_DESTROYDEVICE                               pfnDestroyDevice;
    PFND3D10DDI_SETTEXTFILTERSIZE                           pfnSetTextFilterSize;

    // Start additional 10.1 entries:
    PFND3D10DDI_RESOURCECOPY                                pfnResourceConvert;
    PFND3D11_1DDI_RESOURCECOPYREGION                        pfnResourceConvertRegion;

#ifdef D3D10PSGP
    // Rasterization-only specific:
    PFND3D10DDI_RESETPRIMITIVEID                            pfnResetPrimitiveID;
    PFND3D10DDI_SETVERTEXPIPELINEOUTPUT                     pfnSetVertexPipelineOutput;
#endif // D3D10PSGP

    // Start additional 11.0 entries:
    PFND3D11DDI_DRAWINDEXEDINSTANCEDINDIRECT                pfnDrawIndexedInstancedIndirect;
    PFND3D11DDI_DRAWINSTANCEDINDIRECT                       pfnDrawInstancedIndirect;
    PFND3D11DDI_COMMANDLISTEXECUTE                          pfnCommandListExecute; // Only required when supporting D3D11DDICAPS_COMMANDLISTS
    PFND3D10DDI_SETSHADERRESOURCES                          pfnHsSetShaderResources;
    PFND3D10DDI_SETSHADER                                   pfnHsSetShader;
    PFND3D10DDI_SETSAMPLERS                                 pfnHsSetSamplers;
    PFND3D11_1DDI_SETCONSTANTBUFFERS                        pfnHsSetConstantBuffers;
    PFND3D10DDI_SETSHADERRESOURCES                          pfnDsSetShaderResources;
    PFND3D10DDI_SETSHADER                                   pfnDsSetShader;
    PFND3D10DDI_SETSAMPLERS                                 pfnDsSetSamplers;
    PFND3D11_1DDI_SETCONSTANTBUFFERS                        pfnDsSetConstantBuffers;
    PFND3D11_1DDI_CREATEHULLSHADER                          pfnCreateHullShader;
    PFND3D11_1DDI_CREATEDOMAINSHADER                        pfnCreateDomainShader;
    PFND3D11DDI_CHECKDEFERREDCONTEXTHANDLESIZES             pfnCheckDeferredContextHandleSizes; // Only required when supporting D3D11DDICAPS_COMMANDLISTS*
    PFND3D11DDI_CALCDEFERREDCONTEXTHANDLESIZE               pfnCalcDeferredContextHandleSize; // Only required when supporting D3D11DDICAPS_COMMANDLISTS*
    PFND3D11DDI_CALCPRIVATEDEFERREDCONTEXTSIZE              pfnCalcPrivateDeferredContextSize; // Only required when supporting D3D11DDICAPS_COMMANDLISTS*
    PFND3D11DDI_CREATEDEFERREDCONTEXT                       pfnCreateDeferredContext; // Only required when supporting D3D11DDICAPS_COMMANDLISTS*
    PFND3D11DDI_ABANDONCOMMANDLIST                          pfnAbandonCommandList; // Only required when supporting D3D11DDICAPS_COMMANDLISTS*
    PFND3D11DDI_CALCPRIVATECOMMANDLISTSIZE                  pfnCalcPrivateCommandListSize; // Only required when supporting D3D11DDICAPS_COMMANDLISTS*
    PFND3D11DDI_CREATECOMMANDLIST                           pfnCreateCommandList; // Only required when supporting D3D11DDICAPS_COMMANDLISTS*
    PFND3D11DDI_DESTROYCOMMANDLIST                          pfnDestroyCommandList; // Only required when supporting D3D11DDICAPS_COMMANDLISTS*
    PFND3D11_1DDI_CALCPRIVATETESSELLATIONSHADERSIZE         pfnCalcPrivateTessellationShaderSize;
    PFND3D11DDI_SETSHADER_WITH_IFACES                       pfnPsSetShaderWithIfaces;
    PFND3D11DDI_SETSHADER_WITH_IFACES                       pfnVsSetShaderWithIfaces;
    PFND3D11DDI_SETSHADER_WITH_IFACES                       pfnGsSetShaderWithIfaces;
    PFND3D11DDI_SETSHADER_WITH_IFACES                       pfnHsSetShaderWithIfaces;
    PFND3D11DDI_SETSHADER_WITH_IFACES                       pfnDsSetShaderWithIfaces;
    PFND3D11DDI_SETSHADER_WITH_IFACES                       pfnCsSetShaderWithIfaces;
    PFND3D11DDI_CREATECOMPUTESHADER                         pfnCreateComputeShader;
    PFND3D10DDI_SETSHADER                                   pfnCsSetShader;
    PFND3D10DDI_SETSHADERRESOURCES                          pfnCsSetShaderResources;
    PFND3D10DDI_SETSAMPLERS                                 pfnCsSetSamplers;
    PFND3D11_1DDI_SETCONSTANTBUFFERS                        pfnCsSetConstantBuffers;
    PFND3D11DDI_CALCPRIVATEUNORDEREDACCESSVIEWSIZE          pfnCalcPrivateUnorderedAccessViewSize;
    PFND3D11DDI_CREATEUNORDEREDACCESSVIEW                   pfnCreateUnorderedAccessView;
    PFND3D11DDI_DESTROYUNORDEREDACCESSVIEW                  pfnDestroyUnorderedAccessView;
    PFND3D11DDI_CLEARUNORDEREDACCESSVIEWUINT                pfnClearUnorderedAccessViewUint;
    PFND3D11DDI_CLEARUNORDEREDACCESSVIEWFLOAT               pfnClearUnorderedAccessViewFloat;
    PFND3D11DDI_SETUNORDEREDACCESSVIEWS                     pfnCsSetUnorderedAccessViews;
    PFND3D11DDI_DISPATCH                                    pfnDispatch;
    PFND3D11DDI_DISPATCHINDIRECT                            pfnDispatchIndirect;
    PFND3D11DDI_SETRESOURCEMINLOD                           pfnSetResourceMinLOD;
    PFND3D11DDI_COPYSTRUCTURECOUNT                          pfnCopyStructureCount;
    PFND3D11DDI_RECYCLECOMMANDLIST                          pfnRecycleCommandList;
    PFND3D11DDI_RECYCLECREATECOMMANDLIST                    pfnRecycleCreateCommandList;
    PFND3D11DDI_RECYCLECREATEDEFERREDCONTEXT                pfnRecycleCreateDeferredContext;
    PFND3D11DDI_DESTROYCOMMANDLIST                          pfnRecycleDestroyCommandList;

    // Start additional 11.1 entries
    // (note some functions above also have different signatures 11.1 vs. 11.0)

    PFND3D11_1DDI_DISCARD                                   pfnDiscard;
    PFND3D11_1DDI_ASSIGNDEBUGBINARY                         pfnAssignDebugBinary;
    PFND3D10DDI_RESOURCEMAP                                 pfnDynamicConstantBufferMapNoOverwrite;
    PFND3D11_1DDI_CHECKDIRECTFLIPSUPPORT                    pfnCheckDirectFlipSupport;
    PFND3D11_1DDI_CLEARVIEW                                 pfnClearView;

    // Start additional WDDM 1.3 entries
    // (note some functions above also have different signatures vs 11.1)
    PFND3DWDDM1_3DDI_UPDATETILEMAPPINGS                     pfnUpdateTileMappings;
    PFND3DWDDM1_3DDI_COPYTILEMAPPINGS                       pfnCopyTileMappings;
    PFND3DWDDM1_3DDI_COPYTILES                              pfnCopyTiles;
    PFND3DWDDM1_3DDI_UPDATETILES                            pfnUpdateTiles;
    PFND3DWDDM1_3DDI_TILEDRESOURCEBARRIER                   pfnTiledResourceBarrier;
    PFND3DWDDM1_3DDI_GETMIPPACKING                          pfnGetMipPacking;
    PFND3DWDDM1_3DDI_RESIZETILEPOOL                         pfnResizeTilePool;
    PFND3DWDDM1_3DDI_SETMARKER                              pfnSetMarker;
    PFND3DWDDM1_3DDI_SETMARKERMODE                          pfnSetMarkerMode;
} D3DWDDM1_3DDI_DEVICEFUNCS;

#endif // D3D11DDI_MINOR_HEADER_VERSION

#if D3D11DDI_MINOR_HEADER_VERSION >= 5
//----------------------------------------------------------------------------------------------------------------------------------
// WDDM 2.0 DDI 
//

typedef enum D3DWDDM2_0DDI_CONSERVATIVE_RASTERIZATION_MODE
{
    D3DWDDM2_0DDI_CONSERVATIVE_RASTERIZATION_OFF = 0, // Default
    D3DWDDM2_0DDI_CONSERVATIVE_RASTERIZATION_ON  = 1,
} D3DWDDM2_0DDI_CONSERVATIVE_RASTERIZATION_MODE;

typedef struct D3DWDDM2_0DDI_RASTERIZER_DESC
{
    D3D10_DDI_FILL_MODE FillMode;
    D3D10_DDI_CULL_MODE CullMode;
    BOOL FrontCounterClockwise;
    INT DepthBias;
    FLOAT DepthBiasClamp;
    FLOAT SlopeScaledDepthBias;
    BOOL DepthClipEnable;
    BOOL ScissorEnable;
    BOOL MultisampleEnable;
    BOOL AntialiasedLineEnable;
    UINT ForcedSampleCount;
    D3DWDDM2_0DDI_CONSERVATIVE_RASTERIZATION_MODE ConservativeRasterizationMode;
} D3DWDDM2_0DDI_RASTERIZER_DESC;

typedef enum D3DWDDM2_0DDI_CONTEXTTYPE_FLAG
{
    D3DWDDM2_0DDI_CONTEXTTYPE_ALL           = 0x00000000,
    D3DWDDM2_0DDI_CONTEXTTYPE_3D            = 0x00000001,
    D3DWDDM2_0DDI_CONTEXTTYPE_COMPUTE       = 0x00000002,
    D3DWDDM2_0DDI_CONTEXTTYPE_COPY          = 0x00000004,
    D3DWDDM2_0DDI_CONTEXTTYPE_VIDEO         = 0x00000008,
} D3DWDDM2_0DDI_CONTEXTTYPE_FLAG;

typedef struct D3DWDDM2_0DDIARG_TEX2D_SHADERRESOURCEVIEW
{
    UINT     MostDetailedMip;
    UINT     FirstArraySlice;
    UINT     MipLevels;
    UINT     ArraySize;
#if D3D11DDI_MINOR_HEADER_VERSION >= 6
    UINT PlaneSlice;
#else
    UINT PlaneIndex;
#endif
} D3DWDDM2_0DDIARG_TEX2D_SHADERRESOURCEVIEW;

typedef struct D3DWDDM2_0DDIARG_CREATESHADERRESOURCEVIEW
{
    D3D10DDI_HRESOURCE    hDrvResource;
    DXGI_FORMAT           Format;
    D3D10DDIRESOURCE_TYPE ResourceDimension;

    union
    {
        D3D10DDIARG_BUFFER_SHADERRESOURCEVIEW             Buffer;
        D3D10DDIARG_TEX1D_SHADERRESOURCEVIEW              Tex1D;
        D3DWDDM2_0DDIARG_TEX2D_SHADERRESOURCEVIEW         Tex2D;
        D3D10DDIARG_TEX3D_SHADERRESOURCEVIEW              Tex3D;
        D3D10_1DDIARG_TEXCUBE_SHADERRESOURCEVIEW          TexCube;
        D3D11DDIARG_BUFFEREX_SHADERRESOURCEVIEW           BufferEx;
    };
} D3DWDDM2_0DDIARG_CREATESHADERRESOURCEVIEW;

typedef struct D3DWDDM2_0DDIARG_TEX2D_RENDERTARGETVIEW
{
    UINT     MipSlice;
    UINT     FirstArraySlice;
    UINT     ArraySize;
#if D3D11DDI_MINOR_HEADER_VERSION >= 6
    UINT PlaneSlice;
#else
    UINT PlaneIndex;
#endif
} D3DWDDM2_0DDIARG_TEX2D_RENDERTARGETVIEW;

typedef struct D3DWDDM2_0DDIARG_CREATERENDERTARGETVIEW
{
    D3D10DDI_HRESOURCE    hDrvResource;
    DXGI_FORMAT           Format;
    D3D10DDIRESOURCE_TYPE ResourceDimension;

    union
    {
        D3D10DDIARG_BUFFER_RENDERTARGETVIEW  	Buffer;
        D3D10DDIARG_TEX1D_RENDERTARGETVIEW   	Tex1D;
        D3DWDDM2_0DDIARG_TEX2D_RENDERTARGETVIEW Tex2D;
        D3D10DDIARG_TEX3D_RENDERTARGETVIEW   	Tex3D;
        D3D10DDIARG_TEXCUBE_RENDERTARGETVIEW 	TexCube;
    };
} D3DWDDM2_0DDIARG_CREATERENDERTARGETVIEW;

typedef struct D3DWDDM2_0DDIARG_TEX2D_UNORDEREDACCESSVIEW
{
    UINT     MipSlice;
    UINT     FirstArraySlice;
    UINT     ArraySize;
#if D3D11DDI_MINOR_HEADER_VERSION >= 6
    UINT PlaneSlice;
#else
    UINT PlaneIndex;
#endif
} D3DWDDM2_0DDIARG_TEX2D_UNORDEREDACCESSVIEW;

typedef struct D3DWDDM2_0DDIARG_CREATEUNORDEREDACCESSVIEW
{
    D3D10DDI_HRESOURCE    hDrvResource;
    DXGI_FORMAT           Format;
    D3D10DDIRESOURCE_TYPE ResourceDimension; // Runtime will never set this to TexCube

    union
    {
        D3D11DDIARG_BUFFER_UNORDEREDACCESSVIEW    	Buffer;
        D3D11DDIARG_TEX1D_UNORDEREDACCESSVIEW     	Tex1D;
        D3DWDDM2_0DDIARG_TEX2D_UNORDEREDACCESSVIEW	Tex2D;
        D3D11DDIARG_TEX3D_UNORDEREDACCESSVIEW     	Tex3D;
    };
} D3DWDDM2_0DDIARG_CREATEUNORDEREDACCESSVIEW;

typedef struct D3DWDDM2_0DDIARG_CREATEQUERY
{
    D3D10DDI_QUERY Query;
    UINT MiscFlags;
    UINT ContextType; // D3DWDDM2_0DDI_CONTEXTTYPE_FLAG
} D3DWDDM2_0DDIARG_CREATEQUERY;

// The addition of these values affects the source address used in swizzling
// equations.  These values must be zero for standard swizzle or row-major textures.
typedef struct D3DWDDM2_0DDI_SUBRESOURCE_PRESWIZZLE_OFFSETS
{
   UINT16 RowByteOffset; 
   UINT16 ColumnOffset;
   UINT16 DepthOffset;
} D3DWDDM2_0DDI_SUBRESOURCE_PRESWIZZLE_OFFSETS;

typedef struct D3DWDDM2_0DDI_SUBRESOURCE_LAYOUT
{
    UINT64 BaseOffset;
    D3DWDDM2_0DDI_SUBRESOURCE_PRESWIZZLE_OFFSETS PreswizzleOffsets;
    UINT64 RowPitch;
    UINT64 DepthPitch;
} D3DWDDM2_0DDI_SUBRESOURCE_LAYOUT;

//----------------------------------------------------------------------------------------------------------------------------------
// User mode DDI device function definitions WDDM 2.0
//

typedef VOID ( APIENTRY* PFND3DWDDM2_0DDI_RELOCATEDEVICEFUNCS )(
    D3D10DDI_HDEVICE, _In_ struct D3DWDDM2_0DDI_DEVICEFUNCS* );

typedef VOID ( APIENTRY* PFND3DWDDM2_0DDI_SETHARDWAREPROTECTION )(
    D3D10DDI_HDEVICE hDevice, D3D10DDI_HRESOURCE hResource, BOOL Protected );


typedef VOID ( APIENTRY* PFND3DWDDM2_0DDI_GETRESOURCELAYOUT )(
    D3D10DDI_HDEVICE, D3D10DDI_HRESOURCE, UINT SubresourceCount,
    _Out_ D3DKMT_HANDLE *, _Out_ D3DWDDM2_0DDI_TEXTURE_LAYOUT *,
#if D3D11DDI_MINOR_HEADER_VERSION >= 6
    _Out_ UINT *pMipLevelSwizzleTransition,
#endif
    _Out_writes_opt_(SubresourceCount) D3DWDDM2_0DDI_SUBRESOURCE_LAYOUT * );
    
typedef SIZE_T ( APIENTRY* PFND3DWDDM2_0DDI_CALCPRIVATERASTERIZERSTATESIZE )(
    D3D10DDI_HDEVICE, _In_ CONST D3DWDDM2_0DDI_RASTERIZER_DESC* );
typedef VOID ( APIENTRY* PFND3DWDDM2_0DDI_CREATERASTERIZERSTATE )(
    D3D10DDI_HDEVICE, _In_ CONST D3DWDDM2_0DDI_RASTERIZER_DESC*, D3D10DDI_HRASTERIZERSTATE, D3D10DDI_HRTRASTERIZERSTATE );

typedef SIZE_T ( APIENTRY* PFND3DWDDM2_0DDI_CALCPRIVATESHADERRESOURCEVIEWSIZE )(
    D3D10DDI_HDEVICE, _In_ CONST D3DWDDM2_0DDIARG_CREATESHADERRESOURCEVIEW* );
typedef VOID ( APIENTRY* PFND3DWDDM2_0DDI_CREATESHADERRESOURCEVIEW )(
    D3D10DDI_HDEVICE, _In_ CONST D3DWDDM2_0DDIARG_CREATESHADERRESOURCEVIEW*, D3D10DDI_HSHADERRESOURCEVIEW, D3D10DDI_HRTSHADERRESOURCEVIEW );

typedef SIZE_T ( APIENTRY* PFND3DWDDM2_0DDI_CALCPRIVATERENDERTARGETVIEWSIZE )(
    D3D10DDI_HDEVICE, _In_ CONST D3DWDDM2_0DDIARG_CREATERENDERTARGETVIEW* );
typedef VOID ( APIENTRY* PFND3DWDDM2_0DDI_CREATERENDERTARGETVIEW )(
    D3D10DDI_HDEVICE, _In_ CONST D3DWDDM2_0DDIARG_CREATERENDERTARGETVIEW*, D3D10DDI_HRENDERTARGETVIEW, D3D10DDI_HRTRENDERTARGETVIEW );

typedef SIZE_T ( APIENTRY* PFND3DWDDM2_0DDI_CALCPRIVATEUNORDEREDACCESSVIEWSIZE )(
    D3D10DDI_HDEVICE, _In_ CONST D3DWDDM2_0DDIARG_CREATEUNORDEREDACCESSVIEW* );
typedef VOID ( APIENTRY* PFND3DWDDM2_0DDI_CREATEUNORDEREDACCESSVIEW )(
    D3D10DDI_HDEVICE, _In_ CONST D3DWDDM2_0DDIARG_CREATEUNORDEREDACCESSVIEW*, D3D11DDI_HUNORDEREDACCESSVIEW, D3D11DDI_HRTUNORDEREDACCESSVIEW );

typedef BOOL ( APIENTRY* PFND3DWDDM2_0DDI_FLUSH )(
    D3D10DDI_HDEVICE, UINT /*D3DWDDM2_0DDI_CONTEXTTYPE_FLAG*/ contextType, 
    UINT /*D3D11_1_DDI_FLUSH_FLAGS*/ FlushFlags );

typedef SIZE_T ( APIENTRY* PFND3DWDDM2_0DDI_CALCPRIVATEQUERYSIZE )(
    D3D10DDI_HDEVICE, _In_ CONST D3DWDDM2_0DDIARG_CREATEQUERY* );
typedef VOID ( APIENTRY* PFND3DWDDM2_0DDI_CREATEQUERY )(
    D3D10DDI_HDEVICE, _In_ CONST D3DWDDM2_0DDIARG_CREATEQUERY*, D3D10DDI_HQUERY, D3D10DDI_HRTQUERY );

#if D3D11DDI_MINOR_HEADER_VERSION >= 6
typedef HRESULT ( APIENTRY* PFND3DWDDM2_0DDI_RETRIEVE_SHADER_COMMENT )(
    D3D10DDI_HDEVICE, D3D10DDI_HSHADER, _Out_writes_z_(*CharacterCountIncludingNullTerminator) WCHAR * pBuffer, _Inout_ SIZE_T * CharacterCountIncludingNullTerminator );
#endif

#if D3D11DDI_MINOR_HEADER_VERSION >= 9
typedef void ( APIENTRY* PFND3DWDDM2_0DDI_SETHARDWAREPROTECTIONSTATE )(
    D3D10DDI_HDEVICE, BOOL HwProtectionEnable );
#endif

//----------------------------------------------------------------------------------------------------------------------------------
// User mode device function table WDDM 2.0.
//
#if D3D11DDI_MINOR_HEADER_VERSION < 6
typedef struct D3DWDDM2_0DDI_DEVICEFUNCS
{
// Order of functions is in decreasing order of priority ( as far as performance is concerned ).
// !!! BEGIN HIGH-FREQUENCY !!!
    PFND3D11_1DDI_RESOURCEUPDATESUBRESOURCEUP               pfnDefaultConstantBufferUpdateSubresourceUP;
    PFND3D11_1DDI_SETCONSTANTBUFFERS                        pfnVsSetConstantBuffers;
    PFND3D10DDI_SETSHADERRESOURCES                          pfnPsSetShaderResources;
    PFND3D10DDI_SETSHADER                                   pfnPsSetShader;
    PFND3D10DDI_SETSAMPLERS                                 pfnPsSetSamplers;
    PFND3D10DDI_SETSHADER                                   pfnVsSetShader;
    PFND3D10DDI_DRAWINDEXED                                 pfnDrawIndexed;
    PFND3D10DDI_DRAW                                        pfnDraw;
    PFND3D10DDI_RESOURCEMAP                                 pfnDynamicIABufferMapNoOverwrite;
    PFND3D10DDI_RESOURCEUNMAP                               pfnDynamicIABufferUnmap;
    PFND3D10DDI_RESOURCEMAP                                 pfnDynamicConstantBufferMapDiscard;
    PFND3D10DDI_RESOURCEMAP                                 pfnDynamicIABufferMapDiscard;
    PFND3D10DDI_RESOURCEUNMAP                               pfnDynamicConstantBufferUnmap;
    PFND3D11_1DDI_SETCONSTANTBUFFERS                        pfnPsSetConstantBuffers;
    PFND3D10DDI_SETINPUTLAYOUT                              pfnIaSetInputLayout;
    PFND3D10DDI_IA_SETVERTEXBUFFERS                         pfnIaSetVertexBuffers;
    PFND3D10DDI_IA_SETINDEXBUFFER                           pfnIaSetIndexBuffer;
// !!! END HIGH-FREQUENCY !!!

// Order of functions is in decreasing order of priority ( as far as performance is concerned ).
// !!! BEGIN MIDDLE-FREQUENCY !!!
    PFND3D10DDI_DRAWINDEXEDINSTANCED                        pfnDrawIndexedInstanced;
    PFND3D10DDI_DRAWINSTANCED                               pfnDrawInstanced;
    PFND3D10DDI_RESOURCEMAP                                 pfnDynamicResourceMapDiscard;
    PFND3D10DDI_RESOURCEUNMAP                               pfnDynamicResourceUnmap;
    PFND3D11_1DDI_SETCONSTANTBUFFERS                        pfnGsSetConstantBuffers;
    PFND3D10DDI_SETSHADER                                   pfnGsSetShader;
    PFND3D10DDI_IA_SETTOPOLOGY                              pfnIaSetTopology;
    PFND3D10DDI_RESOURCEMAP                                 pfnStagingResourceMap;
    PFND3D10DDI_RESOURCEUNMAP                               pfnStagingResourceUnmap;
    PFND3D10DDI_SETSHADERRESOURCES                          pfnVsSetShaderResources;
    PFND3D10DDI_SETSAMPLERS                                 pfnVsSetSamplers;
    PFND3D10DDI_SETSHADERRESOURCES                          pfnGsSetShaderResources;
    PFND3D10DDI_SETSAMPLERS                                 pfnGsSetSamplers;
    PFND3D11DDI_SETRENDERTARGETS                            pfnSetRenderTargets;
    PFND3D10DDI_SHADERRESOURCEVIEWREADAFTERWRITEHAZARD      pfnShaderResourceViewReadAfterWriteHazard;
    PFND3D10DDI_RESOURCEREADAFTERWRITEHAZARD                pfnResourceReadAfterWriteHazard;
    PFND3D10DDI_SETBLENDSTATE                               pfnSetBlendState;
    PFND3D10DDI_SETDEPTHSTENCILSTATE                        pfnSetDepthStencilState;
    PFND3D10DDI_SETRASTERIZERSTATE                          pfnSetRasterizerState;
    PFND3D10DDI_QUERYEND                                    pfnQueryEnd;
    PFND3D10DDI_QUERYBEGIN                                  pfnQueryBegin;
    PFND3D11_1DDI_RESOURCECOPYREGION                        pfnResourceCopyRegion;
    PFND3D11_1DDI_RESOURCEUPDATESUBRESOURCEUP               pfnResourceUpdateSubresourceUP;
    PFND3D10DDI_SO_SETTARGETS                               pfnSoSetTargets;
    PFND3D10DDI_DRAWAUTO                                    pfnDrawAuto;
    PFND3D10DDI_SETVIEWPORTS                                pfnSetViewports;
    PFND3D10DDI_SETSCISSORRECTS                             pfnSetScissorRects;
    PFND3D10DDI_CLEARRENDERTARGETVIEW                       pfnClearRenderTargetView;
    PFND3D10DDI_CLEARDEPTHSTENCILVIEW                       pfnClearDepthStencilView;
    PFND3D10DDI_SETPREDICATION                              pfnSetPredication;
    PFND3D10DDI_QUERYGETDATA                                pfnQueryGetData;
    PFND3D11_1DDI_FLUSH                                     pfnFlush;
    PFND3D10DDI_GENMIPS                                     pfnGenMips;
    PFND3D10DDI_RESOURCECOPY                                pfnResourceCopy;
    PFND3D10DDI_RESOURCERESOLVESUBRESOURCE                  pfnResourceResolveSubresource;
// !!! END MIDDLE-FREQUENCY !!!

// Infrequent paths:
    PFND3D10DDI_RESOURCEMAP                                 pfnResourceMap;
    PFND3D10DDI_RESOURCEUNMAP                               pfnResourceUnmap;
    PFND3D10DDI_RESOURCEISSTAGINGBUSY                       pfnResourceIsStagingBusy;
    PFND3DWDDM2_0DDI_RELOCATEDEVICEFUNCS                    pfnRelocateDeviceFuncs;
    PFND3D11DDI_CALCPRIVATERESOURCESIZE                     pfnCalcPrivateResourceSize;
    PFND3D10DDI_CALCPRIVATEOPENEDRESOURCESIZE               pfnCalcPrivateOpenedResourceSize;
    PFND3D11DDI_CREATERESOURCE                              pfnCreateResource;
    PFND3D10DDI_OPENRESOURCE                                pfnOpenResource;
    PFND3D10DDI_DESTROYRESOURCE                             pfnDestroyResource;
    PFND3D11DDI_CALCPRIVATESHADERRESOURCEVIEWSIZE           pfnCalcPrivateShaderResourceViewSize;
    PFND3D11DDI_CREATESHADERRESOURCEVIEW                    pfnCreateShaderResourceView;
    PFND3D10DDI_DESTROYSHADERRESOURCEVIEW                   pfnDestroyShaderResourceView;
    PFND3D10DDI_CALCPRIVATERENDERTARGETVIEWSIZE             pfnCalcPrivateRenderTargetViewSize;
    PFND3D10DDI_CREATERENDERTARGETVIEW                      pfnCreateRenderTargetView;
    PFND3D10DDI_DESTROYRENDERTARGETVIEW                     pfnDestroyRenderTargetView;
    PFND3D11DDI_CALCPRIVATEDEPTHSTENCILVIEWSIZE             pfnCalcPrivateDepthStencilViewSize;
    PFND3D11DDI_CREATEDEPTHSTENCILVIEW                      pfnCreateDepthStencilView;
    PFND3D10DDI_DESTROYDEPTHSTENCILVIEW                     pfnDestroyDepthStencilView;
    PFND3D10DDI_CALCPRIVATEELEMENTLAYOUTSIZE                pfnCalcPrivateElementLayoutSize;
    PFND3D10DDI_CREATEELEMENTLAYOUT                         pfnCreateElementLayout;
    PFND3D10DDI_DESTROYELEMENTLAYOUT                        pfnDestroyElementLayout;
    PFND3D11_1DDI_CALCPRIVATEBLENDSTATESIZE                 pfnCalcPrivateBlendStateSize;
    PFND3D11_1DDI_CREATEBLENDSTATE                          pfnCreateBlendState;
    PFND3D10DDI_DESTROYBLENDSTATE                           pfnDestroyBlendState;
    PFND3D10DDI_CALCPRIVATEDEPTHSTENCILSTATESIZE            pfnCalcPrivateDepthStencilStateSize;
    PFND3D10DDI_CREATEDEPTHSTENCILSTATE                     pfnCreateDepthStencilState;
    PFND3D10DDI_DESTROYDEPTHSTENCILSTATE                    pfnDestroyDepthStencilState;
    PFND3DWDDM2_0DDI_CALCPRIVATERASTERIZERSTATESIZE         pfnCalcPrivateRasterizerStateSize;
    PFND3DWDDM2_0DDI_CREATERASTERIZERSTATE                  pfnCreateRasterizerState;
    PFND3D10DDI_DESTROYRASTERIZERSTATE                      pfnDestroyRasterizerState;
    PFND3D11_1DDI_CALCPRIVATESHADERSIZE                     pfnCalcPrivateShaderSize;
    PFND3D11_1DDI_CREATEVERTEXSHADER                        pfnCreateVertexShader;
    PFND3D11_1DDI_CREATEGEOMETRYSHADER                      pfnCreateGeometryShader;
    PFND3D11_1DDI_CREATEPIXELSHADER                         pfnCreatePixelShader;
    PFND3D11_1DDI_CALCPRIVATEGEOMETRYSHADERWITHSTREAMOUTPUT pfnCalcPrivateGeometryShaderWithStreamOutput;
    PFND3D11_1DDI_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT      pfnCreateGeometryShaderWithStreamOutput;
    PFND3D10DDI_DESTROYSHADER                               pfnDestroyShader;
    PFND3D10DDI_CALCPRIVATESAMPLERSIZE                      pfnCalcPrivateSamplerSize;
    PFND3D10DDI_CREATESAMPLER                               pfnCreateSampler;
    PFND3D10DDI_DESTROYSAMPLER                              pfnDestroySampler;
    PFND3D10DDI_CALCPRIVATEQUERYSIZE                        pfnCalcPrivateQuerySize;
    PFND3D10DDI_CREATEQUERY                                 pfnCreateQuery;
    PFND3D10DDI_DESTROYQUERY                                pfnDestroyQuery;

    PFND3D10DDI_CHECKFORMATSUPPORT                          pfnCheckFormatSupport;
    PFND3DWDDM1_3DDI_CHECKMULTISAMPLEQUALITYLEVELS          pfnCheckMultisampleQualityLevels;
    PFND3D10DDI_CHECKCOUNTERINFO                            pfnCheckCounterInfo;
    PFND3D10DDI_CHECKCOUNTER                                pfnCheckCounter;

    PFND3D10DDI_DESTROYDEVICE                               pfnDestroyDevice;
    PFND3D10DDI_SETTEXTFILTERSIZE                           pfnSetTextFilterSize;

    // Start additional 10.1 entries:
    PFND3D10DDI_RESOURCECOPY                                pfnResourceConvert;
    PFND3D11_1DDI_RESOURCECOPYREGION                        pfnResourceConvertRegion;

#ifdef D3D10PSGP
    // Rasterization-only specific:
    PFND3D10DDI_RESETPRIMITIVEID                            pfnResetPrimitiveID;
    PFND3D10DDI_SETVERTEXPIPELINEOUTPUT                     pfnSetVertexPipelineOutput;
#endif // D3D10PSGP

    // Start additional 11.0 entries:
    PFND3D11DDI_DRAWINDEXEDINSTANCEDINDIRECT                pfnDrawIndexedInstancedIndirect;
    PFND3D11DDI_DRAWINSTANCEDINDIRECT                       pfnDrawInstancedIndirect;
    PFND3D11DDI_COMMANDLISTEXECUTE                          pfnCommandListExecute; // Only required when supporting D3D11DDICAPS_COMMANDLISTS
    PFND3D10DDI_SETSHADERRESOURCES                          pfnHsSetShaderResources;
    PFND3D10DDI_SETSHADER                                   pfnHsSetShader;
    PFND3D10DDI_SETSAMPLERS                                 pfnHsSetSamplers;
    PFND3D11_1DDI_SETCONSTANTBUFFERS                        pfnHsSetConstantBuffers;
    PFND3D10DDI_SETSHADERRESOURCES                          pfnDsSetShaderResources;
    PFND3D10DDI_SETSHADER                                   pfnDsSetShader;
    PFND3D10DDI_SETSAMPLERS                                 pfnDsSetSamplers;
    PFND3D11_1DDI_SETCONSTANTBUFFERS                        pfnDsSetConstantBuffers;
    PFND3D11_1DDI_CREATEHULLSHADER                          pfnCreateHullShader;
    PFND3D11_1DDI_CREATEDOMAINSHADER                        pfnCreateDomainShader;
    PFND3D11DDI_CHECKDEFERREDCONTEXTHANDLESIZES             pfnCheckDeferredContextHandleSizes; // Only required when supporting D3D11DDICAPS_COMMANDLISTS*
    PFND3D11DDI_CALCDEFERREDCONTEXTHANDLESIZE               pfnCalcDeferredContextHandleSize; // Only required when supporting D3D11DDICAPS_COMMANDLISTS*
    PFND3D11DDI_CALCPRIVATEDEFERREDCONTEXTSIZE              pfnCalcPrivateDeferredContextSize; // Only required when supporting D3D11DDICAPS_COMMANDLISTS*
    PFND3D11DDI_CREATEDEFERREDCONTEXT                       pfnCreateDeferredContext; // Only required when supporting D3D11DDICAPS_COMMANDLISTS*
    PFND3D11DDI_ABANDONCOMMANDLIST                          pfnAbandonCommandList; // Only required when supporting D3D11DDICAPS_COMMANDLISTS*
    PFND3D11DDI_CALCPRIVATECOMMANDLISTSIZE                  pfnCalcPrivateCommandListSize; // Only required when supporting D3D11DDICAPS_COMMANDLISTS*
    PFND3D11DDI_CREATECOMMANDLIST                           pfnCreateCommandList; // Only required when supporting D3D11DDICAPS_COMMANDLISTS*
    PFND3D11DDI_DESTROYCOMMANDLIST                          pfnDestroyCommandList; // Only required when supporting D3D11DDICAPS_COMMANDLISTS*
    PFND3D11_1DDI_CALCPRIVATETESSELLATIONSHADERSIZE         pfnCalcPrivateTessellationShaderSize;
    PFND3D11DDI_SETSHADER_WITH_IFACES                       pfnPsSetShaderWithIfaces;
    PFND3D11DDI_SETSHADER_WITH_IFACES                       pfnVsSetShaderWithIfaces;
    PFND3D11DDI_SETSHADER_WITH_IFACES                       pfnGsSetShaderWithIfaces;
    PFND3D11DDI_SETSHADER_WITH_IFACES                       pfnHsSetShaderWithIfaces;
    PFND3D11DDI_SETSHADER_WITH_IFACES                       pfnDsSetShaderWithIfaces;
    PFND3D11DDI_SETSHADER_WITH_IFACES                       pfnCsSetShaderWithIfaces;
    PFND3D11DDI_CREATECOMPUTESHADER                         pfnCreateComputeShader;
    PFND3D10DDI_SETSHADER                                   pfnCsSetShader;
    PFND3D10DDI_SETSHADERRESOURCES                          pfnCsSetShaderResources;
    PFND3D10DDI_SETSAMPLERS                                 pfnCsSetSamplers;
    PFND3D11_1DDI_SETCONSTANTBUFFERS                        pfnCsSetConstantBuffers;
    PFND3D11DDI_CALCPRIVATEUNORDEREDACCESSVIEWSIZE          pfnCalcPrivateUnorderedAccessViewSize;
    PFND3D11DDI_CREATEUNORDEREDACCESSVIEW                   pfnCreateUnorderedAccessView;
    PFND3D11DDI_DESTROYUNORDEREDACCESSVIEW                  pfnDestroyUnorderedAccessView;
    PFND3D11DDI_CLEARUNORDEREDACCESSVIEWUINT                pfnClearUnorderedAccessViewUint;
    PFND3D11DDI_CLEARUNORDEREDACCESSVIEWFLOAT               pfnClearUnorderedAccessViewFloat;
    PFND3D11DDI_SETUNORDEREDACCESSVIEWS                     pfnCsSetUnorderedAccessViews;
    PFND3D11DDI_DISPATCH                                    pfnDispatch;
    PFND3D11DDI_DISPATCHINDIRECT                            pfnDispatchIndirect;
    PFND3D11DDI_SETRESOURCEMINLOD                           pfnSetResourceMinLOD;
    PFND3D11DDI_COPYSTRUCTURECOUNT                          pfnCopyStructureCount;
    PFND3D11DDI_RECYCLECOMMANDLIST                          pfnRecycleCommandList;
    PFND3D11DDI_RECYCLECREATECOMMANDLIST                    pfnRecycleCreateCommandList;
    PFND3D11DDI_RECYCLECREATEDEFERREDCONTEXT                pfnRecycleCreateDeferredContext;
    PFND3D11DDI_DESTROYCOMMANDLIST                          pfnRecycleDestroyCommandList;

    // Start additional 11.1 entries
    // (note some functions above also have different signatures 11.1 vs. 11.0)

    PFND3D11_1DDI_DISCARD                                   pfnDiscard;
    PFND3D11_1DDI_ASSIGNDEBUGBINARY                         pfnAssignDebugBinary;
    PFND3D10DDI_RESOURCEMAP                                 pfnDynamicConstantBufferMapNoOverwrite;
    PFND3D11_1DDI_CHECKDIRECTFLIPSUPPORT                    pfnCheckDirectFlipSupport;
    PFND3D11_1DDI_CLEARVIEW                                 pfnClearView;

    // Start additional WDDM 1.3 entries
    // (note some functions above also have different signatures vs 11.1)
    PFND3DWDDM1_3DDI_UPDATETILEMAPPINGS                     pfnUpdateTileMappings;
    PFND3DWDDM1_3DDI_COPYTILEMAPPINGS                       pfnCopyTileMappings;
    PFND3DWDDM1_3DDI_COPYTILES                              pfnCopyTiles;
    PFND3DWDDM1_3DDI_UPDATETILES                            pfnUpdateTiles;
    PFND3DWDDM1_3DDI_TILEDRESOURCEBARRIER                   pfnTiledResourceBarrier;
    PFND3DWDDM1_3DDI_GETMIPPACKING                          pfnGetMipPacking;
    PFND3DWDDM1_3DDI_RESIZETILEPOOL                         pfnResizeTilePool;
    PFND3DWDDM1_3DDI_SETMARKER                              pfnSetMarker;
    PFND3DWDDM1_3DDI_SETMARKERMODE                          pfnSetMarkerMode;

    // Start additional WDDM 2.0 entries
    PFND3DWDDM2_0DDI_SETHARDWAREPROTECTION                  pfnSetHardwareProtection;
    
    PFND3DWDDM2_0DDI_CALCPRIVATESHADERRESOURCEVIEWSIZE      pfnCalcPrivateShaderResourceViewSizeWDDM2_0;
    PFND3DWDDM2_0DDI_CREATESHADERRESOURCEVIEW               pfnCreateShaderResourceViewWDDM2_0;
    PFND3DWDDM2_0DDI_CALCPRIVATERENDERTARGETVIEWSIZE        pfnCalcPrivateRenderTargetViewSizeWDDM2_0;
    PFND3DWDDM2_0DDI_CREATERENDERTARGETVIEW                 pfnCreateRenderTargetViewWDDM2_0;
    PFND3DWDDM2_0DDI_CALCPRIVATEQUERYSIZE                   pfnCalcPrivateQuerySizeWDDM2_0;
    PFND3DWDDM2_0DDI_CREATEQUERY                            pfnCreateQueryWDDM2_0;
    PFND3DWDDM2_0DDI_CALCPRIVATEUNORDEREDACCESSVIEWSIZE     pfnCalcPrivateUnorderedAccessViewSizeWDDM2_0;
    PFND3DWDDM2_0DDI_CREATEUNORDEREDACCESSVIEW              pfnCreateUnorderedAccessViewWDDM2_0;
    PFND3DWDDM2_0DDI_FLUSH                                  pfnFlushWDDM2_0;

    PFND3DWDDM2_0DDI_GETRESOURCELAYOUT                      pfnGetResourceLayout;
} D3DWDDM2_0DDI_DEVICEFUNCS;
#else
//----------------------------------------------------------------------------------------------------------------------------------
// User mode device function table WDDM 2.0.
//
#if D3D11DDI_MINOR_HEADER_VERSION < 9
typedef struct D3DWDDM2_0DDI_DEVICEFUNCS
{
// Order of functions is in decreasing order of priority ( as far as performance is concerned ).
// !!! BEGIN HIGH-FREQUENCY !!!
    PFND3D11_1DDI_RESOURCEUPDATESUBRESOURCEUP               pfnDefaultConstantBufferUpdateSubresourceUP;
    PFND3D11_1DDI_SETCONSTANTBUFFERS                        pfnVsSetConstantBuffers;
    PFND3D10DDI_SETSHADERRESOURCES                          pfnPsSetShaderResources;
    PFND3D10DDI_SETSHADER                                   pfnPsSetShader;
    PFND3D10DDI_SETSAMPLERS                                 pfnPsSetSamplers;
    PFND3D10DDI_SETSHADER                                   pfnVsSetShader;
    PFND3D10DDI_DRAWINDEXED                                 pfnDrawIndexed;
    PFND3D10DDI_DRAW                                        pfnDraw;
    PFND3D10DDI_RESOURCEMAP                                 pfnDynamicIABufferMapNoOverwrite;
    PFND3D10DDI_RESOURCEUNMAP                               pfnDynamicIABufferUnmap;
    PFND3D10DDI_RESOURCEMAP                                 pfnDynamicConstantBufferMapDiscard;
    PFND3D10DDI_RESOURCEMAP                                 pfnDynamicIABufferMapDiscard;
    PFND3D10DDI_RESOURCEUNMAP                               pfnDynamicConstantBufferUnmap;
    PFND3D11_1DDI_SETCONSTANTBUFFERS                        pfnPsSetConstantBuffers;
    PFND3D10DDI_SETINPUTLAYOUT                              pfnIaSetInputLayout;
    PFND3D10DDI_IA_SETVERTEXBUFFERS                         pfnIaSetVertexBuffers;
    PFND3D10DDI_IA_SETINDEXBUFFER                           pfnIaSetIndexBuffer;
// !!! END HIGH-FREQUENCY !!!

// Order of functions is in decreasing order of priority ( as far as performance is concerned ).
// !!! BEGIN MIDDLE-FREQUENCY !!!
    PFND3D10DDI_DRAWINDEXEDINSTANCED                        pfnDrawIndexedInstanced;
    PFND3D10DDI_DRAWINSTANCED                               pfnDrawInstanced;
    PFND3D10DDI_RESOURCEMAP                                 pfnDynamicResourceMapDiscard;
    PFND3D10DDI_RESOURCEUNMAP                               pfnDynamicResourceUnmap;
    PFND3D11_1DDI_SETCONSTANTBUFFERS                        pfnGsSetConstantBuffers;
    PFND3D10DDI_SETSHADER                                   pfnGsSetShader;
    PFND3D10DDI_IA_SETTOPOLOGY                              pfnIaSetTopology;
    PFND3D10DDI_RESOURCEMAP                                 pfnStagingResourceMap;
    PFND3D10DDI_RESOURCEUNMAP                               pfnStagingResourceUnmap;
    PFND3D10DDI_SETSHADERRESOURCES                          pfnVsSetShaderResources;
    PFND3D10DDI_SETSAMPLERS                                 pfnVsSetSamplers;
    PFND3D10DDI_SETSHADERRESOURCES                          pfnGsSetShaderResources;
    PFND3D10DDI_SETSAMPLERS                                 pfnGsSetSamplers;
    PFND3D11DDI_SETRENDERTARGETS                            pfnSetRenderTargets;
    PFND3D10DDI_SHADERRESOURCEVIEWREADAFTERWRITEHAZARD      pfnShaderResourceViewReadAfterWriteHazard;
    PFND3D10DDI_RESOURCEREADAFTERWRITEHAZARD                pfnResourceReadAfterWriteHazard;
    PFND3D10DDI_SETBLENDSTATE                               pfnSetBlendState;
    PFND3D10DDI_SETDEPTHSTENCILSTATE                        pfnSetDepthStencilState;
    PFND3D10DDI_SETRASTERIZERSTATE                          pfnSetRasterizerState;
    PFND3D10DDI_QUERYEND                                    pfnQueryEnd;
    PFND3D10DDI_QUERYBEGIN                                  pfnQueryBegin;
    PFND3D11_1DDI_RESOURCECOPYREGION                        pfnResourceCopyRegion;
    PFND3D11_1DDI_RESOURCEUPDATESUBRESOURCEUP               pfnResourceUpdateSubresourceUP;
    PFND3D10DDI_SO_SETTARGETS                               pfnSoSetTargets;
    PFND3D10DDI_DRAWAUTO                                    pfnDrawAuto;
    PFND3D10DDI_SETVIEWPORTS                                pfnSetViewports;
    PFND3D10DDI_SETSCISSORRECTS                             pfnSetScissorRects;
    PFND3D10DDI_CLEARRENDERTARGETVIEW                       pfnClearRenderTargetView;
    PFND3D10DDI_CLEARDEPTHSTENCILVIEW                       pfnClearDepthStencilView;
    PFND3D10DDI_SETPREDICATION                              pfnSetPredication;
    PFND3D10DDI_QUERYGETDATA                                pfnQueryGetData;
    PFND3DWDDM2_0DDI_FLUSH                                  pfnFlush;
    PFND3D10DDI_GENMIPS                                     pfnGenMips;
    PFND3D10DDI_RESOURCECOPY                                pfnResourceCopy;
    PFND3D10DDI_RESOURCERESOLVESUBRESOURCE                  pfnResourceResolveSubresource;
// !!! END MIDDLE-FREQUENCY !!!

// Infrequent paths:
    PFND3D10DDI_RESOURCEMAP                                 pfnResourceMap;
    PFND3D10DDI_RESOURCEUNMAP                               pfnResourceUnmap;
    PFND3D10DDI_RESOURCEISSTAGINGBUSY                       pfnResourceIsStagingBusy;
    PFND3DWDDM2_0DDI_RELOCATEDEVICEFUNCS                    pfnRelocateDeviceFuncs;
    PFND3D11DDI_CALCPRIVATERESOURCESIZE                     pfnCalcPrivateResourceSize;
    PFND3D10DDI_CALCPRIVATEOPENEDRESOURCESIZE               pfnCalcPrivateOpenedResourceSize;
    PFND3D11DDI_CREATERESOURCE                              pfnCreateResource;
    PFND3D10DDI_OPENRESOURCE                                pfnOpenResource;
    PFND3D10DDI_DESTROYRESOURCE                             pfnDestroyResource;
    PFND3DWDDM2_0DDI_CALCPRIVATESHADERRESOURCEVIEWSIZE      pfnCalcPrivateShaderResourceViewSize;
    PFND3DWDDM2_0DDI_CREATESHADERRESOURCEVIEW               pfnCreateShaderResourceView;
    PFND3D10DDI_DESTROYSHADERRESOURCEVIEW                   pfnDestroyShaderResourceView;
    PFND3DWDDM2_0DDI_CALCPRIVATERENDERTARGETVIEWSIZE        pfnCalcPrivateRenderTargetViewSize;
    PFND3DWDDM2_0DDI_CREATERENDERTARGETVIEW                 pfnCreateRenderTargetView;
    PFND3D10DDI_DESTROYRENDERTARGETVIEW                     pfnDestroyRenderTargetView;
    PFND3D11DDI_CALCPRIVATEDEPTHSTENCILVIEWSIZE             pfnCalcPrivateDepthStencilViewSize;
    PFND3D11DDI_CREATEDEPTHSTENCILVIEW                      pfnCreateDepthStencilView;
    PFND3D10DDI_DESTROYDEPTHSTENCILVIEW                     pfnDestroyDepthStencilView;
    PFND3D10DDI_CALCPRIVATEELEMENTLAYOUTSIZE                pfnCalcPrivateElementLayoutSize;
    PFND3D10DDI_CREATEELEMENTLAYOUT                         pfnCreateElementLayout;
    PFND3D10DDI_DESTROYELEMENTLAYOUT                        pfnDestroyElementLayout;
    PFND3D11_1DDI_CALCPRIVATEBLENDSTATESIZE                 pfnCalcPrivateBlendStateSize;
    PFND3D11_1DDI_CREATEBLENDSTATE                          pfnCreateBlendState;
    PFND3D10DDI_DESTROYBLENDSTATE                           pfnDestroyBlendState;
    PFND3D10DDI_CALCPRIVATEDEPTHSTENCILSTATESIZE            pfnCalcPrivateDepthStencilStateSize;
    PFND3D10DDI_CREATEDEPTHSTENCILSTATE                     pfnCreateDepthStencilState;
    PFND3D10DDI_DESTROYDEPTHSTENCILSTATE                    pfnDestroyDepthStencilState;
    PFND3DWDDM2_0DDI_CALCPRIVATERASTERIZERSTATESIZE         pfnCalcPrivateRasterizerStateSize;
    PFND3DWDDM2_0DDI_CREATERASTERIZERSTATE                  pfnCreateRasterizerState;
    PFND3D10DDI_DESTROYRASTERIZERSTATE                      pfnDestroyRasterizerState;
    PFND3D11_1DDI_CALCPRIVATESHADERSIZE                     pfnCalcPrivateShaderSize;
    PFND3D11_1DDI_CREATEVERTEXSHADER                        pfnCreateVertexShader;
    PFND3D11_1DDI_CREATEGEOMETRYSHADER                      pfnCreateGeometryShader;
    PFND3D11_1DDI_CREATEPIXELSHADER                         pfnCreatePixelShader;
    PFND3D11_1DDI_CALCPRIVATEGEOMETRYSHADERWITHSTREAMOUTPUT pfnCalcPrivateGeometryShaderWithStreamOutput;
    PFND3D11_1DDI_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT      pfnCreateGeometryShaderWithStreamOutput;
    PFND3D10DDI_DESTROYSHADER                               pfnDestroyShader;
    PFND3D10DDI_CALCPRIVATESAMPLERSIZE                      pfnCalcPrivateSamplerSize;
    PFND3D10DDI_CREATESAMPLER                               pfnCreateSampler;
    PFND3D10DDI_DESTROYSAMPLER                              pfnDestroySampler;
    PFND3DWDDM2_0DDI_CALCPRIVATEQUERYSIZE                   pfnCalcPrivateQuerySize;
    PFND3DWDDM2_0DDI_CREATEQUERY                            pfnCreateQuery;
    PFND3D10DDI_DESTROYQUERY                                pfnDestroyQuery;

    PFND3D10DDI_CHECKFORMATSUPPORT                          pfnCheckFormatSupport;
    PFND3DWDDM1_3DDI_CHECKMULTISAMPLEQUALITYLEVELS          pfnCheckMultisampleQualityLevels;
    PFND3D10DDI_CHECKCOUNTERINFO                            pfnCheckCounterInfo;
    PFND3D10DDI_CHECKCOUNTER                                pfnCheckCounter;

    PFND3D10DDI_DESTROYDEVICE                               pfnDestroyDevice;
    PFND3D10DDI_SETTEXTFILTERSIZE                           pfnSetTextFilterSize;

    // Start additional 10.1 entries:
    PFND3D10DDI_RESOURCECOPY                                pfnResourceConvert;
    PFND3D11_1DDI_RESOURCECOPYREGION                        pfnResourceConvertRegion;

#ifdef D3D10PSGP
    // Rasterization-only specific:
    PFND3D10DDI_RESETPRIMITIVEID                            pfnResetPrimitiveID;
    PFND3D10DDI_SETVERTEXPIPELINEOUTPUT                     pfnSetVertexPipelineOutput;
#endif // D3D10PSGP

    // Start additional 11.0 entries:
    PFND3D11DDI_DRAWINDEXEDINSTANCEDINDIRECT                pfnDrawIndexedInstancedIndirect;
    PFND3D11DDI_DRAWINSTANCEDINDIRECT                       pfnDrawInstancedIndirect;
    PFND3D11DDI_COMMANDLISTEXECUTE                          pfnCommandListExecute; // Only required when supporting D3D11DDICAPS_COMMANDLISTS
    PFND3D10DDI_SETSHADERRESOURCES                          pfnHsSetShaderResources;
    PFND3D10DDI_SETSHADER                                   pfnHsSetShader;
    PFND3D10DDI_SETSAMPLERS                                 pfnHsSetSamplers;
    PFND3D11_1DDI_SETCONSTANTBUFFERS                        pfnHsSetConstantBuffers;
    PFND3D10DDI_SETSHADERRESOURCES                          pfnDsSetShaderResources;
    PFND3D10DDI_SETSHADER                                   pfnDsSetShader;
    PFND3D10DDI_SETSAMPLERS                                 pfnDsSetSamplers;
    PFND3D11_1DDI_SETCONSTANTBUFFERS                        pfnDsSetConstantBuffers;
    PFND3D11_1DDI_CREATEHULLSHADER                          pfnCreateHullShader;
    PFND3D11_1DDI_CREATEDOMAINSHADER                        pfnCreateDomainShader;
    PFND3D11DDI_CHECKDEFERREDCONTEXTHANDLESIZES             pfnCheckDeferredContextHandleSizes; // Only required when supporting D3D11DDICAPS_COMMANDLISTS*
    PFND3D11DDI_CALCDEFERREDCONTEXTHANDLESIZE               pfnCalcDeferredContextHandleSize; // Only required when supporting D3D11DDICAPS_COMMANDLISTS*
    PFND3D11DDI_CALCPRIVATEDEFERREDCONTEXTSIZE              pfnCalcPrivateDeferredContextSize; // Only required when supporting D3D11DDICAPS_COMMANDLISTS*
    PFND3D11DDI_CREATEDEFERREDCONTEXT                       pfnCreateDeferredContext; // Only required when supporting D3D11DDICAPS_COMMANDLISTS*
    PFND3D11DDI_ABANDONCOMMANDLIST                          pfnAbandonCommandList; // Only required when supporting D3D11DDICAPS_COMMANDLISTS*
    PFND3D11DDI_CALCPRIVATECOMMANDLISTSIZE                  pfnCalcPrivateCommandListSize; // Only required when supporting D3D11DDICAPS_COMMANDLISTS*
    PFND3D11DDI_CREATECOMMANDLIST                           pfnCreateCommandList; // Only required when supporting D3D11DDICAPS_COMMANDLISTS*
    PFND3D11DDI_DESTROYCOMMANDLIST                          pfnDestroyCommandList; // Only required when supporting D3D11DDICAPS_COMMANDLISTS*
    PFND3D11_1DDI_CALCPRIVATETESSELLATIONSHADERSIZE         pfnCalcPrivateTessellationShaderSize;
    PFND3D11DDI_SETSHADER_WITH_IFACES                       pfnPsSetShaderWithIfaces;
    PFND3D11DDI_SETSHADER_WITH_IFACES                       pfnVsSetShaderWithIfaces;
    PFND3D11DDI_SETSHADER_WITH_IFACES                       pfnGsSetShaderWithIfaces;
    PFND3D11DDI_SETSHADER_WITH_IFACES                       pfnHsSetShaderWithIfaces;
    PFND3D11DDI_SETSHADER_WITH_IFACES                       pfnDsSetShaderWithIfaces;
    PFND3D11DDI_SETSHADER_WITH_IFACES                       pfnCsSetShaderWithIfaces;
    PFND3D11DDI_CREATECOMPUTESHADER                         pfnCreateComputeShader;
    PFND3D10DDI_SETSHADER                                   pfnCsSetShader;
    PFND3D10DDI_SETSHADERRESOURCES                          pfnCsSetShaderResources;
    PFND3D10DDI_SETSAMPLERS                                 pfnCsSetSamplers;
    PFND3D11_1DDI_SETCONSTANTBUFFERS                        pfnCsSetConstantBuffers;
    PFND3DWDDM2_0DDI_CALCPRIVATEUNORDEREDACCESSVIEWSIZE     pfnCalcPrivateUnorderedAccessViewSize;
    PFND3DWDDM2_0DDI_CREATEUNORDEREDACCESSVIEW              pfnCreateUnorderedAccessView;
    PFND3D11DDI_DESTROYUNORDEREDACCESSVIEW                  pfnDestroyUnorderedAccessView;
    PFND3D11DDI_CLEARUNORDEREDACCESSVIEWUINT                pfnClearUnorderedAccessViewUint;
    PFND3D11DDI_CLEARUNORDEREDACCESSVIEWFLOAT               pfnClearUnorderedAccessViewFloat;
    PFND3D11DDI_SETUNORDEREDACCESSVIEWS                     pfnCsSetUnorderedAccessViews;
    PFND3D11DDI_DISPATCH                                    pfnDispatch;
    PFND3D11DDI_DISPATCHINDIRECT                            pfnDispatchIndirect;
    PFND3D11DDI_SETRESOURCEMINLOD                           pfnSetResourceMinLOD;
    PFND3D11DDI_COPYSTRUCTURECOUNT                          pfnCopyStructureCount;
    PFND3D11DDI_RECYCLECOMMANDLIST                          pfnRecycleCommandList;
    PFND3D11DDI_RECYCLECREATECOMMANDLIST                    pfnRecycleCreateCommandList;
    PFND3D11DDI_RECYCLECREATEDEFERREDCONTEXT                pfnRecycleCreateDeferredContext;
    PFND3D11DDI_DESTROYCOMMANDLIST                          pfnRecycleDestroyCommandList;

    // Start additional 11.1 entries
    // (note some functions above also have different signatures 11.1 vs. 11.0)

    PFND3D11_1DDI_DISCARD                                   pfnDiscard;
    PFND3D11_1DDI_ASSIGNDEBUGBINARY                         pfnAssignDebugBinary;
    PFND3D10DDI_RESOURCEMAP                                 pfnDynamicConstantBufferMapNoOverwrite;
    PFND3D11_1DDI_CHECKDIRECTFLIPSUPPORT                    pfnCheckDirectFlipSupport;
    PFND3D11_1DDI_CLEARVIEW                                 pfnClearView;

    // Start additional WDDM 1.3 entries
    // (note some functions above also have different signatures vs 11.1)
    PFND3DWDDM1_3DDI_UPDATETILEMAPPINGS                     pfnUpdateTileMappings;
    PFND3DWDDM1_3DDI_COPYTILEMAPPINGS                       pfnCopyTileMappings;
    PFND3DWDDM1_3DDI_COPYTILES                              pfnCopyTiles;
    PFND3DWDDM1_3DDI_UPDATETILES                            pfnUpdateTiles;
    PFND3DWDDM1_3DDI_TILEDRESOURCEBARRIER                   pfnTiledResourceBarrier;
    PFND3DWDDM1_3DDI_GETMIPPACKING                          pfnGetMipPacking;
    PFND3DWDDM1_3DDI_RESIZETILEPOOL                         pfnResizeTilePool;
    PFND3DWDDM1_3DDI_SETMARKER                              pfnSetMarker;
    PFND3DWDDM1_3DDI_SETMARKERMODE                          pfnSetMarkerMode;

    // Start additional WDDM 2.0 entries
    PFND3DWDDM2_0DDI_SETHARDWAREPROTECTION                  pfnSetHardwareProtection;
    PFND3DWDDM2_0DDI_GETRESOURCELAYOUT                      pfnGetResourceLayout;
    PFND3DWDDM2_0DDI_RETRIEVE_SHADER_COMMENT                pfnRetrieveShaderComment;
} D3DWDDM2_0DDI_DEVICEFUNCS;
#else
typedef struct D3DWDDM2_0DDI_DEVICEFUNCS
{
// Order of functions is in decreasing order of priority ( as far as performance is concerned ).
// !!! BEGIN HIGH-FREQUENCY !!!
    PFND3D11_1DDI_RESOURCEUPDATESUBRESOURCEUP               pfnDefaultConstantBufferUpdateSubresourceUP;
    PFND3D11_1DDI_SETCONSTANTBUFFERS                        pfnVsSetConstantBuffers;
    PFND3D10DDI_SETSHADERRESOURCES                          pfnPsSetShaderResources;
    PFND3D10DDI_SETSHADER                                   pfnPsSetShader;
    PFND3D10DDI_SETSAMPLERS                                 pfnPsSetSamplers;
    PFND3D10DDI_SETSHADER                                   pfnVsSetShader;
    PFND3D10DDI_DRAWINDEXED                                 pfnDrawIndexed;
    PFND3D10DDI_DRAW                                        pfnDraw;
    PFND3D10DDI_RESOURCEMAP                                 pfnDynamicIABufferMapNoOverwrite;
    PFND3D10DDI_RESOURCEUNMAP                               pfnDynamicIABufferUnmap;
    PFND3D10DDI_RESOURCEMAP                                 pfnDynamicConstantBufferMapDiscard;
    PFND3D10DDI_RESOURCEMAP                                 pfnDynamicIABufferMapDiscard;
    PFND3D10DDI_RESOURCEUNMAP                               pfnDynamicConstantBufferUnmap;
    PFND3D11_1DDI_SETCONSTANTBUFFERS                        pfnPsSetConstantBuffers;
    PFND3D10DDI_SETINPUTLAYOUT                              pfnIaSetInputLayout;
    PFND3D10DDI_IA_SETVERTEXBUFFERS                         pfnIaSetVertexBuffers;
    PFND3D10DDI_IA_SETINDEXBUFFER                           pfnIaSetIndexBuffer;
// !!! END HIGH-FREQUENCY !!!

// Order of functions is in decreasing order of priority ( as far as performance is concerned ).
// !!! BEGIN MIDDLE-FREQUENCY !!!
    PFND3D10DDI_DRAWINDEXEDINSTANCED                        pfnDrawIndexedInstanced;
    PFND3D10DDI_DRAWINSTANCED                               pfnDrawInstanced;
    PFND3D10DDI_RESOURCEMAP                                 pfnDynamicResourceMapDiscard;
    PFND3D10DDI_RESOURCEUNMAP                               pfnDynamicResourceUnmap;
    PFND3D11_1DDI_SETCONSTANTBUFFERS                        pfnGsSetConstantBuffers;
    PFND3D10DDI_SETSHADER                                   pfnGsSetShader;
    PFND3D10DDI_IA_SETTOPOLOGY                              pfnIaSetTopology;
    PFND3D10DDI_RESOURCEMAP                                 pfnStagingResourceMap;
    PFND3D10DDI_RESOURCEUNMAP                               pfnStagingResourceUnmap;
    PFND3D10DDI_SETSHADERRESOURCES                          pfnVsSetShaderResources;
    PFND3D10DDI_SETSAMPLERS                                 pfnVsSetSamplers;
    PFND3D10DDI_SETSHADERRESOURCES                          pfnGsSetShaderResources;
    PFND3D10DDI_SETSAMPLERS                                 pfnGsSetSamplers;
    PFND3D11DDI_SETRENDERTARGETS                            pfnSetRenderTargets;
    PFND3D10DDI_SHADERRESOURCEVIEWREADAFTERWRITEHAZARD      pfnShaderResourceViewReadAfterWriteHazard;
    PFND3D10DDI_RESOURCEREADAFTERWRITEHAZARD                pfnResourceReadAfterWriteHazard;
    PFND3D10DDI_SETBLENDSTATE                               pfnSetBlendState;
    PFND3D10DDI_SETDEPTHSTENCILSTATE                        pfnSetDepthStencilState;
    PFND3D10DDI_SETRASTERIZERSTATE                          pfnSetRasterizerState;
    PFND3D10DDI_QUERYEND                                    pfnQueryEnd;
    PFND3D10DDI_QUERYBEGIN                                  pfnQueryBegin;
    PFND3D11_1DDI_RESOURCECOPYREGION                        pfnResourceCopyRegion;
    PFND3D11_1DDI_RESOURCEUPDATESUBRESOURCEUP               pfnResourceUpdateSubresourceUP;
    PFND3D10DDI_SO_SETTARGETS                               pfnSoSetTargets;
    PFND3D10DDI_DRAWAUTO                                    pfnDrawAuto;
    PFND3D10DDI_SETVIEWPORTS                                pfnSetViewports;
    PFND3D10DDI_SETSCISSORRECTS                             pfnSetScissorRects;
    PFND3D10DDI_CLEARRENDERTARGETVIEW                       pfnClearRenderTargetView;
    PFND3D10DDI_CLEARDEPTHSTENCILVIEW                       pfnClearDepthStencilView;
    PFND3D10DDI_SETPREDICATION                              pfnSetPredication;
    PFND3D10DDI_QUERYGETDATA                                pfnQueryGetData;
    PFND3DWDDM2_0DDI_FLUSH                                  pfnFlush;
    PFND3D10DDI_GENMIPS                                     pfnGenMips;
    PFND3D10DDI_RESOURCECOPY                                pfnResourceCopy;
    PFND3D10DDI_RESOURCERESOLVESUBRESOURCE                  pfnResourceResolveSubresource;
// !!! END MIDDLE-FREQUENCY !!!

// Infrequent paths:
    PFND3D10DDI_RESOURCEMAP                                 pfnResourceMap;
    PFND3D10DDI_RESOURCEUNMAP                               pfnResourceUnmap;
    PFND3D10DDI_RESOURCEISSTAGINGBUSY                       pfnResourceIsStagingBusy;
    PFND3DWDDM2_0DDI_RELOCATEDEVICEFUNCS                    pfnRelocateDeviceFuncs;
    PFND3D11DDI_CALCPRIVATERESOURCESIZE                     pfnCalcPrivateResourceSize;
    PFND3D10DDI_CALCPRIVATEOPENEDRESOURCESIZE               pfnCalcPrivateOpenedResourceSize;
    PFND3D11DDI_CREATERESOURCE                              pfnCreateResource;
    PFND3D10DDI_OPENRESOURCE                                pfnOpenResource;
    PFND3D10DDI_DESTROYRESOURCE                             pfnDestroyResource;
    PFND3DWDDM2_0DDI_CALCPRIVATESHADERRESOURCEVIEWSIZE      pfnCalcPrivateShaderResourceViewSize;
    PFND3DWDDM2_0DDI_CREATESHADERRESOURCEVIEW               pfnCreateShaderResourceView;
    PFND3D10DDI_DESTROYSHADERRESOURCEVIEW                   pfnDestroyShaderResourceView;
    PFND3DWDDM2_0DDI_CALCPRIVATERENDERTARGETVIEWSIZE        pfnCalcPrivateRenderTargetViewSize;
    PFND3DWDDM2_0DDI_CREATERENDERTARGETVIEW                 pfnCreateRenderTargetView;
    PFND3D10DDI_DESTROYRENDERTARGETVIEW                     pfnDestroyRenderTargetView;
    PFND3D11DDI_CALCPRIVATEDEPTHSTENCILVIEWSIZE             pfnCalcPrivateDepthStencilViewSize;
    PFND3D11DDI_CREATEDEPTHSTENCILVIEW                      pfnCreateDepthStencilView;
    PFND3D10DDI_DESTROYDEPTHSTENCILVIEW                     pfnDestroyDepthStencilView;
    PFND3D10DDI_CALCPRIVATEELEMENTLAYOUTSIZE                pfnCalcPrivateElementLayoutSize;
    PFND3D10DDI_CREATEELEMENTLAYOUT                         pfnCreateElementLayout;
    PFND3D10DDI_DESTROYELEMENTLAYOUT                        pfnDestroyElementLayout;
    PFND3D11_1DDI_CALCPRIVATEBLENDSTATESIZE                 pfnCalcPrivateBlendStateSize;
    PFND3D11_1DDI_CREATEBLENDSTATE                          pfnCreateBlendState;
    PFND3D10DDI_DESTROYBLENDSTATE                           pfnDestroyBlendState;
    PFND3D10DDI_CALCPRIVATEDEPTHSTENCILSTATESIZE            pfnCalcPrivateDepthStencilStateSize;
    PFND3D10DDI_CREATEDEPTHSTENCILSTATE                     pfnCreateDepthStencilState;
    PFND3D10DDI_DESTROYDEPTHSTENCILSTATE                    pfnDestroyDepthStencilState;
    PFND3DWDDM2_0DDI_CALCPRIVATERASTERIZERSTATESIZE         pfnCalcPrivateRasterizerStateSize;
    PFND3DWDDM2_0DDI_CREATERASTERIZERSTATE                  pfnCreateRasterizerState;
    PFND3D10DDI_DESTROYRASTERIZERSTATE                      pfnDestroyRasterizerState;
    PFND3D11_1DDI_CALCPRIVATESHADERSIZE                     pfnCalcPrivateShaderSize;
    PFND3D11_1DDI_CREATEVERTEXSHADER                        pfnCreateVertexShader;
    PFND3D11_1DDI_CREATEGEOMETRYSHADER                      pfnCreateGeometryShader;
    PFND3D11_1DDI_CREATEPIXELSHADER                         pfnCreatePixelShader;
    PFND3D11_1DDI_CALCPRIVATEGEOMETRYSHADERWITHSTREAMOUTPUT pfnCalcPrivateGeometryShaderWithStreamOutput;
    PFND3D11_1DDI_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT      pfnCreateGeometryShaderWithStreamOutput;
    PFND3D10DDI_DESTROYSHADER                               pfnDestroyShader;
    PFND3D10DDI_CALCPRIVATESAMPLERSIZE                      pfnCalcPrivateSamplerSize;
    PFND3D10DDI_CREATESAMPLER                               pfnCreateSampler;
    PFND3D10DDI_DESTROYSAMPLER                              pfnDestroySampler;
    PFND3DWDDM2_0DDI_CALCPRIVATEQUERYSIZE                   pfnCalcPrivateQuerySize;
    PFND3DWDDM2_0DDI_CREATEQUERY                            pfnCreateQuery;
    PFND3D10DDI_DESTROYQUERY                                pfnDestroyQuery;

    PFND3D10DDI_CHECKFORMATSUPPORT                          pfnCheckFormatSupport;
    PFND3DWDDM1_3DDI_CHECKMULTISAMPLEQUALITYLEVELS          pfnCheckMultisampleQualityLevels;
    PFND3D10DDI_CHECKCOUNTERINFO                            pfnCheckCounterInfo;
    PFND3D10DDI_CHECKCOUNTER                                pfnCheckCounter;

    PFND3D10DDI_DESTROYDEVICE                               pfnDestroyDevice;
    PFND3D10DDI_SETTEXTFILTERSIZE                           pfnSetTextFilterSize;

    // Start additional 10.1 entries:
    PFND3D10DDI_RESOURCECOPY                                pfnResourceConvert;
    PFND3D11_1DDI_RESOURCECOPYREGION                        pfnResourceConvertRegion;

#ifdef D3D10PSGP
    // Rasterization-only specific:
    PFND3D10DDI_RESETPRIMITIVEID                            pfnResetPrimitiveID;
    PFND3D10DDI_SETVERTEXPIPELINEOUTPUT                     pfnSetVertexPipelineOutput;
#endif // D3D10PSGP

    // Start additional 11.0 entries:
    PFND3D11DDI_DRAWINDEXEDINSTANCEDINDIRECT                pfnDrawIndexedInstancedIndirect;
    PFND3D11DDI_DRAWINSTANCEDINDIRECT                       pfnDrawInstancedIndirect;
    PFND3D11DDI_COMMANDLISTEXECUTE                          pfnCommandListExecute; // Only required when supporting D3D11DDICAPS_COMMANDLISTS
    PFND3D10DDI_SETSHADERRESOURCES                          pfnHsSetShaderResources;
    PFND3D10DDI_SETSHADER                                   pfnHsSetShader;
    PFND3D10DDI_SETSAMPLERS                                 pfnHsSetSamplers;
    PFND3D11_1DDI_SETCONSTANTBUFFERS                        pfnHsSetConstantBuffers;
    PFND3D10DDI_SETSHADERRESOURCES                          pfnDsSetShaderResources;
    PFND3D10DDI_SETSHADER                                   pfnDsSetShader;
    PFND3D10DDI_SETSAMPLERS                                 pfnDsSetSamplers;
    PFND3D11_1DDI_SETCONSTANTBUFFERS                        pfnDsSetConstantBuffers;
    PFND3D11_1DDI_CREATEHULLSHADER                          pfnCreateHullShader;
    PFND3D11_1DDI_CREATEDOMAINSHADER                        pfnCreateDomainShader;
    PFND3D11DDI_CHECKDEFERREDCONTEXTHANDLESIZES             pfnCheckDeferredContextHandleSizes; // Only required when supporting D3D11DDICAPS_COMMANDLISTS*
    PFND3D11DDI_CALCDEFERREDCONTEXTHANDLESIZE               pfnCalcDeferredContextHandleSize; // Only required when supporting D3D11DDICAPS_COMMANDLISTS*
    PFND3D11DDI_CALCPRIVATEDEFERREDCONTEXTSIZE              pfnCalcPrivateDeferredContextSize; // Only required when supporting D3D11DDICAPS_COMMANDLISTS*
    PFND3D11DDI_CREATEDEFERREDCONTEXT                       pfnCreateDeferredContext; // Only required when supporting D3D11DDICAPS_COMMANDLISTS*
    PFND3D11DDI_ABANDONCOMMANDLIST                          pfnAbandonCommandList; // Only required when supporting D3D11DDICAPS_COMMANDLISTS*
    PFND3D11DDI_CALCPRIVATECOMMANDLISTSIZE                  pfnCalcPrivateCommandListSize; // Only required when supporting D3D11DDICAPS_COMMANDLISTS*
    PFND3D11DDI_CREATECOMMANDLIST                           pfnCreateCommandList; // Only required when supporting D3D11DDICAPS_COMMANDLISTS*
    PFND3D11DDI_DESTROYCOMMANDLIST                          pfnDestroyCommandList; // Only required when supporting D3D11DDICAPS_COMMANDLISTS*
    PFND3D11_1DDI_CALCPRIVATETESSELLATIONSHADERSIZE         pfnCalcPrivateTessellationShaderSize;
    PFND3D11DDI_SETSHADER_WITH_IFACES                       pfnPsSetShaderWithIfaces;
    PFND3D11DDI_SETSHADER_WITH_IFACES                       pfnVsSetShaderWithIfaces;
    PFND3D11DDI_SETSHADER_WITH_IFACES                       pfnGsSetShaderWithIfaces;
    PFND3D11DDI_SETSHADER_WITH_IFACES                       pfnHsSetShaderWithIfaces;
    PFND3D11DDI_SETSHADER_WITH_IFACES                       pfnDsSetShaderWithIfaces;
    PFND3D11DDI_SETSHADER_WITH_IFACES                       pfnCsSetShaderWithIfaces;
    PFND3D11DDI_CREATECOMPUTESHADER                         pfnCreateComputeShader;
    PFND3D10DDI_SETSHADER                                   pfnCsSetShader;
    PFND3D10DDI_SETSHADERRESOURCES                          pfnCsSetShaderResources;
    PFND3D10DDI_SETSAMPLERS                                 pfnCsSetSamplers;
    PFND3D11_1DDI_SETCONSTANTBUFFERS                        pfnCsSetConstantBuffers;
    PFND3DWDDM2_0DDI_CALCPRIVATEUNORDEREDACCESSVIEWSIZE     pfnCalcPrivateUnorderedAccessViewSize;
    PFND3DWDDM2_0DDI_CREATEUNORDEREDACCESSVIEW              pfnCreateUnorderedAccessView;
    PFND3D11DDI_DESTROYUNORDEREDACCESSVIEW                  pfnDestroyUnorderedAccessView;
    PFND3D11DDI_CLEARUNORDEREDACCESSVIEWUINT                pfnClearUnorderedAccessViewUint;
    PFND3D11DDI_CLEARUNORDEREDACCESSVIEWFLOAT               pfnClearUnorderedAccessViewFloat;
    PFND3D11DDI_SETUNORDEREDACCESSVIEWS                     pfnCsSetUnorderedAccessViews;
    PFND3D11DDI_DISPATCH                                    pfnDispatch;
    PFND3D11DDI_DISPATCHINDIRECT                            pfnDispatchIndirect;
    PFND3D11DDI_SETRESOURCEMINLOD                           pfnSetResourceMinLOD;
    PFND3D11DDI_COPYSTRUCTURECOUNT                          pfnCopyStructureCount;
    PFND3D11DDI_RECYCLECOMMANDLIST                          pfnRecycleCommandList;
    PFND3D11DDI_RECYCLECREATECOMMANDLIST                    pfnRecycleCreateCommandList;
    PFND3D11DDI_RECYCLECREATEDEFERREDCONTEXT                pfnRecycleCreateDeferredContext;
    PFND3D11DDI_DESTROYCOMMANDLIST                          pfnRecycleDestroyCommandList;

    // Start additional 11.1 entries
    // (note some functions above also have different signatures 11.1 vs. 11.0)

    PFND3D11_1DDI_DISCARD                                   pfnDiscard;
    PFND3D11_1DDI_ASSIGNDEBUGBINARY                         pfnAssignDebugBinary;
    PFND3D10DDI_RESOURCEMAP                                 pfnDynamicConstantBufferMapNoOverwrite;
    PFND3D11_1DDI_CHECKDIRECTFLIPSUPPORT                    pfnCheckDirectFlipSupport;
    PFND3D11_1DDI_CLEARVIEW                                 pfnClearView;

    // Start additional WDDM 1.3 entries
    // (note some functions above also have different signatures vs 11.1)
    PFND3DWDDM1_3DDI_UPDATETILEMAPPINGS                     pfnUpdateTileMappings;
    PFND3DWDDM1_3DDI_COPYTILEMAPPINGS                       pfnCopyTileMappings;
    PFND3DWDDM1_3DDI_COPYTILES                              pfnCopyTiles;
    PFND3DWDDM1_3DDI_UPDATETILES                            pfnUpdateTiles;
    PFND3DWDDM1_3DDI_TILEDRESOURCEBARRIER                   pfnTiledResourceBarrier;
    PFND3DWDDM1_3DDI_GETMIPPACKING                          pfnGetMipPacking;
    PFND3DWDDM1_3DDI_RESIZETILEPOOL                         pfnResizeTilePool;
    PFND3DWDDM1_3DDI_SETMARKER                              pfnSetMarker;
    PFND3DWDDM1_3DDI_SETMARKERMODE                          pfnSetMarkerMode;

    // Start additional WDDM 2.0 entries
    PFND3DWDDM2_0DDI_SETHARDWAREPROTECTION                  pfnSetHardwareProtection;
    PFND3DWDDM2_0DDI_GETRESOURCELAYOUT                      pfnGetResourceLayout;
    PFND3DWDDM2_0DDI_RETRIEVE_SHADER_COMMENT                pfnRetrieveShaderComment;
    PFND3DWDDM2_0DDI_SETHARDWAREPROTECTIONSTATE             pfnSetHardwareProtectionState; 
} D3DWDDM2_0DDI_DEVICEFUNCS;
#endif
#endif

#endif // D3D11DDI_MINOR_HEADER_VERSION

#if D3D11DDI_MINOR_HEADER_VERSION >= 10
typedef VOID ( APIENTRY* PFND3DWDDM2_1DDI_RELOCATEDEVICEFUNCS )(
    D3D10DDI_HDEVICE, _In_ struct D3DWDDM2_1DDI_DEVICEFUNCS* );

typedef VOID ( APIENTRY* PFND3DWDDM2_1DDI_SYNC_TOKEN )( D3D10DDI_HDEVICE, _In_opt_ D3D10DDI_HRESOURCE hResource, HANDLE hSyncToken );

//----------------------------------------------------------------------------------------------------------------------------------
// User mode device function table WDDM 2.1.
//
typedef struct D3DWDDM2_1DDI_DEVICEFUNCS
{
// Order of functions is in decreasing order of priority ( as far as performance is concerned ).
// !!! BEGIN HIGH-FREQUENCY !!!
    PFND3D11_1DDI_RESOURCEUPDATESUBRESOURCEUP               pfnDefaultConstantBufferUpdateSubresourceUP;
    PFND3D11_1DDI_SETCONSTANTBUFFERS                        pfnVsSetConstantBuffers;
    PFND3D10DDI_SETSHADERRESOURCES                          pfnPsSetShaderResources;
    PFND3D10DDI_SETSHADER                                   pfnPsSetShader;
    PFND3D10DDI_SETSAMPLERS                                 pfnPsSetSamplers;
    PFND3D10DDI_SETSHADER                                   pfnVsSetShader;
    PFND3D10DDI_DRAWINDEXED                                 pfnDrawIndexed;
    PFND3D10DDI_DRAW                                        pfnDraw;
    PFND3D10DDI_RESOURCEMAP                                 pfnDynamicIABufferMapNoOverwrite;
    PFND3D10DDI_RESOURCEUNMAP                               pfnDynamicIABufferUnmap;
    PFND3D10DDI_RESOURCEMAP                                 pfnDynamicConstantBufferMapDiscard;
    PFND3D10DDI_RESOURCEMAP                                 pfnDynamicIABufferMapDiscard;
    PFND3D10DDI_RESOURCEUNMAP                               pfnDynamicConstantBufferUnmap;
    PFND3D11_1DDI_SETCONSTANTBUFFERS                        pfnPsSetConstantBuffers;
    PFND3D10DDI_SETINPUTLAYOUT                              pfnIaSetInputLayout;
    PFND3D10DDI_IA_SETVERTEXBUFFERS                         pfnIaSetVertexBuffers;
    PFND3D10DDI_IA_SETINDEXBUFFER                           pfnIaSetIndexBuffer;
// !!! END HIGH-FREQUENCY !!!

// Order of functions is in decreasing order of priority ( as far as performance is concerned ).
// !!! BEGIN MIDDLE-FREQUENCY !!!
    PFND3D10DDI_DRAWINDEXEDINSTANCED                        pfnDrawIndexedInstanced;
    PFND3D10DDI_DRAWINSTANCED                               pfnDrawInstanced;
    PFND3D10DDI_RESOURCEMAP                                 pfnDynamicResourceMapDiscard;
    PFND3D10DDI_RESOURCEUNMAP                               pfnDynamicResourceUnmap;
    PFND3D11_1DDI_SETCONSTANTBUFFERS                        pfnGsSetConstantBuffers;
    PFND3D10DDI_SETSHADER                                   pfnGsSetShader;
    PFND3D10DDI_IA_SETTOPOLOGY                              pfnIaSetTopology;
    PFND3D10DDI_RESOURCEMAP                                 pfnStagingResourceMap;
    PFND3D10DDI_RESOURCEUNMAP                               pfnStagingResourceUnmap;
    PFND3D10DDI_SETSHADERRESOURCES                          pfnVsSetShaderResources;
    PFND3D10DDI_SETSAMPLERS                                 pfnVsSetSamplers;
    PFND3D10DDI_SETSHADERRESOURCES                          pfnGsSetShaderResources;
    PFND3D10DDI_SETSAMPLERS                                 pfnGsSetSamplers;
    PFND3D11DDI_SETRENDERTARGETS                            pfnSetRenderTargets;
    PFND3D10DDI_SHADERRESOURCEVIEWREADAFTERWRITEHAZARD      pfnShaderResourceViewReadAfterWriteHazard;
    PFND3D10DDI_RESOURCEREADAFTERWRITEHAZARD                pfnResourceReadAfterWriteHazard;
    PFND3D10DDI_SETBLENDSTATE                               pfnSetBlendState;
    PFND3D10DDI_SETDEPTHSTENCILSTATE                        pfnSetDepthStencilState;
    PFND3D10DDI_SETRASTERIZERSTATE                          pfnSetRasterizerState;
    PFND3D10DDI_QUERYEND                                    pfnQueryEnd;
    PFND3D10DDI_QUERYBEGIN                                  pfnQueryBegin;
    PFND3D11_1DDI_RESOURCECOPYREGION                        pfnResourceCopyRegion;
    PFND3D11_1DDI_RESOURCEUPDATESUBRESOURCEUP               pfnResourceUpdateSubresourceUP;
    PFND3D10DDI_SO_SETTARGETS                               pfnSoSetTargets;
    PFND3D10DDI_DRAWAUTO                                    pfnDrawAuto;
    PFND3D10DDI_SETVIEWPORTS                                pfnSetViewports;
    PFND3D10DDI_SETSCISSORRECTS                             pfnSetScissorRects;
    PFND3D10DDI_CLEARRENDERTARGETVIEW                       pfnClearRenderTargetView;
    PFND3D10DDI_CLEARDEPTHSTENCILVIEW                       pfnClearDepthStencilView;
    PFND3D10DDI_SETPREDICATION                              pfnSetPredication;
    PFND3D10DDI_QUERYGETDATA                                pfnQueryGetData;
    PFND3DWDDM2_0DDI_FLUSH                                  pfnFlush;
    PFND3D10DDI_GENMIPS                                     pfnGenMips;
    PFND3D10DDI_RESOURCECOPY                                pfnResourceCopy;
    PFND3D10DDI_RESOURCERESOLVESUBRESOURCE                  pfnResourceResolveSubresource;
// !!! END MIDDLE-FREQUENCY !!!

// Infrequent paths:
    PFND3D10DDI_RESOURCEMAP                                 pfnResourceMap;
    PFND3D10DDI_RESOURCEUNMAP                               pfnResourceUnmap;
    PFND3D10DDI_RESOURCEISSTAGINGBUSY                       pfnResourceIsStagingBusy;
    PFND3DWDDM2_1DDI_RELOCATEDEVICEFUNCS                    pfnRelocateDeviceFuncs;
    PFND3D11DDI_CALCPRIVATERESOURCESIZE                     pfnCalcPrivateResourceSize;
    PFND3D10DDI_CALCPRIVATEOPENEDRESOURCESIZE               pfnCalcPrivateOpenedResourceSize;
    PFND3D11DDI_CREATERESOURCE                              pfnCreateResource;
    PFND3D10DDI_OPENRESOURCE                                pfnOpenResource;
    PFND3D10DDI_DESTROYRESOURCE                             pfnDestroyResource;
    PFND3DWDDM2_0DDI_CALCPRIVATESHADERRESOURCEVIEWSIZE      pfnCalcPrivateShaderResourceViewSize;
    PFND3DWDDM2_0DDI_CREATESHADERRESOURCEVIEW               pfnCreateShaderResourceView;
    PFND3D10DDI_DESTROYSHADERRESOURCEVIEW                   pfnDestroyShaderResourceView;
    PFND3DWDDM2_0DDI_CALCPRIVATERENDERTARGETVIEWSIZE        pfnCalcPrivateRenderTargetViewSize;
    PFND3DWDDM2_0DDI_CREATERENDERTARGETVIEW                 pfnCreateRenderTargetView;
    PFND3D10DDI_DESTROYRENDERTARGETVIEW                     pfnDestroyRenderTargetView;
    PFND3D11DDI_CALCPRIVATEDEPTHSTENCILVIEWSIZE             pfnCalcPrivateDepthStencilViewSize;
    PFND3D11DDI_CREATEDEPTHSTENCILVIEW                      pfnCreateDepthStencilView;
    PFND3D10DDI_DESTROYDEPTHSTENCILVIEW                     pfnDestroyDepthStencilView;
    PFND3D10DDI_CALCPRIVATEELEMENTLAYOUTSIZE                pfnCalcPrivateElementLayoutSize;
    PFND3D10DDI_CREATEELEMENTLAYOUT                         pfnCreateElementLayout;
    PFND3D10DDI_DESTROYELEMENTLAYOUT                        pfnDestroyElementLayout;
    PFND3D11_1DDI_CALCPRIVATEBLENDSTATESIZE                 pfnCalcPrivateBlendStateSize;
    PFND3D11_1DDI_CREATEBLENDSTATE                          pfnCreateBlendState;
    PFND3D10DDI_DESTROYBLENDSTATE                           pfnDestroyBlendState;
    PFND3D10DDI_CALCPRIVATEDEPTHSTENCILSTATESIZE            pfnCalcPrivateDepthStencilStateSize;
    PFND3D10DDI_CREATEDEPTHSTENCILSTATE                     pfnCreateDepthStencilState;
    PFND3D10DDI_DESTROYDEPTHSTENCILSTATE                    pfnDestroyDepthStencilState;
    PFND3DWDDM2_0DDI_CALCPRIVATERASTERIZERSTATESIZE         pfnCalcPrivateRasterizerStateSize;
    PFND3DWDDM2_0DDI_CREATERASTERIZERSTATE                  pfnCreateRasterizerState;
    PFND3D10DDI_DESTROYRASTERIZERSTATE                      pfnDestroyRasterizerState;
    PFND3D11_1DDI_CALCPRIVATESHADERSIZE                     pfnCalcPrivateShaderSize;
    PFND3D11_1DDI_CREATEVERTEXSHADER                        pfnCreateVertexShader;
    PFND3D11_1DDI_CREATEGEOMETRYSHADER                      pfnCreateGeometryShader;
    PFND3D11_1DDI_CREATEPIXELSHADER                         pfnCreatePixelShader;
    PFND3D11_1DDI_CALCPRIVATEGEOMETRYSHADERWITHSTREAMOUTPUT pfnCalcPrivateGeometryShaderWithStreamOutput;
    PFND3D11_1DDI_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT      pfnCreateGeometryShaderWithStreamOutput;
    PFND3D10DDI_DESTROYSHADER                               pfnDestroyShader;
    PFND3D10DDI_CALCPRIVATESAMPLERSIZE                      pfnCalcPrivateSamplerSize;
    PFND3D10DDI_CREATESAMPLER                               pfnCreateSampler;
    PFND3D10DDI_DESTROYSAMPLER                              pfnDestroySampler;
    PFND3DWDDM2_0DDI_CALCPRIVATEQUERYSIZE                   pfnCalcPrivateQuerySize;
    PFND3DWDDM2_0DDI_CREATEQUERY                            pfnCreateQuery;
    PFND3D10DDI_DESTROYQUERY                                pfnDestroyQuery;

    PFND3D10DDI_CHECKFORMATSUPPORT                          pfnCheckFormatSupport;
    PFND3DWDDM1_3DDI_CHECKMULTISAMPLEQUALITYLEVELS          pfnCheckMultisampleQualityLevels;
    PFND3D10DDI_CHECKCOUNTERINFO                            pfnCheckCounterInfo;
    PFND3D10DDI_CHECKCOUNTER                                pfnCheckCounter;

    PFND3D10DDI_DESTROYDEVICE                               pfnDestroyDevice;
    PFND3D10DDI_SETTEXTFILTERSIZE                           pfnSetTextFilterSize;

    // Start additional 10.1 entries:
    PFND3D10DDI_RESOURCECOPY                                pfnResourceConvert;
    PFND3D11_1DDI_RESOURCECOPYREGION                        pfnResourceConvertRegion;

#ifdef D3D10PSGP
    // Rasterization-only specific:
    PFND3D10DDI_RESETPRIMITIVEID                            pfnResetPrimitiveID;
    PFND3D10DDI_SETVERTEXPIPELINEOUTPUT                     pfnSetVertexPipelineOutput;
#endif // D3D10PSGP

    // Start additional 11.0 entries:
    PFND3D11DDI_DRAWINDEXEDINSTANCEDINDIRECT                pfnDrawIndexedInstancedIndirect;
    PFND3D11DDI_DRAWINSTANCEDINDIRECT                       pfnDrawInstancedIndirect;
    PFND3D11DDI_COMMANDLISTEXECUTE                          pfnCommandListExecute; // Only required when supporting D3D11DDICAPS_COMMANDLISTS
    PFND3D10DDI_SETSHADERRESOURCES                          pfnHsSetShaderResources;
    PFND3D10DDI_SETSHADER                                   pfnHsSetShader;
    PFND3D10DDI_SETSAMPLERS                                 pfnHsSetSamplers;
    PFND3D11_1DDI_SETCONSTANTBUFFERS                        pfnHsSetConstantBuffers;
    PFND3D10DDI_SETSHADERRESOURCES                          pfnDsSetShaderResources;
    PFND3D10DDI_SETSHADER                                   pfnDsSetShader;
    PFND3D10DDI_SETSAMPLERS                                 pfnDsSetSamplers;
    PFND3D11_1DDI_SETCONSTANTBUFFERS                        pfnDsSetConstantBuffers;
    PFND3D11_1DDI_CREATEHULLSHADER                          pfnCreateHullShader;
    PFND3D11_1DDI_CREATEDOMAINSHADER                        pfnCreateDomainShader;
    PFND3D11DDI_CHECKDEFERREDCONTEXTHANDLESIZES             pfnCheckDeferredContextHandleSizes; // Only required when supporting D3D11DDICAPS_COMMANDLISTS*
    PFND3D11DDI_CALCDEFERREDCONTEXTHANDLESIZE               pfnCalcDeferredContextHandleSize; // Only required when supporting D3D11DDICAPS_COMMANDLISTS*
    PFND3D11DDI_CALCPRIVATEDEFERREDCONTEXTSIZE              pfnCalcPrivateDeferredContextSize; // Only required when supporting D3D11DDICAPS_COMMANDLISTS*
    PFND3D11DDI_CREATEDEFERREDCONTEXT                       pfnCreateDeferredContext; // Only required when supporting D3D11DDICAPS_COMMANDLISTS*
    PFND3D11DDI_ABANDONCOMMANDLIST                          pfnAbandonCommandList; // Only required when supporting D3D11DDICAPS_COMMANDLISTS*
    PFND3D11DDI_CALCPRIVATECOMMANDLISTSIZE                  pfnCalcPrivateCommandListSize; // Only required when supporting D3D11DDICAPS_COMMANDLISTS*
    PFND3D11DDI_CREATECOMMANDLIST                           pfnCreateCommandList; // Only required when supporting D3D11DDICAPS_COMMANDLISTS*
    PFND3D11DDI_DESTROYCOMMANDLIST                          pfnDestroyCommandList; // Only required when supporting D3D11DDICAPS_COMMANDLISTS*
    PFND3D11_1DDI_CALCPRIVATETESSELLATIONSHADERSIZE         pfnCalcPrivateTessellationShaderSize;
    PFND3D11DDI_SETSHADER_WITH_IFACES                       pfnPsSetShaderWithIfaces;
    PFND3D11DDI_SETSHADER_WITH_IFACES                       pfnVsSetShaderWithIfaces;
    PFND3D11DDI_SETSHADER_WITH_IFACES                       pfnGsSetShaderWithIfaces;
    PFND3D11DDI_SETSHADER_WITH_IFACES                       pfnHsSetShaderWithIfaces;
    PFND3D11DDI_SETSHADER_WITH_IFACES                       pfnDsSetShaderWithIfaces;
    PFND3D11DDI_SETSHADER_WITH_IFACES                       pfnCsSetShaderWithIfaces;
    PFND3D11DDI_CREATECOMPUTESHADER                         pfnCreateComputeShader;
    PFND3D10DDI_SETSHADER                                   pfnCsSetShader;
    PFND3D10DDI_SETSHADERRESOURCES                          pfnCsSetShaderResources;
    PFND3D10DDI_SETSAMPLERS                                 pfnCsSetSamplers;
    PFND3D11_1DDI_SETCONSTANTBUFFERS                        pfnCsSetConstantBuffers;
    PFND3DWDDM2_0DDI_CALCPRIVATEUNORDEREDACCESSVIEWSIZE     pfnCalcPrivateUnorderedAccessViewSize;
    PFND3DWDDM2_0DDI_CREATEUNORDEREDACCESSVIEW              pfnCreateUnorderedAccessView;
    PFND3D11DDI_DESTROYUNORDEREDACCESSVIEW                  pfnDestroyUnorderedAccessView;
    PFND3D11DDI_CLEARUNORDEREDACCESSVIEWUINT                pfnClearUnorderedAccessViewUint;
    PFND3D11DDI_CLEARUNORDEREDACCESSVIEWFLOAT               pfnClearUnorderedAccessViewFloat;
    PFND3D11DDI_SETUNORDEREDACCESSVIEWS                     pfnCsSetUnorderedAccessViews;
    PFND3D11DDI_DISPATCH                                    pfnDispatch;
    PFND3D11DDI_DISPATCHINDIRECT                            pfnDispatchIndirect;
    PFND3D11DDI_SETRESOURCEMINLOD                           pfnSetResourceMinLOD;
    PFND3D11DDI_COPYSTRUCTURECOUNT                          pfnCopyStructureCount;
    PFND3D11DDI_RECYCLECOMMANDLIST                          pfnRecycleCommandList;
    PFND3D11DDI_RECYCLECREATECOMMANDLIST                    pfnRecycleCreateCommandList;
    PFND3D11DDI_RECYCLECREATEDEFERREDCONTEXT                pfnRecycleCreateDeferredContext;
    PFND3D11DDI_DESTROYCOMMANDLIST                          pfnRecycleDestroyCommandList;

    // Start additional 11.1 entries
    // (note some functions above also have different signatures 11.1 vs. 11.0)

    PFND3D11_1DDI_DISCARD                                   pfnDiscard;
    PFND3D11_1DDI_ASSIGNDEBUGBINARY                         pfnAssignDebugBinary;
    PFND3D10DDI_RESOURCEMAP                                 pfnDynamicConstantBufferMapNoOverwrite;
    PFND3D11_1DDI_CHECKDIRECTFLIPSUPPORT                    pfnCheckDirectFlipSupport;
    PFND3D11_1DDI_CLEARVIEW                                 pfnClearView;

    // Start additional WDDM 1.3 entries
    // (note some functions above also have different signatures vs 11.1)
    PFND3DWDDM1_3DDI_UPDATETILEMAPPINGS                     pfnUpdateTileMappings;
    PFND3DWDDM1_3DDI_COPYTILEMAPPINGS                       pfnCopyTileMappings;
    PFND3DWDDM1_3DDI_COPYTILES                              pfnCopyTiles;
    PFND3DWDDM1_3DDI_UPDATETILES                            pfnUpdateTiles;
    PFND3DWDDM1_3DDI_TILEDRESOURCEBARRIER                   pfnTiledResourceBarrier;
    PFND3DWDDM1_3DDI_GETMIPPACKING                          pfnGetMipPacking;
    PFND3DWDDM1_3DDI_RESIZETILEPOOL                         pfnResizeTilePool;
    PFND3DWDDM1_3DDI_SETMARKER                              pfnSetMarker;
    PFND3DWDDM1_3DDI_SETMARKERMODE                          pfnSetMarkerMode;

    // Start additional WDDM 2.0 entries
    PFND3DWDDM2_0DDI_SETHARDWAREPROTECTION                  pfnSetHardwareProtection;
    PFND3DWDDM2_0DDI_GETRESOURCELAYOUT                      pfnGetResourceLayout;
    PFND3DWDDM2_0DDI_RETRIEVE_SHADER_COMMENT                pfnRetrieveShaderComment;
    PFND3DWDDM2_0DDI_SETHARDWAREPROTECTIONSTATE             pfnSetHardwareProtectionState; 

    // Start additional WDDM 2.1 entries
    PFND3DWDDM2_1DDI_SYNC_TOKEN                             pfnAcquireResource;
    PFND3DWDDM2_1DDI_SYNC_TOKEN                             pfnReleaseResource;
} D3DWDDM2_1DDI_DEVICEFUNCS;
#endif /*D3D11DDI_MINOR_HEADER_VERSION >= 10*/

typedef VOID (APIENTRY CALLBACK *PFND3D10DDI_SETERROR_CB)( D3D10DDI_HRTCORELAYER, HRESULT );
typedef void (APIENTRY CALLBACK *PFND3D10DDI_STATE_VS_CONSTBUF_CB)( D3D10DDI_HRTCORELAYER, UINT, UINT );
typedef void (APIENTRY CALLBACK *PFND3D10DDI_STATE_PS_SRV_CB)( D3D10DDI_HRTCORELAYER, UINT, UINT );
typedef void (APIENTRY CALLBACK *PFND3D10DDI_STATE_PS_SHADER_CB)( D3D10DDI_HRTCORELAYER );
typedef void (APIENTRY CALLBACK *PFND3D10DDI_STATE_PS_SAMPLER_CB)( D3D10DDI_HRTCORELAYER, UINT, UINT );
typedef void (APIENTRY CALLBACK *PFND3D10DDI_STATE_VS_SHADER_CB)( D3D10DDI_HRTCORELAYER );
typedef void (APIENTRY CALLBACK *PFND3D10DDI_STATE_PS_CONSTBUF_CB)( D3D10DDI_HRTCORELAYER, UINT, UINT );
typedef void (APIENTRY CALLBACK *PFND3D10DDI_STATE_IA_INPUTLAYOUT_CB)( D3D10DDI_HRTCORELAYER );
typedef void (APIENTRY CALLBACK *PFND3D10DDI_STATE_IA_VERTEXBUF_CB)( D3D10DDI_HRTCORELAYER, UINT, UINT );
typedef void (APIENTRY CALLBACK *PFND3D10DDI_STATE_IA_INDEXBUF_CB)( D3D10DDI_HRTCORELAYER );
typedef void (APIENTRY CALLBACK *PFND3D10DDI_STATE_GS_CONSTBUF_CB)( D3D10DDI_HRTCORELAYER, UINT, UINT );
typedef void (APIENTRY CALLBACK *PFND3D10DDI_STATE_GS_SHADER_CB)( D3D10DDI_HRTCORELAYER );
typedef void (APIENTRY CALLBACK *PFND3D10DDI_STATE_IA_PRIMITIVE_TOPOLOGY_CB)( D3D10DDI_HRTCORELAYER );
typedef void (APIENTRY CALLBACK *PFND3D10DDI_STATE_VS_SRV_CB)( D3D10DDI_HRTCORELAYER, UINT, UINT );
typedef void (APIENTRY CALLBACK *PFND3D10DDI_STATE_VS_SAMPLER_CB)( D3D10DDI_HRTCORELAYER, UINT, UINT );
typedef void (APIENTRY CALLBACK *PFND3D10DDI_STATE_GS_SRV_CB)( D3D10DDI_HRTCORELAYER, UINT, UINT );
typedef void (APIENTRY CALLBACK *PFND3D10DDI_STATE_GS_SAMPLER_CB)( D3D10DDI_HRTCORELAYER, UINT, UINT );
typedef void (APIENTRY CALLBACK *PFND3D10DDI_STATE_OM_RENDERTARGETS_CB)( D3D10DDI_HRTCORELAYER );
typedef void (APIENTRY CALLBACK *PFND3D10DDI_STATE_OM_BLENDSTATE_CB)( D3D10DDI_HRTCORELAYER );
typedef void (APIENTRY CALLBACK *PFND3D10DDI_STATE_OM_DEPTHSTATE_CB)( D3D10DDI_HRTCORELAYER );
typedef void (APIENTRY CALLBACK *PFND3D10DDI_STATE_RS_RASTSTATE_CB)( D3D10DDI_HRTCORELAYER );
typedef void (APIENTRY CALLBACK *PFND3D10DDI_STATE_SO_TARGETS_CB)( D3D10DDI_HRTCORELAYER );
typedef void (APIENTRY CALLBACK *PFND3D10DDI_STATE_RS_VIEWPORTS_CB)( D3D10DDI_HRTCORELAYER );
typedef void (APIENTRY CALLBACK *PFND3D10DDI_STATE_RS_SCISSOR_CB)( D3D10DDI_HRTCORELAYER );
typedef void (APIENTRY CALLBACK *PFND3D10DDI_STATE_TEXTFILTERSIZE_CB)( D3D10DDI_HRTCORELAYER );
typedef void (APIENTRY CALLBACK *PFND3D10DDI_DISABLE_DEFERRED_STAGING_RESOURCE_DESTRUCTION_CB)( D3D10DDI_HRTCORELAYER );

typedef struct D3D10DDI_CORELAYER_DEVICECALLBACKS
{
    PFND3D10DDI_SETERROR_CB pfnSetErrorCb;
    PFND3D10DDI_STATE_VS_CONSTBUF_CB pfnStateVsConstBufCb;
    PFND3D10DDI_STATE_PS_SRV_CB pfnStatePsSrvCb;
    PFND3D10DDI_STATE_PS_SHADER_CB pfnStatePsShaderCb;
    PFND3D10DDI_STATE_PS_SAMPLER_CB pfnStatePsSamplerCb;
    PFND3D10DDI_STATE_VS_SHADER_CB pfnStateVsShaderCb;
    PFND3D10DDI_STATE_PS_CONSTBUF_CB pfnStatePsConstBufCb;
    PFND3D10DDI_STATE_IA_INPUTLAYOUT_CB pfnStateIaInputLayoutCb;
    PFND3D10DDI_STATE_IA_VERTEXBUF_CB pfnStateIaVertexBufCb;
    PFND3D10DDI_STATE_IA_INDEXBUF_CB pfnStateIaIndexBufCb;
    PFND3D10DDI_STATE_GS_CONSTBUF_CB pfnStateGsConstBufCb;
    PFND3D10DDI_STATE_GS_SHADER_CB pfnStateGsShaderCb;
    PFND3D10DDI_STATE_IA_PRIMITIVE_TOPOLOGY_CB pfnStateIaPrimitiveTopologyCb;
    PFND3D10DDI_STATE_VS_SRV_CB pfnStateVsSrvCb;
    PFND3D10DDI_STATE_VS_SAMPLER_CB pfnStateVsSamplerCb;
    PFND3D10DDI_STATE_GS_SRV_CB pfnStateGsSrvCb;
    PFND3D10DDI_STATE_GS_SAMPLER_CB pfnStateGsSamplerCb;
    PFND3D10DDI_STATE_OM_RENDERTARGETS_CB pfnStateOmRenderTargetsCb;
    PFND3D10DDI_STATE_OM_BLENDSTATE_CB pfnStateOmBlendStateCb;
    PFND3D10DDI_STATE_OM_DEPTHSTATE_CB pfnStateOmDepthStateCb;
    PFND3D10DDI_STATE_RS_RASTSTATE_CB pfnStateRsRastStateCb;
    PFND3D10DDI_STATE_SO_TARGETS_CB pfnStateSoTargetsCb;
    PFND3D10DDI_STATE_RS_VIEWPORTS_CB pfnStateRsViewportsCb;
    PFND3D10DDI_STATE_RS_SCISSOR_CB pfnStateRsScissorCb;
    PFND3D10DDI_DISABLE_DEFERRED_STAGING_RESOURCE_DESTRUCTION_CB pfnDisableDeferredStagingResourceDestruction;
    PFND3D10DDI_STATE_TEXTFILTERSIZE_CB pfnStateTextFilterSizeCb;
} D3D10DDI_CORELAYER_DEVICECALLBACKS;

#if D3D11DDI_MINOR_HEADER_VERSION >= 1
typedef void (APIENTRY CALLBACK *PFND3D11DDI_STATE_HS_SRV_CB)( D3D10DDI_HRTCORELAYER, UINT, UINT );
typedef void (APIENTRY CALLBACK *PFND3D11DDI_STATE_HS_SHADER_CB)( D3D10DDI_HRTCORELAYER );
typedef void (APIENTRY CALLBACK *PFND3D11DDI_STATE_HS_SAMPLER_CB)( D3D10DDI_HRTCORELAYER, UINT, UINT );
typedef void (APIENTRY CALLBACK *PFND3D11DDI_STATE_HS_CONSTBUF_CB)( D3D10DDI_HRTCORELAYER, UINT, UINT );
typedef void (APIENTRY CALLBACK *PFND3D11DDI_STATE_DS_SRV_CB)( D3D10DDI_HRTCORELAYER, UINT, UINT );
typedef void (APIENTRY CALLBACK *PFND3D11DDI_STATE_DS_SHADER_CB)( D3D10DDI_HRTCORELAYER );
typedef void (APIENTRY CALLBACK *PFND3D11DDI_STATE_DS_SAMPLER_CB)( D3D10DDI_HRTCORELAYER, UINT, UINT );
typedef void (APIENTRY CALLBACK *PFND3D11DDI_STATE_DS_CONSTBUF_CB)( D3D10DDI_HRTCORELAYER, UINT, UINT );
typedef void (APIENTRY CALLBACK *PFND3D11DDI_PERFORM_AMORTIZED_PROCESSING_CB)( D3D10DDI_HRTCORELAYER );
typedef void (APIENTRY CALLBACK *PFND3D11DDI_STATE_CS_SRV_CB)( D3D10DDI_HRTCORELAYER, UINT, UINT );
typedef void (APIENTRY CALLBACK *PFND3D11DDI_STATE_CS_UAV_CB)( D3D10DDI_HRTCORELAYER, UINT, UINT );
typedef void (APIENTRY CALLBACK *PFND3D11DDI_STATE_CS_SHADER_CB)( D3D10DDI_HRTCORELAYER );
typedef void (APIENTRY CALLBACK *PFND3D11DDI_STATE_CS_SAMPLER_CB)( D3D10DDI_HRTCORELAYER, UINT, UINT );
typedef void (APIENTRY CALLBACK *PFND3D11DDI_STATE_CS_CONSTBUF_CB)( D3D10DDI_HRTCORELAYER, UINT, UINT );

typedef struct D3D11DDI_CORELAYER_DEVICECALLBACKS
{
    PFND3D10DDI_SETERROR_CB pfnSetErrorCb;
    PFND3D10DDI_STATE_VS_CONSTBUF_CB pfnStateVsConstBufCb;
    PFND3D10DDI_STATE_PS_SRV_CB pfnStatePsSrvCb;
    PFND3D10DDI_STATE_PS_SHADER_CB pfnStatePsShaderCb;
    PFND3D10DDI_STATE_PS_SAMPLER_CB pfnStatePsSamplerCb;
    PFND3D10DDI_STATE_VS_SHADER_CB pfnStateVsShaderCb;
    PFND3D10DDI_STATE_PS_CONSTBUF_CB pfnStatePsConstBufCb;
    PFND3D10DDI_STATE_IA_INPUTLAYOUT_CB pfnStateIaInputLayoutCb;
    PFND3D10DDI_STATE_IA_VERTEXBUF_CB pfnStateIaVertexBufCb;
    PFND3D10DDI_STATE_IA_INDEXBUF_CB pfnStateIaIndexBufCb;
    PFND3D10DDI_STATE_GS_CONSTBUF_CB pfnStateGsConstBufCb;
    PFND3D10DDI_STATE_GS_SHADER_CB pfnStateGsShaderCb;
    PFND3D10DDI_STATE_IA_PRIMITIVE_TOPOLOGY_CB pfnStateIaPrimitiveTopologyCb;
    PFND3D10DDI_STATE_VS_SRV_CB pfnStateVsSrvCb;
    PFND3D10DDI_STATE_VS_SAMPLER_CB pfnStateVsSamplerCb;
    PFND3D10DDI_STATE_GS_SRV_CB pfnStateGsSrvCb;
    PFND3D10DDI_STATE_GS_SAMPLER_CB pfnStateGsSamplerCb;
    PFND3D10DDI_STATE_OM_RENDERTARGETS_CB pfnStateOmRenderTargetsCb;
    PFND3D10DDI_STATE_OM_BLENDSTATE_CB pfnStateOmBlendStateCb;
    PFND3D10DDI_STATE_OM_DEPTHSTATE_CB pfnStateOmDepthStateCb;
    PFND3D10DDI_STATE_RS_RASTSTATE_CB pfnStateRsRastStateCb;
    PFND3D10DDI_STATE_SO_TARGETS_CB pfnStateSoTargetsCb;
    PFND3D10DDI_STATE_RS_VIEWPORTS_CB pfnStateRsViewportsCb;
    PFND3D10DDI_STATE_RS_SCISSOR_CB pfnStateRsScissorCb;
    PFND3D10DDI_DISABLE_DEFERRED_STAGING_RESOURCE_DESTRUCTION_CB pfnDisableDeferredStagingResourceDestruction;
    PFND3D10DDI_STATE_TEXTFILTERSIZE_CB pfnStateTextFilterSizeCb;
    PFND3D11DDI_STATE_HS_SRV_CB pfnStateHsSrvCb;
    PFND3D11DDI_STATE_HS_SHADER_CB pfnStateHsShaderCb;
    PFND3D11DDI_STATE_HS_SAMPLER_CB pfnStateHsSamplerCb;
    PFND3D11DDI_STATE_HS_CONSTBUF_CB pfnStateHsConstBufCb;
    PFND3D11DDI_STATE_DS_SRV_CB pfnStateDsSrvCb;
    PFND3D11DDI_STATE_DS_SHADER_CB pfnStateDsShaderCb;
    PFND3D11DDI_STATE_DS_SAMPLER_CB pfnStateDsSamplerCb;
    PFND3D11DDI_STATE_DS_CONSTBUF_CB pfnStateDsConstBufCb;
    PFND3D11DDI_PERFORM_AMORTIZED_PROCESSING_CB pfnPerformAmortizedProcessingCb;
    PFND3D11DDI_STATE_CS_SRV_CB              pfnStateCsSrvCb;
    PFND3D11DDI_STATE_CS_UAV_CB              pfnStateCsUavCb;
    PFND3D11DDI_STATE_CS_SHADER_CB           pfnStateCsShaderCb;
    PFND3D11DDI_STATE_CS_SAMPLER_CB          pfnStateCsSamplerCb;
    PFND3D11DDI_STATE_CS_CONSTBUF_CB         pfnStateCsConstBufCb;
} D3D11DDI_CORELAYER_DEVICECALLBACKS;
#endif

#if D3D11DDI_MINOR_HEADER_VERSION >= 5

typedef struct D3DWDDM2_0DDICB_CREATECONTEXT
{
    UINT                        NodeOrdinal;                    // in:  Specify the node ordinal this context is targeted to.
    UINT                        EngineAffinity;                 // in:  Specify the engine affinity within the node.
    D3DDDI_CREATECONTEXTFLAGS   Flags;                          // in:  D3DDDI_CREATECONTEXTFLAGS
    UINT                        ContextTypeFlags;               // in:  D3DWDDM2_0DDI_CONTEXTTYPE_FLAG
    VOID*                       pPrivateDriverData;             // in:  Pointer to private driver data
    UINT                        PrivateDriverDataSize;          // in:  Size of private driver data
    HANDLE                      hContext;                       // out: Handle to the created context.
    VOID*                       pCommandBuffer;                 // out: Pointer to the first command buffer for this context.
    UINT                        CommandBufferSize;              // out: Command buffer size (bytes).
    D3DDDI_ALLOCATIONLIST*      pAllocationList;                // out: Pointer to the first allocation list for this context.
    UINT                        AllocationListSize;             // out: Allocation list size (elements).
    D3DDDI_PATCHLOCATIONLIST*   pPatchLocationList;             // out: Pointer to the first patch location list for this device.
    UINT                        PatchLocationListSize;          // out: Patch location list size (elements).
    D3DGPU_VIRTUAL_ADDRESS      CommandBuffer;                  // out: GPU Virtual address to the command buffer to use. _ADVSCH_
} D3DWDDM2_0DDICB_CREATECONTEXT;

typedef struct D3DWDDM2_0DDICB_CREATECONTEXTVIRTUAL
{
    UINT                        NodeOrdinal;                        // in:  Specify the node ordinal this context is targeted to.
    UINT                        EngineAffinity;                     // in:  Specify the engine affinity within the node.
    D3DDDI_CREATECONTEXTFLAGS   Flags;                              // in:  D3DDDI_CREATECONTEXTFLAGS
    UINT                        ContextTypeFlags;                   // in:  D3DWDDM2_0DDI_CONTEXTTYPE_FLAG
    VOID*                       pPrivateDriverData;                 // in:  Pointer to private driver data
    UINT                        PrivateDriverDataSize;              // in:  Size of private driver data
    HANDLE                      hContext;                           // out: Handle to the created context.
} D3DWDDM2_0DDICB_CREATECONTEXTVIRTUAL;

typedef _Check_return_ HRESULT(APIENTRY CALLBACK *PFND3DWDDM2_0DDI_CREATECONTEXT_CB)(
    _In_ D3D10DDI_HRTCORELAYER hDevice, 
    _Inout_ D3DWDDM2_0DDICB_CREATECONTEXT*
    );

typedef _Check_return_ HRESULT(APIENTRY CALLBACK *PFND3DWDDM2_0DDI_CREATECONTEXTVIRTUAL_CB)(
    _In_ D3D10DDI_HRTCORELAYER hDevice, 
    _Inout_ D3DWDDM2_0DDICB_CREATECONTEXTVIRTUAL*
    );

typedef struct D3DWDDM2_0DDI_CORELAYER_DEVICECALLBACKS
{
    PFND3D10DDI_SETERROR_CB pfnSetErrorCb;
    PFND3D10DDI_STATE_VS_CONSTBUF_CB pfnStateVsConstBufCb;
    PFND3D10DDI_STATE_PS_SRV_CB pfnStatePsSrvCb;
    PFND3D10DDI_STATE_PS_SHADER_CB pfnStatePsShaderCb;
    PFND3D10DDI_STATE_PS_SAMPLER_CB pfnStatePsSamplerCb;
    PFND3D10DDI_STATE_VS_SHADER_CB pfnStateVsShaderCb;
    PFND3D10DDI_STATE_PS_CONSTBUF_CB pfnStatePsConstBufCb;
    PFND3D10DDI_STATE_IA_INPUTLAYOUT_CB pfnStateIaInputLayoutCb;
    PFND3D10DDI_STATE_IA_VERTEXBUF_CB pfnStateIaVertexBufCb;
    PFND3D10DDI_STATE_IA_INDEXBUF_CB pfnStateIaIndexBufCb;
    PFND3D10DDI_STATE_GS_CONSTBUF_CB pfnStateGsConstBufCb;
    PFND3D10DDI_STATE_GS_SHADER_CB pfnStateGsShaderCb;
    PFND3D10DDI_STATE_IA_PRIMITIVE_TOPOLOGY_CB pfnStateIaPrimitiveTopologyCb;
    PFND3D10DDI_STATE_VS_SRV_CB pfnStateVsSrvCb;
    PFND3D10DDI_STATE_VS_SAMPLER_CB pfnStateVsSamplerCb;
    PFND3D10DDI_STATE_GS_SRV_CB pfnStateGsSrvCb;
    PFND3D10DDI_STATE_GS_SAMPLER_CB pfnStateGsSamplerCb;
    PFND3D10DDI_STATE_OM_RENDERTARGETS_CB pfnStateOmRenderTargetsCb;
    PFND3D10DDI_STATE_OM_BLENDSTATE_CB pfnStateOmBlendStateCb;
    PFND3D10DDI_STATE_OM_DEPTHSTATE_CB pfnStateOmDepthStateCb;
    PFND3D10DDI_STATE_RS_RASTSTATE_CB pfnStateRsRastStateCb;
    PFND3D10DDI_STATE_SO_TARGETS_CB pfnStateSoTargetsCb;
    PFND3D10DDI_STATE_RS_VIEWPORTS_CB pfnStateRsViewportsCb;
    PFND3D10DDI_STATE_RS_SCISSOR_CB pfnStateRsScissorCb;
    PFND3D10DDI_DISABLE_DEFERRED_STAGING_RESOURCE_DESTRUCTION_CB pfnDisableDeferredStagingResourceDestruction;
    PFND3D10DDI_STATE_TEXTFILTERSIZE_CB pfnStateTextFilterSizeCb;
    PFND3D11DDI_STATE_HS_SRV_CB pfnStateHsSrvCb;
    PFND3D11DDI_STATE_HS_SHADER_CB pfnStateHsShaderCb;
    PFND3D11DDI_STATE_HS_SAMPLER_CB pfnStateHsSamplerCb;
    PFND3D11DDI_STATE_HS_CONSTBUF_CB pfnStateHsConstBufCb;
    PFND3D11DDI_STATE_DS_SRV_CB pfnStateDsSrvCb;
    PFND3D11DDI_STATE_DS_SHADER_CB pfnStateDsShaderCb;
    PFND3D11DDI_STATE_DS_SAMPLER_CB pfnStateDsSamplerCb;
    PFND3D11DDI_STATE_DS_CONSTBUF_CB pfnStateDsConstBufCb;
    PFND3D11DDI_PERFORM_AMORTIZED_PROCESSING_CB pfnPerformAmortizedProcessingCb;
    PFND3D11DDI_STATE_CS_SRV_CB              pfnStateCsSrvCb;
    PFND3D11DDI_STATE_CS_UAV_CB              pfnStateCsUavCb;
    PFND3D11DDI_STATE_CS_SHADER_CB           pfnStateCsShaderCb;
    PFND3D11DDI_STATE_CS_SAMPLER_CB          pfnStateCsSamplerCb;
    PFND3D11DDI_STATE_CS_CONSTBUF_CB         pfnStateCsConstBufCb;
    PFND3DWDDM2_0DDI_CREATECONTEXT_CB        pfnCreateContextCb;
    PFND3DWDDM2_0DDI_CREATECONTEXTVIRTUAL_CB pfnCreateContextVirtualCb;
} D3DWDDM2_0DDI_CORELAYER_DEVICECALLBACKS;
#endif

#if D3D11DDI_MINOR_HEADER_VERSION >= 3
typedef HRESULT ( APIENTRY* PFND3D10DDI_RETRIEVESUBOBJECT )(
    D3D10DDI_HDEVICE,
    _In_ UINT32 SubDeviceID,
    _In_ SIZE_T ParamSize,
    _In_reads_bytes_opt_(ParamSize) void * pParams,
    _In_ SIZE_T OutputParamSize,
    _Out_writes_bytes_(OutputParamSize) void * pOutputParamsBuffer );

#define D3D11_1DDI_VIDEO_FUNCTIONS   2       // Sub ID for video function table
#endif
#if D3D11DDI_MINOR_HEADER_VERSION >= 5
#define D3DWDDM2_0DDI_VIDEO_FUNCTIONS   3    // Sub ID for 2.0 video function table
#endif
#if D3D11DDI_MINOR_HEADER_VERSION >= 10
#define D3DWDDM2_1DDI_VIDEO_FUNCTIONS   5    // Sub ID for 2.1 video function table
#endif

typedef struct D3D10DDIARG_CREATEDEVICE
{
    D3D10DDI_HRTDEVICE              hRTDevice;              // in:  Runtime handle
    UINT                            Interface;              // in:  Interface version
    UINT                            Version;                // in:  Runtime Version
    CONST D3DDDI_DEVICECALLBACKS*   pKTCallbacks;           // in:  Pointer to runtime callbacks that invoke kernel
    union
    {
        D3D10DDI_DEVICEFUNCS*           pDeviceFuncs;       // in/out: Driver d3d function table
#if D3D10DDI_MINOR_HEADER_VERSION >= 1 || D3D11DDI_MINOR_HEADER_VERSION >= 1
        D3D10_1DDI_DEVICEFUNCS*         p10_1DeviceFuncs;   // in/out: (Use when Interface == D3D10_1_DDI_INTERFACE_VERSION)
#endif
#if D3D11DDI_MINOR_HEADER_VERSION >= 1
        D3D11DDI_DEVICEFUNCS*           p11DeviceFuncs;     // in/out: (Use when Interface == D3D11_0_DDI_INTERFACE_VERSION)
#endif
#if D3D11DDI_MINOR_HEADER_VERSION >= 3
        D3D11_1DDI_DEVICEFUNCS*         p11_1DeviceFuncs;     // in/out: (Use when Interface == D3D11_1_DDI_INTERFACE_VERSION)
#endif
#if D3D11DDI_MINOR_HEADER_VERSION >= 4
        D3DWDDM1_3DDI_DEVICEFUNCS*      pWDDM1_3DeviceFuncs;     // in/out: (Use when Interface == D3DWDDM1_3_DDI_INTERFACE_VERSION)
#endif
#if D3D11DDI_MINOR_HEADER_VERSION >= 5
        D3DWDDM2_0DDI_DEVICEFUNCS*      pWDDM2_0DeviceFuncs;     // in/out: (Use when Interface == D3DWDDM2_0_DDI_INTERFACE_VERSION)
#endif
#if D3D11DDI_MINOR_HEADER_VERSION >= 10
        D3DWDDM2_1DDI_DEVICEFUNCS*      pWDDM2_1DeviceFuncs;     // in/out: (Use when Interface == D3DWDDM2_1_DDI_INTERFACE_VERSION)
#endif
    };

    D3D10DDI_HDEVICE                hDrvDevice;             // in:  Driver private handle/ storage.
    DXGI_DDI_BASE_ARGS              DXGIBaseDDI;            // in/out
    D3D10DDI_HRTCORELAYER           hRTCoreLayer;           // in:  CoreLayer handle
    union
    {
        CONST D3D10DDI_CORELAYER_DEVICECALLBACKS* pUMCallbacks;   // in:  callbacks that stay in usermode
#if D3D11DDI_MINOR_HEADER_VERSION >= 1
        CONST D3D11DDI_CORELAYER_DEVICECALLBACKS* p11UMCallbacks; // in:  callbacks that stay in usermode
#endif
#if D3D11DDI_MINOR_HEADER_VERSION >= 5
        CONST D3DWDDM2_0DDI_CORELAYER_DEVICECALLBACKS* pWDDM2_0UMCallbacks; // in:  callbacks that stay in usermode and 11-specific KM callbacks
#endif
    };
    UINT                            Flags;                  // in:  D3D10DDI_CREATEDEVICE_FLAG_*
#if D3D11DDI_MINOR_HEADER_VERSION >= 3
    PFND3D10DDI_RETRIEVESUBOBJECT * ppfnRetrieveSubObject;  //in/out: pointer to sub-object retrieval  function pointer
#endif
} D3D10DDIARG_CREATEDEVICE;

typedef struct D3D10DDIARG_CALCPRIVATEDEVICESIZE
{
    UINT                          Interface;          // in:  Interface version
    UINT                          Version;            // in:  Runtime Version
    UINT                          Flags;              // in:  D3D10DDI_CREATEDEVICE_FLAG_*
} D3D10DDIARG_CALCPRIVATEDEVICESIZE;

#define D3D10DDI_CREATEDEVICE_FLAG_DISABLE_EXTRA_THREAD_CREATION 0x1
// Reserve 3 bits for D3D11DDI_CREATEDEVICE_FLAG_3DPIPELINESUPPORT_MASK
// Reserve bit for D3D11DDI_CREATEDEVICE_FLAG_SINGLETHREADED
#define D3D11DDI_CREATEDEVICE_FLAG_DEBUGGABLE 0x20
// Reserve 2 more bits for D3D11DDI_CREATEDEVICE_FLAG_3DPIPELINESUPPORT_MASK

typedef SIZE_T (APIENTRY *PFND3D10DDI_CALCPRIVATEDEVICESIZE)(D3D10DDI_HADAPTER, _In_ CONST D3D10DDIARG_CALCPRIVATEDEVICESIZE*);
typedef HRESULT (APIENTRY *PFND3D10DDI_CREATEDEVICE)(D3D10DDI_HADAPTER, _In_ D3D10DDIARG_CREATEDEVICE*);
typedef HRESULT (APIENTRY *PFND3D10DDI_CLOSEADAPTER)(D3D10DDI_HADAPTER);

typedef struct D3D10DDI_ADAPTERFUNCS
{
    PFND3D10DDI_CALCPRIVATEDEVICESIZE         pfnCalcPrivateDeviceSize;
    PFND3D10DDI_CREATEDEVICE                  pfnCreateDevice;
    PFND3D10DDI_CLOSEADAPTER                  pfnCloseAdapter;
} D3D10DDI_ADAPTERFUNCS;

#if D3D10DDI_MINOR_HEADER_VERSION >= 2 || D3D11DDI_MINOR_HEADER_VERSION >= 1
typedef enum D3D10_2DDICAPS_TYPE
{
    // Reserving room for legacy D3DDDICAPS_*
    D3D11DDICAPS_THREADING = 128,
    D3D11DDICAPS_SHADER = 129,
    D3D11DDICAPS_3DPIPELINESUPPORT = 130,
#if D3D11DDI_MINOR_HEADER_VERSION >= 3
    D3D11_1DDICAPS_D3D11_OPTIONS = 131,
    D3D11_1DDICAPS_ARCHITECTURE_INFO = 132,
    D3D11_1DDICAPS_SHADER_MIN_PRECISION_SUPPORT = 134,
#endif
#if D3D11DDI_MINOR_HEADER_VERSION >= 4
    D3DWDDM1_3DDICAPS_D3D11_OPTIONS1 = 136,
    D3DWDDM1_3DDICAPS_MARKER = 137,
#endif
#if D3D11DDI_MINOR_HEADER_VERSION >= 5
    D3DWDDM2_0DDICAPS_D3D11_OPTIONS2 = 143,
    D3DWDDM2_0DDICAPS_MEMORY_ARCHITECTURE = 145,
#if D3D11DDI_MINOR_HEADER_VERSION < 6
    D3DWDDM2_0DDICAPS_TEXTURE_LAYOUT_SETS = 146,
    D3DWDDM2_0DDICAPS_TEXTURE_LAYOUT = 147,
#endif
#endif
#if D3D11DDI_MINOR_HEADER_VERSION >= 6
    D3DWDDM2_0DDICAPS_TEXTURE_LAYOUT = 149,
    D3DWDDM2_0DDICAPS_SWIZZLE_PATTERN = 150,
#endif
#if D3D11DDI_MINOR_HEADER_VERSION >= 7
    D3DWDDM2_0DDICAPS_D3D11_OPTIONS3 = 152,
#endif
#if D3D11DDI_MINOR_HEADER_VERSION >= 9
    D3DWDDM2_0DDICAPS_GPUVA_CAPS = 153,
    D3DWDDM2_0DDICAPS_TEXTURE_LAYOUT1 = 154,
#endif

// Avoid overlap with D3DDDICAPS_TYPE values in d3dumddi.w, to allow drivers to unify caps concepts.
} D3D10_2DDICAPS_TYPE;

typedef struct D3D10_2DDIARG_GETCAPS
{
    D3D10_2DDICAPS_TYPE Type;
    VOID* pInfo;
    VOID* pData;
    UINT DataSize;
} D3D10_2DDIARG_GETCAPS;

// D3D11DDICAPS_THREADING
    typedef struct D3D11DDI_THREADING_CAPS
    {
        UINT Caps; // D3D11DDICAPS_*
    } D3D11DDI_THREADING_CAPS;

    // Caps
    #define D3D11DDICAPS_FREETHREADED 0x1
    // COMMANDLISTS* cannot be supported unless FREETHREADED is also.
    #define D3D11DDICAPS_COMMANDLISTS 0x2 // Deprecated when D3D11_0_*DDI_BUILD_VERSION >= 2
    #define D3D11DDICAPS_COMMANDLISTS_BUILD_2 0x4 // Introduced D3D11_0_*DDI_BUILD_VERSION >= 2

// D3D11DDICAPS_SHADER
    typedef struct D3D11DDI_SHADER_CAPS
    {
        UINT Caps; // D3D11DDICAPS_SHADER_*
    } D3D11DDI_SHADER_CAPS;

    // Caps
    #define D3D11DDICAPS_SHADER_DOUBLES 0x1
    #define D3D11DDICAPS_SHADER_COMPUTE_PLUS_RAW_AND_STRUCTURED_BUFFERS_IN_SHADER_4_X 0x2
    #define D3D11DDICAPS_SHADER_DEBUGGABLE 0x4
#if D3D11DDI_MINOR_HEADER_VERSION >= 4
    #define D3D11DDICAPS_SHADER_REQUIRES_TRANSLATION_INFO_FOR_DX9 0x8
#endif
#if D3D11DDI_MINOR_HEADER_VERSION >= 5
    #define D3D11DDICAPS_SHADER_SPECIFIED_STENCIL_REF             0x10
    #define D3D11DDICAPS_SHADER_TYPED_UAV_LOAD_ADDITIONAL_FORMATS 0x20
    #define D3D11DDICAPS_SHADER_ROVS                              0x40
#endif

// D3D11DDICAPS_3DPIPELINESUPPORT
    typedef enum D3D11DDI_3DPIPELINELEVEL
    {
        D3D11DDI_3DPIPELINELEVEL_10_0 = 0,
        D3D11DDI_3DPIPELINELEVEL_10_1 = 1,
        D3D11DDI_3DPIPELINELEVEL_11_0 = 2,
#if D3D11DDI_MINOR_HEADER_VERSION >= 3
        D3D11_1DDI_3DPIPELINELEVEL_11_1 = 3,
        //
        D3D11_1DDI_3DPIPELINELEVEL_9_1 = 4,
        D3D11_1DDI_3DPIPELINELEVEL_9_2 = 5,
        D3D11_1DDI_3DPIPELINELEVEL_9_3 = 6,
#endif
#if D3D11DDI_MINOR_HEADER_VERSION >= 7
        D3DWDDM2_0DDI_3DPIPELINELEVEL_12_0 = 7,
        D3DWDDM2_0DDI_3DPIPELINELEVEL_12_1 = 8,
#endif
    } D3D11DDI_3DPIPELINELEVEL;

    typedef struct D3D11DDI_3DPIPELINESUPPORT_CAPS
    {
        UINT Caps; // Use D3D11DDI_ENCODE_3DPIPELINESUPPORT_CAP() | D3D11DDI_ENCODE_3DPIPELINESUPPORT_CAP() style
    } D3D11DDI_3DPIPELINESUPPORT_CAPS;
    #define D3D11DDI_ENCODE_3DPIPELINESUPPORT_CAP( Level ) (0x1 << Level)

    // CREATEDEVICE_FLAG_3DPIPELINESUPPORT 5 bits have been spread across bits: 0xce (note the gap of 2 bits between 0xc0 and 0xe)
    // This is because this field grew more than anticipated and other CREATEDEVICE_FLAGS got in the way.
    #define D3D11DDI_CREATEDEVICE_FLAG_3DPIPELINESUPPORT_SHIFT (0x1)
    #define D3D11DDI_CREATEDEVICE_FLAG_3DPIPELINESUPPORT_MASK (0x7 << D3D11DDI_CREATEDEVICE_FLAG_3DPIPELINESUPPORT_SHIFT)
    #define D3D11DDI_CREATEDEVICE_FLAG_3DPIPELINESUPPORT_SHIFT2 (0x3)
    #define D3D11DDI_CREATEDEVICE_FLAG_3DPIPELINESUPPORT_MASK2 (0x18 << D3D11DDI_CREATEDEVICE_FLAG_3DPIPELINESUPPORT_SHIFT2)
    #define D3D11DDI_CREATEDEVICE_FLAG_3DPIPELINESUPPORT_FULL_MASK (D3D11DDI_CREATEDEVICE_FLAG_3DPIPELINESUPPORT_MASK|D3D11DDI_CREATEDEVICE_FLAG_3DPIPELINESUPPORT_MASK2)
    #define D3D11DDI_EXTRACT_3DPIPELINELEVEL_FROM_FLAGS( Flags ) \
        ((D3D11DDI_3DPIPELINELEVEL)((((Flags) & D3D11DDI_CREATEDEVICE_FLAG_3DPIPELINESUPPORT_MASK) >> \
        D3D11DDI_CREATEDEVICE_FLAG_3DPIPELINESUPPORT_SHIFT) | \
        (((Flags) & D3D11DDI_CREATEDEVICE_FLAG_3DPIPELINESUPPORT_MASK2) >> \
        D3D11DDI_CREATEDEVICE_FLAG_3DPIPELINESUPPORT_SHIFT2)) )

#if D3D11DDI_MINOR_HEADER_VERSION >= 3

// D3D11_1DDICAPS_D3D11_OPTIONS
    typedef struct D3D11_1DDI_D3D11_OPTIONS_DATA
    {
        BOOL OutputMergerLogicOp;
        BOOL AssignDebugBinarySupport;
    } D3D11_1DDI_D3D11_OPTIONS_DATA;

// D3D11_1DDICAPS_ARCHITECTURE_INFO
    typedef struct D3D11_1DDI_ARCHITECTURE_INFO_DATA
    {
        BOOL TileBasedDeferredRenderer;
    } D3D11_1DDI_ARCHITECTURE_INFO_DATA;

// D3D11_1DDICAPS_SHADER_MIN_PRECISION_SUPPORT

typedef enum D3D11_DDI_SHADER_MIN_PRECISION
{
    D3D11_DDI_SHADER_MIN_PRECISION_10_BIT = 0x1,
    D3D11_DDI_SHADER_MIN_PRECISION_16_BIT = 0x2
} D3D11_DDI_SHADER_MIN_PRECISION;

typedef struct D3D11_DDI_SHADER_MIN_PRECISION_SUPPORT_DATA
{
    UINT PixelShaderMinPrecision; // D3D11_DDI_SHADER_MIN_PRECISION flags for PS
    UINT AllOtherStagesMinPrecision; // D3D11_DDI_SHADER_MIN_PRECISION flags for all other stages
} D3D11_DDI_SHADER_MIN_PRECISION_SUPPORT_DATA;

#endif

#if D3D11DDI_MINOR_HEADER_VERSION >= 4
typedef enum D3DWDDM1_3DDI_TILED_RESOURCES_SUPPORT_FLAG
{
    D3DWDDM1_3DDI_TILED_RESOURCES_TIER_1_SUPPORTED = 0x00000001,
    D3DWDDM1_3DDI_TILED_RESOURCES_TIER_2_SUPPORTED = 0x00000002,
#if D3D11DDI_MINOR_HEADER_VERSION >= 5
    D3DWDDM2_0DDI_TILED_RESOURCES_TIER_3_SUPPORTED = 0x00000004,
#endif
} D3DWDDM1_3DDI_TILED_RESOURCES_SUPPORT_FLAG;

// D3DWDDM1_3DDICAPS_D3D11_OPTIONS1
typedef struct D3DWDDM1_3DDI_D3D11_OPTIONS_DATA1
{
    UINT TiledResourcesSupportFlags;
} D3DWDDM1_3DDI_D3D11_OPTIONS_DATA1;

// D3DWDDM1_3DDICAPS_MARKER
    // D3DWDDM1_3DDI_MARKER_TYPE
#endif

#if D3D11DDI_MINOR_HEADER_VERSION >= 5
// D3DWDDM2_0DDICAPS_MEMORY_ARCHITECTURE
    // pData = D3DWDDM2_0DDI_MEMORY_ARCHITECTURE_CAPS*
    // DataSize = sizeof(D3DWDDM2_0DDI_MEMORY_ARCHITECTURE_CAPS)

    typedef struct D3DWDDM2_0DDI_MEMORY_ARCHITECTURE_CAPS
    {
        BOOL UMA;
        BOOL CacheCoherent; 
    } D3DWDDM2_0DDI_MEMORY_ARCHITECTURE_CAPS;


#if D3D11DDI_MINOR_HEADER_VERSION < 6
// D3DWDDM2_0DDICAPS_TEXTURE_LAYOUT_SETS
    // pData = D3DWDDM2_0DDI_TEXTURE_LAYOUT_SET_CAPS*
    // DataSize = sizeof(D3DWDDM2_0DDI_TEXTURE_LAYOUT_SET_CAPS)
typedef struct D3DWDDM2_0DDI_TEXTURE_LAYOUT_SET_CAPS
{
    UINT DeviceDependentSwizzleCount;
    BOOL SupportsStandardSwizzle64KTile;
} D3DWDDM2_0DDI_TEXTURE_LAYOUT_SET_CAPS;
#endif

typedef struct D3DWDDM2_0DDI_SWIZZLE_BIT_ENTRY
{
    UINT8 Valid : 1;
    UINT8 ChannelIndex : 2; // 0 for X, 1 for Y, 2 for Z, 3 for SS
    UINT8 SourceBitIndex : 5; // Index of source bit address
} D3DWDDM2_0DDI_SWIZZLE_BIT_ENTRY;

#if D3D11DDI_MINOR_HEADER_VERSION < 6
typedef struct D3DWDDM2_0DDI_SWIZZLE_PATTERN
{
    D3DWDDM2_0DDI_SWIZZLE_BIT_ENTRY InterleavePatternSourceBits[ 32 ];
    D3DWDDM2_0DDI_SWIZZLE_BIT_ENTRY InterleavePatternXORSourceBits[ 32 ];
    D3DWDDM2_0DDI_SWIZZLE_BIT_ENTRY InterleavePatternXOR2SourceBits[ 32 ];
} D3DWDDM2_0DDI_SWIZZLE_PATTERN;

// D3DWDDM2_0DDICAPS_TEXTURE_LAYOUT
    // *pInfo == UINT : D3DWDDM2_0DDI_TL_DEVICE_DEPENDENT_SWIZZLE_0 + N
    // pData = D3DWDDM2_0DDI_DEVICE_DEPENDENT_SWIZZLE_LAYOUT_CAPS*
    // DataSize = sizeof(D3DWDDM2_0DDI_DEVICE_DEPENDENT_SWIZZLE_LAYOUT_CAPS)
typedef struct D3DWDDM2_0DDI_DEVICE_DEPENDENT_SWIZZLE_LAYOUT_CAPS
{
    D3DWDDM2_0DDI_SWIZZLE_PATTERN Pattern;
} D3DWDDM2_0DDI_DEVICE_DEPENDENT_SWIZZLE_LAYOUT_CAPS;
#endif

#if D3D11DDI_MINOR_HEADER_VERSION >= 6
//  D3DWDDM2_0DDICAPS_TEXTURE_LAYOUT
    // *pInfo = NULL
    // pData =  D3DWDDM2_0DDI_TEXTURE_LAYOUT_CAPS*
    // DataSize = sizeof( D3DWDDM2_0DDI_TEXTURE_LAYOUT_CAPS)
typedef struct D3DWDDM2_0DDI_TEXTURE_LAYOUT_CAPS
{
    UINT DeviceDependentLayoutCount; //  D3DWDDM2_0DDI_TEXTURE_LAYOUT
    UINT DeviceDependentSwizzleCount; //  D3DWDDM2_0DDI_SWIZZLE_PATTERN
    BOOL Supports64KStandardSwizzle;
}  D3DWDDM2_0DDI_TEXTURE_LAYOUT_CAPS;

//  D3DWDDM2_0DDICAPS_TEXTURE_LAYOUT
    // *pInfo == UINT : (0 through DeviceDependentLayoutCount - 1)
    // pData =  D3DWDDM2_0DDI_SWIZZLE_PATTERN*
    // DataSize = 2 * sizeof(D3DWDDM2_0DDI_SWIZZLE_PATTERN)

//  D3DWDDM2_0DDICAPS_TEXTURE_LAYOUT1
    // *pInfo == UINT : (0 through DeviceDependentLayoutCount - 1)
    // pData =  D3DWDDM2_0DDI_SWIZZLE_PATTERN*
    // DataSize = 6 * sizeof(D3DWDDM2_0DDI_SWIZZLE_PATTERN)

typedef enum D3DWDDM2_0DDI_SWIZZLE_PATTERN
{
     D3DWDDM2_0DDI_SP_ROW_MAJOR = 0, 
     D3DWDDM2_0DDI_SP_64KB_STANDARD_SWIZZLE = 3, 
     D3DWDDM2_0DDI_SP_DEVICE_DEPENDENT_0 = 0x100,
}  D3DWDDM2_0DDI_SWIZZLE_PATTERN;

// D3DWDDM2_0DDI_SWIZZLE_PATTERN_FLAGS
typedef enum D3DWDDM2_0DDI_SWIZZLE_PATTERN_FLAGS
{
    D3DWDDM2_0DDI_SWIZZLE_PATTERN_FLAGS_NONE                = 0,
    D3DWDDM2_0DDI_SWIZZLE_PATTERN_FLAGS_STACK_DEPTH_SLICES  = 1,
} D3DWDDM2_0DDI_SWIZZLE_PATTERN_FLAGS;
    
//  D3DWDDM2_0DDICAPS_SWIZZLE_PATTERN
    // *pInfo == UINT : (0 through DeviceDependentSwizzleCount - 1)
    // pData =  D3DWDDM2_0DDI_SWIZZLE_PATTERN_DESC*
    // DataSize = sizeof( D3DWDDM2_0DDI_SWIZZLE_PATTERN_DESC)
typedef struct D3DWDDM2_0DDI_SWIZZLE_PATTERN_DESC
{
    D3DWDDM2_0DDI_SWIZZLE_BIT_ENTRY InterleavePatternSourceBits[ 32 ];
    D3DWDDM2_0DDI_SWIZZLE_BIT_ENTRY InterleavePatternXORSourceBits[ 32 ];
    D3DWDDM2_0DDI_SWIZZLE_BIT_ENTRY InterleavePatternXOR2SourceBits[ 32 ];
#if D3D11DDI_MINOR_HEADER_VERSION >= 9
    UINT InterleavePatternXOR3; 
    UINT Flags;
#endif
#if D3D11DDI_MINOR_HEADER_VERSION == 8
    BOOL StackDepthSlices;  
#endif    
} D3DWDDM2_0DDI_SWIZZLE_PATTERN_DESC;

#endif

#if D3D11DDI_MINOR_HEADER_VERSION >= 8
typedef struct D3DWDDM2_0DDI_LEGACY_SWIZZLE_PATTERN_DESC
{
    D3DWDDM2_0DDI_SWIZZLE_BIT_ENTRY InterleavePatternSourceBits[ 32 ];
    D3DWDDM2_0DDI_SWIZZLE_BIT_ENTRY InterleavePatternXORSourceBits[ 32 ];
    D3DWDDM2_0DDI_SWIZZLE_BIT_ENTRY InterleavePatternXOR2SourceBits[ 32 ];
} D3DWDDM2_0DDI_LEGACY_SWIZZLE_PATTERN_DESC;
#endif  


#endif


#define D3D11DDI_CREATEDEVICE_FLAG_SINGLETHREADED 0x10

typedef HRESULT (APIENTRY *PFND3D10_2DDI_GETSUPPORTEDVERSIONS)(D3D10DDI_HADAPTER,
    _Inout_ UINT32* puEntries, _Out_writes_opt_( *puEntries ) UINT64* pSupportedDDIInterfaceVersions);
typedef HRESULT (APIENTRY *PFND3D10_2DDI_GETCAPS)(D3D10DDI_HADAPTER,
    _In_ CONST D3D10_2DDIARG_GETCAPS*);

typedef struct D3D10_2DDI_ADAPTERFUNCS
{
    PFND3D10DDI_CALCPRIVATEDEVICESIZE         pfnCalcPrivateDeviceSize;
    PFND3D10DDI_CREATEDEVICE                  pfnCreateDevice;
    PFND3D10DDI_CLOSEADAPTER                  pfnCloseAdapter;
    PFND3D10_2DDI_GETSUPPORTEDVERSIONS        pfnGetSupportedVersions;
    PFND3D10_2DDI_GETCAPS                     pfnGetCaps;
} D3D10_2DDI_ADAPTERFUNCS;
#endif

#if D3D11DDI_MINOR_HEADER_VERSION >= 5

typedef enum D3DWDDM2_0DDI_CONSERVATIVE_RASTERIZATION_TIER
{
  D3DWDDM2_0DDI_CONSERVATIVE_RASTERIZATION_NOT_SUPPORTED = 0,
  D3DWDDM2_0DDI_CONSERVATIVE_RASTERIZATION_TIER_1 = 1,
  D3DWDDM2_0DDI_CONSERVATIVE_RASTERIZATION_TIER_2 = 2,
  D3DWDDM2_0DDI_CONSERVATIVE_RASTERIZATION_TIER_3 = 3,
} D3DWDDM2_0DDI_CONSERVATIVE_RASTERIZATION_TIER;

#if D3D11DDI_MINOR_HEADER_VERSION >= 8
#endif


// D3DWDDM2_0DDICAPS_D3D11_OPTIONS2
typedef struct D3DWDDM2_0DDI_D3D11_OPTIONS2_DATA
{
    D3DWDDM2_0DDI_CONSERVATIVE_RASTERIZATION_TIER ConservativeRasterizationTier;
#if D3D11DDI_MINOR_HEADER_VERSION >= 8
#endif
} D3DWDDM2_0DDI_D3D11_OPTIONS2_DATA;

#endif //D3D11DDI_MINOR_HEADER_VERSION >= 5

#if D3D11DDI_MINOR_HEADER_VERSION >= 7
typedef struct D3DWDDM2_0DDI_D3D11_OPTIONS3_DATA
{
    BOOL VPAndRTArrayIndexFromAnyShaderFeedingRasterizer;
} D3DWDDM2_0DDI_D3D11_OPTIONS3_DATA;
#endif //D3D11DDI_MINOR_HEADER_VERSION >= 7

#if D3D11DDI_MINOR_HEADER_VERSION >= 7
typedef struct D3DWDDM2_0DDI_D3D11_OPTIONS2_DATA_LEGACY_ASTC
{
    D3DWDDM2_0DDI_CONSERVATIVE_RASTERIZATION_TIER ConservativeRasterizationTier;
    UINT ASTCProfileSupportFlag;
} D3DWDDM2_0DDI_D3D11_OPTIONS2_DATA_LEGACY_ASTC;
#endif 

#if D3D11DDI_MINOR_HEADER_VERSION >= 9
typedef struct D3DWDDM2_0DDI_GPUVA_CAPS_DATA
{
    UINT MaxGPUVirtualAddressBitsPerResource;
} D3DWDDM2_0DDI_GPUVA_CAPS_DATA;
#endif

typedef struct D3D10DDIARG_OPENADAPTER
{
    D3D10DDI_HRTADAPTER            hRTAdapter;         // in:  Runtime handle
    D3D10DDI_HADAPTER              hAdapter;           // out: Driver handle
    UINT                           Interface;          // in:  Interface version
    UINT                           Version;            // in:  Runtime version
    CONST D3DDDI_ADAPTERCALLBACKS* pAdapterCallbacks;  // in:  Pointer to runtime callbacks
    union
    {
        D3D10DDI_ADAPTERFUNCS*     pAdapterFuncs;      // out: Driver function table
#if D3D10DDI_MINOR_HEADER_VERSION >= 2 || D3D11DDI_MINOR_HEADER_VERSION >= 1
        D3D10_2DDI_ADAPTERFUNCS*   pAdapterFuncs_2;    // out: Driver function table
#endif
    };
} D3D10DDIARG_OPENADAPTER;

typedef HRESULT (APIENTRY *PFND3D10DDI_OPENADAPTER)(_Inout_ D3D10DDIARG_OPENADAPTER*);

//----------------------------------------------------------------------------------------------------------------------------------
// Versioning
//
// Related to
// D3D10DDIARG_OPENADAPTER::Interface
// D3D10DDIARG_OPENADAPTER::Version
// D3D10DDIARG_CREATEDEVICE::Interface
// D3D10DDIARG_CREATEDEVICE::Version
// D3D10DDIARG_CALCPRIVATEDEVICESIZE::Interface
// D3D10DDIARG_CALCPRIVATEDEVICESIZE::Version
//
// See specifications. Version behavior differs depending on whether OpenAdapter10 or OpenAdapter10_2 is called.
//

#define VISTA_GOLD_PRODUCT_VER  6000
#define DXGI_QFE_1 8
#define DXGI_RESOLVE_SHARED_RESOURCE 9
#define DXGI_OFFER_RECLAIM 10

#define D3D10_DDI_MAJOR_VERSION 10
#define D3D10_0_DDI_MINOR_VERSION 1
#define D3D10_0_DDI_INTERFACE_VERSION ((D3D10_DDI_MAJOR_VERSION << 16) | D3D10_0_DDI_MINOR_VERSION)
#define D3D10_0_DDI_BUILD_VERSION 4
#define D3D10_0_DDI_SUPPORTED ((((UINT64)D3D10_0_DDI_INTERFACE_VERSION) << 32) | (((UINT64)D3D10_0_DDI_BUILD_VERSION) << 16))

#define D3D10_0_DDI_VERSION_VISTA_GOLD                          ( ( 4 << 16 ) | VISTA_GOLD_PRODUCT_VER )
#define D3D10_0_DDI_VERSION_VISTA_GOLD_WITH_LINKED_ADAPTER_QFE  ( ( 4 << 16 ) | VISTA_GOLD_PRODUCT_VER | DXGI_QFE_1 )
#define D3D10_0_DDI_IS_LINKED_ADAPTER_QFE_PRESENT(Version)  (Version >= D3D10_0_DDI_VERSION_VISTA_GOLD_WITH_LINKED_ADAPTER_QFE)

#if D3D10DDI_MINOR_HEADER_VERSION >= 1 || D3D11DDI_MINOR_HEADER_VERSION >= 1
#define D3D10_1_DDI_MINOR_VERSION 2
#define D3D10_1_DDI_INTERFACE_VERSION ((D3D10_DDI_MAJOR_VERSION << 16) | D3D10_1_DDI_MINOR_VERSION)
#define D3D10_1_DDI_BUILD_VERSION 1
#define D3D10_1_DDI_SUPPORTED ((((UINT64)D3D10_1_DDI_INTERFACE_VERSION) << 32) | (((UINT64)D3D10_1_DDI_BUILD_VERSION) << 16))

#if D3D11DDI_MINOR_HEADER_VERSION >= 1
#define D3D11_DDI_MAJOR_VERSION 11
#define D3D11_0_DDI_MINOR_VERSION 10
#define D3D11_0_DDI_INTERFACE_VERSION ((D3D11_DDI_MAJOR_VERSION << 16) | D3D11_0_DDI_MINOR_VERSION)
#define D3D11_0_DDI_BUILD_VERSION 2
#define D3D11_0_DDI_SUPPORTED ((((UINT64)D3D11_0_DDI_INTERFACE_VERSION) << 32) | (((UINT64)D3D11_0_DDI_BUILD_VERSION) << 16))
#endif

//Note: d3d10_1 doesn't currently ship on vista gold. This definition is included for completeness in the event
//that it does at some point in the future:
#define D3D10_1_DDI_VERSION_VISTA_GOLD                          ( ( 1 << 16 ) | VISTA_GOLD_PRODUCT_VER )
#define D3D10_1_DDI_VERSION_VISTA_SP1                           ( ( 1 << 16 ) | VISTA_GOLD_PRODUCT_VER | DXGI_QFE_1 )
#define D3D10_1_DDI_IS_LINKED_ADAPTER_QFE_PRESENT(Version)  (Version >= D3D10_1_DDI_VERSION_VISTA_SP1)

#define D3D10on9_DDI_MINOR_VERSION 0
#define D3D10on9_DDI_INTERFACE_VERSION ((D3D10_DDI_MAJOR_VERSION << 16) | D3D10on9_DDI_MINOR_VERSION)
#define D3D10on9_DDI_BUILD_VERSION 0
#define D3D10on9_DDI_SUPPORTED ((((UINT64)D3D10on9_DDI_INTERFACE_VERSION) << 32) | (((UINT64)D3D10on9_DDI_BUILD_VERSION) << 16))

#if D3D10DDI_MINOR_HEADER_VERSION >= 2 || D3D11DDI_MINOR_HEADER_VERSION >= 1

// D3D10.0 with all extended format support (but not Windows 7 scheduling)
#define D3D10_0_x_DDI_MINOR_VERSION 6
#define D3D10_0_x_DDI_INTERFACE_VERSION ((D3D10_DDI_MAJOR_VERSION << 16) | D3D10_0_x_DDI_MINOR_VERSION)
#define D3D10_0_x_DDI_BUILD_VERSION 0
#define D3D10_0_x_DDI_SUPPORTED ((((UINT64)D3D10_0_x_DDI_INTERFACE_VERSION) << 32) | (((UINT64)D3D10_0_x_DDI_BUILD_VERSION) << 16))

// D3D10.0 with all extended format support for Vista Interop Pack
#define D3D10_0_x_vista_DDI_MINOR_VERSION 3
#define D3D10_0_x_vista_DDI_INTERFACE_VERSION ((D3D10_DDI_MAJOR_VERSION << 16) | D3D10_0_x_vista_DDI_MINOR_VERSION)
#define D3D10_0_x_vista_DDI_BUILD_VERSION 0
#define D3D10_0_x_vista_DDI_SUPPORTED ((((UINT64)D3D10_0_x_vista_DDI_INTERFACE_VERSION) << 32) | (((UINT64)D3D10_0_x_vista_DDI_BUILD_VERSION) << 16))

// D3D10.1 with all extended format support (but not Windows 7 scheduling)
#define D3D10_1_x_DDI_MINOR_VERSION 7
#define D3D10_1_x_DDI_INTERFACE_VERSION ((D3D10_DDI_MAJOR_VERSION << 16) | D3D10_1_x_DDI_MINOR_VERSION)
#define D3D10_1_x_DDI_BUILD_VERSION 0
#define D3D10_1_x_DDI_SUPPORTED ((((UINT64)D3D10_1_x_DDI_INTERFACE_VERSION) << 32) | (((UINT64)D3D10_1_x_DDI_BUILD_VERSION) << 16))

// D3D10.1 with all extended format support for Vista Interop Pack
#define D3D10_1_x_vista_DDI_MINOR_VERSION 4
#define D3D10_1_x_vista_DDI_INTERFACE_VERSION ((D3D10_DDI_MAJOR_VERSION << 16) | D3D10_1_x_vista_DDI_MINOR_VERSION)
#define D3D10_1_x_vista_DDI_BUILD_VERSION 0
#define D3D10_1_x_vista_DDI_SUPPORTED ((((UINT64)D3D10_1_x_vista_DDI_INTERFACE_VERSION) << 32) | (((UINT64)D3D10_1_x_vista_DDI_BUILD_VERSION) << 16))

// D3D10.0 on Windows 7
#define D3D10_0_7_DDI_MINOR_VERSION 9
#define D3D10_0_7_DDI_INTERFACE_VERSION ((D3D10_DDI_MAJOR_VERSION << 16) | D3D10_0_7_DDI_MINOR_VERSION)
#define D3D10_0_7_DDI_BUILD_VERSION 0
#define D3D10_0_7_DDI_SUPPORTED ((((UINT64)D3D10_0_7_DDI_INTERFACE_VERSION) << 32) | (((UINT64)D3D10_0_7_DDI_BUILD_VERSION) << 16))

// D3D10.1 on Windows 7
#define D3D10_1_7_DDI_MINOR_VERSION 10
#define D3D10_1_7_DDI_INTERFACE_VERSION ((D3D10_DDI_MAJOR_VERSION << 16) | D3D10_1_7_DDI_MINOR_VERSION)
#define D3D10_1_7_DDI_BUILD_VERSION 0
#define D3D10_1_7_DDI_SUPPORTED ((((UINT64)D3D10_1_7_DDI_INTERFACE_VERSION) << 32) | (((UINT64)D3D10_1_7_DDI_BUILD_VERSION) << 16))

#ifndef IS_D3D10_WIN7_INTERFACE_VERSION
#define IS_D3D10_WIN7_INTERFACE_VERSION( i ) (D3D10_0_7_DDI_INTERFACE_VERSION == i || D3D10_1_7_DDI_INTERFACE_VERSION == i)
#endif

#if D3D11DDI_MINOR_HEADER_VERSION >= 1
// D3D11.0 on Windows 7
#define D3D11_0_7_DDI_MINOR_VERSION 11
#define D3D11_0_7_DDI_INTERFACE_VERSION ((D3D11_DDI_MAJOR_VERSION << 16) | D3D11_0_7_DDI_MINOR_VERSION)
#define D3D11_0_7_DDI_BUILD_VERSION 2
#define D3D11_0_7_DDI_SUPPORTED ((((UINT64)D3D11_0_7_DDI_INTERFACE_VERSION) << 32) | (((UINT64)D3D11_0_7_DDI_BUILD_VERSION) << 16))

#define D3D11_0_vista_DDI_MINOR_VERSION 9
#define D3D11_0_vista_DDI_INTERFACE_VERSION ((D3D11_DDI_MAJOR_VERSION << 16) | D3D11_0_vista_DDI_MINOR_VERSION)
#define D3D11_0_vista_DDI_BUILD_VERSION 0
#define D3D11_0_vista_DDI_SUPPORTED ((((UINT64)D3D11_0_vista_DDI_INTERFACE_VERSION) << 32) | (((UINT64)D3D11_0_vista_DDI_BUILD_VERSION) << 16))

#ifndef IS_D3D11_WIN7_INTERFACE_VERSION
#define IS_D3D11_WIN7_INTERFACE_VERSION( i ) (D3D11_0_7_DDI_INTERFACE_VERSION == i)
#endif
#endif

#if D3D11DDI_MINOR_HEADER_VERSION >= 3
// D3D11.1
#define D3D11_1_DDI_MINOR_VERSION_RC 14
#define D3D11_1_DDI_INTERFACE_VERSION_RC ((D3D11_DDI_MAJOR_VERSION << 16) | D3D11_1_DDI_MINOR_VERSION_RC)
#define D3D11_1_DDI_BUILD_VERSION_RC 1
#define D3D11_1_DDI_SUPPORTED_RC ((((UINT64)D3D11_1_DDI_INTERFACE_VERSION_RC) << 32) | (((UINT64)D3D11_1_DDI_BUILD_VERSION_RC) << 16))

#define D3D11_1_DDI_MINOR_VERSION 15
#define D3D11_1_DDI_INTERFACE_VERSION ((D3D11_DDI_MAJOR_VERSION << 16) | D3D11_1_DDI_MINOR_VERSION)
#define D3D11_1_DDI_BUILD_VERSION 0
#define D3D11_1_DDI_SUPPORTED ((((UINT64)D3D11_1_DDI_INTERFACE_VERSION) << 32) | (((UINT64)D3D11_1_DDI_BUILD_VERSION) << 16))


#endif

#if D3D11DDI_MINOR_HEADER_VERSION >= 4
// WDDM 1.3
#define D3DWDDM1_3_DDI_MINOR_VERSION 16
#define D3DWDDM1_3_DDI_INTERFACE_VERSION ((D3D11_DDI_MAJOR_VERSION << 16) | D3DWDDM1_3_DDI_MINOR_VERSION)
#define D3DWDDM1_3_DDI_BUILD_VERSION_M1 0
#define D3DWDDM1_3_DDI_BUILD_VERSION 1
#define D3DWDDM1_3_DDI_SUPPORTED ((((UINT64)D3DWDDM1_3_DDI_INTERFACE_VERSION) << 32) | (((UINT64)D3DWDDM1_3_DDI_BUILD_VERSION) << 16))
#endif

#if D3D11DDI_MINOR_HEADER_VERSION >= 5
// WDDM 2.0
#define D3DWDDM2_0_DDI_MINOR_VERSION 17
#define D3DWDDM2_0_DDI_INTERFACE_VERSION ((D3D11_DDI_MAJOR_VERSION << 16) | D3DWDDM2_0_DDI_MINOR_VERSION)
#define D3DWDDM2_0_DDI_BUILD_VERSION 5
#define D3DWDDM2_0_DDI_SUPPORTED ((((UINT64)D3DWDDM2_0_DDI_INTERFACE_VERSION) << 32) | (((UINT64)D3DWDDM2_0_DDI_BUILD_VERSION) << 16))

#endif

#if D3D11DDI_MINOR_HEADER_VERSION >= 6
// WDDM 2.0 - Upcoming changes supported in some branches
#undef D3DWDDM2_0_DDI_MINOR_VERSION
#define D3DWDDM2_0_DDI_MINOR_VERSION 32
#undef D3DWDDM2_0_DDI_BUILD_VERSION
#define D3DWDDM2_0_DDI_BUILD_VERSION 6
#undef D3DWDDM2_0_DDI_INTERFACE_VERSION
#define D3DWDDM2_0_DDI_INTERFACE_VERSION ((D3D11_DDI_MAJOR_VERSION << 16) | D3DWDDM2_0_DDI_MINOR_VERSION)
#undef D3DWDDM2_0_DDI_SUPPORTED
#define D3DWDDM2_0_DDI_SUPPORTED ((((UINT64)D3DWDDM2_0_DDI_INTERFACE_VERSION) << 32) | (((UINT64)D3DWDDM2_0_DDI_BUILD_VERSION) << 16))

#endif

#if D3D11DDI_MINOR_HEADER_VERSION >= 7
// WDDM 2.0 - Upcoming changes supported in some branches
#undef D3DWDDM2_0_DDI_BUILD_VERSION
#define D3DWDDM2_0_DDI_BUILD_VERSION 7


#undef D3DWDDM2_0_DDI_INTERFACE_VERSION
#define D3DWDDM2_0_DDI_INTERFACE_VERSION ((D3D11_DDI_MAJOR_VERSION << 16) | D3DWDDM2_0_DDI_MINOR_VERSION)
#undef D3DWDDM2_0_DDI_SUPPORTED
#define D3DWDDM2_0_DDI_SUPPORTED ((((UINT64)D3DWDDM2_0_DDI_INTERFACE_VERSION) << 32) | (((UINT64)D3DWDDM2_0_DDI_BUILD_VERSION) << 16))

#endif

#if D3D11DDI_MINOR_HEADER_VERSION >= 8
// WDDM 2.0 - Upcoming changes supported in some branches
#undef D3DWDDM2_0_DDI_BUILD_VERSION
#define D3DWDDM2_0_DDI_BUILD_VERSION 8


#undef D3DWDDM2_0_DDI_INTERFACE_VERSION
#define D3DWDDM2_0_DDI_INTERFACE_VERSION ((D3D11_DDI_MAJOR_VERSION << 16) | D3DWDDM2_0_DDI_MINOR_VERSION)
#undef D3DWDDM2_0_DDI_SUPPORTED
#define D3DWDDM2_0_DDI_SUPPORTED ((((UINT64)D3DWDDM2_0_DDI_INTERFACE_VERSION) << 32) | (((UINT64)D3DWDDM2_0_DDI_BUILD_VERSION) << 16))

#endif

#if D3D11DDI_MINOR_HEADER_VERSION >= 9
// WDDM 2.0 - Upcoming changes supported in some branches
#undef D3DWDDM2_0_DDI_BUILD_VERSION
#define D3DWDDM2_0_DDI_BUILD_VERSION 9


#undef D3DWDDM2_0_DDI_INTERFACE_VERSION
#define D3DWDDM2_0_DDI_INTERFACE_VERSION ((D3D11_DDI_MAJOR_VERSION << 16) | D3DWDDM2_0_DDI_MINOR_VERSION)
#undef D3DWDDM2_0_DDI_SUPPORTED
#define D3DWDDM2_0_DDI_SUPPORTED ((((UINT64)D3DWDDM2_0_DDI_INTERFACE_VERSION) << 32) | (((UINT64)D3DWDDM2_0_DDI_BUILD_VERSION) << 16))

#endif

#if D3D11DDI_MINOR_HEADER_VERSION >= 10
#define D3DWDDM2_1_DDI_MINOR_VERSION 34
#define D3DWDDM2_1_DDI_BUILD_VERSION 1

#if D3D11DDI_MINOR_HEADER_VERSION >= 11
#undef D3DWDDM2_1_DDI_BUILD_VERSION
#define D3DWDDM2_1_DDI_BUILD_VERSION 2
#endif


#define D3DWDDM2_1_DDI_INTERFACE_VERSION ((D3D11_DDI_MAJOR_VERSION << 16) | D3DWDDM2_1_DDI_MINOR_VERSION)
#define D3DWDDM2_1_DDI_SUPPORTED ((((UINT64)D3DWDDM2_1_DDI_INTERFACE_VERSION) << 32) | (((UINT64)D3DWDDM2_1_DDI_BUILD_VERSION) << 16))
#endif // D3D11DDI_MINOR_HEADER_VERSION >= 10


#ifndef IS_DXGI1_1_BASE_FUNCTIONS
#if D3D10DDI_MINOR_HEADER_VERSION < 2
#define IS_DXGI1_1_BASE_FUNCTIONS(Interface, Version)                                       \
    FALSE
#else
#if D3D11DDI_MINOR_HEADER_VERSION >= 1
#define IS_DXGI1_1_BASE_FUNCTIONS(Interface, Version)                                                                                           \
    ((((Interface >> 16) == D3D10_DDI_MAJOR_VERSION) && ((Version & 0x0000ffff) >= (VISTA_GOLD_PRODUCT_VER | DXGI_RESOLVE_SHARED_RESOURCE))) || \
     (((Interface >> 16) == D3D11_DDI_MAJOR_VERSION) && ((Version & 0x0000ffff) >= DXGI_RESOLVE_SHARED_RESOURCE)) ||                            \
     ((Interface >> 16) > D3D11_DDI_MAJOR_VERSION))
#else
#define IS_DXGI1_1_BASE_FUNCTIONS(Interface, Version)                                                                                       \
    (((Interface >> 16) == D3D10_DDI_MAJOR_VERSION) && ((Version & 0x0000ffff) >= (VISTA_GOLD_PRODUCT_VER | DXGI_RESOLVE_SHARED_RESOURCE)))
#endif
#endif
#endif

// IS_DXGI1_2_BASE_FUNCTIONS detects whether the driver is required to fill out all the methods introduced in
// DXGI1_2_DDI_BASE_FUNCTIONS, such as pfnBlt1 and pfnOfferResources.
#ifndef IS_DXGI1_2_BASE_FUNCTIONS
#if (D3D_UMD_INTERFACE_VERSION >= D3D_UMD_INTERFACE_VERSION_WIN8) && (D3D11DDI_MINOR_HEADER_VERSION >= 3)
#define IS_DXGI1_2_BASE_FUNCTIONS(Interface, Version) \
        ((D3DDDI_MAJOR16_FROM_INTERFACE32( Interface ) == D3D11_DDI_MAJOR_VERSION && \
            D3DDDI_MINOR16_FROM_INTERFACE32( Interface ) >= D3D11_1_DDI_MINOR_VERSION_RC) || \
        (D3DDDI_MAJOR16_FROM_INTERFACE32( Interface ) > D3D11_DDI_MAJOR_VERSION))
#else
#define IS_DXGI1_2_BASE_FUNCTIONS(Interface, Version)                                       \
    FALSE
#endif
#endif

// IS_MULTIPLANE_OVERLAY_FUNCTIONS detects whether driver is able to access multi plane overlay DDI.
#ifndef IS_DXGI_MULTIPLANE_OVERLAY_FUNCTIONS
#if (D3D_UMD_INTERFACE_VERSION >= D3D_UMD_INTERFACE_VERSION_WIN8) && (D3D11DDI_MINOR_HEADER_VERSION >= 3)
#define IS_DXGI_MULTIPLANE_OVERLAY_FUNCTIONS(Interface,Version) \
        ((Interface == D3D11_1_DDI_INTERFACE_VERSION && \
            D3DDDI_BUILD16_FROM_VERSION32( Version ) > 0) || \
         (D3DDDI_MAJOR16_FROM_INTERFACE32( Interface ) == D3D11_DDI_MAJOR_VERSION && \
            D3DDDI_MINOR16_FROM_INTERFACE32( Interface ) > D3D11_1_DDI_MINOR_VERSION_RC) || \
         (D3DDDI_MAJOR16_FROM_INTERFACE32( Interface ) > D3D11_DDI_MAJOR_VERSION))
#else
#define IS_DXGI_MULTIPLANE_OVERLAY_FUNCTIONS(Interface, Version)                                         \
    FALSE
#endif
#endif

// IS_DXGI1_3_BASE_FUNCTIONS detects whether the driver is required to fill out all the methods introduced in
// DXGI1_3_DDI_BASE_FUNCTIONS
#ifndef IS_DXGI1_3_BASE_FUNCTIONS
#if (D3D_UMD_INTERFACE_VERSION >= D3D_UMD_INTERFACE_VERSION_WDDM1_3 /*M1*/) && (D3D11DDI_MINOR_HEADER_VERSION >= 4)
#define IS_DXGI1_3_BASE_FUNCTIONS(Interface,Version) \
    (Interface >= D3DWDDM1_3_DDI_INTERFACE_VERSION)
#else
#define IS_DXGI1_3_BASE_FUNCTIONS(Interface, Version)                                         \
    FALSE
#endif
#endif

// IS_DXGI1_4_BASE_FUNCTIONS detects whether the driver is required to fill out all the methods introduced in
// DXGI1_4_DDI_BASE_FUNCTIONS
#ifndef IS_DXGI1_4_BASE_FUNCTIONS
#if (D3D_UMD_INTERFACE_VERSION >= D3D_UMD_INTERFACE_VERSION_WDDM2_0) && (D3D11DDI_MINOR_HEADER_VERSION >= 5)
#define IS_DXGI1_4_BASE_FUNCTIONS(Interface,Version) \
    (Interface >= D3DWDDM2_0_DDI_INTERFACE_VERSION)
#else
#define IS_DXGI1_4_BASE_FUNCTIONS(Interface, Version)                                         \
    FALSE
#endif // D3D_UMD_INTERFACE_VERSION
#endif // IS_DXGI1_4_BASE_FUNCTIONS

// IS_DXGI1_5_BASE_FUNCTIONS detects whether the driver is required to fill out all the methods introduced in
// DXGI1_5_DDI_BASE_FUNCTIONS
#ifndef IS_DXGI1_5_BASE_FUNCTIONS
#if (D3D_UMD_INTERFACE_VERSION >= D3D_UMD_INTERFACE_VERSION_WDDM2_1_1) && (D3D11DDI_MINOR_HEADER_VERSION >= 10)
#define IS_DXGI1_5_BASE_FUNCTIONS(Interface,Version) \
    (Interface >= D3DWDDM2_1_DDI_INTERFACE_VERSION)
#else
#define IS_DXGI1_5_BASE_FUNCTIONS(Interface, Version)                                         \
    FALSE
#endif // D3D_UMD_INTERFACE_VERSION
#endif // IS_DXGI1_5_BASE_FUNCTIONS

#endif // D3D10DDI_MINOR_HEADER_VERSION >= 2 || D3D11DDI_MINOR_HEADER_VERSION >= 1
#endif // D3D10DDI_MINOR_HEADER_VERSION >= 1 || D3D11DDI_MINOR_HEADER_VERSION >= 1

#endif // _D3D10UMDDI_H

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */
#pragma endregion

//
//    Copyright (C) Microsoft.  All rights reserved.
//
// NOTE: The following constants are generated from the d3d10 hardware spec.  Do not edit these values directly.
#ifndef _D3D10_CONSTANTS
#define _D3D10_CONSTANTS
const UINT D3D10_16BIT_INDEX_STRIP_CUT_VALUE = 0xffff;
const UINT D3D10_32BIT_INDEX_STRIP_CUT_VALUE = 0xffffffff;
const UINT D3D10_8BIT_INDEX_STRIP_CUT_VALUE = 0xff;
const UINT D3D10_ARRAY_AXIS_ADDRESS_RANGE_BIT_COUNT = 9;
const UINT D3D10_CLIP_OR_CULL_DISTANCE_COUNT = 8;
const UINT D3D10_CLIP_OR_CULL_DISTANCE_ELEMENT_COUNT = 2;
const UINT D3D10_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT = 14;
const UINT D3D10_COMMONSHADER_CONSTANT_BUFFER_COMPONENTS = 4;
const UINT D3D10_COMMONSHADER_CONSTANT_BUFFER_COMPONENT_BIT_COUNT = 32;
const UINT D3D10_COMMONSHADER_CONSTANT_BUFFER_HW_SLOT_COUNT = 15;
const UINT D3D10_COMMONSHADER_CONSTANT_BUFFER_REGISTER_COMPONENTS = 4;
const UINT D3D10_COMMONSHADER_CONSTANT_BUFFER_REGISTER_COUNT = 15;
const UINT D3D10_COMMONSHADER_CONSTANT_BUFFER_REGISTER_READS_PER_INST = 1;
const UINT D3D10_COMMONSHADER_CONSTANT_BUFFER_REGISTER_READ_PORTS = 1;
const UINT D3D10_COMMONSHADER_FLOWCONTROL_NESTING_LIMIT = 64;
const UINT D3D10_COMMONSHADER_IMMEDIATE_CONSTANT_BUFFER_REGISTER_COMPONENTS = 4;
const UINT D3D10_COMMONSHADER_IMMEDIATE_CONSTANT_BUFFER_REGISTER_COUNT = 1;
const UINT D3D10_COMMONSHADER_IMMEDIATE_CONSTANT_BUFFER_REGISTER_READS_PER_INST = 1;
const UINT D3D10_COMMONSHADER_IMMEDIATE_CONSTANT_BUFFER_REGISTER_READ_PORTS = 1;
const UINT D3D10_COMMONSHADER_IMMEDIATE_VALUE_COMPONENT_BIT_COUNT = 32;
const UINT D3D10_COMMONSHADER_INPUT_RESOURCE_REGISTER_COMPONENTS = 1;
const UINT D3D10_COMMONSHADER_INPUT_RESOURCE_REGISTER_COUNT = 128;
const UINT D3D10_COMMONSHADER_INPUT_RESOURCE_REGISTER_READS_PER_INST = 1;
const UINT D3D10_COMMONSHADER_INPUT_RESOURCE_REGISTER_READ_PORTS = 1;
const UINT D3D10_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT = 128;
const UINT D3D10_COMMONSHADER_SAMPLER_REGISTER_COMPONENTS = 1;
const UINT D3D10_COMMONSHADER_SAMPLER_REGISTER_COUNT = 16;
const UINT D3D10_COMMONSHADER_SAMPLER_REGISTER_READS_PER_INST = 1;
const UINT D3D10_COMMONSHADER_SAMPLER_REGISTER_READ_PORTS = 1;
const UINT D3D10_COMMONSHADER_SAMPLER_SLOT_COUNT = 16;
const UINT D3D10_COMMONSHADER_SUBROUTINE_NESTING_LIMIT = 32;
const UINT D3D10_COMMONSHADER_TEMP_REGISTER_COMPONENTS = 4;
const UINT D3D10_COMMONSHADER_TEMP_REGISTER_COMPONENT_BIT_COUNT = 32;
const UINT D3D10_COMMONSHADER_TEMP_REGISTER_COUNT = 4096;
const UINT D3D10_COMMONSHADER_TEMP_REGISTER_READS_PER_INST = 3;
const UINT D3D10_COMMONSHADER_TEMP_REGISTER_READ_PORTS = 3;
const UINT D3D10_COMMONSHADER_TEXCOORD_RANGE_REDUCTION_MAX = 10;
const INT D3D10_COMMONSHADER_TEXCOORD_RANGE_REDUCTION_MIN = -10;
const INT D3D10_COMMONSHADER_TEXEL_OFFSET_MAX_NEGATIVE = -8;
const UINT D3D10_COMMONSHADER_TEXEL_OFFSET_MAX_POSITIVE = 7;
#define D3D10_DEFAULT_BLEND_FACTOR_ALPHA	( 1.0f )
#define D3D10_DEFAULT_BLEND_FACTOR_BLUE	( 1.0f )
#define D3D10_DEFAULT_BLEND_FACTOR_GREEN	( 1.0f )
#define D3D10_DEFAULT_BLEND_FACTOR_RED	( 1.0f )
#define D3D10_DEFAULT_BORDER_COLOR_COMPONENT	( 0.0f )
const UINT D3D10_DEFAULT_DEPTH_BIAS = 0;
#define D3D10_DEFAULT_DEPTH_BIAS_CLAMP	( 0.0f )
#define D3D10_DEFAULT_MAX_ANISOTROPY	( 16.0f )
#define D3D10_DEFAULT_MIP_LOD_BIAS	( 0.0f )
const UINT D3D10_DEFAULT_RENDER_TARGET_ARRAY_INDEX = 0;
const UINT D3D10_DEFAULT_SAMPLE_MASK = 0xffffffff;
const UINT D3D10_DEFAULT_SCISSOR_ENDX = 0;
const UINT D3D10_DEFAULT_SCISSOR_ENDY = 0;
const UINT D3D10_DEFAULT_SCISSOR_STARTX = 0;
const UINT D3D10_DEFAULT_SCISSOR_STARTY = 0;
#define D3D10_DEFAULT_SLOPE_SCALED_DEPTH_BIAS	( 0.0f )
const UINT D3D10_DEFAULT_STENCIL_READ_MASK = 0xff;
const UINT D3D10_DEFAULT_STENCIL_REFERENCE = 0;
const UINT D3D10_DEFAULT_STENCIL_WRITE_MASK = 0xff;
const UINT D3D10_DEFAULT_VIEWPORT_AND_SCISSORRECT_INDEX = 0;
const UINT D3D10_DEFAULT_VIEWPORT_HEIGHT = 0;
#define D3D10_DEFAULT_VIEWPORT_MAX_DEPTH	( 0.0f )
#define D3D10_DEFAULT_VIEWPORT_MIN_DEPTH	( 0.0f )
const UINT D3D10_DEFAULT_VIEWPORT_TOPLEFTX = 0;
const UINT D3D10_DEFAULT_VIEWPORT_TOPLEFTY = 0;
const UINT D3D10_DEFAULT_VIEWPORT_WIDTH = 0;
#define D3D10_FLOAT16_FUSED_TOLERANCE_IN_ULP	( 0.6 )
#define D3D10_FLOAT32_MAX	( 3.402823466e+38f )
#define D3D10_FLOAT32_TO_INTEGER_TOLERANCE_IN_ULP	( 0.6f )
#define D3D10_FLOAT_TO_SRGB_EXPONENT_DENOMINATOR	( 2.4f )
#define D3D10_FLOAT_TO_SRGB_EXPONENT_NUMERATOR	( 1.0f )
#define D3D10_FLOAT_TO_SRGB_OFFSET	( 0.055f )
#define D3D10_FLOAT_TO_SRGB_SCALE_1	( 12.92f )
#define D3D10_FLOAT_TO_SRGB_SCALE_2	( 1.055f )
#define D3D10_FLOAT_TO_SRGB_THRESHOLD	( 0.0031308f )
#define D3D10_FTOI_INSTRUCTION_MAX_INPUT	( 2147483647.999f )
#define D3D10_FTOI_INSTRUCTION_MIN_INPUT	( -2147483648.999f )
#define D3D10_FTOU_INSTRUCTION_MAX_INPUT	( 4294967295.999f )
#define D3D10_FTOU_INSTRUCTION_MIN_INPUT	( 0.0f )
const UINT D3D10_GS_INPUT_PRIM_CONST_REGISTER_COMPONENTS = 1;
const UINT D3D10_GS_INPUT_PRIM_CONST_REGISTER_COMPONENT_BIT_COUNT = 32;
const UINT D3D10_GS_INPUT_PRIM_CONST_REGISTER_COUNT = 1;
const UINT D3D10_GS_INPUT_PRIM_CONST_REGISTER_READS_PER_INST = 2;
const UINT D3D10_GS_INPUT_PRIM_CONST_REGISTER_READ_PORTS = 1;
const UINT D3D10_GS_INPUT_REGISTER_COMPONENTS = 4;
const UINT D3D10_GS_INPUT_REGISTER_COMPONENT_BIT_COUNT = 32;
const UINT D3D10_GS_INPUT_REGISTER_COUNT = 16;
const UINT D3D10_GS_INPUT_REGISTER_READS_PER_INST = 2;
const UINT D3D10_GS_INPUT_REGISTER_READ_PORTS = 1;
const UINT D3D10_GS_INPUT_REGISTER_VERTICES = 6;
const UINT D3D10_GS_OUTPUT_ELEMENTS = 32;
const UINT D3D10_GS_OUTPUT_REGISTER_COMPONENTS = 4;
const UINT D3D10_GS_OUTPUT_REGISTER_COMPONENT_BIT_COUNT = 32;
const UINT D3D10_GS_OUTPUT_REGISTER_COUNT = 32;
const UINT D3D10_IA_DEFAULT_INDEX_BUFFER_OFFSET_IN_BYTES = 0;
const UINT D3D10_IA_DEFAULT_PRIMITIVE_TOPOLOGY = 0;
const UINT D3D10_IA_DEFAULT_VERTEX_BUFFER_OFFSET_IN_BYTES = 0;
const UINT D3D10_IA_INDEX_INPUT_RESOURCE_SLOT_COUNT = 1;
const UINT D3D10_IA_INSTANCE_ID_BIT_COUNT = 32;
const UINT D3D10_IA_INTEGER_ARITHMETIC_BIT_COUNT = 32;
const UINT D3D10_IA_PRIMITIVE_ID_BIT_COUNT = 32;
const UINT D3D10_IA_VERTEX_ID_BIT_COUNT = 32;
const UINT D3D10_IA_VERTEX_INPUT_RESOURCE_SLOT_COUNT = 16;
const UINT D3D10_IA_VERTEX_INPUT_STRUCTURE_ELEMENTS_COMPONENTS = 64;
const UINT D3D10_IA_VERTEX_INPUT_STRUCTURE_ELEMENT_COUNT = 16;
const UINT D3D10_INTEGER_DIVIDE_BY_ZERO_QUOTIENT = 0xffffffff;
const UINT D3D10_INTEGER_DIVIDE_BY_ZERO_REMAINDER = 0xffffffff;
#define D3D10_LINEAR_GAMMA	( 1.0f )
#define D3D10_MAX_BORDER_COLOR_COMPONENT	( 1.0f )
#define D3D10_MAX_DEPTH	( 1.0f )
const UINT D3D10_MAX_MAXANISOTROPY = 16;
const UINT D3D10_MAX_MULTISAMPLE_SAMPLE_COUNT = 32;
#define D3D10_MAX_POSITION_VALUE	( 3.402823466e+34f )
const UINT D3D10_MAX_TEXTURE_DIMENSION_2_TO_EXP = 17;
#define D3D10_MIN_BORDER_COLOR_COMPONENT	( 0.0f )
#define D3D10_MIN_DEPTH	( 0.0f )
const UINT D3D10_MIN_MAXANISOTROPY = 0;
#define D3D10_MIP_LOD_BIAS_MAX	( 15.99f )
#define D3D10_MIP_LOD_BIAS_MIN	( -16.0f )
const UINT D3D10_MIP_LOD_FRACTIONAL_BIT_COUNT = 6;
const UINT D3D10_MIP_LOD_RANGE_BIT_COUNT = 8;
#define D3D10_MULTISAMPLE_ANTIALIAS_LINE_WIDTH	( 1.4f )
const UINT D3D10_NONSAMPLE_FETCH_OUT_OF_RANGE_ACCESS_RESULT = 0;
const UINT D3D10_PIXEL_ADDRESS_RANGE_BIT_COUNT = 13;
const UINT D3D10_PRE_SCISSOR_PIXEL_ADDRESS_RANGE_BIT_COUNT = 15;
const UINT D3D10_PS_FRONTFACING_DEFAULT_VALUE = 0xFFFFFFFF;
const UINT D3D10_PS_FRONTFACING_FALSE_VALUE = 0x00000000;
const UINT D3D10_PS_FRONTFACING_TRUE_VALUE = 0xFFFFFFFF;
const UINT D3D10_PS_INPUT_REGISTER_COMPONENTS = 4;
const UINT D3D10_PS_INPUT_REGISTER_COMPONENT_BIT_COUNT = 32;
const UINT D3D10_PS_INPUT_REGISTER_COUNT = 32;
const UINT D3D10_PS_INPUT_REGISTER_READS_PER_INST = 2;
const UINT D3D10_PS_INPUT_REGISTER_READ_PORTS = 1;
#define D3D10_PS_LEGACY_PIXEL_CENTER_FRACTIONAL_COMPONENT	( 0.0f )
const UINT D3D10_PS_OUTPUT_DEPTH_REGISTER_COMPONENTS = 1;
const UINT D3D10_PS_OUTPUT_DEPTH_REGISTER_COMPONENT_BIT_COUNT = 32;
const UINT D3D10_PS_OUTPUT_DEPTH_REGISTER_COUNT = 1;
const UINT D3D10_PS_OUTPUT_REGISTER_COMPONENTS = 4;
const UINT D3D10_PS_OUTPUT_REGISTER_COMPONENT_BIT_COUNT = 32;
const UINT D3D10_PS_OUTPUT_REGISTER_COUNT = 8;
#define D3D10_PS_PIXEL_CENTER_FRACTIONAL_COMPONENT	( 0.5f )
const UINT D3D10_REQ_BLEND_OBJECT_COUNT_PER_CONTEXT = 4096;
const UINT D3D10_REQ_BUFFER_RESOURCE_TEXEL_COUNT_2_TO_EXP = 27;
const UINT D3D10_REQ_CONSTANT_BUFFER_ELEMENT_COUNT = 4096;
const UINT D3D10_REQ_DEPTH_STENCIL_OBJECT_COUNT_PER_CONTEXT = 4096;
const UINT D3D10_REQ_DRAWINDEXED_INDEX_COUNT_2_TO_EXP = 32;
const UINT D3D10_REQ_DRAW_VERTEX_COUNT_2_TO_EXP = 32;
const UINT D3D10_REQ_FILTERING_HW_ADDRESSABLE_RESOURCE_DIMENSION = 8192;
const UINT D3D10_REQ_GS_INVOCATION_32BIT_OUTPUT_COMPONENT_LIMIT = 1024;
const UINT D3D10_REQ_IMMEDIATE_CONSTANT_BUFFER_ELEMENT_COUNT = 4096;
const UINT D3D10_REQ_MAXANISOTROPY = 16;
const UINT D3D10_REQ_MIP_LEVELS = 14;
const UINT D3D10_REQ_MULTI_ELEMENT_STRUCTURE_SIZE_IN_BYTES = 2048;
const UINT D3D10_REQ_RASTERIZER_OBJECT_COUNT_PER_CONTEXT = 4096;
const UINT D3D10_REQ_RENDER_TO_BUFFER_WINDOW_WIDTH = 8192;
const UINT D3D10_REQ_RESOURCE_SIZE_IN_MEGABYTES = 128;
const UINT D3D10_REQ_RESOURCE_VIEW_COUNT_PER_CONTEXT_2_TO_EXP = 20;
const UINT D3D10_REQ_SAMPLER_OBJECT_COUNT_PER_CONTEXT = 4096;
const UINT D3D10_REQ_TEXTURE1D_ARRAY_AXIS_DIMENSION = 512;
const UINT D3D10_REQ_TEXTURE1D_U_DIMENSION = 8192;
const UINT D3D10_REQ_TEXTURE2D_ARRAY_AXIS_DIMENSION = 512;
const UINT D3D10_REQ_TEXTURE2D_U_OR_V_DIMENSION = 8192;
const UINT D3D10_REQ_TEXTURE3D_U_V_OR_W_DIMENSION = 2048;
const UINT D3D10_REQ_TEXTURECUBE_DIMENSION = 8192;
const UINT D3D10_RESINFO_INSTRUCTION_MISSING_COMPONENT_RETVAL = 0;
const UINT D3D10_SHADER_MAJOR_VERSION = 4;
const UINT D3D10_SHADER_MINOR_VERSION = 0;
const UINT D3D10_SHIFT_INSTRUCTION_PAD_VALUE = 0;
const UINT D3D10_SHIFT_INSTRUCTION_SHIFT_VALUE_BIT_COUNT = 5;
const UINT D3D10_SIMULTANEOUS_RENDER_TARGET_COUNT = 8;
const UINT D3D10_SO_BUFFER_MAX_STRIDE_IN_BYTES = 2048;
const UINT D3D10_SO_BUFFER_MAX_WRITE_WINDOW_IN_BYTES = 256;
const UINT D3D10_SO_BUFFER_SLOT_COUNT = 4;
const UINT D3D10_SO_DDI_REGISTER_INDEX_DENOTING_GAP = 0xffffffff;
const UINT D3D10_SO_MULTIPLE_BUFFER_ELEMENTS_PER_BUFFER = 1;
const UINT D3D10_SO_SINGLE_BUFFER_COMPONENT_LIMIT = 64;
#define D3D10_SRGB_GAMMA	( 2.2f )
#define D3D10_SRGB_TO_FLOAT_DENOMINATOR_1	( 12.92f )
#define D3D10_SRGB_TO_FLOAT_DENOMINATOR_2	( 1.055f )
#define D3D10_SRGB_TO_FLOAT_EXPONENT	( 2.4f )
#define D3D10_SRGB_TO_FLOAT_OFFSET	( 0.055f )
#define D3D10_SRGB_TO_FLOAT_THRESHOLD	( 0.04045f )
#define D3D10_SRGB_TO_FLOAT_TOLERANCE_IN_ULP	( 0.5f )
const UINT D3D10_STANDARD_COMPONENT_BIT_COUNT = 32;
const UINT D3D10_STANDARD_COMPONENT_BIT_COUNT_DOUBLED = 64;
const UINT D3D10_STANDARD_MAXIMUM_ELEMENT_ALIGNMENT_BYTE_MULTIPLE = 4;
const UINT D3D10_STANDARD_PIXEL_COMPONENT_COUNT = 128;
const UINT D3D10_STANDARD_PIXEL_ELEMENT_COUNT = 32;
const UINT D3D10_STANDARD_VECTOR_SIZE = 4;
const UINT D3D10_STANDARD_VERTEX_ELEMENT_COUNT = 16;
const UINT D3D10_STANDARD_VERTEX_TOTAL_COMPONENT_COUNT = 64;
const UINT D3D10_SUBPIXEL_FRACTIONAL_BIT_COUNT = 8;
const UINT D3D10_SUBTEXEL_FRACTIONAL_BIT_COUNT = 6;
const UINT D3D10_TEXEL_ADDRESS_RANGE_BIT_COUNT = 18;
const UINT D3D10_UNBOUND_MEMORY_ACCESS_RESULT = 0;
const UINT D3D10_VIEWPORT_AND_SCISSORRECT_MAX_INDEX = 15;
const UINT D3D10_VIEWPORT_AND_SCISSORRECT_OBJECT_COUNT_PER_PIPELINE = 16;
const UINT D3D10_VIEWPORT_BOUNDS_MAX = 16383;
const INT D3D10_VIEWPORT_BOUNDS_MIN = -16384;
const UINT D3D10_VS_INPUT_REGISTER_COMPONENTS = 4;
const UINT D3D10_VS_INPUT_REGISTER_COMPONENT_BIT_COUNT = 32;
const UINT D3D10_VS_INPUT_REGISTER_COUNT = 16;
const UINT D3D10_VS_INPUT_REGISTER_READS_PER_INST = 2;
const UINT D3D10_VS_INPUT_REGISTER_READ_PORTS = 1;
const UINT D3D10_VS_OUTPUT_REGISTER_COMPONENTS = 4;
const UINT D3D10_VS_OUTPUT_REGISTER_COMPONENT_BIT_COUNT = 32;
const UINT D3D10_VS_OUTPUT_REGISTER_COUNT = 16;
const UINT D3D10_WHQL_CONTEXT_COUNT_FOR_RESOURCE_LIMIT = 10;
const UINT D3D10_WHQL_DRAWINDEXED_INDEX_COUNT_2_TO_EXP = 25;
const UINT D3D10_WHQL_DRAW_VERTEX_COUNT_2_TO_EXP = 25;
const UINT D3D_MAJOR_VERSION = 10;
const UINT D3D_MINOR_VERSION = 0;
const UINT D3D_SPEC_DATE_DAY = 8;
const UINT D3D_SPEC_DATE_MONTH = 8;
const UINT D3D_SPEC_DATE_YEAR = 2006;
#define D3D_SPEC_VERSION	( 1.050005 )
#endif
//
//    Copyright (C) Microsoft.  All rights reserved.
//
// NOTE: The following constants are generated from the d3d10_1 hardware spec.  Do not edit these values directly.
#ifndef _D3D10_1_CONSTANTS
#define _D3D10_1_CONSTANTS
const UINT D3D10_1_DEFAULT_SAMPLE_MASK = 0xffffffff;
#define D3D10_1_FLOAT16_FUSED_TOLERANCE_IN_ULP	( 0.6 )
#define D3D10_1_FLOAT32_TO_INTEGER_TOLERANCE_IN_ULP	( 0.6f )
const UINT D3D10_1_GS_INPUT_REGISTER_COUNT = 32;
const UINT D3D10_1_IA_VERTEX_INPUT_RESOURCE_SLOT_COUNT = 32;
const UINT D3D10_1_IA_VERTEX_INPUT_STRUCTURE_ELEMENTS_COMPONENTS = 128;
const UINT D3D10_1_IA_VERTEX_INPUT_STRUCTURE_ELEMENT_COUNT = 32;
const UINT D3D10_1_PS_OUTPUT_MASK_REGISTER_COMPONENTS = 1;
const UINT D3D10_1_PS_OUTPUT_MASK_REGISTER_COMPONENT_BIT_COUNT = 32;
const UINT D3D10_1_PS_OUTPUT_MASK_REGISTER_COUNT = 1;
const UINT D3D10_1_SHADER_MAJOR_VERSION = 4;
const UINT D3D10_1_SHADER_MINOR_VERSION = 1;
const UINT D3D10_1_SO_BUFFER_MAX_STRIDE_IN_BYTES = 2048;
const UINT D3D10_1_SO_BUFFER_MAX_WRITE_WINDOW_IN_BYTES = 256;
const UINT D3D10_1_SO_BUFFER_SLOT_COUNT = 4;
const UINT D3D10_1_SO_MULTIPLE_BUFFER_ELEMENTS_PER_BUFFER = 1;
const UINT D3D10_1_SO_SINGLE_BUFFER_COMPONENT_LIMIT = 64;
const UINT D3D10_1_STANDARD_VERTEX_ELEMENT_COUNT = 32;
const UINT D3D10_1_SUBPIXEL_FRACTIONAL_BIT_COUNT = 8;
const UINT D3D10_1_VS_INPUT_REGISTER_COUNT = 32;
const UINT D3D10_1_VS_OUTPUT_REGISTER_COUNT = 32;
#endif

