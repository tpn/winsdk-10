//--------------------------------------------------------------------------
//  This is part of the Microsoft Tablet PC Platform SDK
//  Copyright (C) 2002 Microsoft Corporation
//  All rights reserved.
//
//
// Module:       
//      IAGuid.h
//
//--------------------------------------------------------------------------

#if !defined(_IA_GUID)
#define _IA_GUID

#pragma warning(disable : 4115)
#include <objbase.h>
#pragma warning(default : 4115)

EXTERN_C const GUID NULLGUID;

#define INDEX_GUID_ROTATEDBOUNDINGBOX       0
#define INDEX_GUID_CUSTOMRECOGNIZERID       1
#define INDEX_GUID_SHAPENAME                2
#define INDEX_GUID_ALIGNMENTLEVEL           3
#define INDEX_GUID_NODEDATA                 4
#define INDEX_GUID_SEMANTICTYPE             5
#define INDEX_GUID_CONTENTTYPE              6
#define INDEX_GUID_ASCENDER                 7
#define INDEX_GUID_DESCENDER                8
#define INDEX_GUID_BASELINE                 9
#define INDEX_GUID_MIDLINE                 10
#define INDEX_GUID_RECOGNIZEDSTRING        11
#define INDEX_GUID_CONFIDENCELEVEL         12
#define INDEX_GUID_HOTPOINTS               13
#define INDEX_GUID_CENTROID                14
#define INDEX_GUID_MATHML                  15
#define INDEX_GUID_PMATHSTRUCT             16
#define INDEX_GUID_PMATHSYMBOL             17
#define INDEX_GUID_SHAPEGEOMETRY           18
#define INDEX_GUID_BEGINMODIFIERTYPE       19
#define INDEX_GUID_ENDMODIFIERTYPE         20
#define INDEX_GUID_ROTATIONANGLE           21

#define INDEX_GUID_ANALYSISHINTNAME         0
#define INDEX_GUID_GUIDE                    1
#define INDEX_GUID_WORDMODE                 2
#define INDEX_GUID_COERCETOFACTOID          3
#define INDEX_GUID_ALLOWPARTIALDICTIONARYTERMS 4
#define INDEX_GUID_PREFIXTEXT               5
#define INDEX_GUID_SUFFIXTEXT               6
#define INDEX_GUID_FACTOID                  7
#define INDEX_GUID_WORDLIST                 8
#define INDEX_GUID_TOPINKBREAKSONLY         9
#define INDEX_GUID_ENABLEDUNICODECHARACTERRANGES 10


#define INDEX_GUID_ROOT                     0
#define INDEX_GUID_UNCLASSIFIEDINK          1
#define INDEX_GUID_WRITINGREGION            2
#define INDEX_GUID_ANALYSISHINT             3
#define INDEX_GUID_OBJECT                   4
#define INDEX_GUID_INKDRAWING               5
#define INDEX_GUID_IMAGE                    6
#define INDEX_GUID_PARAGRAPH                7
#define INDEX_GUID_LINE                     8
#define INDEX_GUID_INKBULLET                9
#define INDEX_GUID_INKWORD                 10
#define INDEX_GUID_TEXTWORD                11
#define INDEX_GUID_CUSTOMRECOGNIZER        12
#define INDEX_GUID_MATHREGION              13
#define INDEX_GUID_MATHEQUATION            14
#define INDEX_GUID_MATHSTRUCT              15
#define INDEX_GUID_MATHSYMBOL              16
#define INDEX_GUID_MATHIDENTIFIER          17
#define INDEX_GUID_MATHOPERATOR            18
#define INDEX_GUID_MATHNUMBER              19
#define INDEX_GUID_NONINKDRAWING           20
#define INDEX_GUID_GROUPNODE               21
#define INDEX_GUID_MIXEDDRAWING            22

#define INDEX_INK_ANALYSIS_GUID_MAX        128

#if !defined(INITGUID)

EXTERN_C const ULONG KNOWN_INK_ANALYSIS_GUID_INDEX_LIMIT;

EXTERN_C const ULONG CUSTOM_INK_ANALYSIS_GUID_BASE_INDEX;

EXTERN_C const GUID FAR KNOWN_INK_ANALYSIS_GUIDS[];
EXTERN_C const GUID FAR KNOWN_INK_ANALYSIS_HINT_GUIDS[];

EXTERN_C const ULONG KNOWN_INK_ANALYSIS_GUID_COUNT;
EXTERN_C const ULONG KNOWN_INK_ANALYSIS_HINT_PROPERTY_COUNT;
EXTERN_C const ULONG KNOWN_INK_ANALYSIS_CONTEXTNODE_PROPERTY_COUNT;
EXTERN_C const ULONG KNOWN_INK_ANALYSIS_CONTEXTNODE_TYPE_COUNT;

#if defined(__cplusplus)

