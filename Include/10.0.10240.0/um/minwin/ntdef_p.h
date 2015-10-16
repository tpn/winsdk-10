
//
#pragma once

#ifdef __cplusplus
extern "C" {
#endif
//
//

#if (_WIN32_WINNT >= 0x0600) || (defined(WINDOWS_ENABLE_CPLUSPLUS) && defined(__cplusplus))

typedef struct _LUNICODE_STRING {
    SIZE_T Length;
    SIZE_T MaximumLength;
#if defined(MIDL_PASS)
    [size_is(MaximumLength / 2), length_is((Length) / 2) ] USHORT * Buffer;
#else // MIDL_PASS
    _Field_size_bytes_part_opt_(MaximumLength, Length) PWCH   Buffer;
#endif // MIDL_PASS
} LUNICODE_STRING;

typedef LUNICODE_STRING *PLUNICODE_STRING;
typedef const LUNICODE_STRING *PCLUNICODE_STRING;

#define LUNICODE_STRING_MAX_BYTES (MAXSIZE_T - (MAXSIZE_T % sizeof(WCHAR)))
#define LUNICODE_STRING_MAX_CHARS (LUNICODE_STRING_MAX_BYTES / sizeof(WCHAR))

typedef struct _LUTF8_STRING {
    SIZE_T Length;
    SIZE_T MaximumLength;
#if defined(MIDL_PASS)
    [size_is(MaximumLength), length_is(Length) ] UCHAR * Buffer;
#else // MIDL_PASS
    _Field_size_bytes_part_opt_(MaximumLength, Length) UCHAR *Buffer;
#endif // MIDL_PASS
} LUTF8_STRING;

typedef LUTF8_STRING *PLUTF8_STRING;
typedef const LUTF8_STRING *PCLUTF8_STRING;

#define RTL_CONSTANT_UTF8_STRING(s) { sizeof( s ) - sizeof( (s)[0] ), sizeof( s ), (UCHAR*)s }

#define LUTF8_STRING_MAX_BYTES (MAXSIZE_T)

typedef struct _LBLOB {
    SIZE_T Length;
    SIZE_T MaximumLength;
#if defined(MIDL_PASS)
    [size_is(MaximumLength), length_is(Length)] UCHAR *Buffer;
#else // MIDL_PASS
    _Field_size_bytes_part_opt_(MaximumLength, Length) UCHAR *Buffer;
#endif // MIDL_PASS
} LBLOB;

typedef LBLOB *PLBLOB;
typedef const LBLOB *PCLBLOB;

#define LBLOB_MAX_BYTES (MAXSIZE_T)

#endif // _WIN32_WINNT >= 0x0600

//
//
#ifdef __cplusplus
}
#endif
//
