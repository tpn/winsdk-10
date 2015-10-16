/*---------------------------------------------------------------

THIS CODE AND INFORMATION IS PROVIDED "AS IS" WITHOUT WARRANTY OF
ANY KIND, EITHER EXPRESSED OR IMPLIED, INCLUDING BUT NOT LIMITED
TO THE IMPLIED WARRANTIES OF MERCHANTABILITY AND/OR FITNESS FOR A
PARTICULAR PURPOSE.

Copyright (c) Microsoft Corporation.  All rights reserved.

SafeInt.hpp

This header implements an integer handling class designed to catch
unsafe integer operations

This header compiles properly at warning level 4.

Please read the leading comments before using the class.

Version 3.0
---------------------------------------------------------------*/
#ifndef SAFEINT_HPP
#define SAFEINT_HPP

#include <assert.h>

#ifndef C_ASSERT
#define C_ASSERT(e) typedef char __C_ASSERT__[(e)?1:-1]
#endif

/*
*  The SafeInt class is designed to have as low an overhead as possible
*  while still ensuring that all integer operations are conducted safely.
*  Nearly every operator has been overloaded, with a very few exceptions.
*
*  A usability-safety trade-off has been made to help ensure safety. This 
*  requires that every operation return either a SafeInt or a bool. If we 
*  allowed an operator to return a base integer type T, then the following 
*  can happen:
*  
*  char i = SafeInt<char>(32) * 2 + SafeInt<char>(16) * 4;
*
*  The * operators take precedence, get overloaded, return a char, and then 
*  you have:
*
*  char i = (char)64 + (char)64; //overflow!
*  
*  This situation would mean that safety would depend on usage, which isn't
*  acceptable. 
*
*  One key operator that is missing is an implicit cast to type T. The reason for
*  this is that if there is an implicit cast operator, then we end up with
*  an ambiguous compile-time precedence. Because of this amiguity, there
*  are two methods that are provided:
*
*  Casting operators for every native integer type
*  Version 3 note - it now compiles correctly for size_t without warnings
*
*  SafeInt::Ptr()   - returns the address of the internal integer
*  Note - the '&' (address of) operator has been overloaded and returns
*         the address of the internal integer.
*
*  The SafeInt class should be used in any circumstances where ensuring
*  integrity of the calculations is more important than performance. See Performance
*  Notes below for additional information.
*
*  Many of the conditionals will optimize out or be inlined for a release
*  build (especially with /Ox), but it does have significantly more overhead, 
*  especially for signed numbers. If you do not _require_ negative numbers, use 
*  unsigned integer types - certain types of problems cannot occur, and this class
*  performs most efficiently.
*
*  Here's an example of when the class should ideally be used -
*
*  void* AllocateMemForStructs(int StructSize, int HowMany)
*  {
*     SafeInt<unsigned long> s(StructSize);
*
*     s *= HowMany;
*
*     return malloc(s);
*
*  }
*
*  Here's when it should NOT be used:
*
*  void foo()
*  {
*    int i;
*
*    for(i = 0; i < 0xffff; i++)
*      ....
*  }
*
*  Error handling - a SafeInt class will throw exceptions if something
*  objectionable happens. The exceptions are SafeIntException classes,
*  which contain an enum as a code.
*
*  Typical usage might be:
*
*  bool foo()
*  {
*    SafeInt<unsigned long> s; //note that s == 0 unless set
*
*    try{
*      s *= 23;
*      ....
*    }
*    catch(SafeIntException err)
*    {
*       //handle errors here
*    }
*  }
*
*  Update for 3.0 - the exception class is now a template parameter.
*  You can replace the exception class with any exception class you like. This is accomplished by:
*  1) Create a class that has the following interface:
*  
   template <> class YourSafeIntExceptionHandler < YourException >
	{
	public:
		 static __declspec(noreturn) void __stdcall SafeIntOnOverflow()
		 {
			  throw YourException( YourSafeIntArithmeticOverflowError );
		 }

		 static __declspec(noreturn) void __stdcall SafeIntOnDivZero()
		 {
			  throw YourException( YourSafeIntDivideByZeroError );
		 }
	};
*
*  Note that you don't have to throw C++ exceptions, you can throw Win32 exceptions, or do 
*  anything you like, just don't return from the call back into the code.
*
*  2) Either explicitly declare SafeInts like so:
*     SafeInt< int, YourSafeIntExceptionHandler > si;
*  or
*     #define SafeIntDefaultExceptionHandler YourSafeIntExceptionHandler
*
*  Performance:
*
*  Due to the highly nested nature of this class, you can expect relatively poor
*  performance in unoptimized code. In tests of optimized code vs. correct inline checks
*  in native code, this class has been found to take approximately 8% more CPU time (this varies),
*  most of which is due to exception handling. Solutions:
*
*  1) Compile optimized code - /Ox is best, /O2 also performs well. Interestingly, /O1
*     (optimize for size) does not work as well.
*  2) If that 8% hit is really a serious problem, walk through the code and inline the
*     exact same checks as the class uses.
*  3) Some operations are more difficult than others - avoid using signed integers, and if
*     possible keep them all the same size. 64-bit integers are also expensive. Mixing 
*     different integer sizes and types may prove expensive. Be aware that literals are
*     actually ints. For best performance, cast literals to the type desired.
*
*!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
*                                          IMPORTANT
*!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
*  4) The Microsoft C++ compiler cannot inline when both C++ exceptions are used (the default for
*     this class) AND the return is by value. The overhead of function calls can be significant.
*
*     !!!!!!!!!!!!!!!!!!!!!!!!!!!!! Update! !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
*     As it turns out, this is only the case when the object has a destructor. It doesn't matter if
*     the destructor DOES anything, it just has to  be there. So ~ClassName(){}; will cause lots of 
*     method calls not to inline. The destructor has thus been removed from this class.
*
*     Some of the comments immediately below are out of date, but do still apply in some cases. The
*     warning about overriding the default handler with ANYTHING other than some exception handling
*     mechanism remains important.
*
*     If you're using this version, and notice calls in your assembly, option 2 below may provide a
*     way around the issue.
*
*     !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
*
*     There are two ways to work around the problem:
*       1) Override the default error handler to use something else. Do so carefully! This will work
*          well in trivial cases, but can result in errors if you continue after a problem. The result
*          of a calculation after the handler is called is UNDEFINED!!!
*          
*          One suggested override would be to log the problem and exit the application
*
*       2) Be tricky. For example:
*
*          SafeInt<int> result, a(i), b(j);
*          result = a + b;
*
*          Creates a call to operator+ and operator=. But if you can do it like this:
*          SafeInt<int> a(i);
*          a += b;
*          
*          Then it inlines nicely because the result of += is passed by reference, and you will get very 
*          close to the same performance as doing it in C. If you read Scott Meyer's very excellent
*          Effective C++ books, you'll see he recommends doing exactly this.
*
*  2.0 Performance update
*  The 2.0 version of SafeInt uses template specialization to force the compiler to invoke only the
*  operator implementation needed for any given pair of types. This will dramatically improve the perf
*  of debug builds.
*
*  3.0 update - not only have we maintained the specialization, there were some cases that were overly complex,
*  and using some additional cases (e.g. signed __int64 and unsigned __int64) resulted in some simplification.
*  Additionally, there was a lot of work done to better optimize the 64-bit multiplication.
*
*  Binary Operators
*  
*  All of the binary operators have certain assumptions built into the class design. 
*  This is to ensure correctness. Notes on each class of operator follow:
*  
*  Arithmetic Operators (*,/,+,-,%)
*  There are three possible variants:
*  SafeInt< T, E > op SafeInt< T, E >
*  SafeInt< T, E > op U
*  U op SafeInt< T, E >
*  
*  The SafeInt< T, E > op SafeInt< U, E > variant is explicitly not supported, and if you try to do 
*  this the compiler with throw the following error:
*  
*  error C2593: 'operator *' is ambiguous
*  
*  This is because the arithmetic operators are required to return a SafeInt of some type. 
*  The compiler cannot know whether you'd prefer to get a type T or a type U returned. If 
*  you need to do this, you need to extract the value contained within one of the two using 
*  the casting operator. For example:
*  
*  SafeInt< T, E > t, result;
*  SafeInt< U, E > u;
*  
*  result = t * (U)u;
*  
*  Comparison Operators
*  Because each of these operators return type bool, mixing SafeInts of differing types is 
*  allowed.
*  
*  Shift Operators
*  Shift operators always return the type on the left hand side of the operator. Mixed type 
*  operations are allowed because the return type is always known.
*  
*  Boolean Operators
*  Like comparison operators, these overloads always return type bool, and mixed-type SafeInts 
*  are allowed. Additionally, specific overloads exist for type bool on both sides of the 
*  operator.
*  
*  Binary Operators
*  Mixed-type operations are discouraged, however some provision has been made in order to 
*  enable things like:
*  
*  SafeInt<char> c = 2;
*  
*  if(c & 0x02)
*    ...
*  
*  The "0x02" is actually an int, and it needs to work.
*  In the case of binary operations on integers smaller than 32-bit, or of mixed type, corner
*  cases do exist where you could get unexpected results. In any case where SafeInt returns a different 
*  result than the underlying operator, it will call assert(). You should examine your code and cast things 
*  properly so that you are not programming with side effects.
*  
*  Documented issues:
*
*  This header compiles correctly at /W4 using VC++ 8 (Version 14.00.50727.42).
*  As of this writing, I believe it will also work for VC 7.1, but not for VC 7.0 or below.
*  If you need a version that will work with lower level compilers, try version 1.0.7. None 
*  of them work with Visual C++ 6, and gcc didn't work very well, either, though this hasn't 
*  been tried recently.
*
*  It is strongly recommended that any code doing integer manipulation be compiled at /W4 
*  - there are a number of warnings which pertain to integer manipulation enabled that are 
*  not enabled at /W3 (default for VC++)
*
*  Perf note - postfix operators are slightly more costly than prefix operators.
*  Unless you're actually assigning it to something, ++SafeInt is less expensive than SafeInt++
*
*  The comparison operator behavior in this class varies from the ANSI definition, which is 
*  arguably broken. As an example, consider the following:
*  
*  unsigned int l = 0xffffffff;
*  char c = -1;
*  
*  if(c == l)
*    printf("Why is -1 equal to 4 billion???\n");
*  
*  The problem here is that c gets cast to an int, now has a value of 0xffffffff, and then gets 
*  cast again to an unsigned int, losing the true value. This behavior is despite the fact that
*  an __int64 exists, and the following code will yield a different (and intuitively correct)
*  answer:
*  
*  if((__int64)c == (__int64)l))
*    printf("Why is -1 equal to 4 billion???\n");
*  else
*    printf("Why doesn't the compiler upcast to 64-bits when needed?\n");
*  
*  Note that combinations with smaller integers won't display the problem - if you 
*  changed "unsigned int" above to "unsigned short", you'd get the right answer.
*
*  If you prefer to retain the ANSI standard behavior insert 
*  #define ANSI_CONVERSIONS 
*  into your source. Behavior differences occur in the following cases:
*  8, 16, and 32-bit signed int, unsigned 32-bit int
*  any signed int, unsigned 64-bit int
*  Note - the signed int must be negative to show the problem
*  
*  
*  Revision history:
*
*  Oct 12, 2003 - Created
*  Author - David LeBlanc - dleblanc@microsoft.com
*
*  Oct 27, 2003 - fixed numerous items pointed out by michmarc and bdawson
*  Dec 28, 2003 - 1.0
*                 added support for mixed-type operations
*                 thanks to vikramh
*                 also fixed broken __int64 multiplication section
*                 added extended support for mixed-type operations where possible
*  Jan 28, 2004 - 1.0.1
*                 changed WCHAR to wchar_t
*                 fixed a construct in two mixed-type assignment overloads that was 
*                 not compiling on some compilers
*                 Also changed name of private method to comply with standards on 
*                 reserved names
*                 Thanks to Niels Dekker for the input
*  Feb 12, 2004 - 1.0.2
*                 Minor changes to remove dependency on Windows headers
*                 Consistently used __int16, __int32 and __int64 to ensure
*                 portability
*  May 10, 2004 - 1.0.3
*                 Corrected bug in one case of GreaterThan
*  July 22, 2004 - 1.0.4
*                 Tightened logic in addition check (saving 2 instructions)
*                 Pulled error handler out into function to enable user-defined replacement
*                 Made internal type of SafeIntException an enum (as per Niels' suggestion)
*                 Added casts for base integer types (as per Scott Meyers' suggestion)
*                 Updated usage information - see important new perf notes.
*                 Cleaned up several const issues (more thanks to Niels)
*
*  Oct 1, 2004 - 1.0.5
*                 Added support for SEH exceptions instead of C++ exceptions - Win32 only
*                 Made handlers for DIV0 and overflows individually overridable
*                 Commented out the destructor - major perf gains here
*                 Added cast operator for type long, since long != __int32
*                  Corrected a couple of missing const modifiers
*                 Fixed broken >= and <= operators for type U op SafeInt< T, E >
*  Nov 5, 2004 - 1.0.6
*                 Implemented new logic in binary operators to resolve issues with
*                 implicit casts
*                 Fixed casting operator because char != signed char
*                 Defined __int32 as int instead of long
*                 Removed unsafe SafeInt::Value method
*                 Re-implemented casting operator as a result of removing Value method
*  Dec 1, 2004 - 1.0.7
*                 Implemented specialized operators for pointer arithmetic
*                 Created overloads for cases of U op= SafeInt. What you do with U 
*                 after that may be dangerous.
*                 Fixed bug in corner case of MixedSizeModulus
*                 Fixed bug in MixedSizeMultiply and MixedSizeDivision with input of 0
*                 Added throw() decorations
*
*  Apr 12, 2005 - 2.0
*                 Extensive revisions to leverage template specialization.
*  April, 2007    Extensive revisions for version 3.0
*
*  Note about code style - throughout this class, casts will be written using C-style (T),
*  not C++ style static_cast< T >. This is because the class is nearly always dealing with integer
*  types, and in this case static_cast and a C cast are equivalent. Given the large number of casts,
*  the code is a little more readable this way. In the event a cast is needed where static_cast couldn't
*  be substituted, we'll use the new templatized cast to make it explicit what the operation is doing.
*
************************************************************************************************************
* Version 3.0 changes:
* 
* 1) The exception type thrown is now replacable, and you can throw your own exception types. This should help
*    those using well-developed exception classes.
* 2) The 64-bit mutliplication code has had a lot of perf work done, and should be faster than 2.0.
* 3) There is now limited floating point support. You can initialize a SafeInt with a floating point type,
*    and you can cast it out (or assign) to a float as well.
* 4) There is now an Align method. I noticed people use this a lot, and rarely check errors, so now you have one.
* 
* The biggest change is that there is a SafeBoxedInt. People wanted a SafeInt that would not throw exceptions unless it 
* was unboxed and was in an invalid state. For the most part, there are few functional differences. Here's how it should be used:
* 
* SafeBoxedInt< int > si;
* 
* si += x;
* 
* if( !si.IsValid() )
*   Complain();
* 
* int i = si;
* 
* Note that unboxing happens in some unexpected cases. For example, is an invalid SafeBoxedInt > 0? Who knows? It's undefined,
* and it's going to throw an exception. In order to support this, there is some debug checking that tracks a flag to determine if
* the SafeBoxedInt is 'dirty'. A dirty SafeBoxedInt has been changed and might be invalid. Some operations cannot create an invalid
* instance of the class, and don't set the flag. If you check whether the instance is valid, then it unsets the dirty flag, and you
* won't see an assert when you unbox it. The premise here is that if you liked exceptions, you'd be using SafeInt, which has less
* overhead. Pay attention to the throw() decoration on the SafeBoxedInt class methods - those that do not have it represent
* places where you should check to see if it is valid before calling them.
* 
* Please remember that sizeof( SafeBoxedInt<T> ) == 2* sizeof(T), while sizeof( SafeInt<T> ) == sizeof(T).
* 
* Another major difference between SafeInt and SafeBoxedInt is that with SafeInt, the following is allowed:
* 
* int i += SafeInt<short>( x );
* 
* The cast of x to short is checked, the addition is checked, and the result is placed in i. If this were allowed in SafeBoxedInt,
* the class instance could become invalid and be unboxed all in one operation, giving you no chance to call IsValid(), thus violating
* the contract. If you try this, we'll emit a C_ASSERT and it won't compile.
*
* Another major improvement is the addition of external functions - if you just want to check an operation, this can now happen:
* All of the following can be invoked without dealing with creating a class, or managing exceptions. This is especially handy
* for 64-bit porting, since SafeCast compiles away for a 32-bit cast from size_t to unsigned long, but checks it for 64-bit.
*
* inline bool SafeCast( const T From, U& To ) throw()
* inline bool SafeEquals( const T t, const U u ) throw()
* inline bool SafeNotEquals( const T t, const U u ) throw()
* inline bool SafeGreaterThan( const T t, const U u ) throw()
* inline bool SafeGreaterThanEquals( const T t, const U u ) throw()
* inline bool SafeLessThan( const T t, const U u ) throw()
* inline bool SafeLessThanEquals( const T t, const U u ) throw()
* inline bool SafeModulus( const T& t, const U& u, T& result ) throw()
* inline bool SafeMultiply( T t, U u, T& result ) throw()
* inline bool SafeDivide( T t, U u, T& result ) throw()
* inline bool SafeAdd( T t, U u, T& result ) throw()
* inline bool SafeSubtract( T t, U u, T& result ) throw()
* 
* * */

#pragma warning(push)
//this avoids warnings from the unary '-' operator being applied to unsigned numbers
//the overload itself resolves to nothing for the unsigned case
#pragma warning(disable:4146)
// conditional expression is constant - these are used intentionally
#pragma warning(disable:4127)
//cast truncates constant value
#pragma warning(disable:4310)

#if !defined SAFEINT_WARN_64BIT_PORTABILITY
// Internally to SafeInt, these should always be false positives.
// If actually compiled with the 64-bit compiler, it would pull in a different template specialization.
#pragma warning(disable:4242)
#pragma warning(disable:4244)
#pragma warning(disable:4267)
#endif


//use these if the compiler does not support _intXX
#ifdef NEEDS_INT_DEFINED
#define __int8  char
#define __int16 short
#define __int32 int
#define __int64 long long
#endif

/* catch these to handle errors
** Currently implemented code values:
** ERROR_ARITHMETIC_OVERFLOW
** EXCEPTION_INT_DIVIDE_BY_ZERO
*/

enum SafeIntError
{
    SafeIntNoError = 0,
    SafeIntArithmeticOverflow,
    SafeIntDivideByZero
};

/*
* Error handler classes
* Using classes to deal with exceptions is going to allow the most 
* flexibility, and we can mix different error handlers in the same project
* or even the same file. It isn't advisable to do this in the same function
* because a SafeInt< int, MyExceptionHandler > isn't the same thing as
* SafeInt< int, YourExceptionHander >.
* If for some reason you have to translate between the two, cast one of them back to its 
* native type.
*
* To use your own exception class with SafeInt, first create your exception class,
* which may look something like the SafeIntException class below. The second step is to 
* create a template specialization that implements SafeIntOnOverflow and SafeIntOnDivZero.
* For example:
* 
* template <> class SafeIntExceptionHandler < YourExceptionClass >
* {
*     static __declspec(noreturn) void __stdcall SafeIntOnOverflow()
*     {
*         throw YourExceptionClass( EXCEPTION_INT_OVERFLOW );
*     }
* 
*     static __declspec(noreturn) void __stdcall SafeIntOnDivZero()
*     {
*         throw YourExceptionClass( EXCEPTION_INT_DIVIDE_BY_ZERO );
*     }
* };
* 
* typedef SafeIntExceptionHandler < YourExceptionClass > YourSafeIntExceptionHandler
* You'd then declare your SafeInt objects like this:
* SafeInt< int, YourSafeIntExceptionHandler >
* 
* Unfortunately, there is no such thing as partial template specialization in typedef
* statements, so you have three options if you find this cumbersome:
* 
* 1) Create a holder class:
* 
* template < typename T >
* class MySafeInt
* {
*   public:
*   SafeInt< T, MyExceptionClass> si;
* };
* 
* You'd then declare an instance like so:
* MySafeInt< int > i;
* 
* You'd lose handy things like initialization - it would have to be initialized as:
* 
* i.si = 0;
* 
* 2) You could create a typedef for every int type you deal with:
* 
* typedef SafeInt< int, MyExceptionClass > MySafeInt;
* typedef SafeInt< char, MyExceptionClass > MySafeChar;
* 
* and so on. The second approach is probably more usable, and will just drop into code
* better, which is the original intent of the SafeInt class.
* 
* 3) If you're going to consistently use a different class to handle your exceptions,
*    you can override the default typedef like so:
*    
*    #define SafeIntDefaultExceptionHandler YourSafeIntExceptionHandler
*
*    Overall, this is probably the best approach.
* */

class SafeIntException
{
public:
    SafeIntException() { m_code = SafeIntNoError; }
    SafeIntException( SafeIntError code )
    {
        m_code = code;
    }
    SafeIntError m_code;
};

#if defined SAFEINT_ASSERT_ON_EXCEPTION
inline void SafeIntExceptionAssert(){ assert(false); }
#else
inline void SafeIntExceptionAssert(){}
#endif

namespace SafeIntInternal
{
   template < typename E > class SafeIntExceptionHandler;

   template <> class SafeIntExceptionHandler < SafeIntException >
   {
   public:
       static __declspec(noreturn) void __stdcall SafeIntOnOverflow()
       {
           SafeIntExceptionAssert();
           throw SafeIntException( SafeIntArithmeticOverflow );
       }

       static __declspec(noreturn) void __stdcall SafeIntOnDivZero()
       {
           SafeIntExceptionAssert();
           throw SafeIntException( SafeIntDivideByZero );
       }
   };

#if defined _WINDOWS_
   class SafeIntWin32Exception
   {
   public:
       SafeIntWin32Exception( DWORD dwExceptionCode, DWORD dwExceptionFlags = EXCEPTION_NONCONTINUABLE )
       {
           SafeIntExceptionAssert();
           RaiseException( dwExceptionCode, dwExceptionFlags, 0, 0 );
       }
   };

   template <> class SafeIntExceptionHandler < SafeIntWin32Exception >
   {
   public:
       static __declspec(noreturn) void __stdcall SafeIntOnOverflow()
       {
           SafeIntExceptionAssert();
           SafeIntWin32Exception( static_cast<DWORD>( EXCEPTION_INT_OVERFLOW ) );
       }

       static __declspec(noreturn) void __stdcall SafeIntOnDivZero()
       {
           SafeIntExceptionAssert();
           SafeIntWin32Exception( static_cast<DWORD>( EXCEPTION_INT_DIVIDE_BY_ZERO ) );
       }
   };
#endif
} // namespace SafeIntInternal

typedef SafeIntInternal::SafeIntExceptionHandler < SafeIntException > CPlusPlusExceptionHandler;
#if defined _WINDOWS_
typedef SafeIntInternal::SafeIntExceptionHandler < SafeIntInternal::SafeIntWin32Exception > Win32ExceptionHandler;
#endif

// If the user hasn't defined a default exception handler,
// define one now, depending on whether they would like Win32 or C++ exceptions
#if !defined SafeIntDefaultExceptionHandler
   #if defined SAFEINT_RAISE_EXCEPTION
      #if !defined _WINDOWS_
      #error Include windows.h in order to use Win32 exceptions
      #endif

      #define SafeIntDefaultExceptionHandler Win32ExceptionHandler
   #else
      #define SafeIntDefaultExceptionHandler CPlusPlusExceptionHandler
   #endif
#endif

/*
* The following template magic is because we're now not allowed
* to cast a float to an enum. This means that if we happen to assign
* an enum to a SafeInt of some type, it won't compile, unless we prevent
*              isFloat = ( (T)( (float)1.1 ) > (T)1 )
* from compiling in the case of an enum, which is the point of the specialization
* that follows.
*/
template < typename T, bool isEnum > class IsFloat;
template < typename T > class IsFloat < T, true >
{
public:
	enum
	{
		isFloat = false
	};
};

template < typename T > class IsFloat < T, false >
{
public:
	enum
	{
		isFloat = ( (T)( (float)1.1 ) > (T)1 )
	};
};

template < typename T > class IsInt
{
public:
   enum
   {
	  isFloat = IsFloat< T, __is_enum(T)>::isFloat,
      isInt = !isFloat
   };
};

template < typename T > class IntTraits
{
public:
    C_ASSERT( IsInt<T>::isInt );
    enum
    {
#pragma warning(suppress:4804) 
        isSigned  = ( (T)(-1) < 0 ),
        is64Bit   = ( sizeof(T) == 8 ),
        is32Bit   = ( sizeof(T) == 4 ),
        is16Bit   = ( sizeof(T) == 2 ),
        is8Bit    = ( sizeof(T) == 1 ),
        isLT32Bit = ( sizeof(T) < 4 ),
        isLT64Bit = ( sizeof(T) < 8 ),
        isInt8    = ( sizeof(T) == 1 && isSigned ),
        isUint8   = ( sizeof(T) == 1 && !isSigned ),
        isInt16   = ( sizeof(T) == 2 && isSigned ),
        isUint16  = ( sizeof(T) == 2 && !isSigned ),
        isInt32   = ( sizeof(T) == 4 && isSigned ),
        isUint32  = ( sizeof(T) == 4 && !isSigned ),
        isInt64   = ( sizeof(T) == 8 && isSigned ),
        isUint64  = ( sizeof(T) == 8 && !isSigned ),
        bitCount  = ( sizeof(T)*8 ),
#pragma warning(suppress:4804)
        isBool    = ( (T)2 == (T)1 )
    };

    // On version 13.10 enums cannot define __int64 values
    // so we'll use const statics instead!
    const static T maxInt = isSigned ? ((T)~((T)1 << (T)(bitCount-1))) : ((T)(~(T)0));
    const static T minInt = isSigned ? ((T)((T)1 << (T)(bitCount-1)))  : ((T)0);
};

template < typename T, typename U > class SafeIntCompare
{
public:
    enum
    {
        isBothSigned = (IntTraits< T >::isSigned && IntTraits< U >::isSigned),
        isBothUnsigned = (!IntTraits< T >::isSigned && !IntTraits< U >::isSigned),
        isLikeSigned = (IntTraits< T >::isSigned == IntTraits< U >::isSigned),
        isCastOK = ((isLikeSigned && sizeof(T) >= sizeof(U)) ||
                    (IntTraits< T >::isSigned && sizeof(T) > sizeof(U))),
        isBothLT32Bit = (IntTraits< T >::isLT32Bit && IntTraits< U >::isLT32Bit),
        isBothLT64Bit = (IntTraits< T >::isLT64Bit && IntTraits< U >::isLT64Bit)
    };
};

//all of the arithmetic operators can be solved by the same code within
//each of these regions without resorting to compile-time constant conditionals
//most operators collapse the problem into less than the 22 zones, but this is used
//as the first cut
//using this also helps ensure that we handle all of the possible cases correctly

template < typename T, typename U > class IntRegion
{
public:
    enum
    {
        //unsigned-unsigned zone
        IntZone_UintLT32_UintLT32 = SafeIntCompare< T,U >::isBothUnsigned && SafeIntCompare< T,U >::isBothLT32Bit,
        IntZone_Uint32_UintLT64   = SafeIntCompare< T,U >::isBothUnsigned && IntTraits< T >::is32Bit && IntTraits< U >::isLT64Bit,
        IntZone_UintLT32_Uint32   = SafeIntCompare< T,U >::isBothUnsigned && IntTraits< T >::isLT32Bit && IntTraits< U >::is32Bit,
        IntZone_Uint64_Uint       = SafeIntCompare< T,U >::isBothUnsigned && IntTraits< T >::is64Bit,
        IntZone_UintLT64_Uint64    = SafeIntCompare< T,U >::isBothUnsigned && IntTraits< T >::isLT64Bit && IntTraits< U >::is64Bit,
         //unsigned-signed
        IntZone_UintLT32_IntLT32  = !IntTraits< T >::isSigned && IntTraits< U >::isSigned && SafeIntCompare< T,U >::isBothLT32Bit,
        IntZone_Uint32_IntLT64    = IntTraits< T >::isUint32 && IntTraits< U >::isSigned && IntTraits< U >::isLT64Bit,
        IntZone_UintLT32_Int32    = !IntTraits< T >::isSigned && IntTraits< T >::isLT32Bit && IntTraits< U >::isInt32,
        IntZone_Uint64_Int        = IntTraits< T >::isUint64 && IntTraits< U >::isSigned && IntTraits< U >::isLT64Bit,
        IntZone_UintLT64_Int64    = !IntTraits< T >::isSigned && IntTraits< T >::isLT64Bit && IntTraits< U >::isInt64,
        IntZone_Uint64_Int64      = IntTraits< T >::isUint64 && IntTraits< U >::isInt64,
        //signed-signed
        IntZone_IntLT32_IntLT32   = SafeIntCompare< T,U >::isBothSigned && ::SafeIntCompare< T, U >::isBothLT32Bit,
        IntZone_Int32_IntLT64     = SafeIntCompare< T,U >::isBothSigned && IntTraits< T >::is32Bit && IntTraits< U >::isLT64Bit,
        IntZone_IntLT32_Int32     = SafeIntCompare< T,U >::isBothSigned && IntTraits< T >::isLT32Bit && IntTraits< U >::is32Bit,
        IntZone_Int64_Int64       = SafeIntCompare< T,U >::isBothSigned && IntTraits< T >::isInt64 && IntTraits< U >::isInt64,
        IntZone_Int64_Int         = SafeIntCompare< T,U >::isBothSigned && IntTraits< T >::is64Bit && IntTraits< U >::isLT64Bit,
        IntZone_IntLT64_Int64     = SafeIntCompare< T,U >::isBothSigned && IntTraits< T >::isLT64Bit && IntTraits< U >::is64Bit,
        //signed-unsigned
        IntZone_IntLT32_UintLT32  = IntTraits< T >::isSigned && !IntTraits< U >::isSigned && SafeIntCompare< T,U >::isBothLT32Bit,
        IntZone_Int32_UintLT32    = IntTraits< T >::isInt32 && !IntTraits< U >::isSigned && IntTraits< U >::isLT32Bit,
        IntZone_IntLT64_Uint32    = IntTraits< T >::isSigned && IntTraits< T >::isLT64Bit && IntTraits< U >::isUint32,
        IntZone_Int64_UintLT64    = IntTraits< T >::isInt64 && !IntTraits< U >::isSigned && IntTraits< U >::isLT64Bit,
        IntZone_Int_Uint64        = IntTraits< T >::isSigned && IntTraits< U >::isUint64 && IntTraits< T >::isLT64Bit,
        IntZone_Int64_Uint64      = IntTraits< T >::isInt64 && IntTraits< U >::isUint64
    };
};

// useful function to help with getting the magnitude of a negative number
enum AbsMethod
{
    AbsMethodInt,
    AbsMethodInt64,
    AbsMethodNoop
};

template < typename T >
class GetAbsMethod
{
public:
    enum
    {
        method = IntTraits< T >::isLT64Bit && IntTraits< T >::isSigned ? AbsMethodInt :
                 IntTraits< T >::isInt64 ? AbsMethodInt64 : AbsMethodNoop
    };
};

template < typename T, int > class AbsValueHelper;

template < typename T > class AbsValueHelper < T, AbsMethodInt>
{
public:
    static unsigned __int32 Abs( T t ) throw()
    {
        assert( t < 0 );
        return (unsigned __int32)-t;
    }
};

template < typename T > class AbsValueHelper < T, AbsMethodInt64 >
{
public:
    static unsigned __int64 Abs( T t ) throw()
    {
        assert( t < 0 );
        return (unsigned __int64)-t;
    }
};

template < typename T > class AbsValueHelper < T, AbsMethodNoop >
{
public:
    static T Abs( T t ) throw()
    {
        // Why are you calling Abs on an unsigned number ???
        assert( false );
        return t;
    }
};

//core logic to determine casting behavior
enum CastMethod
{
    CastOK = 0,
    CastCheckLTZero,
    CastCheckGTMax,
    CastCheckMinMaxUnsigned,
    CastCheckMinMaxSigned,
    CastToFloat,
    CastFromFloat,
    CastToBool,
    CastFromBool
};

template < typename ToType, typename FromType >
class GetCastMethod
{
public:
    enum
    {
       method =  ( IntTraits< FromType >::isBool && 
                     !IntTraits< ToType >::isBool )                    ? CastFromBool :