// Guids for predefined Context Node Properties
EXTERN_C const GUID& GUID_CNP_ROTATEDBOUNDINGBOX;
EXTERN_C const GUID& GUID_CNP_SHAPENAME;
EXTERN_C const GUID& GUID_CNP_ALIGNMENTLEVEL;
EXTERN_C const GUID& GUID_CNP_CONTENTTYPE;
EXTERN_C const GUID& GUID_CNP_NODEDATA;
EXTERN_C const GUID& GUID_CNP_ASCENDER;
EXTERN_C const GUID& GUID_CNP_DESCENDER;
EXTERN_C const GUID& GUID_CNP_BASELINE;
EXTERN_C const GUID& GUID_CNP_MIDLINE;
EXTERN_C const GUID& GUID_CNP_RECOGNIZEDSTRING;
EXTERN_C const GUID& GUID_CNP_CUSTOMRECOGNIZERID;
EXTERN_C const GUID& GUID_CNP_CONFIDENCELEVEL;
EXTERN_C const GUID& GUID_CNP_SEMANTICTYPE;
EXTERN_C const GUID& GUID_CNP_HOTPOINTS;
EXTERN_C const GUID& GUID_CNP_CENTROID;
// math
EXTERN_C const GUID& GUID_CNP_MATHML;
EXTERN_C const GUID& GUID_CNP_MATHSYMBOL;
EXTERN_C const GUID& GUID_CNP_MATHSTRUCT;
// diagramming
EXTERN_C const GUID& GUID_CNP_SHAPEGEOMETRY;
EXTERN_C const GUID& GUID_CNP_BEGINMODIFIERTYPE;
EXTERN_C const GUID& GUID_CNP_ENDMODIFIERTYPE;
EXTERN_C const GUID& GUID_CNP_ROTATIONANGLE;

// Guids for predefined AnalysisHint properties
EXTERN_C const GUID& GUID_AHP_ANALYSISHINTNAME;
EXTERN_C const GUID& GUID_AHP_GUIDE;
EXTERN_C const GUID& GUID_AHP_WORDMODE;
EXTERN_C const GUID& GUID_AHP_COERCETOFACTOID;
EXTERN_C const GUID& GUID_AHP_ALLOWPARTIALDICTIONARYTERMS;
EXTERN_C const GUID& GUID_AHP_PREFIXTEXT;
EXTERN_C const GUID& GUID_AHP_SUFFIXTEXT;
EXTERN_C const GUID& GUID_AHP_FACTOID;
EXTERN_C const GUID& GUID_AHP_WORDLIST;
EXTERN_C const GUID& GUID_AHP_TOPINKBREAKSONLY;
EXTERN_C const GUID& GUID_AHP_ENABLEDUNICODECHARACTERRANGES;


// Guids for predefined Context Node Type
EXTERN_C const GUID& GUID_CNT_ROOT;
EXTERN_C const GUID& GUID_CNT_UNCLASSIFIEDINK;
EXTERN_C const GUID& GUID_CNT_WRITINGREGION;
EXTERN_C const GUID& GUID_CNT_ANALYSISHINT;
EXTERN_C const GUID& GUID_CNT_OBJECT;
EXTERN_C const GUID& GUID_CNT_INKDRAWING;
EXTERN_C const GUID& GUID_CNT_IMAGE;
EXTERN_C const GUID& GUID_CNT_PARAGRAPH;
EXTERN_C const GUID& GUID_CNT_LINE;
EXTERN_C const GUID& GUID_CNT_INKBULLET;
EXTERN_C const GUID& GUID_CNT_INKWORD;
EXTERN_C const GUID& GUID_CNT_TEXTWORD;
EXTERN_C const GUID& GUID_CNT_CUSTOMRECOGNIZER;
//math
EXTERN_C const GUID& GUID_CNT_MATHREGION;
EXTERN_C const GUID& GUID_CNT_MATHEQUATION;
EXTERN_C const GUID& GUID_CNT_MATHSTRUCT;
EXTERN_C const GUID& GUID_CNT_MATHSYMBOL;
EXTERN_C const GUID& GUID_CNT_MATHIDENTIFIER;
EXTERN_C const GUID& GUID_CNT_MATHOPERATOR;
EXTERN_C const GUID& GUID_CNT_MATHNUMBER;
//diagramming
EXTERN_C const GUID& GUID_CNT_NONINKDRAWING;
EXTERN_C const GUID& GUID_CNT_GROUPNODE;
EXTERN_C const GUID& GUID_CNT_MIXEDDRAWING;

#endif // of #if defined(__cplusplus)

#else /* of #if !defined(INITGUID) */


#define MAX_KNOWN_INK_ANALYSIS_GUID_INDEX    128

EXTERN_C const ULONG KNOWN_INK_ANALYSIS_GUID_INDEX_LIMIT = MAX_KNOWN_INK_ANALYSIS_GUID_INDEX;
EXTERN_C const ULONG CUSTOM_INK_ANALYSIS_GUID_BASE_INDEX = MAX_KNOWN_INK_ANALYSIS_GUID_INDEX;

