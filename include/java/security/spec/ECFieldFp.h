//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/security/spec/ECFieldFp.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaSecuritySpecECFieldFp")
#ifdef RESTRICT_JavaSecuritySpecECFieldFp
#define INCLUDE_ALL_JavaSecuritySpecECFieldFp 0
#else
#define INCLUDE_ALL_JavaSecuritySpecECFieldFp 1
#endif
#undef RESTRICT_JavaSecuritySpecECFieldFp

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaSecuritySpecECFieldFp_) && (INCLUDE_ALL_JavaSecuritySpecECFieldFp || defined(INCLUDE_JavaSecuritySpecECFieldFp))
#define JavaSecuritySpecECFieldFp_

#define RESTRICT_JavaSecuritySpecECField 1
#define INCLUDE_JavaSecuritySpecECField 1
#include "java/security/spec/ECField.h"

@class JavaMathBigInteger;

/*!
 @brief This immutable class defines an elliptic curve (EC) prime
  finite field.
 - seealso: ECField
 @author Valerie Peng
 @since 1.5
 */
@interface JavaSecuritySpecECFieldFp : NSObject < JavaSecuritySpecECField >

#pragma mark Public

/*!
 @brief Creates an elliptic curve prime finite field
  with the specified prime <code>p</code>.
 @param p the prime.
 @throw NullPointerExceptionif <code>p</code> is null.
 @throw IllegalArgumentExceptionif <code>p</code>
  is not positive.
 */
- (instancetype __nonnull)initWithJavaMathBigInteger:(JavaMathBigInteger *)p;

/*!
 @brief Compares this prime finite field for equality with the
  specified object.
 @param obj the object to be compared.
 @return true if <code>obj</code> is an instance
  of ECFieldFp and the prime value match, false otherwise.
 */
- (jboolean)isEqual:(id)obj;

/*!
 @brief Returns the field size in bits which is size of prime p
  for this prime finite field.
 @return the field size in bits.
 */
- (jint)getFieldSize;

/*!
 @brief Returns the prime <code>p</code> of this prime finite field.
 @return the prime.
 */
- (JavaMathBigInteger *)getP;

/*!
 @brief Returns a hash code value for this prime finite field.
 @return a hash code value.
 */
- (NSUInteger)hash;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecuritySpecECFieldFp)

FOUNDATION_EXPORT void JavaSecuritySpecECFieldFp_initWithJavaMathBigInteger_(JavaSecuritySpecECFieldFp *self, JavaMathBigInteger *p);

FOUNDATION_EXPORT JavaSecuritySpecECFieldFp *new_JavaSecuritySpecECFieldFp_initWithJavaMathBigInteger_(JavaMathBigInteger *p) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecuritySpecECFieldFp *create_JavaSecuritySpecECFieldFp_initWithJavaMathBigInteger_(JavaMathBigInteger *p);

J2OBJC_TYPE_LITERAL_HEADER(JavaSecuritySpecECFieldFp)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaSecuritySpecECFieldFp")
