//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/guava/android/build_result/java/com/google/common/math/LongMath.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonMathLongMath")
#ifdef RESTRICT_ComGoogleCommonMathLongMath
#define INCLUDE_ALL_ComGoogleCommonMathLongMath 0
#else
#define INCLUDE_ALL_ComGoogleCommonMathLongMath 1
#endif
#undef RESTRICT_ComGoogleCommonMathLongMath

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonMathLongMath_) && (INCLUDE_ALL_ComGoogleCommonMathLongMath || defined(INCLUDE_ComGoogleCommonMathLongMath))
#define ComGoogleCommonMathLongMath_

@class IOSByteArray;
@class IOSIntArray;
@class IOSLongArray;
@class JavaMathRoundingMode;

/*!
 @brief A class for arithmetic on values of type <code>long</code>.Where possible, methods are defined and
  named analogously to their <code>BigInteger</code> counterparts.
 <p>The implementations of many methods in this class are based on material from Henry S. Warren,
  Jr.'s <i>Hacker's Delight</i>, (Addison Wesley, 2002). 
 <p>Similar functionality for <code>int</code> and for <code>BigInteger</code> can be found in <code>IntMath</code>
  and <code>BigIntegerMath</code> respectively. For other common operations on <code>long</code>
  values, see <code>com.google.common.primitives.Longs</code>.
 @author Louis Wasserman
 @since 11.0
 */
@interface ComGoogleCommonMathLongMath : NSObject
@property (readonly, class) jlong MAX_SIGNED_POWER_OF_TWO NS_SWIFT_NAME(MAX_SIGNED_POWER_OF_TWO);
@property (readonly, class) jlong MAX_POWER_OF_SQRT2_UNSIGNED NS_SWIFT_NAME(MAX_POWER_OF_SQRT2_UNSIGNED);
@property (readonly, class, strong) IOSByteArray *maxLog10ForLeadingZeros NS_SWIFT_NAME(maxLog10ForLeadingZeros);
@property (readonly, class, strong) IOSLongArray *powersOf10 NS_SWIFT_NAME(powersOf10);
@property (readonly, class, strong) IOSLongArray *halfPowersOf10 NS_SWIFT_NAME(halfPowersOf10);
@property (readonly, class) jlong FLOOR_SQRT_MAX_LONG NS_SWIFT_NAME(FLOOR_SQRT_MAX_LONG);
@property (readonly, class, strong) IOSLongArray *factorials NS_SWIFT_NAME(factorials);
@property (readonly, class, strong) IOSIntArray *biggestBinomials NS_SWIFT_NAME(biggestBinomials);
@property (readonly, class, strong) IOSIntArray *biggestSimpleBinomials NS_SWIFT_NAME(biggestSimpleBinomials);

+ (jlong)MAX_SIGNED_POWER_OF_TWO;

+ (jlong)MAX_POWER_OF_SQRT2_UNSIGNED;

+ (IOSByteArray *)maxLog10ForLeadingZeros;

+ (IOSLongArray *)powersOf10;

+ (IOSLongArray *)halfPowersOf10;

+ (jlong)FLOOR_SQRT_MAX_LONG;

+ (IOSLongArray *)factorials;

+ (IOSIntArray *)biggestBinomials;

+ (IOSIntArray *)biggestSimpleBinomials;

#pragma mark Public

/*!
 @brief Returns <code>n</code> choose <code>k</code>, also known as the binomial coefficient of <code>n</code> and 
 <code>k</code>, or <code>Long.MAX_VALUE</code> if the result does not fit in a <code>long</code>.
 @throw IllegalArgumentExceptionif <code>n < 0</code>, <code>k < 0</code>, or <code>k > n</code>
 */
+ (jlong)binomialWithInt:(jint)n
                 withInt:(jint)k;

/*!
 @brief Returns the smallest power of two greater than or equal to <code>x</code>.This is equivalent to 
 <code>checkedPow(2, log2(x, CEILING))</code>.
 @throw IllegalArgumentExceptionif <code>x <= 0</code>
 @throw ArithmeticExceptionof the next-higher power of two is not representable as a <code>long</code>
 , i.e. when <code>x > 2^62</code>
 @since 20.0
 */
+ (jlong)ceilingPowerOfTwoWithLong:(jlong)x;