EXTERN_C const GUID FAR KNOWN_INK_ANALYSIS_GUIDS[22] = 
{
    // Known Properties
    { 0x9DABD067, 0x4748, 0x4e35, { 0xBA, 0x1F, 0xF6, 0x43, 0xFB, 0xE6, 0x7C, 0x62 } },   // RotatedBoundingBox
    { 0xCE620704, 0x71F7, 0x4C87, { 0xA8, 0x55, 0x8b, 0x66, 0xCD, 0x70, 0xC7, 0x67 } },   // CustomAnalysisRecognizerId
    { 0x83AA077C, 0x955A, 0x4EF8, { 0x80, 0x15, 0xD5, 0x32, 0x35, 0xEB, 0x15, 0x30 } },   // ShapeName
    { 0xAE0BFB16, 0xB9DF, 0x4399, { 0x82, 0x28, 0x1F, 0x5B, 0x6D, 0x90, 0x56, 0xED } },   // Indent Level
    { 0xF5D5FB58, 0x4AA1, 0x448A, { 0xA9, 0x00, 0x40, 0x5F, 0x6D, 0xA1, 0xF8, 0x8D } },   // Node Data
    { 0xE0FDA714, 0xD3A9, 0x4CEE, { 0xBB, 0xB6, 0xAD, 0x0C, 0x8A, 0xA7, 0x18, 0x76 } },   // Semantic type
    { 0x5BC84266, 0x7D7E, 0x4CCC, { 0xA8, 0x1F, 0x16, 0xA2, 0x56, 0xF6, 0xCB, 0x30 } },   // Content Type

    // Recognition Result Properties
    { 0xFFBE58C0, 0x9895, 0x4A5d, { 0xB0, 0x6B, 0xC7, 0xC9, 0x77, 0x4E, 0x32, 0x47 } },   // Ascender
    { 0x106F1013, 0x0517, 0x4BB3, { 0x83, 0x28, 0x2D, 0x6C, 0xBA, 0xB1, 0x00, 0xE3 } },   // Descender
    { 0x19859AE9, 0x35ED, 0x4D53, { 0x91, 0x9D, 0xF7, 0x05, 0xEC, 0xA8, 0x34, 0x73 } },   // BaseLine
    { 0xEC351E6F, 0xF560, 0x4C0F, { 0xAD, 0x13, 0x17, 0xC0, 0xCD, 0x49, 0x8D, 0xAF } },   // Midline
    { 0x25979182, 0x2D6B, 0x44A3, { 0xAC, 0xD6, 0x5A, 0x2A, 0xD5, 0x1C, 0xD0, 0x5D } },   // TopString
    
    // Recognition Lattice Properties
    { 0x7DFE11A7, 0xFB5D, 0x4958, { 0x87, 0x65, 0x15, 0x4A, 0xDF, 0x0D, 0x83, 0x3F } },   // ConfidenceLevel
    { 0x4F344747, 0xBC2D, 0x471E, { 0x8C, 0xBA, 0x00, 0x2D, 0x11, 0xA3, 0x6E, 0x32 } },   // HotPoints
    { 0xFDC4935E, 0xF009, 0x4C92, { 0x8B, 0x17, 0x37, 0x54, 0xCC, 0xAB, 0x0D, 0xF4 } },   // Centroid

    // Math
    { 0x28c94727, 0xea65, 0x4b70, { 0xbd, 0x53, 0x9d, 0xe3, 0x1b, 0xdd, 0xdf, 0x25 } },   // MathML
    { 0xce7db368, 0xc1a7, 0x48b1, { 0x90, 0xc5, 0xa7, 0x1f, 0x33, 0x9c, 0x50, 0x99 } },   // MathStruct
    { 0x76d21072, 0xab27, 0x4452, { 0x94, 0x8c, 0x62, 0x7b, 0x75, 0xa7, 0x3a, 0xe8 } },   // MathSymbol

    // Diagramming
    { 0xc54eab3b, 0x5910, 0x479d, { 0xbf, 0x6a, 0xe3, 0x66, 0x64, 0xcb, 0x1f, 0x77 } },   // ShapeGeometry
    { 0x66d6dcb4, 0x30fc, 0x44a1, { 0xaf, 0xa6, 0x5b, 0xd7, 0x19, 0xa0, 0x61, 0x05 } },   // BeginModifierType
    { 0x8134e46e, 0x00b4, 0x46de, { 0x8b, 0xd0, 0x1a, 0x18, 0x1d, 0x24, 0x99, 0x52 } },   // EndModifierType
    { 0x7719212B, 0x15FB, 0x434f, { 0x97, 0X05, 0xC3, 0x0A, 0xB2, 0x56, 0x53, 0x99 } },   // RotationAngle

};
// We need to have the real count of GUID values here to satisfy PreFix
EXTERN_C const ULONG KNOWN_INK_ANALYSIS_CONTEXTNODE_PROPERTY_COUNT = sizeof(KNOWN_INK_ANALYSIS_GUIDS) / sizeof(GUID);

EXTERN_C const GUID FAR KNOWN_INK_ANALYSIS_HINT_GUIDS[11] =
{
    // AnalysisHint Properties
    { 0x2967B8B1, 0x739D, 0x4837, { 0x99, 0xA2, 0x50, 0xFD, 0xA9, 0x70, 0x35, 0x69 } },   // AnalysisHintName
    { 0x6D112F6B, 0xD5F9, 0x4c6c, { 0xA4, 0x9C, 0x3A, 0x7C, 0xB8, 0xCB, 0x7E, 0x9A } },   // Guide
    { 0x08D18D88, 0xDD81, 0x4489, { 0x80, 0xD6, 0x11, 0x19, 0x7F, 0x83, 0x63, 0x16 } },   // WordMode
    { 0x4A7A02B9, 0x3D6E, 0x4127, { 0x94, 0x53, 0x12, 0x91, 0x1F, 0x36, 0xC6, 0xA4 } },   // Coerce
    { 0xA41B59B6, 0x3D34, 0x4c06, { 0x85, 0x91, 0x3B, 0x88, 0xA8, 0xA5, 0xAE, 0x00 } },   // AllowPartialDictionaryTerms
    { 0xF77659DC, 0x7480, 0x4598, { 0xAA, 0xB4, 0xDC, 0x9B, 0x28, 0x05, 0x59, 0xF1 } },   // PrefixText
    { 0xAF720D9E, 0x7A41, 0x4099, { 0x85, 0x59, 0x2A, 0x50, 0x8B, 0x35, 0xCC, 0x87 } },   // SuffixText
    { 0x9D104BEA, 0x822B, 0x430b, { 0xBA, 0x6A, 0xE0, 0x53, 0x30, 0xDC, 0xC7, 0x0F } },   // Factoid
    { 0xFCEBB0BD, 0xE304, 0x4966, { 0x80, 0x22, 0x09, 0xCD, 0x4B, 0x45, 0xCD, 0x3D } },   // Wordlist
    { 0x131F5E3B, 0x2B85, 0x43a2, { 0x90, 0xD0, 0xE7, 0x9B, 0x1F, 0x0F, 0xAE, 0x0E } },   // TopInkBreaksOnly
    { 0x02AFC9E0, 0xCB15, 0x42b0, { 0xAC, 0x66, 0x29, 0xF3, 0xD8, 0x22, 0xC5, 0xA2 } },   // EnabledUnicodeCharacterRanges
};
EXTERN_C const ULONG KNOWN_INK_ANALYSIS_HINT_PROPERTY_COUNT = sizeof(KNOWN_INK_ANALYSIS_HINT_GUIDS) / sizeof(GUID);

