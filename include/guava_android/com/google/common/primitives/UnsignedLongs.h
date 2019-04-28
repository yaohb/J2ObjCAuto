//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/guava/android/build_result/java/com/google/common/primitives/UnsignedLongs.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonPrimitivesUnsignedLongs")
#ifdef RESTRICT_ComGoogleCommonPrimitivesUnsignedLongs
#define INCLUDE_ALL_ComGoogleCommonPrimitivesUnsignedLongs 0
#else
#define INCLUDE_ALL_ComGoogleCommonPrimitivesUnsignedLongs 1
#endif
#undef RESTRICT_ComGoogleCommonPrimitivesUnsignedLongs

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonPrimitivesUnsignedLongs_) && (INCLUDE_ALL_ComGoogleCommonPrimitivesUnsignedLongs || defined(INCLUDE_ComGoogleCommonPrimitivesUnsignedLongs))
#define ComGoogleCommonPrimitivesUnsignedLongs_

@class IOSLongArray;
@protocol JavaUtilComparator;

/*!
 @brief Static utility methods pertaining to <code>long</code> primitives that interpret values as 
 <i>unsigned</i> (that is, any negative value <code>x</code> is treated as the positive value <code>2^64 + x</code>
 ).The methods for which signedness is not an issue are in <code>Longs</code>, as well as
  signed versions of methods for which signedness is an issue.
 <p>In addition, this class provides several static methods for converting a <code>long</code> to a 
 <code>String</code> and a <code>String</code> to a <code>long</code> that treat the <code>long</code> as an unsigned
  number. 
 <p>Users of these utilities must be <i>extremely careful</i> not to mix up signed and unsigned 
 <code>long</code> values. When possible, it is recommended that the <code>UnsignedLong</code> wrapper class
  be used, at a small efficiency penalty, to enforce the distinction in the type system. 
 <p>See the Guava User Guide article on <a href="https://github.com/google/guava/wiki/PrimitivesExplained#unsigned-support">
 unsigned
  primitive utilities</a>.
 @author Louis Wasserman
 @author Brian Milch
 @author Colin Evans
 @since 10.0
 */
@interface ComGoogleCommonPrimitivesUnsignedLongs : NSObject
@property (readonly, class) jlong MAX_VALUE NS_SWIFT_NAME(MAX_VALUE);

+ (jlong)MAX_VALUE;

#pragma mark Public

/*!
 @brief Compares the two specified <code>long</code> values, treating them as unsigned values between <code>0</code>
  and <code>2^64 - 1</code> inclusive.
 <p><b>Java 8 users:</b> use <code>Long.compareUnsigned(long, long)</code> instead.
 @param a the first unsigned <code>long</code>  to compare
 @param b the second unsigned <code>long</code>  to compare
 @return a negative value if <code>a</code> is less than <code>b</code>; a positive value if <code>a</code> is
      greater than <code>b</code>; or zero if they are equal
 */
+ (jint)compareWithLong:(jlong)a
               withLong:(jlong)b;

/*!
 @brief Returns the unsigned <code>long</code> value represented by the given string.
 <p>Accepts a decimal, hexadecimal, or octal number given by specifying the following prefix: 
 <ul>
    <li><code>0x</code><i>HexDigits</i>
    <li><code>0X</code><i>HexDigits</i>
    <li><code>#</code><i>HexDigits</i>
    <li><code>0</code><i>OctalDigits</i>
  </ul>
 @throw NumberFormatExceptionif the string does not contain a valid unsigned <code>long</code>
      value
 @since 13.0
 */
+ (jlong)decodeWithNSString:(NSString *)stringValue;

/*!
 @brief Returns dividend / divisor, where the dividend and divisor are treated as unsigned 64-bit
  quantities.
 <p><b>Java 8 users:</b> use <code>Long.divideUnsigned(long, long)</code> instead.
 @param dividend the dividend (numerator)
 @param divisor the divisor (denominator)
 @throw ArithmeticExceptionif divisor is 0
 */
+ (jlong)divideWithLong:(jlong)dividend
               withLong:(jlong)divisor;