                 ( !IntTraits< FromType >::isBool && 
                     IntTraits< ToType >::isBool )                     ? CastToBool :
                 ( IsInt< FromType >::isFloat && 
                     !IsInt< ToType >::isFloat )                       ? CastFromFloat :

                 ( SafeIntCompare< ToType, FromType >::isCastOK ||
                     ( IsInt< ToType >::isFloat && 
                        !IsInt< FromType >::isFloat ) )                ? CastOK :

                 ( ( IntTraits< ToType >::isSigned && 
                        !IntTraits< FromType >::isSigned && 
                        sizeof( FromType ) >= sizeof( ToType ) ) || 
                   ( SafeIntCompare< ToType, FromType >::isBothUnsigned && 
                        sizeof( FromType ) > sizeof( ToType ) ) )      ? CastCheckGTMax :

                 ( !IntTraits< ToType >::isSigned && 
                     IntTraits< FromType >::isSigned && 
                     sizeof( ToType ) >= sizeof( FromType ) )          ? CastCheckLTZero :

                 ( !IntTraits< ToType >::isSigned )                    ? CastCheckMinMaxUnsigned 
                                                                       : CastCheckMinMaxSigned
    };
};

template < typename T, typename U, int > class SafeCastHelper;

template < typename T, typename U > class SafeCastHelper < T, U, CastOK >
{
public:
    static bool Cast( U u, T& t ) throw()
    {
        t = (T)u; 
        return true;
    }

    template < typename E >
    static void CastThrow( U u, T& t )
    {
        t = (T)u; 
    }
};

// special case floats and doubles
// tolerate loss of precision
template < typename T, typename U > class SafeCastHelper < T, U, CastFromFloat >
{
public:
    static bool Cast( U u, T& t ) throw()
    {
        if( u <= (U)IntTraits< T >::maxInt &&
            u >= (U)IntTraits< T >::minInt )
        {
            t = (T)u; 
            return true;
        }
        return false;
    }

    template < typename E >
    static void CastThrow( U u, T& t )
    {
        if( u <= (U)IntTraits< T >::maxInt &&
            u >= (U)IntTraits< T >::minInt )
        {
            t = (T)u; 
            return;
        }
        E::SafeIntOnOverflow();
    }
};

// Match on any method where a bool is cast to type T
template < typename T > class SafeCastHelper < T, bool, CastFromBool >
{
public:
    static bool Cast( bool b, T& t ) throw()
    {
        t = (T)( b ? 1 : 0 );
        return true;
    }

    template < typename E >
    static void CastThrow( bool b, T& t )
    {
        t = (T)( b ? 1 : 0 );
    }
};

template < typename T > class SafeCastHelper < bool, T, CastToBool >
{
public:
    static bool Cast( T t, bool& b ) throw()
    {
       b = !!t;
       return true;
    }

    template < typename E >
    static void CastThrow( bool b, T& t )
    {
       b = !!t;
    }
};

template < typename T, typename U > class SafeCastHelper < T, U, CastCheckLTZero >
{
public:
    static bool Cast( U u, T& t ) throw()
    {
        if( u < 0 )
            return false;

        t = (T)u;
        return true;
    }

    template < typename E >
    static void CastThrow( U u, T& t )
    {
        if( u < 0 )
            E::SafeIntOnOverflow();

        t = (T)u;
    }
};

template < typename T, typename U > class SafeCastHelper < T, U, CastCheckGTMax >
{
public:
    static bool Cast( U u, T& t ) throw()
    {
        if( u > IntTraits< T >::maxInt )
            return false;

        t = (T)u;
        return true;
    }

    template < typename E >
    static void CastThrow( U u, T& t )
    {
        if( u > IntTraits< T >::maxInt )
            E::SafeIntOnOverflow();

        t = (T)u;
    }
};

template < typename T, typename U > class SafeCastHelper < T, U, CastCheckMinMaxUnsigned >
{
public:
    static bool Cast( U u, T& t ) throw()
    {
        // U is signed - T could be either signed or unsigned
        if( u > IntTraits< T >::maxInt || u < 0 )
            return false;

        t = (T)u;
        return true;
    }

    template < typename E >
    static void CastThrow( U u, T& t )
    {
        // U is signed - T could be either signed or unsigned
        if( u > IntTraits< T >::maxInt || u < 0 )
            E::SafeIntOnOverflow();

        t = (T)u;
    }
};

template < typename T, typename U > class SafeCastHelper < T, U, CastCheckMinMaxSigned >
{
public:
    static bool Cast( U u, T& t ) throw()
    {
        // T, U are signed
        if( u > IntTraits< T >::maxInt || u < IntTraits< T >::minInt )
            return false;

        t = (T)u;
        return true;
    }

    template < typename E >
    static void CastThrow( U u, T& t )
    {
        //T, U are signed
        if( u > IntTraits< T >::maxInt || u < IntTraits< T >::minInt )
            E::SafeIntOnOverflow();

        t = (T)u;
    }
};

//core logic to determine whether a comparison is valid, or needs special treatment
enum ComparisonMethod
{
    ComparisonMethod_Ok = 0,
    ComparisonMethod_CastInt,
    ComparisonMethod_CastInt64,
    ComparisonMethod_UnsignedT,
    ComparisonMethod_UnsignedU
};

    // Note - the standard is arguably broken in the case of some integer
    // conversion operations
    // For example, signed char a = -1 = 0xff
    //              unsigned int b = 0xffffffff
    // If you then test if a < b, a value-preserving cast
    // is made, and you're essentially testing
    // (unsigned int)a < b == false
    //
    // I do not think this makes sense - if you perform
    // a cast to an __int64, which can clearly preserve both value and signedness
    // then you get a different and intuitively correct answer
    // IMHO, -1 should be less than 4 billion
    // If you prefer to retain the ANSI standard behavior
    // insert #define ANSI_CONVERSIONS into your source
    // Behavior differences occur in the following cases:
    // 8, 16, and 32-bit signed int, unsigned 32-bit int
    // any signed int, unsigned 64-bit int
    // Note - the signed int must be negative to show the problem

template < typename T, typename U >
class ValidComparison
{
public:
    enum
    {
#ifdef ANSI_CONVERSIONS
        method = ComparisonMethod_Ok
#else
        method = ( ( SafeIntCompare< T, U >::isLikeSigned )                              ? ComparisonMethod_Ok :
                 ( ( IntTraits< T >::isSigned && sizeof(T) < 8 && sizeof(U) < 4 ) ||
                   ( IntTraits< U >::isSigned && sizeof(T) < 4 && sizeof(U) < 8 ) )  ? ComparisonMethod_CastInt :
                 ( ( IntTraits< T >::isSigned && sizeof(U) < 8 ) ||
                   ( IntTraits< U >::isSigned && sizeof(T) < 8 ) )                   ? ComparisonMethod_CastInt64 :
                 ( !IntTraits< T >::isSigned )                                       ? ComparisonMethod_UnsignedT : 
                                                                                       ComparisonMethod_UnsignedU )
#endif
    };
};

template <typename T, typename U, int state> class EqualityTest;

template < typename T, typename U > class EqualityTest< T, U, ComparisonMethod_Ok >
{
public:
    static bool IsEquals( const T t, const U u ) throw() { return ( t == u ); }
};

template < typename T, typename U > class EqualityTest< T, U, ComparisonMethod_CastInt >
{
public:
    static bool IsEquals( const T t, const U u ) throw() { return ( (int)t == (int)u ); }
};

template < typename T, typename U > class EqualityTest< T, U, ComparisonMethod_CastInt64 >
{
public:
    static bool IsEquals( const T t, const U u ) throw() { return ( (__int64)t == (__int64)u ); }
};

template < typename T, typename U > class EqualityTest< T, U, ComparisonMethod_UnsignedT >
{
public:
    static bool IsEquals( const T t, const U u ) throw()
    {
        //one operand is 32 or 64-bit unsigned, and the other is signed and the same size or smaller
        if( u < 0 )
            return false;

        //else safe to cast to type T
        return ( t == (T)u );
    }
};

template < typename T, typename U > class EqualityTest< T, U, ComparisonMethod_UnsignedU>
{
public:
    static bool IsEquals( const T t, const U u ) throw()
    {
        //one operand is 32 or 64-bit unsigned, and the other is signed and the same size or smaller
        if( t < 0 )
            return false;

        //else safe to cast to type U
        return ( (U)t == u );
    }
};

template <typename T, typename U, int state> class GreaterThanTest;

template < typename T, typename U > class GreaterThanTest< T, U, ComparisonMethod_Ok >
{
public:
    static bool GreaterThan( const T t, const U u ) throw() { return ( t > u ); }
};

template < typename T, typename U > class GreaterThanTest< T, U, ComparisonMethod_CastInt >
{
public:
    static bool GreaterThan( const T t, const U u ) throw() { return ( (int)t > (int)u ); }
};

template < typename T, typename U > class GreaterThanTest< T, U, ComparisonMethod_CastInt64 >
{
public:
    static bool GreaterThan( const T t, const U u ) throw() { return ( (__int64)t > (__int64)u ); }
};

template < typename T, typename U > class GreaterThanTest< T, U, ComparisonMethod_UnsignedT >
{
public:
    static bool GreaterThan( const T t, const U u ) throw()
    {
        // one operand is 32 or 64-bit unsigned, and the other is signed and the same size or smaller
        if( u < 0 )
            return true;

        // else safe to cast to type T
        return ( t > (T)u );
    }
};

template < typename T, typename U > class GreaterThanTest< T, U, ComparisonMethod_UnsignedU >
{
public:
    static bool GreaterThan( const T t, const U u ) throw()
    {
        // one operand is 32 or 64-bit unsigned, and the other is signed and the same size or smaller
        if( t < 0 )
            return false;

        // else safe to cast to type U
        return ( (U)t > u );
    }
};

// In all of the following functions, we have two versions
// One for SafeInt, which throws C++ (or possibly SEH) exceptions
// The other for the version which maintains state, and can be checked for a
// status equivalent to floating point NAN.
// There's no real alternative to duplicating logic, but keeping the two versions
// immediately next to one another will help reduce problems

// Modulus is simpler than comparison, but follows much the same logic
// using this set of functions, it can't fail except in a div 0 situation
template <typename T, typename U, int method > class ModulusHelper;

template <typename T, typename U> class ModulusHelper <T, U, ComparisonMethod_Ok>
{
public:
    static SafeIntError Modulus( const T& t, const U& u, T& result ) throw()
    {
        if(u == 0)
            return SafeIntDivideByZero;

        //trap corner case
        if( IntTraits< U >::isSigned )
        {
            if(u == -1)
            {
                result = 0;
                return SafeIntNoError;
            }
        }

        result = (T)(t % u);
        return SafeIntNoError;
    }

    template < typename E >
    static void ModulusThrow( const T& t, const U& u, T& result )
    {
        if(u == 0)
            E::SafeIntOnDivZero();

        //trap corner case
        if( IntTraits< U >::isSigned )
        {
            if(u == -1)
            {
               result = 0;
               return;
            }
        }

        result = (T)(t % u);
    }
};

template <typename T, typename U> class ModulusHelper <T, U, ComparisonMethod_CastInt>
{
public:
    static SafeIntError Modulus( const T& t, const U& u, T& result ) throw()
    {
        if(u == 0)
            return SafeIntDivideByZero;

        //trap corner case
        if( IntTraits< U >::isSigned )
        {
            if(u == -1)
            {
                result = 0;
                return SafeIntNoError;
            }
        }

        result = (T)(t % u);
        return SafeIntNoError;
    }

    template < typename E >
    static void ModulusThrow( const T& t, const U& u, T& result )
    {
        if(u == 0)
            E::SafeIntOnDivZero();

        //trap corner case
        if( IntTraits< U >::isSigned )
        {
            if(u == -1)
            {
               result = 0;
               return;
            }
        }

        result = (T)(t % u);
    }
};

template < typename T, typename U > class ModulusHelper< T, U, ComparisonMethod_CastInt64>
{
public:
    static SafeIntError Modulus( const T& t, const U& u, T& result ) throw()
    {
        if(u == 0)
            return SafeIntDivideByZero;

        if(IntTraits< U >::isSigned && u == -1)
            result = 0;
        else
            result = (T)((__int64)t % (__int64)u);

        return SafeIntNoError;
    }

    template < typename E >
    static void ModulusThrow( const T& t, const U& u, T& result )
    {
        if(u == 0)
            E::SafeIntOnDivZero();

        if(IntTraits< U >::isSigned && u == -1)
            result = 0;
        else
            result = (T)((__int64)t % (__int64)u);
    }
};

// T is unsigned __int64, U is any signed int
template < typename T, typename U > class ModulusHelper< T, U, ComparisonMethod_UnsignedT>
{
public:
    static SafeIntError Modulus( const T& t, const U& u, T& result ) throw()
    {
        if(u == 0)
            return SafeIntDivideByZero;

        // u could be negative - if so, need to convert to positive
        // casts below are always safe due to the way modulus works
        if(u < 0)
            result = (T)(t % AbsValueHelper< U, GetAbsMethod< U >::method >::Abs(u));
        else
            result = (T)(t % u);

        return SafeIntNoError;
    }

    template < typename E >
    static void ModulusThrow( const T& t, const U& u, T& result )
    {
        if(u == 0)
            E::SafeIntOnDivZero();

        // u could be negative - if so, need to convert to positive
        if(u < 0)
            result = (T)(t % AbsValueHelper< U, GetAbsMethod< U >::method >::Abs( u ));
        else
            result = (T)(t % u);
    }
};

// U is unsigned __int64, T any signed int
template < typename T, typename U > class ModulusHelper< T, U, ComparisonMethod_UnsignedU>
{
public:
    static SafeIntError Modulus( const T& t, const U& u, T& result ) throw()
    {
        if(u == 0)
            return SafeIntDivideByZero;

        //t could be negative - if so, need to convert to positive
        if(t < 0)
            result = -(T)( AbsValueHelper< T, GetAbsMethod< T >::method >::Abs( t ) % u );
        else
            result = (T)((T)t % u);

        return SafeIntNoError;
    }

    template < typename E >
    static void ModulusThrow( const T& t, const U& u, T& result )
    {
        if(u == 0)
            E::SafeIntOnDivZero();

        //t could be negative - if so, need to convert to positive
        if(t < 0)
            result = -(T)( AbsValueHelper< T, GetAbsMethod< T >::method >::Abs( t ) % u );
        else
            result = (T)( (T)t % u );
    }
};

//core logic to determine method to check multiplication
enum MultiplicationState
{
    MultiplicationState_CastInt = 0,  // One or both signed, smaller than 32-bit
    MultiplicationState_CastInt64,    // One or both signed, smaller than 64-bit
    MultiplicationState_CastUint,     // Both are unsigned, smaller than 32-bit
    MultiplicationState_CastUint64,   // Both are unsigned, both 32-bit or smaller
    MultiplicationState_Uint64Uint,   // Both are unsigned, lhs 64-bit, rhs 32-bit or smaller
    MultiplicationState_Uint64Uint64, // Both are unsigned int64
    MultiplicationState_Uint64Int,    // lhs is unsigned int64, rhs int32
    MultiplicationState_Uint64Int64,  // lhs is unsigned int64, rhs signed int64
    MultiplicationState_UintUint64,   // Both are unsigned, lhs 32-bit or smaller, rhs 64-bit
    MultiplicationState_UintInt64,    // lhs unsigned 32-bit or less, rhs int64
    MultiplicationState_Int64Uint,    // lhs int64, rhs unsigned int32
    MultiplicationState_Int64Int64,   // lhs int64, rhs int64
    MultiplicationState_Int64Int,     // lhs int64, rhs int32
    MultiplicationState_IntUint64,    // lhs int, rhs unsigned int64
    MultiplicationState_IntInt64,     // lhs int, rhs int64
    MultiplicationState_Int64Uint64,  // lhs int64, rhs uint64
    MultiplicationState_Error
};

template < typename T, typename U >
class MultiplicationMethod
{
public:
    enum
    {
                 // unsigned-unsigned
        method = (IntRegion< T,U >::IntZone_UintLT32_UintLT32  ? MultiplicationState_CastUint :
                 (IntRegion< T,U >::IntZone_Uint32_UintLT64 || 
                  IntRegion< T,U >::IntZone_UintLT32_Uint32)   ? MultiplicationState_CastUint64 :
                  SafeIntCompare< T,U >::isBothUnsigned && 
                  IntTraits< T >::isUint64 && IntTraits< U >::isUint64 ? MultiplicationState_Uint64Uint64 :
                 (IntRegion< T,U >::IntZone_Uint64_Uint)       ? MultiplicationState_Uint64Uint :
                 (IntRegion< T,U >::IntZone_UintLT64_Uint64)   ? MultiplicationState_UintUint64 :
                 // unsigned-signed
                 (IntRegion< T,U >::IntZone_UintLT32_IntLT32)  ? MultiplicationState_CastInt :
                 (IntRegion< T,U >::IntZone_Uint32_IntLT64 ||
                  IntRegion< T,U >::IntZone_UintLT32_Int32)    ? MultiplicationState_CastInt64 :
                 (IntRegion< T,U >::IntZone_Uint64_Int)        ? MultiplicationState_Uint64Int :
                 (IntRegion< T,U >::IntZone_UintLT64_Int64)    ? MultiplicationState_UintInt64 :
                 (IntRegion< T,U >::IntZone_Uint64_Int64)      ? MultiplicationState_Uint64Int64 :
                 // signed-signed
                 (IntRegion< T,U >::IntZone_IntLT32_IntLT32)   ? MultiplicationState_CastInt :
                 (IntRegion< T,U >::IntZone_Int32_IntLT64 ||
                  IntRegion< T,U >::IntZone_IntLT32_Int32)     ? MultiplicationState_CastInt64 :
                 (IntRegion< T,U >::IntZone_Int64_Int64)       ? MultiplicationState_Int64Int64 :
                 (IntRegion< T,U >::IntZone_Int64_Int)         ? MultiplicationState_Int64Int :
                 (IntRegion< T,U >::IntZone_IntLT64_Int64)     ? MultiplicationState_IntInt64 :
                 // signed-unsigned
                 (IntRegion< T,U >::IntZone_IntLT32_UintLT32)  ? MultiplicationState_CastInt :
                 (IntRegion< T,U >::IntZone_Int32_UintLT32 ||
                  IntRegion< T,U >::IntZone_IntLT64_Uint32)    ? MultiplicationState_CastInt64 :
                 (IntRegion< T,U >::IntZone_Int64_UintLT64)    ? MultiplicationState_Int64Uint :
                 (IntRegion< T,U >::IntZone_Int_Uint64)        ? MultiplicationState_IntUint64 :
                 (IntRegion< T,U >::IntZone_Int64_Uint64       ? MultiplicationState_Int64Uint64 :
                  MultiplicationState_Error ) )
    };
};

template <typename T, typename U, int state> class MultiplicationHelper;

template < typename T, typename U > class MultiplicationHelper< T, U, MultiplicationState_CastInt>
{
public:
    //accepts signed, both less than 32-bit
    static bool Multiply( const T& t, const U& u, T& ret ) throw()
    {
        int tmp = t * u;

        if( tmp > IntTraits< T >::maxInt || tmp < IntTraits< T >::minInt )
            return false;
        
        ret = (T)tmp;
        return true;
    }

    template < typename E >
    static void MultiplyThrow( const T& t, const U& u, T& ret )
    {
        int tmp = t * u;

        if( tmp > IntTraits< T >::maxInt || tmp < IntTraits< T >::minInt )
            E::SafeIntOnOverflow();
        
        ret = (T)tmp;
    }
};

template < typename T, typename U > class MultiplicationHelper< T, U, MultiplicationState_CastUint >
{
public:
    //accepts unsigned, both less than 32-bit
    static bool Multiply( const T& t, const U& u, T& ret ) throw()
    {
        unsigned int tmp = t * u;

        if( tmp > IntTraits< T >::maxInt )
            return false;
        
        ret = (T)tmp;
        return true;
    }

    template < typename E >
    static void MultiplyThrow( const T& t, const U& u, T& ret )
    {
        unsigned int tmp = t * u;

        if( tmp > IntTraits< T >::maxInt )
            E::SafeIntOnOverflow();
        
        ret = (T)tmp;
    }
};

template < typename T, typename U > class MultiplicationHelper< T, U, MultiplicationState_CastInt64>
{
public:
    //mixed signed or both signed where at least one argument is 32-bit, and both a 32-bit or less
    static bool Multiply( const T& t, const U& u, T& ret ) throw()
    {
        __int64 tmp = (__int64)t * (__int64)u;

        if(tmp > (__int64)IntTraits< T >::maxInt || tmp < (__int64)IntTraits< T >::minInt)
            return false;
        
        ret = (T)tmp;
        return true;
    }
    
    template < typename E >
    static void MultiplyThrow( const T& t, const U& u, T& ret )
    {
        __int64 tmp = (__int64)t * (__int64)u;

        if(tmp > (__int64)IntTraits< T >::maxInt || tmp < (__int64)IntTraits< T >::minInt)
            E::SafeIntOnOverflow();
        
        ret = (T)tmp;
    }
};

template < typename T, typename U > class MultiplicationHelper< T, U, MultiplicationState_CastUint64>
{
public:
    //both unsigned where at least one argument is 32-bit, and both are 32-bit or less
    static bool Multiply( const T& t, const U& u, T& ret ) throw()
    {
        unsigned __int64 tmp = (unsigned __int64)t * (unsigned __int64)u;

        if(tmp > (unsigned __int64)IntTraits< T >::maxInt)
            return false;
        
        ret = (T)tmp;
        return true;
    }

   template < typename E >
   static void MultiplyThrow( const T& t, const U& u, T& ret )
    {
        unsigned __int64 tmp = (unsigned __int64)t * (unsigned __int64)u;

        if(tmp > (unsigned __int64)IntTraits< T >::maxInt)
            E::SafeIntOnOverflow();
        
        ret = (T)tmp;
    }
};

// T = left arg and return type
// U = right arg
template < typename T, typename U > class LargeIntRegMultiply;

template<> class LargeIntRegMultiply< unsigned __int64, unsigned __int64 >
{
public:
    static bool RegMultiply( const unsigned __int64& a, const unsigned __int64& b, unsigned __int64& ret ) throw()
    {
        unsigned __int32 aHigh, aLow, bHigh, bLow;

        // Consider that a*b can be broken up into:
        // (aHigh * 2^32 + aLow) * (bHigh * 2^32 + bLow)
        // => (aHigh * bHigh * 2^64) + (aLow * bHigh * 2^32) + (aHigh * bLow * 2^32) + (aLow * bLow)
        // Note - same approach applies for 128 bit math on a 64-bit system

        aHigh = (unsigned __int32)(a >> 32);
        aLow  = (unsigned __int32)a;
        bHigh = (unsigned __int32)(b >> 32);
        bLow  = (unsigned __int32)b;

        ret = 0;

        if(aHigh == 0)
        {
            if(bHigh != 0)
            {
                ret = (unsigned __int64)aLow * (unsigned __int64)bHigh;
            }
        }
        else if(bHigh == 0)
        {
            if(aHigh != 0)
            {        
                ret = (unsigned __int64)aHigh * (unsigned __int64)bLow;
            }
        }
        else
        {
            return false;
        }

        if(ret != 0)
        {
            unsigned __int64 tmp;

            if((unsigned __int32)(ret >> 32) != 0)
                return false;

            ret <<= 32;
            tmp = (unsigned __int64)aLow * (unsigned __int64)bLow;
            ret += tmp;

            if(ret < tmp)
                return false;

            return true;
        }

        ret = (unsigned __int64)aLow * (unsigned __int64)bLow;
        return true;
    }

    template < typename E >
    static void RegMultiplyThrow( const unsigned __int64& a, const unsigned __int64& b, unsigned __int64& ret )
    {
        unsigned __int32 aHigh, aLow, bHigh, bLow;

        // Consider that a*b can be broken up into:
        // (aHigh * 2^32 + aLow) * (bHigh * 2^32 + bLow)
        // => (aHigh * bHigh * 2^64) + (aLow * bHigh * 2^32) + (aHigh * bLow * 2^32) + (aLow * bLow)
        // Note - same approach applies for 128 bit math on a 64-bit system

        aHigh = (unsigned __int32)(a >> 32);
        aLow  = (unsigned __int32)a;
        bHigh = (unsigned __int32)(b >> 32);
        bLow  = (unsigned __int32)b;

        ret = 0;

        if(aHigh == 0)
        {
            if(bHigh != 0)
            {
                ret = (unsigned __int64)aLow * (unsigned __int64)bHigh;
            }
        }
        else if(bHigh == 0)
        {
            if(aHigh != 0)
            {        
                ret = (unsigned __int64)aHigh * (unsigned __int64)bLow;
            }
        }
        else
        {
            E::SafeIntOnOverflow();
        }

        if(ret != 0)
        {
            unsigned __int64 tmp;

            if((unsigned __int32)(ret >> 32) != 0)
                E::SafeIntOnOverflow();

            ret <<= 32;
            tmp = (unsigned __int64)aLow * (unsigned __int64)bLow;
            ret += tmp;

            if(ret < tmp)
                E::SafeIntOnOverflow();

            return;
        }

        ret = (unsigned __int64)aLow * (unsigned __int64)bLow;
    }
};

template<> class LargeIntRegMultiply< unsigned __int64, unsigned __int32 >
{
public:
    static bool RegMultiply( const unsigned __int64& a, unsigned __int32 b, unsigned __int64& ret ) throw()
    {
        unsigned __int32 aHigh, aLow;

        // Consider that a*b can be broken up into:
        // (aHigh * 2^32 + aLow) * b
        // => (aHigh * b * 2^32) + (aLow * b)

        aHigh = (unsigned __int32)(a >> 32);
        aLow  = (unsigned __int32)a;

        ret = 0;

        if(aHigh != 0)
        {        
            ret = (unsigned __int64)aHigh * (unsigned __int64)b;

            unsigned __int64 tmp;

            if((unsigned __int32)(ret >> 32) != 0)
                return false;

            ret <<= 32;
            tmp = (unsigned __int64)aLow * (unsigned __int64)b;
            ret += tmp;

            if(ret < tmp)
                return false;

            return true;
        }

        ret = (unsigned __int64)aLow * (unsigned __int64)b;
        return true;
    }

    template < typename E >
    static void RegMultiplyThrow( const unsigned __int64& a, unsigned __int32 b, unsigned __int64& ret )
    {
        unsigned __int32 aHigh, aLow;

        // Consider that a*b can be broken up into:
        // (aHigh * 2^32 + aLow) * b
        // => (aHigh * b * 2^32) + (aLow * b)

        aHigh = (unsigned __int32)(a >> 32);
        aLow  = (unsigned __int32)a;

        ret = 0;

        if(aHigh != 0)
        {        
            ret = (unsigned __int64)aHigh * (unsigned __int64)b;

            unsigned __int64 tmp;

            if((unsigned __int32)(ret >> 32) != 0)
                E::SafeIntOnOverflow();

            ret <<= 32;
            tmp = (unsigned __int64)aLow * (unsigned __int64)b;
            ret += tmp;

            if(ret < tmp)
                E::SafeIntOnOverflow();

            return;
        }

        ret = (unsigned __int64)aLow * (unsigned __int64)b;
        return;
    }
};

template<> class LargeIntRegMultiply< unsigned __int64, signed __int32 >
{
public:
    static bool RegMultiply( const unsigned __int64& a, signed __int32 b, unsigned __int64& ret ) throw()
    {
        if( b < 0 && a != 0 )
            return false;

        return LargeIntRegMultiply< unsigned __int64, unsigned __int32 >::RegMultiply(a, (unsigned __int32)b, ret);
    }

    template < typename E >
    static void RegMultiplyThrow( const unsigned __int64& a, signed __int32 b, unsigned __int64& ret )
    {
        if( b < 0 && a != 0 )
            E::SafeIntOnOverflow();

        LargeIntRegMultiply< unsigned __int64, unsigned __int32 >::RegMultiplyThrow< E >( a, (unsigned __int32)b, ret );
    }
};

template<> class LargeIntRegMultiply< unsigned __int64, signed __int64 >
{
public:
    static bool RegMultiply( const unsigned __int64& a, signed __int64 b, unsigned __int64& ret ) throw()
    {
        if( b < 0 && a != 0 )
            return false;

        return LargeIntRegMultiply< unsigned __int64, unsigned __int64 >::RegMultiply(a, (unsigned __int64)b, ret);
    }

    template < typename E >
    static void RegMultiplyThrow( const unsigned __int64& a, signed __int64 b, unsigned __int64& ret )
    {
        if( b < 0 && a != 0 )
            E::SafeIntOnOverflow();

        LargeIntRegMultiply< unsigned __int64, unsigned __int64 >::RegMultiplyThrow< E >( a, (unsigned __int64)b, ret );
    }
};

template<> class LargeIntRegMultiply< signed __int32, unsigned __int64 >
{
public:
    static bool RegMultiply( signed __int32 a, const unsigned __int64& b, signed __int32& ret ) throw()
    {
        signed __int32 bHigh, bLow;
        bool fIsNegative = false;

        // Consider that a*b can be broken up into:
        // (aHigh * 2^32 + aLow) * (bHigh * 2^32 + bLow)
        // => (aHigh * bHigh * 2^64) + (aLow * bHigh * 2^32) + (aHigh * bLow * 2^32) + (aLow * bLow)

        bHigh = (unsigned __int32)(b >> 32);
        bLow  = (unsigned __int32)b;

        ret = 0;

        if(bHigh != 0 && a != 0)
            return false;

        if( a < 0 )
        {
           a = -a;
           fIsNegative = true;
        }

        unsigned __int64 tmp = (unsigned __int32)a * (unsigned __int64)bLow;


        if( !fIsNegative )
        {
            if( tmp <= (unsigned __int64)IntTraits< signed __int32 >::maxInt )
            {
                ret = (signed __int32)tmp;
                return true;
            }
        }
        else
        {
            if( tmp <= (unsigned __int64)IntTraits< signed __int32 >::maxInt+1 )
            {
                ret = -( (signed __int32)tmp );
                return true;
            }
        }

        return false;
    }

    template < typename E >
    static void RegMultiplyThrow( signed __int32 a, const unsigned __int64& b, signed __int32& ret )
    {
        signed __int32 bHigh, bLow;
        bool fIsNegative = false;

        // Consider that a*b can be broken up into:
        // (aHigh * 2^32 + aLow) * (bHigh * 2^32 + bLow)
        // => (aHigh * bHigh * 2^64) + (aLow * bHigh * 2^32) + (aHigh * bLow * 2^32) + (aLow * bLow)

        bHigh = (signed __int32)(b >> 32);
        bLow  = (signed __int32)b;

        ret = 0;

        if(bHigh != 0 && a != 0)
            E::SafeIntOnOverflow();

        if( a < 0 )
        {
           a = -a;
           fIsNegative = true;
        }

        unsigned __int64 tmp = (unsigned __int32)a * (unsigned __int64)bLow;

        if( !fIsNegative )
        {
            if( tmp <= (unsigned __int64)IntTraits< signed __int32 >::maxInt )
            {
                ret = (signed __int32)tmp;
                return;
            }
        }
        else
        {
            if( tmp <= (unsigned __int64)IntTraits< signed __int32 >::maxInt+1 )
            {
                ret = -( (signed __int32)tmp );
                return;
            }
        }

        E::SafeIntOnOverflow();
    }
};

template<> class LargeIntRegMultiply< unsigned __int32, unsigned __int64 >
{
public:
    static bool RegMultiply( unsigned __int32 a, const unsigned __int64& b, unsigned __int32& ret ) throw()
    {
        // Consider that a*b can be broken up into:
        // (bHigh * 2^32 + bLow) * a
        // => (bHigh * a * 2^32) + (bLow * a)
        // In this case, the result must fit into 32-bits
        // If bHigh != 0 && a != 0, immediate error.
        
        if( (unsigned __int32)(b >> 32) != 0 && a != 0 )
           return false;

        unsigned __int64 tmp = b * (unsigned __int64)a;

        if( (unsigned __int32)(tmp >> 32) != 0 ) // overflow
           return false;

        ret = (unsigned __int32)tmp;
        return true;
    }

    template < typename E >
    static void RegMultiplyThrow( unsigned __int32 a, const unsigned __int64& b, unsigned __int32& ret )
    {
        if( (unsigned __int32)(b >> 32) != 0 && a != 0 )
           E::SafeIntOnOverflow();

        unsigned __int64 tmp = b * (unsigned __int64)a;

        if( (unsigned __int32)(tmp >> 32) != 0 ) // overflow
           E::SafeIntOnOverflow();

        ret = (unsigned __int32)tmp;
    }
};

