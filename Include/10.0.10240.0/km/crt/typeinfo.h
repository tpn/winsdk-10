/***
*typeinfo.h - Defines the type_info structure and exceptions used for RTTI
*
*       Copyright (c) Microsoft Corporation. All rights reserved.
*
*Purpose:
*       Defines the type_info structure and exceptions used for
*       Runtime Type Identification.
*
*       [Public]
*
****/

#if     _MSC_VER > 1000
#pragma once
#endif

#include <crtdefs.h>

#ifndef _INC_TYPEINFO
#define _INC_TYPEINFO

#ifdef  _MSC_VER
#pragma pack(push,_CRT_PACKING)
#endif  /* _MSC_VER */

#ifndef RC_INVOKED

#ifndef __cplusplus
#error This header requires a C++ compiler ...
#endif


#ifndef _STL70_
#ifndef _USE_OLD_TYPEINFO
#define _USE_OLD_TYPEINFO
#endif
#endif /* _STL70_ */

#ifndef _USE_OLD_TYPEINFO

#include <typeinfo>


#ifdef  __RTTI_OLDNAMES
/* Some synonyms for folks using older standard */
using std::bad_cast;
using std::bad_typeid;

typedef type_info Type_info;
typedef bad_cast Bad_cast;
typedef bad_typeid Bad_typeid;
#endif  /* __RTTI_OLDNAMES */


#else   /* _USE_OLD_TYPEINFO */

struct __type_info_node {
    void *memPtr;
    __type_info_node* next;
};

extern __type_info_node __type_info_root_node;

typedef int __TYPEINFO_OPERATOR_EQ_RET;

#if (_MSC_VER < 1400) || defined(_STATIC_MGDLIB)
#define _THISCALL
#else
#define _THISCALL __thiscall
#endif

#if _MSC_VER >= 1200
#pragma warning(push)
#pragma warning(disable:4820) /* padding added after data member */
#endif

class type_info {
public:
    _CRTIMP_PURE_TYPEINFO virtual ~type_info();
    _CRTIMP_TYPEINFO __TYPEINFO_OPERATOR_EQ_RET _THISCALL operator==(_In_ const type_info& _Rhs) const;
    _CRTIMP_TYPEINFO __TYPEINFO_OPERATOR_EQ_RET _THISCALL operator!=(_In_ const type_info& _Rhs) const;
    _CRTIMP_TYPEINFO int _THISCALL before(_In_ const type_info& _Rhs) const;
    _Check_return_ _CRTIMP_TYPEINFO const char* _THISCALL name() const;
    _Check_return_ _CRTIMP_TYPEINFO const char* _THISCALL raw_name() const;
private:
    void *_m_data;
    char _m_d_name[1];
    type_info(_In_ const type_info& _Rhs);
    type_info& operator=(_In_ const type_info& _Rhs);
};

#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


/* This include must occur below the definition of class type_info */
#include <stdexcpt.h>

class _CRTIMP bad_cast : public exception {
public:
#if defined (_X86_)
// This function is not exported prior to Windows XP.
    __CLR_OR_THIS_CALL bad_cast(_In_z_ const char * _Message = "bad cast") : exception(_Message) { }
#else
    __CLR_OR_THIS_CALL bad_cast(_In_z_ const char * _Message = "bad cast");
#endif
    __CLR_OR_THIS_CALL bad_cast(_In_ const bad_cast & _Bad_cast);
    virtual __CLR_OR_THIS_CALL ~bad_cast();
};

class _CRTIMP bad_typeid : public exception {
public:
    bad_typeid(_In_z_ const char * _Message = "bad typeid");
    bad_typeid(_In_ const bad_typeid &);
    virtual ~bad_typeid();
};

class _CRTIMP __non_rtti_object : public bad_typeid {
public:
    __non_rtti_object(_In_z_ const char * _Message);
    __non_rtti_object(_In_ const __non_rtti_object &);
    virtual ~__non_rtti_object();
};

#ifdef  __RTTI_OLDNAMES
/* Some synonyms for folks using older standard */
typedef type_info Type_info;
typedef bad_cast Bad_cast;
typedef bad_typeid Bad_typeid;
#endif  /* __RTTI_OLDNAMES */


#endif /* _USE_OLD_TYPEINFO */
#endif /* RC_INVOKED */

#ifdef  _MSC_VER
#pragma pack(pop)
#endif  /* _MSC_VER */

#endif  /* _INC_TYPEINFO */
/* 88bf0570-3001-4e78-a5f2-be5765546192 */ 