EXTERN_C const GUID FAR KNOWN_NODETYPE_GUIDS[23] = 
{
    { 0xA219A8C3, 0xCEB5, 0x4E26, { 0xBC, 0x66, 0xE8, 0xE3, 0xB4, 0xF9, 0xAA, 0xE1 } },   // Root
    { 0x1CC7E245, 0xD03D, 0x4DF2, { 0x8A, 0x81, 0xA5, 0x5C, 0xF7, 0x40, 0x3E, 0xB5 } },   // Unclassified
    { 0xEC91D634, 0x4105, 0x4C84, { 0x9E, 0x4D, 0xF6, 0x9E, 0xBA, 0x17, 0xFA, 0xEC } },   // WritingRegion
    { 0xB3E85327, 0x34D8, 0x4A53, { 0x9B, 0xED, 0xC4, 0xAA, 0x61, 0x24, 0x28, 0xD3 } },   // AnalysisHint
    { 0x9D81B680, 0x534F, 0x4FFF, { 0xB9, 0xD0, 0xAE, 0x39, 0x95, 0xEA, 0x37, 0x86 } },   // Object
    { 0xAA19D319, 0x57CD, 0x4503, { 0x93, 0x50, 0x6C, 0x0F, 0xB7, 0x66, 0xA4, 0xB8 } },   // InkDrawing
    { 0x142D59BA, 0x3E9A, 0x4EE0, { 0xBC, 0x91, 0x19, 0x9A, 0x7B, 0x7F, 0x7E, 0x17 } },   // Image
    { 0x65B9CE71, 0xA963, 0x48AD, { 0x91, 0x3F, 0x41, 0x1E, 0x81, 0xC9, 0x85, 0xF0 } },   // Paragraph
    { 0x67D98603, 0xB3C5, 0x4261, { 0x82, 0x56, 0xAD, 0xC3, 0xCE, 0xA2, 0xAD, 0x67 } },   // Line
    { 0x88A74BDF, 0x43FA, 0x4A15, { 0x89, 0x0B, 0x9A, 0x33, 0x86, 0x5A, 0x60, 0x91 } },   // InkBullet
    { 0xBD6AAA31, 0x588B, 0x4246, { 0x86, 0x50, 0x4E, 0x78, 0x59, 0x23, 0x30, 0x17 } },   // InkWord
    { 0x4F84A842, 0x2936, 0x464C, { 0xAB, 0x61, 0x37, 0x52, 0x45, 0x1C, 0x21, 0x29 } },   // TextWord
    { 0x8A269227, 0x2BD1, 0x4281, { 0xAB, 0x62, 0x79, 0xFA, 0x24, 0x18, 0xA5, 0xAC } },   // CustomRecognizer
    // math
    { 0x4a1b0f28, 0x8420, 0x4698, { 0xbf, 0x22, 0x53, 0x24, 0xeb, 0x04, 0x1b, 0x3e } },   // MathRegion
    { 0x0d2042a2, 0x9855, 0x4acb, { 0xb4, 0x49, 0xc9, 0x4a, 0x05, 0x8d, 0xe3, 0xee } },   // MathEquation
    { 0xb2beb289, 0x1535, 0x4811, { 0x82, 0x6d, 0x91, 0x27, 0x12, 0x63, 0x57, 0x3b } },   // MathStruct
    { 0x9d24ed47, 0x1f01, 0x4d77, { 0x97, 0x06, 0xe5, 0xc6, 0xe3, 0xb8, 0x06, 0xda } },   // MathSymbol
    { 0x94df299b, 0x7d54, 0x43c2, { 0x80, 0x77, 0x26, 0x8d, 0xa0, 0x57, 0xb6, 0x6d } },   // MathIdentifier
    { 0xf45a3881, 0x3a93, 0x4252, { 0xab, 0x78, 0x42, 0x9e, 0x13, 0x6e, 0x12, 0x51 } },   // MathOperator
    { 0x40bcb5f4, 0x0a42, 0x4517, { 0x8c, 0x84, 0x09, 0x2c, 0xc5, 0x54, 0xf8, 0xd1 } },   // MathNumber
    // diagramming
    { 0x392ace2b, 0xa7ad, 0x49e3, { 0xac, 0xeb, 0x0b, 0x16, 0x09, 0x80, 0x19, 0xe8 } },   // NonInkDrawing
    { 0x7a46ddb7, 0xec31, 0x4f28, { 0xb4, 0xfb, 0x32, 0xe9, 0xbd, 0x37, 0x1d, 0xe5 } },   // GroupNode
    { 0x7e756cda, 0x70c6, 0x4064, { 0xb2, 0x9e, 0xd5, 0x7d, 0xf6, 0xd8, 0xfc, 0x48 } },   // MixedDrawing
};
// We need to have the real count of GUID values here to satisfy PreFix
EXTERN_C const ULONG KNOWN_INK_ANALYSIS_CONTEXTNODE_TYPE_COUNT = sizeof(KNOWN_NODETYPE_GUIDS) / sizeof(GUID);