template<> class LargeIntRegMultiply< unsigned __int32, signed __int64 >
{
public:
    static bool RegMultiply( unsigned __int32 a, const signed __int64& b, unsigned __int32& ret ) throw()
    {
        if( b < 0 && a != 0 )
            return false;
        return LargeIntRegMultiply< unsigned __int32, unsigned __int64 >::RegMultiply( a, (unsigned __int64)b, ret );
    }

    template < typename E >
    static void RegMultiplyThrow( unsigned __int32 a, const signed __int64& b, unsigned __int32& ret )
    {
        if( b < 0 && a != 0 )
            E::SafeIntOnOverflow();

        LargeIntRegMultiply< unsigned __int32, unsigned __int64 >::RegMultiplyThrow< E >( a, (unsigned __int64)b, ret );
    }
};

template<> class LargeIntRegMultiply< signed __int64, signed __int64 >
{
public:
    static bool RegMultiply( const signed __int64& a, const signed __int64& b, signed __int64& ret ) throw()
    {
        bool aNegative = false;
        bool bNegative = false;

        unsigned __int64 tmp;
        __int64 a1 = a;
        __int64 b1 = b;

        if( a1 < 0 )
        {
            aNegative = true;
            a1 = -a1;
        }

        if( b1 < 0 )
        {
            bNegative = true;
            b1 = -b1;
        }

        if( LargeIntRegMultiply< unsigned __int64, unsigned __int64 >::RegMultiply( (unsigned __int64)a1, (unsigned __int64)b1, (unsigned __int64)tmp ) )
        {
            // The unsigned multiplication didn't overflow
            if( aNegative ^ bNegative )
            {
                // Result must be negative
                if( tmp <= (unsigned __int64)IntTraits< signed __int64 >::minInt )
                {
                    ret = -(signed __int64)tmp;
                    return true;
                }
            }
            else
            {
                // Result must be positive
                if( tmp <= (unsigned __int64)IntTraits< signed __int64 >::maxInt )
                {
                    ret = (signed __int64)tmp;
                    return true;
                }
            }
        }

        return false;
    }

    template < typename E >
    static void RegMultiplyThrow( const signed __int64& a, const signed __int64& b, signed __int64& ret )
    {
        bool aNegative = false;
        bool bNegative = false;

        unsigned __int64 tmp;
        __int64 a1 = a;
        __int64 b1 = b;

        if( a1 < 0 )
        {
            aNegative = true;
            a1 = -a1;
        }

        if( b1 < 0 )
        {
            bNegative = true;
            b1 = -b1;
        }
        
        LargeIntRegMultiply< unsigned __int64, unsigned __int64 >::RegMultiplyThrow< E >( (unsigned __int64)a1, (unsigned __int64)b1, (unsigned __int64)tmp );

        // The unsigned multiplication didn't overflow or we'd be in the exception handler
        if( aNegative ^ bNegative )
        {
            // Result must be negative
            if( tmp <= (unsigned __int64)IntTraits< signed __int64 >::minInt )
            {
                ret = -(signed __int64)tmp;
                return;
            }
        }
        else
        {
            // Result must be positive
            if( tmp <= (unsigned __int64)IntTraits< signed __int64 >::maxInt )
            {
                ret = (signed __int64)tmp;
                return;
            }
        }

        E::SafeIntOnOverflow();
    }
};

template<> class LargeIntRegMultiply< signed __int64, unsigned __int32 >
{
public:
    static bool RegMultiply( const signed __int64& a, unsigned __int32 b, signed __int64& ret ) throw()
    {
        bool aNegative = false;
        unsigned __int64 tmp;
        __int64 a1 = a;

        if( a1 < 0 )
        {
            aNegative = true;
            a1 = -a1;
        }

        if( LargeIntRegMultiply< unsigned __int64, unsigned __int32 >::RegMultiply( (unsigned __int64)a1, b, tmp ) )
        {
            // The unsigned multiplication didn't overflow
            if( aNegative )
            {
                // Result must be negative
                if( tmp <= (unsigned __int64)IntTraits< signed __int64 >::minInt )
                {
                    ret = -(signed __int64)tmp;
                    return true;
                }
            }
            else
            {
                // Result must be positive
                if( tmp <= (unsigned __int64)IntTraits< signed __int64 >::maxInt )
                {
                    ret = (signed __int64)tmp;
                    return true;
                }
            }
        }

        return false;
    }

    template < typename E >
    static void RegMultiplyThrow( const signed __int64& a, unsigned __int32 b, signed __int64& ret )
    {
        bool aNegative = false;
        unsigned __int64 tmp;
        __int64 a1 = a;

        if( a1 < 0 )
        {
            aNegative = true;
            a1 = -a1;
        }

        LargeIntRegMultiply< unsigned __int64, unsigned __int32 >::RegMultiplyThrow< E >( (unsigned __int64)a1, b, tmp );

        // The unsigned multiplication didn't overflow
        if( aNegative )
        {
            // Result must be negative
            if( tmp <= (unsigned __int64)IntTraits< signed __int64 >::minInt )
            {
                ret = -(signed __int64)tmp;
                return;
            }
        }
        else
        {
            // Result must be positive
            if( tmp <= (unsigned __int64)IntTraits< signed __int64 >::maxInt )
            {
                ret = (signed __int64)tmp;
                return;
            }
        }

        E::SafeIntOnOverflow();
    }
};

template<> class LargeIntRegMultiply< signed __int64, signed __int32 >
{
public:
    static bool RegMultiply( const signed __int64& a, signed __int32 b, signed __int64& ret ) throw()
    {
        bool aNegative = false;
        bool bNegative = false;

        unsigned __int64 tmp;
        __int64 a1 = a;
        __int64 b1 = b;

        if( a1 < 0 )
        {
            aNegative = true;
            a1 = -a1;
        }

        if( b1 < 0 )
        {
            bNegative = true;
            b1 = -b1;
        }

        if( LargeIntRegMultiply< unsigned __int64, unsigned __int32 >::RegMultiply( (unsigned __int64)a1, (unsigned __int32)b1, (unsigned __int64)tmp ) )
        {
            // The unsigned multiplication didn't overflow
            if( aNegative ^ bNegative )
            {
                // Result must be negative
                if( tmp <= (unsigned __int64)IntTraits< signed __int64 >::minInt )
                {
                    ret = -(signed __int64)tmp;
                    return true;
                }
            }
            else
            {
                // Result must be positive
                if( tmp <= (unsigned __int64)IntTraits< signed __int64 >::maxInt )
                {
                    ret = (signed __int64)tmp;
                    return true;
                }
            }
        }

        return false;
    }

    template < typename E >
    static void RegMultiplyThrow( signed __int64 a, signed __int32 b, signed __int64& ret )
    {
        bool aNegative = false;
        bool bNegative = false;

        unsigned __int64 tmp;

        if( a < 0 )
        {
            aNegative = true;
            a = -a;
        }

        if( b < 0 )
        {
            bNegative = true;
            b = -b;
        }

        LargeIntRegMultiply< unsigned __int64, unsigned __int32 >::RegMultiplyThrow< E >( (unsigned __int64)a, (unsigned __int32)b, (unsigned __int64)tmp );

        // The unsigned multiplication didn't overflow
        if( aNegative ^ bNegative )
        {
            // Result must be negative
            if( tmp <= (unsigned __int64)IntTraits< signed __int64 >::minInt )
            {
                ret = -(signed __int64)tmp;
                return;
            }
        }
        else
        {
            // Result must be positive
            if( tmp <= (unsigned __int64)IntTraits< signed __int64 >::maxInt )
            {
                ret = (signed __int64)tmp;
                return;
            }
        }

        E::SafeIntOnOverflow();
    }
};

template<> class LargeIntRegMultiply< signed __int32, signed __int64 >
{
public:
    static bool RegMultiply( signed __int32 a, const signed __int64& b, signed __int32& ret ) throw()
    {
        bool aNegative = false;
        bool bNegative = false;

        unsigned __int32 tmp;
        __int64 b1 = b;

        if( a < 0 )
        {
            aNegative = true;
            a = -a;
        }

        if( b1 < 0 )
        {
            bNegative = true;
            b1 = -b1;
        }

        if( LargeIntRegMultiply< unsigned __int32, unsigned __int64 >::RegMultiply( (unsigned __int32)a, (unsigned __int64)b1, tmp ) )
        {
            // The unsigned multiplication didn't overflow
            if( aNegative ^ bNegative )
            {
                // Result must be negative
                if( tmp <= (unsigned __int32)IntTraits< signed __int32 >::minInt )
                {
                    ret = -tmp;
                    return true;
                }
            }
            else
            {
                // Result must be positive
                if( tmp <= (unsigned __int32)IntTraits< signed __int32 >::maxInt )
                {
                    ret = (signed __int32)tmp;
                    return true;
                }
            }
        }

        return false;
    }

    template < typename E >
    static void RegMultiplyThrow( signed __int32 a, const signed __int64& b, signed __int32& ret )
    {
        bool aNegative = false;
        bool bNegative = false;

        unsigned __int32 tmp;
        signed __int64 b2 = b;

        if( a < 0 )
        {
            aNegative = true;
            a = -a;
        }

        if( b < 0 )
        {
            bNegative = true;
            b2 = -b2;
        }

        LargeIntRegMultiply< unsigned __int32, unsigned __int64 >::RegMultiplyThrow< E >( (unsigned __int32)a, (unsigned __int64)b2, tmp );

        // The unsigned multiplication didn't overflow
        if( aNegative ^ bNegative )
        {
            // Result must be negative
            if( tmp <= (unsigned __int32)IntTraits< signed __int32 >::minInt )
            {
                ret = -(signed __int32)tmp;
                return;
            }
        }
        else
        {
            // Result must be positive
            if( tmp <= (unsigned __int32)IntTraits< signed __int32 >::maxInt )
            {
                ret = (signed __int32)tmp;
                return;
            }
        }

        E::SafeIntOnOverflow();
    }
};

template<> class LargeIntRegMultiply< signed __int64, unsigned __int64 >
{
public:
    static bool RegMultiply( const signed __int64& a, const unsigned __int64& b, signed __int64& ret ) throw()
    {
        bool aNegative = false;

        unsigned __int64 tmp;
        __int64 a1 = a;

        if( a1 < 0 )
        {
            aNegative = true;
            a1 = -a1;
        }

        if( LargeIntRegMultiply< unsigned __int64, unsigned __int64 >::RegMultiply( (unsigned __int64)a1, (unsigned __int64)b, tmp ) )
        {
            // The unsigned multiplication didn't overflow
            if( aNegative )
            {
                // Result must be negative
                if( tmp <= (unsigned __int64)IntTraits< signed __int64 >::minInt )
                {
                    ret = -((signed __int64)tmp);
                    return true;
                }
            }
            else
            {
                // Result must be positive
                if( tmp <= (unsigned __int64)IntTraits< signed __int64 >::maxInt )
                {
                    ret = (signed __int64)tmp;
                    return true;
                }
            }
        }

        return false;
    }

    template < typename E >
    static void RegMultiplyThrow( const signed __int64& a, const unsigned __int64& b, signed __int64& ret )
    {
        bool aNegative = false;
        unsigned __int64 tmp;
        __int64 a1 = a;

        if( a1 < 0 )
        {
            aNegative = true;
            a1 = -a1;
        }

        if( LargeIntRegMultiply< unsigned __int64, unsigned __int64 >::RegMultiply( (unsigned __int64)a1, (unsigned __int64)b, tmp ) )
        {
            // The unsigned multiplication didn't overflow
            if( aNegative )
            {
                // Result must be negative
                if( tmp <= (unsigned __int64)IntTraits< signed __int64 >::minInt )
                {
                    ret = -((signed __int64)tmp);
                    return;
                }
            }
            else
            {
                // Result must be positive
                if( tmp <= (unsigned __int64)IntTraits< signed __int64 >::maxInt )
                {
                    ret = (signed __int64)tmp;
                    return;
                }
            }
        }

        E::SafeIntOnOverflow();
    }
};

template <> class MultiplicationHelper< unsigned __int64, unsigned __int64, MultiplicationState_Uint64Uint64 >
{
public:
    static bool Multiply( const unsigned __int64& t, const unsigned __int64& u, unsigned __int64& ret ) throw()
    {
        return LargeIntRegMultiply< unsigned __int64, unsigned __int64 >::RegMultiply( t, u, ret );
    }

    template < typename E >
    static void MultiplyThrow(const unsigned __int64& t, const unsigned __int64& u, unsigned __int64& ret)
    {
        LargeIntRegMultiply< unsigned __int64, unsigned __int64 >::RegMultiplyThrow< E >( t, u, ret );
    }
};

template < typename U > class MultiplicationHelper<unsigned __int64, U, MultiplicationState_Uint64Uint >
{
public:
    //U is any unsigned int 32-bit or less
    static bool Multiply( const unsigned __int64& t, const U& u, unsigned __int64& ret ) throw()
    {
        return LargeIntRegMultiply< unsigned __int64, unsigned __int32 >::RegMultiply( t, (unsigned __int32)u, ret );
    }

    template < typename E >
    static void MultiplyThrow( const unsigned __int64& t, const U& u, unsigned __int64& ret )
    {
        LargeIntRegMultiply< unsigned __int64, unsigned __int32 >::RegMultiplyThrow< E >( t, (unsigned __int32)u, ret );
    }
};

// converse of the previous function
template <typename T> class MultiplicationHelper< T, unsigned __int64, MultiplicationState_UintUint64 >
{
public:
    // T is any unsigned int up to 32-bit
    static bool Multiply(const T& t, const unsigned __int64& u, T& ret) throw()
    {
        unsigned __int32 tmp;

        if( LargeIntRegMultiply< unsigned __int32, unsigned __int64 >::RegMultiply( t, u, tmp ) &&
            SafeCastHelper< T, unsigned __int32, GetCastMethod< T, unsigned __int32 >::method >::Cast(tmp, ret) )
        {
            return true;
        }

        return false;
    }

    template < typename E >
    static void MultiplyThrow(const T& t, const unsigned __int64& u, T& ret)
    {
        unsigned __int32 tmp;
        
        LargeIntRegMultiply< unsigned __int32, unsigned __int64 >::RegMultiplyThrow< E >( t, u, tmp );
        SafeCastHelper< T, unsigned __int32, GetCastMethod< T, unsigned __int32 >::method >::CastThrow< E >(tmp, ret);
    }
};

template < typename U > class MultiplicationHelper<unsigned __int64, U, MultiplicationState_Uint64Int >
{
public:
    //U is any signed int, up to 64-bit
    static bool Multiply(const unsigned __int64& t, const U& u, unsigned __int64& ret) throw()
    {
        return LargeIntRegMultiply< unsigned __int64, signed __int32 >::RegMultiply(t, (signed __int32)u, ret);
    }

    template < typename E >
    static void MultiplyThrow(const unsigned __int64& t, const U& u, unsigned __int64& ret)
    {
        LargeIntRegMultiply< unsigned __int64, signed __int32 >::RegMultiplyThrow< E >(t, (signed __int32)u, ret);
    }
};

template < > class MultiplicationHelper<unsigned __int64, __int64, MultiplicationState_Uint64Int64 >
{
public:
    static bool Multiply(const unsigned __int64& t, const __int64& u, unsigned __int64& ret) throw()
    {
        return LargeIntRegMultiply< unsigned __int64, __int64 >::RegMultiply(t, u, ret);
    }

    template < typename E >
    static void MultiplyThrow(const unsigned __int64& t, const __int64& u, unsigned __int64& ret)
    {
        LargeIntRegMultiply< unsigned __int64, __int64 >::RegMultiplyThrow< E >(t, u, ret);
    }
};

template <typename T> class MultiplicationHelper< T, __int64, MultiplicationState_UintInt64 >
{
public:
    //T is unsigned up to 32-bit
    static bool Multiply(const T& t, const __int64& u, T& ret) throw()
    {
        unsigned __int32 tmp;

        if( LargeIntRegMultiply< unsigned __int32, __int64 >::RegMultiply( (unsigned __int32)t, u, tmp ) &&
            SafeCastHelper< T, unsigned __int32, GetCastMethod< T, unsigned __int32 >::method >::Cast(tmp, ret) )
        {
            return true;
        }

        return false;
    }

    template < typename E >
    static void MultiplyThrow(const T& t, const __int64& u, T& ret)
    {
        unsigned __int32 tmp;
        
        LargeIntRegMultiply< unsigned __int32, __int64 >::RegMultiplyThrow< E >( (unsigned __int32)t, u, tmp );
        SafeCastHelper< T, unsigned __int32, GetCastMethod< T, unsigned __int32 >::method >::CastThrow< E >(tmp, ret);
    }
};

template < typename U > class MultiplicationHelper<__int64, U, MultiplicationState_Int64Uint >
{
public:
    //U is unsigned up to 32-bit
    static bool Multiply( const __int64& t, const U& u, __int64& ret ) throw()
    {
        return LargeIntRegMultiply< __int64, unsigned __int32 >::RegMultiply( t, (unsigned __int32)u, ret );
    }

    template < typename E >
    static void MultiplyThrow( const __int64& t, const U& u, __int64& ret )
    {
        LargeIntRegMultiply< __int64, unsigned __int32 >::RegMultiplyThrow< E >(t, (unsigned __int32)u, ret);
    }
};

template <> class MultiplicationHelper<__int64, __int64, MultiplicationState_Int64Int64 >
{
public:
    static bool Multiply( const __int64& t, const __int64& u, __int64& ret ) throw()
    {
        return LargeIntRegMultiply< __int64, __int64 >::RegMultiply( t, u, ret );
    }

    template < typename E >
    static void MultiplyThrow( const __int64& t, const __int64& u, __int64& ret )
    {
        LargeIntRegMultiply< __int64, __int64 >::RegMultiplyThrow< E >(t, u, ret);
    }
};

template < typename U > class MultiplicationHelper<__int64, U, MultiplicationState_Int64Int>
{
public:
    //U is signed up to 32-bit
    static bool Multiply( const __int64& t, U u, __int64& ret ) throw()
    {
        return LargeIntRegMultiply< __int64, __int32 >::RegMultiply( t, (__int32)u, ret );
    }

    template < typename E >
    static void MultiplyThrow( const __int64& t, U u, __int64& ret )
    {
        LargeIntRegMultiply< __int64, __int32 >::RegMultiplyThrow< E >(t, (__int32)u, ret);
    }
};

template <typename T> class MultiplicationHelper< T, unsigned __int64, MultiplicationState_IntUint64 >
{
public:
    //T is signed up to 32-bit
    static bool Multiply(T t, const unsigned __int64& u, T& ret) throw()
    {
        __int32 tmp;

        if( LargeIntRegMultiply< __int32, unsigned __int64 >::RegMultiply( (__int32)t, u, tmp ) &&
            SafeCastHelper< T, __int32, GetCastMethod< T, __int32 >::method >::Cast( tmp, ret ) )
        {
            return true;
        }

        return false;
    }

    template < typename E >
    static void MultiplyThrow(T t, const unsigned __int64& u, T& ret)
    {
        __int32 tmp;
        
        LargeIntRegMultiply< __int32, unsigned __int64 >::RegMultiplyThrow< E >( (__int32)t, u, tmp );
        SafeCastHelper< T, __int32, GetCastMethod< T, __int32 >::method >::CastThrow< E >( tmp, ret );
    }
};

template <> class MultiplicationHelper<__int64, unsigned __int64, MultiplicationState_Int64Uint64>
{
public:
    //U is signed up to 32-bit
    static bool Multiply( const __int64& t, const unsigned __int64& u, __int64& ret ) throw()
    {
        return LargeIntRegMultiply< __int64, unsigned __int64 >::RegMultiply( t, u, ret );
    }

    template < typename E >
    static void MultiplyThrow( const __int64& t, const unsigned __int64& u, __int64& ret )
    {
        LargeIntRegMultiply< __int64, unsigned __int64 >::RegMultiplyThrow< E >( t, u, ret );
    }
};

template <typename T> class MultiplicationHelper< T, __int64, MultiplicationState_IntInt64>
{
public:
    //T is signed, up to 32-bit
    static bool Multiply( T t, const __int64& u, T& ret ) throw()
    {
        __int32 tmp;

        if( LargeIntRegMultiply< __int32, __int64 >::RegMultiply( (__int32)t, u, tmp ) &&
            SafeCastHelper< T, __int32, GetCastMethod< T, __int32 >::method >::Cast( tmp, ret ) )
        {
            return true;
        }

        return false;
    }

    template < typename E >
    static void MultiplyThrow(T t, const __int64& u, T& ret)
    {
        __int32 tmp;
        
        LargeIntRegMultiply< __int32, __int64 >::RegMultiplyThrow< E >( (__int32)t, u, tmp );
        SafeCastHelper< T, __int32, GetCastMethod< T, __int32 >::method >::CastThrow< E >( tmp, ret );
    }
};

enum DivisionState
{
    DivisionState_OK,
    DivisionState_UnsignedSigned,
    DivisionState_SignedUnsigned32,
    DivisionState_SignedUnsigned64,
    DivisionState_SignedUnsigned,
    DivisionState_SignedSigned
};

template < typename T, typename U > class DivisionMethod
{
public:
    enum
    {
        method = (SafeIntCompare< T, U >::isBothUnsigned                     ? DivisionState_OK :
                 (!IntTraits< T >::isSigned && IntTraits< U >::isSigned) ? DivisionState_UnsignedSigned :
                 (IntTraits< T >::isSigned && 
                    IntTraits< U >::isUint32 && 
                    IntTraits< T >::isLT64Bit)                           ? DivisionState_SignedUnsigned32 :
                 (IntTraits< T >::isSigned && IntTraits< U >::isUint64)  ? DivisionState_SignedUnsigned64 :
                 (IntTraits< T >::isSigned && !IntTraits< U >::isSigned) ? DivisionState_SignedUnsigned :
                                                                           DivisionState_SignedSigned)
    };
};

template < typename T, typename U, int state > class DivisionHelper;

template < typename T, typename U > class DivisionHelper< T, U, DivisionState_OK >
{
public:
    static SafeIntError Divide( const T& t, const U& u, T& result ) throw()
    {
        if( t == 0 )
        {
           result = 0;
           return SafeIntNoError;
        }

        if( u == 0 )
            return SafeIntDivideByZero;

        result = (T)( t/u );
        return SafeIntNoError;
    }

    template < typename E >
    static void DivideThrow( const T& t, const U& u, T& result )
    {
        if( t == 0 )
        {
           result = 0;
           return;
        }

        if( u == 0 )
            E::SafeIntOnDivZero();

        result = (T)( t/u );
    }
};

template < typename T, typename U > class DivisionHelper< T, U, DivisionState_UnsignedSigned>
{
public:
    static SafeIntError Divide( const T& t, const U& u, T& result ) throw()
    {
        if( t == 0 )
        {
           result = 0;
           return SafeIntNoError;
        }

        if( u > 0 )
        {
            result = (T)( t/u );
            return SafeIntNoError;
        }

        if( u == 0 )
            return SafeIntDivideByZero;

        // it is always an error to try and divide an unsigned number by a negative signed number
        // unless u is bigger than t
        if( AbsValueHelper< U, GetAbsMethod< U >::method >::Abs( u ) > t )
        {
            result = 0;
            return SafeIntNoError;
        }

        return SafeIntArithmeticOverflow;
    }

    template < typename E >
    static void DivideThrow( const T& t, const U& u, T& result )
    {
        if( t == 0 )
        {
           result = 0;
           return;
        }

        if( u > 0 )
        {
            result = (T)( t/u );
            return;
        }

        if( u == 0 )
            E::SafeIntOnDivZero();

        // it is always an error to try and divide an unsigned number by a negative signed number
        // unless u is bigger than t
        if( AbsValueHelper< U, GetAbsMethod< U >::method >::Abs( u ) > t )
        {
            result = 0;
            return;
        }

        E::SafeIntOnOverflow();
    }
};

template < typename T, typename U > class DivisionHelper< T, U, DivisionState_SignedUnsigned32 >
{
public:
    static SafeIntError Divide( const T& t, const U& u, T& result ) throw()
    {
        if( t == 0 )
        {
           result = 0;
           return SafeIntNoError;
        }

        if( u == 0 )
            return SafeIntDivideByZero;

        // Test for t > 0 
        // If t < 0, must explicitly upcast, or implicit upcast to ulong will cause errors
        // As it turns out, 32-bit division is about twice as fast, which justifies the extra conditional

        if( t > 0 )
            result = (T)( t/u );
        else
            result = (T)( (__int64)t/(__int64)u );

        return SafeIntNoError;
    }

    template < typename E >
    static void DivideThrow( const T& t, const U& u, T& result )
    {
        if( t == 0 )
        {
           result = 0;
           return;
        }

        if( u == 0 )
        {
            E::SafeIntOnDivZero();
        }

        // Test for t > 0 
        // If t < 0, must explicitly upcast, or implicit upcast to ulong will cause errors
        // As it turns out, 32-bit division is about twice as fast, which justifies the extra conditional

        if( t > 0 )
            result = (T)( t/u );
        else
            result = (T)( (__int64)t/(__int64)u );
    }
};

template < typename T > class DivisionHelper< T, unsigned __int64, DivisionState_SignedUnsigned64 >
{
public:
    static SafeIntError Divide( const T& t, const unsigned __int64& u, T& result ) throw()
    {
        if( t == 0 )
        {
           result = 0;
           return SafeIntNoError;
        }

        if( u == 0 )
        {
            return SafeIntDivideByZero;
        }

        if( u <= (unsigned __int64)IntTraits< T >::maxInt )
        {
            // Else u can safely be cast to T
            if( sizeof( T ) < sizeof( __int64 ) )
                result = (T)( (int)t/(int)u );
            else
                result = (T)((__int64)t/(__int64)u);
        }
        else // Corner case
        if( t == IntTraits< T >::minInt && u == (unsigned __int64)IntTraits< T >::minInt )
        {
            // Min int divided by it's own magnitude is -1
            result = -1;
        }
        else
        {
            result = 0;
        }
        return SafeIntNoError;
    }

    template < typename E >
    static void DivideThrow( const T& t, const unsigned __int64& u, T& result )
    {
        if( t == 0 )
        {
           result = 0;
           return;
        }

        if( u == 0 )
        {
            E::SafeIntOnDivZero();
        }

        if( u <= (unsigned __int64)IntTraits< T >::maxInt )
        {
            // Else u can safely be cast to T
            if( sizeof( T ) < sizeof( __int64 ) )
                result = (T)( (int)t/(int)u );
            else
                result = (T)((__int64)t/(__int64)u);
        }
        else // Corner case
        if( t == IntTraits< T >::minInt && u == (unsigned __int64)IntTraits< T >::minInt )
        {
            // Min int divided by it's own magnitude is -1
            result = -1;
        }
        else
        {
            result = 0;
        }
    }
};

template < typename T, typename U > class DivisionHelper< T, U, DivisionState_SignedUnsigned>
{
public:
    // T is any signed, U is unsigned and smaller than 32-bit
    // In this case, standard operator casting is correct
    static SafeIntError Divide( const T& t, const U& u, T& result ) throw()
    {
        if( t == 0 )
        {
           result = 0;
           return SafeIntNoError;
        }

        if( u == 0 )
        {
            return SafeIntDivideByZero;
        }

        result = (T)( t/u );
        return SafeIntNoError;
    }

    template < typename E >
    static void DivideThrow( const T& t, const U& u, T& result )
    {
        if( t == 0 )
        {
           result = 0;
           return;
        }

        if( u == 0 )
        {
            E::SafeIntOnDivZero();
        }

        result = (T)( t/u );
    }
};

template < typename T, typename U > class DivisionHelper< T, U, DivisionState_SignedSigned>
{
public:
    static SafeIntError Divide( const T& t, const U& u, T& result ) throw()
    {
        if( t == 0 )
        {
           result = 0;
           return SafeIntNoError;
        }

        if( u == 0 )
        {
            return SafeIntDivideByZero;
        }

        // Must test for corner case
        if( t == IntTraits< T >::minInt && u == -1 )
            return SafeIntArithmeticOverflow;

        result = (T)( t/u );
        return SafeIntNoError;
    }

    template < typename E >
    static void DivideThrow( const T& t, const U& u, T& result )
    {
        if( t == 0 )
        {
           result = 0;
           return;
        }

        if(u == 0)
        {
            E::SafeIntOnDivZero();
        }

        // Must test for corner case
        if( t == IntTraits< T >::minInt && u == -1 )
            E::SafeIntOnOverflow();

        result = (T)( t/u );
    }
};

enum AdditionState
{
    AdditionState_CastIntCheckMax,
    AdditionState_CastUintCheckOverflow,
    AdditionState_CastUintCheckOverflowMax,
    AdditionState_CastUint64CheckOverflow,
    AdditionState_CastUint64CheckOverflowMax,
    AdditionState_CastIntCheckMinMax,
    AdditionState_CastInt64CheckMinMax,
    AdditionState_CastInt64CheckMax,
    AdditionState_CastUint64CheckMinMax,
    AdditionState_CastUint64CheckMinMax2,
    AdditionState_CastInt64CheckOverflow,
    AdditionState_CastInt64CheckOverflowMinMax,
    AdditionState_CastInt64CheckOverflowMax,
    AdditionState_ManualCheckInt64Uint64,
    AdditionState_ManualCheck,
    AdditionState_Error
};

template< typename T, typename U >
class AdditionMethod
{
public:
    enum
    {
                 //unsigned-unsigned
        method = (IntRegion< T,U >::IntZone_UintLT32_UintLT32  ? AdditionState_CastIntCheckMax :
                 (IntRegion< T,U >::IntZone_Uint32_UintLT64)   ? AdditionState_CastUintCheckOverflow :
                 (IntRegion< T,U >::IntZone_UintLT32_Uint32)   ? AdditionState_CastUintCheckOverflowMax :
                 (IntRegion< T,U >::IntZone_Uint64_Uint)       ? AdditionState_CastUint64CheckOverflow :
                 (IntRegion< T,U >::IntZone_UintLT64_Uint64)   ? AdditionState_CastUint64CheckOverflowMax :
                 //unsigned-signed
                 (IntRegion< T,U >::IntZone_UintLT32_IntLT32)  ? AdditionState_CastIntCheckMinMax :
                 (IntRegion< T,U >::IntZone_Uint32_IntLT64 ||
                  IntRegion< T,U >::IntZone_UintLT32_Int32)    ? AdditionState_CastInt64CheckMinMax :
                 (IntRegion< T,U >::IntZone_Uint64_Int ||
                  IntRegion< T,U >::IntZone_Uint64_Int64)      ? AdditionState_CastUint64CheckMinMax :
                 (IntRegion< T,U >::IntZone_UintLT64_Int64)    ? AdditionState_CastUint64CheckMinMax2 :
                 //signed-signed
                 (IntRegion< T,U >::IntZone_IntLT32_IntLT32)   ? AdditionState_CastIntCheckMinMax :
                 (IntRegion< T,U >::IntZone_Int32_IntLT64 ||
                  IntRegion< T,U >::IntZone_IntLT32_Int32)     ? AdditionState_CastInt64CheckMinMax :
                 (IntRegion< T,U >::IntZone_Int64_Int ||
                  IntRegion< T,U >::IntZone_Int64_Int64)       ? AdditionState_CastInt64CheckOverflow :
                 (IntRegion< T,U >::IntZone_IntLT64_Int64)     ? AdditionState_CastInt64CheckOverflowMinMax :
                 //signed-unsigned
                 (IntRegion< T,U >::IntZone_IntLT32_UintLT32)  ? AdditionState_CastIntCheckMax :
                 (IntRegion< T,U >::IntZone_Int32_UintLT32 ||
                  IntRegion< T,U >::IntZone_IntLT64_Uint32)    ? AdditionState_CastInt64CheckMax :
                 (IntRegion< T,U >::IntZone_Int64_UintLT64)    ? AdditionState_CastInt64CheckOverflowMax :
                 (IntRegion< T,U >::IntZone_Int64_Uint64)      ? AdditionState_ManualCheckInt64Uint64 :
                 (IntRegion< T,U >::IntZone_Int_Uint64)        ? AdditionState_ManualCheck :
                  AdditionState_Error)
    };
};

template < typename T, typename U, int method > class AdditionHelper;

template < typename T, typename U > class AdditionHelper < T, U, AdditionState_CastIntCheckMax >
{
public:
    static bool Addition( const T& lhs, const U& rhs, T& result ) throw()
    {
        //16-bit or less unsigned addition
        __int32 tmp = lhs + rhs;

        if( tmp <= (__int32)IntTraits< T >::maxInt )
        {
            result = (T)tmp;
            return true;
        }

        return false;
    }

    template < typename E >
    static void AdditionThrow( const T& lhs, const U& rhs, T& result )
    {
        //16-bit or less unsigned addition
        __int32 tmp = lhs + rhs;

        if( tmp <= (__int32)IntTraits< T >::maxInt )
        {
            result = (T)tmp;
            return;
        }

        E::SafeIntOnOverflow();
    }
};

template < typename T, typename U > class AdditionHelper < T, U, AdditionState_CastUintCheckOverflow >
{
public:
    static bool Addition( const T& lhs, const U& rhs, T& result ) throw()
    {
        // 32-bit or less - both are unsigned
        unsigned __int32 tmp = (unsigned __int32)lhs + (unsigned __int32)rhs;

        //we added didn't get smaller
        if( tmp >= lhs )
        {
            result = (T)tmp;
            return true;
        }
        return false;        
    }

    template < typename E >
    static void AdditionThrow( const T& lhs, const U& rhs, T& result )
    {
        // 32-bit or less - both are unsigned
        unsigned __int32 tmp = (unsigned __int32)lhs + (unsigned __int32)rhs;

        //we added didn't get smaller
        if( tmp >= lhs )
        {
            result = (T)tmp;
            return;
        }
        E::SafeIntOnOverflow();
    }
};

template < typename T, typename U > class AdditionHelper < T, U, AdditionState_CastUintCheckOverflowMax>
{
public:
    static bool Addition( const T& lhs, const U& rhs, T& result ) throw()
    {
        // 32-bit or less - both are unsigned
        unsigned __int32 tmp = (unsigned __int32)lhs + (unsigned __int32)rhs;

        // We added and it didn't get smaller or exceed maxInt
        if( tmp >= lhs && tmp <= IntTraits< T >::maxInt )
        {
            result = (T)tmp;
            return true;
        }
        return false;
    }

    template < typename E >
    static void AdditionThrow( const T& lhs, const U& rhs, T& result )
    {
        //32-bit or less - both are unsigned
        unsigned __int32 tmp = (unsigned __int32)lhs + (unsigned __int32)rhs;

        // We added and it didn't get smaller or exceed maxInt
        if( tmp >= lhs && tmp <= IntTraits< T >::maxInt )
        {
            result = (T)tmp;
            return;
        }
        E::SafeIntOnOverflow();
    }
};

template < typename T, typename U > class AdditionHelper < T, U, AdditionState_CastUint64CheckOverflow>
{
public:
    static bool Addition( const T& lhs, const U& rhs, T& result ) throw()
    {
        // lhs unsigned __int64, rhs unsigned
        unsigned __int64 tmp = (unsigned __int64)lhs + (unsigned __int64)rhs;

        // We added and it didn't get smaller
        if(tmp >= lhs)
        {
            result = (T)tmp;
            return true;
        }
        
        return false;
    }

    template < typename E >
    static void AdditionThrow( const T& lhs, const U& rhs, T& result )
    {
        // lhs unsigned __int64, rhs unsigned
        unsigned __int64 tmp = (unsigned __int64)lhs + (unsigned __int64)rhs;

        // We added and it didn't get smaller
        if(tmp >= lhs)
        {
            result = (T)tmp;
            return;
        }
        
        E::SafeIntOnOverflow();
    }
};

template < typename T, typename U > class AdditionHelper < T, U, AdditionState_CastUint64CheckOverflowMax >
{
public:
    static bool Addition( const T& lhs, const U& rhs, T& result ) throw()
    {
        //lhs unsigned __int64, rhs unsigned
        unsigned __int64 tmp = (unsigned __int64)lhs + (unsigned __int64)rhs;

        // We added and it didn't get smaller
        if( tmp >= lhs && tmp <= IntTraits< T >::maxInt )
        {
            result = (T)tmp;
            return true;
        }

        return false;
    }

    template < typename E >
    static void AdditionThrow( const T& lhs, const U& rhs, T& result )
    {
        //lhs unsigned __int64, rhs unsigned
        unsigned __int64 tmp = (unsigned __int64)lhs + (unsigned __int64)rhs;

        // We added and it didn't get smaller
        if( tmp >= lhs && tmp <= IntTraits< T >::maxInt )
        {
            result = (T)tmp;
            return;
        }

        E::SafeIntOnOverflow();
    }
};

template < typename T, typename U > class AdditionHelper < T, U, AdditionState_CastIntCheckMinMax >
{
public:
    static bool Addition( const T& lhs, const U& rhs, T& result ) throw()
    {
        // 16-bit or less - one or both are signed
        __int32 tmp = lhs + rhs;

        if( tmp <= (__int32)IntTraits< T >::maxInt && tmp >= (__int32)IntTraits< T >::minInt )
        {
            result = (T)tmp;
            return true;
        }

        return false;
    }

    template < typename E >
    static void AdditionThrow( const T& lhs, const U& rhs, T& result )
    {
        // 16-bit or less - one or both are signed
        __int32 tmp = lhs + rhs;

        if( tmp <= (__int32)IntTraits< T >::maxInt && tmp >= (__int32)IntTraits< T >::minInt )
        {
            result = (T)tmp;
            return;
        }

        E::SafeIntOnOverflow();
    }
};

template < typename T, typename U > class AdditionHelper < T, U, AdditionState_CastInt64CheckMinMax >
{
public:
    static bool Addition( const T& lhs, const U& rhs, T& result ) throw()
    {
        // 32-bit or less - one or both are signed
        __int64 tmp = (__int64)lhs + (__int64)rhs;

        if( tmp <= (__int64)IntTraits< T >::maxInt && tmp >= (__int64)IntTraits< T >::minInt )
        {
            result = (T)tmp;
            return true;
        }
        
        return false;
    }

    template < typename E >
    static void AdditionThrow( const T& lhs, const U& rhs, T& result )
    {
        // 32-bit or less - one or both are signed
        __int64 tmp = (__int64)lhs + (__int64)rhs;

        if( tmp <= (__int64)IntTraits< T >::maxInt && tmp >= (__int64)IntTraits< T >::minInt )
        {
            result = (T)tmp;
            return;
        }
        
        E::SafeIntOnOverflow();
    }
};

template < typename T, typename U > class AdditionHelper < T, U, AdditionState_CastInt64CheckMax >
{
public:
    static bool Addition( const T& lhs, const U& rhs, T& result ) throw()
    {
        // 32-bit or less - lhs signed, rhs unsigned
        __int64 tmp = (__int64)lhs + (__int64)rhs;

        if( tmp <= IntTraits< T >::maxInt )
        {
            result = (T)tmp;
            return true;
        }

        return false;
    }

    template < typename E >
    static void AdditionThrow( const T& lhs, const U& rhs, T& result )
    {
        // 32-bit or less - lhs signed, rhs unsigned
        __int64 tmp = (__int64)lhs + (__int64)rhs;

        if( tmp <= IntTraits< T >::maxInt )
        {
            result = (T)tmp;
            return;
        }

        E::SafeIntOnOverflow();
    }
};

template < typename T, typename U > class AdditionHelper < T, U, AdditionState_CastUint64CheckMinMax >
{
public:
    static bool Addition( const T& lhs, const U& rhs, T& result ) throw()
    {
        // lhs is unsigned __int64, rhs signed
        unsigned __int64 tmp;

        if( rhs < 0 )
        {
            // So we're effectively subtracting
            tmp = AbsValueHelper< U, GetAbsMethod< U >::method >::Abs( rhs );

            if( tmp <= lhs )
            {
                result = lhs - tmp;
                return true;
            }
        }
        else
        {
            // now we know that rhs can be safely cast into an unsigned __int64
            tmp = (unsigned __int64)lhs + (unsigned __int64)rhs;

            // We added and it did not become smaller
            if( tmp >= lhs )
            {
                result = (T)tmp;
                return true;
            }
        }

        return false;
    }

    template < typename E >
    static void AdditionThrow( const T& lhs, const U& rhs, T& result )
    {
        // lhs is unsigned __int64, rhs signed
        unsigned __int64 tmp;

        if( rhs < 0 )
        {
            // So we're effectively subtracting
            tmp = AbsValueHelper< U, GetAbsMethod< U >::method >::Abs( rhs );

            if( tmp <= lhs )
            {
                result = lhs - tmp;
                return;
            }
        }
        else
        {
            // now we know that rhs can be safely cast into an unsigned __int64
            tmp = (unsigned __int64)lhs + (unsigned __int64)rhs;

            // We added and it did not become smaller
            if( tmp >= lhs )
            {
                result = (T)tmp;
                return;
            }
        }

        E::SafeIntOnOverflow();
    }
};

template < typename T, typename U > class AdditionHelper < T, U, AdditionState_CastUint64CheckMinMax2>
{
public:
    static bool Addition( const T& lhs, const U& rhs, T& result ) throw()
    {
        // lhs is unsigned and < 64-bit, rhs signed __int64
        if( rhs < 0 )
        {
            if( lhs >= (unsigned __int64)( -rhs ) )//negation is safe, since rhs is 64-bit
            {
                result = (T)( lhs + rhs );
                return true;
            }
        }
        else
        {
            // now we know that rhs can be safely cast into an unsigned __int64
            unsigned __int64 tmp = (unsigned __int64)lhs + (unsigned __int64)rhs;

            // special case - rhs cannot be larger than 0x7fffffffffffffff, lhs cannot be larger than 0xffffffff
            // it is not possible for the operation above to overflow, so just check max
            if( tmp <= IntTraits< T >::maxInt )
            {
                result = (T)tmp;
                return true;
            }
        }
        return false;
    }

    template < typename E >
    static void AdditionThrow( const T& lhs, const U& rhs, T& result )
    {
        // lhs is unsigned and < 64-bit, rhs signed __int64
        if( rhs < 0 )
        {
            if( lhs >= (unsigned __int64)( -rhs ) )//negation is safe, since rhs is 64-bit
            {
                result = (T)( lhs + rhs );
                return;
            }
        }
        else
        {
            // now we know that rhs can be safely cast into an unsigned __int64
            unsigned __int64 tmp = (unsigned __int64)lhs + (unsigned __int64)rhs;

            // special case - rhs cannot be larger than 0x7fffffffffffffff, lhs cannot be larger than 0xffffffff
            // it is not possible for the operation above to overflow, so just check max
            if( tmp <= IntTraits< T >::maxInt )
            {
                result = (T)tmp;
                return;
            }
        }
        E::SafeIntOnOverflow();
    }
};

template < typename T, typename U > class AdditionHelper < T, U, AdditionState_CastInt64CheckOverflow>
{
public:
    static bool Addition( const T& lhs, const U& rhs, T& result ) throw()
    {
        // lhs is signed __int64, rhs signed
        __int64 tmp = (__int64)lhs + (__int64)rhs;

        if( lhs >= 0 )
        {
            // mixed sign cannot overflow
            if( rhs >= 0 && tmp < lhs )
                return false;
        }
        else
        {
            // lhs negative
            if( rhs < 0 && tmp > lhs )
                return false;
        }

        result = (T)tmp;
        return true;
    }
    
    template < typename E >
    static void AdditionThrow( const T& lhs, const U& rhs, T& result )
    {
        // lhs is signed __int64, rhs signed
        __int64 tmp = (__int64)lhs + (__int64)rhs;

        if( lhs >= 0 )
        {
            // mixed sign cannot overflow
            if( rhs >= 0 && tmp < lhs )
                E::SafeIntOnOverflow();
        }
        else
        {
            // lhs negative
            if( rhs < 0 && tmp > lhs )
                E::SafeIntOnOverflow();
        }

        result = (T)tmp;
    }
};

template < typename T, typename U > class AdditionHelper < T, U, AdditionState_CastInt64CheckOverflowMinMax>
{
public:
    static bool Addition( const T& lhs, const U& rhs, T& result ) throw()
    {
        //rhs is signed __int64, lhs signed
        __int64 tmp;
        
        if( AdditionHelper< __int64, __int64, AdditionState_CastInt64CheckOverflow >::Addition( (__int64)lhs, (__int64)rhs, tmp ) &&
            tmp <= IntTraits< T >::maxInt &&
            tmp >= IntTraits< T >::minInt )
        {
            result = (T)tmp;
            return true;
        }

        return false;
    }

    template < typename E >
    static void AdditionThrow( const T& lhs, const U& rhs, T& result )
    {
        //rhs is signed __int64, lhs signed
        __int64 tmp;
        
        AdditionHelper< __int64, __int64, AdditionState_CastInt64CheckOverflow >::AdditionThrow< E >( (__int64)lhs, (__int64)rhs, tmp );
     
        if( tmp <= IntTraits< T >::maxInt &&
            tmp >= IntTraits< T >::minInt )
        {
            result = (T)tmp;
            return;
        }

        E::SafeIntOnOverflow();
    }
};

template < typename T, typename U > class AdditionHelper < T, U, AdditionState_CastInt64CheckOverflowMax>
{
public:
    static bool Addition( const T& lhs, const U& rhs, T& result ) throw()
    {
        //lhs is signed __int64, rhs unsigned < 64-bit
        __int64 tmp = lhs + (__int64)rhs;

        if( tmp >= lhs )
        {
            result = (T)tmp;
            return true;
        }

        return false;
    }

    template < typename E >
    static void AdditionThrow( const T& lhs, const U& rhs, T& result )
    {
        //lhs is signed __int64, rhs unsigned < 64-bit
        __int64 tmp = lhs + (__int64)rhs;

        if( tmp >= lhs )
        {
            result = (T)tmp;
            return;
        }

        E::SafeIntOnOverflow();
    }
};

template < > class AdditionHelper < __int64, unsigned __int64, AdditionState_ManualCheckInt64Uint64 >
{
public:
    static bool Addition( const __int64& lhs, const unsigned __int64& rhs, _int64& result ) throw()
    {
        // rhs is unsigned __int64, lhs __int64
        __int64 tmp = lhs + (__int64)rhs;
        
        if( tmp >= lhs )
        {
           result = tmp;
           return true;
        }

        return false;
    }

    template < typename E >
    static void AdditionThrow( const __int64& lhs, const unsigned __int64& rhs, __int64& result )
    {
        // rhs is unsigned __int64, lhs __int64
        __int64 tmp = lhs + (__int64)rhs;
        
        if( tmp >= lhs )
        {
           result = tmp;
           return;
        }

        E::SafeIntOnOverflow();
    }
};

template < typename T, typename U > class AdditionHelper < T, U, AdditionState_ManualCheck>
{
public:
    static bool Addition( const T& lhs, const U& rhs, T& result ) throw()
    {
        // rhs is unsigned __int64, lhs signed, 32-bit or less
        
        if( (unsigned __int32)( rhs >> 32 ) == 0 )
        {
            // Now it just happens to work out that the standard behavior does what we want
            // Adding explicit casts to show exactly what's happening here
            __int32 tmp = (__int32)( (unsigned __int32)rhs + (unsigned __int32)lhs );

            if( tmp >= lhs && SafeCastHelper< T, __int32, GetCastMethod< T, __int32 >::method >::Cast( tmp, result ) )
                return true;
        }

        return false;
    }

    template < typename E >
    static void AdditionThrow( const T& lhs, const U& rhs, T& result )
    {
        // rhs is unsigned __int64, lhs signed, 32-bit or less
        
        if( (unsigned __int32)( rhs >> 32 ) == 0 )
        {
            // Now it just happens to work out that the standard behavior does what we want
            // Adding explicit casts to show exactly what's happening here
            __int32 tmp = (__int32)( (unsigned __int32)rhs + (unsigned __int32)lhs );

            if( tmp >= lhs )
            {
                SafeCastHelper< T, __int32, GetCastMethod< T, __int32 >::method >::CastThrow< E >( tmp, result );
                return;
            }
        }
        E::SafeIntOnOverflow();
    }
};

enum SubtractionState
{
    SubtractionState_BothUnsigned,
    SubtractionState_CastIntCheckMinMax,
    SubtractionState_CastIntCheckMin,
    SubtractionState_CastInt64CheckMinMax,
    SubtractionState_CastInt64CheckMin,
    SubtractionState_Uint64Int,
    SubtractionState_UintInt64, 
    SubtractionState_Int64Int,
    SubtractionState_IntInt64,
    SubtractionState_Int64Uint,
    SubtractionState_IntUint64,
    SubtractionState_Int64Uint64,
    // states for SubtractionMethod2
    SubtractionState_BothUnsigned2,
    SubtractionState_CastIntCheckMinMax2,
    SubtractionState_CastInt64CheckMinMax2,
    SubtractionState_Uint64Int2,
    SubtractionState_UintInt642,
    SubtractionState_Int64Int2,
    SubtractionState_IntInt642,
    SubtractionState_Int64Uint2,
    SubtractionState_IntUint642,
    SubtractionState_Int64Uint642,
    SubtractionState_Error
};

template < typename T, typename U > class SubtractionMethod
{
public:
    enum
    {
                 // unsigned-unsigned
        method = ((IntRegion< T,U >::IntZone_UintLT32_UintLT32 ||
                 (IntRegion< T,U >::IntZone_Uint32_UintLT64)   || 
                 (IntRegion< T,U >::IntZone_UintLT32_Uint32)   || 
                 (IntRegion< T,U >::IntZone_Uint64_Uint)       || 
                 (IntRegion< T,U >::IntZone_UintLT64_Uint64))      ? SubtractionState_BothUnsigned :
                 // unsigned-signed
                 (IntRegion< T,U >::IntZone_UintLT32_IntLT32)      ? SubtractionState_CastIntCheckMinMax :
                 (IntRegion< T,U >::IntZone_Uint32_IntLT64 ||
                  IntRegion< T,U >::IntZone_UintLT32_Int32)        ? SubtractionState_CastInt64CheckMinMax :
                 (IntRegion< T,U >::IntZone_Uint64_Int ||
                  IntRegion< T,U >::IntZone_Uint64_Int64)          ? SubtractionState_Uint64Int :
                 (IntRegion< T,U >::IntZone_UintLT64_Int64)        ? SubtractionState_UintInt64 :
                 // signed-signed
                 (IntRegion< T,U >::IntZone_IntLT32_IntLT32)       ? SubtractionState_CastIntCheckMinMax :
                 (IntRegion< T,U >::IntZone_Int32_IntLT64 ||
                  IntRegion< T,U >::IntZone_IntLT32_Int32)         ? SubtractionState_CastInt64CheckMinMax :
                 (IntRegion< T,U >::IntZone_Int64_Int ||
                  IntRegion< T,U >::IntZone_Int64_Int64)           ? SubtractionState_Int64Int :
                 (IntRegion< T,U >::IntZone_IntLT64_Int64)         ? SubtractionState_IntInt64 :
                 // signed-unsigned
                 (IntRegion< T,U >::IntZone_IntLT32_UintLT32)      ? SubtractionState_CastIntCheckMin :
                 (IntRegion< T,U >::IntZone_Int32_UintLT32 ||
                  IntRegion< T,U >::IntZone_IntLT64_Uint32)        ? SubtractionState_CastInt64CheckMin :
                 (IntRegion< T,U >::IntZone_Int64_UintLT64)        ? SubtractionState_Int64Uint :
                 (IntRegion< T,U >::IntZone_Int_Uint64)            ? SubtractionState_IntUint64 :
                 (IntRegion< T,U >::IntZone_Int64_Uint64)          ? SubtractionState_Int64Uint64 :
                  SubtractionState_Error)
    };
};

// this is for the case of U - SafeInt< T, E >
template < typename T, typename U > class SubtractionMethod2
{
public:
    enum
    {
                 // unsigned-unsigned
        method = ((IntRegion< T,U >::IntZone_UintLT32_UintLT32 ||
                 (IntRegion< T,U >::IntZone_Uint32_UintLT64)   || 
                 (IntRegion< T,U >::IntZone_UintLT32_Uint32)   || 
                 (IntRegion< T,U >::IntZone_Uint64_Uint)       || 
                 (IntRegion< T,U >::IntZone_UintLT64_Uint64))     ? SubtractionState_BothUnsigned2 :
                 // unsigned-signed
                 (IntRegion< T,U >::IntZone_UintLT32_IntLT32)     ? SubtractionState_CastIntCheckMinMax2 :
                 (IntRegion< T,U >::IntZone_Uint32_IntLT64 ||
                  IntRegion< T,U >::IntZone_UintLT32_Int32)       ? SubtractionState_CastInt64CheckMinMax2 :
                 (IntRegion< T,U >::IntZone_Uint64_Int ||
                  IntRegion< T,U >::IntZone_Uint64_Int64)         ? SubtractionState_Uint64Int2 :
                 (IntRegion< T,U >::IntZone_UintLT64_Int64)       ? SubtractionState_UintInt642 :
                 // signed-signed
                 (IntRegion< T,U >::IntZone_IntLT32_IntLT32)      ? SubtractionState_CastIntCheckMinMax2 :
                 (IntRegion< T,U >::IntZone_Int32_IntLT64 ||
                  IntRegion< T,U >::IntZone_IntLT32_Int32)        ? SubtractionState_CastInt64CheckMinMax2 :
                 (IntRegion< T,U >::IntZone_Int64_Int ||
                  IntRegion< T,U >::IntZone_Int64_Int64)          ? SubtractionState_Int64Int2 :
                 (IntRegion< T,U >::IntZone_IntLT64_Int64)        ? SubtractionState_IntInt642 :
                 // signed-unsigned
                 (IntRegion< T,U >::IntZone_IntLT32_UintLT32)     ? SubtractionState_CastIntCheckMinMax2 :
                 (IntRegion< T,U >::IntZone_Int32_UintLT32 ||
                  IntRegion< T,U >::IntZone_IntLT64_Uint32)       ? SubtractionState_CastInt64CheckMinMax2 :
                 (IntRegion< T,U >::IntZone_Int64_UintLT64)       ? SubtractionState_Int64Uint2 :
                 (IntRegion< T,U >::IntZone_Int_Uint64)           ? SubtractionState_IntUint642 :
                 (IntRegion< T,U >::IntZone_Int64_Uint64)         ? SubtractionState_Int64Uint642 :
                                                                    SubtractionState_Error)
    };
};

template < typename T, typename U, int method > class SubtractionHelper;

template < typename T, typename U > class SubtractionHelper< T, U, SubtractionState_BothUnsigned >
{
public:
    static bool Subtract( const T& lhs, const U& rhs, T& result ) throw()
    {
        // both are unsigned - easy case
        if( rhs <= lhs )
        {
            result = (T)( lhs - rhs );
            return true;
        }
        
        return false;
    }

    template < typename E >
    static void SubtractThrow( const T& lhs, const U& rhs, T& result )
    {
        // both are unsigned - easy case
        if( rhs <= lhs )
        {
            result = (T)( lhs - rhs );
            return;
        }
        
        E::SafeIntOnOverflow();
    }
};

template < typename T, typename U > class SubtractionHelper< T, U, SubtractionState_BothUnsigned2 >
{
public:
    static bool Subtract( const T& lhs, const U& rhs, U& result ) throw()
    {
        // both are unsigned - easy case
        // Except we do have to check for overflow - lhs could be larger than result can hold
        if( rhs <= lhs )
        {
           T tmp = (T)(lhs - rhs);
           return SafeCastHelper< U, T, GetCastMethod<U, T>::method>::Cast( tmp, result);
        }
        
        return false;
    }

    template < typename E >
    static void SubtractThrow( const T& lhs, const U& rhs, U& result )
    {
        // both are unsigned - easy case
        if( rhs <= lhs )
        {
           T tmp = (T)(lhs - rhs);
           SafeCastHelper< U, T, GetCastMethod<U, T>::method >::CastThrow<E>( tmp, result);
           return;
        }
        
        E::SafeIntOnOverflow();
    }
};

template < typename T, typename U > class SubtractionHelper< T, U, SubtractionState_CastIntCheckMinMax >
{
public:
    static bool Subtract( const T& lhs, const U& rhs, T& result ) throw()
    {
        // both values are 16-bit or less
        // rhs is signed, so could end up increasing or decreasing
        __int32 tmp = lhs - rhs;

        if( SafeCastHelper< T, __int32, GetCastMethod< T, __int32 >::method >::Cast( tmp, result ) )
        {
            result = (T)tmp;
            return true;
        }

        return false;
    }

    template < typename E >
    static void SubtractThrow( const T& lhs, const U& rhs, T& result )
    {
        // both values are 16-bit or less
        // rhs is signed, so could end up increasing or decreasing
        __int32 tmp = lhs - rhs;

        SafeCastHelper< T, __int32, GetCastMethod< T, __int32 >::method >::CastThrow< E >( tmp, result );
    }
};

template <typename U, typename T> class SubtractionHelper< U, T, SubtractionState_CastIntCheckMinMax2 >
{
public:
    static bool Subtract( const U& lhs, const T& rhs, T& result ) throw()
    {
        // both values are 16-bit or less
        // rhs is signed, so could end up increasing or decreasing
        __int32 tmp = lhs - rhs;

        return SafeCastHelper< T, __int32, GetCastMethod< T, __int32 >::method >::Cast( tmp, result );
    }

    template < typename E >
    static void SubtractThrow( const U& lhs, const T& rhs, T& result )
    {
        // both values are 16-bit or less
        // rhs is signed, so could end up increasing or decreasing
        __int32 tmp = lhs - rhs;

        SafeCastHelper< T, __int32, GetCastMethod< T, __int32 >::method >::CastThrow< E >( tmp, result );
    }
};

template < typename T, typename U > class SubtractionHelper< T, U, SubtractionState_CastIntCheckMin >
{
public:
    static bool Subtract( const T& lhs, const U& rhs, T& result ) throw()
    {
        // both values are 16-bit or less
        // rhs is unsigned - check only minimum
        __int32 tmp = lhs - rhs;

        if( tmp >= (__int32)IntTraits< T >::minInt )
        {
            result = (T)tmp;
            return true;
        }
            
        return false;
    }

    template < typename E >
    static void SubtractThrow( const T& lhs, const U& rhs, T& result )
    {
        // both values are 16-bit or less
        // rhs is unsigned - check only minimum
        __int32 tmp = lhs - rhs;

        if( tmp >= (__int32)IntTraits< T >::minInt )
        {
            result = (T)tmp;
            return;
        }
            
        E::SafeIntOnOverflow();
    }
};

template < typename T, typename U > class SubtractionHelper< T, U, SubtractionState_CastInt64CheckMinMax >
{
public:
    static bool Subtract( const T& lhs, const U& rhs, T& result ) throw()
    {
        // both values are 32-bit or less
        // rhs is signed, so could end up increasing or decreasing
        __int64 tmp = (__int64)lhs - (__int64)rhs;

        return SafeCastHelper< T, __int64, GetCastMethod< T, __int64 >::method >::Cast( tmp, result );
    }

    template < typename E >
    static void SubtractThrow( const T& lhs, const U& rhs, T& result )
    {
        // both values are 32-bit or less
        // rhs is signed, so could end up increasing or decreasing
        __int64 tmp = (__int64)lhs - (__int64)rhs;

        SafeCastHelper< T, __int64, GetCastMethod< T, __int64 >::method >::CastThrow< E >( tmp, result );
    }
};

template <typename U, typename T> class SubtractionHelper< U, T, SubtractionState_CastInt64CheckMinMax2 >
{
public:
    static bool Subtract( const U& lhs, const T& rhs, T& result ) throw()
    {
        // both values are 32-bit or less
        // rhs is signed, so could end up increasing or decreasing
        __int64 tmp = (__int64)lhs - (__int64)rhs;

        return SafeCastHelper< T, __int64, GetCastMethod< T, __int64 >::method >::Cast( tmp, result );
    }

    template < typename E >
    static void SubtractThrow( const U& lhs, const T& rhs, T& result )
    {
        // both values are 32-bit or less
        // rhs is signed, so could end up increasing or decreasing
        __int64 tmp = (__int64)lhs - (__int64)rhs;

        SafeCastHelper< T, __int64, GetCastMethod< T, __int64 >::method >::CastThrow< E >( tmp, result );
    }
};

template < typename T, typename U > class SubtractionHelper< T, U, SubtractionState_CastInt64CheckMin >
{
public:
    static bool Subtract( const T& lhs, const U& rhs, T& result ) throw()
    {
        // both values are 32-bit or less
        // rhs is unsigned - check only minimum
        __int64 tmp = (__int64)lhs - (__int64)rhs;

        if( tmp >= (__int64)IntTraits< T >::minInt )
        {
            result = (T)tmp;
            return true;
        }
        
        return false;
    }

    template < typename E >
    static void SubtractThrow( const T& lhs, const U& rhs, T& result )
    {
        // both values are 32-bit or less
        // rhs is unsigned - check only minimum
        __int64 tmp = (__int64)lhs - (__int64)rhs;

        if( tmp >= (__int64)IntTraits< T >::minInt )
        {
            result = (T)tmp;
            return;
        }
        
        E::SafeIntOnOverflow();
    }
};

template < typename T, typename U > class SubtractionHelper< T, U, SubtractionState_Uint64Int >
{
public:
    static bool Subtract( const T& lhs, const U& rhs, T& result ) throw()
    {
        // lhs is an unsigned __int64, rhs signed
        // must first see if rhs is positive or negative
        if( rhs >= 0 )
        {
            if( (unsigned __int64)rhs <= lhs )
            {
                result = (T)( lhs - (unsigned __int64)rhs );
                return true;
            }
        }
        else
        {
            // we're now effectively adding
            result = lhs + AbsValueHelper< U, GetAbsMethod< U >::method >::Abs( rhs );

            if(result >= lhs)
                return true;
        }

        return false;
    }

    template < typename E >
    static void SubtractThrow( const T& lhs, const U& rhs, T& result )
    {
        // lhs is an unsigned __int64, rhs signed
        // must first see if rhs is positive or negative
        if( rhs >= 0 )
        {
            if( (unsigned __int64)rhs <= lhs )
            {
                result = (T)( lhs - (unsigned __int64)rhs );
                return;
            }
        }
        else
        {
            // we're now effectively adding
            result = lhs + AbsValueHelper< U, GetAbsMethod< U >::method >::Abs( rhs );

            if(result >= lhs)
                return;
        }

        E::SafeIntOnOverflow();
    }
};

template < typename U, typename T > class SubtractionHelper< U, T, SubtractionState_Uint64Int2 >
{
public:
    static bool Subtract( const U& lhs, const T& rhs, T& result ) throw()
    {
        // U is unsigned __int64, T is signed
        if( rhs < 0 )
        {
            // treat this as addition
            unsigned __int64 tmp;

            tmp = lhs + (unsigned __int64)AbsValueHelper< T, GetAbsMethod< T >::method >::Abs( rhs );

            // must check for addition overflow and max
            if( tmp >= lhs && tmp <= IntTraits< T >::maxInt )
            {
                result = (T)tmp;
                return true;
            }
        }
        else if( (unsigned __int64)rhs > lhs ) // now both are positive, so comparison always works
        {
            // result is negative
            // implies that lhs must fit into T, and result cannot overflow
            // Also allows us to drop to 32-bit math, which is faster on a 32-bit system
            result = (T)lhs - (T)rhs;
            return true;
        }
        else
        {
            // result is positive
            unsigned __int64 tmp = (unsigned __int64)lhs - (unsigned __int64)rhs;

            if( tmp <= IntTraits< T >::maxInt )
            {
                result = (T)tmp;
                return true;
            }
        }

        return false;
    }

    template < typename E >
    static void SubtractThrow( const U& lhs, const T& rhs, T& result )
    {
        // U is unsigned __int64, T is signed
        if( rhs < 0 )
        {
            // treat this as addition
            unsigned __int64 tmp;

            tmp = lhs + (unsigned __int64)AbsValueHelper< T, GetAbsMethod< T >::method >::Abs( rhs );

            // must check for addition overflow and max
            if( tmp >= lhs && tmp <= IntTraits< T >::maxInt )
            {
                result = (T)tmp;
                return;
            }
        }
        else if( (unsigned __int64)rhs > lhs ) // now both are positive, so comparison always works
        {
            // result is negative
            // implies that lhs must fit into T, and result cannot overflow
            // Also allows us to drop to 32-bit math, which is faster on a 32-bit system
            result = (T)lhs - (T)rhs;
            return;
        }
        else
        {
            // result is positive
            unsigned __int64 tmp = (unsigned __int64)lhs - (unsigned __int64)rhs;

            if( tmp <= IntTraits< T >::maxInt )
            {
                result = (T)tmp;
                return;
            }
        }

        E::SafeIntOnOverflow();
    }
};

