//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/antoniocortes/j2objcprj/relases/j2objc/guava/build_result/java/com/google/common/math/LinearTransformation.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonMathLinearTransformation")
#ifdef RESTRICT_ComGoogleCommonMathLinearTransformation
#define INCLUDE_ALL_ComGoogleCommonMathLinearTransformation 0
#else
#define INCLUDE_ALL_ComGoogleCommonMathLinearTransformation 1
#endif
#undef RESTRICT_ComGoogleCommonMathLinearTransformation

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonMathLinearTransformation_) && (INCLUDE_ALL_ComGoogleCommonMathLinearTransformation || defined(INCLUDE_ComGoogleCommonMathLinearTransformation))
#define ComGoogleCommonMathLinearTransformation_

@class ComGoogleCommonMathLinearTransformation_LinearTransformationBuilder;

/*!
 @brief The representation of a linear transformation between real numbers <code>x</code> and <code>y</code>.
 Graphically, this is the specification of a straight line on a plane. The transformation can be
  expressed as <code>y = m * x + c</code> for finite <code>m</code> and <code>c</code>, unless it is a vertical
  transformation in which case <code>x</code> has a constant value for all <code>y</code>. In the
  non-vertical case, <code>m</code> is the slope of the transformation (and a horizontal transformation
  has zero slope).
 @author Pete Gillin
 @since 20.0
 */
@interface ComGoogleCommonMathLinearTransformation : NSObject

#pragma mark Public

- (instancetype __nonnull)init;

/*!
 @brief Builds an instance for datasets which contains <code>Double.NaN</code>.The <code>isHorizontal</code>
  and <code>isVertical</code> methods return <code>false</code> and the <code>slope</code>, and <code>transform</code>
  methods all return <code>Double.NaN</code>.
 The <code>inverse</code> method returns the same
  instance.
 */
+ (ComGoogleCommonMathLinearTransformation *)forNaN;

/*!
 @brief Builds an instance representing a horizontal transformation with a constant value of <code>y</code>.
 (The inverse of this will be a vertical transformation.)
 */
+ (ComGoogleCommonMathLinearTransformation *)horizontalWithDouble:(jdouble)y;

/*!
 @brief Returns the inverse linear transformation.The inverse of a horizontal transformation is a
  vertical transformation, and vice versa.
 The inverse of the <code>forNaN</code> transformation is
  itself. In all other cases, the inverse is a transformation such that applying both the
  original transformation and its inverse to a value gives you the original value give-or-take
  numerical errors. Calling this method multiple times on the same instance will always return
  the same instance. Calling this method on the result of calling this method on an instance will
  always return that original instance.
 */
- (ComGoogleCommonMathLinearTransformation *)inverse;

/*!
 @brief Returns whether this is a horizontal transformation.
 */
- (jboolean)isHorizontal;

/*!
 @brief Returns whether this is a vertical transformation.
 */
- (jboolean)isVertical;

/*!
 @brief Start building an instance which maps <code>x = x1</code> to <code>y = y1</code>.Both arguments must be
  finite.
 Call either <code>LinearTransformationBuilder.and</code> or <code>LinearTransformationBuilder.withSlope</code>
  on the returned object to finish building the instance.
 */
+ (ComGoogleCommonMathLinearTransformation_LinearTransformationBuilder *)mappingWithDouble:(jdouble)x1
                                                                                withDouble:(jdouble)y1;

/*!
 @brief Returns the slope of the transformation, i.e.the rate of change of <code>y</code> with respect to 
 <code>x</code>.
 This must not be called on a vertical transformation (i.e. when <code>isVertical()</code>
  is true).
 */
- (jdouble)slope;

/*!
 @brief Returns the <code>y</code> corresponding to the given <code>x</code>.This must not be called on a
  vertical transformation (i.e. when <code>isVertical()</code> is true).
 */
- (jdouble)transformWithDouble:(jdouble)x;

/*!
 @brief Builds an instance representing a vertical transformation with a constant value of <code>x</code>.
 (The inverse of this will be a horizontal transformation.)
 */
+ (ComGoogleCommonMathLinearTransformation *)verticalWithDouble:(jdouble)x;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonMathLinearTransformation)

FOUNDATION_EXPORT void ComGoogleCommonMathLinearTransformation_init(ComGoogleCommonMathLinearTransformation *self);

FOUNDATION_EXPORT ComGoogleCommonMathLinearTransformation_LinearTransformationBuilder *ComGoogleCommonMathLinearTransformation_mappingWithDouble_withDouble_(jdouble x1, jdouble y1);

FOUNDATION_EXPORT ComGoogleCommonMathLinearTransformation *ComGoogleCommonMathLinearTransformation_verticalWithDouble_(jdouble x);

FOUNDATION_EXPORT ComGoogleCommonMathLinearTransformation *ComGoogleCommonMathLinearTransformation_horizontalWithDouble_(jdouble y);

FOUNDATION_EXPORT ComGoogleCommonMathLinearTransformation *ComGoogleCommonMathLinearTransformation_forNaN(void);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonMathLinearTransformation)

#endif

#if !defined (ComGoogleCommonMathLinearTransformation_LinearTransformationBuilder_) && (INCLUDE_ALL_ComGoogleCommonMathLinearTransformation || defined(INCLUDE_ComGoogleCommonMathLinearTransformation_LinearTransformationBuilder))
#define ComGoogleCommonMathLinearTransformation_LinearTransformationBuilder_

@class ComGoogleCommonMathLinearTransformation;

/*!
 @brief This is an intermediate stage in the construction process.It is returned by <code>LinearTransformation.mapping</code>
 .
 You almost certainly don't want to keep instances around, but
  instead use method chaining. This represents a single point mapping, i.e. a mapping between one 
 <code>x</code> and <code>y</code> value pair.
 @since 20.0
 */
@interface ComGoogleCommonMathLinearTransformation_LinearTransformationBuilder : NSObject

#pragma mark Public

/*!
 @brief Finish building an instance which also maps <code>x = x2</code> to <code>y = y2</code>.These values
  must not both be identical to the values given in the first mapping.
 If only the <code>x</code>
  values are identical, the transformation is vertical. If only the <code>y</code> values are
  identical, the transformation is horizontal (i.e. the slope is zero).
 */
- (ComGoogleCommonMathLinearTransformation *)and__WithDouble:(jdouble)x2
                                                  withDouble:(jdouble)y2;

/*!
 @brief Finish building an instance with the given slope, i.e.the rate of change of <code>y</code> with
  respect to <code>x</code>.
 The slope must not be <code>NaN</code>. It may be infinite, in which case
  the transformation is vertical. (If it is zero, the transformation is horizontal.)
 */
- (ComGoogleCommonMathLinearTransformation *)withSlopeWithDouble:(jdouble)slope;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonMathLinearTransformation_LinearTransformationBuilder)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonMathLinearTransformation_LinearTransformationBuilder)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonMathLinearTransformation")