EXTERN_C const ULONG KNOWN_INK_ANALYSIS_GUID_COUNT = sizeof(KNOWN_INK_ANALYSIS_GUIDS) / sizeof(GUID);

#if defined(__cplusplus)

EXTERN_C const GUID& GUID_CNP_ROTATEDBOUNDINGBOX            = KNOWN_INK_ANALYSIS_GUIDS[INDEX_GUID_ROTATEDBOUNDINGBOX             ]; 
EXTERN_C const GUID& GUID_CNP_CUSTOMRECOGNIZERID            = KNOWN_INK_ANALYSIS_GUIDS[INDEX_GUID_CUSTOMRECOGNIZERID             ]; 
EXTERN_C const GUID& GUID_CNP_SHAPENAME                     = KNOWN_INK_ANALYSIS_GUIDS[INDEX_GUID_SHAPENAME                      ]; 
EXTERN_C const GUID& GUID_CNP_ALIGNMENTLEVEL                = KNOWN_INK_ANALYSIS_GUIDS[INDEX_GUID_ALIGNMENTLEVEL                 ]; 
EXTERN_C const GUID& GUID_CNP_CONTENTTYPE                   = KNOWN_INK_ANALYSIS_GUIDS[INDEX_GUID_CONTENTTYPE                    ]; 
EXTERN_C const GUID& GUID_CNP_NODEDATA                      = KNOWN_INK_ANALYSIS_GUIDS[INDEX_GUID_NODEDATA                       ];
EXTERN_C const GUID& GUID_CNP_SEMANTICTYPE                  = KNOWN_INK_ANALYSIS_GUIDS[INDEX_GUID_SEMANTICTYPE                   ];
EXTERN_C const GUID& GUID_CNP_ASCENDER                      = KNOWN_INK_ANALYSIS_GUIDS[INDEX_GUID_ASCENDER                       ]; 
EXTERN_C const GUID& GUID_CNP_DESCENDER                     = KNOWN_INK_ANALYSIS_GUIDS[INDEX_GUID_DESCENDER                      ]; 
EXTERN_C const GUID& GUID_CNP_BASELINE                      = KNOWN_INK_ANALYSIS_GUIDS[INDEX_GUID_BASELINE                       ]; 
EXTERN_C const GUID& GUID_CNP_MIDLINE                       = KNOWN_INK_ANALYSIS_GUIDS[INDEX_GUID_MIDLINE                        ]; 
EXTERN_C const GUID& GUID_CNP_RECOGNIZEDSTRING              = KNOWN_INK_ANALYSIS_GUIDS[INDEX_GUID_RECOGNIZEDSTRING               ]; 
EXTERN_C const GUID& GUID_CNP_CONFIDENCELEVEL               = KNOWN_INK_ANALYSIS_GUIDS[INDEX_GUID_CONFIDENCELEVEL                ];
EXTERN_C const GUID& GUID_CNP_HOTPOINTS                     = KNOWN_INK_ANALYSIS_GUIDS[INDEX_GUID_HOTPOINTS                      ];
EXTERN_C const GUID& GUID_CNP_CENTROID                      = KNOWN_INK_ANALYSIS_GUIDS[INDEX_GUID_CENTROID                       ];
//math
EXTERN_C const GUID& GUID_CNP_MATHML                        = KNOWN_INK_ANALYSIS_GUIDS[INDEX_GUID_MATHML                         ];
EXTERN_C const GUID& GUID_CNP_MATHSTRUCT                    = KNOWN_INK_ANALYSIS_GUIDS[INDEX_GUID_PMATHSTRUCT                    ];
EXTERN_C const GUID& GUID_CNP_MATHSYMBOL                    = KNOWN_INK_ANALYSIS_GUIDS[INDEX_GUID_PMATHSYMBOL                    ];
//diagramming
EXTERN_C const GUID& GUID_CNP_SHAPEGEOMETRY                 = KNOWN_INK_ANALYSIS_GUIDS[INDEX_GUID_SHAPEGEOMETRY                  ];
EXTERN_C const GUID& GUID_CNP_BEGINMODIFIERTYPE             = KNOWN_INK_ANALYSIS_GUIDS[INDEX_GUID_BEGINMODIFIERTYPE              ];
EXTERN_C const GUID& GUID_CNP_ENDMODIFIERTYPE               = KNOWN_INK_ANALYSIS_GUIDS[INDEX_GUID_ENDMODIFIERTYPE                ];
EXTERN_C const GUID& GUID_CNP_ROTATIONANGLE                 = KNOWN_INK_ANALYSIS_GUIDS[INDEX_GUID_ROTATIONANGLE                  ];