template < typename T, typename U > class SubtractionHelper< T, U, SubtractionState_UintInt64 >
{
public:
    static bool Subtract( const T& lhs, const U& rhs, T& result ) throw()
    {
        // lhs is an unsigned int32 or smaller, rhs signed __int64
        // must first see if rhs is positive or negative
        if( rhs >= 0 )
        {
            if( (unsigned __int64)rhs <= lhs )
            {
                result = (T)( lhs - (T)rhs );
                return true;
            }
        }
        else
        {
            // we're now effectively adding
            // since lhs is 32-bit, and rhs cannot exceed 2^63
            // this addition cannot overflow
            unsigned __int64 tmp = lhs + (unsigned __int64)( -rhs ); // negation safe

            // but we could exceed MaxInt
            if(tmp <= IntTraits< T >::maxInt)
            {
                result = (T)tmp;
                return true;
            }
        }

        return false;
    }

    template < typename E >
    static void SubtractThrow( const T& lhs, const U& rhs, T& result )
    {
        // lhs is an unsigned int32 or smaller, rhs signed __int64
        // must first see if rhs is positive or negative
        if( rhs >= 0 )
        {
            if( (unsigned __int64)rhs <= lhs )
            {
                result = (T)( lhs - (T)rhs );
                return;
            }
        }
        else
        {
            // we're now effectively adding
            // since lhs is 32-bit, and rhs cannot exceed 2^63
            // this addition cannot overflow
            unsigned __int64 tmp = lhs + (unsigned __int64)( -rhs ); // negation safe

            // but we could exceed MaxInt
            if(tmp <= IntTraits< T >::maxInt)
            {
                result = (T)tmp;
                return;
            }
        }

        E::SafeIntOnOverflow();
    }
};

template <typename U, typename T> class SubtractionHelper< U, T, SubtractionState_UintInt642 >
{
public:
    static bool Subtract( const U& lhs, const T& rhs, T& result ) throw()
    {
        // U unsigned 32-bit or less, T __int64
        if( rhs >= 0 )
        {
            // overflow not possible
            result = (T)( (__int64)lhs - rhs );
            return true;
        }
        else
        {
            // we effectively have an addition
            // which cannot overflow internally
            unsigned __int64 tmp = (unsigned __int64)lhs + (unsigned __int64)( -rhs );

            if( tmp <= (unsigned __int64)IntTraits< T >::maxInt )
            {
                result = (T)tmp;
                return true;
            }
        }

        return false;
    }

    template < typename E >
    static void SubtractThrow( const U& lhs, const T& rhs, T& result )
    {
        // U unsigned 32-bit or less, T __int64
        if( rhs >= 0 )
        {
            // overflow not possible
            result = (T)( (__int64)lhs - rhs );
            return;
        }
        else
        {
            // we effectively have an addition
            // which cannot overflow internally
            unsigned __int64 tmp = (unsigned __int64)lhs + (unsigned __int64)( -rhs );

            if( tmp <= (unsigned __int64)IntTraits< T >::maxInt )
            {
                result = (T)tmp;
                return;
            }
        }

        E::SafeIntOnOverflow();
    }
};

template < typename T, typename U > class SubtractionHelper< T, U, SubtractionState_Int64Int >
{
public:
    static bool Subtract( const T& lhs, const U& rhs, T& result ) throw()
    {
        // lhs is an __int64, rhs signed (up to 64-bit)
        // we have essentially 4 cases:
        //
        // 1) lhs positive, rhs positive - overflow not possible
        // 2) lhs positive, rhs negative - equivalent to addition - result >= lhs or error
        // 3) lhs negative, rhs positive - check result <= lhs
        // 4) lhs negative, rhs negative - overflow not possible

        __int64 tmp = lhs - rhs;

        // Note - ideally, we can order these so that true conditionals
        // lead to success, which enables better pipelining
        // It isn't practical here
        if( ( lhs >= 0 && rhs < 0 && tmp < lhs ) || // condition 2
            ( rhs >= 0 && tmp > lhs ) )             // condition 3
        {
             return false;
        }

        result = (T)tmp;
        return true;
    }

    template < typename E >
    static void SubtractThrow( const T& lhs, const U& rhs, T& result )
    {
        // lhs is an __int64, rhs signed (up to 64-bit)
        // we have essentially 4 cases:
        //
        // 1) lhs positive, rhs positive - overflow not possible
        // 2) lhs positive, rhs negative - equivalent to addition - result >= lhs or error
        // 3) lhs negative, rhs positive - check result <= lhs
        // 4) lhs negative, rhs negative - overflow not possible

        __int64 tmp = lhs - rhs;

        // Note - ideally, we can order these so that true conditionals
        // lead to success, which enables better pipelining
        // It isn't practical here
        if( ( lhs >= 0 && rhs < 0 && tmp < lhs ) || // condition 2
            ( rhs >= 0 && tmp > lhs ) )             // condition 3
        {
            E::SafeIntOnOverflow();
        }

        result = (T)tmp;
    }
};

template < typename U, typename T > class SubtractionHelper< U, T, SubtractionState_Int64Int2 >
{
public:
    static bool Subtract( const U& lhs, const T& rhs, T& result ) throw()
    {
        // lhs __int64, rhs any signed int (including __int64)
        __int64 tmp = lhs - rhs;

        // we have essentially 4 cases:
        //
        // 1) lhs positive, rhs positive - overflow not possible in tmp
        // 2) lhs positive, rhs negative - equivalent to addition - result >= lhs or error
        // 3) lhs negative, rhs positive - check result <= lhs
        // 4) lhs negative, rhs negative - overflow not possible in tmp

        if( lhs >= 0 )
        {
            // if both positive, overflow to negative not possible
            // which is why we'll explicitly check maxInt, and not call SafeCast
            if( ( IntTraits< T >::isLT64Bit && tmp > IntTraits< T >::maxInt ) ||
                ( rhs < 0 && tmp < lhs ) )
            {
                return false;
            }
        }
        else
        {
            // lhs negative
            if( ( IntTraits< T >::isLT64Bit && tmp < IntTraits< T >::minInt) ||
                ( rhs >=0 && tmp > lhs ) )
            {
                return false;
            }
        }

        result = (T)tmp;
        return true;
    }

    template < typename E >
    static void SubtractThrow( const U& lhs, const T& rhs, T& result )
    {
        // lhs __int64, rhs any signed int (including __int64)
        __int64 tmp = lhs - rhs;

        // we have essentially 4 cases:
        //
        // 1) lhs positive, rhs positive - overflow not possible in tmp
        // 2) lhs positive, rhs negative - equivalent to addition - result >= lhs or error
        // 3) lhs negative, rhs positive - check result <= lhs
        // 4) lhs negative, rhs negative - overflow not possible in tmp

        if( lhs >= 0 )
        {
            // if both positive, overflow to negative not possible
            // which is why we'll explicitly check maxInt, and not call SafeCast
            if( ( IntTraits< T >::isLT64Bit && tmp > IntTraits< T >::maxInt ) ||
                ( rhs < 0 && tmp < lhs ) )
            {
                E::SafeIntOnOverflow();
            }
        }
        else
        {
            // lhs negative
            if( ( IntTraits< T >::isLT64Bit && tmp < IntTraits< T >::minInt) ||
                ( rhs >=0 && tmp > lhs ) )
            {
                E::SafeIntOnOverflow();
            }
        }

        result = (T)tmp;
    }
};

template < typename T, typename U > class SubtractionHelper< T, U, SubtractionState_IntInt64 >
{
public:
    static bool Subtract( const T& lhs, const U& rhs, T& result ) throw()
    {
        // lhs is a 32-bit int or less, rhs __int64
        // we have essentially 4 cases:
        //
        // lhs positive, rhs positive - rhs could be larger than lhs can represent
        // lhs positive, rhs negative - additive case - check tmp >= lhs and tmp > max int
        // lhs negative, rhs positive - check tmp <= lhs and tmp < min int
        // lhs negative, rhs negative - addition cannot internally overflow, check against max

        __int64 tmp = (__int64)lhs - rhs;

        if( lhs >= 0 )
        {
            // first case
            if( rhs >= 0 )
            {
                if( tmp >= IntTraits< T >::minInt )
                {
                    result = (T)tmp;
                    return true;
                }
            }
            else
            {
                // second case
                if( tmp >= lhs && tmp <= IntTraits< T >::maxInt )
                {
                    result = (T)tmp;
                    return true;
                }
            }
        }
        else
        {
            // lhs < 0
            // third case
            if( rhs >= 0 )
            {
                if( tmp <= lhs && tmp >= IntTraits< T >::minInt )
                {
                    result = (T)tmp;
                    return true;
                }
            }
            else
            {
                // fourth case
                if( tmp <= IntTraits< T >::maxInt )
                {
                    result = (T)tmp;
                    return true;
                }
            }
        }

        return false;
    }

    template < typename E >
    static void SubtractThrow( const T& lhs, const U& rhs, T& result )
    {
        // lhs is a 32-bit int or less, rhs __int64
        // we have essentially 4 cases:
        //
        // lhs positive, rhs positive - rhs could be larger than lhs can represent
        // lhs positive, rhs negative - additive case - check tmp >= lhs and tmp > max int
        // lhs negative, rhs positive - check tmp <= lhs and tmp < min int
        // lhs negative, rhs negative - addition cannot internally overflow, check against max

        __int64 tmp = (__int64)lhs - rhs;

        if( lhs >= 0 )
        {
            // first case
            if( rhs >= 0 )
            {
                if( tmp >= IntTraits< T >::minInt )
                {
                    result = (T)tmp;
                    return;
                }
            }
            else
            {
                // second case
                if( tmp >= lhs && tmp <= IntTraits< T >::maxInt )
                {
                    result = (T)tmp;
                    return;
                }
            }
        }
        else
        {
            // lhs < 0
            // third case
            if( rhs >= 0 )
            {
                if( tmp <= lhs && tmp >= IntTraits< T >::minInt )
                {
                    result = (T)tmp;
                    return;
                }
            }
            else
            {
                // fourth case
                if( tmp <= IntTraits< T >::maxInt )
                {
                    result = (T)tmp;
                    return;
                }
            }
        }

        E::SafeIntOnOverflow();
    }
};

template < typename U, typename T > class SubtractionHelper< U, T, SubtractionState_IntInt642 >
{
public:
    static bool Subtract( const U& lhs, const T& rhs, T& result ) throw()
    {
        // lhs is any signed int32 or smaller, rhs is int64
        __int64 tmp = (__int64)lhs - rhs;

        if( ( lhs >= 0 && rhs < 0 && tmp < lhs ) ||
            ( rhs > 0 && tmp > lhs ) )
        {
            return false;
            //else OK
        }

        result = (T)tmp;
        return true;
    }

    template < typename E >
    static void SubtractThrow( const U& lhs, const T& rhs, T& result )
    {
        // lhs is any signed int32 or smaller, rhs is int64
        __int64 tmp = (__int64)lhs - rhs;

        if( ( lhs >= 0 && rhs < 0 && tmp < lhs ) ||
            ( rhs > 0 && tmp > lhs ) )
        {
            E::SafeIntOnOverflow();
            //else OK
        }

        result = (T)tmp;
    }
};

template < typename T, typename U > class SubtractionHelper< T, U, SubtractionState_Int64Uint >
{
public:
    static bool Subtract( const T& lhs, const U& rhs, T& result ) throw()
    {
        // lhs is a 64-bit int, rhs unsigned int32 or smaller

        __int64 tmp = lhs - (__int64)rhs;

        if( tmp <= lhs )
        {
            result = (T)tmp;
            return true;
        }
     
        return false;
    }

    template < typename E >
    static void SubtractThrow( const T& lhs, const U& rhs, T& result )
    {
        // lhs is a 64-bit int, rhs unsigned int32 or smaller

        __int64 tmp = lhs - (__int64)rhs;

        if( tmp <= lhs )
        {
            result = (T)tmp;
            return;
        }
     
        E::SafeIntOnOverflow();
    }
};

template < typename U, typename T > class SubtractionHelper< U, T, SubtractionState_Int64Uint2 >
{
public:
    // lhs is __int64, rhs is unsigned 32-bit or smaller
    static bool Subtract( const U& lhs, const T& rhs, T& result ) throw()
    {
        __int64 tmp = lhs - (__int64)rhs;

        if( tmp <= IntTraits< T >::maxInt && tmp >= IntTraits< T >::minInt )
        {
            result = (T)tmp;
            return true;
        }

        return false;
    }

    template < typename E >
    static void SubtractThrow( const U& lhs, const T& rhs, T& result )
    {
        __int64 tmp = lhs - (__int64)rhs;

        if( tmp <= IntTraits< T >::maxInt && tmp >= IntTraits< T >::minInt )
        {
            result = (T)tmp;
            return;
        }

        E::SafeIntOnOverflow();
    }
};

template < typename T, typename U > class SubtractionHelper< T, U, SubtractionState_IntUint64 >
{
public:
    static bool Subtract( const T& lhs, const U& rhs, T& result ) throw()
    {
        // lhs is any signed int, rhs unsigned int64
        // check against available range

        // We need the absolute value of IntTraits< T >::minInt
        // This will give it to us without extraneous compiler warnings
        const unsigned __int64 AbsMinIntT = (unsigned __int64)IntTraits< T >::maxInt + 1;

        if( lhs < 0 )
        {
            if( rhs <= AbsMinIntT - AbsValueHelper< T, GetAbsMethod< T >::method >::Abs( lhs ) )
            {
                result = (T)( lhs - rhs );
                return true;
            }
        }
        else
        {
            if( rhs <= AbsMinIntT + (unsigned __int64)lhs )
            {
                result = (T)( lhs - rhs );
                return true;
            }
        }

        return false;
    }

    template < typename E >
    static void SubtractThrow( const T& lhs, const U& rhs, T& result )
    {
        // lhs is any signed int, rhs unsigned int64
        // check against available range

        // We need the absolute value of IntTraits< T >::minInt
        // This will give it to us without extraneous compiler warnings
        const unsigned __int64 AbsMinIntT = (unsigned __int64)IntTraits< T >::maxInt + 1;

        if( lhs < 0 )
        {
            if( rhs <= AbsMinIntT - AbsValueHelper< T, GetAbsMethod< T >::method >::Abs( lhs ) )
            {
                result = (T)( lhs - rhs );
                return;
            }
        }
        else
        {
            if( rhs <= AbsMinIntT + (unsigned __int64)lhs )
            {
                result = (T)( lhs - rhs );
                return;
            }
        }

        E::SafeIntOnOverflow();
    }
};

template < typename U, typename T > class SubtractionHelper< U, T, SubtractionState_IntUint642 >
{
public:
    static bool Subtract( const U& lhs, const T& rhs, T& result ) throw()
    {
        // We run into upcasting problems on comparison - needs 2 checks
        if( lhs >= 0 && (T)lhs >= rhs )
        {
            result = (T)((U)lhs - (U)rhs);
            return true;
        }

        return false;
    }

    template < typename E >
    static void SubtractThrow( const U& lhs, const T& rhs, T& result )
    {
        // We run into upcasting problems on comparison - needs 2 checks
        if( lhs >= 0 && (T)lhs >= rhs )
        {
            result = (T)((U)lhs - (U)rhs);
            return;
        }

        E::SafeIntOnOverflow();
    }

};

template < > class SubtractionHelper< __int64, unsigned __int64, SubtractionState_Int64Uint64 >
{
public:
    static bool Subtract( const __int64& lhs, const unsigned __int64& rhs, __int64& result ) throw()
    {
       // if we subtract, and it gets larger, there's a problem
       __int64 tmp = lhs - (__int64)rhs;

       if( tmp <= lhs )
       {
          result = tmp;
          return true;
       }
        return false;
    }

    template < typename E >
    static void SubtractThrow( const __int64& lhs, const unsigned __int64& rhs, __int64& result )
    {
       // if we subtract, and it gets larger, there's a problem
       __int64 tmp = lhs - (__int64)rhs;

       if( tmp <= lhs )
       {
          result = tmp;
          return;
       }

        E::SafeIntOnOverflow();
    }

};

template < > class SubtractionHelper< __int64, unsigned __int64, SubtractionState_Int64Uint642 >
{
public:
	 // If lhs is negative, immediate problem - return must be positive, and subtracting only makes it
	 // get smaller. If rhs > lhs, then it would also go negative, which is the other case
    static bool Subtract( const __int64& lhs, const unsigned __int64& rhs, unsigned __int64& result ) throw()
    {
		 if( lhs >= 0 && (unsigned __int64)lhs >= rhs )
		 {
			 result = (unsigned __int64)lhs - rhs;
			 return true;
		 }

       return false;
    }

    template < typename E >
    static void SubtractThrow( const __int64& lhs, const unsigned __int64& rhs, unsigned __int64& result )
    {
		 if( lhs >= 0 && (unsigned __int64)lhs >= rhs )
		 {
			 result = (unsigned __int64)lhs - rhs;
			 return;
		 }

        E::SafeIntOnOverflow();
    }

};

enum BinaryState
{
    BinaryState_OK,
    BinaryState_Int8,
    BinaryState_Int16,
    BinaryState_Int32
};

template < typename T, typename U > class BinaryMethod
{
public:
    enum
    {
        // If both operands are unsigned OR
        //    return type is smaller than rhs OR
        //    return type is larger and rhs is unsigned
        // Then binary operations won't produce unexpected results
        method = ( sizeof( T ) <= sizeof( U ) || 
                 SafeIntCompare< T, U >::isBothUnsigned ||
                 !IntTraits< U >::isSigned )          ? BinaryState_OK :
                 IntTraits< U >::isInt8               ? BinaryState_Int8 :
                 IntTraits< U >::isInt16              ? BinaryState_Int16 
                                                      : BinaryState_Int32    
    };
};

#ifdef SAFEINT_DISABLE_BINARY_ASSERT
#define BinaryAssert(x)
#else
#define BinaryAssert(x) assert(x)
#endif

template < typename T, typename U, int method > class BinaryAndHelper;

template < typename T, typename U > class BinaryAndHelper< T, U, BinaryState_OK >
{
public:
    static T And( T lhs, U rhs ){ return (T)( lhs & rhs ); }
};

template < typename T, typename U > class BinaryAndHelper< T, U, BinaryState_Int8 >
{
public:
    static T And( T lhs, U rhs )
    {
        // cast forces sign extension to be zeros
        BinaryAssert( ( lhs & rhs ) == ( lhs & (unsigned __int8)rhs ) );
        return (T)( lhs & (unsigned __int8)rhs );
    }
};

template < typename T, typename U > class BinaryAndHelper< T, U, BinaryState_Int16 >
{
public:
    static T And( T lhs, U rhs )
    {
        //cast forces sign extension to be zeros
        BinaryAssert( ( lhs & rhs ) == ( lhs & (unsigned __int16)rhs ) );
        return (T)( lhs & (unsigned __int16)rhs );
    }
};

template < typename T, typename U > class BinaryAndHelper< T, U, BinaryState_Int32 >
{
public:
    static T And( T lhs, U rhs )
    {
        //cast forces sign extension to be zeros
        BinaryAssert( ( lhs & rhs ) == ( lhs & (unsigned __int32)rhs ) );
        return (T)( lhs & (unsigned __int32)rhs );
    }
};

template < typename T, typename U, int method > class BinaryOrHelper;

template < typename T, typename U > class BinaryOrHelper< T, U, BinaryState_OK >
{
public:
    static T Or( T lhs, U rhs ){ return (T)( lhs | rhs ); }
};

template < typename T, typename U > class BinaryOrHelper< T, U, BinaryState_Int8 >
{
public:
    static T Or( T lhs, U rhs )
    {
        //cast forces sign extension to be zeros
        BinaryAssert( ( lhs | rhs ) == ( lhs | (unsigned __int8)rhs ) );
        return (T)( lhs | (unsigned __int8)rhs );
    }
};

template < typename T, typename U > class BinaryOrHelper< T, U, BinaryState_Int16 >
{
public:
    static T Or( T lhs, U rhs )
    {
        //cast forces sign extension to be zeros
        BinaryAssert( ( lhs | rhs ) == ( lhs | (unsigned __int16)rhs ) );
        return (T)( lhs | (unsigned __int16)rhs );
    }
};

template < typename T, typename U > class BinaryOrHelper< T, U, BinaryState_Int32 >
{
public:
    static T Or( T lhs, U rhs )
    {
        //cast forces sign extension to be zeros
        BinaryAssert( ( lhs | rhs ) == ( lhs | (unsigned __int32)rhs ) );
        return (T)( lhs | (unsigned __int32)rhs );
    }
};

template <typename T, typename U, int method > class BinaryXorHelper;

template < typename T, typename U > class BinaryXorHelper< T, U, BinaryState_OK >
{
public:
    static T Xor( T lhs, U rhs ){ return (T)( lhs ^ rhs ); }
};

template < typename T, typename U > class BinaryXorHelper< T, U, BinaryState_Int8 >
{
public:
    static T Xor( T lhs, U rhs )
    {
        // cast forces sign extension to be zeros
        BinaryAssert( ( lhs ^ rhs ) == ( lhs ^ (unsigned __int8)rhs ) );
        return (T)( lhs ^ (unsigned __int8)rhs );
    }
};

template < typename T, typename U > class BinaryXorHelper< T, U, BinaryState_Int16 >
{
public:
    static T Xor( T lhs, U rhs )
    {
        // cast forces sign extension to be zeros
        BinaryAssert( ( lhs ^ rhs ) == ( lhs ^ (unsigned __int16)rhs ) );
        return (T)( lhs ^ (unsigned __int16)rhs );
    }
};

template < typename T, typename U > class BinaryXorHelper< T, U, BinaryState_Int32 >
{
public:
    static T Xor( T lhs, U rhs )
    {
        // cast forces sign extension to be zeros
        BinaryAssert( ( lhs ^ rhs ) == ( lhs ^ (unsigned __int32)rhs ) );
        return (T)( lhs ^ (unsigned __int32)rhs );
    }
};

/*****************  External functions ****************************************/

// External functions that can be used where you only need to check one operation
// non-class helper function so that you can check for a cast's validity
// and handle errors how you like
template < typename T, typename U >
inline bool SafeCast( const T From, U& To )
{
    return SafeCastHelper< U, T, GetCastMethod< U, T >::method >::Cast( From, To );
}

template < typename T, typename U >
inline bool SafeEquals( const T t, const U u ) throw()
{
    return EqualityTest< T, U, ValidComparison< T, U >::method >::IsEquals( t, u );
}

template < typename T, typename U >
inline bool SafeNotEquals( const T t, const U u ) throw()
{
    return !EqualityTest< T, U, ValidComparison< T, U >::method >::IsEquals( t, u );
}

template < typename T, typename U >
inline bool SafeGreaterThan( const T t, const U u ) throw()
{
    return GreaterThanTest< T, U, ValidComparison< T, U >::method >::GreaterThan( t, u );
}

template < typename T, typename U >
inline bool SafeGreaterThanEquals( const T t, const U u ) throw()
{
    return !GreaterThanTest< U, T, ValidComparison< U, T >::method >::GreaterThan( u, t );
}

template < typename T, typename U >
inline bool SafeLessThan( const T t, const U u ) throw()
{
    return GreaterThanTest< U, T, ValidComparison< U, T >::method >::GreaterThan( u, t );
}

template < typename T, typename U >
inline bool SafeLessThanEquals( const T t, const U u ) throw()
{
    return !GreaterThanTest< T, U, ValidComparison< T, U >::method >::GreaterThan( t, u );
}

template < typename T, typename U >
inline bool SafeModulus( const T& t, const U& u, T& result ) throw()
{
    return ( ModulusHelper< T, U, ValidComparison< T, U >::method >::Modulus( t, u, result ) == SafeIntNoError );
}

template < typename T, typename U >
inline bool SafeMultiply( T t, U u, T& result ) throw()
{
    return MultiplicationHelper< T, U, MultiplicationMethod< T, U >::method >::Multiply( t, u, result );
}

template < typename T, typename U >
inline bool SafeDivide( T t, U u, T& result ) throw()
{
    return ( DivisionHelper< T, U, DivisionMethod< T, U >::method >::Divide( t, u, result ) == SafeIntNoError );
}

template < typename T, typename U >
inline bool SafeAdd( T t, U u, T& result ) throw()
{
    return AdditionHelper< T, U, AdditionMethod< T, U >::method >::Addition( t, u, result );
}

template < typename T, typename U >
inline bool SafeSubtract( T t, U u, T& result ) throw()
{
    return SubtractionHelper< T, U, SubtractionMethod< T, U >::method >::Subtract( t, u, result );
}

/*****************  end external functions ************************************/