/*!
 @brief Returns a string containing the supplied unsigned <code>long</code> values separated by <code>separator</code>
 .For example, <code>join("-", 1, 2, 3)</code> returns the string <code>"1-2-3"</code>.
 @param separator the text that should appear between consecutive values in the resulting string      (but not at the start or end)
 @param array an array of unsigned <code>long</code>  values, possibly empty
 */
+ (NSString *)joinWithNSString:(NSString *)separator
                 withLongArray:(IOSLongArray *)array;

/*!
 @brief Returns a comparator that compares two arrays of unsigned <code>long</code> values <a href="http://en.wikipedia.org/wiki/Lexicographical_order">
 lexicographically</a>.That is, it
  compares, using <code>compare(long, long)</code>), the first pair of values that follow any common
  prefix, or when one array is a prefix of the other, treats the shorter array as the lesser.
 For
  example, <code>[] < [1L] < [1L, 2L] < [2L] < [1L << 63]</code>.
  
 <p>The returned comparator is inconsistent with <code>Object.equals(Object)</code> (since arrays
  support only identity equality), but it is consistent with <code>Arrays.equals(long[],
 long[])</code>
 .
 */
+ (id<JavaUtilComparator>)lexicographicalComparator;

/*!
 @brief Returns the greatest value present in <code>array</code>, treating values as unsigned.
 @param array a  <i> nonempty </i>  array of unsigned <code>long</code>  values
 @return the value present in <code>array</code> that is greater than or equal to every other value
      in the array according to <code>compare</code>
 @throw IllegalArgumentExceptionif <code>array</code> is empty
 */
+ (jlong)maxWithLongArray:(IOSLongArray *)array;

/*!
 @brief Returns the least value present in <code>array</code>, treating values as unsigned.
 @param array a  <i> nonempty </i>  array of unsigned <code>long</code>  values
 @return the value present in <code>array</code> that is less than or equal to every other value in
      the array according to <code>compare</code>
 @throw IllegalArgumentExceptionif <code>array</code> is empty
 */
+ (jlong)minWithLongArray:(IOSLongArray *)array;

/*!
 @brief Returns the unsigned <code>long</code> value represented by the given decimal string.
 <p><b>Java 8 users:</b> use <code>Long.parseUnsignedLong(String)</code> instead.
 @throw NumberFormatExceptionif the string does not contain a valid unsigned <code>long</code>
      value
 @throw NullPointerExceptionif <code>string</code> is null (in contrast to <code>Long.parseLong(String)</code>
 )
 */
+ (jlong)parseUnsignedLongWithNSString:(NSString *)string;

/*!
 @brief Returns the unsigned <code>long</code> value represented by a string with the given radix.
 <p><b>Java 8 users:</b> use <code>Long.parseUnsignedLong(String, int)</code> instead.
 @param string the string containing the unsigned <code>long</code>  representation to be parsed.
 @param radix the radix to use while parsing <code>string</code>
 @throw NumberFormatExceptionif the string does not contain a valid unsigned <code>long</code> with
      the given radix, or if <code>radix</code> is not between <code>Character.MIN_RADIX</code> and <code>Character.MAX_RADIX</code>
 .
 @throw NullPointerExceptionif <code>string</code> is null (in contrast to <code>Long.parseLong(String)</code>
 )
 */
+ (jlong)parseUnsignedLongWithNSString:(NSString *)string
                               withInt:(jint)radix;

/*!
 @brief Returns dividend % divisor, where the dividend and divisor are treated as unsigned 64-bit
  quantities.
 <p><b>Java 8 users:</b> use <code>Long.remainderUnsigned(long, long)</code> instead.
 @param dividend the dividend (numerator)
 @param divisor the divisor (denominator)
 @throw ArithmeticExceptionif divisor is 0
 @since 11.0
 */
+ (jlong)remainderWithLong:(jlong)dividend
                  withLong:(jlong)divisor;

/*!
 @brief Sorts the array, treating its elements as unsigned 64-bit integers.
 @since 23.1
 */
+ (void)sortWithLongArray:(IOSLongArray *)array;

/*!
 @brief Sorts the array between <code>fromIndex</code> inclusive and <code>toIndex</code> exclusive, treating its
  elements as unsigned 64-bit integers.
 @since 23.1
 */