EXTERN_C const GUID& GUID_AHP_ANALYSISHINTNAME              = KNOWN_INK_ANALYSIS_HINT_GUIDS[INDEX_GUID_ANALYSISHINTNAME             ]; 
EXTERN_C const GUID& GUID_AHP_GUIDE                         = KNOWN_INK_ANALYSIS_HINT_GUIDS[INDEX_GUID_GUIDE                        ]; 
EXTERN_C const GUID& GUID_AHP_WORDMODE                      = KNOWN_INK_ANALYSIS_HINT_GUIDS[INDEX_GUID_WORDMODE                     ]; 
EXTERN_C const GUID& GUID_AHP_COERCETOFACTOID               = KNOWN_INK_ANALYSIS_HINT_GUIDS[INDEX_GUID_COERCETOFACTOID              ]; 
EXTERN_C const GUID& GUID_AHP_ALLOWPARTIALDICTIONARYTERMS   = KNOWN_INK_ANALYSIS_HINT_GUIDS[INDEX_GUID_ALLOWPARTIALDICTIONARYTERMS  ]; 
EXTERN_C const GUID& GUID_AHP_PREFIXTEXT                    = KNOWN_INK_ANALYSIS_HINT_GUIDS[INDEX_GUID_PREFIXTEXT                   ]; 
EXTERN_C const GUID& GUID_AHP_SUFFIXTEXT                    = KNOWN_INK_ANALYSIS_HINT_GUIDS[INDEX_GUID_SUFFIXTEXT                   ]; 
EXTERN_C const GUID& GUID_AHP_FACTOID                       = KNOWN_INK_ANALYSIS_HINT_GUIDS[INDEX_GUID_FACTOID                      ]; 
EXTERN_C const GUID& GUID_AHP_WORDLIST                      = KNOWN_INK_ANALYSIS_HINT_GUIDS[INDEX_GUID_WORDLIST                     ]; 
EXTERN_C const GUID& GUID_AHP_TOPINKBREAKSONLY              = KNOWN_INK_ANALYSIS_HINT_GUIDS[INDEX_GUID_TOPINKBREAKSONLY             ]; 
EXTERN_C const GUID& GUID_AHP_ENABLEDUNICODECHARACTERRANGES = KNOWN_INK_ANALYSIS_HINT_GUIDS[INDEX_GUID_ENABLEDUNICODECHARACTERRANGES]; 


EXTERN_C const GUID& GUID_CNT_ROOT                          = KNOWN_NODETYPE_GUIDS[INDEX_GUID_ROOT                  ];
EXTERN_C const GUID& GUID_CNT_UNCLASSIFIEDINK               = KNOWN_NODETYPE_GUIDS[INDEX_GUID_UNCLASSIFIEDINK       ];
EXTERN_C const GUID& GUID_CNT_WRITINGREGION                 = KNOWN_NODETYPE_GUIDS[INDEX_GUID_WRITINGREGION         ];
EXTERN_C const GUID& GUID_CNT_ANALYSISHINT                  = KNOWN_NODETYPE_GUIDS[INDEX_GUID_ANALYSISHINT          ];
EXTERN_C const GUID& GUID_CNT_OBJECT                        = KNOWN_NODETYPE_GUIDS[INDEX_GUID_OBJECT                ];
EXTERN_C const GUID& GUID_CNT_INKDRAWING                    = KNOWN_NODETYPE_GUIDS[INDEX_GUID_INKDRAWING            ];
EXTERN_C const GUID& GUID_CNT_IMAGE                         = KNOWN_NODETYPE_GUIDS[INDEX_GUID_IMAGE                 ];
EXTERN_C const GUID& GUID_CNT_PARAGRAPH                     = KNOWN_NODETYPE_GUIDS[INDEX_GUID_PARAGRAPH             ];
EXTERN_C const GUID& GUID_CNT_LINE                          = KNOWN_NODETYPE_GUIDS[INDEX_GUID_LINE                  ];
EXTERN_C const GUID& GUID_CNT_INKBULLET                     = KNOWN_NODETYPE_GUIDS[INDEX_GUID_INKBULLET             ];
EXTERN_C const GUID& GUID_CNT_INKWORD                       = KNOWN_NODETYPE_GUIDS[INDEX_GUID_INKWORD               ];
EXTERN_C const GUID& GUID_CNT_TEXTWORD                      = KNOWN_NODETYPE_GUIDS[INDEX_GUID_TEXTWORD              ];
EXTERN_C const GUID& GUID_CNT_CUSTOMRECOGNIZER              = KNOWN_NODETYPE_GUIDS[INDEX_GUID_CUSTOMRECOGNIZER      ];
//math
EXTERN_C const GUID& GUID_CNT_MATHREGION                    = KNOWN_NODETYPE_GUIDS[INDEX_GUID_MATHREGION            ];
EXTERN_C const GUID& GUID_CNT_MATHEQUATION                  = KNOWN_NODETYPE_GUIDS[INDEX_GUID_MATHEQUATION          ];
EXTERN_C const GUID& GUID_CNT_MATHSTRUCT                    = KNOWN_NODETYPE_GUIDS[INDEX_GUID_MATHSTRUCT            ];
EXTERN_C const GUID& GUID_CNT_MATHSYMBOL                    = KNOWN_NODETYPE_GUIDS[INDEX_GUID_MATHSYMBOL            ];
EXTERN_C const GUID& GUID_CNT_MATHIDENTIFIER                = KNOWN_NODETYPE_GUIDS[INDEX_GUID_MATHIDENTIFIER        ];
EXTERN_C const GUID& GUID_CNT_MATHOPERATOR                  = KNOWN_NODETYPE_GUIDS[INDEX_GUID_MATHOPERATOR          ];
EXTERN_C const GUID& GUID_CNT_MATHNUMBER                    = KNOWN_NODETYPE_GUIDS[INDEX_GUID_MATHNUMBER            ];
//diagramming
EXTERN_C const GUID& GUID_CNT_NONINKDRAWING                 = KNOWN_NODETYPE_GUIDS[INDEX_GUID_NONINKDRAWING         ];
EXTERN_C const GUID& GUID_CNT_GROUPNODE                     = KNOWN_NODETYPE_GUIDS[INDEX_GUID_GROUPNODE             ];
EXTERN_C const GUID& GUID_CNT_MIXEDDRAWING                  = KNOWN_NODETYPE_GUIDS[INDEX_GUID_MIXEDDRAWING          ];