// Main SafeInt class
// Assumes exceptions can be thrown
template < typename T, typename E = SafeIntDefaultExceptionHandler > class SafeInt
{
public:
    SafeInt() throw()
    {
        C_ASSERT( IsInt< T >::isInt );
        m_int = 0;
    }

    // Having a constructor for every type of int 
    // avoids having the compiler evade our checks when doing implicit casts - 
    // e.g., SafeInt<char> s = 0x7fffffff;
    SafeInt( const T& i ) throw()
    {
        C_ASSERT( IsInt< T >::isInt );
        //always safe
        m_int = i;
    }

    // provide explicit boolean converter
    SafeInt( bool b ) throw()
    {
        C_ASSERT( IsInt< T >::isInt );
        m_int = b ? 1 : 0;
    }

    template < typename U > 
    SafeInt(const SafeInt< U, E >& u)
    {
        C_ASSERT( IsInt< T >::isInt );
        *this = SafeInt< T, E >( (U)u );
    }

    template < typename U > 
    SafeInt( const U& i )
    {
        C_ASSERT( IsInt< T >::isInt );
        // SafeCast will throw exceptions if i won't fit in type T
        SafeCastHelper< T, U, GetCastMethod< T, U >::method >::CastThrow< E >( i, m_int );
    }

    // The destructor is intentionally commented out - no destructor 
    // vs. a do-nothing destructor makes a huge difference in
    // inlining characteristics. It wasn't doing anything anyway.
    // ~SafeInt(){};


    // now start overloading operators
    // assignment operator
    // constructors exist for all int types and will ensure safety

    template < typename U > 
    SafeInt< T, E >& operator =( const U& rhs )
    {
        // use constructor to test size
        // constructor is optimized to do minimal checking based
        // on whether T can contain U
        // note - do not change this 
        *this = SafeInt< T, E >( rhs );
        return *this;
    }

    SafeInt< T, E >& operator =( const T& rhs ) throw()
    {
        m_int = rhs;
        return *this;
    }

    template < typename U > 
    SafeInt< T, E >& operator =( const SafeInt< U, E >& rhs )
    {
        SafeCastHelper< T, U, GetCastMethod< T, U >::method >::CastThrow< E >( rhs.Ref(), m_int );
        return *this;
    }

    SafeInt< T, E >& operator =( const SafeInt< T, E >& rhs ) throw()
    {
        m_int = rhs.m_int;
        return *this;
    }

    // Casting operators

    operator bool() const throw()
    {
        return !!m_int;
    }

    _Post_equal_to_(this->m_int)
    operator char() const
    {
        char val;
        SafeCastHelper< char, T, GetCastMethod< char, T >::method >::CastThrow< E >( m_int, val );
        return val;
    }

    _Post_equal_to_(this->m_int)
    operator signed char() const
    {
        signed char val;
        SafeCastHelper< signed char, T, GetCastMethod< signed char, T >::method >::CastThrow< E >( m_int, val );
        return val;
    }

    _Post_equal_to_(this->m_int)
    operator unsigned char() const
    {
        unsigned char val;
        SafeCastHelper< unsigned char, T, GetCastMethod< unsigned char, T >::method >::CastThrow< E >( m_int, val );
        return val;
    }

    _Post_equal_to_(this->m_int)
    operator __int16() const
    {
        __int16 val;
        SafeCastHelper< __int16, T, GetCastMethod< __int16, T >::method >::CastThrow< E >( m_int, val );
        return val;
    }

    _Post_equal_to_(this->m_int)
    operator unsigned __int16() const
    {
        unsigned __int16 val;
           SafeCastHelper< unsigned __int16, T, GetCastMethod< unsigned __int16, T >::method >::CastThrow< E >( m_int, val );
        return val;
    }

    _Post_equal_to_(this->m_int)
    operator __int32() const
    {
        __int32 val;
        SafeCastHelper< __int32, T, GetCastMethod< __int32, T >::method >::CastThrow< E >( m_int, val );
        return val;
    }

    _Post_equal_to_(this->m_int)
    operator unsigned __int32() const
    {
        unsigned __int32 val;
           SafeCastHelper< unsigned __int32, T, GetCastMethod< unsigned __int32, T >::method >::CastThrow< E >( m_int, val );
        return val;
    }

    // The compiler knows that int == __int32
    // but not that long == __int32
    _Post_equal_to_(this->m_int)
    operator long() const
    {
        long val;
        SafeCastHelper< long, T, GetCastMethod< long, T >::method >::CastThrow< E >( m_int, val );
        return  val;
    }

    _Post_equal_to_(this->m_int)
    operator unsigned long() const
    {
        unsigned long val;
        SafeCastHelper< unsigned long, T, GetCastMethod< unsigned long, T >::method >::CastThrow< E >( m_int, val );
        return val;
    }

    _Post_equal_to_(this->m_int)
    operator __int64() const
    {
        __int64 val;
        SafeCastHelper< __int64, T, GetCastMethod< __int64, T >::method >::CastThrow< E >( m_int, val );
        return val;
    }

    _Post_equal_to_(this->m_int)
    operator unsigned __int64() const
    {
        unsigned __int64 val;
        SafeCastHelper< unsigned __int64, T, GetCastMethod< unsigned __int64, T >::method >::CastThrow< E >( m_int, val );
        return val;
    }

#ifdef SIZE_T_CAST_NEEDED
    // We also need an explicit cast to size_t, or the compiler will complain
    // Apparently, only SOME compilers complain, and cl 14.00.50727.42 isn't one of them
    // Leave here in case we decide to backport this to an earlier compiler
    _Post_equal_to_(this->m_int)
    operator size_t() const
    {
        size_t val;
        SafeCastHelper< size_t, T, GetCastMethod< size_t, T >::method >::CastThrow< E >( m_int, val );
        return val;
    }
#endif

    // Also provide a cast operator for floating point types
    operator float() const
    {
        size_t val;
        SafeCastHelper< float, T, GetCastMethod< float, T >::method >::CastThrow< E >( m_int, val );
        return val;
    }

    operator double() const
    {
        size_t val;
           SafeCastHelper< double, T, GetCastMethod< double, T >::method >::CastThrow< E >( m_int, val );
        return val;
    }
    operator long double() const
    {
        size_t val;
           SafeCastHelper< long double, T, GetCastMethod< long double, T >::method >::CastThrow< E >( m_int, val );
        return val;
    }

    // If you need a pointer to the data
    // this could be dangerous, but allows you to correctly pass
    // instances of this class to APIs that take a pointer to an integer
    // also see overloaded address-of operator below
    T* Ptr() throw() { return &m_int; }
    const T* Ptr() const throw() { return &m_int; }
    const T& Ref() const throw() { return m_int; }

    // Or if SafeInt< T, E >::Ptr() is inconvenient, use the overload
    // operator & 
    // This allows you to do unsafe things!
    // It is meant to allow you to more easily
    // pass a SafeInt into things like ReadFile
    T* operator &() throw() { return &m_int; }
    const T* operator &() const throw() { return &m_int; }

    // Unary operators
    bool operator !() const throw() { return (!m_int) ? true : false; }
    
    // operator + (unary) 
    // note - normally, the '+' and '-' operators will upcast to a signed int
    // for T < 32 bits. This class changes behavior to preserve type
    const SafeInt< T, E >& operator +() const throw() { return *this; };

    //unary  - 
        
    SafeInt< T, E > operator -() const
    {
        if( IntTraits< T >::isSigned )
        {
            // corner case
            if( m_int != IntTraits< T >::minInt )
            {
                // cast prevents unneeded checks in the case of small ints
                return SafeInt< T, E >( (T)-m_int );
            }
            E::SafeIntOnOverflow();
        }

        // no-op for unsigned - generates warning 4146 at warning levels 2 and above
        // TODO - consider adding an assert, based on warning verbosity level
        return SafeInt< T, E >( (T)-m_int );
    }

    // prefix increment operator
    SafeInt< T, E >& operator ++()
    {
        if( m_int != IntTraits< T >::maxInt )
        {
            ++m_int;
            return *this;
        }
        E::SafeIntOnOverflow();
    }
    
    // prefix decrement operator
    SafeInt< T, E >& operator --()
    {
        if( m_int != IntTraits< T >::minInt )
        {
            --m_int;
            return *this;
        }
        E::SafeIntOnOverflow();
    }

    // note that postfix operators have inherently worse perf
    // characteristics

    // postfix increment operator
    SafeInt< T, E > operator ++( int ) // dummy arg to comply with spec
    {
        if( m_int != IntTraits< T >::maxInt )
        {
            SafeInt< T, E > tmp( m_int );

            m_int++;
            return tmp;
        }
        E::SafeIntOnOverflow();
    }

    // postfix decrement operator
    SafeInt< T, E > operator --( int ) // dummy arg to comply with spec
    {
        if( m_int != IntTraits< T >::minInt )
        {
            SafeInt< T, E > tmp( m_int );
            m_int--;
            return tmp;
        }
        E::SafeIntOnOverflow();
    }

    // One's complement
    // Note - this operator will normally change size to an int
    // cast in return improves perf and maintains type
    SafeInt< T, E > operator ~() const throw() { return SafeInt< T, E >( (T)~m_int ); }

    // Binary operators
    //
    // arithmetic binary operators
    // % modulus
    // * multiplication
    // / division
    // + addition
    // - subtraction
    //
    // For each of the arithmetic operators, you will need to 
    // use them as follows:
    //
    // SafeInt<char> c = 2;
    // SafeInt<int>  i = 3;
    //
    // SafeInt<int> i2 = i op (char)c;
    // OR
    // SafeInt<char> i2 = (int)i op c;
    //
    // The base problem is that if the lhs and rhs inputs are different SafeInt types
    // it is not possible in this implementation to determine what type of SafeInt
    // should be returned. You have to let the class know which of the two inputs
    // need to be the return type by forcing the other value to the base integer type.
    //
    // Note - as per feedback from Scott Meyers, I'm exploring how to get around this.
    // 3.0 update - I'm still thinking about this. It can be done with template metaprogramming,
    // but it is tricky, and there's a perf vs. correctness tradeoff where the right answer
    // is situational.
    //
    // The case of:
    //
    // SafeInt< T, E > i, j, k;
    // i = j op k;
    //
    // works just fine and no unboxing is needed because the return type is not ambiguous.

    // Modulus
    // Modulus has some convenient properties - 
    // first, the magnitude of the return can never be
    // larger than the lhs operand, and it must be the same sign
    // as well. It does, however, suffer from the same promotion
    // problems as comparisons, division and other operations
    template < typename U >
    SafeInt< T, E > operator %( U rhs ) const
    {
        T result;
        ModulusHelper< T, U, ValidComparison< T, U >::method >::ModulusThrow< E >( m_int, rhs, result );
        return SafeInt< T, E >( result );
    }

    SafeInt< T, E > operator %( SafeInt< T, E > rhs ) const
    {
        T result;
        ModulusHelper< T, T, ValidComparison< T, T >::method >::ModulusThrow< E >( m_int, rhs, result );
        return SafeInt< T, E >( result );
    }

    // Modulus assignment
    template < typename U >
    SafeInt< T, E >& operator %=( U rhs )
    {
        ModulusHelper< T, U, ValidComparison< T, U >::method >::ModulusThrow< E >( m_int, rhs, m_int );
        return *this;
    }

    template < typename U >
    SafeInt< T, E >& operator %=( SafeInt< U, E > rhs )
    {
        ModulusHelper< T, U, ValidComparison< T, U >::method >::ModulusThrow< E >( m_int, (U)rhs, m_int );
        return *this;
    }

    // Multiplication
    template < typename U >
    SafeInt< T, E > operator *( U rhs ) const
    {
        T ret( 0 );
        MultiplicationHelper< T, U, MultiplicationMethod< T, U >::method >::MultiplyThrow< E >( m_int, rhs, ret );
        return SafeInt< T, E >( ret );
    }

    SafeInt< T, E > operator *( SafeInt< T, E > rhs ) const
    {
        T ret( 0 );
        MultiplicationHelper< T, T, MultiplicationMethod< T, T >::method >::MultiplyThrow< E >( m_int, (T)rhs, ret );
        return SafeInt< T, E >( ret );
    }

    // Multiplication assignment
    SafeInt< T, E >& operator *=( SafeInt< T, E > rhs )
    {
        MultiplicationHelper< T, T, MultiplicationMethod< T, T >::method >::MultiplyThrow< E >( m_int, (T)rhs, m_int );
        return *this;
    }

    template < typename U > 
    SafeInt< T, E >& operator *=( U rhs )
    {
        MultiplicationHelper< T, U, MultiplicationMethod< T, U >::method >::MultiplyThrow< E >( m_int, rhs, m_int );
        return *this;
    }

    template < typename U > 
    SafeInt< T, E >& operator *=( SafeInt< U, E > rhs )
    {
        MultiplicationHelper< T, U, MultiplicationMethod< T, U >::method >::MultiplyThrow< E >( m_int, rhs.Ref(), m_int );
        return *this;
    }

    // Division
    template < typename U >
    SafeInt< T, E > operator /( U rhs ) const
    {
        T ret( 0 );
        DivisionHelper< T, U, DivisionMethod< T, U >::method >::DivideThrow< E >( m_int, rhs, ret );
        return SafeInt< T, E >( ret );
    }

    SafeInt< T, E > operator /( SafeInt< T, E > rhs ) const
    {
        T ret( 0 );
        DivisionHelper< T, T, DivisionMethod< T, T >::method >::DivideThrow< E >( m_int, (T)rhs, ret );
        return SafeInt< T, E >( ret );
    }

    // Division assignment
    SafeInt< T, E >& operator /=( SafeInt< T, E > i )
    {
        DivisionHelper< T, T, DivisionMethod< T, T >::method >::DivideThrow< E >( m_int, (T)i, m_int );
        return *this;
    }

    template < typename U > SafeInt< T, E >& operator /=( U i )
    {
        DivisionHelper< T, U, DivisionMethod< T, U >::method >::DivideThrow< E >( m_int, i, m_int );
        return *this;
    }

    template < typename U > SafeInt< T, E >& operator /=( SafeInt< U, E > i )
    {
        DivisionHelper< T, U, DivisionMethod< T, U >::method >::DivideThrow< E >( m_int, (U)i, m_int );
        return *this;
    }

    // For addition and subtraction

    // Addition
    SafeInt< T, E > operator +( SafeInt< T, E > rhs ) const
    {
        T ret( 0 );
        AdditionHelper< T, T, AdditionMethod< T, T >::method >::AdditionThrow< E >( m_int, (T)rhs, ret );
        return SafeInt< T, E >( ret );
    }

    template < typename U >
    SafeInt< T, E > operator +( U rhs ) const
    {
        T ret( 0 );
        AdditionHelper< T, U, AdditionMethod< T, U >::method >::AdditionThrow< E >( m_int, rhs, ret );
        return SafeInt< T, E >( ret );
    }

    //addition assignment
    SafeInt< T, E >& operator +=( SafeInt< T, E > rhs )
    {
        AdditionHelper< T, T, AdditionMethod< T, T >::method >::AdditionThrow< E >( m_int, (T)rhs, m_int );
        return *this;
    }

    template < typename U >
    SafeInt< T, E >& operator +=( U rhs )
    {
        AdditionHelper< T, U, AdditionMethod< T, U >::method >::AdditionThrow< E >( m_int, rhs, m_int );
        return *this;
    }

    template < typename U > 
    SafeInt< T, E >& operator +=( SafeInt< U, E > rhs )
    {
        AdditionHelper< T, U, AdditionMethod< T, U >::method >::AdditionThrow< E >( m_int, (U)rhs, m_int );
        return *this;
    }

    // Subtraction
    template < typename U >
    SafeInt< T, E > operator -( U rhs ) const
    {
        T ret( 0 );
        SubtractionHelper< T, U, SubtractionMethod< T, U >::method >::SubtractThrow< E >( m_int, rhs, ret );
        return SafeInt< T, E >( ret );
    }

    SafeInt< T, E > operator -(SafeInt< T, E > rhs) const
    {
        T ret( 0 );
        SubtractionHelper< T, T, SubtractionMethod< T, T >::method >::SubtractThrow< E >( m_int, (T)rhs, ret );
        return SafeInt< T, E >( ret );
    }

    // Subtraction assignment
    SafeInt< T, E >& operator -=( SafeInt< T, E > rhs )
    {
        SubtractionHelper< T, T, SubtractionMethod< T, T >::method >::SubtractThrow< E >( m_int, (T)rhs, m_int );
        return *this;
    }

    template < typename U > 
    SafeInt< T, E >& operator -=( U rhs )
    {
        SubtractionHelper< T, U, SubtractionMethod< T, U >::method >::SubtractThrow< E >( m_int, rhs, m_int );
        return *this;
    }

    template < typename U > 
    SafeInt< T, E >& operator -=( SafeInt< U, E > rhs )
    {
        SubtractionHelper< T, U, SubtractionMethod< T, U >::method >::SubtractThrow< E >( m_int, (U)rhs, m_int );
        return *this;
    }

    // Comparison operators
    // Additional overloads defined outside the class 
    // to allow for cases where the SafeInt is the rhs value

    // Less than
    template < typename U >
    bool operator <( U rhs ) const throw()
    {
        return GreaterThanTest< U, T, ValidComparison< U, T >::method >::GreaterThan( rhs, m_int );
    }

    bool operator <( SafeInt< T, E > rhs ) const throw()
    {
        return m_int < (T)rhs;
    }

    // Greater than or eq.
    template < typename U >
    bool operator >=( U rhs ) const throw() 
    {
        return !GreaterThanTest< U, T, ValidComparison< U, T >::method >::GreaterThan( rhs, m_int );
    }

    bool operator >=( SafeInt< T, E > rhs ) const throw()
    {
        return m_int >= (T)rhs;
    }

    // Greater than
    template < typename U >
    bool operator >( U rhs ) const throw()
    {
        return GreaterThanTest< T, U, ValidComparison< T, U >::method >::GreaterThan( m_int, rhs );
    }

    bool operator >( SafeInt< T, E > rhs ) const throw()
    {
        return m_int > (T)rhs;
    }

    // Less than or eq.
    template < typename U >
    bool operator <=( U rhs ) const throw() 
    {
        return !GreaterThanTest< T, U, ValidComparison< T, U >::method >::GreaterThan( m_int, rhs );
    }

    bool operator <=( SafeInt< T, E > rhs ) const throw()
    {
        return m_int <= (T)rhs;
    }

    // Equality
    template < typename U >
    bool operator ==( U rhs ) const throw() 
    {
        return EqualityTest< T, U, ValidComparison< T, U >::method >::IsEquals( m_int, rhs );
    }

    // Need an explicit override for type bool
    bool operator ==( bool rhs ) const throw()
    {
        return ( m_int == 0 ? false : true ) == rhs;
    }

    bool operator ==( SafeInt< T, E > rhs ) const throw() { return m_int == (T)rhs; }

    // != operators
    template < typename U >
    bool operator !=( U rhs ) const throw() 
    {
        return !EqualityTest< T, U, ValidComparison< T, U >::method >::IsEquals( m_int, rhs );
    }

    bool operator !=( bool b ) const throw()
    {
        return ( m_int == 0 ? false : true ) != b;
    }

    bool operator !=( SafeInt< T, E > rhs ) const throw() { return m_int != (T)rhs; }

    // Shift operators
    // Note - shift operators ALWAYS return the same type as the lhs
    // specific version for SafeInt< T, E > not needed - 
    // code path is exactly the same as for SafeInt< U, E > as rhs

    // Left shift
    // Also, shifting > bitcount is undefined - trap in debug
#ifdef SAFEINT_DISABLE_SHIFT_ASSERT
   #define ShiftAssert(x)
#else
    #define ShiftAssert(x) assert(x)
#endif

    template < typename U > 
    SafeInt< T, E > operator <<( U bits ) const throw()
    {
        ShiftAssert( !IntTraits< U >::isSigned || bits >= 0 );
        ShiftAssert( bits < (int)IntTraits< T >::bitCount );

        return SafeInt< T, E >( (T)( m_int << bits ) );
    }

    template < typename U > 
    SafeInt< T, E > operator <<( SafeInt< U, E > bits ) const throw()
    {
        ShiftAssert( !IntTraits< U >::isSigned || (U)bits >= 0 );
        ShiftAssert( (U)bits < (int)IntTraits< T >::bitCount );

        return SafeInt< T, E >( (T)( m_int << (U)bits ) );
    }

    // Left shift assignment

    template < typename U >
    SafeInt< T, E >& operator <<=( U bits ) throw()
    {
        ShiftAssert( !IntTraits< U >::isSigned || bits >= 0 );
        ShiftAssert( bits < (int)IntTraits< T >::bitCount );

        m_int <<= bits;
        return *this;
    }

    template < typename U >
    SafeInt< T, E >& operator <<=( SafeInt< U, E > bits ) throw()
    {
        ShiftAssert( !IntTraits< U >::isSigned || (U)bits >= 0 );
        ShiftAssert( (U)bits < (int)IntTraits< T >::bitCount );

        m_int <<= (U)bits;
        return *this;
    }

    // Right shift
    template < typename U > 
    SafeInt< T, E > operator >>( U bits ) const throw()
    {
        ShiftAssert( !IntTraits< U >::isSigned || bits >= 0 );
        ShiftAssert( bits < (int)IntTraits< T >::bitCount );

        return SafeInt< T, E >( (T)( m_int >> bits ) );
    }

    template < typename U > 
    SafeInt< T, E > operator >>( SafeInt< U, E > bits ) const throw()
    {
        ShiftAssert( !IntTraits< U >::isSigned || (U)bits >= 0 );
        ShiftAssert( bits < (int)IntTraits< T >::bitCount );

        return SafeInt< T, E >( (T)(m_int >> (U)bits) );
    }

    // Right shift assignment
    template < typename U >
    SafeInt< T, E >& operator >>=( U bits ) throw()
    {
        ShiftAssert( !IntTraits< U >::isSigned || bits >= 0 );
        ShiftAssert( bits < (int)IntTraits< T >::bitCount );

        m_int >>= bits;
        return *this;
    }

    template < typename U >
    SafeInt< T, E >& operator >>=( SafeInt< U, E > bits ) throw()
    {
        ShiftAssert( !IntTraits< U >::isSigned || (U)bits >= 0 );
        ShiftAssert( (U)bits < (int)IntTraits< T >::bitCount );

        m_int >>= (U)bits;
        return *this;
    }

    // Bitwise operators
    // This only makes sense if we're dealing with the same type and size
    // demand a type T, or something that fits into a type T

    // Bitwise &
    SafeInt< T, E > operator &( SafeInt< T, E > rhs ) const throw()
    {
        return SafeInt< T, E >( m_int & (T)rhs );
    }

    template < typename U >
    SafeInt< T, E > operator &( U rhs ) const throw()
    {
        // we want to avoid setting bits by surprise
        // consider the case of lhs = int, value = 0xffffffff
        //                      rhs = char, value = 0xff
        //
        // programmer intent is to get only the lower 8 bits
        // normal behavior is to upcast both sides to an int
        // which then sign extends rhs, setting all the bits

        // If you land in the assert, this is because the bitwise operator
        // was causing unexpected behavior. Fix is to properly cast your inputs
        // so that it works like you meant, not unexpectedly

        return SafeInt< T, E >( BinaryAndHelper< T, U, BinaryMethod< T, U >::method >::And( m_int, rhs ) );
    }

    // Bitwise & assignment
    SafeInt< T, E >& operator &=( SafeInt< T, E > rhs ) throw()
    {
        m_int &= (T)rhs;
        return *this;
    }

    template < typename U > 
    SafeInt< T, E >& operator &=( U rhs ) throw()
    {
        m_int = BinaryAndHelper< T, U, BinaryMethod< T, U >::method >::And( m_int, rhs );
        return *this;
    }

    template < typename U > 
    SafeInt< T, E >& operator &=( SafeInt< U, E > rhs ) throw()
    {
        m_int = BinaryAndHelper< T, U, BinaryMethod< T, U >::method >::And( m_int, (U)rhs );
        return *this;
    }

    // XOR
    SafeInt< T, E > operator ^( SafeInt< T, E > rhs ) const throw()
    {
        return SafeInt< T, E >( (T)( m_int ^ (T)rhs ) );
    }

    template < typename U >
    SafeInt< T, E > operator ^( U rhs ) const throw()
    {
        // If you land in the assert, this is because the bitwise operator
        // was causing unexpected behavior. Fix is to properly cast your inputs
        // so that it works like you meant, not unexpectedly

        return SafeInt< T, E >( BinaryXorHelper< T, U, BinaryMethod< T, U >::method >::Xor( m_int, rhs ) );
    }

    // XOR assignment
    SafeInt< T, E >& operator ^=( SafeInt< T, E > rhs ) throw()
    {
        m_int ^= (T)rhs;
        return *this;
    }

    template < typename U > 
    SafeInt< T, E >& operator ^=( U rhs ) throw()
    {
        m_int = BinaryXorHelper< T, U, BinaryMethod< T, U >::method >::Xor( m_int, rhs );
        return *this;
    }

    template < typename U > 
    SafeInt< T, E >& operator ^=( SafeInt< U, E > rhs ) throw()
    {
        m_int = BinaryXorHelper< T, U, BinaryMethod< T, U >::method >::Xor( m_int, (U)rhs );
        return *this;
    }

    // bitwise OR
    SafeInt< T, E > operator |( SafeInt< T, E > rhs ) const throw()
    {
        return SafeInt< T, E >( (T)( m_int | (T)rhs ) );
    }

    template < typename U >
    SafeInt< T, E > operator |( U rhs ) const throw()
    {
        return SafeInt< T, E >( BinaryOrHelper< T, U, BinaryMethod< T, U >::method >::Or( m_int, rhs ) );
    }

    // bitwise OR assignment
    SafeInt< T, E >& operator |=( SafeInt< T, E > rhs ) throw()
    {
        m_int |= (T)rhs;
        return *this;
    }

    template < typename U > 
    SafeInt< T, E >& operator |=( U rhs ) throw()
    {
        m_int = BinaryOrHelper< T, U, BinaryMethod< T, U >::method >::Or( m_int, rhs );
        return *this;
    }

    template < typename U > 
    SafeInt< T, E >& operator |=( SafeInt< U, E > rhs ) throw()
    {
        m_int = BinaryOrHelper< T, U, BinaryMethod< T, U >::method >::Or( m_int, (U)rhs );
        return *this;
    }

    // Miscellaneous helper functions
    SafeInt< T, E > Min( SafeInt< T, E > test, SafeInt< T, E > floor = SafeInt< T, E >( IntTraits< T >::minInt ) ) const throw()
    {
        T tmp = test < m_int ? test : m_int;
        return tmp < floor ? floor : tmp;
    }

    SafeInt< T, E > Max( SafeInt< T, E > test, SafeInt< T, E > upper = SafeInt< T, E >( IntTraits< T >::maxInt ) ) const throw()
    {
        T tmp = test > m_int ? test : m_int;
        return tmp > upper ? upper : tmp;
    }

    void Swap( SafeInt< T, E >& with ) throw()
    {
        T temp( m_int );
        m_int = with.m_int;
        with.m_int = temp;
    }

    static SafeInt< T, E > SafeAtoI( const char* input )
    {
        return SafeTtoI( input );
    }

    static SafeInt< T, E > SafeWtoI( const wchar_t* input )
    {
        return SafeTtoI( input );
    }

    template < int bits >
    const SafeInt< T, E >& Align()
    {
        // Zero is always aligned
        if( m_int == 0 )
            return *this;

        // We don't support aligning negative numbers at this time
        // Can't align unsigned numbers on bitCount (e.g., 8 bits = 256, unsigned char max = 255)
        // or signed numbers on bitCount-1 (e.g., 7 bits = 128, signed char max = 127).
        // Also makes no sense to try to align on negative or no bits.

        ShiftAssert( ( ( IntTraits<T>::isSigned && bits < (int)IntTraits< T >::bitCount - 1 ) 
                    || ( !IntTraits<T>::isSigned && bits < (int)IntTraits< T >::bitCount ) ) && 
                    bits >= 0 && ( !IntTraits<T>::isSigned || m_int > 0 ) );

        const T AlignValue = ( (T)1 << bits ) - 1;

        m_int = ( m_int + AlignValue ) & ~AlignValue;

        if( m_int <= 0 )
            E::SafeIntOnOverflow();
    
        return *this;
    }

    // Commonly needed alignments:
    const SafeInt< T, E >& Align2()  { return Align< 1 >(); }
    const SafeInt< T, E >& Align4()  { return Align< 2 >(); }
    const SafeInt< T, E >& Align8()  { return Align< 3 >(); }
    const SafeInt< T, E >& Align16() { return Align< 4 >(); }
    const SafeInt< T, E >& Align32() { return Align< 5 >(); }
    const SafeInt< T, E >& Align64() { return Align< 6 >(); }
private:
    
    // This is almost certainly not the best optimized version of atoi,
    // but it does not display a typical bug where it isn't possible to set MinInt
    // and it won't allow you to overflow your integer.
    // This is here because it is useful, and it is an example of what
    // can be done easily with SafeInt.
    template < typename U >
    static SafeInt< T, E > SafeTtoI( U* input )
    {
        U* tmp  = input;
        SafeInt< T, E > s;
        bool negative = false;
        
        // Bad input, or empty string
        if( input == NULL || input[0] == 0 )
            E::SafeIntOnOverflow();

        switch( *tmp )
        {
        case '-':
            tmp++;
            negative = true;
            break;
        case '+':
            tmp++;
            break;
        }

        while( *tmp != 0 )
        {
            if( *tmp < '0' || *tmp > '9' )
                break;
            
            if( (T)s != 0 )
                s *= (T)10;

            if( !negative )
                s += (T)( *tmp - '0' );
            else
                s -= (T)( *tmp - '0' );

            tmp++;
        }

        return s;
    }

    T m_int;
};

// Helper function used to subtract pointers.
// Used to squelch warnings
template <typename P>
SafeInt<ptrdiff_t, SafeIntDefaultExceptionHandler> SafePtrDiff(const P* p1, const P* p2)
{
	return SafeInt<ptrdiff_t, SafeIntDefaultExceptionHandler>( p1 - p2 );
}

// Externally defined functions for the case of U op SafeInt< T, E >
template < typename T, typename U, typename E >
bool operator <( U lhs, SafeInt< T, E > rhs ) throw()
{
    return GreaterThanTest< T, U, ValidComparison< T, U >::method >::GreaterThan( (T)rhs, lhs );
}

template < typename T, typename U, typename E >
bool operator <( SafeInt< U, E > lhs, SafeInt< T, E > rhs ) throw()
{
    return GreaterThanTest< T, U, ValidComparison< T, U >::method >::GreaterThan( (T)rhs, (U)lhs );
}

// Greater than
template < typename T, typename U, typename E >
bool operator >( U lhs, SafeInt< T, E > rhs ) throw()
{
    return GreaterThanTest< U, T, ValidComparison< U, T >::method >::GreaterThan( lhs, (T)rhs );
}

template < typename T, typename U, typename E >
bool operator >( SafeInt< T, E > lhs, SafeInt< U, E > rhs ) throw()
{
    return GreaterThanTest< T, U, ValidComparison< T, U >::method >::GreaterThan( (T)lhs, (U)rhs );
}

// Greater than or equal
template < typename T, typename U, typename E >
bool operator >=( U lhs, SafeInt< T, E > rhs ) throw()
{
    return !GreaterThanTest< T, U, ValidComparison< T, U >::method >::GreaterThan( (T)rhs, lhs );
}

template < typename T, typename U, typename E >
bool operator >=( SafeInt< T, E > lhs, SafeInt< U, E > rhs ) throw()
{
    return !GreaterThanTest< U, T, ValidComparison< U, T >::method >::GreaterThan( (U)rhs, (T)lhs );
}

// Less than or equal
template < typename T, typename U, typename E >
bool operator <=( U lhs, SafeInt< T, E > rhs ) throw()
{
    return !GreaterThanTest< U, T, ValidComparison< U, T >::method >::GreaterThan( lhs, (T)rhs );
}

template < typename T, typename U, typename E >
bool operator <=( SafeInt< T, E > lhs, SafeInt< U, E > rhs ) throw()
{
    return !GreaterThanTest< T, U, ValidComparison< T, U >::method >::GreaterThan( (T)lhs, (U)rhs );
}

// equality
// explicit overload for bool
template < typename T, typename E >
bool operator ==( bool lhs, SafeInt< T, E > rhs ) throw()
{
    return lhs == ( (T)rhs == 0 ? false : true );
}

template < typename T, typename U, typename E >
bool operator ==( U lhs, SafeInt< T, E > rhs ) throw()
{
    return EqualityTest< T, U, ValidComparison< T, U >::method >::IsEquals((T)rhs, lhs);
}

template < typename T, typename U, typename E >
bool operator ==( SafeInt< T, E > lhs, SafeInt< U, E > rhs ) throw()
{
    return EqualityTest< T, U, ValidComparison< T, U >::method >::IsEquals( (T)lhs, (U)rhs );
}

//not equals
template < typename T, typename U, typename E >
bool operator !=( U lhs, SafeInt< T, E > rhs ) throw()
{
    return !EqualityTest< T, U, ValidComparison< T, U >::method >::IsEquals( rhs, lhs );
}

template < typename T, typename E >
bool operator !=( bool lhs, SafeInt< T, E > rhs ) throw()
{
    return ( (T)rhs == 0 ? false : true ) != lhs;
}

template < typename T, typename U, typename E >
bool operator !=( SafeInt< T, E > lhs, SafeInt< U, E > rhs ) throw()
{
    return !EqualityTest< T, U, ValidComparison< T, U >::method >::IsEquals( lhs, rhs );
}

// Modulus
template < typename T, typename U, typename E >
SafeInt< T, E > operator %( U lhs, SafeInt< T, E > rhs )
{
    // Value of return depends on sign of lhs
    // This one may not be safe - bounds check in constructor
    // if lhs is negative and rhs is unsigned, this will throw an exception.

    // Fast-track the simple case
    // same size and same sign
    if( sizeof(T) == sizeof(U) &&
        IntTraits< T >::isSigned == IntTraits< U >::isSigned )
    {
        if( rhs != 0 )
        {
            if( IntTraits< T >::isSigned && (T)rhs == -1 )
                return 0;

            return SafeInt< T, E >( (T)( lhs % (T)rhs ) );
        }

        E::SafeIntOnDivZero();
    }

    return SafeInt< T, E >( ( SafeInt< U, E >( lhs ) % (T)rhs ) );
}

// Multiplication
template < typename T, typename U, typename E > 
SafeInt< T, E > operator *( U lhs, SafeInt< T, E > rhs )
{
    T ret( 0 );
    MultiplicationHelper< T, U, MultiplicationMethod< T, U >::method >::MultiplyThrow< E >( (T)rhs, lhs, ret );
    return SafeInt< T, E >(ret);
}

// Division
template < typename T, typename U, typename E > SafeInt< T, E > operator /( U lhs, SafeInt< T, E > rhs )
{
    // Corner case - has to be handled seperately
    if( DivisionMethod< U, T >::method ==  DivisionState_UnsignedSigned )
    {
        if( (T)rhs > 0 )
            return SafeInt< T, E >( lhs/(T)rhs );

        // Now rhs is either negative, or zero
        if( (T)rhs != 0 )
        {
            if( sizeof( U ) >= 4 && sizeof( T ) <= sizeof( U ) )
            {
                // Problem case - normal casting behavior changes meaning
                // flip rhs to positive
                // any operator casts now do the right thing
                U tmp;
                if( sizeof(T) == 4 )
                    tmp = lhs/(U)(unsigned __int32)( -(T)rhs );
                else
                    tmp = lhs/(U)( -(T)rhs );

                if( tmp <= IntTraits< T >::maxInt )
                    return SafeInt< T, E >( -( (T)tmp ) );

                // Corner case
#pragma warning(push)
#pragma warning(disable:4307)
                // Note - this warning happens because we're not using partial
                // template specialization in this case. For any real cases where
                // this block isn't optimized out, the warning won't be present.
                if( tmp == (U)IntTraits< T >::maxInt + 1 )
                    return SafeInt< T, E >( IntTraits< T >::minInt );
#pragma warning(pop)

                E::SafeIntOnOverflow();
            }

            return SafeInt< T, E >(lhs/(T)rhs);
        }

        E::SafeIntOnDivZero();
    } // method == DivisionState_UnsignedSigned

    if( SafeIntCompare< T, U >::isBothSigned )
    {
        if( lhs == IntTraits< U >::minInt && (T)rhs == -1 )
        {
            // corner case of a corner case - lhs = min int, rhs = -1, 
            // but rhs is the return type, so in essence, we can return -lhs
            // if rhs is a larger type than lhs
            if( sizeof( U ) < sizeof( T ) )
                return SafeInt< T, E >( (T)( -(T)IntTraits< U >::minInt ) );

            // If rhs is smaller or the same size int, then -minInt won't work
            E::SafeIntOnOverflow();
        }
    }

    // Otherwise normal logic works with addition of bounds check when casting from U->T
    U ret;
    DivisionHelper< U, T, DivisionMethod< U, T >::method >::DivideThrow< E >( lhs, (T)rhs, ret );
    return SafeInt< T, E >( ret );
}

// Addition
template < typename T, typename U, typename E >
SafeInt< T, E > operator +( U lhs, SafeInt< T, E > rhs )
{
    T ret( 0 );
    AdditionHelper< T, U, AdditionMethod< T, U >::method >::AdditionThrow< E >( (T)rhs, lhs, ret );
    return SafeInt< T, E >( ret );
}

// Subtraction
template < typename T, typename U, typename E >
SafeInt< T, E > operator -( U lhs, SafeInt< T, E > rhs )
{
    T ret( 0 );
    SubtractionHelper< U, T, SubtractionMethod2< U, T >::method >::SubtractThrow< E >( lhs, rhs.Ref(), ret );

    return SafeInt< T, E >( ret );
}

// Overrides designed to deal with cases where a SafeInt is assigned out
// to a normal int - this at least makes the last operation safe
// +=
template < typename T, typename U, typename E >
T operator +=( T& lhs, SafeInt< U, E > rhs )
{
    T ret( 0 );
    AdditionHelper< T, U, AdditionMethod< T, U >::method >::AdditionThrow< E >( lhs, (U)rhs, ret );
    lhs = ret;
    return ret;
}

template < typename T, typename U, typename E >
T operator -=( T& lhs, SafeInt< U, E > rhs )
{
    T ret( 0 );
    SubtractionHelper< T, U, SubtractionMethod< T, U >::method >::SubtractThrow< E >( lhs, (U)rhs, ret );
    lhs = ret;
    return ret;
}

template < typename T, typename U, typename E >
T operator *=( T& lhs, SafeInt< U, E > rhs )
{
    T ret( 0 );
    MultiplicationHelper< T, U, MultiplicationMethod< T, U >::method >::MultiplyThrow< E >( lhs, (U)rhs, ret );
    lhs = ret;
    return ret;
}

template < typename T, typename U, typename E >
T operator /=( T& lhs, SafeInt< U, E > rhs )
{
    T ret( 0 );
    DivisionHelper< T, U, DivisionMethod< T, U >::method >::DivideThrow< E >( lhs, (U)rhs, ret );
    lhs = ret;
    return ret;
}

template < typename T, typename U, typename E >
T operator %=( T& lhs, SafeInt< U, E > rhs )
{
    T ret( 0 );
    ModulusHelper< T, U, ValidComparison< T, U >::method >::ModulusThrow< E >( lhs, (U)rhs, ret );
    lhs = ret;
    return ret;
}

template < typename T, typename U, typename E >
T operator &=( T& lhs, SafeInt< U, E > rhs ) throw()
{
    lhs = BinaryAndHelper< T, U, BinaryMethod< T, U >::method >::And( lhs, (U)rhs );
    return lhs;
}

template < typename T, typename U, typename E >
T operator ^=( T& lhs, SafeInt< U, E > rhs ) throw()
{
    lhs = BinaryXorHelper< T, U, BinaryMethod< T, U >::method >::Xor( lhs, (U)rhs );
    return lhs;
}

template < typename T, typename U, typename E >
T operator |=( T& lhs, SafeInt< U, E > rhs ) throw()
{
    lhs = BinaryOrHelper< T, U, BinaryMethod< T, U >::method >::Or( lhs, (U)rhs );
    return lhs;
}

