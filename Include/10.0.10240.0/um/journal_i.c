

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 8.00.0613 */
/* @@MIDL_FILE_HEADING(  ) */



#ifdef __cplusplus
extern "C"{
#endif 


#include <rpc.h>
#include <rpcndr.h>

#ifdef _MIDL_USE_GUIDDEF_

#ifndef INITGUID
#define INITGUID
#include <guiddef.h>
#undef INITGUID
#else
#include <guiddef.h>
#endif

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        DEFINE_GUID(name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8)

#else // !_MIDL_USE_GUIDDEF_

#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        const type name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

#endif !_MIDL_USE_GUIDDEF_

MIDL_DEFINE_GUID(IID, LIBID_JournalLib,0xEABAA706,0x4A6D,0x4E45,0xA2,0x55,0xA6,0xE8,0x6C,0x40,0x3A,0xDB);


MIDL_DEFINE_GUID(IID, IID_IJournalReader,0x26213A0B,0x5A6C,0x4472,0x92,0x3D,0x9F,0x29,0xEF,0xF6,0x08,0xB2);


MIDL_DEFINE_GUID(CLSID, CLSID_JournalReader,0xB4124623,0xFC0E,0x47CE,0xBC,0xA9,0x12,0x6A,0x61,0x04,0xAD,0xA1);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



