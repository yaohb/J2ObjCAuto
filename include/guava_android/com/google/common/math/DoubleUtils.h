//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/guava/android/build_result/java/com/google/common/math/DoubleUtils.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonMathDoubleUtils")
#ifdef RESTRICT_ComGoogleCommonMathDoubleUtils
#define INCLUDE_ALL_ComGoogleCommonMathDoubleUtils 0
#else
#define INCLUDE_ALL_ComGoogleCommonMathDoubleUtils 1
#endif
#undef RESTRICT_ComGoogleCommonMathDoubleUtils

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonMathDoubleUtils_) && (INCLUDE_ALL_ComGoogleCommonMathDoubleUtils || defined(INCLUDE_ComGoogleCommonMathDoubleUtils))
#define ComGoogleCommonMathDoubleUtils_

@class JavaMathBigInteger;

/*!
 @brief Utilities for <code>double</code> primitives.
 @author Louis Wasserman
 */
@interface ComGoogleCommonMathDoubleUtils : NSObject
@property (readonly, class) jlong SIGNIFICAND_MASK NS_SWIFT_NAME(SIGNIFICAND_MASK);
@property (readonly, class) jlong EXPONENT_MASK NS_SWIFT_NAME(EXPONENT_MASK);
@property (readonly, class) jlong SIGN_MASK NS_SWIFT_NAME(SIGN_MASK);
@property (readonly, class) jint SIGNIFICAND_BITS NS_SWIFT_NAME(SIGNIFICAND_BITS);
@property (readonly, class) jint EXPONENT_BIAS NS_SWIFT_NAME(EXPONENT_BIAS);
@property (readonly, class) jlong IMPLICIT_BIT NS_SWIFT_NAME(IMPLICIT_BIT);
@property (readonly, class) jlong ONE_BITS NS_SWIFT_NAME(ONE_BITS);

+ (jlong)SIGNIFICAND_MASK;

+ (jlong)EXPONENT_MASK;

+ (jlong)SIGN_MASK;

+ (jint)SIGNIFICAND_BITS;

+ (jint)EXPONENT_BIAS;

+ (jlong)IMPLICIT_BIT;

+ (jlong)ONE_BITS;

#pragma mark Package-Private

+ (jdouble)bigToDoubleWithJavaMathBigInteger:(JavaMathBigInteger *)x;

/*!
 @brief Returns its argument if it is non-negative, zero if it is negative.
 */
+ (jdouble)ensureNonNegativeWithDouble:(jdouble)value;

+ (jlong)getSignificandWithDouble:(jdouble)d;

+ (jboolean)isFiniteWithDouble:(jdouble)d;

+ (jboolean)isNormalWithDouble:(jdouble)d;

+ (jdouble)nextDownWithDouble:(jdouble)d;

+ (jdouble)scaleNormalizeWithDouble:(jdouble)x;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonMathDoubleUtils)

inline jlong ComGoogleCommonMathDoubleUtils_get_SIGNIFICAND_MASK(void);
#define ComGoogleCommonMathDoubleUtils_SIGNIFICAND_MASK 4503599627370495LL
J2OBJC_STATIC_FIELD_CONSTANT(ComGoogleCommonMathDoubleUtils, SIGNIFICAND_MASK, jlong)

inline jlong ComGoogleCommonMathDoubleUtils_get_EXPONENT_MASK(void);
#define ComGoogleCommonMathDoubleUtils_EXPONENT_MASK 9218868437227405312LL
J2OBJC_STATIC_FIELD_CONSTANT(ComGoogleCommonMathDoubleUtils, EXPONENT_MASK, jlong)

inline jlong ComGoogleCommonMathDoubleUtils_get_SIGN_MASK(void);
#define ComGoogleCommonMathDoubleUtils_SIGN_MASK ((jlong) 0x8000000000000000LL)
J2OBJC_STATIC_FIELD_CONSTANT(ComGoogleCommonMathDoubleUtils, SIGN_MASK, jlong)

inline jint ComGoogleCommonMathDoubleUtils_get_SIGNIFICAND_BITS(void);
#define ComGoogleCommonMathDoubleUtils_SIGNIFICAND_BITS 52
J2OBJC_STATIC_FIELD_CONSTANT(ComGoogleCommonMathDoubleUtils, SIGNIFICAND_BITS, jint)

inline jint ComGoogleCommonMathDoubleUtils_get_EXPONENT_BIAS(void);
#define ComGoogleCommonMathDoubleUtils_EXPONENT_BIAS 1023
J2OBJC_STATIC_FIELD_CONSTANT(ComGoogleCommonMathDoubleUtils, EXPONENT_BIAS, jint)

/*!
 @brief The implicit 1 bit that is omitted in significands of normal doubles.
 */
inline jlong ComGoogleCommonMathDoubleUtils_get_IMPLICIT_BIT(void);
#define ComGoogleCommonMathDoubleUtils_IMPLICIT_BIT 4503599627370496LL
J2OBJC_STATIC_FIELD_CONSTANT(ComGoogleCommonMathDoubleUtils, IMPLICIT_BIT, jlong)

inline jlong ComGoogleCommonMathDoubleUtils_get_ONE_BITS(void);
#define ComGoogleCommonMathDoubleUtils_ONE_BITS 4607182418800017408LL
J2OBJC_STATIC_FIELD_CONSTANT(ComGoogleCommonMathDoubleUtils, ONE_BITS, jlong)

FOUNDATION_EXPORT jdouble ComGoogleCommonMathDoubleUtils_nextDownWithDouble_(jdouble d);

FOUNDATION_EXPORT jlong ComGoogleCommonMathDoubleUtils_getSignificandWithDouble_(jdouble d);

FOUNDATION_EXPORT jboolean ComGoogleCommonMathDoubleUtils_isFiniteWithDouble_(jdouble d);

FOUNDATION_EXPORT jboolean ComGoogleCommonMathDoubleUtils_isNormalWithDouble_(jdouble d);

FOUNDATION_EXPORT jdouble ComGoogleCommonMathDoubleUtils_scaleNormalizeWithDouble_(jdouble x);

FOUNDATION_EXPORT jdouble ComGoogleCommonMathDoubleUtils_bigToDoubleWithJavaMathBigInteger_(JavaMathBigInteger *x);

FOUNDATION_EXPORT jdouble ComGoogleCommonMathDoubleUtils_ensureNonNegativeWithDouble_(jdouble value);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonMathDoubleUtils)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonMathDoubleUtils")