/*!
 @brief Returns the sum of <code>a</code> and <code>b</code>, provided it does not overflow.
 @throw ArithmeticExceptionif <code>a + b</code> overflows in signed <code>long</code> arithmetic
 */
+ (jlong)checkedAddWithLong:(jlong)a
                   withLong:(jlong)b;

/*!
 @brief Returns the product of <code>a</code> and <code>b</code>, provided it does not overflow.
 @throw ArithmeticExceptionif <code>a * b</code> overflows in signed <code>long</code> arithmetic
 */
+ (jlong)checkedMultiplyWithLong:(jlong)a
                        withLong:(jlong)b;

/*!
 @brief Returns the <code>b</code> to the <code>k</code>th power, provided it does not overflow.
 @throw ArithmeticExceptionif <code>b</code> to the <code>k</code>th power overflows in signed <code>long</code>
  arithmetic
 */
+ (jlong)checkedPowWithLong:(jlong)b
                    withInt:(jint)k;

/*!
 @brief Returns the difference of <code>a</code> and <code>b</code>, provided it does not overflow.
 @throw ArithmeticExceptionif <code>a - b</code> overflows in signed <code>long</code> arithmetic
 */
+ (jlong)checkedSubtractWithLong:(jlong)a
                        withLong:(jlong)b;

/*!
 @brief Returns the result of dividing <code>p</code> by <code>q</code>, rounding using the specified <code>RoundingMode</code>
 .
 @throw ArithmeticExceptionif <code>q == 0</code>, or if <code>mode == UNNECESSARY</code> and <code>a</code>
      is not an integer multiple of <code>b</code>
 */
+ (jlong)divideWithLong:(jlong)p
               withLong:(jlong)q
withJavaMathRoundingMode:(JavaMathRoundingMode *)mode;

/*!
 @brief Returns <code>n!
 </code>, that is, the product of the first <code>n</code> positive integers, <code>1</code> if 
 <code>n == 0</code>, or <code>Long.MAX_VALUE</code> if the result does not fit in a <code>long</code>.
 @throw IllegalArgumentExceptionif <code>n < 0</code>
 */
+ (jlong)factorialWithInt:(jint)n;

/*!
 @brief Returns the largest power of two less than or equal to <code>x</code>.This is equivalent to <code>checkedPow(2, log2(x, FLOOR))</code>
 .
 @throw IllegalArgumentExceptionif <code>x <= 0</code>
 @since 20.0
 */
+ (jlong)floorPowerOfTwoWithLong:(jlong)x;

/*!
 @brief Returns the greatest common divisor of <code>a, b</code>.Returns <code>0</code> if <code>a == 0 && b == 0</code>
 .
 @throw IllegalArgumentExceptionif <code>a < 0</code> or <code>b < 0</code>
 */
+ (jlong)gcdWithLong:(jlong)a
            withLong:(jlong)b;

/*!
 @brief Returns <code>true</code> if <code>x</code> represents a power of two.
 <p>This differs from <code>Long.bitCount(x) == 1</code>, because <code>Long.bitCount(Long.MIN_VALUE) == 1</code>
 , but <code>Long.MIN_VALUE</code> is not a power of two.
 */
+ (jboolean)isPowerOfTwoWithLong:(jlong)x;

/*!
 @brief Returns <code>true</code> if <code>n</code> is a <a href="http://mathworld.wolfram.com/PrimeNumber.html">
 prime number</a>: an integer <i>greater
  than one</i> that cannot be factored into a product of <i>smaller</i> positive integers.
 Returns <code>false</code> if <code>n</code> is zero, one, or a composite number (one which <i>can</i> be
  factored into smaller positive integers). 
 <p>To test larger numbers, use <code>BigInteger.isProbablePrime</code>.
 @throw IllegalArgumentExceptionif <code>n</code> is negative
 @since 20.0
 */
+ (jboolean)isPrimeWithLong:(jlong)n;

/*!
 @brief Returns the base-10 logarithm of <code>x</code>, rounded according to the specified rounding mode.
 @throw IllegalArgumentExceptionif <code>x <= 0</code>
 @throw ArithmeticExceptionif <code>mode</code> is <code>RoundingMode.UNNECESSARY</code> and <code>x</code>
      is not a power of ten
 */