template < typename T, typename U, typename E >
T operator <<=( T& lhs, SafeInt< U, E > rhs ) throw()
{
    lhs = (T)( SafeInt< T, E >( lhs ) << (U)rhs );
    return lhs;
}

template < typename T, typename U, typename E >
T operator >>=( T& lhs, SafeInt< U, E > rhs ) throw()
{
    lhs = (T)( SafeInt< T, E >( lhs ) >> (U)rhs );
    return lhs;
}

// Specific pointer overrides
// Note - this function makes no attempt to ensure
// that the resulting pointer is still in the buffer, only
// that no int overflows happened on the way to getting the new pointer
template < typename T, typename U, typename E >
T* operator +=( T*& lhs, SafeInt< U, E > rhs )
{
    // Cast the pointer to a number so we can do arithmetic
    SafeInt< size_t, E > ptr_val = reinterpret_cast< size_t >( lhs );
    // Check first that rhs is valid for the type of ptrdiff_t
    // and that multiplying by sizeof( T ) doesn't overflow a ptrdiff_t
    // Next, we need to add 2 SafeInts of different types, so unbox the ptr_diff
    // Finally, cast the number back to a pointer of the correct type
    lhs = reinterpret_cast< T* >( (size_t)( ptr_val + (ptrdiff_t)( SafeInt< ptrdiff_t, E >( rhs ) * sizeof( T ) ) ) );
    return lhs;
}

template < typename T, typename U, typename E >
T* operator *=( T* lhs, SafeInt< U, E > rhs )
{
    // This operator explicitly not supported
    C_ASSERT(false);
    return NULL;
}

template < typename T, typename U, typename E >
T* operator /=( T* lhs, SafeInt< U, E > rhs )
{
    // This operator explicitly not supported
    C_ASSERT( false );
    return NULL;
}

template < typename T, typename U, typename E >
T* operator %=( T* lhs, SafeInt< U, E > rhs )
{
    // This operator explicitly not supported
    C_ASSERT( false );
    return NULL;
}

template < typename T, typename U, typename E >
T* operator &=( T* lhs, SafeInt< U, E > rhs )
{
    // This operator explicitly not supported
    C_ASSERT( false );
    return NULL;
}

template < typename T, typename U, typename E >
T* operator ^=( T* lhs, SafeInt< U, E > rhs )
{
    // This operator explicitly not supported
    C_ASSERT( false );
    return NULL;
}

template < typename T, typename U, typename E >
T* operator |=( T* lhs, SafeInt< U, E > rhs )
{
    // This operator explicitly not supported
    C_ASSERT( false );
    return NULL;
}

template < typename T, typename U, typename E >
T* operator <<=( T* lhs, SafeInt< U, E > rhs )
{
    // This operator explicitly not supported
    C_ASSERT( false );
    return NULL;
}

template < typename T, typename U, typename E >
T* operator >>=( T* lhs, SafeInt< U, E > rhs )
{
    // This operator explicitly not supported
    C_ASSERT( false );
    return NULL;
}

// Shift operators
// NOTE - shift operators always return the type of the lhs argument

// Left shift
template < typename T, typename U, typename E >
SafeInt< U, E > operator <<( U lhs, SafeInt< T, E > bits ) throw()
{
    ShiftAssert( !IntTraits< T >::isSigned || (T)bits >= 0 );
    ShiftAssert( (T)bits < (int)IntTraits< U >::bitCount );

    return SafeInt< U, E >( (U)( lhs << (T)bits ) );
}

// Right shift
template < typename T, typename U, typename E >
SafeInt< U, E > operator >>( U lhs, SafeInt< T, E > bits ) throw()
{
    ShiftAssert( !IntTraits< T >::isSigned || (T)bits >= 0 );
    ShiftAssert( (T)bits < (int)IntTraits< U >::bitCount );

    return SafeInt< U, E >( (U)( lhs >> (T)bits ) );
}

// Bitwise operators
// This only makes sense if we're dealing with the same type and size
// demand a type T, or something that fits into a type T.

// Bitwise &
template < typename T, typename U, typename E >
SafeInt< T, E > operator &( U lhs, SafeInt< T, E > rhs ) throw()
{
    return SafeInt< T, E >( BinaryAndHelper< T, U, BinaryMethod< T, U >::method >::And( (T)rhs, lhs ) );
}

// Bitwise XOR
template < typename T, typename U, typename E >
SafeInt< T, E > operator ^( U lhs, SafeInt< T, E > rhs ) throw()
{
    return SafeInt< T, E >(BinaryXorHelper< T, U, BinaryMethod< T, U >::method >::Xor( (T)rhs, lhs ) );
}

// Bitwise OR
template < typename T, typename U, typename E >
SafeInt< T, E > operator |( U lhs, SafeInt< T, E > rhs ) throw()
{
    return SafeInt< T, E >( BinaryOrHelper< T, U, BinaryMethod< T, U >::method >::Or( (T)rhs, lhs ) );
}

// Main SafeBoxedInt class
// This class only throws exceptions when the result is invalid
// and it is unboxed in an unsafe manner
template < typename T, typename E = SafeIntDefaultExceptionHandler > class SafeBoxedInt
{
public:
    SafeBoxedInt() throw() : m_grfValid( 0 ), m_int( 0 )
    {
        C_ASSERT( IsInt< T >::isInt );
    }

    // Having a constructor for every type of int 
    // avoids having the compiler evade our checks when doing implicit casts - 
    // e.g., SafeBoxedInt<char> s = 0x7fffffff;
    SafeBoxedInt( T i ) throw() : m_grfValid( 0 ), m_int( i ) 
    {
        C_ASSERT( IsInt< T >::isInt );
        //always safe
    }

    // provide explicit boolean converter
    SafeBoxedInt( bool b ) throw() : m_grfValid( 0 )
    {
        C_ASSERT( IsInt< T >::isInt );
        m_int = b ? 1 : 0;
    }

    template < typename U > 
    SafeBoxedInt(SafeBoxedInt< U, E > u) throw() : m_grfValid( 0 )
    {
        C_ASSERT( IsInt< T >::isInt );
        
        SetDirty();
        // It is actually acceptable to assign an invalid SafeBoxedInt to another SafeBoxedInt
        // Cannot just cast to get back to the basic type, since if the incoming value is invalid
        // the cast will throw
        if( u.IsValid() && SafeCastHelper< T, U, GetCastMethod< T, U >::method >::Cast( u.Ref(), m_int ) )
            return;

        m_int = 0;
        SetInvalid();
    }

    template < typename U > 
    SafeBoxedInt( U i ) throw() : m_grfValid( 0 )
    {
        C_ASSERT( IsInt< T >::isInt );
        SetDirty();

        // check to see if i fits into type T
        if( SafeCastHelper< T, U, GetCastMethod< T, U >::method >::Cast( i, m_int ) )
            return;

        SetInvalid();
    }

    // Use this to test for a valid int prior to unboxing
#ifdef _DEBUG
    bool IsValid() throw() 
    {
        // If it's dirty and valid, unset the dirty flag
        UnsetDirty();
        return !( m_grfValid & m_InvalidFlag );
    }
#else
    bool IsValid() const throw() 
    {
        return !( m_grfValid & m_InvalidFlag );
    }
#endif

    // The destructor is intentionally commented out - no destructor 
    // vs. a do-nothing destructor makes a huge difference in
    // inlining characteristics. It wasn't doing anything anyway.
    // ~SafeBoxedInt(){};


    // now start overloading operators
    // assignment operator
    // constructors exist for all int types and will ensure safety

    template < typename U > 
    SafeBoxedInt< T, E >& operator =( U rhs ) throw()
    {
        // use constructor to test size
        // constructor is optimized to do minimal checking based
        // on whether T can contain U
        // note - do not change this 
        // Constructor properly handles dirty flag
        *this = SafeBoxedInt< T, E >( rhs );
        return *this;
    }

    SafeBoxedInt< T, E >& operator =( T rhs ) throw()
    {
        m_int = rhs;
        m_grfValid = 0;
        return *this;
    }

    template < typename U > 
    SafeBoxedInt< T, E >& operator =( SafeBoxedInt< U, E > rhs ) throw()
    {
        if( !rhs.IsValid() ||
            !SafeCastHelper< T, U, GetCastMethod< T, U >::method >::Cast( rhs.UnBoxSelf(), m_int ) )
        {
            SetInvalid();
        }

        SetDirty();
        return *this;
    }

    SafeBoxedInt< T, E >& operator =( SafeBoxedInt< T, E > rhs ) throw()
    {
        m_int = rhs.m_int;
        m_grfValid = rhs.m_grfValid;
        return *this;
    }

    // Casting operators
    // For SafeBoxedInt, casts are dangerous
    // There is no way to ensure that the object is valid AND that the cast is OK
    // which violates the guarantee that the class makes

    // Have to check both cast, and whether the object is valid
    template <typename U>
    bool UnBox( U& out ) const
    {
        assert( !IsDirty() );
        return ( TestIsValid() && 
                 SafeCastHelper< U, T, GetCastMethod< U, T >::method >::Cast( m_int, out ) );
    }

    // Use this to just unbox to type T
    // always OK if it is valid
    T UnBoxSelf() const
    {
        assert( !IsDirty() );
        if( !TestIsValid() )
           E::SafeIntOnOverflow();

        return m_int;
    }

    // If you need a pointer to the data
    // this could be dangerous, but allows you to correctly pass
    // instances of this class to APIs that take a pointer to an integer
    // also see overloaded address-of operator below
    // Note - we must check validity, since the pointer could be read
    T* Ptr() 
    { 
        assert( !IsDirty() );

        if( !TestIsValid() )
            E::SafeIntOnOverflow();

        return &m_int; 
    }

    const T* Ptr() const
    { 
        assert( !IsDirty() );

        if( !TestIsValid() )
            E::SafeIntOnOverflow();

        return &m_int; 
    }

    const T& Ref() const
    {
        assert( !IsDirty() );

        if( !TestIsValid() )
            E::SafeIntOnOverflow();

        return m_int; 
    }

    // Or if SafeBoxedInt< T, E >::Ptr() is inconvenient, use the overload
    // operator & 
    // This allows you to do unsafe things!
    // It is meant to allow you to more easily
    // pass a SafeBoxedInt into things like ReadFile
    T* operator &()
    { 
        assert( !IsDirty() );

        if( !TestIsValid() )
            E::SafeIntOnOverflow();

        return &m_int; 
    }

    const T* operator &() const
    { 
        assert( !IsDirty() );

        if( !TestIsValid() )
            E::SafeIntOnOverflow();

        return &m_int; 
    }

    // Unary operators
    bool operator !() const 
    {
        assert( !IsDirty() );

        if( !TestIsValid() )
            E::SafeIntOnOverflow();

        return (!m_int) ? true : false; 
    }
    
    // operator + (unary) 
    // note - normally, the '+' and '-' operators will upcast to a signed int
    // for T < 32 bits. This class changes behavior to preserve type
    const SafeBoxedInt< T, E >& operator +() const throw() { return *this; };

    //unary  - 
        
    SafeBoxedInt< T, E > operator -() const
    {
        if( IntTraits< T >::isSigned )
        {
            // corner case
            if( m_int != IntTraits< T >::minInt )
            {
                // cast prevents unneeded checks in the case of small ints
                return SafeBoxedInt< T, E >( (T)-m_int, TestIsValid() );
            }

            return SafeBoxedInt< T, E >( (T)-m_int, false );
        }

        // no-op for unsigned - generates warning 4146 at warning levels 2 and above
        // TODO - consider adding an assert, based on warning verbosity level
        return SafeBoxedInt< T, E >( (T)-m_int, TestIsValid() );
    }

    // prefix increment operator
    SafeBoxedInt< T, E >& operator ++()
    {
        SetDirty();
        if( m_int != IntTraits< T >::maxInt )
        {
            ++m_int;
            return *this;
        }

        SetInvalid();
        return *this;
    }
    
    // prefix decrement operator
    SafeBoxedInt< T, E >& operator --()
    {
        SetDirty();
        if( m_int != IntTraits< T >::minInt )
        {
            --m_int;
            return *this;
        }

        SetInvalid();
        return *this;
    }

    // note that postfix operators have inherently worse perf
    // characteristics

    // postfix increment operator
    SafeBoxedInt< T, E > operator ++( int ) // dummy arg to comply with spec
    {
        SetDirty();
        SafeBoxedInt< T, E > tmp( m_int, TestIsValid() );

        if( m_int == IntTraits< T >::maxInt )
            SetInvalid();
    
        m_int++;
        return tmp;
    }

    // postfix decrement operator
    SafeBoxedInt< T, E > operator --( int ) // dummy arg to comply with spec
    {
        SetDirty();
        SafeBoxedInt< T, E > tmp( m_int, TestIsValid() );

        if( m_int == IntTraits< T >::minInt )
            SetInvalid();
    
        m_int--;
        return tmp;
    }

    // One's complement
    // Note - this operator will normally change size to an int
    // cast in return improves perf and maintains type
    SafeBoxedInt< T, E > operator ~() const throw() { return SafeBoxedInt< T, E >( (T)~m_int, TestIsValid() ); }

    // Binary operators
    //
    // arithmetic binary operators
    // % modulus
    // * multiplication
    // / division
    // + addition
    // - subtraction
    //
    // For each of the arithmetic operators, you will need to 
    // use them as follows:
    //
    // SafeBoxedInt<char> c = 2;
    // SafeBoxedInt<int>  i = 3;
    //
    // SafeBoxedInt<int> i2 = i op (char)c;
    // OR
    // SafeBoxedInt<char> i2 = (int)i op c;
    //
    // The base problem is that if the lhs and rhs inputs are different SafeBoxedInt types
    // it is not possible in this implementation to determine what type of SafeBoxedInt
    // should be returned. You have to let the class know which of the two inputs
    // need to be the return type by forcing the other value to the base integer type.
    //
    // Note - as per feedback from Scott Meyers, I'm exploring how to get around this.
    // 3.0 update - I'm still thinking about this. It can be done with template metaprogramming,
    // but it is tricky, and there's a perf vs. correctness tradeoff where the right answer
    // is situational.
    //
    // The case of:
    //
    // SafeBoxedInt< T, E > i, j, k;
    // i = j op k;
    //
    // works just fine and no unboxing is needed because the return type is not ambiguous.

    // Modulus
    // Modulus has some convenient properties - 
    // first, the magnitude of the return can never be
    // larger than the lhs operand, and it must be the same sign
    // as well. It does, however, suffer from the same promotion
    // problems as comparisons, division and other operations
    template < typename U >
    SafeBoxedInt< T, E > operator %( U rhs ) const  throw()
    {
        T result( 0 );
        bool fIsValid = TestIsValid() && 
                        ( SafeIntNoError == ModulusHelper< T, U, ValidComparison< T, U >::method >::Modulus( m_int, rhs, result ) );

        return SafeBoxedInt< T, E >( result,  fIsValid );
    }

    SafeBoxedInt< T, E > operator %( SafeBoxedInt< T, E > rhs ) const  throw()
    {
        T result ( 0 );
        bool fIsValid = TestIsValid() &&
                        rhs.IsValid() && 
             ( SafeIntNoError == ModulusHelper< T, T, ValidComparison< T, T >::method >::Modulus( m_int, rhs.Ref(), result ) );

        return SafeBoxedInt< T, E >( result, fIsValid );
    }

    // Modulus assignment
    template < typename U >
    SafeBoxedInt< T, E >& operator %=( U rhs ) throw()
    {
        SetDirty();
        if( ModulusHelper< T, U, ValidComparison< T, U >::method >::Modulus( m_int, rhs, m_int ) != SafeIntNoError )
            SetInvalid();

        return *this;
    }

    template < typename U >
    SafeBoxedInt< T, E >& operator %=( SafeBoxedInt< U, E > rhs ) throw()
    {
        SetDirty();
        if( !rhs.IsValid() ||
            ModulusHelper< T, U, ValidComparison< T, U >::method >::Modulus( m_int, rhs.UnBoxSelf(), m_int ) != SafeIntNoError )
        {
            SetInvalid();
        }
        return *this;
    }

    // Multiplication
    template < typename U >
    SafeBoxedInt< T, E > operator *( U rhs ) const throw()
    {
        T ret( 0 );
        bool fIsValid = TestIsValid() && 
                        MultiplicationHelper< T, U, MultiplicationMethod< T, U >::method >::Multiply( m_int, rhs, ret );

        return SafeBoxedInt< T, E >( ret, fIsValid );
    }

    SafeBoxedInt< T, E > operator *( SafeBoxedInt< T, E > rhs ) const throw()
    {
        T ret( 0 );
        bool fIsValid = TestIsValid() && 
                        rhs.IsValid() && 
                        MultiplicationHelper< T, T, MultiplicationMethod< T, T >::method >::Multiply( m_int, rhs.UnBoxSelf(), ret );

        return SafeBoxedInt< T, E >( ret, fIsValid );
    }

    // Multiplication assignment
    SafeBoxedInt< T, E >& operator *=( SafeBoxedInt< T, E > rhs ) throw()
    {
        SetDirty();
        bool fIsValid = TestIsValid() && 
                        rhs.IsValid() && 
                        MultiplicationHelper< T, T, MultiplicationMethod< T, T >::method >::Multiply( m_int, rhs.UnBoxSelf(), m_int );

        if( !fIsValid )
            SetInvalid();

        return *this;
    }

    template < typename U > 
    SafeBoxedInt< T, E >& operator *=( U rhs ) throw()
    {
        SetDirty();
        bool fIsValid = TestIsValid() && 
                        MultiplicationHelper< T, U, MultiplicationMethod< T, U >::method >::Multiply( m_int, rhs, m_int );

        if( !fIsValid )
            SetInvalid();

        return *this;
    }

    template < typename U > 
    SafeBoxedInt< T, E >& operator *=( SafeBoxedInt< U, E > rhs ) throw()
    {
        SetDirty();
        bool fIsValid = TestIsValid() && 
                        rhs.IsValid() && 
                        MultiplicationHelper< T, U, MultiplicationMethod< T, U >::method >::Multiply( m_int, rhs.Ref(), m_int );

        if( !fIsValid )
            SetInvalid();

        return *this;
    }

    // Division
    template < typename U >
    SafeBoxedInt< T, E > operator /( U rhs ) const throw()
    {
        T ret( 0 );
        bool fIsValid = TestIsValid() && 
                        ( SafeIntNoError == DivisionHelper< T, U, DivisionMethod< T, U >::method >::Divide( m_int, rhs, ret ) );
        
        return SafeBoxedInt< T, E >( ret, fIsValid );
    }

    SafeBoxedInt< T, E > operator /( SafeBoxedInt< T, E > rhs ) const throw()
    {
        T ret( 0 );
        bool fIsValid = TestIsValid() && 
                        rhs.IsValid() && 
                        ( SafeIntNoError == DivisionHelper< T, T, DivisionMethod< T, T >::method >::Divide( m_int, rhs.Ref(), ret ) );

        return SafeBoxedInt< T, E >( ret, fIsValid );
    }

    // Division assignment
    SafeBoxedInt< T, E >& operator /=( SafeBoxedInt< T, E > rhs ) throw()
    {
        SetDirty();
        bool fIsValid = TestIsValid() && 
                        rhs.IsValid() && 
                        ( SafeIntNoError == DivisionHelper< T, T, DivisionMethod< T, T >::method >::Divide( m_int, rhs.Ref(), m_int ) );

        if( !fIsValid )
            SetInvalid();

        return *this;
    }

    template < typename U > SafeBoxedInt< T, E >& operator /=( U rhs ) throw()
    {
        SetDirty();
        bool fIsValid = TestIsValid() && 
                        ( SafeIntNoError == DivisionHelper< T, U, DivisionMethod< T, U >::method >::Divide( m_int, rhs, m_int ) );

        if( !fIsValid )
            SetInvalid();

        return *this;
    }

    template < typename U > SafeBoxedInt< T, E >& operator /=( SafeBoxedInt< U, E > rhs ) throw()
    {
        SetDirty();
        bool fIsValid = TestIsValid() && 
                        rhs.IsValid() && 
                        ( SafeIntNoError == DivisionHelper< T, U, DivisionMethod< T, U >::method >::Divide( m_int, rhs.Ref(), m_int ) );

        if( !fIsValid )
            SetInvalid();

        return *this;
    }

    // For addition and subtraction

    // Addition
    SafeBoxedInt< T, E > operator +( SafeBoxedInt< T, E > rhs ) const throw()
    {
        T ret( 0 );
        bool fIsValid = TestIsValid() &&
                        rhs.IsValid() &&
                        AdditionHelper< T, T, AdditionMethod< T, T >::method >::Addition( m_int, rhs.Ref(), ret );

        return SafeBoxedInt< T, E >( ret, fIsValid );
    }

    template < typename U >
    SafeBoxedInt< T, E > operator +( U rhs ) const throw()
    {
        T ret( 0 );
        bool fIsValid = TestIsValid() &&
                        AdditionHelper< T, U, AdditionMethod< T, U >::method >::Addition( m_int, rhs, ret );

        return SafeBoxedInt< T, E >( ret, fIsValid );
    }

    // Addition assignment
    SafeBoxedInt< T, E >& operator +=( SafeBoxedInt< T, E > rhs ) throw()
    {
        SetDirty();
        bool fIsValid = TestIsValid() &&
                        rhs.IsValid() &&
                        AdditionHelper< T, T, AdditionMethod< T, T >::method >::Addition( m_int, rhs.Ref(), m_int );

        if( !fIsValid )
            SetInvalid();

        return *this;
    }

    template < typename U >
    SafeBoxedInt< T, E >& operator +=( U rhs ) throw()
    {
        SetDirty();
        bool fIsValid = TestIsValid() &&
                        AdditionHelper< T, U, AdditionMethod< T, U >::method >::Addition( m_int, rhs, m_int );

        if( !fIsValid )
            SetInvalid();

        return *this;
    }

    template < typename U > 
    SafeBoxedInt< T, E >& operator +=( SafeBoxedInt< U, E > rhs ) throw()
    {
        SetDirty();
        bool fIsValid = TestIsValid() &&
                        rhs.IsValid() &&
                        AdditionHelper< T, U, AdditionMethod< T, U >::method >::Addition( m_int, rhs.Ref(), m_int );

        if( !fIsValid )
            SetInvalid();

        return *this;
    }

    // Subtraction
    template < typename U >
    SafeBoxedInt< T, E > operator -( U rhs ) const throw()
    {
        T ret( 0 );
        bool fIsValid = TestIsValid() &&
                        SubtractionHelper< T, U, SubtractionMethod< T, U >::method >::Subtract( m_int, rhs, ret );

        return SafeBoxedInt< T, E >( ret, fIsValid );
    }

    SafeBoxedInt< T, E > operator -( SafeBoxedInt< T, E > rhs ) const throw()
    {
        T ret( 0 );
        bool fIsValid = TestIsValid() &&
                        rhs.IsValid() &&
                        SubtractionHelper< T, T, SubtractionMethod< T, T >::method >::Subtract( m_int, rhs.Ref(), ret );

        return SafeBoxedInt< T, E >( ret, fIsValid );
    }

    // Subtraction assignment
    SafeBoxedInt< T, E >& operator -=( SafeBoxedInt< T, E > rhs ) throw()
    {
        SetDirty();
        bool fIsValid = TestIsValid() &&
                        rhs.IsValid() &&
                        SubtractionHelper< T, T, SubtractionMethod< T, T >::method >::Subtract( m_int, rhs.Ref(), m_int );

        if( !fIsValid )
            SetInvalid();

        return *this;
    }

    template < typename U > 
    SafeBoxedInt< T, E >& operator -=( U rhs ) throw()
    {
        SetDirty();
        bool fIsValid = TestIsValid() &&
                        SubtractionHelper< T, U, SubtractionMethod< T, U >::method >::Subtract( m_int, rhs, m_int );

        if( !fIsValid )
            SetInvalid();

        return *this;
    }

    template < typename U > 
    SafeBoxedInt< T, E >& operator -=( SafeBoxedInt< U, E > rhs ) throw()
    {
        SetDirty();
        bool fIsValid = TestIsValid() &&
                        rhs.IsValid() &&
                        SubtractionHelper< T, U, SubtractionMethod< T, U >::method >::Subtract( m_int, rhs.Ref(), m_int );

        if( !fIsValid )
            SetInvalid();

        return *this;
    }

    // Comparison operators
    // Additional overloads defined outside the class 
    // to allow for cases where the SafeBoxedInt is the rhs value
    // For the boxed version of the class, the internal value isn't guaranteed
    // to be valid, and this can convert the object to a bool, thus must throw

    // Less than
    template < typename U >
    bool operator <( U rhs ) const
    {
        assert( !IsDirty() );
        if( !TestIsValid() )
            E::SafeIntOnOverflow();

        return GreaterThanTest< U, T, ValidComparison< U, T >::method >::GreaterThan( rhs, m_int );
    }

    bool operator <( SafeBoxedInt< T, E > rhs ) const
    {
        assert( !IsDirty() );
        if( !TestIsValid() || !rhs.IsValid() )
            E::SafeIntOnOverflow();
    
        return m_int < rhs.UnBoxSelf();
    }

    // Greater than or eq.
    template < typename U >
    bool operator >=( U rhs ) const
    {
        assert( !IsDirty() );
        if( !TestIsValid() )
            E::SafeIntOnOverflow();

        return !GreaterThanTest< U, T, ValidComparison< U, T >::method >::GreaterThan( rhs, m_int );
    }

    bool operator >=( SafeBoxedInt< T, E > rhs ) const
    {
        assert( !IsDirty() );
        if( !TestIsValid() || !rhs.IsValid() )
            E::SafeIntOnOverflow();

        return m_int >= rhs.UnBoxSelf();
    }

    // Greater than
    template < typename U >
    bool operator >( U rhs ) const
    {
        assert( !IsDirty() );
        if( !TestIsValid() )
            E::SafeIntOnOverflow();

        return GreaterThanTest< T, U, ValidComparison< T, U >::method >::GreaterThan( m_int, rhs );
    }

    bool operator >( SafeBoxedInt< T, E > rhs ) const
    {
        assert( !IsDirty() );
        if( !TestIsValid() || !rhs.IsValid() )
            E::SafeIntOnOverflow();

        return m_int > rhs.UnBoxSelf();
    }

    // Less than or eq.
    template < typename U >
    bool operator <=( U rhs ) const
    {
        assert( !IsDirty() );
        if( !TestIsValid() )
            E::SafeIntOnOverflow();

        return !GreaterThanTest< T, U, ValidComparison< T, U >::method >::GreaterThan( m_int, rhs );
    }

    bool operator <=( SafeBoxedInt< T, E > rhs ) const
    {
        assert( !IsDirty() );
        if( !TestIsValid() || !rhs.IsValid() )
            E::SafeIntOnOverflow();

        return m_int <= rhs.UnBoxSelf();
    }

    // Equality
    template < typename U >
    bool operator ==( U rhs ) const
    {
        assert( !IsDirty() );
        if( !TestIsValid() )
            E::SafeIntOnOverflow();

        return EqualityTest< T, U, ValidComparison< T, U >::method >::IsEquals( m_int, rhs );
    }

    // Need an explicit override for type bool
    bool operator ==( bool rhs ) const
    {
        assert( !IsDirty() );
        if( !TestIsValid() )
            E::SafeIntOnOverflow();

        return ( m_int == 0 ? false : true ) == rhs;
    }

    bool operator ==( SafeBoxedInt< T, E > rhs ) const
    { 
        assert( !IsDirty() );
        if( !TestIsValid() || !rhs.IsValid() )
            E::SafeIntOnOverflow();

        return m_int == rhs.UnBoxSelf();
    }

    // != operators
    template < typename U >
    bool operator !=( U rhs ) const 
    {
        assert( !IsDirty() );
        if( !TestIsValid() )
            E::SafeIntOnOverflow();

        return !EqualityTest< T, U, ValidComparison< T, U >::method >::IsEquals( m_int, rhs );
    }

    bool operator !=( bool b ) const
    {
        assert( !IsDirty() );
        if( !TestIsValid() )
            E::SafeIntOnOverflow();

        return ( m_int == 0 ? false : true ) != b;
    }

    bool operator !=( SafeBoxedInt< T, E > rhs ) const
    {
        assert( !IsDirty() );
        if( !TestIsValid() || !rhs.IsValid() )
            E::SafeIntOnOverflow();

        return m_int != rhs.UnBoxSelf(); 
    }

    // Shift operators
    // Note - shift operators ALWAYS return the same type as the lhs
    // specific version for SafeBoxedInt< T, E > not needed - 
    // code path is exactly the same as for SafeBoxedInt< U, E > as rhs

    // Left shift
    // Also, shifting > bitcount is undefined - trap in debug
    template < typename U > 
    SafeBoxedInt< T, E > operator <<( U bits ) const throw()
    {
        ShiftAssert( !IntTraits< U >::isSigned || bits >= 0 );        
        ShiftAssert( bits < (int)IntTraits< T >::bitCount );

        return SafeBoxedInt< T, E >( (T)( m_int << bits ), TestIsValid() );
    }

    template < typename U > 
    SafeBoxedInt< T, E > operator <<( SafeBoxedInt< U, E > bits ) const throw()
    {
        bool fIsValid = TestIsValid() && bits.IsValid();

        ShiftAssert( !IntTraits< U >::isSigned || bits >= 0 );
        ShiftAssert( bits.UnBoxSelf() < (int)IntTraits< T >::bitCount );

        return SafeBoxedInt< T, E >( (T)( m_int << bits.UnBoxSelf() ), fIsValid );
    }

    // Left shift assignment

    template < typename U >
    SafeBoxedInt< T, E >& operator <<=( U bits ) throw()
    {
        SetDirty();
        ShiftAssert( !IntTraits< U >::isSigned || bits >= 0 );
        ShiftAssert( bits < (int)IntTraits< T >::bitCount );

        m_int <<= bits;
        return *this;
    }

    template < typename U >
    SafeBoxedInt< T, E >& operator <<=( SafeBoxedInt< U, E > bits ) throw()
    {
        if( !bits.IsValid() )
            SetInvalid();

        SetDirty();
        ShiftAssert( !IntTraits< U >::isSigned || bits >= 0 );
        ShiftAssert( bits.UnBoxSelf() < (int)IntTraits< T >::bitCount );

        m_int <<= bits.UnBoxSelf();
        return *this;
    }

    // Right shift
    template < typename U > 
    SafeBoxedInt< T, E > operator >>( U bits ) const throw()
    {
        ShiftAssert( !IntTraits< U >::isSigned || bits >= 0 );
        ShiftAssert( bits < (int)IntTraits< T >::bitCount );

        return SafeBoxedInt< T, E >( (T)( m_int >> bits ), TestIsValid() );
    }

    template < typename U > 
    SafeBoxedInt< T, E > operator >>( SafeBoxedInt< U, E > bits ) const throw()
    {
        bool fIsValid = TestIsValid() && bits.IsValid();

        ShiftAssert( !IntTraits< U >::isSigned || bits >= 0 );
        ShiftAssert( bits.UnBoxSelf() < (int)IntTraits< T >::bitCount );

        return SafeBoxedInt< T, E >( (T)(m_int >> bits.UnBoxSelf()), fIsValid );
    }

    // Right shift assignment
    template < typename U >
    SafeBoxedInt< T, E >& operator >>=( U bits ) throw()
    {
        SetDirty();
        ShiftAssert( !IntTraits< U >::isSigned || bits >= 0 );
        ShiftAssert( bits < (int)IntTraits< T >::bitCount );

        m_int >>= bits;
        return *this;
    }

    template < typename U >
    SafeBoxedInt< T, E >& operator >>=( SafeBoxedInt< U, E > bits ) throw()
    {
        if( !bits.IsValid() )
            SetInvalid();

        SetDirty();
        ShiftAssert( !IntTraits< U >::isSigned || bits >= 0 );
        ShiftAssert( bits.UnBoxSelf() < (int)IntTraits< T >::bitCount );

        m_int >>= bits.UnBoxSelf();
        return *this;
    }

    // Bitwise operators
    // This only makes sense if we're dealing with the same type and size
    // demand a type T, or something that fits into a type T

    // Bitwise &
    SafeBoxedInt< T, E > operator &( SafeBoxedInt< T, E > rhs ) const throw()
    {
        bool fIsValid = TestIsValid() && rhs.IsValid();

        return SafeBoxedInt< T, E >( m_int & rhs.UnBoxSelf(), fIsValid );
    }

    template < typename U >
    SafeBoxedInt< T, E > operator &( U rhs ) const throw()
    {
        // we want to avoid setting bits by surprise
        // consider the case of lhs = int, value = 0xffffffff
        //                      rhs = char, value = 0xff
        //
        // programmer intent is to get only the lower 8 bits
        // normal behavior is to upcast both sides to an int
        // which then sign extends rhs, setting all the bits

        // If you land in the assert, this is because the bitwise operator
        // was causing unexpected behavior. Fix is to properly cast your inputs
        // so that it works like you meant, not unexpectedly

        return SafeBoxedInt< T, E >( BinaryAndHelper< T, U, BinaryMethod< T, U >::method >::And( m_int, rhs ), TestIsValid() );
    }

    // Bitwise & assignment
    SafeBoxedInt< T, E >& operator &=( SafeBoxedInt< T, E > rhs ) throw()
    {
        SetDirty();
        if( rhs.IsValid() )
            m_int &= rhs.UnBoxSelf();
        else
            SetInvalid();

        return *this;
    }

    template < typename U > 
    SafeBoxedInt< T, E >& operator &=( U rhs ) throw()
    {
        SetDirty();
        m_int = BinaryAndHelper< T, U, BinaryMethod< T, U >::method >::And( m_int, rhs );
        return *this;
    }

    template < typename U > 
    SafeBoxedInt< T, E >& operator &=( SafeBoxedInt< U, E > rhs ) throw()
    {
        SetDirty();
        if( rhs.IsValid() )
            m_int = BinaryAndHelper< T, U, BinaryMethod< T, U >::method >::And( m_int, (U)rhs );
        else
            SetInvalid();

        return *this;
    }

    // XOR
    SafeBoxedInt< T, E > operator ^( SafeBoxedInt< T, E > rhs ) const throw()
    {
        return SafeBoxedInt< T, E >( (T)( m_int ^ rhs.UnBoxSelf() ), ( TestIsValid() && rhs.IsValid() ) );
    }

    template < typename U >
    SafeBoxedInt< T, E > operator ^( U rhs ) const throw()
    {
        // If you land in the assert, this is because the bitwise operator
        // was causing unexpected behavior. Fix is to properly cast your inputs
        // so that it works like you meant, not unexpectedly

        return SafeBoxedInt< T, E >( BinaryXorHelper< T, U, BinaryMethod< T, U >::method >::Xor( m_int, rhs ), TestIsValid() );
    }

    // XOR assignment
    SafeBoxedInt< T, E >& operator ^=( SafeBoxedInt< T, E > rhs ) throw()
    {
        SetDirty();
        if( !rhs.IsValid() )
            SetInvalid();

        m_int ^= rhs.UnBoxSelf();
        return *this;
    }

    template < typename U > 
    SafeBoxedInt< T, E >& operator ^=( U rhs ) throw()
    {
        SetDirty();
        m_int = BinaryXorHelper< T, U, BinaryMethod< T, U >::method >::Xor( m_int, rhs );
        return *this;
    }

    template < typename U > 
    SafeBoxedInt< T, E >& operator ^=( SafeBoxedInt< U, E > rhs ) throw()
    {
        SetDirty();
        if( rhs.IsValid() )
            m_int = BinaryXorHelper< T, U, BinaryMethod< T, U >::method >::Xor( m_int, (U)rhs );
        else
            SetInvalid();

        return *this;
    }

    // bitwise OR
    SafeBoxedInt< T, E > operator |( SafeBoxedInt< T, E > rhs ) const throw()
    {
        return SafeBoxedInt< T, E >( (T)( m_int | rhs.UnBoxSelf() ), ( TestIsValid() && rhs.IsValid() ) );
    }

    template < typename U >
    SafeBoxedInt< T, E > operator |( U rhs ) const throw()
    {
        return SafeBoxedInt< T, E >( BinaryOrHelper< T, U, BinaryMethod< T, U >::method >::Or( m_int, rhs ), TestIsValid() );
    }

    // bitwise OR assignment
    SafeBoxedInt< T, E >& operator |=( SafeBoxedInt< T, E > rhs ) throw()
    {
        if( rhs.IsValid() )
            m_int |= rhs.UnBoxSelf();
        else
            SetInvalid();

        return *this;
    }

    template < typename U > 
    SafeBoxedInt< T, E >& operator |=( U rhs ) throw()
    {
        SetDirty();
        m_int = BinaryOrHelper< T, U, BinaryMethod< T, U >::method >::Or( m_int, rhs );
        return *this;
    }

    template < typename U > 
    SafeBoxedInt< T, E >& operator |=( SafeBoxedInt< U, E > rhs ) throw()
    {
        SetDirty();
        if( rhs.IsValid() )
            m_int = BinaryOrHelper< T, U, BinaryMethod< T, U >::method >::Or( m_int, (U)rhs );
        else
            SetInvalid();

        return *this;
    }

    // Logical operators
    // Logical operators are like comparison operators
    // because the return value is the same regardless of 
    // what type is on the RHS or the LHS

    // and as it turns out, we need some overloads
    // bool constructor has a little overhead
    // possible combinations:
    //  SafeBoxedInt< T, E >, SafeBoxedInt< T, E > - internal
    //  SafeBoxedInt< T, E >, U            - internal
    //  SafeBoxedInt< T, E >, bool         - internal
    //  bool, SafeBoxedInt< T, E >         - external
    //  U, SafeBoxedInt< T, E >            - external
    //  SafeBoxedInt< U, E >, SafeBoxedInt< T, E > - external

    // Logical OR
    bool operator ||( SafeBoxedInt< T, E > rhs ) const
    {
        assert( !IsDirty() );
        if( !rhs.IsValid() || !TestIsValid() )
            E::SafeIntOnOverflow();

        return m_int || (T)rhs;
    }

    template < typename U >
    bool operator ||( U rhs ) const
    {
        assert( !IsDirty() );
        if( !TestIsValid() )
            E::SafeIntOnOverflow();

        return m_int || rhs;
    }

    bool operator ||( bool rhs ) const
    {
        assert( !IsDirty() );
        if( !TestIsValid() )
            E::SafeIntOnOverflow();

        return m_int || rhs;
    }

    //logical &&
    bool operator &&( SafeBoxedInt< T, E > rhs ) const
    {
        assert( !IsDirty() );
        if( !rhs.IsValid() || !TestIsValid() )
            E::SafeIntOnOverflow();

        return m_int && (T)rhs;
    }

    template < typename U >
    bool operator &&( U rhs ) const
    {
        assert( !IsDirty() );
        if( !TestIsValid() )
            E::SafeIntOnOverflow();

        return m_int && rhs;
    }

    bool operator &&( bool rhs ) const
    {
        assert( !IsDirty() );
        if( !TestIsValid() )
            E::SafeIntOnOverflow();

        return m_int && rhs;
    }

    // Miscellaneous helper functions
    SafeBoxedInt< T, E > Min( SafeBoxedInt< T, E > test, SafeBoxedInt< T, E > floor = SafeBoxedInt< T, E >( IntTraits< T >::minInt ) ) const throw()
    {
        T tmp(0);

        if( test.IsValid() )
            tmp = (T)test < m_int ? (T)test : m_int;

        return SafeInt< T, E >( ( tmp < floor ? floor : tmp ), ( TestIsValid() && test.IsValid() ) );
    }

    SafeBoxedInt< T, E > Max( SafeBoxedInt< T, E > test, SafeBoxedInt< T, E > upper = SafeBoxedInt< T, E >( IntTraits< T >::maxInt ) ) const throw()
    {
        T tmp(0);
        if( test.IsValid() )
            tmp = (T)test > m_int ? (T)test : m_int;

        return SafeBoxedInt< T, E >( (tmp > upper ? upper : tmp), ( TestIsValid() && test.IsValid() ) );
    }

    void Swap( SafeBoxedInt< T, E >& with ) throw()
    {
        SetDirty();
        SafeInt< T, E > temp( *this );
        *this = with.m_int;
        with = temp;
    }

    static SafeBoxedInt< T, E > SafeAtoI( const char* input )
    {
        return SafeTtoI( input );
    }

    static SafeBoxedInt< T, E > SafeWtoI( const wchar_t* input )
    {
        return SafeTtoI( input );
    }

    template < int bits >
    const SafeBoxedInt< T, E >& Align() throw()
    {
        SetDirty();
        // Zero is always aligned
        if( m_int == 0 )
            return *this;

        ShiftAssert( bits < (int)IntTraits< T >::bitCount - 1 && bits > 0 );

        const T AlignValue = ( (T)1 << bits ) - 1;

        m_int = ( m_int + AlignValue ) & ~AlignValue;

        if( m_int == 0 )
            SetInvalid();

        return *this;
    }

    // Commonly needed alignments:
    const SafeBoxedInt< T, E >& Align2()  throw() { return Align< 1 >(); }
    const SafeBoxedInt< T, E >& Align4()  throw() { return Align< 2 >(); }
    const SafeBoxedInt< T, E >& Align8()  throw() { return Align< 3 >(); }
    const SafeBoxedInt< T, E >& Align16() throw() { return Align< 4 >(); }
    const SafeBoxedInt< T, E >& Align32() throw() { return Align< 5 >(); }
    const SafeBoxedInt< T, E >& Align64() throw() { return Align< 6 >(); }

#ifdef _DEBUG
    // Note - 
    // The reasoning for the following functions is that if you're using the SafeBoxedInt
    // version, then exceptions aren't how you want to handle errors. So the proper use would be to
    // always call SafeBoxedInt::IsValid before doing anything that might cause the object to unbox.
    // The trick here is that what causes it to unbox might not be obvious - comparison operators
    // cause an unboxing, since comparing an invalid int to something else is an undefined operation.
    // Thus the correct usage would be to:
    // 1) Declare the SafeBoxedInt
    // 2) Do whatever you need to do in terms of manipulating it
    // 3) Check whether it is valid
    // 4) Then unbox and use it
    //
    // These functions, along with the asserts, will help make sure your code is robust against
    // improper use of the class.
    //
    // This should get set under the following conditions
    // 1) Any time the internal value has changed
    // 2) If the m_InvalidFlag has been set
    void SetDirty()
    {
        m_grfValid |= m_DirtyFlag;
    }

#ifdef ALLOW_FORCE_UNSET_DIRTY
    void ForceUnsetDirty()
    {
       m_grfValid &= (T)~m_DirtyFlag;
    }
#endif

    void UnsetDirty()
    {
        if( TestIsValid() )
            m_grfValid &= (T)~m_DirtyFlag;
    }

    bool IsDirty() const
    {
        return !!( m_grfValid & m_DirtyFlag );
    }

    // For use by friend methods so that you don't unset the dirty flag
    // This should not be used externally
    // The difference between this and IsValid only matter in debug mode
    bool TestIsValid() const { return !( m_grfValid & m_InvalidFlag ); }

#else
    void SetDirty() {}
#ifdef ALLOW_FORCE_UNSET_DIRTY
    void ForceUnsetDirty() {}
#endif
    void UnsetDirty() {}
    bool IsDirty() const { return false; }
    bool TestIsValid() const { return IsValid(); }
#endif

	// We need a way for the friend methods external to
	// the class to return a guaranteed invalid instance
	static SafeBoxedInt< T, E > InvalidBoxedInt()
	{
		return SafeBoxedInt< T, E >( 0, false );
	}

private:
    
    // This is almost certainly not the best optimized version of atoi,
    // but it does not display a typical bug where it isn't possible to set MinInt
    // and it won't allow you to overflow your integer.
    // This is here because it is useful, and it is an example of what
    // can be done easily with SafeBoxedInt.
    template < typename U >
    static SafeBoxedInt< T, E > SafeTtoI( U* input ) throw()
    {
        U* tmp  = input;
        SafeBoxedInt< T, E > s;
        bool negative = false;
        
        // Bad input, or empty string
        if( input == NULL || input[0] == 0 )
            return SafeBoxedInt< T, E >( 0, false );

        switch( *tmp )
        {
        case '-':
            tmp++;
            negative = true;
            break;
        case '+':
            tmp++;
            break;
        }

        while( *tmp != 0 )
        {
            if( *tmp < '0' || *tmp > '9' )
                break;
            
            if( !s.IsValid() )
               break;

            if( s.UnBoxSelf() != 0 )
                s *= (T)10;

            if( !negative )
                s += (T)( *tmp - '0' );
            else
                s -= (T)( *tmp - '0' );

            tmp++;
        }

        return s;
    }

    void SetInvalid()
    {
        // TO-DO - add in flag to determine verbosity of this assert
//        assert( false );
        // Set the bit for an invalid value and the dirty flag
        // Total of 8 bits we can reliably use for flags
        m_grfValid |= ( m_InvalidFlag | m_DirtyFlag ); 
    }

    SafeBoxedInt( T t, bool fIsValid ) throw() : m_grfValid( 0 )
    {
        m_int = t;

        if( !fIsValid )
            m_grfValid |= m_InvalidFlag;

        SetDirty();
    }

    T m_int;
    
    static const T m_InvalidFlag = 0x01;
    static const T m_DirtyFlag   = 0x02;

    T m_grfValid;
};