+ (void)sortWithLongArray:(IOSLongArray *)array
                  withInt:(jint)fromIndex
                  withInt:(jint)toIndex;

/*!
 @brief Sorts the elements of <code>array</code> in descending order, interpreting them as unsigned 64-bit
  integers.
 @since 23.1
 */
+ (void)sortDescendingWithLongArray:(IOSLongArray *)array;

/*!
 @brief Sorts the elements of <code>array</code> between <code>fromIndex</code> inclusive and <code>toIndex</code>
  exclusive in descending order, interpreting them as unsigned 64-bit integers.
 @since 23.1
 */
+ (void)sortDescendingWithLongArray:(IOSLongArray *)array
                            withInt:(jint)fromIndex
                            withInt:(jint)toIndex;

/*!
 @brief Returns a string representation of x, where x is treated as unsigned.
 <p><b>Java 8 users:</b> use <code>Long.toUnsignedString(long)</code> instead.
 */
+ (NSString *)toStringWithLong:(jlong)x;

/*!
 @brief Returns a string representation of <code>x</code> for the given radix, where <code>x</code> is treated as
  unsigned.
 <p><b>Java 8 users:</b> use <code>Long.toUnsignedString(long, int)</code> instead.
 @param x the value to convert to a string.
 @param radix the radix to use while working with <code>x</code>
 @throw IllegalArgumentExceptionif <code>radix</code> is not between <code>Character.MIN_RADIX</code>
      and <code>Character.MAX_RADIX</code>.
 */
+ (NSString *)toStringWithLong:(jlong)x
                       withInt:(jint)radix;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonPrimitivesUnsignedLongs)

inline jlong ComGoogleCommonPrimitivesUnsignedLongs_get_MAX_VALUE(void);
#define ComGoogleCommonPrimitivesUnsignedLongs_MAX_VALUE -1LL
J2OBJC_STATIC_FIELD_CONSTANT(ComGoogleCommonPrimitivesUnsignedLongs, MAX_VALUE, jlong)

FOUNDATION_EXPORT jint ComGoogleCommonPrimitivesUnsignedLongs_compareWithLong_withLong_(jlong a, jlong b);

FOUNDATION_EXPORT jlong ComGoogleCommonPrimitivesUnsignedLongs_minWithLongArray_(IOSLongArray *array);

FOUNDATION_EXPORT jlong ComGoogleCommonPrimitivesUnsignedLongs_maxWithLongArray_(IOSLongArray *array);

FOUNDATION_EXPORT NSString *ComGoogleCommonPrimitivesUnsignedLongs_joinWithNSString_withLongArray_(NSString *separator, IOSLongArray *array);

FOUNDATION_EXPORT id<JavaUtilComparator> ComGoogleCommonPrimitivesUnsignedLongs_lexicographicalComparator(void);

FOUNDATION_EXPORT void ComGoogleCommonPrimitivesUnsignedLongs_sortWithLongArray_(IOSLongArray *array);

FOUNDATION_EXPORT void ComGoogleCommonPrimitivesUnsignedLongs_sortWithLongArray_withInt_withInt_(IOSLongArray *array, jint fromIndex, jint toIndex);

FOUNDATION_EXPORT void ComGoogleCommonPrimitivesUnsignedLongs_sortDescendingWithLongArray_(IOSLongArray *array);

FOUNDATION_EXPORT void ComGoogleCommonPrimitivesUnsignedLongs_sortDescendingWithLongArray_withInt_withInt_(IOSLongArray *array, jint fromIndex, jint toIndex);

FOUNDATION_EXPORT jlong ComGoogleCommonPrimitivesUnsignedLongs_divideWithLong_withLong_(jlong dividend, jlong divisor);

FOUNDATION_EXPORT jlong ComGoogleCommonPrimitivesUnsignedLongs_remainderWithLong_withLong_(jlong dividend, jlong divisor);

FOUNDATION_EXPORT jlong ComGoogleCommonPrimitivesUnsignedLongs_parseUnsignedLongWithNSString_(NSString *string);

FOUNDATION_EXPORT jlong ComGoogleCommonPrimitivesUnsignedLongs_parseUnsignedLongWithNSString_withInt_(NSString *string, jint radix);