+ (jint)log10WithLong:(jlong)x
withJavaMathRoundingMode:(JavaMathRoundingMode *)mode;

/*!
 @brief Returns the base-2 logarithm of <code>x</code>, rounded according to the specified rounding mode.
 @throw IllegalArgumentExceptionif <code>x <= 0</code>
 @throw ArithmeticExceptionif <code>mode</code> is <code>RoundingMode.UNNECESSARY</code> and <code>x</code>
      is not a power of two
 */
+ (jint)log2WithLong:(jlong)x
withJavaMathRoundingMode:(JavaMathRoundingMode *)mode;

/*!
 @brief Returns the arithmetic mean of <code>x</code> and <code>y</code>, rounded toward negative infinity.This
  method is resilient to overflow.
 @since 14.0
 */
+ (jlong)meanWithLong:(jlong)x
             withLong:(jlong)y;

/*!
 @brief Returns <code>x mod m</code>, a non-negative value less than <code>m</code>.This differs from <code>x %
  m</code>
 , which might be negative.
 <p>For example: 
 @code
 mod(7, 4) == 3
  mod(-7, 4) == 1
  mod(-1, 4) == 3
  mod(-8, 4) == 0
  mod(8, 4) == 0 
 
@endcode
 @throw ArithmeticExceptionif <code>m <= 0</code>
 - seealso: <a href="http://docs.oracle.com/javase/specs/jls/se7/html/jls-15.html#jls-15.17.3">
      Remainder Operator</a>
 */
+ (jint)modWithLong:(jlong)x
            withInt:(jint)m;

/*!
 @brief Returns <code>x mod m</code>, a non-negative value less than <code>m</code>.This differs from <code>x %
  m</code>
 , which might be negative.
 <p>For example: 
 @code
 mod(7, 4) == 3
  mod(-7, 4) == 1
  mod(-1, 4) == 3
  mod(-8, 4) == 0
  mod(8, 4) == 0 
 
@endcode
 @throw ArithmeticExceptionif <code>m <= 0</code>
 - seealso: <a href="http://docs.oracle.com/javase/specs/jls/se7/html/jls-15.html#jls-15.17.3">
      Remainder Operator</a>
 */
+ (jlong)modWithLong:(jlong)x
            withLong:(jlong)m;

/*!
 @brief Returns <code>b</code> to the <code>k</code>th power.Even if the result overflows, it will be equal to 
 <code>BigInteger.valueOf(b).pow(k).longValue()</code>.
 This implementation runs in <code>O(log k)</code>
  time.
 @throw IllegalArgumentExceptionif <code>k < 0</code>
 */
+ (jlong)powWithLong:(jlong)b
             withInt:(jint)k;

/*!
 @brief Returns the sum of <code>a</code> and <code>b</code> unless it would overflow or underflow in which case 
 <code>Long.MAX_VALUE</code> or <code>Long.MIN_VALUE</code> is returned, respectively.
 @since 20.0
 */
+ (jlong)saturatedAddWithLong:(jlong)a
                     withLong:(jlong)b;

/*!
 @brief Returns the product of <code>a</code> and <code>b</code> unless it would overflow or underflow in which
  case <code>Long.MAX_VALUE</code> or <code>Long.MIN_VALUE</code> is returned, respectively.
 @since 20.0
 */
+ (jlong)saturatedMultiplyWithLong:(jlong)a
                          withLong:(jlong)b;

/*!
 @brief Returns the <code>b</code> to the <code>k</code>th power, unless it would overflow or underflow in which
  case <code>Long.MAX_VALUE</code> or <code>Long.MIN_VALUE</code> is returned, respectively.
 @since 20.0
 */
+ (jlong)saturatedPowWithLong:(jlong)b
                      withInt:(jint)k;

/*!
 @brief Returns the difference of <code>a</code> and <code>b</code> unless it would overflow or underflow in
  which case <code>Long.MAX_VALUE</code> or <code>Long.MIN_VALUE</code> is returned, respectively.
 @since 20.0
 */
+ (jlong)saturatedSubtractWithLong:(jlong)a
                          withLong:(jlong)b;

/*!
 @brief Returns the square root of <code>x</code>, rounded with the specified rounding mode.
 @throw IllegalArgumentExceptionif <code>x < 0</code>
 @throw ArithmeticExceptionif <code>mode</code> is <code>RoundingMode.UNNECESSARY</code> and <code>sqrt(x)</code>
  is not an integer
 */
+ (jlong)sqrtWithLong:(jlong)x
withJavaMathRoundingMode:(JavaMathRoundingMode *)mode;

#pragma mark Package-Private

+ (jboolean)fitsInIntWithLong:(jlong)x;

/*!
 @brief Returns 1 if <code>x < y</code> as unsigned longs, and 0 otherwise.Assumes that x - y fits into a
  signed long.
 The implementation is branch-free, and benchmarks suggest it is measurably faster
  than the straightforward ternary expression.
 */
+ (jint)lessThanBranchFreeWithLong:(jlong)x
                          withLong:(jlong)y;

+ (jint)log10FloorWithLong:(jlong)x;

/*!
 @brief Returns (x * numerator / denominator), which is assumed to come out to an integral value.
 */
+ (jlong)multiplyFractionWithLong:(jlong)x
                         withLong:(jlong)numerator
                         withLong:(jlong)denominator;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonMathLongMath)

inline jlong ComGoogleCommonMathLongMath_get_MAX_SIGNED_POWER_OF_TWO(void);
#define ComGoogleCommonMathLongMath_MAX_SIGNED_POWER_OF_TWO 4611686018427387904LL
J2OBJC_STATIC_FIELD_CONSTANT(ComGoogleCommonMathLongMath, MAX_SIGNED_POWER_OF_TWO, jlong)

/*!
 @brief The biggest half power of two that fits into an unsigned long
 */
inline jlong ComGoogleCommonMathLongMath_get_MAX_POWER_OF_SQRT2_UNSIGNED(void);
#define ComGoogleCommonMathLongMath_MAX_POWER_OF_SQRT2_UNSIGNED -5402926248376769404LL
J2OBJC_STATIC_FIELD_CONSTANT(ComGoogleCommonMathLongMath, MAX_POWER_OF_SQRT2_UNSIGNED, jlong)