// Externally defined functions for the case of U op SafeBoxedInt< T, E >
template < typename T, typename U, typename E >
bool operator <( U lhs, const SafeBoxedInt< T, E >& rhs )
{
	assert( !rhs.IsDirty() );

    if( !rhs.TestIsValid() )
        E::SafeIntOnOverflow();

    return GreaterThanTest< T, U, ValidComparison< T, U >::method >::GreaterThan( rhs.UnBoxSelf(), lhs );
}

template < typename T, typename U, typename E >
bool operator <( const SafeBoxedInt< U, E >& lhs, const SafeBoxedInt< T, E >& rhs )
{
	assert( !lhs.IsDirty() && !rhs.IsDirty() );

    if( !rhs.TestIsValid() || !lhs.TestIsValid() )
        E::SafeIntOnOverflow();

    return GreaterThanTest< T, U, ValidComparison< T, U >::method >::GreaterThan( rhs.UnBoxSelf(), lhs.UnBoxSelf() );
}

// Greater than
template < typename T, typename U, typename E >
bool operator >( U lhs, const SafeBoxedInt< T, E >& rhs )
{
	assert( !rhs.IsDirty() );

	if( !rhs.TestIsValid() )
        E::SafeIntOnOverflow();

    return GreaterThanTest< U, T, ValidComparison< U, T >::method >::GreaterThan( lhs, rhs.UnBoxSelf() );
}

template < typename T, typename U, typename E >
bool operator >( const SafeBoxedInt< T, E >& lhs, const SafeBoxedInt< U, E >& rhs )
{
	assert( !lhs.IsDirty() && !rhs.IsDirty() );

	if( !rhs.TestIsValid() || !lhs.TestIsValid() )
        E::SafeIntOnOverflow();

    return GreaterThanTest< T, U, ValidComparison< T, U >::method >::GreaterThan( lhs.UnBoxSelf(), rhs.UnBoxSelf() );
}

// Greater than or equal
template < typename T, typename U, typename E >
bool operator >=( U lhs, const SafeBoxedInt< T, E >& rhs )
{
	assert( !rhs.IsDirty() );

	if( !rhs.TestIsValid() )
        E::SafeIntOnOverflow();

    return !GreaterThanTest< T, U, ValidComparison< T, U >::method >::GreaterThan( rhs.UnBoxSelf(), lhs );
}

template < typename T, typename U, typename E >
bool operator >=( const SafeBoxedInt< T, E >& lhs, const SafeBoxedInt< U, E >& rhs )
{
	assert( !lhs.IsDirty() && !rhs.IsDirty() );

	if( !rhs.TestIsValid() || !lhs.TestIsValid() )
        E::SafeIntOnOverflow();

    return !GreaterThanTest< U, T, ValidComparison< U, T >::method >::GreaterThan( rhs.UnBoxSelf(), lhs.UnBoxSelf() );
}

// Less than or equal
template < typename T, typename U, typename E >
bool operator <=( U lhs, const SafeBoxedInt< T, E >& rhs )
{
	assert( !rhs.IsDirty() );

	if( !rhs.TestIsValid() )
        E::SafeIntOnOverflow();

    return !GreaterThanTest< U, T, ValidComparison< U, T >::method >::GreaterThan( lhs, rhs.UnBoxSelf() );
}

template < typename T, typename U, typename E >
bool operator <=( const SafeBoxedInt< T, E >& lhs, const SafeBoxedInt< U, E >& rhs )
{
	assert( !lhs.IsDirty() && !rhs.IsDirty() );

    if( !rhs.TestIsValid() || !lhs.TestIsValid() )
        E::SafeIntOnOverflow();

    return !GreaterThanTest< T, U, ValidComparison< T, U >::method >::GreaterThan( lhs.UnBoxSelf(), rhs.UnBoxSelf() );
}

// equality
// explicit overload for bool
template < typename T, typename E >
bool operator ==( bool lhs, const SafeBoxedInt< T, E >& rhs )
{
	assert( !rhs.IsDirty() );

    if( !rhs.TestIsValid() )
        E::SafeIntOnOverflow();

    return lhs == ( (T)rhs == 0 ? false : true );
}

template < typename T, typename U, typename E >
bool operator ==( U lhs, const SafeBoxedInt< T, E >& rhs )
{
	 assert( !rhs.IsDirty() );

    if( !rhs.TestIsValid() )
        E::SafeIntOnOverflow();

    return EqualityTest< T, U, ValidComparison< T, U >::method >::IsEquals( rhs.UnBoxSelf(), lhs );
}

template < typename T, typename U, typename E >
bool operator ==( const SafeBoxedInt< T, E >& lhs, const SafeBoxedInt< U, E >& rhs )
{
	 assert( !lhs.IsDirty() && !rhs.IsDirty() );

    if( !rhs.TestIsValid() || !lhs.TestIsValid() )
        E::SafeIntOnOverflow();

    return EqualityTest< T, U, ValidComparison< T, U >::method >::IsEquals( lhs.UnBoxSelf(), rhs.UnBoxSelf() );
}

//not equals
template < typename T, typename U, typename E >
bool operator !=( U lhs, const SafeBoxedInt< T, E >& rhs )
{
	assert( !rhs.IsDirty() );

    if( !rhs.TestIsValid() )
        E::SafeIntOnOverflow();

    return !EqualityTest< T, U, ValidComparison< T, U >::method >::IsEquals( rhs.UnBoxSelf(), lhs );
}

template < typename T, typename E >
bool operator !=( bool lhs, const SafeBoxedInt< T, E >& rhs )
{
	assert( !rhs.IsDirty() );

    if( !rhs.TestIsValid() )
        E::SafeIntOnOverflow();

    return ( rhs.UnBoxSelf() == 0 ? false : true ) != lhs;
}

template < typename T, typename U, typename E >
bool operator !=( const SafeBoxedInt< T, E >& lhs, const SafeBoxedInt< U, E >& rhs )
{
	assert( !lhs.IsDirty() && !rhs.IsDirty() );

    if( !rhs.TestIsValid() || !lhs.TestIsValid() )
        E::SafeIntOnOverflow();

    return !EqualityTest< T, U, ValidComparison< T, U >::method >::IsEquals( lhs.UnBoxSelf(), rhs.UnBoxSelf() );
}

// Modulus
template < typename T, typename U, typename E >
SafeBoxedInt< T, E > operator %( U lhs, SafeBoxedInt< T, E > rhs )
{
    // Value of return depends on sign of lhs
    // This one may not be safe - bounds check in constructor
    // if lhs is negative and rhs is unsigned, this result in an invalid SafeBoxedInt.

	if( !rhs.IsValid() )
		return SafeBoxedInt< T, E >::InvalidBoxedInt();

    // Fast-track the simple case
    // same size and same sign
    if( sizeof(T) == sizeof(U) &&
        IntTraits< T >::isSigned == IntTraits< U >::isSigned )
    {
        if( rhs != 0 )
        {
            if( IntTraits< T >::isSigned && rhs.UnBoxSelf() == -1 )
                return 0;

			return SafeBoxedInt< T, E >( (T)( lhs % rhs.UnBoxSelf() ) );
        }

        return SafeBoxedInt< T, E >::InvalidBoxedInt();
    }

    return SafeBoxedInt< T, E >( ( SafeBoxedInt< U, E >( lhs ) % rhs.UnBoxSelf() ) );
}

// Multiplication
template < typename T, typename U, typename E > 
SafeBoxedInt< T, E > operator *( U lhs, SafeBoxedInt< T, E > rhs )
{
    T ret( 0 );
	if( rhs.IsValid() &&
        MultiplicationHelper< T, U, MultiplicationMethod< T, U >::method >::Multiply( rhs.UnBoxSelf(), lhs, ret ) )
		return SafeBoxedInt< T, E >( ret );

	return SafeBoxedInt< T, E >::InvalidBoxedInt();
}

// Division
template < typename T, typename U, typename E > SafeBoxedInt< T, E > operator /( U lhs, SafeBoxedInt< T, E > rhs )
{
	// After this, we can assume rhs is valid
	if( !rhs.IsValid() )
		return SafeBoxedInt< T, E >::InvalidBoxedInt();

    // Corner case - has to be handled seperately
    if( DivisionMethod< U, T >::method ==  DivisionState_UnsignedSigned )
    {
        if( rhs.UnBoxSelf() > 0 )
            return SafeBoxedInt< T, E >( lhs/rhs.UnBoxSelf() );

        // Now rhs is either negative, or zero
        if( rhs.UnBoxSelf() != 0 )
        {
            if( sizeof( U ) >= 4 && sizeof( T ) <= sizeof( U ) )
            {
                // Problem case - normal casting behavior changes meaning
                // flip rhs to positive
                // any operator casts now do the right thing
                U tmp;
                if( sizeof(T) == 4 )
                    tmp = lhs/(U)(unsigned __int32)( -rhs.UnBoxSelf() );
                else
                    tmp = lhs/(U)( -rhs.UnBoxSelf() );

                if( tmp <= IntTraits< T >::maxInt )
                    return SafeBoxedInt< T, E >( -((T)tmp) );

                // Corner case
#pragma warning(push)
#pragma warning(disable:4307)
                // Note - this warning happens because we're not using partial
                // template specialization in this case. For any real cases where
                // this block isn't optimized out, the warning won't be present.
                if( tmp == (U)IntTraits< T >::maxInt + 1 )
                    return SafeBoxedInt< T, E >( IntTraits< T >::minInt );
#pragma warning(pop)

                return SafeBoxedInt< T, E >::InvalidBoxedInt();
            }

            return SafeBoxedInt< T, E >(lhs/rhs.UnBoxSelf());
        }

        // was - E::SafeIntOnDivZero();
		return SafeBoxedInt< T, E >::InvalidBoxedInt();

    } // method == DivisionState_UnsignedSigned

    if( SafeIntCompare< T, U >::isBothSigned )
    {
        if( lhs == IntTraits< U >::minInt && rhs.UnBoxSelf() == -1 )
        {
            // corner case of a corner case - lhs = min int, rhs = -1, 
            // but rhs is the return type, so in essence, we can return -lhs
            // if rhs is a larger type than lhs
            if( sizeof( U ) < sizeof( T ) )
                return SafeBoxedInt< T, E >( (T)( -(T)IntTraits< U >::minInt ) );

            // If rhs is smaller or the same size int, then -minInt won't work
            return SafeBoxedInt< T, E >::InvalidBoxedInt();
        }
    }

    // Otherwise normal logic works with addition of bounds check when casting from U->T
    U ret;
    if( SafeIntNoError == DivisionHelper< U, T, DivisionMethod< U, T >::method >::Divide( lhs, rhs.UnBoxSelf(), ret ) )
		return SafeBoxedInt< T, E >( ret );

	return SafeBoxedInt< T, E >::InvalidBoxedInt();
}

// Addition
template < typename T, typename U, typename E >
SafeBoxedInt< T, E > operator +( U lhs, SafeBoxedInt< T, E > rhs )
{
    T ret( 0 );
	if( rhs.IsValid() && 
        AdditionHelper< T, U, AdditionMethod< T, U >::method >::Addition( rhs.UnBoxSelf(), lhs, ret ) )
		return SafeBoxedInt< T, E >( ret );

	return SafeBoxedInt< T, E >::InvalidBoxedInt();
}

// Subtraction
template < typename T, typename U, typename E >
SafeBoxedInt< T, E > operator -( U lhs, SafeBoxedInt< T, E > rhs )
{
    T ret( 0 );
	if( rhs.IsValid() && 
        SubtractionHelper< U, T, SubtractionMethod2< U, T >::method >::Subtract( lhs, rhs.UnBoxSelf(), ret ) )
        return SafeBoxedInt< T, E >( ret );

	return SafeBoxedInt< T, E >::InvalidBoxedInt();
}

// Unlike SafeInt, where we'll end up in the exception handler if 
// something goes wrong, SafeBoxedInt guarantees that if it becomes invalid,
// it will give you a chance to call IsValid() so that if you write your code
// correctly, it will never throw exceptions. The following overrides, which
// are supported by SafeInt, cannot meet the design constraints of SafeBoxedInt
// and are not supported

template < typename T, typename U, typename E >
T operator +=( T& lhs, const SafeBoxedInt< U, E >& rhs ) { C_ASSERT( false ); return 0; }

template < typename T, typename U, typename E >
T operator -=( T& lhs, const SafeBoxedInt< U, E >& rhs ) { C_ASSERT( false ); return 0; }

template < typename T, typename U, typename E >
T operator *=( T& lhs, const SafeBoxedInt< U, E >& rhs ) { C_ASSERT( false ); return 0; }

template < typename T, typename U, typename E >
T operator /=( T& lhs, const SafeBoxedInt< U, E >& rhs ) { C_ASSERT( false ); return 0; }

template < typename T, typename U, typename E >
T operator %=( T& lhs, const SafeBoxedInt< U, E >& rhs ) { C_ASSERT( false ); return 0; }

template < typename T, typename U, typename E >
T operator &=( T& lhs, const SafeBoxedInt< U, E >& rhs ) { C_ASSERT( false ); return 0; }

template < typename T, typename U, typename E >
T operator ^=( T& lhs, const SafeBoxedInt< U, E >& rhs ) { C_ASSERT( false ); return 0; }

template < typename T, typename U, typename E >
T operator |=( T& lhs, const SafeBoxedInt< U, E >& rhs ) { C_ASSERT( false ); return 0; }

template < typename T, typename U, typename E >
T operator <<=( T& lhs, const SafeBoxedInt< U, E >& rhs ) { C_ASSERT( false ); return 0; }

template < typename T, typename U, typename E >
T operator >>=( T& lhs, const SafeBoxedInt< U, E >& rhs ) { C_ASSERT( false ); return 0; }

// Specific pointer overrides
// These are not supported by SafeBoxedInt, either
template < typename T, typename U, typename E >
T* operator +=( T*& lhs, const SafeBoxedInt< U, E >& rhs ) { C_ASSERT( false ); return NULL; }

template < typename T, typename U, typename E >
T* operator *=( T* lhs, SafeBoxedInt< U, E > rhs )  { C_ASSERT( false ); return NULL; }

template < typename T, typename U, typename E >
T* operator /=( T* lhs, SafeBoxedInt< U, E > rhs )  { C_ASSERT( false ); return NULL; }

template < typename T, typename U, typename E >
T* operator %=( T* lhs, SafeBoxedInt< U, E > rhs )  { C_ASSERT( false ); return NULL; }

template < typename T, typename U, typename E >
T* operator &=( T* lhs, SafeBoxedInt< U, E > rhs )  { C_ASSERT( false ); return NULL; }

template < typename T, typename U, typename E >
T* operator ^=( T* lhs, SafeBoxedInt< U, E > rhs )  { C_ASSERT( false ); return NULL; }

template < typename T, typename U, typename E >
T* operator |=( T* lhs, SafeBoxedInt< U, E > rhs )  { C_ASSERT( false ); return NULL; }

template < typename T, typename U, typename E >
T* operator <<=( T* lhs, SafeBoxedInt< U, E > rhs )  { C_ASSERT( false ); return NULL; }

template < typename T, typename U, typename E >
T* operator >>=( T* lhs, SafeBoxedInt< U, E > rhs )  { C_ASSERT( false ); return NULL; }

// Shift operators
// NOTE - shift operators always return the type of the lhs argument

// Left shift
template < typename T, typename U, typename E >
SafeBoxedInt< U, E > operator <<( U lhs, SafeBoxedInt< T, E > bits ) throw()
{
    ShiftAssert( !IntTraits< T >::isSigned || (T)bits >= 0 );
    ShiftAssert( bits.UnBoxSelf() < (int)IntTraits< U >::bitCount );

	if( bits.IsValid() )
		return SafeBoxedInt< U, E >( (U)( lhs << bits.UnBoxSelf() ) );

	return SafeBoxedInt< T, E >::InvalidBoxedInt();
}

// Right shift
template < typename T, typename U, typename E >
SafeBoxedInt< U, E > operator >>( U lhs, SafeBoxedInt< T, E > bits ) throw()
{
    ShiftAssert( !IntTraits< T >::isSigned || bits >= 0 );
    ShiftAssert( bits.UnBoxSelf() < (int)IntTraits< U >::bitCount );

	if( bits.IsValid() )
		return SafeBoxedInt< U, E >( (U)( lhs >> bits.UnBoxSelf() ) );

	return SafeBoxedInt< T, E >::InvalidBoxedInt();
}

// Bitwise operators
// This only makes sense if we're dealing with the same type and size
// demand a type T, or something that fits into a type T.

// Bitwise &
template < typename T, typename U, typename E >
SafeBoxedInt< T, E > operator &( U lhs, SafeBoxedInt< T, E > rhs ) throw()
{
	if( rhs.IsValid() )
		return SafeBoxedInt< T, E >( BinaryAndHelper< T, U, BinaryMethod< T, U >::method >::And( rhs.UnBoxSelf(), lhs ) );

	return SafeBoxedInt< T, E >::InvalidBoxedInt();
}

// Bitwise XOR
template < typename T, typename U, typename E >
SafeBoxedInt< T, E > operator ^( U lhs, SafeBoxedInt< T, E > rhs ) throw()
{
	if( rhs.IsValid() )
		return SafeBoxedInt< T, E >(BinaryXorHelper< T, U, BinaryMethod< T, U >::method >::Xor( rhs.UnBoxSelf(), lhs ) );

	return SafeBoxedInt< T, E >::InvalidBoxedInt();
}

// Bitwise OR
template < typename T, typename U, typename E >
SafeBoxedInt< T, E > operator |( U lhs, SafeBoxedInt< T, E > rhs ) throw()
{
	if( rhs.IsValid() )
   	return SafeBoxedInt< T, E >( BinaryOrHelper< T, U, BinaryMethod< T, U >::method >::Or( rhs.UnBoxSelf(), lhs ) );
   
   return SafeBoxedInt< T, E >::InvalidBoxedInt();
}

// Logical operators
// Logical OR
template < typename T, typename E >
bool operator ||( bool lhs, SafeBoxedInt< T, E > rhs )
{
	assert( !rhs.IsDirty() );
	if( !rhs.IsValid() )
		E::SafeIntOnException();

    return lhs || rhs.UnBoxSelf();
}

template < typename T, typename U, typename E >
bool operator ||( U lhs, SafeBoxedInt< T, E > rhs )
{
	assert( !rhs.IsDirty() );
	if( !rhs.IsValid() )
		E::SafeIntOnException();

    return lhs || rhs.UnBoxSelf();
}

template < typename T, typename U, typename E >
bool operator ||( SafeBoxedInt< U, E > lhs, SafeBoxedInt< T, E > rhs )
{
	assert( !rhs.IsDirty() );
	if( !rhs.IsValid() )
		E::SafeIntOnException();

    return (U)lhs || rhs.UnBoxSelf();
}

// Logical AND
template < typename T, typename E >
bool operator &&( bool lhs, SafeBoxedInt< T, E > rhs )
{
	assert( !rhs.IsDirty() );
	if( !rhs.IsValid() )
		E::SafeIntOnException();

    return lhs && rhs.UnBoxSelf();
}

template < typename T, typename U, typename E >
bool operator &&( U lhs, SafeBoxedInt< T, E > rhs )
{
	assert( !rhs.IsDirty() );
	if( !rhs.IsValid() )
		E::SafeIntOnException();

    return lhs && rhs.UnBoxSelf();
}

template < typename T, typename U, typename E >
bool operator &&( SafeBoxedInt< U, E > lhs, SafeBoxedInt< T, E > rhs )
{
	assert( !rhs.IsDirty() );
	if( !rhs.IsValid() )
		E::SafeIntOnException();

    return lhs.UnBoxSelf() && rhs.UnBoxSelf();
}

#pragma warning(pop)

#endif //SAFEINT_HPP