#endif //of #if defined(__cplusplus)

#endif /* of #if !defined(INITGUID) */

#if !defined(__cplusplus)

#define GUID_CNP_ROTATEDBOUNDINGBOX            (*((GUID*)&(KNOWN_INK_ANALYSIS_GUIDS[INDEX_GUID_ROTATEDBOUNDINGBOX           ]))) 
#define GUID_CNP_CUSTOMRECOGNIZERID            (*((GUID*)&(KNOWN_INK_ANALYSIS_GUIDS[INDEX_GUID_CUSTOMRECOGNIZERID           ])))
#define GUID_CNP_SHAPENAME                     (*((GUID*)&(KNOWN_INK_ANALYSIS_GUIDS[INDEX_GUID_SHAPENAME                    ]))) 
#define GUID_CNP_ALIGNMENTLEVEL                (*((GUID*)&(KNOWN_INK_ANALYSIS_GUIDS[INDEX_GUID_ALIGNMENTLEVEL               ])))
#define GUID_CNP_CONTENTTYPE                   (*((GUID*)&(KNOWN_INK_ANALYSIS_GUIDS[INDEX_GUID_CONTENTTYPE                  ])))
#define GUID_CNP_NODEDATA                      (*((GUID*)&(KNOWN_INK_ANALYSIS_GUIDS[INDEX_GUID_NODEDATA                     ])))
#define GUID_CNP_SEMANTICTYPE                  (*((GUID*)&(KNOWN_INK_ANALYSIS_GUIDS[INDEX_GUID_SEMANTICTYPE                 ])))
#define GUID_CNP_ASCENDER                      (*((GUID*)&(KNOWN_INK_ANALYSIS_GUIDS[INDEX_GUID_ASCENDER                     ]))) 
#define GUID_CNP_DESCENDER                     (*((GUID*)&(KNOWN_INK_ANALYSIS_GUIDS[INDEX_GUID_DESCENDER                    ]))) 
#define GUID_CNP_BASELINE                      (*((GUID*)&(KNOWN_INK_ANALYSIS_GUIDS[INDEX_GUID_BASELINE                     ]))) 
#define GUID_CNP_MIDLINE                       (*((GUID*)&(KNOWN_INK_ANALYSIS_GUIDS[INDEX_GUID_MIDLINE                      ]))) 
#define GUID_CNP_RECOGNIZEDSTRING              (*((GUID*)&(KNOWN_INK_ANALYSIS_GUIDS[INDEX_GUID_RECOGNIZEDSTRING             ]))) 
#define GUID_CNP_CONFIDENCELEVEL               (*((GUID*)&(KNOWN_INK_ANALYSIS_GUIDS[INDEX_GUID_CONFIDENCELEVEL              ])))
#define GUID_CNP_HOTPOINTS                     (*((GUID*)&(KNOWN_INK_ANALYSIS_GUIDS[INDEX_GUID_HOTPOINTS                    ])))
#define GUID_CNP_CENTROID                      (*((GUID*)&(KNOWN_INK_ANALYSIS_GUIDS[INDEX_GUID_CENTROID                     ])))
//math
#define GUID_CNP_MATHML                        (*((GUID*)&(KNOWN_INK_ANALYSIS_GUIDS[INDEX_GUID_MATHML                       ])))
#define GUID_CNP_STRUCT                        (*((GUID*)&(KNOWN_INK_ANALYSIS_GUIDS[INDEX_GUID_PMATHSTRUCT                  ])))
#define GUID_CNP_SYMBOL                        (*((GUID*)&(KNOWN_INK_ANALYSIS_GUIDS[INDEX_GUID_PMATHSYMBOL                  ])))
//diagramming
#define GUID_CNP_SHAPEGEOMETRY                 (*((GUID*)&(KNOWN_INK_ANALYSIS_GUIDS[INDEX_GUID_SHAPEGEOMETRY                ])))
#define GUID_CNP_BEGINMODIFIERTYPE             (*((GUID*)&(KNOWN_INK_ANALYSIS_GUIDS[INDEX_GUID_BEGINMODIFIERTYPE            ])))
#define GUID_CNP_ENDMODIFIERTYPE               (*((GUID*)&(KNOWN_INK_ANALYSIS_GUIDS[INDEX_GUID_ENDMODIFIERTYPE              ])))
#define GUID_CNP_ROTATIONANGLE                 (*((GUID*)&(KNOWN_INK_ANALYSIS_GUIDS[INDEX_GUID_ROTATIONANGLE                ])))