inline IOSByteArray *ComGoogleCommonMathLongMath_get_maxLog10ForLeadingZeros(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT IOSByteArray *ComGoogleCommonMathLongMath_maxLog10ForLeadingZeros;
J2OBJC_STATIC_FIELD_OBJ_FINAL(ComGoogleCommonMathLongMath, maxLog10ForLeadingZeros, IOSByteArray *)

inline IOSLongArray *ComGoogleCommonMathLongMath_get_powersOf10(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT IOSLongArray *ComGoogleCommonMathLongMath_powersOf10;
J2OBJC_STATIC_FIELD_OBJ_FINAL(ComGoogleCommonMathLongMath, powersOf10, IOSLongArray *)

inline IOSLongArray *ComGoogleCommonMathLongMath_get_halfPowersOf10(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT IOSLongArray *ComGoogleCommonMathLongMath_halfPowersOf10;
J2OBJC_STATIC_FIELD_OBJ_FINAL(ComGoogleCommonMathLongMath, halfPowersOf10, IOSLongArray *)

inline jlong ComGoogleCommonMathLongMath_get_FLOOR_SQRT_MAX_LONG(void);
#define ComGoogleCommonMathLongMath_FLOOR_SQRT_MAX_LONG 3037000499LL
J2OBJC_STATIC_FIELD_CONSTANT(ComGoogleCommonMathLongMath, FLOOR_SQRT_MAX_LONG, jlong)

inline IOSLongArray *ComGoogleCommonMathLongMath_get_factorials(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT IOSLongArray *ComGoogleCommonMathLongMath_factorials;
J2OBJC_STATIC_FIELD_OBJ_FINAL(ComGoogleCommonMathLongMath, factorials, IOSLongArray *)

inline IOSIntArray *ComGoogleCommonMathLongMath_get_biggestBinomials(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT IOSIntArray *ComGoogleCommonMathLongMath_biggestBinomials;
J2OBJC_STATIC_FIELD_OBJ_FINAL(ComGoogleCommonMathLongMath, biggestBinomials, IOSIntArray *)

inline IOSIntArray *ComGoogleCommonMathLongMath_get_biggestSimpleBinomials(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT IOSIntArray *ComGoogleCommonMathLongMath_biggestSimpleBinomials;
J2OBJC_STATIC_FIELD_OBJ_FINAL(ComGoogleCommonMathLongMath, biggestSimpleBinomials, IOSIntArray *)

FOUNDATION_EXPORT jlong ComGoogleCommonMathLongMath_ceilingPowerOfTwoWithLong_(jlong x);

FOUNDATION_EXPORT jlong ComGoogleCommonMathLongMath_floorPowerOfTwoWithLong_(jlong x);

FOUNDATION_EXPORT jboolean ComGoogleCommonMathLongMath_isPowerOfTwoWithLong_(jlong x);

FOUNDATION_EXPORT jint ComGoogleCommonMathLongMath_lessThanBranchFreeWithLong_withLong_(jlong x, jlong y);

FOUNDATION_EXPORT jint ComGoogleCommonMathLongMath_log2WithLong_withJavaMathRoundingMode_(jlong x, JavaMathRoundingMode *mode);

FOUNDATION_EXPORT jint ComGoogleCommonMathLongMath_log10WithLong_withJavaMathRoundingMode_(jlong x, JavaMathRoundingMode *mode);

FOUNDATION_EXPORT jint ComGoogleCommonMathLongMath_log10FloorWithLong_(jlong x);

FOUNDATION_EXPORT jlong ComGoogleCommonMathLongMath_powWithLong_withInt_(jlong b, jint k);

FOUNDATION_EXPORT jlong ComGoogleCommonMathLongMath_sqrtWithLong_withJavaMathRoundingMode_(jlong x, JavaMathRoundingMode *mode);

FOUNDATION_EXPORT jlong ComGoogleCommonMathLongMath_divideWithLong_withLong_withJavaMathRoundingMode_(jlong p, jlong q, JavaMathRoundingMode *mode);

FOUNDATION_EXPORT jint ComGoogleCommonMathLongMath_modWithLong_withInt_(jlong x, jint m);

FOUNDATION_EXPORT jlong ComGoogleCommonMathLongMath_modWithLong_withLong_(jlong x, jlong m);

FOUNDATION_EXPORT jlong ComGoogleCommonMathLongMath_gcdWithLong_withLong_(jlong a, jlong b);

FOUNDATION_EXPORT jlong ComGoogleCommonMathLongMath_checkedAddWithLong_withLong_(jlong a, jlong b);

FOUNDATION_EXPORT jlong ComGoogleCommonMathLongMath_checkedSubtractWithLong_withLong_(jlong a, jlong b);

FOUNDATION_EXPORT jlong ComGoogleCommonMathLongMath_checkedMultiplyWithLong_withLong_(jlong a, jlong b);

FOUNDATION_EXPORT jlong ComGoogleCommonMathLongMath_checkedPowWithLong_withInt_(jlong b, jint k);

FOUNDATION_EXPORT jlong ComGoogleCommonMathLongMath_saturatedAddWithLong_withLong_(jlong a, jlong b);

FOUNDATION_EXPORT jlong ComGoogleCommonMathLongMath_saturatedSubtractWithLong_withLong_(jlong a, jlong b);

FOUNDATION_EXPORT jlong ComGoogleCommonMathLongMath_saturatedMultiplyWithLong_withLong_(jlong a, jlong b);

FOUNDATION_EXPORT jlong ComGoogleCommonMathLongMath_saturatedPowWithLong_withInt_(jlong b, jint k);

FOUNDATION_EXPORT jlong ComGoogleCommonMathLongMath_factorialWithInt_(jint n);

FOUNDATION_EXPORT jlong ComGoogleCommonMathLongMath_binomialWithInt_withInt_(jint n, jint k);

FOUNDATION_EXPORT jlong ComGoogleCommonMathLongMath_multiplyFractionWithLong_withLong_withLong_(jlong x, jlong numerator, jlong denominator);

FOUNDATION_EXPORT jboolean ComGoogleCommonMathLongMath_fitsInIntWithLong_(jlong x);

FOUNDATION_EXPORT jlong ComGoogleCommonMathLongMath_meanWithLong_withLong_(jlong x, jlong y);

FOUNDATION_EXPORT jboolean ComGoogleCommonMathLongMath_isPrimeWithLong_(jlong n);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonMathLongMath)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonMathLongMath")
