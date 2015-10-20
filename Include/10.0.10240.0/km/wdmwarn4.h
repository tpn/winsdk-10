/*
Include before wdm.h to be able to compile at warning level 4
*/

/*
4214 nonstandard extension used : bit field types other than int
4201 nonstandard extension using nameless struct/union
4115 nonstandard extension used : named type definition in parens
4200 nonstandard extension used : zero-sized array in struct/union
4514 unreferenced inline function
**4100 unreferenced formal parameter
4057
4127 condition expression is constant
*/

#pragma warning(disable:4214 4201 4115 4200 4100 4514 4057 4127)