#define GUID_AHP_ANALYSISHINTNAME              (*((GUID*)&(KNOWN_INK_ANALYSIS_HINT_GUIDS[INDEX_GUID_ANALYSISHINTNAME             ]))) 
#define GUID_AHP_GUIDE                         (*((GUID*)&(KNOWN_INK_ANALYSIS_HINT_GUIDS[INDEX_GUID_GUIDE                        ]))) 
#define GUID_AHP_WORDMODE                      (*((GUID*)&(KNOWN_INK_ANALYSIS_HINT_GUIDS[INDEX_GUID_WORDMODE                     ]))) 
#define GUID_AHP_COERCETOFACTOID               (*((GUID*)&(KNOWN_INK_ANALYSIS_HINT_GUIDS[INDEX_GUID_COERCETOFACTOID              ]))) 
#define GUID_AHP_ALLOWPARTIALDICTIONARYTERMS   (*((GUID*)&(KNOWN_INK_ANALYSIS_HINT_GUIDS[INDEX_GUID_ALLOWPARTIALDICTIONARYTERMS  ]))) 
#define GUID_AHP_PREFIXTEXT                    (*((GUID*)&(KNOWN_INK_ANALYSIS_HINT_GUIDS[INDEX_GUID_PREFIXTEXT                   ]))) 
#define GUID_AHP_SUFFIXTEXT                    (*((GUID*)&(KNOWN_INK_ANALYSIS_HINT_GUIDS[INDEX_GUID_SUFFIXTEXT                   ]))) 
#define GUID_AHP_FACTOID                       (*((GUID*)&(KNOWN_INK_ANALYSIS_HINT_GUIDS[INDEX_GUID_FACTOID                      ]))) 
#define GUID_AHP_WORDLIST                      (*((GUID*)&(KNOWN_INK_ANALYSIS_HINT_GUIDS[INDEX_GUID_WORDLIST                     ])))
#define GUID_AHP_TOPINKBREAKSONLY              (*((GUID*)&(KNOWN_INK_ANALYSIS_HINT_GUIDS[INDEX_GUID_TOPINKBREAKSONLY             ])))
#define GUID_AHP_ENABLEDUNICODECHARACTERRANGES (*((GUID*)&(KNOWN_INK_ANALYSIS_HINT_GUIDS[INDEX_GUID_ENABLEDUNICODECHARACTERRANGES])))


#define GUID_CNT_ROOT                          (*((GUID*)&(KNOWN_NODETYPE_GUIDS[INDEX_GUID_ROOT                  ])))
#define GUID_CNT_UNCLASSIFIEDINKNODE           (*((GUID*)&(KNOWN_NODETYPE_GUIDS[INDEX_GUID_UNCLASSIFIEDINK       ])))
#define GUID_CNT_WRITINGREGION                 (*((GUID*)&(KNOWN_NODETYPE_GUIDS[INDEX_GUID_WRITINGREGION         ])))
#define GUID_CNT_ANALYSISHINT                  (*((GUID*)&(KNOWN_NODETYPE_GUIDS[INDEX_GUID_ANALYSISHINT          ])))
#define GUID_CNT_OBJECT                        (*((GUID*)&(KNOWN_NODETYPE_GUIDS[INDEX_GUID_OBJECT                ])))
#define GUID_CNT_INKDRAWING                    (*((GUID*)&(KNOWN_NODETYPE_GUIDS[INDEX_GUID_INKDRAWING            ])))
#define GUID_CNT_IMAGE                         (*((GUID*)&(KNOWN_NODETYPE_GUIDS[INDEX_GUID_IMAGE                 ])))
#define GUID_CNT_PARAGRAPH                     (*((GUID*)&(KNOWN_NODETYPE_GUIDS[INDEX_GUID_PARAGRAPH             ])))
#define GUID_CNT_LINE                          (*((GUID*)&(KNOWN_NODETYPE_GUIDS[INDEX_GUID_LINE                  ])))
#define GUID_CNT_INKBULLET                     (*((GUID*)&(KNOWN_NODETYPE_GUIDS[INDEX_GUID_INKBULLET             ])))
#define GUID_CNT_INKWORD                       (*((GUID*)&(KNOWN_NODETYPE_GUIDS[INDEX_GUID_INKWORD               ])))
#define GUID_CNT_TEXTWORD                      (*((GUID*)&(KNOWN_NODETYPE_GUIDS[INDEX_GUID_TEXTWORD              ])))
#define GUID_CNT_CUSTOMRECOGNIZER              (*((GUID*)&(KNOWN_NODETYPE_GUIDS[INDEX_GUID_CUSTOMRECOGNIZER      ])))
//math
#define GUID_CNT_MATHREGION                     (*((GUID*)&(KNOWN_NODETYPE_GUIDS[INDEX_GUID_MATHREGION           ])))
#define GUID_CNT_MATHEQUATION                   (*((GUID*)&(KNOWN_NODETYPE_GUIDS[INDEX_GUID_MATHEQUATION         ])))
#define GUID_CNT_MATHSTRUCT                     (*((GUID*)&(KNOWN_NODETYPE_GUIDS[INDEX_GUID_MATHSTRUCT           ])))
#define GUID_CNT_MATHSYMBOL                     (*((GUID*)&(KNOWN_NODETYPE_GUIDS[INDEX_GUID_MATHSYMBOL           ])))
#define GUID_CNT_MATHIDENTIFIER                 (*((GUID*)&(KNOWN_NODETYPE_GUIDS[INDEX_GUID_MATHIDENTIFIER       ])))
#define GUID_CNT_MATHOPERATOR                   (*((GUID*)&(KNOWN_NODETYPE_GUIDS[INDEX_GUID_MATHOPERATOR         ])))
#define GUID_CNT_MATHNUMBER                     (*((GUID*)&(KNOWN_NODETYPE_GUIDS[INDEX_GUID_MATHNUMBER           ])))
//diagramming
#define GUID_CNT_NONINKDRAWING                  (*((GUID*)&(KNOWN_NODETYPE_GUIDS[INDEX_GUID_NONINKDRAWING        ])))
#define GUID_CNT_GROUPNODE                      (*((GUID*)&(KNOWN_NODETYPE_GUIDS[INDEX_GUID_GROUPNODE            ])))
#define GUID_CNT_MIXEDDRAWING                   (*((GUID*)&(KNOWN_NODETYPE_GUIDS[INDEX_GUID_MIXEDDRAWING         ])))

#endif //of #if !defined(__cplusplus)

#endif /* of #if !defined(_IA_GUID) */