FOUNDATION_EXPORT jlong ComGoogleCommonPrimitivesUnsignedLongs_decodeWithNSString_(NSString *stringValue);

FOUNDATION_EXPORT NSString *ComGoogleCommonPrimitivesUnsignedLongs_toStringWithLong_(jlong x);

FOUNDATION_EXPORT NSString *ComGoogleCommonPrimitivesUnsignedLongs_toStringWithLong_withInt_(jlong x, jint radix);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonPrimitivesUnsignedLongs)

#endif

#if !defined (ComGoogleCommonPrimitivesUnsignedLongs_LexicographicalComparator_) && (INCLUDE_ALL_ComGoogleCommonPrimitivesUnsignedLongs || defined(INCLUDE_ComGoogleCommonPrimitivesUnsignedLongs_LexicographicalComparator))
#define ComGoogleCommonPrimitivesUnsignedLongs_LexicographicalComparator_

#define RESTRICT_JavaLangEnum 1
#define INCLUDE_JavaLangEnum 1
#include "java/lang/Enum.h"

#define RESTRICT_JavaUtilComparator 1
#define INCLUDE_JavaUtilComparator 1
#include "java/util/Comparator.h"

@class IOSLongArray;
@class IOSObjectArray;
@protocol JavaUtilFunctionFunction;
@protocol JavaUtilFunctionToDoubleFunction;
@protocol JavaUtilFunctionToIntFunction;
@protocol JavaUtilFunctionToLongFunction;

typedef NS_ENUM(NSUInteger, ComGoogleCommonPrimitivesUnsignedLongs_LexicographicalComparator_Enum) {
  ComGoogleCommonPrimitivesUnsignedLongs_LexicographicalComparator_Enum_INSTANCE = 0,
};

@interface ComGoogleCommonPrimitivesUnsignedLongs_LexicographicalComparator : JavaLangEnum < JavaUtilComparator >

@property (readonly, class, nonnull) ComGoogleCommonPrimitivesUnsignedLongs_LexicographicalComparator *INSTANCE NS_SWIFT_NAME(INSTANCE);
+ (ComGoogleCommonPrimitivesUnsignedLongs_LexicographicalComparator * __nonnull)INSTANCE;

#pragma mark Public

- (jint)compareWithId:(IOSLongArray *)left
               withId:(IOSLongArray *)right;

- (NSString *)description;

+ (ComGoogleCommonPrimitivesUnsignedLongs_LexicographicalComparator *)valueOfWithNSString:(NSString *)name;

+ (IOSObjectArray *)values;

#pragma mark Package-Private

- (ComGoogleCommonPrimitivesUnsignedLongs_LexicographicalComparator_Enum)toNSEnum;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonPrimitivesUnsignedLongs_LexicographicalComparator)

/*! INTERNAL ONLY - Use enum accessors declared below. */
FOUNDATION_EXPORT ComGoogleCommonPrimitivesUnsignedLongs_LexicographicalComparator *ComGoogleCommonPrimitivesUnsignedLongs_LexicographicalComparator_values_[];

inline ComGoogleCommonPrimitivesUnsignedLongs_LexicographicalComparator *ComGoogleCommonPrimitivesUnsignedLongs_LexicographicalComparator_get_INSTANCE(void);
J2OBJC_ENUM_CONSTANT(ComGoogleCommonPrimitivesUnsignedLongs_LexicographicalComparator, INSTANCE)

FOUNDATION_EXPORT IOSObjectArray *ComGoogleCommonPrimitivesUnsignedLongs_LexicographicalComparator_values(void);

FOUNDATION_EXPORT ComGoogleCommonPrimitivesUnsignedLongs_LexicographicalComparator *ComGoogleCommonPrimitivesUnsignedLongs_LexicographicalComparator_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT ComGoogleCommonPrimitivesUnsignedLongs_LexicographicalComparator *ComGoogleCommonPrimitivesUnsignedLongs_LexicographicalComparator_fromOrdinal(NSUInteger ordinal);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonPrimitivesUnsignedLongs_LexicographicalComparator)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonPrimitivesUnsignedLongs")
